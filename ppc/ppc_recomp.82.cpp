#include "ppc_recomp_shared.h"

PPC_FUNC_IMPL(__imp__sub_82316FC8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r13)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,20
	ctx.r10.s64 = 20;
	// mullw r8,r4,r5
	ctx.r8.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r5.s32);
	// lwzx r7,r10,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r9,520(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 520);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// rlwinm r6,r4,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r5,r7
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r7.u32);
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// add r5,r8,r10
	ctx.r5.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r3,r9,r10
	ctx.r3.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stwx r5,r6,r7
	PPC_STORE_U32(ctx.r6.u32 + ctx.r7.u32, ctx.r5.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82316FC8) {
	__imp__sub_82316FC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8231700C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8231700C) {
	__imp__sub_8231700C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82317010) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r13)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,20
	ctx.r10.s64 = 20;
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82317010) {
	__imp__sub_82317010(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8231702C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8231702C) {
	__imp__sub_8231702C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82317030) {
	PPC_FUNC_PROLOGUE();
	// lbz r10,2(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82317080
	if (ctx.cr6.eq) goto loc_82317080;
	// lbz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82317080
	if (!ctx.cr6.eq) goto loc_82317080;
	// lbz r10,1(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82317080
	if (!ctx.cr6.eq) goto loc_82317080;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8231709c
	if (ctx.cr6.eq) goto loc_8231709C;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bge cr6,0x82317088
	if (!ctx.cr6.lt) goto loc_82317088;
	// subf r8,r10,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	// cmpw cr6,r8,r4
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r4.s32, ctx.xer);
	// bge cr6,0x8231709c
	if (!ctx.cr6.lt) goto loc_8231709C;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,2(r3)
	PPC_STORE_U8(ctx.r3.u32 + 2, ctx.r10.u8);
loc_82317080:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82317088:
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmpw cr6,r10,r4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r4.s32, ctx.xer);
	// bge cr6,0x8231709c
	if (!ctx.cr6.lt) goto loc_8231709C;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
loc_8231709C:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82317030) {
	__imp__sub_82317030(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823170A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823170A4) {
	__imp__sub_823170A4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823170A8) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,2(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823170dc
	if (ctx.cr6.eq) goto loc_823170DC;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823170dc
	if (!ctx.cr6.eq) goto loc_823170DC;
	// lbz r11,1(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823170dc
	if (!ctx.cr6.eq) goto loc_823170DC;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
loc_823170DC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823170A8) {
	__imp__sub_823170A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823170E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823170E4) {
	__imp__sub_823170E4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823170E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lbz r11,2(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8231711c
	if (ctx.cr6.eq) goto loc_8231711C;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823171c0
	if (ctx.cr6.eq) goto loc_823171C0;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bge cr6,0x8231716c
	if (!ctx.cr6.lt) goto loc_8231716C;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cmpw cr6,r9,r4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r4.s32, ctx.xer);
	// bge cr6,0x82317128
	if (!ctx.cr6.lt) goto loc_82317128;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,2(r3)
	PPC_STORE_U8(ctx.r3.u32 + 2, ctx.r10.u8);
loc_8231711C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_82317128:
	// neg r11,r11
	ctx.r11.s64 = -ctx.r11.s64;
	// subf r10,r10,r4
	ctx.r10.s64 = ctx.r4.s64 - ctx.r10.s64;
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// std r9,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r9.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// std r8,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r8.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f11,f0
	ctx.f11.f64 = double(ctx.f0.s64);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lfs f0,12168(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// fdivs f8,f10,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 / ctx.f9.f64));
	// fsubs f1,f0,f8
	ctx.f1.f64 = double(float(ctx.f0.f64 - ctx.f8.f64));
	// blr 
	return;
loc_8231716C:
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpw cr6,r9,r4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r4.s32, ctx.xer);
	// bge cr6,0x8231718c
	if (!ctx.cr6.lt) goto loc_8231718C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// lfs f1,12168(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_8231718C:
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// subf r10,r10,r4
	ctx.r10.s64 = ctx.r4.s64 - ctx.r10.s64;
	// std r9,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r9.u64);
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// std r8,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r8.u64);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f11,f13
	ctx.f11.f64 = double(float(ctx.f13.f64));
	// lfd f12,-16(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f10,f12
	ctx.f10.f64 = double(ctx.f12.s64);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// fdivs f1,f9,f11
	ctx.f1.f64 = double(float(ctx.f9.f64 / ctx.f11.f64));
	// blr 
	return;
loc_823171C0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,12168(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823170E8) {
	__imp__sub_823170E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823171CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823171CC) {
	__imp__sub_823171CC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823171D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x823171D8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82317238
	if (ctx.cr6.eq) goto loc_82317238;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// subfic r29,r3,119
	ctx.xer.ca = ctx.r3.u32 <= 119;
	ctx.r29.s64 = 119 - ctx.r3.s64;
loc_823171F8:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x823dfa20
	ctx.lr = 0x82317200;
	sub_823DFA20(ctx, base);
	// add r10,r29,r31
	ctx.r10.u64 = ctx.r29.u64 + ctx.r31.u64;
	// lbzu r9,1(r31)
	ea = 1 + ctx.r31.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r31.u32 = ea;
	// extsb r7,r3
	ctx.r7.s64 = ctx.r3.s8;
	// extsb r11,r9
	ctx.r11.s64 = ctx.r9.s8;
	// mullw r10,r7,r10
	ctx.r10.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r10.s32);
	// add r30,r10,r30
	ctx.r30.u64 = ctx.r10.u64 + ctx.r30.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823171f8
	if (!ctx.cr6.eq) goto loc_823171F8;
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r9,r30
	ctx.r3.u64 = ctx.r9.u64 & ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_82317238:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823171D0) {
	__imp__sub_823171D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82317244) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82317244) {
	__imp__sub_82317244(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82317248) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// std r4,24(r1)
	PPC_STORE_U64(ctx.r1.u32 + 24, ctx.r4.u64);
	// std r5,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.r5.u64);
	// std r6,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.r6.u64);
	// std r7,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.r7.u64);
	// std r8,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.r8.u64);
	// std r9,64(r1)
	PPC_STORE_U64(ctx.r1.u32 + 64, ctx.r9.u64);
	// std r10,72(r1)
	PPC_STORE_U64(ctx.r1.u32 + 72, ctx.r10.u64);
	// stwu r1,-1136(r1)
	ea = -1136 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,1160
	ctx.r10.s64 = ctx.r1.s64 + 1160;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,1024
	ctx.r4.s64 = 1024;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x823e06d0
	ctx.lr = 0x82317294;
	sub_823E06D0(ctx, base);
	// lis r31,-32191
	ctx.r31.s64 = -2109669376;
	// lwz r11,29880(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 29880);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823172d8
	if (ctx.cr6.eq) goto loc_823172D8;
	// bl 0x822e6150
	ctx.lr = 0x823172A8;
	sub_822E6150(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r7,r3,1
	ctx.r7.s64 = ctx.r3.s64 + 1;
	// lwz r6,29880(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 29880);
	// addi r4,r11,17572
	ctx.r4.s64 = ctx.r11.s64 + 17572;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822830e8
	ctx.lr = 0x823172C4;
	sub_822830E8(ctx, base);
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
loc_823172D8:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-5272
	ctx.r4.s64 = ctx.r11.s64 + -5272;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822830e8
	ctx.lr = 0x823172EC;
	sub_822830E8(ctx, base);
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

PPC_WEAK_FUNC(sub_82317248) {
	__imp__sub_82317248(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82317300) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x82317308;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31835
	ctx.r11.s64 = -2086338560;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r27,r11,31720
	ctx.r27.s64 = ctx.r11.s64 + 31720;
	// lwz r11,11608(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 11608);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823173ac
	if (!ctx.cr6.eq) goto loc_823173AC;
	// bl 0x823171d0
	ctx.lr = 0x82317328;
	sub_823171D0(ctx, base);
	// lis r10,0
	ctx.r10.s64 = 0;
	// lwz r11,11612(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 11612);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// ori r28,r10,53248
	ctx.r28.u64 = ctx.r10.u64 | 53248;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// lwzx r9,r11,r28
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// ble cr6,0x82317384
	if (!ctx.cr6.gt) goto loc_82317384;
loc_8231734C:
	// lwz r10,76(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmpw cr6,r26,r10
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82317370
	if (!ctx.cr6.eq) goto loc_82317370;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822e8058
	ctx.lr = 0x82317364;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823173a0
	if (ctx.cr6.eq) goto loc_823173A0;
	// lwz r11,11612(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 11612);
loc_82317370:
	// lwzx r10,r11,r28
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,104
	ctx.r31.s64 = ctx.r31.s64 + 104;
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8231734c
	if (ctx.cr6.lt) goto loc_8231734C;
loc_82317384:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r11,17604
	ctx.r3.s64 = ctx.r11.s64 + 17604;
	// bl 0x82317248
	ctx.lr = 0x82317394;
	sub_82317248(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_823173A0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_823173AC:
	// bl 0x823171d0
	ctx.lr = 0x823173B0;
	sub_823171D0(ctx, base);
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82317408
	if (ctx.cr6.eq) goto loc_82317408;
	// lwz r11,11608(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 11608);
	// addi r31,r11,8
	ctx.r31.s64 = ctx.r11.s64 + 8;
loc_823173D0:
	// lwz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x823173f4
	if (!ctx.cr6.eq) goto loc_823173F4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822e8058
	ctx.lr = 0x823173E8;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823173a0
	if (ctx.cr6.eq) goto loc_823173A0;
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
loc_823173F4:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,72
	ctx.r31.s64 = ctx.r31.s64 + 72;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823173d0
	if (ctx.cr6.lt) goto loc_823173D0;
loc_82317408:
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r8,0(r13)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r7,24
	ctx.r7.s64 = 24;
	// lwz r10,11608(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 11608);
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lis r5,8
	ctx.r5.s64 = 524288;
	// rlwinm r11,r6,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// ori r9,r5,10608
	ctx.r9.u64 = ctx.r5.u64 | 10608;
	// lwzx r8,r7,r8
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// add r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lis r7,-32252
	ctx.r7.s64 = -2113667072;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r7,17592
	ctx.r3.s64 = ctx.r7.s64 + 17592;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwzx r6,r8,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// bl 0x82293d60
	ctx.lr = 0x82317448;
	sub_82293D60(ctx, base);
	// subf r10,r30,r31
	ctx.r10.s64 = ctx.r31.s64 - ctx.r30.s64;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
loc_82317454:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stbx r9,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne cr6,0x82317454
	if (!ctx.cr6.eq) goto loc_82317454;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// stw r28,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r3,r10,-1
	ctx.r3.s64 = ctx.r10.s64 + -1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82317300) {
	__imp__sub_82317300(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82317488) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x82317490;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// bl 0x823171d0
	ctx.lr = 0x823174A4;
	sub_823171D0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82317500
	if (ctx.cr6.eq) goto loc_82317500;
loc_823174B8:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x823174d0
	if (!ctx.cr6.eq) goto loc_823174D0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x823171d0
	ctx.lr = 0x823174CC;
	sub_823171D0(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
loc_823174D0:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x823174f0
	if (!ctx.cr6.eq) goto loc_823174F0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x822e8058
	ctx.lr = 0x823174E8;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82317524
	if (ctx.cr6.eq) goto loc_82317524;
loc_823174F0:
	// lwzu r11,8(r31)
	ea = 8 + ctx.r31.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r31.u32 = ea;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823174b8
	if (!ctx.cr6.eq) goto loc_823174B8;
loc_82317500:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne cr6,0x82317518
	if (!ctx.cr6.eq) goto loc_82317518;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r11,17664
	ctx.r3.s64 = ctx.r11.s64 + 17664;
	// bl 0x82317248
	ctx.lr = 0x82317518;
	sub_82317248(ctx, base);
loc_82317518:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_82317524:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82317488) {
	__imp__sub_82317488(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82317530) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82317538;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8231754C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8231754c
	if (!ctx.cr6.eq) goto loc_8231754C;
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r10,r5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x82317588
	if (ctx.cr6.lt) goto loc_82317588;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,17704
	ctx.r3.s64 = ctx.r11.s64 + 17704;
	// bl 0x82317248
	ctx.lr = 0x82317588;
	sub_82317248(ctx, base);
loc_82317588:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// add r3,r10,r29
	ctx.r3.u64 = ctx.r10.u64 + ctx.r29.u64;
	// subf r10,r31,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r31.s64;
loc_82317598:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stbx r9,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne cr6,0x82317598
	if (!ctx.cr6.eq) goto loc_82317598;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_823175B0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823175b0
	if (!ctx.cr6.eq) goto loc_823175B0;
	// subf r10,r31,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r31.s64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82317530) {
	__imp__sub_82317530(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823175E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823175E4) {
	__imp__sub_823175E4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823175E8) {
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
	// lis r11,-31835
	ctx.r11.s64 = -2086338560;
	// rlwinm r30,r3,3,0,28
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r31,r11,31728
	ctx.r31.s64 = ctx.r11.s64 + 31728;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// stwx r4,r30,r31
	PPC_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r4.u32);
	// bl 0x823171d0
	ctx.lr = 0x82317614;
	sub_823171D0(ctx, base);
	// addi r10,r31,4
	ctx.r10.s64 = ctx.r31.s64 + 4;
	// stwx r3,r30,r10
	PPC_STORE_U32(ctx.r30.u32 + ctx.r10.u32, ctx.r3.u32);
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

PPC_WEAK_FUNC(sub_823175E8) {
	__imp__sub_823175E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82317634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82317634) {
	__imp__sub_82317634(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82317638) {
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
	// lis r11,-31835
	ctx.r11.s64 = -2086338560;
	// li r5,1600
	ctx.r5.s64 = 1600;
	// addi r3,r11,31728
	ctx.r3.s64 = ctx.r11.s64 + 31728;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823de090
	ctx.lr = 0x82317658;
	sub_823DE090(ctx, base);
	// bl 0x82332528
	ctx.lr = 0x8231765C;
	sub_82332528(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82317638) {
	__imp__sub_82317638(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8231766C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8231766C) {
	__imp__sub_8231766C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82317670) {
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
	// lis r11,-31835
	ctx.r11.s64 = -2086338560;
	// lis r10,0
	ctx.r10.s64 = 0;
	// addi r31,r11,31720
	ctx.r31.s64 = ctx.r11.s64 + 31720;
	// ori r9,r10,53248
	ctx.r9.u64 = ctx.r10.u64 | 53248;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,11612(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11612);
	// lwzx r6,r11,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmplw cr6,r3,r6
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x823176bc
	if (ctx.cr6.lt) goto loc_823176BC;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,17752
	ctx.r4.s64 = ctx.r11.s64 + 17752;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822830e8
	ctx.lr = 0x823176BC;
	sub_822830E8(ctx, base);
loc_823176BC:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r3,11608(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11608);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823176f0
	if (ctx.cr6.eq) goto loc_823176F0;
loc_823176D4:
	// lhz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// cmpw cr6,r30,r9
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x823176f4
	if (ctx.cr6.eq) goto loc_823176F4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r3,r3,72
	ctx.r3.s64 = ctx.r3.s64 + 72;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x823176d4
	if (ctx.cr6.lt) goto loc_823176D4;
loc_823176F0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823176F4:
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

PPC_WEAK_FUNC(sub_82317670) {
	__imp__sub_82317670(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8231770C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8231770C) {
	__imp__sub_8231770C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82317710) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addis r9,r3,1
	ctx.r9.s64 = ctx.r3.s64 + 65536;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r9,r9,-12288
	ctx.r9.s64 = ctx.r9.s64 + -12288;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x82317748
	if (!ctx.cr6.gt) goto loc_82317748;
	// addi r10,r3,-8
	ctx.r10.s64 = ctx.r3.s64 + -8;
loc_82317734:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwu r31,104(r10)
	ea = 104 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r31.u32);
	ctx.r10.u32 = ea;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82317734
	if (ctx.cr6.lt) goto loc_82317734;
loc_82317748:
	// lwz r11,0(r13)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,24
	ctx.r10.s64 = 24;
	// lis r9,8
	ctx.r9.s64 = 524288;
	// ori r8,r9,10608
	ctx.r8.u64 = ctx.r9.u64 | 10608;
	// lwzx r7,r10,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwzx r6,r7,r8
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x82317808
	if (!ctx.cr6.eq) goto loc_82317808;
	// addis r4,r3,2
	ctx.r4.s64 = ctx.r3.s64 + 131072;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r4,-16416
	ctx.r4.s64 = ctx.r4.s64 + -16416;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82317808
	if (!ctx.cr6.gt) goto loc_82317808;
	// addi r6,r4,4
	ctx.r6.s64 = ctx.r4.s64 + 4;
	// li r8,1
	ctx.r8.s64 = 1;
loc_82317788:
	// lwz r7,0(r6)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// lwz r11,220(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 220);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823177f4
	if (!ctx.cr6.gt) goto loc_823177F4;
	// addi r11,r7,226
	ctx.r11.s64 = ctx.r7.s64 + 226;
loc_823177A0:
	// lhz r10,-2(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + -2);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823177c0
	if (ctx.cr6.eq) goto loc_823177C0;
	// lhz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// mulli r10,r10,104
	ctx.r10.s64 = ctx.r10.s64 * 104;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// stw r8,96(r10)
	PPC_STORE_U32(ctx.r10.u32 + 96, ctx.r8.u32);
loc_823177C0:
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823177e0
	if (ctx.cr6.eq) goto loc_823177E0;
	// lhz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// mulli r10,r10,104
	ctx.r10.s64 = ctx.r10.s64 * 104;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// stw r8,96(r10)
	PPC_STORE_U32(ctx.r10.u32 + 96, ctx.r8.u32);
loc_823177E0:
	// lwz r10,220(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 220);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x823177a0
	if (ctx.cr6.lt) goto loc_823177A0;
loc_823177F4:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// cmpw cr6,r5,r11
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82317788
	if (ctx.cr6.lt) goto loc_82317788;
loc_82317808:
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82317710) {
	__imp__sub_82317710(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82317810) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf40
	ctx.lr = 0x82317818;
	__savegprlr_14(ctx, base);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,120
	ctx.r11.s64 = ctx.r1.s64 + 120;
	// stw r3,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, ctx.r3.u32);
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r4,380(r1)
	PPC_STORE_U32(ctx.r1.u32 + 380, ctx.r4.u32);
	// mr r14,r5
	ctx.r14.u64 = ctx.r5.u64;
	// stw r27,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r27.u32);
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// lis r8,-31835
	ctx.r8.s64 = -2086338560;
	// std r27,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r27.u64);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lis r6,-32252
	ctx.r6.s64 = -2113667072;
	// stw r27,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r27.u32);
	// lis r5,-32252
	ctx.r5.s64 = -2113667072;
	// stb r27,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r27.u8);
	// lis r4,-32255
	ctx.r4.s64 = -2113863680;
	// lis r3,-32252
	ctx.r3.s64 = -2113667072;
	// lis r31,-32252
	ctx.r31.s64 = -2113667072;
	// lis r30,-32252
	ctx.r30.s64 = -2113667072;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r23,r27
	ctx.r23.u64 = ctx.r27.u64;
	// li r25,1
	ctx.r25.s64 = 1;
	// li r22,-1
	ctx.r22.s64 = -1;
	// addi r29,r8,29416
	ctx.r29.s64 = ctx.r8.s64 + 29416;
	// addi r17,r7,24440
	ctx.r17.s64 = ctx.r7.s64 + 24440;
	// addi r21,r6,17872
	ctx.r21.s64 = ctx.r6.s64 + 17872;
	// addi r16,r5,17820
	ctx.r16.s64 = ctx.r5.s64 + 17820;
	// addi r15,r4,-6372
	ctx.r15.s64 = ctx.r4.s64 + -6372;
	// addi r24,r3,17816
	ctx.r24.s64 = ctx.r3.s64 + 17816;
	// addi r26,r31,17808
	ctx.r26.s64 = ctx.r31.s64 + 17808;
	// addi r30,r30,16304
	ctx.r30.s64 = ctx.r30.s64 + 16304;
	// addi r20,r9,17800
	ctx.r20.s64 = ctx.r9.s64 + 17800;
	// addi r19,r10,13236
	ctx.r19.s64 = ctx.r10.s64 + 13236;
	// addi r18,r11,-16592
	ctx.r18.s64 = ctx.r11.s64 + -16592;
loc_823178A8:
	// lwz r3,372(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// bl 0x822e6d78
	ctx.lr = 0x823178B0;
	sub_822E6D78(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823178c8
	if (ctx.cr6.eq) goto loc_823178C8;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823178fc
	if (!ctx.cr6.eq) goto loc_823178FC;
loc_823178C8:
	// bl 0x822e6390
	ctx.lr = 0x823178CC;
	sub_822E6390(ctx, base);
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// mr r23,r25
	ctx.r23.u64 = ctx.r25.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_823178D8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x823178d8
	if (!ctx.cr6.eq) goto loc_823178D8;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82317bfc
	if (ctx.cr6.eq) goto loc_82317BFC;
loc_823178FC:
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e8058
	ctx.lr = 0x82317908;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82317914
	if (!ctx.cr6.eq) goto loc_82317914;
	// mr r23,r25
	ctx.r23.u64 = ctx.r25.u64;
loc_82317914:
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e8058
	ctx.lr = 0x82317920;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82317938
	if (!ctx.cr6.eq) goto loc_82317938;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// b 0x82317be0
	goto loc_82317BE0;
loc_82317938:
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e8058
	ctx.lr = 0x82317944;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82317bf0
	if (ctx.cr6.eq) goto loc_82317BF0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e8058
	ctx.lr = 0x82317958;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82317964
	if (!ctx.cr6.eq) goto loc_82317964;
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
loc_82317964:
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// bne cr6,0x82317a3c
	if (!ctx.cr6.eq) goto loc_82317A3C;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e8058
	ctx.lr = 0x82317978;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82317a3c
	if (ctx.cr6.eq) goto loc_82317A3C;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e8058
	ctx.lr = 0x8231798C;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82317a3c
	if (ctx.cr6.eq) goto loc_82317A3C;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82317998:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82317998
	if (!ctx.cr6.eq) goto loc_82317998;
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lbz r9,-1(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + -1);
	// cmplwi cr6,r9,44
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 44, ctx.xer);
	// bne cr6,0x823179f0
	if (!ctx.cr6.eq) goto loc_823179F0;
	// mr r23,r25
	ctx.r23.u64 = ctx.r25.u64;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_823179CC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823179cc
	if (!ctx.cr6.eq) goto loc_823179CC;
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stb r27,-1(r10)
	PPC_STORE_U8(ctx.r10.u32 + -1, ctx.r27.u8);
loc_823179F0:
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_823179F8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x823179f8
	if (!ctx.cr6.eq) goto loc_823179F8;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82317a2c
	if (ctx.cr6.eq) goto loc_82317A2C;
	// mr r5,r15
	ctx.r5.u64 = ctx.r15.u64;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x822e8280
	ctx.lr = 0x82317A2C;
	sub_822E8280(ctx, base);
loc_82317A2C:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x822e8280
	ctx.lr = 0x82317A3C;
	sub_822E8280(ctx, base);
loc_82317A3C:
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e8058
	ctx.lr = 0x82317A48;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82317a6c
	if (ctx.cr6.eq) goto loc_82317A6C;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e8058
	ctx.lr = 0x82317A5C;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82317a6c
	if (ctx.cr6.eq) goto loc_82317A6C;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq cr6,0x823178a8
	if (ctx.cr6.eq) goto loc_823178A8;
loc_82317A6C:
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82317A74:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82317a74
	if (!ctx.cr6.eq) goto loc_82317A74;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82317ad4
	if (!ctx.cr6.eq) goto loc_82317AD4;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq cr6,0x82317aac
	if (ctx.cr6.eq) goto loc_82317AAC;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x82317248
	ctx.lr = 0x82317AA8;
	sub_82317248(ctx, base);
	// b 0x82317ad4
	goto loc_82317AD4;
loc_82317AAC:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e8058
	ctx.lr = 0x82317AB8;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82317ac8
	if (!ctx.cr6.eq) goto loc_82317AC8;
	// stw r25,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r25.u32);
	// b 0x823178a8
	goto loc_823178A8;
loc_82317AC8:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82317248
	ctx.lr = 0x82317AD4;
	sub_82317248(ctx, base);
loc_82317AD4:
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x822e8058
	ctx.lr = 0x82317AE0;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82317af4
	if (!ctx.cr6.eq) goto loc_82317AF4;
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// b 0x82317b70
	goto loc_82317B70;
loc_82317AF4:
	// addi r10,r29,-2376
	ctx.r10.s64 = ctx.r29.s64 + -2376;
	// rlwinm r11,r14,7,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r14.u32 | (ctx.r14.u64 << 32), 7) & 0xFFFFFF80;
	// li r5,1
	ctx.r5.s64 = 1;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82317488
	ctx.lr = 0x82317B0C;
	sub_82317488(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82317b30
	if (ctx.cr6.lt) goto loc_82317B30;
	// rlwinm r11,r14,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r14.u32 | (ctx.r14.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r9,r29,4
	ctx.r9.s64 = ctx.r29.s64 + 4;
	// add r8,r11,r3
	ctx.r8.u64 = ctx.r11.u64 + ctx.r3.u64;
	// rlwinm r7,r8,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r10,r7,r29
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r29.u32);
	// lwzx r11,r7,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// b 0x82317b70
	goto loc_82317B70;
loc_82317B30:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,380(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 380);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r27,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r27.u32);
	// stw r27,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r27.u32);
	// bl 0x82317488
	ctx.lr = 0x82317B48;
	sub_82317488(ctx, base);
	// srawi r11,r3,5
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 5;
	// addi r10,r1,120
	ctx.r10.s64 = ctx.r1.s64 + 120;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r9,r3,27
	ctx.r9.u64 = ctx.r3.u32 & 0x1F;
	// slw r8,r25,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r25.u32 << (ctx.r9.u8 & 0x3F));
	// lwzx r7,r11,r10
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// or r6,r8,r7
	ctx.r6.u64 = ctx.r8.u64 | ctx.r7.u64;
	// stwx r6,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r6.u32);
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r10,120(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
loc_82317B70:
	// lwz r9,112(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// beq cr6,0x82317bb0
	if (ctx.cr6.eq) goto loc_82317BB0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82317b9c
	if (!ctx.cr6.eq) goto loc_82317B9C;
	// lwz r9,4(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82317b9c
	if (!ctx.cr6.eq) goto loc_82317B9C;
	// stw r22,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r22.u32);
	// stw r22,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r22.u32);
loc_82317B9C:
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r8,4(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// andc r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 & ~ctx.r10.u64;
	// andc r6,r8,r11
	ctx.r6.u64 = ctx.r8.u64 & ~ctx.r11.u64;
	// b 0x82317bbc
	goto loc_82317BBC;
loc_82317BB0:
	// lwz r8,4(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// or r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 | ctx.r10.u64;
	// or r6,r8,r11
	ctx.r6.u64 = ctx.r8.u64 | ctx.r11.u64;
loc_82317BBC:
	// stw r6,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r6.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// stw r7,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r7.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r27,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r27.u8);
	// bl 0x822e8058
	ctx.lr = 0x82317BD4;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82317be0
	if (!ctx.cr6.eq) goto loc_82317BE0;
	// stw r25,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r25.u32);
loc_82317BE0:
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq cr6,0x823178a8
	if (ctx.cr6.eq) goto loc_823178A8;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x823ddf90
	__restgprlr_14(ctx, base);
	return;
loc_82317BF0:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
loc_82317BFC:
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x823ddf90
	__restgprlr_14(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82317810) {
	__imp__sub_82317810(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82317C04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82317C04) {
	__imp__sub_82317C04(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82317C08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf60
	ctx.lr = 0x82317C10;
	__savegprlr_22(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// li r23,0
	ctx.r23.s64 = 0;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// std r23,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r23.u64);
	// bl 0x822e6d78
	ctx.lr = 0x82317C2C;
	sub_822E6D78(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82317dd4
	if (ctx.cr6.eq) goto loc_82317DD4;
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r25,r11,31224
	ctx.r25.s64 = ctx.r11.s64 + 31224;
	// addi r22,r10,17952
	ctx.r22.s64 = ctx.r10.s64 + 17952;
	// addi r24,r9,-18348
	ctx.r24.s64 = ctx.r9.s64 + -18348;
loc_82317C50:
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82317dd4
	if (ctx.cr6.eq) goto loc_82317DD4;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822e8058
	ctx.lr = 0x82317C68;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82317dec
	if (ctx.cr6.eq) goto loc_82317DEC;
	// addi r4,r25,-152
	ctx.r4.s64 = ctx.r25.s64 + -152;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82317488
	ctx.lr = 0x82317C80;
	sub_82317488(ctx, base);
	// rlwinm r28,r3,3,0,28
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwzx r11,r28,r25
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r25.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82317d4c
	if (ctx.cr6.lt) goto loc_82317D4C;
	// bne cr6,0x82317d64
	if (!ctx.cr6.eq) goto loc_82317D64;
	// addi r27,r25,4
	ctx.r27.s64 = ctx.r25.s64 + 4;
	// lwzx r11,r28,r27
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r27.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82317d40
	if (ctx.cr6.eq) goto loc_82317D40;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x822e6d78
	ctx.lr = 0x82317CB0;
	sub_822E6D78(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82317cc8
	if (ctx.cr6.eq) goto loc_82317CC8;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82317cd0
	if (!ctx.cr6.eq) goto loc_82317CD0;
loc_82317CC8:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82317248
	ctx.lr = 0x82317CD0;
	sub_82317248(ctx, base);
loc_82317CD0:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82317CD4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82317cd4
	if (!ctx.cr6.eq) goto loc_82317CD4;
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lbz r9,-1(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + -1);
	// cmplwi cr6,r9,44
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 44, ctx.xer);
	// bne cr6,0x82317d28
	if (!ctx.cr6.eq) goto loc_82317D28;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82317D04:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82317d04
	if (!ctx.cr6.eq) goto loc_82317D04;
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stb r23,-1(r10)
	PPC_STORE_U8(ctx.r10.u32 + -1, ctx.r23.u8);
loc_82317D28:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwzx r4,r28,r27
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r27.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82317488
	ctx.lr = 0x82317D38;
	sub_82317488(ctx, base);
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// b 0x82317d64
	goto loc_82317D64;
loc_82317D40:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// b 0x82317d64
	goto loc_82317D64;
loc_82317D4C:
	// addi r11,r25,4
	ctx.r11.s64 = ctx.r25.s64 + 4;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwzx r4,r28,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// bl 0x82317810
	ctx.lr = 0x82317D64;
	sub_82317810(ctx, base);
loc_82317D64:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r8,100(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r11,r31
	ctx.r6.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r29,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r29.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r9,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r9.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r8,r10,r31
	PPC_STORE_U32(ctx.r10.u32 + ctx.r31.u32, ctx.r8.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// bl 0x822e6d78
	ctx.lr = 0x82317DC8;
	sub_822E6D78(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82317c50
	if (!ctx.cr6.eq) goto loc_82317C50;
loc_82317DD4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82317dec
	if (!ctx.cr6.eq) goto loc_82317DEC;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,17912
	ctx.r3.s64 = ctx.r11.s64 + 17912;
	// bl 0x82317248
	ctx.lr = 0x82317DEC;
	sub_82317248(ctx, base);
loc_82317DEC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x823ddfb0
	__restgprlr_22(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82317C08) {
	__imp__sub_82317C08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82317DF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf40
	ctx.lr = 0x82317E00;
	__savegprlr_14(ctx, base);
	// stfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -160, ctx.f31.u64);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// lfs f31,5484(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 5484);
	ctx.f31.f64 = double(temp.f32);
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// lis r6,-32191
	ctx.r6.s64 = -2109669376;
	// lis r5,-32252
	ctx.r5.s64 = -2113667072;
	// lis r4,-32252
	ctx.r4.s64 = -2113667072;
	// lis r3,-32252
	ctx.r3.s64 = -2113667072;
	// lis r31,-32252
	ctx.r31.s64 = -2113667072;
	// lis r30,-32252
	ctx.r30.s64 = -2113667072;
	// lis r29,-32252
	ctx.r29.s64 = -2113667072;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lis r8,-31835
	ctx.r8.s64 = -2086338560;
	// addi r9,r9,18320
	ctx.r9.s64 = ctx.r9.s64 + 18320;
	// addi r10,r10,18256
	ctx.r10.s64 = ctx.r10.s64 + 18256;
	// addi r11,r11,18252
	ctx.r11.s64 = ctx.r11.s64 + 18252;
	// stw r9,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r9.u32);
	// li r28,0
	ctx.r28.s64 = 0;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// addi r21,r6,30528
	ctx.r21.s64 = ctx.r6.s64 + 30528;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// addi r17,r5,18208
	ctx.r17.s64 = ctx.r5.s64 + 18208;
	// addi r16,r4,18164
	ctx.r16.s64 = ctx.r4.s64 + 18164;
	// addi r20,r3,18152
	ctx.r20.s64 = ctx.r3.s64 + 18152;
	// addi r15,r31,18072
	ctx.r15.s64 = ctx.r31.s64 + 18072;
	// addi r19,r30,18060
	ctx.r19.s64 = ctx.r30.s64 + 18060;
	// addi r14,r29,18016
	ctx.r14.s64 = ctx.r29.s64 + 18016;
	// addi r18,r7,-29068
	ctx.r18.s64 = ctx.r7.s64 + -29068;
	// addi r25,r8,27032
	ctx.r25.s64 = ctx.r8.s64 + 27032;
loc_82317E8C:
	// li r24,0
	ctx.r24.s64 = 0;
loc_82317E90:
	// cmpwi cr6,r24,1
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 1, ctx.xer);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bge cr6,0x82317ea4
	if (!ctx.cr6.lt) goto loc_82317EA4;
	// bl 0x822e6d10
	ctx.lr = 0x82317EA0;
	sub_822E6D10(ctx, base);
	// b 0x82317ea8
	goto loc_82317EA8;
loc_82317EA4:
	// bl 0x822e6d78
	ctx.lr = 0x82317EA8;
	sub_822E6D78(ctx, base);
loc_82317EA8:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82318364
	if (ctx.cr6.eq) goto loc_82318364;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82318364
	if (ctx.cr6.eq) goto loc_82318364;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x822e8058
	ctx.lr = 0x82317EC8;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82318338
	if (ctx.cr6.eq) goto loc_82318338;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// bne cr6,0x82317f1c
	if (!ctx.cr6.eq) goto loc_82317F1C;
	// lwz r11,220(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 220);
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// blt cr6,0x82317ef0
	if (ctx.cr6.lt) goto loc_82317EF0;
	// li r4,12
	ctx.r4.s64 = 12;
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x82317248
	ctx.lr = 0x82317EF0;
	sub_82317248(ctx, base);
loc_82317EF0:
	// lwz r11,220(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 220);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r9,220(r23)
	PPC_STORE_U32(ctx.r23.u32 + 220, ctx.r9.u32);
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r23
	ctx.r11.u64 = ctx.r11.u64 + ctx.r23.u64;
	// addi r28,r11,224
	ctx.r28.s64 = ctx.r11.s64 + 224;
	// li r11,0
	ctx.r11.s64 = 0;
	// sth r11,0(r28)
	PPC_STORE_U16(ctx.r28.u32 + 0, ctx.r11.u16);
	// sth r11,2(r28)
	PPC_STORE_U16(ctx.r28.u32 + 2, ctx.r11.u16);
loc_82317F1C:
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82317488
	ctx.lr = 0x82317F2C;
	sub_82317488(ctx, base);
	// rlwinm r26,r24,1,0,30
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 1) & 0xFFFFFFFE;
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// sthx r11,r26,r28
	PPC_STORE_U16(ctx.r26.u32 + ctx.r28.u32, ctx.r11.u16);
	// ble cr6,0x823182e0
	if (!ctx.cr6.gt) goto loc_823182E0;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x822e6d78
	ctx.lr = 0x82317F48;
	sub_822E6D78(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82317f60
	if (ctx.cr6.eq) goto loc_82317F60;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82317f68
	if (!ctx.cr6.eq) goto loc_82317F68;
loc_82317F60:
	// lwz r3,120(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// bl 0x82317248
	ctx.lr = 0x82317F68;
	sub_82317248(ctx, base);
loc_82317F68:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82317300
	ctx.lr = 0x82317F70;
	sub_82317300(ctx, base);
	// extsh r9,r3
	ctx.r9.s64 = ctx.r3.s16;
	// addi r8,r24,2
	ctx.r8.s64 = ctx.r24.s64 + 2;
	// lwz r10,16296(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 16296);
	// mulli r11,r9,104
	ctx.r11.s64 = ctx.r9.s64 * 104;
	// addi r6,r24,4
	ctx.r6.s64 = ctx.r24.s64 + 4;
	// rlwinm r30,r8,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// rlwinm r29,r6,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// sthx r9,r30,r28
	PPC_STORE_U16(ctx.r30.u32 + ctx.r28.u32, ctx.r9.u16);
	// lwz r5,72(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// sthx r5,r29,r28
	PPC_STORE_U16(ctx.r29.u32 + ctx.r28.u32, ctx.r5.u16);
	// bne cr6,0x82318198
	if (!ctx.cr6.eq) goto loc_82318198;
	// lwz r9,4(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x823180a4
	if (ctx.cr6.eq) goto loc_823180A4;
	// lhzx r10,r26,r28
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r26.u32 + ctx.r28.u32);
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// beq cr6,0x823180a4
	if (ctx.cr6.eq) goto loc_823180A4;
	// extsw r10,r9
	ctx.r10.s64 = ctx.r9.s32;
	// ld r8,88(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 88);
	// li r7,1
	ctx.r7.s64 = 1;
	// cmpwi cr6,r9,18
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 18, ctx.xer);
	// sld r6,r7,r10
	ctx.r6.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r7.u64 << (ctx.r10.u8 & 0x7F));
	// or r5,r6,r8
	ctx.r5.u64 = ctx.r6.u64 | ctx.r8.u64;
	// std r5,88(r11)
	PPC_STORE_U64(ctx.r11.u32 + 88, ctx.r5.u64);
	// beq cr6,0x82317fe8
	if (ctx.cr6.eq) goto loc_82317FE8;
	// cmpwi cr6,r9,19
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 19, ctx.xer);
	// bne cr6,0x82318010
	if (!ctx.cr6.eq) goto loc_82318010;
loc_82317FE8:
	// lhzx r11,r30,r28
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + ctx.r28.u32);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mulli r11,r10,104
	ctx.r11.s64 = ctx.r10.s64 * 104;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// lfs f0,68(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x82318010
	if (ctx.cr6.eq) goto loc_82318010;
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// ori r8,r10,2
	ctx.r8.u64 = ctx.r10.u64 | 2;
	// stw r8,80(r11)
	PPC_STORE_U32(ctx.r11.u32 + 80, ctx.r8.u32);
loc_82318010:
	// lwz r10,0(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x823180a4
	if (!ctx.cr6.gt) goto loc_823180A4;
	// addi r10,r23,4
	ctx.r10.s64 = ctx.r23.s64 + 4;
loc_82318024:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r8,7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 7, ctx.xer);
	// beq cr6,0x82318048
	if (ctx.cr6.eq) goto loc_82318048;
	// lwz r8,0(r23)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82318024
	if (ctx.cr6.lt) goto loc_82318024;
	// b 0x823180a4
	goto loc_823180A4;
loc_82318048:
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r23
	ctx.r10.u64 = ctx.r11.u64 + ctx.r23.u64;
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82318080
	if (!ctx.cr6.eq) goto loc_82318080;
	// lhzx r11,r30,r28
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + ctx.r28.u32);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mulli r11,r10,104
	ctx.r11.s64 = ctx.r10.s64 * 104;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// lwz r8,80(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// ori r7,r8,16
	ctx.r7.u64 = ctx.r8.u64 | 16;
	// b 0x823180a0
	goto loc_823180A0;
loc_82318080:
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x823180a4
	if (!ctx.cr6.eq) goto loc_823180A4;
	// lhzx r11,r30,r28
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + ctx.r28.u32);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mulli r11,r10,104
	ctx.r11.s64 = ctx.r10.s64 * 104;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// lwz r8,80(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// ori r7,r8,32
	ctx.r7.u64 = ctx.r8.u64 | 32;
loc_823180A0:
	// stw r7,80(r11)
	PPC_STORE_U32(ctx.r11.u32 + 80, ctx.r7.u32);
loc_823180A4:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x823180e8
	if (!ctx.cr6.eq) goto loc_823180E8;
	// lhzx r11,r30,r28
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + ctx.r28.u32);
	// li r10,30
	ctx.r10.s64 = 30;
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// mulli r11,r9,104
	ctx.r11.s64 = ctx.r9.s64 * 104;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// lwz r8,80(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// ori r7,r8,8
	ctx.r7.u64 = ctx.r8.u64 | 8;
	// stw r7,80(r11)
	PPC_STORE_U32(ctx.r11.u32 + 80, ctx.r7.u32);
	// lhzx r6,r30,r28
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r30.u32 + ctx.r28.u32);
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// mulli r11,r5,104
	ctx.r11.s64 = ctx.r5.s64 * 104;
	// add r4,r11,r27
	ctx.r4.u64 = ctx.r11.u64 + ctx.r27.u64;
	// stw r10,64(r4)
	PPC_STORE_U32(ctx.r4.u32 + 64, ctx.r10.u32);
	// b 0x82318198
	goto loc_82318198;
loc_823180E8:
	// cmpwi cr6,r11,18
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 18, ctx.xer);
	// beq cr6,0x8231817c
	if (ctx.cr6.eq) goto loc_8231817C;
	// cmpwi cr6,r11,19
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 19, ctx.xer);
	// beq cr6,0x8231817c
	if (ctx.cr6.eq) goto loc_8231817C;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82318134
	if (!ctx.cr6.eq) goto loc_82318134;
	// lhzx r11,r30,r28
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + ctx.r28.u32);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mulli r11,r10,104
	ctx.r11.s64 = ctx.r10.s64 * 104;
	// add r9,r11,r27
	ctx.r9.u64 = ctx.r11.u64 + ctx.r27.u64;
	// stfs f31,68(r9)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r9.u32 + 68, temp.u32);
	// lhzx r8,r30,r28
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r30.u32 + ctx.r28.u32);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// mulli r11,r7,104
	ctx.r11.s64 = ctx.r7.s64 * 104;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// lwz r6,80(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// ori r5,r6,64
	ctx.r5.u64 = ctx.r6.u64 | 64;
	// stw r5,80(r11)
	PPC_STORE_U32(ctx.r11.u32 + 80, ctx.r5.u32);
	// b 0x82318198
	goto loc_82318198;
loc_82318134:
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// bne cr6,0x82318154
	if (!ctx.cr6.eq) goto loc_82318154;
	// lhzx r11,r30,r28
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + ctx.r28.u32);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mulli r11,r10,104
	ctx.r11.s64 = ctx.r10.s64 * 104;
	// add r9,r11,r27
	ctx.r9.u64 = ctx.r11.u64 + ctx.r27.u64;
	// stfs f31,68(r9)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r9.u32 + 68, temp.u32);
	// b 0x82318198
	goto loc_82318198;
loc_82318154:
	// cmpwi cr6,r9,22
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 22, ctx.xer);
	// blt cr6,0x82318198
	if (ctx.cr6.lt) goto loc_82318198;
	// cmpwi cr6,r9,31
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 31, ctx.xer);
	// bgt cr6,0x82318198
	if (ctx.cr6.gt) goto loc_82318198;
	// lhzx r11,r30,r28
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + ctx.r28.u32);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mulli r11,r10,104
	ctx.r11.s64 = ctx.r10.s64 * 104;
	// add r9,r11,r27
	ctx.r9.u64 = ctx.r11.u64 + ctx.r27.u64;
	// stfs f31,68(r9)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r9.u32 + 68, temp.u32);
	// b 0x82318198
	goto loc_82318198;
loc_8231817C:
	// lhzx r11,r30,r28
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + ctx.r28.u32);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mulli r11,r10,104
	ctx.r11.s64 = ctx.r10.s64 * 104;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// lwz r9,80(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// ori r8,r9,256
	ctx.r8.u64 = ctx.r9.u64 | 256;
	// stw r8,80(r11)
	PPC_STORE_U32(ctx.r11.u32 + 80, ctx.r8.u32);
loc_82318198:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x822e6d78
	ctx.lr = 0x823181A0;
	sub_822E6D78(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823182c0
	if (ctx.cr6.eq) goto loc_823182C0;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823182c0
	if (ctx.cr6.eq) goto loc_823182C0;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// bl 0x822e8058
	ctx.lr = 0x823181C0;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82318204
	if (!ctx.cr6.eq) goto loc_82318204;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x822e6d78
	ctx.lr = 0x823181D0;
	sub_822E6D78(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823181e8
	if (ctx.cr6.eq) goto loc_823181E8;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823181f0
	if (!ctx.cr6.eq) goto loc_823181F0;
loc_823181E8:
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82317248
	ctx.lr = 0x823181F0;
	sub_82317248(ctx, base);
loc_823181F0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823deaf8
	ctx.lr = 0x823181F8;
	sub_823DEAF8(ctx, base);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// sthx r11,r29,r28
	PPC_STORE_U16(ctx.r29.u32 + ctx.r28.u32, ctx.r11.u16);
	// b 0x82318198
	goto loc_82318198;
loc_82318204:
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e8058
	ctx.lr = 0x82318210;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82318258
	if (!ctx.cr6.eq) goto loc_82318258;
	// lwz r11,16296(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 16296);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82318240
	if (!ctx.cr6.eq) goto loc_82318240;
	// lhzx r11,r30,r28
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + ctx.r28.u32);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mulli r11,r10,104
	ctx.r11.s64 = ctx.r10.s64 * 104;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// lwz r9,80(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// ori r8,r9,4
	ctx.r8.u64 = ctx.r9.u64 | 4;
	// stw r8,80(r11)
	PPC_STORE_U32(ctx.r11.u32 + 80, ctx.r8.u32);
loc_82318240:
	// lhzx r11,r26,r28
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r26.u32 + ctx.r28.u32);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x82318198
	if (ctx.cr6.eq) goto loc_82318198;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x82317248
	ctx.lr = 0x82318254;
	sub_82317248(ctx, base);
	// b 0x82318198
	goto loc_82318198;
loc_82318258:
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e8058
	ctx.lr = 0x82318264;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823182c0
	if (!ctx.cr6.eq) goto loc_823182C0;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x822e6d78
	ctx.lr = 0x82318274;
	sub_822E6D78(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8231828c
	if (ctx.cr6.eq) goto loc_8231828C;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82318294
	if (!ctx.cr6.eq) goto loc_82318294;
loc_8231828C:
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x82317248
	ctx.lr = 0x82318294;
	sub_82317248(ctx, base);
loc_82318294:
	// lwz r11,16296(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 16296);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82318198
	if (!ctx.cr6.eq) goto loc_82318198;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823deaf8
	ctx.lr = 0x823182A8;
	sub_823DEAF8(ctx, base);
	// lhzx r11,r30,r28
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + ctx.r28.u32);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mulli r11,r10,104
	ctx.r11.s64 = ctx.r10.s64 * 104;
	// add r9,r11,r27
	ctx.r9.u64 = ctx.r11.u64 + ctx.r27.u64;
	// stw r3,64(r9)
	PPC_STORE_U32(ctx.r9.u32 + 64, ctx.r3.u32);
	// b 0x82318198
	goto loc_82318198;
loc_823182C0:
	// bl 0x822e6390
	ctx.lr = 0x823182C4;
	sub_822E6390(ctx, base);
	// lhzx r11,r26,r28
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r26.u32 + ctx.r28.u32);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x8231830c
	if (ctx.cr6.eq) goto loc_8231830C;
	// cmpwi cr6,r24,1
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 1, ctx.xer);
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// blt cr6,0x82317e90
	if (ctx.cr6.lt) goto loc_82317E90;
	// b 0x8231830c
	goto loc_8231830C;
loc_823182E0:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_823182E4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823182e4
	if (!ctx.cr6.eq) goto loc_823182E4;
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// lwz r10,0(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// rotlwi r8,r9,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// subf r7,r8,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r8.s64;
	// stw r7,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r7.u32);
loc_8231830C:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x822e6d78
	ctx.lr = 0x82318314;
	sub_822E6D78(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82317e8c
	if (ctx.cr6.eq) goto loc_82317E8C;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82317e8c
	if (ctx.cr6.eq) goto loc_82317E8C;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x82317248
	ctx.lr = 0x82318334;
	sub_82317248(ctx, base);
	// b 0x82317e8c
	goto loc_82317E8C;
loc_82318338:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_8231833C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8231833c
	if (!ctx.cr6.eq) goto loc_8231833C;
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// lwz r10,0(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// rotlwi r8,r9,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// subf r7,r8,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r8.s64;
	// stw r7,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r7.u32);
loc_82318364:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x823ddf90
	__restgprlr_14(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82317DF8) {
	__imp__sub_82317DF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82318370) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf40
	ctx.lr = 0x82318378;
	__savegprlr_14(ctx, base);
	// stwu r1,-752(r1)
	ea = -752 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r4,1
	ctx.r4.s64 = 65536;
	// mr r16,r3
	ctx.r16.u64 = ctx.r3.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// ori r4,r4,32768
	ctx.r4.u64 = ctx.r4.u64 | 32768;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x822db808
	ctx.lr = 0x82318398;
	sub_822DB808(ctx, base);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x822db8f0
	ctx.lr = 0x823183A0;
	sub_822DB8F0(ctx, base);
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// addi r28,r11,29880
	ctx.r28.s64 = ctx.r11.s64 + 29880;
	// li r19,0
	ctx.r19.s64 = 0;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r28,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r28.u32);
	// ori r5,r5,32768
	ctx.r5.u64 = ctx.r5.u64 | 32768;
	// stw r19,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r19.u32);
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x8227ff50
	ctx.lr = 0x823183C8;
	sub_8227FF50(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823183e8
	if (!ctx.cr6.eq) goto loc_823183E8;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r5,0(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,19180
	ctx.r4.s64 = ctx.r11.s64 + 19180;
	// bl 0x822830e8
	ctx.lr = 0x823183E8;
	sub_822830E8(ctx, base);
loc_823183E8:
	// lis r11,-31835
	ctx.r11.s64 = -2086338560;
	// stw r19,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r19.u32);
	// li r5,1600
	ctx.r5.s64 = 1600;
	// addi r18,r11,27032
	ctx.r18.s64 = ctx.r11.s64 + 27032;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r18,4696
	ctx.r3.s64 = ctx.r18.s64 + 4696;
	// stw r16,16300(r18)
	PPC_STORE_U32(ctx.r18.u32 + 16300, ctx.r16.u32);
	// stw r30,16296(r18)
	PPC_STORE_U32(ctx.r18.u32 + 16296, ctx.r30.u32);
	// stw r29,4688(r18)
	PPC_STORE_U32(ctx.r18.u32 + 4688, ctx.r29.u32);
	// bl 0x823de090
	ctx.lr = 0x82318410;
	sub_823DE090(ctx, base);
	// bl 0x82332528
	ctx.lr = 0x82318414;
	sub_82332528(ctx, base);
	// addi r3,r18,8
	ctx.r3.s64 = ctx.r18.s64 + 8;
	// li r5,2304
	ctx.r5.s64 = 2304;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823de090
	ctx.lr = 0x82318424;
	sub_823DE090(ctx, base);
	// addi r3,r18,6296
	ctx.r3.s64 = ctx.r18.s64 + 6296;
	// li r5,10000
	ctx.r5.s64 = 10000;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823de090
	ctx.lr = 0x82318434;
	sub_823DE090(ctx, base);
	// addi r3,r18,2312
	ctx.r3.s64 = ctx.r18.s64 + 2312;
	// li r5,72
	ctx.r5.s64 = 72;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823de090
	ctx.lr = 0x82318444;
	sub_823DE090(ctx, base);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stw r19,4692(r18)
	PPC_STORE_U32(ctx.r18.u32 + 4692, ctx.r19.u32);
	// addi r9,r1,120
	ctx.r9.s64 = ctx.r1.s64 + 120;
	// li r10,-1
	ctx.r10.s64 = -1;
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
	// addi r3,r8,19156
	ctx.r3.s64 = ctx.r8.s64 + 19156;
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// mr r15,r19
	ctx.r15.u64 = ctx.r19.u64;
	// stw r10,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
	// stw r10,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r10.u32);
	// bl 0x822e5ed0
	ctx.lr = 0x82318474;
	sub_822E5ED0(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822e6d10
	ctx.lr = 0x8231847C;
	sub_822E6D10(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82318e5c
	if (ctx.cr6.eq) goto loc_82318E5C;
	// lis r25,-32252
	ctx.r25.s64 = -2113667072;
	// lwz r14,124(r1)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lis r29,-32252
	ctx.r29.s64 = -2113667072;
	// lwz r17,120(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// addi r11,r25,18252
	ctx.r11.s64 = ctx.r25.s64 + 18252;
	// lis r28,-32252
	ctx.r28.s64 = -2113667072;
	// lis r30,-32252
	ctx.r30.s64 = -2113667072;
	// stw r11,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r11.u32);
	// lis r7,-32252
	ctx.r7.s64 = -2113667072;
	// lis r6,-32252
	ctx.r6.s64 = -2113667072;
	// lis r5,-32252
	ctx.r5.s64 = -2113667072;
	// lis r4,-32252
	ctx.r4.s64 = -2113667072;
	// addi r29,r29,19116
	ctx.r29.s64 = ctx.r29.s64 + 19116;
	// lis r23,-32252
	ctx.r23.s64 = -2113667072;
	// lis r21,-32252
	ctx.r21.s64 = -2113667072;
	// stw r29,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r29.u32);
	// addi r11,r28,19072
	ctx.r11.s64 = ctx.r28.s64 + 19072;
	// lis r26,-32255
	ctx.r26.s64 = -2113863680;
	// lis r20,-32252
	ctx.r20.s64 = -2113667072;
	// stw r11,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r11.u32);
	// addi r30,r30,19032
	ctx.r30.s64 = ctx.r30.s64 + 19032;
	// addi r7,r7,18984
	ctx.r7.s64 = ctx.r7.s64 + 18984;
	// addi r6,r6,18924
	ctx.r6.s64 = ctx.r6.s64 + 18924;
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// addi r5,r5,18912
	ctx.r5.s64 = ctx.r5.s64 + 18912;
	// stw r7,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r7.u32);
	// addi r4,r4,18852
	ctx.r4.s64 = ctx.r4.s64 + 18852;
	// stw r6,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r6.u32);
	// lis r22,-32252
	ctx.r22.s64 = -2113667072;
	// stw r5,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r5.u32);
	// addi r25,r23,18800
	ctx.r25.s64 = ctx.r23.s64 + 18800;
	// lwz r23,136(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// lis r27,-32252
	ctx.r27.s64 = -2113667072;
	// stw r4,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r4.u32);
	// lis r3,-32252
	ctx.r3.s64 = -2113667072;
	// stw r25,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r25.u32);
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r29,r21,18744
	ctx.r29.s64 = ctx.r21.s64 + 18744;
	// lis r24,-32252
	ctx.r24.s64 = -2113667072;
	// addi r28,r26,-27920
	ctx.r28.s64 = ctx.r26.s64 + -27920;
	// stw r29,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r29.u32);
	// addi r21,r20,18684
	ctx.r21.s64 = ctx.r20.s64 + 18684;
	// lwz r26,156(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// addi r22,r22,18680
	ctx.r22.s64 = ctx.r22.s64 + 18680;
	// stw r28,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r28.u32);
	// addi r30,r27,18636
	ctx.r30.s64 = ctx.r27.s64 + 18636;
	// stw r21,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r21.u32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stw r22,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r22.u32);
	// addi r3,r3,18572
	ctx.r3.s64 = ctx.r3.s64 + 18572;
	// lwz r27,148(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// addi r8,r8,18512
	ctx.r8.s64 = ctx.r8.s64 + 18512;
	// stw r30,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r30.u32);
	// addi r7,r9,18456
	ctx.r7.s64 = ctx.r9.s64 + 18456;
	// stw r3,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r3.u32);
	// addi r6,r10,-10684
	ctx.r6.s64 = ctx.r10.s64 + -10684;
	// stw r8,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r8.u32);
	// lis r5,1
	ctx.r5.s64 = 65536;
	// stw r7,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r7.u32);
	// lis r4,8
	ctx.r4.s64 = 524288;
	// addi r25,r24,18452
	ctx.r25.s64 = ctx.r24.s64 + 18452;
	// lwz r24,140(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// rotlwi r20,r19,0
	ctx.r20.u64 = __builtin_rotateleft32(ctx.r19.u32, 0);
	// stw r6,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r6.u32);
	// addi r22,r11,18412
	ctx.r22.s64 = ctx.r11.s64 + 18412;
	// ori r21,r5,55312
	ctx.r21.u64 = ctx.r5.u64 | 55312;
	// ori r28,r4,10560
	ctx.r28.u64 = ctx.r4.u64 | 10560;
	// li r29,-1
	ctx.r29.s64 = -1;
loc_823185A0:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82318e48
	if (ctx.cr6.eq) goto loc_82318E48;
	// addi r4,r23,1504
	ctx.r4.s64 = ctx.r23.s64 + 1504;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82317488
	ctx.lr = 0x823185BC;
	sub_82317488(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x823185f4
	if (ctx.cr6.lt) goto loc_823185F4;
	// cmpwi cr6,r15,0
	ctx.cr6.compare<int32_t>(ctx.r15.s32, 0, ctx.xer);
	// beq cr6,0x823185dc
	if (ctx.cr6.eq) goto loc_823185DC;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82317248
	ctx.lr = 0x823185DC;
	sub_82317248(ctx, base);
loc_823185DC:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r29,0(r18)
	PPC_STORE_U32(ctx.r18.u32 + 0, ctx.r29.u32);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// mr r20,r30
	ctx.r20.u64 = ctx.r30.u64;
	// stw r11,4(r18)
	PPC_STORE_U32(ctx.r18.u32 + 4, ctx.r11.u32);
	// b 0x82318e34
	goto loc_82318E34;
loc_823185F4:
	// cmplwi cr6,r20,4
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 4, ctx.xer);
	// bgt cr6,0x82318e34
	if (ctx.cr6.gt) goto loc_82318E34;
	// mtctr r20
	ctx.ctr.u64 = ctx.r20.u64;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x82318788
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82318788;
	// bdzf 4*cr6+eq,0x82318788
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82318788;
	// bdzf 4*cr6+eq,0x82318abc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82318ABC;
	// bne cr6,0x82318abc
	if (!ctx.cr6.eq) goto loc_82318ABC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,140(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// bl 0x822e8058
	ctx.lr = 0x82318620;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82318e34
	if (!ctx.cr6.eq) goto loc_82318E34;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822e6d78
	ctx.lr = 0x82318630;
	sub_822E6D78(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82318648
	if (ctx.cr6.eq) goto loc_82318648;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82318650
	if (!ctx.cr6.eq) goto loc_82318650;
loc_82318648:
	// lwz r3,188(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// bl 0x82317248
	ctx.lr = 0x82318650;
	sub_82317248(ctx, base);
loc_82318650:
	// addi r4,r23,1192
	ctx.r4.s64 = ctx.r23.s64 + 1192;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82317488
	ctx.lr = 0x82318660;
	sub_82317488(ctx, base);
	// addi r11,r23,1344
	ctx.r11.s64 = ctx.r23.s64 + 1344;
	// rlwinm r26,r3,3,0,28
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwzx r10,r26,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82318684
	if (ctx.cr6.eq) goto loc_82318684;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,196(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// bl 0x82317248
	ctx.lr = 0x82318684;
	sub_82317248(ctx, base);
loc_82318684:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822e6d78
	ctx.lr = 0x8231868C;
	sub_822E6D78(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823186a4
	if (ctx.cr6.eq) goto loc_823186A4;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823186ac
	if (!ctx.cr6.eq) goto loc_823186AC;
loc_823186A4:
	// lwz r3,160(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x82317248
	ctx.lr = 0x823186AC;
	sub_82317248(ctx, base);
loc_823186AC:
	// addi r6,r18,4692
	ctx.r6.s64 = ctx.r18.s64 + 4692;
	// addi r4,r18,6296
	ctx.r4.s64 = ctx.r18.s64 + 6296;
	// li r5,10000
	ctx.r5.s64 = 10000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82317530
	ctx.lr = 0x823186C0;
	sub_82317530(ctx, base);
	// addi r30,r18,2312
	ctx.r30.s64 = ctx.r18.s64 + 2312;
	// rlwinm r31,r28,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r29,r28,4,0,27
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r10,r18,8
	ctx.r10.s64 = ctx.r18.s64 + 8;
	// lwzx r11,r31,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// add r9,r11,r29
	ctx.r9.u64 = ctx.r11.u64 + ctx.r29.u64;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// stwx r3,r8,r10
	PPC_STORE_U32(ctx.r8.u32 + ctx.r10.u32, ctx.r3.u32);
	// bl 0x823171d0
	ctx.lr = 0x823186E4;
	sub_823171D0(ctx, base);
	// lwzx r10,r31,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// addi r11,r18,8
	ctx.r11.s64 = ctx.r18.s64 + 8;
	// add r7,r10,r29
	ctx.r7.u64 = ctx.r10.u64 + ctx.r29.u64;
	// addi r6,r11,4
	ctx.r6.s64 = ctx.r11.s64 + 4;
	// rlwinm r5,r7,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// stwx r3,r5,r6
	PPC_STORE_U32(ctx.r5.u32 + ctx.r6.u32, ctx.r3.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822e6d78
	ctx.lr = 0x82318704;
	sub_822E6D78(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82318718
	if (!ctx.cr6.eq) goto loc_82318718;
	// lwz r3,172(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// bl 0x82317248
	ctx.lr = 0x82318718;
	sub_82317248(ctx, base);
loc_82318718:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,192(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// bl 0x822e8058
	ctx.lr = 0x82318724;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82318738
	if (ctx.cr6.eq) goto loc_82318738;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,180(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// bl 0x82317248
	ctx.lr = 0x82318738;
	sub_82317248(ctx, base);
loc_82318738:
	// lwzx r9,r31,r30
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// addi r11,r23,1344
	ctx.r11.s64 = ctx.r23.s64 + 1344;
	// addi r10,r18,2384
	ctx.r10.s64 = ctx.r18.s64 + 2384;
	// add r9,r9,r29
	ctx.r9.u64 = ctx.r9.u64 + ctx.r29.u64;
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwzx r4,r26,r8
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r8.u32);
	// bl 0x82317810
	ctx.lr = 0x82318764;
	sub_82317810(ctx, base);
	// lwzx r11,r31,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// lis r7,8
	ctx.r7.s64 = 524288;
	// lwz r27,148(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// lwz r26,156(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// ori r28,r7,10560
	ctx.r28.u64 = ctx.r7.u64 | 10560;
	// stwx r6,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r6.u32);
	// li r29,-1
	ctx.r29.s64 = -1;
	// b 0x82318e34
	goto loc_82318E34;
loc_82318788:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e8058
	ctx.lr = 0x82318794;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823187d8
	if (!ctx.cr6.eq) goto loc_823187D8;
	// cmpwi cr6,r15,3
	ctx.cr6.compare<int32_t>(ctx.r15.s32, 3, ctx.xer);
	// blt cr6,0x823187b0
	if (ctx.cr6.lt) goto loc_823187B0;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82317248
	ctx.lr = 0x823187B0;
	sub_82317248(ctx, base);
loc_823187B0:
	// rlwinm r11,r15,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,120
	ctx.r10.s64 = ctx.r1.s64 + 120;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge cr6,0x82318b04
	if (!ctx.cr6.lt) goto loc_82318B04;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82317248
	ctx.lr = 0x823187D0;
	sub_82317248(ctx, base);
	// addi r15,r15,1
	ctx.r15.s64 = ctx.r15.s64 + 1;
	// b 0x82318e34
	goto loc_82318E34;
loc_823187D8:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e8058
	ctx.lr = 0x823187E4;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82318828
	if (!ctx.cr6.eq) goto loc_82318828;
	// addic. r15,r15,-1
	ctx.xer.ca = ctx.r15.u32 > 0;
	ctx.r15.s64 = ctx.r15.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r15.s32, 0, ctx.xer);
	// bge 0x82318800
	if (!ctx.cr0.lt) goto loc_82318800;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82317248
	ctx.lr = 0x82318800;
	sub_82317248(ctx, base);
loc_82318800:
	// addi r11,r15,-1
	ctx.r11.s64 = ctx.r15.s64 + -1;
	// rlwinm r10,r15,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,120
	ctx.r9.s64 = ctx.r1.s64 + 120;
	// subfic r8,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r8.s64 = 0 - ctx.r11.s64;
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stwx r29,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r29.u32);
	// and r19,r6,r19
	ctx.r19.u64 = ctx.r6.u64 & ctx.r19.u64;
	// lwz r14,124(r1)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r17,120(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// b 0x82318e34
	goto loc_82318E34;
loc_82318828:
	// cmpwi cr6,r15,0
	ctx.cr6.compare<int32_t>(ctx.r15.s32, 0, ctx.xer);
	// bne cr6,0x823188b8
	if (!ctx.cr6.eq) goto loc_823188B8;
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(ctx.r17.s32, 0, ctx.xer);
	// bge cr6,0x82318e28
	if (!ctx.cr6.lt) goto loc_82318E28;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,200(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// bl 0x822e8058
	ctx.lr = 0x82318844;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82318854
	if (ctx.cr6.eq) goto loc_82318854;
	// lwz r3,164(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// bl 0x82317248
	ctx.lr = 0x82318854;
	sub_82317248(ctx, base);
loc_82318854:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822e6d78
	ctx.lr = 0x8231885C;
	sub_822E6D78(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82318870
	if (!ctx.cr6.eq) goto loc_82318870;
	// lwz r3,168(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// bl 0x82317248
	ctx.lr = 0x82318870;
	sub_82317248(ctx, base);
loc_82318870:
	// addi r4,r23,4
	ctx.r4.s64 = ctx.r23.s64 + 4;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82317488
	ctx.lr = 0x82318880;
	sub_82317488(ctx, base);
	// mr r17,r3
	ctx.r17.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r17,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r17.u32);
	// bl 0x822e6d10
	ctx.lr = 0x82318890;
	sub_822E6D10(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823188a8
	if (ctx.cr6.eq) goto loc_823188A8;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x822e8058
	ctx.lr = 0x823188A0;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823188b0
	if (ctx.cr6.eq) goto loc_823188B0;
loc_823188A8:
	// lwz r3,144(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x82317248
	ctx.lr = 0x823188B0;
	sub_82317248(ctx, base);
loc_823188B0:
	// li r15,1
	ctx.r15.s64 = 1;
	// b 0x82318e34
	goto loc_82318E34;
loc_823188B8:
	// cmpwi cr6,r15,1
	ctx.cr6.compare<int32_t>(ctx.r15.s32, 1, ctx.xer);
	// bne cr6,0x8231894c
	if (!ctx.cr6.eq) goto loc_8231894C;
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 0, ctx.xer);
	// bge cr6,0x82318e28
	if (!ctx.cr6.lt) goto loc_82318E28;
	// addi r4,r23,24
	ctx.r4.s64 = ctx.r23.s64 + 24;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82317488
	ctx.lr = 0x823188D8;
	sub_82317488(ctx, base);
	// mr r14,r3
	ctx.r14.u64 = ctx.r3.u64;
	// cmpwi cr6,r20,1
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 1, ctx.xer);
	// stw r3,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r3.u32);
	// bne cr6,0x82318918
	if (!ctx.cr6.eq) goto loc_82318918;
	// mulli r11,r17,54
	ctx.r11.s64 = ctx.r17.s64 * 54;
	// stw r3,4(r18)
	PPC_STORE_U32(ctx.r18.u32 + 4, ctx.r3.u32);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// li r5,516
	ctx.r5.s64 = 516;
	// mulli r11,r11,516
	ctx.r11.s64 = ctx.r11.s64 * 516;
	// add r10,r11,r16
	ctx.r10.u64 = ctx.r11.u64 + ctx.r16.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addis r19,r10,1
	ctx.r19.s64 = ctx.r10.s64 + 65536;
	// addi r19,r19,-12284
	ctx.r19.s64 = ctx.r19.s64 + -12284;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x823de090
	ctx.lr = 0x82318914;
	sub_823DE090(ctx, base);
	// b 0x82318e34
	goto loc_82318E34;
loc_82318918:
	// cmpwi cr6,r20,2
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 2, ctx.xer);
	// bne cr6,0x82318938
	if (!ctx.cr6.eq) goto loc_82318938;
	// mulli r11,r17,54
	ctx.r11.s64 = ctx.r17.s64 * 54;
	// add r11,r11,r14
	ctx.r11.u64 = ctx.r11.u64 + ctx.r14.u64;
	// mulli r11,r11,516
	ctx.r11.s64 = ctx.r11.s64 * 516;
	// add r10,r11,r16
	ctx.r10.u64 = ctx.r11.u64 + ctx.r16.u64;
	// addis r19,r10,1
	ctx.r19.s64 = ctx.r10.s64 + 65536;
	// addi r19,r19,15580
	ctx.r19.s64 = ctx.r19.s64 + 15580;
loc_82318938:
	// li r5,516
	ctx.r5.s64 = 516;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x823de090
	ctx.lr = 0x82318948;
	sub_823DE090(ctx, base);
	// b 0x82318e34
	goto loc_82318E34;
loc_8231894C:
	// cmpwi cr6,r15,2
	ctx.cr6.compare<int32_t>(ctx.r15.s32, 2, ctx.xer);
	// bne cr6,0x82318a70
	if (!ctx.cr6.eq) goto loc_82318A70;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x82318e28
	if (!ctx.cr6.lt) goto loc_82318E28;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82318964:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82318964
	if (!ctx.cr6.eq) goto loc_82318964;
	// subf r10,r31,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r31.s64;
	// lwz r9,112(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// rotlwi r7,r8,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// subf r3,r7,r9
	ctx.r3.s64 = ctx.r9.s64 - ctx.r7.s64;
	// stw r3,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
loc_82318990:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82318990
	if (!ctx.cr6.eq) goto loc_82318990;
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x822e7f80
	ctx.lr = 0x823189B4;
	sub_822E7F80(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823189c4
	if (ctx.cr6.eq) goto loc_823189C4;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82317248
	ctx.lr = 0x823189C4;
	sub_82317248(ctx, base);
loc_823189C4:
	// li r5,368
	ctx.r5.s64 = 368;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x823de090
	ctx.lr = 0x823189D4;
	sub_823DE090(ctx, base);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82317c08
	ctx.lr = 0x823189E0;
	sub_82317C08(ctx, base);
	// lwz r11,0(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// stw r3,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r3.u32);
	// cmpwi cr6,r11,128
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 128, ctx.xer);
	// blt cr6,0x823189fc
	if (ctx.cr6.lt) goto loc_823189FC;
	// li r4,128
	ctx.r4.s64 = 128;
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x82317248
	ctx.lr = 0x823189FC;
	sub_82317248(ctx, base);
loc_823189FC:
	// lwzx r11,r16,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + ctx.r28.u32);
	// add r31,r16,r28
	ctx.r31.u64 = ctx.r16.u64 + ctx.r28.u64;
	// cmpwi cr6,r11,1125
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1125, ctx.xer);
	// blt cr6,0x82318a18
	if (ctx.cr6.lt) goto loc_82318A18;
	// li r4,1125
	ctx.r4.s64 = 1125;
	// lwz r3,136(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// bl 0x82317248
	ctx.lr = 0x82318A18;
	sub_82317248(ctx, base);
loc_82318A18:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// lwz r10,0(r19)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// li r5,368
	ctx.r5.s64 = 368;
	// mulli r11,r11,368
	ctx.r11.s64 = ctx.r11.s64 * 368;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r9,r11,r16
	ctx.r9.u64 = ctx.r11.u64 + ctx.r16.u64;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r9,r21
	ctx.r7.u64 = ctx.r9.u64 + ctx.r21.u64;
	// stwx r7,r8,r19
	PPC_STORE_U32(ctx.r8.u32 + ctx.r19.u32, ctx.r7.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// lwz r11,0(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// lwzx r24,r10,r19
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r19.u32);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// stw r9,0(r19)
	PPC_STORE_U32(ctx.r19.u32 + 0, ctx.r9.u32);
	// bl 0x823de1f0
	ctx.lr = 0x82318A6C;
	sub_823DE1F0(ctx, base);
	// b 0x82318e34
	goto loc_82318E34;
loc_82318A70:
	// cmpwi cr6,r15,3
	ctx.cr6.compare<int32_t>(ctx.r15.s32, 3, ctx.xer);
	// bne cr6,0x82318e28
	if (!ctx.cr6.eq) goto loc_82318E28;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82318A7C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82318a7c
	if (!ctx.cr6.eq) goto loc_82318A7C;
	// subf r10,r31,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r31.s64;
	// lwz r9,112(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// rotlwi r7,r8,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// subf r3,r7,r9
	ctx.r3.s64 = ctx.r9.s64 - ctx.r7.s64;
	// stw r3,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
loc_82318AA8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82318aa8
	if (!ctx.cr6.eq) goto loc_82318AA8;
	// b 0x82318df0
	goto loc_82318DF0;
loc_82318ABC:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e8058
	ctx.lr = 0x82318AC8;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82318b0c
	if (!ctx.cr6.eq) goto loc_82318B0C;
	// cmpwi cr6,r15,3
	ctx.cr6.compare<int32_t>(ctx.r15.s32, 3, ctx.xer);
	// blt cr6,0x82318ae4
	if (ctx.cr6.lt) goto loc_82318AE4;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82317248
	ctx.lr = 0x82318AE4;
	sub_82317248(ctx, base);
loc_82318AE4:
	// rlwinm r11,r15,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,120
	ctx.r10.s64 = ctx.r1.s64 + 120;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge cr6,0x82318b04
	if (!ctx.cr6.lt) goto loc_82318B04;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82317248
	ctx.lr = 0x82318B04;
	sub_82317248(ctx, base);
loc_82318B04:
	// addi r15,r15,1
	ctx.r15.s64 = ctx.r15.s64 + 1;
	// b 0x82318e34
	goto loc_82318E34;
loc_82318B0C:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e8058
	ctx.lr = 0x82318B18;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82318b58
	if (!ctx.cr6.eq) goto loc_82318B58;
	// addic. r15,r15,-1
	ctx.xer.ca = ctx.r15.u32 > 0;
	ctx.r15.s64 = ctx.r15.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r15.s32, 0, ctx.xer);
	// bge 0x82318b34
	if (!ctx.cr0.lt) goto loc_82318B34;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82317248
	ctx.lr = 0x82318B34;
	sub_82317248(ctx, base);
loc_82318B34:
	// rlwinm r11,r15,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,120
	ctx.r10.s64 = ctx.r1.s64 + 120;
	// subfic r9,r15,0
	ctx.xer.ca = ctx.r15.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r15.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stwx r29,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r29.u32);
	// and r19,r7,r19
	ctx.r19.u64 = ctx.r7.u64 & ctx.r19.u64;
	// lwz r17,120(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r14,124(r1)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// b 0x82318e34
	goto loc_82318E34;
loc_82318B58:
	// cmpwi cr6,r15,0
	ctx.cr6.compare<int32_t>(ctx.r15.s32, 0, ctx.xer);
	// bne cr6,0x82318c84
	if (!ctx.cr6.eq) goto loc_82318C84;
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(ctx.r17.s32, 0, ctx.xer);
	// bge cr6,0x82318e28
	if (!ctx.cr6.lt) goto loc_82318E28;
	// cmpwi cr6,r20,3
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 3, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x82318c48
	if (!ctx.cr6.eq) goto loc_82318C48;
	// lwz r4,176(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x822e8058
	ctx.lr = 0x82318B7C;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82318b90
	if (ctx.cr6.eq) goto loc_82318B90;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,184(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// bl 0x82317248
	ctx.lr = 0x82318B90;
	sub_82317248(ctx, base);
loc_82318B90:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822e6d78
	ctx.lr = 0x82318B98;
	sub_822E6D78(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82318bac
	if (!ctx.cr6.eq) goto loc_82318BAC;
	// lwz r3,152(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// bl 0x82317248
	ctx.lr = 0x82318BAC;
	sub_82317248(ctx, base);
loc_82318BAC:
	// addi r4,r23,4
	ctx.r4.s64 = ctx.r23.s64 + 4;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82317488
	ctx.lr = 0x82318BBC;
	sub_82317488(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822e6d78
	ctx.lr = 0x82318BC8;
	sub_822E6D78(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82318bdc
	if (!ctx.cr6.eq) goto loc_82318BDC;
	// lwz r3,152(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// bl 0x82317248
	ctx.lr = 0x82318BDC;
	sub_82317248(ctx, base);
loc_82318BDC:
	// addi r4,r23,4
	ctx.r4.s64 = ctx.r23.s64 + 4;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82317488
	ctx.lr = 0x82318BEC;
	sub_82317488(ctx, base);
	// mr r17,r3
	ctx.r17.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// add r11,r30,r17
	ctx.r11.u64 = ctx.r30.u64 + ctx.r17.u64;
	// stw r17,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r17.u32);
	// mulli r11,r11,516
	ctx.r11.s64 = ctx.r11.s64 * 516;
	// add r10,r11,r16
	ctx.r10.u64 = ctx.r11.u64 + ctx.r16.u64;
	// addis r19,r10,2
	ctx.r19.s64 = ctx.r10.s64 + 131072;
	// addi r19,r19,-22092
	ctx.r19.s64 = ctx.r19.s64 + -22092;
	// bl 0x822e6d10
	ctx.lr = 0x82318C10;
	sub_822E6D10(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82318c28
	if (ctx.cr6.eq) goto loc_82318C28;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x822e8058
	ctx.lr = 0x82318C20;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82318c30
	if (ctx.cr6.eq) goto loc_82318C30;
loc_82318C28:
	// lwz r3,144(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x82317248
	ctx.lr = 0x82318C30;
	sub_82317248(ctx, base);
loc_82318C30:
	// li r5,516
	ctx.r5.s64 = 516;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// li r15,1
	ctx.r15.s64 = 1;
	// bl 0x823de090
	ctx.lr = 0x82318C44;
	sub_823DE090(ctx, base);
	// b 0x82318e34
	goto loc_82318E34;
loc_82318C48:
	// addi r4,r23,464
	ctx.r4.s64 = ctx.r23.s64 + 464;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82317488
	ctx.lr = 0x82318C54;
	sub_82317488(ctx, base);
	// mulli r11,r3,516
	ctx.r11.s64 = ctx.r3.s64 * 516;
	// stw r3,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r3.u32);
	// stw r3,0(r18)
	PPC_STORE_U32(ctx.r18.u32 + 0, ctx.r3.u32);
	// add r11,r11,r16
	ctx.r11.u64 = ctx.r11.u64 + ctx.r16.u64;
	// mr r17,r3
	ctx.r17.u64 = ctx.r3.u64;
	// addis r19,r11,2
	ctx.r19.s64 = ctx.r11.s64 + 131072;
	// li r5,516
	ctx.r5.s64 = 516;
	// addi r19,r19,-21576
	ctx.r19.s64 = ctx.r19.s64 + -21576;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x823de090
	ctx.lr = 0x82318C80;
	sub_823DE090(ctx, base);
	// b 0x82318e34
	goto loc_82318E34;
loc_82318C84:
	// cmpwi cr6,r15,1
	ctx.cr6.compare<int32_t>(ctx.r15.s32, 1, ctx.xer);
	// bne cr6,0x82318da8
	if (!ctx.cr6.eq) goto loc_82318DA8;
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 0, ctx.xer);
	// bge cr6,0x82318e28
	if (!ctx.cr6.lt) goto loc_82318E28;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82318C98:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82318c98
	if (!ctx.cr6.eq) goto loc_82318C98;
	// subf r10,r31,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r31.s64;
	// lwz r9,112(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// rotlwi r7,r8,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// subf r3,r7,r9
	ctx.r3.s64 = ctx.r9.s64 - ctx.r7.s64;
	// stw r3,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
loc_82318CC4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82318cc4
	if (!ctx.cr6.eq) goto loc_82318CC4;
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x822e7f80
	ctx.lr = 0x82318CE8;
	sub_822E7F80(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82318cf8
	if (ctx.cr6.eq) goto loc_82318CF8;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82317248
	ctx.lr = 0x82318CF8;
	sub_82317248(ctx, base);
loc_82318CF8:
	// li r5,368
	ctx.r5.s64 = 368;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x823de090
	ctx.lr = 0x82318D08;
	sub_823DE090(ctx, base);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82317c08
	ctx.lr = 0x82318D14;
	sub_82317C08(ctx, base);
	// lwz r11,0(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// mr r14,r3
	ctx.r14.u64 = ctx.r3.u64;
	// stw r3,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r3.u32);
	// cmpwi cr6,r11,128
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 128, ctx.xer);
	// blt cr6,0x82318d34
	if (ctx.cr6.lt) goto loc_82318D34;
	// li r4,128
	ctx.r4.s64 = 128;
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x82317248
	ctx.lr = 0x82318D34;
	sub_82317248(ctx, base);
loc_82318D34:
	// lwzx r11,r16,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + ctx.r28.u32);
	// add r31,r16,r28
	ctx.r31.u64 = ctx.r16.u64 + ctx.r28.u64;
	// cmpwi cr6,r11,1125
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1125, ctx.xer);
	// blt cr6,0x82318d50
	if (ctx.cr6.lt) goto loc_82318D50;
	// li r4,1125
	ctx.r4.s64 = 1125;
	// lwz r3,136(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// bl 0x82317248
	ctx.lr = 0x82318D50;
	sub_82317248(ctx, base);
loc_82318D50:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// lwz r10,0(r19)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// li r5,368
	ctx.r5.s64 = 368;
	// mulli r11,r11,368
	ctx.r11.s64 = ctx.r11.s64 * 368;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r9,r11,r16
	ctx.r9.u64 = ctx.r11.u64 + ctx.r16.u64;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r9,r21
	ctx.r7.u64 = ctx.r9.u64 + ctx.r21.u64;
	// stwx r7,r8,r19
	PPC_STORE_U32(ctx.r8.u32 + ctx.r19.u32, ctx.r7.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// lwz r11,0(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// lwzx r24,r10,r19
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r19.u32);
	// stw r9,0(r19)
	PPC_STORE_U32(ctx.r19.u32 + 0, ctx.r9.u32);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x823de1f0
	ctx.lr = 0x82318DA4;
	sub_823DE1F0(ctx, base);
	// b 0x82318e34
	goto loc_82318E34;
loc_82318DA8:
	// cmpwi cr6,r15,2
	ctx.cr6.compare<int32_t>(ctx.r15.s32, 2, ctx.xer);
	// bne cr6,0x82318e28
	if (!ctx.cr6.eq) goto loc_82318E28;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82318DB4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82318db4
	if (!ctx.cr6.eq) goto loc_82318DB4;
	// subf r10,r31,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r31.s64;
	// lwz r9,112(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// rotlwi r7,r8,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// subf r3,r7,r9
	ctx.r3.s64 = ctx.r9.s64 - ctx.r7.s64;
	// stw r3,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
loc_82318DE0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82318de0
	if (!ctx.cr6.eq) goto loc_82318DE0;
loc_82318DF0:
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x822e7f80
	ctx.lr = 0x82318E04;
	sub_822E7F80(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82318e14
	if (ctx.cr6.eq) goto loc_82318E14;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82317248
	ctx.lr = 0x82318E14;
	sub_82317248(ctx, base);
loc_82318E14:
	// mr r5,r16
	ctx.r5.u64 = ctx.r16.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82317df8
	ctx.lr = 0x82318E24;
	sub_82317DF8(ctx, base);
	// b 0x82318e34
	goto loc_82318E34;
loc_82318E28:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82317248
	ctx.lr = 0x82318E34;
	sub_82317248(ctx, base);
loc_82318E34:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822e6d10
	ctx.lr = 0x82318E3C;
	sub_822E6D10(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823185a0
	if (!ctx.cr6.eq) goto loc_823185A0;
loc_82318E48:
	// cmpwi cr6,r15,0
	ctx.cr6.compare<int32_t>(ctx.r15.s32, 0, ctx.xer);
	// beq cr6,0x82318e5c
	if (ctx.cr6.eq) goto loc_82318E5C;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,18360
	ctx.r3.s64 = ctx.r11.s64 + 18360;
	// bl 0x82317248
	ctx.lr = 0x82318E5C;
	sub_82317248(ctx, base);
loc_82318E5C:
	// bl 0x822e5fb0
	ctx.lr = 0x82318E60;
	sub_822E5FB0(ctx, base);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x822db8d8
	ctx.lr = 0x82318E68;
	sub_822DB8D8(ctx, base);
	// addi r1,r1,752
	ctx.r1.s64 = ctx.r1.s64 + 752;
	// b 0x823ddf90
	__restgprlr_14(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82318370) {
	__imp__sub_82318370(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82318E70) {
	PPC_FUNC_PROLOGUE();
	// lwz r5,0(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r4,4
	ctx.r11.s64 = ctx.r4.s64 + 4;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x82318f04
	if (!ctx.cr6.gt) goto loc_82318F04;
	// lis r10,-32191
	ctx.r10.s64 = -2109669376;
	// addi r6,r10,31224
	ctx.r6.s64 = ctx.r10.s64 + 31224;
loc_82318E8C:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r8,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r9,r10,r6
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r6.u32);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// blt cr6,0x82318ec0
	if (ctx.cr6.lt) goto loc_82318EC0;
	// bne cr6,0x82318ef4
	if (!ctx.cr6.eq) goto loc_82318EF4;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,212(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 212);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82318ef4
	if (ctx.cr6.eq) goto loc_82318EF4;
loc_82318EB8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82318EC0:
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,212(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 212);
	// and r10,r4,r9
	ctx.r10.u64 = ctx.r4.u64 & ctx.r9.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82318ef4
	if (!ctx.cr6.eq) goto loc_82318EF4;
	// addi r10,r8,27
	ctx.r10.s64 = ctx.r8.s64 + 27;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r8,r10,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r4,r8,r3
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r3.u32);
	// and r10,r4,r9
	ctx.r10.u64 = ctx.r4.u64 & ctx.r9.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82318eb8
	if (ctx.cr6.eq) goto loc_82318EB8;
loc_82318EF4:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// cmpw cr6,r7,r5
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x82318e8c
	if (ctx.cr6.lt) goto loc_82318E8C;
loc_82318F04:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82318E70) {
	__imp__sub_82318E70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82318F0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82318F0C) {
	__imp__sub_82318F0C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82318F10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x82318F18;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r27,0(r4)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r31,r4,4
	ctx.r31.s64 = ctx.r4.s64 + 4;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// ble cr6,0x82318f7c
	if (!ctx.cr6.gt) goto loc_82318F7C;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// li r9,24
	ctx.r9.s64 = 24;
	// add r8,r3,r11
	ctx.r8.u64 = ctx.r3.u64 + ctx.r11.u64;
	// rlwinm r11,r8,7,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 7) & 0xFFFFFF80;
	// lwzx r10,r9,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addis r28,r7,8
	ctx.r28.s64 = ctx.r7.s64 + 524288;
	// addi r28,r28,10620
	ctx.r28.s64 = ctx.r28.s64 + 10620;
loc_82318F54:
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82318e70
	ctx.lr = 0x82318F64;
	sub_82318E70(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82318f88
	if (!ctx.cr6.eq) goto loc_82318F88;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r29,r27
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x82318f54
	if (ctx.cr6.lt) goto loc_82318F54;
loc_82318F7C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_82318F88:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82318F10) {
	__imp__sub_82318F10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82318F94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82318F94) {
	__imp__sub_82318F94(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82318F98) {
	PPC_FUNC_PROLOGUE();
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lis r10,-31834
	ctx.r10.s64 = -2086273024;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// lwz r3,-22204(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -22204);
	// bne cr6,0x82318fc4
	if (!ctx.cr6.eq) goto loc_82318FC4;
	// mulli r10,r4,104
	ctx.r10.s64 = ctx.r4.s64 * 104;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// lwz r10,72(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// addi r6,r10,50
	ctx.r6.s64 = ctx.r10.s64 + 50;
loc_82318FC4:
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// beq cr6,0x82318fdc
	if (ctx.cr6.eq) goto loc_82318FDC;
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// beq cr6,0x8231905c
	if (ctx.cr6.eq) goto loc_8231905C;
	// cmpwi cr6,r5,3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 3, ctx.xer);
	// bne cr6,0x823190dc
	if (!ctx.cr6.eq) goto loc_823190DC;
loc_82318FDC:
	// lwz r10,132(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// cmpwi cr6,r10,50
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 50, ctx.xer);
	// blt cr6,0x82318ff0
	if (ctx.cr6.lt) goto loc_82318FF0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82319050
	if (ctx.cr6.eq) goto loc_82319050;
loc_82318FF0:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82319028
	if (ctx.cr6.eq) goto loc_82319028;
	// lwz r10,136(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	// rlwinm r10,r10,0,23,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFDFF;
	// cmpw cr6,r10,r4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r4.s32, ctx.xer);
	// bne cr6,0x82319028
	if (!ctx.cr6.eq) goto loc_82319028;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x82319050
	if (ctx.cr6.eq) goto loc_82319050;
	// mulli r10,r4,104
	ctx.r10.s64 = ctx.r4.s64 * 104;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// lwz r4,80(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	// rlwinm r10,r4,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x80;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// b 0x82319048
	goto loc_82319048;
loc_82319028:
	// lwz r10,136(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	// li r31,1
	ctx.r31.s64 = 1;
	// stw r6,148(r11)
	PPC_STORE_U32(ctx.r11.u32 + 148, ctx.r6.u32);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// not r10,r10
	ctx.r10.u64 = ~ctx.r10.u64;
	// rlwinm r10,r10,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x200;
	// or r4,r10,r4
	ctx.r4.u64 = ctx.r10.u64 | ctx.r4.u64;
	// stw r4,136(r11)
	PPC_STORE_U32(ctx.r11.u32 + 136, ctx.r4.u32);
loc_82319048:
	// beq cr6,0x82319050
	if (ctx.cr6.eq) goto loc_82319050;
	// stw r6,132(r11)
	PPC_STORE_U32(ctx.r11.u32 + 132, ctx.r6.u32);
loc_82319050:
	// cmpwi cr6,r5,3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 3, ctx.xer);
	// bne cr6,0x823190d4
	if (!ctx.cr6.eq) goto loc_823190D4;
	// li r4,0
	ctx.r4.s64 = 0;
loc_8231905C:
	// lwz r10,140(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// cmpwi cr6,r10,50
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 50, ctx.xer);
	// blt cr6,0x82319070
	if (ctx.cr6.lt) goto loc_82319070;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x823190d4
	if (ctx.cr6.eq) goto loc_823190D4;
loc_82319070:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x823190b0
	if (ctx.cr6.eq) goto loc_823190B0;
	// lwz r10,144(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 144);
	// rlwinm r9,r10,0,23,21
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFDFF;
	// cmpw cr6,r9,r4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r4.s32, ctx.xer);
	// bne cr6,0x823190b0
	if (!ctx.cr6.eq) goto loc_823190B0;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x823190d4
	if (ctx.cr6.eq) goto loc_823190D4;
	// mulli r10,r4,104
	ctx.r10.s64 = ctx.r4.s64 * 104;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// lwz r9,80(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	// rlwinm r8,r9,0,24,24
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x80;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x823190d4
	if (ctx.cr6.eq) goto loc_823190D4;
	// stw r6,140(r11)
	PPC_STORE_U32(ctx.r11.u32 + 140, ctx.r6.u32);
	// b 0x823190d4
	goto loc_823190D4;
loc_823190B0:
	// lwz r10,144(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 144);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// not r9,r10
	ctx.r9.u64 = ~ctx.r10.u64;
	// rlwinm r8,r9,0,22,22
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x200;
	// or r7,r8,r4
	ctx.r7.u64 = ctx.r8.u64 | ctx.r4.u64;
	// stw r7,144(r11)
	PPC_STORE_U32(ctx.r11.u32 + 144, ctx.r7.u32);
	// beq cr6,0x823190d0
	if (ctx.cr6.eq) goto loc_823190D0;
	// stw r6,140(r11)
	PPC_STORE_U32(ctx.r11.u32 + 140, ctx.r6.u32);
loc_823190D0:
	// stw r6,152(r11)
	PPC_STORE_U32(ctx.r11.u32 + 152, ctx.r6.u32);
loc_823190D4:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne cr6,0x823190e8
	if (!ctx.cr6.eq) goto loc_823190E8;
loc_823190DC:
	// li r3,-1
	ctx.r3.s64 = -1;
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_823190E8:
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82318F98) {
	__imp__sub_82318F98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823190F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823190F4) {
	__imp__sub_823190F4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823190F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x82319100;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// extsh r5,r11
	ctx.r5.s64 = ctx.r11.s16;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// li r30,-1
	ctx.r30.s64 = -1;
	// li r25,0
	ctx.r25.s64 = 0;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x823191a4
	if (ctx.cr6.eq) goto loc_823191A4;
	// lhz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 8);
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// addi r30,r11,50
	ctx.r30.s64 = ctx.r11.s64 + 50;
	// beq cr6,0x8231916c
	if (ctx.cr6.eq) goto loc_8231916C;
	// cmpwi cr6,r5,3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 3, ctx.xer);
	// beq cr6,0x8231916c
	if (ctx.cr6.eq) goto loc_8231916C;
	// lhz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 4);
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// extsh r4,r11
	ctx.r4.s64 = ctx.r11.s16;
	// bl 0x82318f98
	ctx.lr = 0x82319168;
	sub_82318F98(ctx, base);
	// b 0x823191a4
	goto loc_823191A4;
loc_8231916C:
	// lhz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// extsh r4,r11
	ctx.r4.s64 = ctx.r11.s16;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82318f98
	ctx.lr = 0x8231918C;
	sub_82318F98(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// subfc r10,r3,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r3.u32;
	ctx.r10.s64 = ctx.r11.s64 - ctx.r3.s64;
	// eqv r9,r3,r11
	ctx.r9.u64 = ~(ctx.r3.u64 ^ ctx.r11.u64);
	// rlwinm r8,r9,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// addze r7,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r7.s64 = temp.s64;
	// clrlwi r25,r7,31
	ctx.r25.u64 = ctx.r7.u32 & 0x1;
loc_823191A4:
	// lhz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// extsh r5,r11
	ctx.r5.s64 = ctx.r11.s16;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x823191f8
	if (ctx.cr6.eq) goto loc_823191F8;
	// lhz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// lhz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// addi r30,r10,50
	ctx.r30.s64 = ctx.r10.s64 + 50;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8231920c
	if (ctx.cr6.eq) goto loc_8231920C;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8231920c
	if (ctx.cr6.eq) goto loc_8231920C;
	// lhz r11,6(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// extsh r4,r11
	ctx.r4.s64 = ctx.r11.s16;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82318f98
	ctx.lr = 0x823191F8;
	sub_82318F98(ctx, base);
loc_823191F8:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// bne cr6,0x82319234
	if (!ctx.cr6.eq) goto loc_82319234;
loc_82319200:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_8231920C:
	// lhz r11,6(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// extsh r4,r11
	ctx.r4.s64 = ctx.r11.s16;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82318f98
	ctx.lr = 0x8231922C;
	sub_82318F98(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// ble cr6,0x82319200
	if (!ctx.cr6.gt) goto loc_82319200;
loc_82319234:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823190F8) {
	__imp__sub_823190F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82319240) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x82319248;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// beq cr6,0x8231927c
	if (ctx.cr6.eq) goto loc_8231927C;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// blt cr6,0x8231927c
	if (ctx.cr6.lt) goto loc_8231927C;
loc_82319270:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_8231927C:
	// lis r11,-31834
	ctx.r11.s64 = -2086273024;
	// mulli r10,r4,516
	ctx.r10.s64 = ctx.r4.s64 * 516;
	// lwz r11,-22204(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22204);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addis r4,r10,2
	ctx.r4.s64 = ctx.r10.s64 + 131072;
	// addi r4,r4,-21576
	ctx.r4.s64 = ctx.r4.s64 + -21576;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82319270
	if (ctx.cr6.eq) goto loc_82319270;
	// lwz r3,256(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 256);
	// bl 0x82318f10
	ctx.lr = 0x823192A8;
	sub_82318F10(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82319270
	if (ctx.cr6.eq) goto loc_82319270;
	// lwz r11,220(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 220);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82319270
	if (ctx.cr6.eq) goto loc_82319270;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82327df8
	ctx.lr = 0x823192C8;
	sub_82327DF8(ctx, base);
	// lwz r11,220(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// divw r10,r3,r11
	ctx.r10.s32 = ctx.r3.s32 / ctx.r11.s32;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mullw r9,r10,r11
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// subf r11,r9,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r9.s64;
	// li r5,1
	ctx.r5.s64 = 1;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r4,r11,224
	ctx.r4.s64 = ctx.r11.s64 + 224;
	// bl 0x823190f8
	ctx.lr = 0x82319300;
	sub_823190F8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82319240) {
	__imp__sub_82319240(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82319308) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// rldicl r6,r5,32,32
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u64, 32) & 0xFFFFFFFF;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// li r9,24
	ctx.r9.s64 = 24;
	// add r7,r11,r4
	ctx.r7.u64 = ctx.r11.u64 + ctx.r4.u64;
	// addis r5,r7,1
	ctx.r5.s64 = ctx.r7.s64 + 65536;
	// addi r5,r5,1354
	ctx.r5.s64 = ctx.r5.s64 + 1354;
	// lwzx r10,r9,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// rlwinm r11,r5,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// stw r6,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82319308) {
	__imp__sub_82319308(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82319348) {
	PPC_FUNC_PROLOGUE();
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// rlwinm r9,r3,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r11,0(r13)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// add r5,r3,r9
	ctx.r5.u64 = ctx.r3.u64 + ctx.r9.u64;
	// li r10,24
	ctx.r10.s64 = 24;
	// rlwinm r9,r5,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// li r5,0
	ctx.r5.s64 = 0;
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
	// lis r4,8
	ctx.r4.s64 = 524288;
	// addis r3,r9,1
	ctx.r3.s64 = ctx.r9.s64 + 65536;
	// lwzx r31,r10,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// rlwinm r7,r9,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r3,r3,1354
	ctx.r3.s64 = ctx.r3.s64 + 1354;
	// ori r4,r4,10836
	ctx.r4.u64 = ctx.r4.u64 | 10836;
	// rlwinm r8,r3,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// srawi r3,r6,5
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1F) != 0);
	ctx.r3.s64 = ctx.r6.s32 >> 5;
	// clrlwi r6,r6,27
	ctx.r6.u64 = ctx.r6.u32 & 0x1F;
	// rlwinm r9,r3,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// li r3,1
	ctx.r3.s64 = 1;
	// stwx r5,r31,r8
	PPC_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r5.u32);
	// slw r3,r3,r6
	ctx.r3.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r6.u8 & 0x3F));
	// lwzx r6,r10,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// stwx r5,r7,r4
	PPC_STORE_U32(ctx.r7.u32 + ctx.r4.u32, ctx.r5.u32);
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwzx r6,r9,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// or r5,r3,r6
	ctx.r5.u64 = ctx.r3.u64 | ctx.r6.u64;
	// stwx r5,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r5.u32);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82319348) {
	__imp__sub_82319348(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823193C8) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r3,212(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 212);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823193C8) {
	__imp__sub_823193C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823193D8) {
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
	// lis r30,-31834
	ctx.r30.s64 = -2086273024;
	// lis r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r10,r11,53248
	ctx.r10.u64 = ctx.r11.u64 | 53248;
	// lwz r11,-22204(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -22204);
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplw cr6,r3,r9
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82319420
	if (ctx.cr6.lt) goto loc_82319420;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,19224
	ctx.r4.s64 = ctx.r11.s64 + 19224;
	// bl 0x822830e8
	ctx.lr = 0x8231941C;
	sub_822830E8(ctx, base);
	// lwz r11,-22204(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -22204);
loc_82319420:
	// mulli r10,r31,104
	ctx.r10.s64 = ctx.r31.s64 * 104;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
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

PPC_WEAK_FUNC(sub_823193D8) {
	__imp__sub_823193D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82319440) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf68
	ctx.lr = 0x82319448;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332c00
	ctx.lr = 0x8231945C;
	sub_82332C00(ctx, base);
	// bl 0x82332af8
	ctx.lr = 0x82319460;
	sub_82332AF8(ctx, base);
	// lwz r11,256(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// lwz r30,0(r13)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r29,24
	ctx.r29.s64 = 24;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r4,40(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lis r10,8
	ctx.r10.s64 = 524288;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// ori r10,r10,10832
	ctx.r10.u64 = ctx.r10.u64 | 10832;
	// lwzx r8,r29,r30
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r30.u32);
	// rlwinm r11,r9,7,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 7) & 0xFFFFFF80;
	// li r28,0
	ctx.r28.s64 = 0;
	// add r6,r8,r11
	ctx.r6.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lis r5,8
	ctx.r5.s64 = 524288;
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// srawi r7,r4,5
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1F) != 0);
	ctx.r7.s64 = ctx.r4.s32 >> 5;
	// ori r8,r5,10836
	ctx.r8.u64 = ctx.r5.u64 | 10836;
	// stwx r28,r6,r10
	PPC_STORE_U32(ctx.r6.u32 + ctx.r10.u32, ctx.r28.u32);
	// clrlwi r6,r4,27
	ctx.r6.u64 = ctx.r4.u32 & 0x1F;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// li r27,1
	ctx.r27.s64 = 1;
	// slw r5,r27,r6
	ctx.r5.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r27.u32 << (ctx.r6.u8 & 0x3F));
	// lwzx r9,r29,r30
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r30.u32);
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stwx r28,r4,r8
	PPC_STORE_U32(ctx.r4.u32 + ctx.r8.u32, ctx.r28.u32);
	// lwzx r9,r29,r30
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r30.u32);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// or r8,r5,r9
	ctx.r8.u64 = ctx.r5.u64 | ctx.r9.u64;
	// stwx r8,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r8.u32);
	// lwz r3,692(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 692);
	// bl 0x82332af8
	ctx.lr = 0x823194E8;
	sub_82332AF8(ctx, base);
	// lwz r11,256(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwzx r7,r29,r30
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r30.u32);
	// lis r6,8
	ctx.r6.s64 = 524288;
	// lwz r5,40(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// add r4,r11,r8
	ctx.r4.u64 = ctx.r11.u64 + ctx.r8.u64;
	// ori r9,r6,10952
	ctx.r9.u64 = ctx.r6.u64 | 10952;
	// rlwinm r11,r4,7,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 7) & 0xFFFFFF80;
	// lis r3,8
	ctx.r3.s64 = 524288;
	// add r10,r7,r11
	ctx.r10.u64 = ctx.r7.u64 + ctx.r11.u64;
	// stwx r28,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r28.u32);
	// ori r7,r3,10956
	ctx.r7.u64 = ctx.r3.u64 | 10956;
	// srawi r4,r5,5
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1F) != 0);
	ctx.r4.s64 = ctx.r5.s32 >> 5;
	// clrlwi r3,r5,27
	ctx.r3.u64 = ctx.r5.u32 & 0x1F;
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// slw r5,r27,r3
	ctx.r5.u64 = ctx.r3.u8 & 0x20 ? 0 : (ctx.r27.u32 << (ctx.r3.u8 & 0x3F));
	// lwzx r8,r29,r30
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r30.u32);
	// lis r4,8
	ctx.r4.s64 = 524288;
	// lis r3,8
	ctx.r3.s64 = 524288;
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// ori r10,r4,10840
	ctx.r10.u64 = ctx.r4.u64 | 10840;
	// ori r4,r3,10844
	ctx.r4.u64 = ctx.r3.u64 | 10844;
	// mr r24,r10
	ctx.r24.u64 = ctx.r10.u64;
	// stwx r28,r8,r7
	PPC_STORE_U32(ctx.r8.u32 + ctx.r7.u32, ctx.r28.u32);
	// lwzx r8,r29,r30
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r30.u32);
	// add r3,r8,r11
	ctx.r3.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r11,r3,r6
	ctx.r11.u64 = ctx.r3.u64 + ctx.r6.u64;
	// lwzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// or r7,r5,r8
	ctx.r7.u64 = ctx.r5.u64 | ctx.r8.u64;
	// stwx r7,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r7.u32);
	// lwz r6,48(r25)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r25.u32 + 48);
	// lwzx r8,r29,r30
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r30.u32);
	// lwz r11,256(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// srawi r3,r6,5
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1F) != 0);
	ctx.r3.s64 = ctx.r6.s32 >> 5;
	// rlwinm r11,r5,7,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 7) & 0xFFFFFF80;
	// clrlwi r7,r6,27
	ctx.r7.u64 = ctx.r6.u32 & 0x1F;
	// add r6,r8,r11
	ctx.r6.u64 = ctx.r8.u64 + ctx.r11.u64;
	// stwx r28,r6,r10
	PPC_STORE_U32(ctx.r6.u32 + ctx.r10.u32, ctx.r28.u32);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r29,r30
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r30.u32);
	// slw r5,r27,r7
	ctx.r5.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r27.u32 << (ctx.r7.u8 & 0x3F));
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stwx r28,r9,r4
	PPC_STORE_U32(ctx.r9.u32 + ctx.r4.u32, ctx.r28.u32);
	// lwzx r9,r29,r30
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r30.u32);
	// add r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r11,r8,r24
	ctx.r11.u64 = ctx.r8.u64 + ctx.r24.u64;
	// lwzx r7,r10,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// or r6,r5,r7
	ctx.r6.u64 = ctx.r5.u64 | ctx.r7.u64;
	// stwx r6,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r6.u32);
	// lwz r10,724(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 724);
	// lwzx r8,r29,r30
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r30.u32);
	// lwz r11,256(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r4,r10,-1
	ctx.r4.s64 = ctx.r10.s64 + -1;
	// rlwinm r11,r5,7,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 7) & 0xFFFFFF80;
	// cntlzw r10,r4
	ctx.r10.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// add r9,r11,r8
	ctx.r9.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r8,r10,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addis r7,r9,8
	ctx.r7.s64 = ctx.r9.s64 + 524288;
	// rldicl r6,r8,32,32
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF;
	// addi r7,r7,10928
	ctx.r7.s64 = ctx.r7.s64 + 10928;
	// stw r8,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r8.u32);
	// stw r6,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r6.u32);
	// bl 0x823344b0
	ctx.lr = 0x823195FC;
	sub_823344B0(ctx, base);
	// lwz r11,256(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// extsw r5,r3
	ctx.r5.s64 = ctx.r3.s32;
	// lwzx r9,r29,r30
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r30.u32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rldicl r10,r5,32,32
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u64, 32) & 0xFFFFFFFF;
	// rlwinm r11,r3,7,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 7) & 0xFFFFFF80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addis r8,r9,8
	ctx.r8.s64 = ctx.r9.s64 + 524288;
	// addi r8,r8,10944
	ctx.r8.s64 = ctx.r8.s64 + 10944;
	// stw r5,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r5.u32);
	// stw r10,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r10.u32);
	// bl 0x8231bd70
	ctx.lr = 0x82319634;
	sub_8231BD70(ctx, base);
	// lwz r11,256(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// lwzx r9,r29,r30
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r30.u32);
	// extsw r7,r3
	ctx.r7.s64 = ctx.r3.s32;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rldicl r4,r7,32,32
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u64, 32) & 0xFFFFFFFF;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r5,7,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 7) & 0xFFFFFF80;
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addis r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 524288;
	// addi r11,r11,10936
	ctx.r11.s64 = ctx.r11.s64 + 10936;
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// stw r4,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r4.u32);
	// lwz r11,256(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r9,r10,0,27,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lwzx r10,r29,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r30.u32);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,7,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0xFFFFFF80;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addis r9,r10,8
	ctx.r9.s64 = ctx.r10.s64 + 524288;
	// addi r9,r9,10880
	ctx.r9.s64 = ctx.r9.s64 + 10880;
	// stw r28,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r28.u32);
	// beq cr6,0x823196a0
	if (ctx.cr6.eq) goto loc_823196A0;
	// stw r27,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r27.u32);
	// b 0x823196a4
	goto loc_823196A4;
loc_823196A0:
	// stw r28,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r28.u32);
loc_823196A4:
	// lwz r11,172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// rlwinm r10,r11,0,20,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC00;
	// lwz r11,256(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwzx r10,r29,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r30.u32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,7,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0xFFFFFF80;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addis r9,r10,8
	ctx.r9.s64 = ctx.r10.s64 + 524288;
	// addi r9,r9,10848
	ctx.r9.s64 = ctx.r9.s64 + 10848;
	// stw r28,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r28.u32);
	// beq cr6,0x823196e0
	if (ctx.cr6.eq) goto loc_823196E0;
	// stw r27,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r27.u32);
	// b 0x823196e4
	goto loc_823196E4;
loc_823196E0:
	// stw r28,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r28.u32);
loc_823196E4:
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// lwz r11,256(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwzx r10,r29,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r30.u32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,7,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0xFFFFFF80;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addis r9,r10,8
	ctx.r9.s64 = ctx.r10.s64 + 524288;
	// addi r9,r9,10872
	ctx.r9.s64 = ctx.r9.s64 + 10872;
	// stw r28,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r28.u32);
	// beq cr6,0x82319720
	if (ctx.cr6.eq) goto loc_82319720;
	// stw r27,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r27.u32);
	// b 0x82319724
	goto loc_82319724;
loc_82319720:
	// stw r28,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r28.u32);
loc_82319724:
	// lwz r11,256(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// lwzx r10,r29,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r30.u32);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,7,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0xFFFFFF80;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addis r9,r10,8
	ctx.r9.s64 = ctx.r10.s64 + 524288;
	// addi r9,r9,10896
	ctx.r9.s64 = ctx.r9.s64 + 10896;
	// stw r28,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r28.u32);
	// stw r28,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r28.u32);
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r7,r8,0,11,11
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x100000;
	// lwz r11,256(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// lwzx r10,r29,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r30.u32);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// beq cr6,0x82319798
	if (ctx.cr6.eq) goto loc_82319798;
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r8,1128(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1128);
	// rlwinm r11,r7,7,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 7) & 0xFFFFFF80;
	// extsw r6,r8
	ctx.r6.s64 = ctx.r8.s32;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rldicl r3,r6,32,32
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u64, 32) & 0xFFFFFFFF;
	// addis r11,r4,8
	ctx.r11.s64 = ctx.r4.s64 + 524288;
	// addi r11,r11,10968
	ctx.r11.s64 = ctx.r11.s64 + 10968;
	// stw r6,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// stw r3,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
loc_82319798:
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,7,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0xFFFFFF80;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addis r9,r10,8
	ctx.r9.s64 = ctx.r10.s64 + 524288;
	// addi r9,r9,10968
	ctx.r9.s64 = ctx.r9.s64 + 10968;
	// stw r28,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r28.u32);
	// stw r28,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r28.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82319440) {
	__imp__sub_82319440(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823197BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823197BC) {
	__imp__sub_823197BC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823197C0) {
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
	// lis r31,-31834
	ctx.r31.s64 = -2086273024;
	// lis r11,0
	ctx.r11.s64 = 0;
	// rlwinm r30,r3,0,23,21
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFFFFFFFDFF;
	// ori r10,r11,53248
	ctx.r10.u64 = ctx.r11.u64 | 53248;
	// lwz r11,-22204(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22204);
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplw cr6,r30,r9
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82319808
	if (ctx.cr6.lt) goto loc_82319808;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,19224
	ctx.r4.s64 = ctx.r11.s64 + 19224;
	// bl 0x822830e8
	ctx.lr = 0x82319804;
	sub_822830E8(ctx, base);
	// lwz r11,-22204(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22204);
loc_82319808:
	// mulli r10,r30,104
	ctx.r10.s64 = ctx.r30.s64 * 104;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r12,768
	ctx.r12.s64 = 768;
	// li r3,1
	ctx.r3.s64 = 1;
	// rldicr r12,r12,32,31
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 32) & 0xFFFFFFFF00000000;
	// ld r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 88);
	// ori r12,r12,196
	ctx.r12.u64 = ctx.r12.u64 | 196;
	// and r9,r10,r12
	ctx.r9.u64 = ctx.r10.u64 & ctx.r12.u64;
	// cmpdi cr6,r9,0
	ctx.cr6.compare<int64_t>(ctx.r9.s64, 0, ctx.xer);
	// bne cr6,0x82319834
	if (!ctx.cr6.eq) goto loc_82319834;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82319834:
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

PPC_WEAK_FUNC(sub_823197C0) {
	__imp__sub_823197C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8231984C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8231984C) {
	__imp__sub_8231984C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82319850) {
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
	// lis r31,-31834
	ctx.r31.s64 = -2086273024;
	// lis r11,0
	ctx.r11.s64 = 0;
	// rlwinm r30,r3,0,23,21
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFFFFFFFDFF;
	// ori r10,r11,53248
	ctx.r10.u64 = ctx.r11.u64 | 53248;
	// lwz r11,-22204(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22204);
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplw cr6,r30,r9
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82319898
	if (ctx.cr6.lt) goto loc_82319898;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,19224
	ctx.r4.s64 = ctx.r11.s64 + 19224;
	// bl 0x822830e8
	ctx.lr = 0x82319894;
	sub_822830E8(ctx, base);
	// lwz r11,-22204(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22204);
loc_82319898:
	// mulli r10,r30,104
	ctx.r10.s64 = ctx.r30.s64 * 104;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// ld r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 88);
	// rlwinm r9,r10,0,22,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x3F0;
	// cmpdi cr6,r9,0
	ctx.cr6.compare<int64_t>(ctx.r9.s64, 0, ctx.xer);
	// bne cr6,0x823198b8
	if (!ctx.cr6.eq) goto loc_823198B8;
	// li r3,0
	ctx.r3.s64 = 0;
loc_823198B8:
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

PPC_WEAK_FUNC(sub_82319850) {
	__imp__sub_82319850(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823198D0) {
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
	// lis r31,-31834
	ctx.r31.s64 = -2086273024;
	// lis r11,0
	ctx.r11.s64 = 0;
	// rlwinm r30,r3,0,23,21
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFFFFFFFDFF;
	// ori r10,r11,53248
	ctx.r10.u64 = ctx.r11.u64 | 53248;
	// lwz r11,-22204(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22204);
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplw cr6,r30,r9
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82319918
	if (ctx.cr6.lt) goto loc_82319918;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,19224
	ctx.r4.s64 = ctx.r11.s64 + 19224;
	// bl 0x822830e8
	ctx.lr = 0x82319914;
	sub_822830E8(ctx, base);
	// lwz r11,-22204(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22204);
loc_82319918:
	// mulli r10,r30,104
	ctx.r10.s64 = ctx.r30.s64 * 104;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// ld r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 88);
	// rlwinm r9,r10,0,22,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x3F8;
	// rlwinm r9,r9,0,28,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFF0F;
	// clrldi r9,r9,32
	ctx.r9.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// cmpdi cr6,r9,0
	ctx.cr6.compare<int64_t>(ctx.r9.s64, 0, ctx.xer);
	// bne cr6,0x82319940
	if (!ctx.cr6.eq) goto loc_82319940;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82319940:
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

PPC_WEAK_FUNC(sub_823198D0) {
	__imp__sub_823198D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82319958) {
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
	// lis r31,-31834
	ctx.r31.s64 = -2086273024;
	// lis r11,0
	ctx.r11.s64 = 0;
	// rlwinm r30,r3,0,23,21
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFFFFFFFDFF;
	// ori r10,r11,53248
	ctx.r10.u64 = ctx.r11.u64 | 53248;
	// lwz r11,-22204(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22204);
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplw cr6,r30,r9
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x823199a0
	if (ctx.cr6.lt) goto loc_823199A0;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,19224
	ctx.r4.s64 = ctx.r11.s64 + 19224;
	// bl 0x822830e8
	ctx.lr = 0x8231999C;
	sub_822830E8(ctx, base);
	// lwz r11,-22204(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22204);
loc_823199A0:
	// mulli r10,r30,104
	ctx.r10.s64 = ctx.r30.s64 * 104;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// rlwinm r3,r10,24,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0x1;
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

PPC_WEAK_FUNC(sub_82319958) {
	__imp__sub_82319958(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823199C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf40
	ctx.lr = 0x823199D0;
	__savegprlr_14(ctx, base);
	// stfd f29,-176(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -176, ctx.f29.u64);
	// stfd f30,-168(r1)
	PPC_STORE_U64(ctx.r1.u32 + -168, ctx.f30.u64);
	// stfd f31,-160(r1)
	PPC_STORE_U64(ctx.r1.u32 + -160, ctx.f31.u64);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r28,0(r13)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r27,24
	ctx.r27.s64 = 24;
	// lis r10,8
	ctx.r10.s64 = 524288;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lhz r3,126(r7)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r7.u32 + 126);
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// ori r8,r10,10612
	ctx.r8.u64 = ctx.r10.u64 | 10612;
	// lwzx r7,r27,r28
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r28.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// li r14,0
	ctx.r14.s64 = 0;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// lwzx r6,r7,r8
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// lfs f31,5484(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5484);
	ctx.f31.f64 = double(temp.f32);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// fmr f29,f31
	ctx.f29.f64 = ctx.f31.f64;
	// li r23,-1
	ctx.r23.s64 = -1;
	// mr r22,r14
	ctx.r22.u64 = ctx.r14.u64;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82319A34;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8231a024
	if (ctx.cr6.eq) goto loc_8231A024;
	// addi r11,r26,8
	ctx.r11.s64 = ctx.r26.s64 + 8;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r18,20(r30)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// subf r9,r30,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r30.s64;
	// lwz r20,16(r30)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// rlwinm r15,r10,13,31,31
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 13) & 0x1;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 0, ctx.xer);
	// rlwinm r16,r8,27,31,31
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// bne cr6,0x82319a6c
	if (!ctx.cr6.eq) goto loc_82319A6C;
	// li r22,1
	ctx.r22.s64 = 1;
loc_82319A6C:
	// stw r29,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r29.u32);
	// lis r11,0
	ctx.r11.s64 = 0;
	// lwzx r10,r27,r28
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r28.u32);
	// rlwinm r29,r29,0,23,21
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xFFFFFFFFFFFFFDFF;
	// ori r9,r11,53248
	ctx.r9.u64 = ctx.r11.u64 | 53248;
	// lwzx r5,r10,r9
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmplw cr6,r29,r5
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x82319aa0
	if (ctx.cr6.lt) goto loc_82319AA0;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r4,r11,19304
	ctx.r4.s64 = ctx.r11.s64 + 19304;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822830e8
	ctx.lr = 0x82319AA0;
	sub_822830E8(ctx, base);
loc_82319AA0:
	// lis r10,8
	ctx.r10.s64 = 524288;
	// lwzx r11,r27,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r28.u32);
	// lis r9,8
	ctx.r9.s64 = 524288;
	// lwz r17,356(r26)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r26.u32 + 356);
	// ori r8,r10,10564
	ctx.r8.u64 = ctx.r10.u64 | 10564;
	// ori r25,r9,10596
	ctx.r25.u64 = ctx.r9.u64 | 10596;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// lwzx r19,r11,r8
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// beq cr6,0x82319b5c
	if (ctx.cr6.eq) goto loc_82319B5C;
	// mulli r10,r29,104
	ctx.r10.s64 = ctx.r29.s64 * 104;
	// add r24,r10,r11
	ctx.r24.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// stw r24,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r24.u32);
	// lwz r11,64(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 64);
	// stw r11,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r11.u32);
	// bl 0x823197c0
	ctx.lr = 0x82319AE0;
	sub_823197C0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823197c0
	ctx.lr = 0x82319AEC;
	sub_823197C0(ctx, base);
	// subf r10,r3,r31
	ctx.r10.s64 = ctx.r31.s64 - ctx.r3.s64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r31,r9,27,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// bl 0x823198d0
	ctx.lr = 0x82319B00;
	sub_823198D0(ctx, base);
	// mr r14,r3
	ctx.r14.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823198d0
	ctx.lr = 0x82319B0C;
	sub_823198D0(ctx, base);
	// subf r8,r3,r14
	ctx.r8.s64 = ctx.r14.s64 - ctx.r3.s64;
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 0, ctx.xer);
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r11,r7,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// beq cr6,0x82319b40
	if (ctx.cr6.eq) goto loc_82319B40;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x82319b30
	if (ctx.cr6.eq) goto loc_82319B30;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82319b40
	if (!ctx.cr6.eq) goto loc_82319B40;
loc_82319B30:
	// lwzx r11,r27,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r28.u32);
	// lwzx r11,r11,r25
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r25.u32);
	// addi r10,r11,400
	ctx.r10.s64 = ctx.r11.s64 + 400;
	// stw r10,360(r26)
	PPC_STORE_U32(ctx.r26.u32 + 360, ctx.r10.u32);
loc_82319B40:
	// li r14,0
	ctx.r14.s64 = 0;
loc_82319B44:
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// beq cr6,0x82319b70
	if (ctx.cr6.eq) goto loc_82319B70;
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 0, ctx.xer);
	// beq cr6,0x82319b70
	if (ctx.cr6.eq) goto loc_82319B70;
	// stw r14,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r14.u32);
	// b 0x82319be0
	goto loc_82319BE0;
loc_82319B5C:
	// li r11,200
	ctx.r11.s64 = 200;
	// stw r14,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r14.u32);
	// mr r24,r14
	ctx.r24.u64 = ctx.r14.u64;
	// stw r11,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r11.u32);
	// b 0x82319b44
	goto loc_82319B44;
loc_82319B70:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x82319b98
	if (ctx.cr6.eq) goto loc_82319B98;
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x82319bb4
	if (ctx.cr6.gt) goto loc_82319BB4;
	// lfs f0,68(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x82319b98
	if (ctx.cr6.eq) goto loc_82319B98;
	// li r23,120
	ctx.r23.s64 = 120;
	// b 0x82319bb4
	goto loc_82319BB4;
loc_82319B98:
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 0, ctx.xer);
	// beq cr6,0x82319bb0
	if (ctx.cr6.eq) goto loc_82319BB0;
	// lfs f0,68(r18)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r18.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// li r23,250
	ctx.r23.s64 = 250;
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bne cr6,0x82319bb4
	if (!ctx.cr6.eq) goto loc_82319BB4;
loc_82319BB0:
	// li r23,170
	ctx.r23.s64 = 170;
loc_82319BB4:
	// lwzx r11,r27,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r28.u32);
	// lwz r10,360(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 360);
	// lwzx r9,r11,r25
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r25.u32);
	// subf r11,r9,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cmpw cr6,r11,r23
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r23.s32, ctx.xer);
	// ble cr6,0x82319bd0
	if (!ctx.cr6.gt) goto loc_82319BD0;
	// mr r23,r11
	ctx.r23.u64 = ctx.r11.u64;
loc_82319BD0:
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmpw cr6,r11,r23
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r23.s32, ctx.xer);
	// bge cr6,0x82319be0
	if (!ctx.cr6.lt) goto loc_82319BE0;
	// stw r23,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r23.u32);
loc_82319BE0:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x82319d08
	if (ctx.cr6.eq) goto loc_82319D08;
	// lfs f0,68(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x82319d08
	if (ctx.cr6.eq) goto loc_82319D08;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x822f5640
	ctx.lr = 0x82319C00;
	sub_822F5640(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82319d08
	if (ctx.cr6.eq) goto loc_82319D08;
	// rlwinm r31,r20,0,23,21
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 0) & 0xFFFFFFFFFFFFFDFF;
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 0, ctx.xer);
	// beq cr6,0x82319c50
	if (ctx.cr6.eq) goto loc_82319C50;
	// lfs f0,68(r18)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r18.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x82319c50
	if (ctx.cr6.eq) goto loc_82319C50;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x822f5640
	ctx.lr = 0x82319C30;
	sub_822F5640(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82319c50
	if (ctx.cr6.eq) goto loc_82319C50;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x822f4038
	ctx.lr = 0x82319C48;
	sub_822F4038(ctx, base);
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f1.f64;
	// b 0x82319d08
	goto loc_82319D08;
loc_82319C50:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x822f5528
	ctx.lr = 0x82319C5C;
	sub_822F5528(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82319c7c
	if (ctx.cr6.eq) goto loc_82319C7C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x822f3f40
	ctx.lr = 0x82319C74;
	sub_822F3F40(ctx, base);
	// addi r11,r3,200
	ctx.r11.s64 = ctx.r3.s64 + 200;
	// b 0x82319c80
	goto loc_82319C80;
loc_82319C7C:
	// li r11,1000
	ctx.r11.s64 = 1000;
loc_82319C80:
	// lwzx r10,r27,r28
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r28.u32);
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// lwz r8,4(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// std r9,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r9.u64);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// extsw r6,r8
	ctx.r6.s64 = ctx.r8.s32;
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lwzx r5,r10,r25
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r25.u32);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// std r6,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r6.u64);
	// lfd f11,96(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// divw r4,r5,r11
	ctx.r4.s32 = ctx.r5.s32 / ctx.r11.s32;
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// mullw r3,r4,r11
	ctx.r3.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r11.s32);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// lfs f0,14524(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 14524);
	ctx.f0.f64 = double(temp.f32);
	// subf r11,r3,r5
	ctx.r11.s64 = ctx.r5.s64 - ctx.r3.s64;
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// lfd f8,96(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// frsp f6,f7
	ctx.f6.f64 = double(float(ctx.f7.f64));
	// fdivs f5,f6,f12
	ctx.f5.f64 = double(float(ctx.f6.f64 / ctx.f12.f64));
	// fmadds f4,f9,f0,f5
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f0.f64 + ctx.f5.f64));
	// fctiwz f3,f4
	ctx.f3.s64 = (ctx.f4.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f4.f64));
	// stfd f3,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f3.u64);
	// lwz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// std r8,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r8.u64);
	// lfd f2,96(r1)
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f1,f2
	ctx.f1.f64 = double(ctx.f2.s64);
	// frsp f0,f1
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fsubs f29,f4,f0
	ctx.f29.f64 = double(float(ctx.f4.f64 - ctx.f0.f64));
loc_82319D08:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 0, ctx.xer);
	// lfs f30,5804(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5804);
	ctx.f30.f64 = double(temp.f32);
	// beq cr6,0x82319d40
	if (ctx.cr6.eq) goto loc_82319D40;
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// rlwinm r4,r20,0,23,21
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 0) & 0xFFFFFFFFFFFFFDFF;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// lfd f0,96(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f1,f12,f30
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f30.f64));
	// bl 0x822f4c70
	ctx.lr = 0x82319D40;
	sub_822F4C70(ctx, base);
loc_82319D40:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x82319f74
	if (ctx.cr6.eq) goto loc_82319F74;
	// lwz r11,80(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 80);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82319e1c
	if (ctx.cr6.eq) goto loc_82319E1C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x822f5640
	ctx.lr = 0x82319D64;
	sub_822F5640(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82319d84
	if (ctx.cr6.eq) goto loc_82319D84;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// addi r4,r11,19272
	ctx.r4.s64 = ctx.r11.s64 + 19272;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822830e8
	ctx.lr = 0x82319D84;
	sub_822830E8(ctx, base);
loc_82319D84:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// cmpwi cr6,r15,0
	ctx.cr6.compare<int32_t>(ctx.r15.s32, 0, ctx.xer);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// addi r11,r11,12168
	ctx.r11.s64 = ctx.r11.s64 + 12168;
	// beq cr6,0x82319de8
	if (ctx.cr6.eq) goto loc_82319DE8;
	// lwz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lis r9,8
	ctx.r9.s64 = 524288;
	// lwzx r7,r27,r28
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r28.u32);
	// lfs f31,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f31.f64 = double(temp.f32);
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// stw r14,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r14.u32);
	// ori r31,r9,10574
	ctx.r31.u64 = ctx.r9.u64 | 10574;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// std r8,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r8.u64);
	// lfd f0,96(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// li r10,0
	ctx.r10.s64 = 0;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// li r9,0
	ctx.r9.s64 = 0;
	// lhzx r5,r7,r31
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r7.u32 + ctx.r31.u32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// fmuls f2,f12,f30
	ctx.f2.f64 = double(float(ctx.f12.f64 * ctx.f30.f64));
	// bl 0x822f7700
	ctx.lr = 0x82319DE4;
	sub_822F7700(ctx, base);
	// b 0x82319ebc
	goto loc_82319EBC;
loc_82319DE8:
	// lis r7,8
	ctx.r7.s64 = 524288;
	// lwzx r8,r27,r28
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r28.u32);
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// lfs f31,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f31.f64 = double(temp.f32);
	// ori r31,r7,10574
	ctx.r31.u64 = ctx.r7.u64 | 10574;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// li r10,0
	ctx.r10.s64 = 0;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// li r9,0
	ctx.r9.s64 = 0;
	// lhzx r5,r8,r31
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r8.u32 + ctx.r31.u32);
	// bl 0x822f8228
	ctx.lr = 0x82319E14;
	sub_822F8228(ctx, base);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// b 0x82319eb0
	goto loc_82319EB0;
loc_82319E1C:
	// lfs f0,68(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x82319e40
	if (ctx.cr6.eq) goto loc_82319E40;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x822f4098
	ctx.lr = 0x82319E34;
	sub_822F4098(ctx, base);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// li r26,1
	ctx.r26.s64 = 1;
	// beq cr6,0x82319e44
	if (ctx.cr6.eq) goto loc_82319E44;
loc_82319E40:
	// mr r26,r14
	ctx.r26.u64 = ctx.r14.u64;
loc_82319E44:
	// lwz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r9,8
	ctx.r9.s64 = 524288;
	// lwzx r8,r27,r28
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r28.u32);
	// extsw r7,r10
	ctx.r7.s64 = ctx.r10.s32;
	// lwz r10,96(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 96);
	// addi r11,r11,12168
	ctx.r11.s64 = ctx.r11.s64 + 12168;
	// std r7,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r7.u64);
	// ori r31,r9,10574
	ctx.r31.u64 = ctx.r9.u64 | 10574;
	// cntlzw r6,r16
	ctx.r6.u64 = ctx.r16.u32 == 0 ? 32 : __builtin_clz(ctx.r16.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lfs f31,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f31.f64 = double(temp.f32);
	// rlwinm r11,r6,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// lhzx r5,r8,r31
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r8.u32 + ctx.r31.u32);
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// lfd f0,96(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f2,f12,f30
	ctx.f2.f64 = double(float(ctx.f12.f64 * ctx.f30.f64));
	// bl 0x822f7700
	ctx.lr = 0x82319EA4;
	sub_822F7700(ctx, base);
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x82319ebc
	if (ctx.cr6.eq) goto loc_82319EBC;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f29.f64;
loc_82319EB0:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x822f5540
	ctx.lr = 0x82319EBC;
	sub_822F5540(ctx, base);
loc_82319EBC:
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 0, ctx.xer);
	// bne cr6,0x8231a024
	if (!ctx.cr6.eq) goto loc_8231A024;
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lis r8,8
	ctx.r8.s64 = 524288;
	// lwzx r7,r27,r28
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r28.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// extsw r6,r11
	ctx.r6.s64 = ctx.r11.s32;
	// lwz r10,96(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 96);
	// ori r4,r8,10568
	ctx.r4.u64 = ctx.r8.u64 | 10568;
	// stw r14,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r14.u32);
	// std r6,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r6.u64);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lhzx r5,r7,r31
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r7.u32 + ctx.r31.u32);
	// lhzx r4,r7,r4
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r7.u32 + ctx.r4.u32);
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// fmuls f2,f12,f30
	ctx.f2.f64 = double(float(ctx.f12.f64 * ctx.f30.f64));
	// bl 0x822f7700
	ctx.lr = 0x82319F10;
	sub_822F7700(ctx, base);
	// lwz r7,24(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lis r3,8
	ctx.r3.s64 = 524288;
	// lwzx r6,r27,r28
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r28.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// extsw r5,r7
	ctx.r5.s64 = ctx.r7.s32;
	// std r5,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r5.u64);
	// lfd f11,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// ori r8,r3,10570
	ctx.r8.u64 = ctx.r3.u64 | 10570;
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// lwz r10,96(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 96);
	// lfs f1,11804(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11804);
	ctx.f1.f64 = double(temp.f32);
	// lhzx r5,r6,r31
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r6.u32 + ctx.r31.u32);
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// stw r14,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r14.u32);
	// lhzx r4,r6,r8
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r6.u32 + ctx.r8.u32);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// fmuls f2,f9,f30
	ctx.f2.f64 = double(float(ctx.f9.f64 * ctx.f30.f64));
	// bl 0x822f7700
	ctx.lr = 0x82319F60;
	sub_822F7700(ctx, base);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
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
loc_82319F74:
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 0, ctx.xer);
	// bne cr6,0x8231a024
	if (!ctx.cr6.eq) goto loc_8231A024;
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lis r10,8
	ctx.r10.s64 = 524288;
	// lis r9,8
	ctx.r9.s64 = 524288;
	// lwzx r8,r27,r28
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r28.u32);
	// extsw r7,r11
	ctx.r7.s64 = ctx.r11.s32;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// stw r14,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r14.u32);
	// std r7,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r7.u64);
	// lfd f0,96(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// ori r31,r10,10574
	ctx.r31.u64 = ctx.r10.u64 | 10574;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// ori r4,r9,10568
	ctx.r4.u64 = ctx.r9.u64 | 10568;
	// lfs f31,12168(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 12168);
	ctx.f31.f64 = double(temp.f32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// lhzx r5,r8,r31
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r8.u32 + ctx.r31.u32);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// lhzx r4,r8,r4
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r8.u32 + ctx.r4.u32);
	// fmuls f2,f12,f30
	ctx.f2.f64 = double(float(ctx.f12.f64 * ctx.f30.f64));
	// bl 0x822f7700
	ctx.lr = 0x82319FD8;
	sub_822F7700(ctx, base);
	// lwz r8,24(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lis r3,8
	ctx.r3.s64 = 524288;
	// lwzx r7,r27,r28
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r28.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// extsw r6,r8
	ctx.r6.s64 = ctx.r8.s32;
	// std r6,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r6.u64);
	// lfd f11,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// ori r11,r3,10570
	ctx.r11.u64 = ctx.r3.u64 | 10570;
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// lhzx r5,r7,r31
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r7.u32 + ctx.r31.u32);
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// stw r14,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r14.u32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// lhzx r4,r7,r11
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r7.u32 + ctx.r11.u32);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// fmuls f2,f9,f30
	ctx.f2.f64 = double(float(ctx.f9.f64 * ctx.f30.f64));
	// bl 0x822f7700
	ctx.lr = 0x8231A024;
	sub_822F7700(ctx, base);
loc_8231A024:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
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

PPC_WEAK_FUNC(sub_823199C8) {
	__imp__sub_823199C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8231A038) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lbz r10,29088(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 29088);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8231a050
	if (!ctx.cr6.eq) goto loc_8231A050;
	// fmr f1,f2
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f2.f64;
	// blr 
	return;
loc_8231A050:
	// lis r11,-31834
	ctx.r11.s64 = -2086273024;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,-6412(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6412);
	// lfs f0,12168(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fmuls f11,f13,f2
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f2.f64));
	// fmadds f1,f12,f1,f11
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f1.f64 + ctx.f11.f64));
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8231A038) {
	__imp__sub_8231A038(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8231A074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8231A074) {
	__imp__sub_8231A074(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8231A078) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x8231A080;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r27,20(r5)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8231a0b0
	if (ctx.cr6.eq) goto loc_8231A0B0;
	// lwz r11,80(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 80);
	// li r26,1
	ctx.r26.s64 = 1;
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8231a0b4
	if (!ctx.cr6.eq) goto loc_8231A0B4;
loc_8231A0B0:
	// li r26,0
	ctx.r26.s64 = 0;
loc_8231A0B4:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8231a0d0
	if (ctx.cr6.eq) goto loc_8231A0D0;
	// lwz r11,80(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 80);
	// li r28,1
	ctx.r28.s64 = 1;
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8231a0d4
	if (!ctx.cr6.eq) goto loc_8231A0D4;
loc_8231A0D0:
	// li r28,0
	ctx.r28.s64 = 0;
loc_8231A0D4:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r25,356(r4)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r4.u32 + 356);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x8231a0f8
	if (!ctx.cr6.eq) goto loc_8231A0F8;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x8231a108
	if (!ctx.cr6.eq) goto loc_8231A108;
	// rlwinm r11,r29,0,23,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xFFFFFFFFFFFFFDFF;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8231a108
	if (ctx.cr6.eq) goto loc_8231A108;
loc_8231A0F8:
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x823199c8
	ctx.lr = 0x8231A108;
	sub_823199C8(ctx, base);
loc_8231A108:
	// rlwinm r11,r29,0,23,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xFFFFFFFFFFFFFDFF;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8231a370
	if (ctx.cr6.eq) goto loc_8231A370;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8231a314
	if (ctx.cr6.eq) goto loc_8231A314;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,68(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 68);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f12,f11
	ctx.cr6.compare(ctx.f12.f64, ctx.f11.f64);
	// beq cr6,0x8231a314
	if (ctx.cr6.eq) goto loc_8231A314;
	// lwz r9,44(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8231a314
	if (ctx.cr6.eq) goto loc_8231A314;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne cr6,0x8231a314
	if (!ctx.cr6.eq) goto loc_8231A314;
	// lwz r8,0(r13)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r7,24
	ctx.r7.s64 = 24;
	// lis r11,8
	ctx.r11.s64 = 524288;
	// ori r11,r11,10600
	ctx.r11.u64 = ctx.r11.u64 | 10600;
	// lwzx r10,r7,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x8231a354
	if (ctx.cr6.eq) goto loc_8231A354;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x8231a180
	if (ctx.cr6.eq) goto loc_8231A180;
	// lfs f13,36(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f10,f0,f13
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fabs f13,f10
	ctx.f13.u64 = ctx.f10.u64 & ~0x8000000000000000;
	// b 0x8231a1b4
	goto loc_8231A1B4;
loc_8231A180:
	// lfs f13,32(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,32(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f10,f0,f13
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f9,36(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f9,f8
	ctx.f7.f64 = double(float(ctx.f9.f64 - ctx.f8.f64));
	// lfs f6,28(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f4,f6,f5
	ctx.f4.f64 = double(float(ctx.f6.f64 - ctx.f5.f64));
	// fmuls f3,f10,f10
	ctx.f3.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// fmadds f2,f7,f7,f3
	ctx.f2.f64 = double(float(ctx.f7.f64 * ctx.f7.f64 + ctx.f3.f64));
	// fmadds f1,f4,f4,f2
	ctx.f1.f64 = double(float(ctx.f4.f64 * ctx.f4.f64 + ctx.f2.f64));
	// fsqrts f13,f1
	ctx.f13.f64 = double(float(sqrt(ctx.f1.f64)));
loc_8231A1B4:
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// extsw r6,r10
	ctx.r6.s64 = ctx.r10.s32;
	// lis r5,-32166
	ctx.r5.s64 = -2108030976;
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f0
	ctx.f10.f64 = double(ctx.f0.s64);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// lfs f0,5804(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5804);
	ctx.f0.f64 = double(temp.f32);
	// lbz r4,29088(r5)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r5.u32 + 29088);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// fmuls f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fdivs f7,f13,f8
	ctx.f7.f64 = double(float(ctx.f13.f64 / ctx.f8.f64));
	// fdivs f0,f7,f12
	ctx.f0.f64 = double(float(ctx.f7.f64 / ctx.f12.f64));
	// beq cr6,0x8231a214
	if (ctx.cr6.eq) goto loc_8231A214;
	// lis r10,-31834
	ctx.r10.s64 = -2086273024;
	// lfs f12,40(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f12.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r10,-6412(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -6412);
	// lfs f13,12168(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12168);
	ctx.f13.f64 = double(temp.f32);
	// lfs f10,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f13,f10
	ctx.f9.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// fmuls f8,f10,f0
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmadds f0,f9,f12,f8
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f12.f64 + ctx.f8.f64));
loc_8231A214:
	// stfs f0,40(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// lwzx r10,r7,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// stw r9,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r9.u32);
	// lfs f0,28(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,28(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// lfs f13,32(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,32(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// lfs f12,36(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,36(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// lfs f13,6020(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 6020);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,40(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x8231a270
	if (!ctx.cr6.lt) goto loc_8231A270;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,11804(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11804);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x8231a30c
	if (!ctx.cr6.lt) goto loc_8231A30C;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x8231a30c
	if (ctx.cr6.eq) goto loc_8231A30C;
	// stfs f11,40(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// b 0x8231a354
	goto loc_8231A354;
loc_8231A270:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f11,5488(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5488);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// ble cr6,0x8231a354
	if (!ctx.cr6.gt) goto loc_8231A354;
	// lwz r11,80(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 80);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8231a2fc
	if (!ctx.cr6.eq) goto loc_8231A2FC;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,68(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 68);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,-21308(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -21308);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// ble cr6,0x8231a2ac
	if (!ctx.cr6.gt) goto loc_8231A2AC;
	// stfs f11,40(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// b 0x8231a354
	goto loc_8231A354;
loc_8231A2AC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,5996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5996);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bge cr6,0x8231a2d4
	if (!ctx.cr6.lt) goto loc_8231A2D4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,7544(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7544);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x8231a354
	if (!ctx.cr6.gt) goto loc_8231A354;
	// stfs f13,40(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// b 0x8231a354
	goto loc_8231A354;
loc_8231A2D4:
	// fsubs f11,f13,f12
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,19352(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 19352);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,7544(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 7544);
	ctx.f12.f64 = double(temp.f32);
	// fnmsubs f13,f11,f13,f12
	ctx.f13.f64 = double(float(-(ctx.f11.f64 * ctx.f13.f64 - ctx.f12.f64)));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x8231a354
	if (!ctx.cr6.gt) goto loc_8231A354;
	// stfs f13,40(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// b 0x8231a354
	goto loc_8231A354;
loc_8231A2FC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,7540(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7540);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x8231a354
	if (!ctx.cr6.gt) goto loc_8231A354;
loc_8231A30C:
	// stfs f13,40(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// b 0x8231a354
	goto loc_8231A354;
loc_8231A314:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// lis r9,8
	ctx.r9.s64 = 524288;
	// li r8,24
	ctx.r8.s64 = 24;
	// ori r7,r9,10600
	ctx.r7.u64 = ctx.r9.u64 | 10600;
	// lfs f0,12168(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,40(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// lwzx r6,r8,r10
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// lwzx r5,r6,r7
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// stw r5,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r5.u32);
	// lfs f0,28(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,28(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// lfs f13,32(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,32(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// lfs f12,36(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,36(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
loc_8231A354:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8231a370
	if (ctx.cr6.eq) goto loc_8231A370;
	// rlwinm r4,r11,0,23,21
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFDFF;
	// lfs f1,40(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f1.f64 = double(temp.f32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x822f55f8
	ctx.lr = 0x8231A370;
	sub_822F55F8(ctx, base);
loc_8231A370:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8231A078) {
	__imp__sub_8231A078(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8231A378) {
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
	// lwz r11,16(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8231a3c4
	if (ctx.cr6.eq) goto loc_8231A3C4;
	// rlwinm r4,r11,0,23,21
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFDFF;
	// bl 0x822f4098
	ctx.lr = 0x8231A3A0;
	sub_822F4098(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bne cr6,0x8231a3c4
	if (!ctx.cr6.eq) goto loc_8231A3C4;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,150
	ctx.r10.s64 = 150;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
loc_8231A3C4:
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

PPC_WEAK_FUNC(sub_8231A378) {
	__imp__sub_8231A378(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8231A3D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8231A3E0;
	__savegprlr_29(ctx, base);
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x823de018
	ctx.lr = 0x8231A3E8;
	__savefpr_24(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// mr r31,r8
	ctx.r31.u64 = ctx.r8.u64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f1.f64;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// fmr f31,f2
	ctx.f31.f64 = ctx.f2.f64;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// fmr f25,f3
	ctx.f25.f64 = ctx.f3.f64;
	// fmr f26,f4
	ctx.f26.f64 = ctx.f4.f64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// li r29,1
	ctx.r29.s64 = 1;
	// lfs f27,2412(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2412);
	ctx.f27.f64 = double(temp.f32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lfs f30,2416(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2416);
	ctx.f30.f64 = double(temp.f32);
	// lfs f28,2420(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2420);
	ctx.f28.f64 = double(temp.f32);
	// bne cr6,0x8231a474
	if (!ctx.cr6.eq) goto loc_8231A474;
	// lfs f0,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f0,f1
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f1.f64));
	// fmuls f24,f13,f28
	ctx.f24.f64 = double(float(ctx.f13.f64 * ctx.f28.f64));
	// fadds f1,f24,f30
	ctx.f1.f64 = double(float(ctx.f24.f64 + ctx.f30.f64));
	// bl 0x823dde20
	ctx.lr = 0x8231A440;
	sub_823DDE20(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// fsubs f11,f24,f12
	ctx.f11.f64 = double(float(ctx.f24.f64 - ctx.f12.f64));
	// fmuls f0,f11,f27
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f27.f64));
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bgt cr6,0x8231a460
	if (ctx.cr6.gt) goto loc_8231A460;
	// fneg f13,f31
	ctx.f13.u64 = ctx.f31.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x8231a468
	if (!ctx.cr6.lt) goto loc_8231A468;
loc_8231A460:
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// b 0x8231a474
	goto loc_8231A474;
loc_8231A468:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8231a5c0
	if (ctx.cr6.eq) goto loc_8231A5C0;
loc_8231A474:
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f29,f0
	ctx.f13.f64 = double(float(ctx.f29.f64 - ctx.f0.f64));
	// fmuls f31,f13,f28
	ctx.f31.f64 = double(float(ctx.f13.f64 * ctx.f28.f64));
	// fadds f1,f31,f30
	ctx.f1.f64 = double(float(ctx.f31.f64 + ctx.f30.f64));
	// bl 0x823dde20
	ctx.lr = 0x8231A488;
	sub_823DDE20(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f13,-23144(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -23144);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f11,f31,f12
	ctx.f11.f64 = double(float(ctx.f31.f64 - ctx.f12.f64));
	// fmuls f0,f11,f27
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f27.f64));
	// fabs f10,f0
	ctx.f10.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fmuls f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fcmpu cr6,f13,f30
	ctx.cr6.compare(ctx.f13.f64, ctx.f30.f64);
	// bge cr6,0x8231a4b0
	if (!ctx.cr6.lt) goto loc_8231A4B0;
	// fmr f13,f30
	ctx.f13.f64 = ctx.f30.f64;
loc_8231A4B0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// blt cr6,0x8231a50c
	if (ctx.cr6.lt) goto loc_8231A50C;
	// lwz r11,0(r13)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,24
	ctx.r10.s64 = 24;
	// lis r9,8
	ctx.r9.s64 = 524288;
	// ori r8,r9,10604
	ctx.r8.u64 = ctx.r9.u64 | 10604;
	// lwzx r7,r10,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwzx r6,r7,r8
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// extsw r5,r6
	ctx.r5.s64 = ctx.r6.s32;
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fmuls f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fmuls f13,f9,f26
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f26.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x8231a564
	if (ctx.cr6.lt) goto loc_8231A564;
	// li r11,0
	ctx.r11.s64 = 0;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x8231a568
	goto loc_8231A568;
loc_8231A50C:
	// fcmpu cr6,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x8231a578
	if (!ctx.cr6.lt) goto loc_8231A578;
	// lwz r11,0(r13)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,24
	ctx.r10.s64 = 24;
	// lis r9,8
	ctx.r9.s64 = 524288;
	// ori r8,r9,10604
	ctx.r8.u64 = ctx.r9.u64 | 10604;
	// lwzx r7,r10,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwzx r6,r7,r8
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// extsw r5,r6
	ctx.r5.s64 = ctx.r6.s32;
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fmuls f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fmuls f8,f9,f26
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f26.f64));
	// fneg f13,f8
	ctx.f13.u64 = ctx.f8.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x8231a564
	if (ctx.cr6.gt) goto loc_8231A564;
	// li r11,0
	ctx.r11.s64 = 0;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x8231a568
	goto loc_8231A568;
loc_8231A564:
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
loc_8231A568:
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fadds f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// bl 0x822d77c0
	ctx.lr = 0x8231A574;
	sub_822D77C0(ctx, base);
	// stfs f1,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
loc_8231A578:
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f29,f0
	ctx.f13.f64 = double(float(ctx.f29.f64 - ctx.f0.f64));
	// fmuls f31,f13,f28
	ctx.f31.f64 = double(float(ctx.f13.f64 * ctx.f28.f64));
	// fadds f1,f31,f30
	ctx.f1.f64 = double(float(ctx.f31.f64 + ctx.f30.f64));
	// bl 0x823dde20
	ctx.lr = 0x8231A58C;
	sub_823DDE20(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// fsubs f11,f31,f12
	ctx.f11.f64 = double(float(ctx.f31.f64 - ctx.f12.f64));
	// fmuls f0,f11,f27
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f27.f64));
	// fcmpu cr6,f0,f25
	ctx.cr6.compare(ctx.f0.f64, ctx.f25.f64);
	// ble cr6,0x8231a5a8
	if (!ctx.cr6.gt) goto loc_8231A5A8;
	// fsubs f1,f29,f25
	ctx.f1.f64 = double(float(ctx.f29.f64 - ctx.f25.f64));
	// b 0x8231a5b8
	goto loc_8231A5B8;
loc_8231A5A8:
	// fneg f13,f25
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = ctx.f25.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x8231a5c0
	if (!ctx.cr6.lt) goto loc_8231A5C0;
	// fadds f1,f29,f25
	ctx.f1.f64 = double(float(ctx.f29.f64 + ctx.f25.f64));
loc_8231A5B8:
	// bl 0x822d77c0
	ctx.lr = 0x8231A5BC;
	sub_822D77C0(ctx, base);
	// stfs f1,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
loc_8231A5C0:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x823de064
	ctx.lr = 0x8231A5CC;
	__restfpr_24(ctx, base);
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8231A3D8) {
	__imp__sub_8231A3D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8231A5D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x8231A5D8;
	__savegprlr_27(ctx, base);
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x823de01c
	ctx.lr = 0x8231A5E0;
	__savefpr_25(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lfs f1,108(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 108);
	ctx.f1.f64 = double(temp.f32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x822e97a8
	ctx.lr = 0x8231A5F4;
	sub_822E97A8(ctx, base);
	// lfs f1,116(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	ctx.f1.f64 = double(temp.f32);
	// lfs f30,104(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	ctx.f30.f64 = double(temp.f32);
	// lfs f26,112(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	ctx.f26.f64 = double(temp.f32);
	// bl 0x822d77c0
	ctx.lr = 0x8231A604;
	sub_822D77C0(ctx, base);
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// rlwinm r10,r11,0,20,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC00;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8231a624
	if (ctx.cr6.eq) goto loc_8231A624;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// b 0x8231a680
	goto loc_8231A680;
loc_8231A624:
	// lwz r10,236(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// rlwinm r9,r10,0,12,13
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xC0000;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8231a640
	if (ctx.cr6.eq) goto loc_8231A640;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// b 0x8231a680
	goto loc_8231A680;
loc_8231A640:
	// rlwinm r11,r11,0,15,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8231a658
	if (ctx.cr6.eq) goto loc_8231A658;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// b 0x8231a680
	goto loc_8231A680;
loc_8231A658:
	// rlwinm r11,r10,0,29,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x6;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8231a670
	if (!ctx.cr6.eq) goto loc_8231A670;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// b 0x8231a680
	goto loc_8231A680;
loc_8231A670:
	// lwz r11,252(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8231a688
	if (ctx.cr6.eq) goto loc_8231A688;
	// li r11,1
	ctx.r11.s64 = 1;
loc_8231A680:
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
loc_8231A688:
	// fadds f27,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.f27.f64 = double(float(ctx.f31.f64 + ctx.f30.f64));
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// rlwinm r8,r11,0,14,14
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// lfs f25,6028(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6028);
	ctx.f25.f64 = double(temp.f32);
	// lfs f28,5484(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5484);
	ctx.f28.f64 = double(temp.f32);
	// fmr f29,f27
	ctx.f29.f64 = ctx.f27.f64;
	// beq cr6,0x8231a6c0
	if (ctx.cr6.eq) goto loc_8231A6C0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f29,f31
	ctx.f29.f64 = ctx.f31.f64;
	// lfs f3,5188(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5188);
	ctx.f3.f64 = double(temp.f32);
	// b 0x8231a758
	goto loc_8231A758;
loc_8231A6C0:
	// lwz r10,236(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// rlwinm r9,r10,0,12,13
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xC0000;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8231a6dc
	if (ctx.cr6.eq) goto loc_8231A6DC;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f29.f64;
	// fmr f3,f28
	ctx.f3.f64 = ctx.f28.f64;
	// b 0x8231a75c
	goto loc_8231A75C;
loc_8231A6DC:
	// rlwinm r10,r11,0,15,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8231a6f8
	if (ctx.cr6.eq) goto loc_8231A6F8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f29,f31
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f31.f64;
	// lfs f3,5188(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5188);
	ctx.f3.f64 = double(temp.f32);
	// b 0x8231a758
	goto loc_8231A758;
loc_8231A6F8:
	// rlwinm r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8231a710
	if (ctx.cr6.eq) goto loc_8231A710;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f3,5188(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5188);
	ctx.f3.f64 = double(temp.f32);
	// b 0x8231a758
	goto loc_8231A758;
loc_8231A710:
	// rlwinm r10,r11,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8231a754
	if (!ctx.cr6.eq) goto loc_8231A754;
	// rlwinm r11,r11,0,13,13
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8231a738
	if (ctx.cr6.eq) goto loc_8231A738;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// lfs f3,5188(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5188);
	ctx.f3.f64 = double(temp.f32);
	// b 0x8231a75c
	goto loc_8231A75C;
loc_8231A738:
	// lis r11,-31834
	ctx.r11.s64 = -2086273024;
	// lwz r11,-16924(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16924);
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmadds f1,f0,f30,f31
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f30.f64 + ctx.f31.f64));
	// lfs f3,5188(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5188);
	ctx.f3.f64 = double(temp.f32);
	// b 0x8231a75c
	goto loc_8231A75C;
loc_8231A754:
	// fmr f3,f25
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f25.f64;
loc_8231A758:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
loc_8231A75C:
	// lis r29,-31834
	ctx.r29.s64 = -2086273024;
	// fmr f2,f28
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f28.f64;
	// addi r28,r31,56
	ctx.r28.s64 = ctx.r31.s64 + 56;
	// addi r8,r31,60
	ctx.r8.s64 = ctx.r31.s64 + 60;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// lwz r11,-16896(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -16896);
	// lfs f4,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f4.f64 = double(temp.f32);
	// bl 0x8231a3d8
	ctx.lr = 0x8231A77C;
	sub_8231A3D8(ctx, base);
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// rlwinm r10,r11,0,14,14
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8231a7a0
	if (ctx.cr6.eq) goto loc_8231A7A0;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// fmr f2,f28
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f28.f64;
	// addi r8,r31,12
	ctx.r8.s64 = ctx.r31.s64 + 12;
	// lfs f3,-21308(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -21308);
	ctx.f3.f64 = double(temp.f32);
	// b 0x8231a83c
	goto loc_8231A83C;
loc_8231A7A0:
	// rlwinm r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8231a7c0
	if (ctx.cr6.eq) goto loc_8231A7C0;
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f31,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// addi r30,r31,8
	ctx.r30.s64 = ctx.r31.s64 + 8;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// b 0x8231a854
	goto loc_8231A854;
loc_8231A7C0:
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// li r9,24
	ctx.r9.s64 = 24;
	// lwz r8,0(r13)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// rlwinm r7,r11,0,23,21
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFDFF;
	// mulli r10,r7,104
	ctx.r10.s64 = ctx.r7.s64 * 104;
	// lwzx r11,r9,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r8,r31,12
	ctx.r8.s64 = ctx.r31.s64 + 12;
	// lwz r5,80(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 80);
	// rlwinm r4,r5,0,26,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x30;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x8231a80c
	if (ctx.cr6.eq) goto loc_8231A80C;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// fmr f2,f28
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f28.f64;
	// li r11,0
	ctx.r11.s64 = 0;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// lfs f3,-21308(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -21308);
	ctx.f3.f64 = double(temp.f32);
	// b 0x8231a840
	goto loc_8231A840;
loc_8231A80C:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8231a828
	if (ctx.cr6.eq) goto loc_8231A828;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// fmr f2,f28
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f28.f64;
	// lfs f3,-21308(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -21308);
	ctx.f3.f64 = double(temp.f32);
	// b 0x8231a83c
	goto loc_8231A83C;
loc_8231A828:
	// lis r10,-31834
	ctx.r10.s64 = -2086273024;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lwz r10,-6468(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -6468);
	// lfs f3,-21308(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -21308);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f2.f64 = double(temp.f32);
loc_8231A83C:
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f29.f64;
loc_8231A840:
	// lwz r11,-16896(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -16896);
	// addi r30,r31,8
	ctx.r30.s64 = ctx.r31.s64 + 8;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// lfs f4,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f4.f64 = double(temp.f32);
	// bl 0x8231a3d8
	ctx.lr = 0x8231A854;
	sub_8231A3D8(ctx, base);
loc_8231A854:
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// rlwinm r10,r11,0,20,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC00;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8231a870
	if (ctx.cr6.eq) goto loc_8231A870;
	// stfs f31,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
	// stfs f31,0(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// b 0x8231a888
	goto loc_8231A888;
loc_8231A870:
	// lwz r11,236(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// rlwinm r10,r11,0,12,13
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC0000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8231a888
	if (ctx.cr6.eq) goto loc_8231A888;
	// stfs f27,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
	// stfs f27,0(r30)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
loc_8231A888:
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// rlwinm r10,r11,0,14,14
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8231a8c0
	if (!ctx.cr6.eq) goto loc_8231A8C0;
	// rlwinm r10,r11,0,20,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC00;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8231a8c0
	if (!ctx.cr6.eq) goto loc_8231A8C0;
	// lwz r10,236(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// rlwinm r9,r10,0,12,13
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xC0000;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8231a8c0
	if (!ctx.cr6.eq) goto loc_8231A8C0;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8231a8c8
	if (!ctx.cr6.eq) goto loc_8231A8C8;
loc_8231A8C0:
	// fmr f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f28.f64;
	// b 0x8231a900
	goto loc_8231A900;
loc_8231A8C8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,5812(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5812);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f26,f0
	ctx.cr6.compare(ctx.f26.f64, ctx.f0.f64);
	// ble cr6,0x8231a8f4
	if (!ctx.cr6.gt) goto loc_8231A8F4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,2412(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2412);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f26,f0
	ctx.f13.f64 = double(float(ctx.f26.f64 - ctx.f0.f64));
	// lfs f0,5488(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5488);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// b 0x8231a900
	goto loc_8231A900;
loc_8231A8F4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,5488(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5488);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f26,f0
	ctx.f1.f64 = double(float(ctx.f26.f64 * ctx.f0.f64));
loc_8231A900:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f3,f25
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f25.f64;
	// addi r8,r31,68
	ctx.r8.s64 = ctx.r31.s64 + 68;
	// fmr f2,f28
	ctx.f2.f64 = ctx.f28.f64;
	// addi r7,r31,64
	ctx.r7.s64 = ctx.r31.s64 + 64;
	// lfs f4,8116(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8116);
	ctx.f4.f64 = double(temp.f32);
	// bl 0x8231a3d8
	ctx.lr = 0x8231A91C;
	sub_8231A3D8(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x823de068
	ctx.lr = 0x8231A928;
	__restfpr_25(ctx, base);
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8231A5D0) {
	__imp__sub_8231A5D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8231A92C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8231A92C) {
	__imp__sub_8231A92C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8231A930) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf68
	ctx.lr = 0x8231A938;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lhz r3,124(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 124);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82332af8
	ctx.lr = 0x8231A94C;
	sub_82332AF8(ctx, base);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r10,24
	ctx.r10.s64 = 24;
	// lwz r11,0(r13)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// lis r8,8
	ctx.r8.s64 = 524288;
	// rlwinm r5,r9,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// ori r6,r8,10832
	ctx.r6.u64 = ctx.r8.u64 | 10832;
	// add r7,r9,r5
	ctx.r7.u64 = ctx.r9.u64 + ctx.r5.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// rlwinm r9,r7,7,0,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 7) & 0xFFFFFF80;
	// lwzx r5,r10,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lis r28,8
	ctx.r28.s64 = 524288;
	// add r7,r9,r5
	ctx.r7.u64 = ctx.r9.u64 + ctx.r5.u64;
	// lwz r5,40(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// lis r29,8
	ctx.r29.s64 = 524288;
	// stwx r8,r7,r6
	PPC_STORE_U32(ctx.r7.u32 + ctx.r6.u32, ctx.r8.u32);
	// ori r7,r28,10840
	ctx.r7.u64 = ctx.r28.u64 | 10840;
	// ori r29,r29,10836
	ctx.r29.u64 = ctx.r29.u64 | 10836;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// srawi r7,r5,5
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1F) != 0);
	ctx.r7.s64 = ctx.r5.s32 >> 5;
	// clrlwi r5,r5,27
	ctx.r5.u64 = ctx.r5.u32 & 0x1F;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// slw r25,r4,r5
	ctx.r25.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r5.u8 & 0x3F));
	// lwzx r5,r10,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r7,8
	ctx.r7.s64 = 524288;
	// add r5,r9,r5
	ctx.r5.u64 = ctx.r9.u64 + ctx.r5.u64;
	// ori r24,r7,10844
	ctx.r24.u64 = ctx.r7.u64 | 10844;
	// stwx r8,r5,r29
	PPC_STORE_U32(ctx.r5.u32 + ctx.r29.u32, ctx.r8.u32);
	// lwzx r7,r10,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// add r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 + ctx.r7.u64;
	// add r7,r7,r28
	ctx.r7.u64 = ctx.r7.u64 + ctx.r28.u64;
	// lwzx r5,r6,r7
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// or r5,r25,r5
	ctx.r5.u64 = ctx.r25.u64 | ctx.r5.u64;
	// stwx r5,r6,r7
	PPC_STORE_U32(ctx.r6.u32 + ctx.r7.u32, ctx.r5.u32);
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwzx r7,r10,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// add r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 + ctx.r7.u64;
	// stwx r8,r7,r26
	PPC_STORE_U32(ctx.r7.u32 + ctx.r26.u32, ctx.r8.u32);
	// clrlwi r5,r3,27
	ctx.r5.u64 = ctx.r3.u32 & 0x1F;
	// srawi r6,r3,5
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	ctx.r6.s64 = ctx.r3.s32 >> 5;
	// slw r3,r4,r5
	ctx.r3.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r5.u8 & 0x3F));
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r10,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// add r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 + ctx.r7.u64;
	// stwx r8,r7,r24
	PPC_STORE_U32(ctx.r7.u32 + ctx.r24.u32, ctx.r8.u32);
	// lwzx r7,r10,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// add r5,r9,r7
	ctx.r5.u64 = ctx.r9.u64 + ctx.r7.u64;
	// add r7,r5,r26
	ctx.r7.u64 = ctx.r5.u64 + ctx.r26.u64;
	// lwzx r5,r6,r7
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// or r3,r3,r5
	ctx.r3.u64 = ctx.r3.u64 | ctx.r5.u64;
	// stwx r3,r6,r7
	PPC_STORE_U32(ctx.r6.u32 + ctx.r7.u32, ctx.r3.u32);
	// lwz r6,372(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 372);
	// lwzx r7,r10,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// add r5,r9,r7
	ctx.r5.u64 = ctx.r9.u64 + ctx.r7.u64;
	// addis r7,r5,8
	ctx.r7.s64 = ctx.r5.s64 + 524288;
	// extsw r3,r6
	ctx.r3.s64 = ctx.r6.s32;
	// addi r7,r7,10928
	ctx.r7.s64 = ctx.r7.s64 + 10928;
	// rldicl r5,r3,32,32
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r3.u64, 32) & 0xFFFFFFFF;
	// stw r5,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r5.u32);
	// stw r3,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r3.u32);
	// lwz r3,380(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 380);
	// lwzx r7,r10,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// add r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 + ctx.r7.u64;
	// addis r5,r7,8
	ctx.r5.s64 = ctx.r7.s64 + 524288;
	// extsw r6,r3
	ctx.r6.s64 = ctx.r3.s32;
	// addi r5,r5,10944
	ctx.r5.s64 = ctx.r5.s64 + 10944;
	// rldicl r7,r6,32,32
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u64, 32) & 0xFFFFFFFF;
	// stw r7,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r7.u32);
	// stw r6,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r6.u32);
	// lwz r6,376(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 376);
	// lwzx r7,r10,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// add r5,r9,r7
	ctx.r5.u64 = ctx.r9.u64 + ctx.r7.u64;
	// extsw r3,r6
	ctx.r3.s64 = ctx.r6.s32;
	// addis r7,r5,8
	ctx.r7.s64 = ctx.r5.s64 + 524288;
	// addi r7,r7,10936
	ctx.r7.s64 = ctx.r7.s64 + 10936;
	// rldicl r5,r3,32,32
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r3.u64, 32) & 0xFFFFFFFF;
	// stw r3,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r3.u32);
	// stw r5,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r5.u32);
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// rlwinm r7,r3,0,13,13
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x40000;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// lwzx r7,r10,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// add r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 + ctx.r7.u64;
	// addis r6,r7,8
	ctx.r6.s64 = ctx.r7.s64 + 524288;
	// addi r6,r6,10880
	ctx.r6.s64 = ctx.r6.s64 + 10880;
	// stw r8,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r8.u32);
	// beq cr6,0x8231aabc
	if (ctx.cr6.eq) goto loc_8231AABC;
	// stw r4,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r4.u32);
	// b 0x8231aac0
	goto loc_8231AAC0;
loc_8231AABC:
	// stw r8,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r8.u32);
loc_8231AAC0:
	// lwz r7,12(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// rlwinm r6,r7,0,20,21
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xC00;
	// lwzx r7,r10,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// add r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 + ctx.r7.u64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// addis r6,r7,8
	ctx.r6.s64 = ctx.r7.s64 + 524288;
	// addi r6,r6,10848
	ctx.r6.s64 = ctx.r6.s64 + 10848;
	// stw r8,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r8.u32);
	// beq cr6,0x8231aaec
	if (ctx.cr6.eq) goto loc_8231AAEC;
	// stw r4,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r4.u32);
	// b 0x8231aaf0
	goto loc_8231AAF0;
loc_8231AAEC:
	// stw r8,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r8.u32);
loc_8231AAF0:
	// lwz r7,12(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// rlwinm r6,r7,0,29,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x4;
	// lwzx r7,r10,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// add r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 + ctx.r7.u64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// addis r6,r7,8
	ctx.r6.s64 = ctx.r7.s64 + 524288;
	// addi r6,r6,10864
	ctx.r6.s64 = ctx.r6.s64 + 10864;
	// stw r8,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r8.u32);
	// beq cr6,0x8231ab1c
	if (ctx.cr6.eq) goto loc_8231AB1C;
	// stw r4,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r4.u32);
	// b 0x8231ab20
	goto loc_8231AB20;
loc_8231AB1C:
	// stw r8,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r8.u32);
loc_8231AB20:
	// lwz r7,12(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// rlwinm r6,r7,0,22,22
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x200;
	// lwzx r7,r10,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// add r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 + ctx.r7.u64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// addis r6,r7,8
	ctx.r6.s64 = ctx.r7.s64 + 524288;
	// addi r6,r6,10872
	ctx.r6.s64 = ctx.r6.s64 + 10872;
	// stw r8,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r8.u32);
	// beq cr6,0x8231ab4c
	if (ctx.cr6.eq) goto loc_8231AB4C;
	// stw r4,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r4.u32);
	// b 0x8231ab50
	goto loc_8231AB50;
loc_8231AB4C:
	// stw r8,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r8.u32);
loc_8231AB50:
	// lwz r7,124(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// lwzx r6,r10,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// rlwinm r5,r7,0,23,21
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFFFFFFFDFF;
	// mulli r5,r5,104
	ctx.r5.s64 = ctx.r5.s64 * 104;
	// add r3,r5,r6
	ctx.r3.u64 = ctx.r5.u64 + ctx.r6.u64;
	// ld r7,88(r3)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r3.u32 + 88);
	// cmpdi cr6,r7,0
	ctx.cr6.compare<int64_t>(ctx.r7.s64, 0, ctx.xer);
	// beq cr6,0x8231ab9c
	if (ctx.cr6.eq) goto loc_8231AB9C;
	// lwz r3,236(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// extsw r3,r3
	ctx.r3.s64 = ctx.r3.s32;
	// cmpd cr6,r3,r7
	ctx.cr6.compare<int64_t>(ctx.r3.s64, ctx.r7.s64, ctx.xer);
	// beq cr6,0x8231ab9c
	if (ctx.cr6.eq) goto loc_8231AB9C;
	// add r6,r6,r9
	ctx.r6.u64 = ctx.r6.u64 + ctx.r9.u64;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// addis r6,r6,8
	ctx.r6.s64 = ctx.r6.s64 + 524288;
	// rldicl r7,r7,32,32
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u64, 32) & 0xFFFFFFFF;
	// addi r6,r6,10856
	ctx.r6.s64 = ctx.r6.s64 + 10856;
	// stw r3,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r3.u32);
	// stw r7,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r7.u32);
loc_8231AB9C:
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// add r10,r5,r11
	ctx.r10.u64 = ctx.r5.u64 + ctx.r11.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r10,80(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	// rlwinm r7,r10,0,27,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x8231abd0
	if (ctx.cr6.eq) goto loc_8231ABD0;
	// addis r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 524288;
	// addi r10,r10,10888
	ctx.r10.s64 = ctx.r10.s64 + 10888;
	// stw r4,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r4.u32);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
loc_8231ABD0:
	// rlwinm r10,r10,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8231abf8
	if (ctx.cr6.eq) goto loc_8231ABF8;
	// addis r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 524288;
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r9,r9,10888
	ctx.r9.s64 = ctx.r9.s64 + 10888;
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stw r8,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
loc_8231ABF8:
	// addis r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 524288;
	// addi r10,r10,10888
	ctx.r10.s64 = ctx.r10.s64 + 10888;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8231A930) {
	__imp__sub_8231A930(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8231AC10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8231AC18;
	__savegprlr_29(ctx, base);
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x823ddffc
	ctx.lr = 0x8231AC20;
	__savefpr_17(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// rlwinm r10,r11,0,20,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC00;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8231ac60
	if (ctx.cr6.eq) goto loc_8231AC60;
	// li r5,72
	ctx.r5.s64 = 72;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823de090
	ctx.lr = 0x8231AC50;
	sub_823DE090(ctx, base);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x823de048
	ctx.lr = 0x8231AC5C;
	__restfpr_17(ctx, base);
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_8231AC60:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r9,236(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f0,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfs f13,56(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	ctx.f13.f64 = double(temp.f32);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// rlwinm r5,r9,0,12,13
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xC0000;
	// stfs f13,92(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lfs f31,5484(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f31.f64 = double(temp.f32);
	// lfs f17,2412(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2412);
	ctx.f17.f64 = double(temp.f32);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// lfs f21,2416(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2416);
	ctx.f21.f64 = double(temp.f32);
	// lfs f18,2420(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 2420);
	ctx.f18.f64 = double(temp.f32);
	// stfs f31,104(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f31,112(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f31,88(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f31,96(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// bne cr6,0x8231acfc
	if (!ctx.cr6.eq) goto loc_8231ACFC;
	// rlwinm r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// lfs f0,64(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8231acfc
	if (ctx.cr6.eq) goto loc_8231ACFC;
	// fmuls f30,f0,f18
	ctx.f30.f64 = double(float(ctx.f0.f64 * ctx.f18.f64));
	// fadds f1,f30,f21
	ctx.f1.f64 = double(float(ctx.f30.f64 + ctx.f21.f64));
	// bl 0x823dde20
	ctx.lr = 0x8231ACD0;
	sub_823DDE20(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fsubs f13,f30,f0
	ctx.f13.f64 = double(float(ctx.f30.f64 - ctx.f0.f64));
	// fmuls f0,f13,f17
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f17.f64));
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x8231acec
	if (!ctx.cr6.gt) goto loc_8231ACEC;
	// fmuls f0,f0,f21
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f21.f64));
	// b 0x8231acf8
	goto loc_8231ACF8;
loc_8231ACEC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,5880(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5880);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
loc_8231ACF8:
	// stfs f0,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
loc_8231ACFC:
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x822d7700
	ctx.lr = 0x8231AD0C;
	sub_822D7700(ctx, base);
	// lfs f1,108(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	ctx.f1.f64 = double(temp.f32);
	// fmr f19,f31
	ctx.f19.f64 = ctx.f31.f64;
	// fmr f20,f31
	ctx.f20.f64 = ctx.f31.f64;
	// bl 0x822e97a8
	ctx.lr = 0x8231AD1C;
	sub_822E97A8(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// fcmpu cr6,f1,f31
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// lfs f0,19372(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 19372);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f1,f0
	ctx.f12.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// beq cr6,0x8231ad90
	if (ctx.cr6.eq) goto loc_8231AD90;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8231ad68
	if (ctx.cr6.eq) goto loc_8231AD68;
	// fcmpu cr6,f1,f31
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// ble cr6,0x8231ad5c
	if (!ctx.cr6.gt) goto loc_8231AD5C;
	// lis r11,-31834
	ctx.r11.s64 = -2086273024;
	// lwz r11,-16940(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16940);
	// b 0x8231ad84
	goto loc_8231AD84;
loc_8231AD5C:
	// lis r11,-31834
	ctx.r11.s64 = -2086273024;
	// lwz r11,-6464(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6464);
	// b 0x8231ad84
	goto loc_8231AD84;
loc_8231AD68:
	// fcmpu cr6,f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f30.f64, ctx.f31.f64);
	// ble cr6,0x8231ad7c
	if (!ctx.cr6.gt) goto loc_8231AD7C;
	// lis r11,-31834
	ctx.r11.s64 = -2086273024;
	// lwz r11,-16600(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16600);
	// b 0x8231ad84
	goto loc_8231AD84;
loc_8231AD7C:
	// lis r11,-31834
	ctx.r11.s64 = -2086273024;
	// lwz r11,-22128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22128);
loc_8231AD84:
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f30
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// fneg f20,f13
	ctx.f20.u64 = ctx.f13.u64 ^ 0x8000000000000000;
loc_8231AD90:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// rlwinm r10,r11,0,14,14
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8231adb4
	if (!ctx.cr6.eq) goto loc_8231ADB4;
	// lfs f2,116(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x820d52c0
	ctx.lr = 0x8231ADAC;
	sub_820D52C0(ctx, base);
	// lfs f12,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// stfs f1,108(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
loc_8231ADB4:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// rlwinm r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8231aed0
	if (ctx.cr6.eq) goto loc_8231AED0;
	// lfs f0,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,132(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	ctx.f13.f64 = double(temp.f32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lfs f11,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f11.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f0,5524(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5524);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f11,f0
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// bl 0x820e6008
	ctx.lr = 0x8231ADF0;
	sub_820E6008(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f9,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f10,f13,f30
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f30.f64));
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// lfs f0,12168(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f9
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f9.f64));
	// lfs f12,13904(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 13904);
	ctx.f12.f64 = double(temp.f32);
	// fnmsubs f20,f13,f12,f20
	ctx.f20.f64 = double(float(-(ctx.f13.f64 * ctx.f12.f64 - ctx.f20.f64)));
	// lfs f11,19368(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 19368);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f10,f31
	ctx.cr6.compare(ctx.f10.f64, ctx.f31.f64);
	// fmuls f19,f0,f11
	ctx.f19.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// ble cr6,0x8231ae38
	if (!ctx.cr6.gt) goto loc_8231AE38;
	// fmuls f13,f0,f30
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,6056(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6056);
	ctx.f0.f64 = double(temp.f32);
	// fnmsubs f20,f13,f0,f20
	ctx.f20.f64 = double(float(-(ctx.f13.f64 * ctx.f0.f64 - ctx.f20.f64)));
loc_8231AE38:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f1,132(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	ctx.f1.f64 = double(temp.f32);
	// fmr f24,f31
	ctx.f24.f64 = ctx.f31.f64;
	// fcmpu cr6,f1,f31
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// lfs f13,19364(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 19364);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,6032(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6032);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f23,f0,f13
	ctx.f23.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fmuls f22,f0,f12
	ctx.f22.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// bne cr6,0x8231ae70
	if (!ctx.cr6.eq) goto loc_8231AE70;
	// lfs f13,136(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f31
	ctx.cr6.compare(ctx.f13.f64, ctx.f31.f64);
	// beq cr6,0x8231ae80
	if (ctx.cr6.eq) goto loc_8231AE80;
loc_8231AE70:
	// lfs f2,136(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x820d52c0
	ctx.lr = 0x8231AE78;
	sub_820D52C0(ctx, base);
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// fmr f24,f1
	ctx.f24.f64 = ctx.f1.f64;
loc_8231AE80:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f11,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f11.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f27,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f27.f64 = double(temp.f32);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// fmr f30,f31
	ctx.f30.f64 = ctx.f31.f64;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfs f13,6040(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6040);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,2424(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2424);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fmuls f9,f0,f12
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// lfs f12,26036(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 26036);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f25,f0,f12
	ctx.f25.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// lfs f10,6020(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 6020);
	ctx.f10.f64 = double(temp.f32);
	// lfs f0,6048(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
	// fmsubs f29,f11,f10,f13
	ctx.f29.f64 = double(float(ctx.f11.f64 * ctx.f10.f64 - ctx.f13.f64));
	// fmr f28,f13
	ctx.f28.f64 = ctx.f13.f64;
	// fmsubs f26,f11,f0,f9
	ctx.f26.f64 = double(float(ctx.f11.f64 * ctx.f0.f64 - ctx.f9.f64));
	// b 0x8231afbc
	goto loc_8231AFBC;
loc_8231AED0:
	// fcmpu cr6,f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f30.f64, ctx.f31.f64);
	// beq cr6,0x8231af2c
	if (ctx.cr6.eq) goto loc_8231AF2C;
	// rlwinm r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8231af04
	if (ctx.cr6.eq) goto loc_8231AF04;
	// fcmpu cr6,f30,f31
	ctx.cr6.compare(ctx.f30.f64, ctx.f31.f64);
	// ble cr6,0x8231aef8
	if (!ctx.cr6.gt) goto loc_8231AEF8;
	// lis r11,-31834
	ctx.r11.s64 = -2086273024;
	// lwz r11,-6692(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6692);
	// b 0x8231af20
	goto loc_8231AF20;
loc_8231AEF8:
	// lis r11,-31834
	ctx.r11.s64 = -2086273024;
	// lwz r11,-6528(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6528);
	// b 0x8231af20
	goto loc_8231AF20;
loc_8231AF04:
	// fcmpu cr6,f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f30.f64, ctx.f31.f64);
	// ble cr6,0x8231af18
	if (!ctx.cr6.gt) goto loc_8231AF18;
	// lis r11,-31834
	ctx.r11.s64 = -2086273024;
	// lwz r11,-6556(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6556);
	// b 0x8231af20
	goto loc_8231AF20;
loc_8231AF18:
	// lis r11,-31834
	ctx.r11.s64 = -2086273024;
	// lwz r11,-16616(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16616);
loc_8231AF20:
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f0,f12
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
loc_8231AF2C:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f10,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f10.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f0,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// lfs f1,132(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f22,f12,f21
	ctx.f22.f64 = double(float(ctx.f12.f64 * ctx.f21.f64));
	// fcmpu cr6,f1,f31
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// lfs f11,19360(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 19360);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f9,f30,f11,f10
	ctx.f9.f64 = double(float(ctx.f30.f64 * ctx.f11.f64 + ctx.f10.f64));
	// lfs f30,6040(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6040);
	ctx.f30.f64 = double(temp.f32);
	// lfs f29,4292(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4292);
	ctx.f29.f64 = double(temp.f32);
	// fmuls f24,f13,f30
	ctx.f24.f64 = double(float(ctx.f13.f64 * ctx.f30.f64));
	// stfs f9,112(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmuls f23,f0,f29
	ctx.f23.f64 = double(float(ctx.f0.f64 * ctx.f29.f64));
	// bne cr6,0x8231af7c
	if (!ctx.cr6.eq) goto loc_8231AF7C;
	// lfs f11,136(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f11,f31
	ctx.cr6.compare(ctx.f11.f64, ctx.f31.f64);
	// beq cr6,0x8231af94
	if (ctx.cr6.eq) goto loc_8231AF94;
loc_8231AF7C:
	// lfs f2,136(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x820d52c0
	ctx.lr = 0x8231AF84;
	sub_820D52C0(ctx, base);
	// lfs f12,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// fadds f24,f1,f24
	ctx.f24.f64 = double(float(ctx.f1.f64 + ctx.f24.f64));
	// lfs f0,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
loc_8231AF94:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmuls f26,f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.f26.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// fmuls f29,f0,f29
	ctx.f29.f64 = double(float(ctx.f0.f64 * ctx.f29.f64));
	// fmuls f28,f12,f21
	ctx.f28.f64 = double(float(ctx.f12.f64 * ctx.f21.f64));
	// fmuls f27,f13,f21
	ctx.f27.f64 = double(float(ctx.f13.f64 * ctx.f21.f64));
	// lfs f0,6032(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6032);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,19356(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 19356);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f30,f13,f0
	ctx.f30.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f25,f12,f11
	ctx.f25.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
loc_8231AFBC:
	// lfs f13,136(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	ctx.f13.f64 = double(temp.f32);
	// fmr f0,f31
	ctx.f0.f64 = ctx.f31.f64;
	// fcmpu cr6,f13,f31
	ctx.cr6.compare(ctx.f13.f64, ctx.f31.f64);
	// bne cr6,0x8231afd8
	if (!ctx.cr6.eq) goto loc_8231AFD8;
	// lfs f12,132(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f31
	ctx.cr6.compare(ctx.f12.f64, ctx.f31.f64);
	// beq cr6,0x8231aff8
	if (ctx.cr6.eq) goto loc_8231AFF8;
loc_8231AFD8:
	// lfs f0,132(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fmuls f18,f13,f18
	ctx.f18.f64 = double(float(ctx.f13.f64 * ctx.f18.f64));
	// fadds f1,f18,f21
	ctx.f1.f64 = double(float(ctx.f18.f64 + ctx.f21.f64));
	// bl 0x823dde20
	ctx.lr = 0x8231AFEC;
	sub_823DDE20(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// fsubs f11,f18,f12
	ctx.f11.f64 = double(float(ctx.f18.f64 - ctx.f12.f64));
	// fmuls f0,f11,f17
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f17.f64));
loc_8231AFF8:
	// stfs f24,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// stfs f30,12(r29)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r29.u32 + 12, temp.u32);
	// stfs f23,4(r29)
	temp.f32 = float(ctx.f23.f64);
	PPC_STORE_U32(ctx.r29.u32 + 4, temp.u32);
	// stfs f22,8(r29)
	temp.f32 = float(ctx.f22.f64);
	PPC_STORE_U32(ctx.r29.u32 + 8, temp.u32);
	// stfs f29,16(r29)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r29.u32 + 16, temp.u32);
	// stfs f28,20(r29)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r29.u32 + 20, temp.u32);
	// stfs f27,24(r29)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r29.u32 + 24, temp.u32);
	// stfs f26,28(r29)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r29.u32 + 28, temp.u32);
	// stfs f25,32(r29)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r29.u32 + 32, temp.u32);
	// stfs f0,36(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 36, temp.u32);
	// stfs f31,40(r29)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 40, temp.u32);
	// stfs f31,44(r29)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 44, temp.u32);
	// lfs f0,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,48(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 48, temp.u32);
	// stfs f13,52(r29)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r29.u32 + 52, temp.u32);
	// stfs f12,56(r29)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r29.u32 + 56, temp.u32);
	// stfs f19,60(r29)
	temp.f32 = float(ctx.f19.f64);
	PPC_STORE_U32(ctx.r29.u32 + 60, temp.u32);
	// stfs f20,64(r29)
	temp.f32 = float(ctx.f20.f64);
	PPC_STORE_U32(ctx.r29.u32 + 64, temp.u32);
	// stfs f31,68(r29)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 68, temp.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x823de048
	ctx.lr = 0x8231B058;
	__restfpr_17(ctx, base);
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8231AC10) {
	__imp__sub_8231AC10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8231B05C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8231B05C) {
	__imp__sub_8231B05C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8231B060) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f12,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f12,f0
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// fcmpu cr6,f13,f1
	ctx.cr6.compare(ctx.f13.f64, ctx.f1.f64);
	// ble cr6,0x8231b080
	if (!ctx.cr6.gt) goto loc_8231B080;
	// fadds f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f1.f64));
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// b 0x8231b09c
	goto loc_8231B09C;
loc_8231B080:
	// fneg f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = ctx.f1.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f13,f11
	ctx.cr6.compare(ctx.f13.f64, ctx.f11.f64);
	// bge cr6,0x8231b098
	if (!ctx.cr6.lt) goto loc_8231B098;
	// fsubs f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f1.f64));
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// b 0x8231b09c
	goto loc_8231B09C;
loc_8231B098:
	// stfs f12,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
loc_8231B09C:
	// lfs f12,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f12,f0
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// fcmpu cr6,f13,f1
	ctx.cr6.compare(ctx.f13.f64, ctx.f1.f64);
	// ble cr6,0x8231b0bc
	if (!ctx.cr6.gt) goto loc_8231B0BC;
	// fadds f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f1.f64));
	// stfs f0,4(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// b 0x8231b0d8
	goto loc_8231B0D8;
loc_8231B0BC:
	// fneg f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = ctx.f1.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f13,f11
	ctx.cr6.compare(ctx.f13.f64, ctx.f11.f64);
	// bge cr6,0x8231b0d4
	if (!ctx.cr6.lt) goto loc_8231B0D4;
	// fsubs f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f1.f64));
	// stfs f0,4(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// b 0x8231b0d8
	goto loc_8231B0D8;
loc_8231B0D4:
	// stfs f12,4(r5)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r5.u32 + 4, temp.u32);
loc_8231B0D8:
	// lfs f12,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f12,f0
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// fcmpu cr6,f13,f1
	ctx.cr6.compare(ctx.f13.f64, ctx.f1.f64);
	// ble cr6,0x8231b0f8
	if (!ctx.cr6.gt) goto loc_8231B0F8;
	// fadds f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f1.f64));
	// stfs f0,8(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 8, temp.u32);
	// blr 
	return;
loc_8231B0F8:
	// fneg f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = ctx.f1.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f13,f11
	ctx.cr6.compare(ctx.f13.f64, ctx.f11.f64);
	// bge cr6,0x8231b110
	if (!ctx.cr6.lt) goto loc_8231B110;
	// fsubs f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f1.f64));
	// stfs f0,8(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 8, temp.u32);
	// blr 
	return;
loc_8231B110:
	// stfs f12,8(r5)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r5.u32 + 8, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8231B060) {
	__imp__sub_8231B060(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8231B118) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f9,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f13,f0,f9
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f9.f64));
	// lfs f6,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// lfs f10,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f0,f6,f10
	ctx.f0.f64 = double(float(ctx.f6.f64 - ctx.f10.f64));
	// lfs f12,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f8,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f12,f12,f8
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f8.f64));
	// lfs f7,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f11,f13,f13
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fmadds f5,f0,f0,f11
	ctx.f5.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f11.f64));
	// fmadds f11,f12,f12,f5
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f5.f64));
	// fcmpu cr6,f11,f7
	ctx.cr6.compare(ctx.f11.f64, ctx.f7.f64);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// frsqrte f11,f11
	ctx.f11.f64 = 1.0 / sqrt(ctx.f11.f64);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f7,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f7.f64 = double(temp.f32);
	// frsp f5,f11
	ctx.f5.f64 = double(float(ctx.f11.f64));
	// fmuls f11,f5,f1
	ctx.f11.f64 = double(float(ctx.f5.f64 * ctx.f1.f64));
	// fcmpu cr6,f11,f7
	ctx.cr6.compare(ctx.f11.f64, ctx.f7.f64);
	// bge cr6,0x8231b190
	if (!ctx.cr6.lt) goto loc_8231B190;
	// fmadds f0,f0,f11,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f11.f64 + ctx.f10.f64));
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// fmadds f12,f12,f11,f8
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f11.f64 + ctx.f8.f64));
	// stfs f12,4(r5)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// fmadds f11,f13,f11,f9
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f11.f64 + ctx.f9.f64));
	// stfs f11,8(r5)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r5.u32 + 8, temp.u32);
	// blr 
	return;
loc_8231B190:
	// stfs f6,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// lfs f0,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// lfs f13,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,8(r5)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + 8, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8231B118) {
	__imp__sub_8231B118(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8231B1A8) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x8231ac10
	ctx.lr = 0x8231B1CC;
	sub_8231AC10(ctx, base);
	// extsw r11,r30
	ctx.r11.s64 = ctx.r30.s32;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// frsp f3,f13
	ctx.f3.f64 = double(float(ctx.f13.f64));
	// lfs f0,14524(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 14524);
	ctx.f0.f64 = double(temp.f32);
	// addi r5,r31,140
	ctx.r5.s64 = ctx.r31.s64 + 140;
	// li r10,4
	ctx.r10.s64 = 4;
	// fmuls f1,f3,f0
	ctx.f1.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
loc_8231B1F8:
	// bl 0x8231b060
	ctx.lr = 0x8231B1FC;
	sub_8231B060(ctx, base);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r5,r5,12
	ctx.r5.s64 = ctx.r5.s64 + 12;
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// bne 0x8231b1f8
	if (!ctx.cr0.eq) goto loc_8231B1F8;
	// addi r5,r31,188
	ctx.r5.s64 = ctx.r31.s64 + 188;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8231b060
	ctx.lr = 0x8231B218;
	sub_8231B060(ctx, base);
	// lfs f6,164(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,156(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	ctx.f5.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f4,160(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f4.f64 = double(temp.f32);
	// addi r11,r31,200
	ctx.r11.s64 = ctx.r31.s64 + 200;
	// lfs f7,5484(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f7.f64 = double(temp.f32);
	// lfs f10,208(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f0,f6,f10
	ctx.f0.f64 = double(float(ctx.f6.f64 - ctx.f10.f64));
	// lfs f9,200(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f13,f5,f9
	ctx.f13.f64 = double(float(ctx.f5.f64 - ctx.f9.f64));
	// lfs f8,204(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f12,f4,f8
	ctx.f12.f64 = double(float(ctx.f4.f64 - ctx.f8.f64));
	// fmuls f11,f0,f0
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f2,f13,f13,f11
	ctx.f2.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f11.f64));
	// fmadds f11,f12,f12,f2
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f2.f64));
	// fcmpu cr6,f11,f7
	ctx.cr6.compare(ctx.f11.f64, ctx.f7.f64);
	// beq cr6,0x8231b2ac
	if (ctx.cr6.eq) goto loc_8231B2AC;
	// frsqrte f2,f11
	ctx.f2.f64 = 1.0 / sqrt(ctx.f11.f64);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f11,6020(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6020);
	ctx.f11.f64 = double(temp.f32);
	// lfs f7,12168(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12168);
	ctx.f7.f64 = double(temp.f32);
	// frsp f1,f2
	ctx.f1.f64 = double(float(ctx.f2.f64));
	// fmuls f3,f1,f3
	ctx.f3.f64 = double(float(ctx.f1.f64 * ctx.f3.f64));
	// fmuls f11,f3,f11
	ctx.f11.f64 = double(float(ctx.f3.f64 * ctx.f11.f64));
	// fcmpu cr6,f11,f7
	ctx.cr6.compare(ctx.f11.f64, ctx.f7.f64);
	// bge cr6,0x8231b2a0
	if (!ctx.cr6.lt) goto loc_8231B2A0;
	// fmadds f13,f13,f11,f9
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f11.f64 + ctx.f9.f64));
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// fmadds f12,f11,f12,f8
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f12.f64 + ctx.f8.f64));
	// stfs f12,4(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// fmadds f11,f0,f11,f10
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f11.f64 + ctx.f10.f64));
	// stfs f11,8(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// b 0x8231b2ac
	goto loc_8231B2AC;
loc_8231B2A0:
	// stfs f5,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f4,4(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f6,8(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
loc_8231B2AC:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
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

PPC_WEAK_FUNC(sub_8231B1A8) {
	__imp__sub_8231B1A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8231B2C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8231B2C4) {
	__imp__sub_8231B2C4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8231B2C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf68
	ctx.lr = 0x8231B2D0;
	__savegprlr_24(ctx, base);
	// stfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x8231a5d0
	ctx.lr = 0x8231B2F0;
	sub_8231A5D0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8231a930
	ctx.lr = 0x8231B2FC;
	sub_8231A930(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r29,r31,8
	ctx.r29.s64 = ctx.r31.s64 + 8;
	// li r25,0
	ctx.r25.s64 = 0;
	// li r24,150
	ctx.r24.s64 = 150;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lfs f31,5484(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f31.f64 = double(temp.f32);
	// lwz r27,356(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 356);
	// beq cr6,0x8231b340
	if (ctx.cr6.eq) goto loc_8231B340;
	// rlwinm r4,r11,0,23,21
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFDFF;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822f4098
	ctx.lr = 0x8231B32C;
	sub_822F4098(ctx, base);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// bne cr6,0x8231b340
	if (!ctx.cr6.eq) goto loc_8231B340;
	// stw r25,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r25.u32);
	// stw r25,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r25.u32);
	// stw r24,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r24.u32);
loc_8231B340:
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// addi r28,r31,56
	ctx.r28.s64 = ctx.r31.s64 + 56;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8231b370
	if (ctx.cr6.eq) goto loc_8231B370;
	// rlwinm r4,r11,0,23,21
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFDFF;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822f4098
	ctx.lr = 0x8231B35C;
	sub_822F4098(ctx, base);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// bne cr6,0x8231b370
	if (!ctx.cr6.eq) goto loc_8231B370;
	// stw r25,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r25.u32);
	// stw r25,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r25.u32);
	// stw r24,24(r28)
	PPC_STORE_U32(ctx.r28.u32 + 24, ctx.r24.u32);
loc_8231B370:
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// lwz r6,124(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8231a078
	ctx.lr = 0x8231B388;
	sub_8231A078(ctx, base);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r6,128(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8231a078
	ctx.lr = 0x8231B3A0;
	sub_8231A078(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8231B2C8) {
	__imp__sub_8231B2C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8231B3AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8231B3AC) {
	__imp__sub_8231B3AC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8231B3B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x8231B3B8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,0(r13)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r29,24
	ctx.r29.s64 = 24;
	// lis r11,8
	ctx.r11.s64 = 524288;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// ori r31,r11,10608
	ctx.r31.u64 = ctx.r11.u64 | 10608;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// lwzx r8,r29,r30
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r30.u32);
	// addi r28,r10,17592
	ctx.r28.s64 = ctx.r10.s64 + 17592;
	// addi r4,r9,19400
	ctx.r4.s64 = ctx.r9.s64 + 19400;
	// addis r5,r8,8
	ctx.r5.s64 = ctx.r8.s64 + 524288;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r5,r5,10580
	ctx.r5.s64 = ctx.r5.s64 + 10580;
	// lwzx r6,r8,r31
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	// bl 0x82293d60
	ctx.lr = 0x8231B3F4;
	sub_82293D60(ctx, base);
	// lwzx r6,r29,r30
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r30.u32);
	// lis r7,-32252
	ctx.r7.s64 = -2113667072;
	// addis r5,r6,8
	ctx.r5.s64 = ctx.r6.s64 + 524288;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r7,19392
	ctx.r4.s64 = ctx.r7.s64 + 19392;
	// addi r5,r5,10584
	ctx.r5.s64 = ctx.r5.s64 + 10584;
	// lwzx r6,r6,r31
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r31.u32);
	// bl 0x82293d60
	ctx.lr = 0x8231B414;
	sub_82293D60(ctx, base);
	// lis r5,-32252
	ctx.r5.s64 = -2113667072;
	// lwzx r11,r29,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r30.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r5,19384
	ctx.r4.s64 = ctx.r5.s64 + 19384;
	// addis r5,r11,8
	ctx.r5.s64 = ctx.r11.s64 + 524288;
	// addi r5,r5,10588
	ctx.r5.s64 = ctx.r5.s64 + 10588;
	// lwzx r6,r11,r31
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// bl 0x82293d60
	ctx.lr = 0x8231B434;
	sub_82293D60(ctx, base);
	// lwzx r9,r29,r30
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r30.u32);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addis r5,r9,8
	ctx.r5.s64 = ctx.r9.s64 + 524288;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r10,19376
	ctx.r4.s64 = ctx.r10.s64 + 19376;
	// addi r5,r5,10592
	ctx.r5.s64 = ctx.r5.s64 + 10592;
	// lwzx r6,r9,r31
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// bl 0x82293d60
	ctx.lr = 0x8231B454;
	sub_82293D60(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8231B3B0) {
	__imp__sub_8231B3B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8231B45C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8231B45C) {
	__imp__sub_8231B45C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8231B460) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8231B468;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82293cd0
	ctx.lr = 0x8231B478;
	sub_82293CD0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8231b4a0
	if (!ctx.cr6.eq) goto loc_8231B4A0;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x8231b4a0
	if (ctx.cr6.eq) goto loc_8231B4A0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,7556
	ctx.r4.s64 = ctx.r11.s64 + 7556;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822830e8
	ctx.lr = 0x8231B4A0;
	sub_822830E8(ctx, base);
loc_8231B4A0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8231B460) {
	__imp__sub_8231B460(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8231B4AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8231B4AC) {
	__imp__sub_8231B4AC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8231B4B0) {
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
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r30,r11,17592
	ctx.r30.s64 = ctx.r11.s64 + 17592;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82293cd0
	ctx.lr = 0x8231B4D4;
	sub_82293CD0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8231b4f4
	if (!ctx.cr6.eq) goto loc_8231B4F4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,7556
	ctx.r4.s64 = ctx.r11.s64 + 7556;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822830e8
	ctx.lr = 0x8231B4F4;
	sub_822830E8(ctx, base);
loc_8231B4F4:
	// lwz r11,0(r13)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,24
	ctx.r10.s64 = 24;
	// lis r9,8
	ctx.r9.s64 = 524288;
	// lis r8,8
	ctx.r8.s64 = 524288;
	// ori r9,r9,10576
	ctx.r9.u64 = ctx.r9.u64 | 10576;
	// lis r7,8
	ctx.r7.s64 = 524288;
	// lwzx r6,r10,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// ori r5,r8,10564
	ctx.r5.u64 = ctx.r8.u64 | 10564;
	// lis r4,8
	ctx.r4.s64 = 524288;
	// ori r3,r7,10580
	ctx.r3.u64 = ctx.r7.u64 | 10580;
	// ori r7,r4,10568
	ctx.r7.u64 = ctx.r4.u64 | 10568;
	// lis r8,8
	ctx.r8.s64 = 524288;
	// stwx r31,r6,r9
	PPC_STORE_U32(ctx.r6.u32 + ctx.r9.u32, ctx.r31.u32);
	// lis r6,8
	ctx.r6.s64 = 524288;
	// lwzx r4,r10,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// ori r8,r8,10584
	ctx.r8.u64 = ctx.r8.u64 | 10584;
	// lwzx r9,r4,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r9.u32);
	// lis r31,8
	ctx.r31.s64 = 524288;
	// stwx r9,r4,r5
	PPC_STORE_U32(ctx.r4.u32 + ctx.r5.u32, ctx.r9.u32);
	// ori r6,r6,10570
	ctx.r6.u64 = ctx.r6.u64 | 10570;
	// lwzx r4,r10,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lis r5,8
	ctx.r5.s64 = 524288;
	// lhzx r3,r4,r3
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r4.u32 + ctx.r3.u32);
	// ori r9,r31,10588
	ctx.r9.u64 = ctx.r31.u64 | 10588;
	// sthx r3,r4,r7
	PPC_STORE_U16(ctx.r4.u32 + ctx.r7.u32, ctx.r3.u16);
	// ori r7,r5,10572
	ctx.r7.u64 = ctx.r5.u64 | 10572;
	// lis r31,8
	ctx.r31.s64 = 524288;
	// lwzx r5,r10,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lis r4,8
	ctx.r4.s64 = 524288;
	// lhzx r3,r5,r8
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r5.u32 + ctx.r8.u32);
	// sthx r3,r5,r6
	PPC_STORE_U16(ctx.r5.u32 + ctx.r6.u32, ctx.r3.u16);
	// ori r8,r31,10592
	ctx.r8.u64 = ctx.r31.u64 | 10592;
	// ori r6,r4,10574
	ctx.r6.u64 = ctx.r4.u64 | 10574;
	// lwzx r5,r10,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lhzx r4,r5,r9
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r5.u32 + ctx.r9.u32);
	// sthx r4,r5,r7
	PPC_STORE_U16(ctx.r5.u32 + ctx.r7.u32, ctx.r4.u16);
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lhzx r11,r3,r8
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + ctx.r8.u32);
	// sthx r11,r3,r6
	PPC_STORE_U16(ctx.r3.u32 + ctx.r6.u32, ctx.r11.u16);
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

PPC_WEAK_FUNC(sub_8231B4B0) {
	__imp__sub_8231B4B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8231B5A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf5c
	ctx.lr = 0x8231B5B0;
	__savegprlr_21(ctx, base);
	// addi r12,r1,-96
	ctx.r12.s64 = ctx.r1.s64 + -96;
	// bl 0x823de028
	ctx.lr = 0x8231B5B8;
	__savefpr_28(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r26,-31834
	ctx.r26.s64 = -2086273024;
	// lis r11,8
	ctx.r11.s64 = 524288;
	// ori r10,r11,10564
	ctx.r10.u64 = ctx.r11.u64 | 10564;
	// lwz r30,-22204(r26)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r26.u32 + -22204);
	// lwzx r28,r30,r10
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822f4240
	ctx.lr = 0x8231B5D8;
	sub_822F4240(ctx, base);
	// lis r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-22204(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -22204);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// ori r8,r9,53248
	ctx.r8.u64 = ctx.r9.u64 | 53248;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r4,r7,-15536
	ctx.r4.s64 = ctx.r7.s64 + -15536;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stwx r27,r11,r8
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r27.u32);
	// lwz r6,80(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// ori r11,r6,513
	ctx.r11.u64 = ctx.r6.u64 | 513;
	// stw r11,80(r30)
	PPC_STORE_U32(ctx.r30.u32 + 80, ctx.r11.u32);
	// bl 0x822e7e98
	ctx.lr = 0x8231B60C;
	sub_822E7E98(ctx, base);
	// li r25,0
	ctx.r25.s64 = 0;
	// addi r31,r30,104
	ctx.r31.s64 = ctx.r30.s64 + 104;
	// stw r25,76(r30)
	PPC_STORE_U32(ctx.r30.u32 + 76, ctx.r25.u32);
	// li r30,1
	ctx.r30.s64 = 1;
	// cmpwi cr6,r27,1
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 1, ctx.xer);
	// ble cr6,0x8231b7c8
	if (!ctx.cr6.gt) goto loc_8231B7C8;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r21,-1
	ctx.r21.s64 = -1;
	// lfs f28,12168(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f28.f64 = double(temp.f32);
	// li r22,72
	ctx.r22.s64 = 72;
	// lfs f29,12240(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12240);
	ctx.f29.f64 = double(temp.f32);
	// li r23,500
	ctx.r23.s64 = 500;
	// lfs f30,5484(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 5484);
	ctx.f30.f64 = double(temp.f32);
	// addi r24,r11,19408
	ctx.r24.s64 = ctx.r11.s64 + 19408;
loc_8231B650:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82317670
	ctx.lr = 0x8231B658;
	sub_82317670(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8231b688
	if (!ctx.cr6.eq) goto loc_8231B688;
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// li r5,64
	ctx.r5.s64 = 64;
	// ori r10,r11,512
	ctx.r10.u64 = ctx.r11.u64 | 512;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// bl 0x822e7e98
	ctx.lr = 0x8231B680;
	sub_822E7E98(ctx, base);
	// stw r25,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r25.u32);
	// b 0x8231b7b8
	goto loc_8231B7B8;
loc_8231B688:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822f5528
	ctx.lr = 0x8231B694;
	sub_822F5528(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8231b6e0
	if (!ctx.cr6.eq) goto loc_8231B6E0;
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r4,r29,8
	ctx.r4.s64 = ctx.r29.s64 + 8;
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// bl 0x822e7e98
	ctx.lr = 0x8231B6BC;
	sub_822E7E98(ctx, base);
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r8,64(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stw r9,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r9.u32);
	// bne cr6,0x8231b6d4
	if (!ctx.cr6.eq) goto loc_8231B6D4;
	// stw r21,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r21.u32);
loc_8231B6D4:
	// stfs f30,68(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// stw r25,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r25.u32);
	// b 0x8231b7b8
	goto loc_8231B7B8;
loc_8231B6E0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822f41c0
	ctx.lr = 0x8231B6EC;
	sub_822F41C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,64
	ctx.r5.s64 = 64;
	// bl 0x822e7e98
	ctx.lr = 0x8231B6FC;
	sub_822E7E98(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823171d0
	ctx.lr = 0x8231B704;
	sub_823171D0(ctx, base);
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// stw r3,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r3.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8231b718
	if (!ctx.cr6.eq) goto loc_8231B718;
	// stw r21,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r21.u32);
loc_8231B718:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822f3f10
	ctx.lr = 0x8231B724;
	sub_822F3F10(ctx, base);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// fcmpu cr6,f1,f30
	ctx.cr6.compare(ctx.f1.f64, ctx.f30.f64);
	// beq cr6,0x8231b78c
	if (ctx.cr6.eq) goto loc_8231B78C;
	// fmuls f0,f1,f29
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f29.f64));
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// fmr f2,f28
	ctx.f2.f64 = ctx.f28.f64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfiwx f13,r31,r22
	PPC_STORE_U32(ctx.r31.u32 + ctx.r22.u32, ctx.f13.u32);
	// bl 0x822f45a8
	ctx.lr = 0x8231B758;
	sub_822F45A8(ctx, base);
	// lfs f0,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f0,f0
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f13,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmpwi cr6,r11,500
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 500, ctx.xer);
	// lfs f0,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f11,f0,f0,f12
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f12.f64));
	// fmadds f10,f13,f13,f11
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f11.f64));
	// fsqrts f9,f10
	ctx.f9.f64 = double(float(sqrt(ctx.f10.f64)));
	// fdivs f8,f9,f31
	ctx.f8.f64 = double(float(ctx.f9.f64 / ctx.f31.f64));
	// stfs f8,68(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// bge cr6,0x8231b794
	if (!ctx.cr6.lt) goto loc_8231B794;
	// b 0x8231b790
	goto loc_8231B790;
loc_8231B78C:
	// stfs f30,68(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
loc_8231B790:
	// stw r23,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r23.u32);
loc_8231B794:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822f5640
	ctx.lr = 0x8231B7A0;
	sub_822F5640(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8231b7b8
	if (ctx.cr6.eq) goto loc_8231B7B8;
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// ori r10,r11,128
	ctx.r10.u64 = ctx.r11.u64 | 128;
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
loc_8231B7B8:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,104
	ctx.r31.s64 = ctx.r31.s64 + 104;
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x8231b650
	if (ctx.cr6.lt) goto loc_8231B650;
loc_8231B7C8:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,-22204(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + -22204);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82318370
	ctx.lr = 0x8231B7D8;
	sub_82318370(ctx, base);
	// lwz r3,-22204(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + -22204);
	// bl 0x82317710
	ctx.lr = 0x8231B7E0;
	sub_82317710(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// addi r12,r1,-96
	ctx.r12.s64 = ctx.r1.s64 + -96;
	// bl 0x823de074
	ctx.lr = 0x8231B7EC;
	__restfpr_28(ctx, base);
	// b 0x823ddfac
	__restgprlr_21(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8231B5A8) {
	__imp__sub_8231B5A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8231B7F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x8231B7F8;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// blt cr6,0x8231b824
	if (ctx.cr6.lt) goto loc_8231B824;
loc_8231B818:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_8231B824:
	// mulli r11,r28,54
	ctx.r11.s64 = ctx.r28.s64 * 54;
	// lis r9,-31834
	ctx.r9.s64 = -2086273024;
	// add r8,r11,r26
	ctx.r8.u64 = ctx.r11.u64 + ctx.r26.u64;
	// mulli r10,r8,516
	ctx.r10.s64 = ctx.r8.s64 * 516;
	// lwz r11,-22204(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -22204);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addis r30,r7,1
	ctx.r30.s64 = ctx.r7.s64 + 65536;
	// addi r30,r30,-12284
	ctx.r30.s64 = ctx.r30.s64 + -12284;
loc_8231B844:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// blt cr6,0x8231b818
	if (ctx.cr6.lt) goto loc_8231B818;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8231b864
	if (!ctx.cr6.eq) goto loc_8231B864;
	// addi r28,r28,-1
	ctx.r28.s64 = ctx.r28.s64 + -1;
	// addi r30,r30,-27864
	ctx.r30.s64 = ctx.r30.s64 + -27864;
	// b 0x8231b844
	goto loc_8231B844;
loc_8231B864:
	// lwz r29,256(r27)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r27.u32 + 256);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82318f10
	ctx.lr = 0x8231B874;
	sub_82318F10(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8231b88c
	if (!ctx.cr6.eq) goto loc_8231B88C;
	// addi r28,r28,-1
	ctx.r28.s64 = ctx.r28.s64 + -1;
	// addi r30,r30,-27864
	ctx.r30.s64 = ctx.r30.s64 + -27864;
	// b 0x8231b844
	goto loc_8231B844;
loc_8231B88C:
	// lwz r11,220(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8231b818
	if (ctx.cr6.eq) goto loc_8231B818;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82319348
	ctx.lr = 0x8231B8A8;
	sub_82319348(ctx, base);
	// lwz r10,220(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// lwz r11,256(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 256);
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// divw r9,r11,r10
	ctx.r9.s32 = ctx.r11.s32 / ctx.r10.s32;
	// li r5,0
	ctx.r5.s64 = 0;
	// mullw r8,r9,r10
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// subf r11,r8,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r8.s64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r4,r11,224
	ctx.r4.s64 = ctx.r11.s64 + 224;
	// bl 0x823190f8
	ctx.lr = 0x8231B8E4;
	sub_823190F8(ctx, base);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// subfe r3,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r11.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8231B7F0) {
	__imp__sub_8231B7F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8231B8F8) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// lis r7,-32252
	ctx.r7.s64 = -2113667072;
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// addi r3,r7,19716
	ctx.r3.s64 = ctx.r7.s64 + 19716;
	// lfs f31,5484(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f31.f64 = double(temp.f32);
	// addi r8,r8,19676
	ctx.r8.s64 = ctx.r8.s64 + 19676;
	// lfs f3,12240(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12240);
	ctx.f3.f64 = double(temp.f32);
	// li r7,132
	ctx.r7.s64 = 132;
	// lfs f1,19728(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 19728);
	ctx.f1.f64 = double(temp.f32);
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// bl 0x822e1660
	ctx.lr = 0x8231B948;
	sub_822E1660(ctx, base);
	// lis r31,-31834
	ctx.r31.s64 = -2086273024;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// addi r30,r31,-22200
	ctx.r30.s64 = ctx.r31.s64 + -22200;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lis r4,-32252
	ctx.r4.s64 = -2113667072;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f30,27440(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 27440);
	ctx.f30.f64 = double(temp.f32);
	// addi r8,r4,19628
	ctx.r8.s64 = ctx.r4.s64 + 19628;
	// stw r3,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r3.u32);
	// addi r3,r11,19612
	ctx.r3.s64 = ctx.r11.s64 + 19612;
	// li r7,132
	ctx.r7.s64 = 132;
	// lfs f1,7640(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 7640);
	ctx.f1.f64 = double(temp.f32);
	// fmr f3,f30
	ctx.f3.f64 = ctx.f30.f64;
	// bl 0x822e1660
	ctx.lr = 0x8231B984;
	sub_822E1660(ctx, base);
	// stw r3,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r3.u32);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// addi r6,r10,19576
	ctx.r6.s64 = ctx.r10.s64 + 19576;
	// addi r3,r9,19556
	ctx.r3.s64 = ctx.r9.s64 + 19556;
	// li r5,132
	ctx.r5.s64 = 132;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822e15d0
	ctx.lr = 0x8231B9A4;
	sub_822E15D0(ctx, base);
	// stw r3,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r3.u32);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r5,-32252
	ctx.r5.s64 = -2113667072;
	// lis r4,-32252
	ctx.r4.s64 = -2113667072;
	// addi r8,r5,19516
	ctx.r8.s64 = ctx.r5.s64 + 19516;
	// lfs f3,-19192(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -19192);
	ctx.f3.f64 = double(temp.f32);
	// addi r3,r4,19496
	ctx.r3.s64 = ctx.r4.s64 + 19496;
	// li r7,132
	ctx.r7.s64 = 132;
	// lfs f1,3096(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 3096);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822e1660
	ctx.lr = 0x8231B9D4;
	sub_822E1660(ctx, base);
	// stw r3,-22200(r31)
	PPC_STORE_U32(ctx.r31.u32 + -22200, ctx.r3.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// addi r8,r10,19432
	ctx.r8.s64 = ctx.r10.s64 + 19432;
	// addi r3,r9,19416
	ctx.r3.s64 = ctx.r9.s64 + 19416;
	// li r7,132
	ctx.r7.s64 = 132;
	// lfs f3,7652(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7652);
	ctx.f3.f64 = double(temp.f32);
	// bl 0x822e1660
	ctx.lr = 0x8231BA00;
	sub_822E1660(ctx, base);
	// stw r3,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r3.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
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

PPC_WEAK_FUNC(sub_8231B8F8) {
	__imp__sub_8231B8F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8231BA24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8231BA24) {
	__imp__sub_8231BA24(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8231BA28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// rlwinm r9,r10,0,19,17
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFDFFF;
	// stw r9,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// lfs f0,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,128(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 128, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8231BA28) {
	__imp__sub_8231BA28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8231BA44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8231BA44) {
	__imp__sub_8231BA44(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8231BA48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31834
	ctx.r11.s64 = -2086273024;
	// lfs f0,128(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r11,-22188
	ctx.r11.s64 = ctx.r11.s64 + -22188;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lfs f12,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f0,f12
	ctx.f11.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// fcmpu cr6,f13,f11
	ctx.cr6.compare(ctx.f13.f64, ctx.f11.f64);
	// bge cr6,0x8231baa4
	if (!ctx.cr6.lt) goto loc_8231BAA4;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lfs f12,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,0(r5)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// lfs f11,128(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// lfs f0,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fadds f9,f12,f0
	ctx.f9.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// fadds f13,f11,f10
	ctx.f13.f64 = double(float(ctx.f11.f64 + ctx.f10.f64));
	// fcmpu cr6,f9,f13
	ctx.cr6.compare(ctx.f9.f64, ctx.f13.f64);
	// ble cr6,0x8231ba9c
	if (!ctx.cr6.gt) goto loc_8231BA9C;
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
loc_8231BA9C:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_8231BAA4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8231BA48) {
	__imp__sub_8231BA48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8231BAAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8231BAAC) {
	__imp__sub_8231BAAC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8231BAB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31834
	ctx.r11.s64 = -2086273024;
	// lfs f0,128(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,-22184(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22184);
	// lfs f12,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fadds f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// fcmpu cr6,f13,f11
	ctx.cr6.compare(ctx.f13.f64, ctx.f11.f64);
	// bge cr6,0x8231bad8
	if (!ctx.cr6.lt) goto loc_8231BAD8;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8231BAD8:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8231BAB0) {
	__imp__sub_8231BAB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8231BAE0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r10,1800
	ctx.r10.s64 = 1800;
	// ori r9,r11,8192
	ctx.r9.u64 = ctx.r11.u64 | 8192;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// stw r9,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8231BAE0) {
	__imp__sub_8231BAE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8231BB04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8231BB04) {
	__imp__sub_8231BB04(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8231BB08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,1800
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1800, ctx.xer);
	// lfs f0,12168(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// ble cr6,0x8231bb40
	if (!ctx.cr6.gt) goto loc_8231BB40;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// rlwinm r8,r10,0,19,17
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFDFFF;
	// stw r8,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r8.u32);
	// lfs f13,5484(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5484);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,19732(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 19732);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,128(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 128, temp.u32);
	// b 0x8231bb84
	goto loc_8231BB84;
loc_8231BB40:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8231bb84
	if (!ctx.cr6.eq) goto loc_8231BB84;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,128(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,7640(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7640);
	ctx.f0.f64 = double(temp.f32);
	// fadds f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// fcmpu cr6,f12,f11
	ctx.cr6.compare(ctx.f12.f64, ctx.f11.f64);
	// bge cr6,0x8231bb74
	if (!ctx.cr6.lt) goto loc_8231BB74;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r10,1800
	ctx.r10.s64 = 1800;
	// lfs f0,19732(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 19732);
	ctx.f0.f64 = double(temp.f32);
	// b 0x8231bb80
	goto loc_8231BB80;
loc_8231BB74:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,1200
	ctx.r10.s64 = 1200;
	// lfs f0,2416(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2416);
	ctx.f0.f64 = double(temp.f32);
loc_8231BB80:
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
loc_8231BB84:
	// lis r11,-31834
	ctx.r11.s64 = -2086273024;
	// lwz r11,-22192(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22192);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lfs f13,40(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r3,40
	ctx.r11.s64 = ctx.r3.s64 + 40;
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f12,40(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// lfs f11,44(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f10,44(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// lfs f9,48(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// stfs f8,48(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8231BB08) {
	__imp__sub_8231BB08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8231BBC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8231BBC4) {
	__imp__sub_8231BBC4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8231BBC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31834
	ctx.r11.s64 = -2086273024;
	// lwz r11,-22192(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22192);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8231bbe8
	if (!ctx.cr6.eq) goto loc_8231BBE8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,12168(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_8231BBE8:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,1700
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1700, ctx.xer);
	// blt cr6,0x8231bc00
	if (ctx.cr6.lt) goto loc_8231BC00;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,14232(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14232);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_8231BC00:
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfs f0,19736(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 19736);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12168(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12168);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f1,f12,f0,f13
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f13.f64));
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8231BBC8) {
	__imp__sub_8231BBC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8231BC2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8231BC2C) {
	__imp__sub_8231BC2C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8231BC30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,1800
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1800, ctx.xer);
	// bgt cr6,0x8231bc40
	if (ctx.cr6.gt) goto loc_8231BC40;
	// b 0x8231bbc8
	sub_8231BBC8(ctx, base);
	return;
loc_8231BC40:
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// rlwinm r8,r10,0,19,17
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFDFFF;
	// stw r8,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r8.u32);
	// lfs f0,5484(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// lfs f1,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f1.f64 = double(temp.f32);
	// stfs f0,128(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 128, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8231BC30) {
	__imp__sub_8231BC30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8231BC64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8231BC64) {
	__imp__sub_8231BC64(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8231BC68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,36(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f12,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f11,f12
	ctx.cr6.compare(ctx.f11.f64, ctx.f12.f64);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// lis r11,-31834
	ctx.r11.s64 = -2086273024;
	// lfs f11,128(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	ctx.f11.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,-22184(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22184);
	// lfs f13,6020(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6020);
	ctx.f13.f64 = double(temp.f32);
	// lfs f10,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f10,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 + ctx.f11.f64));
	// fsubs f0,f9,f0
	ctx.f0.f64 = double(float(ctx.f9.f64 - ctx.f0.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x8231bcb4
	if (!ctx.cr6.lt) goto loc_8231BCB4;
	// stfs f12,48(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// blr 
	return;
loc_8231BCB4:
	// lwz r11,84(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f12,48(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f12.f64 = double(temp.f32);
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// std r9,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r9.u64);
	// lfd f11,-16(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// lfs f13,5488(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5488);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f9,f0,f13
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// frsp f8,f10
	ctx.f8.f64 = double(float(ctx.f10.f64));
	// fmuls f7,f8,f9
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f9.f64));
	// fsqrts f0,f7
	ctx.f0.f64 = double(float(sqrt(ctx.f7.f64)));
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// stfs f0,48(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8231BC68) {
	__imp__sub_8231BC68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8231BCF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8231BCF4) {
	__imp__sub_8231BCF4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8231BCF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31834
	ctx.r11.s64 = -2086273024;
	// lwz r11,-22192(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22192);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8231bd18
	if (!ctx.cr6.eq) goto loc_8231BD18;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,12168(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_8231BD18:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,1700
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1700, ctx.xer);
	// blt cr6,0x8231bd30
	if (ctx.cr6.lt) goto loc_8231BD30;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,14232(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14232);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_8231BD30:
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfs f0,19736(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 19736);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12168(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12168);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f1,f12,f0,f13
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f13.f64));
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8231BCF8) {
	__imp__sub_8231BCF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8231BD5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8231BD5C) {
	__imp__sub_8231BD5C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8231BD60) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8231BD60) {
	__imp__sub_8231BD60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8231BD68) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8231BD68) {
	__imp__sub_8231BD68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8231BD70) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8231BD70) {
	__imp__sub_8231BD70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8231BD78) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8231BD78) {
	__imp__sub_8231BD78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8231BD80) {
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
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,84(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// lfs f0,5488(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5488);
	ctx.f0.f64 = double(temp.f32);
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// extsw r7,r10
	ctx.r7.s64 = ctx.r10.s32;
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// rlwinm r6,r9,0,18,18
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2000;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// beq cr6,0x8231bde0
	if (ctx.cr6.eq) goto loc_8231BDE0;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,1800
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1800, ctx.xer);
	// bgt cr6,0x8231bde0
	if (ctx.cr6.gt) goto loc_8231BDE0;
	// bl 0x8231bcf8
	ctx.lr = 0x8231BDDC;
	sub_8231BCF8(ctx, base);
	// fdivs f11,f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f11.f64 / ctx.f1.f64));
loc_8231BDE0:
	// li r11,0
	ctx.r11.s64 = 0;
	// fsqrts f13,f11
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(sqrt(ctx.f11.f64)));
	// li r10,2047
	ctx.r10.s64 = 2047;
	// stw r11,48(r4)
	PPC_STORE_U32(ctx.r4.u32 + 48, ctx.r11.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,44(r4)
	PPC_STORE_U32(ctx.r4.u32 + 44, ctx.r11.u32);
	// lis r7,-31834
	ctx.r7.s64 = -2086273024;
	// stw r10,108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 108, ctx.r10.u32);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lwz r10,-22196(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + -22196);
	// lfs f0,3100(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 3100);
	ctx.f0.f64 = double(temp.f32);
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lfs f12,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f12.f64 = double(temp.f32);
	// lwz r4,4(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stfs f12,128(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 128, temp.u32);
	// rlwimi r5,r9,13,23,24
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r9.u32, 13) & 0x180) | (ctx.r5.u64 & 0xFFFFFFFFFFFFFE7F);
	// stfs f13,48(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lfs f11,708(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 708);
	ctx.f11.f64 = double(temp.f32);
	// rlwimi r5,r9,13,18,18
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r9.u32, 13) & 0x2000) | (ctx.r5.u64 & 0xFFFFFFFFFFFFDFFF);
	// stw r11,440(r3)
	PPC_STORE_U32(ctx.r3.u32 + 440, ctx.r11.u32);
	// stw r4,124(r3)
	PPC_STORE_U32(ctx.r3.u32 + 124, ctx.r4.u32);
	// stw r5,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r5.u32);
	// lfs f10,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f10,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 + ctx.f11.f64));
	// fsubs f8,f0,f9
	ctx.f8.f64 = double(float(ctx.f0.f64 - ctx.f9.f64));
	// fsel f7,f8,f9,f0
	ctx.f7.f64 = ctx.f8.f64 >= 0.0 ? ctx.f9.f64 : ctx.f0.f64;
	// stfs f7,708(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 708, temp.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8231BD80) {
	__imp__sub_8231BD80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8231BE60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f13,48(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f0,8336(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8336);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f12,48(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// lfs f11,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f7,112(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	ctx.f7.f64 = double(temp.f32);
	// lfs f9,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f5,f9,f9
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f9.f64));
	// lfs f4,116(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	ctx.f4.f64 = double(temp.f32);
	// fmadds f1,f11,f11,f5
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f5.f64));
	// lfs f3,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// fmr f8,f9
	ctx.f8.f64 = ctx.f9.f64;
	// lfs f2,120(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f9,f7,f9
	ctx.f9.f64 = double(float(ctx.f7.f64 * ctx.f9.f64));
	// lfs f0,12168(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// fmr f6,f11
	ctx.f6.f64 = ctx.f11.f64;
	// lfs f10,5484(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5484);
	ctx.f10.f64 = double(temp.f32);
	// fsqrts f13,f1
	ctx.f13.f64 = double(float(sqrt(ctx.f1.f64)));
	// fneg f12,f13
	ctx.f12.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fmadds f5,f4,f11,f9
	ctx.f5.f64 = double(float(ctx.f4.f64 * ctx.f11.f64 + ctx.f9.f64));
	// fsel f7,f12,f0,f13
	ctx.f7.f64 = ctx.f12.f64 >= 0.0 ? ctx.f0.f64 : ctx.f13.f64;
	// fmadds f3,f2,f3,f5
	ctx.f3.f64 = double(float(ctx.f2.f64 * ctx.f3.f64 + ctx.f5.f64));
	// fdivs f4,f0,f7
	ctx.f4.f64 = double(float(ctx.f0.f64 / ctx.f7.f64));
	// fcmpu cr6,f3,f10
	ctx.cr6.compare(ctx.f3.f64, ctx.f10.f64);
	// fmuls f12,f11,f4
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f4.f64));
	// fmuls f13,f4,f8
	ctx.f13.f64 = double(float(ctx.f4.f64 * ctx.f8.f64));
	// fmuls f11,f4,f10
	ctx.f11.f64 = double(float(ctx.f4.f64 * ctx.f10.f64));
	// bge cr6,0x8231bf3c
	if (!ctx.cr6.lt) goto loc_8231BF3C;
	// lfs f10,112(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	ctx.f10.f64 = double(temp.f32);
	// fmr f5,f2
	ctx.f5.f64 = ctx.f2.f64;
	// fmuls f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// lfs f8,116(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	ctx.f8.f64 = double(temp.f32);
	// fmr f7,f2
	ctx.f7.f64 = ctx.f2.f64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f4,112(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	ctx.f4.f64 = double(temp.f32);
	// fmr f6,f8
	ctx.f6.f64 = ctx.f8.f64;
	// lfs f10,13216(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 13216);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f3,f8,f12,f9
	ctx.f3.f64 = double(float(ctx.f8.f64 * ctx.f12.f64 + ctx.f9.f64));
	// fmadds f2,f2,f11,f3
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f11.f64 + ctx.f3.f64));
	// fmuls f1,f2,f10
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f10.f64));
	// fmadds f12,f8,f1,f12
	ctx.f12.f64 = double(float(ctx.f8.f64 * ctx.f1.f64 + ctx.f12.f64));
	// fmadds f11,f5,f1,f11
	ctx.f11.f64 = double(float(ctx.f5.f64 * ctx.f1.f64 + ctx.f11.f64));
	// fmadds f10,f4,f1,f13
	ctx.f10.f64 = double(float(ctx.f4.f64 * ctx.f1.f64 + ctx.f13.f64));
	// fmuls f9,f12,f12
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f8,f11,f11,f9
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f9.f64));
	// fmadds f7,f10,f10,f8
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f10.f64 + ctx.f8.f64));
	// fsqrts f6,f7
	ctx.f6.f64 = double(float(sqrt(ctx.f7.f64)));
	// fneg f5,f6
	ctx.f5.u64 = ctx.f6.u64 ^ 0x8000000000000000;
	// fsel f4,f5,f0,f6
	ctx.f4.f64 = ctx.f5.f64 >= 0.0 ? ctx.f0.f64 : ctx.f6.f64;
	// fdivs f3,f0,f4
	ctx.f3.f64 = double(float(ctx.f0.f64 / ctx.f4.f64));
	// fmuls f13,f3,f10
	ctx.f13.f64 = double(float(ctx.f3.f64 * ctx.f10.f64));
	// fmuls f12,f12,f3
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f3.f64));
loc_8231BF3C:
	// lis r11,-31834
	ctx.r11.s64 = -2086273024;
	// lwz r11,-22200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22200);
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f13,40(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f12,44(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// rlwinm r9,r10,0,29,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// stw r9,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8231BE60) {
	__imp__sub_8231BE60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8231BF68) {
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
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8231bf94
	if (ctx.cr6.eq) goto loc_8231BF94;
	// li r4,21
	ctx.r4.s64 = 21;
	// b 0x8231bfa8
	goto loc_8231BFA8;
loc_8231BF94:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x82323868
	ctx.lr = 0x8231BF9C;
	sub_82323868(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8231bfb4
	if (ctx.cr6.eq) goto loc_8231BFB4;
loc_8231BFA8:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r3,109
	ctx.r3.s64 = 109;
	// bl 0x82322348
	ctx.lr = 0x8231BFB4;
	sub_82322348(ctx, base);
loc_8231BFB4:
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

PPC_WEAK_FUNC(sub_8231BF68) {
	__imp__sub_8231BF68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8231BFC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8231BFD0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r10,r11,0,13,13
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8231bffc
	if (ctx.cr6.eq) goto loc_8231BFFC;
loc_8231BFF0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_8231BFFC:
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r9,124(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cmpwi cr6,r8,500
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 500, ctx.xer);
	// blt cr6,0x8231bff0
	if (ctx.cr6.lt) goto loc_8231BFF0;
	// rlwinm r10,r11,0,21,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8231bff0
	if (!ctx.cr6.eq) goto loc_8231BFF0;
	// rlwinm r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8231bff0
	if (!ctx.cr6.eq) goto loc_8231BFF0;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bge cr6,0x8231bff0
	if (!ctx.cr6.lt) goto loc_8231BFF0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823229d8
	ctx.lr = 0x8231C03C;
	sub_823229D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8231bff0
	if (!ctx.cr6.eq) goto loc_8231BFF0;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r10,r11,0,21,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8231bff0
	if (ctx.cr6.eq) goto loc_8231BFF0;
	// lwz r10,72(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// rlwinm r9,r10,0,21,21
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x400;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8231c074
	if (ctx.cr6.eq) goto loc_8231C074;
	// rlwinm r11,r11,0,22,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFBFF;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_8231C074:
	// lis r11,-31834
	ctx.r11.s64 = -2086273024;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,-22184(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22184);
	// lfs f1,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8231bd80
	ctx.lr = 0x8231C08C;
	sub_8231BD80(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8231bf68
	ctx.lr = 0x8231C098;
	sub_8231BF68(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r9,r10,0,28,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8231c0b4
	if (ctx.cr6.eq) goto loc_8231C0B4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8231be60
	ctx.lr = 0x8231C0B4;
	sub_8231BE60(ctx, base);
loc_8231C0B4:
	// lwz r11,0(r13)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,24
	ctx.r10.s64 = 24;
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8231c0f8
	if (ctx.cr6.eq) goto loc_8231C0F8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82319440
	ctx.lr = 0x8231C0D0;
	sub_82319440(ctx, base);
	// lbz r11,30(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 30);
	// addi r7,r29,124
	ctx.r7.s64 = ctx.r29.s64 + 124;
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// blt cr6,0x8231c0f4
	if (ctx.cr6.lt) goto loc_8231C0F4;
	// li r4,4
	ctx.r4.s64 = 4;
loc_8231C0F4:
	// bl 0x82319240
	ctx.lr = 0x8231C0F8;
	sub_82319240(ctx, base);
loc_8231C0F8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8231BFC8) {
	__imp__sub_8231BFC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8231C104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8231C104) {
	__imp__sub_8231C104(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8231C108) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r6,r11,20488
	ctx.r6.s64 = ctx.r11.s64 + 20488;
	// addi r3,r10,20472
	ctx.r3.s64 = ctx.r10.s64 + 20472;
	// li r5,132
	ctx.r5.s64 = 132;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x822e15d0
	ctx.lr = 0x8231C144;
	sub_822E15D0(ctx, base);
	// lis r31,-31834
	ctx.r31.s64 = -2086273024;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r30,r31,-22176
	ctx.r30.s64 = ctx.r31.s64 + -22176;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// addi r6,r9,20436
	ctx.r6.s64 = ctx.r9.s64 + 20436;
	// addi r3,r8,20420
	ctx.r3.s64 = ctx.r8.s64 + 20420;
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// li r5,132
	ctx.r5.s64 = 132;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822e15d0
	ctx.lr = 0x8231C170;
	sub_822E15D0(ctx, base);
	// stw r3,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r3.u32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lis r4,-32252
	ctx.r4.s64 = -2113667072;
	// lis r3,-32252
	ctx.r3.s64 = -2113667072;
	// lfs f3,3096(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3096);
	ctx.f3.f64 = double(temp.f32);
	// addi r8,r4,20344
	ctx.r8.s64 = ctx.r4.s64 + 20344;
	// lfs f31,5484(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 5484);
	ctx.f31.f64 = double(temp.f32);
	// addi r3,r3,20320
	ctx.r3.s64 = ctx.r3.s64 + 20320;
	// li r7,132
	ctx.r7.s64 = 132;
	// lfs f1,5996(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 5996);
	ctx.f1.f64 = double(temp.f32);
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// bl 0x822e1660
	ctx.lr = 0x8231C1A8;
	sub_822E1660(ctx, base);
	// stw r3,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r3.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r7,-32252
	ctx.r7.s64 = -2113667072;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// addi r3,r7,20300
	ctx.r3.s64 = ctx.r7.s64 + 20300;
	// addi r8,r9,20248
	ctx.r8.s64 = ctx.r9.s64 + 20248;
	// lfs f3,7932(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7932);
	ctx.f3.f64 = double(temp.f32);
	// li r7,132
	ctx.r7.s64 = 132;
	// lfs f1,6020(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6020);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822e1660
	ctx.lr = 0x8231C1D8;
	sub_822E1660(ctx, base);
	// stw r3,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r3.u32);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lis r4,-32252
	ctx.r4.s64 = -2113667072;
	// lis r3,-32252
	ctx.r3.s64 = -2113667072;
	// addi r8,r4,20176
	ctx.r8.s64 = ctx.r4.s64 + 20176;
	// lfs f30,5812(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 5812);
	ctx.f30.f64 = double(temp.f32);
	// addi r3,r3,20156
	ctx.r3.s64 = ctx.r3.s64 + 20156;
	// lfs f29,6024(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 6024);
	ctx.f29.f64 = double(temp.f32);
	// li r7,132
	ctx.r7.s64 = 132;
	// fmr f3,f30
	ctx.f3.f64 = ctx.f30.f64;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x822e1660
	ctx.lr = 0x8231C210;
	sub_822E1660(ctx, base);
	// stw r3,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r3.u32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// addi r8,r11,20092
	ctx.r8.s64 = ctx.r11.s64 + 20092;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// addi r3,r10,20072
	ctx.r3.s64 = ctx.r10.s64 + 20072;
	// li r7,132
	ctx.r7.s64 = 132;
	// bl 0x822e1660
	ctx.lr = 0x8231C238;
	sub_822E1660(ctx, base);
	// stw r3,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r3.u32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// lis r6,-32252
	ctx.r6.s64 = -2113667072;
	// addi r8,r9,20008
	ctx.r8.s64 = ctx.r9.s64 + 20008;
	// addi r3,r6,19972
	ctx.r3.s64 = ctx.r6.s64 + 19972;
	// lfs f3,6912(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 6912);
	ctx.f3.f64 = double(temp.f32);
	// li r7,132
	ctx.r7.s64 = 132;
	// bl 0x822e1660
	ctx.lr = 0x8231C264;
	sub_822E1660(ctx, base);
	// stw r3,-22176(r31)
	PPC_STORE_U32(ctx.r31.u32 + -22176, ctx.r3.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f29,-48(r1)
	ctx.fpscr.disableFlushMode();
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

PPC_WEAK_FUNC(sub_8231C108) {
	__imp__sub_8231C108(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8231C28C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8231C28C) {
	__imp__sub_8231C28C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8231C290) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31834
	ctx.r11.s64 = -2086273024;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r11,-22152(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22152);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// li r3,17
	ctx.r3.s64 = 17;
	// addi r4,r11,-27340
	ctx.r4.s64 = ctx.r11.s64 + -27340;
	// b 0x82280900
	sub_82280900(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8231C290) {
	__imp__sub_8231C290(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8231C2B8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8231C2B8) {
	__imp__sub_8231C2B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8231C2BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8231C2BC) {
	__imp__sub_8231C2BC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8231C2C0) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8231C2C0) {
	__imp__sub_8231C2C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8231C2C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31834
	ctx.r11.s64 = -2086273024;
	// lwz r3,-22180(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22180);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8231C2C8) {
	__imp__sub_8231C2C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8231C2D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8231C2D4) {
	__imp__sub_8231C2D4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8231C2D8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lis r8,-32191
	ctx.r8.s64 = -2109669376;
	// lis r9,-31834
	ctx.r9.s64 = -2086273024;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r7,r8,31432
	ctx.r7.s64 = ctx.r8.s64 + 31432;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,-22180(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + -22180);
	// lwzx r4,r5,r7
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r7.u32);
	// b 0x822f3f40
	sub_822F3F40(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8231C2D8) {
	__imp__sub_8231C2D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8231C300) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8231c318
	if (!ctx.cr6.eq) goto loc_8231C318;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8231C318:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lis r9,-32191
	ctx.r9.s64 = -2109669376;
	// lis r8,-31834
	ctx.r8.s64 = -2086273024;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r9,31432
	ctx.r9.s64 = ctx.r9.s64 + 31432;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r6,r9,4
	ctx.r6.s64 = ctx.r9.s64 + 4;
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,-22180(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + -22180);
	// lwzx r4,r5,r6
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r6.u32);
	// b 0x822f3f40
	sub_822F3F40(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8231C300) {
	__imp__sub_8231C300(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8231C344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8231C344) {
	__imp__sub_8231C344(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8231C348) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x8231C350;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// lis r29,-31834
	ctx.r29.s64 = -2086273024;
	// addi r30,r11,31432
	ctx.r30.s64 = ctx.r11.s64 + 31432;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r3,-22180(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -22180);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r10,r30
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// bl 0x822f3f40
	ctx.lr = 0x8231C380;
	sub_822F3F40(ctx, base);
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8231c3b4
	if (ctx.cr6.eq) goto loc_8231C3B4;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r9,r30,4
	ctx.r9.s64 = ctx.r30.s64 + 4;
	// lwz r3,-22180(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -22180);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r7,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// bl 0x822f3f40
	ctx.lr = 0x8231C3B4;
	sub_822F3F40(ctx, base);
loc_8231C3B4:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, ctx.xer);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bgt cr6,0x8231c3dc
	if (ctx.cr6.gt) goto loc_8231C3DC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_8231C3DC:
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r9,r30,4
	ctx.r9.s64 = ctx.r30.s64 + 4;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r7,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8231C348) {
	__imp__sub_8231C348(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8231C3F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8231C3F4) {
	__imp__sub_8231C3F4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8231C3F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x8231C400;
	__savegprlr_25(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// lis r28,-31834
	ctx.r28.s64 = -2086273024;
	// addi r29,r11,31432
	ctx.r29.s64 = ctx.r11.s64 + 31432;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r3,-22180(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -22180);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r10,r29
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r29.u32);
	// bl 0x822f3f40
	ctx.lr = 0x8231C438;
	sub_822F3F40(ctx, base);
	// lwz r9,12(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x8231c454
	if (!ctx.cr6.eq) goto loc_8231C454;
	// li r25,0
	ctx.r25.s64 = 0;
	// b 0x8231c478
	goto loc_8231C478;
loc_8231C454:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r9,r29,4
	ctx.r9.s64 = ctx.r29.s64 + 4;
	// lwz r3,-22180(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -22180);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r7,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// bl 0x822f3f40
	ctx.lr = 0x8231C474;
	sub_822F3F40(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
loc_8231C478:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmpw cr6,r27,r26
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r26.s32, ctx.xer);
	// lwz r3,-22180(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -22180);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// bgt cr6,0x8231c4e4
	if (ctx.cr6.gt) goto loc_8231C4E4;
	// extsw r10,r26
	ctx.r10.s64 = ctx.r26.s32;
	// extsw r9,r27
	ctx.r9.s64 = ctx.r27.s32;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f0
	ctx.f11.f64 = double(ctx.f0.s64);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r7,r29
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r29.u32);
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// fdivs f1,f10,f9
	ctx.f1.f64 = double(float(ctx.f10.f64 / ctx.f9.f64));
	// bl 0x822f46b8
	ctx.lr = 0x8231C4D0;
	sub_822F46B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f1,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822d6988
	ctx.lr = 0x8231C4DC;
	sub_822D6988(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_8231C4E4:
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f1,12168(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12168);
	ctx.f1.f64 = double(temp.f32);
	// lwzx r4,r7,r29
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r29.u32);
	// bl 0x822f46b8
	ctx.lr = 0x8231C504;
	sub_822F46B8(ctx, base);
	// subf r6,r26,r27
	ctx.r6.s64 = ctx.r27.s64 - ctx.r26.s64;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// extsw r5,r25
	ctx.r5.s64 = ctx.r25.s32;
	// lwz r3,-22180(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -22180);
	// extsw r4,r6
	ctx.r4.s64 = ctx.r6.s32;
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// fcfid f11,f13
	ctx.f11.f64 = double(ctx.f13.s64);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// addi r10,r29,4
	ctx.r10.s64 = ctx.r29.s64 + 4;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// lwzx r4,r9,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// fdivs f1,f9,f10
	ctx.f1.f64 = double(float(ctx.f9.f64 / ctx.f10.f64));
	// bl 0x822f46b8
	ctx.lr = 0x8231C55C;
	sub_822F46B8(ctx, base);
	// lfs f8,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f7,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f4.f64 = double(temp.f32);
	// fadds f3,f8,f5
	ctx.f3.f64 = double(float(ctx.f8.f64 + ctx.f5.f64));
	// lfs f2,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f2.f64 = double(temp.f32);
	// fadds f1,f7,f4
	ctx.f1.f64 = double(float(ctx.f7.f64 + ctx.f4.f64));
	// fadds f0,f6,f2
	ctx.f0.f64 = double(float(ctx.f6.f64 + ctx.f2.f64));
	// stfs f3,0(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// stfs f1,4(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// lfs f1,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822d6988
	ctx.lr = 0x8231C598;
	sub_822D6988(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8231C3F8) {
	__imp__sub_8231C3F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8231C5A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x8231C5A8;
	__savegprlr_25(ctx, base);
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x823de018
	ctx.lr = 0x8231C5B0;
	__savefpr_24(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31834
	ctx.r31.s64 = -2086273024;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r11,-22180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22180);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8231c840
	if (!ctx.cr6.eq) goto loc_8231C840;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r4,11
	ctx.r4.s64 = 11;
	// addi r3,r11,20704
	ctx.r3.s64 = ctx.r11.s64 + 20704;
	// bl 0x822f28a8
	ctx.lr = 0x8231C5D8;
	sub_822F28A8(ctx, base);
	// stw r3,-22180(r31)
	PPC_STORE_U32(ctx.r31.u32 + -22180, ctx.r3.u32);
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r30,r11,31432
	ctx.r30.s64 = ctx.r11.s64 + 31432;
	// li r7,10
	ctx.r7.s64 = 10;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r5,84(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// bl 0x822f27b0
	ctx.lr = 0x8231C600;
	sub_822F27B0(ctx, base);
	// addi r29,r30,84
	ctx.r29.s64 = ctx.r30.s64 + 84;
	// li r31,1
	ctx.r31.s64 = 1;
loc_8231C608:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwzu r5,4(r29)
	ea = 4 + ctx.r29.u32;
	ctx.r5.u64 = PPC_LOAD_U32(ea);
	ctx.r29.u32 = ea;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82321c50
	ctx.lr = 0x8231C618;
	sub_82321C50(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 11, ctx.xer);
	// blt cr6,0x8231c608
	if (ctx.cr6.lt) goto loc_8231C608;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lis r6,-32252
	ctx.r6.s64 = -2113667072;
	// lfd f24,20696(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f24.u64 = PPC_LOAD_U64(ctx.r11.u32 + 20696);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lfs f27,25340(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 25340);
	ctx.f27.f64 = double(temp.f32);
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// lfd f25,20688(r9)
	ctx.f25.u64 = PPC_LOAD_U64(ctx.r9.u32 + 20688);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f28,-21688(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -21688);
	ctx.f28.f64 = double(temp.f32);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lfd f30,20768(r7)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r7.u32 + 20768);
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// lfd f26,20680(r6)
	ctx.f26.u64 = PPC_LOAD_U64(ctx.r6.u32 + 20680);
	// lfs f29,6056(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 6056);
	ctx.f29.f64 = double(temp.f32);
	// addi r29,r30,8
	ctx.r29.s64 = ctx.r30.s64 + 8;
	// lfs f31,12168(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12168);
	ctx.f31.f64 = double(temp.f32);
	// addi r27,r11,20624
	ctx.r27.s64 = ctx.r11.s64 + 20624;
	// addi r26,r10,20568
	ctx.r26.s64 = ctx.r10.s64 + 20568;
	// addi r25,r9,20512
	ctx.r25.s64 = ctx.r9.s64 + 20512;
loc_8231C680:
	// lwz r31,-8(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + -8);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822f46b8
	ctx.lr = 0x8231C69C;
	sub_822F46B8(ctx, base);
	// lfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// fsubs f0,f1,f29
	ctx.f0.f64 = double(float(ctx.f1.f64 - ctx.f29.f64));
	// fabs f13,f0
	ctx.f13.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f13,f31
	ctx.cr6.compare(ctx.f13.f64, ctx.f31.f64);
	// ble cr6,0x8231c6dc
	if (!ctx.cr6.gt) goto loc_8231C6DC;
	// stfd f26,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.f26.u64);
	// ld r7,48(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 48);
	// stfd f1,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f1.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// addi r11,r30,84
	ctx.r11.s64 = ctx.r30.s64 + 84;
	// fmr f2,f26
	ctx.f2.f64 = ctx.f26.f64;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwzx r5,r10,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x822830e8
	ctx.lr = 0x8231C6DC;
	sub_822830E8(ctx, base);
loc_8231C6DC:
	// lfs f1,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f1.f64 = double(temp.f32);
	// fabs f0,f1
	ctx.f0.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x8231c718
	if (!ctx.cr6.gt) goto loc_8231C718;
	// stfd f30,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.f30.u64);
	// ld r7,48(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 48);
	// stfd f1,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f1.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// addi r11,r30,84
	ctx.r11.s64 = ctx.r30.s64 + 84;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwzx r5,r10,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x822830e8
	ctx.lr = 0x8231C718;
	sub_822830E8(ctx, base);
loc_8231C718:
	// lfs f2,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f1.f64 = double(temp.f32);
	// fsubs f0,f1,f2
	ctx.f0.f64 = double(float(ctx.f1.f64 - ctx.f2.f64));
	// fabs f13,f0
	ctx.f13.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f13,f31
	ctx.cr6.compare(ctx.f13.f64, ctx.f31.f64);
	// ble cr6,0x8231c758
	if (!ctx.cr6.gt) goto loc_8231C758;
	// stfd f1,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f1.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// stfd f2,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.f2.u64);
	// addi r11,r30,84
	ctx.r11.s64 = ctx.r30.s64 + 84;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwzx r5,r10,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// ld r7,48(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 48);
	// bl 0x822830e8
	ctx.lr = 0x8231C758;
	sub_822830E8(ctx, base);
loc_8231C758:
	// lwz r31,-4(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822f46b8
	ctx.lr = 0x8231C774;
	sub_822F46B8(ctx, base);
	// lfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// fsubs f0,f1,f28
	ctx.f0.f64 = double(float(ctx.f1.f64 - ctx.f28.f64));
	// fabs f13,f0
	ctx.f13.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f13,f31
	ctx.cr6.compare(ctx.f13.f64, ctx.f31.f64);
	// ble cr6,0x8231c7b4
	if (!ctx.cr6.gt) goto loc_8231C7B4;
	// stfd f1,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f1.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// stfd f25,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.f25.u64);
	// ld r7,48(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 48);
	// addi r11,r30,84
	ctx.r11.s64 = ctx.r30.s64 + 84;
	// fmr f2,f25
	ctx.f2.f64 = ctx.f25.f64;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwzx r5,r10,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x822830e8
	ctx.lr = 0x8231C7B4;
	sub_822830E8(ctx, base);
loc_8231C7B4:
	// lfs f1,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f1.f64 = double(temp.f32);
	// fabs f0,f1
	ctx.f0.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x8231c7f0
	if (!ctx.cr6.gt) goto loc_8231C7F0;
	// stfd f30,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.f30.u64);
	// ld r7,48(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 48);
	// stfd f1,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f1.u64);
	// addi r11,r30,84
	ctx.r11.s64 = ctx.r30.s64 + 84;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwzx r5,r10,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// bl 0x822830e8
	ctx.lr = 0x8231C7F0;
	sub_822830E8(ctx, base);
loc_8231C7F0:
	// lfs f1,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f1.f64 = double(temp.f32);
	// fsubs f0,f1,f27
	ctx.f0.f64 = double(float(ctx.f1.f64 - ctx.f27.f64));
	// fabs f13,f0
	ctx.f13.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f13,f31
	ctx.cr6.compare(ctx.f13.f64, ctx.f31.f64);
	// ble cr6,0x8231c830
	if (!ctx.cr6.gt) goto loc_8231C830;
	// stfd f24,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.f24.u64);
	// addi r11,r30,84
	ctx.r11.s64 = ctx.r30.s64 + 84;
	// stfd f1,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f1.u64);
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// fmr f2,f24
	ctx.f2.f64 = ctx.f24.f64;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwzx r5,r10,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// ld r7,48(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 48);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// bl 0x822830e8
	ctx.lr = 0x8231C830;
	sub_822830E8(ctx, base);
loc_8231C830:
	// addi r29,r29,12
	ctx.r29.s64 = ctx.r29.s64 + 12;
	// addi r11,r30,92
	ctx.r11.s64 = ctx.r30.s64 + 92;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8231c680
	if (ctx.cr6.lt) goto loc_8231C680;
loc_8231C840:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x823de064
	ctx.lr = 0x8231C84C;
	__restfpr_24(ctx, base);
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8231C5A0) {
	__imp__sub_8231C5A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8231C850) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31834
	ctx.r10.s64 = -2086273024;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-22180(r10)
	PPC_STORE_U32(ctx.r10.u32 + -22180, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8231C850) {
	__imp__sub_8231C850(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8231C860) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// fsubs f13,f2,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f2.f64 - ctx.f1.f64));
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,31432
	ctx.r11.s64 = ctx.r11.s64 + 31432;
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fsubs f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// fabs f0,f0
	ctx.f0.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fabs f12,f12
	ctx.f12.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bge cr6,0x8231c898
	if (!ctx.cr6.lt) goto loc_8231C898;
	// li r3,1
	ctx.r3.s64 = 1;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
loc_8231C898:
	// lfs f12,32(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// fabs f12,f12
	ctx.f12.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bge cr6,0x8231c8b4
	if (!ctx.cr6.lt) goto loc_8231C8B4;
	// li r3,2
	ctx.r3.s64 = 2;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
loc_8231C8B4:
	// lfs f12,44(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// fabs f12,f12
	ctx.f12.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bge cr6,0x8231c8d0
	if (!ctx.cr6.lt) goto loc_8231C8D0;
	// li r3,3
	ctx.r3.s64 = 3;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
loc_8231C8D0:
	// lfs f12,56(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// fabs f12,f12
	ctx.f12.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bge cr6,0x8231c8ec
	if (!ctx.cr6.lt) goto loc_8231C8EC;
	// li r3,4
	ctx.r3.s64 = 4;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
loc_8231C8EC:
	// lfs f12,68(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// fabs f12,f12
	ctx.f12.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bge cr6,0x8231c908
	if (!ctx.cr6.lt) goto loc_8231C908;
	// li r3,5
	ctx.r3.s64 = 5;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
loc_8231C908:
	// lfs f12,80(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// fabs f12,f13
	ctx.f12.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// li r3,6
	ctx.r3.s64 = 6;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8231C860) {
	__imp__sub_8231C860(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8231C924) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8231C924) {
	__imp__sub_8231C924(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8231C928) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x8231C930;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,48(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r28,0(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8231c978
	if (!ctx.cr6.eq) goto loc_8231C978;
	// lfs f0,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,36(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 36, temp.u32);
	// lfs f13,28(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,40(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 40, temp.u32);
	// lfs f12,32(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,44(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 44, temp.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_8231C978:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r11,r11,-27184
	ctx.r11.s64 = ctx.r11.s64 + -27184;
	// addi r10,r1,108
	ctx.r10.s64 = ctx.r1.s64 + 108;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8231C990:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8231c990
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8231C990;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f12,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f11.f64 = double(temp.f32);
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// lfs f10,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f10.f64 = double(temp.f32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lfs f9,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lfs f0,-21688(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -21688);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// lfs f8,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f7,f13,f0,f12
	ctx.f7.f64 = double(float(ctx.f13.f64 * ctx.f0.f64 + ctx.f12.f64));
	// lfs f13,13220(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 13220);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f6,f9,f0,f11
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f0.f64 + ctx.f11.f64));
	// fmadds f5,f8,f0,f10
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f0.f64 + ctx.f10.f64));
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f11,100(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stfs f10,104(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lwz r9,132(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 132);
	// stfs f13,120(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// addi r30,r31,24
	ctx.r30.s64 = ctx.r31.s64 + 24;
	// stfs f13,132(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f7,80(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f6,84(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f5,88(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r8,256(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 256);
	// bl 0x82322770
	ctx.lr = 0x8231CA14;
	sub_82322770(ctx, base);
	// lbz r8,185(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 185);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8231cac8
	if (!ctx.cr6.eq) goto loc_8231CAC8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,144(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f0.f64 = double(temp.f32);
	// lfs f31,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f31.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// blt cr6,0x8231cac8
	if (ctx.cr6.lt) goto loc_8231CAC8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// lfs f0,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lfs f12,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// lfs f13,7640(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7640);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// fsubs f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f12,100(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f11,88(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r9,132(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 132);
	// lwz r8,256(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 256);
	// bl 0x82322770
	ctx.lr = 0x8231CA7C;
	sub_82322770(ctx, base);
	// lbz r9,185(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 185);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8231cac8
	if (!ctx.cr6.eq) goto loc_8231CAC8;
	// lfs f12,144(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f31
	ctx.cr6.compare(ctx.f12.f64, ctx.f31.f64);
	// blt cr6,0x8231cac8
	if (ctx.cr6.lt) goto loc_8231CAC8;
	// lfs f0,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f10,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f9.f64 = double(temp.f32);
	// stfs f10,36(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// stfs f9,40(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// stfs f0,44(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// fmadds f8,f11,f12,f13
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f12.f64 + ctx.f13.f64));
	// stfs f8,44(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_8231CAC8:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// rlwinm r10,r11,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r10,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r10.u32);
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,36(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// lfs f13,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,40(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// lfs f12,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,44(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8231C928) {
	__imp__sub_8231C928(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8231CAF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x8231CB00;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r31,r29,472
	ctx.r31.s64 = ctx.r29.s64 + 472;
	// bl 0x822d4ed0
	ctx.lr = 0x8231CB18;
	sub_822D4ED0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f1,472(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 472, temp.u32);
	// stw r11,476(r29)
	PPC_STORE_U32(ctx.r29.u32 + 476, ctx.r11.u32);
	// lfs f2,32(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,20(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8231c860
	ctx.lr = 0x8231CB30;
	sub_8231C860(ctx, base);
	// stw r3,480(r29)
	PPC_STORE_U32(ctx.r29.u32 + 480, ctx.r3.u32);
	// lwz r9,48(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// rlwinm r8,r9,0,27,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// stw r8,484(r29)
	PPC_STORE_U32(ctx.r29.u32 + 484, ctx.r8.u32);
	// rotlwi r11,r3,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// lis r10,-32191
	ctx.r10.s64 = -2109669376;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r28,r10,31432
	ctx.r28.s64 = ctx.r10.s64 + 31432;
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lis r27,-31834
	ctx.r27.s64 = -2086273024;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,-22180(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + -22180);
	// lwzx r4,r6,r28
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r28.u32);
	// bl 0x822f3f40
	ctx.lr = 0x8231CB68;
	sub_822F3F40(ctx, base);
	// lwz r5,484(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 484);
	// clrlwi r4,r5,31
	ctx.r4.u64 = ctx.r5.u32 & 0x1;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x8231cb84
	if (!ctx.cr6.eq) goto loc_8231CB84;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8231cba4
	goto loc_8231CBA4;
loc_8231CB84:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r9,r28,4
	ctx.r9.s64 = ctx.r28.s64 + 4;
	// lwz r3,-22180(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + -22180);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r7,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// bl 0x822f3f40
	ctx.lr = 0x8231CBA4;
	sub_822F3F40(ctx, base);
loc_8231CBA4:
	// add r4,r26,r3
	ctx.r4.u64 = ctx.r26.u64 + ctx.r3.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8231c3f8
	ctx.lr = 0x8231CBB4;
	sub_8231C3F8(ctx, base);
	// lfs f0,36(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// li r4,172
	ctx.r4.s64 = 172;
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f11.f64 = double(temp.f32);
	// stfs f12,28(r29)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r29.u32 + 28, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f9,40(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f9,f11
	ctx.f8.f64 = double(float(ctx.f9.f64 - ctx.f11.f64));
	// stfs f8,32(r29)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r29.u32 + 32, temp.u32);
	// lfs f10,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f10.f64 = double(temp.f32);
	// lfs f7,44(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f7,f10
	ctx.f6.f64 = double(float(ctx.f7.f64 - ctx.f10.f64));
	// stfs f6,36(r29)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r29.u32 + 36, temp.u32);
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// ori r10,r11,4
	ctx.r10.u64 = ctx.r11.u64 | 4;
	// stw r10,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r10.u32);
	// bl 0x82322840
	ctx.lr = 0x8231CBFC;
	sub_82322840(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8231CAF8) {
	__imp__sub_8231CAF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8231CC04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8231CC04) {
	__imp__sub_8231CC04(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8231CC08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x8231CC10;
	__savegprlr_26(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stfd f1,24(r1)
	PPC_STORE_U64(ctx.r1.u32 + 24, ctx.f1.u64);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// ld r4,24(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 24);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// addi r3,r11,20904
	ctx.r3.s64 = ctx.r11.s64 + 20904;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// bl 0x822e84f0
	ctx.lr = 0x8231CC40;
	sub_822E84F0(ctx, base);
	// lis r27,-31834
	ctx.r27.s64 = -2086273024;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r11,-22152(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -22152);
	// addi r26,r10,-27340
	ctx.r26.s64 = ctx.r10.s64 + -27340;
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8231cc6c
	if (ctx.cr6.eq) goto loc_8231CC6C;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r3,17
	ctx.r3.s64 = 17;
	// bl 0x82280900
	ctx.lr = 0x8231CC6C;
	sub_82280900(ctx, base);
loc_8231CC6C:
	// lfs f0,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fadds f10,f0,f31
	ctx.f10.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f11,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// lfs f9,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f9.f64 = double(temp.f32);
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// lfs f13,6056(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6056);
	ctx.f13.f64 = double(temp.f32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lfs f8,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f7,f12,f13,f11
	ctx.f7.f64 = double(float(ctx.f12.f64 * ctx.f13.f64 + ctx.f11.f64));
	// lfs f6,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f5,f8,f13,f9
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f13.f64 + ctx.f9.f64));
	// lfs f0,7932(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 7932);
	ctx.f0.f64 = double(temp.f32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lfs f12,5484(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f12.f64 = double(temp.f32);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// stfs f11,96(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// fmadds f4,f6,f13,f10
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f13.f64 + ctx.f10.f64));
	// stfs f10,104(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f9,100(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lwz r8,256(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 256);
	// stfs f12,112(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f12,116(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f0,124(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f7,80(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f5,84(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f4,88(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x823227a8
	ctx.lr = 0x8231CCFC;
	sub_823227A8(ctx, base);
	// lbz r6,185(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 185);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x8231ce70
	if (!ctx.cr6.eq) goto loc_8231CE70;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,144(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f0.f64 = double(temp.f32);
	// lfs f31,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f31.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// blt cr6,0x8231ce70
	if (ctx.cr6.lt) goto loc_8231CE70;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// lfs f11,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// lfs f10,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f10.f64 = double(temp.f32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lfs f0,7640(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7640);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// fadds f9,f13,f0
	ctx.f9.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f11,96(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f10,100(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stfs f9,88(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r8,256(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 256);
	// bl 0x823227a8
	ctx.lr = 0x8231CD68;
	sub_823227A8(ctx, base);
	// lbz r9,185(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 185);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8231ce54
	if (!ctx.cr6.eq) goto loc_8231CE54;
	// lfs f11,144(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f11,f31
	ctx.cr6.compare(ctx.f11.f64, ctx.f31.f64);
	// beq cr6,0x8231ce54
	if (ctx.cr6.eq) goto loc_8231CE54;
	// lbz r10,186(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 186);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8231cda8
	if (!ctx.cr6.eq) goto loc_8231CDA8;
	// lwz r11,-22152(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -22152);
	// lbz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8231ce94
	if (ctx.cr6.eq) goto loc_8231CE94;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r5,r11,20868
	ctx.r5.s64 = ctx.r11.s64 + 20868;
	// b 0x8231ce88
	goto loc_8231CE88;
loc_8231CDA8:
	// lfs f13,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
	// addi r6,r31,24
	ctx.r6.s64 = ctx.r31.s64 + 24;
	// fsubs f10,f13,f12
	ctx.f10.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// lfs f9,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f8.f64 = double(temp.f32);
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// stfs f9,24(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// lfs f0,13220(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 13220);
	ctx.f0.f64 = double(temp.f32);
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// stfs f8,28(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// stfs f13,32(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// fmadds f7,f10,f11,f12
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f11.f64 + ctx.f12.f64));
	// stfs f7,32(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// lwz r8,256(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 256);
	// bl 0x823227a8
	ctx.lr = 0x8231CE00;
	sub_823227A8(ctx, base);
	// lwz r11,-22152(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -22152);
	// lbz r9,185(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 185);
	// lbz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8231ce28
	if (ctx.cr6.eq) goto loc_8231CE28;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8231ce94
	if (ctx.cr6.eq) goto loc_8231CE94;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r5,r11,20816
	ctx.r5.s64 = ctx.r11.s64 + 20816;
	// b 0x8231ce88
	goto loc_8231CE88;
loc_8231CE28:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8231ce44
	if (ctx.cr6.eq) goto loc_8231CE44;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r5,r11,20796
	ctx.r5.s64 = ctx.r11.s64 + 20796;
	// li r3,17
	ctx.r3.s64 = 17;
	// bl 0x82280900
	ctx.lr = 0x8231CE44;
	sub_82280900(ctx, base);
loc_8231CE44:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_8231CE54:
	// lwz r11,-22152(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -22152);
	// lbz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8231ce94
	if (ctx.cr6.eq) goto loc_8231CE94;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r5,r11,20764
	ctx.r5.s64 = ctx.r11.s64 + 20764;
	// b 0x8231ce88
	goto loc_8231CE88;
loc_8231CE70:
	// lwz r11,-22152(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -22152);
	// lbz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8231ce94
	if (ctx.cr6.eq) goto loc_8231CE94;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r5,r11,20720
	ctx.r5.s64 = ctx.r11.s64 + 20720;
loc_8231CE88:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r3,17
	ctx.r3.s64 = 17;
	// bl 0x82280900
	ctx.lr = 0x8231CE94;
	sub_82280900(ctx, base);
loc_8231CE94:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8231CC08) {
	__imp__sub_8231CC08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8231CEA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8231CEA4) {
	__imp__sub_8231CEA4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8231CEA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x8231CEB0;
	__savegprlr_27(ctx, base);
	// stfd f29,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f29.u64);
	// stfd f30,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f30.u64);
	// stfd f31,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31834
	ctx.r11.s64 = -2086273024;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r29,r11,-22152
	ctx.r29.s64 = ctx.r11.s64 + -22152;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f31,5484(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f31.f64 = double(temp.f32);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lwz r11,-4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4);
	// stfs f31,128(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// lfs f0,-20412(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -20412);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,-8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + -8);
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// stfs f0,148(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// stfs f31,132(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// lfs f13,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stfs f13,140(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stfs f13,144(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// addi r3,r3,264
	ctx.r3.s64 = ctx.r3.s64 + 264;
	// lfs f0,7932(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 7932);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f30,f0,f13
	ctx.f30.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f12,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// fadds f29,f12,f30
	ctx.f29.f64 = double(float(ctx.f12.f64 + ctx.f30.f64));
	// bl 0x822da518
	ctx.lr = 0x8231CF34;
	sub_822DA518(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f11,f0,f0
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// fneg f10,f30
	ctx.f10.u64 = ctx.f30.u64 ^ 0x8000000000000000;
	// lfs f8,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f8.f64 = double(temp.f32);
	// lis r9,256
	ctx.r9.s64 = 16777216;
	// lfs f6,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f6.f64 = double(temp.f32);
	// fmr f4,f8
	ctx.f4.f64 = ctx.f8.f64;
	// lfs f5,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f5.f64 = double(temp.f32);
	// fmr f3,f6
	ctx.f3.f64 = ctx.f6.f64;
	// fmr f2,f5
	ctx.f2.f64 = ctx.f5.f64;
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// lfs f30,12168(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12168);
	ctx.f30.f64 = double(temp.f32);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r8,256(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// fmadds f9,f13,f13,f11
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f11.f64));
	// addi r11,r31,28
	ctx.r11.s64 = ctx.r31.s64 + 28;
	// fsqrts f7,f9
	ctx.f7.f64 = double(float(sqrt(ctx.f9.f64)));
	// fneg f1,f7
	ctx.f1.u64 = ctx.f7.u64 ^ 0x8000000000000000;
	// fsel f12,f1,f30,f7
	ctx.f12.f64 = ctx.f1.f64 >= 0.0 ? ctx.f30.f64 : ctx.f7.f64;
	// fdivs f11,f30,f12
	ctx.f11.f64 = double(float(ctx.f30.f64 / ctx.f12.f64));
	// fmuls f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmuls f12,f11,f31
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmadds f9,f10,f0,f8
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f0.f64 + ctx.f8.f64));
	// stfs f9,96(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmadds f8,f13,f10,f6
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f10.f64 + ctx.f6.f64));
	// stfs f8,100(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmadds f7,f10,f12,f5
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f12.f64 + ctx.f5.f64));
	// stfs f7,104(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fmadds f6,f0,f29,f4
	ctx.f6.f64 = double(float(ctx.f0.f64 * ctx.f29.f64 + ctx.f4.f64));
	// stfs f6,112(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmadds f5,f13,f29,f3
	ctx.f5.f64 = double(float(ctx.f13.f64 * ctx.f29.f64 + ctx.f3.f64));
	// stfs f5,116(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fmadds f4,f12,f29,f2
	ctx.f4.f64 = double(float(ctx.f12.f64 * ctx.f29.f64 + ctx.f2.f64));
	// stfs f4,120(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// bl 0x823227a8
	ctx.lr = 0x8231CFE4;
	sub_823227A8(ctx, base);
	// lbz r3,41(r30)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r30.u32 + 41);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8231d144
	if (!ctx.cr6.eq) goto loc_8231D144;
	// lbz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8231d144
	if (!ctx.cr6.eq) goto loc_8231D144;
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bne cr6,0x8231d024
	if (!ctx.cr6.eq) goto loc_8231D024;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lbz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8231d16c
	if (ctx.cr6.eq) goto loc_8231D16C;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r5,r11,21160
	ctx.r5.s64 = ctx.r11.s64 + 21160;
	// b 0x8231d15c
	goto loc_8231D15C;
loc_8231D024:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// rlwinm r10,r11,0,5,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x6000000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8231d050
	if (!ctx.cr6.eq) goto loc_8231D050;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lbz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8231d16c
	if (ctx.cr6.eq) goto loc_8231D16C;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r5,r11,21088
	ctx.r5.s64 = ctx.r11.s64 + 21088;
	// b 0x8231d15c
	goto loc_8231D15C;
loc_8231D050:
	// lfs f0,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fneg f13,f0
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f13,0(r28)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
	// lfs f11,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fneg f10,f11
	ctx.f10.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// fmuls f8,f10,f10
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// lfs f0,5992(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5992);
	ctx.f0.f64 = double(temp.f32);
	// fmr f12,f13
	ctx.f12.f64 = ctx.f13.f64;
	// stfs f10,4(r28)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r28.u32 + 4, temp.u32);
	// fmr f6,f13
	ctx.f6.f64 = ctx.f13.f64;
	// stfs f31,8(r28)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r28.u32 + 8, temp.u32);
	// fmr f9,f10
	ctx.f9.f64 = ctx.f10.f64;
	// fmadds f7,f13,f13,f8
	ctx.f7.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f8.f64));
	// fsqrts f5,f7
	ctx.f5.f64 = double(float(sqrt(ctx.f7.f64)));
	// fneg f4,f5
	ctx.f4.u64 = ctx.f5.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f5,f0
	ctx.cr6.compare(ctx.f5.f64, ctx.f0.f64);
	// fsel f3,f4,f30,f5
	ctx.f3.f64 = ctx.f4.f64 >= 0.0 ? ctx.f30.f64 : ctx.f5.f64;
	// fdivs f2,f30,f3
	ctx.f2.f64 = double(float(ctx.f30.f64 / ctx.f3.f64));
	// fmuls f0,f13,f2
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f2.f64));
	// stfs f0,0(r28)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
	// fmuls f13,f10,f2
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f2.f64));
	// stfs f13,4(r28)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r28.u32 + 4, temp.u32);
	// fmuls f12,f2,f31
	ctx.f12.f64 = double(float(ctx.f2.f64 * ctx.f31.f64));
	// stfs f12,8(r28)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r28.u32 + 8, temp.u32);
	// bge cr6,0x8231d0d4
	if (!ctx.cr6.lt) goto loc_8231D0D4;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lbz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8231d16c
	if (ctx.cr6.eq) goto loc_8231D16C;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r5,r11,21032
	ctx.r5.s64 = ctx.r11.s64 + 21032;
	// b 0x8231d15c
	goto loc_8231D15C;
loc_8231D0D4:
	// lfs f11,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f0,f11
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// lfs f9,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f7,f13,f9,f10
	ctx.f7.f64 = double(float(ctx.f13.f64 * ctx.f9.f64 + ctx.f10.f64));
	// fmadds f1,f12,f8,f7
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f8.f64 + ctx.f7.f64));
	// bl 0x823dedc8
	ctx.lr = 0x8231D0F0;
	sub_823DEDC8(ctx, base);
	// frsp f6,f1
	ctx.fpscr.disableFlushMode();
	ctx.f6.f64 = double(float(ctx.f1.f64));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,-16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -16);
	// lfs f0,12336(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12336);
	ctx.f0.f64 = double(temp.f32);
	// lfs f5,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f6,f0
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// fcmpu cr6,f4,f5
	ctx.cr6.compare(ctx.f4.f64, ctx.f5.f64);
	// ble cr6,0x8231d12c
	if (!ctx.cr6.gt) goto loc_8231D12C;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lbz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8231d16c
	if (ctx.cr6.eq) goto loc_8231D16C;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r5,r11,20980
	ctx.r5.s64 = ctx.r11.s64 + 20980;
	// b 0x8231d15c
	goto loc_8231D15C;
loc_8231D12C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f29,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f30,-64(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_8231D144:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lbz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8231d16c
	if (ctx.cr6.eq) goto loc_8231D16C;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r5,r11,20936
	ctx.r5.s64 = ctx.r11.s64 + 20936;
loc_8231D15C:
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r3,17
	ctx.r3.s64 = 17;
	// addi r4,r10,-27340
	ctx.r4.s64 = ctx.r10.s64 + -27340;
	// bl 0x82280900
	ctx.lr = 0x8231D16C;
	sub_82280900(ctx, base);
loc_8231D16C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f29,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f30,-64(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8231CEA8) {
	__imp__sub_8231CEA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8231D184) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8231D184) {
	__imp__sub_8231D184(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8231D188) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x8231D190;
	__savegprlr_26(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31834
	ctx.r11.s64 = -2086273024;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r29,r11,-22152
	ctx.r29.s64 = ctx.r11.s64 + -22152;
	// addi r26,r10,-27340
	ctx.r26.s64 = ctx.r10.s64 + -27340;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,-22152(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22152);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8231d1dc
	if (ctx.cr6.eq) goto loc_8231D1DC;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r5,r11,21336
	ctx.r5.s64 = ctx.r11.s64 + 21336;
	// li r3,17
	ctx.r3.s64 = 17;
	// bl 0x82280900
	ctx.lr = 0x8231D1D8;
	sub_82280900(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
loc_8231D1DC:
	// lwz r10,-12(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + -12);
	// lbz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8231d218
	if (!ctx.cr6.eq) goto loc_8231D218;
	// lbz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8231d20c
	if (ctx.cr6.eq) goto loc_8231D20C;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r5,r11,21308
	ctx.r5.s64 = ctx.r11.s64 + 21308;
	// li r3,17
	ctx.r3.s64 = 17;
	// bl 0x82280900
	ctx.lr = 0x8231D20C;
	sub_82280900(ctx, base);
loc_8231D20C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_8231D218:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// blt cr6,0x8231d250
	if (ctx.cr6.lt) goto loc_8231D250;
	// lbz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8231d244
	if (ctx.cr6.eq) goto loc_8231D244;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r5,r11,21276
	ctx.r5.s64 = ctx.r11.s64 + 21276;
	// li r3,17
	ctx.r3.s64 = 17;
	// bl 0x82280900
	ctx.lr = 0x8231D244;
	sub_82280900(ctx, base);
loc_8231D244:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_8231D250:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r9,r10,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8231d28c
	if (ctx.cr6.eq) goto loc_8231D28C;
	// lbz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8231d280
	if (ctx.cr6.eq) goto loc_8231D280;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r5,r11,21236
	ctx.r5.s64 = ctx.r11.s64 + 21236;
	// li r3,17
	ctx.r3.s64 = 17;
	// bl 0x82280900
	ctx.lr = 0x8231D280;
	sub_82280900(ctx, base);
loc_8231D280:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_8231D28C:
	// lwz r10,172(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// rlwinm r9,r10,0,28,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xC;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8231d2c8
	if (ctx.cr6.eq) goto loc_8231D2C8;
	// lbz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8231d2bc
	if (ctx.cr6.eq) goto loc_8231D2BC;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r5,r11,21200
	ctx.r5.s64 = ctx.r11.s64 + 21200;
	// li r3,17
	ctx.r3.s64 = 17;
	// bl 0x82280900
	ctx.lr = 0x8231D2BC;
	sub_82280900(ctx, base);
loc_8231D2BC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_8231D2C8:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8231cea8
	ctx.lr = 0x8231D2DC;
	sub_8231CEA8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8231d20c
	if (ctx.cr6.eq) goto loc_8231D20C;
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// rlwinm r10,r11,0,5,5
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000000;
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// stfs f13,4(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stfs f12,8(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// lfs f11,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,12(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// lfs f10,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,16(r30)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// lfs f9,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,20(r30)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// beq cr6,0x8231d334
	if (ctx.cr6.eq) goto loc_8231D334;
	// lwz r11,48(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// stw r10,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r10.u32);
loc_8231D334:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f1,6024(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6024);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8231cc08
	ctx.lr = 0x8231D350;
	sub_8231CC08(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8231d368
	if (ctx.cr6.eq) goto loc_8231D368;
loc_8231D35C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_8231D368:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f1,3844(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3844);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8231cc08
	ctx.lr = 0x8231D384;
	sub_8231CC08(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8231d35c
	if (!ctx.cr6.eq) goto loc_8231D35C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f1,5996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5996);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8231cc08
	ctx.lr = 0x8231D3AC;
	sub_8231CC08(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r3,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r9.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8231D188) {
	__imp__sub_8231D188(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8231D3C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,484(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 484);
	// ori r10,r11,32
	ctx.r10.u64 = ctx.r11.u64 | 32;
	// stw r10,484(r3)
	PPC_STORE_U32(ctx.r3.u32 + 484, ctx.r10.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8231D3C0) {
	__imp__sub_8231D3C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8231D3D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x8231D3D8;
	__savegprlr_28(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,0(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,484(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 484);
	// ori r9,r10,8
	ctx.r9.u64 = ctx.r10.u64 | 8;
	// stw r9,484(r29)
	PPC_STORE_U32(ctx.r29.u32 + 484, ctx.r9.u32);
	// lwz r8,48(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	// ori r7,r8,8
	ctx.r7.u64 = ctx.r8.u64 | 8;
	// stw r7,48(r4)
	PPC_STORE_U32(ctx.r4.u32 + 48, ctx.r7.u32);
	// lwz r6,8(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r5,r6,0,21,21
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x400;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x8231d424
	if (!ctx.cr6.eq) goto loc_8231D424;
	// lwz r10,484(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 484);
	// rlwinm r9,r10,0,26,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8231d428
	if (ctx.cr6.eq) goto loc_8231D428;
loc_8231D424:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8231D428:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8231d4d4
	if (ctx.cr6.eq) goto loc_8231D4D4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8231c928
	ctx.lr = 0x8231D440;
	sub_8231C928(ctx, base);
	// lwz r11,172(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 172);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8231d4c8
	if (!ctx.cr6.eq) goto loc_8231D4C8;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lwz r9,132(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// addi r6,r30,24
	ctx.r6.s64 = ctx.r30.s64 + 24;
	// lwz r8,256(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 256);
	// addi r28,r11,-27184
	ctx.r28.s64 = ctx.r11.s64 + -27184;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82322770
	ctx.lr = 0x8231D478;
	sub_82322770(ctx, base);
	// lbz r10,121(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 121);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8231d490
	if (ctx.cr6.eq) goto loc_8231D490;
	// lwz r11,48(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// ori r10,r11,2
	ctx.r10.u64 = ctx.r11.u64 | 2;
	// stw r10,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r10.u32);
loc_8231D490:
	// addi r6,r30,36
	ctx.r6.s64 = ctx.r30.s64 + 36;
	// lwz r9,132(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// lwz r8,256(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 256);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82322770
	ctx.lr = 0x8231D4B0;
	sub_82322770(ctx, base);
	// lbz r10,121(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 121);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8231d4c8
	if (!ctx.cr6.eq) goto loc_8231D4C8;
	// lwz r11,48(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// ori r10,r11,4
	ctx.r10.u64 = ctx.r11.u64 | 4;
	// stw r10,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r10.u32);
loc_8231D4C8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8231caf8
	ctx.lr = 0x8231D4D4;
	sub_8231CAF8(ctx, base);
loc_8231D4D4:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8231D3D0) {
	__imp__sub_8231D3D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8231D4DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8231D4DC) {
	__imp__sub_8231D4DC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8231D4E0) {
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
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r11,r1,72
	ctx.r11.s64 = ctx.r1.s64 + 72;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8231D508:
	// stdu r10,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r10.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x8231d508
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8231D508;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r5,132(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// lbz r4,316(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 316);
	// bl 0x8231d188
	ctx.lr = 0x8231D524;
	sub_8231D188(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8231d53c
	if (ctx.cr6.eq) goto loc_8231D53C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8231d3d0
	ctx.lr = 0x8231D53C;
	sub_8231D3D0(ctx, base);
loc_8231D53C:
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

PPC_WEAK_FUNC(sub_8231D4E0) {
	__imp__sub_8231D4E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8231D550) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf64
	ctx.lr = 0x8231D558;
	__savegprlr_23(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31834
	ctx.r11.s64 = -2086273024;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// addi r26,r11,-22180
	ctx.r26.s64 = ctx.r11.s64 + -22180;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r11,16(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// lbz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8231d824
	if (ctx.cr6.eq) goto loc_8231D824;
	// lwz r11,484(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 484);
	// addi r31,r4,472
	ctx.r31.s64 = ctx.r4.s64 + 472;
	// rlwinm r10,r11,0,29,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// rlwinm r9,r10,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// stw r10,484(r4)
	PPC_STORE_U32(ctx.r4.u32 + 484, ctx.r10.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8231d5ac
	if (ctx.cr6.eq) goto loc_8231D5AC;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,7
	ctx.r3.s64 = 7;
	// bl 0x82322348
	ctx.lr = 0x8231D5AC;
	sub_82322348(ctx, base);
loc_8231D5AC:
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r27,r11,31432
	ctx.r27.s64 = ctx.r11.s64 + 31432;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r10,r27
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r27.u32);
	// bl 0x822f3f40
	ctx.lr = 0x8231D5D0;
	sub_822F3F40(ctx, base);
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x8231d5ec
	if (!ctx.cr6.eq) goto loc_8231D5EC;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8231d60c
	goto loc_8231D60C;
loc_8231D5EC:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r9,r27,4
	ctx.r9.s64 = ctx.r27.s64 + 4;
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r7,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// bl 0x822f3f40
	ctx.lr = 0x8231D60C;
	sub_822F3F40(ctx, base);
loc_8231D60C:
	// lwz r11,40(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// add r25,r30,r3
	ctx.r25.u64 = ctx.r30.u64 + ctx.r3.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// cmpw cr6,r11,r25
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r25.s32, ctx.xer);
	// ble cr6,0x8231d62c
	if (!ctx.cr6.gt) goto loc_8231D62C;
	// stw r25,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r25.u32);
loc_8231D62C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// subf r24,r4,r11
	ctx.r24.s64 = ctx.r11.s64 - ctx.r4.s64;
	// bl 0x8231c3f8
	ctx.lr = 0x8231D640;
	sub_8231C3F8(ctx, base);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8231c3f8
	ctx.lr = 0x8231D650;
	sub_8231C3F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8231c348
	ctx.lr = 0x8231D658;
	sub_8231C348(ctx, base);
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,24
	ctx.r9.s64 = 24;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwzx r8,r9,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8231d694
	if (ctx.cr6.eq) goto loc_8231D694;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,256(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 256);
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x82319308
	ctx.lr = 0x8231D680;
	sub_82319308(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r30,21
	ctx.r5.s64 = ctx.r30.s64 + 21;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8231b7f0
	ctx.lr = 0x8231D694;
	sub_8231B7F0(ctx, base);
loc_8231D694:
	// lwz r11,28(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 28);
	// lfs f0,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// lfs f10,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f10.f64 = double(temp.f32);
	// lfs f13,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f10
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f10.f64));
	// lfs f11,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f13,f13,f9
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f9.f64));
	// fsubs f0,f11,f8
	ctx.f0.f64 = double(float(ctx.f11.f64 - ctx.f8.f64));
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f13,92(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lbz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8231d75c
	if (ctx.cr6.eq) goto loc_8231D75C;
	// lfs f11,28(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	ctx.f11.f64 = double(temp.f32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lfs f10,32(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f11,f12
	ctx.f9.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// lfs f8,36(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 36);
	ctx.f8.f64 = double(temp.f32);
	// fadds f7,f10,f13
	ctx.f7.f64 = double(float(ctx.f10.f64 + ctx.f13.f64));
	// fadds f6,f8,f0
	ctx.f6.f64 = double(float(ctx.f8.f64 + ctx.f0.f64));
	// stfs f9,120(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f7,124(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stfs f6,128(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r30,r28,28
	ctx.r30.s64 = ctx.r28.s64 + 28;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r29,r10,-2072
	ctx.r29.s64 = ctx.r10.s64 + -2072;
	// lwzx r4,r9,r27
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r27.u32);
	// bl 0x822f3f40
	ctx.lr = 0x8231D720;
	sub_822F3F40(ctx, base);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpw cr6,r8,r3
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x8231d734
	if (ctx.cr6.lt) goto loc_8231D734;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r29,r11,-2136
	ctx.r29.s64 = ctx.r11.s64 + -2136;
loc_8231D734:
	// li r8,1000
	ctx.r8.s64 = 1000;
	// lbz r3,316(r23)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r23.u32 + 316);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82322800
	ctx.lr = 0x8231D750;
	sub_82322800(ctx, base);
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
loc_8231D75C:
	// extsw r11,r24
	ctx.r11.s64 = ctx.r24.s32;
	// lfs f11,28(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	ctx.f11.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fadds f10,f11,f12
	ctx.f10.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f9,80(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stfs f10,28(r28)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r28.u32 + 28, temp.u32);
	// lfs f8,32(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	ctx.f8.f64 = double(temp.f32);
	// fadds f7,f8,f13
	ctx.f7.f64 = double(float(ctx.f8.f64 + ctx.f13.f64));
	// fcfid f6,f9
	ctx.f6.f64 = double(ctx.f9.s64);
	// lfs f11,5804(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5804);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,12168(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12168);
	ctx.f10.f64 = double(temp.f32);
	// addi r11,r28,28
	ctx.r11.s64 = ctx.r28.s64 + 28;
	// stfs f7,32(r28)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r28.u32 + 32, temp.u32);
	// lfs f5,36(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 36);
	ctx.f5.f64 = double(temp.f32);
	// fadds f4,f5,f0
	ctx.f4.f64 = double(float(ctx.f5.f64 + ctx.f0.f64));
	// frsp f3,f6
	ctx.f3.f64 = double(float(ctx.f6.f64));
	// stfs f4,36(r28)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r28.u32 + 36, temp.u32);
	// fmuls f2,f3,f11
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f11.f64));
	// fdivs f1,f10,f2
	ctx.f1.f64 = double(float(ctx.f10.f64 / ctx.f2.f64));
	// fmuls f12,f1,f12
	ctx.f12.f64 = double(float(ctx.f1.f64 * ctx.f12.f64));
	// stfs f12,40(r28)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r28.u32 + 40, temp.u32);
	// fmuls f11,f13,f1
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f1.f64));
	// stfs f11,44(r28)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r28.u32 + 44, temp.u32);
	// fmuls f10,f0,f1
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// stfs f10,48(r28)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r28.u32 + 48, temp.u32);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpw cr6,r8,r25
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r25.s32, ctx.xer);
	// bne cr6,0x8231d824
	if (!ctx.cr6.eq) goto loc_8231D824;
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// rlwinm r10,r11,0,30,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// stw r10,12(r28)
	PPC_STORE_U32(ctx.r28.u32 + 12, ctx.r10.u32);
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r8,r9,0,29,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8231d800
	if (ctx.cr6.eq) goto loc_8231D800;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,6
	ctx.r3.s64 = 6;
	// bl 0x82322348
	ctx.lr = 0x8231D800;
	sub_82322348(ctx, base);
loc_8231D800:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// lfs f13,48(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x8231d818
	if (!ctx.cr6.gt) goto loc_8231D818;
	// stfs f0,48(r28)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r28.u32 + 48, temp.u32);
loc_8231D818:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// ori r10,r11,16
	ctx.r10.u64 = ctx.r11.u64 | 16;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
loc_8231D824:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8231D550) {
	__imp__sub_8231D550(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8231D82C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8231D82C) {
	__imp__sub_8231D82C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8231D830) {
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
	// lis r11,-31834
	ctx.r11.s64 = -2086273024;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r11,-22148
	ctx.r30.s64 = ctx.r11.s64 + -22148;
	// lwz r11,-16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -16);
	// lbz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8231d8e0
	if (ctx.cr6.eq) goto loc_8231D8E0;
	// lfs f2,268(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 268);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,472(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 472);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822d7818
	ctx.lr = 0x8231D86C;
	sub_822D7818(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fneg f13,f0
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f1,f13
	ctx.cr6.compare(ctx.f1.f64, ctx.f13.f64);
	// blt cr6,0x8231d888
	if (ctx.cr6.lt) goto loc_8231D888;
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x8231d8e0
	if (!ctx.cr6.gt) goto loc_8231D8E0;
loc_8231D888:
	// fcmpu cr6,f1,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f13.f64);
	// bge cr6,0x8231d89c
	if (!ctx.cr6.lt) goto loc_8231D89C;
loc_8231D890:
	// fadds f1,f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f0.f64 + ctx.f1.f64));
	// fcmpu cr6,f1,f13
	ctx.cr6.compare(ctx.f1.f64, ctx.f13.f64);
	// blt cr6,0x8231d890
	if (ctx.cr6.lt) goto loc_8231D890;
loc_8231D89C:
	// fcmpu cr6,f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x8231d8b0
	if (!ctx.cr6.gt) goto loc_8231D8B0;
loc_8231D8A4:
	// fsubs f1,f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgt cr6,0x8231d8a4
	if (ctx.cr6.gt) goto loc_8231D8A4;
loc_8231D8B0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f1,f12
	ctx.cr6.compare(ctx.f1.f64, ctx.f12.f64);
	// ble cr6,0x8231d8c4
	if (!ctx.cr6.gt) goto loc_8231D8C4;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_8231D8C4:
	// lfs f13,100(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f1,f13
	ctx.f12.f64 = double(float(ctx.f1.f64 + ctx.f13.f64));
	// stfs f12,100(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 100, temp.u32);
	// lfs f11,472(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 472);
	ctx.f11.f64 = double(temp.f32);
	// fadds f1,f0,f11
	ctx.f1.f64 = double(float(ctx.f0.f64 + ctx.f11.f64));
	// bl 0x822d77c0
	ctx.lr = 0x8231D8DC;
	sub_822D77C0(ctx, base);
	// stfs f1,268(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 268, temp.u32);
loc_8231D8E0:
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

PPC_WEAK_FUNC(sub_8231D830) {
	__imp__sub_8231D830(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8231D8F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,484(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 484);
	// rlwinm r10,r11,0,29,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFE7;
	// stw r10,484(r3)
	PPC_STORE_U32(ctx.r3.u32 + 484, ctx.r10.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8231D8F8) {
	__imp__sub_8231D8F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8231D908) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31834
	ctx.r11.s64 = -2086273024;
	// lwz r11,-22164(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22164);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8231d924
	if (!ctx.cr6.eq) goto loc_8231D924;
loc_8231D91C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8231D924:
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8231d91c
	if (ctx.cr6.eq) goto loc_8231D91C;
	// lwz r11,480(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 480);
	// lis r9,-32191
	ctx.r9.s64 = -2109669376;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r9,31432
	ctx.r9.s64 = ctx.r9.s64 + 31432;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r7,r9,4
	ctx.r7.s64 = ctx.r9.s64 + 4;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r6,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// addi r11,r11,-10
	ctx.r11.s64 = ctx.r11.s64 + -10;
	// addic r5,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// subfe r3,r5,r11
	temp.u8 = (~ctx.r5.u32 + ctx.r11.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r5.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8231D908) {
	__imp__sub_8231D908(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8231D964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8231D964) {
	__imp__sub_8231D964(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8231D968) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x8231D970;
	__savegprlr_27(ctx, base);
	// stfd f29,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f29.u64);
	// stfd f30,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f30.u64);
	// stfd f31,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x823619d0
	ctx.lr = 0x8231D988;
	sub_823619D0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x8231da1c
	if (!ctx.cr6.gt) goto loc_8231DA1C;
	// lis r10,-31834
	ctx.r10.s64 = -2086273024;
	// lis r11,-31834
	ctx.r11.s64 = -2086273024;
	// addi r10,r10,-16880
	ctx.r10.s64 = ctx.r10.s64 + -16880;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// addi r31,r11,-22096
	ctx.r31.s64 = ctx.r11.s64 + -22096;
	// addi r29,r10,-4
	ctx.r29.s64 = ctx.r10.s64 + -4;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lfs f29,12168(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12168);
	ctx.f29.f64 = double(temp.f32);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lfs f30,5484(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 5484);
	ctx.f30.f64 = double(temp.f32);
	// lfs f31,2416(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2416);
	ctx.f31.f64 = double(temp.f32);
	// addi r28,r11,-28736
	ctx.r28.s64 = ctx.r11.s64 + -28736;
	// addi r27,r10,26340
	ctx.r27.s64 = ctx.r10.s64 + 26340;
loc_8231D9CC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82361be8
	ctx.lr = 0x8231D9D4;
	sub_82361BE8(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,80
	ctx.r4.s64 = 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e8368
	ctx.lr = 0x8231D9E8;
	sub_822E8368(ctx, base);
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// li r7,5
	ctx.r7.s64 = 5;
	// fmr f3,f29
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f29.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x822e1660
	ctx.lr = 0x8231DA04;
	sub_822E1660(ctx, base);
	// stwu r3,4(r29)
	ea = 4 + ctx.r29.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r29.u32 = ea;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,80
	ctx.r31.s64 = ctx.r31.s64 + 80;
	// bl 0x823619d0
	ctx.lr = 0x8231DA14;
	sub_823619D0(ctx, base);
	// cmpw cr6,r30,r3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x8231d9cc
	if (ctx.cr6.lt) goto loc_8231D9CC;
loc_8231DA1C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f29,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f30,-64(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8231D968) {
	__imp__sub_8231D968(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8231DA30) {
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
	// bl 0x823ddff0
	ctx.lr = 0x8231DA44;
	__savefpr_14(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r7,-32251
	ctx.r7.s64 = -2113601536;
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// addi r3,r7,-27468
	ctx.r3.s64 = ctx.r7.s64 + -27468;
	// lfs f24,5876(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5876);
	ctx.f24.f64 = double(temp.f32);
	// lfs f31,5484(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f31.f64 = double(temp.f32);
	// addi r8,r8,-27536
	ctx.r8.s64 = ctx.r8.s64 + -27536;
	// lfs f29,6048(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 6048);
	ctx.f29.f64 = double(temp.f32);
	// li r7,196
	ctx.r7.s64 = 196;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f3,f24
	ctx.f3.f64 = ctx.f24.f64;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x822e1660
	ctx.lr = 0x8231DA84;
	sub_822E1660(ctx, base);
	// lis r6,-31834
	ctx.r6.s64 = -2086273024;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lis r4,-32251
	ctx.r4.s64 = -2113601536;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r8,r4,-27560
	ctx.r8.s64 = ctx.r4.s64 + -27560;
	// stw r3,-6564(r6)
	PPC_STORE_U32(ctx.r6.u32 + -6564, ctx.r3.u32);
	// addi r3,r11,-27576
	ctx.r3.s64 = ctx.r11.s64 + -27576;
	// lfs f26,5188(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 5188);
	ctx.f26.f64 = double(temp.f32);
	// li r7,196
	ctx.r7.s64 = 196;
	// fmr f3,f26
	ctx.f3.f64 = ctx.f26.f64;
	// fmr f1,f26
	ctx.f1.f64 = ctx.f26.f64;
	// bl 0x822e1660
	ctx.lr = 0x8231DAB8;
	sub_822E1660(ctx, base);
	// lis r10,-31834
	ctx.r10.s64 = -2086273024;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// lis r7,-32251
	ctx.r7.s64 = -2113601536;
	// fmr f3,f26
	ctx.f3.f64 = ctx.f26.f64;
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// stw r3,-6372(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6372, ctx.r3.u32);
	// addi r3,r7,-27592
	ctx.r3.s64 = ctx.r7.s64 + -27592;
	// lfs f20,7324(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 7324);
	ctx.f20.f64 = double(temp.f32);
	// addi r8,r8,-27616
	ctx.r8.s64 = ctx.r8.s64 + -27616;
	// li r7,196
	ctx.r7.s64 = 196;
	// fmr f1,f20
	ctx.f1.f64 = ctx.f20.f64;
	// bl 0x822e1660
	ctx.lr = 0x8231DAEC;
	sub_822E1660(ctx, base);
	// lis r6,-31834
	ctx.r6.s64 = -2086273024;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// stw r3,-6672(r6)
	PPC_STORE_U32(ctx.r6.u32 + -6672, ctx.r3.u32);
	// addi r8,r11,-27656
	ctx.r8.s64 = ctx.r11.s64 + -27656;
	// lfs f30,12168(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12168);
	ctx.f30.f64 = double(temp.f32);
	// addi r3,r10,-27676
	ctx.r3.s64 = ctx.r10.s64 + -27676;
	// lfs f17,4292(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4292);
	ctx.f17.f64 = double(temp.f32);
	// li r7,196
	ctx.r7.s64 = 196;
	// fmr f3,f30
	ctx.f3.f64 = ctx.f30.f64;
	// fmr f1,f17
	ctx.f1.f64 = ctx.f17.f64;
	// bl 0x822e1660
	ctx.lr = 0x8231DB28;
	sub_822E1660(ctx, base);
	// lis r9,-31834
	ctx.r9.s64 = -2086273024;
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// lis r7,-32251
	ctx.r7.s64 = -2113601536;
	// addi r6,r8,-27716
	ctx.r6.s64 = ctx.r8.s64 + -27716;
	// li r5,12
	ctx.r5.s64 = 12;
	// stw r3,-6376(r9)
	PPC_STORE_U32(ctx.r9.u32 + -6376, ctx.r3.u32);
	// addi r3,r7,-27736
	ctx.r3.s64 = ctx.r7.s64 + -27736;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822e15d0
	ctx.lr = 0x8231DB4C;
	sub_822E15D0(ctx, base);
	// lis r5,-31834
	ctx.r5.s64 = -2086273024;
	// lis r4,-32251
	ctx.r4.s64 = -2113601536;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r6,r4,-27768
	ctx.r6.s64 = ctx.r4.s64 + -27768;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,-6572(r5)
	PPC_STORE_U32(ctx.r5.u32 + -6572, ctx.r3.u32);
	// addi r3,r11,-27784
	ctx.r3.s64 = ctx.r11.s64 + -27784;
	// li r5,4
	ctx.r5.s64 = 4;
	// bl 0x822e15d0
	ctx.lr = 0x8231DB70;
	sub_822E15D0(ctx, base);
	// lis r10,-31834
	ctx.r10.s64 = -2086273024;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// fmr f3,f26
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f26.f64;
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// lis r7,-32251
	ctx.r7.s64 = -2113601536;
	// stw r3,-6632(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6632, ctx.r3.u32);
	// addi r3,r7,-27852
	ctx.r3.s64 = ctx.r7.s64 + -27852;
	// lfs f28,8888(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8888);
	ctx.f28.f64 = double(temp.f32);
	// addi r8,r8,-27828
	ctx.r8.s64 = ctx.r8.s64 + -27828;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// li r7,132
	ctx.r7.s64 = 132;
	// bl 0x822e1660
	ctx.lr = 0x8231DBA4;
	sub_822E1660(ctx, base);
	// lis r6,-31834
	ctx.r6.s64 = -2086273024;
	// lis r5,-32251
	ctx.r5.s64 = -2113601536;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// lis r4,-32251
	ctx.r4.s64 = -2113601536;
	// fmr f3,f26
	ctx.f3.f64 = ctx.f26.f64;
	// addi r8,r5,-27896
	ctx.r8.s64 = ctx.r5.s64 + -27896;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// li r7,132
	ctx.r7.s64 = 132;
	// stw r3,-16964(r6)
	PPC_STORE_U32(ctx.r6.u32 + -16964, ctx.r3.u32);
	// addi r3,r4,-27920
	ctx.r3.s64 = ctx.r4.s64 + -27920;
	// bl 0x822e1660
	ctx.lr = 0x8231DBD0;
	sub_822E1660(ctx, base);
	// lis r11,-31834
	ctx.r11.s64 = -2086273024;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// fmr f1,f20
	ctx.f1.f64 = ctx.f20.f64;
	// lis r6,-32251
	ctx.r6.s64 = -2113601536;
	// addi r8,r9,-27984
	ctx.r8.s64 = ctx.r9.s64 + -27984;
	// stw r3,-22120(r11)
	PPC_STORE_U32(ctx.r11.u32 + -22120, ctx.r3.u32);
	// li r7,132
	ctx.r7.s64 = 132;
	// lfs f27,5996(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5996);
	ctx.f27.f64 = double(temp.f32);
	// addi r3,r6,-28008
	ctx.r3.s64 = ctx.r6.s64 + -28008;
	// fmr f3,f27
	ctx.f3.f64 = ctx.f27.f64;
	// bl 0x822e1660
	ctx.lr = 0x8231DC04;
	sub_822E1660(ctx, base);
	// lis r5,-31834
	ctx.r5.s64 = -2086273024;
	// lis r4,-32255
	ctx.r4.s64 = -2113863680;
	// fmr f3,f27
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f27.f64;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r8,r11,-28072
	ctx.r8.s64 = ctx.r11.s64 + -28072;
	// stw r3,-22128(r5)
	PPC_STORE_U32(ctx.r5.u32 + -22128, ctx.r3.u32);
	// addi r3,r10,-28096
	ctx.r3.s64 = ctx.r10.s64 + -28096;
	// li r7,132
	ctx.r7.s64 = 132;
	// lfs f1,26116(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 26116);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822e1660
	ctx.lr = 0x8231DC34;
	sub_822E1660(ctx, base);
	// lis r9,-31834
	ctx.r9.s64 = -2086273024;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// fmr f3,f27
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f27.f64;
	// lis r6,-32251
	ctx.r6.s64 = -2113601536;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// lis r5,-32251
	ctx.r5.s64 = -2113601536;
	// addi r8,r6,-28168
	ctx.r8.s64 = ctx.r6.s64 + -28168;
	// stw r3,-16600(r9)
	PPC_STORE_U32(ctx.r9.u32 + -16600, ctx.r3.u32);
	// addi r3,r5,-28200
	ctx.r3.s64 = ctx.r5.s64 + -28200;
	// lfs f16,7540(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 7540);
	ctx.f16.f64 = double(temp.f32);
	// li r7,132
	ctx.r7.s64 = 132;
	// fmr f1,f16
	ctx.f1.f64 = ctx.f16.f64;
	// bl 0x822e1660
	ctx.lr = 0x8231DC68;
	sub_822E1660(ctx, base);
	// lis r4,-31834
	ctx.r4.s64 = -2086273024;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f3,f27
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f27.f64;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// addi r8,r10,-28272
	ctx.r8.s64 = ctx.r10.s64 + -28272;
	// stw r3,-6464(r4)
	PPC_STORE_U32(ctx.r4.u32 + -6464, ctx.r3.u32);
	// addi r3,r9,-28304
	ctx.r3.s64 = ctx.r9.s64 + -28304;
	// li r7,132
	ctx.r7.s64 = 132;
	// lfs f1,7932(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7932);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,108(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// bl 0x822e1660
	ctx.lr = 0x8231DC9C;
	sub_822E1660(ctx, base);
	// lis r8,-31834
	ctx.r8.s64 = -2086273024;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// lis r6,-32251
	ctx.r6.s64 = -2113601536;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// lis r5,-32251
	ctx.r5.s64 = -2113601536;
	// stw r3,-16940(r8)
	PPC_STORE_U32(ctx.r8.u32 + -16940, ctx.r3.u32);
	// addi r8,r6,-28368
	ctx.r8.s64 = ctx.r6.s64 + -28368;
	// lfs f22,7544(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 7544);
	ctx.f22.f64 = double(temp.f32);
	// addi r3,r5,-28392
	ctx.r3.s64 = ctx.r5.s64 + -28392;
	// li r7,132
	ctx.r7.s64 = 132;
	// fmr f3,f22
	ctx.f3.f64 = ctx.f22.f64;
	// bl 0x822e1660
	ctx.lr = 0x8231DCD0;
	sub_822E1660(ctx, base);
	// lis r4,-31834
	ctx.r4.s64 = -2086273024;
	// fmr f3,f22
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f22.f64;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// fmr f1,f17
	ctx.f1.f64 = ctx.f17.f64;
	// addi r8,r11,-28456
	ctx.r8.s64 = ctx.r11.s64 + -28456;
	// li r7,132
	ctx.r7.s64 = 132;
	// stw r3,-16616(r4)
	PPC_STORE_U32(ctx.r4.u32 + -16616, ctx.r3.u32);
	// addi r3,r10,-28488
	ctx.r3.s64 = ctx.r10.s64 + -28488;
	// bl 0x822e1660
	ctx.lr = 0x8231DCFC;
	sub_822E1660(ctx, base);
	// lis r9,-31834
	ctx.r9.s64 = -2086273024;
	// lis r7,-32251
	ctx.r7.s64 = -2113601536;
	// fmr f3,f22
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f22.f64;
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// addi r8,r8,-28592
	ctx.r8.s64 = ctx.r8.s64 + -28592;
	// stw r3,-6556(r9)
	PPC_STORE_U32(ctx.r9.u32 + -6556, ctx.r3.u32);
	// addi r3,r7,-28520
	ctx.r3.s64 = ctx.r7.s64 + -28520;
	// li r7,132
	ctx.r7.s64 = 132;
	// bl 0x822e1660
	ctx.lr = 0x8231DD28;
	sub_822E1660(ctx, base);
	// lis r6,-31834
	ctx.r6.s64 = -2086273024;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// lis r4,-32251
	ctx.r4.s64 = -2113601536;
	// fmr f3,f22
	ctx.f3.f64 = ctx.f22.f64;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r8,r4,-28664
	ctx.r8.s64 = ctx.r4.s64 + -28664;
	// stw r3,-6528(r6)
	PPC_STORE_U32(ctx.r6.u32 + -6528, ctx.r3.u32);
	// addi r3,r11,-28700
	ctx.r3.s64 = ctx.r11.s64 + -28700;
	// li r7,132
	ctx.r7.s64 = 132;
	// lfs f1,6032(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 6032);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822e1660
	ctx.lr = 0x8231DD58;
	sub_822E1660(ctx, base);
	// lis r10,-31834
	ctx.r10.s64 = -2086273024;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// lis r5,-32251
	ctx.r5.s64 = -2113601536;
	// lis r4,-32251
	ctx.r4.s64 = -2113601536;
	// stw r3,-6692(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6692, ctx.r3.u32);
	// addi r8,r5,-28768
	ctx.r8.s64 = ctx.r5.s64 + -28768;
	// lfs f29,2412(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2412);
	ctx.f29.f64 = double(temp.f32);
	// li r7,132
	ctx.r7.s64 = 132;
	// lfs f25,-14540(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -14540);
	ctx.f25.f64 = double(temp.f32);
	// addi r3,r4,-28788
	ctx.r3.s64 = ctx.r4.s64 + -28788;
	// fmr f3,f29
	ctx.f3.f64 = ctx.f29.f64;
	// fmr f1,f25
	ctx.f1.f64 = ctx.f25.f64;
	// bl 0x822e1660
	ctx.lr = 0x8231DD94;
	sub_822E1660(ctx, base);
	// lis r10,-31834
	ctx.r10.s64 = -2086273024;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// fmr f3,f29
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f29.f64;
	// lis r7,-32251
	ctx.r7.s64 = -2113601536;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// stw r3,-6392(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6392, ctx.r3.u32);
	// addi r3,r7,-28804
	ctx.r3.s64 = ctx.r7.s64 + -28804;
	// addi r8,r9,-28872
	ctx.r8.s64 = ctx.r9.s64 + -28872;
	// lfs f1,11248(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11248);
	ctx.f1.f64 = double(temp.f32);
	// li r7,132
	ctx.r7.s64 = 132;
	// bl 0x822e1660
	ctx.lr = 0x8231DDC4;
	sub_822E1660(ctx, base);
	// lis r6,-31834
	ctx.r6.s64 = -2086273024;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// stw r3,-6620(r6)
	PPC_STORE_U32(ctx.r6.u32 + -6620, ctx.r3.u32);
	// addi r8,r11,-28968
	ctx.r8.s64 = ctx.r11.s64 + -28968;
	// lfs f29,6912(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 6912);
	ctx.f29.f64 = double(temp.f32);
	// addi r3,r10,-28996
	ctx.r3.s64 = ctx.r10.s64 + -28996;
	// li r7,132
	ctx.r7.s64 = 132;
	// lfs f1,3844(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 3844);
	ctx.f1.f64 = double(temp.f32);
	// fmr f3,f29
	ctx.f3.f64 = ctx.f29.f64;
	// bl 0x822e1660
	ctx.lr = 0x8231DDFC;
	sub_822E1660(ctx, base);
	// lis r9,-31834
	ctx.r9.s64 = -2086273024;
	// fmr f3,f29
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f29.f64;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// lis r6,-32251
	ctx.r6.s64 = -2113601536;
	// lis r5,-32251
	ctx.r5.s64 = -2113601536;
	// stw r3,-16944(r9)
	PPC_STORE_U32(ctx.r9.u32 + -16944, ctx.r3.u32);
	// lfs f15,5812(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 5812);
	ctx.f15.f64 = double(temp.f32);
	// addi r8,r6,-29088
	ctx.r8.s64 = ctx.r6.s64 + -29088;
	// fmr f1,f15
	ctx.f1.f64 = ctx.f15.f64;
	// addi r3,r5,-29112
	ctx.r3.s64 = ctx.r5.s64 + -29112;
	// li r7,132
	ctx.r7.s64 = 132;
	// bl 0x822e1660
	ctx.lr = 0x8231DE30;
	sub_822E1660(ctx, base);
	// lis r4,-31834
	ctx.r4.s64 = -2086273024;
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// ori r31,r11,65535
	ctx.r31.u64 = ctx.r11.u64 | 65535;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// stw r3,-6364(r4)
	PPC_STORE_U32(ctx.r4.u32 + -6364, ctx.r3.u32);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r8,r10,-29168
	ctx.r8.s64 = ctx.r10.s64 + -29168;
	// addi r3,r9,-29196
	ctx.r3.s64 = ctx.r9.s64 + -29196;
	// li r7,132
	ctx.r7.s64 = 132;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1500
	ctx.r4.s64 = 1500;
	// bl 0x822e1618
	ctx.lr = 0x8231DE64;
	sub_822E1618(ctx, base);
	// lis r8,-31834
	ctx.r8.s64 = -2086273024;
	// lis r7,-32251
	ctx.r7.s64 = -2113601536;
	// lis r5,-32251
	ctx.r5.s64 = -2113601536;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r4,500
	ctx.r4.s64 = 500;
	// stw r3,-6576(r8)
	PPC_STORE_U32(ctx.r8.u32 + -6576, ctx.r3.u32);
	// addi r8,r7,-29252
	ctx.r8.s64 = ctx.r7.s64 + -29252;
	// addi r3,r5,-29280
	ctx.r3.s64 = ctx.r5.s64 + -29280;
	// li r7,132
	ctx.r7.s64 = 132;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x822e1618
	ctx.lr = 0x8231DE90;
	sub_822E1618(ctx, base);
	// lis r4,-31834
	ctx.r4.s64 = -2086273024;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r8,r11,-29368
	ctx.r8.s64 = ctx.r11.s64 + -29368;
	// li r7,132
	ctx.r7.s64 = 132;
	// stw r3,-6668(r4)
	PPC_STORE_U32(ctx.r4.u32 + -6668, ctx.r3.u32);
	// addi r3,r10,-29400
	ctx.r3.s64 = ctx.r10.s64 + -29400;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,500
	ctx.r4.s64 = 500;
	// bl 0x822e1618
	ctx.lr = 0x8231DEBC;
	sub_822E1618(ctx, base);
	// lis r9,-31834
	ctx.r9.s64 = -2086273024;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// fmr f3,f29
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f29.f64;
	// lis r6,-32251
	ctx.r6.s64 = -2113601536;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// lis r5,-32251
	ctx.r5.s64 = -2113601536;
	// addi r8,r6,-29472
	ctx.r8.s64 = ctx.r6.s64 + -29472;
	// stw r3,-6600(r9)
	PPC_STORE_U32(ctx.r9.u32 + -6600, ctx.r3.u32);
	// addi r3,r5,-29500
	ctx.r3.s64 = ctx.r5.s64 + -29500;
	// lfs f1,13960(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 13960);
	ctx.f1.f64 = double(temp.f32);
	// li r7,132
	ctx.r7.s64 = 132;
	// bl 0x822e1660
	ctx.lr = 0x8231DEEC;
	sub_822E1660(ctx, base);
	// lis r4,-31834
	ctx.r4.s64 = -2086273024;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// fmr f3,f29
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f29.f64;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// addi r8,r10,-29568
	ctx.r8.s64 = ctx.r10.s64 + -29568;
	// stw r3,-6416(r4)
	PPC_STORE_U32(ctx.r4.u32 + -6416, ctx.r3.u32);
	// li r7,132
	ctx.r7.s64 = 132;
	// addi r3,r9,-29592
	ctx.r3.s64 = ctx.r9.s64 + -29592;
	// lfs f1,-29504(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -29504);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822e1660
	ctx.lr = 0x8231DF1C;
	sub_822E1660(ctx, base);
	// lis r8,-31834
	ctx.r8.s64 = -2086273024;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// fmr f3,f29
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f29.f64;
	// lis r6,-32251
	ctx.r6.s64 = -2113601536;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// lis r5,-32251
	ctx.r5.s64 = -2113601536;
	// stw r3,-6656(r8)
	PPC_STORE_U32(ctx.r8.u32 + -6656, ctx.r3.u32);
	// addi r8,r6,-29680
	ctx.r8.s64 = ctx.r6.s64 + -29680;
	// lfs f1,3096(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3096);
	ctx.f1.f64 = double(temp.f32);
	// addi r3,r5,-29708
	ctx.r3.s64 = ctx.r5.s64 + -29708;
	// li r7,132
	ctx.r7.s64 = 132;
	// bl 0x822e1660
	ctx.lr = 0x8231DF4C;
	sub_822E1660(ctx, base);
	// lis r4,-31834
	ctx.r4.s64 = -2086273024;
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f30.f64;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r3,-6704(r4)
	PPC_STORE_U32(ctx.r4.u32 + -6704, ctx.r3.u32);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// lfs f18,-23464(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -23464);
	ctx.f18.f64 = double(temp.f32);
	// addi r8,r10,-29792
	ctx.r8.s64 = ctx.r10.s64 + -29792;
	// fmr f3,f29
	ctx.f3.f64 = ctx.f29.f64;
	// addi r3,r9,-29820
	ctx.r3.s64 = ctx.r9.s64 + -29820;
	// fmr f1,f18
	ctx.f1.f64 = ctx.f18.f64;
	// li r7,132
	ctx.r7.s64 = 132;
	// bl 0x822e1660
	ctx.lr = 0x8231DF80;
	sub_822E1660(ctx, base);
	// lis r8,-31834
	ctx.r8.s64 = -2086273024;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// lis r6,-32251
	ctx.r6.s64 = -2113601536;
	// fmr f3,f30
	ctx.f3.f64 = ctx.f30.f64;
	// lis r5,-32251
	ctx.r5.s64 = -2113601536;
	// stw r3,-6456(r8)
	PPC_STORE_U32(ctx.r8.u32 + -6456, ctx.r3.u32);
	// addi r8,r6,-29896
	ctx.r8.s64 = ctx.r6.s64 + -29896;
	// lfs f1,6020(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 6020);
	ctx.f1.f64 = double(temp.f32);
	// addi r3,r5,-29924
	ctx.r3.s64 = ctx.r5.s64 + -29924;
	// li r7,132
	ctx.r7.s64 = 132;
	// stfs f1,104(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x822e1660
	ctx.lr = 0x8231DFB4;
	sub_822E1660(ctx, base);
	// lis r4,-31834
	ctx.r4.s64 = -2086273024;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// fmr f3,f25
	ctx.f3.f64 = ctx.f25.f64;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// addi r8,r10,-29940
	ctx.r8.s64 = ctx.r10.s64 + -29940;
	// stw r3,-6504(r4)
	PPC_STORE_U32(ctx.r4.u32 + -6504, ctx.r3.u32);
	// addi r3,r9,-29952
	ctx.r3.s64 = ctx.r9.s64 + -29952;
	// li r7,132
	ctx.r7.s64 = 132;
	// lfs f1,-27992(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27992);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822e1660
	ctx.lr = 0x8231DFE4;
	sub_822E1660(ctx, base);
	// lis r6,-31834
	ctx.r6.s64 = -2086273024;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// lis r7,-32251
	ctx.r7.s64 = -2113601536;
	// fmr f1,f25
	ctx.f1.f64 = ctx.f25.f64;
	// lis r5,-32251
	ctx.r5.s64 = -2113601536;
	// stw r3,-6616(r6)
	PPC_STORE_U32(ctx.r6.u32 + -6616, ctx.r3.u32);
	// addi r3,r5,-29988
	ctx.r3.s64 = ctx.r5.s64 + -29988;
	// lfs f28,12240(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12240);
	ctx.f28.f64 = double(temp.f32);
	// addi r8,r7,-29976
	ctx.r8.s64 = ctx.r7.s64 + -29976;
	// li r7,132
	ctx.r7.s64 = 132;
	// fmr f3,f28
	ctx.f3.f64 = ctx.f28.f64;
	// bl 0x822e1660
	ctx.lr = 0x8231E018;
	sub_822E1660(ctx, base);
	// lis r4,-31834
	ctx.r4.s64 = -2086273024;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// addi r8,r10,-30072
	ctx.r8.s64 = ctx.r10.s64 + -30072;
	// stw r3,-22108(r4)
	PPC_STORE_U32(ctx.r4.u32 + -22108, ctx.r3.u32);
	// addi r3,r9,-30092
	ctx.r3.s64 = ctx.r9.s64 + -30092;
	// lfs f14,6040(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6040);
	ctx.f14.f64 = double(temp.f32);
	// li r7,4
	ctx.r7.s64 = 4;
	// fmr f1,f14
	ctx.f1.f64 = ctx.f14.f64;
	// bl 0x822e1660
	ctx.lr = 0x8231E04C;
	sub_822E1660(ctx, base);
	// lis r7,-31834
	ctx.r7.s64 = -2086273024;
	// lis r6,-32251
	ctx.r6.s64 = -2113601536;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// lis r5,-32251
	ctx.r5.s64 = -2113601536;
	// fmr f3,f15
	ctx.f3.f64 = ctx.f15.f64;
	// addi r8,r6,-30176
	ctx.r8.s64 = ctx.r6.s64 + -30176;
	// fmr f1,f27
	ctx.f1.f64 = ctx.f27.f64;
	// stw r3,-16896(r7)
	PPC_STORE_U32(ctx.r7.u32 + -16896, ctx.r3.u32);
	// addi r3,r5,-30196
	ctx.r3.s64 = ctx.r5.s64 + -30196;
	// li r7,4
	ctx.r7.s64 = 4;
	// bl 0x822e1660
	ctx.lr = 0x8231E078;
	sub_822E1660(ctx, base);
	// lis r4,-31834
	ctx.r4.s64 = -2086273024;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r8,r9,-30260
	ctx.r8.s64 = ctx.r9.s64 + -30260;
	// stw r3,-6468(r4)
	PPC_STORE_U32(ctx.r4.u32 + -6468, ctx.r3.u32);
	// addi r3,r11,-30220
	ctx.r3.s64 = ctx.r11.s64 + -30220;
	// li r7,0
	ctx.r7.s64 = 0;
	// lfs f1,-30264(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -30264);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,84(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// bl 0x822e1660
	ctx.lr = 0x8231E0AC;
	sub_822E1660(ctx, base);
	// lis r8,-31834
	ctx.r8.s64 = -2086273024;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// fmr f4,f30
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f30.f64;
	// lis r7,-32251
	ctx.r7.s64 = -2113601536;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// lis r5,-32251
	ctx.r5.s64 = -2113601536;
	// lis r4,-32251
	ctx.r4.s64 = -2113601536;
	// stw r3,-6580(r8)
	PPC_STORE_U32(ctx.r8.u32 + -6580, ctx.r3.u32);
	// addi r9,r5,-30360
	ctx.r9.s64 = ctx.r5.s64 + -30360;
	// lfs f23,14192(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 14192);
	ctx.f23.f64 = double(temp.f32);
	// addi r3,r4,-30396
	ctx.r3.s64 = ctx.r4.s64 + -30396;
	// li r8,132
	ctx.r8.s64 = 132;
	// lfs f2,-30268(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -30268);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,88(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmr f1,f23
	ctx.f1.f64 = ctx.f23.f64;
	// bl 0x822e16a8
	ctx.lr = 0x8231E0EC;
	sub_822E16A8(ctx, base);
	// lis r11,-31834
	ctx.r11.s64 = -2086273024;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// fmr f4,f30
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f30.f64;
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// stw r3,-6568(r11)
	PPC_STORE_U32(ctx.r11.u32 + -6568, ctx.r3.u32);
	// addi r3,r8,-30428
	ctx.r3.s64 = ctx.r8.s64 + -30428;
	// lfs f21,-30400(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -30400);
	ctx.f21.f64 = double(temp.f32);
	// addi r9,r9,-30520
	ctx.r9.s64 = ctx.r9.s64 + -30520;
	// li r8,196
	ctx.r8.s64 = 196;
	// fmr f2,f21
	ctx.f2.f64 = ctx.f21.f64;
	// fmr f1,f21
	ctx.f1.f64 = ctx.f21.f64;
	// bl 0x822e16a8
	ctx.lr = 0x8231E124;
	sub_822E16A8(ctx, base);
	// lis r7,-31834
	ctx.r7.s64 = -2086273024;
	// lis r6,-32251
	ctx.r6.s64 = -2113601536;
	// fmr f2,f21
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f21.f64;
	// lis r5,-32251
	ctx.r5.s64 = -2113601536;
	// fmr f4,f30
	ctx.f4.f64 = ctx.f30.f64;
	// addi r9,r6,-30624
	ctx.r9.s64 = ctx.r6.s64 + -30624;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// li r8,196
	ctx.r8.s64 = 196;
	// fmr f1,f21
	ctx.f1.f64 = ctx.f21.f64;
	// stw r3,-16912(r7)
	PPC_STORE_U32(ctx.r7.u32 + -16912, ctx.r3.u32);
	// addi r3,r5,-30660
	ctx.r3.s64 = ctx.r5.s64 + -30660;
	// bl 0x822e16a8
	ctx.lr = 0x8231E154;
	sub_822E16A8(ctx, base);
	// lis r4,-31834
	ctx.r4.s64 = -2086273024;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// fmr f4,f30
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f30.f64;
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// stw r3,-16620(r4)
	PPC_STORE_U32(ctx.r4.u32 + -16620, ctx.r3.u32);
	// addi r3,r8,-30692
	ctx.r3.s64 = ctx.r8.s64 + -30692;
	// lfs f21,-30664(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -30664);
	ctx.f21.f64 = double(temp.f32);
	// addi r9,r10,-30784
	ctx.r9.s64 = ctx.r10.s64 + -30784;
	// li r8,132
	ctx.r8.s64 = 132;
	// fmr f2,f21
	ctx.f2.f64 = ctx.f21.f64;
	// fmr f1,f21
	ctx.f1.f64 = ctx.f21.f64;
	// bl 0x822e16a8
	ctx.lr = 0x8231E18C;
	sub_822E16A8(ctx, base);
	// lis r7,-31834
	ctx.r7.s64 = -2086273024;
	// lis r6,-32251
	ctx.r6.s64 = -2113601536;
	// fmr f2,f21
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f21.f64;
	// lis r5,-32251
	ctx.r5.s64 = -2113601536;
	// fmr f4,f30
	ctx.f4.f64 = ctx.f30.f64;
	// addi r9,r6,-30880
	ctx.r9.s64 = ctx.r6.s64 + -30880;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// li r8,132
	ctx.r8.s64 = 132;
	// fmr f1,f21
	ctx.f1.f64 = ctx.f21.f64;
	// stw r3,-22100(r7)
	PPC_STORE_U32(ctx.r7.u32 + -22100, ctx.r3.u32);
	// addi r3,r5,-30912
	ctx.r3.s64 = ctx.r5.s64 + -30912;
	// bl 0x822e16a8
	ctx.lr = 0x8231E1BC;
	sub_822E16A8(ctx, base);
	// lis r4,-31834
	ctx.r4.s64 = -2086273024;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fmr f4,f30
	ctx.f4.f64 = ctx.f30.f64;
	// fmr f1,f23
	ctx.f1.f64 = ctx.f23.f64;
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// addi r9,r10,-31000
	ctx.r9.s64 = ctx.r10.s64 + -31000;
	// stw r3,-22132(r4)
	PPC_STORE_U32(ctx.r4.u32 + -22132, ctx.r3.u32);
	// addi r3,r8,-31028
	ctx.r3.s64 = ctx.r8.s64 + -31028;
	// lfs f21,25024(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 25024);
	ctx.f21.f64 = double(temp.f32);
	// li r8,132
	ctx.r8.s64 = 132;
	// fmr f2,f21
	ctx.f2.f64 = ctx.f21.f64;
	// bl 0x822e16a8
	ctx.lr = 0x8231E1F4;
	sub_822E16A8(ctx, base);
	// lis r7,-31834
	ctx.r7.s64 = -2086273024;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// lis r5,-32251
	ctx.r5.s64 = -2113601536;
	// fmr f3,f26
	ctx.f3.f64 = ctx.f26.f64;
	// lis r4,-32251
	ctx.r4.s64 = -2113601536;
	// addi r8,r5,-31080
	ctx.r8.s64 = ctx.r5.s64 + -31080;
	// stw r3,-6652(r7)
	PPC_STORE_U32(ctx.r7.u32 + -6652, ctx.r3.u32);
	// addi r3,r4,-31104
	ctx.r3.s64 = ctx.r4.s64 + -31104;
	// lfs f19,6820(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 6820);
	ctx.f19.f64 = double(temp.f32);
	// li r7,132
	ctx.r7.s64 = 132;
	// fmr f1,f19
	ctx.f1.f64 = ctx.f19.f64;
	// bl 0x822e1660
	ctx.lr = 0x8231E228;
	sub_822E1660(ctx, base);
	// lis r10,-31834
	ctx.r10.s64 = -2086273024;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// lis r6,-32251
	ctx.r6.s64 = -2113601536;
	// stw r3,-16916(r10)
	PPC_STORE_U32(ctx.r10.u32 + -16916, ctx.r3.u32);
	// addi r8,r9,-31140
	ctx.r8.s64 = ctx.r9.s64 + -31140;
	// lfs f1,6016(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 6016);
	ctx.f1.f64 = double(temp.f32);
	// li r7,132
	ctx.r7.s64 = 132;
	// addi r3,r6,-31156
	ctx.r3.s64 = ctx.r6.s64 + -31156;
	// lfs f3,6060(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6060);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,92(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f1,96(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// bl 0x822e1660
	ctx.lr = 0x8231E264;
	sub_822E1660(ctx, base);
	// lis r5,-31834
	ctx.r5.s64 = -2086273024;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// stw r3,-6368(r5)
	PPC_STORE_U32(ctx.r5.u32 + -6368, ctx.r3.u32);
	// addi r8,r10,-31204
	ctx.r8.s64 = ctx.r10.s64 + -31204;
	// addi r3,r9,-31220
	ctx.r3.s64 = ctx.r9.s64 + -31220;
	// lfs f2,2424(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 2424);
	ctx.f2.f64 = double(temp.f32);
	// li r7,132
	ctx.r7.s64 = 132;
	// lfs f1,5880(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5880);
	ctx.f1.f64 = double(temp.f32);
	// stfs f2,100(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f1,80(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// bl 0x822e1660
	ctx.lr = 0x8231E2A0;
	sub_822E1660(ctx, base);
	// lis r7,-31834
	ctx.r7.s64 = -2086273024;
	// lis r6,-32251
	ctx.r6.s64 = -2113601536;
	// lfs f1,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f1.f64 = double(temp.f32);
	// lis r5,-32251
	ctx.r5.s64 = -2113601536;
	// fmr f3,f30
	ctx.f3.f64 = ctx.f30.f64;
	// addi r8,r6,-31264
	ctx.r8.s64 = ctx.r6.s64 + -31264;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// stw r3,-6520(r7)
	PPC_STORE_U32(ctx.r7.u32 + -6520, ctx.r3.u32);
	// addi r3,r5,-31292
	ctx.r3.s64 = ctx.r5.s64 + -31292;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x822e1660
	ctx.lr = 0x8231E2CC;
	sub_822E1660(ctx, base);
	// lis r4,-31834
	ctx.r4.s64 = -2086273024;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lfs f2,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f2.f64 = double(temp.f32);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// fmr f4,f30
	ctx.f4.f64 = ctx.f30.f64;
	// addi r9,r11,-31400
	ctx.r9.s64 = ctx.r11.s64 + -31400;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// li r8,132
	ctx.r8.s64 = 132;
	// fmr f1,f23
	ctx.f1.f64 = ctx.f23.f64;
	// stw r3,-16928(r4)
	PPC_STORE_U32(ctx.r4.u32 + -16928, ctx.r3.u32);
	// addi r3,r10,-31432
	ctx.r3.s64 = ctx.r10.s64 + -31432;
	// bl 0x822e16a8
	ctx.lr = 0x8231E2FC;
	sub_822E16A8(ctx, base);
	// lis r9,-31834
	ctx.r9.s64 = -2086273024;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// fmr f4,f30
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f30.f64;
	// lis r6,-32251
	ctx.r6.s64 = -2113601536;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// lis r7,-32251
	ctx.r7.s64 = -2113601536;
	// lis r5,-32251
	ctx.r5.s64 = -2113601536;
	// stw r3,-6532(r9)
	PPC_STORE_U32(ctx.r9.u32 + -6532, ctx.r3.u32);
	// addi r9,r6,-31536
	ctx.r9.s64 = ctx.r6.s64 + -31536;
	// lfs f2,-11392(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -11392);
	ctx.f2.f64 = double(temp.f32);
	// addi r3,r5,-31576
	ctx.r3.s64 = ctx.r5.s64 + -31576;
	// lfs f1,-31544(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -31544);
	ctx.f1.f64 = double(temp.f32);
	// li r8,196
	ctx.r8.s64 = 196;
	// stfs f2,88(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x822e16a8
	ctx.lr = 0x8231E338;
	sub_822E16A8(ctx, base);
	// lis r4,-31834
	ctx.r4.s64 = -2086273024;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lfs f2,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f2.f64 = double(temp.f32);
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// fmr f4,f30
	ctx.f4.f64 = ctx.f30.f64;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// stw r3,-6360(r4)
	PPC_STORE_U32(ctx.r4.u32 + -6360, ctx.r3.u32);
	// addi r3,r8,-31608
	ctx.r3.s64 = ctx.r8.s64 + -31608;
	// addi r9,r10,-31712
	ctx.r9.s64 = ctx.r10.s64 + -31712;
	// lfs f1,-31580(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -31580);
	ctx.f1.f64 = double(temp.f32);
	// li r8,132
	ctx.r8.s64 = 132;
	// bl 0x822e16a8
	ctx.lr = 0x8231E36C;
	sub_822E16A8(ctx, base);
	// lis r7,-31834
	ctx.r7.s64 = -2086273024;
	// lis r6,-32251
	ctx.r6.s64 = -2113601536;
	// fmr f4,f30
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f30.f64;
	// lis r5,-32251
	ctx.r5.s64 = -2113601536;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// addi r9,r6,-31816
	ctx.r9.s64 = ctx.r6.s64 + -31816;
	// fmr f2,f21
	ctx.f2.f64 = ctx.f21.f64;
	// li r8,132
	ctx.r8.s64 = 132;
	// fmr f1,f23
	ctx.f1.f64 = ctx.f23.f64;
	// stw r3,-16952(r7)
	PPC_STORE_U32(ctx.r7.u32 + -16952, ctx.r3.u32);
	// addi r3,r5,-31848
	ctx.r3.s64 = ctx.r5.s64 + -31848;
	// bl 0x822e16a8
	ctx.lr = 0x8231E39C;
	sub_822E16A8(ctx, base);
	// lis r4,-31834
	ctx.r4.s64 = -2086273024;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// fmr f3,f26
	ctx.f3.f64 = ctx.f26.f64;
	// addi r8,r11,-31904
	ctx.r8.s64 = ctx.r11.s64 + -31904;
	// fmr f1,f19
	ctx.f1.f64 = ctx.f19.f64;
	// li r7,132
	ctx.r7.s64 = 132;
	// stw r3,-16580(r4)
	PPC_STORE_U32(ctx.r4.u32 + -16580, ctx.r3.u32);
	// addi r3,r10,-31932
	ctx.r3.s64 = ctx.r10.s64 + -31932;
	// bl 0x822e1660
	ctx.lr = 0x8231E3C8;
	sub_822E1660(ctx, base);
	// lis r9,-31834
	ctx.r9.s64 = -2086273024;
	// lis r7,-32251
	ctx.r7.s64 = -2113601536;
	// lfs f3,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f3.f64 = double(temp.f32);
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// lfs f1,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f1.f64 = double(temp.f32);
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// addi r8,r8,-32000
	ctx.r8.s64 = ctx.r8.s64 + -32000;
	// stw r3,-6432(r9)
	PPC_STORE_U32(ctx.r9.u32 + -6432, ctx.r3.u32);
	// addi r3,r7,-31948
	ctx.r3.s64 = ctx.r7.s64 + -31948;
	// li r7,132
	ctx.r7.s64 = 132;
	// bl 0x822e1660
	ctx.lr = 0x8231E3F4;
	sub_822E1660(ctx, base);
	// lis r6,-31834
	ctx.r6.s64 = -2086273024;
	// lis r5,-32251
	ctx.r5.s64 = -2113601536;
	// lfs f2,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f2.f64 = double(temp.f32);
	// lis r4,-32251
	ctx.r4.s64 = -2113601536;
	// lfs f1,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// addi r8,r5,-32052
	ctx.r8.s64 = ctx.r5.s64 + -32052;
	// fmr f3,f30
	ctx.f3.f64 = ctx.f30.f64;
	// li r7,132
	ctx.r7.s64 = 132;
	// stw r3,-16908(r6)
	PPC_STORE_U32(ctx.r6.u32 + -16908, ctx.r3.u32);
	// addi r3,r4,-32068
	ctx.r3.s64 = ctx.r4.s64 + -32068;
	// bl 0x822e1660
	ctx.lr = 0x8231E420;
	sub_822E1660(ctx, base);
	// lis r11,-31834
	ctx.r11.s64 = -2086273024;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// addi r6,r10,-32144
	ctx.r6.s64 = ctx.r10.s64 + -32144;
	// li r5,12
	ctx.r5.s64 = 12;
	// stw r3,-6352(r11)
	PPC_STORE_U32(ctx.r11.u32 + -6352, ctx.r3.u32);
	// addi r3,r9,-32176
	ctx.r3.s64 = ctx.r9.s64 + -32176;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822e15d0
	ctx.lr = 0x8231E444;
	sub_822E15D0(ctx, base);
	// lis r7,-31834
	ctx.r7.s64 = -2086273024;
	// lis r6,-32251
	ctx.r6.s64 = -2113601536;
	// fmr f3,f25
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f25.f64;
	// lis r5,-32251
	ctx.r5.s64 = -2113601536;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// addi r8,r6,-32264
	ctx.r8.s64 = ctx.r6.s64 + -32264;
	// stw r3,-6388(r7)
	PPC_STORE_U32(ctx.r7.u32 + -6388, ctx.r3.u32);
	// addi r3,r5,-32292
	ctx.r3.s64 = ctx.r5.s64 + -32292;
	// li r7,4
	ctx.r7.s64 = 4;
	// bl 0x822e1660
	ctx.lr = 0x8231E470;
	sub_822E1660(ctx, base);
	// lis r4,-31834
	ctx.r4.s64 = -2086273024;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// fmr f1,f25
	ctx.f1.f64 = ctx.f25.f64;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// addi r8,r10,-32376
	ctx.r8.s64 = ctx.r10.s64 + -32376;
	// stw r3,-6544(r4)
	PPC_STORE_U32(ctx.r4.u32 + -6544, ctx.r3.u32);
	// addi r3,r9,-32396
	ctx.r3.s64 = ctx.r9.s64 + -32396;
	// li r7,4
	ctx.r7.s64 = 4;
	// lfs f3,20560(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20560);
	ctx.f3.f64 = double(temp.f32);
	// bl 0x822e1660
	ctx.lr = 0x8231E4A0;
	sub_822E1660(ctx, base);
	// lis r8,-31834
	ctx.r8.s64 = -2086273024;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// lis r6,-32251
	ctx.r6.s64 = -2113601536;
	// fmr f3,f18
	ctx.f3.f64 = ctx.f18.f64;
	// lis r5,-32251
	ctx.r5.s64 = -2113601536;
	// stw r3,-6684(r8)
	PPC_STORE_U32(ctx.r8.u32 + -6684, ctx.r3.u32);
	// addi r8,r6,-32472
	ctx.r8.s64 = ctx.r6.s64 + -32472;
	// lfs f1,6052(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 6052);
	ctx.f1.f64 = double(temp.f32);
	// addi r3,r5,-32504
	ctx.r3.s64 = ctx.r5.s64 + -32504;
	// li r7,132
	ctx.r7.s64 = 132;
	// bl 0x822e1660
	ctx.lr = 0x8231E4D0;
	sub_822E1660(ctx, base);
	// lis r4,-31834
	ctx.r4.s64 = -2086273024;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// fmr f3,f28
	ctx.f3.f64 = ctx.f28.f64;
	// addi r8,r11,-32584
	ctx.r8.s64 = ctx.r11.s64 + -32584;
	// fmr f1,f25
	ctx.f1.f64 = ctx.f25.f64;
	// li r7,132
	ctx.r7.s64 = 132;
	// stw r3,-16884(r4)
	PPC_STORE_U32(ctx.r4.u32 + -16884, ctx.r3.u32);
	// addi r3,r10,-32612
	ctx.r3.s64 = ctx.r10.s64 + -32612;
	// bl 0x822e1660
	ctx.lr = 0x8231E4FC;
	sub_822E1660(ctx, base);
	// lis r9,-31834
	ctx.r9.s64 = -2086273024;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r5,-32251
	ctx.r5.s64 = -2113601536;
	// lis r4,-32251
	ctx.r4.s64 = -2113601536;
	// stw r3,-16960(r9)
	PPC_STORE_U32(ctx.r9.u32 + -16960, ctx.r3.u32);
	// addi r8,r5,-32660
	ctx.r8.s64 = ctx.r5.s64 + -32660;
	// lfs f18,5808(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 5808);
	ctx.f18.f64 = double(temp.f32);
	// addi r3,r4,-32684
	ctx.r3.s64 = ctx.r4.s64 + -32684;
	// lfs f23,14208(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 14208);
	ctx.f23.f64 = double(temp.f32);
	// li r7,132
	ctx.r7.s64 = 132;
	// fmr f3,f18
	ctx.f3.f64 = ctx.f18.f64;
	// fmr f1,f23
	ctx.f1.f64 = ctx.f23.f64;
	// bl 0x822e1660
	ctx.lr = 0x8231E538;
	sub_822E1660(ctx, base);
	// lis r11,-31834
	ctx.r11.s64 = -2086273024;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// fmr f3,f18
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f18.f64;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// addi r8,r10,-32752
	ctx.r8.s64 = ctx.r10.s64 + -32752;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// li r7,132
	ctx.r7.s64 = 132;
	// stw r3,-6396(r11)
	PPC_STORE_U32(ctx.r11.u32 + -6396, ctx.r3.u32);
	// addi r3,r9,32756
	ctx.r3.s64 = ctx.r9.s64 + 32756;
	// bl 0x822e1660
	ctx.lr = 0x8231E564;
	sub_822E1660(ctx, base);
	// lis r7,-31834
	ctx.r7.s64 = -2086273024;
	// lis r6,-32252
	ctx.r6.s64 = -2113667072;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// lis r5,-32252
	ctx.r5.s64 = -2113667072;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// addi r8,r6,32664
	ctx.r8.s64 = ctx.r6.s64 + 32664;
	// fmr f3,f18
	ctx.f3.f64 = ctx.f18.f64;
	// stw r3,-6516(r7)
	PPC_STORE_U32(ctx.r7.u32 + -6516, ctx.r3.u32);
	// addi r3,r5,32632
	ctx.r3.s64 = ctx.r5.s64 + 32632;
	// li r7,132
	ctx.r7.s64 = 132;
	// bl 0x822e1660
	ctx.lr = 0x8231E590;
	sub_822E1660(ctx, base);
	// lis r4,-31834
	ctx.r4.s64 = -2086273024;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// fmr f1,f23
	ctx.f1.f64 = ctx.f23.f64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// stw r3,-6584(r4)
	PPC_STORE_U32(ctx.r4.u32 + -6584, ctx.r3.u32);
	// lfs f23,26572(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 26572);
	ctx.f23.f64 = double(temp.f32);
	// addi r8,r11,32576
	ctx.r8.s64 = ctx.r11.s64 + 32576;
	// addi r3,r9,32548
	ctx.r3.s64 = ctx.r9.s64 + 32548;
	// fmr f3,f23
	ctx.f3.f64 = ctx.f23.f64;
	// li r7,132
	ctx.r7.s64 = 132;
	// bl 0x822e1660
	ctx.lr = 0x8231E5C4;
	sub_822E1660(ctx, base);
	// lis r7,-31834
	ctx.r7.s64 = -2086273024;
	// lis r6,-32252
	ctx.r6.s64 = -2113667072;
	// fmr f3,f23
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f23.f64;
	// lis r5,-32252
	ctx.r5.s64 = -2113667072;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// addi r8,r6,32472
	ctx.r8.s64 = ctx.r6.s64 + 32472;
	// fmr f1,f16
	ctx.f1.f64 = ctx.f16.f64;
	// stw r3,-16608(r7)
	PPC_STORE_U32(ctx.r7.u32 + -16608, ctx.r3.u32);
	// li r7,132
	ctx.r7.s64 = 132;
	// addi r3,r5,32444
	ctx.r3.s64 = ctx.r5.s64 + 32444;
	// bl 0x822e1660
	ctx.lr = 0x8231E5F0;
	sub_822E1660(ctx, base);
	// lis r4,-31834
	ctx.r4.s64 = -2086273024;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// fmr f3,f23
	ctx.f3.f64 = ctx.f23.f64;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// addi r8,r10,32376
	ctx.r8.s64 = ctx.r10.s64 + 32376;
	// stw r3,-6548(r4)
	PPC_STORE_U32(ctx.r4.u32 + -6548, ctx.r3.u32);
	// addi r3,r9,32352
	ctx.r3.s64 = ctx.r9.s64 + 32352;
	// li r7,132
	ctx.r7.s64 = 132;
	// lfs f1,23112(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 23112);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822e1660
	ctx.lr = 0x8231E620;
	sub_822E1660(ctx, base);
	// lis r8,-31834
	ctx.r8.s64 = -2086273024;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// lis r6,-32252
	ctx.r6.s64 = -2113667072;
	// fmr f3,f25
	ctx.f3.f64 = ctx.f25.f64;
	// lis r5,-32252
	ctx.r5.s64 = -2113667072;
	// stw r3,-6436(r8)
	PPC_STORE_U32(ctx.r8.u32 + -6436, ctx.r3.u32);
	// addi r8,r6,32296
	ctx.r8.s64 = ctx.r6.s64 + 32296;
	// lfs f23,5488(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 5488);
	ctx.f23.f64 = double(temp.f32);
	// addi r3,r5,32272
	ctx.r3.s64 = ctx.r5.s64 + 32272;
	// li r7,132
	ctx.r7.s64 = 132;
	// fmr f1,f23
	ctx.f1.f64 = ctx.f23.f64;
	// bl 0x822e1660
	ctx.lr = 0x8231E654;
	sub_822E1660(ctx, base);
	// lis r4,-31834
	ctx.r4.s64 = -2086273024;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// addi r8,r11,32224
	ctx.r8.s64 = ctx.r11.s64 + 32224;
	// fmr f3,f23
	ctx.f3.f64 = ctx.f23.f64;
	// li r7,132
	ctx.r7.s64 = 132;
	// stw r3,-16612(r4)
	PPC_STORE_U32(ctx.r4.u32 + -16612, ctx.r3.u32);
	// addi r3,r10,32200
	ctx.r3.s64 = ctx.r10.s64 + 32200;
	// bl 0x822e1660
	ctx.lr = 0x8231E680;
	sub_822E1660(ctx, base);
	// lis r9,-31834
	ctx.r9.s64 = -2086273024;
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// lis r7,-32252
	ctx.r7.s64 = -2113667072;
	// addi r6,r8,32156
	ctx.r6.s64 = ctx.r8.s64 + 32156;
	// li r5,132
	ctx.r5.s64 = 132;
	// stw r3,-6660(r9)
	PPC_STORE_U32(ctx.r9.u32 + -6660, ctx.r3.u32);
	// addi r3,r7,32128
	ctx.r3.s64 = ctx.r7.s64 + 32128;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822e15d0
	ctx.lr = 0x8231E6A4;
	sub_822E15D0(ctx, base);
	// lis r6,-31834
	ctx.r6.s64 = -2086273024;
	// lis r5,-32252
	ctx.r5.s64 = -2113667072;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r8,r5,32092
	ctx.r8.s64 = ctx.r5.s64 + 32092;
	// li r7,132
	ctx.r7.s64 = 132;
	// stw r3,-6608(r6)
	PPC_STORE_U32(ctx.r6.u32 + -6608, ctx.r3.u32);
	// li r6,1000
	ctx.r6.s64 = 1000;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,100
	ctx.r4.s64 = 100;
	// addi r3,r11,32072
	ctx.r3.s64 = ctx.r11.s64 + 32072;
	// bl 0x822e1618
	ctx.lr = 0x8231E6D0;
	sub_822E1618(ctx, base);
	// lis r10,-31834
	ctx.r10.s64 = -2086273024;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// lis r7,-32252
	ctx.r7.s64 = -2113667072;
	// fmr f3,f30
	ctx.f3.f64 = ctx.f30.f64;
	// addi r8,r9,31984
	ctx.r8.s64 = ctx.r9.s64 + 31984;
	// stw r3,-16904(r10)
	PPC_STORE_U32(ctx.r10.u32 + -16904, ctx.r3.u32);
	// addi r3,r7,31956
	ctx.r3.s64 = ctx.r7.s64 + 31956;
	// li r7,4
	ctx.r7.s64 = 4;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x822e1660
	ctx.lr = 0x8231E6FC;
	sub_822E1660(ctx, base);
	// lis r5,-31834
	ctx.r5.s64 = -2086273024;
	// lis r4,-32252
	ctx.r4.s64 = -2113667072;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r6,r4,31912
	ctx.r6.s64 = ctx.r4.s64 + 31912;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,-16924(r5)
	PPC_STORE_U32(ctx.r5.u32 + -16924, ctx.r3.u32);
	// addi r3,r11,31892
	ctx.r3.s64 = ctx.r11.s64 + 31892;
	// li r5,132
	ctx.r5.s64 = 132;
	// bl 0x822e15d0
	ctx.lr = 0x8231E720;
	sub_822E15D0(ctx, base);
	// lis r10,-31834
	ctx.r10.s64 = -2086273024;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// addi r6,r9,31848
	ctx.r6.s64 = ctx.r9.s64 + 31848;
	// li r5,196
	ctx.r5.s64 = 196;
	// stw r3,-22140(r10)
	PPC_STORE_U32(ctx.r10.u32 + -22140, ctx.r3.u32);
	// addi r3,r8,31828
	ctx.r3.s64 = ctx.r8.s64 + 31828;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822e15d0
	ctx.lr = 0x8231E744;
	sub_822E15D0(ctx, base);
	// lis r7,-31834
	ctx.r7.s64 = -2086273024;
	// lis r6,-32252
	ctx.r6.s64 = -2113667072;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// lis r5,-32252
	ctx.r5.s64 = -2113667072;
	// lis r4,-32252
	ctx.r4.s64 = -2113667072;
	// stw r3,-6348(r7)
	PPC_STORE_U32(ctx.r7.u32 + -6348, ctx.r3.u32);
	// lis r3,-32252
	ctx.r3.s64 = -2113667072;
	// lfs f21,31824(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 31824);
	ctx.f21.f64 = double(temp.f32);
	// addi r8,r4,31744
	ctx.r8.s64 = ctx.r4.s64 + 31744;
	// addi r3,r3,31720
	ctx.r3.s64 = ctx.r3.s64 + 31720;
	// lfs f1,31820(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 31820);
	ctx.f1.f64 = double(temp.f32);
	// li r7,132
	ctx.r7.s64 = 132;
	// fmr f3,f21
	ctx.f3.f64 = ctx.f21.f64;
	// bl 0x822e1660
	ctx.lr = 0x8231E77C;
	sub_822E1660(ctx, base);
	// lis r11,-31834
	ctx.r11.s64 = -2086273024;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// fmr f3,f27
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f27.f64;
	// lis r7,-32252
	ctx.r7.s64 = -2113667072;
	// fmr f1,f24
	ctx.f1.f64 = ctx.f24.f64;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// stw r3,-6648(r11)
	PPC_STORE_U32(ctx.r11.u32 + -6648, ctx.r3.u32);
	// addi r3,r7,31692
	ctx.r3.s64 = ctx.r7.s64 + 31692;
	// addi r8,r9,31568
	ctx.r8.s64 = ctx.r9.s64 + 31568;
	// lfs f2,31716(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 31716);
	ctx.f2.f64 = double(temp.f32);
	// li r7,8324
	ctx.r7.s64 = 8324;
	// bl 0x822e1660
	ctx.lr = 0x8231E7AC;
	sub_822E1660(ctx, base);
	// lis r6,-31834
	ctx.r6.s64 = -2086273024;
	// lis r5,-32252
	ctx.r5.s64 = -2113667072;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// lis r4,-32252
	ctx.r4.s64 = -2113667072;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// addi r8,r5,31496
	ctx.r8.s64 = ctx.r5.s64 + 31496;
	// fmr f3,f21
	ctx.f3.f64 = ctx.f21.f64;
	// li r7,8324
	ctx.r7.s64 = 8324;
	// stw r3,-6696(r6)
	PPC_STORE_U32(ctx.r6.u32 + -6696, ctx.r3.u32);
	// addi r3,r4,31464
	ctx.r3.s64 = ctx.r4.s64 + 31464;
	// bl 0x822e1660
	ctx.lr = 0x8231E7D8;
	sub_822E1660(ctx, base);
	// lis r11,-31834
	ctx.r11.s64 = -2086273024;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// fmr f3,f27
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f27.f64;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// addi r8,r10,31412
	ctx.r8.s64 = ctx.r10.s64 + 31412;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// li r7,132
	ctx.r7.s64 = 132;
	// stw r3,-22144(r11)
	PPC_STORE_U32(ctx.r11.u32 + -22144, ctx.r3.u32);
	// addi r3,r9,31388
	ctx.r3.s64 = ctx.r9.s64 + 31388;
	// bl 0x822e1660
	ctx.lr = 0x8231E804;
	sub_822E1660(ctx, base);
	// lis r7,-31834
	ctx.r7.s64 = -2086273024;
	// lis r6,-32252
	ctx.r6.s64 = -2113667072;
	// fmr f3,f27
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f27.f64;
	// lis r5,-32252
	ctx.r5.s64 = -2113667072;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// addi r8,r6,31328
	ctx.r8.s64 = ctx.r6.s64 + 31328;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// stw r3,-6408(r7)
	PPC_STORE_U32(ctx.r7.u32 + -6408, ctx.r3.u32);
	// addi r3,r5,31304
	ctx.r3.s64 = ctx.r5.s64 + 31304;
	// li r7,132
	ctx.r7.s64 = 132;
	// bl 0x822e1660
	ctx.lr = 0x8231E830;
	sub_822E1660(ctx, base);
	// lis r4,-31834
	ctx.r4.s64 = -2086273024;
	// stw r3,-6592(r4)
	PPC_STORE_U32(ctx.r4.u32 + -6592, ctx.r3.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// addi r8,r10,31240
	ctx.r8.s64 = ctx.r10.s64 + 31240;
	// addi r3,r9,31208
	ctx.r3.s64 = ctx.r9.s64 + 31208;
	// lfs f21,2416(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2416);
	ctx.f21.f64 = double(temp.f32);
	// li r7,132
	ctx.r7.s64 = 132;
	// fmr f1,f21
	ctx.f1.f64 = ctx.f21.f64;
	// bl 0x822e1660
	ctx.lr = 0x8231E864;
	sub_822E1660(ctx, base);
	// lis r7,-31834
	ctx.r7.s64 = -2086273024;
	// lis r6,-32252
	ctx.r6.s64 = -2113667072;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// lis r5,-32252
	ctx.r5.s64 = -2113667072;
	// fmr f3,f27
	ctx.f3.f64 = ctx.f27.f64;
	// addi r8,r6,31152
	ctx.r8.s64 = ctx.r6.s64 + 31152;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// stw r3,-6700(r7)
	PPC_STORE_U32(ctx.r7.u32 + -6700, ctx.r3.u32);
	// addi r3,r5,31124
	ctx.r3.s64 = ctx.r5.s64 + 31124;
	// li r7,132
	ctx.r7.s64 = 132;
	// bl 0x822e1660
	ctx.lr = 0x8231E890;
	sub_822E1660(ctx, base);
	// lis r4,-31834
	ctx.r4.s64 = -2086273024;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r8,r11,31060
	ctx.r8.s64 = ctx.r11.s64 + 31060;
	// li r7,128
	ctx.r7.s64 = 128;
	// stw r3,-6640(r4)
	PPC_STORE_U32(ctx.r4.u32 + -6640, ctx.r3.u32);
	// addi r3,r10,31032
	ctx.r3.s64 = ctx.r10.s64 + 31032;
	// li r6,255
	ctx.r6.s64 = 255;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,105
	ctx.r4.s64 = 105;
	// bl 0x822e1618
	ctx.lr = 0x8231E8BC;
	sub_822E1618(ctx, base);
	// lis r9,-31834
	ctx.r9.s64 = -2086273024;
	// lis r7,-32252
	ctx.r7.s64 = -2113667072;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// fmr f3,f20
	ctx.f3.f64 = ctx.f20.f64;
	// fmr f1,f19
	ctx.f1.f64 = ctx.f19.f64;
	// addi r8,r8,30952
	ctx.r8.s64 = ctx.r8.s64 + 30952;
	// stw r3,-22116(r9)
	PPC_STORE_U32(ctx.r9.u32 + -22116, ctx.r3.u32);
	// addi r3,r7,31008
	ctx.r3.s64 = ctx.r7.s64 + 31008;
	// li r7,196
	ctx.r7.s64 = 196;
	// bl 0x822e1660
	ctx.lr = 0x8231E8E8;
	sub_822E1660(ctx, base);
	// lis r5,-31834
	ctx.r5.s64 = -2086273024;
	// lis r4,-32252
	ctx.r4.s64 = -2113667072;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r6,r4,30908
	ctx.r6.s64 = ctx.r4.s64 + 30908;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,-6500(r5)
	PPC_STORE_U32(ctx.r5.u32 + -6500, ctx.r3.u32);
	// addi r3,r11,30884
	ctx.r3.s64 = ctx.r11.s64 + 30884;
	// li r5,196
	ctx.r5.s64 = 196;
	// bl 0x822e15d0
	ctx.lr = 0x8231E90C;
	sub_822E15D0(ctx, base);
	// lis r10,-31834
	ctx.r10.s64 = -2086273024;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// fmr f1,f16
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f16.f64;
	// lis r7,-32252
	ctx.r7.s64 = -2113667072;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// stw r3,-6492(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6492, ctx.r3.u32);
	// addi r3,r7,30860
	ctx.r3.s64 = ctx.r7.s64 + 30860;
	// lfs f16,30880(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 30880);
	ctx.f16.f64 = double(temp.f32);
	// addi r8,r8,30816
	ctx.r8.s64 = ctx.r8.s64 + 30816;
	// li r7,132
	ctx.r7.s64 = 132;
	// fmr f3,f16
	ctx.f3.f64 = ctx.f16.f64;
	// bl 0x822e1660
	ctx.lr = 0x8231E940;
	sub_822E1660(ctx, base);
	// lis r6,-31834
	ctx.r6.s64 = -2086273024;
	// lis r5,-32252
	ctx.r5.s64 = -2113667072;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// lis r4,-32252
	ctx.r4.s64 = -2113667072;
	// fmr f3,f16
	ctx.f3.f64 = ctx.f16.f64;
	// addi r8,r5,30756
	ctx.r8.s64 = ctx.r5.s64 + 30756;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// li r7,132
	ctx.r7.s64 = 132;
	// stw r3,-6420(r6)
	PPC_STORE_U32(ctx.r6.u32 + -6420, ctx.r3.u32);
	// addi r3,r4,30732
	ctx.r3.s64 = ctx.r4.s64 + 30732;
	// bl 0x822e1660
	ctx.lr = 0x8231E96C;
	sub_822E1660(ctx, base);
	// lis r11,-31834
	ctx.r11.s64 = -2086273024;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// stw r3,-6676(r11)
	PPC_STORE_U32(ctx.r11.u32 + -6676, ctx.r3.u32);
	// lis r7,-32252
	ctx.r7.s64 = -2113667072;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// lfs f3,30728(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 30728);
	ctx.f3.f64 = double(temp.f32);
	// addi r3,r7,30700
	ctx.r3.s64 = ctx.r7.s64 + 30700;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// addi r8,r9,30608
	ctx.r8.s64 = ctx.r9.s64 + 30608;
	// li r7,132
	ctx.r7.s64 = 132;
	// bl 0x822e1660
	ctx.lr = 0x8231E99C;
	sub_822E1660(ctx, base);
	// lis r6,-31834
	ctx.r6.s64 = -2086273024;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// lis r4,-32252
	ctx.r4.s64 = -2113667072;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// stw r3,-6472(r6)
	PPC_STORE_U32(ctx.r6.u32 + -6472, ctx.r3.u32);
	// addi r8,r11,30552
	ctx.r8.s64 = ctx.r11.s64 + 30552;
	// lfs f16,17968(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 17968);
	ctx.f16.f64 = double(temp.f32);
	// li r7,132
	ctx.r7.s64 = 132;
	// addi r3,r10,30520
	ctx.r3.s64 = ctx.r10.s64 + 30520;
	// lfs f1,30604(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 30604);
	ctx.f1.f64 = double(temp.f32);
	// fmr f3,f16
	ctx.f3.f64 = ctx.f16.f64;
	// bl 0x822e1660
	ctx.lr = 0x8231E9D4;
	sub_822E1660(ctx, base);
	// lis r9,-31834
	ctx.r9.s64 = -2086273024;
	// lis r7,-32252
	ctx.r7.s64 = -2113667072;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// fmr f3,f23
	ctx.f3.f64 = ctx.f23.f64;
	// fmr f1,f21
	ctx.f1.f64 = ctx.f21.f64;
	// addi r8,r8,30452
	ctx.r8.s64 = ctx.r8.s64 + 30452;
	// stw r3,-6428(r9)
	PPC_STORE_U32(ctx.r9.u32 + -6428, ctx.r3.u32);
	// addi r3,r7,30496
	ctx.r3.s64 = ctx.r7.s64 + 30496;
	// li r7,132
	ctx.r7.s64 = 132;
	// bl 0x822e1660
	ctx.lr = 0x8231EA00;
	sub_822E1660(ctx, base);
	// lis r5,-31834
	ctx.r5.s64 = -2086273024;
	// lis r4,-32252
	ctx.r4.s64 = -2113667072;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r6,r4,30396
	ctx.r6.s64 = ctx.r4.s64 + 30396;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,-6356(r5)
	PPC_STORE_U32(ctx.r5.u32 + -6356, ctx.r3.u32);
	// addi r3,r11,30372
	ctx.r3.s64 = ctx.r11.s64 + 30372;
	// li r5,132
	ctx.r5.s64 = 132;
	// bl 0x822e15d0
	ctx.lr = 0x8231EA24;
	sub_822E15D0(ctx, base);
	// lis r10,-31834
	ctx.r10.s64 = -2086273024;
	// lis r7,-32252
	ctx.r7.s64 = -2113667072;
	// fmr f3,f20
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f20.f64;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f14
	ctx.f1.f64 = ctx.f14.f64;
	// addi r8,r9,30272
	ctx.r8.s64 = ctx.r9.s64 + 30272;
	// stw r3,-6624(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6624, ctx.r3.u32);
	// addi r3,r7,30340
	ctx.r3.s64 = ctx.r7.s64 + 30340;
	// li r7,132
	ctx.r7.s64 = 132;
	// bl 0x822e1660
	ctx.lr = 0x8231EA50;
	sub_822E1660(ctx, base);
	// lis r5,-31834
	ctx.r5.s64 = -2086273024;
	// lis r4,-32252
	ctx.r4.s64 = -2113667072;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r6,r4,30212
	ctx.r6.s64 = ctx.r4.s64 + 30212;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,-6400(r5)
	PPC_STORE_U32(ctx.r5.u32 + -6400, ctx.r3.u32);
	// addi r3,r11,30192
	ctx.r3.s64 = ctx.r11.s64 + 30192;
	// li r5,132
	ctx.r5.s64 = 132;
	// bl 0x822e15d0
	ctx.lr = 0x8231EA74;
	sub_822E15D0(ctx, base);
	// lis r10,-31834
	ctx.r10.s64 = -2086273024;
	// lis r7,-32252
	ctx.r7.s64 = -2113667072;
	// lfs f1,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f1.f64 = double(temp.f32);
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// fmr f3,f30
	ctx.f3.f64 = ctx.f30.f64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// addi r8,r9,30104
	ctx.r8.s64 = ctx.r9.s64 + 30104;
	// stw r3,-22112(r10)
	PPC_STORE_U32(ctx.r10.u32 + -22112, ctx.r3.u32);
	// addi r3,r7,30176
	ctx.r3.s64 = ctx.r7.s64 + 30176;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x822e1660
	ctx.lr = 0x8231EAA0;
	sub_822E1660(ctx, base);
	// lis r5,-32252
	ctx.r5.s64 = -2113667072;
	// lis r6,-31834
	ctx.r6.s64 = -2086273024;
	// fmr f3,f29
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f29.f64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// lis r4,-32252
	ctx.r4.s64 = -2113667072;
	// fmr f1,f25
	ctx.f1.f64 = ctx.f25.f64;
	// addi r8,r5,30024
	ctx.r8.s64 = ctx.r5.s64 + 30024;
	// stw r3,-6412(r6)
	PPC_STORE_U32(ctx.r6.u32 + -6412, ctx.r3.u32);
	// addi r3,r4,29992
	ctx.r3.s64 = ctx.r4.s64 + 29992;
	// li r7,12
	ctx.r7.s64 = 12;
	// bl 0x822e1660
	ctx.lr = 0x8231EACC;
	sub_822E1660(ctx, base);
	// lis r11,-31834
	ctx.r11.s64 = -2086273024;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// lis r7,-32252
	ctx.r7.s64 = -2113667072;
	// fmr f3,f29
	ctx.f3.f64 = ctx.f29.f64;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// stw r3,-6628(r11)
	PPC_STORE_U32(ctx.r11.u32 + -6628, ctx.r3.u32);
	// addi r3,r7,29964
	ctx.r3.s64 = ctx.r7.s64 + 29964;
	// addi r8,r9,29904
	ctx.r8.s64 = ctx.r9.s64 + 29904;
	// lfs f1,29988(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 29988);
	ctx.f1.f64 = double(temp.f32);
	// li r7,12
	ctx.r7.s64 = 12;
	// bl 0x822e1660
	ctx.lr = 0x8231EAFC;
	sub_822E1660(ctx, base);
	// lis r6,-31834
	ctx.r6.s64 = -2086273024;
	// lis r5,-32252
	ctx.r5.s64 = -2113667072;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// lis r4,-32252
	ctx.r4.s64 = -2113667072;
	// fmr f3,f30
	ctx.f3.f64 = ctx.f30.f64;
	// addi r8,r5,29844
	ctx.r8.s64 = ctx.r5.s64 + 29844;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// li r7,12
	ctx.r7.s64 = 12;
	// stw r3,-6540(r6)
	PPC_STORE_U32(ctx.r6.u32 + -6540, ctx.r3.u32);
	// addi r3,r4,29816
	ctx.r3.s64 = ctx.r4.s64 + 29816;
	// bl 0x822e1660
	ctx.lr = 0x8231EB28;
	sub_822E1660(ctx, base);
	// lis r11,-31834
	ctx.r11.s64 = -2086273024;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// addi r8,r10,29776
	ctx.r8.s64 = ctx.r10.s64 + 29776;
	// li r7,12
	ctx.r7.s64 = 12;
	// stw r3,-6688(r11)
	PPC_STORE_U32(ctx.r11.u32 + -6688, ctx.r3.u32);
	// addi r3,r9,29748
	ctx.r3.s64 = ctx.r9.s64 + 29748;
	// li r6,2000
	ctx.r6.s64 = 2000;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,500
	ctx.r4.s64 = 500;
	// bl 0x822e1618
	ctx.lr = 0x8231EB54;
	sub_822E1618(ctx, base);
	// lis r7,-31834
	ctx.r7.s64 = -2086273024;
	// lis r6,-32252
	ctx.r6.s64 = -2113667072;
	// lis r5,-32252
	ctx.r5.s64 = -2113667072;
	// addi r8,r6,29708
	ctx.r8.s64 = ctx.r6.s64 + 29708;
	// li r6,2000
	ctx.r6.s64 = 2000;
	// stw r3,-6604(r7)
	PPC_STORE_U32(ctx.r7.u32 + -6604, ctx.r3.u32);
	// addi r3,r5,29680
	ctx.r3.s64 = ctx.r5.s64 + 29680;
	// li r7,12
	ctx.r7.s64 = 12;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,500
	ctx.r4.s64 = 500;
	// bl 0x822e1618
	ctx.lr = 0x8231EB80;
	sub_822E1618(ctx, base);
	// lis r4,-31834
	ctx.r4.s64 = -2086273024;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// addi r6,r11,29656
	ctx.r6.s64 = ctx.r11.s64 + 29656;
	// stw r3,-16932(r4)
	PPC_STORE_U32(ctx.r4.u32 + -16932, ctx.r3.u32);
	// addi r4,r10,29640
	ctx.r4.s64 = ctx.r10.s64 + 29640;
	// addi r3,r9,22132
	ctx.r3.s64 = ctx.r9.s64 + 22132;
	// li r5,5
	ctx.r5.s64 = 5;
	// bl 0x822e17e0
	ctx.lr = 0x8231EBA8;
	sub_822E17E0(ctx, base);
	// lis r8,-31834
	ctx.r8.s64 = -2086273024;
	// lis r5,-32252
	ctx.r5.s64 = -2113667072;
	// lis r7,-32252
	ctx.r7.s64 = -2113667072;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r5,29616
	ctx.r4.s64 = ctx.r5.s64 + 29616;
	// stw r3,-6512(r8)
	PPC_STORE_U32(ctx.r8.u32 + -6512, ctx.r3.u32);
	// addi r6,r7,29556
	ctx.r6.s64 = ctx.r7.s64 + 29556;
	// addi r3,r11,22104
	ctx.r3.s64 = ctx.r11.s64 + 22104;
	// li r5,5
	ctx.r5.s64 = 5;
	// bl 0x822e17e0
	ctx.lr = 0x8231EBD0;
	sub_822E17E0(ctx, base);
	// lis r10,-31834
	ctx.r10.s64 = -2086273024;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// lis r7,-32252
	ctx.r7.s64 = -2113667072;
	// addi r6,r9,29528
	ctx.r6.s64 = ctx.r9.s64 + 29528;
	// stw r3,-6664(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6664, ctx.r3.u32);
	// addi r4,r8,29512
	ctx.r4.s64 = ctx.r8.s64 + 29512;
	// addi r3,r7,22084
	ctx.r3.s64 = ctx.r7.s64 + 22084;
	// li r5,5
	ctx.r5.s64 = 5;
	// bl 0x822e17e0
	ctx.lr = 0x8231EBF8;
	sub_822E17E0(ctx, base);
	// lis r6,-31834
	ctx.r6.s64 = -2086273024;
	// lis r5,-32252
	ctx.r5.s64 = -2113667072;
	// stw r3,-22124(r6)
	PPC_STORE_U32(ctx.r6.u32 + -22124, ctx.r3.u32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r4,-32255
	ctx.r4.s64 = -2113863680;
	// addi r6,r5,29476
	ctx.r6.s64 = ctx.r5.s64 + 29476;
	// addi r4,r4,-24452
	ctx.r4.s64 = ctx.r4.s64 + -24452;
	// addi r3,r11,22060
	ctx.r3.s64 = ctx.r11.s64 + 22060;
	// li r5,5
	ctx.r5.s64 = 5;
	// bl 0x822e17e0
	ctx.lr = 0x8231EC20;
	sub_822E17E0(ctx, base);
	// lis r10,-31834
	ctx.r10.s64 = -2086273024;
	// lis r6,-32252
	ctx.r6.s64 = -2113667072;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// lis r8,-32191
	ctx.r8.s64 = -2109669376;
	// addi r7,r9,29444
	ctx.r7.s64 = ctx.r9.s64 + 29444;
	// stw r3,-22104(r10)
	PPC_STORE_U32(ctx.r10.u32 + -22104, ctx.r3.u32);
	// addi r3,r6,22368
	ctx.r3.s64 = ctx.r6.s64 + 22368;
	// addi r4,r8,32428
	ctx.r4.s64 = ctx.r8.s64 + 32428;
	// li r6,5
	ctx.r6.s64 = 5;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x822e1828
	ctx.lr = 0x8231EC4C;
	sub_822E1828(ctx, base);
	// lis r5,-31834
	ctx.r5.s64 = -2086273024;
	// lis r4,-32252
	ctx.r4.s64 = -2113667072;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// fmr f3,f24
	ctx.f3.f64 = ctx.f24.f64;
	// addi r8,r4,29376
	ctx.r8.s64 = ctx.r4.s64 + 29376;
	// fmr f1,f17
	ctx.f1.f64 = ctx.f17.f64;
	// li r7,5
	ctx.r7.s64 = 5;
	// stw r3,-16584(r5)
	PPC_STORE_U32(ctx.r5.u32 + -16584, ctx.r3.u32);
	// addi r3,r11,22336
	ctx.r3.s64 = ctx.r11.s64 + 22336;
	// bl 0x822e1660
	ctx.lr = 0x8231EC78;
	sub_822E1660(ctx, base);
	// lis r10,-31834
	ctx.r10.s64 = -2086273024;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// fmr f3,f28
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f28.f64;
	// lis r6,-32252
	ctx.r6.s64 = -2113667072;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// addi r8,r9,29312
	ctx.r8.s64 = ctx.r9.s64 + 29312;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// li r7,5
	ctx.r7.s64 = 5;
	// stw r3,-16936(r10)
	PPC_STORE_U32(ctx.r10.u32 + -16936, ctx.r3.u32);
	// addi r3,r6,22300
	ctx.r3.s64 = ctx.r6.s64 + 22300;
	// bl 0x822e1660
	ctx.lr = 0x8231ECA4;
	sub_822E1660(ctx, base);
	// lis r5,-31834
	ctx.r5.s64 = -2086273024;
	// lis r4,-32252
	ctx.r4.s64 = -2113667072;
	// fmr f3,f28
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f28.f64;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// addi r8,r4,29216
	ctx.r8.s64 = ctx.r4.s64 + 29216;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// li r7,5
	ctx.r7.s64 = 5;
	// stw r3,-16920(r5)
	PPC_STORE_U32(ctx.r5.u32 + -16920, ctx.r3.u32);
	// addi r3,r11,22264
	ctx.r3.s64 = ctx.r11.s64 + 22264;
	// bl 0x822e1660
	ctx.lr = 0x8231ECD0;
	sub_822E1660(ctx, base);
	// lis r10,-31834
	ctx.r10.s64 = -2086273024;
	// lis r7,-32252
	ctx.r7.s64 = -2113667072;
	// fmr f3,f28
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f28.f64;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// addi r8,r9,29120
	ctx.r8.s64 = ctx.r9.s64 + 29120;
	// stw r3,-6524(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6524, ctx.r3.u32);
	// addi r3,r7,22228
	ctx.r3.s64 = ctx.r7.s64 + 22228;
	// li r7,5
	ctx.r7.s64 = 5;
	// bl 0x822e1660
	ctx.lr = 0x8231ECFC;
	sub_822E1660(ctx, base);
	// lis r6,-31834
	ctx.r6.s64 = -2086273024;
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// fmr f3,f28
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f28.f64;
	// lis r4,-32252
	ctx.r4.s64 = -2113667072;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r8,r4,29068
	ctx.r8.s64 = ctx.r4.s64 + 29068;
	// stw r3,-6384(r6)
	PPC_STORE_U32(ctx.r6.u32 + -6384, ctx.r3.u32);
	// addi r3,r11,22204
	ctx.r3.s64 = ctx.r11.s64 + 22204;
	// li r7,5
	ctx.r7.s64 = 5;
	// lfs f1,8336(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8336);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822e1660
	ctx.lr = 0x8231ED2C;
	sub_822E1660(ctx, base);
	// lis r10,-31834
	ctx.r10.s64 = -2086273024;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// fmr f3,f30
	ctx.f3.f64 = ctx.f30.f64;
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// lis r7,-32252
	ctx.r7.s64 = -2113667072;
	// stw r3,-6508(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6508, ctx.r3.u32);
	// addi r3,r7,22180
	ctx.r3.s64 = ctx.r7.s64 + 22180;
	// addi r8,r8,29044
	ctx.r8.s64 = ctx.r8.s64 + 29044;
	// lfs f1,-23144(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -23144);
	ctx.f1.f64 = double(temp.f32);
	// li r7,5
	ctx.r7.s64 = 5;
	// bl 0x822e1660
	ctx.lr = 0x8231ED5C;
	sub_822E1660(ctx, base);
	// lis r6,-31834
	ctx.r6.s64 = -2086273024;
	// lis r5,-32252
	ctx.r5.s64 = -2113667072;
	// fmr f3,f28
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f28.f64;
	// lis r4,-32252
	ctx.r4.s64 = -2113667072;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// addi r8,r5,28996
	ctx.r8.s64 = ctx.r5.s64 + 28996;
	// fmr f1,f22
	ctx.f1.f64 = ctx.f22.f64;
	// li r7,5
	ctx.r7.s64 = 5;
	// stw r3,-6440(r6)
	PPC_STORE_U32(ctx.r6.u32 + -6440, ctx.r3.u32);
	// addi r3,r4,22152
	ctx.r3.s64 = ctx.r4.s64 + 22152;
	// bl 0x822e1660
	ctx.lr = 0x8231ED88;
	sub_822E1660(ctx, base);
	// lis r11,-31834
	ctx.r11.s64 = -2086273024;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// addi r6,r10,28972
	ctx.r6.s64 = ctx.r10.s64 + 28972;
	// li r5,5
	ctx.r5.s64 = 5;
	// stw r3,-6716(r11)
	PPC_STORE_U32(ctx.r11.u32 + -6716, ctx.r3.u32);
	// addi r3,r9,22044
	ctx.r3.s64 = ctx.r9.s64 + 22044;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x822e15d0
	ctx.lr = 0x8231EDAC;
	sub_822E15D0(ctx, base);
	// lis r8,-31834
	ctx.r8.s64 = -2086273024;
	// lis r7,-32252
	ctx.r7.s64 = -2113667072;
	// lfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// lis r6,-32252
	ctx.r6.s64 = -2113667072;
	// fmr f3,f28
	ctx.f3.f64 = ctx.f28.f64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// stw r3,-6488(r8)
	PPC_STORE_U32(ctx.r8.u32 + -6488, ctx.r3.u32);
	// addi r8,r7,28928
	ctx.r8.s64 = ctx.r7.s64 + 28928;
	// addi r3,r6,22016
	ctx.r3.s64 = ctx.r6.s64 + 22016;
	// li r7,5
	ctx.r7.s64 = 5;
	// bl 0x822e1660
	ctx.lr = 0x8231EDD8;
	sub_822E1660(ctx, base);
	// lis r5,-31834
	ctx.r5.s64 = -2086273024;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// fmr f3,f28
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f28.f64;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r8,r11,28884
	ctx.r8.s64 = ctx.r11.s64 + 28884;
	// stw r3,-6644(r5)
	PPC_STORE_U32(ctx.r5.u32 + -6644, ctx.r3.u32);
	// li r7,5
	ctx.r7.s64 = 5;
	// addi r3,r10,21988
	ctx.r3.s64 = ctx.r10.s64 + 21988;
	// lfs f1,14232(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 14232);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822e1660
	ctx.lr = 0x8231EE08;
	sub_822E1660(ctx, base);
	// lis r9,-31834
	ctx.r9.s64 = -2086273024;
	// lis r7,-32252
	ctx.r7.s64 = -2113667072;
	// fmr f3,f28
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f28.f64;
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f19
	ctx.f1.f64 = ctx.f19.f64;
	// addi r8,r8,28840
	ctx.r8.s64 = ctx.r8.s64 + 28840;
	// stw r3,-6612(r9)
	PPC_STORE_U32(ctx.r9.u32 + -6612, ctx.r3.u32);
	// addi r3,r7,21960
	ctx.r3.s64 = ctx.r7.s64 + 21960;
	// li r7,5
	ctx.r7.s64 = 5;
	// bl 0x822e1660
	ctx.lr = 0x8231EE34;
	sub_822E1660(ctx, base);
	// lis r6,-31834
	ctx.r6.s64 = -2086273024;
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// fmr f3,f28
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f28.f64;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// stw r3,-16604(r6)
	PPC_STORE_U32(ctx.r6.u32 + -16604, ctx.r3.u32);
	// addi r8,r11,28768
	ctx.r8.s64 = ctx.r11.s64 + 28768;
	// lfs f25,-21320(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -21320);
	ctx.f25.f64 = double(temp.f32);
	// addi r3,r10,21932
	ctx.r3.s64 = ctx.r10.s64 + 21932;
	// li r7,5
	ctx.r7.s64 = 5;
	// lfs f1,14272(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 14272);
	ctx.f1.f64 = double(temp.f32);
	// fmr f2,f25
	ctx.f2.f64 = ctx.f25.f64;
	// bl 0x822e1660
	ctx.lr = 0x8231EE6C;
	sub_822E1660(ctx, base);
	// lis r9,-31834
	ctx.r9.s64 = -2086273024;
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// lis r6,-32191
	ctx.r6.s64 = -2109669376;
	// lis r5,-32252
	ctx.r5.s64 = -2113667072;
	// addi r7,r8,28736
	ctx.r7.s64 = ctx.r8.s64 + 28736;
	// stw r3,-6636(r9)
	PPC_STORE_U32(ctx.r9.u32 + -6636, ctx.r3.u32);
	// addi r4,r6,32448
	ctx.r4.s64 = ctx.r6.s64 + 32448;
	// addi r3,r5,21908
	ctx.r3.s64 = ctx.r5.s64 + 21908;
	// li r6,5
	ctx.r6.s64 = 5;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x822e1828
	ctx.lr = 0x8231EE98;
	sub_822E1828(ctx, base);
	// lis r4,-31834
	ctx.r4.s64 = -2086273024;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// addi r8,r11,28708
	ctx.r8.s64 = ctx.r11.s64 + 28708;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// li r7,5
	ctx.r7.s64 = 5;
	// stw r3,-6404(r4)
	PPC_STORE_U32(ctx.r4.u32 + -6404, ctx.r3.u32);
	// addi r3,r10,21884
	ctx.r3.s64 = ctx.r10.s64 + 21884;
	// bl 0x822e1660
	ctx.lr = 0x8231EEC4;
	sub_822E1660(ctx, base);
	// lis r9,-31834
	ctx.r9.s64 = -2086273024;
	// lis r7,-32252
	ctx.r7.s64 = -2113667072;
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f21
	ctx.f1.f64 = ctx.f21.f64;
	// addi r8,r8,28680
	ctx.r8.s64 = ctx.r8.s64 + 28680;
	// stw r3,-16900(r9)
	PPC_STORE_U32(ctx.r9.u32 + -16900, ctx.r3.u32);
	// addi r3,r7,21860
	ctx.r3.s64 = ctx.r7.s64 + 21860;
	// li r7,5
	ctx.r7.s64 = 5;
	// bl 0x822e1660
	ctx.lr = 0x8231EEF0;
	sub_822E1660(ctx, base);
	// lis r6,-31834
	ctx.r6.s64 = -2086273024;
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// fmr f3,f28
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f28.f64;
	// lis r4,-32252
	ctx.r4.s64 = -2113667072;
	// fmr f1,f23
	ctx.f1.f64 = ctx.f23.f64;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r8,r4,28600
	ctx.r8.s64 = ctx.r4.s64 + 28600;
	// stw r3,-6560(r6)
	PPC_STORE_U32(ctx.r6.u32 + -6560, ctx.r3.u32);
	// addi r3,r11,21832
	ctx.r3.s64 = ctx.r11.s64 + 21832;
	// li r7,5
	ctx.r7.s64 = 5;
	// lfs f2,-31048(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -31048);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x822e1660
	ctx.lr = 0x8231EF20;
	sub_822E1660(ctx, base);
	// lis r10,-31834
	ctx.r10.s64 = -2086273024;
	// stw r3,-6380(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6380, ctx.r3.u32);
	// bl 0x8231d968
	ctx.lr = 0x8231EF2C;
	sub_8231D968(ctx, base);
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// addi r6,r9,28560
	ctx.r6.s64 = ctx.r9.s64 + 28560;
	// addi r3,r8,21808
	ctx.r3.s64 = ctx.r8.s64 + 21808;
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x822e15d0
	ctx.lr = 0x8231EF48;
	sub_822E15D0(ctx, base);
	// lis r7,-31834
	ctx.r7.s64 = -2086273024;
	// lis r6,-32252
	ctx.r6.s64 = -2113667072;
	// fmr f3,f29
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f29.f64;
	// lis r5,-32252
	ctx.r5.s64 = -2113667072;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// addi r8,r6,28488
	ctx.r8.s64 = ctx.r6.s64 + 28488;
	// fmr f1,f26
	ctx.f1.f64 = ctx.f26.f64;
	// stw r3,-16624(r7)
	PPC_STORE_U32(ctx.r7.u32 + -16624, ctx.r3.u32);
	// addi r3,r5,21772
	ctx.r3.s64 = ctx.r5.s64 + 21772;
	// li r7,5
	ctx.r7.s64 = 5;
	// bl 0x822e1660
	ctx.lr = 0x8231EF74;
	sub_822E1660(ctx, base);
	// lis r4,-31834
	ctx.r4.s64 = -2086273024;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// fmr f3,f29
	ctx.f3.f64 = ctx.f29.f64;
	// addi r8,r11,28416
	ctx.r8.s64 = ctx.r11.s64 + 28416;
	// fmr f1,f26
	ctx.f1.f64 = ctx.f26.f64;
	// li r7,5
	ctx.r7.s64 = 5;
	// stw r3,-6444(r4)
	PPC_STORE_U32(ctx.r4.u32 + -6444, ctx.r3.u32);
	// addi r3,r10,21736
	ctx.r3.s64 = ctx.r10.s64 + 21736;
	// bl 0x822e1660
	ctx.lr = 0x8231EFA0;
	sub_822E1660(ctx, base);
	// lis r9,-31834
	ctx.r9.s64 = -2086273024;
	// lis r7,-32252
	ctx.r7.s64 = -2113667072;
	// fmr f3,f23
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f23.f64;
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f21
	ctx.f1.f64 = ctx.f21.f64;
	// addi r8,r8,28360
	ctx.r8.s64 = ctx.r8.s64 + 28360;
	// stw r3,-6596(r9)
	PPC_STORE_U32(ctx.r9.u32 + -6596, ctx.r3.u32);
	// addi r3,r7,21692
	ctx.r3.s64 = ctx.r7.s64 + 21692;
	// li r7,5
	ctx.r7.s64 = 5;
	// bl 0x822e1660
	ctx.lr = 0x8231EFCC;
	sub_822E1660(ctx, base);
	// lis r5,-31834
	ctx.r5.s64 = -2086273024;
	// fmr f3,f28
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f28.f64;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// fmr f1,f23
	ctx.f1.f64 = ctx.f23.f64;
	// lis r4,-32252
	ctx.r4.s64 = -2113667072;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r8,r4,28296
	ctx.r8.s64 = ctx.r4.s64 + 28296;
	// stw r3,-22136(r5)
	PPC_STORE_U32(ctx.r5.u32 + -22136, ctx.r3.u32);
	// addi r3,r11,21660
	ctx.r3.s64 = ctx.r11.s64 + 21660;
	// li r7,5
	ctx.r7.s64 = 5;
	// lfs f2,5804(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 5804);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x822e1660
	ctx.lr = 0x8231EFFC;
	sub_822E1660(ctx, base);
	// lis r10,-31834
	ctx.r10.s64 = -2086273024;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// addi r6,r9,28244
	ctx.r6.s64 = ctx.r9.s64 + 28244;
	// li r5,5
	ctx.r5.s64 = 5;
	// stw r3,-6708(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6708, ctx.r3.u32);
	// addi r3,r8,21640
	ctx.r3.s64 = ctx.r8.s64 + 21640;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x822e15d0
	ctx.lr = 0x8231F020;
	sub_822E15D0(ctx, base);
	// lis r7,-31834
	ctx.r7.s64 = -2086273024;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// fmr f3,f28
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f28.f64;
	// lis r5,-32252
	ctx.r5.s64 = -2113667072;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// lis r4,-32252
	ctx.r4.s64 = -2113667072;
	// addi r8,r5,28196
	ctx.r8.s64 = ctx.r5.s64 + 28196;
	// stw r3,-16888(r7)
	PPC_STORE_U32(ctx.r7.u32 + -16888, ctx.r3.u32);
	// addi r3,r4,28176
	ctx.r3.s64 = ctx.r4.s64 + 28176;
	// li r7,4
	ctx.r7.s64 = 4;
	// lfs f1,27440(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 27440);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822e1660
	ctx.lr = 0x8231F050;
	sub_822E1660(ctx, base);
	// lis r11,-31834
	ctx.r11.s64 = -2086273024;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// fmr f3,f28
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f28.f64;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// addi r8,r10,28136
	ctx.r8.s64 = ctx.r10.s64 + 28136;
	// fmr f1,f24
	ctx.f1.f64 = ctx.f24.f64;
	// li r7,4
	ctx.r7.s64 = 4;
	// stw r3,-6720(r11)
	PPC_STORE_U32(ctx.r11.u32 + -6720, ctx.r3.u32);
	// addi r3,r9,28116
	ctx.r3.s64 = ctx.r9.s64 + 28116;
	// bl 0x822e1660
	ctx.lr = 0x8231F07C;
	sub_822E1660(ctx, base);
	// lis r7,-31834
	ctx.r7.s64 = -2086273024;
	// lis r6,-32252
	ctx.r6.s64 = -2113667072;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// lis r5,-32252
	ctx.r5.s64 = -2113667072;
	// fmr f3,f28
	ctx.f3.f64 = ctx.f28.f64;
	// addi r8,r6,28076
	ctx.r8.s64 = ctx.r6.s64 + 28076;
	// fmr f1,f24
	ctx.f1.f64 = ctx.f24.f64;
	// stw r3,-6484(r7)
	PPC_STORE_U32(ctx.r7.u32 + -6484, ctx.r3.u32);
	// addi r3,r5,28056
	ctx.r3.s64 = ctx.r5.s64 + 28056;
	// li r7,4
	ctx.r7.s64 = 4;
	// bl 0x822e1660
	ctx.lr = 0x8231F0A8;
	sub_822E1660(ctx, base);
	// lis r4,-31834
	ctx.r4.s64 = -2086273024;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// fmr f1,f14
	ctx.f1.f64 = ctx.f14.f64;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// addi r8,r10,27992
	ctx.r8.s64 = ctx.r10.s64 + 27992;
	// stw r3,-16956(r4)
	PPC_STORE_U32(ctx.r4.u32 + -16956, ctx.r3.u32);
	// addi r3,r9,27964
	ctx.r3.s64 = ctx.r9.s64 + 27964;
	// li r7,4
	ctx.r7.s64 = 4;
	// lfs f3,6024(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6024);
	ctx.f3.f64 = double(temp.f32);
	// bl 0x822e1660
	ctx.lr = 0x8231F0D8;
	sub_822E1660(ctx, base);
	// lis r8,-31834
	ctx.r8.s64 = -2086273024;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// fmr f3,f29
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f29.f64;
	// lis r6,-32252
	ctx.r6.s64 = -2113667072;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// lis r5,-32252
	ctx.r5.s64 = -2113667072;
	// stw r3,-6536(r8)
	PPC_STORE_U32(ctx.r8.u32 + -6536, ctx.r3.u32);
	// addi r8,r6,27924
	ctx.r8.s64 = ctx.r6.s64 + 27924;
	// lfs f28,18652(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 18652);
	ctx.f28.f64 = double(temp.f32);
	// addi r3,r5,27912
	ctx.r3.s64 = ctx.r5.s64 + 27912;
	// li r7,128
	ctx.r7.s64 = 128;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// bl 0x822e1660
	ctx.lr = 0x8231F10C;
	sub_822E1660(ctx, base);
	// lis r4,-31834
	ctx.r4.s64 = -2086273024;
	// stw r3,-16972(r4)
	PPC_STORE_U32(ctx.r4.u32 + -16972, ctx.r3.u32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// fmr f3,f29
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f29.f64;
	// addi r8,r11,27840
	ctx.r8.s64 = ctx.r11.s64 + 27840;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// addi r3,r10,27824
	ctx.r3.s64 = ctx.r10.s64 + 27824;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// li r7,128
	ctx.r7.s64 = 128;
	// bl 0x822e1660
	ctx.lr = 0x8231F138;
	sub_822E1660(ctx, base);
	// lis r9,-31834
	ctx.r9.s64 = -2086273024;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// lis r6,-32252
	ctx.r6.s64 = -2113667072;
	// fmr f1,f18
	ctx.f1.f64 = ctx.f18.f64;
	// lis r5,-32252
	ctx.r5.s64 = -2113667072;
	// addi r8,r6,27744
	ctx.r8.s64 = ctx.r6.s64 + 27744;
	// stw r3,-6496(r9)
	PPC_STORE_U32(ctx.r9.u32 + -6496, ctx.r3.u32);
	// addi r3,r5,27716
	ctx.r3.s64 = ctx.r5.s64 + 27716;
	// lfs f3,-19192(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -19192);
	ctx.f3.f64 = double(temp.f32);
	// li r7,4
	ctx.r7.s64 = 4;
	// bl 0x822e1660
	ctx.lr = 0x8231F168;
	sub_822E1660(ctx, base);
	// lis r4,-31834
	ctx.r4.s64 = -2086273024;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// fmr f1,f21
	ctx.f1.f64 = ctx.f21.f64;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// addi r8,r10,27648
	ctx.r8.s64 = ctx.r10.s64 + 27648;
	// stw r3,-16968(r4)
	PPC_STORE_U32(ctx.r4.u32 + -16968, ctx.r3.u32);
	// addi r3,r9,27616
	ctx.r3.s64 = ctx.r9.s64 + 27616;
	// li r7,196
	ctx.r7.s64 = 196;
	// lfs f3,-9384(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -9384);
	ctx.f3.f64 = double(temp.f32);
	// bl 0x822e1660
	ctx.lr = 0x8231F198;
	sub_822E1660(ctx, base);
	// lis r8,-31834
	ctx.r8.s64 = -2086273024;
	// lis r5,-32252
	ctx.r5.s64 = -2113667072;
	// lis r7,-32252
	ctx.r7.s64 = -2113667072;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r6,r7,27536
	ctx.r6.s64 = ctx.r7.s64 + 27536;
	// stw r3,-6712(r8)
	PPC_STORE_U32(ctx.r8.u32 + -6712, ctx.r3.u32);
	// addi r3,r5,27588
	ctx.r3.s64 = ctx.r5.s64 + 27588;
	// li r5,196
	ctx.r5.s64 = 196;
	// bl 0x822e15d0
	ctx.lr = 0x8231F1BC;
	sub_822E15D0(ctx, base);
	// lis r4,-31834
	ctx.r4.s64 = -2086273024;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r6,r11,27448
	ctx.r6.s64 = ctx.r11.s64 + 27448;
	// li r5,196
	ctx.r5.s64 = 196;
	// stw r3,-6476(r4)
	PPC_STORE_U32(ctx.r4.u32 + -6476, ctx.r3.u32);
	// addi r3,r10,27420
	ctx.r3.s64 = ctx.r10.s64 + 27420;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x822e15d0
	ctx.lr = 0x8231F1E0;
	sub_822E15D0(ctx, base);
	// lis r9,-31834
	ctx.r9.s64 = -2086273024;
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// lis r7,-32252
	ctx.r7.s64 = -2113667072;
	// addi r6,r8,27336
	ctx.r6.s64 = ctx.r8.s64 + 27336;
	// li r5,4
	ctx.r5.s64 = 4;
	// stw r3,-6448(r9)
	PPC_STORE_U32(ctx.r9.u32 + -6448, ctx.r3.u32);
	// addi r3,r7,27316
	ctx.r3.s64 = ctx.r7.s64 + 27316;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x822e15d0
	ctx.lr = 0x8231F204;
	sub_822E15D0(ctx, base);
	// lis r5,-31834
	ctx.r5.s64 = -2086273024;
	// lis r4,-32252
	ctx.r4.s64 = -2113667072;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r6,r4,27284
	ctx.r6.s64 = ctx.r4.s64 + 27284;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r3,-6680(r5)
	PPC_STORE_U32(ctx.r5.u32 + -6680, ctx.r3.u32);
	// addi r3,r11,27264
	ctx.r3.s64 = ctx.r11.s64 + 27264;
	// li r5,4
	ctx.r5.s64 = 4;
	// bl 0x822e15d0
	ctx.lr = 0x8231F228;
	sub_822E15D0(ctx, base);
	// lis r10,-31834
	ctx.r10.s64 = -2086273024;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// fmr f3,f16
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f16.f64;
	// lis r7,-32252
	ctx.r7.s64 = -2113667072;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// stw r3,-6588(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6588, ctx.r3.u32);
	// addi r3,r7,27248
	ctx.r3.s64 = ctx.r7.s64 + 27248;
	// lfs f1,25484(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 25484);
	ctx.f1.f64 = double(temp.f32);
	// addi r8,r8,27212
	ctx.r8.s64 = ctx.r8.s64 + 27212;
	// li r7,4
	ctx.r7.s64 = 4;
	// bl 0x822e1660
	ctx.lr = 0x8231F258;
	sub_822E1660(ctx, base);
	// lis r6,-31834
	ctx.r6.s64 = -2086273024;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// fmr f4,f29
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f29.f64;
	// lis r4,-32252
	ctx.r4.s64 = -2113667072;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// stw r3,-16592(r6)
	PPC_STORE_U32(ctx.r6.u32 + -16592, ctx.r3.u32);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r3,r8,27172
	ctx.r3.s64 = ctx.r8.s64 + 27172;
	// lfs f28,6688(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 6688);
	ctx.f28.f64 = double(temp.f32);
	// addi r9,r10,27056
	ctx.r9.s64 = ctx.r10.s64 + 27056;
	// lfs f2,27208(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 27208);
	ctx.f2.f64 = double(temp.f32);
	// li r8,132
	ctx.r8.s64 = 132;
	// lfs f1,27204(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 27204);
	ctx.f1.f64 = double(temp.f32);
	// fmr f3,f28
	ctx.f3.f64 = ctx.f28.f64;
	// bl 0x822e16a8
	ctx.lr = 0x8231F298;
	sub_822E16A8(ctx, base);
	// lis r7,-31834
	ctx.r7.s64 = -2086273024;
	// lis r6,-32252
	ctx.r6.s64 = -2113667072;
	// fmr f4,f29
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f29.f64;
	// lis r5,-32252
	ctx.r5.s64 = -2113667072;
	// fmr f3,f28
	ctx.f3.f64 = ctx.f28.f64;
	// lis r4,-32252
	ctx.r4.s64 = -2113667072;
	// fmr f2,f27
	ctx.f2.f64 = ctx.f27.f64;
	// addi r9,r5,26936
	ctx.r9.s64 = ctx.r5.s64 + 26936;
	// stw r3,-6452(r7)
	PPC_STORE_U32(ctx.r7.u32 + -6452, ctx.r3.u32);
	// addi r3,r4,26900
	ctx.r3.s64 = ctx.r4.s64 + 26900;
	// li r8,132
	ctx.r8.s64 = 132;
	// lfs f1,27048(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 27048);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822e16a8
	ctx.lr = 0x8231F2CC;
	sub_822E16A8(ctx, base);
	// lis r11,-31834
	ctx.r11.s64 = -2086273024;
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// fmr f4,f29
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f29.f64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmr f3,f28
	ctx.f3.f64 = ctx.f28.f64;
	// lis r7,-32252
	ctx.r7.s64 = -2113667072;
	// lis r6,-32252
	ctx.r6.s64 = -2113667072;
	// stw r3,-6480(r11)
	PPC_STORE_U32(ctx.r11.u32 + -6480, ctx.r3.u32);
	// addi r9,r7,26832
	ctx.r9.s64 = ctx.r7.s64 + 26832;
	// lfs f1,26896(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 26896);
	ctx.f1.f64 = double(temp.f32);
	// addi r3,r6,26804
	ctx.r3.s64 = ctx.r6.s64 + 26804;
	// li r8,132
	ctx.r8.s64 = 132;
	// lfs f2,6056(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6056);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x822e16a8
	ctx.lr = 0x8231F304;
	sub_822E16A8(ctx, base);
	// lis r5,-31834
	ctx.r5.s64 = -2086273024;
	// lis r4,-32252
	ctx.r4.s64 = -2113667072;
	// fmr f4,f29
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f29.f64;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// fmr f3,f28
	ctx.f3.f64 = ctx.f28.f64;
	// addi r9,r4,26740
	ctx.r9.s64 = ctx.r4.s64 + 26740;
	// fmr f2,f24
	ctx.f2.f64 = ctx.f24.f64;
	// li r8,132
	ctx.r8.s64 = 132;
	// fmr f1,f25
	ctx.f1.f64 = ctx.f25.f64;
	// stw r3,-6424(r5)
	PPC_STORE_U32(ctx.r5.u32 + -6424, ctx.r3.u32);
	// addi r3,r11,26712
	ctx.r3.s64 = ctx.r11.s64 + 26712;
	// bl 0x822e16a8
	ctx.lr = 0x8231F334;
	sub_822E16A8(ctx, base);
	// lis r10,-31834
	ctx.r10.s64 = -2086273024;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// fmr f4,f15
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f15.f64;
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// lis r7,-32252
	ctx.r7.s64 = -2113667072;
	// lis r6,-32252
	ctx.r6.s64 = -2113667072;
	// stw r3,-16948(r10)
	PPC_STORE_U32(ctx.r10.u32 + -16948, ctx.r3.u32);
	// lfs f3,-8344(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -8344);
	ctx.f3.f64 = double(temp.f32);
	// addi r9,r7,26600
	ctx.r9.s64 = ctx.r7.s64 + 26600;
	// lfs f2,26708(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 26708);
	ctx.f2.f64 = double(temp.f32);
	// addi r3,r6,26568
	ctx.r3.s64 = ctx.r6.s64 + 26568;
	// li r8,196
	ctx.r8.s64 = 196;
	// bl 0x822e16a8
	ctx.lr = 0x8231F36C;
	sub_822E16A8(ctx, base);
	// lis r5,-31834
	ctx.r5.s64 = -2086273024;
	// lis r4,-32252
	ctx.r4.s64 = -2113667072;
	// lfs f1,108(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f1.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// fmr f3,f29
	ctx.f3.f64 = ctx.f29.f64;
	// addi r8,r4,26516
	ctx.r8.s64 = ctx.r4.s64 + 26516;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// li r7,196
	ctx.r7.s64 = 196;
	// stw r3,-16588(r5)
	PPC_STORE_U32(ctx.r5.u32 + -16588, ctx.r3.u32);
	// addi r3,r11,26488
	ctx.r3.s64 = ctx.r11.s64 + 26488;
	// bl 0x822e1660
	ctx.lr = 0x8231F398;
	sub_822E1660(ctx, base);
	// lis r10,-31834
	ctx.r10.s64 = -2086273024;
	// fmr f3,f29
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f29.f64;
	// lis r7,-32252
	ctx.r7.s64 = -2113667072;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// fmr f1,f27
	ctx.f1.f64 = ctx.f27.f64;
	// addi r8,r9,26404
	ctx.r8.s64 = ctx.r9.s64 + 26404;
	// stw r3,-16976(r10)
	PPC_STORE_U32(ctx.r10.u32 + -16976, ctx.r3.u32);
	// addi r3,r7,26460
	ctx.r3.s64 = ctx.r7.s64 + 26460;
	// li r7,196
	ctx.r7.s64 = 196;
	// bl 0x822e1660
	ctx.lr = 0x8231F3C4;
	sub_822E1660(ctx, base);
	// lis r5,-31834
	ctx.r5.s64 = -2086273024;
	// lis r4,-32252
	ctx.r4.s64 = -2113667072;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r6,r4,26376
	ctx.r6.s64 = ctx.r4.s64 + 26376;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,-16892(r5)
	PPC_STORE_U32(ctx.r5.u32 + -16892, ctx.r3.u32);
	// addi r3,r11,26360
	ctx.r3.s64 = ctx.r11.s64 + 26360;
	// li r5,4
	ctx.r5.s64 = 4;
	// bl 0x822e15d0
	ctx.lr = 0x8231F3E8;
	sub_822E15D0(ctx, base);
	// lis r10,-31834
	ctx.r10.s64 = -2086273024;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// addi r6,r9,24120
	ctx.r6.s64 = ctx.r9.s64 + 24120;
	// li r5,64
	ctx.r5.s64 = 64;
	// stw r3,-16596(r10)
	PPC_STORE_U32(ctx.r10.u32 + -16596, ctx.r3.u32);
	// addi r3,r8,24156
	ctx.r3.s64 = ctx.r8.s64 + 24156;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x822e15d0
	ctx.lr = 0x8231F40C;
	sub_822E15D0(ctx, base);
	// lis r7,-32168
	ctx.r7.s64 = -2108162048;
	// stw r3,18812(r7)
	PPC_STORE_U32(ctx.r7.u32 + 18812, ctx.r3.u32);
	// bl 0x8231b8f8
	ctx.lr = 0x8231F418;
	sub_8231B8F8(ctx, base);
	// bl 0x8231c108
	ctx.lr = 0x8231F41C;
	sub_8231C108(ctx, base);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// addi r12,r1,-16
	ctx.r12.s64 = ctx.r1.s64 + -16;
	// bl 0x823de03c
	ctx.lr = 0x8231F428;
	__restfpr_14(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8231DA30) {
	__imp__sub_8231DA30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8231F438) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r3,16
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 16, ctx.xer);
	// bge cr6,0x8231f454
	if (!ctx.cr6.lt) goto loc_8231F454;
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,31560
	ctx.r9.s64 = ctx.r11.s64 + 31560;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
loc_8231F454:
	// addi r5,r3,-16
	ctx.r5.s64 = ctx.r3.s64 + -16;
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,31624
	ctx.r9.s64 = ctx.r11.s64 + 31624;
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// addi r3,r8,-27448
	ctx.r3.s64 = ctx.r8.s64 + -27448;
	// lwzx r4,r10,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// b 0x822e84f0
	sub_822E84F0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8231F438) {
	__imp__sub_8231F438(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8231F474) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8231F474) {
	__imp__sub_8231F474(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8231F478) {
	PPC_FUNC_PROLOGUE();
	// mulli r11,r4,200
	ctx.r11.s64 = ctx.r4.s64 * 200;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8231F478) {
	__imp__sub_8231F478(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8231F484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8231F484) {
	__imp__sub_8231F484(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8231F488) {
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
	// bl 0x82232100
	ctx.lr = 0x8231F4A0;
	sub_82232100(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8231f4c4
	if (ctx.cr6.eq) goto loc_8231F4C4;
	// mulli r11,r31,200
	ctx.r11.s64 = ctx.r31.s64 * 200;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
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
loc_8231F4C4:
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

PPC_WEAK_FUNC(sub_8231F488) {
	__imp__sub_8231F488(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8231F4DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8231F4DC) {
	__imp__sub_8231F4DC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8231F4E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x8231F4E8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82331a28
	ctx.lr = 0x8231F4FC;
	sub_82331A28(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8231f558
	if (ctx.cr6.eq) goto loc_8231F558;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332af8
	ctx.lr = 0x8231F50C;
	sub_82332AF8(ctx, base);
	// lwz r27,528(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 528);
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r30,r28,544
	ctx.r30.s64 = ctx.r28.s64 + 544;
loc_8231F518:
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x8231f548
	if (ctx.cr6.eq) goto loc_8231F548;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823319d8
	ctx.lr = 0x8231F52C;
	sub_823319D8(ctx, base);
	// cmpw cr6,r3,r27
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r27.s32, ctx.xer);
	// bne cr6,0x8231f548
	if (!ctx.cr6.eq) goto loc_8231F548;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823320a0
	ctx.lr = 0x8231F540;
	sub_823320A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bgt cr6,0x8231f564
	if (ctx.cr6.gt) goto loc_8231F564;
loc_8231F548:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpwi cr6,r29,15
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 15, ctx.xer);
	// blt cr6,0x8231f518
	if (ctx.cr6.lt) goto loc_8231F518;
loc_8231F558:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_8231F564:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8231F4E0) {
	__imp__sub_8231F4E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8231F570) {
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
	// bl 0x82332af8
	ctx.lr = 0x8231F590;
	sub_82332AF8(ctx, base);
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8231f5f0
	if (ctx.cr6.eq) goto loc_8231F5F0;
	// lwz r10,684(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 684);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x8231f5bc
	if (ctx.cr6.eq) goto loc_8231F5BC;
	// lwz r10,688(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 688);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x8231f5bc
	if (ctx.cr6.eq) goto loc_8231F5BC;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8231f5f4
	goto loc_8231F5F4;
loc_8231F5BC:
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x8231f5f0
	if (!ctx.cr6.eq) goto loc_8231F5F0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820da5b0
	ctx.lr = 0x8231F5D0;
	sub_820DA5B0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8231f5f0
	if (!ctx.cr6.eq) goto loc_8231F5F0;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82334898
	ctx.lr = 0x8231F5E4;
	sub_82334898(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// b 0x8231f5f4
	goto loc_8231F5F4;
loc_8231F5F0:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8231F5F4:
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

PPC_WEAK_FUNC(sub_8231F570) {
	__imp__sub_8231F570(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8231F60C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8231F60C) {
	__imp__sub_8231F60C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8231F610) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x8231F618;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// bl 0x82332af8
	ctx.lr = 0x8231F634;
	sub_82332AF8(ctx, base);
	// lbz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x8231f66c
	if (!ctx.cr6.eq) goto loc_8231F66C;
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8231f6d0
	if (ctx.cr6.eq) goto loc_8231F6D0;
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// bne cr6,0x8231f6e8
	if (!ctx.cr6.eq) goto loc_8231F6E8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820da5b0
	ctx.lr = 0x8231F664;
	sub_820DA5B0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// b 0x8231f6cc
	goto loc_8231F6CC;
loc_8231F66C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8231f570
	ctx.lr = 0x8231F678;
	sub_8231F570(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8231f6e8
	if (ctx.cr6.eq) goto loc_8231F6E8;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8231f6dc
	if (ctx.cr6.eq) goto loc_8231F6DC;
	// bl 0x820da5b0
	ctx.lr = 0x8231F698;
	sub_820DA5B0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8231f6b8
	if (!ctx.cr6.eq) goto loc_8231F6B8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82333e38
	ctx.lr = 0x8231F6AC;
	sub_82333E38(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8231f6e8
	if (ctx.cr6.eq) goto loc_8231F6E8;
loc_8231F6B8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8231f4e0
	ctx.lr = 0x8231F6C4;
	sub_8231F4E0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
loc_8231F6CC:
	// beq cr6,0x8231f6e8
	if (ctx.cr6.eq) goto loc_8231F6E8;
loc_8231F6D0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_8231F6DC:
	// bl 0x820da5b0
	ctx.lr = 0x8231F6E0;
	sub_820DA5B0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8231f6d0
	if (ctx.cr6.eq) goto loc_8231F6D0;
loc_8231F6E8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8231F610) {
	__imp__sub_8231F610(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8231F6F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8231F6F4) {
	__imp__sub_8231F6F4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8231F6F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x8231F700;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,700(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 700);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// rlwinm r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8231f790
	if (!ctx.cr6.eq) goto loc_8231F790;
	// lis r11,20971
	ctx.r11.s64 = 1374355456;
	// lhz r9,132(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 132);
	// ori r8,r11,34079
	ctx.r8.u64 = ctx.r11.u64 | 34079;
	// mulhw r7,r9,r8
	ctx.r7.s64 = (int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32)) >> 32;
	// srawi r11,r7,6
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3F) != 0);
	ctx.r11.s64 = ctx.r7.s32 >> 6;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mulli r11,r6,200
	ctx.r11.s64 = ctx.r6.s64 * 200;
	// subf r30,r11,r9
	ctx.r30.s64 = ctx.r9.s64 - ctx.r11.s64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x8231f610
	ctx.lr = 0x8231F74C;
	sub_8231F610(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8231f760
	if (ctx.cr6.eq) goto loc_8231F760;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_8231F760:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82332b10
	ctx.lr = 0x8231F768;
	sub_82332B10(ctx, base);
	// lwz r6,64(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8231f790
	if (ctx.cr6.eq) goto loc_8231F790;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8231f610
	ctx.lr = 0x8231F784;
	sub_8231F610(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bne cr6,0x8231f794
	if (!ctx.cr6.eq) goto loc_8231F794;
loc_8231F790:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8231F794:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8231F6F8) {
	__imp__sub_8231F6F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8231F79C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8231F79C) {
	__imp__sub_8231F79C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8231F7A0) {
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
	// lis r11,20971
	ctx.r11.s64 = 1374355456;
	// lhz r9,132(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 132);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// ori r8,r11,34079
	ctx.r8.u64 = ctx.r11.u64 | 34079;
	// mulhw r7,r9,r8
	ctx.r7.s64 = (int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32)) >> 32;
	// srawi r11,r7,6
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3F) != 0);
	ctx.r11.s64 = ctx.r7.s32 >> 6;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mulli r5,r6,200
	ctx.r5.s64 = ctx.r6.s64 * 200;
	// subf. r31,r5,r9
	ctx.r31.s64 = ctx.r9.s64 - ctx.r5.s64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x8231f7e8
	if (!ctx.cr0.eq) goto loc_8231F7E8;
loc_8231F7E0:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8231f828
	goto loc_8231F828;
loc_8231F7E8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823320a0
	ctx.lr = 0x8231F7F4;
	sub_823320A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8231f7e0
	if (ctx.cr6.eq) goto loc_8231F7E0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332b10
	ctx.lr = 0x8231F804;
	sub_82332B10(ctx, base);
	// lwz r4,64(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8231f824
	if (ctx.cr6.eq) goto loc_8231F824;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823320a0
	ctx.lr = 0x8231F818;
	sub_823320A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq cr6,0x8231f828
	if (ctx.cr6.eq) goto loc_8231F828;
loc_8231F824:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8231F828:
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

PPC_WEAK_FUNC(sub_8231F7A0) {
	__imp__sub_8231F7A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8231F840) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8231F848;
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
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r5,12
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 12, ctx.xer);
	// bgt cr6,0x8231fd3c
	if (ctx.cr6.gt) goto loc_8231FD3C;
	// lis r12,-32206
	ctx.r12.s64 = -2110652416;
	// rlwinm r0,r5,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-1920
	ctx.r12.s64 = ctx.r12.s64 + -1920;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r5.u32) {
	case 0:
		goto loc_8231F8B4;
	case 1:
		goto loc_8231F8B4;
	case 2:
		goto loc_8231F8DC;
	case 3:
		goto loc_8231F9D0;
	case 4:
		goto loc_8231F944;
	case 5:
		goto loc_8231FA60;
	case 6:
		goto loc_8231FAEC;
	case 7:
		goto loc_8231FB78;
	case 8:
		goto loc_8231FC4C;
	case 9:
		goto loc_8231F8B4;
	case 10:
		goto loc_8231F8DC;
	case 11:
		goto loc_8231FA60;
	case 12:
		goto loc_8231F8B4;
	default:
		return;
	}
	// lwz r17,-1868(r17)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r17.u32 + -1868);
	// lwz r17,-1868(r17)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r17.u32 + -1868);
	// lwz r17,-1828(r17)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r17.u32 + -1828);
	// lwz r17,-1584(r17)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r17.u32 + -1584);
	// lwz r17,-1724(r17)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r17.u32 + -1724);
	// lwz r17,-1440(r17)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r17.u32 + -1440);
	// lwz r17,-1300(r17)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r17.u32 + -1300);
	// lwz r17,-1160(r17)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r17.u32 + -1160);
	// lwz r17,-948(r17)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r17.u32 + -948);
	// lwz r17,-1868(r17)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r17.u32 + -1868);
	// lwz r17,-1828(r17)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r17.u32 + -1828);
	// lwz r17,-1440(r17)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r17.u32 + -1440);
	// lwz r17,-1868(r17)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r17.u32 + -1868);
loc_8231F8B4:
	// lfs f0,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// lfs f13,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// lfs f12,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f30,-48(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_8231F8DC:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// subf r9,r11,r4
	ctx.r9.s64 = ctx.r4.s64 - ctx.r11.s64;
	// lfs f12,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// lfs f0,5804(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5804);
	ctx.f0.f64 = double(temp.f32);
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// fmuls f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmadds f7,f13,f8,f12
	ctx.f7.f64 = double(float(ctx.f13.f64 * ctx.f8.f64 + ctx.f12.f64));
	// stfs f7,0(r30)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// lfs f6,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f5.f64 = double(temp.f32);
	// fmadds f4,f6,f8,f5
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f8.f64 + ctx.f5.f64));
	// stfs f4,4(r30)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// lfs f3,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f2.f64 = double(temp.f32);
	// fmadds f1,f3,f8,f2
	ctx.f1.f64 = double(float(ctx.f3.f64 * ctx.f8.f64 + ctx.f2.f64));
	// stfs f1,8(r30)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f30,-48(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_8231F944:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r8,r11,r4
	ctx.r8.s64 = ctx.r4.s64 - ctx.r11.s64;
	// extsw r7,r9
	ctx.r7.s64 = ctx.r9.s32;
	// extsw r6,r8
	ctx.r6.s64 = ctx.r8.s32;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// lfs f0,-22124(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -22124);
	ctx.f0.f64 = double(temp.f32);
	// fcfid f11,f13
	ctx.f11.f64 = double(ctx.f13.s64);
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// fdivs f8,f9,f10
	ctx.f8.f64 = double(float(ctx.f9.f64 / ctx.f10.f64));
	// fmuls f1,f8,f0
	ctx.f1.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// bl 0x823de720
	ctx.lr = 0x8231F98C;
	sub_823DE720(ctx, base);
	// frsp f7,f1
	ctx.fpscr.disableFlushMode();
	ctx.f7.f64 = double(float(ctx.f1.f64));
	// lfs f6,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f5.f64 = double(temp.f32);
	// fmadds f4,f6,f7,f5
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f7.f64 + ctx.f5.f64));
	// stfs f4,0(r30)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// lfs f3,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f2.f64 = double(temp.f32);
	// fmadds f1,f2,f7,f3
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f7.f64 + ctx.f3.f64));
	// stfs f1,4(r30)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// lfs f0,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f12,f0,f7,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f7.f64 + ctx.f13.f64));
	// stfs f12,8(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f30,-48(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_8231F9D0:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x8231f9e8
	if (!ctx.cr6.gt) goto loc_8231F9E8;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
loc_8231F9E8:
	// subf r11,r10,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r10.s64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfs f0,5804(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5804);
	ctx.f0.f64 = double(temp.f32);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfs f13,5484(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 5484);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x8231fa20
	if (!ctx.cr6.lt) goto loc_8231FA20;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_8231FA20:
	// lfs f13,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f11,f13,f0,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f0.f64 + ctx.f12.f64));
	// stfs f11,0(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// lfs f10,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f8,f10,f0,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f0.f64 + ctx.f9.f64));
	// stfs f8,4(r30)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// lfs f7,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f5,f7,f0,f6
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f0.f64 + ctx.f6.f64));
	// stfs f5,8(r30)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f30,-48(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_8231FA60:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f12,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// lis r9,-31834
	ctx.r9.s64 = -2086273024;
	// subf r8,r11,r4
	ctx.r8.s64 = ctx.r4.s64 - ctx.r11.s64;
	// lfs f11,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// extsw r6,r8
	ctx.r6.s64 = ctx.r8.s32;
	// lfs f0,5804(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5804);
	ctx.f0.f64 = double(temp.f32);
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f10,80(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// lwz r11,-16972(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -16972);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// lfs f13,2416(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2416);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f7,f8,f0
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fmadds f6,f12,f7,f11
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f7.f64 + ctx.f11.f64));
	// stfs f6,0(r30)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// lfs f5,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f4.f64 = double(temp.f32);
	// fmadds f3,f5,f7,f4
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f7.f64 + ctx.f4.f64));
	// stfs f3,4(r30)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// lfs f2,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f1.f64 = double(temp.f32);
	// fmadds f0,f1,f7,f2
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f7.f64 + ctx.f2.f64));
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// lfs f12,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f12,f7
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f7.f64));
	// fmuls f10,f11,f7
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f7.f64));
	// fnmsubs f9,f10,f13,f0
	ctx.f9.f64 = double(float(-(ctx.f10.f64 * ctx.f13.f64 - ctx.f0.f64)));
	// stfs f9,8(r30)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f30,-48(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_8231FAEC:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f12,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// lis r9,-31834
	ctx.r9.s64 = -2086273024;
	// subf r8,r11,r4
	ctx.r8.s64 = ctx.r4.s64 - ctx.r11.s64;
	// lfs f11,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// extsw r6,r8
	ctx.r6.s64 = ctx.r8.s32;
	// lfs f0,5804(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5804);
	ctx.f0.f64 = double(temp.f32);
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f10,80(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// lwz r11,-6496(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -6496);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// lfs f13,2416(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2416);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f7,f8,f0
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fmadds f6,f7,f12,f11
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f12.f64 + ctx.f11.f64));
	// stfs f6,0(r30)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// lfs f5,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f4.f64 = double(temp.f32);
	// fmadds f3,f5,f7,f4
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f7.f64 + ctx.f4.f64));
	// stfs f3,4(r30)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// lfs f2,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f1.f64 = double(temp.f32);
	// fmadds f0,f2,f7,f1
	ctx.f0.f64 = double(float(ctx.f2.f64 * ctx.f7.f64 + ctx.f1.f64));
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// lfs f12,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f12,f7
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f7.f64));
	// fmuls f10,f11,f7
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f7.f64));
	// fnmsubs f9,f10,f13,f0
	ctx.f9.f64 = double(float(-(ctx.f10.f64 * ctx.f13.f64 - ctx.f0.f64)));
	// stfs f9,8(r30)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f30,-48(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_8231FB78:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpw cr6,r4,r9
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x8231fb90
	if (!ctx.cr6.gt) goto loc_8231FB90;
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
loc_8231FB90:
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// lfs f0,28(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// subf r10,r10,r4
	ctx.r10.s64 = ctx.r4.s64 - ctx.r10.s64;
	// fmuls f13,f0,f0
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfs f11,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f11.f64 = double(temp.f32);
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// lfs f10,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f10.f64 = double(temp.f32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lfs f0,5804(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 5804);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f9,f11,f11,f13
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f13.f64));
	// fmadds f8,f10,f10,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f10.f64 + ctx.f9.f64));
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// fcfid f4,f12
	ctx.f4.f64 = double(ctx.f12.s64);
	// fsqrts f5,f8
	ctx.f5.f64 = double(float(sqrt(ctx.f8.f64)));
	// lfd f7,80(r1)
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f6,f7
	ctx.f6.f64 = double(ctx.f7.s64);
	// frsp f2,f4
	ctx.f2.f64 = double(float(ctx.f4.f64));
	// frsp f3,f6
	ctx.f3.f64 = double(float(ctx.f6.f64));
	// fmuls f1,f2,f0
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// fmuls f31,f3,f0
	ctx.f31.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// fdivs f30,f5,f1
	ctx.f30.f64 = double(float(ctx.f5.f64 / ctx.f1.f64));
	// bl 0x822d4b08
	ctx.lr = 0x8231FBF8;
	sub_822D4B08(ctx, base);
	// fmuls f13,f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f30.f64 * ctx.f31.f64));
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfs f11,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// lfs f0,2416(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2416);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f13,f31
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// fmuls f10,f12,f0
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmadds f6,f9,f10,f11
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f10.f64 + ctx.f11.f64));
	// stfs f6,0(r30)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// lfs f5,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f5.f64 = double(temp.f32);
	// fmadds f4,f10,f8,f5
	ctx.f4.f64 = double(float(ctx.f10.f64 * ctx.f8.f64 + ctx.f5.f64));
	// stfs f4,4(r30)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// lfs f3,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f3.f64 = double(temp.f32);
	// fmadds f2,f7,f10,f3
	ctx.f2.f64 = double(float(ctx.f7.f64 * ctx.f10.f64 + ctx.f3.f64));
	// stfs f2,8(r30)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f30,-48(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_8231FC4C:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpw cr6,r4,r9
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x8231fc64
	if (!ctx.cr6.gt) goto loc_8231FC64;
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
loc_8231FC64:
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// lfs f0,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// subf r10,r10,r4
	ctx.r10.s64 = ctx.r4.s64 - ctx.r10.s64;
	// fmuls f13,f0,f0
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfs f11,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f11.f64 = double(temp.f32);
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// lfs f10,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f10.f64 = double(temp.f32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// addi r29,r31,24
	ctx.r29.s64 = ctx.r31.s64 + 24;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f0,5804(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 5804);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f9,f11,f11,f13
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f13.f64));
	// fmadds f8,f10,f10,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f10.f64 + ctx.f9.f64));
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// fcfid f4,f12
	ctx.f4.f64 = double(ctx.f12.s64);
	// fsqrts f5,f8
	ctx.f5.f64 = double(float(sqrt(ctx.f8.f64)));
	// lfd f7,80(r1)
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f6,f7
	ctx.f6.f64 = double(ctx.f7.s64);
	// frsp f2,f4
	ctx.f2.f64 = double(float(ctx.f4.f64));
	// frsp f3,f6
	ctx.f3.f64 = double(float(ctx.f6.f64));
	// fmuls f1,f2,f0
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// fmuls f31,f3,f0
	ctx.f31.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// fdivs f30,f5,f1
	ctx.f30.f64 = double(float(ctx.f5.f64 / ctx.f1.f64));
	// bl 0x822d4b08
	ctx.lr = 0x8231FCD0;
	sub_822D4B08(ctx, base);
	// fmuls f13,f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f30.f64 * ctx.f31.f64));
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfs f11,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// lfs f8,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f7,f11,f31,f10
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f31.f64 + ctx.f10.f64));
	// lfs f6,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f5.f64 = double(temp.f32);
	// fmadds f4,f8,f31,f6
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f31.f64 + ctx.f6.f64));
	// lfs f3,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f3.f64 = double(temp.f32);
	// lfs f0,6004(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 6004);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f2,f5,f31,f3
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f31.f64 + ctx.f3.f64));
	// lfs f1,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f12,f13,f31
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// lfs f13,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f9,f12,f0
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f0,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f12,f1,f9,f7
	ctx.f12.f64 = double(float(ctx.f1.f64 * ctx.f9.f64 + ctx.f7.f64));
	// stfs f12,0(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// fmadds f11,f9,f0,f4
	ctx.f11.f64 = double(float(ctx.f9.f64 * ctx.f0.f64 + ctx.f4.f64));
	// stfs f11,4(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// fmadds f10,f13,f9,f2
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f9.f64 + ctx.f2.f64));
	// stfs f10,8(r30)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f30,-48(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_8231FD3C:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,-27432
	ctx.r4.s64 = ctx.r11.s64 + -27432;
	// bl 0x822830e8
	ctx.lr = 0x8231FD4C;
	sub_822830E8(ctx, base);
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

PPC_WEAK_FUNC(sub_8231F840) {
	__imp__sub_8231F840(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8231FD5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8231FD5C) {
	__imp__sub_8231FD5C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8231FD60) {
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
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r5,12
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 12, ctx.xer);
	// bgt cr6,0x82320014
	if (ctx.cr6.gt) goto loc_82320014;
	// lis r12,-32206
	ctx.r12.s64 = -2110652416;
	// rlwinm r0,r5,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-608
	ctx.r12.s64 = ctx.r12.s64 + -608;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r5.u32) {
	case 0:
		goto loc_8231FDD4;
	case 1:
		goto loc_8231FDD4;
	case 2:
		goto loc_8231FDEC;
	case 3:
		goto loc_8231FE88;
	case 4:
		goto loc_8231FE08;
	case 5:
		goto loc_8231FEA0;
	case 6:
		goto loc_8231FEF8;
	case 7:
		goto loc_8231FF50;
	case 8:
		goto loc_8231FFB4;
	case 9:
		goto loc_82320014;
	case 10:
		goto loc_8231FDEC;
	case 11:
		goto loc_8231FEA0;
	case 12:
		goto loc_8231FDD4;
	default:
		return;
	}
	// lwz r17,-556(r17)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r17.u32 + -556);
	// lwz r17,-556(r17)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r17.u32 + -556);
	// lwz r17,-532(r17)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r17.u32 + -532);
	// lwz r17,-376(r17)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r17.u32 + -376);
	// lwz r17,-504(r17)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r17.u32 + -504);
	// lwz r17,-352(r17)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r17.u32 + -352);
	// lwz r17,-264(r17)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r17.u32 + -264);
	// lwz r17,-176(r17)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r17.u32 + -176);
	// lwz r17,-76(r17)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r17.u32 + -76);
	// lwz r17,20(r18)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r18.u32 + 20);
	// lwz r17,-532(r17)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r17.u32 + -532);
	// lwz r17,-352(r17)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r17.u32 + -352);
	// lwz r17,-556(r17)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r17.u32 + -556);
loc_8231FDD4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// stfs f0,4(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// b 0x82320024
	goto loc_82320024;
loc_8231FDEC:
	// lfs f0,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// lfs f13,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// lfs f12,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// b 0x82320024
	goto loc_82320024;
loc_8231FE08:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r8,r11,r4
	ctx.r8.s64 = ctx.r4.s64 - ctx.r11.s64;
	// extsw r7,r9
	ctx.r7.s64 = ctx.r9.s32;
	// extsw r6,r8
	ctx.r6.s64 = ctx.r8.s32;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// lfs f0,-22124(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -22124);
	ctx.f0.f64 = double(temp.f32);
	// fcfid f11,f13
	ctx.f11.f64 = double(ctx.f13.s64);
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// fdivs f8,f9,f10
	ctx.f8.f64 = double(float(ctx.f9.f64 / ctx.f10.f64));
	// fmuls f1,f8,f0
	ctx.f1.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// bl 0x823de800
	ctx.lr = 0x8231FE50;
	sub_823DE800(ctx, base);
	// frsp f7,f1
	ctx.fpscr.disableFlushMode();
	ctx.f7.f64 = double(float(ctx.f1.f64));
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lfs f6,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f6.f64 = double(temp.f32);
	// lfs f0,2416(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 2416);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f5,f7,f0
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// fmuls f4,f6,f5
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f5.f64));
	// stfs f4,0(r30)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// lfs f3,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f2,f3,f5
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f5.f64));
	// stfs f2,4(r30)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// lfs f1,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f0,f1,f5
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f5.f64));
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// b 0x82320024
	goto loc_82320024;
loc_8231FE88:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x8231fdec
	if (!ctx.cr6.gt) goto loc_8231FDEC;
	// b 0x8231fdd4
	goto loc_8231FDD4;
loc_8231FEA0:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lfs f0,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// subf r9,r11,r4
	ctx.r9.s64 = ctx.r4.s64 - ctx.r11.s64;
	// lfs f13,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// lis r8,-31834
	ctx.r8.s64 = -2086273024;
	// extsw r7,r9
	ctx.r7.s64 = ctx.r9.s32;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfs f12,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f12.f64 = double(temp.f32);
	// lwz r11,-16972(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -16972);
	// stfs f12,8(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// lfd f10,80(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// lfs f0,5804(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5804);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fmuls f7,f8,f0
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fnmsubs f6,f11,f7,f12
	ctx.f6.f64 = double(float(-(ctx.f11.f64 * ctx.f7.f64 - ctx.f12.f64)));
	// stfs f6,8(r30)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// b 0x82320024
	goto loc_82320024;
loc_8231FEF8:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lfs f0,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// subf r9,r11,r4
	ctx.r9.s64 = ctx.r4.s64 - ctx.r11.s64;
	// lis r8,-31834
	ctx.r8.s64 = -2086273024;
	// extsw r7,r9
	ctx.r7.s64 = ctx.r9.s32;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lfs f0,5804(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5804);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,-6496(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -6496);
	// lfs f13,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// lfs f12,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// lfs f8,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// fmuls f7,f9,f0
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fnmsubs f6,f8,f7,f12
	ctx.f6.f64 = double(float(-(ctx.f8.f64 * ctx.f7.f64 - ctx.f12.f64)));
	// stfs f6,8(r30)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// b 0x82320024
	goto loc_82320024;
loc_8231FF50:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpw cr6,r4,r10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x8231fdd4
	if (ctx.cr6.gt) goto loc_8231FDD4;
	// subf r11,r11,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r11.s64;
	// lfs f13,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfs f0,5804(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5804);
	ctx.f0.f64 = double(temp.f32);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fmuls f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmuls f8,f9,f9
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f9.f64));
	// fmuls f7,f13,f8
	ctx.f7.f64 = double(float(ctx.f13.f64 * ctx.f8.f64));
	// stfs f7,0(r30)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// lfs f6,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f6,f8
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f8.f64));
	// stfs f5,4(r30)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// lfs f4,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f3,f4,f8
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f8.f64));
	// stfs f3,8(r30)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// b 0x82320024
	goto loc_82320024;
loc_8231FFB4:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpw cr6,r4,r10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x8231fdd4
	if (ctx.cr6.gt) goto loc_8231FDD4;
	// subf r11,r11,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r11.s64;
	// lfs f13,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfs f0,5804(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5804);
	ctx.f0.f64 = double(temp.f32);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fmuls f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmuls f8,f13,f9
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f9.f64));
	// stfs f8,0(r30)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// lfs f7,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f7,f9
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f9.f64));
	// stfs f6,4(r30)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// lfs f5,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f5,f9
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f9.f64));
	// stfs f4,8(r30)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// b 0x82320024
	goto loc_82320024;
loc_82320014:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,-27388
	ctx.r4.s64 = ctx.r11.s64 + -27388;
	// bl 0x822830e8
	ctx.lr = 0x82320024;
	sub_822830E8(ctx, base);
loc_82320024:
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

PPC_WEAK_FUNC(sub_8231FD60) {
	__imp__sub_8231FD60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8232003C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8232003C) {
	__imp__sub_8232003C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82320040) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmuls f13,f0,f0
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f10,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f12,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f11,12168(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f11.f64 = double(temp.f32);
	// lfs f4,6032(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6032);
	ctx.f4.f64 = double(temp.f32);
	// fmadds f9,f10,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f10.f64 + ctx.f13.f64));
	// fmadds f8,f12,f12,f9
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f9.f64));
	// fsqrts f7,f8
	ctx.f7.f64 = double(float(sqrt(ctx.f8.f64)));
	// fcmpu cr6,f7,f11
	ctx.cr6.compare(ctx.f7.f64, ctx.f11.f64);
	// bge cr6,0x82320088
	if (!ctx.cr6.lt) goto loc_82320088;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f8,f11
	ctx.f8.f64 = ctx.f11.f64;
	// lfs f10,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f10.f64 = double(temp.f32);
	// fmr f9,f10
	ctx.f9.f64 = ctx.f10.f64;
	// b 0x82320090
	goto loc_82320090;
loc_82320088:
	// lfs f9,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
loc_82320090:
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fneg f12,f0
	ctx.f12.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// lfs f7,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fneg f6,f7
	ctx.f6.u64 = ctx.f7.u64 ^ 0x8000000000000000;
	// lfs f2,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// lfs f5,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// fneg f3,f5
	ctx.f3.u64 = ctx.f5.u64 ^ 0x8000000000000000;
	// lfs f0,6048(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f2,f0
	ctx.cr6.compare(ctx.f2.f64, ctx.f0.f64);
	// fmuls f1,f12,f12
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f0,f6,f6,f1
	ctx.f0.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f1.f64));
	// fmadds f13,f3,f3,f0
	ctx.f13.f64 = double(float(ctx.f3.f64 * ctx.f3.f64 + ctx.f0.f64));
	// fsqrts f7,f13
	ctx.f7.f64 = double(float(sqrt(ctx.f13.f64)));
	// fneg f5,f7
	ctx.f5.u64 = ctx.f7.u64 ^ 0x8000000000000000;
	// fsel f2,f5,f11,f7
	ctx.f2.f64 = ctx.f5.f64 >= 0.0 ? ctx.f11.f64 : ctx.f7.f64;
	// fdivs f1,f11,f2
	ctx.f1.f64 = double(float(ctx.f11.f64 / ctx.f2.f64));
	// fmuls f0,f12,f1
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f1.f64));
	// fmuls f13,f1,f3
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f3.f64));
	// fmuls f12,f6,f1
	ctx.f12.f64 = double(float(ctx.f6.f64 * ctx.f1.f64));
	// ble cr6,0x823200ec
	if (!ctx.cr6.gt) goto loc_823200EC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f4,7036(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7036);
	ctx.f4.f64 = double(temp.f32);
loc_823200EC:
	// fmuls f7,f0,f9
	ctx.fpscr.disableFlushMode();
	ctx.f7.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// fmadds f6,f10,f13,f7
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f13.f64 + ctx.f7.f64));
	// fmadds f5,f12,f8,f6
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f8.f64 + ctx.f6.f64));
	// fcmpu cr6,f5,f4
	ctx.cr6.compare(ctx.f5.f64, ctx.f4.f64);
	// bge cr6,0x8232015c
	if (!ctx.cr6.lt) goto loc_8232015C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f5,2416(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2416);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f7,f10,f5
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f5.f64));
	// fmuls f6,f9,f5
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f5.f64));
	// fmuls f5,f8,f5
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f5.f64));
loc_82320114:
	// fadds f0,f6,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f6.f64 + ctx.f0.f64));
	// fadds f12,f5,f12
	ctx.f12.f64 = double(float(ctx.f5.f64 + ctx.f12.f64));
	// fadds f3,f7,f13
	ctx.f3.f64 = double(float(ctx.f7.f64 + ctx.f13.f64));
	// fmuls f2,f0,f0
	ctx.f2.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f1,f12,f12,f2
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f2.f64));
	// fmadds f13,f3,f3,f1
	ctx.f13.f64 = double(float(ctx.f3.f64 * ctx.f3.f64 + ctx.f1.f64));
	// fsqrts f2,f13
	ctx.f2.f64 = double(float(sqrt(ctx.f13.f64)));
	// fneg f1,f2
	ctx.f1.u64 = ctx.f2.u64 ^ 0x8000000000000000;
	// fsel f13,f1,f11,f2
	ctx.f13.f64 = ctx.f1.f64 >= 0.0 ? ctx.f11.f64 : ctx.f2.f64;
	// fdivs f2,f11,f13
	ctx.f2.f64 = double(float(ctx.f11.f64 / ctx.f13.f64));
	// fmuls f0,f0,f2
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f2.f64));
	// fmuls f13,f2,f3
	ctx.f13.f64 = double(float(ctx.f2.f64 * ctx.f3.f64));
	// fmuls f12,f12,f2
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f2.f64));
	// fmuls f1,f0,f9
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// fmadds f3,f10,f13,f1
	ctx.f3.f64 = double(float(ctx.f10.f64 * ctx.f13.f64 + ctx.f1.f64));
	// fmadds f2,f12,f8,f3
	ctx.f2.f64 = double(float(ctx.f12.f64 * ctx.f8.f64 + ctx.f3.f64));
	// fcmpu cr6,f2,f4
	ctx.cr6.compare(ctx.f2.f64, ctx.f4.f64);
	// blt cr6,0x82320114
	if (ctx.cr6.lt) goto loc_82320114;
loc_8232015C:
	// stfs f13,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// stfs f0,4(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// stfs f12,8(r5)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r5.u32 + 8, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82320040) {
	__imp__sub_82320040(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8232016C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8232016C) {
	__imp__sub_8232016C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82320170) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82320180
	if (!ctx.cr6.eq) goto loc_82320180;
loc_82320178:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82320180:
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,23
	ctx.r11.s64 = 23;
	// addi r9,r9,26320
	ctx.r9.s64 = ctx.r9.s64 + 26320;
loc_82320190:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82320178
	if (ctx.cr6.eq) goto loc_82320178;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82320190
	if (!ctx.cr6.eq) goto loc_82320190;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,6
	ctx.r11.s64 = 6;
	// addi r9,r9,26260
	ctx.r9.s64 = ctx.r9.s64 + 26260;
loc_823201BC:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82320178
	if (ctx.cr6.eq) goto loc_82320178;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823201bc
	if (!ctx.cr6.eq) goto loc_823201BC;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82320170) {
	__imp__sub_82320170(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823201E0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,172(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 172);
	// stw r11,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823201E0) {
	__imp__sub_823201E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823201EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823201EC) {
	__imp__sub_823201EC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823201F0) {
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
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f0,88(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,88(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 88, temp.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stb r11,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r11.u8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,692(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 692);
	// sth r10,124(r4)
	PPC_STORE_U16(ctx.r4.u32 + 124, ctx.r10.u16);
	// lwz r4,692(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 692);
	// bl 0x82333718
	ctx.lr = 0x8232022C;
	sub_82333718(ctx, base);
	// stb r3,168(r30)
	PPC_STORE_U8(ctx.r30.u32 + 168, ctx.r3.u8);
	// lwz r8,108(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// sth r8,130(r30)
	PPC_STORE_U16(ctx.r30.u32 + 130, ctx.r8.u16);
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

PPC_WEAK_FUNC(sub_823201F0) {
	__imp__sub_823201F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82320250) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,24(r4)
	PPC_STORE_U32(ctx.r4.u32 + 24, ctx.r11.u32);
	// stw r10,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, ctx.r10.u32);
	// stw r11,20(r4)
	PPC_STORE_U32(ctx.r4.u32 + 20, ctx.r11.u32);
	// lfs f0,5484(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,40(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 40, temp.u32);
	// stfs f0,44(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 44, temp.u32);
	// stfs f0,48(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 48, temp.u32);
	// lfs f13,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,28(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 28, temp.u32);
	// lfs f12,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,32(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 32, temp.u32);
	// lfs f11,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,36(r4)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r4.u32 + 36, temp.u32);
	// stw r10,52(r4)
	PPC_STORE_U32(ctx.r4.u32 + 52, ctx.r10.u32);
	// stw r11,60(r4)
	PPC_STORE_U32(ctx.r4.u32 + 60, ctx.r11.u32);
	// stw r11,56(r4)
	PPC_STORE_U32(ctx.r4.u32 + 56, ctx.r11.u32);
	// stfs f0,76(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 76, temp.u32);
	// stfs f0,80(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 80, temp.u32);
	// stfs f0,84(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 84, temp.u32);
	// lwz r8,172(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 172);
	// rlwinm r7,r8,0,20,21
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xC00;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x82320304
	if (!ctx.cr6.eq) goto loc_82320304;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x823202ec
	if (ctx.cr6.eq) goto loc_823202EC;
	// lfs f0,380(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 380);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,64(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 64, temp.u32);
	// lfs f13,384(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 384);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,68(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 68, temp.u32);
	// lfs f12,388(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 388);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,72(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 72, temp.u32);
	// lwz r11,168(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 168);
	// stw r11,92(r4)
	PPC_STORE_U32(ctx.r4.u32 + 92, ctx.r11.u32);
	// blr 
	return;
loc_823202EC:
	// lfs f0,264(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 264);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,64(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 64, temp.u32);
	// lfs f13,268(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 268);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,68(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 68, temp.u32);
	// lfs f12,272(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 272);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,72(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 72, temp.u32);
loc_82320304:
	// lwz r11,168(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 168);
	// stw r11,92(r4)
	PPC_STORE_U32(ctx.r4.u32 + 92, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82320250) {
	__imp__sub_82320250(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82320310) {
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
	// bl 0x823229d8
	ctx.lr = 0x82320320;
	sub_823229D8(ctx, base);
	// addi r11,r3,-3
	ctx.r11.s64 = ctx.r3.s64 + -3;
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

PPC_WEAK_FUNC(sub_82320310) {
	__imp__sub_82320310(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8232033C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8232033C) {
	__imp__sub_8232033C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82320340) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf50
	ctx.lr = 0x82320348;
	__savegprlr_18(ctx, base);
	// addi r12,r1,-120
	ctx.r12.s64 = ctx.r1.s64 + -120;
	// bl 0x823de004
	ctx.lr = 0x82320350;
	__savefpr_19(ctx, base);
	// stwu r1,-608(r1)
	ea = -608 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r26,711(r1)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r1.u32 + 711);
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// mr r19,r8
	ctx.r19.u64 = ctx.r8.u64;
	// fmr f22,f1
	ctx.fpscr.disableFlushMode();
	ctx.f22.f64 = ctx.f1.f64;
	// rotlwi r8,r26,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r26.u32, 3);
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// addi r7,r11,-32512
	ctx.r7.s64 = ctx.r11.s64 + -32512;
	// fmr f29,f3
	ctx.f29.f64 = ctx.f3.f64;
	// mr r18,r9
	ctx.r18.u64 = ctx.r9.u64;
	// lwz r9,716(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 716);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// fmr f25,f4
	ctx.f25.f64 = ctx.f4.f64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r25,0
	ctx.r25.s64 = 0;
	// lwzx r29,r8,r7
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// li r21,1
	ctx.r21.s64 = 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x823203a8
	if (!ctx.cr6.eq) goto loc_823203A8;
	// lis r28,129
	ctx.r28.s64 = 8454144;
	// ori r28,r28,17
	ctx.r28.u64 = ctx.r28.u64 | 17;
	// b 0x823203b0
	goto loc_823203B0;
loc_823203A8:
	// lis r28,130
	ctx.r28.s64 = 8519680;
	// ori r28,r28,21
	ctx.r28.u64 = ctx.r28.u64 | 21;
loc_823203B0:
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r27,-31834
	ctx.r27.s64 = -2086273024;
	// lfs f19,5876(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5876);
	ctx.f19.f64 = double(temp.f32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lfs f23,2416(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2416);
	ctx.f23.f64 = double(temp.f32);
	// addi r23,r11,-2280
	ctx.r23.s64 = ctx.r11.s64 + -2280;
	// lfs f20,5484(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 5484);
	ctx.f20.f64 = double(temp.f32);
	// bne cr6,0x82320494
	if (!ctx.cr6.eq) goto loc_82320494;
	// lfs f0,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f30,f23
	ctx.f13.f64 = double(float(ctx.f30.f64 * ctx.f23.f64));
	// lfs f12,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f30,f23
	ctx.f11.f64 = double(float(ctx.f30.f64 * ctx.f23.f64));
	// lfs f10,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f0,f19
	ctx.f9.f64 = double(float(ctx.f0.f64 + ctx.f19.f64));
	// stfs f20,160(r1)
	temp.f32 = float(ctx.f20.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// stfs f20,164(r1)
	temp.f32 = float(ctx.f20.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// stfs f13,168(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// stfs f22,172(r1)
	temp.f32 = float(ctx.f22.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stfs f22,176(r1)
	temp.f32 = float(ctx.f22.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stfs f11,180(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// stfs f10,100(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f10,84(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f9,88(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bctrl 
	ctx.lr = 0x82320444;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,-6632(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -6632);
	// lbz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82320488
	if (ctx.cr6.eq) goto loc_82320488;
	// lbz r10,248(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 248);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82320468
	if (ctx.cr6.eq) goto loc_82320468;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// b 0x82320470
	goto loc_82320470;
loc_82320468:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r6,r11,-2264
	ctx.r6.s64 = ctx.r11.s64 + -2264;
loc_82320470:
	// li r8,20
	ctx.r8.s64 = 20;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82322800
	ctx.lr = 0x82320488;
	sub_82322800(ctx, base);
loc_82320488:
	// lbz r10,248(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 248);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82320760
	if (!ctx.cr6.eq) goto loc_82320760;
loc_82320494:
	// lwz r20,692(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 692);
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// beq cr6,0x823204ac
	if (ctx.cr6.eq) goto loc_823204AC;
	// lwz r11,700(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 700);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82320760
	if (ctx.cr6.eq) goto loc_82320760;
loc_823204AC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r22,732(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 732);
	// stfs f20,160(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f20.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// stfs f20,164(r1)
	temp.f32 = float(ctx.f20.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// cmpwi cr6,r22,1
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 1, ctx.xer);
	// stfs f20,168(r1)
	temp.f32 = float(ctx.f20.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// lfs f31,23112(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 23112);
	ctx.f31.f64 = double(temp.f32);
	// stfs f31,172(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// stfs f31,176(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stfs f31,180(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// bne cr6,0x823204e8
	if (!ctx.cr6.eq) goto loc_823204E8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,5812(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5812);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f1,f29,f0
	ctx.f1.f64 = double(float(ctx.f29.f64 - ctx.f0.f64));
loc_823204E8:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,184
	ctx.r4.s64 = ctx.r1.s64 + 184;
	// bl 0x822d52c8
	ctx.lr = 0x823204F4;
	sub_822D52C8(ctx, base);
	// fsubs f26,f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.f26.f64 = double(float(ctx.f30.f64 - ctx.f31.f64));
	// lfs f13,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f30,f25,f31
	ctx.f30.f64 = double(float(ctx.f25.f64 - ctx.f31.f64));
	// lfs f0,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// lfs f12,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// lfs f11,184(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	ctx.f11.f64 = double(temp.f32);
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// lfs f10,188(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	ctx.f10.f64 = double(temp.f32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lfs f8,192(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	ctx.f8.f64 = double(temp.f32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// stfs f12,100(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// fadds f13,f13,f26
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f26.f64));
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fmadds f9,f30,f11,f0
	ctx.f9.f64 = double(float(ctx.f30.f64 * ctx.f11.f64 + ctx.f0.f64));
	// stfs f9,80(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmadds f7,f30,f10,f12
	ctx.f7.f64 = double(float(ctx.f30.f64 * ctx.f10.f64 + ctx.f12.f64));
	// stfs f7,84(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmadds f6,f8,f30,f13
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f30.f64 + ctx.f13.f64));
	// stfs f6,88(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bctrl 
	ctx.lr = 0x8232055C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r24,r11,-2072
	ctx.r24.s64 = ctx.r11.s64 + -2072;
	// lwz r11,-6632(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -6632);
	// lbz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823205ec
	if (ctx.cr6.eq) goto loc_823205EC;
	// lfs f13,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// lfs f12,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f12.f64 = double(temp.f32);
	// li r8,20
	ctx.r8.s64 = 20;
	// lfs f11,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f11.f64 = double(temp.f32);
	// li r7,0
	ctx.r7.s64 = 0;
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// addi r5,r1,272
	ctx.r5.s64 = ctx.r1.s64 + 272;
	// lfs f10,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f0,f13
	ctx.f9.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f8,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f10,f12
	ctx.f7.f64 = double(float(ctx.f10.f64 - ctx.f12.f64));
	// fsubs f6,f8,f11
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f11.f64));
	// lfs f0,208(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// fmadds f5,f9,f0,f13
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f0.f64 + ctx.f13.f64));
	// stfs f5,272(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 272, temp.u32);
	// fmadds f4,f7,f0,f12
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f0.f64 + ctx.f12.f64));
	// stfs f4,276(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 276, temp.u32);
	// fmadds f3,f6,f0,f11
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f0.f64 + ctx.f11.f64));
	// stfs f3,280(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 280, temp.u32);
	// bl 0x82322800
	ctx.lr = 0x823205D0;
	sub_82322800(ctx, base);
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// li r8,20
	ctx.r8.s64 = 20;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82322800
	ctx.lr = 0x823205EC;
	sub_82322800(ctx, base);
loc_823205EC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,208(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f24,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f24.f64 = double(temp.f32);
	// lfs f28,7640(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 7640);
	ctx.f28.f64 = double(temp.f32);
	// fcmpu cr6,f0,f24
	ctx.cr6.compare(ctx.f0.f64, ctx.f24.f64);
	// lfs f21,5488(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5488);
	ctx.f21.f64 = double(temp.f32);
	// bge cr6,0x82320774
	if (!ctx.cr6.lt) goto loc_82320774;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// beq cr6,0x82320760
	if (ctx.cr6.eq) goto loc_82320760;
	// fmadds f27,f30,f0,f31
	ctx.f27.f64 = double(float(ctx.f30.f64 * ctx.f0.f64 + ctx.f31.f64));
	// li r25,1
	ctx.r25.s64 = 1;
	// fadds f13,f22,f21
	ctx.f13.f64 = double(float(ctx.f22.f64 + ctx.f21.f64));
	// fcmpu cr6,f27,f13
	ctx.cr6.compare(ctx.f27.f64, ctx.f13.f64);
	// blt cr6,0x82320760
	if (ctx.cr6.lt) goto loc_82320760;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,7036(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7036);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f29,f26,f13
	ctx.f29.f64 = double(float(ctx.f26.f64 * ctx.f13.f64));
	// fadds f13,f29,f28
	ctx.f13.f64 = double(float(ctx.f29.f64 + ctx.f28.f64));
	// fcmpu cr6,f27,f13
	ctx.cr6.compare(ctx.f27.f64, ctx.f13.f64);
	// bge cr6,0x82320778
	if (!ctx.cr6.lt) goto loc_82320778;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lfs f13,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// addi r4,r1,184
	ctx.r4.s64 = ctx.r1.s64 + 184;
	// lfs f11,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lfs f10,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f11,f12
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// lfs f8,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f8.f64 = double(temp.f32);
	// li r25,0
	ctx.r25.s64 = 0;
	// lfs f0,-27336(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27336);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f7,f8,f10
	ctx.f7.f64 = double(float(ctx.f8.f64 - ctx.f10.f64));
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lfs f6,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f6.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f9,144(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f7,148(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// fsubs f5,f0,f6
	ctx.f5.f64 = double(float(ctx.f0.f64 - ctx.f6.f64));
	// stfs f5,152(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// bl 0x822d4b08
	ctx.lr = 0x82320694;
	sub_822D4B08(ctx, base);
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// fmr f27,f1
	ctx.fpscr.disableFlushMode();
	ctx.f27.f64 = ctx.f1.f64;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bctrl 
	ctx.lr = 0x823206B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,-6632(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -6632);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82320740
	if (ctx.cr6.eq) goto loc_82320740;
	// lfs f13,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// lfs f12,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f12.f64 = double(temp.f32);
	// li r8,20
	ctx.r8.s64 = 20;
	// lfs f11,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f11.f64 = double(temp.f32);
	// li r7,0
	ctx.r7.s64 = 0;
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// addi r5,r1,336
	ctx.r5.s64 = ctx.r1.s64 + 336;
	// lfs f10,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f0,f13
	ctx.f9.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f8,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f10,f12
	ctx.f7.f64 = double(float(ctx.f10.f64 - ctx.f12.f64));
	// fsubs f6,f8,f11
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f11.f64));
	// lfs f0,208(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// fmadds f5,f9,f0,f13
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f0.f64 + ctx.f13.f64));
	// stfs f5,336(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 336, temp.u32);
	// fmadds f4,f7,f0,f12
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f0.f64 + ctx.f12.f64));
	// stfs f4,340(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 340, temp.u32);
	// fmadds f3,f6,f0,f11
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f0.f64 + ctx.f11.f64));
	// stfs f3,344(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 344, temp.u32);
	// bl 0x82322800
	ctx.lr = 0x82320724;
	sub_82322800(ctx, base);
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// li r8,20
	ctx.r8.s64 = 20;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,336
	ctx.r4.s64 = ctx.r1.s64 + 336;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82322800
	ctx.lr = 0x82320740;
	sub_82322800(ctx, base);
loc_82320740:
	// lfs f0,208(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f24
	ctx.cr6.compare(ctx.f0.f64, ctx.f24.f64);
	// bge cr6,0x82320774
	if (!ctx.cr6.lt) goto loc_82320774;
	// fmadds f27,f27,f0,f31
	ctx.f27.f64 = double(float(ctx.f27.f64 * ctx.f0.f64 + ctx.f31.f64));
	// li r25,1
	ctx.r25.s64 = 1;
	// fadds f13,f29,f28
	ctx.f13.f64 = double(float(ctx.f29.f64 + ctx.f28.f64));
	// fcmpu cr6,f27,f13
	ctx.cr6.compare(ctx.f27.f64, ctx.f13.f64);
	// bge cr6,0x82320778
	if (!ctx.cr6.lt) goto loc_82320778;
loc_82320760:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,608
	ctx.r1.s64 = ctx.r1.s64 + 608;
	// addi r12,r1,-120
	ctx.r12.s64 = ctx.r1.s64 + -120;
	// bl 0x823de050
	ctx.lr = 0x82320770;
	__restfpr_19(ctx, base);
	// b 0x823ddfa0
	__restgprlr_18(ctx, base);
	return;
loc_82320774:
	// fmr f27,f25
	ctx.fpscr.disableFlushMode();
	ctx.f27.f64 = ctx.f25.f64;
loc_82320778:
	// lfs f13,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// lfs f12,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f10,f13
	ctx.f8.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// lfs f7,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f9,f12
	ctx.f6.f64 = double(float(ctx.f9.f64 - ctx.f12.f64));
	// fsubs f5,f7,f11
	ctx.f5.f64 = double(float(ctx.f7.f64 - ctx.f11.f64));
	// fmadds f4,f8,f0,f13
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f0.f64 + ctx.f13.f64));
	// stfs f4,112(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmadds f3,f6,f0,f12
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f0.f64 + ctx.f12.f64));
	// stfs f3,116(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fmadds f2,f5,f0,f11
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f0.f64 + ctx.f11.f64));
	// stfs f2,120(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// beq cr6,0x823207c8
	if (ctx.cr6.eq) goto loc_823207C8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,14232(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14232);
	ctx.f0.f64 = double(temp.f32);
	// b 0x823207cc
	goto loc_823207CC;
loc_823207C8:
	// fmr f0,f24
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f24.f64;
loc_823207CC:
	// lfs f13,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f12,f0,f22,f26
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f22.f64 + ctx.f26.f64));
	// lfs f11,192(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	ctx.f11.f64 = double(temp.f32);
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// fmadds f10,f11,f28,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f28.f64 + ctx.f13.f64));
	// lfs f9,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// lfs f7,184(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	ctx.f7.f64 = double(temp.f32);
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// lfs f6,188(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f0,f7,f28,f9
	ctx.f0.f64 = double(float(ctx.f7.f64 * ctx.f28.f64 + ctx.f9.f64));
	// fmadds f13,f6,f28,f8
	ctx.f13.f64 = double(float(ctx.f6.f64 * ctx.f28.f64 + ctx.f8.f64));
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// fsubs f29,f12,f31
	ctx.f29.f64 = double(float(ctx.f12.f64 - ctx.f31.f64));
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// fadds f12,f10,f26
	ctx.f12.f64 = double(float(ctx.f10.f64 + ctx.f26.f64));
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fsubs f5,f12,f29
	ctx.f5.f64 = double(float(ctx.f12.f64 - ctx.f29.f64));
	// stfs f5,88(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bctrl 
	ctx.lr = 0x82320838;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,-6632(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -6632);
	// lbz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823208c0
	if (ctx.cr6.eq) goto loc_823208C0;
	// lfs f13,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// lfs f12,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f12.f64 = double(temp.f32);
	// li r8,20
	ctx.r8.s64 = 20;
	// lfs f11,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f11.f64 = double(temp.f32);
	// li r7,0
	ctx.r7.s64 = 0;
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// addi r5,r1,368
	ctx.r5.s64 = ctx.r1.s64 + 368;
	// lfs f10,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f0,f13
	ctx.f9.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f8,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f10,f12
	ctx.f7.f64 = double(float(ctx.f10.f64 - ctx.f12.f64));
	// fsubs f6,f8,f11
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f11.f64));
	// lfs f0,208(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// fmadds f5,f9,f0,f13
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f0.f64 + ctx.f13.f64));
	// stfs f5,368(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 368, temp.u32);
	// fmadds f4,f7,f0,f12
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f0.f64 + ctx.f12.f64));
	// stfs f4,372(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 372, temp.u32);
	// fmadds f3,f6,f0,f11
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f0.f64 + ctx.f11.f64));
	// stfs f3,376(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 376, temp.u32);
	// bl 0x82322800
	ctx.lr = 0x823208A4;
	sub_82322800(ctx, base);
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// li r8,20
	ctx.r8.s64 = 20;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,368
	ctx.r4.s64 = ctx.r1.s64 + 368;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82322800
	ctx.lr = 0x823208C0;
	sub_82322800(ctx, base);
loc_823208C0:
	// lfs f0,208(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f24
	ctx.cr6.compare(ctx.f0.f64, ctx.f24.f64);
	// beq cr6,0x82321010
	if (ctx.cr6.eq) goto loc_82321010;
	// lbz r10,250(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 250);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82320760
	if (ctx.cr6.eq) goto loc_82320760;
	// lfs f13,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f10,f29,f0,f31
	ctx.f10.f64 = double(float(ctx.f29.f64 * ctx.f0.f64 + ctx.f31.f64));
	// fsubs f9,f12,f13
	ctx.f9.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// lfs f12,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f11.f64 = double(temp.f32);
	// lfs f8,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f8,f12
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f12.f64));
	// fsubs f5,f7,f11
	ctx.f5.f64 = double(float(ctx.f7.f64 - ctx.f11.f64));
	// fmadds f4,f9,f0,f13
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fmadds f8,f6,f0,f12
	ctx.f8.f64 = double(float(ctx.f6.f64 * ctx.f0.f64 + ctx.f12.f64));
	// stfs f8,128(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fmadds f7,f5,f0,f11
	ctx.f7.f64 = double(float(ctx.f5.f64 * ctx.f0.f64 + ctx.f11.f64));
	// stfs f7,132(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// fsubs f9,f4,f31
	ctx.f9.f64 = double(float(ctx.f4.f64 - ctx.f31.f64));
	// stfs f9,136(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// beq cr6,0x82320b4c
	if (ctx.cr6.eq) goto loc_82320B4C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// fsubs f6,f27,f10
	ctx.f6.f64 = double(float(ctx.f27.f64 - ctx.f10.f64));
	// lfs f0,-27340(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27340);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f5,f10,f0
	ctx.f5.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fcmpu cr6,f6,f5
	ctx.cr6.compare(ctx.f6.f64, ctx.f5.f64);
	// blt cr6,0x82321010
	if (ctx.cr6.lt) goto loc_82321010;
	// lfs f0,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f6,f30,f28
	ctx.f6.f64 = double(float(ctx.f30.f64 - ctx.f28.f64));
	// fsubs f5,f0,f7
	ctx.f5.f64 = double(float(ctx.f0.f64 - ctx.f7.f64));
	// lfs f3,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f3.f64 = double(temp.f32);
	// lfs f10,188(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f1,f3,f8
	ctx.f1.f64 = double(float(ctx.f3.f64 - ctx.f8.f64));
	// lfs f7,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// lfs f4,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f4.f64 = double(temp.f32);
	// fmadds f3,f30,f10,f7
	ctx.f3.f64 = double(float(ctx.f30.f64 * ctx.f10.f64 + ctx.f7.f64));
	// fsubs f2,f4,f9
	ctx.f2.f64 = double(float(ctx.f4.f64 - ctx.f9.f64));
	// lfs f0,184(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	ctx.f0.f64 = double(temp.f32);
	// lfs f8,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// lfs f9,192(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f4,f30,f0,f8
	ctx.f4.f64 = double(float(ctx.f30.f64 * ctx.f0.f64 + ctx.f8.f64));
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// fmadds f10,f10,f31,f5
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f31.f64 + ctx.f5.f64));
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// fmadds f8,f0,f31,f1
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f31.f64 + ctx.f1.f64));
	// fmadds f9,f9,f31,f2
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f31.f64 + ctx.f2.f64));
	// fmuls f7,f10,f10
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// fadds f5,f9,f31
	ctx.f5.f64 = double(float(ctx.f9.f64 + ctx.f31.f64));
	// fmadds f2,f8,f8,f7
	ctx.f2.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 + ctx.f7.f64));
	// fmadds f1,f5,f5,f2
	ctx.f1.f64 = double(float(ctx.f5.f64 * ctx.f5.f64 + ctx.f2.f64));
	// fsqrts f0,f1
	ctx.f0.f64 = double(float(sqrt(ctx.f1.f64)));
	// fneg f9,f0
	ctx.f9.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fsel f7,f9,f24,f0
	ctx.f7.f64 = ctx.f9.f64 >= 0.0 ? ctx.f24.f64 : ctx.f0.f64;
	// fdivs f2,f24,f7
	ctx.f2.f64 = double(float(ctx.f24.f64 / ctx.f7.f64));
	// fmuls f0,f2,f8
	ctx.f0.f64 = double(float(ctx.f2.f64 * ctx.f8.f64));
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// fmuls f10,f10,f2
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f2.f64));
	// stfs f10,148(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// fmuls f9,f2,f5
	ctx.f9.f64 = double(float(ctx.f2.f64 * ctx.f5.f64));
	// stfs f9,152(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// fmadds f1,f6,f0,f12
	ctx.f1.f64 = double(float(ctx.f6.f64 * ctx.f0.f64 + ctx.f12.f64));
	// fmadds f0,f10,f6,f11
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f6.f64 + ctx.f11.f64));
	// fmadds f13,f6,f9,f13
	ctx.f13.f64 = double(float(ctx.f6.f64 * ctx.f9.f64 + ctx.f13.f64));
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fadds f12,f4,f1
	ctx.f12.f64 = double(float(ctx.f4.f64 + ctx.f1.f64));
	// fadds f11,f3,f0
	ctx.f11.f64 = double(float(ctx.f3.f64 + ctx.f0.f64));
	// fmuls f10,f12,f23
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f23.f64));
	// stfs f10,80(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f9,f11,f23
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f23.f64));
	// stfs f9,84(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// bctrl 
	ctx.lr = 0x82320A00;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,-6632(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -6632);
	// lbz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82320a88
	if (ctx.cr6.eq) goto loc_82320A88;
	// lfs f13,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// lfs f12,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f12.f64 = double(temp.f32);
	// li r8,20
	ctx.r8.s64 = 20;
	// lfs f11,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f11.f64 = double(temp.f32);
	// li r7,0
	ctx.r7.s64 = 0;
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// addi r5,r1,352
	ctx.r5.s64 = ctx.r1.s64 + 352;
	// lfs f10,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f0,f13
	ctx.f9.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f8,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f10,f12
	ctx.f7.f64 = double(float(ctx.f10.f64 - ctx.f12.f64));
	// fsubs f6,f8,f11
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f11.f64));
	// lfs f0,208(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// fmadds f5,f9,f0,f13
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f0.f64 + ctx.f13.f64));
	// stfs f5,352(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 352, temp.u32);
	// fmadds f4,f7,f0,f12
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f0.f64 + ctx.f12.f64));
	// stfs f4,356(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 356, temp.u32);
	// fmadds f3,f6,f0,f11
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f0.f64 + ctx.f11.f64));
	// stfs f3,360(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 360, temp.u32);
	// bl 0x82322800
	ctx.lr = 0x82320A6C;
	sub_82322800(ctx, base);
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// li r8,20
	ctx.r8.s64 = 20;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82322800
	ctx.lr = 0x82320A88;
	sub_82322800(ctx, base);
loc_82320A88:
	// lfs f0,208(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f24
	ctx.cr6.compare(ctx.f0.f64, ctx.f24.f64);
	// bge cr6,0x82320b08
	if (!ctx.cr6.lt) goto loc_82320B08;
	// lfs f13,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// lfs f12,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
	// fadds f9,f13,f28
	ctx.f9.f64 = double(float(ctx.f13.f64 + ctx.f28.f64));
	// fsubs f8,f13,f12
	ctx.f8.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// lfs f11,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f10.f64 = double(temp.f32);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// lfs f7,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f7.f64 = double(temp.f32);
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// lfs f6,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f5,f7,f11
	ctx.f5.f64 = double(float(ctx.f7.f64 - ctx.f11.f64));
	// fsubs f4,f6,f10
	ctx.f4.f64 = double(float(ctx.f6.f64 - ctx.f10.f64));
	// stfs f9,88(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// fmadds f3,f8,f0,f12
	ctx.f3.f64 = double(float(ctx.f8.f64 * ctx.f0.f64 + ctx.f12.f64));
	// fmadds f2,f5,f0,f11
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f0.f64 + ctx.f11.f64));
	// stfs f2,96(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmadds f1,f4,f0,f10
	ctx.f1.f64 = double(float(ctx.f4.f64 * ctx.f0.f64 + ctx.f10.f64));
	// stfs f1,100(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fadds f0,f3,f28
	ctx.f0.f64 = double(float(ctx.f3.f64 + ctx.f28.f64));
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bctrl 
	ctx.lr = 0x82320AFC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f0,208(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f24
	ctx.cr6.compare(ctx.f0.f64, ctx.f24.f64);
	// blt cr6,0x82321010
	if (ctx.cr6.lt) goto loc_82321010;
loc_82320B08:
	// lfs f13,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f8,f12,f13
	ctx.f8.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// lfs f7,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f7.f64 = double(temp.f32);
	// lfs f10,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f6,f7,f11
	ctx.f6.f64 = double(float(ctx.f7.f64 - ctx.f11.f64));
	// lfs f5,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f4,f5,f10
	ctx.f4.f64 = double(float(ctx.f5.f64 - ctx.f10.f64));
	// lfs f9,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f12,f8,f0,f13
	ctx.f12.f64 = double(float(ctx.f8.f64 * ctx.f0.f64 + ctx.f13.f64));
	// stfs f12,112(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmadds f13,f6,f0,f11
	ctx.f13.f64 = double(float(ctx.f6.f64 * ctx.f0.f64 + ctx.f11.f64));
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fmadds f0,f4,f0,f10
	ctx.f0.f64 = double(float(ctx.f4.f64 * ctx.f0.f64 + ctx.f10.f64));
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// b 0x82320b58
	goto loc_82320B58;
loc_82320B4C:
	// lfs f0,120(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f12.f64 = double(temp.f32);
loc_82320B58:
	// fsubs f11,f0,f9
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f9.f64));
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// fmadds f10,f11,f21,f22
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f21.f64 + ctx.f22.f64));
	// fsubs f9,f0,f10
	ctx.f9.f64 = double(float(ctx.f0.f64 - ctx.f10.f64));
	// stfs f9,88(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bctrl 
	ctx.lr = 0x82320B9C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,-6632(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -6632);
	// lbz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82320c24
	if (ctx.cr6.eq) goto loc_82320C24;
	// lfs f13,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// lfs f12,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f12.f64 = double(temp.f32);
	// li r8,20
	ctx.r8.s64 = 20;
	// lfs f11,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f11.f64 = double(temp.f32);
	// li r7,0
	ctx.r7.s64 = 0;
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// addi r5,r1,320
	ctx.r5.s64 = ctx.r1.s64 + 320;
	// lfs f10,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f0,f13
	ctx.f9.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f8,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f10,f12
	ctx.f7.f64 = double(float(ctx.f10.f64 - ctx.f12.f64));
	// fsubs f6,f8,f11
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f11.f64));
	// lfs f0,208(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// fmadds f5,f9,f0,f13
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f0.f64 + ctx.f13.f64));
	// stfs f5,320(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 320, temp.u32);
	// fmadds f4,f7,f0,f12
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f0.f64 + ctx.f12.f64));
	// stfs f4,324(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 324, temp.u32);
	// fmadds f3,f6,f0,f11
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f0.f64 + ctx.f11.f64));
	// stfs f3,328(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 328, temp.u32);
	// bl 0x82322800
	ctx.lr = 0x82320C08;
	sub_82322800(ctx, base);
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// li r8,20
	ctx.r8.s64 = 20;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82322800
	ctx.lr = 0x82320C24;
	sub_82322800(ctx, base);
loc_82320C24:
	// lfs f0,208(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f24
	ctx.cr6.compare(ctx.f0.f64, ctx.f24.f64);
	// beq cr6,0x82321010
	if (ctx.cr6.eq) goto loc_82321010;
	// lbz r10,250(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 250);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82320760
	if (ctx.cr6.eq) goto loc_82320760;
	// lfs f13,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// cmpwi cr6,r22,1
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 1, ctx.xer);
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f7,f12,f13
	ctx.f7.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// lfs f12,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// lfs f6,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f6.f64 = double(temp.f32);
	// lfs f11,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f4,f6,f12
	ctx.f4.f64 = double(float(ctx.f6.f64 - ctx.f12.f64));
	// lfs f5,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f3,f5,f11
	ctx.f3.f64 = double(float(ctx.f5.f64 - ctx.f11.f64));
	// lfs f10,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// stfs f10,256(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 256, temp.u32);
	// stfs f9,260(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 260, temp.u32);
	// stfs f8,264(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 264, temp.u32);
	// fmadds f2,f7,f0,f13
	ctx.f2.f64 = double(float(ctx.f7.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fmadds f1,f4,f0,f12
	ctx.f1.f64 = double(float(ctx.f4.f64 * ctx.f0.f64 + ctx.f12.f64));
	// stfs f1,112(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmadds f0,f3,f0,f11
	ctx.f0.f64 = double(float(ctx.f3.f64 * ctx.f0.f64 + ctx.f11.f64));
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// lfs f0,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f13,f2,f31
	ctx.f13.f64 = double(float(ctx.f2.f64 - ctx.f31.f64));
	// stfs f13,120(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lfs f13,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f13.f64 = double(temp.f32);
	// bne cr6,0x82320cb8
	if (!ctx.cr6.eq) goto loc_82320CB8;
	// fsubs f12,f10,f0
	ctx.f12.f64 = double(float(ctx.f10.f64 - ctx.f0.f64));
	// fsubs f10,f9,f13
	ctx.f10.f64 = double(float(ctx.f9.f64 - ctx.f13.f64));
	// fsubs f9,f8,f11
	ctx.f9.f64 = double(float(ctx.f8.f64 - ctx.f11.f64));
	// b 0x82320cc4
	goto loc_82320CC4;
loc_82320CB8:
	// fsubs f12,f0,f10
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f10.f64));
	// fsubs f10,f13,f9
	ctx.f10.f64 = double(float(ctx.f13.f64 - ctx.f9.f64));
	// fsubs f9,f11,f8
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f8.f64));
loc_82320CC4:
	// stfs f9,152(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stfs f10,148(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f12,144(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// bl 0x822d4fb0
	ctx.lr = 0x82320CD8;
	sub_822D4FB0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,2420(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2420);
	ctx.f31.f64 = double(temp.f32);
	// fmuls f29,f1,f31
	ctx.f29.f64 = double(float(ctx.f1.f64 * ctx.f31.f64));
	// fadds f1,f29,f23
	ctx.f1.f64 = double(float(ctx.f29.f64 + ctx.f23.f64));
	// bl 0x823dde20
	ctx.lr = 0x82320CEC;
	sub_823DDE20(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f12,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f12.f64 = double(temp.f32);
	// cmpwi cr6,r22,1
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 1, ctx.xer);
	// lfs f10,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f9.f64 = double(temp.f32);
	// lfs f7,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f7.f64 = double(temp.f32);
	// lfs f30,2412(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2412);
	ctx.f30.f64 = double(temp.f32);
	// fsubs f13,f29,f0
	ctx.f13.f64 = double(float(ctx.f29.f64 - ctx.f0.f64));
	// lfs f0,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f29,f13,f30
	ctx.f29.f64 = double(float(ctx.f13.f64 * ctx.f30.f64));
	// lfs f13,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f13.f64 = double(temp.f32);
	// bne cr6,0x82320d30
	if (!ctx.cr6.eq) goto loc_82320D30;
	// fsubs f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fsubs f8,f10,f12
	ctx.f8.f64 = double(float(ctx.f10.f64 - ctx.f12.f64));
	// fsubs f6,f7,f9
	ctx.f6.f64 = double(float(ctx.f7.f64 - ctx.f9.f64));
	// b 0x82320d3c
	goto loc_82320D3C;
loc_82320D30:
	// fsubs f11,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fsubs f8,f12,f10
	ctx.f8.f64 = double(float(ctx.f12.f64 - ctx.f10.f64));
	// fsubs f6,f9,f7
	ctx.f6.f64 = double(float(ctx.f9.f64 - ctx.f7.f64));
loc_82320D3C:
	// stfs f6,152(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stfs f8,148(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f11,144(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// bl 0x822d4fb0
	ctx.lr = 0x82320D50;
	sub_822D4FB0(ctx, base);
	// fmuls f31,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f1.f64 * ctx.f31.f64));
	// fadds f1,f31,f23
	ctx.f1.f64 = double(float(ctx.f31.f64 + ctx.f23.f64));
	// bl 0x823dde20
	ctx.lr = 0x82320D5C;
	sub_823DDE20(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fadds f13,f29,f19
	ctx.f13.f64 = double(float(ctx.f29.f64 + ctx.f19.f64));
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// fsubs f12,f31,f0
	ctx.f12.f64 = double(float(ctx.f31.f64 - ctx.f0.f64));
	// fmuls f11,f12,f30
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f30.f64));
	// fsubs f10,f13,f11
	ctx.f10.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// fsel f30,f10,f11,f13
	ctx.f30.f64 = ctx.f10.f64 >= 0.0 ? ctx.f11.f64 : ctx.f13.f64;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// bl 0x820d52c0
	ctx.lr = 0x82320D80;
	sub_820D52C0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f0,-30900(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -30900);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x82320da0
	if (ctx.cr6.lt) goto loc_82320DA0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,8888(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8888);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x82320da4
	if (!ctx.cr6.gt) goto loc_82320DA4;
loc_82320DA0:
	// li r21,0
	ctx.r21.s64 = 0;
loc_82320DA4:
	// lis r11,-31834
	ctx.r11.s64 = -2086273024;
	// lwz r11,-6624(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6624);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82320df4
	if (ctx.cr6.eq) goto loc_82320DF4;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// li r8,20
	ctx.r8.s64 = 20;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82322800
	ctx.lr = 0x82320DD4;
	sub_82322800(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r8,20
	ctx.r8.s64 = 20;
	// addi r6,r11,-2232
	ctx.r6.s64 = ctx.r11.s64 + -2232;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82322800
	ctx.lr = 0x82320DF4;
	sub_82322800(ctx, base);
loc_82320DF4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,264(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 264);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f13.f64 = double(temp.f32);
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// lfs f12,256(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	ctx.f12.f64 = double(temp.f32);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// lfs f11,260(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	ctx.f11.f64 = double(temp.f32);
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// lfs f10,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f10.f64 = double(temp.f32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lfs f31,7324(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7324);
	ctx.f31.f64 = double(temp.f32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lfs f9,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f9.f64 = double(temp.f32);
	// fadds f8,f0,f31
	ctx.f8.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// fadds f7,f13,f31
	ctx.f7.f64 = double(float(ctx.f13.f64 + ctx.f31.f64));
	// stfs f20,160(r1)
	temp.f32 = float(ctx.f20.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f20,164(r1)
	temp.f32 = float(ctx.f20.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// stfs f20,168(r1)
	temp.f32 = float(ctx.f20.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// stfs f20,172(r1)
	temp.f32 = float(ctx.f20.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// stfs f20,176(r1)
	temp.f32 = float(ctx.f20.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stfs f20,180(r1)
	temp.f32 = float(ctx.f20.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f11,100(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f8,104(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f10,80(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f9,84(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f7,88(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bctrl 
	ctx.lr = 0x82320E6C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,-6632(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -6632);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82320ef4
	if (ctx.cr6.eq) goto loc_82320EF4;
	// lfs f13,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// lfs f12,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f12.f64 = double(temp.f32);
	// li r8,20
	ctx.r8.s64 = 20;
	// lfs f11,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f11.f64 = double(temp.f32);
	// li r7,0
	ctx.r7.s64 = 0;
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// addi r5,r1,288
	ctx.r5.s64 = ctx.r1.s64 + 288;
	// lfs f10,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f0,f13
	ctx.f9.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f8,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f10,f12
	ctx.f7.f64 = double(float(ctx.f10.f64 - ctx.f12.f64));
	// fsubs f6,f8,f11
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f11.f64));
	// lfs f0,208(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// fmadds f5,f9,f0,f13
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f0.f64 + ctx.f13.f64));
	// stfs f5,288(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 288, temp.u32);
	// fmadds f4,f7,f0,f12
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f0.f64 + ctx.f12.f64));
	// stfs f4,292(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 292, temp.u32);
	// fmadds f3,f6,f0,f11
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f0.f64 + ctx.f11.f64));
	// stfs f3,296(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 296, temp.u32);
	// bl 0x82322800
	ctx.lr = 0x82320ED8;
	sub_82322800(ctx, base);
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// li r8,20
	ctx.r8.s64 = 20;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82322800
	ctx.lr = 0x82320EF4;
	sub_82322800(ctx, base);
loc_82320EF4:
	// lfs f0,208(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f24
	ctx.cr6.compare(ctx.f0.f64, ctx.f24.f64);
	// bge cr6,0x82320f04
	if (!ctx.cr6.lt) goto loc_82320F04;
	// li r21,0
	ctx.r21.s64 = 0;
loc_82320F04:
	// lfs f0,120(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f0.f64 = double(temp.f32);
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f0,f31
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// lfs f11,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f11.f64 = double(temp.f32);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// lfs f10,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f10.f64 = double(temp.f32);
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// lfs f9,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f9.f64 = double(temp.f32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lfs f8,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f8.f64 = double(temp.f32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// stfs f11,100(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// stfs f10,104(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f9,80(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f8,84(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bctrl 
	ctx.lr = 0x82320F58;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,-6632(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -6632);
	// lbz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82320fe0
	if (ctx.cr6.eq) goto loc_82320FE0;
	// lfs f13,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// lfs f12,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f12.f64 = double(temp.f32);
	// li r8,20
	ctx.r8.s64 = 20;
	// lfs f11,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f11.f64 = double(temp.f32);
	// li r7,0
	ctx.r7.s64 = 0;
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// addi r5,r1,304
	ctx.r5.s64 = ctx.r1.s64 + 304;
	// lfs f10,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f0,f13
	ctx.f9.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f8,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f10,f12
	ctx.f7.f64 = double(float(ctx.f10.f64 - ctx.f12.f64));
	// fsubs f6,f8,f11
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f11.f64));
	// lfs f0,208(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// fmadds f5,f9,f0,f13
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f0.f64 + ctx.f13.f64));
	// stfs f5,304(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 304, temp.u32);
	// fmadds f4,f7,f0,f12
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f0.f64 + ctx.f12.f64));
	// stfs f4,308(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 308, temp.u32);
	// fmadds f3,f6,f0,f11
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f0.f64 + ctx.f11.f64));
	// stfs f3,312(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 312, temp.u32);
	// bl 0x82322800
	ctx.lr = 0x82320FC4;
	sub_82322800(ctx, base);
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// li r8,20
	ctx.r8.s64 = 20;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82322800
	ctx.lr = 0x82320FE0;
	sub_82322800(ctx, base);
loc_82320FE0:
	// lfs f0,208(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f24
	ctx.cr6.compare(ctx.f0.f64, ctx.f24.f64);
	// bge cr6,0x82320ff0
	if (!ctx.cr6.lt) goto loc_82320FF0;
	// li r21,0
	ctx.r21.s64 = 0;
loc_82320FF0:
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// beq cr6,0x82320ffc
	if (ctx.cr6.eq) goto loc_82320FFC;
	// stfs f29,0(r19)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r19.u32 + 0, temp.u32);
loc_82320FFC:
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 0, ctx.xer);
	// beq cr6,0x82321008
	if (ctx.cr6.eq) goto loc_82321008;
	// stfs f30,0(r18)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r18.u32 + 0, temp.u32);
loc_82321008:
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// bne cr6,0x82321030
	if (!ctx.cr6.eq) goto loc_82321030;
loc_82321010:
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// bne cr6,0x82320760
	if (!ctx.cr6.eq) goto loc_82320760;
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// beq cr6,0x82321024
	if (ctx.cr6.eq) goto loc_82321024;
	// stfs f20,0(r19)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f20.f64);
	PPC_STORE_U32(ctx.r19.u32 + 0, temp.u32);
loc_82321024:
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 0, ctx.xer);
	// beq cr6,0x82321030
	if (ctx.cr6.eq) goto loc_82321030;
	// stfs f20,0(r18)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f20.f64);
	PPC_STORE_U32(ctx.r18.u32 + 0, temp.u32);
loc_82321030:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,608
	ctx.r1.s64 = ctx.r1.s64 + 608;
	// addi r12,r1,-120
	ctx.r12.s64 = ctx.r1.s64 + -120;
	// bl 0x823de050
	ctx.lr = 0x82321040;
	__restfpr_19(ctx, base);
	// b 0x823ddfa0
	__restgprlr_18(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82320340) {
	__imp__sub_82320340(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82321044) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82321044) {
	__imp__sub_82321044(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82321048) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82321050;
	__savegprlr_28(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// lfs f13,404(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 404);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r3,404
	ctx.r3.s64 = ctx.r3.s64 + 404;
	// lfs f0,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x823210a4
	if (!ctx.cr6.eq) goto loc_823210A4;
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x823210a4
	if (!ctx.cr6.eq) goto loc_823210A4;
	// lfs f13,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x823210a4
	if (!ctx.cr6.eq) goto loc_823210A4;
	// addi r3,r31,264
	ctx.r3.s64 = ctx.r31.s64 + 264;
	// bl 0x822da518
	ctx.lr = 0x8232109C;
	sub_822DA518(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_823210A4:
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// bl 0x822da650
	ctx.lr = 0x823210AC;
	sub_822DA650(ctx, base);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r31,264
	ctx.r3.s64 = ctx.r31.s64 + 264;
	// bl 0x822da650
	ctx.lr = 0x823210B8;
	sub_822DA650(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x822d5c30
	ctx.lr = 0x823210C8;
	sub_822D5C30(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x823210e8
	if (ctx.cr6.eq) goto loc_823210E8;
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
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// stfs f13,4(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// stfs f12,8(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
loc_823210E8:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82321114
	if (ctx.cr6.eq) goto loc_82321114;
	// lfs f0,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// fneg f12,f0
	ctx.f12.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// lfs f11,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f11.f64 = double(temp.f32);
	// fneg f10,f13
	ctx.f10.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fneg f9,f11
	ctx.f9.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// stfs f12,0(r29)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// stfs f10,4(r29)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r29.u32 + 4, temp.u32);
	// stfs f9,8(r29)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r29.u32 + 8, temp.u32);
loc_82321114:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82321134
	if (ctx.cr6.eq) goto loc_82321134;
	// lfs f0,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,0(r28)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
	// stfs f13,4(r28)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r28.u32 + 4, temp.u32);
	// stfs f12,8(r28)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r28.u32 + 8, temp.u32);
loc_82321134:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82321048) {
	__imp__sub_82321048(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8232113C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8232113C) {
	__imp__sub_8232113C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82321140) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// bl 0x822da650
	ctx.lr = 0x8232115C;
	sub_822DA650(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x822d6378
	ctx.lr = 0x82321168;
	sub_822D6378(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822da650
	ctx.lr = 0x82321174;
	sub_822DA650(ctx, base);
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x822d5c30
	ctx.lr = 0x82321184;
	sub_822D5C30(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x822d7c78
	ctx.lr = 0x82321190;
	sub_822D7C78(ctx, base);
	// lfs f0,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// fneg f13,f0
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f13,8(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82321140) {
	__imp__sub_82321140(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823211B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x823211B8;
	__savegprlr_25(ctx, base);
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x823de010
	ctx.lr = 0x823211C0;
	__savefpr_22(ctx, base);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,471(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 471);
	// lis r10,-32190
	ctx.r10.s64 = -2109603840;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// fmr f30,f2
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f2.f64;
	// addi r8,r10,-32512
	ctx.r8.s64 = ctx.r10.s64 + -32512;
	// fmr f28,f4
	ctx.f28.f64 = ctx.f4.f64;
	// rotlwi r7,r11,3
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r11.u32, 3);
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// lwz r9,476(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 476);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lwzx r29,r7,r8
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// bne cr6,0x82321208
	if (!ctx.cr6.eq) goto loc_82321208;
	// lis r28,129
	ctx.r28.s64 = 8454144;
	// ori r28,r28,17
	ctx.r28.u64 = ctx.r28.u64 | 17;
	// b 0x82321210
	goto loc_82321210;
loc_82321208:
	// lis r28,130
	ctx.r28.s64 = 8519680;
	// ori r28,r28,21
	ctx.r28.u64 = ctx.r28.u64 | 21;
loc_82321210:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// lfs f0,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// beq cr6,0x82321224
	if (ctx.cr6.eq) goto loc_82321224;
	// stfs f0,0(r26)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r26.u32 + 0, temp.u32);
loc_82321224:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82321230
	if (ctx.cr6.eq) goto loc_82321230;
	// stfs f0,0(r25)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r25.u32 + 0, temp.u32);
loc_82321230:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r27,492(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 492);
	// stfs f0,144(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// fmr f1,f3
	ctx.f1.f64 = ctx.f3.f64;
	// stfs f0,148(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// cmpwi cr6,r27,1
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 1, ctx.xer);
	// stfs f0,152(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// lfs f31,23112(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 23112);
	ctx.f31.f64 = double(temp.f32);
	// stfs f31,156(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// stfs f31,160(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f31,164(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// bne cr6,0x8232126c
	if (!ctx.cr6.eq) goto loc_8232126C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,5812(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5812);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f1,f3,f0
	ctx.f1.f64 = double(float(ctx.f3.f64 - ctx.f0.f64));
loc_8232126C:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// bl 0x822d52c8
	ctx.lr = 0x82321278;
	sub_822D52C8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,136(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f12.f64 = double(temp.f32);
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// lfs f13,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// lfs f11,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// lfs f10,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f10.f64 = double(temp.f32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lfs f0,7640(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7640);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// fmadds f13,f12,f0,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f13.f64));
	// lfs f9,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f12,f10,f0,f11
	ctx.f12.f64 = double(float(ctx.f10.f64 * ctx.f0.f64 + ctx.f11.f64));
	// fmadds f0,f8,f0,f9
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f0.f64 + ctx.f9.f64));
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fadds f7,f13,f30
	ctx.f7.f64 = double(float(ctx.f13.f64 + ctx.f30.f64));
	// stfs f7,88(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fsubs f6,f13,f30
	ctx.f6.f64 = double(float(ctx.f13.f64 - ctx.f30.f64));
	// stfs f6,104(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bctrl 
	ctx.lr = 0x823212E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f13,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// lfs f5,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f5.f64 = double(temp.f32);
	// lbz r9,217(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 217);
	// fsubs f4,f5,f13
	ctx.f4.f64 = double(float(ctx.f5.f64 - ctx.f13.f64));
	// lfs f0,176(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lfs f11,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f11.f64 = double(temp.f32);
	// lfs f3,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f2.f64 = double(temp.f32);
	// fsubs f1,f3,f12
	ctx.f1.f64 = double(float(ctx.f3.f64 - ctx.f12.f64));
	// fsubs f10,f2,f11
	ctx.f10.f64 = double(float(ctx.f2.f64 - ctx.f11.f64));
	// fmadds f9,f4,f0,f13
	ctx.f9.f64 = double(float(ctx.f4.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fmadds f26,f1,f0,f12
	ctx.f26.f64 = double(float(ctx.f1.f64 * ctx.f0.f64 + ctx.f12.f64));
	// fmadds f25,f10,f0,f11
	ctx.f25.f64 = double(float(ctx.f10.f64 * ctx.f0.f64 + ctx.f11.f64));
	// fsubs f29,f9,f31
	ctx.f29.f64 = double(float(ctx.f9.f64 - ctx.f31.f64));
	// bne cr6,0x82321334
	if (!ctx.cr6.eq) goto loc_82321334;
	// lbz r10,216(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 216);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82321338
	if (ctx.cr6.eq) goto loc_82321338;
loc_82321334:
	// lfs f29,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f29.f64 = double(temp.f32);
loc_82321338:
	// fsubs f13,f28,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f28.f64 - ctx.f31.f64));
	// lfs f12,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f29,f30
	ctx.f10.f64 = double(float(ctx.f29.f64 - ctx.f30.f64));
	// lfs f9,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// lfs f7,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f7.f64 = double(temp.f32);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// lfs f8,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// lfs f6,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f6.f64 = double(temp.f32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stfs f10,104(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// fmadds f5,f11,f13,f12
	ctx.f5.f64 = double(float(ctx.f11.f64 * ctx.f13.f64 + ctx.f12.f64));
	// fmadds f0,f13,f7,f9
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f7.f64 + ctx.f9.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmadds f13,f6,f13,f8
	ctx.f13.f64 = double(float(ctx.f6.f64 * ctx.f13.f64 + ctx.f8.f64));
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fadds f4,f5,f30
	ctx.f4.f64 = double(float(ctx.f5.f64 + ctx.f30.f64));
	// stfs f4,88(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bctrl 
	ctx.lr = 0x823213A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f13,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// lfs f3,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f3.f64 = double(temp.f32);
	// lbz r10,217(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 217);
	// fsubs f2,f3,f13
	ctx.f2.f64 = double(float(ctx.f3.f64 - ctx.f13.f64));
	// lfs f0,176(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lfs f11,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f11.f64 = double(temp.f32);
	// lfs f1,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f1.f64 = double(temp.f32);
	// lfs f10,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f1,f12
	ctx.f9.f64 = double(float(ctx.f1.f64 - ctx.f12.f64));
	// fsubs f8,f10,f11
	ctx.f8.f64 = double(float(ctx.f10.f64 - ctx.f11.f64));
	// fmadds f7,f2,f0,f13
	ctx.f7.f64 = double(float(ctx.f2.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fmadds f23,f9,f0,f12
	ctx.f23.f64 = double(float(ctx.f9.f64 * ctx.f0.f64 + ctx.f12.f64));
	// fmadds f22,f8,f0,f11
	ctx.f22.f64 = double(float(ctx.f8.f64 * ctx.f0.f64 + ctx.f11.f64));
	// fsubs f31,f7,f31
	ctx.f31.f64 = double(float(ctx.f7.f64 - ctx.f31.f64));
	// bne cr6,0x823213f0
	if (!ctx.cr6.eq) goto loc_823213F0;
	// lbz r10,216(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 216);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823213f4
	if (ctx.cr6.eq) goto loc_823213F4;
loc_823213F0:
	// lfs f31,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f31.f64 = double(temp.f32);
loc_823213F4:
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// cmpwi cr6,r27,1
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 1, ctx.xer);
	// lfs f13,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// bne cr6,0x82321418
	if (!ctx.cr6.eq) goto loc_82321418;
	// fsubs f0,f0,f26
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f26.f64));
	// fsubs f13,f13,f25
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f25.f64));
	// fsubs f12,f12,f29
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f29.f64));
	// b 0x82321424
	goto loc_82321424;
loc_82321418:
	// fsubs f0,f26,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f26.f64 - ctx.f0.f64));
	// fsubs f13,f25,f13
	ctx.f13.f64 = double(float(ctx.f25.f64 - ctx.f13.f64));
	// fsubs f12,f29,f12
	ctx.f12.f64 = double(float(ctx.f29.f64 - ctx.f12.f64));
loc_82321424:
	// stfs f12,120(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// bl 0x822d4fb0
	ctx.lr = 0x82321438;
	sub_822D4FB0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f30,2420(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2420);
	ctx.f30.f64 = double(temp.f32);
	// fmuls f24,f1,f30
	ctx.f24.f64 = double(float(ctx.f1.f64 * ctx.f30.f64));
	// lfs f28,2416(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2416);
	ctx.f28.f64 = double(temp.f32);
	// fadds f1,f24,f28
	ctx.f1.f64 = double(float(ctx.f24.f64 + ctx.f28.f64));
	// bl 0x823dde20
	ctx.lr = 0x82321454;
	sub_823DDE20(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// cmpwi cr6,r27,1
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 1, ctx.xer);
	// lfs f27,2412(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2412);
	ctx.f27.f64 = double(temp.f32);
	// fsubs f13,f24,f0
	ctx.f13.f64 = double(float(ctx.f24.f64 - ctx.f0.f64));
	// fmuls f24,f13,f27
	ctx.f24.f64 = double(float(ctx.f13.f64 * ctx.f27.f64));
	// bne cr6,0x82321480
	if (!ctx.cr6.eq) goto loc_82321480;
	// fsubs f0,f26,f23
	ctx.f0.f64 = double(float(ctx.f26.f64 - ctx.f23.f64));
	// fsubs f13,f25,f22
	ctx.f13.f64 = double(float(ctx.f25.f64 - ctx.f22.f64));
	// fsubs f12,f29,f31
	ctx.f12.f64 = double(float(ctx.f29.f64 - ctx.f31.f64));
	// b 0x8232148c
	goto loc_8232148C;
loc_82321480:
	// fsubs f0,f23,f26
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f23.f64 - ctx.f26.f64));
	// fsubs f13,f22,f25
	ctx.f13.f64 = double(float(ctx.f22.f64 - ctx.f25.f64));
	// fsubs f12,f31,f29
	ctx.f12.f64 = double(float(ctx.f31.f64 - ctx.f29.f64));
loc_8232148C:
	// stfs f12,120(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// bl 0x822d4fb0
	ctx.lr = 0x823214A0;
	sub_822D4FB0(ctx, base);
	// fmuls f31,f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f1.f64 * ctx.f30.f64));
	// fadds f1,f31,f28
	ctx.f1.f64 = double(float(ctx.f31.f64 + ctx.f28.f64));
	// bl 0x823dde20
	ctx.lr = 0x823214AC;
	sub_823DDE20(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fsubs f13,f31,f0
	ctx.f13.f64 = double(float(ctx.f31.f64 - ctx.f0.f64));
	// fmuls f31,f13,f27
	ctx.f31.f64 = double(float(ctx.f13.f64 * ctx.f27.f64));
	// fsubs f12,f24,f31
	ctx.f12.f64 = double(float(ctx.f24.f64 - ctx.f31.f64));
	// fmuls f29,f12,f30
	ctx.f29.f64 = double(float(ctx.f12.f64 * ctx.f30.f64));
	// fadds f1,f29,f28
	ctx.f1.f64 = double(float(ctx.f29.f64 + ctx.f28.f64));
	// bl 0x823dde20
	ctx.lr = 0x823214C8;
	sub_823DDE20(ctx, base);
	// frsp f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64));
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f0,-30900(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -30900);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f10,f29,f11
	ctx.f10.f64 = double(float(ctx.f29.f64 - ctx.f11.f64));
	// fmuls f13,f10,f27
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f27.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x823214f4
	if (ctx.cr6.lt) goto loc_823214F4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,8888(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8888);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82321510
	if (!ctx.cr6.gt) goto loc_82321510;
loc_823214F4:
	// fsubs f0,f24,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f24.f64 - ctx.f0.f64));
	// fmuls f31,f0,f30
	ctx.f31.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// fadds f1,f31,f28
	ctx.f1.f64 = double(float(ctx.f31.f64 + ctx.f28.f64));
	// bl 0x823dde20
	ctx.lr = 0x82321504;
	sub_823DDE20(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// fsubs f12,f31,f13
	ctx.f12.f64 = double(float(ctx.f31.f64 - ctx.f13.f64));
	// fmuls f31,f12,f27
	ctx.f31.f64 = double(float(ctx.f12.f64 * ctx.f27.f64));
loc_82321510:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x8232151c
	if (ctx.cr6.eq) goto loc_8232151C;
	// stfs f24,0(r26)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r26.u32 + 0, temp.u32);
loc_8232151C:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// beq cr6,0x8232152c
	if (ctx.cr6.eq) goto loc_8232152C;
	// stfs f31,0(r25)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r25.u32 + 0, temp.u32);
loc_8232152C:
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x823de05c
	ctx.lr = 0x82321538;
	__restfpr_22(ctx, base);
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823211B0) {
	__imp__sub_823211B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8232153C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8232153C) {
	__imp__sub_8232153C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82321540) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// subf r11,r11,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r11.s64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x823215ac
	if (!ctx.cr6.gt) goto loc_823215AC;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x823215ac
	if (!ctx.cr6.lt) goto loc_823215AC;
	// rlwinm r9,r11,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// lfs f0,24(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// lfs f13,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// std r10,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// lfd f11,-16(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// and r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 & ctx.r11.u64;
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// extsw r7,r8
	ctx.r7.s64 = ctx.r8.s32;
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// std r7,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r7.u64);
	// lfd f8,-16(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// frsp f6,f7
	ctx.f6.f64 = double(float(ctx.f7.f64));
	// fdivs f5,f6,f9
	ctx.f5.f64 = double(float(ctx.f6.f64 / ctx.f9.f64));
	// fmadds f4,f5,f12,f0
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f12.f64 + ctx.f0.f64));
	// stfs f4,0(r5)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// blr 
	return;
loc_823215AC:
	// lfs f0,20(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82321540) {
	__imp__sub_82321540(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823215B8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// lwz r10,60(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// subf r11,r11,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r11.s64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82321730
	if (!ctx.cr6.gt) goto loc_82321730;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82321730
	if (!ctx.cr6.lt) goto loc_82321730;
	// rlwinm r9,r11,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// lbz r8,52(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 52);
	// lbz r6,48(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 48);
	// extsw r7,r10
	ctx.r7.s64 = ctx.r10.s32;
	// addi r4,r9,-1
	ctx.r4.s64 = ctx.r9.s64 + -1;
	// std r7,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r7.u64);
	// subf r6,r8,r6
	ctx.r6.s64 = ctx.r6.s64 - ctx.r8.s64;
	// and r9,r4,r11
	ctx.r9.u64 = ctx.r4.u64 & ctx.r11.u64;
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// std r8,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r8.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// extsw r7,r9
	ctx.r7.s64 = ctx.r9.s32;
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// extsw r4,r6
	ctx.r4.s64 = ctx.r6.s32;
	// fcfid f10,f13
	ctx.f10.f64 = double(ctx.f13.s64);
	// std r7,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r7.u64);
	// lfd f11,-16(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// std r4,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r4.u64);
	// lfd f8,-16(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f6,f11
	ctx.f6.f64 = double(ctx.f11.s64);
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// frsp f9,f12
	ctx.f9.f64 = double(float(ctx.f12.f64));
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// frsp f3,f6
	ctx.f3.f64 = double(float(ctx.f6.f64));
	// frsp f5,f10
	ctx.f5.f64 = double(float(ctx.f10.f64));
	// frsp f4,f7
	ctx.f4.f64 = double(float(ctx.f7.f64));
	// fdivs f2,f3,f9
	ctx.f2.f64 = double(float(ctx.f3.f64 / ctx.f9.f64));
	// fmadds f1,f4,f2,f5
	ctx.f1.f64 = double(float(ctx.f4.f64 * ctx.f2.f64 + ctx.f5.f64));
	// fctidz f0,f1
	ctx.f0.s64 = (ctx.f1.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f0.u64);
	// lbz r11,-9(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + -9);
	// stb r11,0(r5)
	PPC_STORE_U8(ctx.r5.u32 + 0, ctx.r11.u8);
	// lbz r10,53(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 53);
	// lbz r9,49(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 49);
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// subf r7,r10,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r10.s64;
	// extsw r6,r7
	ctx.r6.s64 = ctx.r7.s32;
	// std r10,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// std r6,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r6.u64);
	// lfd f11,-16(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// frsp f8,f12
	ctx.f8.f64 = double(float(ctx.f12.f64));
	// fmadds f7,f9,f2,f8
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f2.f64 + ctx.f8.f64));
	// fctidz f6,f7
	ctx.f6.s64 = (ctx.f7.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f7.f64));
	// stfd f6,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f6.u64);
	// lbz r4,-9(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + -9);
	// stb r4,1(r5)
	PPC_STORE_U8(ctx.r5.u32 + 1, ctx.r4.u8);
	// lbz r11,54(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 54);
	// lbz r10,50(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 50);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// extsw r7,r8
	ctx.r7.s64 = ctx.r8.s32;
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f5,-16(r1)
	ctx.f5.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f4,f5
	ctx.f4.f64 = double(ctx.f5.s64);
	// std r7,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r7.u64);
	// lfd f3,-16(r1)
	ctx.f3.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f1,f3
	ctx.f1.f64 = double(ctx.f3.s64);
	// frsp f0,f1
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// frsp f13,f4
	ctx.f13.f64 = double(float(ctx.f4.f64));
	// fmadds f12,f0,f2,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f2.f64 + ctx.f13.f64));
	// fctidz f11,f12
	ctx.f11.s64 = (ctx.f12.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f11.u64);
	// lbz r6,-9(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + -9);
	// stb r6,2(r5)
	PPC_STORE_U8(ctx.r5.u32 + 2, ctx.r6.u8);
	// lbz r4,55(r3)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r3.u32 + 55);
	// lbz r3,51(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 51);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// subf r10,r4,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r4.s64;
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// std r4,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r4.u64);
	// lfd f10,-16(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// std r9,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r9.u64);
	// lfd f8,-16(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// frsp f6,f7
	ctx.f6.f64 = double(float(ctx.f7.f64));
	// frsp f5,f9
	ctx.f5.f64 = double(float(ctx.f9.f64));
	// fmadds f4,f6,f2,f5
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f2.f64 + ctx.f5.f64));
	// fctidz f3,f4
	ctx.f3.s64 = (ctx.f4.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f4.f64));
	// stfd f3,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f3.u64);
	// lbz r8,-9(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + -9);
	// stb r8,3(r5)
	PPC_STORE_U8(ctx.r5.u32 + 3, ctx.r8.u8);
	// blr 
	return;
loc_82321730:
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823215B8) {
	__imp__sub_823215B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8232173C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8232173C) {
	__imp__sub_8232173C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82321740) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82321748;
	__savegprlr_28(ctx, base);
	// stwu r1,-576(r1)
	ea = -576 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// ori r30,r11,32768
	ctx.r30.u64 = ctx.r11.u64 | 32768;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822db808
	ctx.lr = 0x82321764;
	sub_822DB808(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822db8f0
	ctx.lr = 0x8232176C;
	sub_822DB8F0(ctx, base);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r5,r10,-27216
	ctx.r5.s64 = ctx.r10.s64 + -27216;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822e8368
	ctx.lr = 0x82321788;
	sub_822E8368(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8227ff50
	ctx.lr = 0x82321798;
	sub_8227FF50(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823217fc
	if (!ctx.cr6.eq) goto loc_823217FC;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-18340
	ctx.r4.s64 = ctx.r11.s64 + -18340;
	// li r3,17
	ctx.r3.s64 = 17;
	// bl 0x82280b08
	ctx.lr = 0x823217B8;
	sub_82280B08(ctx, base);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r3,r10,-27236
	ctx.r3.s64 = ctx.r10.s64 + -27236;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8227ff50
	ctx.lr = 0x823217CC;
	sub_8227FF50(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823217fc
	if (!ctx.cr6.eq) goto loc_823217FC;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r3,17
	ctx.r3.s64 = 17;
	// addi r4,r11,-27328
	ctx.r4.s64 = ctx.r11.s64 + -27328;
	// bl 0x82280b08
	ctx.lr = 0x823217E8;
	sub_82280B08(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822db8d8
	ctx.lr = 0x823217F0;
	sub_822DB8D8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,576
	ctx.r1.s64 = ctx.r1.s64 + 576;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_823217FC:
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// li r9,27
	ctx.r9.s64 = 27;
	// addi r11,r11,32320
	ctx.r11.s64 = ctx.r11.s64 + 32320;
	// addi r10,r1,156
	ctx.r10.s64 = ctx.r1.s64 + 156;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82321814:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82321814
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82321814;
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x823619d0
	ctx.lr = 0x82321828;
	sub_823619D0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x82321854
	if (!ctx.cr6.gt) goto loc_82321854;
	// lis r11,-31834
	ctx.r11.s64 = -2086273024;
	// addi r29,r1,264
	ctx.r29.s64 = ctx.r1.s64 + 264;
	// addi r31,r11,-22096
	ctx.r31.s64 = ctx.r11.s64 + -22096;
loc_8232183C:
	// stwu r31,4(r29)
	ea = 4 + ctx.r29.u32;
	PPC_STORE_U32(ea, ctx.r31.u32);
	ctx.r29.u32 = ea;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,80
	ctx.r31.s64 = ctx.r31.s64 + 80;
	// bl 0x823619d0
	ctx.lr = 0x8232184C;
	sub_823619D0(ctx, base);
	// cmpw cr6,r30,r3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x8232183c
	if (ctx.cr6.lt) goto loc_8232183C;
loc_82321854:
	// bl 0x823619d0
	ctx.lr = 0x82321858;
	sub_823619D0(ctx, base);
	// addi r4,r3,27
	ctx.r4.s64 = ctx.r3.s64 + 27;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// bl 0x822e2f60
	ctx.lr = 0x8232186C;
	sub_822E2F60(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822db8d8
	ctx.lr = 0x82321878;
	sub_822DB8D8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,576
	ctx.r1.s64 = ctx.r1.s64 + 576;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82321740) {
	__imp__sub_82321740(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82321884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82321884) {
	__imp__sub_82321884(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82321888) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82321890;
	__savegprlr_28(ctx, base);
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x823de028
	ctx.lr = 0x82321898;
	__savefpr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31834
	ctx.r11.s64 = -2086273024;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,-16936(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16936);
	// lfs f31,5804(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5804);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,12240(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12240);
	ctx.f30.f64 = double(temp.f32);
	// lfs f29,2416(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2416);
	ctx.f29.f64 = double(temp.f32);
	// lfs f0,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f31,f0
	ctx.f13.f64 = double(float(ctx.f31.f64 - ctx.f0.f64));
	// fsel f12,f13,f31,f0
	ctx.f12.f64 = ctx.f13.f64 >= 0.0 ? ctx.f31.f64 : ctx.f0.f64;
	// fmadds f1,f12,f30,f29
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f30.f64 + ctx.f29.f64));
	// bl 0x823dde20
	ctx.lr = 0x823218D4;
	sub_823DDE20(ctx, base);
	// frsp f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64));
	// li r7,4
	ctx.r7.s64 = 4;
	// lis r6,-31834
	ctx.r6.s64 = -2086273024;
	// fctiwz f10,f11
	ctx.f10.s64 = (ctx.f11.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// stfiwx f10,r31,r7
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.f10.u32);
	// lwz r11,-16920(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + -16920);
	// lfs f9,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f31,f9
	ctx.f8.f64 = double(float(ctx.f31.f64 - ctx.f9.f64));
	// fsel f7,f8,f31,f9
	ctx.f7.f64 = ctx.f8.f64 >= 0.0 ? ctx.f31.f64 : ctx.f9.f64;
	// fmadds f1,f7,f30,f29
	ctx.f1.f64 = double(float(ctx.f7.f64 * ctx.f30.f64 + ctx.f29.f64));
	// bl 0x823dde20
	ctx.lr = 0x82321900;
	sub_823DDE20(ctx, base);
	// frsp f6,f1
	ctx.fpscr.disableFlushMode();
	ctx.f6.f64 = double(float(ctx.f1.f64));
	// lis r5,-31834
	ctx.r5.s64 = -2086273024;
	// fctiwz f5,f6
	ctx.f5.s64 = (ctx.f6.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f6.f64));
	// stfiwx f5,0,r31
	PPC_STORE_U32(ctx.r31.u32, ctx.f5.u32);
	// lwz r11,-6384(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + -6384);
	// lfs f4,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f3,f4,f30
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f30.f64));
	// fadds f1,f3,f29
	ctx.f1.f64 = double(float(ctx.f3.f64 + ctx.f29.f64));
	// bl 0x823dde20
	ctx.lr = 0x82321924;
	sub_823DDE20(ctx, base);
	// frsp f2,f1
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = double(float(ctx.f1.f64));
	// li r4,12
	ctx.r4.s64 = 12;
	// lis r3,-31834
	ctx.r3.s64 = -2086273024;
	// fctiwz f1,f2
	ctx.f1.s64 = (ctx.f2.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f2.f64));
	// stfiwx f1,r31,r4
	PPC_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.f1.u32);
	// lwz r11,-6524(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -6524);
	// lfs f0,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f30
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// fadds f1,f13,f29
	ctx.f1.f64 = double(float(ctx.f13.f64 + ctx.f29.f64));
	// bl 0x823dde20
	ctx.lr = 0x8232194C;
	sub_823DDE20(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// li r11,8
	ctx.r11.s64 = 8;
	// lis r10,-31834
	ctx.r10.s64 = -2086273024;
	// lis r9,-31834
	ctx.r9.s64 = -2086273024;
	// fctiwz f11,f12
	ctx.f11.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfiwx f11,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.f11.u32);
	// lwz r11,-16584(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -16584);
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r8,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r8.u32);
	// lwz r11,-6716(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -6716);
	// lfs f10,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f31,f10
	ctx.f9.f64 = double(float(ctx.f31.f64 - ctx.f10.f64));
	// fsel f8,f9,f31,f10
	ctx.f8.f64 = ctx.f9.f64 >= 0.0 ? ctx.f31.f64 : ctx.f10.f64;
	// fmadds f1,f8,f30,f29
	ctx.f1.f64 = double(float(ctx.f8.f64 * ctx.f30.f64 + ctx.f29.f64));
	// bl 0x823dde20
	ctx.lr = 0x82321988;
	sub_823DDE20(ctx, base);
	// frsp f7,f1
	ctx.fpscr.disableFlushMode();
	ctx.f7.f64 = double(float(ctx.f1.f64));
	// li r7,20
	ctx.r7.s64 = 20;
	// lis r6,-31834
	ctx.r6.s64 = -2086273024;
	// lis r4,-31834
	ctx.r4.s64 = -2086273024;
	// lis r10,-31834
	ctx.r10.s64 = -2086273024;
	// lis r9,-31834
	ctx.r9.s64 = -2086273024;
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r3,r31,33
	ctx.r3.s64 = ctx.r31.s64 + 33;
	// fctiwz f6,f7
	ctx.f6.s64 = (ctx.f7.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f7.f64));
	// stfiwx f6,r31,r7
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.f6.u32);
	// lwz r11,-6508(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + -6508);
	// lfs f5,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f4,f31,f5
	ctx.f4.f64 = double(float(ctx.f31.f64 - ctx.f5.f64));
	// fsel f3,f4,f31,f5
	ctx.f3.f64 = ctx.f4.f64 >= 0.0 ? ctx.f31.f64 : ctx.f5.f64;
	// fdivs f2,f31,f3
	ctx.f2.f64 = double(float(ctx.f31.f64 / ctx.f3.f64));
	// stfs f2,24(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// lwz r11,-6440(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + -6440);
	// lfs f1,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,28(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// lwz r11,-6488(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -6488);
	// lbz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// stb r8,32(r31)
	PPC_STORE_U8(ctx.r31.u32 + 32, ctx.r8.u8);
	// lwz r11,-6512(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -6512);
	// lwz r4,12(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x823dfa38
	ctx.lr = 0x823219EC;
	sub_823DFA38(ctx, base);
	// lis r7,-31834
	ctx.r7.s64 = -2086273024;
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r3,r31,97
	ctx.r3.s64 = ctx.r31.s64 + 97;
	// lwz r11,-6664(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + -6664);
	// lwz r4,12(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x823dfa38
	ctx.lr = 0x82321A04;
	sub_823DFA38(ctx, base);
	// lis r6,-31834
	ctx.r6.s64 = -2086273024;
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r3,r31,161
	ctx.r3.s64 = ctx.r31.s64 + 161;
	// lwz r11,-22124(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + -22124);
	// lwz r4,12(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x823dfa38
	ctx.lr = 0x82321A1C;
	sub_823DFA38(ctx, base);
	// lis r4,-31834
	ctx.r4.s64 = -2086273024;
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r3,r31,225
	ctx.r3.s64 = ctx.r31.s64 + 225;
	// lwz r11,-22104(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + -22104);
	// lwz r4,12(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x823dfa38
	ctx.lr = 0x82321A34;
	sub_823DFA38(ctx, base);
	// lis r3,-31834
	ctx.r3.s64 = -2086273024;
	// lwz r11,-6644(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -6644);
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f31,f0
	ctx.f13.f64 = double(float(ctx.f31.f64 - ctx.f0.f64));
	// fsel f12,f13,f31,f0
	ctx.f12.f64 = ctx.f13.f64 >= 0.0 ? ctx.f31.f64 : ctx.f0.f64;
	// fmadds f1,f12,f30,f29
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f30.f64 + ctx.f29.f64));
	// bl 0x823dde20
	ctx.lr = 0x82321A50;
	sub_823DDE20(ctx, base);
	// frsp f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64));
	// li r11,292
	ctx.r11.s64 = 292;
	// lis r10,-31834
	ctx.r10.s64 = -2086273024;
	// fctiwz f10,f11
	ctx.f10.s64 = (ctx.f11.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// stfiwx f10,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.f10.u32);
	// lwz r11,-6612(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -6612);
	// lfs f9,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f31,f9
	ctx.f8.f64 = double(float(ctx.f31.f64 - ctx.f9.f64));
	// fsel f7,f8,f31,f9
	ctx.f7.f64 = ctx.f8.f64 >= 0.0 ? ctx.f31.f64 : ctx.f9.f64;
	// fmadds f1,f7,f30,f29
	ctx.f1.f64 = double(float(ctx.f7.f64 * ctx.f30.f64 + ctx.f29.f64));
	// bl 0x823dde20
	ctx.lr = 0x82321A7C;
	sub_823DDE20(ctx, base);
	// frsp f6,f1
	ctx.fpscr.disableFlushMode();
	ctx.f6.f64 = double(float(ctx.f1.f64));
	// li r9,296
	ctx.r9.s64 = 296;
	// lis r8,-31834
	ctx.r8.s64 = -2086273024;
	// fctiwz f5,f6
	ctx.f5.s64 = (ctx.f6.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f6.f64));
	// stfiwx f5,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.f5.u32);
	// lwz r11,-16604(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -16604);
	// lfs f4,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f3,f31,f4
	ctx.f3.f64 = double(float(ctx.f31.f64 - ctx.f4.f64));
	// fsel f2,f3,f31,f4
	ctx.f2.f64 = ctx.f3.f64 >= 0.0 ? ctx.f31.f64 : ctx.f4.f64;
	// fmadds f1,f2,f30,f29
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f30.f64 + ctx.f29.f64));
	// bl 0x823dde20
	ctx.lr = 0x82321AA8;
	sub_823DDE20(ctx, base);
	// frsp f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64));
	// li r7,584
	ctx.r7.s64 = 584;
	// lis r6,-31834
	ctx.r6.s64 = -2086273024;
	// fctiwz f0,f1
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfiwx f0,r31,r7
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.f0.u32);
	// lwz r11,-6636(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + -6636);
	// lfs f13,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f30
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f30.f64));
	// fadds f1,f12,f29
	ctx.f1.f64 = double(float(ctx.f12.f64 + ctx.f29.f64));
	// bl 0x823dde20
	ctx.lr = 0x82321AD0;
	sub_823DDE20(ctx, base);
	// frsp f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64));
	// li r5,588
	ctx.r5.s64 = 588;
	// lis r4,-31834
	ctx.r4.s64 = -2086273024;
	// fctiwz f10,f11
	ctx.f10.s64 = (ctx.f11.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// stfiwx f10,r31,r5
	PPC_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.f10.u32);
	// lwz r3,-6404(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + -6404);
	// bl 0x822de7f8
	ctx.lr = 0x82321AEC;
	sub_822DE7F8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,308
	ctx.r3.s64 = ctx.r31.s64 + 308;
	// li r5,15
	ctx.r5.s64 = 15;
	// bl 0x823dfa38
	ctx.lr = 0x82321AFC;
	sub_823DFA38(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// lis r3,-31834
	ctx.r3.s64 = -2086273024;
	// stb r30,323(r31)
	PPC_STORE_U8(ctx.r31.u32 + 323, ctx.r30.u8);
	// lis r10,-31834
	ctx.r10.s64 = -2086273024;
	// lis r9,-31834
	ctx.r9.s64 = -2086273024;
	// lwz r11,-16900(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -16900);
	// lfs f9,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,300(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 300, temp.u32);
	// lwz r11,-6560(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -6560);
	// lfs f8,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,304(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 304, temp.u32);
	// lwz r11,-6380(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -6380);
	// lfs f7,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f7,f30
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f30.f64));
	// fadds f1,f6,f29
	ctx.f1.f64 = double(float(ctx.f6.f64 + ctx.f29.f64));
	// bl 0x823dde20
	ctx.lr = 0x82321B3C;
	sub_823DDE20(ctx, base);
	// frsp f5,f1
	ctx.fpscr.disableFlushMode();
	ctx.f5.f64 = double(float(ctx.f1.f64));
	// li r8,580
	ctx.r8.s64 = 580;
	// fctiwz f4,f5
	ctx.f4.s64 = (ctx.f5.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f5.f64));
	// stfiwx f4,r31,r8
	PPC_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.f4.u32);
	// bl 0x823619d0
	ctx.lr = 0x82321B50;
	sub_823619D0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x82321ba4
	if (!ctx.cr6.gt) goto loc_82321BA4;
	// lis r11,-31834
	ctx.r11.s64 = -2086273024;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r11,-16880
	ctx.r11.s64 = ctx.r11.s64 + -16880;
	// addi r28,r31,320
	ctx.r28.s64 = ctx.r31.s64 + 320;
	// addi r29,r11,-4
	ctx.r29.s64 = ctx.r11.s64 + -4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f28,5484(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f28.f64 = double(temp.f32);
	// lfs f31,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f31.f64 = double(temp.f32);
loc_82321B78:
	// lwzu r11,4(r29)
	ea = 4 + ctx.r29.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r29.u32 = ea;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fneg f13,f0
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fsel f12,f13,f28,f0
	ctx.f12.f64 = ctx.f13.f64 >= 0.0 ? ctx.f28.f64 : ctx.f0.f64;
	// fsubs f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f31.f64));
	// fsel f10,f11,f31,f12
	ctx.f10.f64 = ctx.f11.f64 >= 0.0 ? ctx.f31.f64 : ctx.f12.f64;
	// stfsu f10,4(r28)
	ea = 4 + ctx.r28.u32;
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r28.u32 = ea;
	// bl 0x823619d0
	ctx.lr = 0x82321B9C;
	sub_823619D0(ctx, base);
	// cmpw cr6,r30,r3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x82321b78
	if (ctx.cr6.lt) goto loc_82321B78;
loc_82321BA4:
	// lis r11,-31834
	ctx.r11.s64 = -2086273024;
	// lis r10,-31834
	ctx.r10.s64 = -2086273024;
	// lwz r11,-16624(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16624);
	// lbz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// stb r9,592(r31)
	PPC_STORE_U8(ctx.r31.u32 + 592, ctx.r9.u8);
	// lwz r11,-6708(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -6708);
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f30
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// fadds f1,f13,f29
	ctx.f1.f64 = double(float(ctx.f13.f64 + ctx.f29.f64));
	// bl 0x823dde20
	ctx.lr = 0x82321BCC;
	sub_823DDE20(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// li r8,596
	ctx.r8.s64 = 596;
	// lis r7,-31834
	ctx.r7.s64 = -2086273024;
	// lis r6,-31834
	ctx.r6.s64 = -2086273024;
	// lis r5,-31834
	ctx.r5.s64 = -2086273024;
	// lis r4,-31834
	ctx.r4.s64 = -2086273024;
	// fctiwz f11,f12
	ctx.f11.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfiwx f11,r31,r8
	PPC_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.f11.u32);
	// lwz r11,-6444(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + -6444);
	// lfs f10,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,604(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 604, temp.u32);
	// lwz r11,-6596(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + -6596);
	// lfs f9,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,608(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 608, temp.u32);
	// lwz r11,-22136(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + -22136);
	// lfs f8,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,600(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 600, temp.u32);
	// lwz r11,-16888(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + -16888);
	// lbz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// stb r3,612(r31)
	PPC_STORE_U8(ctx.r31.u32 + 612, ctx.r3.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x823de074
	ctx.lr = 0x82321C28;
	__restfpr_28(ctx, base);
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82321888) {
	__imp__sub_82321888(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82321C2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82321C2C) {
	__imp__sub_82321C2C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82321C30) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82321C30) {
	__imp__sub_82321C30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82321C38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31834
	ctx.r11.s64 = -2086273024;
	// mulli r10,r3,616
	ctx.r10.s64 = ctx.r3.s64 * 616;
	// addi r11,r11,-16576
	ctx.r11.s64 = ctx.r11.s64 + -16576;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82321C38) {
	__imp__sub_82321C38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82321C4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82321C4C) {
	__imp__sub_82321C4C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82321C50) {
	PPC_FUNC_PROLOGUE();
	// b 0x822f2758
	sub_822F2758(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82321C50) {
	__imp__sub_82321C50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82321C54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82321C54) {
	__imp__sub_82321C54(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82321C58) {
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
	// lwz r3,692(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 692);
	// bl 0x82332af8
	ctx.lr = 0x82321C6C;
	sub_82332AF8(ctx, base);
	// lis r11,-31834
	ctx.r11.s64 = -2086273024;
	// lfs f13,764(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 764);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,-6420(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6420);
	// lfs f0,12240(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12240);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fctiwz f9,f10
	ctx.f9.s64 = (ctx.f10.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f9.u64);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r3,16383
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 16383, ctx.xer);
	// ble cr6,0x82321ca4
	if (!ctx.cr6.gt) goto loc_82321CA4;
	// li r3,16383
	ctx.r3.s64 = 16383;
loc_82321CA4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82321C58) {
	__imp__sub_82321C58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82321CB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82321CB4) {
	__imp__sub_82321CB4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82321CB8) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82321CB8) {
	__imp__sub_82321CB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82321CC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// extsw r11,r6
	ctx.r11.s64 = ctx.r6.s32;
	// fsubs f12,f3,f2
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f3.f64 - ctx.f2.f64));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fsubs f10,f2,f1
	ctx.f10.f64 = double(float(ctx.f2.f64 - ctx.f1.f64));
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f0,-16(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f11,f13
	ctx.f11.f64 = double(float(ctx.f13.f64));
	// lfs f0,2416(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2416);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f9,f12,f11
	ctx.f9.f64 = double(float(ctx.f12.f64 / ctx.f11.f64));
	// fnmsubs f8,f9,f0,f3
	ctx.f8.f64 = double(float(-(ctx.f9.f64 * ctx.f0.f64 - ctx.f3.f64)));
	// fsubs f7,f1,f8
	ctx.f7.f64 = double(float(ctx.f1.f64 - ctx.f8.f64));
	// fsel f6,f7,f8,f1
	ctx.f6.f64 = ctx.f7.f64 >= 0.0 ? ctx.f8.f64 : ctx.f1.f64;
	// fsel f5,f10,f2,f6
	ctx.f5.f64 = ctx.f10.f64 >= 0.0 ? ctx.f2.f64 : ctx.f6.f64;
	// fsubs f4,f5,f2
	ctx.f4.f64 = double(float(ctx.f5.f64 - ctx.f2.f64));
	// fdivs f3,f4,f9
	ctx.f3.f64 = double(float(ctx.f4.f64 / ctx.f9.f64));
	// fctiwz f2,f3
	ctx.f2.s64 = (ctx.f3.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f3.f64));
	// stfd f2,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f2.u64);
	// lwz r3,-12(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82321CC0) {
	__imp__sub_82321CC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82321D10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31834
	ctx.r11.s64 = -2086273024;
	// lfs f11,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f10,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lis r8,-31834
	ctx.r8.s64 = -2086273024;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r11,-6480(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6480);
	// clrlwi r6,r4,24
	ctx.r6.u64 = ctx.r4.u32 & 0xFF;
	// lfs f13,14156(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 14156);
	ctx.f13.f64 = double(temp.f32);
	// lwz r10,-6452(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + -6452);
	// addic r5,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r5.s64 = ctx.r6.s64 + -1;
	// lfs f12,24332(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 24332);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,2416(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2416);
	ctx.f0.f64 = double(temp.f32);
	// subfe r4,r5,r6
	temp.u8 = (~ctx.r5.u32 + ctx.r6.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r4.u64 = ~ctx.r5.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lfs f9,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f9,f11
	ctx.f7.f64 = double(float(ctx.f9.f64 - ctx.f11.f64));
	// fsubs f6,f8,f9
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f9.f64));
	// lfs f5,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,16(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f3,f5,f10
	ctx.f3.f64 = double(float(ctx.f5.f64 - ctx.f10.f64));
	// fsubs f2,f4,f5
	ctx.f2.f64 = double(float(ctx.f4.f64 - ctx.f5.f64));
	// fmuls f1,f6,f13
	ctx.f1.f64 = double(float(ctx.f6.f64 * ctx.f13.f64));
	// fmuls f13,f2,f12
	ctx.f13.f64 = double(float(ctx.f2.f64 * ctx.f12.f64));
	// fnmsubs f12,f1,f0,f8
	ctx.f12.f64 = double(float(-(ctx.f1.f64 * ctx.f0.f64 - ctx.f8.f64)));
	// fnmsubs f8,f13,f0,f4
	ctx.f8.f64 = double(float(-(ctx.f13.f64 * ctx.f0.f64 - ctx.f4.f64)));
	// fsubs f6,f11,f12
	ctx.f6.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// fsubs f4,f10,f8
	ctx.f4.f64 = double(float(ctx.f10.f64 - ctx.f8.f64));
	// fsel f2,f6,f12,f11
	ctx.f2.f64 = ctx.f6.f64 >= 0.0 ? ctx.f12.f64 : ctx.f11.f64;
	// fsel f0,f4,f8,f10
	ctx.f0.f64 = ctx.f4.f64 >= 0.0 ? ctx.f8.f64 : ctx.f10.f64;
	// fsel f12,f7,f9,f2
	ctx.f12.f64 = ctx.f7.f64 >= 0.0 ? ctx.f9.f64 : ctx.f2.f64;
	// fsel f11,f3,f5,f0
	ctx.f11.f64 = ctx.f3.f64 >= 0.0 ? ctx.f5.f64 : ctx.f0.f64;
	// fsubs f10,f12,f9
	ctx.f10.f64 = double(float(ctx.f12.f64 - ctx.f9.f64));
	// fsubs f9,f11,f5
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f5.f64));
	// fdivs f8,f10,f1
	ctx.f8.f64 = double(float(ctx.f10.f64 / ctx.f1.f64));
	// fdivs f7,f9,f13
	ctx.f7.f64 = double(float(ctx.f9.f64 / ctx.f13.f64));
	// fctiwz f6,f8
	ctx.f6.s64 = (ctx.f8.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f8.f64));
	// stfd f6,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f6.u64);
	// lwz r3,-12(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// fctiwz f5,f7
	ctx.f5.s64 = (ctx.f7.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f7.f64));
	// stfd f5,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f5.u64);
	// lwz r11,-12(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// or r9,r10,r3
	ctx.r9.u64 = ctx.r10.u64 | ctx.r3.u64;
	// rlwinm r8,r9,1,24,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFE;
	// or r3,r8,r4
	ctx.r3.u64 = ctx.r8.u64 | ctx.r4.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82321D10) {
	__imp__sub_82321D10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82321DD0) {
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
	// bl 0x82327df8
	ctx.lr = 0x82321DE8;
	sub_82327DF8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// srawi r10,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 4;
	// addze r9,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r9.s64 = temp.s64;
	// rlwinm r8,r9,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r31,r8,r11
	ctx.r31.s64 = ctx.r11.s64 - ctx.r8.s64;
	// bl 0x82327df8
	ctx.lr = 0x82321E04;
	sub_82327DF8(ctx, base);
	// srawi r6,r3,3
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7) != 0);
	ctx.r6.s64 = ctx.r3.s32 >> 3;
	// rlwinm r7,r31,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// addze r4,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r4.s64 = temp.s64;
	// lis r5,-32191
	ctx.r5.s64 = -2109669376;
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r10,r11,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r11.s64;
	// or r9,r7,r10
	ctx.r9.u64 = ctx.r7.u64 | ctx.r10.u64;
	// lwz r11,32556(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 32556);
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// or r7,r8,r11
	ctx.r7.u64 = ctx.r8.u64 | ctx.r11.u64;
	// clrlwi r3,r7,24
	ctx.r3.u64 = ctx.r7.u32 & 0xFF;
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

PPC_WEAK_FUNC(sub_82321DD0) {
	__imp__sub_82321DD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82321E44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82321E44) {
	__imp__sub_82321E44(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82321E48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// lis r10,-32191
	ctx.r10.s64 = -2109669376;
	// rlwinm r8,r3,28,4,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 28) & 0xFFFFFFF;
	// rlwinm r7,r3,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 31) & 0x7FFFFFFF;
	// clrlwi r9,r3,31
	ctx.r9.u64 = ctx.r3.u32 & 0x1;
	// lwz r11,32564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32564);
	// lwz r10,32560(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32560);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// rlwinm r6,r11,28,4,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// rlwinm r3,r10,31,1,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// and r11,r6,r8
	ctx.r11.u64 = ctx.r6.u64 & ctx.r8.u64;
	// and r10,r3,r7
	ctx.r10.u64 = ctx.r3.u64 & ctx.r7.u64;
	// beq cr6,0x82321e88
	if (ctx.cr6.eq) goto loc_82321E88;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f0,12168(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82321e90
	goto loc_82321E90;
loc_82321E88:
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f0,2424(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2424);
	ctx.f0.f64 = double(temp.f32);
loc_82321E90:
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// stfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lis r8,-31834
	ctx.r8.s64 = -2086273024;
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f12,-16(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// extsw r6,r10
	ctx.r6.s64 = ctx.r10.s32;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// std r6,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r6.u64);
	// lfd f11,-16(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r11,-6424(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -6424);
	// lis r3,-32256
	ctx.r3.s64 = -2113929216;
	// lis r10,-31834
	ctx.r10.s64 = -2086273024;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f13,24332(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 24332);
	ctx.f13.f64 = double(temp.f32);
	// lfs f10,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f9,f10
	ctx.f8.f64 = double(float(ctx.f9.f64 - ctx.f10.f64));
	// fmuls f7,f8,f13
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// lfs f0,2416(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 2416);
	ctx.f0.f64 = double(temp.f32);
	// fcfid f6,f12
	ctx.f6.f64 = double(ctx.f12.s64);
	// lwz r10,-16948(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -16948);
	// fcfid f5,f11
	ctx.f5.f64 = double(ctx.f11.s64);
	// lfs f13,14156(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 14156);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f4,f7,f0
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// frsp f3,f6
	ctx.f3.f64 = double(float(ctx.f6.f64));
	// frsp f2,f5
	ctx.f2.f64 = double(float(ctx.f5.f64));
	// fmadds f1,f3,f7,f4
	ctx.f1.f64 = double(float(ctx.f3.f64 * ctx.f7.f64 + ctx.f4.f64));
	// fadds f12,f1,f10
	ctx.f12.f64 = double(float(ctx.f1.f64 + ctx.f10.f64));
	// stfs f12,4(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// lfs f11,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,16(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f10,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 - ctx.f11.f64));
	// fmuls f8,f9,f13
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// fmuls f7,f8,f0
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fmadds f6,f2,f8,f7
	ctx.f6.f64 = double(float(ctx.f2.f64 * ctx.f8.f64 + ctx.f7.f64));
	// fadds f5,f6,f11
	ctx.f5.f64 = double(float(ctx.f6.f64 + ctx.f11.f64));
	// stfs f5,8(r4)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// stb r9,0(r5)
	PPC_STORE_U8(ctx.r5.u32 + 0, ctx.r9.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82321E48) {
	__imp__sub_82321E48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82321F2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82321F2C) {
	__imp__sub_82321F2C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82321F30) {
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
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,61(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 61);
	// extsw r10,r5
	ctx.r10.s64 = ctx.r5.s32;
	// lbz r9,60(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 60);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// extsb r4,r9
	ctx.r4.s64 = ctx.r9.s8;
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// lfd f10,80(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// frsp f11,f13
	ctx.f11.f64 = double(float(ctx.f13.f64));
	// lis r3,-32255
	ctx.r3.s64 = -2113863680;
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// lfs f13,5804(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 5804);
	ctx.f13.f64 = double(temp.f32);
	// fcfid f7,f12
	ctx.f7.f64 = double(ctx.f12.s64);
	// lis r11,-31834
	ctx.r11.s64 = -2086273024;
	// lis r10,-31834
	ctx.r10.s64 = -2086273024;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f0,-19176(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + -19176);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,-16976(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16976);
	// lwz r10,-16892(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -16892);
	// lfs f12,5484(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5484);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f6,f11,f13
	ctx.f6.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// frsp f5,f7
	ctx.f5.f64 = double(float(ctx.f7.f64));
	// fmuls f13,f8,f0
	ctx.f13.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f4,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f0,f5,f0
	ctx.f0.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmuls f3,f4,f13
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f13.f64));
	// fmuls f2,f3,f6
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f6.f64));
	// stfs f2,80(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f1,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fmuls f13,f0,f6
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f6.f64));
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// bl 0x822da650
	ctx.lr = 0x82321FF8;
	sub_822DA650(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822da650
	ctx.lr = 0x82322004;
	sub_822DA650(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x822d6378
	ctx.lr = 0x82322010;
	sub_822D6378(ctx, base);
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x822d5c30
	ctx.lr = 0x82322020;
	sub_822D5C30(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x822d7c78
	ctx.lr = 0x8232202C;
	sub_822D7C78(ctx, base);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f12,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfs f0,2420(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2420);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f31,f12,f0
	ctx.f31.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f13,2416(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2416);
	ctx.f13.f64 = double(temp.f32);
	// fadds f1,f31,f13
	ctx.f1.f64 = double(float(ctx.f31.f64 + ctx.f13.f64));
	// bl 0x823dde20
	ctx.lr = 0x8232204C;
	sub_823DDE20(ctx, base);
	// frsp f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64));
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r10,-31834
	ctx.r10.s64 = -2086273024;
	// lfs f0,2412(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 2412);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f10,f31,f11
	ctx.f10.f64 = double(float(ctx.f31.f64 - ctx.f11.f64));
	// fmuls f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f9,0(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// lwz r11,-16588(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -16588);
	// lfs f0,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f9,f0
	ctx.cr6.compare(ctx.f9.f64, ctx.f0.f64);
	// ble cr6,0x82322080
	if (!ctx.cr6.gt) goto loc_82322080;
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// lwz r11,-16588(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -16588);
loc_82322080:
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82322094
	if (!ctx.cr6.lt) goto loc_82322094;
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
loc_82322094:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
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

PPC_WEAK_FUNC(sub_82321F30) {
	__imp__sub_82321F30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823220AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823220AC) {
	__imp__sub_823220AC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823220B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stfd f29,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f29.u64);
	// stfd f30,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f30.u64);
	// stfd f31,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// extsw r11,r4
	ctx.r11.s64 = ctx.r4.s32;
	// lis r10,-31834
	ctx.r10.s64 = -2086273024;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lis r9,-31834
	ctx.r9.s64 = -2086273024;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lwz r11,-6628(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -6628);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f11,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// lwz r11,156(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 156);
	// fmuls f10,f11,f12
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// fctiwz f9,f10
	ctx.f9.s64 = (ctx.f10.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f9.u64);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// stw r11,156(r3)
	PPC_STORE_U32(ctx.r3.u32 + 156, ctx.r11.u32);
	// lwz r11,-6540(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -6540);
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f8,80(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// frsp f6,f7
	ctx.f6.f64 = double(float(ctx.f7.f64));
	// lfs f0,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f6,f0
	ctx.cr6.compare(ctx.f6.f64, ctx.f0.f64);
	// ble cr6,0x82322140
	if (!ctx.cr6.gt) goto loc_82322140;
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// li r12,156
	ctx.r12.s64 = 156;
	// stfiwx f0,r3,r12
	PPC_STORE_U32(ctx.r3.u32 + ctx.r12.u32, ctx.f0.u32);
loc_82322140:
	// lwz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// stw r11,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r11.u32);
	// beq cr6,0x82322210
	if (ctx.cr6.eq) goto loc_82322210;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,268(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	ctx.f31.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f30,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f30.f64 = double(temp.f32);
	// lfs f29,2412(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2412);
	ctx.f29.f64 = double(temp.f32);
	// fcmpu cr6,f31,f30
	ctx.cr6.compare(ctx.f31.f64, ctx.f30.f64);
	// bge cr6,0x82322170
	if (!ctx.cr6.lt) goto loc_82322170;
	// fadds f31,f31,f29
	ctx.f31.f64 = double(float(ctx.f31.f64 + ctx.f29.f64));
loc_82322170:
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x822d4ed0
	ctx.lr = 0x82322178;
	sub_822D4ED0(ctx, base);
	// fctiwz f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f31.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f31.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fsubs f0,f1,f11
	ctx.f0.f64 = double(float(ctx.f1.f64 - ctx.f11.f64));
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bge cr6,0x823221a8
	if (!ctx.cr6.lt) goto loc_823221A8;
	// fadds f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f29.f64));
loc_823221A8:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lfs f13,-7108(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -7108);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82322210
	if (!ctx.cr6.lt) goto loc_82322210;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f11,6028(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6028);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// blt cr6,0x82322210
	if (ctx.cr6.lt) goto loc_82322210;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lfs f12,-27200(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27200);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// blt cr6,0x823221f0
	if (ctx.cr6.lt) goto loc_823221F0;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,24828(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24828);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x823221f0
	if (!ctx.cr6.lt) goto loc_823221F0;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82322214
	goto loc_82322214;
loc_823221F0:
	// fcmpu cr6,f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// blt cr6,0x82322208
	if (ctx.cr6.lt) goto loc_82322208;
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x82322208
	if (!ctx.cr6.lt) goto loc_82322208;
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x82322214
	goto loc_82322214;
loc_82322208:
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x82322214
	goto loc_82322214;
loc_82322210:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82322214:
	// stw r11,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f29,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// lfd f30,-32(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// lfd f31,-24(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823220B0) {
	__imp__sub_823220B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82322238) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// rlwinm r9,r11,2,28,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xC;
	// stwx r3,r9,r6
	PPC_STORE_U32(ctx.r9.u32 + ctx.r6.u32, ctx.r3.u32);
	// stwx r4,r9,r7
	PPC_STORE_U32(ctx.r9.u32 + ctx.r7.u32, ctx.r4.u32);
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r8,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82322238) {
	__imp__sub_82322238(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82322260) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// clrlwi r9,r11,30
	ctx.r9.u64 = ctx.r11.u32 & 0x3;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stbx r3,r9,r6
	PPC_STORE_U8(ctx.r9.u32 + ctx.r6.u32, ctx.r3.u8);
	// stwx r4,r8,r7
	PPC_STORE_U32(ctx.r8.u32 + ctx.r7.u32, ctx.r4.u32);
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stw r7,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r7.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82322260) {
	__imp__sub_82322260(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8232228C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8232228C) {
	__imp__sub_8232228C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82322290) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// bl 0x8231f840
	ctx.lr = 0x823222B8;
	sub_8231F840(ctx, base);
	// lfs f0,28(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f12,6060(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6060);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bgt cr6,0x82322330
	if (ctx.cr6.gt) goto loc_82322330;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lfs f13,-27192(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27192);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82322330
	if (ctx.cr6.lt) goto loc_82322330;
	// lfs f0,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bgt cr6,0x82322330
	if (ctx.cr6.gt) goto loc_82322330;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82322330
	if (ctx.cr6.lt) goto loc_82322330;
	// lfs f13,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f13,7640(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7640);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x82322330
	if (ctx.cr6.gt) goto loc_82322330;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f13,-27196(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27196);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82322334
	if (!ctx.cr6.lt) goto loc_82322334;
loc_82322330:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82322334:
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

PPC_WEAK_FUNC(sub_82322290) {
	__imp__sub_82322290(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82322348) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,176(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 176);
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// addi r10,r11,45
	ctx.r10.s64 = ctx.r11.s64 + 45;
	// addi r9,r11,49
	ctx.r9.s64 = ctx.r11.s64 + 49;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r3,r8,r5
	PPC_STORE_U32(ctx.r8.u32 + ctx.r5.u32, ctx.r3.u32);
	// stwx r4,r7,r5
	PPC_STORE_U32(ctx.r7.u32 + ctx.r5.u32, ctx.r4.u32);
	// lwz r11,176(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 176);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// stw r6,176(r5)
	PPC_STORE_U32(ctx.r5.u32 + 176, ctx.r6.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82322348) {
	__imp__sub_82322348(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82322380) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,216(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 216);
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// addi r10,r11,56
	ctx.r10.s64 = ctx.r11.s64 + 56;
	// addi r9,r11,60
	ctx.r9.s64 = ctx.r11.s64 + 60;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r3,r8,r5
	PPC_STORE_U32(ctx.r8.u32 + ctx.r5.u32, ctx.r3.u32);
	// stwx r4,r7,r5
	PPC_STORE_U32(ctx.r7.u32 + ctx.r5.u32, ctx.r4.u32);
	// lwz r11,216(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 216);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// stw r6,216(r5)
	PPC_STORE_U32(ctx.r5.u32 + 216, ctx.r6.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82322380) {
	__imp__sub_82322380(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823223B8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,144(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 144);
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// addi r9,r11,38
	ctx.r9.s64 = ctx.r11.s64 + 38;
	// add r8,r11,r5
	ctx.r8.u64 = ctx.r11.u64 + ctx.r5.u64;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stb r3,148(r8)
	PPC_STORE_U8(ctx.r8.u32 + 148, ctx.r3.u8);
	// stwx r4,r7,r5
	PPC_STORE_U32(ctx.r7.u32 + ctx.r5.u32, ctx.r4.u32);
	// lwz r11,144(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 144);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// stw r6,144(r5)
	PPC_STORE_U32(ctx.r5.u32 + 144, ctx.r6.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823223B8) {
	__imp__sub_823223B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823223EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823223EC) {
	__imp__sub_823223EC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823223F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x823223F8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,0(r7)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82322470
	if (!ctx.cr6.lt) goto loc_82322470;
loc_82322410:
	// rlwinm r11,r30,2,28,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xC;
	// lwzx r31,r11,r4
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	// lwzx r29,r11,r5
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r5.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82320170
	ctx.lr = 0x82322424;
	sub_82320170(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82322460
	if (ctx.cr6.eq) goto loc_82322460;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82322460
	if (ctx.cr6.eq) goto loc_82322460;
	// lwz r11,144(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 144);
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// addi r9,r11,38
	ctx.r9.s64 = ctx.r11.s64 + 38;
	// add r3,r11,r8
	ctx.r3.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stb r31,148(r3)
	PPC_STORE_U8(ctx.r3.u32 + 148, ctx.r31.u8);
	// stwx r29,r11,r8
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r29.u32);
	// lwz r11,144(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 144);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,144(r8)
	PPC_STORE_U32(ctx.r8.u32 + 144, ctx.r10.u32);
loc_82322460:
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82322410
	if (ctx.cr6.lt) goto loc_82322410;
loc_82322470:
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823223F0) {
	__imp__sub_823223F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8232247C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8232247C) {
	__imp__sub_8232247C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82322480) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r7,r3,212
	ctx.r7.s64 = ctx.r3.s64 + 212;
	// addi r6,r3,176
	ctx.r6.s64 = ctx.r3.s64 + 176;
	// addi r5,r3,196
	ctx.r5.s64 = ctx.r3.s64 + 196;
	// addi r4,r3,180
	ctx.r4.s64 = ctx.r3.s64 + 180;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823223f0
	ctx.lr = 0x823224B4;
	sub_823223F0(ctx, base);
	// addi r7,r31,220
	ctx.r7.s64 = ctx.r31.s64 + 220;
	// addi r6,r31,216
	ctx.r6.s64 = ctx.r31.s64 + 216;
	// addi r5,r31,240
	ctx.r5.s64 = ctx.r31.s64 + 240;
	// addi r4,r31,224
	ctx.r4.s64 = ctx.r31.s64 + 224;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823223f0
	ctx.lr = 0x823224CC;
	sub_823223F0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
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

PPC_WEAK_FUNC(sub_82322480) {
	__imp__sub_82322480(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823224EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823224EC) {
	__imp__sub_823224EC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823224F0) {
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
	// bl 0x82320250
	ctx.lr = 0x82322510;
	sub_82320250(ctx, base);
	// lwz r10,172(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 172);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r10,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r10.u32);
	// lfs f0,88(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,88(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 88, temp.u32);
	// stb r11,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r11.u8);
	// lwz r9,692(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 692);
	// sth r9,124(r4)
	PPC_STORE_U16(ctx.r4.u32 + 124, ctx.r9.u16);
	// lwz r4,692(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 692);
	// bl 0x82333718
	ctx.lr = 0x82322538;
	sub_82333718(ctx, base);
	// stb r3,168(r30)
	PPC_STORE_U8(ctx.r30.u32 + 168, ctx.r3.u8);
	// addi r6,r31,176
	ctx.r6.s64 = ctx.r31.s64 + 176;
	// lwz r7,108(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// addi r5,r31,196
	ctx.r5.s64 = ctx.r31.s64 + 196;
	// sth r7,130(r30)
	PPC_STORE_U16(ctx.r30.u32 + 130, ctx.r7.u16);
	// addi r7,r31,212
	ctx.r7.s64 = ctx.r31.s64 + 212;
	// addi r4,r31,180
	ctx.r4.s64 = ctx.r31.s64 + 180;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823223f0
	ctx.lr = 0x8232255C;
	sub_823223F0(ctx, base);
	// addi r7,r31,220
	ctx.r7.s64 = ctx.r31.s64 + 220;
	// addi r6,r31,216
	ctx.r6.s64 = ctx.r31.s64 + 216;
	// addi r5,r31,240
	ctx.r5.s64 = ctx.r31.s64 + 240;
	// addi r4,r31,224
	ctx.r4.s64 = ctx.r31.s64 + 224;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823223f0
	ctx.lr = 0x82322574;
	sub_823223F0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r5,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r5.u32);
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

PPC_WEAK_FUNC(sub_823224F0) {
	__imp__sub_823224F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82322594) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82322594) {
	__imp__sub_82322594(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82322598) {
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
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lfs f0,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stfs f13,4(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// lfs f12,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f12.f64 = double(temp.f32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stfs f12,8(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// lfs f11,280(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 280);
	ctx.f11.f64 = double(temp.f32);
	// fadds f10,f11,f12
	ctx.f10.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// stfs f10,8(r30)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// lwz r9,24(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// clrlwi r7,r9,24
	ctx.r7.u64 = ctx.r9.u32 & 0xFF;
	// lfs f0,-22120(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -22120);
	ctx.f0.f64 = double(temp.f32);
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f9,80(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// lfs f13,-22124(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -22124);
	ctx.f13.f64 = double(temp.f32);
	// frsp f7,f8
	ctx.f7.f64 = double(float(ctx.f8.f64));
	// fmadds f31,f7,f0,f13
	ctx.f31.f64 = double(float(ctx.f7.f64 * ctx.f0.f64 + ctx.f13.f64));
	// bl 0x82327da8
	ctx.lr = 0x82322614;
	sub_82327DA8(ctx, base);
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// bl 0x82336390
	ctx.lr = 0x82322628;
	sub_82336390(ctx, base);
	// fmr f6,f1
	ctx.fpscr.disableFlushMode();
	ctx.f6.f64 = ctx.f1.f64;
	// lfs f5,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// fadds f4,f5,f6
	ctx.f4.f64 = double(float(ctx.f5.f64 + ctx.f6.f64));
	// stfs f4,8(r30)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// bl 0x823364c8
	ctx.lr = 0x82322648;
	sub_823364C8(ctx, base);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lfs f3,404(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 404);
	ctx.f3.f64 = double(temp.f32);
	// addi r3,r31,404
	ctx.r3.s64 = ctx.r31.s64 + 404;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lfs f0,5484(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f3,f0
	ctx.cr6.compare(ctx.f3.f64, ctx.f0.f64);
	// bne cr6,0x82322694
	if (!ctx.cr6.eq) goto loc_82322694;
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x82322694
	if (!ctx.cr6.eq) goto loc_82322694;
	// lfs f13,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x82322694
	if (!ctx.cr6.eq) goto loc_82322694;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,264
	ctx.r3.s64 = ctx.r31.s64 + 264;
	// bl 0x822da518
	ctx.lr = 0x82322690;
	sub_822DA518(ctx, base);
	// b 0x823226dc
	goto loc_823226DC;
loc_82322694:
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// bl 0x822da650
	ctx.lr = 0x8232269C;
	sub_822DA650(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r31,264
	ctx.r3.s64 = ctx.r31.s64 + 264;
	// bl 0x822da650
	ctx.lr = 0x823226A8;
	sub_822DA650(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x822d5c30
	ctx.lr = 0x823226B8;
	sub_822D5C30(ctx, base);
	// lfs f0,108(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// fneg f12,f0
	ctx.f12.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// lfs f11,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
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
	// stfs f9,88(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
loc_823226DC:
	// lfs f0,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f12,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f11,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f9,f11,f31,f0
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f31.f64 + ctx.f0.f64));
	// lfs f8,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f7,f10,f31,f13
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f31.f64 + ctx.f13.f64));
	// fmadds f6,f8,f31,f12
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f31.f64 + ctx.f12.f64));
	// stfs f9,8(r30)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// stfs f7,0(r30)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// stfs f6,4(r30)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// lfs f4,5996(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5996);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,6056(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6056);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,88(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,268(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822e97d8
	ctx.lr = 0x8232272C;
	sub_822E97D8(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f5,36(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f5.f64 = double(temp.f32);
	// lfs f0,6016(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 6016);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f5,f0
	ctx.f0.f64 = double(float(ctx.f5.f64 + ctx.f0.f64));
	// lfs f4,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// fcmpu cr6,f4,f0
	ctx.cr6.compare(ctx.f4.f64, ctx.f0.f64);
	// bge cr6,0x8232274c
	if (!ctx.cr6.lt) goto loc_8232274C;
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
loc_8232274C:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
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

PPC_WEAK_FUNC(sub_82322598) {
	__imp__sub_82322598(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8232276C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8232276C) {
	__imp__sub_8232276C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82322770) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lbz r10,316(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 316);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// lis r3,-32190
	ctx.r3.s64 = -2109603840;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// addi r9,r3,-32512
	ctx.r9.s64 = ctx.r3.s64 + -32512;
	// rotlwi r10,r10,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 3);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwzx r9,r10,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

PPC_WEAK_FUNC(sub_82322770) {
	__imp__sub_82322770(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823227A8) {
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
	// lis r10,-32190
	ctx.r10.s64 = -2109603840;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// rlwinm r31,r3,3,21,28
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0x7F8;
	// addi r10,r10,-32512
	ctx.r10.s64 = ctx.r10.s64 + -32512;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// lwzx r9,r31,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x823227EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

PPC_WEAK_FUNC(sub_823227A8) {
	__imp__sub_823227A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82322800) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// addi r11,r11,-32512
	ctx.r11.s64 = ctx.r11.s64 + -32512;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// rlwinm r9,r3,3,21,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0x7F8;
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
	// lwzx r11,r9,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

PPC_WEAK_FUNC(sub_82322800) {
	__imp__sub_82322800(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8232283C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8232283C) {
	__imp__sub_8232283C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82322840) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x82322348
	sub_82322348(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82322840) {
	__imp__sub_82322840(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82322854) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82322854) {
	__imp__sub_82322854(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82322858) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r4,2046
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2046, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r9,136(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	// cmpwi cr6,r9,32
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8232289c
	if (!ctx.cr6.gt) goto loc_8232289C;
	// addi r11,r3,140
	ctx.r11.s64 = ctx.r3.s64 + 140;
loc_8232287C:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r8,r4
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r4.s32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r8,136(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x8232287c
	if (ctx.cr6.lt) goto loc_8232287C;
loc_8232289C:
	// addi r11,r9,35
	ctx.r11.s64 = ctx.r9.s64 + 35;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r4,r10,r3
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r4.u32);
	// lwz r11,136(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,136(r3)
	PPC_STORE_U32(ctx.r3.u32 + 136, ctx.r9.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82322858) {
	__imp__sub_82322858(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823228B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f11,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f0,5804(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5804);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f7,f10,f11,f12
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f11.f64 + ctx.f12.f64));
	// fmadds f6,f9,f8,f7
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f8.f64 + ctx.f7.f64));
	// fabs f5,f6
	ctx.f5.u64 = ctx.f6.u64 & ~0x8000000000000000;
	// fmsubs f4,f5,f0,f6
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f0.f64 - ctx.f6.f64));
	// fmadds f3,f10,f4,f11
	ctx.f3.f64 = double(float(ctx.f10.f64 * ctx.f4.f64 + ctx.f11.f64));
	// stfs f3,0(r5)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// lfs f2,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// fmadds f0,f2,f4,f1
	ctx.f0.f64 = double(float(ctx.f2.f64 * ctx.f4.f64 + ctx.f1.f64));
	// stfs f0,4(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// lfs f13,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f11,f13,f4,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f4.f64 + ctx.f12.f64));
	// stfs f11,8(r5)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r5.u32 + 8, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823228B8) {
	__imp__sub_823228B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82322918) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,8(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fabs f11,f0
	ctx.f11.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fmuls f10,f13,f13
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// lfs f12,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,5804(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5804);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f11,f13
	ctx.cr6.compare(ctx.f11.f64, ctx.f13.f64);
	// fmadds f13,f12,f12,f10
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f10.f64));
	// blt cr6,0x823229c0
	if (ctx.cr6.lt) goto loc_823229C0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f9,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f9.f64 = double(temp.f32);
	// fcmpu cr6,f13,f9
	ctx.cr6.compare(ctx.f13.f64, ctx.f9.f64);
	// beq cr6,0x823229c0
	if (ctx.cr6.eq) goto loc_823229C0;
	// lfs f11,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmuls f8,f11,f12
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// lfs f11,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f7,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f5,f6,f6,f13
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f13.f64));
	// lfs f10,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f4,f7,f11,f8
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f11.f64 + ctx.f8.f64));
	// fdivs f3,f4,f0
	ctx.f3.f64 = double(float(ctx.f4.f64 / ctx.f0.f64));
	// fneg f0,f3
	ctx.f0.u64 = ctx.f3.u64 ^ 0x8000000000000000;
	// fmadds f2,f0,f0,f13
	ctx.f2.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fdivs f1,f5,f2
	ctx.f1.f64 = double(float(ctx.f5.f64 / ctx.f2.f64));
	// fsqrts f13,f1
	ctx.f13.f64 = double(float(sqrt(ctx.f1.f64)));
	// fcmpu cr6,f13,f10
	ctx.cr6.compare(ctx.f13.f64, ctx.f10.f64);
	// blt cr6,0x823229a4
	if (ctx.cr6.lt) goto loc_823229A4;
	// fcmpu cr6,f0,f9
	ctx.cr6.compare(ctx.f0.f64, ctx.f9.f64);
	// blt cr6,0x823229a4
	if (ctx.cr6.lt) goto loc_823229A4;
	// fmr f10,f6
	ctx.f10.f64 = ctx.f6.f64;
	// fcmpu cr6,f6,f9
	ctx.cr6.compare(ctx.f6.f64, ctx.f9.f64);
	// blelr cr6
	if (!ctx.cr6.gt) return;
loc_823229A4:
	// fmuls f12,f12,f13
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// stfs f12,0(r5)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// fmuls f11,f11,f13
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// stfs f11,4(r5)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// fmuls f10,f13,f0
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f10,8(r5)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r5.u32 + 8, temp.u32);
	// blr 
	return;
loc_823229C0:
	// stfs f12,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// lfs f0,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// lfs f13,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,8(r5)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + 8, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82322918) {
	__imp__sub_82322918(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823229D8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,276(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	// cmpwi cr6,r11,22
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 22, ctx.xer);
	// bne cr6,0x823229ec
	if (!ctx.cr6.eq) goto loc_823229EC;
	// li r3,3
	ctx.r3.s64 = 3;
	// blr 
	return;
loc_823229EC:
	// cmpwi cr6,r11,40
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 40, ctx.xer);
	// bne cr6,0x823229fc
	if (!ctx.cr6.eq) goto loc_823229FC;
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
loc_823229FC:
	// addi r11,r11,-11
	ctx.r11.s64 = ctx.r11.s64 + -11;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823229D8) {
	__imp__sub_823229D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82322A0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82322A0C) {
	__imp__sub_82322A0C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82322A10) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82322A10) {
	__imp__sub_82322A10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82322A20) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82321c58
	ctx.lr = 0x82322A40;
	sub_82321C58(ctx, base);
	// lis r10,-31834
	ctx.r10.s64 = -2086273024;
	// addi r11,r30,440
	ctx.r11.s64 = ctx.r30.s64 + 440;
	// lwz r10,-6492(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -6492);
	// lbz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 12);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82322a60
	if (ctx.cr6.eq) goto loc_82322A60;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82322af4
	goto loc_82322AF4;
loc_82322A60:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82322a74
	if (!ctx.cr6.eq) goto loc_82322A74;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82322af4
	goto loc_82322AF4;
loc_82322A74:
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x82322a90
	if (!ctx.cr6.gt) goto loc_82322A90;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x82322af4
	goto loc_82322AF4;
loc_82322A90:
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82322adc
	if (ctx.cr6.eq) goto loc_82322ADC;
	// lis r8,-31834
	ctx.r8.s64 = -2086273024;
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// neg r5,r7
	ctx.r5.s64 = -ctx.r7.s64;
	// rlwinm r4,r5,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r11,-6472(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -6472);
	// lfs f0,12240(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 12240);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fctiwz f11,f12
	ctx.f11.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f11.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// subf r11,r11,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r11.s64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// b 0x82322aec
	goto loc_82322AEC;
loc_82322ADC:
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// rlwinm r7,r9,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r11,r7,r8
	ctx.r11.s64 = ctx.r8.s64 - ctx.r7.s64;
loc_82322AEC:
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
loc_82322AF4:
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82322b0c
	if (ctx.cr6.lt) goto loc_82322B0C;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
loc_82322B0C:
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

PPC_WEAK_FUNC(sub_82322A20) {
	__imp__sub_82322A20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82322B24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82322B24) {
	__imp__sub_82322B24(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82322B28) {
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
	// bl 0x82321c58
	ctx.lr = 0x82322B40;
	sub_82321C58(ctx, base);
	// lis r11,-31834
	ctx.r11.s64 = -2086273024;
	// lwz r11,-6492(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6492);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82322b80
	if (!ctx.cr6.eq) goto loc_82322B80;
	// lwz r11,456(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 456);
	// lwz r9,452(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 452);
	// lwz r10,448(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 448);
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// and r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 & ctx.r11.u64;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82322b80
	if (ctx.cr6.lt) goto loc_82322B80;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
loc_82322B80:
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

PPC_WEAK_FUNC(sub_82322B28) {
	__imp__sub_82322B28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82322B94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82322B94) {
	__imp__sub_82322B94(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82322B98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,448(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 448);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82322bac
	if (!ctx.cr6.eq) goto loc_82322BAC;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82322BAC:
	// lwz r10,452(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 452);
	// subfc r9,r11,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r11.u32;
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// eqv r8,r11,r10
	ctx.r8.u64 = ~(ctx.r11.u64 ^ ctx.r10.u64);
	// rlwinm r7,r8,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// addze r6,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r6.s64 = temp.s64;
	// clrlwi r3,r6,31
	ctx.r3.u64 = ctx.r6.u32 & 0x1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82322B98) {
	__imp__sub_82322B98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82322BC8) {
	PPC_FUNC_PROLOGUE();
	// stw r5,456(r3)
	PPC_STORE_U32(ctx.r3.u32 + 456, ctx.r5.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r11,448(r3)
	PPC_STORE_U32(ctx.r3.u32 + 448, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// ori r11,r10,16384
	ctx.r11.u64 = ctx.r10.u64 | 16384;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82318f98
	sub_82318F98(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82322BC8) {
	__imp__sub_82322BC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82322BFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82322BFC) {
	__imp__sub_82322BFC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82322C00) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// rlwinm r10,r11,0,17,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,444(r3)
	PPC_STORE_U32(ctx.r3.u32 + 444, ctx.r11.u32);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r10,452(r3)
	PPC_STORE_U32(ctx.r3.u32 + 452, ctx.r10.u32);
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// rlwinm r8,r9,0,18,16
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFBFFF;
	// stw r8,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r8.u32);
	// lwz r7,8(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// rlwinm r6,r7,0,30,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,440(r3)
	PPC_STORE_U32(ctx.r3.u32 + 440, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82322C00) {
	__imp__sub_82322C00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82322C48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// rlwinm r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82322cf0
	if (!ctx.cr6.eq) goto loc_82322CF0;
	// lis r10,-31834
	ctx.r10.s64 = -2086273024;
	// lwz r10,-22116(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -22116);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmpw cr6,r4,r9
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x82322cf0
	if (!ctx.cr6.gt) goto loc_82322CF0;
	// lis r12,0
	ctx.r12.s64 = 0;
	// ori r12,r12,52277
	ctx.r12.u64 = ctx.r12.u64 | 52277;
	// and r10,r5,r12
	ctx.r10.u64 = ctx.r5.u64 & ctx.r12.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82322cf0
	if (!ctx.cr6.eq) goto loc_82322CF0;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,88(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,5484(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x82322cf0
	if (!ctx.cr6.eq) goto loc_82322CF0;
	// rlwinm r10,r11,0,16,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFC;
	// rlwinm r10,r10,0,27,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFF801F;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82322cf0
	if (!ctx.cr6.eq) goto loc_82322CF0;
	// rlwinm r11,r11,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82322cc4
	if (ctx.cr6.eq) goto loc_82322CC4;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82322cc4
	if (!ctx.cr6.eq) goto loc_82322CC4;
loc_82322CBC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82322CC4:
	// lwz r11,504(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 504);
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// beq cr6,0x82322cf0
	if (ctx.cr6.eq) goto loc_82322CF0;
	// cmpwi cr6,r11,14
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 14, ctx.xer);
	// beq cr6,0x82322cf0
	if (ctx.cr6.eq) goto loc_82322CF0;
	// cmpwi cr6,r11,15
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 15, ctx.xer);
	// beq cr6,0x82322cf0
	if (ctx.cr6.eq) goto loc_82322CF0;
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// blt cr6,0x82322cbc
	if (ctx.cr6.lt) goto loc_82322CBC;
	// cmpwi cr6,r11,21
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 21, ctx.xer);
	// bgt cr6,0x82322cbc
	if (ctx.cr6.gt) goto loc_82322CBC;
loc_82322CF0:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82322C48) {
	__imp__sub_82322C48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82322CF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// rlwinm r10,r11,0,16,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF8;
	// rlwinm r10,r10,0,27,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFF801F;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82322d88
	if (!ctx.cr6.eq) goto loc_82322D88;
	// lis r11,-31834
	ctx.r11.s64 = -2086273024;
	// lwz r11,-22116(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22116);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpw cr6,r4,r10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x82322d88
	if (!ctx.cr6.gt) goto loc_82322D88;
	// lis r12,0
	ctx.r12.s64 = 0;
	// ori r12,r12,53045
	ctx.r12.u64 = ctx.r12.u64 | 53045;
	// and r11,r5,r12
	ctx.r11.u64 = ctx.r5.u64 & ctx.r12.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82322d88
	if (!ctx.cr6.eq) goto loc_82322D88;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,88(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x82322d88
	if (!ctx.cr6.eq) goto loc_82322D88;
	// lwz r11,504(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 504);
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// beq cr6,0x82322d88
	if (ctx.cr6.eq) goto loc_82322D88;
	// cmpwi cr6,r11,14
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 14, ctx.xer);
	// beq cr6,0x82322d88
	if (ctx.cr6.eq) goto loc_82322D88;
	// cmpwi cr6,r11,15
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 15, ctx.xer);
	// beq cr6,0x82322d88
	if (ctx.cr6.eq) goto loc_82322D88;
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// blt cr6,0x82322d74
	if (ctx.cr6.lt) goto loc_82322D74;
	// cmpwi cr6,r11,21
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 21, ctx.xer);
	// ble cr6,0x82322d88
	if (!ctx.cr6.gt) goto loc_82322D88;
loc_82322D74:
	// cmpwi cr6,r11,29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 29, ctx.xer);
	// beq cr6,0x82322d88
	if (ctx.cr6.eq) goto loc_82322D88;
	// cmpwi cr6,r11,30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 30, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_82322D88:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82322CF8) {
	__imp__sub_82322CF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82322D90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// clrlwi r10,r11,30
	ctx.r10.u64 = ctx.r11.u32 & 0x3;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82322dc0
	if (!ctx.cr6.eq) goto loc_82322DC0;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82322DC0:
	// lbz r11,316(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 316);
	// lis r10,-32190
	ctx.r10.s64 = -2109603840;
	// lwz r9,132(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 132);
	// addi r5,r3,28
	ctx.r5.s64 = ctx.r3.s64 + 28;
	// lwz r7,256(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 256);
	// rotlwi r3,r11,3
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 3);
	// addi r4,r10,-32512
	ctx.r4.s64 = ctx.r10.s64 + -32512;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// rlwinm r8,r9,0,18,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFF3FFF;
	// addi r6,r11,-27184
	ctx.r6.s64 = ctx.r11.s64 + -27184;
	// rlwinm r8,r8,0,7,5
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFDFFFFFF;
	// lwzx r10,r3,r4
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r4.u32);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82322E00;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r8,120(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 120);
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r3,r7,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82322D90) {
	__imp__sub_82322D90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82322E1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82322E1C) {
	__imp__sub_82322E1C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82322E20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82322E28;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r11,440(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 440);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82322e5c
	if (ctx.cr6.eq) goto loc_82322E5C;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82322e5c
	if (!ctx.cr6.eq) goto loc_82322E5C;
	// stw r29,440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 440, ctx.r29.u32);
loc_82322E5C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82322ebc
	if (ctx.cr6.eq) goto loc_82322EBC;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82322ebc
	if (ctx.cr6.eq) goto loc_82322EBC;
loc_82322E70:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r10,r11,0,17,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x823230bc
	if (ctx.cr6.eq) goto loc_823230BC;
	// stw r29,444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 444, ctx.r29.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r11,452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 452, ctx.r11.u32);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r9,r10,0,18,16
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFBFFF;
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
	// lwz r8,8(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r7,r8,0,30,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x823230bc
	if (ctx.cr6.eq) goto loc_823230BC;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 440, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_82322EBC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82321c58
	ctx.lr = 0x82322EC4;
	sub_82321C58(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x82322e70
	if (!ctx.cr6.gt) goto loc_82322E70;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r11,r10,0,17,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4000;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82322fa4
	if (ctx.cr6.eq) goto loc_82322FA4;
	// lis r11,-31834
	ctx.r11.s64 = -2086273024;
	// lwz r11,-6492(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6492);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82322f48
	if (!ctx.cr6.eq) goto loc_82322F48;
	// lwz r11,448(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 448);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r9,456(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 456);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82322f48
	if (ctx.cr6.lt) goto loc_82322F48;
	// stw r29,444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 444, ctx.r29.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r10,452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 452, ctx.r10.u32);
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r8,r9,0,18,16
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFBFFF;
	// stw r8,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r8.u32);
	// lwz r7,8(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r6,r7,0,30,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x82322f38
	if (ctx.cr6.eq) goto loc_82322F38;
	// stw r11,440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 440, ctx.r11.u32);
loc_82322F38:
	// stw r11,444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 444, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_82322F48:
	// lbz r11,30(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 30);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,8(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// extsb r4,r11
	ctx.r4.s64 = ctx.r11.s8;
	// bl 0x82322cf8
	ctx.lr = 0x82322F5C;
	sub_82322CF8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823230bc
	if (ctx.cr6.eq) goto loc_823230BC;
	// stw r29,444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 444, ctx.r29.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r11,452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 452, ctx.r11.u32);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r9,r10,0,18,16
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFBFFF;
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
	// lwz r8,8(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r7,r8,0,30,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x823230bc
	if (ctx.cr6.eq) goto loc_823230BC;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 440, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_82322FA4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r9,444(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 444);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lfs f31,12240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12240);
	ctx.f31.f64 = double(temp.f32);
	// beq cr6,0x82322ff0
	if (ctx.cr6.eq) goto loc_82322FF0;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lis r9,-31834
	ctx.r9.s64 = -2086273024;
	// lwz r8,452(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 452);
	// subf r7,r8,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r8.s64;
	// extsw r6,r7
	ctx.r6.s64 = ctx.r7.s32;
	// lwz r11,-6472(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -6472);
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfs f0,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fcmpu cr6,f10,f13
	ctx.cr6.compare(ctx.f10.f64, ctx.f13.f64);
	// blt cr6,0x823230bc
	if (ctx.cr6.lt) goto loc_823230BC;
loc_82322FF0:
	// lwz r5,8(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r11,r5,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823230bc
	if (ctx.cr6.eq) goto loc_823230BC;
	// rlwinm r11,r10,0,14,14
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20000;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823230bc
	if (!ctx.cr6.eq) goto loc_823230BC;
	// lwz r11,440(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 440);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823230bc
	if (!ctx.cr6.eq) goto loc_823230BC;
	// lbz r11,30(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 30);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// extsb r4,r11
	ctx.r4.s64 = ctx.r11.s8;
	// bl 0x82322c48
	ctx.lr = 0x82323028;
	sub_82322C48(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823230bc
	if (!ctx.cr6.eq) goto loc_823230BC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82322d90
	ctx.lr = 0x82323040;
	sub_82322D90(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823230bc
	if (ctx.cr6.eq) goto loc_823230BC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82322a20
	ctx.lr = 0x82323058;
	sub_82322A20(ctx, base);
	// extsw r10,r3
	ctx.r10.s64 = ctx.r3.s32;
	// lis r11,-31834
	ctx.r11.s64 = -2086273024;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lwz r11,-6676(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6676);
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fcmpu cr6,f10,f13
	ctx.cr6.compare(ctx.f10.f64, ctx.f13.f64);
	// ble cr6,0x823230bc
	if (!ctx.cr6.gt) goto loc_823230BC;
	// stw r3,456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 456, ctx.r3.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r11,448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 448, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,2
	ctx.r5.s64 = 2;
	// ori r11,r10,16384
	ctx.r11.u64 = ctx.r10.u64 | 16384;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82318f98
	ctx.lr = 0x823230BC;
	sub_82318F98(ctx, base);
loc_823230BC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82322E20) {
	__imp__sub_82322E20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823230C8) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,44(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	// lfs f13,40(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lfs f12,44(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	ctx.f12.f64 = double(temp.f32);
	// addi r31,r3,40
	ctx.r31.s64 = ctx.r3.s64 + 40;
	// lfs f0,48(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lfs f29,5484(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f29.f64 = double(temp.f32);
	// beq cr6,0x82323114
	if (ctx.cr6.eq) goto loc_82323114;
	// fmr f0,f29
	ctx.f0.f64 = ctx.f29.f64;
loc_82323114:
	// fmuls f11,f12,f12
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f12,12168(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f10,f13,f13,f11
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f11.f64));
	// fmadds f9,f0,f0,f10
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f10.f64));
	// fsqrts f30,f9
	ctx.f30.f64 = double(float(sqrt(ctx.f9.f64)));
	// fcmpu cr6,f30,f12
	ctx.cr6.compare(ctx.f30.f64, ctx.f12.f64);
	// bge cr6,0x82323144
	if (!ctx.cr6.lt) goto loc_82323144;
	// stfs f29,0(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// stfs f29,4(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// stfs f29,8(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// b 0x82323248
	goto loc_82323248;
loc_82323144:
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// fmr f0,f29
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f29.f64;
	// rlwinm r9,r10,0,15,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10000;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8232318c
	if (ctx.cr6.eq) goto loc_8232318C;
	// lwz r11,1068(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1068);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,36(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// lfs f0,5804(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5804);
	ctx.f0.f64 = double(temp.f32);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fmuls f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fdivs f8,f30,f9
	ctx.f8.f64 = double(float(ctx.f30.f64 / ctx.f9.f64));
	// fmuls f0,f8,f13
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// b 0x82323210
	goto loc_82323210;
loc_8232318C:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82323210
	if (ctx.cr6.eq) goto loc_82323210;
	// lwz r11,68(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// rlwinm r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82323210
	if (!ctx.cr6.eq) goto loc_82323210;
	// rlwinm r11,r10,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x100;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82323210
	if (!ctx.cr6.eq) goto loc_82323210;
	// lis r11,-31834
	ctx.r11.s64 = -2086273024;
	// lwz r11,-22108(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22108);
	// lfs f31,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f31.f64 = double(temp.f32);
	// fcmpu cr6,f30,f31
	ctx.cr6.compare(ctx.f30.f64, ctx.f31.f64);
	// blt cr6,0x823231c8
	if (ctx.cr6.lt) goto loc_823231C8;
	// fmr f31,f30
	ctx.f31.f64 = ctx.f30.f64;
loc_823231C8:
	// rlwinm r11,r10,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823231e4
	if (ctx.cr6.eq) goto loc_823231E4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,6032(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6032);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f31,f31,f0
	ctx.f31.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
	// b 0x823231f8
	goto loc_823231F8;
loc_823231E4:
	// rlwinm r11,r10,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2000;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823231f8
	if (ctx.cr6.eq) goto loc_823231F8;
	// bl 0x8231bc30
	ctx.lr = 0x823231F4;
	sub_8231BC30(ctx, base);
	// fmuls f31,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f1.f64 * ctx.f31.f64));
loc_823231F8:
	// lis r11,-31834
	ctx.r11.s64 = -2086273024;
	// lfs f0,36(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,-6616(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6616);
	// lfs f13,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f0,f12,f31
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
loc_82323210:
	// fsubs f0,f30,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f30.f64 - ctx.f0.f64));
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// bge cr6,0x82323220
	if (!ctx.cr6.lt) goto loc_82323220;
	// fmr f0,f29
	ctx.f0.f64 = ctx.f29.f64;
loc_82323220:
	// fdivs f0,f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f30.f64));
	// lfs f13,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f13,f0
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f10,0(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// fmuls f9,f12,f0
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f9,4(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// fmuls f8,f11,f0
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f8,8(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
loc_82323248:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f29,-48(r1)
	ctx.fpscr.disableFlushMode();
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

PPC_WEAK_FUNC(sub_823230C8) {
	__imp__sub_823230C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8232326C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8232326C) {
	__imp__sub_8232326C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82323270) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lfs f11,44(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	ctx.f11.f64 = double(temp.f32);
	// rlwinm r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// addi r11,r3,40
	ctx.r11.s64 = ctx.r3.s64 + 40;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8232331c
	if (!ctx.cr6.eq) goto loc_8232331C;
	// lfs f0,40(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f12,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f0,f12
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// lfs f10,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,48(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f0,5484(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f7,f11,f10,f13
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f10.f64 + ctx.f13.f64));
	// fmadds f6,f9,f8,f7
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f8.f64 + ctx.f7.f64));
	// fsubs f13,f1,f6
	ctx.f13.f64 = double(float(ctx.f1.f64 - ctx.f6.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// lis r10,-31834
	ctx.r10.s64 = -2086273024;
	// lwz r10,-22108(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -22108);
	// lfs f0,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x823232d4
	if (!ctx.cr6.lt) goto loc_823232D4;
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
loc_823232D4:
	// lfs f0,36(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f11,f0,f1
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// fmuls f0,f11,f2
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f2.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x823232ec
	if (!ctx.cr6.gt) goto loc_823232EC;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_823232EC:
	// lfs f13,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f12,f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f13.f64));
	// stfs f12,0(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f11,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f9,f11,f0,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f0.f64 + ctx.f10.f64));
	// stfs f9,4(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f8,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f6,f8,f0,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f0.f64 + ctx.f7.f64));
	// stfs f6,8(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// blr 
	return;
loc_8232331C:
	// lfs f0,4(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmuls f13,f0,f1
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// lfs f12,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f10,f12,f1
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f1.f64));
	// lfs f9,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfs f5,36(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f7,f9,f1
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f1.f64));
	// lfs f8,48(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f4,f5,f1
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f1.f64));
	// lfs f6,40(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f6.f64 = double(temp.f32);
	// lfs f12,12168(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f3,f13,f11
	ctx.f3.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// fsubs f1,f10,f8
	ctx.f1.f64 = double(float(ctx.f10.f64 - ctx.f8.f64));
	// fsubs f11,f7,f6
	ctx.f11.f64 = double(float(ctx.f7.f64 - ctx.f6.f64));
	// fmuls f13,f4,f2
	ctx.f13.f64 = double(float(ctx.f4.f64 * ctx.f2.f64));
	// fmuls f10,f3,f3
	ctx.f10.f64 = double(float(ctx.f3.f64 * ctx.f3.f64));
	// fmadds f9,f1,f1,f10
	ctx.f9.f64 = double(float(ctx.f1.f64 * ctx.f1.f64 + ctx.f10.f64));
	// fmadds f8,f11,f11,f9
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f9.f64));
	// fsqrts f0,f8
	ctx.f0.f64 = double(float(sqrt(ctx.f8.f64)));
	// fneg f7,f0
	ctx.f7.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// fsel f6,f7,f12,f0
	ctx.f6.f64 = ctx.f7.f64 >= 0.0 ? ctx.f12.f64 : ctx.f0.f64;
	// fdivs f5,f12,f6
	ctx.f5.f64 = double(float(ctx.f12.f64 / ctx.f6.f64));
	// fmuls f12,f5,f11
	ctx.f12.f64 = double(float(ctx.f5.f64 * ctx.f11.f64));
	// fmuls f11,f3,f5
	ctx.f11.f64 = double(float(ctx.f3.f64 * ctx.f5.f64));
	// fmuls f10,f1,f5
	ctx.f10.f64 = double(float(ctx.f1.f64 * ctx.f5.f64));
	// ble cr6,0x82323390
	if (!ctx.cr6.gt) goto loc_82323390;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
loc_82323390:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f12,f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f13.f64 + ctx.f0.f64));
	// stfs f12,0(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f9,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f8,f11,f13,f9
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f13.f64 + ctx.f9.f64));
	// stfs f8,4(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f7,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f6,f10,f13,f7
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f13.f64 + ctx.f7.f64));
	// stfs f6,8(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82323270) {
	__imp__sub_82323270(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823233B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// fabs f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// fabs f13,f2
	ctx.f13.u64 = ctx.f2.u64 & ~0x8000000000000000;
	// fmr f12,f1
	ctx.f12.f64 = ctx.f1.f64;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x823233d0
	if (!ctx.cr6.gt) goto loc_823233D0;
	// fabs f0,f2
	ctx.f0.u64 = ctx.f2.u64 & ~0x8000000000000000;
loc_823233D0:
	// fabs f13,f3
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = ctx.f3.u64 & ~0x8000000000000000;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x823233e0
	if (!ctx.cr6.gt) goto loc_823233E0;
	// fabs f0,f3
	ctx.f0.u64 = ctx.f3.u64 & ~0x8000000000000000;
loc_823233E0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f1.f64 = double(temp.f32);
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,92(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// fmuls f11,f2,f2
	ctx.f11.f64 = double(float(ctx.f2.f64 * ctx.f2.f64));
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// rlwinm r7,r9,0,25,25
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x40;
	// std r8,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r8.u64);
	// lfd f10,-16(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// lfs f13,-9672(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -9672);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f9,f12,f12,f11
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f11.f64));
	// fmadds f8,f3,f3,f9
	ctx.f8.f64 = double(float(ctx.f3.f64 * ctx.f3.f64 + ctx.f9.f64));
	// fsqrts f7,f8
	ctx.f7.f64 = double(float(sqrt(ctx.f8.f64)));
	// fcfid f6,f10
	ctx.f6.f64 = double(ctx.f10.s64);
	// fmuls f5,f7,f13
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// frsp f4,f6
	ctx.f4.f64 = double(float(ctx.f6.f64));
	// fmuls f3,f4,f0
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// fdivs f0,f3,f5
	ctx.f0.f64 = double(float(ctx.f3.f64 / ctx.f5.f64));
	// bne cr6,0x82323448
	if (!ctx.cr6.eq) goto loc_82323448;
	// lfs f13,88(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f1
	ctx.cr6.compare(ctx.f13.f64, ctx.f1.f64);
	// beq cr6,0x82323454
	if (ctx.cr6.eq) goto loc_82323454;
loc_82323448:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,4292(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4292);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
loc_82323454:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8232346c
	if (!ctx.cr6.eq) goto loc_8232346C;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,7544(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 7544);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
loc_8232346C:
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82323480
	if (!ctx.cr6.eq) goto loc_82323480;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,23112(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 23112);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
loc_82323480:
	// fmr f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f0.f64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823233B8) {
	__imp__sub_823233B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82323488) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lbz r11,27(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 27);
	// lbz r10,26(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 26);
	// extsb r9,r11
	ctx.r9.s64 = ctx.r11.s8;
	// extsb r7,r10
	ctx.r7.s64 = ctx.r10.s8;
	// extsb r8,r10
	ctx.r8.s64 = ctx.r10.s8;
	// extsb r6,r11
	ctx.r6.s64 = ctx.r11.s8;
	// mullw r11,r9,r9
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r9.s32);
	// mullw r10,r7,r7
	ctx.r10.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r7.s32);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// extsb r4,r8
	ctx.r4.s64 = ctx.r8.s8;
	// extsw r11,r5
	ctx.r11.s64 = ctx.r5.s32;
	// extsb r10,r6
	ctx.r10.s64 = ctx.r6.s8;
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// srawi r9,r4,31
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r4.s32 >> 31;
	// srawi r8,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 31;
	// fsqrts f13,f13
	ctx.f13.f64 = double(float(sqrt(ctx.f13.f64)));
	// xor r7,r4,r9
	ctx.r7.u64 = ctx.r4.u64 ^ ctx.r9.u64;
	// xor r6,r10,r8
	ctx.r6.u64 = ctx.r10.u64 ^ ctx.r8.u64;
	// subf r11,r9,r7
	ctx.r11.s64 = ctx.r7.s64 - ctx.r9.s64;
	// subf r10,r8,r6
	ctx.r10.s64 = ctx.r6.s64 - ctx.r8.s64;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x823234ec
	if (!ctx.cr6.gt) goto loc_823234EC;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_823234EC:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82323500
	if (!ctx.cr6.eq) goto loc_82323500;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_82323500:
	// lwz r10,92(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lwz r7,12(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// extsw r6,r10
	ctx.r6.s64 = ctx.r10.s32;
	// std r9,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r9.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// std r6,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r6.u64);
	// lfd f11,-16(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// lfs f0,-9672(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -9672);
	ctx.f0.f64 = double(temp.f32);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// rlwinm r5,r7,0,25,25
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x40;
	// frsp f8,f12
	ctx.f8.f64 = double(float(ctx.f12.f64));
	// fmuls f7,f13,f0
	ctx.f7.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// fmuls f6,f9,f8
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f8.f64));
	// fdivs f1,f6,f7
	ctx.f1.f64 = double(float(ctx.f6.f64 / ctx.f7.f64));
	// bne cr6,0x82323564
	if (!ctx.cr6.eq) goto loc_82323564;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,88(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x82323570
	if (ctx.cr6.eq) goto loc_82323570;
loc_82323564:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,4292(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4292);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
loc_82323570:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82323588
	if (!ctx.cr6.eq) goto loc_82323588;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,7544(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 7544);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
loc_82323588:
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,23112(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 23112);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82323488) {
	__imp__sub_82323488(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823235A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823235b4
	if (!ctx.cr6.eq) goto loc_823235B4;
loc_823235A8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,12168(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_823235B4:
	// lis r11,-31834
	ctx.r11.s64 = -2086273024;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,-6540(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6540);
	// lfs f13,5484(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x823235a8
	if (ctx.cr6.eq) goto loc_823235A8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// extsw r10,r3
	ctx.r10.s64 = ctx.r3.s32;
	// lis r9,-31834
	ctx.r9.s64 = -2086273024;
	// std r10,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f13,2424(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2424);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,-6688(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -6688);
	// fdivs f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// lfs f0,12168(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// lfs f9,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f9,f11
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f11.f64));
	// fmadds f1,f8,f10,f0
	ctx.f1.f64 = double(float(ctx.f8.f64 * ctx.f10.f64 + ctx.f0.f64));
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823235A0) {
	__imp__sub_823235A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82323610) {
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
	// stfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82323698
	if (ctx.cr6.eq) goto loc_82323698;
	// lwz r10,172(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// rlwinm r9,r10,0,20,21
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xC00;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82323698
	if (!ctx.cr6.eq) goto loc_82323698;
	// lfs f2,268(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,348(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822d7818
	ctx.lr = 0x8232365C;
	sub_822D7818(ctx, base);
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// srawi r10,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 31;
	// xor r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// subf r8,r10,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	// cmpwi cr6,r8,90
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 90, ctx.xer);
	// ble cr6,0x82323838
	if (!ctx.cr6.gt) goto loc_82323838;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,90
	ctx.r11.s64 = 90;
	// bgt cr6,0x82323838
	if (ctx.cr6.gt) goto loc_82323838;
	// li r11,-90
	ctx.r11.s64 = -90;
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// stw r10,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r10.u32);
	// b 0x8232384c
	goto loc_8232384C;
loc_82323698:
	// rlwinm r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823236fc
	if (ctx.cr6.eq) goto loc_823236FC;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x822d4ed0
	ctx.lr = 0x823236AC;
	sub_822D4ED0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f2,268(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	ctx.f2.f64 = double(temp.f32);
	// lfs f0,5812(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5812);
	ctx.f0.f64 = double(temp.f32);
	// fadds f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// bl 0x822d7818
	ctx.lr = 0x823236C0;
	sub_822D7818(ctx, base);
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// srawi r10,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 31;
	// xor r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// subf r8,r10,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	// cmpwi cr6,r8,90
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 90, ctx.xer);
	// ble cr6,0x82323838
	if (!ctx.cr6.gt) goto loc_82323838;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,90
	ctx.r11.s64 = 90;
	// bgt cr6,0x82323838
	if (ctx.cr6.gt) goto loc_82323838;
	// li r11,-90
	ctx.r11.s64 = -90;
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// stw r10,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r10.u32);
	// b 0x8232384c
	goto loc_8232384C;
loc_823236FC:
	// lfs f0,28(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// lbz r11,30(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 30);
	// lfs f13,100(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f12,104(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lfs f11,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f13,f11,f12
	ctx.f13.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// lfs f10,108(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 108);
	ctx.f10.f64 = double(temp.f32);
	// stfs f13,92(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lfs f9,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f12,f9,f10
	ctx.f12.f64 = double(float(ctx.f9.f64 - ctx.f10.f64));
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// bne cr6,0x82323744
	if (!ctx.cr6.eq) goto loc_82323744;
	// lbz r11,31(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 31);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82323844
	if (ctx.cr6.eq) goto loc_82323844;
loc_82323744:
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// cmpwi cr6,r11,2047
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2047, ctx.xer);
	// beq cr6,0x82323844
	if (ctx.cr6.eq) goto loc_82323844;
	// fmuls f0,f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f11,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f12,f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f0.f64));
	// fmadds f10,f13,f13,f12
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f12.f64));
	// fsqrts f0,f10
	ctx.f0.f64 = double(float(sqrt(ctx.f10.f64)));
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// beq cr6,0x82323844
	if (ctx.cr6.eq) goto loc_82323844;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,36(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,7324(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7324);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// ble cr6,0x82323844
	if (!ctx.cr6.gt) goto loc_82323844;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x822d4b08
	ctx.lr = 0x82323794;
	sub_822D4B08(ctx, base);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x822d50f8
	ctx.lr = 0x823237A0;
	sub_822D50F8(ctx, base);
	// lfs f2,268(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822d7818
	ctx.lr = 0x823237AC;
	sub_822D7818(ctx, base);
	// lbz r10,30(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 30);
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r10,128
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 128, ctx.xer);
	// blt cr6,0x82323814
	if (ctx.cr6.lt) goto loc_82323814;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfs f0,2416(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2416);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,2420(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2420);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f31,f12,f13,f0
	ctx.f31.f64 = double(float(ctx.f12.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fadds f1,f31,f0
	ctx.f1.f64 = double(float(ctx.f31.f64 + ctx.f0.f64));
	// bl 0x823dde20
	ctx.lr = 0x823237F4;
	sub_823DDE20(ctx, base);
	// frsp f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64));
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f0,2412(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2412);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f10,f31,f11
	ctx.f10.f64 = double(float(ctx.f31.f64 - ctx.f11.f64));
	// fmuls f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fctiwz f8,f9
	ctx.f8.s64 = (ctx.f9.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f9.f64));
	// stfd f8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f8.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_82323814:
	// srawi r10,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 31;
	// xor r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// subf r8,r10,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	// cmpwi cr6,r8,90
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 90, ctx.xer);
	// ble cr6,0x82323838
	if (!ctx.cr6.gt) goto loc_82323838;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,90
	ctx.r11.s64 = 90;
	// bgt cr6,0x82323838
	if (ctx.cr6.gt) goto loc_82323838;
	// li r11,-90
	ctx.r11.s64 = -90;
loc_82323838:
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// stw r10,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r10.u32);
	// b 0x8232384c
	goto loc_8232384C;
loc_82323844:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r11.u32);
loc_8232384C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
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

PPC_WEAK_FUNC(sub_82323610) {
	__imp__sub_82323610(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82323868) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,68(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// rlwinm r10,r11,0,18,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82323880
	if (ctx.cr6.eq) goto loc_82323880;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82323880:
	// srawi r11,r11,20
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFFFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 20;
	// clrlwi r3,r11,27
	ctx.r3.u64 = ctx.r11.u32 & 0x1F;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82323868) {
	__imp__sub_82323868(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8232388C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8232388C) {
	__imp__sub_8232388C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82323890) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,44(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lfs f0,44(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmuls f12,f0,f0
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f11,40(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,48(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f10.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r11,r3,40
	ctx.r11.s64 = ctx.r3.s64 + 40;
	// lfs f0,5996(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5996);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,5484(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5484);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f9,f11,f11,f12
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f12.f64));
	// fmadds f8,f10,f10,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f10.f64 + ctx.f9.f64));
	// fsqrts f7,f8
	ctx.f7.f64 = double(float(sqrt(ctx.f8.f64)));
	// fsubs f0,f7,f0
	ctx.f0.f64 = double(float(ctx.f7.f64 - ctx.f0.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x823238e8
	if (ctx.cr6.gt) goto loc_823238E8;
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f13,8(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// blr 
	return;
loc_823238E8:
	// lfs f12,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmuls f11,f12,f12
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// lfs f10,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// lfs f13,12168(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f8,f10,f10,f11
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f10.f64 + ctx.f11.f64));
	// fmadds f7,f9,f9,f8
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f8.f64));
	// fsqrts f6,f7
	ctx.f6.f64 = double(float(sqrt(ctx.f7.f64)));
	// fneg f5,f6
	ctx.f5.u64 = ctx.f6.u64 ^ 0x8000000000000000;
	// fsel f4,f5,f13,f6
	ctx.f4.f64 = ctx.f5.f64 >= 0.0 ? ctx.f13.f64 : ctx.f6.f64;
	// fdivs f3,f13,f4
	ctx.f3.f64 = double(float(ctx.f13.f64 / ctx.f4.f64));
	// fmuls f2,f10,f3
	ctx.f2.f64 = double(float(ctx.f10.f64 * ctx.f3.f64));
	// stfs f2,0(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// fmuls f1,f12,f3
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f3.f64));
	// stfs f1,4(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// fmuls f13,f9,f3
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f3.f64));
	// stfs f13,8(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// fmuls f11,f2,f0
	ctx.f11.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// stfs f11,0(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f10,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f9,4(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// fmr f12,f2
	ctx.f12.f64 = ctx.f2.f64;
	// lfs f8,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f8,f0
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// stfs f7,8(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82323890) {
	__imp__sub_82323890(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82323958) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stfd f29,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f29.u64);
	// stfd f30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f30.u64);
	// stfd f31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,60
	ctx.r10.s64 = 60;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// addi r6,r3,40
	ctx.r6.s64 = ctx.r3.s64 + 40;
	// stw r10,276(r3)
	PPC_STORE_U32(ctx.r3.u32 + 276, ctx.r10.u32);
	// lfs f0,40(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,48(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,44(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f12,f12
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f10,f0,f0,f11
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f11.f64));
	// lfs f29,12168(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12168);
	ctx.f29.f64 = double(temp.f32);
	// lfs f31,5484(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 5484);
	ctx.f31.f64 = double(temp.f32);
	// fmadds f9,f13,f13,f10
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f10.f64));
	// fsqrts f0,f9
	ctx.f0.f64 = double(float(sqrt(ctx.f9.f64)));
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// bge cr6,0x823239dc
	if (!ctx.cr6.lt) goto loc_823239DC;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r9,r10,-5928
	ctx.r9.s64 = ctx.r10.s64 + -5928;
	// lfs f0,-5928(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -5928);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// lfs f0,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// lfs f0,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 8, temp.u32);
	// b 0x82323a4c
	goto loc_82323A4C;
loc_823239DC:
	// lis r10,-31834
	ctx.r10.s64 = -2086273024;
	// lis r9,-31834
	ctx.r9.s64 = -2086273024;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lwz r10,-6616(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -6616);
	// lwz r9,-22108(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + -22108);
	// lfs f12,6820(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 6820);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82323a0c
	if (ctx.cr6.lt) goto loc_82323A0C;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
loc_82323A0C:
	// lfs f11,36(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f11,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fnmsubs f13,f10,f12,f0
	ctx.f13.f64 = double(float(-(ctx.f10.f64 * ctx.f12.f64 - ctx.f0.f64)));
	// fcmpu cr6,f13,f31
	ctx.cr6.compare(ctx.f13.f64, ctx.f31.f64);
	// bge cr6,0x82323a24
	if (!ctx.cr6.lt) goto loc_82323A24;
	// fmr f13,f31
	ctx.f13.f64 = ctx.f31.f64;
loc_82323A24:
	// fdivs f0,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// lfs f13,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f12,0(r6)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// lfs f11,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f10,4(r6)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// lfs f9,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// stfs f8,8(r6)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r6.u32 + 8, temp.u32);
loc_82323A4C:
	// lbz r10,31(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 31);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lbz r8,30(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 30);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// extsb r8,r8
	ctx.r8.s64 = ctx.r8.s8;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// rlwinm r7,r11,0,24,24
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	// lfs f0,-9672(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -9672);
	ctx.f0.f64 = double(temp.f32);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// fcfid f10,f13
	ctx.f10.f64 = double(ctx.f13.s64);
	// frsp f2,f10
	ctx.f2.f64 = double(float(ctx.f10.f64));
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f30,f11
	ctx.f30.f64 = double(float(ctx.f11.f64));
	// beq cr6,0x82323a98
	if (ctx.cr6.eq) goto loc_82323A98;
	// fmr f31,f0
	ctx.f31.f64 = ctx.f0.f64;
loc_82323A98:
	// rlwinm r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82323aa8
	if (ctx.cr6.eq) goto loc_82323AA8;
	// fsubs f31,f31,f0
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f31.f64 - ctx.f0.f64));
loc_82323AA8:
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x823233b8
	ctx.lr = 0x82323AB4;
	sub_823233B8(ctx, base);
	// lfs f0,16(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// fmuls f13,f0,f2
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f2.f64));
	// lfs f12,28(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// fmuls f10,f11,f2
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f2.f64));
	// lfs f9,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f9,f2
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f2.f64));
	// lfs f6,32(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f5.f64 = double(temp.f32);
	// lfs f3,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// lfs f0,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f2,-27148(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27148);
	ctx.f2.f64 = double(temp.f32);
	// fmadds f4,f12,f31,f13
	ctx.f4.f64 = double(float(ctx.f12.f64 * ctx.f31.f64 + ctx.f13.f64));
	// fmadds f13,f6,f31,f10
	ctx.f13.f64 = double(float(ctx.f6.f64 * ctx.f31.f64 + ctx.f10.f64));
	// fmadds f12,f5,f31,f7
	ctx.f12.f64 = double(float(ctx.f5.f64 * ctx.f31.f64 + ctx.f7.f64));
	// fmadds f11,f8,f30,f4
	ctx.f11.f64 = double(float(ctx.f8.f64 * ctx.f30.f64 + ctx.f4.f64));
	// fmadds f10,f3,f30,f13
	ctx.f10.f64 = double(float(ctx.f3.f64 * ctx.f30.f64 + ctx.f13.f64));
	// fmadds f9,f0,f30,f12
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f30.f64 + ctx.f12.f64));
	// fmuls f8,f11,f11
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// fmadds f7,f10,f10,f8
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f10.f64 + ctx.f8.f64));
	// fmadds f6,f9,f9,f7
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f7.f64));
	// fsqrts f5,f6
	ctx.f5.f64 = double(float(sqrt(ctx.f6.f64)));
	// fneg f4,f5
	ctx.f4.u64 = ctx.f5.u64 ^ 0x8000000000000000;
	// fmuls f1,f5,f1
	ctx.f1.f64 = double(float(ctx.f5.f64 * ctx.f1.f64));
	// fsel f3,f4,f29,f5
	ctx.f3.f64 = ctx.f4.f64 >= 0.0 ? ctx.f29.f64 : ctx.f5.f64;
	// fdivs f0,f29,f3
	ctx.f0.f64 = double(float(ctx.f29.f64 / ctx.f3.f64));
	// fmuls f12,f11,f0
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmuls f13,f0,f9
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f11,f10,f0
	ctx.f11.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f11,88(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x82323270
	ctx.lr = 0x82323B44;
	sub_82323270(ctx, base);
	// lfs f10,36(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// addi r11,r3,28
	ctx.r11.s64 = ctx.r3.s64 + 28;
	// lfs f8,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f7,f9,f10,f8
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f10.f64 + ctx.f8.f64));
	// stfs f7,28(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// lfs f6,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f5.f64 = double(temp.f32);
	// fmadds f4,f6,f10,f5
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f10.f64 + ctx.f5.f64));
	// stfs f4,32(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// lfs f3,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f2.f64 = double(temp.f32);
	// fmadds f1,f3,f10,f2
	ctx.f1.f64 = double(float(ctx.f3.f64 * ctx.f10.f64 + ctx.f2.f64));
	// stfs f1,36(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f29,-32(r1)
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// lfd f30,-24(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// lfd f31,-16(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82323958) {
	__imp__sub_82323958(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82323B98) {
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
	// bl 0x823de024
	ctx.lr = 0x82323BB0;
	__savefpr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r11,60
	ctx.r11.s64 = 60;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r11.u32);
	// lbz r10,31(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 31);
	// lbz r7,30(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 30);
	// extsb r4,r7
	ctx.r4.s64 = ctx.r7.s8;
	// lbz r9,33(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 33);
	// lbz r8,32(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 32);
	// extsb r3,r10
	ctx.r3.s64 = ctx.r10.s8;
	// std r4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r3,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r3.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// subf r3,r9,r8
	ctx.r3.s64 = ctx.r8.s64 - ctx.r9.s64;
	// fcfid f11,f13
	ctx.f11.f64 = double(ctx.f13.s64);
	// frsp f30,f12
	ctx.f30.f64 = double(float(ctx.f12.f64));
	// frsp f29,f11
	ctx.f29.f64 = double(float(ctx.f11.f64));
	// bl 0x822d46b0
	ctx.lr = 0x82323C04;
	sub_822D46B0(ctx, base);
	// extsb r9,r3
	ctx.r9.s64 = ctx.r3.s8;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f10,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f31,5484(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f31.f64 = double(temp.f32);
	// frsp f28,f9
	ctx.f28.f64 = double(float(ctx.f9.f64));
	// lfs f27,12168(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12168);
	ctx.f27.f64 = double(temp.f32);
	// fcmpu cr6,f30,f31
	ctx.cr6.compare(ctx.f30.f64, ctx.f31.f64);
	// bne cr6,0x82323c40
	if (!ctx.cr6.eq) goto loc_82323C40;
	// fcmpu cr6,f29,f31
	ctx.cr6.compare(ctx.f29.f64, ctx.f31.f64);
	// bne cr6,0x82323c40
	if (!ctx.cr6.eq) goto loc_82323C40;
	// fcmpu cr6,f28,f31
	ctx.cr6.compare(ctx.f28.f64, ctx.f31.f64);
	// beq cr6,0x82323c68
	if (ctx.cr6.eq) goto loc_82323C68;
loc_82323C40:
	// lfs f0,44(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// addi r6,r31,40
	ctx.r6.s64 = ctx.r31.s64 + 40;
	// fmuls f13,f0,f0
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f12,40(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,48(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f10,f12,f12,f13
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f13.f64));
	// fmadds f9,f11,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f10.f64));
	// fsqrts f13,f9
	ctx.f13.f64 = double(float(sqrt(ctx.f9.f64)));
	// fcmpu cr6,f13,f27
	ctx.cr6.compare(ctx.f13.f64, ctx.f27.f64);
	// bge cr6,0x82323c90
	if (!ctx.cr6.lt) goto loc_82323C90;
loc_82323C68:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r6,r31,40
	ctx.r6.s64 = ctx.r31.s64 + 40;
	// addi r10,r11,-5928
	ctx.r10.s64 = ctx.r11.s64 + -5928;
	// lfs f0,-5928(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -5928);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,40(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// lfs f0,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,44(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// lfs f0,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,48(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// b 0x82323d00
	goto loc_82323D00;
loc_82323C90:
	// lis r11,-31834
	ctx.r11.s64 = -2086273024;
	// lis r10,-31834
	ctx.r10.s64 = -2086273024;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r11,-6616(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6616);
	// lwz r10,-22108(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -22108);
	// lfs f12,6820(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 6820);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x82323cc0
	if (ctx.cr6.lt) goto loc_82323CC0;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_82323CC0:
	// lfs f11,36(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fnmsubs f0,f10,f12,f13
	ctx.f0.f64 = double(float(-(ctx.f10.f64 * ctx.f12.f64 - ctx.f13.f64)));
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x82323cd8
	if (!ctx.cr6.lt) goto loc_82323CD8;
	// fmr f0,f31
	ctx.f0.f64 = ctx.f31.f64;
loc_82323CD8:
	// fdivs f0,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// lfs f13,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f12,0(r6)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// lfs f11,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f10,4(r6)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// lfs f9,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// stfs f8,8(r6)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r6.u32 + 8, temp.u32);
loc_82323D00:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f3,f28
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f28.f64;
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x823233b8
	ctx.lr = 0x82323D14;
	sub_823233B8(ctx, base);
	// lfs f0,20(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f28,f31
	ctx.f13.f64 = double(float(ctx.f28.f64 * ctx.f31.f64));
	// fmuls f12,f0,f31
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// lfs f11,12(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f11,f31
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// lfs f9,16(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f9.f64 = double(temp.f32);
	// fmr f6,f0
	ctx.f6.f64 = ctx.f0.f64;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// fmuls f5,f29,f11
	ctx.f5.f64 = double(float(ctx.f29.f64 * ctx.f11.f64));
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// fmr f7,f11
	ctx.f7.f64 = ctx.f11.f64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// fmr f8,f9
	ctx.f8.f64 = ctx.f9.f64;
	// lfs f2,-27148(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27148);
	ctx.f2.f64 = double(temp.f32);
	// addi r11,r30,12
	ctx.r11.s64 = ctx.r30.s64 + 12;
	// fsubs f4,f11,f12
	ctx.f4.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// fmsubs f3,f9,f31,f10
	ctx.f3.f64 = double(float(ctx.f9.f64 * ctx.f31.f64 - ctx.f10.f64));
	// fsubs f0,f12,f9
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f9.f64));
	// fmuls f12,f4,f30
	ctx.f12.f64 = double(float(ctx.f4.f64 * ctx.f30.f64));
	// fmuls f11,f3,f30
	ctx.f11.f64 = double(float(ctx.f3.f64 * ctx.f30.f64));
	// fmadds f10,f0,f30,f5
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f30.f64 + ctx.f5.f64));
	// fmadds f9,f9,f29,f12
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f29.f64 + ctx.f12.f64));
	// fmadds f8,f6,f29,f11
	ctx.f8.f64 = double(float(ctx.f6.f64 * ctx.f29.f64 + ctx.f11.f64));
	// fadds f7,f10,f13
	ctx.f7.f64 = double(float(ctx.f10.f64 + ctx.f13.f64));
	// fadds f6,f9,f13
	ctx.f6.f64 = double(float(ctx.f9.f64 + ctx.f13.f64));
	// fadds f5,f8,f28
	ctx.f5.f64 = double(float(ctx.f8.f64 + ctx.f28.f64));
	// fmuls f4,f6,f6
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f6.f64));
	// fmadds f3,f5,f5,f4
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f5.f64 + ctx.f4.f64));
	// fmadds f0,f7,f7,f3
	ctx.f0.f64 = double(float(ctx.f7.f64 * ctx.f7.f64 + ctx.f3.f64));
	// fsqrts f13,f0
	ctx.f13.f64 = double(float(sqrt(ctx.f0.f64)));
	// fneg f12,f13
	ctx.f12.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fmuls f1,f13,f1
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f1.f64));
	// fsel f11,f12,f27,f13
	ctx.f11.f64 = ctx.f12.f64 >= 0.0 ? ctx.f27.f64 : ctx.f13.f64;
	// fdivs f10,f27,f11
	ctx.f10.f64 = double(float(ctx.f27.f64 / ctx.f11.f64));
	// fmuls f9,f10,f7
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f7.f64));
	// stfs f9,80(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f8,f6,f10
	ctx.f8.f64 = double(float(ctx.f6.f64 * ctx.f10.f64));
	// stfs f8,84(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmuls f7,f5,f10
	ctx.f7.f64 = double(float(ctx.f5.f64 * ctx.f10.f64));
	// stfs f7,88(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x82323270
	ctx.lr = 0x82323DB8;
	sub_82323270(ctx, base);
	// lfs f6,36(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// addi r11,r31,28
	ctx.r11.s64 = ctx.r31.s64 + 28;
	// lfs f4,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f4.f64 = double(temp.f32);
	// fmadds f3,f5,f6,f4
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f6.f64 + ctx.f4.f64));
	// stfs f3,28(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// lfs f1,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f1.f64 = double(temp.f32);
	// lfs f2,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// fmadds f0,f2,f6,f1
	ctx.f0.f64 = double(float(ctx.f2.f64 * ctx.f6.f64 + ctx.f1.f64));
	// stfs f0,32(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// lfs f13,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f11,f13,f6,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f6.f64 + ctx.f12.f64));
	// stfs f11,36(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x823de070
	ctx.lr = 0x82323DFC;
	__restfpr_27(ctx, base);
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

PPC_WEAK_FUNC(sub_82323B98) {
	__imp__sub_82323B98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82323E10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,68(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 68);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r9,r11,0,18,18
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82323e34
	if (!ctx.cr6.eq) goto loc_82323E34;
	// srawi r11,r11,20
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFFFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 20;
	// clrlwi r9,r11,27
	ctx.r9.u64 = ctx.r11.u32 & 0x1F;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82323e3c
	if (!ctx.cr6.eq) goto loc_82323E3C;
loc_82323E34:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82323E3C:
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82323e54
	if (ctx.cr6.eq) goto loc_82323E54;
	// li r3,108
	ctx.r3.s64 = 108;
	// blr 
	return;
loc_82323E54:
	// rlwinm r11,r11,0,25,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x7E;
	// rlwinm r11,r11,0,30,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFC3;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82323edc
	if (!ctx.cr6.eq) goto loc_82323EDC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,88(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x82323edc
	if (!ctx.cr6.eq) goto loc_82323EDC;
	// lis r11,-31834
	ctx.r11.s64 = -2086273024;
	// lfs f0,292(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 292);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,-6648(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6648);
	// lfs f13,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82323edc
	if (ctx.cr6.lt) goto loc_82323EDC;
	// lwz r11,448(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 448);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82323eb0
	if (!ctx.cr6.eq) goto loc_82323EB0;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r3,r11,105
	ctx.r3.s64 = ctx.r11.s64 + 105;
	// blr 
	return;
loc_82323EB0:
	// lwz r10,452(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 452);
	// subfc r9,r11,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r11.u32;
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// eqv r8,r11,r10
	ctx.r8.u64 = ~(ctx.r11.u64 ^ ctx.r10.u64);
	// rlwinm r7,r8,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// addze r6,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r6.s64 = temp.s64;
	// clrlwi r11,r6,31
	ctx.r11.u64 = ctx.r6.u32 & 0x1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r3,r11,105
	ctx.r3.s64 = ctx.r11.s64 + 105;
	// blr 
	return;
loc_82323EDC:
	// li r3,107
	ctx.r3.s64 = 107;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82323E10) {
	__imp__sub_82323E10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82323EE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82323EE4) {
	__imp__sub_82323EE4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82323EE8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,68(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// rlwinm r10,r11,0,18,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82323f08
	if (!ctx.cr6.eq) goto loc_82323F08;
	// srawi r11,r11,20
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFFFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 20;
	// clrlwi r10,r11,27
	ctx.r10.u64 = ctx.r11.u32 & 0x1F;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82323f10
	if (!ctx.cr6.eq) goto loc_82323F10;
loc_82323F08:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82323F10:
	// li r3,107
	ctx.r3.s64 = 107;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82323EE8) {
	__imp__sub_82323EE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82323F18) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,68(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// rlwinm r10,r11,0,18,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82323f38
	if (!ctx.cr6.eq) goto loc_82323F38;
	// srawi r11,r11,20
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFFFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 20;
	// clrlwi r10,r11,27
	ctx.r10.u64 = ctx.r11.u32 & 0x1F;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82323f40
	if (!ctx.cr6.eq) goto loc_82323F40;
loc_82323F38:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82323F40:
	// li r3,106
	ctx.r3.s64 = 106;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82323F18) {
	__imp__sub_82323F18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82323F48) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,68(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// rlwinm r10,r11,0,18,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82323f68
	if (!ctx.cr6.eq) goto loc_82323F68;
	// srawi r11,r11,20
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFFFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 20;
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82323f70
	if (!ctx.cr6.eq) goto loc_82323F70;
loc_82323F68:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82323F70:
	// addi r3,r11,110
	ctx.r3.s64 = ctx.r11.s64 + 110;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82323F48) {
	__imp__sub_82323F48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82323F78) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,68(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// rlwinm r10,r11,0,18,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82323f94
	if (ctx.cr6.eq) goto loc_82323F94;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r11,141
	ctx.r3.s64 = ctx.r11.s64 + 141;
	// blr 
	return;
loc_82323F94:
	// srawi r11,r11,20
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFFFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 20;
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// addi r3,r11,141
	ctx.r3.s64 = ctx.r11.s64 + 141;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82323F78) {
	__imp__sub_82323F78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82323FA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82323FA4) {
	__imp__sub_82323FA4(ctx, base);
}

