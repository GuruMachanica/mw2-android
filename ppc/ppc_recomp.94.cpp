#include "ppc_recomp_shared.h"

PPC_FUNC_IMPL(__imp__sub_82386E08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// lwz r10,14592(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14592);
	// addi r6,r10,5468
	ctx.r6.s64 = ctx.r10.s64 + 5468;
loc_82386E14:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r9,0,r6
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r6.u32);
	ctx.r9.u64 = __builtin_bswap32(ctx.reserved.u32);
	// add r8,r3,r9
	ctx.r8.u64 = ctx.r3.u64 + ctx.r9.u64;
	// stwcx. r8,0,r6
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r6.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r8.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82386e14
	if (!ctx.cr0.eq) goto loc_82386E14;
	// add r5,r9,r3
	ctx.r5.u64 = ctx.r9.u64 + ctx.r3.u64;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// cmplwi cr6,r5,256
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 256, ctx.xer);
	// ble cr6,0x82386e70
	if (!ctx.cr6.gt) goto loc_82386E70;
	// lwz r11,14592(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14592);
	// neg r10,r3
	ctx.r10.s64 = -ctx.r3.s64;
	// addi r6,r11,5468
	ctx.r6.s64 = ctx.r11.s64 + 5468;
loc_82386E4C:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r9,0,r6
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r6.u32);
	ctx.r9.u64 = __builtin_bswap32(ctx.reserved.u32);
	// add r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stwcx. r8,0,r6
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r6.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r8.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82386e4c
	if (!ctx.cr0.eq) goto loc_82386E4C;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82386E70:
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82386E08) {
	__imp__sub_82386E08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82386E7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82386E7C) {
	__imp__sub_82386E7C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82386E80) {
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
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82386e08
	ctx.lr = 0x82386EA4;
	sub_82386E08(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82386eb8
	if (!ctx.cr6.eq) goto loc_82386EB8;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82386ee0
	goto loc_82386EE0;
loc_82386EB8:
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r5,12
	ctx.r5.s64 = 12;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823be3e8
	ctx.lr = 0x82386ECC;
	sub_823BE3E8(ctx, base);
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// addi r10,r31,6330
	ctx.r10.s64 = ctx.r31.s64 + 6330;
	// rlwinm r10,r10,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// lwz r11,14592(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14592);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_82386EE0:
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

PPC_WEAK_FUNC(sub_82386E80) {
	__imp__sub_82386E80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82386EF8) {
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
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82386e08
	ctx.lr = 0x82386F1C;
	sub_82386E08(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82386f30
	if (!ctx.cr6.eq) goto loc_82386F30;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82386f58
	goto loc_82386F58;
loc_82386F30:
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r5,11
	ctx.r5.s64 = 11;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823be3e8
	ctx.lr = 0x82386F44;
	sub_823BE3E8(ctx, base);
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// addi r10,r31,6330
	ctx.r10.s64 = ctx.r31.s64 + 6330;
	// rlwinm r10,r10,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// lwz r11,14592(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14592);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_82386F58:
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

PPC_WEAK_FUNC(sub_82386EF8) {
	__imp__sub_82386EF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82386F70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82386F78;
	__savegprlr_29(ctx, base);
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x823de028
	ctx.lr = 0x82386F80;
	__savefpr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// addi r29,r11,4608
	ctx.r29.s64 = ctx.r11.s64 + 4608;
	// fmr f29,f3
	ctx.f29.f64 = ctx.f3.f64;
	// fmr f28,f4
	ctx.f28.f64 = ctx.f4.f64;
	// lwz r11,8456(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8456);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82387050
	if (ctx.cr6.eq) goto loc_82387050;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x82387050
	if (!ctx.cr6.gt) goto loc_82387050;
	// lis r10,6
	ctx.r10.s64 = 393216;
	// lis r11,-31809
	ctx.r11.s64 = -2084634624;
	// ori r9,r10,20808
	ctx.r9.u64 = ctx.r10.u64 | 20808;
	// addi r11,r11,24448
	ctx.r11.s64 = ctx.r11.s64 + 24448;
	// lwzx r10,r11,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmplwi cr6,r10,32
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32, ctx.xer);
	// bge cr6,0x82387050
	if (!ctx.cr6.lt) goto loc_82387050;
	// addis r8,r11,6
	ctx.r8.s64 = ctx.r11.s64 + 393216;
	// lis r7,6
	ctx.r7.s64 = 393216;
	// rlwinm r9,r10,6,0,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// addi r8,r8,20812
	ctx.r8.s64 = ctx.r8.s64 + 20812;
	// ori r6,r7,20808
	ctx.r6.u64 = ctx.r7.u64 | 20808;
	// add r31,r9,r8
	ctx.r31.u64 = ctx.r9.u64 + ctx.r8.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stwx r10,r11,r6
	PPC_STORE_U32(ctx.r11.u32 + ctx.r6.u32, ctx.r10.u32);
	// bl 0x823de090
	ctx.lr = 0x82387008;
	sub_823DE090(ctx, base);
	// lwz r11,8352(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8352);
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r5,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r5.u8);
	// li r3,-1
	ctx.r3.s64 = -1;
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,28(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// lfs f13,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,32(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// lfs f12,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,36(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// stfs f31,40(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// stfs f30,4(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// stfs f29,8(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// stfs f28,12(r31)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// stb r4,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r4.u8);
	// stw r3,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r3.u32);
loc_82387050:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x823de074
	ctx.lr = 0x8238705C;
	__restfpr_28(ctx, base);
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82386F70) {
	__imp__sub_82386F70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82387060) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x82387068;
	__savegprlr_26(ctx, base);
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x823de01c
	ctx.lr = 0x82387070;
	__savefpr_25(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// fmr f27,f2
	ctx.f27.f64 = ctx.f2.f64;
	// addi r26,r11,4608
	ctx.r26.s64 = ctx.r11.s64 + 4608;
	// fmr f26,f3
	ctx.f26.f64 = ctx.f3.f64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// fmr f25,f4
	ctx.f25.f64 = ctx.f4.f64;
	// lwz r11,8456(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8456);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82387304
	if (ctx.cr6.eq) goto loc_82387304;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x82387304
	if (!ctx.cr6.gt) goto loc_82387304;
	// lis r11,-31809
	ctx.r11.s64 = -2084634624;
	// lis r10,6
	ctx.r10.s64 = 393216;
	// addi r30,r11,24448
	ctx.r30.s64 = ctx.r11.s64 + 24448;
	// ori r9,r10,20808
	ctx.r9.u64 = ctx.r10.u64 | 20808;
	// lwzx r11,r30,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// bge cr6,0x82387304
	if (!ctx.cr6.lt) goto loc_82387304;
	// lis r27,-31780
	ctx.r27.s64 = -2082734080;
	// lis r31,-31780
	ctx.r31.s64 = -2082734080;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r10,12948(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12948);
	// lwz r3,13164(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13164);
	// lfs f31,6020(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 6020);
	ctx.f31.f64 = double(temp.f32);
	// lfs f0,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x82387110
	if (ctx.cr6.gt) goto loc_82387110;
	// fadds f1,f0,f31
	ctx.f1.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// bl 0x822e1f88
	ctx.lr = 0x823870FC;
	sub_822E1F88(ctx, base);
	// lis r11,6
	ctx.r11.s64 = 393216;
	// lwz r3,13164(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13164);
	// lwz r10,12948(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12948);
	// ori r9,r11,20808
	ctx.r9.u64 = ctx.r11.u64 | 20808;
	// lwzx r11,r30,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
loc_82387110:
	// lfs f0,12(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f30.f64));
	// lfs f13,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x82387140
	if (ctx.cr6.lt) goto loc_82387140;
	// fsubs f1,f0,f31
	ctx.f1.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
	// bl 0x822e1f88
	ctx.lr = 0x8238712C;
	sub_822E1F88(ctx, base);
	// lis r11,6
	ctx.r11.s64 = 393216;
	// lwz r3,13164(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13164);
	// lwz r10,12948(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12948);
	// ori r9,r11,20808
	ctx.r9.u64 = ctx.r11.u64 | 20808;
	// lwzx r11,r30,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
loc_82387140:
	// lis r9,6
	ctx.r9.s64 = 393216;
	// rlwinm r8,r11,6,0,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// ori r7,r9,20808
	ctx.r7.u64 = ctx.r9.u64 | 20808;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addis r9,r30,6
	ctx.r9.s64 = ctx.r30.s64 + 393216;
	// addi r9,r9,20812
	ctx.r9.s64 = ctx.r9.s64 + 20812;
	// stwx r11,r30,r7
	PPC_STORE_U32(ctx.r30.u32 + ctx.r7.u32, ctx.r11.u32);
	// lfs f0,12(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fdivs f31,f12,f30
	ctx.f31.f64 = double(float(ctx.f12.f64 / ctx.f30.f64));
	// add r31,r8,r9
	ctx.r31.u64 = ctx.r8.u64 + ctx.r9.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x823de8e0
	ctx.lr = 0x82387178;
	sub_823DE8E0(ctx, base);
	// lis r6,-31780
	ctx.r6.s64 = -2082734080;
	// frsp f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = double(float(ctx.f1.f64));
	// lwz r10,12948(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12948);
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,12844(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12844);
	// lfs f11,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// fdivs f31,f11,f31
	ctx.f31.f64 = double(float(ctx.f11.f64 / ctx.f31.f64));
	// lfs f10,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f28,f10,f29
	ctx.f28.f64 = double(float(ctx.f10.f64 * ctx.f29.f64));
	// bl 0x823de090
	ctx.lr = 0x823871A8;
	sub_823DE090(ctx, base);
	// lwz r11,8352(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8352);
	// li r5,2
	ctx.r5.s64 = 2;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// stb r5,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r5.u8);
	// lis r3,-31780
	ctx.r3.s64 = -2082734080;
	// addi r10,r31,28
	ctx.r10.s64 = ctx.r31.s64 + 28;
	// lis r10,-31780
	ctx.r10.s64 = -2082734080;
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// lfs f9,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,28(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// lfs f8,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// addi r11,r31,16
	ctx.r11.s64 = ctx.r31.s64 + 16;
	// stfs f8,32(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// lwz r11,12764(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12764);
	// lfs f7,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,36(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// lfs f0,2424(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 2424);
	ctx.f0.f64 = double(temp.f32);
	// lfs f6,0(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f6,f0
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// stfs f5,16(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// lfs f4,4(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f3,f4,f0
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// stfs f3,20(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// fmr f4,f27
	ctx.f4.f64 = ctx.f27.f64;
	// lfs f2,8(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f1,f2,f0
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// stfs f1,24(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// fmr f0,f5
	ctx.f0.f64 = ctx.f5.f64;
	// lfs f13,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f12,f5,f31,f13
	ctx.f12.f64 = double(float(ctx.f5.f64 * ctx.f31.f64 + ctx.f13.f64));
	// stfs f12,28(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// lfs f11,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f9,f11,f31,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f31.f64 + ctx.f10.f64));
	// stfs f9,32(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// lfs f8,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f6,f8,f31,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f31.f64 + ctx.f7.f64));
	// stfs f6,36(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// stfs f30,40(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// stfs f27,4(r31)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// stfs f26,8(r31)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// stfs f25,12(r31)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// lfs f5,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f3,f27,f5
	ctx.f3.f64 = double(float(ctx.f27.f64 * ctx.f5.f64));
	// stfs f3,4(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// lwz r11,12684(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12684);
	// lfs f2,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f1,f2,f5
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f5.f64));
	// stfs f1,8(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// lfs f0,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f5
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f5.f64));
	// stfs f13,12(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// lfs f0,40(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,6
	ctx.r11.s64 = 393216;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ori r10,r11,22896
	ctx.r10.u64 = ctx.r11.u64 | 22896;
	// ble cr6,0x823872a0
	if (!ctx.cr6.gt) goto loc_823872A0;
	// stfsx f13,r30,r10
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + ctx.r10.u32, temp.u32);
	// b 0x823872a4
	goto loc_823872A4;
loc_823872A0:
	// stfsx f0,r30,r10
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + ctx.r10.u32, temp.u32);
loc_823872A4:
	// lis r11,6
	ctx.r11.s64 = 393216;
	// fmr f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f28.f64;
	// lis r10,-31780
	ctx.r10.s64 = -2082734080;
	// ori r9,r11,22892
	ctx.r9.u64 = ctx.r11.u64 | 22892;
	// lwz r11,13068(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13068);
	// stfsx f31,r30,r9
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + ctx.r9.u32, temp.u32);
	// lfs f0,40(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// fadds f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// stfs f13,40(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r8,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r8.u32);
	// bl 0x823de800
	ctx.lr = 0x823872D4;
	sub_823DE800(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// stfs f12,48(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x823de800
	ctx.lr = 0x823872E4;
	sub_823DE800(ctx, base);
	// lis r7,-31780
	ctx.r7.s64 = -2082734080;
	// frsp f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64));
	// li r6,-1
	ctx.r6.s64 = -1;
	// stfs f11,44(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// lwz r11,12848(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12848);
	// lbz r5,12(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// stb r5,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r5.u8);
	// stw r6,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r6.u32);
loc_82387304:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x823de068
	ctx.lr = 0x82387310;
	__restfpr_25(ctx, base);
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82387060) {
	__imp__sub_82387060(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82387314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82387314) {
	__imp__sub_82387314(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82387318) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// clrlwi r10,r4,24
	ctx.r10.u64 = ctx.r4.u32 & 0xFF;
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// std r8,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r8.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// extsw r7,r9
	ctx.r7.s64 = ctx.r9.s32;
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// std r7,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r7.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f11,f13
	ctx.f11.f64 = double(ctx.f13.s64);
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// fmadds f8,f9,f1,f10
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f1.f64 + ctx.f10.f64));
	// fctidz f7,f8
	ctx.f7.s64 = (ctx.f8.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f8.f64));
	// stfd f7,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f7.u64);
	// lbz r3,-9(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + -9);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82387318) {
	__imp__sub_82387318(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82387360) {
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
	// lis r31,-31799
	ctx.r31.s64 = -2083979264;
	// li r5,56
	ctx.r5.s64 = 56;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,14592(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14592);
	// addi r3,r11,5500
	ctx.r3.s64 = ctx.r11.s64 + 5500;
	// bl 0x823de090
	ctx.lr = 0x82387388;
	sub_823DE090(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,14592(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14592);
	// lfs f0,12168(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,5552(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 5552, temp.u32);
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

PPC_WEAK_FUNC(sub_82387360) {
	__imp__sub_82387360(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823873AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823873AC) {
	__imp__sub_823873AC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823873B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x823873B8;
	__savegprlr_29(ctx, base);
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x823de020
	ctx.lr = 0x823873C0;
	__savefpr_26(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-31799
	ctx.r29.s64 = -2083979264;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// addi r31,r11,13536
	ctx.r31.s64 = ctx.r11.s64 + 13536;
	// lwz r30,14592(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 14592);
	// lfs f31,12168(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f31.f64 = double(temp.f32);
	// lwz r9,5564(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5564);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82387764
	if (!ctx.cr6.eq) goto loc_82387764;
	// lis r9,6
	ctx.r9.s64 = 393216;
	// lwz r11,600(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 600);
	// lis r10,-31809
	ctx.r10.s64 = -2084634624;
	// ori r7,r9,20768
	ctx.r7.u64 = ctx.r9.u64 | 20768;
	// addi r8,r10,24448
	ctx.r8.s64 = ctx.r10.s64 + 24448;
	// lwzx r9,r8,r7
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8238741c
	if (ctx.cr6.lt) goto loc_8238741C;
	// addi r3,r31,484
	ctx.r3.s64 = ctx.r31.s64 + 484;
	// addi r4,r31,596
	ctx.r4.s64 = ctx.r31.s64 + 596;
	// li r5,56
	ctx.r5.s64 = 56;
	// bl 0x823de1f0
	ctx.lr = 0x82387418;
	sub_823DE1F0(ctx, base);
	// b 0x82387764
	goto loc_82387764;
loc_8238741C:
	// lwz r10,596(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 596);
	// subf. r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt 0x8238742c
	if (ctx.cr0.gt) goto loc_8238742C;
	// li r11,1
	ctx.r11.s64 = 1;
loc_8238742C:
	// subf r10,r10,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r10.s64;
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// fcfid f11,f13
	ctx.f11.f64 = double(ctx.f13.s64);
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// fdivs f0,f9,f10
	ctx.f0.f64 = double(float(ctx.f9.f64 / ctx.f10.f64));
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x82387468
	if (!ctx.cr6.gt) goto loc_82387468;
	// fmr f0,f31
	ctx.f0.f64 = ctx.f31.f64;
loc_82387468:
	// lbz r4,548(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 548);
	// lfs f13,552(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 552);
	ctx.f13.f64 = double(temp.f32);
	// lbz r3,604(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 604);
	// lfs f10,608(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 608);
	ctx.f10.f64 = double(temp.f32);
	// lbz r11,549(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 549);
	// fsubs f10,f10,f13
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// lbz r5,550(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 550);
	// subf r8,r4,r3
	ctx.r8.s64 = ctx.r3.s64 - ctx.r4.s64;
	// lbz r7,606(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 606);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lbz r9,551(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 551);
	// lfs f12,556(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 556);
	ctx.f12.f64 = double(temp.f32);
	// lbz r6,607(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 607);
	// subf r11,r5,r7
	ctx.r11.s64 = ctx.r7.s64 - ctx.r5.s64;
	// std r4,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r4.u64);
	// lfs f9,612(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 612);
	ctx.f9.f64 = double(temp.f32);
	// subf r7,r9,r6
	ctx.r7.s64 = ctx.r6.s64 - ctx.r9.s64;
	// lbz r10,605(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 605);
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// std r5,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r5.u64);
	// extsw r4,r8
	ctx.r4.s64 = ctx.r8.s32;
	// lfd f6,88(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// lfs f11,560(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 560);
	ctx.f11.f64 = double(temp.f32);
	// extsw r5,r3
	ctx.r5.s64 = ctx.r3.s32;
	// std r4,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r4.u64);
	// subf r3,r3,r10
	ctx.r3.s64 = ctx.r10.s64 - ctx.r3.s64;
	// lfs f8,616(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 616);
	ctx.f8.f64 = double(temp.f32);
	// extsw r6,r9
	ctx.r6.s64 = ctx.r9.s32;
	// fmadds f13,f10,f0,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f0.f64 + ctx.f13.f64));
	// extsw r9,r3
	ctx.r9.s64 = ctx.r3.s32;
	// fsubs f9,f9,f12
	ctx.f9.f64 = double(float(ctx.f9.f64 - ctx.f12.f64));
	// std r6,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r6.u64);
	// lfd f4,104(r1)
	ctx.f4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// std r9,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r9.u64);
	// lfd f1,104(r1)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// fsubs f2,f8,f11
	ctx.f2.f64 = double(float(ctx.f8.f64 - ctx.f11.f64));
	// extsw r7,r7
	ctx.r7.s64 = ctx.r7.s32;
	// lfd f8,112(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f7,80(r1)
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lfd f3,80(r1)
	ctx.f3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r7,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r7.u64);
	// lfd f5,96(r1)
	ctx.f5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f8,f8
	ctx.f8.f64 = double(ctx.f8.s64);
	// stfs f13,496(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 496, temp.u32);
	// fcfid f10,f1
	ctx.f10.f64 = double(ctx.f1.s64);
	// lfd f1,120(r1)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f1,f1
	ctx.f1.f64 = double(ctx.f1.s64);
	// lbz r4,624(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 624);
	// fmadds f13,f9,f0,f12
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f0.f64 + ctx.f12.f64));
	// stfs f13,500(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 500, temp.u32);
	// fcfid f7,f7
	ctx.f7.f64 = double(ctx.f7.s64);
	// lbz r5,568(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 568);
	// fmadds f13,f2,f0,f11
	ctx.f13.f64 = double(float(ctx.f2.f64 * ctx.f0.f64 + ctx.f11.f64));
	// lbz r11,620(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 620);
	// fcfid f9,f3
	ctx.f9.f64 = double(ctx.f3.s64);
	// subf r3,r5,r4
	ctx.r3.s64 = ctx.r4.s64 - ctx.r5.s64;
	// fcfid f6,f6
	ctx.f6.f64 = double(ctx.f6.s64);
	// stfs f13,504(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 504, temp.u32);
	// fcfid f5,f5
	ctx.f5.f64 = double(ctx.f5.s64);
	// extsw r10,r3
	ctx.r10.s64 = ctx.r3.s32;
	// frsp f3,f8
	ctx.f3.f64 = double(float(ctx.f8.f64));
	// lbz r4,570(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 570);
	// fcfid f4,f4
	ctx.f4.f64 = double(ctx.f4.s64);
	// std r10,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r10.u64);
	// stb r11,508(r31)
	PPC_STORE_U8(ctx.r31.u32 + 508, ctx.r11.u8);
	// lfd f11,120(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// frsp f2,f1
	ctx.f2.f64 = double(float(ctx.f1.f64));
	// lbz r3,571(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 571);
	// frsp f1,f10
	ctx.f1.f64 = double(float(ctx.f10.f64));
	// lbz r11,569(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 569);
	// frsp f10,f7
	ctx.f10.f64 = double(float(ctx.f7.f64));
	// lbz r10,625(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 625);
	// frsp f8,f6
	ctx.f8.f64 = double(float(ctx.f6.f64));
	// frsp f7,f5
	ctx.f7.f64 = double(float(ctx.f5.f64));
	// frsp f5,f9
	ctx.f5.f64 = double(float(ctx.f9.f64));
	// frsp f6,f4
	ctx.f6.f64 = double(float(ctx.f4.f64));
	// fmadds f13,f2,f0,f3
	ctx.f13.f64 = double(float(ctx.f2.f64 * ctx.f0.f64 + ctx.f3.f64));
	// fctidz f4,f13
	ctx.f4.s64 = (ctx.f13.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f13.f64));
	// lfs f13,572(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 572);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,628(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 628);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f3,f10,f0,f8
	ctx.f3.f64 = double(float(ctx.f10.f64 * ctx.f0.f64 + ctx.f8.f64));
	// fsubs f2,f12,f13
	ctx.f2.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// lbz r9,626(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 626);
	// fmadds f12,f7,f0,f6
	ctx.f12.f64 = double(float(ctx.f7.f64 * ctx.f0.f64 + ctx.f6.f64));
	// lbz r8,627(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 627);
	// fmadds f8,f1,f0,f5
	ctx.f8.f64 = double(float(ctx.f1.f64 * ctx.f0.f64 + ctx.f5.f64));
	// subf r7,r11,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r11.s64;
	// subf r6,r4,r9
	ctx.r6.s64 = ctx.r9.s64 - ctx.r4.s64;
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// subf r10,r3,r8
	ctx.r10.s64 = ctx.r8.s64 - ctx.r3.s64;
	// std r3,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r3.u64);
	// extsw r9,r7
	ctx.r9.s64 = ctx.r7.s32;
	// lfd f26,136(r1)
	ctx.f26.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// extsw r7,r6
	ctx.r7.s64 = ctx.r6.s32;
	// stfd f4,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.f4.u64);
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// std r9,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r9.u64);
	// extsw r4,r10
	ctx.r4.s64 = ctx.r10.s32;
	// std r7,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r7.u64);
	// fctidz f3,f3
	ctx.f3.s64 = (ctx.f3.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f3.f64));
	// stfd f3,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.f3.u64);
	// lbz r10,127(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 127);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// fctidz f1,f12
	ctx.f1.s64 = (ctx.f12.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f1,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.f1.u64);
	// lbz r9,127(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 127);
	// fctidz f12,f8
	ctx.f12.s64 = (ctx.f8.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f8.f64));
	// stfd f12,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.f12.u64);
	// lbz r11,127(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 127);
	// fmadds f5,f2,f0,f13
	ctx.f5.f64 = double(float(ctx.f2.f64 * ctx.f0.f64 + ctx.f13.f64));
	// stfs f5,516(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 516, temp.u32);
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f29,88(r1)
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r4,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r4.u64);
	// lfd f28,80(r1)
	ctx.f28.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r5,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r5.u64);
	// lfd f27,128(r1)
	ctx.f27.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// lfd f5,120(r1)
	ctx.f5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f4,f11
	ctx.f4.f64 = double(ctx.f11.s64);
	// lfs f10,632(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 632);
	ctx.f10.f64 = double(temp.f32);
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// lfs f12,576(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 576);
	ctx.f12.f64 = double(temp.f32);
	// lfs f8,640(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 640);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f3,f10,f12
	ctx.f3.f64 = double(float(ctx.f10.f64 - ctx.f12.f64));
	// lfs f13,584(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 584);
	ctx.f13.f64 = double(temp.f32);
	// lfs f7,644(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 644);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f1,f8,f13
	ctx.f1.f64 = double(float(ctx.f8.f64 - ctx.f13.f64));
	// lfs f10,588(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 588);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f8,f7,f10
	ctx.f8.f64 = double(float(ctx.f7.f64 - ctx.f10.f64));
	// lfd f30,96(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f30,f30
	ctx.f30.f64 = double(ctx.f30.s64);
	// lfs f9,636(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 636);
	ctx.f9.f64 = double(temp.f32);
	// lfd f7,104(r1)
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// stb r11,493(r31)
	PPC_STORE_U8(ctx.r31.u32 + 493, ctx.r11.u8);
	// fcfid f7,f7
	ctx.f7.f64 = double(ctx.f7.s64);
	// lbz r11,119(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 119);
	// lfs f11,580(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 580);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f13,f1,f0,f13
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fsubs f2,f9,f11
	ctx.f2.f64 = double(float(ctx.f9.f64 - ctx.f11.f64));
	// lfs f6,648(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 648);
	ctx.f6.f64 = double(temp.f32);
	// lfs f9,592(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 592);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f12,f3,f0,f12
	ctx.f12.f64 = double(float(ctx.f3.f64 * ctx.f0.f64 + ctx.f12.f64));
	// stfs f13,528(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 528, temp.u32);
	// fmadds f13,f8,f0,f10
	ctx.f13.f64 = double(float(ctx.f8.f64 * ctx.f0.f64 + ctx.f10.f64));
	// stfs f12,520(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 520, temp.u32);
	// stb r10,494(r31)
	PPC_STORE_U8(ctx.r31.u32 + 494, ctx.r10.u8);
	// stfs f13,532(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 532, temp.u32);
	// stb r11,492(r31)
	PPC_STORE_U8(ctx.r31.u32 + 492, ctx.r11.u8);
	// stb r9,495(r31)
	PPC_STORE_U8(ctx.r31.u32 + 495, ctx.r9.u8);
	// fsubs f6,f6,f9
	ctx.f6.f64 = double(float(ctx.f6.f64 - ctx.f9.f64));
	// frsp f4,f4
	ctx.f4.f64 = double(float(ctx.f4.f64));
	// fcfid f29,f29
	ctx.f29.f64 = double(ctx.f29.s64);
	// fcfid f28,f28
	ctx.f28.f64 = double(ctx.f28.s64);
	// fcfid f27,f27
	ctx.f27.f64 = double(ctx.f27.s64);
	// fcfid f26,f26
	ctx.f26.f64 = double(ctx.f26.s64);
	// fcfid f5,f5
	ctx.f5.f64 = double(ctx.f5.s64);
	// frsp f3,f7
	ctx.f3.f64 = double(float(ctx.f7.f64));
	// frsp f1,f30
	ctx.f1.f64 = double(float(ctx.f30.f64));
	// frsp f10,f29
	ctx.f10.f64 = double(float(ctx.f29.f64));
	// frsp f8,f28
	ctx.f8.f64 = double(float(ctx.f28.f64));
	// frsp f7,f27
	ctx.f7.f64 = double(float(ctx.f27.f64));
	// frsp f30,f26
	ctx.f30.f64 = double(float(ctx.f26.f64));
	// frsp f5,f5
	ctx.f5.f64 = double(float(ctx.f5.f64));
	// fmadds f3,f3,f0,f1
	ctx.f3.f64 = double(float(ctx.f3.f64 * ctx.f0.f64 + ctx.f1.f64));
	// fmadds f12,f2,f0,f11
	ctx.f12.f64 = double(float(ctx.f2.f64 * ctx.f0.f64 + ctx.f11.f64));
	// stfs f12,524(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 524, temp.u32);
	// fmadds f13,f6,f0,f9
	ctx.f13.f64 = double(float(ctx.f6.f64 * ctx.f0.f64 + ctx.f9.f64));
	// stfs f13,536(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 536, temp.u32);
	// fmadds f2,f10,f0,f8
	ctx.f2.f64 = double(float(ctx.f10.f64 * ctx.f0.f64 + ctx.f8.f64));
	// fmadds f1,f7,f0,f30
	ctx.f1.f64 = double(float(ctx.f7.f64 * ctx.f0.f64 + ctx.f30.f64));
	// fmadds f0,f4,f0,f5
	ctx.f0.f64 = double(float(ctx.f4.f64 * ctx.f0.f64 + ctx.f5.f64));
	// fctidz f13,f3
	ctx.f13.s64 = (ctx.f3.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f3.f64));
	// stfd f13,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.f13.u64);
	// lbz r10,143(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 143);
	// stb r10,513(r31)
	PPC_STORE_U8(ctx.r31.u32 + 513, ctx.r10.u8);
	// fctidz f12,f2
	ctx.f12.s64 = (ctx.f2.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f2.f64));
	// stfd f12,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.f12.u64);
	// lbz r9,143(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 143);
	// fctidz f11,f1
	ctx.f11.s64 = (ctx.f1.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f11,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.f11.u64);
	// lbz r8,143(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 143);
	// fctidz f10,f0
	ctx.f10.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f10,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.f10.u64);
	// lbz r11,143(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 143);
	// stb r9,514(r31)
	PPC_STORE_U8(ctx.r31.u32 + 514, ctx.r9.u8);
	// stb r8,515(r31)
	PPC_STORE_U8(ctx.r31.u32 + 515, ctx.r8.u8);
	// stb r11,512(r31)
	PPC_STORE_U8(ctx.r31.u32 + 512, ctx.r11.u8);
loc_82387764:
	// lwz r11,652(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 652);
	// addi r3,r30,5500
	ctx.r3.s64 = ctx.r30.s64 + 5500;
	// li r5,56
	ctx.r5.s64 = 56;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82387790
	if (ctx.cr6.eq) goto loc_82387790;
	// addi r4,r31,484
	ctx.r4.s64 = ctx.r31.s64 + 484;
	// bl 0x823de1f0
	ctx.lr = 0x82387780;
	sub_823DE1F0(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x823de06c
	ctx.lr = 0x8238778C;
	__restfpr_26(ctx, base);
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_82387790:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823de090
	ctx.lr = 0x82387798;
	sub_823DE090(ctx, base);
	// lwz r11,14592(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 14592);
	// stfs f31,5552(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 5552, temp.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x823de06c
	ctx.lr = 0x823877AC;
	__restfpr_26(ctx, base);
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823873B0) {
	__imp__sub_823873B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823877B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,13156(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13156);
	// lfs f0,11804(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 11804);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fsel f1,f12,f0,f13
	ctx.f1.f64 = ctx.f12.f64 >= 0.0 ? ctx.f0.f64 : ctx.f13.f64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823877B0) {
	__imp__sub_823877B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823877D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfd f30,-16(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f30.u64);
	// stfd f31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.f31.u64);
	// lfs f0,56(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,48(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lfs f11,60(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,52(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f0,f13
	ctx.f9.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fadds f8,f10,f11
	ctx.f8.f64 = double(float(ctx.f10.f64 + ctx.f11.f64));
	// lfs f7,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// lfs f0,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f6,f11,f10
	ctx.f6.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lfs f4,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// lfs f5,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// lfs f3,28(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	ctx.f3.f64 = double(temp.f32);
	// lfs f13,44(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	ctx.f13.f64 = double(temp.f32);
	// lfs f1,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f1.f64 = double(temp.f32);
	// lfs f10,36(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// lfs f2,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f2.f64 = double(temp.f32);
	// fdivs f9,f0,f9
	ctx.f9.f64 = double(float(ctx.f0.f64 / ctx.f9.f64));
	// lfs f31,60(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 60);
	ctx.f31.f64 = double(temp.f32);
	// fsubs f8,f8,f0
	ctx.f8.f64 = double(float(ctx.f8.f64 - ctx.f0.f64));
	// lfs f11,32(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	ctx.f11.f64 = double(temp.f32);
	// fdivs f6,f0,f6
	ctx.f6.f64 = double(float(ctx.f0.f64 / ctx.f6.f64));
	// lfs f0,52(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// lfs f30,48(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	ctx.f30.f64 = double(temp.f32);
	// fneg f12,f12
	ctx.f12.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// fmadds f4,f7,f8,f4
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f8.f64 + ctx.f4.f64));
	// fmadds f10,f13,f8,f10
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f8.f64 + ctx.f10.f64));
	// fmadds f1,f3,f8,f1
	ctx.f1.f64 = double(float(ctx.f3.f64 * ctx.f8.f64 + ctx.f1.f64));
	// fmadds f8,f31,f8,f0
	ctx.f8.f64 = double(float(ctx.f31.f64 * ctx.f8.f64 + ctx.f0.f64));
	// fmadds f7,f7,f12,f5
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f12.f64 + ctx.f5.f64));
	// fmadds f5,f3,f12,f2
	ctx.f5.f64 = double(float(ctx.f3.f64 * ctx.f12.f64 + ctx.f2.f64));
	// fmadds f3,f13,f12,f11
	ctx.f3.f64 = double(float(ctx.f13.f64 * ctx.f12.f64 + ctx.f11.f64));
	// fmadds f2,f31,f12,f30
	ctx.f2.f64 = double(float(ctx.f31.f64 * ctx.f12.f64 + ctx.f30.f64));
	// fmuls f12,f10,f6
	ctx.f12.f64 = double(float(ctx.f10.f64 * ctx.f6.f64));
	// stfs f12,36(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 36, temp.u32);
	// fmuls f11,f8,f6
	ctx.f11.f64 = double(float(ctx.f8.f64 * ctx.f6.f64));
	// stfs f11,52(r4)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r4.u32 + 52, temp.u32);
	// fmuls f0,f4,f6
	ctx.f0.f64 = double(float(ctx.f4.f64 * ctx.f6.f64));
	// stfs f0,4(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// fmuls f13,f1,f6
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f6.f64));
	// stfs f13,20(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 20, temp.u32);
	// fmuls f10,f7,f9
	ctx.f10.f64 = double(float(ctx.f7.f64 * ctx.f9.f64));
	// stfs f10,0(r4)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// fmuls f8,f5,f9
	ctx.f8.f64 = double(float(ctx.f5.f64 * ctx.f9.f64));
	// stfs f8,16(r4)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r4.u32 + 16, temp.u32);
	// fmuls f7,f3,f9
	ctx.f7.f64 = double(float(ctx.f3.f64 * ctx.f9.f64));
	// stfs f7,32(r4)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r4.u32 + 32, temp.u32);
	// fmuls f6,f2,f9
	ctx.f6.f64 = double(float(ctx.f2.f64 * ctx.f9.f64));
	// stfs f6,48(r4)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r4.u32 + 48, temp.u32);
	// lfd f30,-16(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lfd f31,-8(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823877D0) {
	__imp__sub_823877D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823878B0) {
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
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r30,r3,128
	ctx.r30.s64 = ctx.r3.s64 + 128;
	// addi r4,r3,64
	ctx.r4.s64 = ctx.r3.s64 + 64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822d62b8
	ctx.lr = 0x823878D8;
	sub_822D62B8(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822d6658
	ctx.lr = 0x823878E4;
	sub_822D6658(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822d5b78
	ctx.lr = 0x823878EC;
	sub_822D5B78(ctx, base);
	// lfs f0,256(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,260(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	ctx.f13.f64 = double(temp.f32);
	// addi r5,r31,192
	ctx.r5.s64 = ctx.r31.s64 + 192;
	// lfs f12,264(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	ctx.f12.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stfs f13,132(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f12,136(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// bl 0x822d62b8
	ctx.lr = 0x82387914;
	sub_822D62B8(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
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

PPC_WEAK_FUNC(sub_823878B0) {
	__imp__sub_823878B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238792C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8238792C) {
	__imp__sub_8238792C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82387930) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82387938;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r30,r3,256
	ctx.r30.s64 = ctx.r3.s64 + 256;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r30,12
	ctx.r3.s64 = ctx.r30.s64 + 12;
	// bl 0x822d7678
	ctx.lr = 0x82387950;
	sub_822D7678(ctx, base);
	// addi r29,r31,64
	ctx.r29.s64 = ctx.r31.s64 + 64;
	// lfs f3,328(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	ctx.f3.f64 = double(temp.f32);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lfs f2,324(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 324);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,320(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 320);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822d7470
	ctx.lr = 0x82387968;
	sub_822D7470(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823877d0
	ctx.lr = 0x82387974;
	sub_823877D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823878b0
	ctx.lr = 0x8238797C;
	sub_823878B0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82387930) {
	__imp__sub_82387930(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82387984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82387984) {
	__imp__sub_82387984(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82387988) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// stb r3,-4176(r11)
	PPC_STORE_U8(ctx.r11.u32 + -4176, ctx.r3.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82387988) {
	__imp__sub_82387988(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82387994) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82387994) {
	__imp__sub_82387994(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82387998) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// lwz r11,12976(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12976);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823879c0
	if (ctx.cr6.eq) goto loc_823879C0;
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// lbz r10,-4176(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -4176);
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823879c4
	if (!ctx.cr6.eq) goto loc_823879C4;
loc_823879C0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_823879C4:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82387998) {
	__imp__sub_82387998(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823879CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823879CC) {
	__imp__sub_823879CC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823879D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// lwz r11,12976(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12976);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823879f8
	if (ctx.cr6.eq) goto loc_823879F8;
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// lbz r10,-4176(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -4176);
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823879fc
	if (!ctx.cr6.eq) goto loc_823879FC;
loc_823879F8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_823879FC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823879D0) {
	__imp__sub_823879D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82387A0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82387A0C) {
	__imp__sub_82387A0C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82387A10) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x82387A18;
	__savegprlr_27(ctx, base);
	// lhz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// lhz r30,52(r4)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r4.u32 + 52);
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r10,r8,3616
	ctx.r10.s64 = ctx.r8.s64 + 3616;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,14592(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14592);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// beq cr6,0x82387ad8
	if (ctx.cr6.eq) goto loc_82387AD8;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
loc_82387A44:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,16(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// lbz r11,61(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 61);
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// beq cr6,0x82387ac4
	if (ctx.cr6.eq) goto loc_82387AC4;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r29,r11,r6
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// lwzx r9,r11,r5
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r5.u32);
	// cmplw cr6,r9,r29
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r29.u32, ctx.xer);
	// bge cr6,0x82387ad8
	if (!ctx.cr6.lt) goto loc_82387AD8;
	// lbz r29,22(r10)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r10.u32 + 22);
	// lis r12,-384
	ctx.r12.s64 = -25165824;
	// lbz r10,20(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 20);
	// clrldi r28,r7,56
	ctx.r28.u64 = ctx.r7.u64 & 0xFF;
	// rldicr r29,r29,20,63
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u64, 20) & 0xFFFFFFFFFFFFFFFF;
	// ld r4,8(r4)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r4.u32 + 8);
	// clrldi r10,r10,59
	ctx.r10.u64 = ctx.r10.u64 & 0x1F;
	// ori r12,r12,8191
	ctx.r12.u64 = ctx.r12.u64 | 8191;
	// oris r29,r29,16384
	ctx.r29.u64 = ctx.r29.u64 | 1073741824;
	// rldicr r12,r12,32,31
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 32) & 0xFFFFFFFF00000000;
	// or r10,r29,r10
	ctx.r10.u64 = ctx.r29.u64 | ctx.r10.u64;
	// oris r12,r12,49408
	ctx.r12.u64 = ctx.r12.u64 | 3238002688;
	// rldimi r28,r10,9,0
	ctx.r28.u64 = (__builtin_rotateleft64(ctx.r10.u64, 9) & 0xFFFFFFFFFFFFFE00) | (ctx.r28.u64 & 0x1FF);
	// and r4,r4,r12
	ctx.r4.u64 = ctx.r4.u64 & ctx.r12.u64;
	// rldicr r10,r28,16,47
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u64, 16) & 0xFFFFFFFFFFFF0000;
	// clrldi r27,r8,48
	ctx.r27.u64 = ctx.r8.u64 & 0xFFFF;
	// or r4,r10,r4
	ctx.r4.u64 = ctx.r10.u64 | ctx.r4.u64;
	// or r10,r4,r27
	ctx.r10.u64 = ctx.r4.u64 | ctx.r27.u64;
	// std r10,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r10.u64);
	// lwzx r10,r11,r5
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r5.u32);
	// addi r9,r10,8
	ctx.r9.s64 = ctx.r10.s64 + 8;
	// stwx r9,r11,r5
	PPC_STORE_U32(ctx.r11.u32 + ctx.r5.u32, ctx.r9.u32);
loc_82387AC4:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// addi r8,r8,2
	ctx.r8.s64 = ctx.r8.s64 + 2;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// blt cr6,0x82387a44
	if (ctx.cr6.lt) goto loc_82387A44;
loc_82387AD8:
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82387A10) {
	__imp__sub_82387A10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82387ADC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82387ADC) {
	__imp__sub_82387ADC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82387AE0) {
	PPC_FUNC_PROLOGUE();
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// lis r10,-31799
	ctx.r10.s64 = -2083979264;
	// lhz r4,52(r4)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r4.u32 + 52);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r9,r11,3616
	ctx.r9.s64 = ctx.r11.s64 + 3616;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,14592(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 14592);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// beq cr6,0x82387b84
	if (ctx.cr6.eq) goto loc_82387B84;
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// li r10,1
	ctx.r10.s64 = 1;
	// rldicr r3,r10,55,63
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u64, 55) & 0xFFFFFFFFFFFFFFFF;
loc_82387B1C:
	// cmplw cr6,r6,r7
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x82387b84
	if (!ctx.cr6.lt) goto loc_82387B84;
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// addi r31,r5,3
	ctx.r31.s64 = ctx.r5.s64 + 3;
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,16(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// lwz r30,64(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// lwz r30,8(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwzx r31,r30,r31
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x82387b70
	if (ctx.cr6.eq) goto loc_82387B70;
	// lis r12,-2048
	ctx.r12.s64 = -134217728;
	// ld r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// clrldi r31,r11,48
	ctx.r31.u64 = ctx.r11.u64 & 0xFFFF;
	// ori r12,r12,2036
	ctx.r12.u64 = ctx.r12.u64 | 2036;
	// rldicr r12,r12,53,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 53) & 0xFFFFFFFFFFFFFFFF;
	// and r10,r10,r12
	ctx.r10.u64 = ctx.r10.u64 & ctx.r12.u64;
	// or r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 | ctx.r31.u64;
	// or r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 | ctx.r3.u64;
	// std r10,0(r6)
	PPC_STORE_U64(ctx.r6.u32 + 0, ctx.r10.u64);
	// addi r6,r6,8
	ctx.r6.s64 = ctx.r6.s64 + 8;
loc_82387B70:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// cmplw cr6,r8,r4
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, ctx.xer);
	// blt cr6,0x82387b1c
	if (ctx.cr6.lt) goto loc_82387B1C;
loc_82387B84:
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82387AE0) {
	__imp__sub_82387AE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82387B94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82387B94) {
	__imp__sub_82387B94(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82387B98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf4c
	ctx.lr = 0x82387BA0;
	__savegprlr_17(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lhz r29,2(r3)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2);
	// mr r27,r9
	ctx.r27.u64 = ctx.r9.u64;
	// lbz r28,1(r3)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// lis r9,-31799
	ctx.r9.s64 = -2083979264;
	// mr r23,r8
	ctx.r23.u64 = ctx.r8.u64;
	// addi r8,r29,3616
	ctx.r8.s64 = ctx.r29.s64 + 3616;
	// lbz r22,0(r11)
	ctx.r22.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// mr r17,r10
	ctx.r17.u64 = ctx.r10.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,14592(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 14592);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82300ac8
	ctx.lr = 0x82387BEC;
	sub_82300AC8(ctx, base);
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82300ae0
	ctx.lr = 0x82387BFC;
	sub_82300AE0(ctx, base);
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// li r18,0
	ctx.r18.s64 = 0;
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// beq cr6,0x82387cf8
	if (ctx.cr6.eq) goto loc_82387CF8;
	// lwz r21,292(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
loc_82387C10:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,-3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -3, ctx.xer);
	// bne cr6,0x82387c28
	if (!ctx.cr6.eq) goto loc_82387C28;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// b 0x82387ce8
	goto loc_82387CE8;
loc_82387C28:
	// lwz r26,0(r20)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// subfic r28,r11,-68
	ctx.xer.ca = ctx.r11.u32 <= 4294967228;
	ctx.r28.s64 = -68 - ctx.r11.s64;
	// lbz r11,61(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 61);
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bne cr6,0x82387c4c
	if (!ctx.cr6.eq) goto loc_82387C4C;
	// rlwinm r11,r28,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 30) & 0x3FFFFFFF;
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// b 0x82387ce4
	goto loc_82387CE4;
loc_82387C4C:
	// rlwinm r30,r11,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r30,r17
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r17.u32);
	// lwzx r10,r30,r27
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r27.u32);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82387cf8
	if (!ctx.cr6.lt) goto loc_82387CF8;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// sth r25,12(r31)
	PPC_STORE_U16(ctx.r31.u32 + 12, ctx.r25.u16);
	// bl 0x823b90c0
	ctx.lr = 0x82387C6C;
	sub_823B90C0(ctx, base);
	// ld r8,8(r26)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r26.u32 + 8);
	// rldicr r5,r23,57,6
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r23.u64, 57) & 0xFE00000000000000;
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// li r12,63
	ctx.r12.s64 = 63;
	// lwzx r6,r30,r27
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r27.u32);
	// clrldi r10,r24,32
	ctx.r10.u64 = ctx.r24.u64 & 0xFFFFFFFF;
	// clrldi r9,r22,63
	ctx.r9.u64 = ctx.r22.u64 & 0x1;
	// rldicr r12,r12,57,6
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 57) & 0xFE00000000000000;
	// subf r3,r5,r8
	ctx.r3.s64 = ctx.r8.s64 - ctx.r5.s64;
	// rldimi r9,r10,21,35
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u64, 21) & 0x1FE00000) | (ctx.r9.u64 & 0xFFFFFFFFE01FFFFF);
	// and r11,r3,r12
	ctx.r11.u64 = ctx.r3.u64 & ctx.r12.u64;
	// oris r4,r9,40960
	ctx.r4.u64 = ctx.r9.u64 | 2684354560;
	// clrldi r7,r21,56
	ctx.r7.u64 = ctx.r21.u64 & 0xFF;
	// lis r12,-32608
	ctx.r12.s64 = -2136997888;
	// rldimi r7,r4,8,0
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r4.u64, 8) & 0xFFFFFFFFFFFFFF00) | (ctx.r7.u64 & 0xFF);
	// ori r12,r12,8191
	ctx.r12.u64 = ctx.r12.u64 | 8191;
	// rldicr r10,r7,16,47
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u64, 16) & 0xFFFFFFFFFFFF0000;
	// rldicr r12,r12,32,31
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 32) & 0xFFFFFFFF00000000;
	// or r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 | ctx.r11.u64;
	// clrldi r9,r29,48
	ctx.r9.u64 = ctx.r29.u64 & 0xFFFF;
	// oris r12,r12,49152
	ctx.r12.u64 = ctx.r12.u64 | 3221225472;
	// or r4,r7,r9
	ctx.r4.u64 = ctx.r7.u64 | ctx.r9.u64;
	// and r5,r8,r12
	ctx.r5.u64 = ctx.r8.u64 & ctx.r12.u64;
	// rlwinm r11,r28,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 30) & 0x3FFFFFFF;
	// or r3,r4,r5
	ctx.r3.u64 = ctx.r4.u64 | ctx.r5.u64;
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r3,0(r6)
	PPC_STORE_U64(ctx.r6.u32 + 0, ctx.r3.u64);
	// lwzx r11,r30,r27
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r27.u32);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stwx r11,r30,r27
	PPC_STORE_U32(ctx.r30.u32 + ctx.r27.u32, ctx.r11.u32);
loc_82387CE4:
	// add r31,r28,r31
	ctx.r31.u64 = ctx.r28.u64 + ctx.r31.u64;
loc_82387CE8:
	// addi r18,r18,1
	ctx.r18.s64 = ctx.r18.s64 + 1;
	// addi r20,r20,4
	ctx.r20.s64 = ctx.r20.s64 + 4;
	// cmplw cr6,r18,r19
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, ctx.r19.u32, ctx.xer);
	// blt cr6,0x82387c10
	if (ctx.cr6.lt) goto loc_82387C10;
loc_82387CF8:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82387B98) {
	__imp__sub_82387B98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82387D00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf64
	ctx.lr = 0x82387D08;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lhz r31,2(r3)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2);
	// lis r9,-31799
	ctx.r9.s64 = -2083979264;
	// lbz r23,1(r3)
	ctx.r23.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// addi r8,r31,3616
	ctx.r8.s64 = ctx.r31.s64 + 3616;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lbz r28,0(r11)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,14592(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 14592);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82300ac8
	ctx.lr = 0x82387D4C;
	sub_82300AC8(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82300ae0
	ctx.lr = 0x82387D5C;
	sub_82300AE0(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82387e04
	if (ctx.cr6.eq) goto loc_82387E04;
loc_82387D68:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,-3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -3, ctx.xer);
	// bne cr6,0x82387d80
	if (!ctx.cr6.eq) goto loc_82387D80;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// b 0x82387df4
	goto loc_82387DF4;
loc_82387D80:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r8,r26,3
	ctx.r8.s64 = ctx.r26.s64 + 3;
	// rlwinm r7,r11,5,0,26
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// subfic r11,r7,-68
	ctx.xer.ca = ctx.r7.u32 <= 4294967228;
	ctx.r11.s64 = -68 - ctx.r7.s64;
	// lwz r5,64(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// lwz r4,8(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// lwzx r8,r4,r6
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r6.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82387de8
	if (ctx.cr6.eq) goto loc_82387DE8;
	// cmplw cr6,r29,r25
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r25.u32, ctx.xer);
	// bge cr6,0x82387e04
	if (!ctx.cr6.lt) goto loc_82387E04;
	// lis r12,-321
	ctx.r12.s64 = -21037056;
	// ld r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// clrldi r8,r28,63
	ctx.r8.u64 = ctx.r28.u64 & 0x1;
	// ori r12,r12,65535
	ctx.r12.u64 = ctx.r12.u64 | 65535;
	// oris r5,r8,40960
	ctx.r5.u64 = ctx.r8.u64 | 2684354560;
	// rldicr r12,r12,32,31
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 32) & 0xFFFFFFFF00000000;
	// rldicr r8,r5,24,39
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u64, 24) & 0xFFFFFFFFFF000000;
	// oris r12,r12,65279
	ctx.r12.u64 = ctx.r12.u64 | 4278124544;
	// clrldi r6,r31,48
	ctx.r6.u64 = ctx.r31.u64 & 0xFFFF;
	// and r4,r7,r12
	ctx.r4.u64 = ctx.r7.u64 & ctx.r12.u64;
	// or r7,r8,r4
	ctx.r7.u64 = ctx.r8.u64 | ctx.r4.u64;
	// or r6,r7,r6
	ctx.r6.u64 = ctx.r7.u64 | ctx.r6.u64;
	// std r6,0(r29)
	PPC_STORE_U64(ctx.r29.u32 + 0, ctx.r6.u64);
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
loc_82387DE8:
	// rlwinm r10,r11,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// add r31,r10,r31
	ctx.r31.u64 = ctx.r10.u64 + ctx.r31.u64;
loc_82387DF4:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// cmplw cr6,r9,r27
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r27.u32, ctx.xer);
	// blt cr6,0x82387d68
	if (ctx.cr6.lt) goto loc_82387D68;
loc_82387E04:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82387D00) {
	__imp__sub_82387D00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82387E10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf40
	ctx.lr = 0x82387E18;
	__savegprlr_14(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,68(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// stw r7,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r7.u32);
	// mr r17,r5
	ctx.r17.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82388054
	if (ctx.cr6.eq) goto loc_82388054;
	// lwz r29,108(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// bl 0x822f19f0
	ctx.lr = 0x82387E4C;
	sub_822F19F0(ctx, base);
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// lwz r10,104(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// lbz r20,116(r31)
	ctx.r20.u64 = PPC_LOAD_U8(ctx.r31.u32 + 116);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r11,r11,13536
	ctx.r11.s64 = ctx.r11.s64 + 13536;
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// rlwinm r9,r10,0,0,6
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFE000000;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// rlwinm r22,r10,31,31,31
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x1;
	// addic r8,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// rlwinm r19,r10,24,31,31
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0x1;
	// lbz r7,928(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 928);
	// subfe r18,r8,r9
	temp.u8 = (~ctx.r8.u32 + ctx.r9.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r18.u64 = ~ctx.r8.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82387ea0
	if (ctx.cr6.eq) goto loc_82387EA0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822f1d38
	ctx.lr = 0x82387E90;
	sub_822F1D38(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82387ea4
	if (!ctx.cr6.eq) goto loc_82387EA4;
loc_82387EA0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82387EA4:
	// li r15,0
	ctx.r15.s64 = 0;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82388054
	if (ctx.cr6.eq) goto loc_82388054;
	// addi r11,r31,72
	ctx.r11.s64 = ctx.r31.s64 + 72;
	// lis r23,-31799
	ctx.r23.s64 = -2083979264;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// b 0x82387ecc
	goto loc_82387ECC;
loc_82387EC4:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r29,88(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
loc_82387ECC:
	// lbzx r11,r11,r15
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r15.u32);
	// extsb r31,r11
	ctx.r31.s64 = ctx.r11.s8;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x82388044
	if (ctx.cr6.lt) goto loc_82388044;
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822f1eb8
	ctx.lr = 0x82387EE8;
	sub_822F1EB8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82300ac8
	ctx.lr = 0x82387EF4;
	sub_82300AC8(ctx, base);
	// mr r16,r3
	ctx.r16.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82300ae0
	ctx.lr = 0x82387F04;
	sub_82300AE0(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// li r21,0
	ctx.r21.s64 = 0;
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 0, ctx.xer);
	// beq cr6,0x82388044
	if (ctx.cr6.eq) goto loc_82388044;
	// lbz r14,80(r1)
	ctx.r14.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
loc_82387F18:
	// cmplwi cr6,r14,0
	ctx.cr6.compare<uint32_t>(ctx.r14.u32, 0, ctx.xer);
	// beq cr6,0x82387f28
	if (ctx.cr6.eq) goto loc_82387F28;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r24,r11,932
	ctx.r24.s64 = ctx.r11.s64 + 932;
loc_82387F28:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,-4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -4, ctx.xer);
	// ble cr6,0x82387f50
	if (!ctx.cr6.gt) goto loc_82387F50;
	// cmpwi cr6,r11,-3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -3, ctx.xer);
	// bne cr6,0x82387f44
	if (!ctx.cr6.eq) goto loc_82387F44;
	// li r26,4
	ctx.r26.s64 = 4;
	// b 0x82388030
	goto loc_82388030;
loc_82387F44:
	// li r28,6
	ctx.r28.s64 = 6;
	// li r26,24
	ctx.r26.s64 = 24;
	// b 0x82387f60
	goto loc_82387F60;
loc_82387F50:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r28,5
	ctx.r28.s64 = 5;
	// rlwinm r10,r11,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// subfic r26,r10,-68
	ctx.xer.ca = ctx.r10.u32 <= 4294967228;
	ctx.r26.s64 = -68 - ctx.r10.s64;
loc_82387F60:
	// lwz r29,0(r24)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lbz r11,61(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 61);
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// beq cr6,0x82388030
	if (ctx.cr6.eq) goto loc_82388030;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x82387f84
	if (ctx.cr6.eq) goto loc_82387F84;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82387f84
	if (!ctx.cr6.eq) goto loc_82387F84;
	// li r11,3
	ctx.r11.s64 = 3;
loc_82387F84:
	// lwz r10,308(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// rlwinm r31,r11,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r31,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// lwzx r8,r31,r27
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r27.u32);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82388044
	if (!ctx.cr6.lt) goto loc_82388044;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// sth r25,12(r30)
	PPC_STORE_U16(ctx.r30.u32 + 12, ctx.r25.u16);
	// bl 0x823b90c0
	ctx.lr = 0x82387FA8;
	sub_823B90C0(ctx, base);
	// extsw r10,r28
	ctx.r10.s64 = ctx.r28.s32;
	// clrldi r9,r17,56
	ctx.r9.u64 = ctx.r17.u64 & 0xFF;
	// stw r3,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r3.u32);
	// clrldi r7,r19,63
	ctx.r7.u64 = ctx.r19.u64 & 0x1;
	// ld r8,8(r29)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r29.u32 + 8);
	// rldimi r9,r10,8,52
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u64, 8) & 0xF00) | (ctx.r9.u64 & 0xFFFFFFFFFFFFF0FF);
	// lwz r11,14592(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 14592);
	// clrldi r5,r18,63
	ctx.r5.u64 = ctx.r18.u64 & 0x1;
	// lwzx r6,r31,r27
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r27.u32);
	// rldimi r7,r9,1,0
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r9.u64, 1) & 0xFFFFFFFFFFFFFFFE) | (ctx.r7.u64 & 0x1);
	// rldicr r3,r22,57,6
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r22.u64, 57) & 0xFE00000000000000;
	// li r12,63
	ctx.r12.s64 = 63;
	// rldimi r5,r7,20,0
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r7.u64, 20) & 0xFFFFFFFFFFF00000) | (ctx.r5.u64 & 0xFFFFF);
	// clrldi r4,r20,56
	ctx.r4.u64 = ctx.r20.u64 & 0xFF;
	// rldicr r12,r12,57,6
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 57) & 0xFE00000000000000;
	// subf r10,r3,r8
	ctx.r10.s64 = ctx.r8.s64 - ctx.r3.s64;
	// rldimi r4,r5,8,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r5.u64, 8) & 0xFFFFFFFFFFFFFF00) | (ctx.r4.u64 & 0xFF);
	// and r5,r10,r12
	ctx.r5.u64 = ctx.r10.u64 & ctx.r12.u64;
	// lis r12,-32768
	ctx.r12.s64 = -2147483648;
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// ori r12,r12,4095
	ctx.r12.u64 = ctx.r12.u64 | 4095;
	// addi r9,r11,-14464
	ctx.r9.s64 = ctx.r11.s64 + -14464;
	// rldicr r7,r4,16,47
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u64, 16) & 0xFFFFFFFFFFFF0000;
	// rldicr r12,r12,32,31
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 32) & 0xFFFFFFFF00000000;
	// rldicl r4,r9,62,48
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u64, 62) & 0xFFFF;
	// or r3,r7,r5
	ctx.r3.u64 = ctx.r7.u64 | ctx.r5.u64;
	// oris r12,r12,49152
	ctx.r12.u64 = ctx.r12.u64 | 3221225472;
	// or r10,r3,r4
	ctx.r10.u64 = ctx.r3.u64 | ctx.r4.u64;
	// and r11,r8,r12
	ctx.r11.u64 = ctx.r8.u64 & ctx.r12.u64;
	// or r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 | ctx.r11.u64;
	// std r9,0(r6)
	PPC_STORE_U64(ctx.r6.u32 + 0, ctx.r9.u64);
	// lwzx r11,r31,r27
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r27.u32);
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// stwx r8,r31,r27
	PPC_STORE_U32(ctx.r31.u32 + ctx.r27.u32, ctx.r8.u32);
loc_82388030:
	// addi r21,r21,1
	ctx.r21.s64 = ctx.r21.s64 + 1;
	// addi r24,r24,4
	ctx.r24.s64 = ctx.r24.s64 + 4;
	// add r30,r26,r30
	ctx.r30.u64 = ctx.r26.u64 + ctx.r30.u64;
	// cmplw cr6,r21,r16
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, ctx.r16.u32, ctx.xer);
	// blt cr6,0x82387f18
	if (ctx.cr6.lt) goto loc_82387F18;
loc_82388044:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r15,r15,1
	ctx.r15.s64 = ctx.r15.s64 + 1;
	// cmplw cr6,r15,r11
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82387ec4
	if (ctx.cr6.lt) goto loc_82387EC4;
loc_82388054:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x823ddf90
	__restgprlr_14(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82387E10) {
	__imp__sub_82387E10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238805C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8238805C) {
	__imp__sub_8238805C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82388060) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf50
	ctx.lr = 0x82388068;
	__savegprlr_18(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,68(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r19,r6
	ctx.r19.u64 = ctx.r6.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x823881e0
	if (ctx.cr6.eq) goto loc_823881E0;
	// lwz r24,108(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x822f19f0
	ctx.lr = 0x82388094;
	sub_822F19F0(ctx, base);
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// rlwinm r10,r11,0,0,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFE000000;
	// rlwinm r27,r11,31,31,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// li r25,0
	ctx.r25.s64 = 0;
	// subfe r26,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r26.u64 = ~ctx.r9.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823881e0
	if (ctx.cr6.eq) goto loc_823881E0;
	// addi r20,r31,72
	ctx.r20.s64 = ctx.r31.s64 + 72;
	// lis r21,-31799
	ctx.r21.s64 = -2083979264;
loc_823880C0:
	// lbzx r11,r20,r25
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r20.u32 + ctx.r25.u32);
	// extsb r31,r11
	ctx.r31.s64 = ctx.r11.s8;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x823881d4
	if (ctx.cr6.lt) goto loc_823881D4;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x822f1eb8
	ctx.lr = 0x823880DC;
	sub_822F1EB8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	// bl 0x82300ac8
	ctx.lr = 0x823880E8;
	sub_82300AC8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x82300ae0
	ctx.lr = 0x823880F8;
	sub_82300AE0(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x823881d4
	if (ctx.cr6.eq) goto loc_823881D4;
	// lwz r7,14592(r21)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r21.u32 + 14592);
loc_82388108:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r11,-4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -4, ctx.xer);
	// ble cr6,0x82388130
	if (!ctx.cr6.gt) goto loc_82388130;
	// cmpwi cr6,r11,-3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -3, ctx.xer);
	// bne cr6,0x82388124
	if (!ctx.cr6.eq) goto loc_82388124;
	// li r9,4
	ctx.r9.s64 = 4;
	// b 0x823881c0
	goto loc_823881C0;
loc_82388124:
	// li r10,6
	ctx.r10.s64 = 6;
	// li r9,24
	ctx.r9.s64 = 24;
	// b 0x8238813c
	goto loc_8238813C;
loc_82388130:
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// li r10,5
	ctx.r10.s64 = 5;
	// subfic r9,r11,-68
	ctx.xer.ca = ctx.r11.u32 <= 4294967228;
	ctx.r9.s64 = -68 - ctx.r11.s64;
loc_8238813C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r6,r22,3
	ctx.r6.s64 = ctx.r22.s64 + 3;
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,64(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// lwz r6,8(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwzx r5,r6,r5
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r5.u32);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x823881c0
	if (ctx.cr6.eq) goto loc_823881C0;
	// cmplw cr6,r30,r19
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r19.u32, ctx.xer);
	// bge cr6,0x823881d4
	if (!ctx.cr6.lt) goto loc_823881D4;
	// ld r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// extsw r5,r10
	ctx.r5.s64 = ctx.r10.s32;
	// clrldi r4,r26,63
	ctx.r4.u64 = ctx.r26.u64 & 0x1;
	// rldicr r11,r27,57,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u64, 57) & 0xFE00000000000000;
	// li r12,63
	ctx.r12.s64 = 63;
	// rldimi r4,r5,29,31
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r5.u64, 29) & 0x1E0000000) | (ctx.r4.u64 & 0xFFFFFFFE1FFFFFFF);
	// subf r10,r11,r6
	ctx.r10.s64 = ctx.r6.s64 - ctx.r11.s64;
	// rldicr r12,r12,57,6
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 57) & 0xFE00000000000000;
	// rldicr r5,r4,24,39
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u64, 24) & 0xFFFFFFFFFF000000;
	// and r4,r10,r12
	ctx.r4.u64 = ctx.r10.u64 & ctx.r12.u64;
	// lis r12,-32737
	ctx.r12.s64 = -2145452032;
	// subf r11,r7,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r7.s64;
	// ori r12,r12,65535
	ctx.r12.u64 = ctx.r12.u64 | 65535;
	// addi r11,r11,-14464
	ctx.r11.s64 = ctx.r11.s64 + -14464;
	// rldicr r12,r12,32,31
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 32) & 0xFFFFFFFF00000000;
	// or r10,r5,r4
	ctx.r10.u64 = ctx.r5.u64 | ctx.r4.u64;
	// rldicl r5,r11,62,48
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u64, 62) & 0xFFFF;
	// oris r12,r12,65279
	ctx.r12.u64 = ctx.r12.u64 | 4278124544;
	// or r11,r10,r5
	ctx.r11.u64 = ctx.r10.u64 | ctx.r5.u64;
	// and r4,r6,r12
	ctx.r4.u64 = ctx.r6.u64 & ctx.r12.u64;
	// or r10,r11,r4
	ctx.r10.u64 = ctx.r11.u64 | ctx.r4.u64;
	// std r10,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r10.u64);
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
loc_823881C0:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// add r29,r9,r29
	ctx.r29.u64 = ctx.r9.u64 + ctx.r29.u64;
	// cmplw cr6,r8,r28
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x82388108
	if (ctx.cr6.lt) goto loc_82388108;
loc_823881D4:
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// cmplw cr6,r25,r23
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r23.u32, ctx.xer);
	// blt cr6,0x823880c0
	if (ctx.cr6.lt) goto loc_823880C0;
loc_823881E0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823ddfa0
	__restgprlr_18(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82388060) {
	__imp__sub_82388060(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823881EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823881EC) {
	__imp__sub_823881EC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823881F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// lwz r11,12892(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12892);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82388218
	if (ctx.cr6.eq) goto loc_82388218;
	// lis r11,-31771
	ctx.r11.s64 = -2082144256;
	// lwz r11,-27528(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -27528);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x8238821c
	if (ctx.cr6.eq) goto loc_8238821C;
loc_82388218:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8238821C:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823881F0) {
	__imp__sub_823881F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82388224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82388224) {
	__imp__sub_82388224(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82388228) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// lwz r11,13076(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13076);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823882c0
	if (ctx.cr6.eq) goto loc_823882C0;
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// lis r10,-31780
	ctx.r10.s64 = -2082734080;
	// lis r9,-31780
	ctx.r9.s64 = -2082734080;
	// lis r8,-31780
	ctx.r8.s64 = -2082734080;
	// lis r7,-31780
	ctx.r7.s64 = -2082734080;
	// lwz r11,12808(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12808);
	// lis r6,-31780
	ctx.r6.s64 = -2082734080;
	// lis r5,-31780
	ctx.r5.s64 = -2082734080;
	// lis r4,-31780
	ctx.r4.s64 = -2082734080;
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,504(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 504, temp.u32);
	// lwz r11,12812(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12812);
	// lfs f13,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,508(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 508, temp.u32);
	// lwz r11,13088(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 13088);
	// lfs f12,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,512(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 512, temp.u32);
	// lwz r11,12600(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12600);
	// lfs f11,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,516(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 516, temp.u32);
	// lwz r11,12636(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12636);
	// lfs f10,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,520(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 520, temp.u32);
	// lwz r11,13152(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 13152);
	// lfs f9,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,524(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 524, temp.u32);
	// lwz r11,13036(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 13036);
	// lfs f8,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,528(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 528, temp.u32);
	// lwz r11,13168(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 13168);
	// lfs f7,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,532(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 532, temp.u32);
	// b 0x82388308
	goto loc_82388308;
loc_823882C0:
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// lwz r11,12984(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12984);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823882f4
	if (ctx.cr6.eq) goto loc_823882F4;
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r11,r4,8
	ctx.r11.s64 = ctx.r4.s64 + 8;
	// addi r10,r3,500
	ctx.r10.s64 = ctx.r3.s64 + 500;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_823882E4:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x823882e4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823882E4;
	// b 0x82388308
	goto loc_82388308;
loc_823882F4:
	// li r11,0
	ctx.r11.s64 = 0;
	// std r11,504(r3)
	PPC_STORE_U64(ctx.r3.u32 + 504, ctx.r11.u64);
	// std r11,512(r3)
	PPC_STORE_U64(ctx.r3.u32 + 512, ctx.r11.u64);
	// std r11,520(r3)
	PPC_STORE_U64(ctx.r3.u32 + 520, ctx.r11.u64);
	// std r11,528(r3)
	PPC_STORE_U64(ctx.r3.u32 + 528, ctx.r11.u64);
loc_82388308:
	// b 0x823bea60
	sub_823BEA60(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82388228) {
	__imp__sub_82388228(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238830C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8238830C) {
	__imp__sub_8238830C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82388310) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,13156(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13156);
	// lfs f0,11804(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 11804);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fsel f1,f12,f0,f13
	ctx.f1.f64 = ctx.f12.f64 >= 0.0 ? ctx.f0.f64 : ctx.f13.f64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82388310) {
	__imp__sub_82388310(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82388340) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lfs f0,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r4,12
	ctx.r4.s64 = ctx.r4.s64 + 12;
	// addi r3,r3,20
	ctx.r3.s64 = ctx.r3.s64 + 20;
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// lfs f13,12(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// lfs f12,16(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// bl 0x822d7a78
	ctx.lr = 0x82388380;
	sub_822D7A78(ctx, base);
	// lis r8,-31780
	ctx.r8.s64 = -2082734080;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lwz r11,12736(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12736);
	// lfs f0,5992(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 5992);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r11,12
	ctx.r10.s64 = ctx.r11.s64 + 12;
	// lfs f13,5484(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 5484);
	ctx.f13.f64 = double(temp.f32);
	// addi r9,r11,20
	ctx.r9.s64 = ctx.r11.s64 + 20;
	// lfs f11,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,48(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// lfs f10,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,52(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// lfs f9,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// fadds f7,f8,f0
	ctx.f7.f64 = double(float(ctx.f8.f64 + ctx.f0.f64));
	// fsubs f6,f9,f7
	ctx.f6.f64 = double(float(ctx.f9.f64 - ctx.f7.f64));
	// fsel f5,f6,f9,f7
	ctx.f5.f64 = ctx.f6.f64 >= 0.0 ? ctx.f9.f64 : ctx.f7.f64;
	// stfs f5,56(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// lfs f4,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// fadds f2,f3,f0
	ctx.f2.f64 = double(float(ctx.f3.f64 + ctx.f0.f64));
	// fsubs f1,f4,f2
	ctx.f1.f64 = double(float(ctx.f4.f64 - ctx.f2.f64));
	// fsel f0,f1,f4,f2
	ctx.f0.f64 = ctx.f1.f64 >= 0.0 ? ctx.f4.f64 : ctx.f2.f64;
	// stfs f0,60(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// lfs f12,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,64(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// lfs f11,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,68(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// lfs f0,56(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x82388418
	if (ctx.cr6.gt) goto loc_82388418;
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,13156(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13156);
	// lfs f0,11804(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 11804);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fsel f0,f12,f0,f13
	ctx.f0.f64 = ctx.f12.f64 >= 0.0 ? ctx.f0.f64 : ctx.f13.f64;
loc_82388418:
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// stfs f0,72(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// lwz r11,12732(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12732);
	// lfs f0,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,76(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 76, temp.u32);
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

PPC_WEAK_FUNC(sub_82388340) {
	__imp__sub_82388340(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82388444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82388444) {
	__imp__sub_82388444(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82388448) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x823de024
	ctx.lr = 0x82388458;
	__savefpr_27(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lfs f8,548(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 548);
	ctx.f8.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f11,544(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 544);
	ctx.f11.f64 = double(temp.f32);
	// lis r9,-31780
	ctx.r9.s64 = -2082734080;
	// fmr f0,f11
	ctx.f0.f64 = ctx.f11.f64;
	// lfs f13,29424(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 29424);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f10,f13,f8
	ctx.f10.f64 = double(float(ctx.f13.f64 - ctx.f8.f64));
	// lfs f12,12168(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f12.f64 = double(temp.f32);
	// lwz r11,12980(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12980);
	// lbz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// fsel f13,f10,f13,f8
	ctx.f13.f64 = ctx.f10.f64 >= 0.0 ? ctx.f13.f64 : ctx.f8.f64;
	// fdivs f9,f12,f13
	ctx.f9.f64 = double(float(ctx.f12.f64 / ctx.f13.f64));
	// fsubs f31,f9,f12
	ctx.f31.f64 = double(float(ctx.f9.f64 - ctx.f12.f64));
	// bne cr6,0x8238849c
	if (!ctx.cr6.eq) goto loc_8238849C;
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
loc_8238849C:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f10,540(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 540);
	ctx.f10.f64 = double(temp.f32);
	// lbz r9,556(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 556);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lfs f13,2416(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2416);
	ctx.f13.f64 = double(temp.f32);
	// fadds f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 + ctx.f13.f64));
	// fnmsubs f1,f11,f13,f9
	ctx.f1.f64 = double(float(-(ctx.f11.f64 * ctx.f13.f64 - ctx.f9.f64)));
	// beq cr6,0x823884c4
	if (ctx.cr6.eq) goto loc_823884C4;
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fadds f1,f1,f12
	ctx.f1.f64 = double(float(ctx.f1.f64 + ctx.f12.f64));
loc_823884C4:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lfs f10,5484(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f10.f64 = double(temp.f32);
	// beq cr6,0x82388568
	if (ctx.cr6.eq) goto loc_82388568;
	// lfs f13,572(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 572);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,576(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 576);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f7,f13,f0
	ctx.f7.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f6,580(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 580);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f12,f0
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f4,f6,f0
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// lfs f2,564(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 564);
	ctx.f2.f64 = double(temp.f32);
	// lfs f3,560(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 560);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f11,f2,f0
	ctx.f11.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// lfs f13,5488(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5488);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f3,f0
	ctx.f12.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// lfs f9,584(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 584);
	ctx.f9.f64 = double(temp.f32);
	// lfs f6,588(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 588);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f3,f9,f0
	ctx.f3.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// lfs f2,592(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 592);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f30,f6,f0
	ctx.f30.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// fmuls f2,f2,f0
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// lfs f9,568(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 568);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f0,f9,f0
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// lfs f9,552(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 552);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f7,f7,f13
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// fmuls f29,f5,f13
	ctx.f29.f64 = double(float(ctx.f5.f64 * ctx.f13.f64));
	// fmuls f28,f4,f13
	ctx.f28.f64 = double(float(ctx.f4.f64 * ctx.f13.f64));
	// fsubs f5,f8,f9
	ctx.f5.f64 = double(float(ctx.f8.f64 - ctx.f9.f64));
	// fmr f6,f9
	ctx.f6.f64 = ctx.f9.f64;
	// fmr f9,f0
	ctx.f9.f64 = ctx.f0.f64;
	// fsubs f8,f3,f7
	ctx.f8.f64 = double(float(ctx.f3.f64 - ctx.f7.f64));
	// fsubs f30,f30,f29
	ctx.f30.f64 = double(float(ctx.f30.f64 - ctx.f29.f64));
	// fsubs f27,f2,f28
	ctx.f27.f64 = double(float(ctx.f2.f64 - ctx.f28.f64));
	// fnmsubs f4,f12,f13,f7
	ctx.f4.f64 = double(float(-(ctx.f12.f64 * ctx.f13.f64 - ctx.f7.f64)));
	// fnmsubs f3,f11,f13,f29
	ctx.f3.f64 = double(float(-(ctx.f11.f64 * ctx.f13.f64 - ctx.f29.f64)));
	// fnmsubs f2,f0,f13,f28
	ctx.f2.f64 = double(float(-(ctx.f0.f64 * ctx.f13.f64 - ctx.f28.f64)));
	// fadds f13,f8,f12
	ctx.f13.f64 = double(float(ctx.f8.f64 + ctx.f12.f64));
	// fadds f8,f30,f11
	ctx.f8.f64 = double(float(ctx.f30.f64 + ctx.f11.f64));
	// fadds f7,f27,f0
	ctx.f7.f64 = double(float(ctx.f27.f64 + ctx.f0.f64));
	// b 0x823885c8
	goto loc_823885C8;
loc_82388568:
	// lfs f11,560(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 560);
	ctx.f11.f64 = double(temp.f32);
	// addi r11,r3,560
	ctx.r11.s64 = ctx.r3.s64 + 560;
	// lfs f12,584(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 584);
	ctx.f12.f64 = double(temp.f32);
	// fmr f13,f10
	ctx.f13.f64 = ctx.f10.f64;
	// fsubs f4,f12,f11
	ctx.f4.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// lfs f12,568(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 568);
	ctx.f12.f64 = double(temp.f32);
	// lfs f2,592(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 592);
	ctx.f2.f64 = double(temp.f32);
	// fmr f8,f10
	ctx.f8.f64 = ctx.f10.f64;
	// lfs f9,588(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 588);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f2,f2,f12
	ctx.f2.f64 = double(float(ctx.f2.f64 - ctx.f12.f64));
	// lfs f3,564(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 564);
	ctx.f3.f64 = double(temp.f32);
	// fmr f12,f11
	ctx.f12.f64 = ctx.f11.f64;
	// fsubs f3,f9,f3
	ctx.f3.f64 = double(float(ctx.f9.f64 - ctx.f3.f64));
	// lfs f11,564(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 564);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,568(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 568);
	ctx.f9.f64 = double(temp.f32);
	// fmr f7,f10
	ctx.f7.f64 = ctx.f10.f64;
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f9,f9,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmr f6,f10
	ctx.f6.f64 = ctx.f10.f64;
	// fmr f5,f10
	ctx.f5.f64 = ctx.f10.f64;
	// fmuls f4,f4,f0
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// fmuls f2,f2,f0
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f3,f3,f0
	ctx.f3.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
loc_823885C8:
	// stfs f1,7840(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 7840, temp.u32);
	// stfs f1,7844(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 7844, temp.u32);
	// stfs f1,7848(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 7848, temp.u32);
	// stfs f31,7852(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 7852, temp.u32);
	// stfs f12,7856(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 7856, temp.u32);
	// stfs f11,7860(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 7860, temp.u32);
	// stfs f9,7864(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 7864, temp.u32);
	// stfs f6,7868(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 7868, temp.u32);
	// stfs f4,7872(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 7872, temp.u32);
	// stfs f3,7876(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 7876, temp.u32);
	// stfs f2,7880(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 7880, temp.u32);
	// stfs f5,7884(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 7884, temp.u32);
	// stfs f13,7888(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 7888, temp.u32);
	// stfs f8,7892(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 7892, temp.u32);
	// stfs f7,7896(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 7896, temp.u32);
	// stfs f10,7900(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 7900, temp.u32);
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x823de070
	ctx.lr = 0x82388610;
	__restfpr_27(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82388448) {
	__imp__sub_82388448(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238861C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8238861C) {
	__imp__sub_8238861C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82388620) {
	PPC_FUNC_PROLOGUE();
	// addi r4,r4,156
	ctx.r4.s64 = ctx.r4.s64 + 156;
	// addi r3,r3,648
	ctx.r3.s64 = ctx.r3.s64 + 648;
	// li r5,108
	ctx.r5.s64 = 108;
	// b 0x823de1f0
	sub_823DE1F0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82388620) {
	__imp__sub_82388620(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82388630) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r11,r4,128
	ctx.r11.s64 = ctx.r4.s64 + 128;
	// addi r10,r3,620
	ctx.r10.s64 = ctx.r3.s64 + 620;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82388640:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82388640
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82388640;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82388630) {
	__imp__sub_82388630(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82388650) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r9,0
	ctx.r9.s64 = 0;
	// stb r9,20(r3)
	PPC_STORE_U8(ctx.r3.u32 + 20, ctx.r9.u8);
	// lfs f0,12168(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,5484(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f13,4(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f13,12(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stfs f13,16(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stfs f0,24(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stfs f0,28(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stfs f0,32(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// stfs f0,36(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// stfs f0,40(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// stfs f0,44(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// stfs f0,48(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// stfs f0,52(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// stfs f0,56(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82388650) {
	__imp__sub_82388650(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823886A0) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r3,536
	ctx.r30.s64 = ctx.r3.s64 + 536;
	// lwz r11,12672(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12672);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823887a0
	if (ctx.cr6.eq) goto loc_823887A0;
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// lis r10,-31780
	ctx.r10.s64 = -2082734080;
	// lis r9,-31780
	ctx.r9.s64 = -2082734080;
	// lis r8,-31780
	ctx.r8.s64 = -2082734080;
	// lis r7,-31780
	ctx.r7.s64 = -2082734080;
	// lwz r11,12952(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12952);
	// lis r6,-31780
	ctx.r6.s64 = -2082734080;
	// lis r5,-31780
	ctx.r5.s64 = -2082734080;
	// lis r4,-31780
	ctx.r4.s64 = -2082734080;
	// lis r3,-31780
	ctx.r3.s64 = -2082734080;
	// lbz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// stb r11,536(r31)
	PPC_STORE_U8(ctx.r31.u32 + 536, ctx.r11.u8);
	// lwz r11,12864(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12864);
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,544(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 544, temp.u32);
	// lwz r11,13116(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 13116);
	// lfs f13,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,540(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 540, temp.u32);
	// lwz r11,12868(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12868);
	// lfs f12,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,548(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 548, temp.u32);
	// lwz r11,12720(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12720);
	// lfs f11,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,552(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 552, temp.u32);
	// lwz r11,12904(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12904);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// stb r10,556(r31)
	PPC_STORE_U8(ctx.r31.u32 + 556, ctx.r10.u8);
	// lwz r11,12944(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12944);
	// lfs f10,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// lwz r10,12780(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12780);
	// addi r8,r11,12
	ctx.r8.s64 = ctx.r11.s64 + 12;
	// stfs f10,584(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 584, temp.u32);
	// lwz r9,13016(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 13016);
	// lfs f9,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f9.f64 = double(temp.f32);
	// addi r8,r10,12
	ctx.r8.s64 = ctx.r10.s64 + 12;
	// stfs f9,588(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 588, temp.u32);
	// lfs f8,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f8.f64 = double(temp.f32);
	// addi r8,r9,12
	ctx.r8.s64 = ctx.r9.s64 + 12;
	// stfs f8,592(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 592, temp.u32);
	// lfs f7,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,572(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 572, temp.u32);
	// lfs f6,16(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,576(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 576, temp.u32);
	// lfs f5,20(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,580(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 580, temp.u32);
	// lfs f4,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,560(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 560, temp.u32);
	// lfs f3,16(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,564(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 564, temp.u32);
	// lfs f2,20(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,568(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 568, temp.u32);
	// b 0x823887b0
	goto loc_823887B0;
loc_823887A0:
	// addi r4,r4,44
	ctx.r4.s64 = ctx.r4.s64 + 44;
	// li r5,60
	ctx.r5.s64 = 60;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823de1f0
	ctx.lr = 0x823887B0;
	sub_823DE1F0(ctx, base);
loc_823887B0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,548(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 548);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-31780
	ctx.r10.s64 = -2082734080;
	// lfs f12,544(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 544);
	ctx.f12.f64 = double(temp.f32);
	// lis r9,-31780
	ctx.r9.s64 = -2082734080;
	// lfs f11,540(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 540);
	ctx.f11.f64 = double(temp.f32);
	// lis r8,-31780
	ctx.r8.s64 = -2082734080;
	// lbz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// lfs f0,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// fsubs f10,f0,f13
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lwz r11,12604(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12604);
	// lfs f9,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f8,f10,f9,f13
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f9.f64 + ctx.f13.f64));
	// fmuls f7,f8,f13
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// stfs f7,548(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 548, temp.u32);
	// lwz r11,12748(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12748);
	// lfs f6,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f6,f12
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f12.f64));
	// stfs f5,544(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 544, temp.u32);
	// lwz r11,12788(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12788);
	// lfs f4,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f4.f64 = double(temp.f32);
	// fadds f3,f4,f11
	ctx.f3.f64 = double(float(ctx.f4.f64 + ctx.f11.f64));
	// stfs f3,540(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 540, temp.u32);
	// bne cr6,0x82388858
	if (!ctx.cr6.eq) goto loc_82388858;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,20(r30)
	PPC_STORE_U8(ctx.r30.u32 + 20, ctx.r10.u8);
	// lfs f13,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// stfs f13,12(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// stfs f13,16(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// stfs f0,24(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 24, temp.u32);
	// stfs f0,28(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 28, temp.u32);
	// stfs f0,32(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 32, temp.u32);
	// stfs f0,36(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 36, temp.u32);
	// stfs f0,40(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 40, temp.u32);
	// stfs f0,44(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 44, temp.u32);
	// stfs f0,48(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 48, temp.u32);
	// stfs f0,52(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 52, temp.u32);
	// stfs f0,56(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 56, temp.u32);
loc_82388858:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82388448
	ctx.lr = 0x82388860;
	sub_82388448(ctx, base);
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

PPC_WEAK_FUNC(sub_823886A0) {
	__imp__sub_823886A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82388878) {
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
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,12724(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12724);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823888f8
	if (ctx.cr6.eq) goto loc_823888F8;
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// lis r10,-31780
	ctx.r10.s64 = -2082734080;
	// lis r9,-31780
	ctx.r9.s64 = -2082734080;
	// lis r8,-31780
	ctx.r8.s64 = -2082734080;
	// lis r7,-31780
	ctx.r7.s64 = -2082734080;
	// lwz r11,13028(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13028);
	// lbz r6,12(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// stb r6,596(r3)
	PPC_STORE_U8(ctx.r3.u32 + 596, ctx.r6.u8);
	// lwz r11,13172(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13172);
	// lfs f0,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,612(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 612, temp.u32);
	// lwz r11,12960(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12960);
	// lfs f13,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,608(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 608, temp.u32);
	// lwz r11,12936(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12936);
	// lfs f12,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,600(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 600, temp.u32);
	// lwz r11,12704(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12704);
	// lfs f11,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,604(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 604, temp.u32);
	// b 0x82388914
	goto loc_82388914;
loc_823888F8:
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r11,r4,100
	ctx.r11.s64 = ctx.r4.s64 + 100;
	// addi r10,r31,592
	ctx.r10.s64 = ctx.r31.s64 + 592;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82388908:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82388908
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82388908;
loc_82388914:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,608(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 608);
	ctx.f0.f64 = double(temp.f32);
	// lfs f31,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f31.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x82388968
	if (ctx.cr6.eq) goto loc_82388968;
	// lfs f1,600(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 600);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x823860e0
	ctx.lr = 0x82388930;
	sub_823860E0(ctx, base);
	// lfs f0,604(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 604);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f1,7808(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 7808, temp.u32);
	// stfs f0,7820(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 7820, temp.u32);
	// stfs f31,7816(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 7816, temp.u32);
	// lfs f0,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f0,f1
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f1.f64));
	// fdivs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// stfs f12,7812(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 7812, temp.u32);
	// lfs f11,608(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 608);
	ctx.f11.f64 = double(temp.f32);
	// stfs f31,7824(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 7824, temp.u32);
	// stfs f31,7828(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 7828, temp.u32);
	// stfs f31,7832(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 7832, temp.u32);
	// stfs f11,7836(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 7836, temp.u32);
loc_82388968:
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

PPC_WEAK_FUNC(sub_82388878) {
	__imp__sub_82388878(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82388980) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// lwz r11,12932(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12932);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823889a8
	if (!ctx.cr6.eq) goto loc_823889A8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,12168(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,616(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 616, temp.u32);
	// stfs f0,620(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 620, temp.u32);
	// blr 
	return;
loc_823889A8:
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// lwz r11,13072(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13072);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823889e0
	if (ctx.cr6.eq) goto loc_823889E0;
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// lis r10,-31780
	ctx.r10.s64 = -2082734080;
	// lwz r11,12836(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12836);
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,616(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 616, temp.u32);
	// lwz r11,12856(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12856);
	// lfs f13,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,620(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 620, temp.u32);
	// blr 
	return;
loc_823889E0:
	// lwz r11,124(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 124);
	// stw r11,616(r3)
	PPC_STORE_U32(ctx.r3.u32 + 616, ctx.r11.u32);
	// lwz r10,128(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 128);
	// stw r10,620(r3)
	PPC_STORE_U32(ctx.r3.u32 + 620, ctx.r10.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82388980) {
	__imp__sub_82388980(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823889F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823889F4) {
	__imp__sub_823889F4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823889F8) {
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
	ctx.lr = 0x82388A0C;
	__savefpr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r8,344(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 344);
	// mulli r10,r3,108
	ctx.r10.s64 = ctx.r3.s64 * 108;
	// lwz r6,336(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 336);
	// lwz r11,340(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 340);
	// lwz r7,348(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 348);
	// extsw r3,r8
	ctx.r3.s64 = ctx.r8.s32;
	// extsw r8,r6
	ctx.r8.s64 = ctx.r6.s32;
	// std r3,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r3.u64);
	// lfd f13,104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// std r8,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r8.u64);
	// lfd f11,104(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// extsw r5,r11
	ctx.r5.s64 = ctx.r11.s32;
	// fcfid f7,f13
	ctx.f7.f64 = double(ctx.f13.s64);
	// extsw r11,r7
	ctx.r11.s64 = ctx.r7.s32;
	// std r5,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r5.u64);
	// lfd f0,96(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lfd f12,96(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// lis r9,-31771
	ctx.r9.s64 = -2082144256;
	// fcfid f9,f0
	ctx.f9.f64 = double(ctx.f0.s64);
	// frsp f31,f10
	ctx.f31.f64 = double(float(ctx.f10.f64));
	// addi r11,r9,-27424
	ctx.r11.s64 = ctx.r9.s64 + -27424;
	// fcfid f6,f12
	ctx.f6.f64 = double(ctx.f12.s64);
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// frsp f30,f9
	ctx.f30.f64 = double(float(ctx.f9.f64));
	// frsp f29,f7
	ctx.f29.f64 = double(float(ctx.f7.f64));
	// stw r31,760(r4)
	PPC_STORE_U32(ctx.r4.u32 + 760, ctx.r31.u32);
	// lfsx f8,r10,r11
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f8.f64 = double(temp.f32);
	// fcmpu cr6,f8,f31
	ctx.cr6.compare(ctx.f8.f64, ctx.f31.f64);
	// frsp f28,f6
	ctx.f28.f64 = double(float(ctx.f6.f64));
	// bne cr6,0x82388ab4
	if (!ctx.cr6.eq) goto loc_82388AB4;
	// lfs f0,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bne cr6,0x82388ab4
	if (!ctx.cr6.eq) goto loc_82388AB4;
	// lfs f0,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// bne cr6,0x82388ab4
	if (!ctx.cr6.eq) goto loc_82388AB4;
	// lfs f0,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f28
	ctx.cr6.compare(ctx.f0.f64, ctx.f28.f64);
	// beq cr6,0x82388af0
	if (ctx.cr6.eq) goto loc_82388AF0;
loc_82388AB4:
	// bl 0x82390a98
	ctx.lr = 0x82388AB8;
	sub_82390A98(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmr f4,f28
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f28.f64;
	// li r9,-1
	ctx.r9.s64 = -1;
	// fmr f3,f29
	ctx.f3.f64 = ctx.f29.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// lfs f8,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f8.f64 = double(temp.f32);
	// lfs f6,5484(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f6.f64 = double(temp.f32);
	// fmr f7,f8
	ctx.f7.f64 = ctx.f8.f64;
	// fmr f5,f6
	ctx.f5.f64 = ctx.f6.f64;
	// bl 0x823bff70
	ctx.lr = 0x82388AF0;
	sub_823BFF70(ctx, base);
loc_82388AF0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// addi r12,r1,-16
	ctx.r12.s64 = ctx.r1.s64 + -16;
	// bl 0x823de074
	ctx.lr = 0x82388AFC;
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

PPC_WEAK_FUNC(sub_823889F8) {
	__imp__sub_823889F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82388B0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82388B0C) {
	__imp__sub_82388B0C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82388B10) {
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
	// bl 0x823b63e0
	ctx.lr = 0x82388B20;
	sub_823B63E0(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82388B10) {
	__imp__sub_82388B10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82388B38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// addi r10,r11,13536
	ctx.r10.s64 = ctx.r11.s64 + 13536;
	// stw r3,768(r10)
	PPC_STORE_U32(ctx.r10.u32 + 768, ctx.r3.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82388B38) {
	__imp__sub_82388B38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82388B48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31780
	ctx.r10.s64 = -2082734080;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lwz r10,12800(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12800);
	// lbz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 12);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82388bf8
	if (ctx.cr6.eq) goto loc_82388BF8;
	// lis r10,-31780
	ctx.r10.s64 = -2082734080;
	// lwz r10,12756(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12756);
	// lbz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 12);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82388bf8
	if (ctx.cr6.eq) goto loc_82388BF8;
	// lis r10,-31780
	ctx.r10.s64 = -2082734080;
	// lwz r10,12988(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12988);
	// lbz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 12);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82388bf8
	if (ctx.cr6.eq) goto loc_82388BF8;
	// lis r10,-31771
	ctx.r10.s64 = -2082144256;
	// lwz r10,-27528(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -27528);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x82388bf8
	if (!ctx.cr6.eq) goto loc_82388BF8;
	// lis r6,-31799
	ctx.r6.s64 = -2083979264;
	// addi r5,r4,1398
	ctx.r5.s64 = ctx.r4.s64 + 1398;
	// li r9,1
	ctx.r9.s64 = 1;
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r4,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r8,14592(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 14592);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,26
	ctx.r3.s64 = 26;
	// stwx r9,r5,r8
	PPC_STORE_U32(ctx.r5.u32 + ctx.r8.u32, ctx.r9.u32);
	// lwz r8,14592(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 14592);
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// stw r9,5672(r8)
	PPC_STORE_U32(ctx.r8.u32 + 5672, ctx.r9.u32);
	// lwz r8,14592(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 14592);
	// add r5,r10,r8
	ctx.r5.u64 = ctx.r10.u64 + ctx.r8.u64;
	// stw r9,5676(r5)
	PPC_STORE_U32(ctx.r5.u32 + 5676, ctx.r9.u32);
	// lwz r10,14592(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 14592);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x823b7ac8
	ctx.lr = 0x82388BF8;
	sub_823B7AC8(ctx, base);
loc_82388BF8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82388B48) {
	__imp__sub_82388B48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82388C08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82388C10;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x823c3928
	ctx.lr = 0x82388C1C;
	sub_823C3928(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r30,r29,3696
	ctx.r30.s64 = ctx.r29.s64 + 3696;
loc_82388C24:
	// addi r4,r30,112
	ctx.r4.s64 = ctx.r30.s64 + 112;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823b01a8
	ctx.lr = 0x82388C30;
	sub_823B01A8(ctx, base);
	// addi r4,r31,6
	ctx.r4.s64 = ctx.r31.s64 + 6;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82388b48
	ctx.lr = 0x82388C3C;
	sub_82388B48(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,488
	ctx.r30.s64 = ctx.r30.s64 + 488;
	// cmplwi cr6,r31,2
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 2, ctx.xer);
	// blt cr6,0x82388c24
	if (ctx.cr6.lt) goto loc_82388C24;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82388C08) {
	__imp__sub_82388C08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82388C54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82388C54) {
	__imp__sub_82388C54(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82388C58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82388C60;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31799
	ctx.r31.s64 = -2083979264;
	// lis r10,-31780
	ctx.r10.s64 = -2082734080;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r30,1
	ctx.r30.s64 = 1;
	// lwz r11,14592(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14592);
	// stw r29,7920(r11)
	PPC_STORE_U32(ctx.r11.u32 + 7920, ctx.r29.u32);
	// lwz r11,12892(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12892);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82388ca4
	if (ctx.cr6.eq) goto loc_82388CA4;
	// lis r11,-31771
	ctx.r11.s64 = -2082144256;
	// lwz r11,-27528(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -27528);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// beq cr6,0x82388ca8
	if (ctx.cr6.eq) goto loc_82388CA8;
loc_82388CA4:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82388CA8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82388d30
	if (ctx.cr6.eq) goto loc_82388D30;
	// bl 0x8239b648
	ctx.lr = 0x82388CB8;
	sub_8239B648(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82388d30
	if (!ctx.cr6.eq) goto loc_82388D30;
	// lis r11,-31809
	ctx.r11.s64 = -2084634624;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r28,r11,24448
	ctx.r28.s64 = ctx.r11.s64 + 24448;
	// addis r11,r28,6
	ctx.r11.s64 = ctx.r28.s64 + 393216;
	// addi r4,r11,20812
	ctx.r4.s64 = ctx.r11.s64 + 20812;
	// bl 0x8239d800
	ctx.lr = 0x82388CDC;
	sub_8239D800(ctx, base);
	// lwz r10,14592(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14592);
	// addis r11,r28,6
	ctx.r11.s64 = ctx.r28.s64 + 393216;
	// srawi r8,r3,5
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	ctx.r8.s64 = ctx.r3.s32 >> 5;
	// addi r9,r11,19840
	ctx.r9.s64 = ctx.r11.s64 + 19840;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,5388(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 5388);
	// clrlwi r6,r3,27
	ctx.r6.u64 = ctx.r3.u32 & 0x1F;
	// rlwinm r8,r7,7,0,24
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 7) & 0xFFFFFF80;
	// addis r7,r28,6
	ctx.r7.s64 = ctx.r28.s64 + 393216;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// slw r5,r30,r6
	ctx.r5.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r30.u32 << (ctx.r6.u8 & 0x3F));
	// lwzx r4,r11,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// addi r8,r7,19712
	ctx.r8.s64 = ctx.r7.s64 + 19712;
	// or r3,r4,r5
	ctx.r3.u64 = ctx.r4.u64 | ctx.r5.u64;
	// stwx r3,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r3.u32);
	// lwzx r9,r11,r8
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// or r7,r9,r5
	ctx.r7.u64 = ctx.r9.u64 | ctx.r5.u64;
	// stwx r7,r11,r8
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r7.u32);
	// stw r29,7916(r10)
	PPC_STORE_U32(ctx.r10.u32 + 7916, ctx.r29.u32);
	// lwz r11,14592(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14592);
	// stw r30,7920(r11)
	PPC_STORE_U32(ctx.r11.u32 + 7920, ctx.r30.u32);
loc_82388D30:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82388C58) {
	__imp__sub_82388C58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82388D38) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31809
	ctx.r10.s64 = -2084634624;
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r10,24448
	ctx.r9.s64 = ctx.r10.s64 + 24448;
	// addis r10,r9,10
	ctx.r10.s64 = ctx.r9.s64 + 655360;
	// addi r10,r10,-28268
	ctx.r10.s64 = ctx.r10.s64 + -28268;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82388D38) {
	__imp__sub_82388D38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82388D54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82388D54) {
	__imp__sub_82388D54(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82388D58) {
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
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,12892(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12892);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82388d94
	if (ctx.cr6.eq) goto loc_82388D94;
	// lis r11,-31771
	ctx.r11.s64 = -2082144256;
	// lwz r11,-27528(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -27528);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82388d98
	if (ctx.cr6.eq) goto loc_82388D98;
loc_82388D94:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82388D98:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82388dbc
	if (!ctx.cr6.eq) goto loc_82388DBC;
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
loc_82388DBC:
	// bl 0x8239b708
	ctx.lr = 0x82388DC0;
	sub_8239B708(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823c3bc8
	ctx.lr = 0x82388DC8;
	sub_823C3BC8(ctx, base);
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

PPC_WEAK_FUNC(sub_82388D58) {
	__imp__sub_82388D58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82388DDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82388DDC) {
	__imp__sub_82388DDC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82388DE0) {
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
	// bl 0x823c4620
	ctx.lr = 0x82388DF8;
	sub_823C4620(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823c47a8
	ctx.lr = 0x82388E00;
	sub_823C47A8(ctx, base);
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

PPC_WEAK_FUNC(sub_82388DE0) {
	__imp__sub_82388DE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82388E14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82388E14) {
	__imp__sub_82388E14(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82388E18) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 5, ctx.xer);
	// bne cr6,0x82388ed0
	if (!ctx.cr6.eq) goto loc_82388ED0;
	// lbz r11,8468(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8468);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82388eb0
	if (ctx.cr6.eq) goto loc_82388EB0;
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// lwz r10,14592(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14592);
	// lwz r9,7920(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 7920);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82388eb0
	if (ctx.cr6.eq) goto loc_82388EB0;
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// lwz r11,12848(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12848);
	// lbz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82388eb0
	if (ctx.cr6.eq) goto loc_82388EB0;
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r8,r11,4608
	ctx.r8.s64 = ctx.r11.s64 + 4608;
	// lwz r11,8456(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8456);
	// lwz r7,32(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// srawi r11,r7,5
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r7.s32 >> 5;
	// clrlwi r6,r7,27
	ctx.r6.u64 = ctx.r7.u32 & 0x1F;
	// addi r5,r11,1352
	ctx.r5.s64 = ctx.r11.s64 + 1352;
	// slw r3,r9,r6
	ctx.r3.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r6.u8 & 0x3F));
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// and r9,r3,r10
	ctx.r9.u64 = ctx.r3.u64 & ctx.r10.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82388ed0
	if (ctx.cr6.eq) goto loc_82388ED0;
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// addi r10,r11,13536
	ctx.r10.s64 = ctx.r11.s64 + 13536;
	// lbz r9,709(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 709);
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r7,r8,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// xori r11,r7,1
	ctx.r11.u64 = ctx.r7.u64 ^ 1;
	// addi r3,r11,7
	ctx.r3.s64 = ctx.r11.s64 + 7;
	// blr 
	return;
loc_82388EB0:
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// addi r10,r11,13536
	ctx.r10.s64 = ctx.r11.s64 + 13536;
	// lbz r9,709(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 709);
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r7,r8,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// xori r11,r7,1
	ctx.r11.u64 = ctx.r7.u64 ^ 1;
	// addi r3,r11,5
	ctx.r3.s64 = ctx.r11.s64 + 5;
	// blr 
	return;
loc_82388ED0:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82388E18) {
	__imp__sub_82388E18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82388ED8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,480(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 480, temp.u32);
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,484(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 484, temp.u32);
	// lfs f12,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,488(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 488, temp.u32);
	// lfs f11,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,492(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 492, temp.u32);
	// lfs f10,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,496(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 496, temp.u32);
	// lfs f9,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,500(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 500, temp.u32);
	// lfs f8,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,504(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 504, temp.u32);
	// lfs f7,28(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,508(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 508, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82388ED8) {
	__imp__sub_82388ED8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82388F1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82388F1C) {
	__imp__sub_82388F1C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82388F20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// lis r9,-31799
	ctx.r9.s64 = -2083979264;
	// addi r8,r11,13536
	ctx.r8.s64 = ctx.r11.s64 + 13536;
	// lwz r11,896(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 896);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r10,14592(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 14592);
	// lwz r11,896(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 896);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,896(r8)
	PPC_STORE_U32(ctx.r8.u32 + 896, ctx.r11.u32);
	// stw r11,5564(r10)
	PPC_STORE_U32(ctx.r10.u32 + 5564, ctx.r11.u32);
	// lwz r11,14592(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 14592);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r7,5560(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5560, ctx.r7.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82388F20) {
	__imp__sub_82388F20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82388F58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// mulli r10,r4,8496
	ctx.r10.s64 = ctx.r4.s64 * 8496;
	// lwz r11,14592(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14592);
	// lwz r11,5568(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5568);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82388F58) {
	__imp__sub_82388F58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82388F74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82388F74) {
	__imp__sub_82388F74(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82388F78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x82388F80;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31775
	ctx.r11.s64 = -2082406400;
	// addi r26,r3,7120
	ctx.r26.s64 = ctx.r3.s64 + 7120;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// addi r4,r11,-21248
	ctx.r4.s64 = ctx.r11.s64 + -21248;
	// li r5,1344
	ctx.r5.s64 = 1344;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x823de1f0
	ctx.lr = 0x82388FAC;
	sub_823DE1F0(ctx, base);
	// li r11,10
	ctx.r11.s64 = 10;
	// lis r8,-31799
	ctx.r8.s64 = -2083979264;
	// lis r10,-31809
	ctx.r10.s64 = -2084634624;
	// addi r9,r31,380
	ctx.r9.s64 = ctx.r31.s64 + 380;
	// addi r27,r10,24448
	ctx.r27.s64 = ctx.r10.s64 + 24448;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addis r10,r27,6
	ctx.r10.s64 = ctx.r27.s64 + 393216;
	// addi r10,r10,20764
	ctx.r10.s64 = ctx.r10.s64 + 20764;
	// lwz r11,14592(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 14592);
	// stw r11,8460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8460, ctx.r11.u32);
loc_82388FD4:
	// lwzu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stwu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x82388fd4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82388FD4;
	// li r5,336
	ctx.r5.s64 = 336;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823de1f0
	ctx.lr = 0x82388FF0;
	sub_823DE1F0(ctx, base);
	// lwz r9,264(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 264);
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// addi r10,r30,264
	ctx.r10.s64 = ctx.r30.s64 + 264;
	// li r29,1
	ctx.r29.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r9.u32);
	// lwz r8,268(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 268);
	// stw r8,340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 340, ctx.r8.u32);
	// lwz r7,272(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 272);
	// stw r7,344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 344, ctx.r7.u32);
	// lwz r6,276(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 276);
	// stw r6,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r6.u32);
	// lwz r5,280(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 280);
	// stw r5,352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 352, ctx.r5.u32);
	// lwz r4,284(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 284);
	// stw r4,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r4.u32);
	// lwz r3,288(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 288);
	// stw r3,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r3.u32);
	// lwz r9,292(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 292);
	// stw r9,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r9.u32);
	// lwz r8,296(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 296);
	// stw r8,368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 368, ctx.r8.u32);
	// lwz r7,300(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 300);
	// stw r7,372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 372, ctx.r7.u32);
	// lwz r6,304(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 304);
	// stw r6,376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 376, ctx.r6.u32);
	// lwz r5,308(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 308);
	// stw r5,380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 380, ctx.r5.u32);
	// stw r28,424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 424, ctx.r28.u32);
	// lfs f0,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,436(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 436, temp.u32);
	// lbz r4,9(r30)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + 9);
	// stb r4,429(r31)
	PPC_STORE_U8(ctx.r31.u32 + 429, ctx.r4.u8);
	// lbz r3,10(r30)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r30.u32 + 10);
	// stb r3,430(r31)
	PPC_STORE_U8(ctx.r31.u32 + 430, ctx.r3.u8);
	// lwz r11,12768(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12768);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82389094
	if (!ctx.cr6.eq) goto loc_82389094;
	// stb r10,431(r31)
	PPC_STORE_U8(ctx.r31.u32 + 431, ctx.r10.u8);
	// b 0x823890c8
	goto loc_823890C8;
loc_82389094:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x823890a4
	if (!ctx.cr6.eq) goto loc_823890A4;
	// stb r29,431(r31)
	PPC_STORE_U8(ctx.r31.u32 + 431, ctx.r29.u8);
	// b 0x823890c8
	goto loc_823890C8;
loc_823890A4:
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// addi r9,r11,13536
	ctx.r9.s64 = ctx.r11.s64 + 13536;
	// lbz r8,928(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 928);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x823890c0
	if (ctx.cr6.eq) goto loc_823890C0;
	// stb r10,431(r31)
	PPC_STORE_U8(ctx.r31.u32 + 431, ctx.r10.u8);
	// b 0x823890c8
	goto loc_823890C8;
loc_823890C0:
	// lbz r11,11(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 11);
	// stb r11,431(r31)
	PPC_STORE_U8(ctx.r31.u32 + 431, ctx.r11.u8);
loc_823890C8:
	// lis r9,-31799
	ctx.r9.s64 = -2083979264;
	// stb r10,428(r31)
	PPC_STORE_U8(ctx.r31.u32 + 428, ctx.r10.u8);
	// addis r11,r27,6
	ctx.r11.s64 = ctx.r27.s64 + 393216;
	// addi r5,r9,4608
	ctx.r5.s64 = ctx.r9.s64 + 4608;
	// li r8,6
	ctx.r8.s64 = 6;
	// addi r7,r30,128
	ctx.r7.s64 = ctx.r30.s64 + 128;
	// addi r6,r31,620
	ctx.r6.s64 = ctx.r31.s64 + 620;
	// lwz r9,8456(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8456);
	// lwz r4,32(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// stw r4,432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 432, ctx.r4.u32);
	// std r10,19712(r11)
	PPC_STORE_U64(ctx.r11.u32 + 19712, ctx.r10.u64);
	// std r10,19720(r11)
	PPC_STORE_U64(ctx.r11.u32 + 19720, ctx.r10.u64);
	// std r10,19728(r11)
	PPC_STORE_U64(ctx.r11.u32 + 19728, ctx.r10.u64);
	// std r10,19736(r11)
	PPC_STORE_U64(ctx.r11.u32 + 19736, ctx.r10.u64);
loc_82389104:
	// lwzu r11,4(r7)
	ea = 4 + ctx.r7.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r7.u32 = ea;
	// stwu r11,4(r6)
	ea = 4 + ctx.r6.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r6.u32 = ea;
	// bdnz 0x82389104
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82389104;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x823b9858
	ctx.lr = 0x82389118;
	sub_823B9858(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x823c54f0
	ctx.lr = 0x82389120;
	sub_823C54F0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82388228
	ctx.lr = 0x8238912C;
	sub_82388228(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823886a0
	ctx.lr = 0x82389138;
	sub_823886A0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82388878
	ctx.lr = 0x82389144;
	sub_82388878(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82388980
	ctx.lr = 0x82389150;
	sub_82388980(ctx, base);
	// addi r4,r30,156
	ctx.r4.s64 = ctx.r30.s64 + 156;
	// addi r3,r31,648
	ctx.r3.s64 = ctx.r31.s64 + 648;
	// li r5,108
	ctx.r5.s64 = 108;
	// bl 0x823de1f0
	ctx.lr = 0x82389160;
	sub_823DE1F0(ctx, base);
	// stb r29,8468(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8468, ctx.r29.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82388F78) {
	__imp__sub_82388F78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238916C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8238916C) {
	__imp__sub_8238916C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82389170) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// lis r10,-31809
	ctx.r10.s64 = -2084634624;
	// li r5,128
	ctx.r5.s64 = 128;
	// addi r9,r10,24448
	ctx.r9.s64 = ctx.r10.s64 + 24448;
	// lwz r11,14592(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14592);
	// addis r10,r9,6
	ctx.r10.s64 = ctx.r9.s64 + 393216;
	// addis r9,r9,6
	ctx.r9.s64 = ctx.r9.s64 + 393216;
	// addi r10,r10,19840
	ctx.r10.s64 = ctx.r10.s64 + 19840;
	// addi r4,r9,19712
	ctx.r4.s64 = ctx.r9.s64 + 19712;
	// lwz r8,5388(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5388);
	// rlwinm r11,r8,7,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 7) & 0xFFFFFF80;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x823de1f0
	ctx.lr = 0x823891B0;
	sub_823DE1F0(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82389170) {
	__imp__sub_82389170(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823891C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x823891C8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// addi r31,r11,4608
	ctx.r31.s64 = ctx.r11.s64 + 4608;
	// addi r28,r9,29428
	ctx.r28.s64 = ctx.r9.s64 + 29428;
	// ble cr6,0x82389274
	if (!ctx.cr6.gt) goto loc_82389274;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82389274
	if (ctx.cr6.eq) goto loc_82389274;
	// lis r10,-31799
	ctx.r10.s64 = -2083979264;
	// lhz r9,2(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// lwz r8,8456(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8456);
	// rotlwi r7,r9,3
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// lwz r11,13412(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13412);
	// lwz r10,48(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// lwz r6,92(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// ldx r11,r7,r6
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r7.u32 + ctx.r6.u32);
	// rldicl r5,r11,7,57
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u64, 7) & 0x7F;
	// clrlwi r30,r5,26
	ctx.r30.u64 = ctx.r5.u32 & 0x3F;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82389240
	if (!ctx.cr6.eq) goto loc_82389240;
loc_82389234:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_82389240:
	// bge cr6,0x82389274
	if (!ctx.cr6.lt) goto loc_82389274;
	// rldicl r11,r11,34,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 34) & 0x3FFFFFFFF;
	// rlwinm r9,r11,1,19,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1FFE;
	// lhzx r3,r9,r31
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r31.u32);
	// bl 0x821741f8
	ctx.lr = 0x82389254;
	sub_821741F8(ctx, base);
	// lwz r11,8456(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8456);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r7,48(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r5,0(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// bl 0x82280b08
	ctx.lr = 0x82389274;
	sub_82280B08(ctx, base);
loc_82389274:
	// lwz r10,40(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// lwz r11,36(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x823892f0
	if (ctx.cr6.eq) goto loc_823892F0;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lis r8,-31777
	ctx.r8.s64 = -2082537472;
	// lwz r7,8456(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8456);
	// addi r10,r8,-19840
	ctx.r10.s64 = ctx.r8.s64 + -19840;
	// addi r6,r10,256
	ctx.r6.s64 = ctx.r10.s64 + 256;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// lhz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// rlwinm r4,r5,31,1,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 31) & 0x7FFFFFFF;
	// lwz r10,48(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 48);
	// lbzx r30,r4,r6
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r4.u32 + ctx.r6.u32);
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82389234
	if (ctx.cr6.eq) goto loc_82389234;
	// bge cr6,0x823892f0
	if (!ctx.cr6.lt) goto loc_823892F0;
	// lhz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// rlwinm r9,r11,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lhzx r3,r9,r31
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r31.u32);
	// bl 0x821741f8
	ctx.lr = 0x823892D0;
	sub_821741F8(ctx, base);
	// lwz r11,8456(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8456);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r7,48(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r5,0(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// bl 0x82280b08
	ctx.lr = 0x823892F0;
	sub_82280B08(ctx, base);
loc_823892F0:
	// lwz r10,32(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// lwz r11,28(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82389358
	if (ctx.cr6.eq) goto loc_82389358;
	// ld r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// lwz r10,8456(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8456);
	// rldicl r9,r11,7,57
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u64, 7) & 0x7F;
	// clrlwi r30,r9,26
	ctx.r30.u64 = ctx.r9.u32 & 0x3F;
	// lwz r10,48(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82389234
	if (ctx.cr6.eq) goto loc_82389234;
	// bge cr6,0x82389358
	if (!ctx.cr6.lt) goto loc_82389358;
	// rldicl r11,r11,34,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 34) & 0x3FFFFFFFF;
	// rlwinm r9,r11,1,19,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1FFE;
	// lhzx r3,r9,r31
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r31.u32);
	// bl 0x821741f8
	ctx.lr = 0x82389338;
	sub_821741F8(ctx, base);
	// lwz r11,8456(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8456);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r7,48(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r5,0(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// bl 0x82280b08
	ctx.lr = 0x82389358;
	sub_82280B08(ctx, base);
loc_82389358:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823891C0) {
	__imp__sub_823891C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82389364) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82389364) {
	__imp__sub_82389364(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82389368) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x82389370;
	__savegprlr_25(ctx, base);
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r25,-31799
	ctx.r25.s64 = -2083979264;
	// lfs f0,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// li r28,0
	ctx.r28.s64 = 0;
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r11,14592(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 14592);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lfs f0,27440(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 27440);
	ctx.f0.f64 = double(temp.f32);
	// lfs f31,5484(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5484);
	ctx.f31.f64 = double(temp.f32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f31,100(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lwz r8,8736(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8736);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// ble cr6,0x82389494
	if (!ctx.cr6.gt) goto loc_82389494;
	// li r29,0
	ctx.r29.s64 = 0;
	// lis r9,-31799
	ctx.r9.s64 = -2083979264;
	// add r10,r29,r11
	ctx.r10.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lis r11,-31936
	ctx.r11.s64 = -2092957696;
	// addi r27,r9,4608
	ctx.r27.s64 = ctx.r9.s64 + 4608;
	// addi r26,r11,-11984
	ctx.r26.s64 = ctx.r11.s64 + -11984;
loc_823893DC:
	// lbz r30,9184(r10)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r10.u32 + 9184);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8239d850
	ctx.lr = 0x823893E8;
	sub_8239D850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82389478
	if (ctx.cr6.eq) goto loc_82389478;
	// lwz r11,12(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// mulli r10,r30,68
	ctx.r10.s64 = ctx.r30.s64 * 68;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// bne cr6,0x82389430
	if (!ctx.cr6.eq) goto loc_82389430;
	// lfs f1,52(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f1.f64 = double(temp.f32);
	// fcmpu cr6,f1,f31
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// blt cr6,0x82389430
	if (ctx.cr6.lt) goto loc_82389430;
	// addi r31,r11,28
	ctx.r31.s64 = ctx.r11.s64 + 28;
	// lfs f2,40(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f2.f64 = double(temp.f32);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d9ce8
	ctx.lr = 0x8238942C;
	sub_822D9CE8(ctx, base);
	// b 0x82389444
	goto loc_82389444;
loc_82389430:
	// addi r31,r11,28
	ctx.r31.s64 = ctx.r11.s64 + 28;
	// lfs f1,40(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f1.f64 = double(temp.f32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d9be8
	ctx.lr = 0x82389444;
	sub_822D9BE8(ctx, base);
loc_82389444:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82389478
	if (!ctx.cr6.eq) goto loc_82389478;
	// lwz r11,8456(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8456);
	// rlwinm r10,r30,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,540(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 540);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82386040
	ctx.lr = 0x8238946C;
	sub_82386040(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823894a4
	if (ctx.cr6.eq) goto loc_823894A4;
loc_82389478:
	// lwz r11,14592(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 14592);
	// addi r29,r29,464
	ctx.r29.s64 = ctx.r29.s64 + 464;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// add r10,r29,r11
	ctx.r10.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lwz r11,8736(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8736);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823893dc
	if (ctx.cr6.lt) goto loc_823893DC;
loc_82389494:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_823894A4:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82389368) {
	__imp__sub_82389368(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823894B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823894B4) {
	__imp__sub_823894B4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823894B8) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x823894C0;
	__savegprlr_27(ctx, base);
	// lis r11,-31809
	ctx.r11.s64 = -2084634624;
	// lis r10,6
	ctx.r10.s64 = 393216;
	// addi r30,r11,24448
	ctx.r30.s64 = ctx.r11.s64 + 24448;
	// ori r9,r10,20696
	ctx.r9.u64 = ctx.r10.u64 | 20696;
	// addis r8,r30,6
	ctx.r8.s64 = ctx.r30.s64 + 393216;
	// lis r7,6
	ctx.r7.s64 = 393216;
	// stw r8,-64(r1)
	PPC_STORE_U32(ctx.r1.u32 + -64, ctx.r8.u32);
	// addis r11,r30,2
	ctx.r11.s64 = ctx.r30.s64 + 131072;
	// lis r6,6
	ctx.r6.s64 = 393216;
	// addi r11,r11,15616
	ctx.r11.s64 = ctx.r11.s64 + 15616;
	// ori r4,r7,20708
	ctx.r4.u64 = ctx.r7.u64 | 20708;
	// ori r7,r6,20700
	ctx.r7.u64 = ctx.r6.u64 | 20700;
	// stwx r11,r30,r9
	PPC_STORE_U32(ctx.r30.u32 + ctx.r9.u32, ctx.r11.u32);
	// lis r5,6
	ctx.r5.s64 = 393216;
	// addis r10,r30,3
	ctx.r10.s64 = ctx.r30.s64 + 196608;
	// addis r8,r30,2
	ctx.r8.s64 = ctx.r30.s64 + 131072;
	// ori r6,r5,20704
	ctx.r6.u64 = ctx.r5.u64 | 20704;
	// addi r10,r10,15616
	ctx.r10.s64 = ctx.r10.s64 + 15616;
	// addis r9,r30,3
	ctx.r9.s64 = ctx.r30.s64 + 196608;
	// lis r31,6
	ctx.r31.s64 = 393216;
	// stwx r10,r30,r7
	PPC_STORE_U32(ctx.r30.u32 + ctx.r7.u32, ctx.r10.u32);
	// addi r11,r8,15360
	ctx.r11.s64 = ctx.r8.s64 + 15360;
	// addi r9,r9,23808
	ctx.r9.s64 = ctx.r9.s64 + 23808;
	// lis r3,6
	ctx.r3.s64 = 393216;
	// stwx r11,r30,r4
	PPC_STORE_U32(ctx.r30.u32 + ctx.r4.u32, ctx.r11.u32);
	// ori r31,r31,20712
	ctx.r31.u64 = ctx.r31.u64 | 20712;
	// stwx r9,r30,r6
	PPC_STORE_U32(ctx.r30.u32 + ctx.r6.u32, ctx.r9.u32);
	// addis r7,r30,1
	ctx.r7.s64 = ctx.r30.s64 + 65536;
	// lis r29,6
	ctx.r29.s64 = 393216;
	// ori r4,r3,20720
	ctx.r4.u64 = ctx.r3.u64 | 20720;
	// addis r5,r30,5
	ctx.r5.s64 = ctx.r30.s64 + 327680;
	// addi r10,r7,15360
	ctx.r10.s64 = ctx.r7.s64 + 15360;
	// lwz r8,-64(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + -64);
	// lis r3,6
	ctx.r3.s64 = 393216;
	// addis r6,r30,4
	ctx.r6.s64 = ctx.r30.s64 + 262144;
	// stwx r10,r30,r31
	PPC_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r10.u32);
	// ori r29,r29,20716
	ctx.r29.u64 = ctx.r29.u64 | 20716;
	// lis r27,6
	ctx.r27.s64 = 393216;
	// addi r11,r5,-8960
	ctx.r11.s64 = ctx.r5.s64 + -8960;
	// ori r7,r3,20732
	ctx.r7.u64 = ctx.r3.u64 | 20732;
	// addi r9,r6,23808
	ctx.r9.s64 = ctx.r6.s64 + 23808;
	// stwx r11,r30,r4
	PPC_STORE_U32(ctx.r30.u32 + ctx.r4.u32, ctx.r11.u32);
	// lis r28,6
	ctx.r28.s64 = 393216;
	// addis r3,r30,6
	ctx.r3.s64 = ctx.r30.s64 + 393216;
	// stwx r9,r30,r29
	PPC_STORE_U32(ctx.r30.u32 + ctx.r29.u32, ctx.r9.u32);
	// ori r31,r27,20728
	ctx.r31.u64 = ctx.r27.u64 | 20728;
	// addis r4,r30,6
	ctx.r4.s64 = ctx.r30.s64 + 393216;
	// addi r9,r3,-1792
	ctx.r9.s64 = ctx.r3.s64 + -1792;
	// ori r5,r28,20724
	ctx.r5.u64 = ctx.r28.u64 | 20724;
	// lis r6,6
	ctx.r6.s64 = 393216;
	// lis r29,6
	ctx.r29.s64 = 393216;
	// stwx r9,r30,r31
	PPC_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r9.u32);
	// addi r11,r8,5376
	ctx.r11.s64 = ctx.r8.s64 + 5376;
	// addi r10,r4,-8960
	ctx.r10.s64 = ctx.r4.s64 + -8960;
	// ori r4,r6,20612
	ctx.r4.u64 = ctx.r6.u64 | 20612;
	// stwx r11,r30,r7
	PPC_STORE_U32(ctx.r30.u32 + ctx.r7.u32, ctx.r11.u32);
	// ori r8,r29,20736
	ctx.r8.u64 = ctx.r29.u64 | 20736;
	// stwx r10,r30,r5
	PPC_STORE_U32(ctx.r30.u32 + ctx.r5.u32, ctx.r10.u32);
	// lis r28,6
	ctx.r28.s64 = 393216;
	// addis r31,r30,6
	ctx.r31.s64 = ctx.r30.s64 + 393216;
	// li r11,1024
	ctx.r11.s64 = 1024;
	// lis r3,6
	ctx.r3.s64 = 393216;
	// ori r7,r28,20608
	ctx.r7.u64 = ctx.r28.u64 | 20608;
	// stwx r11,r30,r4
	PPC_STORE_U32(ctx.r30.u32 + ctx.r4.u32, ctx.r11.u32);
	// addi r10,r31,12544
	ctx.r10.s64 = ctx.r31.s64 + 12544;
	// lis r6,6
	ctx.r6.s64 = 393216;
	// lis r5,6
	ctx.r5.s64 = 393216;
	// stwx r10,r30,r8
	PPC_STORE_U32(ctx.r30.u32 + ctx.r8.u32, ctx.r10.u32);
	// li r9,8192
	ctx.r9.s64 = 8192;
	// ori r4,r3,20624
	ctx.r4.u64 = ctx.r3.u64 | 20624;
	// ori r3,r6,20616
	ctx.r3.u64 = ctx.r6.u64 | 20616;
	// stwx r9,r30,r7
	PPC_STORE_U32(ctx.r30.u32 + ctx.r7.u32, ctx.r9.u32);
	// ori r8,r5,20620
	ctx.r8.u64 = ctx.r5.u64 | 20620;
	// li r11,8192
	ctx.r11.s64 = 8192;
	// li r10,8192
	ctx.r10.s64 = 8192;
	// li r9,32
	ctx.r9.s64 = 32;
	// stwx r11,r30,r4
	PPC_STORE_U32(ctx.r30.u32 + ctx.r4.u32, ctx.r11.u32);
	// stwx r10,r30,r3
	PPC_STORE_U32(ctx.r30.u32 + ctx.r3.u32, ctx.r10.u32);
	// lis r7,6
	ctx.r7.s64 = 393216;
	// stwx r9,r30,r8
	PPC_STORE_U32(ctx.r30.u32 + ctx.r8.u32, ctx.r9.u32);
	// li r11,4096
	ctx.r11.s64 = 4096;
	// ori r6,r7,20628
	ctx.r6.u64 = ctx.r7.u64 | 20628;
	// lis r5,6
	ctx.r5.s64 = 393216;
	// lis r4,6
	ctx.r4.s64 = 393216;
	// ori r3,r5,20632
	ctx.r3.u64 = ctx.r5.u64 | 20632;
	// ori r9,r4,20636
	ctx.r9.u64 = ctx.r4.u64 | 20636;
	// stwx r11,r30,r6
	PPC_STORE_U32(ctx.r30.u32 + ctx.r6.u32, ctx.r11.u32);
	// li r11,8192
	ctx.r11.s64 = 8192;
	// lis r8,6
	ctx.r8.s64 = 393216;
	// lis r7,6
	ctx.r7.s64 = 393216;
	// lis r6,6
	ctx.r6.s64 = 393216;
	// stwx r11,r30,r3
	PPC_STORE_U32(ctx.r30.u32 + ctx.r3.u32, ctx.r11.u32);
	// li r10,896
	ctx.r10.s64 = 896;
	// ori r5,r8,20640
	ctx.r5.u64 = ctx.r8.u64 | 20640;
	// ori r4,r7,20644
	ctx.r4.u64 = ctx.r7.u64 | 20644;
	// stwx r10,r30,r9
	PPC_STORE_U32(ctx.r30.u32 + ctx.r9.u32, ctx.r10.u32);
	// ori r3,r6,20648
	ctx.r3.u64 = ctx.r6.u64 | 20648;
	// li r9,896
	ctx.r9.s64 = 896;
	// li r11,896
	ctx.r11.s64 = 896;
	// stwx r9,r30,r5
	PPC_STORE_U32(ctx.r30.u32 + ctx.r5.u32, ctx.r9.u32);
	// stwx r11,r30,r4
	PPC_STORE_U32(ctx.r30.u32 + ctx.r4.u32, ctx.r11.u32);
	// stwx r10,r30,r3
	PPC_STORE_U32(ctx.r30.u32 + ctx.r3.u32, ctx.r10.u32);
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823894B8) {
	__imp__sub_823894B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238965C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8238965C) {
	__imp__sub_8238965C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82389660) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82389668;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31809
	ctx.r11.s64 = -2084634624;
	// lis r10,6
	ctx.r10.s64 = 393216;
	// addi r29,r11,24448
	ctx.r29.s64 = ctx.r11.s64 + 24448;
	// ori r9,r10,64936
	ctx.r9.u64 = ctx.r10.u64 | 64936;
	// addis r11,r29,7
	ctx.r11.s64 = ctx.r29.s64 + 458752;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,-588
	ctx.r3.s64 = ctx.r11.s64 + -588;
	// lwzx r11,r29,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r9.u32);
	// mulli r5,r11,120
	ctx.r5.s64 = ctx.r11.s64 * 120;
	// bl 0x822dd778
	ctx.lr = 0x82389694;
	sub_822DD778(ctx, base);
	// lis r8,6
	ctx.r8.s64 = 393216;
	// addis r11,r29,8
	ctx.r11.s64 = ctx.r29.s64 + 524288;
	// ori r7,r8,64940
	ctx.r7.u64 = ctx.r8.u64 | 64940;
	// addi r3,r11,-4684
	ctx.r3.s64 = ctx.r11.s64 + -4684;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwzx r11,r29,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r7.u32);
	// mulli r5,r11,120
	ctx.r5.s64 = ctx.r11.s64 * 120;
	// bl 0x822dd778
	ctx.lr = 0x823896B4;
	sub_822DD778(ctx, base);
	// lis r6,7
	ctx.r6.s64 = 458752;
	// addis r11,r29,8
	ctx.r11.s64 = ctx.r29.s64 + 524288;
	// ori r30,r6,65408
	ctx.r30.u64 = ctx.r6.u64 | 65408;
	// addi r3,r11,-116
	ctx.r3.s64 = ctx.r11.s64 + -116;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwzx r11,r29,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r30.u32);
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r5,r5,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x822dd778
	ctx.lr = 0x823896DC;
	sub_822DD778(ctx, base);
	// lis r4,9
	ctx.r4.s64 = 589824;
	// addis r11,r29,9
	ctx.r11.s64 = ctx.r29.s64 + 589824;
	// ori r31,r4,15244
	ctx.r31.u64 = ctx.r4.u64 | 15244;
	// addi r3,r11,15252
	ctx.r3.s64 = ctx.r11.s64 + 15252;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwzx r11,r29,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r31.u32);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x822dd778
	ctx.lr = 0x82389704;
	sub_822DD778(ctx, base);
	// addis r11,r29,10
	ctx.r11.s64 = ctx.r29.s64 + 655360;
	// li r5,4096
	ctx.r5.s64 = 4096;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,-28268
	ctx.r3.s64 = ctx.r11.s64 + -28268;
	// bl 0x822dd778
	ctx.lr = 0x82389718;
	sub_822DD778(ctx, base);
	// lis r10,6
	ctx.r10.s64 = 393216;
	// lis r9,6
	ctx.r9.s64 = 393216;
	// lis r5,6
	ctx.r5.s64 = 393216;
	// ori r7,r10,63908
	ctx.r7.u64 = ctx.r10.u64 | 63908;
	// lis r8,-31799
	ctx.r8.s64 = -2083979264;
	// ori r6,r9,64936
	ctx.r6.u64 = ctx.r9.u64 | 64936;
	// ori r9,r5,64940
	ctx.r9.u64 = ctx.r5.u64 | 64940;
	// addi r4,r8,4608
	ctx.r4.s64 = ctx.r8.s64 + 4608;
	// li r3,1
	ctx.r3.s64 = 1;
	// li r11,0
	ctx.r11.s64 = 0;
	// stwx r3,r29,r7
	PPC_STORE_U32(ctx.r29.u32 + ctx.r7.u32, ctx.r3.u32);
	// stwx r11,r29,r30
	PPC_STORE_U32(ctx.r29.u32 + ctx.r30.u32, ctx.r11.u32);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stwx r11,r29,r31
	PPC_STORE_U32(ctx.r29.u32 + ctx.r31.u32, ctx.r11.u32);
	// stwx r11,r29,r6
	PPC_STORE_U32(ctx.r29.u32 + ctx.r6.u32, ctx.r11.u32);
	// stwx r11,r29,r9
	PPC_STORE_U32(ctx.r29.u32 + ctx.r9.u32, ctx.r11.u32);
	// lwz r11,8456(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8456);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82389768
	if (ctx.cr6.eq) goto loc_82389768;
	// bl 0x8239b488
	ctx.lr = 0x82389768;
	sub_8239B488(ctx, base);
loc_82389768:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82389660) {
	__imp__sub_82389660(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82389770) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82389778;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
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
	// lis r9,6
	ctx.r9.s64 = 393216;
	// addis r10,r31,6
	ctx.r10.s64 = ctx.r31.s64 + 393216;
	// ori r7,r9,20808
	ctx.r7.u64 = ctx.r9.u64 | 20808;
	// li r11,0
	ctx.r11.s64 = 0;
	// stwx r3,r31,r8
	PPC_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r3.u32);
	// li r5,44
	ctx.r5.s64 = 44;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r10,20652
	ctx.r3.s64 = ctx.r10.s64 + 20652;
	// stwx r11,r31,r7
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r11.u32);
	// bl 0x823de090
	ctx.lr = 0x823897B4;
	sub_823DE090(ctx, base);
	// lis r6,7
	ctx.r6.s64 = 458752;
	// addis r10,r31,9
	ctx.r10.s64 = ctx.r31.s64 + 589824;
	// ori r28,r6,65408
	ctx.r28.u64 = ctx.r6.u64 | 65408;
	// li r30,7
	ctx.r30.s64 = 7;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// addi r29,r10,8076
	ctx.r29.s64 = ctx.r10.s64 + 8076;
loc_823897CC:
	// li r4,1
	ctx.r4.s64 = 1;
	// lwzx r5,r31,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822dd778
	ctx.lr = 0x823897DC;
	sub_822DD778(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,1024
	ctx.r29.s64 = ctx.r29.s64 + 1024;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// bne 0x823897cc
	if (!ctx.cr0.eq) goto loc_823897CC;
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// addi r10,r11,4608
	ctx.r10.s64 = ctx.r11.s64 + 4608;
	// lwz r11,8456(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8456);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82389804
	if (ctx.cr6.eq) goto loc_82389804;
	// bl 0x8239b500
	ctx.lr = 0x82389804;
	sub_8239B500(ctx, base);
loc_82389804:
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// lis r10,7
	ctx.r10.s64 = 458752;
	// addi r9,r11,13312
	ctx.r9.s64 = ctx.r11.s64 + 13312;
	// ori r8,r10,65396
	ctx.r8.u64 = ctx.r10.u64 | 65396;
	// lis r7,7
	ctx.r7.s64 = 458752;
	// lis r6,7
	ctx.r6.s64 = 458752;
	// lis r5,9
	ctx.r5.s64 = 589824;
	// lwz r11,20(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// ori r4,r7,65400
	ctx.r4.u64 = ctx.r7.u64 | 65400;
	// ori r3,r6,65404
	ctx.r3.u64 = ctx.r6.u64 | 65404;
	// ori r7,r5,41432
	ctx.r7.u64 = ctx.r5.u64 | 41432;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stwx r11,r31,r8
	PPC_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stwx r10,r31,r4
	PPC_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r10.u32);
	// stwx r9,r31,r3
	PPC_STORE_U32(ctx.r31.u32 + ctx.r3.u32, ctx.r9.u32);
	// stwx r11,r31,r7
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82389770) {
	__imp__sub_82389770(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82389854) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82389854) {
	__imp__sub_82389854(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82389858) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31809
	ctx.r11.s64 = -2084634624;
	// lis r10,9
	ctx.r10.s64 = 589824;
	// addi r9,r11,24448
	ctx.r9.s64 = ctx.r11.s64 + 24448;
	// ori r8,r10,41432
	ctx.r8.u64 = ctx.r10.u64 | 41432;
	// li r11,1
	ctx.r11.s64 = 1;
	// stwx r11,r9,r8
	PPC_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82389858) {
	__imp__sub_82389858(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82389874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82389874) {
	__imp__sub_82389874(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82389878) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82389880;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r5,336
	ctx.r5.s64 = 336;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823de090
	ctx.lr = 0x8238989C;
	sub_823DE090(ctx, base);
	// addi r30,r31,256
	ctx.r30.s64 = ctx.r31.s64 + 256;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82388340
	ctx.lr = 0x823898AC;
	sub_82388340(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r30,12
	ctx.r3.s64 = ctx.r30.s64 + 12;
	// bl 0x822d7678
	ctx.lr = 0x823898B8;
	sub_822D7678(ctx, base);
	// addi r29,r31,64
	ctx.r29.s64 = ctx.r31.s64 + 64;
	// lfs f3,328(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	ctx.f3.f64 = double(temp.f32);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lfs f2,324(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 324);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,320(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 320);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822d7470
	ctx.lr = 0x823898D0;
	sub_822D7470(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823877d0
	ctx.lr = 0x823898DC;
	sub_823877D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823878b0
	ctx.lr = 0x823898E4;
	sub_823878B0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82389878) {
	__imp__sub_82389878(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823898EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823898EC) {
	__imp__sub_823898EC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823898F0) {
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
	// lwz r8,16220(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16220);
	// li r9,8
	ctx.r9.s64 = 8;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r11,r3,92
	ctx.r11.s64 = ctx.r3.s64 + 92;
	// addi r10,r4,8
	ctx.r10.s64 = ctx.r4.s64 + 8;
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// lfs f0,92(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8238992C:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8238992c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8238992C;
	// addi r4,r31,128
	ctx.r4.s64 = ctx.r31.s64 + 128;
	// addi r3,r30,44
	ctx.r3.s64 = ctx.r30.s64 + 44;
	// li r5,60
	ctx.r5.s64 = 60;
	// bl 0x823de1f0
	ctx.lr = 0x82389948;
	sub_823DE1F0(ctx, base);
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r11,r31,184
	ctx.r11.s64 = ctx.r31.s64 + 184;
	// addi r10,r30,100
	ctx.r10.s64 = ctx.r30.s64 + 100;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82389958:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82389958
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82389958;
	// lwz r11,208(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// addi r4,r31,216
	ctx.r4.s64 = ctx.r31.s64 + 216;
	// addi r3,r30,156
	ctx.r3.s64 = ctx.r30.s64 + 156;
	// li r5,108
	ctx.r5.s64 = 108;
	// stw r11,124(r30)
	PPC_STORE_U32(ctx.r30.u32 + 124, ctx.r11.u32);
	// lwz r10,212(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// stw r10,128(r30)
	PPC_STORE_U32(ctx.r30.u32 + 128, ctx.r10.u32);
	// bl 0x823de1f0
	ctx.lr = 0x82389984;
	sub_823DE1F0(ctx, base);
	// lbz r7,16213(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16213);
	// lis r9,-31799
	ctx.r9.s64 = -2083979264;
	// addi r4,r31,324
	ctx.r4.s64 = ctx.r31.s64 + 324;
	// addi r8,r9,4608
	ctx.r8.s64 = ctx.r9.s64 + 4608;
	// addi r3,r30,312
	ctx.r3.s64 = ctx.r30.s64 + 312;
	// stb r7,9(r30)
	PPC_STORE_U8(ctx.r30.u32 + 9, ctx.r7.u8);
	// lbz r6,16214(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16214);
	// stb r6,10(r30)
	PPC_STORE_U8(ctx.r30.u32 + 10, ctx.r6.u8);
	// lbz r5,16215(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16215);
	// stb r5,11(r30)
	PPC_STORE_U8(ctx.r30.u32 + 11, ctx.r5.u8);
	// lwz r11,8456(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8456);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// rlwinm r5,r11,6,0,25
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// bl 0x822dd768
	ctx.lr = 0x823899BC;
	sub_822DD768(ctx, base);
	// lbz r10,16216(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16216);
	// stb r10,8(r30)
	PPC_STORE_U8(ctx.r30.u32 + 8, ctx.r10.u8);
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

PPC_WEAK_FUNC(sub_823898F0) {
	__imp__sub_823898F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823899DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823899DC) {
	__imp__sub_823899DC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823899E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// subf r11,r5,r6
	ctx.r11.s64 = ctx.r6.s64 - ctx.r5.s64;
	// lfs f12,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// subf r10,r5,r7
	ctx.r10.s64 = ctx.r7.s64 - ctx.r5.s64;
	// lfs f11,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// fsubs f10,f11,f12
	ctx.f10.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// extsw r7,r10
	ctx.r7.s64 = ctx.r10.s32;
	// std r9,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r9.u64);
	// lfd f9,-16(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// std r7,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r7.u64);
	// lfd f8,-16(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f6,f9
	ctx.f6.f64 = double(ctx.f9.s64);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// lfs f0,12168(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// frsp f4,f6
	ctx.f4.f64 = double(float(ctx.f6.f64));
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lfs f13,5484(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 5484);
	ctx.f13.f64 = double(temp.f32);
	// frsp f5,f7
	ctx.f5.f64 = double(float(ctx.f7.f64));
	// fdivs f3,f5,f4
	ctx.f3.f64 = double(float(ctx.f5.f64 / ctx.f4.f64));
	// fsubs f2,f3,f0
	ctx.f2.f64 = double(float(ctx.f3.f64 - ctx.f0.f64));
	// fneg f1,f3
	ctx.f1.u64 = ctx.f3.u64 ^ 0x8000000000000000;
	// fsel f11,f2,f0,f3
	ctx.f11.f64 = ctx.f2.f64 >= 0.0 ? ctx.f0.f64 : ctx.f3.f64;
	// fsel f9,f1,f13,f11
	ctx.f9.f64 = ctx.f1.f64 >= 0.0 ? ctx.f13.f64 : ctx.f11.f64;
	// fmadds f8,f10,f9,f12
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f9.f64 + ctx.f12.f64));
	// stfs f8,0(r8)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// lfs f7,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f5,f6,f7
	ctx.f5.f64 = double(float(ctx.f6.f64 - ctx.f7.f64));
	// fmadds f4,f5,f9,f7
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f9.f64 + ctx.f7.f64));
	// stfs f4,4(r8)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// lfs f1,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// fmr f2,f8
	ctx.f2.f64 = ctx.f8.f64;
	// lfs f13,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f13,f1
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f1.f64));
	// fmuls f11,f4,f4
	ctx.f11.f64 = double(float(ctx.f4.f64 * ctx.f4.f64));
	// fmadds f10,f12,f9,f1
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f9.f64 + ctx.f1.f64));
	// stfs f10,8(r8)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r8.u32 + 8, temp.u32);
	// fmr f3,f4
	ctx.f3.f64 = ctx.f4.f64;
	// fmadds f8,f8,f8,f11
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 + ctx.f11.f64));
	// fmr f9,f10
	ctx.f9.f64 = ctx.f10.f64;
	// fmadds f7,f10,f10,f8
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f10.f64 + ctx.f8.f64));
	// fsqrts f6,f7
	ctx.f6.f64 = double(float(sqrt(ctx.f7.f64)));
	// fneg f5,f6
	ctx.f5.u64 = ctx.f6.u64 ^ 0x8000000000000000;
	// fsel f4,f5,f0,f6
	ctx.f4.f64 = ctx.f5.f64 >= 0.0 ? ctx.f0.f64 : ctx.f6.f64;
	// fdivs f1,f0,f4
	ctx.f1.f64 = double(float(ctx.f0.f64 / ctx.f4.f64));
	// fmuls f0,f2,f1
	ctx.f0.f64 = double(float(ctx.f2.f64 * ctx.f1.f64));
	// stfs f0,0(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// fmuls f13,f3,f1
	ctx.f13.f64 = double(float(ctx.f3.f64 * ctx.f1.f64));
	// stfs f13,4(r8)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// fmuls f12,f1,f10
	ctx.f12.f64 = double(float(ctx.f1.f64 * ctx.f10.f64));
	// stfs f12,8(r8)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r8.u32 + 8, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823899E0) {
	__imp__sub_823899E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82389AB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82389AB4) {
	__imp__sub_82389AB4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82389AB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x82389AC0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// lwz r11,12916(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12916);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82389b28
	if (ctx.cr6.lt) goto loc_82389B28;
	// beq cr6,0x82389afc
	if (ctx.cr6.eq) goto loc_82389AFC;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// addi r10,r11,4608
	ctx.r10.s64 = ctx.r11.s64 + 4608;
	// blt cr6,0x82389af4
	if (ctx.cr6.lt) goto loc_82389AF4;
	// lwz r28,8336(r10)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8336);
	// b 0x82389b34
	goto loc_82389B34;
loc_82389AF4:
	// lwz r28,8328(r10)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8328);
	// b 0x82389b34
	goto loc_82389B34;
loc_82389AFC:
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// lis r10,-31799
	ctx.r10.s64 = -2083979264;
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r9,r10,4608
	ctx.r9.s64 = ctx.r10.s64 + 4608;
	// lwz r11,14592(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14592);
	// lwz r10,8328(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8328);
	// lwz r8,5392(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5392);
	// subfic r7,r8,0
	ctx.xer.ca = ctx.r8.u32 <= 0;
	ctx.r7.s64 = 0 - ctx.r8.s64;
	// subfe r5,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r5.u64 = ~ctx.r6.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r28,r5,r10
	ctx.r28.u64 = ctx.r5.u64 & ctx.r10.u64;
	// b 0x82389b38
	goto loc_82389B38;
loc_82389B28:
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// addi r10,r11,4608
	ctx.r10.s64 = ctx.r11.s64 + 4608;
	// lwz r28,8332(r10)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8332);
loc_82389B34:
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
loc_82389B38:
	// lis r31,-31799
	ctx.r31.s64 = -2083979264;
	// lwz r11,3216(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3216);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmplw cr6,r28,r10
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82389b58
	if (!ctx.cr6.eq) goto loc_82389B58;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82389c9c
	if (ctx.cr6.eq) goto loc_82389C9C;
loc_82389B58:
	// bl 0x82390a98
	ctx.lr = 0x82389B5C;
	sub_82390A98(ctx, base);
	// lwz r11,3216(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3216);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// stw r28,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r28.u32);
	// lwz r11,3216(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3216);
	// stw r27,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r27.u32);
	// lwz r11,3216(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3216);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// bne cr6,0x82389bc8
	if (!ctx.cr6.eq) goto loc_82389BC8;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82389c04
	if (!ctx.cr6.gt) goto loc_82389C04;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82389B90:
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// li r5,52
	ctx.r5.s64 = 52;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwzx r4,r10,r30
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// bl 0x823de1f0
	ctx.lr = 0x82389BA8;
	sub_823DE1F0(ctx, base);
	// lwz r11,3216(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3216);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// addi r29,r29,52
	ctx.r29.s64 = ctx.r29.s64 + 52;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpw cr6,r28,r10
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82389b90
	if (ctx.cr6.lt) goto loc_82389B90;
	// b 0x82389c04
	goto loc_82389C04;
loc_82389BC8:
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82389c04
	if (!ctx.cr6.gt) goto loc_82389C04;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82389BD8:
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// li r5,52
	ctx.r5.s64 = 52;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x823de1f0
	ctx.lr = 0x82389BEC;
	sub_823DE1F0(ctx, base);
	// lwz r11,3216(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3216);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,52
	ctx.r29.s64 = ctx.r29.s64 + 52;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82389bd8
	if (ctx.cr6.lt) goto loc_82389BD8;
loc_82389C04:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x82389c60
	if (!ctx.cr6.eq) goto loc_82389C60;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82389c9c
	if (!ctx.cr6.gt) goto loc_82389C9C;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82389C20:
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// li r5,52
	ctx.r5.s64 = 52;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// bl 0x823de1f0
	ctx.lr = 0x82389C3C;
	sub_823DE1F0(ctx, base);
	// lwz r11,3216(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3216);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// addi r29,r29,52
	ctx.r29.s64 = ctx.r29.s64 + 52;
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpw cr6,r28,r9
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82389c20
	if (ctx.cr6.lt) goto loc_82389C20;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_82389C60:
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82389c9c
	if (!ctx.cr6.gt) goto loc_82389C9C;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82389C70:
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// li r5,52
	ctx.r5.s64 = 52;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x823de1f0
	ctx.lr = 0x82389C84;
	sub_823DE1F0(ctx, base);
	// lwz r11,3216(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3216);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,52
	ctx.r30.s64 = ctx.r30.s64 + 52;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpw cr6,r29,r10
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82389c70
	if (ctx.cr6.lt) goto loc_82389C70;
loc_82389C9C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82389AB8) {
	__imp__sub_82389AB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82389CA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82389CA4) {
	__imp__sub_82389CA4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82389CA8) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x8239ca60
	ctx.lr = 0x82389CC8;
	sub_8239CA60(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82389d08
	if (!ctx.cr6.eq) goto loc_82389D08;
	// lis r9,-31799
	ctx.r9.s64 = -2083979264;
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lwz r11,14592(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 14592);
	// lfs f0,5484(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,5392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5392, ctx.r10.u32);
	// lwz r11,14592(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 14592);
	// stw r10,5588(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5588, ctx.r10.u32);
	// lwz r11,14592(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 14592);
	// stfs f0,5576(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 5576, temp.u32);
	// stfs f0,5580(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 5580, temp.u32);
	// addi r10,r11,5576
	ctx.r10.s64 = ctx.r11.s64 + 5576;
	// stfs f0,5584(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 5584, temp.u32);
	// b 0x82389dfc
	goto loc_82389DFC;
loc_82389D08:
	// lis r10,-31799
	ctx.r10.s64 = -2083979264;
	// rlwinm r11,r3,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 6) & 0xFFFFFFC0;
	// lis r7,-31780
	ctx.r7.s64 = -2082734080;
	// add r30,r11,r31
	ctx.r30.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lis r9,-31799
	ctx.r9.s64 = -2083979264;
	// lwz r11,14592(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 14592);
	// addi r8,r30,16
	ctx.r8.s64 = ctx.r30.s64 + 16;
	// addi r31,r9,13536
	ctx.r31.s64 = ctx.r9.s64 + 13536;
	// lwz r7,12976(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12976);
	// addi r9,r11,5576
	ctx.r9.s64 = ctx.r11.s64 + 5576;
	// lfs f0,16(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,5576(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 5576, temp.u32);
	// lfs f13,20(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,5580(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 5580, temp.u32);
	// lfs f12,24(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,5584(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 5584, temp.u32);
	// lbz r6,12(r7)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r7.u32 + 12);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82389d64
	if (ctx.cr6.eq) goto loc_82389D64;
	// lbz r11,711(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 711);
	// li r9,1
	ctx.r9.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82389d68
	if (!ctx.cr6.eq) goto loc_82389D68;
loc_82389D64:
	// li r9,0
	ctx.r9.s64 = 0;
loc_82389D68:
	// lwz r11,14592(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 14592);
	// stw r9,5392(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5392, ctx.r9.u32);
	// lwz r10,14592(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 14592);
	// lbz r11,711(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 711);
	// stw r11,5588(r10)
	PPC_STORE_U32(ctx.r10.u32 + 5588, ctx.r11.u32);
	// lbz r10,711(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 711);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82389dd8
	if (ctx.cr6.eq) goto loc_82389DD8;
	// lbz r11,712(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 712);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82389dc0
	if (ctx.cr6.eq) goto loc_82389DC0;
	// lis r11,-31809
	ctx.r11.s64 = -2084634624;
	// lwz r6,756(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 756);
	// lis r10,6
	ctx.r10.s64 = 393216;
	// lwz r5,752(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 752);
	// addi r9,r11,24448
	ctx.r9.s64 = ctx.r11.s64 + 24448;
	// ori r7,r10,20768
	ctx.r7.u64 = ctx.r10.u64 | 20768;
	// addi r4,r31,740
	ctx.r4.s64 = ctx.r31.s64 + 740;
	// addi r3,r31,728
	ctx.r3.s64 = ctx.r31.s64 + 728;
	// lwzx r7,r9,r7
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// bl 0x823899e0
	ctx.lr = 0x82389DBC;
	sub_823899E0(ctx, base);
	// b 0x82389dd8
	goto loc_82389DD8;
loc_82389DC0:
	// lfs f0,728(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 728);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// lfs f0,732(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 732);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// lfs f0,736(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 736);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 8, temp.u32);
loc_82389DD8:
	// lbz r11,710(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 710);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82389dfc
	if (ctx.cr6.eq) goto loc_82389DFC;
	// lfs f0,716(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 716);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// lfs f0,720(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 720);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// lfs f0,724(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 724);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
loc_82389DFC:
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

PPC_WEAK_FUNC(sub_82389CA8) {
	__imp__sub_82389CA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82389E14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82389E14) {
	__imp__sub_82389E14(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82389E18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// addi r10,r11,13536
	ctx.r10.s64 = ctx.r11.s64 + 13536;
	// stfs f1,936(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r10.u32 + 936, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82389E18) {
	__imp__sub_82389E18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82389E28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// lwz r11,12912(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12912);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82389e60
	if (ctx.cr6.eq) goto loc_82389E60;
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// addi r10,r11,400
	ctx.r10.s64 = ctx.r11.s64 + 400;
	// lfs f0,256(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 256);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lfs f0,260(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 260);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// lfs f0,264(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 264);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// b 0x82389e78
	goto loc_82389E78;
loc_82389E60:
	// lfs f0,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lfs f13,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// lfs f12,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
loc_82389E78:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-31799
	ctx.r10.s64 = -2083979264;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// addi r9,r10,13536
	ctx.r9.s64 = ctx.r10.s64 + 13536;
	// lfs f0,-21292(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -21292);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f0,936(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 936);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f0,12(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 12, temp.u32);
	// bne cr6,0x82389ebc
	if (!ctx.cr6.eq) goto loc_82389EBC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fsel f11,f12,f0,f13
	ctx.f11.f64 = ctx.f12.f64 >= 0.0 ? ctx.f0.f64 : ctx.f13.f64;
	// stfs f11,16(r4)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r4.u32 + 16, temp.u32);
	// blr 
	return;
loc_82389EBC:
	// stfs f0,16(r4)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 16, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82389E28) {
	__imp__sub_82389E28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82389EC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82389EC4) {
	__imp__sub_82389EC4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82389EC8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r3,12912(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12912);
	// lbz r10,11(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 11);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82389f0c
	if (ctx.cr6.eq) goto loc_82389F0C;
	// bl 0x822e0228
	ctx.lr = 0x82389EFC;
	sub_822E0228(ctx, base);
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// addi r4,r11,400
	ctx.r4.s64 = ctx.r11.s64 + 400;
	// bl 0x82389878
	ctx.lr = 0x82389F0C;
	sub_82389878(ctx, base);
loc_82389F0C:
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r11,r11,13536
	ctx.r11.s64 = ctx.r11.s64 + 13536;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// addi r4,r11,668
	ctx.r4.s64 = ctx.r11.s64 + 668;
	// bl 0x82389e28
	ctx.lr = 0x82389F24;
	sub_82389E28(ctx, base);
	// lis r10,-31809
	ctx.r10.s64 = -2084634624;
	// lis r9,6
	ctx.r9.s64 = 393216;
	// lfs f0,76(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	ctx.f0.f64 = double(temp.f32);
	// lis r8,6
	ctx.r8.s64 = 393216;
	// addi r7,r10,24448
	ctx.r7.s64 = ctx.r10.s64 + 24448;
	// ori r6,r9,20776
	ctx.r6.u64 = ctx.r9.u64 | 20776;
	// lis r5,6
	ctx.r5.s64 = 393216;
	// ori r4,r8,20780
	ctx.r4.u64 = ctx.r8.u64 | 20780;
	// ori r3,r5,20784
	ctx.r3.u64 = ctx.r5.u64 | 20784;
	// lis r11,6
	ctx.r11.s64 = 393216;
	// stfsx f0,r7,r6
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + ctx.r6.u32, temp.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// ori r8,r11,20768
	ctx.r8.u64 = ctx.r11.u64 | 20768;
	// lis r9,6
	ctx.r9.s64 = 393216;
	// ori r6,r9,20772
	ctx.r6.u64 = ctx.r9.u64 | 20772;
	// lfs f13,5804(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5804);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,80(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r7,r4
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + ctx.r4.u32, temp.u32);
	// lfs f0,84(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r7,r3
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + ctx.r3.u32, temp.u32);
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// extsw r5,r11
	ctx.r5.s64 = ctx.r11.s32;
	// stwx r11,r7,r8
	PPC_STORE_U32(ctx.r7.u32 + ctx.r8.u32, ctx.r11.u32);
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f0,f11,f13
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// stfsx f0,r7,r6
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + ctx.r6.u32, temp.u32);
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

PPC_WEAK_FUNC(sub_82389EC8) {
	__imp__sub_82389EC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82389FB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// addi r11,r11,13536
	ctx.r11.s64 = ctx.r11.s64 + 13536;
	// stb r3,928(r11)
	PPC_STORE_U8(ctx.r11.u32 + 928, ctx.r3.u8);
	// beq cr6,0x82389fcc
	if (ctx.cr6.eq) goto loc_82389FCC;
	// stw r4,932(r11)
	PPC_STORE_U32(ctx.r11.u32 + 932, ctx.r4.u32);
	// blr 
	return;
loc_82389FCC:
	// lis r10,-31799
	ctx.r10.s64 = -2083979264;
	// addi r9,r10,4608
	ctx.r9.s64 = ctx.r10.s64 + 4608;
	// lwz r10,8620(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8620);
	// stw r10,932(r11)
	PPC_STORE_U32(ctx.r11.u32 + 932, ctx.r10.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82389FB0) {
	__imp__sub_82389FB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82389FE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r11,r11,13536
	ctx.r11.s64 = ctx.r11.s64 + 13536;
	// addi r4,r11,688
	ctx.r4.s64 = ctx.r11.s64 + 688;
	// b 0x82389e28
	sub_82389E28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82389FE0) {
	__imp__sub_82389FE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82389FF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82389FF4) {
	__imp__sub_82389FF4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82389FF8) {
	PPC_FUNC_PROLOGUE();
	// b 0x8239dc78
	sub_8239DC78(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82389FF8) {
	__imp__sub_82389FF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82389FFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82389FFC) {
	__imp__sub_82389FFC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238A000) {
	PPC_FUNC_PROLOGUE();
	// b 0x8239de18
	sub_8239DE18(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8238A000) {
	__imp__sub_8238A000(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238A004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8238A004) {
	__imp__sub_8238A004(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238A008) {
	PPC_FUNC_PROLOGUE();
	// b 0x8239e000
	sub_8239E000(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8238A008) {
	__imp__sub_8238A008(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238A00C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8238A00C) {
	__imp__sub_8238A00C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238A010) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8238A018;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82399d70
	ctx.lr = 0x8238A034;
	sub_82399D70(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8239dc78
	ctx.lr = 0x8238A048;
	sub_8239DC78(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8238A010) {
	__imp__sub_8238A010(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238A054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8238A054) {
	__imp__sub_8238A054(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238A058) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8238A060;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82399e08
	ctx.lr = 0x8238A074;
	sub_82399E08(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8239de18
	ctx.lr = 0x8238A084;
	sub_8239DE18(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8238A058) {
	__imp__sub_8238A058(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238A08C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8238A08C) {
	__imp__sub_8238A08C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238A090) {
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
	// bl 0x823993d0
	ctx.lr = 0x8238A0B0;
	sub_823993D0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8239e000
	ctx.lr = 0x8238A0BC;
	sub_8239E000(ctx, base);
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

PPC_WEAK_FUNC(sub_8238A090) {
	__imp__sub_8238A090(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238A0D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8238A0D4) {
	__imp__sub_8238A0D4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238A0D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8238A0E0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// addi r10,r4,162
	ctx.r10.s64 = ctx.r4.s64 + 162;
	// addi r9,r11,4608
	ctx.r9.s64 = ctx.r11.s64 + 4608;
	// addi r8,r4,166
	ctx.r8.s64 = ctx.r4.s64 + 166;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r8,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,8456(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8456);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwzx r6,r7,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// lwzx r5,r5,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r11.u32);
	// bl 0x82399e80
	ctx.lr = 0x8238A11C;
	sub_82399E80(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8239e668
	ctx.lr = 0x8238A12C;
	sub_8239E668(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8238A0D8) {
	__imp__sub_8238A0D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238A134) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8238A134) {
	__imp__sub_8238A134(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238A138) {
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
	// addi r10,r4,162
	ctx.r10.s64 = ctx.r4.s64 + 162;
	// addi r9,r11,4608
	ctx.r9.s64 = ctx.r11.s64 + 4608;
	// addi r8,r4,166
	ctx.r8.s64 = ctx.r4.s64 + 166;
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r11,8456(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8456);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwzx r5,r7,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// lwzx r4,r6,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// bl 0x82399478
	ctx.lr = 0x8238A17C;
	sub_82399478(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8239e098
	ctx.lr = 0x8238A188;
	sub_8239E098(ctx, base);
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

PPC_WEAK_FUNC(sub_8238A138) {
	__imp__sub_8238A138(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238A1A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// lis r10,-31809
	ctx.r10.s64 = -2084634624;
	// addi r7,r11,4608
	ctx.r7.s64 = ctx.r11.s64 + 4608;
	// addi r6,r10,24448
	ctx.r6.s64 = ctx.r10.s64 + 24448;
	// lis r5,9
	ctx.r5.s64 = 589824;
	// addis r10,r6,8
	ctx.r10.s64 = ctx.r6.s64 + 524288;
	// ori r4,r5,41376
	ctx.r4.u64 = ctx.r5.u64 | 41376;
	// lwz r11,8456(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8456);
	// addis r9,r6,10
	ctx.r9.s64 = ctx.r6.s64 + 655360;
	// addis r8,r6,9
	ctx.r8.s64 = ctx.r6.s64 + 589824;
	// addi r10,r10,-3724
	ctx.r10.s64 = ctx.r10.s64 + -3724;
	// addi r9,r9,-29804
	ctx.r9.s64 = ctx.r9.s64 + -29804;
	// addi r8,r8,8076
	ctx.r8.s64 = ctx.r8.s64 + 8076;
	// lwz r5,592(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 592);
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// lis r10,6
	ctx.r10.s64 = 393216;
	// stw r9,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// addi r9,r11,13312
	ctx.r9.s64 = ctx.r11.s64 + 13312;
	// stw r8,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// lis r8,9
	ctx.r8.s64 = 589824;
	// ori r10,r10,64936
	ctx.r10.u64 = ctx.r10.u64 | 64936;
	// stw r5,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r5.u32);
	// lis r5,7
	ctx.r5.s64 = 458752;
	// lwzx r11,r6,r4
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r4.u32);
	// ori r4,r8,15244
	ctx.r4.u64 = ctx.r8.u64 | 15244;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// lis r8,7
	ctx.r8.s64 = 458752;
	// lwz r11,8456(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8456);
	// ori r7,r5,65408
	ctx.r7.u64 = ctx.r5.u64 | 65408;
	// lwz r5,544(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 544);
	// ori r8,r8,65396
	ctx.r8.u64 = ctx.r8.u64 | 65396;
	// stw r5,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r5.u32);
	// lwz r11,20(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// sth r11,40(r3)
	PPC_STORE_U16(ctx.r3.u32 + 40, ctx.r11.u16);
	// lwzx r11,r6,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r10.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// lwzx r4,r6,r4
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r4.u32);
	// stw r4,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r4.u32);
	// lwzx r11,r6,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// lwzx r11,r6,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r8.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8238A1A0) {
	__imp__sub_8238A1A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238A250) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x821871a0
	ctx.lr = 0x8238A264;
	sub_821871A0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8238a1a0
	ctx.lr = 0x8238A26C;
	sub_8238A1A0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x823b7ac8
	ctx.lr = 0x8238A278;
	sub_823B7AC8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8238A250) {
	__imp__sub_8238A250(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238A288) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf40
	ctx.lr = 0x8238A290;
	__savegprlr_14(ctx, base);
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x823de028
	ctx.lr = 0x8238A298;
	__savefpr_28(ctx, base);
	// stwu r1,-544(r1)
	ea = -544 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31799
	ctx.r31.s64 = -2083979264;
	// lis r14,-31780
	ctx.r14.s64 = -2082734080;
	// mulli r9,r3,8496
	ctx.r9.s64 = ctx.r3.s64 * 8496;
	// lwz r11,14592(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14592);
	// lwz r10,12976(r14)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r14.u32 + 12976);
	// lwz r11,5568(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5568);
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r8,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r8.u32);
	// mr r19,r4
	ctx.r19.u64 = ctx.r4.u64;
	// stw r11,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r11.u32);
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// lbz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 12);
	// mr r17,r6
	ctx.r17.u64 = ctx.r6.u64;
	// li r20,1
	ctx.r20.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8238a2f4
	if (ctx.cr6.eq) goto loc_8238A2F4;
	// lbz r11,-4176(r8)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + -4176);
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8238a2f8
	if (!ctx.cr6.eq) goto loc_8238A2F8;
loc_8238A2F4:
	// li r10,0
	ctx.r10.s64 = 0;
loc_8238A2F8:
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// clrlwi r8,r10,24
	ctx.r8.u64 = ctx.r10.u32 & 0xFF;
	// addi r22,r11,13536
	ctx.r22.s64 = ctx.r11.s64 + 13536;
	// addic r7,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r7.s64 = ctx.r8.s64 + -1;
	// lis r9,-31771
	ctx.r9.s64 = -2082144256;
	// stw r22,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r22.u32);
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
	// li r30,1024
	ctx.r30.s64 = 1024;
	// lwz r11,912(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 912);
	// subfe r15,r7,r8
	temp.u8 = (~ctx.r7.u32 + ctx.r8.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r15.u64 = ~ctx.r7.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r20,900(r22)
	PPC_STORE_U32(ctx.r22.u32 + 900, ctx.r20.u32);
	// li r29,11
	ctx.r29.s64 = 11;
	// li r28,2
	ctx.r28.s64 = 2;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r24,r9,-27528
	ctx.r24.s64 = ctx.r9.s64 + -27528;
	// beq cr6,0x8238a36c
	if (ctx.cr6.eq) goto loc_8238A36C;
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8238a35c
	if (!ctx.cr6.eq) goto loc_8238A35C;
	// cmpwi cr6,r15,1
	ctx.cr6.compare<int32_t>(ctx.r15.s32, 1, ctx.xer);
	// bne cr6,0x8238a35c
	if (!ctx.cr6.eq) goto loc_8238A35C;
	// addi r3,r26,256
	ctx.r3.s64 = ctx.r26.s64 + 256;
	// bl 0x823a1358
	ctx.lr = 0x8238A354;
	sub_823A1358(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8238a368
	if (!ctx.cr6.eq) goto loc_8238A368;
loc_8238A35C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,912(r22)
	PPC_STORE_U32(ctx.r22.u32 + 912, ctx.r11.u32);
	// b 0x8238a36c
	goto loc_8238A36C;
loc_8238A368:
	// lwz r11,912(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 912);
loc_8238A36C:
	// lis r10,-31780
	ctx.r10.s64 = -2082734080;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lwz r11,13176(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13176);
	// lfs f30,12168(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12168);
	ctx.f30.f64 = double(temp.f32);
	// lfs f29,5488(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 5488);
	ctx.f29.f64 = double(temp.f32);
	// lfs f0,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,904(r22)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r22.u32 + 904, temp.u32);
	// beq cr6,0x8238a3b0
	if (ctx.cr6.eq) goto loc_8238A3B0;
	// fmuls f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f29.f64));
	// li r30,512
	ctx.r30.s64 = 512;
	// li r29,12
	ctx.r29.s64 = 12;
	// li r28,4
	ctx.r28.s64 = 4;
	// fsubs f13,f30,f0
	ctx.f13.f64 = double(float(ctx.f30.f64 - ctx.f0.f64));
	// fsel f0,f13,f0,f30
	ctx.f0.f64 = ctx.f13.f64 >= 0.0 ? ctx.f0.f64 : ctx.f30.f64;
	// stfs f0,904(r22)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r22.u32 + 904, temp.u32);
loc_8238A3B0:
	// clrldi r11,r30,32
	ctx.r11.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r11,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r11.u64);
	// lfd f13,168(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 168);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f28,f12
	ctx.f28.f64 = double(float(ctx.f12.f64));
	// lfs f31,2416(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2416);
	ctx.f31.f64 = double(temp.f32);
	// fmuls f11,f28,f0
	ctx.f11.f64 = double(float(ctx.f28.f64 * ctx.f0.f64));
	// fmuls f1,f11,f31
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// bl 0x823df940
	ctx.lr = 0x8238A3D8;
	sub_823DF940(ctx, base);
	// mullw r9,r28,r30
	ctx.r9.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r30.s32);
	// frsp f10,f1
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f1.f64));
	// lwz r8,160(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// fdivs f9,f30,f28
	ctx.f9.f64 = double(float(ctx.f30.f64 / ctx.f28.f64));
	// clrldi r7,r9,32
	ctx.r7.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// fmuls f8,f10,f29
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f29.f64));
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// fmuls f12,f9,f31
	ctx.f12.f64 = double(float(ctx.f9.f64 * ctx.f31.f64));
	// std r7,208(r1)
	PPC_STORE_U64(ctx.r1.u32 + 208, ctx.r7.u64);
	// lfd f6,208(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 208);
	// add r5,r29,r11
	ctx.r5.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lis r10,-31809
	ctx.r10.s64 = -2084634624;
	// lis r6,-31780
	ctx.r6.s64 = -2082734080;
	// lis r3,-32256
	ctx.r3.s64 = -2113929216;
	// lis r4,-31771
	ctx.r4.s64 = -2082144256;
	// lis r7,6
	ctx.r7.s64 = 393216;
	// lis r25,6
	ctx.r25.s64 = 393216;
	// fctidz f7,f8
	ctx.f7.s64 = (ctx.f8.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f8.f64));
	// stfd f7,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.f7.u64);
	// lwz r11,172(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// lis r23,6
	ctx.r23.s64 = 393216;
	// stw r11,908(r22)
	PPC_STORE_U32(ctx.r22.u32 + 908, ctx.r11.u32);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// stw r30,8472(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8472, ctx.r30.u32);
	// addi r30,r10,24448
	ctx.r30.s64 = ctx.r10.s64 + 24448;
	// lwz r10,160(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// stw r29,8476(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8476, ctx.r29.u32);
	// lis r21,6
	ctx.r21.s64 = 393216;
	// lwz r9,160(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// stw r28,8480(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8480, ctx.r28.u32);
	// lis r8,6
	ctx.r8.s64 = 393216;
	// lwz r10,13000(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 13000);
	// fdivs f3,f30,f4
	ctx.f3.f64 = double(float(ctx.f30.f64 / ctx.f4.f64));
	// addi r6,r4,-26624
	ctx.r6.s64 = ctx.r4.s64 + -26624;
	// lfs f0,5880(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 5880);
	ctx.f0.f64 = double(temp.f32);
	// ori r4,r7,20792
	ctx.r4.u64 = ctx.r7.u64 | 20792;
	// lfs f11,29548(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 29548);
	ctx.f11.f64 = double(temp.f32);
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// fmuls f0,f9,f0
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// lis r9,-31799
	ctx.r9.s64 = -2083979264;
	// ori r3,r25,20788
	ctx.r3.u64 = ctx.r25.u64 | 20788;
	// ori r7,r23,20796
	ctx.r7.u64 = ctx.r23.u64 | 20796;
	// ori r8,r8,20804
	ctx.r8.u64 = ctx.r8.u64 | 20804;
	// stfsx f0,r30,r4
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + ctx.r4.u32, temp.u32);
	// ori r29,r21,20800
	ctx.r29.u64 = ctx.r21.u64 | 20800;
	// lwzx r11,r5,r6
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r6.u32);
	// addi r18,r9,4608
	ctx.r18.s64 = ctx.r9.s64 + 4608;
	// fmuls f13,f3,f31
	ctx.f13.f64 = double(float(ctx.f3.f64 * ctx.f31.f64));
	// stwx r11,r30,r3
	PPC_STORE_U32(ctx.r30.u32 + ctx.r3.u32, ctx.r11.u32);
	// fmuls f11,f3,f11
	ctx.f11.f64 = double(float(ctx.f3.f64 * ctx.f11.f64));
	// stfsx f13,r30,r7
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + ctx.r7.u32, temp.u32);
	// stfsx f12,r30,r29
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + ctx.r29.u32, temp.u32);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// stfsx f11,r30,r8
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + ctx.r8.u32, temp.u32);
	// lwz r11,14592(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14592);
	// lfs f2,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f2.f64 = double(temp.f32);
	// lwz r10,8456(r18)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r18.u32 + 8456);
	// addis r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 524288;
	// lfs f0,-19192(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -19192);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r19,312
	ctx.r4.s64 = ctx.r19.s64 + 312;
	// fmuls f1,f2,f0
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// addi r3,r3,28288
	ctx.r3.s64 = ctx.r3.s64 + 28288;
	// fdivs f0,f1,f28
	ctx.f0.f64 = double(float(ctx.f1.f64 / ctx.f28.f64));
	// stfs f0,916(r22)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r22.u32 + 916, temp.u32);
	// lwz r6,32(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// rlwinm r5,r6,6,0,25
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 6) & 0xFFFFFFC0;
	// bl 0x822dd768
	ctx.lr = 0x8238A4EC;
	sub_822DD768(ctx, base);
	// lwz r11,14592(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14592);
	// mr r6,r15
	ctx.r6.u64 = ctx.r15.u64;
	// lwz r5,0(r19)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// li r10,2
	ctx.r10.s64 = 2;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// stw r5,5388(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5388, ctx.r5.u32);
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// lwz r11,14592(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14592);
	// stw r3,8736(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8736, ctx.r3.u32);
	// lwz r9,160(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// stw r10,8464(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8464, ctx.r10.u32);
	// lwz r3,160(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x82388f78
	ctx.lr = 0x8238A524;
	sub_82388F78(ctx, base);
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// lwz r10,160(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfs f13,328(r17)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r17.u32 + 328);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r11,r10,7632
	ctx.r11.s64 = ctx.r10.s64 + 7632;
	// lfs f0,29544(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 29544);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f31,5484(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 5484);
	ctx.f31.f64 = double(temp.f32);
	// stfs f12,7632(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 7632, temp.u32);
	// stfs f31,7640(r10)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r10.u32 + 7640, temp.u32);
	// stfs f31,7644(r10)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r10.u32 + 7644, temp.u32);
	// stfs f31,7636(r10)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r10.u32 + 7636, temp.u32);
	// lwz r4,160(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x823889f8
	ctx.lr = 0x8238A560;
	sub_823889F8(ctx, base);
	// bl 0x82390c00
	ctx.lr = 0x8238A564;
	sub_82390C00(ctx, base);
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// addi r29,r11,13352
	ctx.r29.s64 = ctx.r11.s64 + 13352;
	// lwz r6,4(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x8238a58c
	if (ctx.cr6.eq) goto loc_8238A58C;
loc_8238A578:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8228b0d8
	ctx.lr = 0x8238A580;
	sub_8228B0D8(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8238a578
	if (!ctx.cr6.eq) goto loc_8238A578;
loc_8238A58C:
	// lwsync 
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8239c7d0
	ctx.lr = 0x8238A598;
	sub_8239C7D0(ctx, base);
	// lwz r3,160(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x8239b7c0
	ctx.lr = 0x8238A5A0;
	sub_8239B7C0(ctx, base);
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82399ef8
	ctx.lr = 0x8238A5A8;
	sub_82399EF8(ctx, base);
	// bl 0x823983b8
	ctx.lr = 0x8238A5AC;
	sub_823983B8(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8239c8c8
	ctx.lr = 0x8238A5B4;
	sub_8239C8C8(ctx, base);
	// bl 0x821a1158
	ctx.lr = 0x8238A5B8;
	sub_821A1158(ctx, base);
	// lwz r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// stw r3,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r3.u32);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// li r3,17
	ctx.r3.s64 = 17;
	// lfs f0,256(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 256);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,192(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// lfs f13,260(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 260);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,196(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// lfs f12,264(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 264);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,200(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// bl 0x823b7ac8
	ctx.lr = 0x8238A5E4;
	sub_823B7AC8(ctx, base);
	// cmpwi cr6,r15,1
	ctx.cr6.compare<int32_t>(ctx.r15.s32, 1, ctx.xer);
	// bne cr6,0x8238a600
	if (!ctx.cr6.eq) goto loc_8238A600;
	// lwz r3,160(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x8239b118
	ctx.lr = 0x8238A5F4;
	sub_8239B118(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8238a614
	if (!ctx.cr6.eq) goto loc_8238A614;
loc_8238A600:
	// lwz r11,14592(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14592);
	// addi r10,r11,5576
	ctx.r10.s64 = ctx.r11.s64 + 5576;
	// stfs f31,5576(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 5576, temp.u32);
	// stfs f31,5580(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 5580, temp.u32);
	// stfs f30,5584(r11)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r11.u32 + 5584, temp.u32);
loc_8238A614:
	// lwz r11,14592(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14592);
	// addi r16,r26,256
	ctx.r16.s64 = ctx.r26.s64 + 256;
	// lwz r3,160(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// addi r5,r11,7936
	ctx.r5.s64 = ctx.r11.s64 + 7936;
	// stw r16,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r16.u32);
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// bl 0x823c3830
	ctx.lr = 0x8238A630;
	sub_823C3830(ctx, base);
	// lwz r11,14592(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14592);
	// lwz r9,160(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// addi r3,r11,7936
	ctx.r3.s64 = ctx.r11.s64 + 7936;
	// addi r10,r11,8000
	ctx.r10.s64 = ctx.r11.s64 + 8000;
	// addi r10,r9,7120
	ctx.r10.s64 = ctx.r9.s64 + 7120;
	// lfs f0,8000(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8000);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,7600(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 7600, temp.u32);
	// lfs f13,8004(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8004);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,7604(r9)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + 7604, temp.u32);
	// lfs f12,8008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8008);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,7608(r9)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r9.u32 + 7608, temp.u32);
	// lfs f11,8012(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8012);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,7612(r9)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r9.u32 + 7612, temp.u32);
	// lfs f10,8016(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8016);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,7616(r9)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r9.u32 + 7616, temp.u32);
	// lfs f9,8020(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8020);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,7620(r9)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r9.u32 + 7620, temp.u32);
	// lfs f8,8024(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8024);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,7624(r9)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r9.u32 + 7624, temp.u32);
	// lfs f7,8028(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8028);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,7628(r9)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r9.u32 + 7628, temp.u32);
	// bl 0x823c38e8
	ctx.lr = 0x8238A688;
	sub_823C38E8(ctx, base);
	// lwz r10,160(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r28,r10,1256
	ctx.r28.s64 = ctx.r10.s64 + 1256;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,29524
	ctx.r5.s64 = ctx.r11.s64 + 29524;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823c56f8
	ctx.lr = 0x8238A6A4;
	sub_823C56F8(ctx, base);
	// lwz r8,160(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// addi r26,r8,3208
	ctx.r26.s64 = ctx.r8.s64 + 3208;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r9,29512
	ctx.r5.s64 = ctx.r9.s64 + 29512;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x823c56f8
	ctx.lr = 0x8238A6C0;
	sub_823C56F8(ctx, base);
	// lwz r6,160(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// lis r7,-32251
	ctx.r7.s64 = -2113601536;
	// addi r27,r6,768
	ctx.r27.s64 = ctx.r6.s64 + 768;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r7,29500
	ctx.r5.s64 = ctx.r7.s64 + 29500;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823c56f8
	ctx.lr = 0x8238A6DC;
	sub_823C56F8(ctx, base);
	// lwz r3,160(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// lis r5,-32251
	ctx.r5.s64 = -2113601536;
	// addi r25,r3,2720
	ctx.r25.s64 = ctx.r3.s64 + 2720;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r5,29488
	ctx.r5.s64 = ctx.r5.s64 + 29488;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x823c56f8
	ctx.lr = 0x8238A6F8;
	sub_823C56F8(ctx, base);
	// lwz r10,160(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r21,r10,4672
	ctx.r21.s64 = ctx.r10.s64 + 4672;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,29476
	ctx.r5.s64 = ctx.r11.s64 + 29476;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x823c56f8
	ctx.lr = 0x8238A714;
	sub_823C56F8(ctx, base);
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8238a72c
	if (!ctx.cr6.eq) goto loc_8238A72C;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// li r3,11
	ctx.r3.s64 = 11;
	// bl 0x823b7ac8
	ctx.lr = 0x8238A72C;
	sub_823B7AC8(ctx, base);
loc_8238A72C:
	// bl 0x823b94e8
	ctx.lr = 0x8238A730;
	sub_823B94E8(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x823b7ac8
	ctx.lr = 0x8238A73C;
	sub_823B7AC8(ctx, base);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x82187210
	ctx.lr = 0x8238A744;
	sub_82187210(ctx, base);
	// li r11,5
	ctx.r11.s64 = 5;
	// lbz r8,928(r22)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r22.u32 + 928);
	// addi r9,r1,300
	ctx.r9.s64 = ctx.r1.s64 + 300;
	// addi r10,r22,664
	ctx.r10.s64 = ctx.r22.s64 + 664;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lwz r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// lfs f0,256(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 256);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,288(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 288, temp.u32);
	// lfs f13,260(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 260);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,292(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 292, temp.u32);
	// lfs f12,264(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 264);
	ctx.f12.f64 = double(temp.f32);
	// stb r8,300(r1)
	PPC_STORE_U8(ctx.r1.u32 + 300, ctx.r8.u8);
	// stfs f12,296(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 296, temp.u32);
loc_8238A778:
	// lwzu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stwu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x8238a778
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8238A778;
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// li r3,18
	ctx.r3.s64 = 18;
	// bl 0x823b7ac8
	ctx.lr = 0x8238A790;
	sub_823B7AC8(ctx, base);
	// lwz r3,160(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x82388c58
	ctx.lr = 0x8238A798;
	sub_82388C58(ctx, base);
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8238a924
	if (!ctx.cr6.eq) goto loc_8238A924;
	// lbz r11,8(r19)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r19.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8238a7ec
	if (ctx.cr6.eq) goto loc_8238A7EC;
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x823b7e40
	ctx.lr = 0x8238A7B8;
	sub_823B7E40(ctx, base);
	// li r3,11
	ctx.r3.s64 = 11;
	// bl 0x823b7e40
	ctx.lr = 0x8238A7C0;
	sub_823B7E40(ctx, base);
	// addis r10,r30,6
	ctx.r10.s64 = ctx.r30.s64 + 393216;
	// addis r11,r30,6
	ctx.r11.s64 = ctx.r30.s64 + 393216;
	// addi r4,r10,19712
	ctx.r4.s64 = ctx.r10.s64 + 19712;
	// addi r11,r11,19840
	ctx.r11.s64 = ctx.r11.s64 + 19840;
	// li r5,128
	ctx.r5.s64 = 128;
	// lwz r23,14592(r31)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14592);
	// lwz r10,5388(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 5388);
	// rlwinm r10,r10,7,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0xFFFFFF80;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x823de1f0
	ctx.lr = 0x8238A7E8;
	sub_823DE1F0(ctx, base);
	// b 0x8238a7f0
	goto loc_8238A7F0;
loc_8238A7EC:
	// lwz r23,14592(r31)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14592);
loc_8238A7F0:
	// lis r8,-31780
	ctx.r8.s64 = -2082734080;
	// lwz r7,5388(r23)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r23.u32 + 5388);
	// addis r11,r30,6
	ctx.r11.s64 = ctx.r30.s64 + 393216;
	// rlwinm r9,r7,7,0,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 7) & 0xFFFFFF80;
	// addi r10,r11,19840
	ctx.r10.s64 = ctx.r11.s64 + 19840;
	// lwz r11,12608(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12608);
	// add r29,r9,r10
	ctx.r29.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lbz r6,12(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x8238a858
	if (!ctx.cr6.eq) goto loc_8238A858;
	// lwz r9,8456(r18)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r18.u32 + 8456);
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// lwz r10,28(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x8238a858
	if (ctx.cr6.lt) goto loc_8238A858;
loc_8238A82C:
	// srawi r10,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 5;
	// clrlwi r8,r11,27
	ctx.r8.u64 = ctx.r11.u32 & 0x1F;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// slw r7,r20,r8
	ctx.r7.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r20.u32 << (ctx.r8.u8 & 0x3F));
	// lwzx r6,r10,r29
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r29.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// andc r5,r6,r7
	ctx.r5.u64 = ctx.r6.u64 & ~ctx.r7.u64;
	// stwx r5,r10,r29
	PPC_STORE_U32(ctx.r10.u32 + ctx.r29.u32, ctx.r5.u32);
	// lwz r4,28(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// ble cr6,0x8238a82c
	if (!ctx.cr6.gt) goto loc_8238A82C;
loc_8238A858:
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r23,5408
	ctx.r3.s64 = ctx.r23.s64 + 5408;
	// bl 0x822dd778
	ctx.lr = 0x8238A868;
	sub_822DD778(ctx, base);
	// lwz r11,12976(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 12976);
	// lbz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8238a88c
	if (ctx.cr6.eq) goto loc_8238A88C;
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lbz r10,-4176(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -4176);
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8238a890
	if (!ctx.cr6.eq) goto loc_8238A890;
loc_8238A88C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8238A890:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lwz r4,160(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8238a8b8
	if (ctx.cr6.eq) goto loc_8238A8B8;
	// lbz r11,8468(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 8468);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8238a8b8
	if (ctx.cr6.eq) goto loc_8238A8B8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8239d870
	ctx.lr = 0x8238A8B4;
	sub_8239D870(ctx, base);
	// lwz r4,160(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
loc_8238A8B8:
	// lwz r3,14592(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14592);
	// bl 0x823be8a8
	ctx.lr = 0x8238A8C0;
	sub_823BE8A8(ctx, base);
	// cmpwi cr6,r15,1
	ctx.cr6.compare<int32_t>(ctx.r15.s32, 1, ctx.xer);
	// bne cr6,0x8238a924
	if (!ctx.cr6.eq) goto loc_8238A924;
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// lwz r11,13144(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13144);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8238a8f0
	if (ctx.cr6.eq) goto loc_8238A8F0;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x82389368
	ctx.lr = 0x8238A8E4;
	sub_82389368(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// bne cr6,0x8238a8f4
	if (!ctx.cr6.eq) goto loc_8238A8F4;
loc_8238A8F0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8238A8F4:
	// stw r11,912(r22)
	PPC_STORE_U32(ctx.r22.u32 + 912, ctx.r11.u32);
	// lwz r3,14592(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14592);
	// bl 0x82393f70
	ctx.lr = 0x8238A900;
	sub_82393F70(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8238a924
	if (ctx.cr6.eq) goto loc_8238A924;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// li r3,13
	ctx.r3.s64 = 13;
	// bl 0x823b7ac8
	ctx.lr = 0x8238A918;
	sub_823B7AC8(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x823b7ac8
	ctx.lr = 0x8238A924;
	sub_823B7AC8(ctx, base);
loc_8238A924:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x823b7e40
	ctx.lr = 0x8238A92C;
	sub_823B7E40(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x823b7e40
	ctx.lr = 0x8238A934;
	sub_823B7E40(ctx, base);
	// bl 0x82399088
	ctx.lr = 0x8238A938;
	sub_82399088(ctx, base);
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x823b7e40
	ctx.lr = 0x8238A940;
	sub_823B7E40(ctx, base);
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x823b7e40
	ctx.lr = 0x8238A948;
	sub_823B7E40(ctx, base);
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x823b7e40
	ctx.lr = 0x8238A950;
	sub_823B7E40(ctx, base);
	// li r3,6
	ctx.r3.s64 = 6;
	// bl 0x823b7e40
	ctx.lr = 0x8238A958;
	sub_823B7E40(ctx, base);
	// lis r22,-32187
	ctx.r22.s64 = -2109407232;
	// lwz r3,0(r19)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// lwz r11,-19420(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + -19420);
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// bne cr6,0x8238a974
	if (!ctx.cr6.eq) goto loc_8238A974;
	// bl 0x82291610
	ctx.lr = 0x8238A970;
	sub_82291610(ctx, base);
	// lwz r11,-19420(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + -19420);
loc_8238A974:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82141e70
	ctx.lr = 0x8238A97C;
	sub_82141E70(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8238a98c
	if (ctx.cr6.eq) goto loc_8238A98C;
	// bl 0x822917e0
	ctx.lr = 0x8238A98C;
	sub_822917E0(ctx, base);
loc_8238A98C:
	// lis r11,9
	ctx.r11.s64 = 589824;
	// ori r10,r11,41432
	ctx.r10.u64 = ctx.r11.u64 | 41432;
	// lwzx r11,r30,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8238a9b4
	if (ctx.cr6.eq) goto loc_8238A9B4;
	// lis r10,9
	ctx.r10.s64 = 589824;
	// li r11,0
	ctx.r11.s64 = 0;
	// ori r9,r10,41432
	ctx.r9.u64 = ctx.r10.u64 | 41432;
	// stwx r11,r30,r9
	PPC_STORE_U32(ctx.r30.u32 + ctx.r9.u32, ctx.r11.u32);
	// bl 0x821338a0
	ctx.lr = 0x8238A9B4;
	sub_821338A0(ctx, base);
loc_8238A9B4:
	// lwz r3,-19420(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + -19420);
	// bl 0x820e4918
	ctx.lr = 0x8238A9BC;
	sub_820E4918(ctx, base);
	// li r3,7
	ctx.r3.s64 = 7;
	// bl 0x823b7e40
	ctx.lr = 0x8238A9C4;
	sub_823B7E40(ctx, base);
	// li r3,9
	ctx.r3.s64 = 9;
	// bl 0x823b7e40
	ctx.lr = 0x8238A9CC;
	sub_823B7E40(ctx, base);
	// lwz r3,160(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x82398440
	ctx.lr = 0x8238A9D4;
	sub_82398440(ctx, base);
	// lwz r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// addi r4,r1,180
	ctx.r4.s64 = ctx.r1.s64 + 180;
	// li r3,15
	ctx.r3.s64 = 15;
	// stw r11,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r11.u32);
	// bl 0x823b7ac8
	ctx.lr = 0x8238A9E8;
	sub_823B7AC8(ctx, base);
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x823b7e40
	ctx.lr = 0x8238A9F0;
	sub_823B7E40(ctx, base);
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8238aa3c
	if (!ctx.cr6.eq) goto loc_8238AA3C;
	// lbz r11,8(r19)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r19.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8238aa6c
	if (!ctx.cr6.eq) goto loc_8238AA6C;
	// li r3,11
	ctx.r3.s64 = 11;
	// bl 0x823b7e40
	ctx.lr = 0x8238AA10;
	sub_823B7E40(ctx, base);
	// addis r11,r30,6
	ctx.r11.s64 = ctx.r30.s64 + 393216;
	// addis r10,r30,6
	ctx.r10.s64 = ctx.r30.s64 + 393216;
	// addi r9,r11,19840
	ctx.r9.s64 = ctx.r11.s64 + 19840;
	// addi r4,r10,19712
	ctx.r4.s64 = ctx.r10.s64 + 19712;
	// li r5,128
	ctx.r5.s64 = 128;
	// lwz r11,14592(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14592);
	// lwz r11,5388(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5388);
	// rlwinm r11,r11,7,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0xFFFFFF80;
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bl 0x823de1f0
	ctx.lr = 0x8238AA38;
	sub_823DE1F0(ctx, base);
	// b 0x8238aa6c
	goto loc_8238AA6C;
loc_8238AA3C:
	// lwz r11,8456(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 8456);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r5,8192
	ctx.r5.s64 = 8192;
	// lwz r4,556(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 556);
	// lwz r3,552(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 552);
	// bl 0x823b5810
	ctx.lr = 0x8238AA54;
	sub_823B5810(ctx, base);
	// lwz r11,8456(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 8456);
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// li r5,2048
	ctx.r5.s64 = 2048;
	// lwz r4,564(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 564);
	// lwz r3,560(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 560);
	// bl 0x823b5810
	ctx.lr = 0x8238AA6C;
	sub_823B5810(ctx, base);
loc_8238AA6C:
	// lwz r11,8456(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 8456);
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// li r5,512
	ctx.r5.s64 = 512;
	// lwz r4,580(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 580);
	// lwz r3,576(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 576);
	// bl 0x823b5810
	ctx.lr = 0x8238AA84;
	sub_823B5810(ctx, base);
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x823b7e40
	ctx.lr = 0x8238AA8C;
	sub_823B7E40(ctx, base);
	// lwz r3,-19420(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + -19420);
	// bl 0x82141e70
	ctx.lr = 0x8238AA94;
	sub_82141E70(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8238aaa4
	if (ctx.cr6.eq) goto loc_8238AAA4;
	// bl 0x821784e0
	ctx.lr = 0x8238AAA4;
	sub_821784E0(ctx, base);
loc_8238AAA4:
	// lwz r3,160(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x82388d58
	ctx.lr = 0x8238AAAC;
	sub_82388D58(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8238aacc
	if (ctx.cr6.eq) goto loc_8238AACC;
	// lwz r3,160(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x823c4620
	ctx.lr = 0x8238AAC4;
	sub_823C4620(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823c47a8
	ctx.lr = 0x8238AACC;
	sub_823C47A8(ctx, base);
loc_8238AACC:
	// lis r11,6
	ctx.r11.s64 = 393216;
	// lwz r10,14592(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14592);
	// ori r11,r11,63908
	ctx.r11.u64 = ctx.r11.u64 | 63908;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// addis r11,r30,7
	ctx.r11.s64 = ctx.r30.s64 + 458752;
	// addi r4,r11,-1624
	ctx.r4.s64 = ctx.r11.s64 + -1624;
	// lwzx r7,r30,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r8.u32);
	// stw r7,5448(r10)
	PPC_STORE_U32(ctx.r10.u32 + 5448, ctx.r7.u32);
	// lwz r11,14592(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14592);
	// lwzx r6,r30,r8
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r8.u32);
	// addis r3,r11,6
	ctx.r3.s64 = ctx.r11.s64 + 393216;
	// rlwinm r5,r6,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r3,r3,5760
	ctx.r3.s64 = ctx.r3.s64 + 5760;
	// bl 0x822dd768
	ctx.lr = 0x8238AB08;
	sub_822DD768(ctx, base);
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8238ab54
	if (!ctx.cr6.eq) goto loc_8238AB54;
	// cmpwi cr6,r15,1
	ctx.cr6.compare<int32_t>(ctx.r15.s32, 1, ctx.xer);
	// bne cr6,0x8238ab54
	if (!ctx.cr6.eq) goto loc_8238AB54;
	// lwz r3,14592(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14592);
	// bl 0x82393f70
	ctx.lr = 0x8238AB24;
	sub_82393F70(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8238ab4c
	if (ctx.cr6.eq) goto loc_8238AB4C;
	// bl 0x82397d48
	ctx.lr = 0x8238AB34;
	sub_82397D48(ctx, base);
	// li r3,13
	ctx.r3.s64 = 13;
	// bl 0x823b7e40
	ctx.lr = 0x8238AB3C;
	sub_823B7E40(ctx, base);
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x823b7e40
	ctx.lr = 0x8238AB44;
	sub_823B7E40(ctx, base);
	// lwz r3,160(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x82388c08
	ctx.lr = 0x8238AB4C;
	sub_82388C08(ctx, base);
loc_8238AB4C:
	// lwz r3,160(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x823c5da8
	ctx.lr = 0x8238AB54;
	sub_823C5DA8(ctx, base);
loc_8238AB54:
	// bl 0x823b9518
	ctx.lr = 0x8238AB58;
	sub_823B9518(ctx, base);
	// li r3,15
	ctx.r3.s64 = 15;
	// bl 0x823b7e40
	ctx.lr = 0x8238AB60;
	sub_823B7E40(ctx, base);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// lwz r3,0(r19)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// bl 0x821871a0
	ctx.lr = 0x8238AB6C;
	sub_821871A0(ctx, base);
	// addis r11,r30,8
	ctx.r11.s64 = ctx.r30.s64 + 524288;
	// addis r9,r30,9
	ctx.r9.s64 = ctx.r30.s64 + 589824;
	// addi r8,r11,-3724
	ctx.r8.s64 = ctx.r11.s64 + -3724;
	// lis r11,7
	ctx.r11.s64 = 458752;
	// lis r10,9
	ctx.r10.s64 = 589824;
	// ori r14,r11,65396
	ctx.r14.u64 = ctx.r11.u64 | 65396;
	// addi r11,r9,8076
	ctx.r11.s64 = ctx.r9.s64 + 8076;
	// ori r7,r10,41376
	ctx.r7.u64 = ctx.r10.u64 | 41376;
	// stw r11,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r11.u32);
	// addis r10,r30,10
	ctx.r10.s64 = ctx.r30.s64 + 655360;
	// lis r4,9
	ctx.r4.s64 = 589824;
	// addi r5,r10,-29804
	ctx.r5.s64 = ctx.r10.s64 + -29804;
	// lis r3,6
	ctx.r3.s64 = 393216;
	// lis r10,7
	ctx.r10.s64 = 458752;
	// lis r6,-31799
	ctx.r6.s64 = -2083979264;
	// ori r29,r4,15244
	ctx.r29.u64 = ctx.r4.u64 | 15244;
	// ori r16,r10,65408
	ctx.r16.u64 = ctx.r10.u64 | 65408;
	// ori r15,r3,64936
	ctx.r15.u64 = ctx.r3.u64 | 64936;
	// addi r6,r6,13312
	ctx.r6.s64 = ctx.r6.s64 + 13312;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// li r3,20
	ctx.r3.s64 = 20;
	// lwz r11,8456(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 8456);
	// lwzx r10,r30,r7
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r7.u32);
	// lwzx r7,r30,r29
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r29.u32);
	// lwzx r29,r30,r16
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r16.u32);
	// lwz r6,20(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + 20);
	// lwz r9,592(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 592);
	// stw r5,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r5.u32);
	// stw r8,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r8.u32);
	// lwz r5,164(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwzx r8,r30,r15
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r15.u32);
	// stw r9,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r9.u32);
	// lwzx r9,r30,r14
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r14.u32);
	// stw r10,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r10.u32);
	// stw r5,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r5.u32);
	// lwz r11,544(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 544);
	// stw r11,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r11.u32);
	// sth r6,264(r1)
	PPC_STORE_U16(ctx.r1.u32 + 264, ctx.r6.u16);
	// stw r7,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r7.u32);
	// stw r8,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r8.u32);
	// stw r29,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r29.u32);
	// stw r9,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r9.u32);
	// bl 0x823b7ac8
	ctx.lr = 0x8238AC18;
	sub_823B7AC8(ctx, base);
	// lwz r10,4(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// lis r9,6
	ctx.r9.s64 = 393216;
	// lis r8,6
	ctx.r8.s64 = 393216;
	// ori r7,r9,20664
	ctx.r7.u64 = ctx.r9.u64 | 20664;
	// ori r6,r8,20708
	ctx.r6.u64 = ctx.r8.u64 | 20708;
	// stw r10,80(r26)
	PPC_STORE_U32(ctx.r26.u32 + 80, ctx.r10.u32);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r11,r26,80
	ctx.r11.s64 = ctx.r26.s64 + 80;
	// addi r29,r17,256
	ctx.r29.s64 = ctx.r17.s64 + 256;
	// lwz r4,160(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// stw r4,84(r26)
	PPC_STORE_U32(ctx.r26.u32 + 84, ctx.r4.u32);
	// lfs f0,256(r17)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r17.u32 + 256);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,88(r26)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r26.u32 + 88, temp.u32);
	// lfs f13,260(r17)
	temp.u32 = PPC_LOAD_U32(ctx.r17.u32 + 260);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,92(r26)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r26.u32 + 92, temp.u32);
	// lfs f12,264(r17)
	temp.u32 = PPC_LOAD_U32(ctx.r17.u32 + 264);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,96(r26)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r26.u32 + 96, temp.u32);
	// stw r20,104(r26)
	PPC_STORE_U32(ctx.r26.u32 + 104, ctx.r20.u32);
	// lwzx r4,r30,r7
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r7.u32);
	// lwzx r3,r30,r6
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r6.u32);
	// bl 0x823c5798
	ctx.lr = 0x8238AC6C;
	sub_823C5798(ctx, base);
	// addi r4,r26,112
	ctx.r4.s64 = ctx.r26.s64 + 112;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x823b01a8
	ctx.lr = 0x8238AC78;
	sub_823B01A8(ctx, base);
	// li r4,5
	ctx.r4.s64 = 5;
	// lwz r3,160(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x82388b48
	ctx.lr = 0x8238AC84;
	sub_82388B48(ctx, base);
	// lwz r10,4(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// addi r11,r27,80
	ctx.r11.s64 = ctx.r27.s64 + 80;
	// li r3,-1
	ctx.r3.s64 = -1;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lis r9,6
	ctx.r9.s64 = 393216;
	// stw r10,80(r27)
	PPC_STORE_U32(ctx.r27.u32 + 80, ctx.r10.u32);
	// lis r8,6
	ctx.r8.s64 = 393216;
	// lwz r4,160(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// ori r7,r9,20652
	ctx.r7.u64 = ctx.r9.u64 | 20652;
	// stw r4,84(r27)
	PPC_STORE_U32(ctx.r27.u32 + 84, ctx.r4.u32);
	// ori r6,r8,20696
	ctx.r6.u64 = ctx.r8.u64 | 20696;
	// lfs f11,256(r17)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r17.u32 + 256);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,88(r27)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r27.u32 + 88, temp.u32);
	// lfs f10,260(r17)
	temp.u32 = PPC_LOAD_U32(ctx.r17.u32 + 260);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,92(r27)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r27.u32 + 92, temp.u32);
	// lfs f9,264(r17)
	temp.u32 = PPC_LOAD_U32(ctx.r17.u32 + 264);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,96(r27)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r27.u32 + 96, temp.u32);
	// stw r20,104(r27)
	PPC_STORE_U32(ctx.r27.u32 + 104, ctx.r20.u32);
	// stw r3,108(r27)
	PPC_STORE_U32(ctx.r27.u32 + 108, ctx.r3.u32);
	// lwzx r4,r30,r7
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r7.u32);
	// lwzx r3,r30,r6
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r6.u32);
	// bl 0x823c5798
	ctx.lr = 0x8238ACDC;
	sub_823C5798(ctx, base);
	// lwz r11,14592(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14592);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r4,r11,10608
	ctx.r4.s64 = ctx.r11.s64 + 10608;
	// bl 0x823b01a8
	ctx.lr = 0x8238ACEC;
	sub_823B01A8(ctx, base);
	// lwz r11,14592(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14592);
	// addi r3,r27,112
	ctx.r3.s64 = ctx.r27.s64 + 112;
	// addi r4,r11,10608
	ctx.r4.s64 = ctx.r11.s64 + 10608;
	// li r5,376
	ctx.r5.s64 = 376;
	// bl 0x823de1f0
	ctx.lr = 0x8238AD00;
	sub_823DE1F0(ctx, base);
	// li r4,13
	ctx.r4.s64 = 13;
	// lwz r3,160(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x82388b48
	ctx.lr = 0x8238AD0C;
	sub_82388B48(ctx, base);
	// lwz r10,4(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// lis r3,6
	ctx.r3.s64 = 393216;
	// lis r11,6
	ctx.r11.s64 = 393216;
	// ori r9,r3,20668
	ctx.r9.u64 = ctx.r3.u64 | 20668;
	// ori r8,r11,20712
	ctx.r8.u64 = ctx.r11.u64 | 20712;
	// stw r10,80(r28)
	PPC_STORE_U32(ctx.r28.u32 + 80, ctx.r10.u32);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r7,160(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// addi r11,r28,80
	ctx.r11.s64 = ctx.r28.s64 + 80;
	// stw r7,84(r28)
	PPC_STORE_U32(ctx.r28.u32 + 84, ctx.r7.u32);
	// lfs f8,256(r17)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r17.u32 + 256);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,88(r28)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r28.u32 + 88, temp.u32);
	// lfs f7,260(r17)
	temp.u32 = PPC_LOAD_U32(ctx.r17.u32 + 260);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,92(r28)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r28.u32 + 92, temp.u32);
	// lfs f6,264(r17)
	temp.u32 = PPC_LOAD_U32(ctx.r17.u32 + 264);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,96(r28)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r28.u32 + 96, temp.u32);
	// stw r20,104(r28)
	PPC_STORE_U32(ctx.r28.u32 + 104, ctx.r20.u32);
	// lwzx r4,r30,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	// lwzx r3,r30,r8
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r8.u32);
	// bl 0x823c5708
	ctx.lr = 0x8238AD5C;
	sub_823C5708(ctx, base);
	// lwz r11,14592(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14592);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r11,10984
	ctx.r4.s64 = ctx.r11.s64 + 10984;
	// bl 0x823b0230
	ctx.lr = 0x8238AD6C;
	sub_823B0230(ctx, base);
	// lwz r6,160(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// li r5,488
	ctx.r5.s64 = 488;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r6,1744
	ctx.r3.s64 = ctx.r6.s64 + 1744;
	// bl 0x823de1f0
	ctx.lr = 0x8238AD80;
	sub_823DE1F0(ctx, base);
	// lwz r3,160(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// li r5,488
	ctx.r5.s64 = 488;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r3,2232
	ctx.r3.s64 = ctx.r3.s64 + 2232;
	// bl 0x823de1f0
	ctx.lr = 0x8238AD94;
	sub_823DE1F0(ctx, base);
	// lwz r11,14592(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14592);
	// addi r4,r11,11360
	ctx.r4.s64 = ctx.r11.s64 + 11360;
	// addi r3,r11,10984
	ctx.r3.s64 = ctx.r11.s64 + 10984;
	// bl 0x823a8e30
	ctx.lr = 0x8238ADA4;
	sub_823A8E30(ctx, base);
	// lwz r11,14592(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14592);
	// addi r4,r11,11736
	ctx.r4.s64 = ctx.r11.s64 + 11736;
	// addi r3,r11,11360
	ctx.r3.s64 = ctx.r11.s64 + 11360;
	// bl 0x823a8e30
	ctx.lr = 0x8238ADB4;
	sub_823A8E30(ctx, base);
	// lwz r11,14592(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14592);
	// addi r3,r28,112
	ctx.r3.s64 = ctx.r28.s64 + 112;
	// li r5,376
	ctx.r5.s64 = 376;
	// addi r4,r11,10984
	ctx.r4.s64 = ctx.r11.s64 + 10984;
	// bl 0x823de1f0
	ctx.lr = 0x8238ADC8;
	sub_823DE1F0(ctx, base);
	// lwz r11,14592(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14592);
	// li r5,376
	ctx.r5.s64 = 376;
	// addi r4,r11,11360
	ctx.r4.s64 = ctx.r11.s64 + 11360;
	// lwz r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// addi r3,r11,1856
	ctx.r3.s64 = ctx.r11.s64 + 1856;
	// bl 0x823de1f0
	ctx.lr = 0x8238ADE0;
	sub_823DE1F0(ctx, base);
	// lwz r11,14592(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14592);
	// lwz r10,160(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// li r5,376
	ctx.r5.s64 = 376;
	// addi r4,r11,11736
	ctx.r4.s64 = ctx.r11.s64 + 11736;
	// addi r3,r10,2344
	ctx.r3.s64 = ctx.r10.s64 + 2344;
	// bl 0x823de1f0
	ctx.lr = 0x8238ADF8;
	sub_823DE1F0(ctx, base);
	// li r4,14
	ctx.r4.s64 = 14;
	// lwz r3,160(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x82388b48
	ctx.lr = 0x8238AE04;
	sub_82388B48(ctx, base);
	// li r4,15
	ctx.r4.s64 = 15;
	// lwz r3,160(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x82388b48
	ctx.lr = 0x8238AE10;
	sub_82388B48(ctx, base);
	// li r4,16
	ctx.r4.s64 = 16;
	// lwz r3,160(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x82388b48
	ctx.lr = 0x8238AE1C;
	sub_82388B48(ctx, base);
	// lwz r11,14592(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14592);
	// lis r9,-32199
	ctx.r9.s64 = -2110193664;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r9,-29936
	ctx.r3.s64 = ctx.r9.s64 + -29936;
	// stw r23,7912(r11)
	PPC_STORE_U32(ctx.r11.u32 + 7912, ctx.r23.u32);
	// bl 0x823b7840
	ctx.lr = 0x8238AE34;
	sub_823B7840(ctx, base);
	// lwz r3,-19420(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + -19420);
	// bl 0x820fa180
	ctx.lr = 0x8238AE3C;
	sub_820FA180(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8238ae50
	if (ctx.cr6.eq) goto loc_8238AE50;
	// lwz r3,-19420(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + -19420);
	// bl 0x820fb5c0
	ctx.lr = 0x8238AE50;
	sub_820FB5C0(ctx, base);
loc_8238AE50:
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x823b7e40
	ctx.lr = 0x8238AE58;
	sub_823B7E40(ctx, base);
	// li r3,17
	ctx.r3.s64 = 17;
	// bl 0x823b7e40
	ctx.lr = 0x8238AE60;
	sub_823B7E40(ctx, base);
	// li r3,18
	ctx.r3.s64 = 18;
	// bl 0x823b7e40
	ctx.lr = 0x8238AE68;
	sub_823B7E40(ctx, base);
	// li r3,19
	ctx.r3.s64 = 19;
	// bl 0x823b7e40
	ctx.lr = 0x8238AE70;
	sub_823B7E40(ctx, base);
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x823b7e40
	ctx.lr = 0x8238AE78;
	sub_823B7E40(ctx, base);
	// lwz r3,0(r19)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// bl 0x8219ae30
	ctx.lr = 0x8238AE80;
	sub_8219AE30(ctx, base);
	// lwz r11,14592(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14592);
	// lwz r10,160(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// li r4,1536
	ctx.r4.s64 = 1536;
	// addis r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 196608;
	// addi r11,r11,-3456
	ctx.r11.s64 = ctx.r11.s64 + -3456;
	// stw r11,2764(r10)
	PPC_STORE_U32(ctx.r10.u32 + 2764, ctx.r11.u32);
	// lwz r9,160(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// addi r3,r9,2764
	ctx.r3.s64 = ctx.r9.s64 + 2764;
	// bl 0x823bdff0
	ctx.lr = 0x8238AEA4;
	sub_823BDFF0(ctx, base);
	// lwz r11,14592(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14592);
	// lwz r7,160(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// li r4,768
	ctx.r4.s64 = 768;
	// addis r8,r11,3
	ctx.r8.s64 = ctx.r11.s64 + 196608;
	// addi r8,r8,21120
	ctx.r8.s64 = ctx.r8.s64 + 21120;
	// stw r8,2772(r7)
	PPC_STORE_U32(ctx.r7.u32 + 2772, ctx.r8.u32);
	// lwz r6,160(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// addi r3,r6,2772
	ctx.r3.s64 = ctx.r6.s64 + 2772;
	// bl 0x823b8db8
	ctx.lr = 0x8238AEC8;
	sub_823B8DB8(ctx, base);
	// lwz r11,14592(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14592);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r10,5452(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5452);
	// addi r4,r10,11432
	ctx.r4.s64 = ctx.r10.s64 + 11432;
	// rlwinm r10,r4,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// stw r3,2756(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2756, ctx.r3.u32);
	// lwz r11,14592(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14592);
	// lwz r10,160(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// addi r3,r10,2756
	ctx.r3.s64 = ctx.r10.s64 + 2756;
	// lwz r9,5452(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5452);
	// subfic r4,r9,640
	ctx.xer.ca = ctx.r9.u32 <= 640;
	ctx.r4.s64 = 640 - ctx.r9.s64;
	// bl 0x82395390
	ctx.lr = 0x8238AF00;
	sub_82395390(ctx, base);
	// addi r11,r25,80
	ctx.r11.s64 = ctx.r25.s64 + 80;
	// lwz r7,160(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// lwz r10,2760(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 2760);
	// lwz r11,14592(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14592);
	// lwz r9,5452(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5452);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lis r10,6
	ctx.r10.s64 = 393216;
	// stw r6,5452(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5452, ctx.r6.u32);
	// lwz r11,4(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// stw r11,80(r25)
	PPC_STORE_U32(ctx.r25.u32 + 80, ctx.r11.u32);
	// lis r11,6
	ctx.r11.s64 = 393216;
	// lwz r5,160(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// ori r9,r11,20700
	ctx.r9.u64 = ctx.r11.u64 | 20700;
	// stw r5,84(r25)
	PPC_STORE_U32(ctx.r25.u32 + 84, ctx.r5.u32);
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,88(r25)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r25.u32 + 88, temp.u32);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// lfs f13,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,92(r25)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r25.u32 + 92, temp.u32);
	// lfs f12,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,96(r25)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r25.u32 + 96, temp.u32);
	// stw r8,108(r25)
	PPC_STORE_U32(ctx.r25.u32 + 108, ctx.r8.u32);
	// ori r8,r10,20656
	ctx.r8.u64 = ctx.r10.u64 | 20656;
	// stw r20,104(r25)
	PPC_STORE_U32(ctx.r25.u32 + 104, ctx.r20.u32);
	// lwzx r3,r30,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	// lwzx r4,r30,r8
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r8.u32);
	// beq cr6,0x8238af88
	if (ctx.cr6.eq) goto loc_8238AF88;
	// bl 0x823c5708
	ctx.lr = 0x8238AF78;
	sub_823C5708(ctx, base);
	// lwz r4,168(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// lwz r3,160(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x823c52b8
	ctx.lr = 0x8238AF84;
	sub_823C52B8(ctx, base);
	// b 0x8238af8c
	goto loc_8238AF8C;
loc_8238AF88:
	// bl 0x823c5798
	ctx.lr = 0x8238AF8C;
	sub_823C5798(ctx, base);
loc_8238AF8C:
	// lwz r11,14592(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14592);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r4,r11,12112
	ctx.r4.s64 = ctx.r11.s64 + 12112;
	// bl 0x823b01a8
	ctx.lr = 0x8238AF9C;
	sub_823B01A8(ctx, base);
	// lwz r3,14592(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14592);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// lwz r4,160(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// addi r6,r3,12488
	ctx.r6.s64 = ctx.r3.s64 + 12488;
	// bl 0x823b02d0
	ctx.lr = 0x8238AFB0;
	sub_823B02D0(ctx, base);
	// li r4,17
	ctx.r4.s64 = 17;
	// lwz r3,160(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x82388b48
	ctx.lr = 0x8238AFBC;
	sub_82388B48(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,160(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x82388b48
	ctx.lr = 0x8238AFC8;
	sub_82388B48(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,160(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x82388b48
	ctx.lr = 0x8238AFD4;
	sub_82388B48(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r3,160(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x82388b48
	ctx.lr = 0x8238AFE0;
	sub_82388B48(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r3,160(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x82388b48
	ctx.lr = 0x8238AFEC;
	sub_82388B48(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// lwz r3,160(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x82388b48
	ctx.lr = 0x8238AFF8;
	sub_82388B48(ctx, base);
	// li r3,21
	ctx.r3.s64 = 21;
	// bl 0x823b7e40
	ctx.lr = 0x8238B000;
	sub_823B7E40(ctx, base);
	// lwz r11,14592(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14592);
	// lwz r8,160(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,5456(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5456);
	// addi r10,r10,9384
	ctx.r10.s64 = ctx.r10.s64 + 9384;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r9,4708(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4708, ctx.r9.u32);
	// lwz r11,14592(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14592);
	// lwz r7,160(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// addi r3,r7,4708
	ctx.r3.s64 = ctx.r7.s64 + 4708;
	// lwz r6,5456(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5456);
	// subfic r4,r6,2048
	ctx.xer.ca = ctx.r6.u32 <= 2048;
	ctx.r4.s64 = 2048 - ctx.r6.s64;
	// bl 0x82395390
	ctx.lr = 0x8238B038;
	sub_82395390(ctx, base);
	// lwz r11,14592(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14592);
	// lwz r5,160(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// li r4,256
	ctx.r4.s64 = 256;
	// lwz r9,5456(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5456);
	// lwz r10,4712(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4712);
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r3,5456(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5456, ctx.r3.u32);
	// lwz r11,14592(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14592);
	// lwz r10,160(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// addis r9,r11,6
	ctx.r9.s64 = ctx.r11.s64 + 393216;
	// addi r9,r9,4736
	ctx.r9.s64 = ctx.r9.s64 + 4736;
	// stw r9,4736(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4736, ctx.r9.u32);
	// lwz r8,160(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// addi r3,r8,4732
	ctx.r3.s64 = ctx.r8.s64 + 4732;
	// bl 0x823be420
	ctx.lr = 0x8238B074;
	sub_823BE420(ctx, base);
	// lwz r11,14592(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14592);
	// lwz r6,160(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r7,r11,3328
	ctx.r7.s64 = ctx.r11.s64 + 3328;
	// stw r7,4744(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4744, ctx.r7.u32);
	// lwz r5,160(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// addi r3,r5,4744
	ctx.r3.s64 = ctx.r5.s64 + 4744;
	// bl 0x823b8a78
	ctx.lr = 0x8238B094;
	sub_823B8A78(ctx, base);
	// lwz r4,8(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// lwz r3,160(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x82388e18
	ctx.lr = 0x8238B0A0;
	sub_82388E18(ctx, base);
	// stw r3,80(r21)
	PPC_STORE_U32(ctx.r21.u32 + 80, ctx.r3.u32);
	// lwz r4,160(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// stw r4,84(r21)
	PPC_STORE_U32(ctx.r21.u32 + 84, ctx.r4.u32);
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,88(r21)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r21.u32 + 88, temp.u32);
	// lfs f13,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,92(r21)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r21.u32 + 92, temp.u32);
	// lfs f12,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,96(r21)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r21.u32 + 96, temp.u32);
	// stw r20,108(r21)
	PPC_STORE_U32(ctx.r21.u32 + 108, ctx.r20.u32);
	// stw r20,104(r21)
	PPC_STORE_U32(ctx.r21.u32 + 104, ctx.r20.u32);
	// lwz r11,14592(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14592);
	// lwz r3,7920(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 7920);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8238b0e8
	if (ctx.cr6.eq) goto loc_8238B0E8;
	// lwz r11,8456(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 8456);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// stw r11,100(r21)
	PPC_STORE_U32(ctx.r21.u32 + 100, ctx.r11.u32);
loc_8238B0E8:
	// lis r11,6
	ctx.r11.s64 = 393216;
	// lis r10,6
	ctx.r10.s64 = 393216;
	// ori r9,r11,20704
	ctx.r9.u64 = ctx.r11.u64 | 20704;
	// ori r8,r10,20660
	ctx.r8.u64 = ctx.r10.u64 | 20660;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// lwzx r3,r30,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	// lwzx r4,r30,r8
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r8.u32);
	// bl 0x823c5798
	ctx.lr = 0x8238B108;
	sub_823C5798(ctx, base);
	// addi r4,r21,112
	ctx.r4.s64 = ctx.r21.s64 + 112;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x823b01a8
	ctx.lr = 0x8238B114;
	sub_823B01A8(ctx, base);
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r3,160(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x82388b48
	ctx.lr = 0x8238B120;
	sub_82388B48(ctx, base);
	// lwz r7,176(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// lbz r6,772(r7)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r7.u32 + 772);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8238b144
	if (ctx.cr6.eq) goto loc_8238B144;
	// lwz r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// addi r3,r11,4672
	ctx.r3.s64 = ctx.r11.s64 + 4672;
	// bl 0x823891c0
	ctx.lr = 0x8238B13C;
	sub_823891C0(ctx, base);
	// lwz r10,160(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// stb r3,428(r10)
	PPC_STORE_U8(ctx.r10.u32 + 428, ctx.r3.u8);
loc_8238B144:
	// addi r1,r1,544
	ctx.r1.s64 = ctx.r1.s64 + 544;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x823de074
	ctx.lr = 0x8238B150;
	__restfpr_28(ctx, base);
	// b 0x823ddf90
	__restgprlr_14(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8238A288) {
	__imp__sub_8238A288(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238B154) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8238B154) {
	__imp__sub_8238B154(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238B158) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x8238B160;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// li r4,16184
	ctx.r4.s64 = 16184;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822db808
	ctx.lr = 0x8238B178;
	sub_822DB808(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822db8f0
	ctx.lr = 0x8238B180;
	sub_822DB8F0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82391220
	ctx.lr = 0x8238B188;
	sub_82391220(ctx, base);
	// bl 0x821410c8
	ctx.lr = 0x8238B18C;
	sub_821410C8(ctx, base);
	// bl 0x82393cc0
	ctx.lr = 0x8238B190;
	sub_82393CC0(ctx, base);
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// lwz r3,-19420(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19420);
	// bl 0x82112298
	ctx.lr = 0x8238B19C;
	sub_82112298(ctx, base);
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// lfs f0,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// addi r28,r31,24
	ctx.r28.s64 = ctx.r31.s64 + 24;
	// addi r29,r11,13536
	ctx.r29.s64 = ctx.r11.s64 + 13536;
	// stfs f0,340(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 340, temp.u32);
	// lfs f0,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,344(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 344, temp.u32);
	// lfs f0,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,348(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 348, temp.u32);
	// lfs f0,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,352(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 352, temp.u32);
	// lfs f0,40(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,356(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 356, temp.u32);
	// lfs f0,44(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,360(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 360, temp.u32);
	// bl 0x82391570
	ctx.lr = 0x8238B1DC;
	sub_82391570(ctx, base);
	// addi r27,r31,16
	ctx.r27.s64 = ctx.r31.s64 + 16;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82389878
	ctx.lr = 0x8238B1F0;
	sub_82389878(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823898f0
	ctx.lr = 0x8238B1FC;
	sub_823898F0(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// addi r11,r11,4520
	ctx.r11.s64 = ctx.r11.s64 + 4520;
	// stw r10,280(r30)
	PPC_STORE_U32(ctx.r30.u32 + 280, ctx.r10.u32);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r9,284(r30)
	PPC_STORE_U32(ctx.r30.u32 + 284, ctx.r9.u32);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r8,288(r30)
	PPC_STORE_U32(ctx.r30.u32 + 288, ctx.r8.u32);
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r7,292(r30)
	PPC_STORE_U32(ctx.r30.u32 + 292, ctx.r7.u32);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mullw r5,r6,r10
	ctx.r5.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r10.s32);
	// divwu r4,r5,r9
	ctx.r4.u32 = ctx.r5.u32 / ctx.r9.u32;
	// stw r4,264(r30)
	PPC_STORE_U32(ctx.r30.u32 + 264, ctx.r4.u32);
	// rotlwi r7,r4,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mullw r10,r3,r10
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r10.s32);
	// divwu r9,r10,r9
	ctx.r9.u32 = ctx.r10.u32 / ctx.r9.u32;
	// stw r9,268(r30)
	PPC_STORE_U32(ctx.r30.u32 + 268, ctx.r9.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r6,r8,r9
	ctx.r6.u64 = ctx.r8.u64 + ctx.r9.u64;
	// mullw r5,r6,r10
	ctx.r5.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r10.s32);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r4,268(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 268);
	// divwu r3,r5,r9
	ctx.r3.u32 = ctx.r5.u32 / ctx.r9.u32;
	// subf r10,r7,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r7.s64;
	// stw r10,272(r30)
	PPC_STORE_U32(ctx.r30.u32 + 272, ctx.r10.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// mullw r8,r9,r10
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// divwu r7,r8,r9
	ctx.r7.u32 = ctx.r8.u32 / ctx.r9.u32;
	// subf r6,r4,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r4.s64;
	// stw r6,276(r30)
	PPC_STORE_U32(ctx.r30.u32 + 276, ctx.r6.u32);
	// lbz r5,16212(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16212);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8238b334
	if (ctx.cr6.eq) goto loc_8238B334;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,16196(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16196);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mullw r7,r8,r10
	ctx.r7.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// divwu r6,r7,r9
	ctx.r6.u32 = ctx.r7.u32 / ctx.r9.u32;
	// stw r6,296(r30)
	PPC_STORE_U32(ctx.r30.u32 + 296, ctx.r6.u32);
	// rotlwi r6,r6,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r5,16200(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16200);
	// mullw r4,r5,r10
	ctx.r4.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r10.s32);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// divwu r3,r4,r10
	ctx.r3.u32 = ctx.r4.u32 / ctx.r10.u32;
	// stw r3,300(r30)
	PPC_STORE_U32(ctx.r30.u32 + 300, ctx.r3.u32);
	// rotlwi r5,r3,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r8,16204(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16204);
	// lwz r7,16196(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16196);
	// add r4,r8,r7
	ctx.r4.u64 = ctx.r8.u64 + ctx.r7.u64;
	// mullw r3,r4,r10
	ctx.r3.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r10.s32);
	// divwu r10,r3,r9
	ctx.r10.u32 = ctx.r3.u32 / ctx.r9.u32;
	// subf r9,r6,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r6.s64;
	// stw r9,304(r30)
	PPC_STORE_U32(ctx.r30.u32 + 304, ctx.r9.u32);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,16208(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16208);
	// lwz r8,16200(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16200);
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// mullw r7,r8,r11
	ctx.r7.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r11.s32);
	// divwu r6,r7,r10
	ctx.r6.u32 = ctx.r7.u32 / ctx.r10.u32;
	// subf r5,r5,r6
	ctx.r5.s64 = ctx.r6.s64 - ctx.r5.s64;
	// stw r5,308(r30)
	PPC_STORE_U32(ctx.r30.u32 + 308, ctx.r5.u32);
	// b 0x8238b358
	goto loc_8238B358;
loc_8238B334:
	// lwz r11,264(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 264);
	// addi r10,r30,296
	ctx.r10.s64 = ctx.r30.s64 + 296;
	// lwz r9,268(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 268);
	// lwz r8,272(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 272);
	// lwz r7,276(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 276);
	// stw r11,296(r30)
	PPC_STORE_U32(ctx.r30.u32 + 296, ctx.r11.u32);
	// stw r9,300(r30)
	PPC_STORE_U32(ctx.r30.u32 + 300, ctx.r9.u32);
	// stw r8,304(r30)
	PPC_STORE_U32(ctx.r30.u32 + 304, ctx.r8.u32);
	// stw r7,308(r30)
	PPC_STORE_U32(ctx.r30.u32 + 308, ctx.r7.u32);
loc_8238B358:
	// addi r31,r30,132
	ctx.r31.s64 = ctx.r30.s64 + 132;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823c6eb8
	ctx.lr = 0x8238B368;
	sub_823C6EB8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r30,312
	ctx.r3.s64 = ctx.r30.s64 + 312;
	// bl 0x82389ca8
	ctx.lr = 0x8238B374;
	sub_82389CA8(ctx, base);
	// bl 0x82389ab8
	ctx.lr = 0x8238B378;
	sub_82389AB8(ctx, base);
	// lis r9,-31780
	ctx.r9.s64 = -2082734080;
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// addi r10,r11,400
	ctx.r10.s64 = ctx.r11.s64 + 400;
	// lwz r11,12912(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12912);
	// lbz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8238b3b0
	if (ctx.cr6.eq) goto loc_8238B3B0;
	// lfs f0,256(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 256);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,260(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 260);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,264(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 264);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,688(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 688, temp.u32);
	// stfs f13,692(r29)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r29.u32 + 692, temp.u32);
	// stfs f12,696(r29)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r29.u32 + 696, temp.u32);
	// b 0x8238b3c8
	goto loc_8238B3C8;
loc_8238B3B0:
	// lfs f0,8(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,688(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 688, temp.u32);
	// lfs f0,12(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,692(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 692, temp.u32);
	// lfs f0,16(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,696(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 696, temp.u32);
loc_8238B3C8:
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lfs f13,4(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,936(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 936);
	ctx.f12.f64 = double(temp.f32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f0,-21292(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -21292);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f13,12168(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12168);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f11,f12
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// stfs f0,700(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 700, temp.u32);
	// fsubs f10,f13,f0
	ctx.f10.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fsel f0,f10,f0,f13
	ctx.f0.f64 = ctx.f10.f64 >= 0.0 ? ctx.f0.f64 : ctx.f13.f64;
	// stfs f0,704(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 704, temp.u32);
	// lbz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x8238b408
	if (!ctx.cr6.eq) goto loc_8238B408;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
loc_8238B408:
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8238a288
	ctx.lr = 0x8238B41C;
	sub_8238A288(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822db8d8
	ctx.lr = 0x8238B424;
	sub_822DB8D8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8238B158) {
	__imp__sub_8238B158(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238B42C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8238B42C) {
	__imp__sub_8238B42C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238B430) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmplwi cr6,r4,32
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 32, ctx.xer);
	// blt cr6,0x8238b45c
	if (ctx.cr6.lt) goto loc_8238B45C;
	// cmplwi cr6,r4,127
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 127, ctx.xer);
	// bgt cr6,0x8238b45c
	if (ctx.cr6.gt) goto loc_8238B45C;
	// addi r11,r4,-32
	ctx.r11.s64 = ctx.r4.s64 + -32;
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
loc_8238B45C:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r7,96
	ctx.r7.s64 = 96;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// cmpwi cr6,r8,96
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 96, ctx.xer);
	// blt cr6,0x8238b4b4
	if (ctx.cr6.lt) goto loc_8238B4B4;
	// lwz r6,20(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
loc_8238B474:
	// add r11,r7,r8
	ctx.r11.u64 = ctx.r7.u64 + ctx.r8.u64;
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// addze r11,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r11.s64 = temp.s64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r9,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r10,r6
	ctx.r9.u64 = ctx.r10.u64 + ctx.r6.u64;
	// lhzx r10,r10,r6
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r6.u32);
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x8238b4c0
	if (ctx.cr6.eq) goto loc_8238B4C0;
	// bge cr6,0x8238b4a8
	if (!ctx.cr6.lt) goto loc_8238B4A8;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// b 0x8238b4ac
	goto loc_8238B4AC;
loc_8238B4A8:
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
loc_8238B4AC:
	// cmpw cr6,r7,r8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r8.s32, ctx.xer);
	// ble cr6,0x8238b474
	if (!ctx.cr6.gt) goto loc_8238B474;
loc_8238B4B4:
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r3,r11,336
	ctx.r3.s64 = ctx.r11.s64 + 336;
	// blr 
	return;
loc_8238B4C0:
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8238B430) {
	__imp__sub_8238B430(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238B4C8) {
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
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// bl 0x822d4018
	ctx.lr = 0x8238B4E0;
	sub_822D4018(ctx, base);
	// lis r11,2114
	ctx.r11.s64 = 138543104;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// ori r10,r11,4229
	ctx.r10.u64 = ctx.r11.u64 | 4229;
	// addi r7,r9,29716
	ctx.r7.s64 = ctx.r9.s64 + 29716;
	// mulhwu r11,r3,r10
	ctx.r11.u64 = (uint64_t(ctx.r3.u32) * uint64_t(ctx.r10.u32)) >> 32;
	// subf r8,r11,r3
	ctx.r8.s64 = ctx.r3.s64 - ctx.r11.s64;
	// rlwinm r10,r8,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r5,r6,27,5,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x7FFFFFF;
	// mulli r4,r5,62
	ctx.r4.s64 = ctx.r5.s64 * 62;
	// subf r3,r4,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r4.s64;
	// lbzx r11,r3,r7
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r7.u32);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8238B4C8) {
	__imp__sub_8238B4C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238B524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8238B524) {
	__imp__sub_8238B524(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238B528) {
	PPC_FUNC_PROLOGUE();
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,22
	ctx.r3.s64 = 22;
	// b 0x82177148
	sub_82177148(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8238B528) {
	__imp__sub_8238B528(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238B534) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8238B534) {
	__imp__sub_8238B534(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238B538) {
	PPC_FUNC_PROLOGUE();
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,22
	ctx.r3.s64 = 22;
	// b 0x82177148
	sub_82177148(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8238B538) {
	__imp__sub_8238B538(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238B544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8238B544) {
	__imp__sub_8238B544(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238B548) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// std r9,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r9.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfs f0,14004(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 14004);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f1,f0
	ctx.f12.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// frsp f11,f13
	ctx.f11.f64 = double(float(ctx.f13.f64));
	// fdivs f1,f12,f11
	ctx.f1.f64 = double(float(ctx.f12.f64 / ctx.f11.f64));
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8238B548) {
	__imp__sub_8238B548(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238B574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8238B574) {
	__imp__sub_8238B574(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238B578) {
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
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x8238b430
	ctx.lr = 0x8238B594;
	sub_8238B430(ctx, base);
	// lbz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8238B578) {
	__imp__sub_8238B578(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238B5A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x8238B5B0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r3.u32);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bgt cr6,0x8238b5d8
	if (ctx.cr6.gt) goto loc_8238B5D8;
	// lis r28,32767
	ctx.r28.s64 = 2147418112;
	// ori r28,r28,65535
	ctx.r28.u64 = ctx.r28.u64 | 65535;
loc_8238B5D8:
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8238b688
	if (ctx.cr6.eq) goto loc_8238B688;
loc_8238B5E8:
	// cmpw cr6,r27,r28
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r28.s32, ctx.xer);
	// bge cr6,0x8238b688
	if (!ctx.cr6.lt) goto loc_8238B688;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,148
	ctx.r3.s64 = ctx.r1.s64 + 148;
	// bl 0x822b7e18
	ctx.lr = 0x8238B5FC;
	sub_822B7E18(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,13
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 13, ctx.xer);
	// beq cr6,0x8238b674
	if (ctx.cr6.eq) goto loc_8238B674;
	// cmplwi cr6,r3,10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 10, ctx.xer);
	// beq cr6,0x8238b674
	if (ctx.cr6.eq) goto loc_8238B674;
	// lwz r5,148(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r3,94
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 94, ctx.xer);
	// bne cr6,0x8238b650
	if (!ctx.cr6.eq) goto loc_8238B650;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8238b650
	if (ctx.cr6.eq) goto loc_8238B650;
	// lbz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,94
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 94, ctx.xer);
	// beq cr6,0x8238b650
	if (ctx.cr6.eq) goto loc_8238B650;
	// cmpwi cr6,r11,48
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 48, ctx.xer);
	// blt cr6,0x8238b650
	if (ctx.cr6.lt) goto loc_8238B650;
	// cmpwi cr6,r11,57
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 57, ctx.xer);
	// bgt cr6,0x8238b650
	if (ctx.cr6.gt) goto loc_8238B650;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// stw r5,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r5.u32);
	// b 0x8238b67c
	goto loc_8238B67C;
loc_8238B650:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8238b430
	ctx.lr = 0x8238B658;
	sub_8238B430(ctx, base);
	// lbz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
	// cmpw cr6,r30,r31
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r31.s32, ctx.xer);
	// bge cr6,0x8238b66c
	if (!ctx.cr6.lt) goto loc_8238B66C;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
loc_8238B66C:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// b 0x8238b67c
	goto loc_8238B67C;
loc_8238B674:
	// lwz r5,148(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// li r31,0
	ctx.r31.s64 = 0;
loc_8238B67C:
	// lbz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8238b5e8
	if (!ctx.cr6.eq) goto loc_8238B5E8;
loc_8238B688:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8238B5A8) {
	__imp__sub_8238B5A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238B694) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8238B694) {
	__imp__sub_8238B694(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238B698) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8238B698) {
	__imp__sub_8238B698(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238B6A0) {
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
	// cmplwi cr6,r3,256
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 256, ctx.xer);
	// bge cr6,0x8238b6c4
	if (!ctx.cr6.lt) goto loc_8238B6C4;
	// bl 0x823df9e0
	ctx.lr = 0x8238B6B8;
	sub_823DF9E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x8238b6c8
	if (!ctx.cr6.eq) goto loc_8238B6C8;
loc_8238B6C4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8238B6C8:
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

PPC_WEAK_FUNC(sub_8238B6A0) {
	__imp__sub_8238B6A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238B6DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8238B6DC) {
	__imp__sub_8238B6DC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238B6E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x8238B6E8;
	__savegprlr_25(ctx, base);
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bgt cr6,0x8238b718
	if (ctx.cr6.gt) goto loc_8238B718;
	// lis r26,32767
	ctx.r26.s64 = 2147418112;
	// ori r26,r26,65535
	ctx.r26.u64 = ctx.r26.u64 | 65535;
loc_8238B718:
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lbz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// li r27,0
	ctx.r27.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8238b8a8
	if (ctx.cr6.eq) goto loc_8238B8A8;
loc_8238B734:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x822b7e18
	ctx.lr = 0x8238B744;
	sub_822B7E18(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,13
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 13, ctx.xer);
	// bne cr6,0x8238b75c
	if (!ctx.cr6.eq) goto loc_8238B75C;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x8238b89c
	goto loc_8238B89C;
loc_8238B75C:
	// cmplwi cr6,r4,10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 10, ctx.xer);
	// beq cr6,0x8238b8c4
	if (ctx.cr6.eq) goto loc_8238B8C4;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r4,94
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 94, ctx.xer);
	// bne cr6,0x8238b800
	if (!ctx.cr6.eq) goto loc_8238B800;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8238b7a4
	if (ctx.cr6.eq) goto loc_8238B7A4;
	// lbz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,94
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 94, ctx.xer);
	// beq cr6,0x8238b7a4
	if (ctx.cr6.eq) goto loc_8238B7A4;
	// cmpwi cr6,r11,48
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 48, ctx.xer);
	// blt cr6,0x8238b7a4
	if (ctx.cr6.lt) goto loc_8238B7A4;
	// cmpwi cr6,r11,57
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 57, ctx.xer);
	// bgt cr6,0x8238b7a4
	if (ctx.cr6.gt) goto loc_8238B7A4;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// b 0x8238b854
	goto loc_8238B854;
loc_8238B7A4:
	// lbz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8238b7bc
	if (ctx.cr6.eq) goto loc_8238B7BC;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8238b800
	if (!ctx.cr6.eq) goto loc_8238B800;
loc_8238B7BC:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8238b7e8
	if (ctx.cr6.eq) goto loc_8238B7E8;
	// lbz r11,1(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 1);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// addi r9,r11,-16
	ctx.r9.s64 = ctx.r11.s64 + -16;
	// mullw r11,r9,r10
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// addi r8,r11,16
	ctx.r8.s64 = ctx.r11.s64 + 16;
	// srawi r7,r8,5
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1F) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 5;
	// addze r11,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r11.s64 = temp.s64;
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
loc_8238B7E8:
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x8238b7f4
	if (ctx.cr6.eq) goto loc_8238B7F4;
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
loc_8238B7F4:
	// addi r5,r5,7
	ctx.r5.s64 = ctx.r5.s64 + 7;
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// b 0x8238b854
	goto loc_8238B854;
loc_8238B800:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8238b818
	if (ctx.cr6.eq) goto loc_8238B818;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8238b430
	ctx.lr = 0x8238B810;
	sub_8238B430(ctx, base);
	// lbz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
loc_8238B818:
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x8238b854
	if (ctx.cr6.eq) goto loc_8238B854;
	// cmplwi cr6,r4,256
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 256, ctx.xer);
	// bge cr6,0x8238b840
	if (!ctx.cr6.lt) goto loc_8238B840;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x823df9e0
	ctx.lr = 0x8238B830;
	sub_823DF9E0(ctx, base);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x8238b844
	if (!ctx.cr6.eq) goto loc_8238B844;
loc_8238B840:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8238B844:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8238b854
	if (ctx.cr6.eq) goto loc_8238B854;
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
loc_8238B854:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8238b890
	if (ctx.cr6.eq) goto loc_8238B890;
	// extsw r11,r25
	ctx.r11.s64 = ctx.r25.s32;
	// extsw r10,r31
	ctx.r10.s64 = ctx.r31.s32;
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfd f12,96(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// frsp f11,f13
	ctx.f11.f64 = double(float(ctx.f13.f64));
	// fcfid f10,f12
	ctx.f10.f64 = double(ctx.f12.s64);
	// fmuls f9,f11,f31
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// frsp f8,f10
	ctx.f8.f64 = double(float(ctx.f10.f64));
	// fcmpu cr6,f9,f8
	ctx.cr6.compare(ctx.f9.f64, ctx.f8.f64);
	// bgt cr6,0x8238b8d4
	if (ctx.cr6.gt) goto loc_8238B8D4;
loc_8238B890:
	// subf r11,r28,r5
	ctx.r11.s64 = ctx.r5.s64 - ctx.r28.s64;
	// cmpw cr6,r11,r26
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r26.s32, ctx.xer);
	// bgt cr6,0x8238b8e4
	if (ctx.cr6.gt) goto loc_8238B8E4;
loc_8238B89C:
	// lbz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8238b734
	if (!ctx.cr6.eq) goto loc_8238B734;
loc_8238B8A8:
	// subf r11,r28,r5
	ctx.r11.s64 = ctx.r5.s64 - ctx.r28.s64;
	// cmpw cr6,r11,r26
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r26.s32, ctx.xer);
	// beq cr6,0x8238b8e4
	if (ctx.cr6.eq) goto loc_8238B8E4;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
loc_8238B8B8:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_8238B8C4:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_8238B8D4:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_8238B8E4:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bne cr6,0x8238b8b8
	if (!ctx.cr6.eq) goto loc_8238B8B8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8238B6E0) {
	__imp__sub_8238B6E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238B900) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x8238B908;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// stw r31,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r31.u32);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8238ba64
	if (ctx.cr6.eq) goto loc_8238BA64;
loc_8238B93C:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x822b7e18
	ctx.lr = 0x8238B94C;
	sub_822B7E18(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 10, ctx.xer);
	// beq cr6,0x8238ba60
	if (ctx.cr6.eq) goto loc_8238BA60;
	// cmplwi cr6,r3,13
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 13, ctx.xer);
	// beq cr6,0x8238ba60
	if (ctx.cr6.eq) goto loc_8238BA60;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,94
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 94, ctx.xer);
	// bne cr6,0x8238b9e4
	if (!ctx.cr6.eq) goto loc_8238B9E4;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8238b9a0
	if (ctx.cr6.eq) goto loc_8238B9A0;
	// lbz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,94
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 94, ctx.xer);
	// beq cr6,0x8238b9a0
	if (ctx.cr6.eq) goto loc_8238B9A0;
	// cmpwi cr6,r11,48
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 48, ctx.xer);
	// blt cr6,0x8238b9a0
	if (ctx.cr6.lt) goto loc_8238B9A0;
	// cmpwi cr6,r11,57
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 57, ctx.xer);
	// bgt cr6,0x8238b9a0
	if (ctx.cr6.gt) goto loc_8238B9A0;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// b 0x8238ba34
	goto loc_8238BA34;
loc_8238B9A0:
	// lbz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8238b9b8
	if (ctx.cr6.eq) goto loc_8238B9B8;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8238b9e4
	if (!ctx.cr6.eq) goto loc_8238B9E4;
loc_8238B9B8:
	// lbz r11,1(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 1);
	// addi r5,r5,7
	ctx.r5.s64 = ctx.r5.s64 + 7;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// addi r9,r11,-16
	ctx.r9.s64 = ctx.r11.s64 + -16;
	// mullw r11,r9,r10
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// addi r8,r11,16
	ctx.r8.s64 = ctx.r11.s64 + 16;
	// srawi r7,r8,5
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1F) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 5;
	// addze r11,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r11.s64 = temp.s64;
	// b 0x8238b9f0
	goto loc_8238B9F0;
loc_8238B9E4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8238b430
	ctx.lr = 0x8238B9EC;
	sub_8238B430(ctx, base);
	// lbz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
loc_8238B9F0:
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
	// extsw r10,r27
	ctx.r10.s64 = ctx.r27.s32;
	// extsw r11,r31
	ctx.r11.s64 = ctx.r31.s32;
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfd f12,96(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// frsp f11,f13
	ctx.f11.f64 = double(float(ctx.f13.f64));
	// fcfid f10,f12
	ctx.f10.f64 = double(ctx.f12.s64);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// fmuls f8,f9,f31
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f31.f64));
	// fcmpu cr6,f8,f11
	ctx.cr6.compare(ctx.f8.f64, ctx.f11.f64);
	// bgt cr6,0x8238ba50
	if (ctx.cr6.gt) goto loc_8238BA50;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_8238BA34:
	// lbz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8238b93c
	if (!ctx.cr6.eq) goto loc_8238B93C;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_8238BA50:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_8238BA60:
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_8238BA64:
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8238B900) {
	__imp__sub_8238B900(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238BA74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8238BA74) {
	__imp__sub_8238BA74(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238BA78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x8238BA80;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r30,r4,-1
	ctx.r30.s64 = ctx.r4.s64 + -1;
	// add r11,r5,r6
	ctx.r11.u64 = ctx.r5.u64 + ctx.r6.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// and r26,r11,r30
	ctx.r26.u64 = ctx.r11.u64 & ctx.r30.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpw cr6,r5,r26
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r26.s32, ctx.xer);
	// beq cr6,0x8238bb7c
	if (ctx.cr6.eq) goto loc_8238BB7C;
loc_8238BAA8:
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// lbzx r10,r31,r28
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r28.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// and r9,r11,r30
	ctx.r9.u64 = ctx.r11.u64 & ctx.r30.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// extsb r3,r10
	ctx.r3.s64 = ctx.r10.s8;
	// lbzx r8,r9,r28
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r28.u32);
	// extsb r4,r8
	ctx.r4.s64 = ctx.r8.s8;
	// bl 0x822b7bb8
	ctx.lr = 0x8238BACC;
	sub_822B7BB8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// add r7,r11,r31
	ctx.r7.u64 = ctx.r11.u64 + ctx.r31.u64;
	// cmplwi cr6,r3,94
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 94, ctx.xer);
	// and r31,r7,r30
	ctx.r31.u64 = ctx.r7.u64 & ctx.r30.u64;
	// bne cr6,0x8238bb64
	if (!ctx.cr6.eq) goto loc_8238BB64;
	// add. r11,r31,r28
	ctx.r11.u64 = ctx.r31.u64 + ctx.r28.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8238bb18
	if (ctx.cr0.eq) goto loc_8238BB18;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,94
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 94, ctx.xer);
	// beq cr6,0x8238bb18
	if (ctx.cr6.eq) goto loc_8238BB18;
	// cmpwi cr6,r10,48
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 48, ctx.xer);
	// blt cr6,0x8238bb18
	if (ctx.cr6.lt) goto loc_8238BB18;
	// cmpwi cr6,r10,57
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 57, ctx.xer);
	// bgt cr6,0x8238bb18
	if (ctx.cr6.gt) goto loc_8238BB18;
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// and r31,r11,r30
	ctx.r31.u64 = ctx.r11.u64 & ctx.r30.u64;
	// b 0x8238bb74
	goto loc_8238BB74;
loc_8238BB18:
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8238bb30
	if (ctx.cr6.eq) goto loc_8238BB30;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8238bb64
	if (!ctx.cr6.eq) goto loc_8238BB64;
loc_8238BB30:
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// addi r9,r31,7
	ctx.r9.s64 = ctx.r31.s64 + 7;
	// and r8,r11,r30
	ctx.r8.u64 = ctx.r11.u64 & ctx.r30.u64;
	// and r31,r9,r30
	ctx.r31.u64 = ctx.r9.u64 & ctx.r30.u64;
	// lbzx r7,r8,r28
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r28.u32);
	// extsb r11,r7
	ctx.r11.s64 = ctx.r7.s8;
	// addi r6,r11,-16
	ctx.r6.s64 = ctx.r11.s64 + -16;
	// mullw r11,r6,r10
	ctx.r11.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r10.s32);
	// addi r5,r11,16
	ctx.r5.s64 = ctx.r11.s64 + 16;
	// srawi r4,r5,5
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1F) != 0);
	ctx.r4.s64 = ctx.r5.s32 >> 5;
	// addze r11,r4
	temp.s64 = ctx.r4.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r4.u32;
	ctx.r11.s64 = temp.s64;
	// b 0x8238bb70
	goto loc_8238BB70;
loc_8238BB64:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8238b430
	ctx.lr = 0x8238BB6C;
	sub_8238B430(ctx, base);
	// lbz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
loc_8238BB70:
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
loc_8238BB74:
	// cmpw cr6,r31,r26
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r26.s32, ctx.xer);
	// bne cr6,0x8238baa8
	if (!ctx.cr6.eq) goto loc_8238BAA8;
loc_8238BB7C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8238BA78) {
	__imp__sub_8238BA78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238BB88) {
	PPC_FUNC_PROLOGUE();
	// b 0x822dc298
	sub_822DC298(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8238BB88) {
	__imp__sub_8238BB88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238BB8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8238BB8C) {
	__imp__sub_8238BB8C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238BB90) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lwz r4,8(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x820b8e78
	sub_820B8E78(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8238BB90) {
	__imp__sub_8238BB90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238BBA0) {
	PPC_FUNC_PROLOGUE();
	// lhz r10,14(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 14);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8238bbbc
	if (ctx.cr6.eq) goto loc_8238BBBC;
	// lwz r4,8(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x820b8b58
	sub_820B8B58(ctx, base);
	return;
loc_8238BBBC:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8238BBA0) {
	__imp__sub_8238BBA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238BBC8) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r4,4
	ctx.r10.s64 = ctx.r4.s64 + 4;
loc_8238BBDC:
	// cmplw cr6,r10,r3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x8238bbf4
	if (ctx.cr6.eq) goto loc_8238BBF4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// blt cr6,0x8238bbdc
	if (ctx.cr6.lt) goto loc_8238BBDC;
loc_8238BBF4:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r4
	ctx.r10.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8238bc50
	if (ctx.cr6.eq) goto loc_8238BC50;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r5,4(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8238bc50
	if (ctx.cr6.eq) goto loc_8238BC50;
	// lwz r3,4(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lis r10,-32190
	ctx.r10.s64 = -2109603840;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r8,r10,-4168
	ctx.r8.s64 = ctx.r10.s64 + -4168;
	// addi r10,r9,-11540
	ctx.r10.s64 = ctx.r9.s64 + -11540;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwzx r9,r11,r8
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// lwzx r8,r11,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// bl 0x820b8380
	ctx.lr = 0x8238BC50;
	sub_820B8380(ctx, base);
loc_8238BC50:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8238BBC8) {
	__imp__sub_8238BBC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238BC60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8238BC68;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,7
	ctx.r3.s64 = 7;
	// bl 0x82177148
	ctx.lr = 0x8238BC80;
	sub_82177148(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x8238bca4
	if (!ctx.cr6.eq) goto loc_8238BCA4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,7
	ctx.r3.s64 = 7;
	// bl 0x82172b20
	ctx.lr = 0x8238BC98;
	sub_82172B20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bne cr6,0x8238bca8
	if (!ctx.cr6.eq) goto loc_8238BCA8;
loc_8238BCA4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_8238BCA8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8238BC60) {
	__imp__sub_8238BC60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238BCB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8238BCB8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,7
	ctx.r3.s64 = 7;
	// bl 0x82177148
	ctx.lr = 0x8238BCD0;
	sub_82177148(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x8238bcf4
	if (!ctx.cr6.eq) goto loc_8238BCF4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,7
	ctx.r3.s64 = 7;
	// bl 0x82172b20
	ctx.lr = 0x8238BCE8;
	sub_82172B20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bne cr6,0x8238bcf8
	if (!ctx.cr6.eq) goto loc_8238BCF8;
loc_8238BCF4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_8238BCF8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8238BCB0) {
	__imp__sub_8238BCB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238BD00) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31799
	ctx.r10.s64 = -2083979264;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r9,r10,4608
	ctx.r9.s64 = ctx.r10.s64 + 4608;
	// stw r11,8320(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8320, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8238BD00) {
	__imp__sub_8238BD00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238BD14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8238BD14) {
	__imp__sub_8238BD14(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238BD18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// lwz r10,68(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// addi r9,r11,4608
	ctx.r9.s64 = ctx.r11.s64 + 4608;
	// lwz r11,8356(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8356);
	// lwz r8,68(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x8238bd3c
	if (ctx.cr6.eq) goto loc_8238BD3C;
loc_8238BD34:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8238BD3C:
	// lwz r10,72(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// lwz r9,72(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8238bd34
	if (!ctx.cr6.eq) goto loc_8238BD34;
	// lwz r10,64(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// lwz r9,64(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// subf r8,r10,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r3,r7,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8238BD18) {
	__imp__sub_8238BD18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238BD64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8238BD64) {
	__imp__sub_8238BD64(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238BD68) {
	PPC_FUNC_PROLOGUE();
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,5
	ctx.r3.s64 = 5;
	// b 0x82177148
	sub_82177148(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8238BD68) {
	__imp__sub_8238BD68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238BD74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8238BD74) {
	__imp__sub_8238BD74(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238BD78) {
	PPC_FUNC_PROLOGUE();
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,5
	ctx.r3.s64 = 5;
	// b 0x82177148
	sub_82177148(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8238BD78) {
	__imp__sub_8238BD78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238BD84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8238BD84) {
	__imp__sub_8238BD84(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238BD88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// addi r10,r11,4608
	ctx.r10.s64 = ctx.r11.s64 + 4608;
	// lwz r3,8356(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8356);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8238BD88) {
	__imp__sub_8238BD88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238BD98) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8238bdb8
	if (!ctx.cr6.eq) goto loc_8238BDB8;
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// addi r10,r11,4608
	ctx.r10.s64 = ctx.r11.s64 + 4608;
	// lwz r3,8356(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8356);
	// blr 
	return;
loc_8238BDB8:
	// li r3,5
	ctx.r3.s64 = 5;
	// b 0x82177148
	sub_82177148(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8238BD98) {
	__imp__sub_8238BD98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238BDC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// addi r10,r11,4608
	ctx.r10.s64 = ctx.r11.s64 + 4608;
	// lwz r3,8356(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8356);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8238BDC0) {
	__imp__sub_8238BDC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238BDD0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8238BDD0) {
	__imp__sub_8238BDD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238BDD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_8238BDF0:
	// cmpwi cr6,r11,47
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 47, ctx.xer);
	// bne cr6,0x8238bdfc
	if (!ctx.cr6.eq) goto loc_8238BDFC;
	// addi r3,r10,1
	ctx.r3.s64 = ctx.r10.s64 + 1;
loc_8238BDFC:
	// lbzu r11,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8238bdf0
	if (!ctx.cr6.eq) goto loc_8238BDF0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8238BDD8) {
	__imp__sub_8238BDD8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238BE10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8238BE18;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x8238be74
	if (!ctx.cr6.gt) goto loc_8238BE74;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r29,r11,31648
	ctx.r29.s64 = ctx.r11.s64 + 31648;
loc_8238BE34:
	// li r3,5
	ctx.r3.s64 = 5;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82177148
	ctx.lr = 0x8238BE40;
	sub_82177148(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8238be68
	if (!ctx.cr6.eq) goto loc_8238BE68;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822830e8
	ctx.lr = 0x8238BE68;
	sub_822830E8(ctx, base);
loc_8238BE68:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// bne 0x8238be34
	if (!ctx.cr0.eq) goto loc_8238BE34;
loc_8238BE74:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8238BE10) {
	__imp__sub_8238BE10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238BE7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8238BE7C) {
	__imp__sub_8238BE7C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238BE80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8238BE88;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r30,r11,31136
	ctx.r30.s64 = ctx.r11.s64 + 31136;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// addi r29,r11,31648
	ctx.r29.s64 = ctx.r11.s64 + 31648;
loc_8238BEA0:
	// li r3,5
	ctx.r3.s64 = 5;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82177148
	ctx.lr = 0x8238BEAC;
	sub_82177148(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8238bed4
	if (!ctx.cr6.eq) goto loc_8238BED4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822830e8
	ctx.lr = 0x8238BED4;
	sub_822830E8(ctx, base);
loc_8238BED4:
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// addi r11,r30,512
	ctx.r11.s64 = ctx.r30.s64 + 512;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8238bea0
	if (ctx.cr6.lt) goto loc_8238BEA0;
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// lis r10,-31799
	ctx.r10.s64 = -2083979264;
	// addi r9,r11,4608
	ctx.r9.s64 = ctx.r11.s64 + 4608;
	// addi r8,r10,13536
	ctx.r8.s64 = ctx.r10.s64 + 13536;
	// lwz r11,8620(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8620);
	// stw r11,932(r8)
	PPC_STORE_U32(ctx.r8.u32 + 932, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8238BE80) {
	__imp__sub_8238BE80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238BF04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8238BF04) {
	__imp__sub_8238BF04(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238BF08) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8238BF08) {
	__imp__sub_8238BF08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238BF0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8238BF0C) {
	__imp__sub_8238BF0C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238BF10) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,3072(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 3072);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r3,r10,r4
	PPC_STORE_U32(ctx.r10.u32 + ctx.r4.u32, ctx.r3.u32);
	// lwz r11,3072(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 3072);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,3072(r4)
	PPC_STORE_U32(ctx.r4.u32 + 3072, ctx.r9.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8238BF10) {
	__imp__sub_8238BF10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238BF2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8238BF2C) {
	__imp__sub_8238BF2C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238BF30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-3184(r1)
	ea = -3184 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32199
	ctx.r10.s64 = -2110193664;
	// stw r11,3152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 3152, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r10,-16624
	ctx.r4.s64 = ctx.r10.s64 + -16624;
	// li r3,7
	ctx.r3.s64 = 7;
	// bl 0x822db160
	ctx.lr = 0x8238BF64;
	sub_822DB160(ctx, base);
	// lwz r11,3152(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 3152);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8238bf9c
	if (ctx.cr6.eq) goto loc_8238BF9C;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
loc_8238BF74:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
	// stw r11,3152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 3152, ctx.r11.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bctrl 
	ctx.lr = 0x8238BF8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,3152(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 3152);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// bne cr6,0x8238bf74
	if (!ctx.cr6.eq) goto loc_8238BF74;
loc_8238BF9C:
	// addi r1,r1,3184
	ctx.r1.s64 = ctx.r1.s64 + 3184;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8238BF30) {
	__imp__sub_8238BF30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238BFB0) {
	PPC_FUNC_PROLOGUE();
	// b 0x8238bf30
	sub_8238BF30(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8238BFB0) {
	__imp__sub_8238BFB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238BFB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8238BFB4) {
	__imp__sub_8238BFB4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238BFB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x8238BFC0;
	__savegprlr_26(ctx, base);
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
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8238c0ac
	if (ctx.cr6.eq) goto loc_8238C0AC;
	// lbz r11,7(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 7);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8238bffc
	if (!ctx.cr6.eq) goto loc_8238BFFC;
	// lbz r10,6(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 6);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// beq cr6,0x8238c0ac
	if (ctx.cr6.eq) goto loc_8238C0AC;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
loc_8238BFFC:
	// blt cr6,0x8238c0ac
	if (ctx.cr6.lt) goto loc_8238C0AC;
	// lbz r11,6(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 6);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8238c0ac
	if (ctx.cr6.lt) goto loc_8238C0AC;
	// lis r26,-31780
	ctx.r26.s64 = -2082734080;
	// lwz r11,12708(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12708);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// blt cr6,0x8238c0ac
	if (ctx.cr6.lt) goto loc_8238C0AC;
	// bl 0x82310170
	ctx.lr = 0x8238C024;
	sub_82310170(ctx, base);
	// lwz r11,12708(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12708);
	// lbz r5,6(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 6);
	// li r10,1000
	ctx.r10.s64 = 1000;
	// lbz r4,7(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 7);
	// addi r8,r1,92
	ctx.r8.s64 = ctx.r1.s64 + 92;
	// mullw r9,r4,r5
	ctx.r9.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r5.s32);
	// lwz r6,12(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mulli r11,r9,1000
	ctx.r11.s64 = ctx.r9.s64 * 1000;
	// divw r7,r11,r6
	ctx.r7.s32 = ctx.r11.s32 / ctx.r6.s32;
	// addi r9,r1,88
	ctx.r9.s64 = ctx.r1.s64 + 88;
	// divw r11,r3,r7
	ctx.r11.s32 = ctx.r3.s32 / ctx.r7.s32;
	// mullw r7,r11,r7
	ctx.r7.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// subf r3,r7,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r7.s64;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mullw r11,r3,r6
	ctx.r11.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r6.s32);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// divw r3,r11,r10
	ctx.r3.s32 = ctx.r11.s32 / ctx.r10.s32;
	// bl 0x822ec288
	ctx.lr = 0x8238C06C;
	sub_822EC288(ctx, base);
	// lfs f10,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f9,f10,f0,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f0.f64 + ctx.f13.f64));
	// stfs f9,0(r30)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// lfs f8,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f7,f8,f0,f13
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f0.f64 + ctx.f13.f64));
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f11.f64 = double(temp.f32);
	// stfs f7,0(r29)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// lfs f6,0(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f5,f6,f12,f11
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f12.f64 + ctx.f11.f64));
	// stfs f5,0(r28)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
	// lfs f4,0(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// fmadds f3,f4,f12,f11
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f12.f64 + ctx.f11.f64));
	// stfs f3,0(r27)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r27.u32 + 0, temp.u32);
loc_8238C0AC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8238BFB8) {
	__imp__sub_8238BFB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238C0B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8238C0B4) {
	__imp__sub_8238C0B4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238C0B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12168(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// stfs f13,0(r5)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// stfs f0,0(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// stfs f13,0(r7)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// b 0x8238bfb8
	sub_8238BFB8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8238C0B8) {
	__imp__sub_8238C0B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238C0DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8238C0DC) {
	__imp__sub_8238C0DC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238C0E0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8238C0E0) {
	__imp__sub_8238C0E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238C0E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8238C0E4) {
	__imp__sub_8238C0E4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238C0E8) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// stw r5,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r5.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8238C0E8) {
	__imp__sub_8238C0E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238C0FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8238C0FC) {
	__imp__sub_8238C0FC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238C100) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8238C100) {
	__imp__sub_8238C100(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238C10C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8238C10C) {
	__imp__sub_8238C10C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238C110) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31799
	ctx.r10.s64 = -2083979264;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r9,r10,744
	ctx.r9.s64 = ctx.r10.s64 + 744;
	// stw r11,2440(r9)
	PPC_STORE_U32(ctx.r9.u32 + 2440, ctx.r11.u32);
	// b 0x8228c568
	sub_8228C568(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8238C110) {
	__imp__sub_8238C110(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238C124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8238C124) {
	__imp__sub_8238C124(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238C128) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31799
	ctx.r10.s64 = -2083979264;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,744
	ctx.r9.s64 = ctx.r10.s64 + 744;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,2440(r9)
	PPC_STORE_U32(ctx.r9.u32 + 2440, ctx.r11.u32);
	// b 0x8228c610
	sub_8228C610(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8238C128) {
	__imp__sub_8238C128(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238C140) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8238C148;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r5,-1
	ctx.r11.s64 = ctx.r5.s64 + -1;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// andc r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 & ~ctx.r11.u64;
	// add r11,r10,r4
	ctx.r11.u64 = ctx.r10.u64 + ctx.r4.u64;
	// add r29,r9,r10
	ctx.r29.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// ble cr6,0x8238c1d0
	if (!ctx.cr6.gt) goto loc_8238C1D0;
	// lis r11,-32131
	ctx.r11.s64 = -2105737216;
	// lwz r11,-24228(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -24228);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8238c19c
	if (ctx.cr6.eq) goto loc_8238C19C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,31860
	ctx.r3.s64 = ctx.r11.s64 + 31860;
	// bl 0x822e84f0
	ctx.lr = 0x8238C198;
	sub_822E84F0(ctx, base);
	// bl 0x8230d720
	ctx.lr = 0x8238C19C;
	sub_8230D720(ctx, base);
loc_8238C19C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r6,2
	ctx.r6.s64 = 2;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,4096
	ctx.r4.s64 = 4096;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r9,r11,4095
	ctx.r9.s64 = ctx.r11.s64 + 4095;
	// rlwinm r30,r9,0,0,19
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFF000;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822e5290
	ctx.lr = 0x8238C1C4;
	sub_822E5290(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r8,r11,r30
	ctx.r8.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
loc_8238C1D0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8238C140) {
	__imp__sub_8238C140(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238C1DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8238C1DC) {
	__imp__sub_8238C1DC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238C1E0) {
	PPC_FUNC_PROLOGUE();
	// li r5,4096
	ctx.r5.s64 = 4096;
	// b 0x8238c140
	sub_8238C140(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8238C1E0) {
	__imp__sub_8238C1E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238C1E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32131
	ctx.r11.s64 = -2105737216;
	// lwz r11,-24228(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -24228);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8238C1E8) {
	__imp__sub_8238C1E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238C1F8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8238C1F8) {
	__imp__sub_8238C1F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238C1FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8238C1FC) {
	__imp__sub_8238C1FC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238C200) {
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
	// lis r11,-32131
	ctx.r11.s64 = -2105737216;
	// lwz r9,-24228(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -24228);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8238c248
	if (ctx.cr6.eq) goto loc_8238C248;
	// lis r10,-31799
	ctx.r10.s64 = -2083979264;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r10,744
	ctx.r8.s64 = ctx.r10.s64 + 744;
	// lis r10,512
	ctx.r10.s64 = 33554432;
	// stw r9,1520(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1520, ctx.r9.u32);
	// stw r11,1524(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1524, ctx.r11.u32);
	// stw r10,1528(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1528, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8238C248:
	// bl 0x82179de8
	ctx.lr = 0x8238C24C;
	sub_82179DE8(ctx, base);
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-4108(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4108);
	// bl 0x822e5020
	ctx.lr = 0x8238C25C;
	sub_822E5020(ctx, base);
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,4096
	ctx.r4.s64 = 4096;
	// lis r3,1
	ctx.r3.s64 = 65536;
	// bl 0x822e5290
	ctx.lr = 0x8238C270;
	sub_822E5290(ctx, base);
	// lis r10,-31799
	ctx.r10.s64 = -2083979264;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,744
	ctx.r9.s64 = ctx.r10.s64 + 744;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// stw r3,1520(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1520, ctx.r3.u32);
	// stw r11,1524(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1524, ctx.r11.u32);
	// stw r10,1528(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1528, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8238C200) {
	__imp__sub_8238C200(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238C29C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8238C29C) {
	__imp__sub_8238C29C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238C2A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8238C2A8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// lis r9,-32131
	ctx.r9.s64 = -2105737216;
	// addi r11,r11,744
	ctx.r11.s64 = ctx.r11.s64 + 744;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,-24228(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + -24228);
	// stw r10,1520(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1520, ctx.r10.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8238c31c
	if (ctx.cr6.eq) goto loc_8238C31C;
	// li r29,2
	ctx.r29.s64 = 2;
	// addi r30,r11,2444
	ctx.r30.s64 = ctx.r11.s64 + 2444;
loc_8238C2D4:
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8238c308
	if (ctx.cr6.eq) goto loc_8238C308;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x820badb0
	ctx.lr = 0x8238C2E8;
	sub_820BADB0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8238c308
	if (ctx.cr6.eq) goto loc_8238C308;
loc_8238C2F0:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8228b0d8
	ctx.lr = 0x8238C2F8;
	sub_8228B0D8(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x820badb0
	ctx.lr = 0x8238C300;
	sub_820BADB0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8238c2f0
	if (!ctx.cr6.eq) goto loc_8238C2F0;
loc_8238C308:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x8238c2d4
	if (!ctx.cr0.eq) goto loc_8238C2D4;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_8238C31C:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-4108(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4108);
	// bl 0x822e51f0
	ctx.lr = 0x8238C32C;
	sub_822E51F0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8238C2A0) {
	__imp__sub_8238C2A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238C334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8238C334) {
	__imp__sub_8238C334(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238C338) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x8238C340;
	__savegprlr_25(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lis r7,10240
	ctx.r7.s64 = 671088640;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// ori r7,r7,2
	ctx.r7.u64 = ctx.r7.u64 | 2;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823ed6f0
	ctx.lr = 0x8238C394;
	sub_823ED6F0(ctx, base);
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r11,r11,744
	ctx.r11.s64 = ctx.r11.s64 + 744;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,4096
	ctx.r5.s64 = 4096;
	// addi r3,r11,1520
	ctx.r3.s64 = ctx.r11.s64 + 1520;
	// bl 0x8238c140
	ctx.lr = 0x8238C3B0;
	sub_8238C140(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x823ed900
	ctx.lr = 0x8238C3C0;
	sub_823ED900(ctx, base);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r9,7
	ctx.r9.s64 = 7;
	// addi r8,r10,31908
	ctx.r8.s64 = ctx.r10.s64 + 31908;
	// stw r26,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r26.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r25,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r25.u32);
	// li r4,3
	ctx.r4.s64 = 3;
	// stb r9,58(r31)
	PPC_STORE_U8(ctx.r31.u32 + 58, ctx.r9.u8);
	// li r3,2
	ctx.r3.s64 = 2;
	// stw r8,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r8.u32);
	// rlwinm r10,r11,15,18,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 15) & 0x3FE0;
	// sth r7,68(r31)
	PPC_STORE_U16(ctx.r31.u32 + 68, ctx.r7.u16);
	// sth r30,64(r31)
	PPC_STORE_U16(ctx.r31.u32 + 64, ctx.r30.u16);
	// sth r29,66(r31)
	PPC_STORE_U16(ctx.r31.u32 + 66, ctx.r29.u16);
	// stb r4,56(r31)
	PPC_STORE_U8(ctx.r31.u32 + 56, ctx.r4.u8);
	// stb r3,57(r31)
	PPC_STORE_U8(ctx.r31.u32 + 57, ctx.r3.u8);
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// stw r26,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r26.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8238C338) {
	__imp__sub_8238C338(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238C414) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8238C414) {
	__imp__sub_8238C414(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238C418) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf54
	ctx.lr = 0x8238C420;
	__savegprlr_19(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31799
	ctx.r10.s64 = -2083979264;
	// li r11,-1
	ctx.r11.s64 = -1;
	// addi r29,r10,744
	ctx.r29.s64 = ctx.r10.s64 + 744;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r31,r29,1992
	ctx.r31.s64 = ctx.r29.s64 + 1992;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
loc_8238C454:
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// lwz r5,1408(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1408);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r4,1404(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1404);
	// addi r3,r31,-448
	ctx.r3.s64 = ctx.r31.s64 + -448;
	// bl 0x8238c338
	ctx.lr = 0x8238C46C;
	sub_8238C338(ctx, base);
	// addi r7,r1,92
	ctx.r7.s64 = ctx.r1.s64 + 92;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// lwz r5,1416(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1416);
	// addi r3,r31,-224
	ctx.r3.s64 = ctx.r31.s64 + -224;
	// lwz r4,1412(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1412);
	// bl 0x8238c338
	ctx.lr = 0x8238C484;
	sub_8238C338(ctx, base);
	// addi r7,r1,100
	ctx.r7.s64 = ctx.r1.s64 + 100;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lwz r5,1416(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1416);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,1412(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1412);
	// bl 0x8238c338
	ctx.lr = 0x8238C49C;
	sub_8238C338(ctx, base);
	// addi r7,r1,108
	ctx.r7.s64 = ctx.r1.s64 + 108;
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// lwz r5,1408(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1408);
	// addi r3,r31,224
	ctx.r3.s64 = ctx.r31.s64 + 224;
	// lwz r4,1404(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1404);
	// bl 0x8238c338
	ctx.lr = 0x8238C4B4;
	sub_8238C338(ctx, base);
	// addi r31,r31,112
	ctx.r31.s64 = ctx.r31.s64 + 112;
	// addi r11,r29,2216
	ctx.r11.s64 = ctx.r29.s64 + 2216;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x8238c454
	if (!ctx.cr6.eq) goto loc_8238C454;
	// lwz r25,80(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r31,r29,1440
	ctx.r31.s64 = ctx.r29.s64 + 1440;
	// lwz r24,84(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r28,r29,2176
	ctx.r28.s64 = ctx.r29.s64 + 2176;
	// lwz r23,88(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r30,r29,1332
	ctx.r30.s64 = ctx.r29.s64 + 1332;
	// lwz r22,92(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r21,96(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r20,100(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r19,104(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r26,108(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
loc_8238C4F4:
	// stw r27,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r27.u32);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// stw r27,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r27.u32);
	// li r4,255
	ctx.r4.s64 = 255;
	// stw r27,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r27.u32);
	// stw r27,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r27.u32);
	// lwz r11,-560(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -560);
	// stw r11,-12(r31)
	PPC_STORE_U32(ctx.r31.u32 + -12, ctx.r11.u32);
	// lwz r10,-336(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + -336);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lwz r9,-112(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + -112);
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
	// lwzu r11,112(r28)
	ea = 112 + ctx.r28.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r28.u32 = ea;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// stw r25,-8(r31)
	PPC_STORE_U32(ctx.r31.u32 + -8, ctx.r25.u32);
	// stw r23,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r23.u32);
	// stw r21,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r21.u32);
	// stw r19,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r19.u32);
	// stw r24,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r24.u32);
	// stw r22,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r22.u32);
	// stw r20,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r20.u32);
	// stwu r26,32(r30)
	ea = 32 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r26.u32);
	ctx.r30.u32 = ea;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x8236f520
	ctx.lr = 0x8238C554;
	sub_8236F520(ctx, base);
	// addi r31,r31,48
	ctx.r31.s64 = ctx.r31.s64 + 48;
	// addi r8,r29,1536
	ctx.r8.s64 = ctx.r29.s64 + 1536;
	// cmpw cr6,r31,r8
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x8238c4f4
	if (!ctx.cr6.eq) goto loc_8238C4F4;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x823ddfa4
	__restgprlr_19(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8238C418) {
	__imp__sub_8238C418(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238C56C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8238C56C) {
	__imp__sub_8238C56C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238C570) {
	PPC_FUNC_PROLOGUE();
	// add r11,r3,r4
	ctx.r11.u64 = ctx.r3.u64 + ctx.r4.u64;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// subf r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r11,r11,25,7,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x1FFFFFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8238C594:
	// dcbst r0,r10
	// addi r10,r10,128
	ctx.r10.s64 = ctx.r10.s64 + 128;
	// bdnz 0x8238c594
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8238C594;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8238C570) {
	__imp__sub_8238C570(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238C5A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8238C5A4) {
	__imp__sub_8238C5A4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238C5A8) {
	PPC_FUNC_PROLOGUE();
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x8238c604
	if (!ctx.cr6.eq) goto loc_8238C604;
	// lwsync 
	// lis r11,-31936
	ctx.r11.s64 = -2092957696;
	// lis r9,-31775
	ctx.r9.s64 = -2082406400;
	// lwz r11,-9024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9024);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// addi r10,r11,4608
	ctx.r10.s64 = ctx.r11.s64 + 4608;
	// addi r11,r9,-21248
	ctx.r11.s64 = ctx.r9.s64 + -21248;
	// beq cr6,0x8238c5e4
	if (ctx.cr6.eq) goto loc_8238C5E4;
	// lwz r9,8328(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8328);
	// b 0x8238c5e8
	goto loc_8238C5E8;
loc_8238C5E4:
	// lwz r9,8332(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8332);
loc_8238C5E8:
	// lwz r10,8336(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8336);
	// stw r9,1296(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1296, ctx.r9.u32);
	// stw r9,1284(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1284, ctx.r9.u32);
	// stw r10,1288(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1288, ctx.r10.u32);
	// stw r10,1292(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1292, ctx.r10.u32);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_8238C604:
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// addi r11,r11,744
	ctx.r11.s64 = ctx.r11.s64 + 744;
	// rlwinm r9,r3,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r11,2444
	ctx.r8.s64 = ctx.r11.s64 + 2444;
	// lwz r10,-19968(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -19968);
	// addi r7,r10,5492
	ctx.r7.s64 = ctx.r10.s64 + 5492;
	// stwx r7,r9,r8
	PPC_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r7.u32);
	// lwsync 
	// mulli r9,r3,112
	ctx.r9.s64 = ctx.r3.s64 * 112;
	// addi r10,r11,1544
	ctx.r10.s64 = ctx.r11.s64 + 1544;
	// rlwinm r7,r3,5,0,26
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 5) & 0xFFFFFFE0;
	// add r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r6,r11,1364
	ctx.r6.s64 = ctx.r11.s64 + 1364;
	// lwz r10,744(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 744);
	// lwzx r9,r7,r6
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x8238c670
	if (!ctx.cr6.lt) goto loc_8238C670;
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// rlwinm r9,r9,25,7,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 25) & 0x1FFFFFF;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8238C664:
	// dcbst r0,r10
	// addi r10,r10,128
	ctx.r10.s64 = ctx.r10.s64 + 128;
	// bdnz 0x8238c664
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8238C664;
loc_8238C670:
	// addi r9,r11,1352
	ctx.r9.s64 = ctx.r11.s64 + 1352;
	// lwz r10,72(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 72);
	// lwzx r9,r7,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x8238c6a8
	if (!ctx.cr6.lt) goto loc_8238C6A8;
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// rlwinm r9,r9,25,7,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 25) & 0x1FFFFFF;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8238C69C:
	// dcbst r0,r10
	// addi r10,r10,128
	ctx.r10.s64 = ctx.r10.s64 + 128;
	// bdnz 0x8238c69c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8238C69C;
loc_8238C6A8:
	// addi r9,r11,1356
	ctx.r9.s64 = ctx.r11.s64 + 1356;
	// lwz r10,296(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 296);
	// lwzx r9,r7,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x8238c6e0
	if (!ctx.cr6.lt) goto loc_8238C6E0;
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// rlwinm r9,r9,25,7,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 25) & 0x1FFFFFF;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8238C6D4:
	// dcbst r0,r10
	// addi r10,r10,128
	ctx.r10.s64 = ctx.r10.s64 + 128;
	// bdnz 0x8238c6d4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8238C6D4;
loc_8238C6E0:
	// addi r9,r11,1360
	ctx.r9.s64 = ctx.r11.s64 + 1360;
	// lwz r10,520(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 520);
	// lwzx r9,r7,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x8238c718
	if (!ctx.cr6.lt) goto loc_8238C718;
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// rlwinm r9,r9,25,7,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 25) & 0x1FFFFFF;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8238C70C:
	// dcbst r0,r10
	// addi r10,r10,128
	ctx.r10.s64 = ctx.r10.s64 + 128;
	// bdnz 0x8238c70c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8238C70C;
loc_8238C718:
	// lwsync 
	// lis r10,-31775
	ctx.r10.s64 = -2082406400;
	// addi r6,r11,1992
	ctx.r6.s64 = ctx.r11.s64 + 1992;
	// addi r31,r10,-21248
	ctx.r31.s64 = ctx.r10.s64 + -21248;
	// addi r7,r11,2216
	ctx.r7.s64 = ctx.r11.s64 + 2216;
	// mulli r5,r3,112
	ctx.r5.s64 = ctx.r3.s64 * 112;
	// stw r8,1284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1284, ctx.r8.u32);
	// addi r4,r11,1768
	ctx.r4.s64 = ctx.r11.s64 + 1768;
	// mulli r10,r3,112
	ctx.r10.s64 = ctx.r3.s64 * 112;
	// mulli r9,r3,112
	ctx.r9.s64 = ctx.r3.s64 * 112;
	// add r11,r5,r4
	ctx.r11.u64 = ctx.r5.u64 + ctx.r4.u64;
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// stw r11,1288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1288, ctx.r11.u32);
	// stw r10,1292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1292, ctx.r10.u32);
	// stw r9,1296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1296, ctx.r9.u32);
	// lwsync 
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8238C5A8) {
	__imp__sub_8238C5A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238C764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8238C764) {
	__imp__sub_8238C764(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238C768) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// addi r10,r11,744
	ctx.r10.s64 = ctx.r11.s64 + 744;
	// lwz r11,784(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 784);
	// rlwinm r9,r11,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8238c788
	if (ctx.cr6.eq) goto loc_8238C788;
loc_8238C780:
	// li r3,100
	ctx.r3.s64 = 100;
	// blr 
	return;
loc_8238C788:
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r10,44(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8238c780
	if (!ctx.cr6.lt) goto loc_8238C780;
	// mulli r11,r11,100
	ctx.r11.s64 = ctx.r11.s64 * 100;
	// rlwinm r3,r11,10,22,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0x3FF;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8238C768) {
	__imp__sub_8238C768(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238C7A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8238C7A4) {
	__imp__sub_8238C7A4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238C7A8) {
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
	// lis r10,-31799
	ctx.r10.s64 = -2083979264;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r31,r10,744
	ctx.r31.s64 = ctx.r10.s64 + 744;
	// stw r11,2440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2440, ctx.r11.u32);
	// bl 0x8228c568
	ctx.lr = 0x8238C7CC;
	sub_8228C568(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r3,1332(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1332);
	// bl 0x823f4178
	ctx.lr = 0x8238C7D8;
	sub_823F4178(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,1328(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1328, ctx.r11.u8);
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

PPC_WEAK_FUNC(sub_8238C7A8) {
	__imp__sub_8238C7A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238C7F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8238C7F4) {
	__imp__sub_8238C7F4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238C7F8) {
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
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r31,r11,744
	ctx.r31.s64 = ctx.r11.s64 + 744;
	// lwz r3,1332(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1332);
	// bl 0x823f4178
	ctx.lr = 0x8238C81C;
	sub_823F4178(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r11,1328(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1328, ctx.r11.u8);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,2440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2440, ctx.r10.u32);
	// bl 0x8228c610
	ctx.lr = 0x8238C834;
	sub_8228C610(ctx, base);
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

PPC_WEAK_FUNC(sub_8238C7F8) {
	__imp__sub_8238C7F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238C848) {
	PPC_FUNC_PROLOGUE();
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// oris r9,r10,32768
	ctx.r9.u64 = ctx.r10.u64 | 2147483648;
	// cmpld cr6,r11,r9
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r9.u64, ctx.xer);
	// blt cr6,0x8238c870
	if (ctx.cr6.lt) goto loc_8238C870;
	// lis r10,-31799
	ctx.r10.s64 = -2083979264;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,744
	ctx.r9.s64 = ctx.r10.s64 + 744;
	// stw r11,1048(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1048, ctx.r11.u32);
	// blr 
	return;
loc_8238C870:
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lis r9,-31799
	ctx.r9.s64 = -2083979264;
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mulld r7,r10,r11
	ctx.r7.s64 = ctx.r10.s64 * ctx.r11.s64;
	// mulli r6,r7,1000
	ctx.r6.s64 = ctx.r7.s64 * 1000;
	// addi r4,r9,744
	ctx.r4.s64 = ctx.r9.s64 + 744;
	// divdu r5,r6,r8
	ctx.r5.u64 = ctx.r6.u64 / ctx.r8.u64;
	// stw r5,1048(r4)
	PPC_STORE_U32(ctx.r4.u32 + 1048, ctx.r5.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8238C848) {
	__imp__sub_8238C848(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238C894) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8238C894) {
	__imp__sub_8238C894(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238C898) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// addi r31,r11,744
	ctx.r31.s64 = ctx.r11.s64 + 744;
	// lwz r30,1536(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1536);
	// lwz r11,1540(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1540);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x8238c8dc
	if (ctx.cr6.eq) goto loc_8238C8DC;
	// addi r11,r30,-1
	ctx.r11.s64 = ctx.r30.s64 + -1;
	// lwz r3,1332(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1332);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r4,r10,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// bl 0x823f3b18
	ctx.lr = 0x8238C8D8;
	sub_823F3B18(ctx, base);
	// stw r30,1540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1540, ctx.r30.u32);
loc_8238C8DC:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x8238c978
	if (!ctx.cr6.eq) goto loc_8238C978;
	// lwz r3,1332(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1332);
	// bl 0x823f3958
	ctx.lr = 0x8238C8EC;
	sub_823F3958(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8238c978
	if (!ctx.cr6.eq) goto loc_8238C978;
	// lwz r11,1420(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1420);
	// addi r10,r31,2444
	ctx.r10.s64 = ctx.r31.s64 + 2444;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// xori r8,r9,4
	ctx.r8.u64 = ctx.r9.u64 ^ 4;
	// lwzx r30,r8,r10
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8238c938
	if (ctx.cr6.eq) goto loc_8238C938;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x820badb0
	ctx.lr = 0x8238C918;
	sub_820BADB0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8238c938
	if (ctx.cr6.eq) goto loc_8238C938;
loc_8238C920:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8228b0d8
	ctx.lr = 0x8238C928;
	sub_8228B0D8(ctx, base);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x820badb0
	ctx.lr = 0x8238C930;
	sub_820BADB0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8238c920
	if (!ctx.cr6.eq) goto loc_8238C920;
loc_8238C938:
	// lwz r3,1332(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1332);
	// bl 0x823f41a0
	ctx.lr = 0x8238C940;
	sub_823F41A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8238c950
	if (!ctx.cr6.eq) goto loc_8238C950;
	// lwz r11,1420(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1420);
	// stw r11,1532(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1532, ctx.r11.u32);
loc_8238C950:
	// lwz r11,784(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 784);
	// lwz r3,1332(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1332);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8238c974
	if (!ctx.cr6.eq) goto loc_8238C974;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8238c97c
	if (ctx.cr6.eq) goto loc_8238C97C;
loc_8238C974:
	// bl 0x823f4738
	ctx.lr = 0x8238C978;
	sub_823F4738(ctx, base);
loc_8238C978:
	// lwz r3,1332(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1332);
loc_8238C97C:
	// lwz r11,784(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 784);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8238c9b4
	if (!ctx.cr6.eq) goto loc_8238C9B4;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8238c9b4
	if (!ctx.cr6.eq) goto loc_8238C9B4;
	// lbz r11,1328(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1328);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8238c9ac
	if (ctx.cr6.eq) goto loc_8238C9AC;
	// bl 0x8238c7f8
	ctx.lr = 0x8238C9AC;
	sub_8238C7F8(ctx, base);
loc_8238C9AC:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8238ca5c
	goto loc_8238CA5C;
loc_8238C9B4:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x823f3ca8
	ctx.lr = 0x8238C9C0;
	sub_823F3CA8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// oris r10,r11,32768
	ctx.r10.u64 = ctx.r11.u64 | 2147483648;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpld cr6,r11,r10
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r10.u64, ctx.xer);
	// blt cr6,0x8238c9e0
	if (ctx.cr6.lt) goto loc_8238C9E0;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,1048(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1048, ctx.r11.u32);
	// b 0x8238c9f8
	goto loc_8238C9F8;
loc_8238C9E0:
	// lwz r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mulld r6,r8,r11
	ctx.r6.s64 = ctx.r8.s64 * ctx.r11.s64;
	// mulli r5,r6,1000
	ctx.r5.s64 = ctx.r6.s64 * 1000;
	// divdu r4,r5,r7
	ctx.r4.u64 = ctx.r5.u64 / ctx.r7.u64;
	// stw r4,1048(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1048, ctx.r4.u32);
loc_8238C9F8:
	// lwz r11,784(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 784);
	// rlwinm r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8238ca10
	if (ctx.cr6.eq) goto loc_8238CA10;
	// li r10,100
	ctx.r10.s64 = 100;
	// b 0x8238ca30
	goto loc_8238CA30;
loc_8238CA10:
	// lwz r10,124(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8238ca28
	if (ctx.cr6.lt) goto loc_8238CA28;
	// li r10,100
	ctx.r10.s64 = 100;
	// b 0x8238ca30
	goto loc_8238CA30;
loc_8238CA28:
	// mulli r11,r11,100
	ctx.r11.s64 = ctx.r11.s64 * 100;
	// rlwinm r10,r11,10,22,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0x3FF;
loc_8238CA30:
	// lbz r11,1328(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1328);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8238ca4c
	if (ctx.cr6.eq) goto loc_8238CA4C;
	// cmplwi cr6,r10,95
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 95, ctx.xer);
	// ble cr6,0x8238ca58
	if (!ctx.cr6.gt) goto loc_8238CA58;
	// bl 0x8238c7f8
	ctx.lr = 0x8238CA48;
	sub_8238C7F8(ctx, base);
	// b 0x8238ca58
	goto loc_8238CA58;
loc_8238CA4C:
	// cmplwi cr6,r10,30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 30, ctx.xer);
	// bge cr6,0x8238ca58
	if (!ctx.cr6.lt) goto loc_8238CA58;
	// bl 0x8238c7a8
	ctx.lr = 0x8238CA58;
	sub_8238C7A8(ctx, base);
loc_8238CA58:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8238CA5C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
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

PPC_WEAK_FUNC(sub_8238C898) {
	__imp__sub_8238C898(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238CA74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8238CA74) {
	__imp__sub_8238CA74(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238CA78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r11,r11,744
	ctx.r11.s64 = ctx.r11.s64 + 744;
	// li r5,32
	ctx.r5.s64 = 32;
	// addi r3,r11,1520
	ctx.r3.s64 = ctx.r11.s64 + 1520;
	// b 0x8238c140
	sub_8238C140(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8238CA78) {
	__imp__sub_8238CA78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238CA90) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8238CA90) {
	__imp__sub_8238CA90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238CA94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8238CA94) {
	__imp__sub_8238CA94(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238CA98) {
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
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// addi r31,r11,744
	ctx.r31.s64 = ctx.r11.s64 + 744;
	// lbz r11,792(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 792);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8238cad4
	if (!ctx.cr6.eq) goto loc_8238CAD4;
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
loc_8238CAD4:
	// lbz r11,1328(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1328);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8238cae4
	if (ctx.cr6.eq) goto loc_8238CAE4;
	// bl 0x8238c7f8
	ctx.lr = 0x8238CAE4;
	sub_8238C7F8(ctx, base);
loc_8238CAE4:
	// bl 0x822e4c70
	ctx.lr = 0x8238CAE8;
	sub_822E4C70(ctx, base);
	// lwz r3,1332(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1332);
	// bl 0x823f4918
	ctx.lr = 0x8238CAF0;
	sub_823F4918(ctx, base);
	// bl 0x822e4c88
	ctx.lr = 0x8238CAF4;
	sub_822E4C88(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,1332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1332, ctx.r11.u32);
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

PPC_WEAK_FUNC(sub_8238CA98) {
	__imp__sub_8238CA98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238CB14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8238CB14) {
	__imp__sub_8238CB14(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238CB18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf68
	ctx.lr = 0x8238CB20;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31799
	ctx.r10.s64 = -2083979264;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r31,r10,744
	ctx.r31.s64 = ctx.r10.s64 + 744;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// stw r11,2440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2440, ctx.r11.u32);
	// bl 0x8228c568
	ctx.lr = 0x8238CB48;
	sub_8228C568(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r8,8192
	ctx.r8.s64 = 536870912;
	// li r7,3
	ctx.r7.s64 = 3;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lis r4,-32768
	ctx.r4.s64 = -2147483648;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8236bb70
	ctx.lr = 0x8238CB68;
	sub_8236BB70(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// subf r10,r3,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r3.s64;
	// subfic r9,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r28,r7,r3
	ctx.r28.u64 = ctx.r7.u64 & ctx.r3.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x8238cbbc
	if (!ctx.cr6.eq) goto loc_8238CBBC;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,2440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2440, ctx.r11.u32);
	// bl 0x8228c610
	ctx.lr = 0x8238CB94;
	sub_8228C610(ctx, base);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8238cbb0
	if (ctx.cr6.eq) goto loc_8238CBB0;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r5,r11,32012
	ctx.r5.s64 = ctx.r11.s64 + 32012;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822e8368
	ctx.lr = 0x8238CBB0;
	sub_822E8368(ctx, base);
loc_8238CBB0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
loc_8238CBBC:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8236bd68
	ctx.lr = 0x8238CBC8;
	sub_8236BD68(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bgt cr6,0x8238cc40
	if (ctx.cr6.gt) goto loc_8238CC40;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,2440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2440, ctx.r11.u32);
	// bl 0x8228c610
	ctx.lr = 0x8238CBE4;
	sub_8228C610(ctx, base);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8238cc2c
	if (ctx.cr6.eq) goto loc_8238CC2C;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bne cr6,0x8238cc1c
	if (!ctx.cr6.eq) goto loc_8238CC1C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r5,r11,31996
	ctx.r5.s64 = ctx.r11.s64 + 31996;
	// bl 0x822e8368
	ctx.lr = 0x8238CC08;
	sub_822E8368(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8236b770
	ctx.lr = 0x8238CC10;
	sub_8236B770(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
loc_8238CC1C:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,31972
	ctx.r5.s64 = ctx.r11.s64 + 31972;
	// bl 0x822e8368
	ctx.lr = 0x8238CC2C;
	sub_822E8368(ctx, base);
loc_8238CC2C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8236b770
	ctx.lr = 0x8238CC34;
	sub_8236B770(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
loc_8238CC40:
	// addi r11,r29,2047
	ctx.r11.s64 = ctx.r29.s64 + 2047;
	// li r5,32
	ctx.r5.s64 = 32;
	// rlwinm r24,r11,0,0,20
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFF800;
	// addi r3,r31,1520
	ctx.r3.s64 = ctx.r31.s64 + 1520;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x8238c140
	ctx.lr = 0x8238CC58;
	sub_8238C140(ctx, base);
	// stw r3,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r3.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8236bed8
	ctx.lr = 0x8238CC78;
	sub_8236BED8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,2440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2440, ctx.r11.u32);
	// bl 0x8228c610
	ctx.lr = 0x8238CC88;
	sub_8228C610(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8236b770
	ctx.lr = 0x8238CC90;
	sub_8236B770(ctx, base);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpw cr6,r7,r29
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r29.s32, ctx.xer);
	// beq cr6,0x8238ccc8
	if (ctx.cr6.eq) goto loc_8238CCC8;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8238ccbc
	if (ctx.cr6.eq) goto loc_8238CCBC;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,31936
	ctx.r5.s64 = ctx.r11.s64 + 31936;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822e8368
	ctx.lr = 0x8238CCBC;
	sub_822E8368(ctx, base);
loc_8238CCBC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
loc_8238CCC8:
	// addi r11,r7,3
	ctx.r11.s64 = ctx.r7.s64 + 3;
	// srawi. r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8238cd04
	if (ctx.cr0.eq) goto loc_8238CD04;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r11,r30,-4
	ctx.r11.s64 = ctx.r30.s64 + -4;
loc_8238CCDC:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// rlwimi r9,r10,16,16,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xFFFF) | (ctx.r9.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r8,r10,16,0,15
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xFFFF0000) | (ctx.r8.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r7,r9,24,16,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFFFF;
	// rlwinm r6,r8,8,0,15
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFF0000;
	// or r5,r7,r6
	ctx.r5.u64 = ctx.r7.u64 | ctx.r6.u64;
	// stwu r5,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8238ccdc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8238CCDC;
loc_8238CD04:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8238CB18) {
	__imp__sub_8238CB18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238CD10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x8238CD18;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r4,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x4;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8238cdac
	if (ctx.cr6.eq) goto loc_8238CDAC;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8238cb18
	ctx.lr = 0x8238CD3C;
	sub_8238CB18(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8238cd54
	if (!ctx.cr6.eq) goto loc_8238CD54;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_8238CD54:
	// bl 0x822e4c70
	ctx.lr = 0x8238CD58;
	sub_822E4C70(ctx, base);
	// lis r4,1040
	ctx.r4.s64 = 68157440;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// ori r4,r4,17408
	ctx.r4.u64 = ctx.r4.u64 | 17408;
	// bl 0x823f27b0
	ctx.lr = 0x8238CD68;
	sub_823F27B0(ctx, base);
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// addi r31,r11,744
	ctx.r31.s64 = ctx.r11.s64 + 744;
	// stw r3,1332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1332, ctx.r3.u32);
	// bl 0x822e4c88
	ctx.lr = 0x8238CD78;
	sub_822E4C88(ctx, base);
	// lwz r11,1332(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1332);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8238ce34
	if (!ctx.cr6.eq) goto loc_8238CE34;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8238ce34
	if (ctx.cr6.eq) goto loc_8238CE34;
	// bl 0x823f1ea0
	ctx.lr = 0x8238CD90;
	sub_823F1EA0(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r11,32024
	ctx.r5.s64 = ctx.r11.s64 + 32024;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822e8368
	ctx.lr = 0x8238CDA8;
	sub_822E8368(ctx, base);
	// b 0x8238ce34
	goto loc_8238CE34;
loc_8238CDAC:
	// lis r10,-31799
	ctx.r10.s64 = -2083979264;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r31,r10,744
	ctx.r31.s64 = ctx.r10.s64 + 744;
	// stw r11,2440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2440, ctx.r11.u32);
	// bl 0x8228c568
	ctx.lr = 0x8238CDC0;
	sub_8228C568(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r3,64
	ctx.r3.s64 = 4194304;
	// stb r11,1328(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1328, ctx.r11.u8);
	// bl 0x823f23f0
	ctx.lr = 0x8238CDD0;
	sub_823F23F0(ctx, base);
	// bl 0x822e4c70
	ctx.lr = 0x8238CDD4;
	sub_822E4C70(ctx, base);
	// lis r4,272
	ctx.r4.s64 = 17825792;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r4,r4,17408
	ctx.r4.u64 = ctx.r4.u64 | 17408;
	// bl 0x823f27b0
	ctx.lr = 0x8238CDE4;
	sub_823F27B0(ctx, base);
	// stw r3,1332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1332, ctx.r3.u32);
	// bl 0x822e4c88
	ctx.lr = 0x8238CDEC;
	sub_822E4C88(ctx, base);
	// lwz r11,1332(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1332);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8238ce34
	if (!ctx.cr6.eq) goto loc_8238CE34;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8238ce1c
	if (ctx.cr6.eq) goto loc_8238CE1C;
	// bl 0x823f1ea0
	ctx.lr = 0x8238CE04;
	sub_823F1EA0(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r11,32024
	ctx.r5.s64 = ctx.r11.s64 + 32024;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822e8368
	ctx.lr = 0x8238CE1C;
	sub_822E8368(ctx, base);
loc_8238CE1C:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,2440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2440, ctx.r11.u32);
	// bl 0x8228c610
	ctx.lr = 0x8238CE2C;
	sub_8228C610(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,1328(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1328, ctx.r11.u8);
loc_8238CE34:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-28736
	ctx.r3.s64 = ctx.r11.s64 + -28736;
	// bl 0x823f1e58
	ctx.lr = 0x8238CE40;
	sub_823F1E58(ctx, base);
	// lwz r11,1332(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1332);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8238CD10) {
	__imp__sub_8238CD10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238CE54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8238CE54) {
	__imp__sub_8238CE54(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238CE58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x8238CE60;
	__savegprlr_27(ctx, base);
	// stwu r1,-640(r1)
	ea = -640 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x822ec440
	ctx.lr = 0x8238CE78;
	sub_822EC440(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// stb r11,336(r1)
	PPC_STORE_U8(ctx.r1.u32 + 336, ctx.r11.u8);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r10,32040
	ctx.r5.s64 = ctx.r10.s64 + 32040;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822e8368
	ctx.lr = 0x8238CE9C;
	sub_822E8368(ctx, base);
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r28,r11,744
	ctx.r28.s64 = ctx.r11.s64 + 744;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r27,1524(r28)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1524);
	// bl 0x8238cd10
	ctx.lr = 0x8238CEBC;
	sub_8238CD10(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8238ced4
	if (ctx.cr6.eq) goto loc_8238CED4;
loc_8238CEC8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,640
	ctx.r1.s64 = ctx.r1.s64 + 640;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_8238CED4:
	// lbz r11,336(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 336);
	// stw r27,1524(r28)
	PPC_STORE_U32(ctx.r28.u32 + 1524, ctx.r27.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8238cf04
	if (ctx.cr6.eq) goto loc_8238CF04;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x8238cd10
	ctx.lr = 0x8238CEF8;
	sub_8238CD10(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8238cec8
	if (!ctx.cr6.eq) goto loc_8238CEC8;
loc_8238CF04:
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r27,1524(r28)
	PPC_STORE_U32(ctx.r28.u32 + 1524, ctx.r27.u32);
	// addi r1,r1,640
	ctx.r1.s64 = ctx.r1.s64 + 640;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8238CE58) {
	__imp__sub_8238CE58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238CF14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8238CF14) {
	__imp__sub_8238CF14(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238CF18) {
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
	// bl 0x8236a140
	ctx.lr = 0x8238CF30;
	sub_8236A140(ctx, base);
	// lis r11,-31809
	ctx.r11.s64 = -2084634624;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r8,0
	ctx.r8.s64 = 0;
	// ori r10,r8,32768
	ctx.r10.u64 = ctx.r8.u64 | 32768;
	// lwz r11,-12560(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -12560);
	// lfs f0,-31008(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -31008);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f1,f13
	ctx.f12.f64 = double(float(ctx.f1.f64 * ctx.f13.f64));
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fctidz f10,f11
	ctx.f10.s64 = (ctx.f11.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f10.u64);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8238cf78
	if (!ctx.cr6.lt) goto loc_8238CF78;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r31,0
	ctx.r31.s64 = 0;
	// ble cr6,0x8238cf7c
	if (!ctx.cr6.gt) goto loc_8238CF7C;
loc_8238CF78:
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
loc_8238CF7C:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lis r9,-31799
	ctx.r9.s64 = -2083979264;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// li r6,2
	ctx.r6.s64 = 2;
	// addi r30,r9,744
	ctx.r30.s64 = ctx.r9.s64 + 744;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,1332(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1332);
	// bl 0x823f3f28
	ctx.lr = 0x8238CFA8;
	sub_823F3F28(ctx, base);
	// li r8,2
	ctx.r8.s64 = 2;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r3,1332(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1332);
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x823f3f28
	ctx.lr = 0x8238CFC4;
	sub_823F3F28(ctx, base);
	// li r7,3
	ctx.r7.s64 = 3;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r3,1332(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1332);
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x823f3f28
	ctx.lr = 0x8238CFE0;
	sub_823F3F28(ctx, base);
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,5
	ctx.r5.s64 = 5;
	// lwz r3,1332(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1332);
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x823f3f28
	ctx.lr = 0x8238D004;
	sub_823F3F28(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,1332(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1332);
	// bl 0x823f3e98
	ctx.lr = 0x8238D014;
	sub_823F3E98(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,1332(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1332);
	// bl 0x823f3e98
	ctx.lr = 0x8238D024;
	sub_823F3E98(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r3,1332(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1332);
	// bl 0x823f3e98
	ctx.lr = 0x8238D034;
	sub_823F3E98(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r3,1332(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1332);
	// bl 0x823f3e98
	ctx.lr = 0x8238D044;
	sub_823F3E98(ctx, base);
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

PPC_WEAK_FUNC(sub_8238CF18) {
	__imp__sub_8238CF18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238D05C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8238D05C) {
	__imp__sub_8238D05C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238D060) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x8238D068;
	__savegprlr_27(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,3
	ctx.r10.s64 = 3;
	// li r28,0
	ctx.r28.s64 = 0;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// li r27,1
	ctx.r27.s64 = 1;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// lis r9,-31936
	ctx.r9.s64 = -2092957696;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-9024(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9024);
	// bl 0x822e1f18
	ctx.lr = 0x8238D0A4;
	sub_822E1F18(ctx, base);
	// lis r10,-31799
	ctx.r10.s64 = -2083979264;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// addi r31,r10,744
	ctx.r31.s64 = ctx.r10.s64 + 744;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// stw r28,2444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2444, ctx.r28.u32);
	// stw r28,2448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2448, ctx.r28.u32);
	// bl 0x8238c200
	ctx.lr = 0x8238D0C0;
	sub_8238C200(ctx, base);
	// lis r8,-32199
	ctx.r8.s64 = -2110193664;
	// lis r7,-32199
	ctx.r7.s64 = -2110193664;
	// addi r4,r8,-13680
	ctx.r4.s64 = ctx.r8.s64 + -13680;
	// addi r3,r7,-13704
	ctx.r3.s64 = ctx.r7.s64 + -13704;
	// bl 0x823f4170
	ctx.lr = 0x8238D0D4;
	sub_823F4170(ctx, base);
	// lis r6,-32193
	ctx.r6.s64 = -2109800448;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r6,22560
	ctx.r3.s64 = ctx.r6.s64 + 22560;
	// bl 0x823f1eb0
	ctx.lr = 0x8238D0E4;
	sub_823F1EB0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x823f2400
	ctx.lr = 0x8238D0F0;
	sub_823F2400(ctx, base);
	// stb r28,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r28.u8);
	// li r6,128
	ctx.r6.s64 = 128;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8238ce58
	ctx.lr = 0x8238D108;
	sub_8238CE58(ctx, base);
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x8238d1b4
	if (!ctx.cr6.eq) goto loc_8238D1B4;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,32112
	ctx.r4.s64 = ctx.r11.s64 + 32112;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82280c30
	ctx.lr = 0x8238D12C;
	sub_82280C30(ctx, base);
	// stb r28,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r28.u8);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r6,128
	ctx.r6.s64 = 128;
	// addi r30,r11,31852
	ctx.r30.s64 = ctx.r11.s64 + 31852;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8238ce58
	ctx.lr = 0x8238D14C;
	sub_8238CE58(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8238d1b4
	if (!ctx.cr6.eq) goto loc_8238D1B4;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,32052
	ctx.r4.s64 = ctx.r11.s64 + 32052;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82280c30
	ctx.lr = 0x8238D170;
	sub_82280C30(ctx, base);
	// lis r10,-32131
	ctx.r10.s64 = -2105737216;
	// lwz r11,-24228(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -24228);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8238d194
	if (!ctx.cr6.eq) goto loc_8238D194;
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-4108(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4108);
	// bl 0x822e50f0
	ctx.lr = 0x8238D190;
	sub_822E50F0(ctx, base);
	// bl 0x82179e70
	ctx.lr = 0x8238D194;
	sub_82179E70(ctx, base);
loc_8238D194:
	// bl 0x8238c2a0
	ctx.lr = 0x8238D198;
	sub_8238C2A0(ctx, base);
	// lwz r11,1316(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1316);
	// stw r11,1320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1320, ctx.r11.u32);
	// lwsync 
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r27,1312(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1312, ctx.r27.u8);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_8238D1B4:
	// bl 0x8238cf18
	ctx.lr = 0x8238D1B8;
	sub_8238CF18(ctx, base);
	// li r5,184
	ctx.r5.s64 = 184;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,1336
	ctx.r3.s64 = ctx.r31.s64 + 1336;
	// bl 0x823de090
	ctx.lr = 0x8238D1C8;
	sub_823DE090(ctx, base);
	// addi r4,r31,1400
	ctx.r4.s64 = ctx.r31.s64 + 1400;
	// lwz r3,1332(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1332);
	// bl 0x823f2688
	ctx.lr = 0x8238D1D4;
	sub_823F2688(ctx, base);
	// bl 0x8238c418
	ctx.lr = 0x8238D1D8;
	sub_8238C418(ctx, base);
	// addi r4,r31,1400
	ctx.r4.s64 = ctx.r31.s64 + 1400;
	// lwz r3,1332(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1332);
	// bl 0x823f2760
	ctx.lr = 0x8238D1E4;
	sub_823F2760(ctx, base);
	// lis r11,-32131
	ctx.r11.s64 = -2105737216;
	// lwz r11,-24228(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -24228);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8238d208
	if (!ctx.cr6.eq) goto loc_8238D208;
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-4108(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4108);
	// bl 0x822e50f0
	ctx.lr = 0x8238D204;
	sub_822E50F0(ctx, base);
	// bl 0x82179e70
	ctx.lr = 0x8238D208;
	sub_82179E70(ctx, base);
loc_8238D208:
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r28,1540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1540, ctx.r28.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8238D060) {
	__imp__sub_8238D060(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238D218) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8238D218) {
	__imp__sub_8238D218(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238D21C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8238D21C) {
	__imp__sub_8238D21C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238D220) {
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
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r11,744
	ctx.r31.s64 = ctx.r11.s64 + 744;
	// lwz r11,524(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 524);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8238d284
	if (ctx.cr6.eq) goto loc_8238D284;
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x822ec4e8
	ctx.lr = 0x8238D254;
	sub_822EC4E8(ctx, base);
	// addi r3,r31,528
	ctx.r3.s64 = ctx.r31.s64 + 528;
	// addi r4,r31,264
	ctx.r4.s64 = ctx.r31.s64 + 264;
	// li r5,264
	ctx.r5.s64 = 264;
	// bl 0x823de1f0
	ctx.lr = 0x8238D264;
	sub_823DE1F0(ctx, base);
	// lwz r11,1316(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1316);
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r30,524(r31)
	PPC_STORE_U32(ctx.r31.u32 + 524, ctx.r30.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r10,1532(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1532, ctx.r10.u32);
	// li r3,24
	ctx.r3.s64 = 24;
	// stw r11,1316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1316, ctx.r11.u32);
	// bl 0x822ec500
	ctx.lr = 0x8238D284;
	sub_822EC500(ctx, base);
loc_8238D284:
	// lwz r11,788(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 788);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8238d30c
	if (ctx.cr6.eq) goto loc_8238D30C;
	// stw r30,788(r31)
	PPC_STORE_U32(ctx.r31.u32 + 788, ctx.r30.u32);
	// bl 0x8238ca98
	ctx.lr = 0x8238D298;
	sub_8238CA98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8238d2a4
	if (ctx.cr6.eq) goto loc_8238D2A4;
	// bl 0x8238c2a0
	ctx.lr = 0x8238D2A4;
	sub_8238C2A0(ctx, base);
loc_8238D2A4:
	// lbz r11,528(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 528);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8238d2ec
	if (ctx.cr6.eq) goto loc_8238D2EC;
	// addi r3,r31,528
	ctx.r3.s64 = ctx.r31.s64 + 528;
	// lwz r4,784(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 784);
	// bl 0x8238d060
	ctx.lr = 0x8238D2BC;
	sub_8238D060(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8238d2ec
	if (ctx.cr6.eq) goto loc_8238D2EC;
	// li r3,25
	ctx.r3.s64 = 25;
	// bl 0x822ec4e8
	ctx.lr = 0x8238D2D0;
	sub_822EC4E8(ctx, base);
	// li r5,256
	ctx.r5.s64 = 256;
	// addi r4,r31,528
	ctx.r4.s64 = ctx.r31.s64 + 528;
	// addi r3,r31,792
	ctx.r3.s64 = ctx.r31.s64 + 792;
	// bl 0x822e7e98
	ctx.lr = 0x8238D2E0;
	sub_822E7E98(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,1048(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1048, ctx.r30.u32);
	// b 0x8238d304
	goto loc_8238D304;
loc_8238D2EC:
	// li r3,25
	ctx.r3.s64 = 25;
	// bl 0x822ec4e8
	ctx.lr = 0x8238D2F4;
	sub_822EC4E8(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// stb r30,792(r31)
	PPC_STORE_U8(ctx.r31.u32 + 792, ctx.r30.u8);
	// stw r30,1048(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1048, ctx.r30.u32);
loc_8238D304:
	// li r3,25
	ctx.r3.s64 = 25;
	// bl 0x822ec500
	ctx.lr = 0x8238D30C;
	sub_822EC500(ctx, base);
loc_8238D30C:
	// lbz r11,792(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 792);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8238d348
	if (ctx.cr6.eq) goto loc_8238D348;
	// bl 0x8238c898
	ctx.lr = 0x8238D31C;
	sub_8238C898(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8238d348
	if (!ctx.cr6.eq) goto loc_8238D348;
	// lwz r10,1320(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1320);
	// lwz r11,1316(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1316);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x8238d348
	if (ctx.cr6.eq) goto loc_8238D348;
	// stw r11,1320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1320, ctx.r11.u32);
	// lwsync 
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,1312(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1312, ctx.r11.u8);
loc_8238D348:
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

PPC_WEAK_FUNC(sub_8238D220) {
	__imp__sub_8238D220(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238D360) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8238D368;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r29,r11,744
	ctx.r29.s64 = ctx.r11.s64 + 744;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,23
	ctx.r3.s64 = 23;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stb r10,1312(r29)
	PPC_STORE_U8(ctx.r29.u32 + 1312, ctx.r10.u8);
	// stb r11,1313(r29)
	PPC_STORE_U8(ctx.r29.u32 + 1313, ctx.r11.u8);
	// stw r10,1536(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1536, ctx.r10.u32);
	// bl 0x822ec4e8
	ctx.lr = 0x8238D398;
	sub_822EC4E8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r5,256
	ctx.r5.s64 = 256;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822e7e98
	ctx.lr = 0x8238D3A8;
	sub_822E7E98(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r31,256(r29)
	PPC_STORE_U32(ctx.r29.u32 + 256, ctx.r31.u32);
	// li r3,23
	ctx.r3.s64 = 23;
	// stw r10,260(r29)
	PPC_STORE_U32(ctx.r29.u32 + 260, ctx.r10.u32);
	// bl 0x822ec500
	ctx.lr = 0x8238D3BC;
	sub_822EC500(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8238D360) {
	__imp__sub_8238D360(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238D3C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8238D3C4) {
	__imp__sub_8238D3C4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238D3C8) {
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
loc_8238D3DC:
	// bl 0x82310110
	ctx.lr = 0x8238D3E0;
	sub_82310110(ctx, base);
	// subf r11,r31,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r31.s64;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bge cr6,0x8238d3f4
	if (!ctx.cr6.lt) goto loc_8238D3F4;
	// subfic r3,r11,15
	ctx.xer.ca = ctx.r11.u32 <= 15;
	ctx.r3.s64 = 15 - ctx.r11.s64;
	// bl 0x8228b0d8
	ctx.lr = 0x8238D3F4;
	sub_8228B0D8(ctx, base);
loc_8238D3F4:
	// bl 0x82310110
	ctx.lr = 0x8238D3F8;
	sub_82310110(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,22
	ctx.r3.s64 = 22;
	// bl 0x822ec4e8
	ctx.lr = 0x8238D404;
	sub_822EC4E8(ctx, base);
	// bl 0x8238d220
	ctx.lr = 0x8238D408;
	sub_8238D220(ctx, base);
	// li r3,22
	ctx.r3.s64 = 22;
	// bl 0x822ec500
	ctx.lr = 0x8238D410;
	sub_822EC500(ctx, base);
	// b 0x8238d3dc
	goto loc_8238D3DC;
}

PPC_WEAK_FUNC(sub_8238D3C8) {
	__imp__sub_8238D3C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238D414) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8238D414) {
	__imp__sub_8238D414(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238D418) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// li r8,-1
	ctx.r8.s64 = -1;
	// addi r9,r11,744
	ctx.r9.s64 = ctx.r11.s64 + 744;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r7,-32199
	ctx.r7.s64 = -2110193664;
	// stw r8,1532(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1532, ctx.r8.u32);
	// addi r3,r7,-11320
	ctx.r3.s64 = ctx.r7.s64 + -11320;
	// stw r11,1324(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1324, ctx.r11.u32);
	// stw r10,1320(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1320, ctx.r10.u32);
	// stw r10,1316(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1316, ctx.r10.u32);
	// b 0x8228c1b8
	sub_8228C1B8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8238D418) {
	__imp__sub_8238D418(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238D448) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8238D448) {
	__imp__sub_8238D448(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238D44C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8238D44C) {
	__imp__sub_8238D44C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238D450) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8238D458;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r29,r11,744
	ctx.r29.s64 = ctx.r11.s64 + 744;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,23
	ctx.r3.s64 = 23;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stb r10,1312(r29)
	PPC_STORE_U8(ctx.r29.u32 + 1312, ctx.r10.u8);
	// stb r11,1313(r29)
	PPC_STORE_U8(ctx.r29.u32 + 1313, ctx.r11.u8);
	// stw r10,1536(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1536, ctx.r10.u32);
	// bl 0x822ec4e8
	ctx.lr = 0x8238D488;
	sub_822EC4E8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r5,256
	ctx.r5.s64 = 256;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822e7e98
	ctx.lr = 0x8238D498;
	sub_822E7E98(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r31,256(r29)
	PPC_STORE_U32(ctx.r29.u32 + 256, ctx.r31.u32);
	// li r3,23
	ctx.r3.s64 = 23;
	// stw r10,260(r29)
	PPC_STORE_U32(ctx.r29.u32 + 260, ctx.r10.u32);
	// bl 0x822ec500
	ctx.lr = 0x8238D4AC;
	sub_822EC500(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8238D450) {
	__imp__sub_8238D450(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238D4B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8238D4B4) {
	__imp__sub_8238D4B4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238D4B8) {
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
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// addi r31,r11,744
	ctx.r31.s64 = ctx.r11.s64 + 744;
	// lbz r11,1052(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1052);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8238d4f4
	if (!ctx.cr6.eq) goto loc_8238D4F4;
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
loc_8238D4F4:
	// li r3,26
	ctx.r3.s64 = 26;
	// bl 0x822ec4e8
	ctx.lr = 0x8238D4FC;
	sub_822EC4E8(ctx, base);
	// addi r3,r31,1052
	ctx.r3.s64 = ctx.r31.s64 + 1052;
	// lwz r4,1308(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1308);
	// bl 0x8238d360
	ctx.lr = 0x8238D508;
	sub_8238D360(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,26
	ctx.r3.s64 = 26;
	// stb r11,1052(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1052, ctx.r11.u8);
	// bl 0x822ec500
	ctx.lr = 0x8238D518;
	sub_822EC500(ctx, base);
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

PPC_WEAK_FUNC(sub_8238D4B8) {
	__imp__sub_8238D4B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238D530) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8238D538;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,26
	ctx.r3.s64 = 26;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x822ec4e8
	ctx.lr = 0x8238D54C;
	sub_822EC4E8(ctx, base);
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// li r5,256
	ctx.r5.s64 = 256;
	// addi r31,r11,744
	ctx.r31.s64 = ctx.r11.s64 + 744;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r31,1052
	ctx.r3.s64 = ctx.r31.s64 + 1052;
	// bl 0x822e7e98
	ctx.lr = 0x8238D564;
	sub_822E7E98(ctx, base);
	// stw r30,1308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1308, ctx.r30.u32);
	// li r3,26
	ctx.r3.s64 = 26;
	// bl 0x822ec500
	ctx.lr = 0x8238D570;
	sub_822EC500(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8238D530) {
	__imp__sub_8238D530(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238D578) {
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
	// li r3,26
	ctx.r3.s64 = 26;
	// bl 0x822ec4e8
	ctx.lr = 0x8238D590;
	sub_822EC4E8(ctx, base);
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r31,r11,744
	ctx.r31.s64 = ctx.r11.s64 + 744;
	// addi r4,r10,-28736
	ctx.r4.s64 = ctx.r10.s64 + -28736;
	// li r5,256
	ctx.r5.s64 = 256;
	// addi r3,r31,1052
	ctx.r3.s64 = ctx.r31.s64 + 1052;
	// bl 0x822e7e98
	ctx.lr = 0x8238D5AC;
	sub_822E7E98(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,26
	ctx.r3.s64 = 26;
	// stw r11,1308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1308, ctx.r11.u32);
	// bl 0x822ec500
	ctx.lr = 0x8238D5BC;
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

PPC_WEAK_FUNC(sub_8238D578) {
	__imp__sub_8238D578(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238D5D0) {
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
	// lis r31,-31799
	ctx.r31.s64 = -2083979264;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r30,r31,744
	ctx.r30.s64 = ctx.r31.s64 + 744;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r3,23
	ctx.r3.s64 = 23;
	// lwz r11,1320(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1320);
	// stb r9,1312(r30)
	PPC_STORE_U8(ctx.r30.u32 + 1312, ctx.r9.u8);
	// stb r10,1313(r30)
	PPC_STORE_U8(ctx.r30.u32 + 1313, ctx.r10.u8);
	// stw r11,1324(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1324, ctx.r11.u32);
	// bl 0x822ec4e8
	ctx.lr = 0x8238D60C;
	sub_822EC4E8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// stb r11,744(r31)
	PPC_STORE_U8(ctx.r31.u32 + 744, ctx.r11.u8);
	// stw r10,256(r30)
	PPC_STORE_U32(ctx.r30.u32 + 256, ctx.r10.u32);
	// li r3,23
	ctx.r3.s64 = 23;
	// stw r8,260(r30)
	PPC_STORE_U32(ctx.r30.u32 + 260, ctx.r8.u32);
	// bl 0x822ec500
	ctx.lr = 0x8238D62C;
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

PPC_WEAK_FUNC(sub_8238D5D0) {
	__imp__sub_8238D5D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238D644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8238D644) {
	__imp__sub_8238D644(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238D648) {
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
	// li r3,22
	ctx.r3.s64 = 22;
	// bl 0x822ec4e8
	ctx.lr = 0x8238D65C;
	sub_822EC4E8(ctx, base);
	// bl 0x8238ca98
	ctx.lr = 0x8238D660;
	sub_8238CA98(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8238D648) {
	__imp__sub_8238D648(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238D670) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// addi r10,r11,744
	ctx.r10.s64 = ctx.r11.s64 + 744;
	// stw r3,1536(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1536, ctx.r3.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8238D670) {
	__imp__sub_8238D670(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238D680) {
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
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x822ec4e8
	ctx.lr = 0x8238D69C;
	sub_822EC4E8(ctx, base);
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// li r3,24
	ctx.r3.s64 = 24;
	// addi r31,r11,744
	ctx.r31.s64 = ctx.r11.s64 + 744;
	// lwz r30,524(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 524);
	// bl 0x822ec500
	ctx.lr = 0x8238D6B0;
	sub_822EC500(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x8238d6dc
	if (ctx.cr6.eq) goto loc_8238D6DC;
loc_8238D6B8:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8228b0d8
	ctx.lr = 0x8238D6C0;
	sub_8228B0D8(ctx, base);
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x822ec4e8
	ctx.lr = 0x8238D6C8;
	sub_822EC4E8(ctx, base);
	// li r3,24
	ctx.r3.s64 = 24;
	// lwz r30,524(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 524);
	// bl 0x822ec500
	ctx.lr = 0x8238D6D4;
	sub_822EC500(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x8238d6b8
	if (!ctx.cr6.eq) goto loc_8238D6B8;
loc_8238D6DC:
	// li r3,22
	ctx.r3.s64 = 22;
	// bl 0x822ec4e8
	ctx.lr = 0x8238D6E4;
	sub_822EC4E8(ctx, base);
	// li r3,22
	ctx.r3.s64 = 22;
	// lwz r31,1532(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1532);
	// bl 0x822ec500
	ctx.lr = 0x8238D6F0;
	sub_822EC500(ctx, base);
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

PPC_WEAK_FUNC(sub_8238D680) {
	__imp__sub_8238D680(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238D70C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8238D70C) {
	__imp__sub_8238D70C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238D710) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x8238D718;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r29,r11,13352
	ctx.r29.s64 = ctx.r11.s64 + 13352;
	// lbz r11,1(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 1);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8238d808
	if (ctx.cr6.eq) goto loc_8238D808;
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x822ec4e8
	ctx.lr = 0x8238D73C;
	sub_822EC4E8(ctx, base);
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// addi r31,r11,744
	ctx.r31.s64 = ctx.r11.s64 + 744;
	// lwz r30,260(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x8238d778
	if (ctx.cr6.eq) goto loc_8238D778;
	// li r3,23
	ctx.r3.s64 = 23;
	// bl 0x822ec4e8
	ctx.lr = 0x8238D758;
	sub_822EC4E8(ctx, base);
	// addi r3,r31,264
	ctx.r3.s64 = ctx.r31.s64 + 264;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r5,264
	ctx.r5.s64 = 264;
	// bl 0x823de1f0
	ctx.lr = 0x8238D768;
	sub_823DE1F0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,23
	ctx.r3.s64 = 23;
	// stw r10,260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 260, ctx.r10.u32);
	// bl 0x822ec500
	ctx.lr = 0x8238D778;
	sub_822EC500(ctx, base);
loc_8238D778:
	// lwz r11,524(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 524);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8238d78c
	if (!ctx.cr6.eq) goto loc_8238D78C;
	// lwz r28,1532(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1532);
	// b 0x8238d790
	goto loc_8238D790;
loc_8238D78C:
	// li r28,-1
	ctx.r28.s64 = -1;
loc_8238D790:
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x822ec500
	ctx.lr = 0x8238D798;
	sub_822EC500(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r11,2452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2452, ctx.r11.u32);
	// beq cr6,0x8238d7cc
	if (ctx.cr6.eq) goto loc_8238D7CC;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne cr6,0x8238d7c8
	if (!ctx.cr6.eq) goto loc_8238D7C8;
	// lwz r11,520(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 520);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8238d7c8
	if (ctx.cr6.eq) goto loc_8238D7C8;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,2452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2452, ctx.r11.u32);
loc_8238D7C8:
	// bl 0x823b1db0
	ctx.lr = 0x8238D7CC;
	sub_823B1DB0(ctx, base);
loc_8238D7CC:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x8238d800
	if (ctx.cr6.eq) goto loc_8238D800;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// bl 0x823ad808
	ctx.lr = 0x8238D7E4;
	sub_823AD808(ctx, base);
	// bl 0x8238d680
	ctx.lr = 0x8238D7E8;
	sub_8238D680(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x823aee78
	ctx.lr = 0x8238D7F0;
	sub_823AEE78(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// stw r10,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r10.u32);
	// lwsync 
loc_8238D800:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8238c5a8
	ctx.lr = 0x8238D808;
	sub_8238C5A8(ctx, base);
loc_8238D808:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8238D710) {
	__imp__sub_8238D710(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238D810) {
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
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// addi r10,r11,744
	ctx.r10.s64 = ctx.r11.s64 + 744;
	// lwz r11,2452(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2452);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8238d838
	if (ctx.cr6.eq) goto loc_8238D838;
	// bl 0x8238d680
	ctx.lr = 0x8238D834;
	sub_8238D680(ctx, base);
	// bl 0x8238c5a8
	ctx.lr = 0x8238D838;
	sub_8238C5A8(ctx, base);
loc_8238D838:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8238D810) {
	__imp__sub_8238D810(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238D848) {
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
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x823de020
	ctx.lr = 0x8238D860;
	__savefpr_26(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r9,r11,4520
	ctx.r9.s64 = ctx.r11.s64 + 4520;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lfs f13,25180(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 25180);
	ctx.f13.f64 = double(temp.f32);
	// lwz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// lfs f0,36(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// lwz r7,8(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// std r8,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r8.u64);
	// lfd f12,96(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// std r7,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r7.u64);
	// lfd f11,96(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// fcfid f9,f12
	ctx.f9.f64 = double(ctx.f12.s64);
	// frsp f28,f10
	ctx.f28.f64 = double(float(ctx.f10.f64));
	// frsp f27,f9
	ctx.f27.f64 = double(float(ctx.f9.f64));
	// fmuls f8,f0,f28
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f28.f64));
	// fmuls f26,f8,f13
	ctx.f26.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// fcmpu cr6,f26,f27
	ctx.cr6.compare(ctx.f26.f64, ctx.f27.f64);
	// ble cr6,0x8238d8b8
	if (!ctx.cr6.gt) goto loc_8238D8B8;
	// fmr f26,f27
	ctx.f26.f64 = ctx.f27.f64;
loc_8238D8B8:
	// fsubs f13,f27,f26
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f27.f64 - ctx.f26.f64));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// stfs f1,108(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// fmr f3,f28
	ctx.f3.f64 = ctx.f28.f64;
	// addi r31,r11,4608
	ctx.r31.s64 = ctx.r11.s64 + 4608;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f0,2416(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2416);
	ctx.f0.f64 = double(temp.f32);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lfs f31,5484(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5484);
	ctx.f31.f64 = double(temp.f32);
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// lwz r11,8360(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8360);
	// stfs f31,96(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lfs f30,12168(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12168);
	ctx.f30.f64 = double(temp.f32);
	// fmr f6,f31
	ctx.f6.f64 = ctx.f31.f64;
	// fmuls f29,f13,f0
	ctx.f29.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f31,100(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f31,104(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fmr f8,f30
	ctx.f8.f64 = ctx.f30.f64;
	// fmr f5,f31
	ctx.f5.f64 = ctx.f31.f64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// fmr f7,f30
	ctx.f7.f64 = ctx.f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// fmr f4,f29
	ctx.f4.f64 = ctx.f29.f64;
	// bl 0x823915b0
	ctx.lr = 0x8238D924;
	sub_823915B0(ctx, base);
	// lwz r11,8360(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8360);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// fmr f8,f30
	ctx.fpscr.disableFlushMode();
	ctx.f8.f64 = ctx.f30.f64;
	// fmr f6,f31
	ctx.f6.f64 = ctx.f31.f64;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// fmr f5,f31
	ctx.f5.f64 = ctx.f31.f64;
	// fmr f7,f30
	ctx.f7.f64 = ctx.f30.f64;
	// fmr f4,f29
	ctx.f4.f64 = ctx.f29.f64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// fmr f3,f28
	ctx.f3.f64 = ctx.f28.f64;
	// fsubs f2,f27,f29
	ctx.f2.f64 = double(float(ctx.f27.f64 - ctx.f29.f64));
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x823915b0
	ctx.lr = 0x8238D958;
	sub_823915B0(ctx, base);
	// clrlwi r5,r30,24
	ctx.r5.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8238d99c
	if (ctx.cr6.eq) goto loc_8238D99C;
	// lwz r11,8480(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8480);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// fmr f8,f30
	ctx.fpscr.disableFlushMode();
	ctx.f8.f64 = ctx.f30.f64;
	// addi r9,r10,-2072
	ctx.r9.s64 = ctx.r10.s64 + -2072;
	// fmr f7,f30
	ctx.f7.f64 = ctx.f30.f64;
	// fmr f6,f31
	ctx.f6.f64 = ctx.f31.f64;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// fmr f5,f31
	ctx.f5.f64 = ctx.f31.f64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// fmr f4,f26
	ctx.f4.f64 = ctx.f26.f64;
	// fmr f3,f28
	ctx.f3.f64 = ctx.f28.f64;
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x823915b0
	ctx.lr = 0x8238D99C;
	sub_823915B0(ctx, base);
loc_8238D99C:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x823de06c
	ctx.lr = 0x8238D9A8;
	__restfpr_26(ctx, base);
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

PPC_WEAK_FUNC(sub_8238D848) {
	__imp__sub_8238D848(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238D9BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8238D9BC) {
	__imp__sub_8238D9BC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238D9C0) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8238d848
	sub_8238D848(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8238D9C0) {
	__imp__sub_8238D9C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238D9C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f1,12168(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f1.f64 = double(temp.f32);
	// b 0x8238d848
	sub_8238D848(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8238D9C8) {
	__imp__sub_8238D9C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238D9D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// addi r11,r11,744
	ctx.r11.s64 = ctx.r11.s64 + 744;
	// lbz r10,1312(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1312);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8238d9f4
	if (!ctx.cr6.eq) goto loc_8238D9F4;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8238D9F4:
	// lwsync 
	// lwz r10,1320(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1320);
	// lwz r11,1324(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1324);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
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

PPC_WEAK_FUNC(sub_8238D9D8) {
	__imp__sub_8238D9D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238DA10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// addi r11,r11,744
	ctx.r11.s64 = ctx.r11.s64 + 744;
	// lbz r10,1312(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1312);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8238da3c
	if (ctx.cr6.eq) goto loc_8238DA3C;
	// lwsync 
	// lwz r10,1324(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1324);
	// lwz r9,1320(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1320);
	// subf r8,r10,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	// addic r7,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r7.s64 = ctx.r8.s64 + -1;
	// subfe r10,r7,r8
	temp.u8 = (~ctx.r7.u32 + ctx.r8.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r7.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_8238DA3C:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8238da58
	if (!ctx.cr6.eq) goto loc_8238DA58;
	// lbz r11,792(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 792);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x8238da5c
	if (!ctx.cr6.eq) goto loc_8238DA5C;
loc_8238DA58:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8238DA5C:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8238DA10) {
	__imp__sub_8238DA10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238DA64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8238DA64) {
	__imp__sub_8238DA64(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238DA68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// addi r10,r11,744
	ctx.r10.s64 = ctx.r11.s64 + 744;
	// lbz r3,1313(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1313);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8238DA68) {
	__imp__sub_8238DA68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238DA78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x8238DA80;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,744
	ctx.r31.s64 = ctx.r11.s64 + 744;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lbz r11,1312(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1312);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8238dabc
	if (ctx.cr6.eq) goto loc_8238DABC;
	// lwsync 
	// lwz r11,1324(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1324);
	// lwz r10,1320(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1320);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addic r8,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// subfe r11,r8,r9
	temp.u8 = (~ctx.r8.u32 + ctx.r9.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r8.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_8238DABC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8238dad8
	if (!ctx.cr6.eq) goto loc_8238DAD8;
	// lbz r11,792(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 792);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x8238dadc
	if (!ctx.cr6.eq) goto loc_8238DADC;
loc_8238DAD8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8238DADC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8238db04
	if (ctx.cr6.eq) goto loc_8238DB04;
	// li r3,25
	ctx.r3.s64 = 25;
	// bl 0x822ec4e8
	ctx.lr = 0x8238DAF0;
	sub_822EC4E8(ctx, base);
	// lbz r11,792(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 792);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8238db10
	if (!ctx.cr6.eq) goto loc_8238DB10;
	// li r3,25
	ctx.r3.s64 = 25;
	// bl 0x822ec500
	ctx.lr = 0x8238DB04;
	sub_822EC500(ctx, base);
loc_8238DB04:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_8238DB10:
	// lwz r11,1048(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1048);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r31,792
	ctx.r4.s64 = ctx.r31.s64 + 792;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// bl 0x822e7e98
	ctx.lr = 0x8238DB28;
	sub_822E7E98(ctx, base);
	// li r3,25
	ctx.r3.s64 = 25;
	// bl 0x822ec500
	ctx.lr = 0x8238DB30;
	sub_822EC500(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8238DA78) {
	__imp__sub_8238DA78(ctx, base);
}

