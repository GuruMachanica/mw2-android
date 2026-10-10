#include "ppc_recomp_shared.h"

PPC_FUNC_IMPL(__imp__sub_8213D3A0) {
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
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82141340
	ctx.lr = 0x8213D3B8;
	sub_82141340(ctx, base);
	// lis r11,-32154
	ctx.r11.s64 = -2107244544;
	// lis r9,-31780
	ctx.r9.s64 = -2082734080;
	// mulli r10,r3,2496
	ctx.r10.s64 = ctx.r3.s64 * 2496;
	// lwz r3,12644(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12644);
	// addi r11,r11,20416
	ctx.r11.s64 = ctx.r11.s64 + 20416;
	// lfs f0,12(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f1,56(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	ctx.f1.f64 = double(temp.f32);
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// beq cr6,0x8213d3e4
	if (ctx.cr6.eq) goto loc_8213D3E4;
	// bl 0x822e1f88
	ctx.lr = 0x8213D3E4;
	sub_822E1F88(ctx, base);
loc_8213D3E4:
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// lfs f1,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,12832(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12832);
	// lfs f0,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// beq cr6,0x8213d400
	if (ctx.cr6.eq) goto loc_8213D400;
	// bl 0x822e1f88
	ctx.lr = 0x8213D400;
	sub_822E1F88(ctx, base);
loc_8213D400:
	// lis r11,-31809
	ctx.r11.s64 = -2084634624;
	// lfs f1,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,-12540(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -12540);
	// lfs f0,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// beq cr6,0x8213d41c
	if (ctx.cr6.eq) goto loc_8213D41C;
	// bl 0x822e1f88
	ctx.lr = 0x8213D41C;
	sub_822E1F88(ctx, base);
loc_8213D41C:
	// lis r11,-32153
	ctx.r11.s64 = -2107179008;
	// lfs f1,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,-17016(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17016);
	// lfs f0,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// beq cr6,0x8213d438
	if (ctx.cr6.eq) goto loc_8213D438;
	// bl 0x822e1f88
	ctx.lr = 0x8213D438;
	sub_822E1F88(ctx, base);
loc_8213D438:
	// lis r11,-32153
	ctx.r11.s64 = -2107179008;
	// lfs f1,28(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,-17244(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17244);
	// lfs f0,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// beq cr6,0x8213d454
	if (ctx.cr6.eq) goto loc_8213D454;
	// bl 0x822e1f88
	ctx.lr = 0x8213D454;
	sub_822E1F88(ctx, base);
loc_8213D454:
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

PPC_WEAK_FUNC(sub_8213D3A0) {
	__imp__sub_8213D3A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213D468) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r3,23
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 23, ctx.xer);
	// blt cr6,0x8213d478
	if (ctx.cr6.lt) goto loc_8213D478;
	// li r3,4
	ctx.r3.s64 = 4;
	// blr 
	return;
loc_8213D478:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// rlwinm r10,r3,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r11,r11,4936
	ctx.r11.s64 = ctx.r11.s64 + 4936;
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8213D468) {
	__imp__sub_8213D468(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213D490) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8213D498;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,115
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 115, ctx.xer);
	// beq cr6,0x8213d4b8
	if (ctx.cr6.eq) goto loc_8213D4B8;
	// cmpwi cr6,r11,83
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 83, ctx.xer);
	// bne cr6,0x8213d508
	if (!ctx.cr6.eq) goto loc_8213D508;
loc_8213D4B8:
	// lbz r11,1(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 1);
	// addi r3,r29,1
	ctx.r3.s64 = ctx.r29.s64 + 1;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,48
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 48, ctx.xer);
	// blt cr6,0x8213d508
	if (ctx.cr6.lt) goto loc_8213D508;
	// cmpwi cr6,r11,57
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 57, ctx.xer);
	// bgt cr6,0x8213d508
	if (ctx.cr6.gt) goto loc_8213D508;
	// bl 0x823deaf8
	ctx.lr = 0x8213D4D8;
	sub_823DEAF8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x823dfe28
	ctx.lr = 0x8213D4E0;
	sub_823DFE28(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,34
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 34, ctx.xer);
	// beq cr6,0x8213d508
	if (ctx.cr6.eq) goto loc_8213D508;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x8213d508
	if (ctx.cr6.lt) goto loc_8213D508;
	// cmpwi cr6,r31,25
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 25, ctx.xer);
	// bgt cr6,0x8213d508
	if (ctx.cr6.gt) goto loc_8213D508;
	// addi r3,r31,23
	ctx.r3.s64 = ctx.r31.s64 + 23;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_8213D508:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r11,4936
	ctx.r31.s64 = ctx.r11.s64 + 4936;
loc_8213D514:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x822e8058
	ctx.lr = 0x8213D520;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8213d544
	if (ctx.cr6.eq) goto loc_8213D544;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// cmplwi cr6,r30,23
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 23, ctx.xer);
	// blt cr6,0x8213d514
	if (ctx.cr6.lt) goto loc_8213D514;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_8213D544:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8213D490) {
	__imp__sub_8213D490(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213D550) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x8213d490
	ctx.lr = 0x8213D578;
	sub_8213D490(ctx, base);
	// cmpwi cr6,r3,23
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 23, ctx.xer);
	// blt cr6,0x8213d59c
	if (ctx.cr6.lt) goto loc_8213D59C;
	// addi r11,r3,243
	ctx.r11.s64 = ctx.r3.s64 + 243;
	// li r10,4
	ctx.r10.s64 = 4;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwzx r8,r9,r31
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// b 0x8213d644
	goto loc_8213D644;
loc_8213D59C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8213d644
	if (ctx.cr6.lt) goto loc_8213D644;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// rlwinm r10,r3,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r11,r11,4936
	ctx.r11.s64 = ctx.r11.s64 + 4936;
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// lwzx r9,r10,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// cmplwi cr6,r9,5
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 5, ctx.xer);
	// bgt cr6,0x8213d644
	if (ctx.cr6.gt) goto loc_8213D644;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8213d5e4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8213D5E4;
	// bdzf 4*cr6+eq,0x8213d5f8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8213D5F8;
	// bdzf 4*cr6+eq,0x8213d60c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8213D60C;
	// bdzf 4*cr6+eq,0x8213d620
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8213D620;
	// bne cr6,0x8213d634
	if (!ctx.cr6.eq) goto loc_8213D634;
loc_8213D5E4:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lbzx r9,r10,r31
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r31.u32);
	// stb r9,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r9.u8);
	// b 0x8213d644
	goto loc_8213D644;
loc_8213D5F8:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lhzx r9,r10,r31
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r31.u32);
	// sth r9,84(r1)
	PPC_STORE_U16(ctx.r1.u32 + 84, ctx.r9.u16);
	// b 0x8213d644
	goto loc_8213D644;
loc_8213D60C:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwzx r9,r10,r31
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// b 0x8213d644
	goto loc_8213D644;
loc_8213D620:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lfsx f0,r10,r31
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// b 0x8213d644
	goto loc_8213D644;
loc_8213D634:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_8213D644:
	// ld r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
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

PPC_WEAK_FUNC(sub_8213D550) {
	__imp__sub_8213D550(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213D65C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8213D65C) {
	__imp__sub_8213D65C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213D660) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32154
	ctx.r11.s64 = -2107244544;
	// mulli r10,r3,2496
	ctx.r10.s64 = ctx.r3.s64 * 2496;
	// addi r11,r11,20416
	ctx.r11.s64 = ctx.r11.s64 + 20416;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x8213d550
	sub_8213D550(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8213D660) {
	__imp__sub_8213D660(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213D674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8213D674) {
	__imp__sub_8213D674(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213D678) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32153
	ctx.r11.s64 = -2107179008;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-32504
	ctx.r3.s64 = ctx.r11.s64 + -32504;
	// b 0x8213d550
	sub_8213D550(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8213D678) {
	__imp__sub_8213D678(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213D688) {
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
	// std r5,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r5.u64);
	// cmpwi cr6,r4,23
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 23, ctx.xer);
	// blt cr6,0x8213d6c0
	if (ctx.cr6.lt) goto loc_8213D6C0;
	// addi r11,r4,243
	ctx.r11.s64 = ctx.r4.s64 + 243;
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r9,r3
	PPC_STORE_U32(ctx.r9.u32 + ctx.r3.u32, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8213D6C0:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// rlwinm r10,r4,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r11,r11,4936
	ctx.r11.s64 = ctx.r11.s64 + 4936;
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// lwzx r9,r10,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// cmplwi cr6,r9,5
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 5, ctx.xer);
	// bgt cr6,0x8213d798
	if (ctx.cr6.gt) goto loc_8213D798;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8213d6fc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8213D6FC;
	// bdzf 4*cr6+eq,0x8213d71c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8213D71C;
	// bdzf 4*cr6+eq,0x8213d73c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8213D73C;
	// bdzf 4*cr6+eq,0x8213d75c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8213D75C;
	// bne cr6,0x8213d77c
	if (!ctx.cr6.eq) goto loc_8213D77C;
loc_8213D6FC:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lbz r9,132(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 132);
	// lwzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stbx r9,r8,r3
	PPC_STORE_U8(ctx.r8.u32 + ctx.r3.u32, ctx.r9.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8213D71C:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lhz r9,132(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 132);
	// lwzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// sthx r9,r8,r3
	PPC_STORE_U16(ctx.r8.u32 + ctx.r3.u32, ctx.r9.u16);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8213D73C:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r9,132(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stwx r9,r8,r3
	PPC_STORE_U32(ctx.r8.u32 + ctx.r3.u32, ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8213D75C:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lfs f0,132(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f0.f64 = double(temp.f32);
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stfsx f0,r10,r3
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, temp.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8213D77C:
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// addi r8,r11,12
	ctx.r8.s64 = ctx.r11.s64 + 12;
	// lwzx r11,r10,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwzx r5,r10,r8
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// bl 0x822e7e98
	ctx.lr = 0x8213D798;
	sub_822E7E98(ctx, base);
loc_8213D798:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8213D688) {
	__imp__sub_8213D688(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213D7A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32154
	ctx.r11.s64 = -2107244544;
	// mulli r10,r3,2496
	ctx.r10.s64 = ctx.r3.s64 * 2496;
	// addi r11,r11,20416
	ctx.r11.s64 = ctx.r11.s64 + 20416;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x8213d688
	sub_8213D688(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8213D7A8) {
	__imp__sub_8213D7A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213D7BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8213D7BC) {
	__imp__sub_8213D7BC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213D7C0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32153
	ctx.r10.s64 = -2107179008;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r3,r10,-32504
	ctx.r3.s64 = ctx.r10.s64 + -32504;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// b 0x8213d688
	sub_8213D688(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8213D7C0) {
	__imp__sub_8213D7C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213D7D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32154
	ctx.r11.s64 = -2107244544;
	// mulli r10,r3,2496
	ctx.r10.s64 = ctx.r3.s64 * 2496;
	// addi r11,r11,20416
	ctx.r11.s64 = ctx.r11.s64 + 20416;
	// addi r9,r11,1044
	ctx.r9.s64 = ctx.r11.s64 + 1044;
	// stwx r4,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r4.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8213D7D8) {
	__imp__sub_8213D7D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213D7F0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32154
	ctx.r10.s64 = -2107244544;
	// mulli r11,r3,2496
	ctx.r11.s64 = ctx.r3.s64 * 2496;
	// addi r10,r10,20416
	ctx.r10.s64 = ctx.r10.s64 + 20416;
	// addi r10,r10,100
	ctx.r10.s64 = ctx.r10.s64 + 100;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8213D7F0) {
	__imp__sub_8213D7F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213D808) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32154
	ctx.r10.s64 = -2107244544;
	// mulli r11,r3,2496
	ctx.r11.s64 = ctx.r3.s64 * 2496;
	// addi r10,r10,20416
	ctx.r10.s64 = ctx.r10.s64 + 20416;
	// addi r10,r10,68
	ctx.r10.s64 = ctx.r10.s64 + 68;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8213D808) {
	__imp__sub_8213D808(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213D820) {
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
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bge cr6,0x8213d864
	if (!ctx.cr6.lt) goto loc_8213D864;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// stw r9,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
	// b 0x8213d890
	goto loc_8213D890;
loc_8213D864:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822dd768
	ctx.lr = 0x8213D874;
	sub_822DD768(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lbz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
loc_8213D890:
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

PPC_WEAK_FUNC(sub_8213D820) {
	__imp__sub_8213D820(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213D8A8) {
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
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bge cr6,0x8213d8ec
	if (!ctx.cr6.lt) goto loc_8213D8EC;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// stw r9,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
	// b 0x8213d918
	goto loc_8213D918;
loc_8213D8EC:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822dd768
	ctx.lr = 0x8213D8FC;
	sub_822DD768(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lbz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
loc_8213D918:
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

PPC_WEAK_FUNC(sub_8213D8A8) {
	__imp__sub_8213D8A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213D930) {
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
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bge cr6,0x8213d974
	if (!ctx.cr6.lt) goto loc_8213D974;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// stw r9,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
	// b 0x8213d9a0
	goto loc_8213D9A0;
loc_8213D974:
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822dd768
	ctx.lr = 0x8213D984;
	sub_822DD768(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lhz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r10,r11,-2
	ctx.r10.s64 = ctx.r11.s64 + -2;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
loc_8213D9A0:
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

PPC_WEAK_FUNC(sub_8213D930) {
	__imp__sub_8213D930(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213D9B8) {
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
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bge cr6,0x8213d9fc
	if (!ctx.cr6.lt) goto loc_8213D9FC;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// stw r9,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
	// b 0x8213da28
	goto loc_8213DA28;
loc_8213D9FC:
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822dd768
	ctx.lr = 0x8213DA0C;
	sub_822DD768(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
loc_8213DA28:
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

PPC_WEAK_FUNC(sub_8213D9B8) {
	__imp__sub_8213D9B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213DA40) {
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
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bge cr6,0x8213da88
	if (!ctx.cr6.lt) goto loc_8213DA88;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r8,0
	ctx.r8.s64 = 0;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// lfs f1,5484(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5484);
	ctx.f1.f64 = double(temp.f32);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// b 0x8213dab4
	goto loc_8213DAB4;
loc_8213DA88:
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822dd768
	ctx.lr = 0x8213DA98;
	sub_822DD768(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
loc_8213DAB4:
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

PPC_WEAK_FUNC(sub_8213DA40) {
	__imp__sub_8213DA40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213DACC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8213DACC) {
	__imp__sub_8213DACC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213DAD0) {
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
	// stb r5,151(r1)
	PPC_STORE_U8(ctx.r1.u32 + 151, ctx.r5.u8);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,151
	ctx.r4.s64 = ctx.r1.s64 + 151;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x822dd768
	ctx.lr = 0x8213DB00;
	sub_822DD768(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
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

PPC_WEAK_FUNC(sub_8213DAD0) {
	__imp__sub_8213DAD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213DB30) {
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
	// stb r5,151(r1)
	PPC_STORE_U8(ctx.r1.u32 + 151, ctx.r5.u8);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,151
	ctx.r4.s64 = ctx.r1.s64 + 151;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x822dd768
	ctx.lr = 0x8213DB60;
	sub_822DD768(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
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

PPC_WEAK_FUNC(sub_8213DB30) {
	__imp__sub_8213DB30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213DB90) {
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
	// sth r5,150(r1)
	PPC_STORE_U16(ctx.r1.u32 + 150, ctx.r5.u16);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r1,150
	ctx.r4.s64 = ctx.r1.s64 + 150;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x822dd768
	ctx.lr = 0x8213DBC0;
	sub_822DD768(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r10,r11,-2
	ctx.r10.s64 = ctx.r11.s64 + -2;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
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

PPC_WEAK_FUNC(sub_8213DB90) {
	__imp__sub_8213DB90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213DBF0) {
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
	// stw r5,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r5.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,148
	ctx.r4.s64 = ctx.r1.s64 + 148;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x822dd768
	ctx.lr = 0x8213DC20;
	sub_822DD768(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
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

PPC_WEAK_FUNC(sub_8213DBF0) {
	__imp__sub_8213DBF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213DC50) {
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
	// stfs f1,148(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,148
	ctx.r4.s64 = ctx.r1.s64 + 148;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x822dd768
	ctx.lr = 0x8213DC80;
	sub_822DD768(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
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

PPC_WEAK_FUNC(sub_8213DC50) {
	__imp__sub_8213DC50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213DCB0) {
	PPC_FUNC_PROLOGUE();
	// b 0x8213d820
	sub_8213D820(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8213DCB0) {
	__imp__sub_8213DCB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213DCB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8213DCB4) {
	__imp__sub_8213DCB4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213DCB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x8213DCC0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x8213d820
	ctx.lr = 0x8213DCD8;
	sub_8213D820(ctx, base);
	// stb r3,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r3.u8);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8213dcf4
	if (!ctx.cr6.eq) goto loc_8213DCF4;
loc_8213DCE8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_8213DCF4:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8213dd0c
	if (!ctx.cr6.gt) goto loc_8213DD0C;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// ble cr6,0x8213dd10
	if (!ctx.cr6.gt) goto loc_8213DD10;
loc_8213DD0C:
	// li r10,0
	ctx.r10.s64 = 0;
loc_8213DD10:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8213dce8
	if (ctx.cr6.eq) goto loc_8213DCE8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bgt cr6,0x8213de74
	if (ctx.cr6.gt) goto loc_8213DE74;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8213dd60
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8213DD60;
	// bdzf 4*cr6+eq,0x8213dd7c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8213DD7C;
	// bdzf 4*cr6+eq,0x8213dd98
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8213DD98;
	// bdzf 4*cr6+eq,0x8213ddb4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8213DDB4;
	// bne cr6,0x8213ddd0
	if (!ctx.cr6.eq) goto loc_8213DDD0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8213d820
	ctx.lr = 0x8213DD50;
	sub_8213D820(ctx, base);
	// stb r3,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r3.u8);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_8213DD60:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8213d8a8
	ctx.lr = 0x8213DD6C;
	sub_8213D8A8(ctx, base);
	// stb r3,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r3.u8);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_8213DD7C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8213d930
	ctx.lr = 0x8213DD88;
	sub_8213D930(ctx, base);
	// sth r3,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r3.u16);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_8213DD98:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8213d9b8
	ctx.lr = 0x8213DDA4;
	sub_8213D9B8(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_8213DDB4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8213da40
	ctx.lr = 0x8213DDC0;
	sub_8213DA40(ctx, base);
	// stfs f1,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_8213DDD0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8213d930
	ctx.lr = 0x8213DDDC;
	sub_8213D930(ctx, base);
	// sth r3,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r3.u16);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8213d930
	ctx.lr = 0x8213DDEC;
	sub_8213D930(ctx, base);
	// lhz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// extsh r10,r3
	ctx.r10.s64 = ctx.r3.s16;
	// sth r3,6(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6, ctx.r3.u16);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x8213de0c
	if (!ctx.cr6.lt) goto loc_8213DE0C;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x8213de38
	goto loc_8213DE38;
loc_8213DE0C:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt cr6,0x8213de1c
	if (ctx.cr6.gt) goto loc_8213DE1C;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x8213de38
	goto loc_8213DE38;
loc_8213DE1C:
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r9,512
	ctx.r9.s64 = 512;
	// subfc r8,r9,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r9.u32;
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// eqv r7,r9,r10
	ctx.r7.u64 = ~(ctx.r9.u64 ^ ctx.r10.u64);
	// rlwinm r6,r7,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x1;
	// addze r5,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r5.s64 = temp.s64;
	// clrlwi r10,r5,31
	ctx.r10.u64 = ctx.r5.u32 & 0x1;
loc_8213DE38:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8213dce8
	if (ctx.cr6.eq) goto loc_8213DCE8;
	// li r10,0
	ctx.r10.s64 = 0;
	// add r3,r11,r28
	ctx.r3.u64 = ctx.r11.u64 + ctx.r28.u64;
	// stbx r10,r11,r28
	PPC_STORE_U8(ctx.r11.u32 + ctx.r28.u32, ctx.r10.u8);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lhz r9,6(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// extsh r4,r9
	ctx.r4.s64 = ctx.r9.s16;
	// bl 0x8213b120
	ctx.lr = 0x8213DE64;
	sub_8213B120(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8213de78
	if (ctx.cr6.eq) goto loc_8213DE78;
loc_8213DE74:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8213DE78:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8213DCB8) {
	__imp__sub_8213DCB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213DE80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x8213DE88;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8213dfe0
	if (ctx.cr6.eq) goto loc_8213DFE0;
	// stb r6,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r6.u8);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x822dd768
	ctx.lr = 0x8213DEBC;
	sub_822DD768(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lbz r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// stb r8,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r8.u8);
	// bl 0x822dd768
	ctx.lr = 0x8213DEEC;
	sub_822DD768(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// stw r6,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r6.u32);
	// lbz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bgt cr6,0x8213dfe0
	if (ctx.cr6.gt) goto loc_8213DFE0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8213df48
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8213DF48;
	// bdzf 4*cr6+eq,0x8213df60
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8213DF60;
	// bdzf 4*cr6+eq,0x8213df78
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8213DF78;
	// bdzf 4*cr6+eq,0x8213df90
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8213DF90;
	// bne cr6,0x8213dfa8
	if (!ctx.cr6.eq) goto loc_8213DFA8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lbz r5,4(r29)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r29.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213dad0
	ctx.lr = 0x8213DF40;
	sub_8213DAD0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_8213DF48:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lbz r5,4(r29)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r29.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213db30
	ctx.lr = 0x8213DF58;
	sub_8213DB30(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_8213DF60:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lhz r5,4(r29)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r29.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213db90
	ctx.lr = 0x8213DF70;
	sub_8213DB90(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_8213DF78:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r5,4(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213dbf0
	ctx.lr = 0x8213DF88;
	sub_8213DBF0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_8213DF90:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lfs f1,4(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213dc50
	ctx.lr = 0x8213DFA0;
	sub_8213DC50(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_8213DFA8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lhz r5,4(r29)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r29.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213db90
	ctx.lr = 0x8213DFB8;
	sub_8213DB90(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lhz r5,6(r29)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r29.u32 + 6);
	// bl 0x8213db90
	ctx.lr = 0x8213DFC8;
	sub_8213DB90(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8213b298
	ctx.lr = 0x8213DFD4;
	sub_8213B298(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x8213b1b8
	ctx.lr = 0x8213DFE0;
	sub_8213B1B8(ctx, base);
loc_8213DFE0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8213DE80) {
	__imp__sub_8213DE80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213DFE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x8213DFF0;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,83
	ctx.r11.s64 = 83;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x822dd768
	ctx.lr = 0x8213E01C;
	sub_822DD768(ctx, base);
	// li r10,69
	ctx.r10.s64 = 69;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822dd768
	ctx.lr = 0x8213E038;
	sub_822DD768(ctx, base);
	// li r9,77
	ctx.r9.s64 = 77;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// stb r9,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822dd768
	ctx.lr = 0x8213E054;
	sub_822DD768(ctx, base);
	// li r8,86
	ctx.r8.s64 = 86;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// stb r8,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r8.u8);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822dd768
	ctx.lr = 0x8213E070;
	sub_822DD768(ctx, base);
	// li r29,1
	ctx.r29.s64 = 1;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822dd768
	ctx.lr = 0x8213E08C;
	sub_822DD768(ctx, base);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822dd768
	ctx.lr = 0x8213E0A4;
	sub_822DD768(ctx, base);
	// addi r7,r31,4
	ctx.r7.s64 = ctx.r31.s64 + 4;
	// addi r6,r28,-12
	ctx.r6.s64 = ctx.r28.s64 + -12;
	// stw r7,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r7.u32);
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
loc_8213E0B8:
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,180
	ctx.r3.s64 = ctx.r1.s64 + 180;
	// bl 0x8213de80
	ctx.lr = 0x8213E0D0;
	sub_8213DE80(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// cmpwi cr6,r31,50
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 50, ctx.xer);
	// blt cr6,0x8213e0b8
	if (ctx.cr6.lt) goto loc_8213E0B8;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// subf r3,r11,r28
	ctx.r3.s64 = ctx.r28.s64 - ctx.r11.s64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8213DFE8) {
	__imp__sub_8213DFE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213E0F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x8213E0F8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r28,r11,5304
	ctx.r28.s64 = ctx.r11.s64 + 5304;
loc_8213E118:
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// bge cr6,0x8213e130
	if (!ctx.cr6.lt) goto loc_8213E130;
	// add r31,r30,r31
	ctx.r31.u64 = ctx.r30.u64 + ctx.r31.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8213e14c
	goto loc_8213E14C;
loc_8213E130:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822dd768
	ctx.lr = 0x8213E140;
	sub_822DD768(ctx, base);
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
loc_8213E14C:
	// lbzx r10,r29,r28
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r28.u32);
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8213e1b4
	if (!ctx.cr6.eq) goto loc_8213E1B4;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpwi cr6,r29,4
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 4, ctx.xer);
	// blt cr6,0x8213e118
	if (ctx.cr6.lt) goto loc_8213E118;
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 4, ctx.xer);
	// bge cr6,0x8213e178
	if (!ctx.cr6.lt) goto loc_8213E178;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8213e19c
	goto loc_8213E19C;
loc_8213E178:
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x822dd768
	ctx.lr = 0x8213E188;
	sub_822DD768(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// addi r29,r30,-4
	ctx.r29.s64 = ctx.r30.s64 + -4;
	// beq cr6,0x8213e1c0
	if (ctx.cr6.eq) goto loc_8213E1C0;
loc_8213E19C:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r10,8816
	ctx.r4.s64 = ctx.r10.s64 + 8816;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x82280c30
	ctx.lr = 0x8213E1B4;
	sub_82280C30(ctx, base);
loc_8213E1B4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_8213E1C0:
	// cmpwi cr6,r29,4
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 4, ctx.xer);
	// bge cr6,0x8213e1d4
	if (!ctx.cr6.lt) goto loc_8213E1D4;
	// add r30,r29,r31
	ctx.r30.u64 = ctx.r29.u64 + ctx.r31.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x8213e1ec
	goto loc_8213E1EC;
loc_8213E1D4:
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x822dd768
	ctx.lr = 0x8213E1E4;
	sub_822DD768(ctx, base);
	// addi r30,r31,4
	ctx.r30.s64 = ctx.r31.s64 + 4;
	// addi r31,r29,-4
	ctx.r31.s64 = ctx.r29.s64 + -4;
loc_8213E1EC:
	// li r29,-1
	ctx.r29.s64 = -1;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bgt cr6,0x8213e208
	if (ctx.cr6.gt) goto loc_8213E208;
loc_8213E1F8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_8213E204:
	// lwz r30,164(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
loc_8213E208:
	// cmpw cr6,r29,r31
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r31.s32, ctx.xer);
	// beq cr6,0x8213e2ac
	if (ctx.cr6.eq) goto loc_8213E2AC;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// bge cr6,0x8213e230
	if (!ctx.cr6.lt) goto loc_8213E230;
	// add r10,r31,r30
	ctx.r10.u64 = ctx.r31.u64 + ctx.r30.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r10.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x8213e250
	goto loc_8213E250;
loc_8213E230:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822dd768
	ctx.lr = 0x8213E240;
	sub_822DD768(ctx, base);
	// addi r9,r30,1
	ctx.r9.s64 = ctx.r30.s64 + 1;
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// addi r11,r31,-1
	ctx.r11.s64 = ctx.r31.s64 + -1;
	// stw r9,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r9.u32);
loc_8213E250:
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8213e1f8
	if (ctx.cr6.eq) goto loc_8213E1F8;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x8213e1b4
	if (ctx.cr6.lt) goto loc_8213E1B4;
	// cmpwi cr6,r10,50
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 50, ctx.xer);
	// bge cr6,0x8213e1b4
	if (!ctx.cr6.lt) goto loc_8213E1B4;
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// add r5,r11,r27
	ctx.r5.u64 = ctx.r11.u64 + ctx.r27.u64;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,164
	ctx.r3.s64 = ctx.r1.s64 + 164;
	// bl 0x8213dcb8
	ctx.lr = 0x8213E288;
	sub_8213DCB8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8213e1b4
	if (ctx.cr6.eq) goto loc_8213E1B4;
	// lwz r31,84(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bgt cr6,0x8213e204
	if (ctx.cr6.gt) goto loc_8213E204;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_8213E2AC:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r11,8680
	ctx.r4.s64 = ctx.r11.s64 + 8680;
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x82280b08
	ctx.lr = 0x8213E2C0;
	sub_82280B08(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8213E0F0) {
	__imp__sub_8213E0F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213E2CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8213E2CC) {
	__imp__sub_8213E2CC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213E2D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8213E2D8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32154
	ctx.r11.s64 = -2107244544;
	// mulli r10,r31,2496
	ctx.r10.s64 = ctx.r31.s64 * 2496;
	// addi r11,r11,20416
	ctx.r11.s64 = ctx.r11.s64 + 20416;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r30,r11,1984
	ctx.r30.s64 = ctx.r11.s64 + 1984;
	// addi r29,r11,1584
	ctx.r29.s64 = ctx.r11.s64 + 1584;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x8213e0f0
	ctx.lr = 0x8213E30C;
	sub_8213E0F0(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8213e340
	if (!ctx.cr6.eq) goto loc_8213E340;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r11,8928
	ctx.r4.s64 = ctx.r11.s64 + 8928;
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x82280b08
	ctx.lr = 0x8213E32C;
	sub_82280B08(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213b310
	ctx.lr = 0x8213E334;
	sub_8213B310(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_8213E340:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// addi r4,r11,5696
	ctx.r4.s64 = ctx.r11.s64 + 5696;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,37
	ctx.r5.s64 = 37;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213b4b0
	ctx.lr = 0x8213E35C;
	sub_8213B4B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213b9f0
	ctx.lr = 0x8213E364;
	sub_8213B9F0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8213E2D0) {
	__imp__sub_8213E2D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213E370) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x8213E378;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32153
	ctx.r11.s64 = -2107179008;
	// mulli r10,r3,2496
	ctx.r10.s64 = ctx.r3.s64 * 2496;
	// addi r29,r11,-32520
	ctx.r29.s64 = ctx.r11.s64 + -32520;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r29,-12600
	ctx.r11.s64 = ctx.r29.s64 + -12600;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82310170
	ctx.lr = 0x8213E3A0;
	sub_82310170(ctx, base);
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r28,r30,532
	ctx.r28.s64 = ctx.r30.s64 + 532;
	// addi r30,r30,132
	ctx.r30.s64 = ctx.r30.s64 + 132;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stwx r3,r10,r29
	PPC_STORE_U32(ctx.r10.u32 + ctx.r29.u32, ctx.r3.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8213e0f0
	ctx.lr = 0x8213E3C4;
	sub_8213E0F0(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8213e3f8
	if (!ctx.cr6.eq) goto loc_8213E3F8;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r11,9016
	ctx.r4.s64 = ctx.r11.s64 + 9016;
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x82280b08
	ctx.lr = 0x8213E3E4;
	sub_82280B08(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213b310
	ctx.lr = 0x8213E3EC;
	sub_8213B310(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_8213E3F8:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// addi r4,r11,5312
	ctx.r4.s64 = ctx.r11.s64 + 5312;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,24
	ctx.r5.s64 = 24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213b4b0
	ctx.lr = 0x8213E414;
	sub_8213B4B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213b9f0
	ctx.lr = 0x8213E41C;
	sub_8213B9F0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8213E370) {
	__imp__sub_8213E370(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213E428) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x8213E430;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32154
	ctx.r11.s64 = -2107244544;
	// mulli r10,r3,2496
	ctx.r10.s64 = ctx.r3.s64 * 2496;
	// addi r11,r11,20416
	ctx.r11.s64 = ctx.r11.s64 + 20416;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r31,r11,1984
	ctx.r31.s64 = ctx.r11.s64 + 1984;
	// addi r30,r11,1584
	ctx.r30.s64 = ctx.r11.s64 + 1584;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// addi r4,r9,5696
	ctx.r4.s64 = ctx.r9.s64 + 5696;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,37
	ctx.r5.s64 = 37;
	// bl 0x8213b388
	ctx.lr = 0x8213E46C;
	sub_8213B388(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823de090
	ctx.lr = 0x8213E47C;
	sub_823DE090(ctx, base);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8213dfe8
	ctx.lr = 0x8213E490;
	sub_8213DFE8(ctx, base);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r8,9112
	ctx.r4.s64 = ctx.r8.s64 + 9112;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x82280900
	ctx.lr = 0x8213E4AC;
	sub_82280900(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8213E428) {
	__imp__sub_8213E428(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213E4B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x8213E4C0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32154
	ctx.r11.s64 = -2107244544;
	// mulli r10,r3,2496
	ctx.r10.s64 = ctx.r3.s64 * 2496;
	// addi r11,r11,20416
	ctx.r11.s64 = ctx.r11.s64 + 20416;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r31,r11,532
	ctx.r31.s64 = ctx.r11.s64 + 532;
	// addi r30,r11,132
	ctx.r30.s64 = ctx.r11.s64 + 132;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// addi r4,r9,5312
	ctx.r4.s64 = ctx.r9.s64 + 5312;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,24
	ctx.r5.s64 = 24;
	// bl 0x8213b388
	ctx.lr = 0x8213E4FC;
	sub_8213B388(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823de090
	ctx.lr = 0x8213E50C;
	sub_823DE090(ctx, base);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8213dfe8
	ctx.lr = 0x8213E520;
	sub_8213DFE8(ctx, base);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r8,9192
	ctx.r4.s64 = ctx.r8.s64 + 9192;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x82280900
	ctx.lr = 0x8213E53C;
	sub_82280900(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8213E4B8) {
	__imp__sub_8213E4B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213E548) {
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
	// stwu r1,-2112(r1)
	ea = -2112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,1000
	ctx.r5.s64 = 1000;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8213e428
	ctx.lr = 0x8213E56C;
	sub_8213E428(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,1000
	ctx.r5.s64 = 1000;
	// addi r4,r1,1088
	ctx.r4.s64 = ctx.r1.s64 + 1088;
	// bl 0x8213e4b8
	ctx.lr = 0x8213E580;
	sub_8213E4B8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,1088
	ctx.r4.s64 = ctx.r1.s64 + 1088;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213b5f0
	ctx.lr = 0x8213E598;
	sub_8213B5F0(ctx, base);
	// addi r1,r1,2112
	ctx.r1.s64 = ctx.r1.s64 + 2112;
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

PPC_WEAK_FUNC(sub_8213E548) {
	__imp__sub_8213E548(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213E5B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x8213E5B8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x8213b948
	ctx.lr = 0x8213E5C8;
	sub_8213B948(ctx, base);
	// bl 0x8213ba88
	ctx.lr = 0x8213E5CC;
	sub_8213BA88(ctx, base);
	// lis r11,-32153
	ctx.r11.s64 = -2107179008;
	// lis r10,-32165
	ctx.r10.s64 = -2107965440;
	// addi r30,r11,-29688
	ctx.r30.s64 = ctx.r11.s64 + -29688;
	// mulli r29,r31,2496
	ctx.r29.s64 = ctx.r31.s64 * 2496;
	// addi r11,r30,-15432
	ctx.r11.s64 = ctx.r30.s64 + -15432;
	// li r5,256
	ctx.r5.s64 = 256;
	// addi r11,r11,1167
	ctx.r11.s64 = ctx.r11.s64 + 1167;
	// add r3,r29,r11
	ctx.r3.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lwz r11,28812(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28812);
	// lwz r4,12(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x822e7e98
	ctx.lr = 0x8213E5F8;
	sub_822E7E98(ctx, base);
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 1, ctx.xer);
	// bne cr6,0x8213e630
	if (!ctx.cr6.eq) goto loc_8213E630;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213b038
	ctx.lr = 0x8213E608;
	sub_8213B038(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8213e630
	if (ctx.cr6.eq) goto loc_8213E630;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213e548
	ctx.lr = 0x8213E61C;
	sub_8213E548(ctx, base);
	// addi r11,r30,-15432
	ctx.r11.s64 = ctx.r30.s64 + -15432;
	// li r5,2496
	ctx.r5.s64 = 2496;
	// add r4,r29,r11
	ctx.r4.u64 = ctx.r29.u64 + ctx.r11.u64;
	// add r3,r29,r30
	ctx.r3.u64 = ctx.r29.u64 + ctx.r30.u64;
	// bl 0x822dd768
	ctx.lr = 0x8213E630;
	sub_822DD768(ctx, base);
loc_8213E630:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8213E5B0) {
	__imp__sub_8213E5B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213E638) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8213E640;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,9272
	ctx.r3.s64 = ctx.r11.s64 + 9272;
	// bl 0x822e84f0
	ctx.lr = 0x8213E658;
	sub_822E84F0(ctx, base);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r10,-27340
	ctx.r4.s64 = ctx.r10.s64 + -27340;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82280900
	ctx.lr = 0x8213E66C;
	sub_82280900(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213b948
	ctx.lr = 0x8213E674;
	sub_8213B948(ctx, base);
	// bl 0x8213ba88
	ctx.lr = 0x8213E678;
	sub_8213BA88(ctx, base);
	// lis r11,-32153
	ctx.r11.s64 = -2107179008;
	// lis r9,-32165
	ctx.r9.s64 = -2107965440;
	// addi r30,r11,-29688
	ctx.r30.s64 = ctx.r11.s64 + -29688;
	// mulli r29,r31,2496
	ctx.r29.s64 = ctx.r31.s64 * 2496;
	// addi r11,r30,-15432
	ctx.r11.s64 = ctx.r30.s64 + -15432;
	// li r5,256
	ctx.r5.s64 = 256;
	// addi r11,r11,1167
	ctx.r11.s64 = ctx.r11.s64 + 1167;
	// add r3,r29,r11
	ctx.r3.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lwz r11,28812(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28812);
	// lwz r4,12(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x822e7e98
	ctx.lr = 0x8213E6A4;
	sub_822E7E98(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213b038
	ctx.lr = 0x8213E6AC;
	sub_8213B038(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8213e6d4
	if (ctx.cr6.eq) goto loc_8213E6D4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213e548
	ctx.lr = 0x8213E6C0;
	sub_8213E548(ctx, base);
	// addi r11,r30,-15432
	ctx.r11.s64 = ctx.r30.s64 + -15432;
	// li r5,2496
	ctx.r5.s64 = 2496;
	// add r4,r29,r11
	ctx.r4.u64 = ctx.r29.u64 + ctx.r11.u64;
	// add r3,r29,r30
	ctx.r3.u64 = ctx.r29.u64 + ctx.r30.u64;
	// bl 0x822dd768
	ctx.lr = 0x8213E6D4;
	sub_822DD768(ctx, base);
loc_8213E6D4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8213E638) {
	__imp__sub_8213E638(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213E6DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8213E6DC) {
	__imp__sub_8213E6DC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213E6E0) {
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,9340
	ctx.r3.s64 = ctx.r11.s64 + 9340;
	// bl 0x822e84f0
	ctx.lr = 0x8213E704;
	sub_822E84F0(ctx, base);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r10,-27340
	ctx.r4.s64 = ctx.r10.s64 + -27340;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82280900
	ctx.lr = 0x8213E718;
	sub_82280900(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213b948
	ctx.lr = 0x8213E720;
	sub_8213B948(ctx, base);
	// bl 0x8213ba88
	ctx.lr = 0x8213E724;
	sub_8213BA88(ctx, base);
	// lis r9,-32154
	ctx.r9.s64 = -2107244544;
	// lis r8,-32165
	ctx.r8.s64 = -2107965440;
	// addi r11,r9,20416
	ctx.r11.s64 = ctx.r9.s64 + 20416;
	// mulli r10,r31,2496
	ctx.r10.s64 = ctx.r31.s64 * 2496;
	// addi r11,r11,1167
	ctx.r11.s64 = ctx.r11.s64 + 1167;
	// li r5,256
	ctx.r5.s64 = 256;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,28812(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 28812);
	// lwz r4,12(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x822e7e98
	ctx.lr = 0x8213E74C;
	sub_822E7E98(ctx, base);
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

PPC_WEAK_FUNC(sub_8213E6E0) {
	__imp__sub_8213E6E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213E760) {
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
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,4688(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4688);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8213e7e4
	if (ctx.cr6.eq) goto loc_8213E7E4;
	// bl 0x82141b20
	ctx.lr = 0x8213E78C;
	sub_82141B20(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8213e7e4
	if (ctx.cr6.eq) goto loc_8213E7E4;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821413c8
	ctx.lr = 0x8213E7A0;
	sub_821413C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8213e7e4
	if (ctx.cr6.eq) goto loc_8213E7E4;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82141340
	ctx.lr = 0x8213E7B4;
	sub_82141340(ctx, base);
	// cmpw cr6,r3,r31
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r31.s32, ctx.xer);
	// beq cr6,0x8213e7e4
	if (ctx.cr6.eq) goto loc_8213E7E4;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82141340
	ctx.lr = 0x8213E7C4;
	sub_82141340(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,9400
	ctx.r4.s64 = ctx.r11.s64 + 9400;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x82280c30
	ctx.lr = 0x8213E7E0;
	sub_82280C30(ctx, base);
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_8213E7E4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213e638
	ctx.lr = 0x8213E7EC;
	sub_8213E638(ctx, base);
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

PPC_WEAK_FUNC(sub_8213E760) {
	__imp__sub_8213E760(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213E804) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8213E804) {
	__imp__sub_8213E804(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213E808) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x8213E810;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r11,4688(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4688);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8213e848
	if (!ctx.cr6.eq) goto loc_8213E848;
	// lis r11,-32153
	ctx.r11.s64 = -2107179008;
	// lwz r11,-16768(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16768);
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// beq cr6,0x8213e848
	if (ctx.cr6.eq) goto loc_8213E848;
	// li r28,0
	ctx.r28.s64 = 0;
	// b 0x8213e854
	goto loc_8213E854;
loc_8213E848:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82141280
	ctx.lr = 0x8213E850;
	sub_82141280(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
loc_8213E854:
	// lis r11,4100
	ctx.r11.s64 = 268697600;
	// ori r11,r11,34
	ctx.r11.u64 = ctx.r11.u64 | 34;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8213ea08
	if (ctx.cr6.gt) goto loc_8213EA08;
	// beq cr6,0x8213e9dc
	if (ctx.cr6.eq) goto loc_8213E9DC;
	// lis r11,4100
	ctx.r11.s64 = 268697600;
	// ori r11,r11,21
	ctx.r11.u64 = ctx.r11.u64 | 21;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8213e960
	if (ctx.cr6.gt) goto loc_8213E960;
	// beq cr6,0x8213e8e4
	if (ctx.cr6.eq) goto loc_8213E8E4;
	// addis r11,r31,-4100
	ctx.r11.s64 = ctx.r31.s64 + -268697600;
	// addic. r11,r11,-2
	ctx.xer.ca = ctx.r11.u32 > 1;
	ctx.r11.s64 = ctx.r11.s64 + -2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8213e8b8
	if (ctx.cr0.eq) goto loc_8213E8B8;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8213eaf4
	if (!ctx.cr6.eq) goto loc_8213EAF4;
	// lis r11,-32154
	ctx.r11.s64 = -2107244544;
	// lwz r10,32(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// mulli r9,r30,2496
	ctx.r9.s64 = ctx.r30.s64 * 2496;
	// addi r11,r11,20416
	ctx.r11.s64 = ctx.r11.s64 + 20416;
	// addic r8,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// addi r7,r11,67
	ctx.r7.s64 = ctx.r11.s64 + 67;
	// subfe r6,r8,r10
	temp.u8 = (~ctx.r8.u32 + ctx.r10.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r8.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stbx r6,r9,r7
	PPC_STORE_U8(ctx.r9.u32 + ctx.r7.u32, ctx.r6.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_8213E8B8:
	// lwz r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// lis r10,-32154
	ctx.r10.s64 = -2107244544;
	// mulli r9,r30,2496
	ctx.r9.s64 = ctx.r30.s64 * 2496;
	// addi r10,r10,20416
	ctx.r10.s64 = ctx.r10.s64 + 20416;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// addi r7,r10,64
	ctx.r7.s64 = ctx.r10.s64 + 64;
	// cntlzw r6,r8
	ctx.r6.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r5,r6,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// stbx r5,r9,r7
	PPC_STORE_U8(ctx.r9.u32 + ctx.r7.u32, ctx.r5.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_8213E8E4:
	// bl 0x82141bb8
	ctx.lr = 0x8213E8E8;
	sub_82141BB8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8213eaf4
	if (ctx.cr6.eq) goto loc_8213EAF4;
	// lwz r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8213e944
	if (ctx.cr6.lt) goto loc_8213E944;
	// beq cr6,0x8213e928
	if (ctx.cr6.eq) goto loc_8213E928;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x8213e944
	if (!ctx.cr6.lt) goto loc_8213E944;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r11,9748
	ctx.r5.s64 = ctx.r11.s64 + 9748;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8227ebd8
	ctx.lr = 0x8213E920;
	sub_8227EBD8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_8213E928:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r11,9732
	ctx.r5.s64 = ctx.r11.s64 + 9732;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8227ebd8
	ctx.lr = 0x8213E93C;
	sub_8227EBD8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_8213E944:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r11,6620
	ctx.r5.s64 = ctx.r11.s64 + 6620;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8227ebd8
	ctx.lr = 0x8213E958;
	sub_8227EBD8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_8213E960:
	// lis r11,4100
	ctx.r11.s64 = 268697600;
	// ori r10,r11,24
	ctx.r10.u64 = ctx.r11.u64 | 24;
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8213eaf4
	if (!ctx.cr6.eq) goto loc_8213EAF4;
	// lwz r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8213e9c0
	if (ctx.cr6.lt) goto loc_8213E9C0;
	// beq cr6,0x8213e9a4
	if (ctx.cr6.eq) goto loc_8213E9A4;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x8213e9c0
	if (!ctx.cr6.lt) goto loc_8213E9C0;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r11,9704
	ctx.r5.s64 = ctx.r11.s64 + 9704;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8227ebd8
	ctx.lr = 0x8213E99C;
	sub_8227EBD8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_8213E9A4:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r11,9676
	ctx.r5.s64 = ctx.r11.s64 + 9676;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8227ebd8
	ctx.lr = 0x8213E9B8;
	sub_8227EBD8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_8213E9C0:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r11,9648
	ctx.r5.s64 = ctx.r11.s64 + 9648;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8227ebd8
	ctx.lr = 0x8213E9D4;
	sub_8227EBD8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_8213E9DC:
	// lwz r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// lis r10,-32154
	ctx.r10.s64 = -2107244544;
	// mulli r9,r30,2496
	ctx.r9.s64 = ctx.r30.s64 * 2496;
	// addi r10,r10,20416
	ctx.r10.s64 = ctx.r10.s64 + 20416;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// addi r7,r10,65
	ctx.r7.s64 = ctx.r10.s64 + 65;
	// cntlzw r6,r8
	ctx.r6.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r5,r6,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// stbx r5,r9,r7
	PPC_STORE_U8(ctx.r9.u32 + ctx.r7.u32, ctx.r5.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_8213EA08:
	// lis r11,4100
	ctx.r11.s64 = 268697600;
	// ori r10,r11,36
	ctx.r10.u64 = ctx.r11.u64 | 36;
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8213eac4
	if (ctx.cr6.eq) goto loc_8213EAC4;
	// addis r11,r31,-25576
	ctx.r11.s64 = ctx.r31.s64 + -1676148736;
	// addic. r11,r11,-16382
	ctx.xer.ca = ctx.r11.u32 > 16381;
	ctx.r11.s64 = ctx.r11.s64 + -16382;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8213ea70
	if (ctx.cr0.eq) goto loc_8213EA70;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8213eaf4
	if (!ctx.cr6.eq) goto loc_8213EAF4;
	// lwz r4,36(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8213eaf4
	if (ctx.cr6.eq) goto loc_8213EAF4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,32(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// bl 0x8213e370
	ctx.lr = 0x8213EA48;
	sub_8213E370(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8213eaf4
	if (!ctx.cr6.eq) goto loc_8213EAF4;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,9588
	ctx.r4.s64 = ctx.r11.s64 + 9588;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82280c30
	ctx.lr = 0x8213EA68;
	sub_82280C30(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_8213EA70:
	// lwz r4,36(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8213ea8c
	if (!ctx.cr6.eq) goto loc_8213EA8C;
	// bl 0x8213b788
	ctx.lr = 0x8213EA84;
	sub_8213B788(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_8213EA8C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,32(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// bl 0x8213e2d0
	ctx.lr = 0x8213EA98;
	sub_8213E2D0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8213eaf4
	if (!ctx.cr6.eq) goto loc_8213EAF4;
	// bl 0x8213b788
	ctx.lr = 0x8213EAA8;
	sub_8213B788(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,9524
	ctx.r4.s64 = ctx.r11.s64 + 9524;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82280c30
	ctx.lr = 0x8213EABC;
	sub_82280C30(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_8213EAC4:
	// lwz r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8213eaf4
	if (!ctx.cr6.eq) goto loc_8213EAF4;
	// lis r11,-32154
	ctx.r11.s64 = -2107244544;
	// mulli r10,r30,2496
	ctx.r10.s64 = ctx.r30.s64 * 2496;
	// addi r11,r11,20416
	ctx.r11.s64 = ctx.r11.s64 + 20416;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r11,r11,100
	ctx.r11.s64 = ctx.r11.s64 + 100;
	// addi r4,r9,4232
	ctx.r4.s64 = ctx.r9.s64 + 4232;
	// li r5,32
	ctx.r5.s64 = 32;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x822e7e98
	ctx.lr = 0x8213EAF4;
	sub_822E7E98(ctx, base);
loc_8213EAF4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8213E808) {
	__imp__sub_8213E808(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213EAFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8213EAFC) {
	__imp__sub_8213EAFC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213EB00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf64
	ctx.lr = 0x8213EB08;
	__savegprlr_23(ctx, base);
	// stwu r1,-1216(r1)
	ea = -1216 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r24,0
	ctx.r24.s64 = 0;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// addi r29,r11,4872
	ctx.r29.s64 = ctx.r11.s64 + 4872;
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// li r27,8
	ctx.r27.s64 = 8;
	// li r23,1000
	ctx.r23.s64 = 1000;
loc_8213EB2C:
	// lwz r28,0(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,4(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// rlwinm r11,r28,4,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xF;
	// add r31,r10,r30
	ctx.r31.u64 = ctx.r10.u64 + ctx.r30.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8213eba8
	if (ctx.cr6.eq) goto loc_8213EBA8;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x8213eb74
	if (!ctx.cr6.eq) goto loc_8213EB74;
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8213eb9c
	if (ctx.cr6.eq) goto loc_8213EB9C;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r5,32(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x823de1f0
	ctx.lr = 0x8213EB6C;
	sub_823DE1F0(ctx, base);
loc_8213EB6C:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
loc_8213EB74:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8213e808
	ctx.lr = 0x8213EB84;
	sub_8213E808(ctx, base);
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r30,r30,40
	ctx.r30.s64 = ctx.r30.s64 + 40;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// bne 0x8213eb2c
	if (!ctx.cr0.eq) goto loc_8213EB2C;
	// addi r1,r1,1216
	ctx.r1.s64 = ctx.r1.s64 + 1216;
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
loc_8213EB9C:
	// stb r24,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r24.u8);
	// stw r23,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r23.u32);
	// b 0x8213eb74
	goto loc_8213EB74;
loc_8213EBA8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8213eb6c
	if (!ctx.cr6.eq) goto loc_8213EB6C;
	// stw r24,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r24.u32);
	// b 0x8213eb74
	goto loc_8213EB74;
}

PPC_WEAK_FUNC(sub_8213EB00) {
	__imp__sub_8213EB00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213EBBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8213EBBC) {
	__imp__sub_8213EBBC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213EBC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// ld r12,-8192(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8192);
	// ld r12,-12288(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -12288);
	// ld r12,-16384(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16384);
	// stwu r1,-16496(r1)
	ea = -16496 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,9772
	ctx.r3.s64 = ctx.r11.s64 + 9772;
	// bl 0x822e84f0
	ctx.lr = 0x8213EBF4;
	sub_822E84F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82280900
	ctx.lr = 0x8213EC00;
	sub_82280900(ctx, base);
	// bl 0x82393cc8
	ctx.lr = 0x8213EC04;
	sub_82393CC8(ctx, base);
	// li r10,16384
	ctx.r10.s64 = 16384;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213bf08
	ctx.lr = 0x8213EC1C;
	sub_8213BF08(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8213ec30
	if (!ctx.cr6.eq) goto loc_8213EC30;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8213ec58
	goto loc_8213EC58;
loc_8213EC30:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r5,r11,9764
	ctx.r5.s64 = ctx.r11.s64 + 9764;
	// addi r3,r10,6288
	ctx.r3.s64 = ctx.r10.s64 + 6288;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822e84f0
	ctx.lr = 0x8213EC48;
	sub_822E84F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82280b08
	ctx.lr = 0x8213EC54;
	sub_82280B08(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
loc_8213EC58:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8213ec80
	if (ctx.cr6.eq) goto loc_8213EC80;
	// lis r11,-32154
	ctx.r11.s64 = -2107244544;
	// mulli r10,r31,2496
	ctx.r10.s64 = ctx.r31.s64 * 2496;
	// addi r11,r11,20416
	ctx.r11.s64 = ctx.r11.s64 + 20416;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stbx r9,r10,r8
	PPC_STORE_U8(ctx.r10.u32 + ctx.r8.u32, ctx.r9.u8);
	// b 0x8213ec8c
	goto loc_8213EC8C;
loc_8213EC80:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213eb00
	ctx.lr = 0x8213EC8C;
	sub_8213EB00(ctx, base);
loc_8213EC8C:
	// bl 0x82393d48
	ctx.lr = 0x8213EC90;
	sub_82393D48(ctx, base);
	// addi r1,r1,16496
	ctx.r1.s64 = ctx.r1.s64 + 16496;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8213EBC0) {
	__imp__sub_8213EBC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213ECA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8213ECA4) {
	__imp__sub_8213ECA4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213ECA8) {
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
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,28832
	ctx.r10.s64 = ctx.r11.s64 + 28832;
	// lwz r11,332(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 332);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8213ece8
	if (ctx.cr6.eq) goto loc_8213ECE8;
	// bl 0x82141458
	ctx.lr = 0x8213ECD8;
	sub_82141458(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x8213ecec
	if (!ctx.cr6.eq) goto loc_8213ECEC;
loc_8213ECE8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8213ECEC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8213ed00
	if (ctx.cr6.eq) goto loc_8213ED00;
	// bl 0x822c3e30
	ctx.lr = 0x8213ED00;
	sub_822C3E30(ctx, base);
loc_8213ED00:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213ebc0
	ctx.lr = 0x8213ED08;
	sub_8213EBC0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82281d00
	ctx.lr = 0x8213ED14;
	sub_82281D00(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213e6e0
	ctx.lr = 0x8213ED1C;
	sub_8213E6E0(ctx, base);
	// lis r11,-32153
	ctx.r11.s64 = -2107179008;
	// mulli r10,r31,2496
	ctx.r10.s64 = ctx.r31.s64 * 2496;
	// addi r11,r11,-29688
	ctx.r11.s64 = ctx.r11.s64 + -29688;
	// li r5,2496
	ctx.r5.s64 = 2496;
	// addi r9,r11,-15432
	ctx.r9.s64 = ctx.r11.s64 + -15432;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// bl 0x822dd768
	ctx.lr = 0x8213ED3C;
	sub_822DD768(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8213ed48
	if (ctx.cr6.eq) goto loc_8213ED48;
	// bl 0x822c3e98
	ctx.lr = 0x8213ED48;
	sub_822C3E98(ctx, base);
loc_8213ED48:
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

PPC_WEAK_FUNC(sub_8213ECA8) {
	__imp__sub_8213ECA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213ED60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf64
	ctx.lr = 0x8213ED68;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32153
	ctx.r11.s64 = -2107179008;
	// addi r28,r11,-29688
	ctx.r28.s64 = ctx.r11.s64 + -29688;
	// addi r11,r28,-15432
	ctx.r11.s64 = ctx.r28.s64 + -15432;
	// addi r31,r11,532
	ctx.r31.s64 = ctx.r11.s64 + 532;
loc_8213ED7C:
	// li r5,400
	ctx.r5.s64 = 400;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,-400
	ctx.r3.s64 = ctx.r31.s64 + -400;
	// bl 0x822dd778
	ctx.lr = 0x8213ED8C;
	sub_822DD778(ctx, base);
	// li r5,512
	ctx.r5.s64 = 512;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822dd778
	ctx.lr = 0x8213ED9C;
	sub_822DD778(ctx, base);
	// li r5,400
	ctx.r5.s64 = 400;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,1052
	ctx.r3.s64 = ctx.r31.s64 + 1052;
	// bl 0x822dd778
	ctx.lr = 0x8213EDAC;
	sub_822DD778(ctx, base);
	// li r5,512
	ctx.r5.s64 = 512;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,1452
	ctx.r3.s64 = ctx.r31.s64 + 1452;
	// bl 0x822dd778
	ctx.lr = 0x8213EDBC;
	sub_822DD778(ctx, base);
	// addi r3,r31,-532
	ctx.r3.s64 = ctx.r31.s64 + -532;
	// bl 0x8213bfb8
	ctx.lr = 0x8213EDC4;
	sub_8213BFB8(ctx, base);
	// addi r11,r28,-15432
	ctx.r11.s64 = ctx.r28.s64 + -15432;
	// addi r31,r31,2496
	ctx.r31.s64 = ctx.r31.s64 + 2496;
	// addi r11,r11,10516
	ctx.r11.s64 = ctx.r11.s64 + 10516;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8213ed7c
	if (ctx.cr6.lt) goto loc_8213ED7C;
	// lis r11,-31822
	ctx.r11.s64 = -2085486592;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-348(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -348);
	// bl 0x822e1f18
	ctx.lr = 0x8213EDE8;
	sub_822E1F18(ctx, base);
	// lis r10,-31822
	ctx.r10.s64 = -2085486592;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-344(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -344);
	// bl 0x822e1f18
	ctx.lr = 0x8213EDF8;
	sub_822E1F18(ctx, base);
	// lis r9,-31822
	ctx.r9.s64 = -2085486592;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-372(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + -372);
	// bl 0x822e1f18
	ctx.lr = 0x8213EE08;
	sub_822E1F18(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82141340
	ctx.lr = 0x8213EE10;
	sub_82141340(ctx, base);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r8,6620
	ctx.r5.s64 = ctx.r8.s64 + 6620;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8227ebd8
	ctx.lr = 0x8213EE24;
	sub_8227EBD8(ctx, base);
	// bl 0x82310170
	ctx.lr = 0x8213EE28;
	sub_82310170(ctx, base);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r31,r28,-2832
	ctx.r31.s64 = ctx.r28.s64 + -2832;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
	// lis r24,-32165
	ctx.r24.s64 = -2107965440;
	// addi r26,r10,-27340
	ctx.r26.s64 = ctx.r10.s64 + -27340;
	// addi r25,r11,9340
	ctx.r25.s64 = ctx.r11.s64 + 9340;
loc_8213EE4C:
	// stw r23,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r23.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822e84f0
	ctx.lr = 0x8213EE5C;
	sub_822E84F0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82280900
	ctx.lr = 0x8213EE6C;
	sub_82280900(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8213b948
	ctx.lr = 0x8213EE74;
	sub_8213B948(ctx, base);
	// bl 0x8213ba88
	ctx.lr = 0x8213EE78;
	sub_8213BA88(ctx, base);
	// addi r11,r28,-15432
	ctx.r11.s64 = ctx.r28.s64 + -15432;
	// li r5,256
	ctx.r5.s64 = 256;
	// add r27,r29,r11
	ctx.r27.u64 = ctx.r29.u64 + ctx.r11.u64;
	// addi r3,r27,1167
	ctx.r3.s64 = ctx.r27.s64 + 1167;
	// lwz r11,28812(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 28812);
	// lwz r4,12(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x822e7e98
	ctx.lr = 0x8213EE94;
	sub_822E7E98(ctx, base);
	// li r5,2496
	ctx.r5.s64 = 2496;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// add r3,r29,r28
	ctx.r3.u64 = ctx.r29.u64 + ctx.r28.u64;
	// bl 0x822dd768
	ctx.lr = 0x8213EEA4;
	sub_822DD768(ctx, base);
	// addi r11,r28,-2832
	ctx.r11.s64 = ctx.r28.s64 + -2832;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,2496
	ctx.r29.s64 = ctx.r29.s64 + 2496;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8213ee4c
	if (ctx.cr6.lt) goto loc_8213EE4C;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8213ED60) {
	__imp__sub_8213ED60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213EEC8) {
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
	// lis r11,-32154
	ctx.r11.s64 = -2107244544;
	// mulli r10,r3,2496
	ctx.r10.s64 = ctx.r3.s64 * 2496;
	// addi r11,r11,20416
	ctx.r11.s64 = ctx.r11.s64 + 20416;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stbx r9,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u8);
	// stbx r7,r10,r8
	PPC_STORE_U8(ctx.r10.u32 + ctx.r8.u32, ctx.r7.u8);
	// bl 0x8213eca8
	ctx.lr = 0x8213EF04;
	sub_8213ECA8(ctx, base);
	// lis r6,-32191
	ctx.r6.s64 = -2109669376;
	// lwz r11,4688(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4688);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8213ef30
	if (!ctx.cr6.eq) goto loc_8213EF30;
	// lis r30,-32153
	ctx.r30.s64 = -2107179008;
	// lwz r3,-16768(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -16768);
	// cmpw cr6,r31,r3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r3.s32, ctx.xer);
	// beq cr6,0x8213ef74
	if (ctx.cr6.eq) goto loc_8213EF74;
	// bl 0x8213b9f0
	ctx.lr = 0x8213EF28;
	sub_8213B9F0(ctx, base);
	// lwz r3,-16768(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -16768);
	// b 0x8213ef70
	goto loc_8213EF70;
loc_8213EF30:
	// bl 0x82141b20
	ctx.lr = 0x8213EF34;
	sub_82141B20(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8213ef74
	if (ctx.cr6.eq) goto loc_8213EF74;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821413c8
	ctx.lr = 0x8213EF48;
	sub_821413C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8213ef74
	if (ctx.cr6.eq) goto loc_8213EF74;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82141340
	ctx.lr = 0x8213EF5C;
	sub_82141340(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpw cr6,r3,r31
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r31.s32, ctx.xer);
	// beq cr6,0x8213ef74
	if (ctx.cr6.eq) goto loc_8213EF74;
	// bl 0x8213b9f0
	ctx.lr = 0x8213EF6C;
	sub_8213B9F0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_8213EF70:
	// bl 0x8213b948
	ctx.lr = 0x8213EF74;
	sub_8213B948(ctx, base);
loc_8213EF74:
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

PPC_WEAK_FUNC(sub_8213EEC8) {
	__imp__sub_8213EEC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213EF8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8213EF8C) {
	__imp__sub_8213EF8C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213EF90) {
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,9808
	ctx.r4.s64 = ctx.r11.s64 + 9808;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82280900
	ctx.lr = 0x8213EFB8;
	sub_82280900(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213c098
	ctx.lr = 0x8213EFC0;
	sub_8213C098(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213e6e0
	ctx.lr = 0x8213EFC8;
	sub_8213E6E0(ctx, base);
	// lis r10,-32191
	ctx.r10.s64 = -2109669376;
	// lwz r11,4688(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4688);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8213efe8
	if (!ctx.cr6.eq) goto loc_8213EFE8;
	// lis r11,-32153
	ctx.r11.s64 = -2107179008;
	// lwz r3,-16768(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16768);
	// cmpw cr6,r31,r3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r3.s32, ctx.xer);
	// b 0x8213f018
	goto loc_8213F018;
loc_8213EFE8:
	// bl 0x82141b20
	ctx.lr = 0x8213EFEC;
	sub_82141B20(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8213f020
	if (ctx.cr6.eq) goto loc_8213F020;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821413c8
	ctx.lr = 0x8213F000;
	sub_821413C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8213f020
	if (ctx.cr6.eq) goto loc_8213F020;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82141340
	ctx.lr = 0x8213F014;
	sub_82141340(ctx, base);
	// cmpw cr6,r3,r31
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r31.s32, ctx.xer);
loc_8213F018:
	// beq cr6,0x8213f020
	if (ctx.cr6.eq) goto loc_8213F020;
	// bl 0x8213b9f0
	ctx.lr = 0x8213F020;
	sub_8213B9F0(ctx, base);
loc_8213F020:
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

PPC_WEAK_FUNC(sub_8213EF90) {
	__imp__sub_8213EF90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213F034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8213F034) {
	__imp__sub_8213F034(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213F038) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x8213F040;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32153
	ctx.r11.s64 = -2107179008;
	// mulli r27,r3,2496
	ctx.r27.s64 = ctx.r3.s64 * 2496;
	// addi r28,r11,-29688
	ctx.r28.s64 = ctx.r11.s64 + -29688;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r28,-15432
	ctx.r11.s64 = ctx.r28.s64 + -15432;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// add r29,r27,r11
	ctx.r29.u64 = ctx.r27.u64 + ctx.r11.u64;
	// lwz r11,48(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// beq cr6,0x8213f0a0
	if (ctx.cr6.eq) goto loc_8213F0A0;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,9852
	ctx.r4.s64 = ctx.r11.s64 + 9852;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x82280900
	ctx.lr = 0x8213F084;
	sub_82280900(ctx, base);
	// stw r30,48(r29)
	PPC_STORE_U32(ctx.r29.u32 + 48, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213e548
	ctx.lr = 0x8213F090;
	sub_8213E548(ctx, base);
	// li r5,2496
	ctx.r5.s64 = 2496;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// add r3,r27,r28
	ctx.r3.u64 = ctx.r27.u64 + ctx.r28.u64;
	// bl 0x822dd768
	ctx.lr = 0x8213F0A0;
	sub_822DD768(ctx, base);
loc_8213F0A0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8213F038) {
	__imp__sub_8213F038(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213F0A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32153
	ctx.r11.s64 = -2107179008;
	// addi r10,r11,-19288
	ctx.r10.s64 = ctx.r11.s64 + -19288;
	// lwz r11,2032(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2032);
	// subf r9,r11,r3
	ctx.r9.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addic r8,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r6,r10
	ctx.r3.u64 = ctx.r6.u64 & ctx.r10.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8213F0A8) {
	__imp__sub_8213F0A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213F0C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,1032(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1032);
	// not r10,r11
	ctx.r10.u64 = ~ctx.r11.u64;
	// clrlwi r3,r10,31
	ctx.r3.u64 = ctx.r10.u32 & 0x1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8213F0C8) {
	__imp__sub_8213F0C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213F0D8) {
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
	// lwz r11,1032(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1032);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// not r9,r11
	ctx.r9.u64 = ~ctx.r11.u64;
	// addi r5,r10,-29844
	ctx.r5.s64 = ctx.r10.s64 + -29844;
	// clrlwi r11,r9,31
	ctx.r11.u64 = ctx.r9.u32 & 0x1;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// addi r8,r11,256
	ctx.r8.s64 = ctx.r11.s64 + 256;
	// rlwinm r10,r11,9,0,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0xFFFFFE00;
	// rlwinm r30,r8,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r30,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r3.u32);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// subfic r4,r11,512
	ctx.xer.ca = ctx.r11.u32 <= 512;
	ctx.r4.s64 = 512 - ctx.r11.s64;
	// add r3,r10,r3
	ctx.r3.u64 = ctx.r10.u64 + ctx.r3.u64;
	// bl 0x822e8368
	ctx.lr = 0x8213F128;
	sub_822E8368(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x8213f14c
	if (!ctx.cr6.lt) goto loc_8213F14C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,9912
	ctx.r4.s64 = ctx.r11.s64 + 9912;
	// bl 0x82280b08
	ctx.lr = 0x8213F140;
	sub_82280B08(ctx, base);
	// li r10,512
	ctx.r10.s64 = 512;
	// stwx r10,r30,r31
	PPC_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r10.u32);
	// b 0x8213f158
	goto loc_8213F158;
loc_8213F14C:
	// lwzx r11,r30,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stwx r11,r30,r31
	PPC_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r11.u32);
loc_8213F158:
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

PPC_WEAK_FUNC(sub_8213F0D8) {
	__imp__sub_8213F0D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213F170) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,2004(r3)
	PPC_STORE_U8(ctx.r3.u32 + 2004, ctx.r11.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8213F170) {
	__imp__sub_8213F170(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213F17C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8213F17C) {
	__imp__sub_8213F17C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213F180) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// li r10,7
	ctx.r10.s64 = 7;
	// stw r4,2000(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2000, ctx.r4.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r11,r3,1968
	ctx.r11.s64 = ctx.r3.s64 + 1968;
	// stb r9,2004(r3)
	PPC_STORE_U8(ctx.r3.u32 + 2004, ctx.r9.u8);
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8213F19C:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8213f19c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8213F19C;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8213F180) {
	__imp__sub_8213F180(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213F1A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,1032(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1032);
	// not r10,r11
	ctx.r10.u64 = ~ctx.r11.u64;
	// clrlwi r11,r10,31
	ctx.r11.u64 = ctx.r10.u32 & 0x1;
	// addi r9,r11,256
	ctx.r9.s64 = ctx.r11.s64 + 256;
	// rlwinm r11,r11,9,0,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0xFFFFFE00;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r11,r3
	ctx.r9.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwzx r7,r8,r3
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r3.u32);
	// addic. r11,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r11.s64 = ctx.r7.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x8213f1f0
	if (ctx.cr0.lt) goto loc_8213F1F0;
loc_8213F1D0:
	// lbzx r10,r11,r9
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,10
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 10, ctx.xer);
	// beq cr6,0x8213f1f0
	if (ctx.cr6.eq) goto loc_8213F1F0;
	// cmpwi cr6,r10,13
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 13, ctx.xer);
	// beq cr6,0x8213f1f0
	if (ctx.cr6.eq) goto loc_8213F1F0;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x8213f1d0
	if (!ctx.cr0.lt) goto loc_8213F1D0;
loc_8213F1F0:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stbx r10,r11,r9
	PPC_STORE_U8(ctx.r11.u32 + ctx.r9.u32, ctx.r10.u8);
	// stwx r11,r8,r3
	PPC_STORE_U32(ctx.r8.u32 + ctx.r3.u32, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8213F1A8) {
	__imp__sub_8213F1A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213F204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8213F204) {
	__imp__sub_8213F204(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213F208) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,1548(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1548);
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lbz r10,1036(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1036);
	// extsb r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8213f24c
	if (ctx.cr6.eq) goto loc_8213F24C;
loc_8213F220:
	// cmpwi cr6,r9,10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 10, ctx.xer);
	// beq cr6,0x8213f24c
	if (ctx.cr6.eq) goto loc_8213F24C;
	// cmpwi cr6,r9,13
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 13, ctx.xer);
	// beq cr6,0x8213f24c
	if (ctx.cr6.eq) goto loc_8213F24C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r11,1548(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1548, ctx.r11.u32);
	// lbz r10,1036(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1036);
	// extsb r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8213f220
	if (!ctx.cr6.eq) goto loc_8213F220;
loc_8213F24C:
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,10
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 10, ctx.xer);
	// beq cr6,0x8213f260
	if (ctx.cr6.eq) goto loc_8213F260;
	// cmpwi cr6,r10,13
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 13, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_8213F260:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r11,1548(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1548, ctx.r11.u32);
	// lbz r10,1036(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1036);
	// b 0x8213f24c
	goto loc_8213F24C;
}

PPC_WEAK_FUNC(sub_8213F208) {
	__imp__sub_8213F208(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213F27C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8213F27C) {
	__imp__sub_8213F27C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213F280) {
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
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// bl 0x8213f1a8
	ctx.lr = 0x8213F294;
	sub_8213F1A8(ctx, base);
	// bl 0x8213f208
	ctx.lr = 0x8213F298;
	sub_8213F208(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8213F280) {
	__imp__sub_8213F280(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213F2A8) {
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,-3040
	ctx.r3.s64 = ctx.r11.s64 + -3040;
	// bl 0x822e04f8
	ctx.lr = 0x8213F2C8;
	sub_822E04F8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213f0d8
	ctx.lr = 0x8213F2D4;
	sub_8213F0D8(ctx, base);
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

PPC_WEAK_FUNC(sub_8213F2A8) {
	__imp__sub_8213F2A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213F2EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8213F2EC) {
	__imp__sub_8213F2EC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213F2F0) {
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
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r5,128
	ctx.r5.s64 = 128;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822e7e98
	ctx.lr = 0x8213F314;
	sub_822E7E98(ctx, base);
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8213f34c
	if (ctx.cr6.eq) goto loc_8213F34C;
loc_8213F328:
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// beq cr6,0x8213f344
	if (ctx.cr6.eq) goto loc_8213F344;
	// lbzu r11,1(r4)
	ea = 1 + ctx.r4.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r4.u32 = ea;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8213f328
	if (!ctx.cr6.eq) goto loc_8213F328;
	// b 0x8213f34c
	goto loc_8213F34C;
loc_8213F344:
	// stb r30,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r30.u8);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
loc_8213F34C:
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8213f360
	if (!ctx.cr6.eq) goto loc_8213F360;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r4,r11,9964
	ctx.r4.s64 = ctx.r11.s64 + 9964;
loc_8213F360:
	// li r10,7
	ctx.r10.s64 = 7;
	// stw r30,2000(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2000, ctx.r30.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r11,r31,1968
	ctx.r11.s64 = ctx.r31.s64 + 1968;
	// stb r9,2004(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2004, ctx.r9.u8);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8213F37C:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8213f37c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8213F37C;
	// addi r7,r31,1968
	ctx.r7.s64 = ctx.r31.s64 + 1968;
	// ld r5,2016(r31)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r31.u32 + 2016);
	// addi r6,r31,1560
	ctx.r6.s64 = ctx.r31.s64 + 1560;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8230a720
	ctx.lr = 0x8213F398;
	sub_8230A720(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8213f3b0
	if (!ctx.cr6.eq) goto loc_8213F3B0;
	// li r3,2
	ctx.r3.s64 = 2;
	// stb r30,2004(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2004, ctx.r30.u8);
	// b 0x8213f3b4
	goto loc_8213F3B4;
loc_8213F3B0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8213F3B4:
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

PPC_WEAK_FUNC(sub_8213F2F0) {
	__imp__sub_8213F2F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213F3CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8213F3CC) {
	__imp__sub_8213F3CC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213F3D0) {
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
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// ld r4,2016(r4)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r4.u32 + 2016);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpldi cr6,r4,0
	ctx.cr6.compare<uint64_t>(ctx.r4.u64, 0, ctx.xer);
	// bne cr6,0x8213f400
	if (!ctx.cr6.eq) goto loc_8213F400;
loc_8213F3F8:
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x8213f434
	goto loc_8213F434;
loc_8213F400:
	// li r6,128
	ctx.r6.s64 = 128;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82307678
	ctx.lr = 0x8213F410;
	sub_82307678(ctx, base);
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8213f3f8
	if (ctx.cr6.eq) goto loc_8213F3F8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82307548
	ctx.lr = 0x8213F424;
	sub_82307548(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8213f0d8
	ctx.lr = 0x8213F430;
	sub_8213F0D8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_8213F434:
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

PPC_WEAK_FUNC(sub_8213F3D0) {
	__imp__sub_8213F3D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213F44C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8213F44C) {
	__imp__sub_8213F44C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213F450) {
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
	// bl 0x82307568
	ctx.lr = 0x8213F468;
	sub_82307568(ctx, base);
	// std r3,2016(r31)
	PPC_STORE_U64(ctx.r31.u32 + 2016, ctx.r3.u64);
	// cmpldi cr6,r3,0
	ctx.cr6.compare<uint64_t>(ctx.r3.u64, 0, ctx.xer);
	// li r3,2
	ctx.r3.s64 = 2;
	// beq cr6,0x8213f47c
	if (ctx.cr6.eq) goto loc_8213F47C;
	// li r3,1
	ctx.r3.s64 = 1;
loc_8213F47C:
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

PPC_WEAK_FUNC(sub_8213F450) {
	__imp__sub_8213F450(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213F490) {
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
	// bl 0x8230bd68
	ctx.lr = 0x8213F4B0;
	sub_8230BD68(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8213f4c4
	if (!ctx.cr6.eq) goto loc_8213F4C4;
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x8213f4e0
	goto loc_8213F4E0;
loc_8213F4C4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8230bd88
	ctx.lr = 0x8213F4CC;
	sub_8230BD88(ctx, base);
	// std r3,2016(r30)
	PPC_STORE_U64(ctx.r30.u32 + 2016, ctx.r3.u64);
	// cmpldi cr6,r3,0
	ctx.cr6.compare<uint64_t>(ctx.r3.u64, 0, ctx.xer);
	// li r3,2
	ctx.r3.s64 = 2;
	// beq cr6,0x8213f4e0
	if (ctx.cr6.eq) goto loc_8213F4E0;
	// li r3,1
	ctx.r3.s64 = 1;
loc_8213F4E0:
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

PPC_WEAK_FUNC(sub_8213F490) {
	__imp__sub_8213F490(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213F4F8) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// ld r3,2016(r4)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r4.u32 + 2016);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmpldi cr6,r3,0
	ctx.cr6.compare<uint64_t>(ctx.r3.u64, 0, ctx.xer);
	// bne cr6,0x8213f528
	if (!ctx.cr6.eq) goto loc_8213F528;
loc_8213F520:
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x8213f574
	goto loc_8213F574;
loc_8213F528:
	// bl 0x8230b018
	ctx.lr = 0x8213F52C;
	sub_8230B018(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8213f548
	if (ctx.cr6.eq) goto loc_8213F548;
	// bl 0x8230ac10
	ctx.lr = 0x8213F540;
	sub_8230AC10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8213f568
	goto loc_8213F568;
loc_8213F548:
	// li r6,32
	ctx.r6.s64 = 32;
	// ld r4,2016(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 2016);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x823077f8
	ctx.lr = 0x8213F558;
	sub_823077F8(ctx, base);
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8213f520
	if (ctx.cr6.eq) goto loc_8213F520;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
loc_8213F568:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213f0d8
	ctx.lr = 0x8213F570;
	sub_8213F0D8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_8213F574:
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

PPC_WEAK_FUNC(sub_8213F4F8) {
	__imp__sub_8213F4F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213F58C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8213F58C) {
	__imp__sub_8213F58C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213F590) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8213F598;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// addi r4,r11,10064
	ctx.r4.s64 = ctx.r11.s64 + 10064;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x822e8058
	ctx.lr = 0x8213F5B8;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8213f5e0
	if (!ctx.cr6.eq) goto loc_8213F5E0;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-3040
	ctx.r3.s64 = ctx.r11.s64 + -3040;
	// bl 0x822e04f8
	ctx.lr = 0x8213F5CC;
	sub_822E04F8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8213f0d8
	ctx.lr = 0x8213F5D8;
	sub_8213F0D8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_8213F5E0:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r4,r11,10060
	ctx.r4.s64 = ctx.r11.s64 + 10060;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e7ee0
	ctx.lr = 0x8213F5F4;
	sub_822E7EE0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8213f60c
	if (!ctx.cr6.eq) goto loc_8213F60C;
	// addi r4,r31,3
	ctx.r4.s64 = ctx.r31.s64 + 3;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8213f2f0
	ctx.lr = 0x8213F608;
	sub_8213F2F0(ctx, base);
	// b 0x8213f6e4
	goto loc_8213F6E4;
loc_8213F60C:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,10048
	ctx.r4.s64 = ctx.r11.s64 + 10048;
	// bl 0x822e8058
	ctx.lr = 0x8213F61C;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8213f634
	if (!ctx.cr6.eq) goto loc_8213F634;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8213f3d0
	ctx.lr = 0x8213F630;
	sub_8213F3D0(ctx, base);
	// b 0x8213f6e4
	goto loc_8213F6E4;
loc_8213F634:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,10040
	ctx.r4.s64 = ctx.r11.s64 + 10040;
	// bl 0x822e8058
	ctx.lr = 0x8213F644;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8213f668
	if (!ctx.cr6.eq) goto loc_8213F668;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82307568
	ctx.lr = 0x8213F654;
	sub_82307568(ctx, base);
	// std r3,2016(r30)
	PPC_STORE_U64(ctx.r30.u32 + 2016, ctx.r3.u64);
	// cmpldi cr6,r3,0
	ctx.cr6.compare<uint64_t>(ctx.r3.u64, 0, ctx.xer);
	// beq cr6,0x8213f6ec
	if (ctx.cr6.eq) goto loc_8213F6EC;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_8213F668:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,10036
	ctx.r4.s64 = ctx.r11.s64 + 10036;
	// bl 0x822e8058
	ctx.lr = 0x8213F678;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8213f690
	if (!ctx.cr6.eq) goto loc_8213F690;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8213f490
	ctx.lr = 0x8213F68C;
	sub_8213F490(ctx, base);
	// b 0x8213f6e4
	goto loc_8213F6E4;
loc_8213F690:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,10028
	ctx.r4.s64 = ctx.r11.s64 + 10028;
	// bl 0x822e8058
	ctx.lr = 0x8213F6A0;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8213f6d8
	if (ctx.cr6.eq) goto loc_8213F6D8;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,10016
	ctx.r4.s64 = ctx.r11.s64 + 10016;
	// bl 0x822e8058
	ctx.lr = 0x8213F6B8;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8213f6d8
	if (ctx.cr6.eq) goto loc_8213F6D8;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r11,9972
	ctx.r4.s64 = ctx.r11.s64 + 9972;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82280c30
	ctx.lr = 0x8213F6D4;
	sub_82280C30(ctx, base);
	// b 0x8213f6ec
	goto loc_8213F6EC;
loc_8213F6D8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8213f4f8
	ctx.lr = 0x8213F6E4;
	sub_8213F4F8(ctx, base);
loc_8213F6E4:
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x8213f6f8
	if (!ctx.cr6.eq) goto loc_8213F6F8;
loc_8213F6EC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8213f1a8
	ctx.lr = 0x8213F6F4;
	sub_8213F1A8(ctx, base);
	// bl 0x8213f208
	ctx.lr = 0x8213F6F8;
	sub_8213F208(ctx, base);
loc_8213F6F8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8213F590) {
	__imp__sub_8213F590(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213F700) {
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
	// addi r3,r3,1968
	ctx.r3.s64 = ctx.r3.s64 + 1968;
	// bl 0x8230a808
	ctx.lr = 0x8213F720;
	sub_8230A808(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x8213f754
	if (!ctx.cr6.eq) goto loc_8213F754;
	// addi r3,r31,1560
	ctx.r3.s64 = ctx.r31.s64 + 1560;
	// bl 0x8230a898
	ctx.lr = 0x8213F734;
	sub_8230A898(ctx, base);
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8213f74c
	if (!ctx.cr6.eq) goto loc_8213F74C;
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x8213f758
	goto loc_8213F758;
loc_8213F74C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213f0d8
	ctx.lr = 0x8213F754;
	sub_8213F0D8(ctx, base);
loc_8213F754:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_8213F758:
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

PPC_WEAK_FUNC(sub_8213F700) {
	__imp__sub_8213F700(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213F770) {
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
	// lbz r11,2004(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2004);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8213f7a8
	if (!ctx.cr6.eq) goto loc_8213F7A8;
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
loc_8213F7A8:
	// lwz r11,2000(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2000);
	// li r6,1
	ctx.r6.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8213f7e0
	if (!ctx.cr6.eq) goto loc_8213F7E0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213f700
	ctx.lr = 0x8213F7C0;
	sub_8213F700(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x8213f7e0
	if (ctx.cr6.eq) goto loc_8213F7E0;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x8213f7e8
	if (!ctx.cr6.eq) goto loc_8213F7E8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213f1a8
	ctx.lr = 0x8213F7DC;
	sub_8213F1A8(ctx, base);
	// bl 0x8213f208
	ctx.lr = 0x8213F7E0;
	sub_8213F208(ctx, base);
loc_8213F7E0:
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,2004(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2004, ctx.r11.u8);
loc_8213F7E8:
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
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

PPC_WEAK_FUNC(sub_8213F770) {
	__imp__sub_8213F770(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213F800) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x8213F808;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,1548(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1548);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// add r11,r10,r3
	ctx.r11.u64 = ctx.r10.u64 + ctx.r3.u64;
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
	// lbz r9,1036(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1036);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8213f85c
	if (ctx.cr6.eq) goto loc_8213F85C;
loc_8213F82C:
	// cmpwi cr6,r31,512
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 512, ctx.xer);
	// bge cr6,0x8213f85c
	if (!ctx.cr6.lt) goto loc_8213F85C;
	// addi r11,r30,1036
	ctx.r11.s64 = ctx.r30.s64 + 1036;
	// extsb r9,r4
	ctx.r9.s64 = ctx.r4.s8;
	// lbzx r8,r11,r31
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r31.u32);
	// extsb r7,r8
	ctx.r7.s64 = ctx.r8.s8;
	// cmpw cr6,r7,r9
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x8213f85c
	if (ctx.cr6.eq) goto loc_8213F85C;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lbzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r31.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8213f82c
	if (!ctx.cr6.eq) goto loc_8213F82C;
loc_8213F85C:
	// addi r11,r6,-1
	ctx.r11.s64 = ctx.r6.s64 + -1;
	// subf r5,r10,r31
	ctx.r5.s64 = ctx.r31.s64 - ctx.r10.s64;
	// cmpw cr6,r5,r11
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8213f870
	if (ctx.cr6.lt) goto loc_8213F870;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
loc_8213F870:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bgt cr6,0x8213f880
	if (ctx.cr6.gt) goto loc_8213F880;
	// li r29,0
	ctx.r29.s64 = 0;
	// b 0x8213f89c
	goto loc_8213F89C;
loc_8213F880:
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x8213f89c
	if (!ctx.cr6.gt) goto loc_8213F89C;
	// add r11,r10,r30
	ctx.r11.u64 = ctx.r10.u64 + ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r11,1036
	ctx.r4.s64 = ctx.r11.s64 + 1036;
	// bl 0x823de1f0
	ctx.lr = 0x8213F89C;
	sub_823DE1F0(ctx, base);
loc_8213F89C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r31,1548(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1548, ctx.r31.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stbx r11,r29,r28
	PPC_STORE_U8(ctx.r29.u32 + ctx.r28.u32, ctx.r11.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8213F800) {
	__imp__sub_8213F800(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213F8B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8213F8B4) {
	__imp__sub_8213F8B4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213F8B8) {
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
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,2036(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2036, ctx.r11.u32);
	// bl 0x82310110
	ctx.lr = 0x8213F8D8;
	sub_82310110(ctx, base);
	// lbz r10,2028(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2028);
	// stw r3,2024(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2024, ctx.r3.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8213f91c
	if (!ctx.cr6.eq) goto loc_8213F91C;
	// lis r11,-32153
	ctx.r11.s64 = -2107179008;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,-19296(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19296);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stb r10,2028(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2028, ctx.r10.u8);
	// mulli r11,r9,1000
	ctx.r11.s64 = ctx.r9.s64 * 1000;
	// add r8,r11,r3
	ctx.r8.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r8,2024(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2024, ctx.r8.u32);
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
loc_8213F91C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,2028(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2028, ctx.r11.u8);
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

PPC_WEAK_FUNC(sub_8213F8B8) {
	__imp__sub_8213F8B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213F938) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf5c
	ctx.lr = 0x8213F940;
	__savegprlr_21(ctx, base);
	// stwu r1,-688(r1)
	ea = -688 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,1032(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1032);
	// li r22,0
	ctx.r22.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// not r10,r11
	ctx.r10.u64 = ~ctx.r11.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
	// mr r27,r22
	ctx.r27.u64 = ctx.r22.u64;
	// clrlwi r28,r10,31
	ctx.r28.u64 = ctx.r10.u32 & 0x1;
	// ble cr6,0x8213fa0c
	if (!ctx.cr6.gt) goto loc_8213FA0C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// subfic r25,r4,1
	ctx.xer.ca = ctx.r4.u32 <= 1;
	ctx.r25.s64 = 1 - ctx.r4.s64;
	// addi r26,r11,10072
	ctx.r26.s64 = ctx.r11.s64 + 10072;
loc_8213F980:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x823df9e0
	ctx.lr = 0x8213F98C;
	sub_823DF9E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8213f9fc
	if (ctx.cr6.eq) goto loc_8213F9FC;
	// subf r21,r30,r27
	ctx.r21.s64 = ctx.r27.s64 - ctx.r30.s64;
	// add r4,r30,r24
	ctx.r4.u64 = ctx.r30.u64 + ctx.r24.u64;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822dd768
	ctx.lr = 0x8213F9A8;
	sub_822DD768(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stbx r22,r21,r11
	PPC_STORE_U8(ctx.r21.u32 + ctx.r11.u32, ctx.r22.u8);
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,64
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 64, ctx.xer);
	// bne cr6,0x8213f9cc
	if (!ctx.cr6.eq) goto loc_8213F9CC;
	// addi r3,r1,81
	ctx.r3.s64 = ctx.r1.s64 + 81;
	// bl 0x822c4080
	ctx.lr = 0x8213F9C4;
	sub_822C4080(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// b 0x8213f9d0
	goto loc_8213F9D0;
loc_8213F9CC:
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
loc_8213F9D0:
	// addi r10,r28,256
	ctx.r10.s64 = ctx.r28.s64 + 256;
	// lbz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// rlwinm r11,r28,9,0,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 9) & 0xFFFFFE00;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// extsb r8,r9
	ctx.r8.s64 = ctx.r9.s8;
	// add r5,r10,r29
	ctx.r5.u64 = ctx.r10.u64 + ctx.r29.u64;
	// li r4,512
	ctx.r4.s64 = 512;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x822e83d0
	ctx.lr = 0x8213F9F8;
	sub_822E83D0(ctx, base);
	// add r30,r25,r31
	ctx.r30.u64 = ctx.r25.u64 + ctx.r31.u64;
loc_8213F9FC:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r27,r23
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r23.s32, ctx.xer);
	// blt cr6,0x8213f980
	if (ctx.cr6.lt) goto loc_8213F980;
loc_8213FA0C:
	// subf. r31,r30,r27
	ctx.r31.s64 = ctx.r27.s64 - ctx.r30.s64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8213fa70
	if (ctx.cr0.eq) goto loc_8213FA70;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// add r4,r30,r24
	ctx.r4.u64 = ctx.r30.u64 + ctx.r24.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822dd768
	ctx.lr = 0x8213FA24;
	sub_822DD768(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stbx r22,r31,r11
	PPC_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r22.u8);
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,64
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 64, ctx.xer);
	// bne cr6,0x8213fa48
	if (!ctx.cr6.eq) goto loc_8213FA48;
	// addi r3,r1,81
	ctx.r3.s64 = ctx.r1.s64 + 81;
	// bl 0x822c4080
	ctx.lr = 0x8213FA40;
	sub_822C4080(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// b 0x8213fa4c
	goto loc_8213FA4C;
loc_8213FA48:
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
loc_8213FA4C:
	// addi r10,r28,256
	ctx.r10.s64 = ctx.r28.s64 + 256;
	// rlwinm r11,r28,9,0,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 9) & 0xFFFFFE00;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// add r5,r10,r29
	ctx.r5.u64 = ctx.r10.u64 + ctx.r29.u64;
	// addi r6,r9,-29844
	ctx.r6.s64 = ctx.r9.s64 + -29844;
	// li r4,512
	ctx.r4.s64 = 512;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x822e83d0
	ctx.lr = 0x8213FA70;
	sub_822E83D0(ctx, base);
loc_8213FA70:
	// addi r1,r1,688
	ctx.r1.s64 = ctx.r1.s64 + 688;
	// b 0x823ddfac
	__restgprlr_21(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8213F938) {
	__imp__sub_8213F938(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213FA78) {
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
	// stwu r1,-624(r1)
	ea = -624 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x8213f770
	ctx.lr = 0x8213FA9C;
	sub_8213F770(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8213fb74
	if (ctx.cr6.eq) goto loc_8213FB74;
	// bl 0x82141b20
	ctx.lr = 0x8213FAA8;
	sub_82141B20(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8213fb74
	if (ctx.cr6.eq) goto loc_8213FB74;
	// lwz r11,2036(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2036);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8213fb74
	if (!ctx.cr6.eq) goto loc_8213FB74;
	// bl 0x82310110
	ctx.lr = 0x8213FAC4;
	sub_82310110(ctx, base);
	// lwz r11,2024(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2024);
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// bgt cr6,0x8213fb74
	if (ctx.cr6.gt) goto loc_8213FB74;
	// li r6,512
	ctx.r6.s64 = 512;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,91
	ctx.r4.s64 = 91;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213f800
	ctx.lr = 0x8213FAE4;
	sub_8213F800(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213f938
	ctx.lr = 0x8213FAF4;
	sub_8213F938(ctx, base);
	// lwz r11,1548(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1548);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lbz r9,1036(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1036);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8213fb54
	if (ctx.cr6.eq) goto loc_8213FB54;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// li r6,512
	ctx.r6.s64 = 512;
	// stw r11,1548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1548, ctx.r11.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,93
	ctx.r4.s64 = 93;
	// bl 0x8213f800
	ctx.lr = 0x8213FB24;
	sub_8213F800(ctx, base);
	// lwz r11,1548(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1548);
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lbz r9,1036(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1036);
	// cmplwi cr6,r9,93
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 93, ctx.xer);
	// beq cr6,0x8213fb5c
	if (ctx.cr6.eq) goto loc_8213FB5C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,10080
	ctx.r4.s64 = ctx.r11.s64 + 10080;
	// bl 0x82280b08
	ctx.lr = 0x8213FB48;
	sub_82280B08(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213f1a8
	ctx.lr = 0x8213FB50;
	sub_8213F1A8(ctx, base);
	// bl 0x8213f208
	ctx.lr = 0x8213FB54;
	sub_8213F208(ctx, base);
loc_8213FB54:
	// bl 0x8213f8b8
	ctx.lr = 0x8213FB58;
	sub_8213F8B8(ctx, base);
	// b 0x8213fb74
	goto loc_8213FB74;
loc_8213FB5C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,1548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1548, ctx.r11.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8213f590
	ctx.lr = 0x8213FB74;
	sub_8213F590(ctx, base);
loc_8213FB74:
	// addi r1,r1,624
	ctx.r1.s64 = ctx.r1.s64 + 624;
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

PPC_WEAK_FUNC(sub_8213FA78) {
	__imp__sub_8213FA78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213FB8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8213FB8C) {
	__imp__sub_8213FB8C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213FB90) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r4,1
	ctx.r4.s64 = 65536;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// ori r4,r4,32768
	ctx.r4.u64 = ctx.r4.u64 | 32768;
	// bl 0x822db808
	ctx.lr = 0x8213FBB8;
	sub_822DB808(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822db8f0
	ctx.lr = 0x8213FBC0;
	sub_822DB8F0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r6,2032(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2032);
	// addi r5,r11,10172
	ctx.r5.s64 = ctx.r11.s64 + 10172;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822e8368
	ctx.lr = 0x8213FBDC;
	sub_822E8368(ctx, base);
	// lis r5,1
	ctx.r5.s64 = 65536;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// ori r5,r5,32768
	ctx.r5.u64 = ctx.r5.u64 | 32768;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8227ff50
	ctx.lr = 0x8213FBF0;
	sub_8227FF50(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8213fc28
	if (!ctx.cr6.eq) goto loc_8213FC28;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-18340
	ctx.r4.s64 = ctx.r11.s64 + -18340;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82280b08
	ctx.lr = 0x8213FC10;
	sub_82280B08(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r4,512
	ctx.r4.s64 = 512;
	// addi r5,r10,10136
	ctx.r5.s64 = ctx.r10.s64 + 10136;
	// addi r3,r31,1036
	ctx.r3.s64 = ctx.r31.s64 + 1036;
	// bl 0x822e8368
	ctx.lr = 0x8213FC24;
	sub_822E8368(ctx, base);
	// b 0x8213fc34
	goto loc_8213FC34;
loc_8213FC28:
	// li r5,512
	ctx.r5.s64 = 512;
	// addi r3,r31,1036
	ctx.r3.s64 = ctx.r31.s64 + 1036;
	// bl 0x822e7e98
	ctx.lr = 0x8213FC34;
	sub_822E7E98(ctx, base);
loc_8213FC34:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822db8d8
	ctx.lr = 0x8213FC3C;
	sub_822DB8D8(ctx, base);
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

PPC_WEAK_FUNC(sub_8213FB90) {
	__imp__sub_8213FB90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213FC54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8213FC54) {
	__imp__sub_8213FC54(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213FC58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8213FC60;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82141398
	ctx.lr = 0x8213FC6C;
	sub_82141398(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8213fca0
	if (ctx.cr6.eq) goto loc_8213FCA0;
	// bl 0x821414f0
	ctx.lr = 0x8213FC7C;
	sub_821414F0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x8230bd68
	ctx.lr = 0x8213FC84;
	sub_8230BD68(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8213fca0
	if (ctx.cr6.eq) goto loc_8213FCA0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8230bd88
	ctx.lr = 0x8213FC98;
	sub_8230BD88(ctx, base);
	// std r3,2016(r31)
	PPC_STORE_U64(ctx.r31.u32 + 2016, ctx.r3.u64);
	// b 0x8213fca4
	goto loc_8213FCA4;
loc_8213FCA0:
	// std r30,2016(r31)
	PPC_STORE_U64(ctx.r31.u32 + 2016, ctx.r30.u64);
loc_8213FCA4:
	// lwz r11,1032(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1032);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r30,2036(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2036, ctx.r30.u32);
	// addi r9,r11,256
	ctx.r9.s64 = ctx.r11.s64 + 256;
	// stw r30,1548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1548, ctx.r30.u32);
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f0,6912(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6912);
	ctx.f0.f64 = double(temp.f32);
	// stwx r30,r8,r31
	PPC_STORE_U32(ctx.r8.u32 + ctx.r31.u32, ctx.r30.u32);
	// stfs f0,1552(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1552, temp.u32);
	// lwz r7,1032(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1032);
	// not r6,r7
	ctx.r6.u64 = ~ctx.r7.u64;
	// clrlwi r5,r6,31
	ctx.r5.u64 = ctx.r6.u32 & 0x1;
	// stw r5,1032(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1032, ctx.r5.u32);
	// bl 0x82310110
	ctx.lr = 0x8213FCDC;
	sub_82310110(ctx, base);
	// stw r3,1556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1556, ctx.r3.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8213FC58) {
	__imp__sub_8213FC58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213FCE8) {
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
	// li r5,2040
	ctx.r5.s64 = 2040;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x823de090
	ctx.lr = 0x8213FD10;
	sub_823DE090(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r30,2032(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2032, ctx.r30.u32);
	// stw r11,2036(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2036, ctx.r11.u32);
	// stb r11,2028(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2028, ctx.r11.u8);
	// lfs f0,6912(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6912);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,1552(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1552, temp.u32);
	// bl 0x82310110
	ctx.lr = 0x8213FD30;
	sub_82310110(ctx, base);
	// stw r3,1556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1556, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213fb90
	ctx.lr = 0x8213FD3C;
	sub_8213FB90(ctx, base);
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

PPC_WEAK_FUNC(sub_8213FCE8) {
	__imp__sub_8213FCE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213FD54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8213FD54) {
	__imp__sub_8213FD54(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213FD58) {
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
	// lis r30,-32153
	ctx.r30.s64 = -2107179008;
	// li r5,2040
	ctx.r5.s64 = 2040;
	// addi r31,r30,-19296
	ctx.r31.s64 = ctx.r30.s64 + -19296;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x823de090
	ctx.lr = 0x8213FD84;
	sub_823DE090(ctx, base);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,2040(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2040, ctx.r11.u32);
	// stw r10,2044(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2044, ctx.r10.u32);
	// lfs f0,6912(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 6912);
	ctx.f0.f64 = double(temp.f32);
	// stb r9,2036(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2036, ctx.r9.u8);
	// stfs f0,1560(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1560, temp.u32);
	// bl 0x82310110
	ctx.lr = 0x8213FDAC;
	sub_82310110(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// stw r11,1564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1564, ctx.r11.u32);
	// bl 0x8213fb90
	ctx.lr = 0x8213FDBC;
	sub_8213FB90(ctx, base);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// lis r6,32767
	ctx.r6.s64 = 2147418112;
	// addi r8,r7,10220
	ctx.r8.s64 = ctx.r7.s64 + 10220;
	// addi r3,r5,10196
	ctx.r3.s64 = ctx.r5.s64 + 10196;
	// li r7,0
	ctx.r7.s64 = 0;
	// ori r6,r6,65535
	ctx.r6.u64 = ctx.r6.u64 | 65535;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,300
	ctx.r4.s64 = 300;
	// bl 0x822e1618
	ctx.lr = 0x8213FDE4;
	sub_822E1618(ctx, base);
	// stw r3,-19296(r30)
	PPC_STORE_U32(ctx.r30.u32 + -19296, ctx.r3.u32);
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

PPC_WEAK_FUNC(sub_8213FD58) {
	__imp__sub_8213FD58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213FE00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32153
	ctx.r11.s64 = -2107179008;
	// addi r11,r11,-19288
	ctx.r11.s64 = ctx.r11.s64 + -19288;
	// lwz r10,2032(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2032);
	// cmpw cr6,r10,r3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r3.s32, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r10,2036(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2036);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x8213fc58
	sub_8213FC58(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8213FE00) {
	__imp__sub_8213FE00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213FE28) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8213FE28) {
	__imp__sub_8213FE28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213FE2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8213FE2C) {
	__imp__sub_8213FE2C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213FE30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32153
	ctx.r11.s64 = -2107179008;
	// addi r11,r11,-19288
	ctx.r11.s64 = ctx.r11.s64 + -19288;
	// lwz r10,2032(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2032);
	// cmpw cr6,r10,r3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r3.s32, ctx.xer);
	// bne cr6,0x8213fe54
	if (!ctx.cr6.eq) goto loc_8213FE54;
	// lwz r10,1032(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1032);
	// rlwinm r10,r10,9,0,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 9) & 0xFFFFFE00;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blr 
	return;
loc_8213FE54:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8213FE30) {
	__imp__sub_8213FE30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213FE5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8213FE5C) {
	__imp__sub_8213FE5C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213FE60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32153
	ctx.r11.s64 = -2107179008;
	// addi r11,r11,-19288
	ctx.r11.s64 = ctx.r11.s64 + -19288;
	// lwz r10,2032(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2032);
	// cmpw cr6,r10,r3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r3.s32, ctx.xer);
	// bne cr6,0x8213fe88
	if (!ctx.cr6.eq) goto loc_8213FE88;
	// lwz r10,1032(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1032);
	// addi r11,r11,1024
	ctx.r11.s64 = ctx.r11.s64 + 1024;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// blr 
	return;
loc_8213FE88:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8213FE60) {
	__imp__sub_8213FE60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213FE90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32153
	ctx.r11.s64 = -2107179008;
	// addi r11,r11,-19288
	ctx.r11.s64 = ctx.r11.s64 + -19288;
	// lwz r10,2032(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2032);
	// cmpw cr6,r10,r3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r3.s32, ctx.xer);
	// bne cr6,0x8213feac
	if (!ctx.cr6.eq) goto loc_8213FEAC;
	// lfs f1,1552(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1552);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_8213FEAC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8213FE90) {
	__imp__sub_8213FE90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213FEB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32153
	ctx.r11.s64 = -2107179008;
	// addi r11,r11,-19288
	ctx.r11.s64 = ctx.r11.s64 + -19288;
	// lwz r10,2032(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2032);
	// cmpw cr6,r10,r3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r3.s32, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// stfs f1,1552(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1552, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8213FEB8) {
	__imp__sub_8213FEB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213FED4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8213FED4) {
	__imp__sub_8213FED4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213FED8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32153
	ctx.r11.s64 = -2107179008;
	// addi r10,r11,-19288
	ctx.r10.s64 = ctx.r11.s64 + -19288;
	// lwz r11,2032(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2032);
	// lwz r10,1556(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1556);
	// subf r9,r11,r3
	ctx.r9.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addic r8,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r6,r10
	ctx.r3.u64 = ctx.r6.u64 & ctx.r10.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8213FED8) {
	__imp__sub_8213FED8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213FEFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8213FEFC) {
	__imp__sub_8213FEFC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213FF00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32153
	ctx.r11.s64 = -2107179008;
	// addi r11,r11,-19288
	ctx.r11.s64 = ctx.r11.s64 + -19288;
	// lwz r10,2032(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2032);
	// cmpw cr6,r10,r3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r3.s32, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// stw r4,1556(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1556, ctx.r4.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8213FF00) {
	__imp__sub_8213FF00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213FF1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8213FF1C) {
	__imp__sub_8213FF1C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213FF20) {
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
	// lis r11,-32153
	ctx.r11.s64 = -2107179008;
	// addi r10,r11,-19288
	ctx.r10.s64 = ctx.r11.s64 + -19288;
	// lwz r11,2032(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2032);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// addic r8,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r31,r6,r10
	ctx.r31.u64 = ctx.r6.u64 & ctx.r10.u64;
	// bl 0x82310110
	ctx.lr = 0x8213FF50;
	sub_82310110(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r3,2024(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2024, ctx.r3.u32);
	// stb r5,2028(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2028, ctx.r5.u8);
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

PPC_WEAK_FUNC(sub_8213FF20) {
	__imp__sub_8213FF20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213FF70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32153
	ctx.r11.s64 = -2107179008;
	// addi r10,r11,-19288
	ctx.r10.s64 = ctx.r11.s64 + -19288;
	// lwz r11,2032(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2032);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// addic r8,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r4,r6,r10
	ctx.r4.u64 = ctx.r6.u64 & ctx.r10.u64;
	// b 0x8213fa78
	sub_8213FA78(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8213FF70) {
	__imp__sub_8213FF70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213FF90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32153
	ctx.r11.s64 = -2107179008;
	// addi r10,r11,-19288
	ctx.r10.s64 = ctx.r11.s64 + -19288;
	// lwz r11,2032(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2032);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// addic r8,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r6,r10
	ctx.r3.u64 = ctx.r6.u64 & ctx.r10.u64;
	// b 0x8213fb90
	sub_8213FB90(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8213FF90) {
	__imp__sub_8213FF90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8213FFB0) {
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
	// bl 0x823de010
	ctx.lr = 0x8213FFC4;
	__savefpr_22(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,308(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
	// lwz r9,300(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 300);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// extsw r7,r11
	ctx.r7.s64 = ctx.r11.s32;
	// fmr f26,f5
	ctx.fpscr.disableFlushMode();
	ctx.f26.f64 = ctx.f5.f64;
	// extsw r6,r9
	ctx.r6.s64 = ctx.r9.s32;
	// fmr f30,f1
	ctx.f30.f64 = ctx.f1.f64;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lfs f0,12168(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// fcfid f9,f13
	ctx.f9.f64 = double(ctx.f13.s64);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// fsubs f10,f0,f6
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f6.f64));
	// fsubs f8,f0,f7
	ctx.f8.f64 = double(float(ctx.f0.f64 - ctx.f7.f64));
	// frsp f24,f9
	ctx.f24.f64 = double(float(ctx.f9.f64));
	// fmr f29,f2
	ctx.f29.f64 = ctx.f2.f64;
	// lfs f31,2416(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2416);
	ctx.f31.f64 = double(temp.f32);
	// fmr f28,f3
	ctx.f28.f64 = ctx.f3.f64;
	// fmr f27,f4
	ctx.f27.f64 = ctx.f4.f64;
	// frsp f25,f11
	ctx.f25.f64 = double(float(ctx.f11.f64));
	// fmuls f5,f8,f24
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f24.f64));
	// fmuls f7,f10,f25
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f25.f64));
	// fmuls f23,f5,f31
	ctx.f23.f64 = double(float(ctx.f5.f64 * ctx.f31.f64));
	// fmuls f6,f7,f31
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f31.f64));
	// fadds f1,f6,f31
	ctx.f1.f64 = double(float(ctx.f6.f64 + ctx.f31.f64));
	// bl 0x823dde20
	ctx.lr = 0x82140040;
	sub_823DDE20(ctx, base);
	// frsp f22,f1
	ctx.fpscr.disableFlushMode();
	ctx.f22.f64 = double(float(ctx.f1.f64));
	// fadds f1,f23,f31
	ctx.f1.f64 = double(float(ctx.f23.f64 + ctx.f31.f64));
	// bl 0x823dde20
	ctx.lr = 0x8214004C;
	sub_823DDE20(ctx, base);
	// frsp f4,f1
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = double(float(ctx.f1.f64));
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// fsubs f3,f25,f22
	ctx.f3.f64 = double(float(ctx.f25.f64 - ctx.f22.f64));
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// fadds f2,f30,f28
	ctx.f2.f64 = double(float(ctx.f30.f64 + ctx.f28.f64));
	// lwz r11,276(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// fadds f1,f29,f27
	ctx.f1.f64 = double(float(ctx.f29.f64 + ctx.f27.f64));
	// lwz r10,284(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 284);
	// fsubs f13,f30,f22
	ctx.f13.f64 = double(float(ctx.f30.f64 - ctx.f22.f64));
	// lwz r9,292(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// lfs f0,4452(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4452);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f12,f0,f28
	ctx.f12.f64 = double(float(ctx.f0.f64 / ctx.f28.f64));
	// lfs f0,4376(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4376);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f11,f0,f27
	ctx.f11.f64 = double(float(ctx.f0.f64 / ctx.f27.f64));
	// fsubs f10,f24,f4
	ctx.f10.f64 = double(float(ctx.f24.f64 - ctx.f4.f64));
	// fsubs f9,f29,f4
	ctx.f9.f64 = double(float(ctx.f29.f64 - ctx.f4.f64));
	// fsubs f8,f3,f2
	ctx.f8.f64 = double(float(ctx.f3.f64 - ctx.f2.f64));
	// fsel f7,f13,f30,f22
	ctx.f7.f64 = ctx.f13.f64 >= 0.0 ? ctx.f30.f64 : ctx.f22.f64;
	// fsubs f6,f10,f1
	ctx.f6.f64 = double(float(ctx.f10.f64 - ctx.f1.f64));
	// fsel f5,f9,f29,f4
	ctx.f5.f64 = ctx.f9.f64 >= 0.0 ? ctx.f29.f64 : ctx.f4.f64;
	// fsel f4,f8,f2,f3
	ctx.f4.f64 = ctx.f8.f64 >= 0.0 ? ctx.f2.f64 : ctx.f3.f64;
	// fsubs f3,f7,f30
	ctx.f3.f64 = double(float(ctx.f7.f64 - ctx.f30.f64));
	// stfs f3,0(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// fsel f2,f6,f1,f10
	ctx.f2.f64 = ctx.f6.f64 >= 0.0 ? ctx.f1.f64 : ctx.f10.f64;
	// fsubs f1,f5,f29
	ctx.f1.f64 = double(float(ctx.f5.f64 - ctx.f29.f64));
	// stfs f1,4(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// fsubs f0,f4,f30
	ctx.f0.f64 = double(float(ctx.f4.f64 - ctx.f30.f64));
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// fsubs f13,f2,f29
	ctx.f13.f64 = double(float(ctx.f2.f64 - ctx.f29.f64));
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f10,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f10,f12
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// fmuls f8,f9,f26
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f26.f64));
	// stfs f8,0(r10)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lfs f7,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f7,f11
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f11.f64));
	// stfs f6,4(r10)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// lfs f5,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f5,f12
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f12.f64));
	// fmuls f3,f4,f26
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f26.f64));
	// stfs f3,0(r9)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// lfs f2,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f1,f11,f2
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f2.f64));
	// stfs f1,4(r9)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// addi r12,r1,-16
	ctx.r12.s64 = ctx.r1.s64 + -16;
	// bl 0x823de05c
	ctx.lr = 0x82140108;
	__restfpr_22(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8213FFB0) {
	__imp__sub_8213FFB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82140118) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82140120;
	__savegprlr_29(ctx, base);
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x823de024
	ctx.lr = 0x82140128;
	__savefpr_27(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r9
	ctx.r30.u64 = ctx.r9.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// lis r11,-32153
	ctx.r11.s64 = -2107179008;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// lis r9,-32153
	ctx.r9.s64 = -2107179008;
	// fmr f29,f3
	ctx.f29.f64 = ctx.f3.f64;
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
	// fmr f28,f4
	ctx.f28.f64 = ctx.f4.f64;
	// addi r8,r3,48
	ctx.r8.s64 = ctx.r3.s64 + 48;
	// fmr f27,f5
	ctx.f27.f64 = ctx.f5.f64;
	// addi r7,r3,40
	ctx.r7.s64 = ctx.r3.s64 + 40;
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// lwz r11,-17024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17024);
	// addi r6,r3,64
	ctx.r6.s64 = ctx.r3.s64 + 64;
	// lwz r9,-16900(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + -16900);
	// addi r10,r3,56
	ctx.r10.s64 = ctx.r3.s64 + 56;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// lfs f7,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lfs f6,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f6.f64 = double(temp.f32);
	// bl 0x8213ffb0
	ctx.lr = 0x8214018C;
	sub_8213FFB0(ctx, base);
	// lis r5,-32153
	ctx.r5.s64 = -2107179008;
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// lis r4,-32153
	ctx.r4.s64 = -2107179008;
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// fmr f5,f27
	ctx.fpscr.disableFlushMode();
	ctx.f5.f64 = ctx.f27.f64;
	// addi r8,r31,72
	ctx.r8.s64 = ctx.r31.s64 + 72;
	// fmr f4,f28
	ctx.f4.f64 = ctx.f28.f64;
	// addi r7,r31,96
	ctx.r7.s64 = ctx.r31.s64 + 96;
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// lwz r11,-17244(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + -17244);
	// addi r10,r31,88
	ctx.r10.s64 = ctx.r31.s64 + 88;
	// lwz r9,-17016(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + -17016);
	// fmr f3,f29
	ctx.f3.f64 = ctx.f29.f64;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// lfs f7,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f6.f64 = double(temp.f32);
	// bl 0x8213ffb0
	ctx.lr = 0x821401E0;
	sub_8213FFB0(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x823de070
	ctx.lr = 0x821401EC;
	__restfpr_27(ctx, base);
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82140118) {
	__imp__sub_82140118(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821401F0) {
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
	ctx.lr = 0x82140204;
	__savefpr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// stfs f3,32(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// stfs f4,36(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// addi r7,r11,28832
	ctx.r7.s64 = ctx.r11.s64 + 28832;
	// stfs f1,24(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stfs f2,28(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f3
	ctx.f31.f64 = ctx.f3.f64;
	// fmr f30,f4
	ctx.f30.f64 = ctx.f4.f64;
	// lfs f0,428(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 428);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f0,f4,f0
	ctx.f0.f64 = double(float(ctx.f4.f64 / ctx.f0.f64));
	// lfs f13,32272(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 32272);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f29,f0,f13
	ctx.f29.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fcmpu cr6,f3,f29
	ctx.cr6.compare(ctx.f3.f64, ctx.f29.f64);
	// bge cr6,0x82140250
	if (!ctx.cr6.lt) goto loc_82140250;
	// fmr f29,f3
	ctx.f29.f64 = ctx.f3.f64;
loc_82140250:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f4,f30
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f30.f64;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f28,f0,f29
	ctx.f28.f64 = double(float(ctx.f0.f64 / ctx.f29.f64));
	// fmuls f5,f28,f31
	ctx.f5.f64 = double(float(ctx.f28.f64 * ctx.f31.f64));
	// bl 0x82140118
	ctx.lr = 0x82140274;
	sub_82140118(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fsubs f11,f31,f29
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f31.f64 - ctx.f29.f64));
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lfs f13,14152(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 14152);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,10268(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 10268);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f10,f30,f13
	ctx.f10.f64 = double(float(ctx.f30.f64 * ctx.f13.f64));
	// lfs f13,4452(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4452);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f9,f29,f0
	ctx.f9.f64 = double(float(ctx.f29.f64 * ctx.f0.f64));
	// lfs f12,4376(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4376);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f8,f31,f0
	ctx.f8.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
	// lfs f0,2416(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 2416);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f7,f28,f13
	ctx.f7.f64 = double(float(ctx.f28.f64 * ctx.f13.f64));
	// stfs f10,4(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// fdivs f6,f12,f30
	ctx.f6.f64 = double(float(ctx.f12.f64 / ctx.f30.f64));
	// stfs f9,0(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// fmuls f5,f11,f0
	ctx.f5.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f8,8(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// stfs f10,12(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// stfs f7,16(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// stfs f6,20(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// stfs f5,104(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 104, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// addi r12,r1,-16
	ctx.r12.s64 = ctx.r1.s64 + -16;
	// bl 0x823de074
	ctx.lr = 0x821402E0;
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

PPC_WEAK_FUNC(sub_821401F0) {
	__imp__sub_821401F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821402F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// addi r10,r11,28832
	ctx.r10.s64 = ctx.r11.s64 + 28832;
	// lwz r9,404(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 404);
	// lwz r8,400(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 400);
	// b 0x821401f0
	sub_821401F0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821402F0) {
	__imp__sub_821402F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82140304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82140304) {
	__imp__sub_82140304(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82140308) {
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
	// extsw r11,r6
	ctx.r11.s64 = ctx.r6.s32;
	// extsw r6,r4
	ctx.r6.s64 = ctx.r4.s32;
	// extsw r10,r5
	ctx.r10.s64 = ctx.r5.s32;
	// extsw r5,r7
	ctx.r5.s64 = ctx.r7.s32;
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f7,f0
	ctx.f7.f64 = double(ctx.f0.s64);
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f8,f13
	ctx.f8.f64 = double(ctx.f13.s64);
	// fcfid f9,f12
	ctx.f9.f64 = double(ctx.f12.s64);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f4,f8
	ctx.f4.f64 = double(float(ctx.f8.f64));
	// frsp f1,f7
	ctx.f1.f64 = double(float(ctx.f7.f64));
	// frsp f3,f9
	ctx.f3.f64 = double(float(ctx.f9.f64));
	// frsp f2,f10
	ctx.f2.f64 = double(float(ctx.f10.f64));
	// bl 0x821401f0
	ctx.lr = 0x82140368;
	sub_821401F0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82140308) {
	__imp__sub_82140308(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82140378) {
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
	// extsw r9,r4
	ctx.r9.s64 = ctx.r4.s32;
	// extsw r8,r7
	ctx.r8.s64 = ctx.r7.s32;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// extsw r11,r6
	ctx.r11.s64 = ctx.r6.s32;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// extsw r10,r5
	ctx.r10.s64 = ctx.r5.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f7,f0
	ctx.f7.f64 = double(ctx.f0.s64);
	// lis r7,-32165
	ctx.r7.s64 = -2107965440;
	// addi r6,r7,28832
	ctx.r6.s64 = ctx.r7.s64 + 28832;
	// frsp f1,f7
	ctx.f1.f64 = double(float(ctx.f7.f64));
	// fcfid f8,f13
	ctx.f8.f64 = double(ctx.f13.s64);
	// fcfid f9,f12
	ctx.f9.f64 = double(ctx.f12.s64);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// lwz r9,404(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 404);
	// lwz r8,400(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 400);
	// frsp f4,f8
	ctx.f4.f64 = double(float(ctx.f8.f64));
	// frsp f3,f9
	ctx.f3.f64 = double(float(ctx.f9.f64));
	// frsp f2,f10
	ctx.f2.f64 = double(float(ctx.f10.f64));
	// bl 0x821401f0
	ctx.lr = 0x821403E8;
	sub_821401F0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82140378) {
	__imp__sub_82140378(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821403F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf64
	ctx.lr = 0x82140400;
	__savegprlr_23(ctx, base);
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x823de024
	ctx.lr = 0x82140408;
	__savefpr_27(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r26,-32153
	ctx.r26.s64 = -2107179008;
	// lis r25,-32153
	ctx.r25.s64 = -2107179008;
	// lis r24,-32153
	ctx.r24.s64 = -2107179008;
	// lis r23,-32153
	ctx.r23.s64 = -2107179008;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,-16900(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + -16900);
	// lwz r11,-17024(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -17024);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r10,-17016(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + -17016);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r9,-17244(r23)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r23.u32 + -17244);
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// lfs f31,12168(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12168);
	ctx.f31.f64 = double(temp.f32);
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// lfs f29,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f29.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// lfs f30,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f30.f64 = double(temp.f32);
	// lfs f28,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f28.f64 = double(temp.f32);
	// lfs f27,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f27.f64 = double(temp.f32);
	// bl 0x822e1f88
	ctx.lr = 0x82140460;
	sub_822E1F88(ctx, base);
	// lwz r3,-17024(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + -17024);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x822e1f88
	ctx.lr = 0x8214046C;
	sub_822E1F88(ctx, base);
	// lwz r3,-17016(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + -17016);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x822e1f88
	ctx.lr = 0x82140478;
	sub_822E1F88(ctx, base);
	// lwz r3,-17244(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + -17244);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x822e1f88
	ctx.lr = 0x82140484;
	sub_822E1F88(ctx, base);
	// extsw r7,r30
	ctx.r7.s64 = ctx.r30.s32;
	// extsw r6,r27
	ctx.r6.s64 = ctx.r27.s32;
	// extsw r5,r28
	ctx.r5.s64 = ctx.r28.s32;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r6,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r6.u64);
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// extsw r4,r29
	ctx.r4.s64 = ctx.r29.s32;
	// fcfid f7,f0
	ctx.f7.f64 = double(ctx.f0.s64);
	// lis r3,-32165
	ctx.r3.s64 = -2107965440;
	// std r4,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r4.u64);
	// lfd f11,88(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// addi r11,r3,28832
	ctx.r11.s64 = ctx.r3.s64 + 28832;
	// fcfid f9,f12
	ctx.f9.f64 = double(ctx.f12.s64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fcfid f8,f13
	ctx.f8.f64 = double(ctx.f13.s64);
	// lwz r9,404(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 404);
	// lwz r8,400(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 400);
	// frsp f2,f10
	ctx.f2.f64 = double(float(ctx.f10.f64));
	// frsp f1,f7
	ctx.f1.f64 = double(float(ctx.f7.f64));
	// frsp f3,f9
	ctx.f3.f64 = double(float(ctx.f9.f64));
	// frsp f4,f8
	ctx.f4.f64 = double(float(ctx.f8.f64));
	// bl 0x821401f0
	ctx.lr = 0x821404EC;
	sub_821401F0(ctx, base);
	// lwz r3,-16900(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + -16900);
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x822e1f88
	ctx.lr = 0x821404F8;
	sub_822E1F88(ctx, base);
	// lwz r3,-17024(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + -17024);
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x822e1f88
	ctx.lr = 0x82140504;
	sub_822E1F88(ctx, base);
	// lwz r3,-17016(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + -17016);
	// fmr f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f28.f64;
	// bl 0x822e1f88
	ctx.lr = 0x82140510;
	sub_822E1F88(ctx, base);
	// lwz r3,-17244(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + -17244);
	// fmr f1,f27
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f27.f64;
	// bl 0x822e1f88
	ctx.lr = 0x8214051C;
	sub_822E1F88(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x823de070
	ctx.lr = 0x82140528;
	__restfpr_27(ctx, base);
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821403F8) {
	__imp__sub_821403F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214052C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8214052C) {
	__imp__sub_8214052C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82140530) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// addi r11,r5,-1
	ctx.r11.s64 = ctx.r5.s64 + -1;
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// bgt cr6,0x82140638
	if (ctx.cr6.gt) goto loc_82140638;
	// lis r12,-32236
	ctx.r12.s64 = -2112618496;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,1364
	ctx.r12.s64 = ctx.r12.s64 + 1364;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_8214057C;
	case 1:
		goto loc_8214058C;
	case 2:
		goto loc_821405CC;
	case 3:
		goto loc_82140620;
	case 4:
		goto loc_82140644;
	case 5:
		goto loc_8214062C;
	case 6:
		goto loc_821405A8;
	case 7:
		goto loc_821405DC;
	case 8:
		goto loc_821405EC;
	case 9:
		goto loc_82140610;
	default:
		return;
	}
	// lwz r16,1404(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 1404);
	// lwz r16,1420(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 1420);
	// lwz r16,1484(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 1484);
	// lwz r16,1568(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 1568);
	// lwz r16,1604(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 1604);
	// lwz r16,1580(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 1580);
	// lwz r16,1448(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 1448);
	// lwz r16,1500(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 1500);
	// lwz r16,1516(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 1516);
	// lwz r16,1552(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 1552);
loc_8214057C:
	// lfs f13,56(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f1,f0,f1,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f1.f64 + ctx.f13.f64));
	// blr 
	return;
loc_8214058C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,32(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,2416(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2416);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmadds f1,f12,f1,f11
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f1.f64 + ctx.f11.f64));
	// blr 
	return;
loc_821405A8:
	// lfs f0,64(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,56(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// fmuls f10,f12,f1
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f1.f64));
	// lfs f0,2416(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2416);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f1,f11,f0,f10
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f0.f64 + ctx.f10.f64));
	// blr 
	return;
loc_821405CC:
	// lfs f13,64(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f1,f0,f1,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f1.f64 + ctx.f13.f64));
	// blr 
	return;
loc_821405DC:
	// lfs f13,88(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f1,f0,f1,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f1.f64 + ctx.f13.f64));
	// blr 
	return;
loc_821405EC:
	// lfs f0,96(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,88(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// fmuls f10,f12,f1
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f1.f64));
	// lfs f0,2416(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2416);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f1,f11,f0,f10
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f0.f64 + ctx.f10.f64));
	// blr 
	return;
loc_82140610:
	// lfs f13,96(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f1,f0,f1,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f1.f64 + ctx.f13.f64));
	// blr 
	return;
loc_82140620:
	// lfs f0,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f0,f1
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// blr 
	return;
loc_8214062C:
	// lfs f0,16(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f0,f1
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// blr 
	return;
loc_82140638:
	// lfs f13,104(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f1,f0,f1,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f1.f64 + ctx.f13.f64));
loc_82140644:
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82140530) {
	__imp__sub_82140530(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82140648) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32153
	ctx.r11.s64 = -2107179008;
	// lwz r11,-17248(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17248);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82140668
	if (ctx.cr6.eq) goto loc_82140668;
	// lis r11,-32153
	ctx.r11.s64 = -2107179008;
	// lfs f0,-16788(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -16788);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f0,f1
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
loc_82140668:
	// b 0x82140530
	sub_82140530(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82140648) {
	__imp__sub_82140648(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214066C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8214066C) {
	__imp__sub_8214066C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82140670) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// addi r11,r5,-1
	ctx.r11.s64 = ctx.r5.s64 + -1;
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// bgt cr6,0x82140778
	if (ctx.cr6.gt) goto loc_82140778;
	// lis r12,-32236
	ctx.r12.s64 = -2112618496;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,1684
	ctx.r12.s64 = ctx.r12.s64 + 1684;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_821406BC;
	case 1:
		goto loc_821406CC;
	case 2:
		goto loc_8214070C;
	case 3:
		goto loc_82140760;
	case 4:
		goto loc_82140780;
	case 5:
		goto loc_8214076C;
	case 6:
		goto loc_821406E8;
	case 7:
		goto loc_8214071C;
	case 8:
		goto loc_8214072C;
	case 9:
		goto loc_82140750;
	default:
		return;
	}
	// lwz r16,1724(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 1724);
	// lwz r16,1740(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 1740);
	// lwz r16,1804(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 1804);
	// lwz r16,1888(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 1888);
	// lwz r16,1920(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 1920);
	// lwz r16,1900(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 1900);
	// lwz r16,1768(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 1768);
	// lwz r16,1820(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 1820);
	// lwz r16,1836(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 1836);
	// lwz r16,1872(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 1872);
loc_821406BC:
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,60(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f1,f0,f1,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f1.f64 + ctx.f13.f64));
	// blr 
	return;
loc_821406CC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,36(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,2416(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2416);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmadds f1,f12,f1,f11
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f1.f64 + ctx.f11.f64));
	// blr 
	return;
loc_821406E8:
	// lfs f0,68(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,60(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// fmuls f10,f12,f1
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f1.f64));
	// lfs f0,2416(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2416);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f1,f11,f0,f10
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f0.f64 + ctx.f10.f64));
	// blr 
	return;
loc_8214070C:
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,68(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f1,f0,f1,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f1.f64 + ctx.f13.f64));
	// blr 
	return;
loc_8214071C:
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,92(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f1,f0,f1,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f1.f64 + ctx.f13.f64));
	// blr 
	return;
loc_8214072C:
	// lfs f0,100(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,92(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// fmuls f10,f12,f1
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f1.f64));
	// lfs f0,2416(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2416);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f1,f11,f0,f10
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f0.f64 + ctx.f10.f64));
	// blr 
	return;
loc_82140750:
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,100(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f1,f0,f1,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f1.f64 + ctx.f13.f64));
	// blr 
	return;
loc_82140760:
	// lfs f0,12(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f0,f1
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// blr 
	return;
loc_8214076C:
	// lfs f0,20(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f0,f1
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// blr 
	return;
loc_82140778:
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f0,f1
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
loc_82140780:
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82140670) {
	__imp__sub_82140670(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82140784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82140784) {
	__imp__sub_82140784(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82140788) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32153
	ctx.r11.s64 = -2107179008;
	// lwz r11,-17248(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17248);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821407a8
	if (ctx.cr6.eq) goto loc_821407A8;
	// lis r11,-32153
	ctx.r11.s64 = -2107179008;
	// lfs f0,-16788(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -16788);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f0,f1
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
loc_821407A8:
	// b 0x82140670
	sub_82140670(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82140788) {
	__imp__sub_82140788(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821407AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821407AC) {
	__imp__sub_821407AC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821407B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32153
	ctx.r10.s64 = -2107179008;
	// lis r11,-32153
	ctx.r11.s64 = -2107179008;
	// lwz r10,-17248(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -17248);
	// lbz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 12);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821407e8
	if (ctx.cr6.eq) goto loc_821407E8;
	// lfs f0,-16788(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -16788);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f12,0(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lfs f0,-16788(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -16788);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f10,0(r4)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
loc_821407E8:
	// lfs f0,-16788(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -16788);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f12,0(r5)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// lfs f11,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,-16788(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -16788);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f10,0(r6)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821407B0) {
	__imp__sub_821407B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214080C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8214080C) {
	__imp__sub_8214080C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82140810) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// cmplwi cr6,r8,10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 10, ctx.xer);
	// lfs f0,2416(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2416);
	ctx.f0.f64 = double(temp.f32);
	// bgt cr6,0x82140960
	if (ctx.cr6.gt) goto loc_82140960;
	// lis r12,-32236
	ctx.r12.s64 = -2112618496;
	// rlwinm r0,r8,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,2104
	ctx.r12.s64 = ctx.r12.s64 + 2104;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r8.u32) {
	case 0:
		goto loc_82140960;
	case 1:
		goto loc_82140864;
	case 2:
		goto loc_8214086C;
	case 3:
		goto loc_821408CC;
	case 4:
		goto loc_82140918;
	case 5:
		goto loc_82140984;
	case 6:
		goto loc_8214093C;
	case 7:
		goto loc_82140898;
	case 8:
		goto loc_821408D4;
	case 9:
		goto loc_821408DC;
	case 10:
		goto loc_82140910;
	default:
		return;
	}
	// lwz r16,2400(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 2400);
	// lwz r16,2148(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 2148);
	// lwz r16,2156(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 2156);
	// lwz r16,2252(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 2252);
	// lwz r16,2328(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 2328);
	// lwz r16,2436(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 2436);
	// lwz r16,2364(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 2364);
	// lwz r16,2200(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 2200);
	// lwz r16,2260(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 2260);
	// lwz r16,2268(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 2268);
	// lwz r16,2320(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 2320);
loc_82140864:
	// lfs f11,56(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	ctx.f11.f64 = double(temp.f32);
	// b 0x82140964
	goto loc_82140964;
loc_8214086C:
	// lfs f13,32(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f11,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f9,f11,f10,f12
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f10.f64 + ctx.f12.f64));
	// stfs f9,0(r4)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lfs f8,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f7,f8
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f8.f64));
	// stfs f6,0(r6)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// b 0x82140984
	goto loc_82140984;
loc_82140898:
	// lfs f13,64(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,56(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fadds f10,f13,f12
	ctx.f10.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// lfs f9,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f11,f9
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f9.f64));
	// fmadds f7,f10,f0,f8
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f0.f64 + ctx.f8.f64));
	// stfs f7,0(r4)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lfs f6,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f6,f5
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f5.f64));
	// stfs f4,0(r6)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// b 0x82140984
	goto loc_82140984;
loc_821408CC:
	// lfs f11,64(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	ctx.f11.f64 = double(temp.f32);
	// b 0x82140964
	goto loc_82140964;
loc_821408D4:
	// lfs f11,88(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	ctx.f11.f64 = double(temp.f32);
	// b 0x82140964
	goto loc_82140964;
loc_821408DC:
	// lfs f13,96(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,88(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fadds f10,f13,f12
	ctx.f10.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// lfs f9,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f11,f9
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f9.f64));
	// fmadds f7,f10,f0,f8
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f0.f64 + ctx.f8.f64));
	// stfs f7,0(r4)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lfs f6,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f6,f5
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f5.f64));
	// stfs f4,0(r6)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// b 0x82140984
	goto loc_82140984;
loc_82140910:
	// lfs f11,96(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	ctx.f11.f64 = double(temp.f32);
	// b 0x82140964
	goto loc_82140964;
loc_82140918:
	// lfs f13,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// stfs f11,0(r4)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lfs f10,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f9,f10
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f10.f64));
	// stfs f8,0(r6)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// b 0x82140984
	goto loc_82140984;
loc_8214093C:
	// lfs f13,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// stfs f11,0(r4)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lfs f10,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f10,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f9.f64));
	// stfs f8,0(r6)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// b 0x82140984
	goto loc_82140984;
loc_82140960:
	// lfs f11,104(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	ctx.f11.f64 = double(temp.f32);
loc_82140964:
	// lfs f12,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f10,f13,f12,f11
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f12.f64 + ctx.f11.f64));
	// stfs f10,0(r4)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lfs f8,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f9,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f7,f9,f8
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f8.f64));
	// stfs f7,0(r6)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
loc_82140984:
	// cmplwi cr6,r9,10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 10, ctx.xer);
	// bgt cr6,0x82140b4c
	if (ctx.cr6.gt) goto loc_82140B4C;
	// lis r12,-32236
	ctx.r12.s64 = -2112618496;
	// rlwinm r0,r9,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,2468
	ctx.r12.s64 = ctx.r12.s64 + 2468;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r9.u32) {
	case 0:
		goto loc_82140B4C;
	case 1:
		goto loc_821409D0;
	case 2:
		goto loc_821409F8;
	case 3:
		goto loc_82140A58;
	case 4:
		goto loc_82140B04;
	case 5:
		goto loc_82140B6C;
	case 6:
		goto loc_82140B28;
	case 7:
		goto loc_82140A24;
	case 8:
		goto loc_82140A80;
	case 9:
		goto loc_82140AA8;
	case 10:
		goto loc_82140ADC;
	default:
		return;
	}
	// lwz r16,2892(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 2892);
	// lwz r16,2512(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 2512);
	// lwz r16,2552(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 2552);
	// lwz r16,2648(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 2648);
	// lwz r16,2820(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 2820);
	// lwz r16,2924(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 2924);
	// lwz r16,2856(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 2856);
	// lwz r16,2596(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 2596);
	// lwz r16,2688(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 2688);
	// lwz r16,2728(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 2728);
	// lwz r16,2780(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 2780);
loc_821409D0:
	// lfs f0,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,60(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f11,f12,f0,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f13.f64));
	// stfs f11,0(r5)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// lfs f10,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f10,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f9.f64));
	// stfs f8,0(r7)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// blr 
	return;
loc_821409F8:
	// lfs f13,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// lfs f10,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f9,f10,f0,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f0.f64 + ctx.f11.f64));
	// stfs f9,0(r5)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// lfs f7,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// lfs f8,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f7.f64));
	// stfs f6,0(r7)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// blr 
	return;
loc_82140A24:
	// lfs f13,68(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,60(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fadds f10,f13,f12
	ctx.f10.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// lfs f9,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f9,f11
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f11.f64));
	// fmadds f7,f10,f0,f8
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f0.f64 + ctx.f8.f64));
	// stfs f7,0(r5)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// lfs f6,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f6,f5
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f5.f64));
	// stfs f4,0(r7)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// blr 
	return;
loc_82140A58:
	// lfs f0,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,68(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f11,f12,f0,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f13.f64));
	// stfs f11,0(r5)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// lfs f9,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f10,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f8,f9,f10
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f10.f64));
	// stfs f8,0(r7)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// blr 
	return;
loc_82140A80:
	// lfs f0,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,92(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f11,f12,f0,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f13.f64));
	// stfs f11,0(r5)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// lfs f10,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f10,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f9.f64));
	// stfs f8,0(r7)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// blr 
	return;
loc_82140AA8:
	// lfs f13,100(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,92(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fadds f10,f13,f12
	ctx.f10.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// lfs f9,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f9,f11
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f11.f64));
	// fmadds f7,f10,f0,f8
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f0.f64 + ctx.f8.f64));
	// stfs f7,0(r5)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// lfs f6,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f6,f5
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f5.f64));
	// stfs f4,0(r7)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// blr 
	return;
loc_82140ADC:
	// lfs f0,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,100(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f11,f12,f0,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f13.f64));
	// stfs f11,0(r5)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// lfs f10,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f10,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f9.f64));
	// stfs f8,0(r7)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// blr 
	return;
loc_82140B04:
	// lfs f0,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f12,0(r5)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// lfs f11,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f10,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
	// stfs f9,0(r7)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// blr 
	return;
loc_82140B28:
	// lfs f0,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f12,0(r5)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// lfs f11,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f10.f64));
	// stfs f9,0(r7)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// blr 
	return;
loc_82140B4C:
	// lfs f0,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f12,0(r5)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// lfs f11,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f10,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
	// stfs f9,0(r7)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
loc_82140B6C:
	// blr 
	return;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bne cr6,0x82140bbc
	if (!ctx.cr6.eq) goto loc_82140BBC;
	// fcmpu cr6,f2,f0
	ctx.cr6.compare(ctx.f2.f64, ctx.f0.f64);
	// bne cr6,0x82140bbc
	if (!ctx.cr6.eq) goto loc_82140BBC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,4452(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4452);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f3,f0
	ctx.cr6.compare(ctx.f3.f64, ctx.f0.f64);
	// bne cr6,0x82140bbc
	if (!ctx.cr6.eq) goto loc_82140BBC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,4376(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4376);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f4,f0
	ctx.cr6.compare(ctx.f4.f64, ctx.f0.f64);
	// bne cr6,0x82140bbc
	if (!ctx.cr6.eq) goto loc_82140BBC;
	// cmpwi cr6,r7,4
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 4, ctx.xer);
	// bne cr6,0x82140bbc
	if (!ctx.cr6.eq) goto loc_82140BBC;
	// cmpwi cr6,r8,4
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 4, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82140bc0
	if (ctx.cr6.eq) goto loc_82140BC0;
loc_82140BBC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82140BC0:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82140810) {
	__imp__sub_82140810(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82140BC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x82140c24
	if (!ctx.cr6.eq) goto loc_82140C24;
	// lfs f12,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bne cr6,0x82140c24
	if (!ctx.cr6.eq) goto loc_82140C24;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,4452(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4452);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bne cr6,0x82140c24
	if (!ctx.cr6.eq) goto loc_82140C24;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,4376(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4376);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bne cr6,0x82140c24
	if (!ctx.cr6.eq) goto loc_82140C24;
	// cmpwi cr6,r8,4
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 4, ctx.xer);
	// bne cr6,0x82140c24
	if (!ctx.cr6.eq) goto loc_82140C24;
	// cmpwi cr6,r9,4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82140c28
	if (ctx.cr6.eq) goto loc_82140C28;
loc_82140C24:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82140C28:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82140c88
	if (!ctx.cr6.eq) goto loc_82140C88;
	// lis r10,-32153
	ctx.r10.s64 = -2107179008;
	// lis r11,-32153
	ctx.r11.s64 = -2107179008;
	// lwz r10,-17248(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -17248);
	// lbz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82140c68
	if (ctx.cr6.eq) goto loc_82140C68;
	// lfs f0,-16788(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -16788);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lfs f0,-16788(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -16788);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f12,0(r5)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
loc_82140C68:
	// lfs f0,-16788(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -16788);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f12,0(r6)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// lfs f0,-16788(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -16788);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f10,0(r7)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
loc_82140C88:
	// b 0x82140810
	sub_82140810(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82140BC8) {
	__imp__sub_82140BC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82140C8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82140C8C) {
	__imp__sub_82140C8C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82140C90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f2
	ctx.cr6.compare(ctx.f0.f64, ctx.f2.f64);
	// ble cr6,0x82140cb0
	if (!ctx.cr6.gt) goto loc_82140CB0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f2,0(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lfs f0,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// b 0x82140cdc
	goto loc_82140CDC;
loc_82140CB0:
	// fcmpu cr6,f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// bge cr6,0x82140cdc
	if (!ctx.cr6.lt) goto loc_82140CDC;
	// fsubs f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// lfs f12,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// fneg f10,f11
	ctx.f10.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// fsel f9,f10,f0,f11
	ctx.f9.f64 = ctx.f10.f64 >= 0.0 ? ctx.f0.f64 : ctx.f11.f64;
	// stfs f9,0(r4)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// stfs f1,0(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
loc_82140CDC:
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// fcmpu cr6,f12,f2
	ctx.cr6.compare(ctx.f12.f64, ctx.f2.f64);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// fsubs f0,f2,f0
	ctx.f0.f64 = double(float(ctx.f2.f64 - ctx.f0.f64));
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82140C90) {
	__imp__sub_82140C90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82140CFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82140CFC) {
	__imp__sub_82140CFC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82140D00) {
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
	// bl 0x82140bc8
	ctx.lr = 0x82140D10;
	sub_82140BC8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,64(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,56(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// lfs f11,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f11.f64 = double(temp.f32);
	// ble cr6,0x82140d38
	if (!ctx.cr6.gt) goto loc_82140D38;
	// stfs f12,0(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// stfs f11,0(r6)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// b 0x82140d5c
	goto loc_82140D5C;
loc_82140D38:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82140d5c
	if (!ctx.cr6.lt) goto loc_82140D5C;
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f10,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 - ctx.f0.f64));
	// fneg f8,f9
	ctx.f8.u64 = ctx.f9.u64 ^ 0x8000000000000000;
	// fsel f7,f8,f11,f9
	ctx.f7.f64 = ctx.f8.f64 >= 0.0 ? ctx.f11.f64 : ctx.f9.f64;
	// stfs f7,0(r6)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// stfs f13,0(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
loc_82140D5C:
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fadds f10,f13,f0
	ctx.f10.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// fcmpu cr6,f10,f12
	ctx.cr6.compare(ctx.f10.f64, ctx.f12.f64);
	// ble cr6,0x82140d78
	if (!ctx.cr6.gt) goto loc_82140D78;
	// fsubs f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// stfs f0,0(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
loc_82140D78:
	// lfs f12,68(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,60(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x82140d98
	if (!ctx.cr6.gt) goto loc_82140D98;
	// stfs f12,0(r5)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// stfs f11,0(r7)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// b 0x82140dbc
	goto loc_82140DBC;
loc_82140D98:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82140dbc
	if (!ctx.cr6.lt) goto loc_82140DBC;
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f10,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 - ctx.f0.f64));
	// fneg f8,f9
	ctx.f8.u64 = ctx.f9.u64 ^ 0x8000000000000000;
	// fsel f7,f8,f11,f9
	ctx.f7.f64 = ctx.f8.f64 >= 0.0 ? ctx.f11.f64 : ctx.f9.f64;
	// stfs f7,0(r7)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// stfs f13,0(r5)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
loc_82140DBC:
	// lfs f0,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fadds f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// fcmpu cr6,f11,f12
	ctx.cr6.compare(ctx.f11.f64, ctx.f12.f64);
	// ble cr6,0x82140dd8
	if (!ctx.cr6.gt) goto loc_82140DD8;
	// fsubs f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// stfs f0,0(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
loc_82140DD8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82140D00) {
	__imp__sub_82140D00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82140DE8) {
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
	// bl 0x82141ca8
	ctx.lr = 0x82140DF8;
	sub_82141CA8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// lis r10,-32153
	ctx.r10.s64 = -2107179008;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82140e28
	if (ctx.cr6.eq) goto loc_82140E28;
	// lis r11,-32153
	ctx.r11.s64 = -2107179008;
	// lwz r11,-17012(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17012);
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-16788(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + -16788, temp.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82140E28:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,12168(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-16788(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + -16788, temp.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82140DE8) {
	__imp__sub_82140DE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82140E44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82140E44) {
	__imp__sub_82140E44(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82140E48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32153
	ctx.r10.s64 = -2107179008;
	// lfs f0,12168(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-16788(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + -16788, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82140E48) {
	__imp__sub_82140E48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82140E5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82140E5C) {
	__imp__sub_82140E5C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82140E60) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r3,r7,10772
	ctx.r3.s64 = ctx.r7.s64 + 10772;
	// lfs f31,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,5484(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f30.f64 = double(temp.f32);
	// addi r8,r8,10716
	ctx.r8.s64 = ctx.r8.s64 + 10716;
	// lfs f29,12260(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12260);
	ctx.f29.f64 = double(temp.f32);
	// li r7,0
	ctx.r7.s64 = 0;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x822e1660
	ctx.lr = 0x82140EBC;
	sub_822E1660(ctx, base);
	// lis r6,-32153
	ctx.r6.s64 = -2107179008;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// lis r4,-32255
	ctx.r4.s64 = -2113863680;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// addi r8,r5,10660
	ctx.r8.s64 = ctx.r5.s64 + 10660;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r3,-16900(r6)
	PPC_STORE_U32(ctx.r6.u32 + -16900, ctx.r3.u32);
	// addi r3,r4,10640
	ctx.r3.s64 = ctx.r4.s64 + 10640;
	// bl 0x822e1660
	ctx.lr = 0x82140EE8;
	sub_822E1660(ctx, base);
	// lis r11,-32153
	ctx.r11.s64 = -2107179008;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// addi r8,r10,10568
	ctx.r8.s64 = ctx.r10.s64 + 10568;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r3,-17024(r11)
	PPC_STORE_U32(ctx.r11.u32 + -17024, ctx.r3.u32);
	// addi r3,r9,10536
	ctx.r3.s64 = ctx.r9.s64 + 10536;
	// bl 0x822e1660
	ctx.lr = 0x82140F14;
	sub_822E1660(ctx, base);
	// lis r7,-32153
	ctx.r7.s64 = -2107179008;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// addi r8,r6,10464
	ctx.r8.s64 = ctx.r6.s64 + 10464;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// stw r3,-17016(r7)
	PPC_STORE_U32(ctx.r7.u32 + -17016, ctx.r3.u32);
	// addi r3,r5,10432
	ctx.r3.s64 = ctx.r5.s64 + 10432;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x822e1660
	ctx.lr = 0x82140F40;
	sub_822E1660(ctx, base);
	// lis r4,-32153
	ctx.r4.s64 = -2107179008;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// stw r3,-17244(r4)
	PPC_STORE_U32(ctx.r4.u32 + -17244, ctx.r3.u32);
	// addi r3,r7,10400
	ctx.r3.s64 = ctx.r7.s64 + 10400;
	// addi r8,r9,10352
	ctx.r8.s64 = ctx.r9.s64 + 10352;
	// lfs f3,6912(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6912);
	ctx.f3.f64 = double(temp.f32);
	// li r7,0
	ctx.r7.s64 = 0;
	// lfs f1,6820(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6820);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822e1660
	ctx.lr = 0x82140F74;
	sub_822E1660(ctx, base);
	// lis r31,-32153
	ctx.r31.s64 = -2107179008;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r30,r31,-17248
	ctx.r30.s64 = ctx.r31.s64 + -17248;
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// addi r3,r5,10316
	ctx.r3.s64 = ctx.r5.s64 + 10316;
	// addi r6,r6,10272
	ctx.r6.s64 = ctx.r6.s64 + 10272;
	// stw r11,236(r30)
	PPC_STORE_U32(ctx.r30.u32 + 236, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x822e15d0
	ctx.lr = 0x82140FA0;
	sub_822E15D0(ctx, base);
	// lis r4,-32153
	ctx.r4.s64 = -2107179008;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r3,-17248(r31)
	PPC_STORE_U32(ctx.r31.u32 + -17248, ctx.r3.u32);
	// stw r11,228(r30)
	PPC_STORE_U32(ctx.r30.u32 + 228, ctx.r11.u32);
	// stfs f31,-16788(r4)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r4.u32 + -16788, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
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

PPC_WEAK_FUNC(sub_82140E60) {
	__imp__sub_82140E60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82140FD8) {
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
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lis r10,-32153
	ctx.r10.s64 = -2107179008;
	// addi r31,r11,28832
	ctx.r31.s64 = ctx.r11.s64 + 28832;
	// addi r3,r10,-16896
	ctx.r3.s64 = ctx.r10.s64 + -16896;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r7,404(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 404);
	// lwz r6,400(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 400);
	// bl 0x821403f8
	ctx.lr = 0x8214100C;
	sub_821403F8(ctx, base);
	// lis r9,-32153
	ctx.r9.s64 = -2107179008;
	// lwz r7,404(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 404);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r6,400(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 400);
	// addi r3,r9,-17008
	ctx.r3.s64 = ctx.r9.s64 + -17008;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82140378
	ctx.lr = 0x82141028;
	sub_82140378(ctx, base);
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

PPC_WEAK_FUNC(sub_82140FD8) {
	__imp__sub_82140FD8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214103C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8214103C) {
	__imp__sub_8214103C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82141040) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82141048;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32153
	ctx.r11.s64 = -2107179008;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r29,r11,-17240
	ctx.r29.s64 = ctx.r11.s64 + -17240;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// addi r30,r11,28832
	ctx.r30.s64 = ctx.r11.s64 + 28832;
	// lfs f31,5484(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f31.f64 = double(temp.f32);
loc_8214106C:
	// lwz r9,404(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 404);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,400(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 400);
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// extsw r10,r9
	ctx.r10.s64 = ctx.r9.s32;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// extsw r11,r8
	ctx.r11.s64 = ctx.r8.s32;
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f0
	ctx.f11.f64 = double(ctx.f0.s64);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f3,f11
	ctx.f3.f64 = double(float(ctx.f11.f64));
	// frsp f4,f12
	ctx.f4.f64 = double(float(ctx.f12.f64));
	// bl 0x821401f0
	ctx.lr = 0x821410AC;
	sub_821401F0(ctx, base);
	// addi r31,r31,108
	ctx.r31.s64 = ctx.r31.s64 + 108;
	// addi r9,r29,216
	ctx.r9.s64 = ctx.r29.s64 + 216;
	// cmpw cr6,r31,r9
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8214106c
	if (ctx.cr6.lt) goto loc_8214106C;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82141040) {
	__imp__sub_82141040(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821410C8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32153
	ctx.r10.s64 = -2107179008;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,-17020(r10)
	PPC_STORE_U32(ctx.r10.u32 + -17020, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821410C8) {
	__imp__sub_821410C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821410D8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32153
	ctx.r10.s64 = -2107179008;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-17020(r10)
	PPC_STORE_U32(ctx.r10.u32 + -17020, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821410D8) {
	__imp__sub_821410D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821410E8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32153
	ctx.r10.s64 = -2107179008;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,-17020(r10)
	PPC_STORE_U32(ctx.r10.u32 + -17020, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821410E8) {
	__imp__sub_821410E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821410F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32153
	ctx.r11.s64 = -2107179008;
	// mulli r10,r3,108
	ctx.r10.s64 = ctx.r3.s64 * 108;
	// addi r11,r11,-17240
	ctx.r11.s64 = ctx.r11.s64 + -17240;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821410F8) {
	__imp__sub_821410F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214110C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8214110C) {
	__imp__sub_8214110C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82141110) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32153
	ctx.r11.s64 = -2107179008;
	// addi r3,r11,-17008
	ctx.r3.s64 = ctx.r11.s64 + -17008;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82141110) {
	__imp__sub_82141110(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214111C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8214111C) {
	__imp__sub_8214111C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82141120) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32153
	ctx.r11.s64 = -2107179008;
	// addi r3,r11,-16896
	ctx.r3.s64 = ctx.r11.s64 + -16896;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82141120) {
	__imp__sub_82141120(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214112C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8214112C) {
	__imp__sub_8214112C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82141130) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32153
	ctx.r11.s64 = -2107179008;
	// lwz r11,-17020(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17020);
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r3,r9,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82141130) {
	__imp__sub_82141130(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82141148) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32153
	ctx.r11.s64 = -2107179008;
	// lwz r11,-17020(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17020);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82141148) {
	__imp__sub_82141148(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214115C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8214115C) {
	__imp__sub_8214115C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82141160) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32153
	ctx.r11.s64 = -2107179008;
	// lwz r11,-17020(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17020);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82141178
	if (ctx.cr6.lt) goto loc_82141178;
	// beq cr6,0x82141184
	if (ctx.cr6.eq) goto loc_82141184;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
loc_82141178:
	// lis r11,-32153
	ctx.r11.s64 = -2107179008;
	// addi r3,r11,-17008
	ctx.r3.s64 = ctx.r11.s64 + -17008;
	// blr 
	return;
loc_82141184:
	// lis r11,-32153
	ctx.r11.s64 = -2107179008;
	// mulli r10,r3,108
	ctx.r10.s64 = ctx.r3.s64 * 108;
	// addi r11,r11,-17240
	ctx.r11.s64 = ctx.r11.s64 + -17240;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82141160) {
	__imp__sub_82141160(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82141198) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32153
	ctx.r11.s64 = -2107179008;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-16784
	ctx.r9.s64 = ctx.r11.s64 + -16784;
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// rlwinm r7,r8,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// xori r3,r7,1
	ctx.r3.u64 = ctx.r7.u64 ^ 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82141198) {
	__imp__sub_82141198(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821411B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821411B4) {
	__imp__sub_821411B4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821411B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32153
	ctx.r11.s64 = -2107179008;
	// addi r10,r11,-16784
	ctx.r10.s64 = ctx.r11.s64 + -16784;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_821411C4:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge cr6,0x821411e8
	if (!ctx.cr6.lt) goto loc_821411E8;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r9,r10,16
	ctx.r9.s64 = ctx.r10.s64 + 16;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x821411c4
	if (ctx.cr6.lt) goto loc_821411C4;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_821411E8:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821411B8) {
	__imp__sub_821411B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821411F0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32153
	ctx.r10.s64 = -2107179008;
	// li r11,-1
	ctx.r11.s64 = -1;
	// addi r9,r10,-16784
	ctx.r9.s64 = ctx.r10.s64 + -16784;
	// stw r11,-16784(r10)
	PPC_STORE_U32(ctx.r10.u32 + -16784, ctx.r11.u32);
	// stw r11,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
	// stw r11,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r11.u32);
	// stw r11,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821411F0) {
	__imp__sub_821411F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82141210) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// lwz r11,4688(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4688);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82141240
	if (!ctx.cr6.eq) goto loc_82141240;
	// lis r11,-32153
	ctx.r11.s64 = -2107179008;
	// lwz r11,-16768(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16768);
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82141278
	if (!ctx.cr6.eq) goto loc_82141278;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82141240:
	// lis r11,-32153
	ctx.r11.s64 = -2107179008;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-16784
	ctx.r9.s64 = ctx.r11.s64 + -16784;
	// lwzx r11,r10,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82141264
	if (ctx.cr6.lt) goto loc_82141264;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82141264:
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bge cr6,0x82141278
	if (!ctx.cr6.lt) goto loc_82141278;
	// stw r3,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82141278:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82141210) {
	__imp__sub_82141210(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82141280) {
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
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r11,4688(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4688);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821412bc
	if (!ctx.cr6.eq) goto loc_821412BC;
	// lis r11,-32153
	ctx.r11.s64 = -2107179008;
	// lwz r11,-16768(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16768);
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x821412f0
	if (!ctx.cr6.eq) goto loc_821412F0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x821412f8
	goto loc_821412F8;
loc_821412BC:
	// lis r11,-32153
	ctx.r11.s64 = -2107179008;
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-16784
	ctx.r9.s64 = ctx.r11.s64 + -16784;
	// lwzx r10,r10,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x821412dc
	if (ctx.cr6.lt) goto loc_821412DC;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x821412f8
	goto loc_821412F8;
loc_821412DC:
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// bge cr6,0x821412f0
	if (!ctx.cr6.lt) goto loc_821412F0;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x821412f8
	goto loc_821412F8;
loc_821412F0:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r11,0
	ctx.r11.s64 = 0;
loc_821412F8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82141318
	if (ctx.cr6.eq) goto loc_82141318;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82141318:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r3,14
	ctx.r3.s64 = 14;
	// addi r4,r11,10792
	ctx.r4.s64 = ctx.r11.s64 + 10792;
	// bl 0x82280b08
	ctx.lr = 0x82141328;
	sub_82280B08(ctx, base);
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

PPC_WEAK_FUNC(sub_82141280) {
	__imp__sub_82141280(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214133C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8214133C) {
	__imp__sub_8214133C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82141340) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// lwz r11,4688(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4688);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8214138c
	if (ctx.cr6.eq) goto loc_8214138C;
	// lis r11,-32153
	ctx.r11.s64 = -2107179008;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,-16784
	ctx.r9.s64 = ctx.r11.s64 + -16784;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82141360:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r3,r8
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r8.s32, ctx.xer);
	// beq cr6,0x82141384
	if (ctx.cr6.eq) goto loc_82141384;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r8,r9,16
	ctx.r8.s64 = ctx.r9.s64 + 16;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82141360
	if (ctx.cr6.lt) goto loc_82141360;
	// blr 
	return;
loc_82141384:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// blr 
	return;
loc_8214138C:
	// lis r11,-32153
	ctx.r11.s64 = -2107179008;
	// lwz r3,-16768(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16768);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82141340) {
	__imp__sub_82141340(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82141398) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,-30024
	ctx.r11.s64 = ctx.r11.s64 + -30024;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821413b4
	if (ctx.cr6.eq) goto loc_821413B4;
	// li r3,1
	ctx.r3.s64 = 1;
loc_821413B4:
	// lbz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82141398) {
	__imp__sub_82141398(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821413C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// rlwinm r10,r3,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r9,r11,-30024
	ctx.r9.s64 = ctx.r11.s64 + -30024;
	// lbzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821413C8) {
	__imp__sub_821413C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821413DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821413DC) {
	__imp__sub_821413DC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821413E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// li r11,2
	ctx.r11.s64 = 2;
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
	// clrlwi r3,r7,31
	ctx.r3.u64 = ctx.r7.u32 & 0x1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821413E0) {
	__imp__sub_821413E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821413FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821413FC) {
	__imp__sub_821413FC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82141400) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82141408;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// rlwinm r30,r3,5,0,26
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r31,r11,-30024
	ctx.r31.s64 = ctx.r11.s64 + -30024;
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lbzx r10,r30,r31
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r31.u32);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8214144c
	if (ctx.cr6.eq) goto loc_8214144C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82141448
	if (!ctx.cr6.eq) goto loc_82141448;
	// addi r11,r31,12
	ctx.r11.s64 = ctx.r31.s64 + 12;
	// lwzx r10,r30,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// ble cr6,0x82141448
	if (!ctx.cr6.gt) goto loc_82141448;
	// bl 0x82131a08
	ctx.lr = 0x82141448;
	sub_82131A08(ctx, base);
loc_82141448:
	// stbx r29,r30,r31
	PPC_STORE_U8(ctx.r30.u32 + ctx.r31.u32, ctx.r29.u8);
loc_8214144C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82141400) {
	__imp__sub_82141400(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82141454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82141454) {
	__imp__sub_82141454(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82141458) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// lwz r11,4688(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4688);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8214147c
	if (!ctx.cr6.eq) goto loc_8214147C;
	// lis r11,-32153
	ctx.r11.s64 = -2107179008;
	// lwz r11,-16768(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16768);
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_8214147C:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82141458) {
	__imp__sub_82141458(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82141484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82141484) {
	__imp__sub_82141484(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82141488) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82141488) {
	__imp__sub_82141488(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214148C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8214148C) {
	__imp__sub_8214148C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82141490) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// lwz r11,4688(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4688);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821414e0
	if (ctx.cr6.eq) goto loc_821414E0;
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r9,r11,-30024
	ctx.r9.s64 = ctx.r11.s64 + -30024;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_821414B4:
	// cmpw cr6,r10,r3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r3.s32, ctx.xer);
	// beq cr6,0x821414e8
	if (ctx.cr6.eq) goto loc_821414E8;
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x821414cc
	if (ctx.cr6.eq) goto loc_821414CC;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
loc_821414CC:
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// addi r7,r9,64
	ctx.r7.s64 = ctx.r9.s64 + 64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x821414b4
	if (ctx.cr6.lt) goto loc_821414B4;
loc_821414E0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_821414E8:
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82141490) {
	__imp__sub_82141490(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821414F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r10,r11,-30024
	ctx.r10.s64 = ctx.r11.s64 + -30024;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82141500:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82141528
	if (!ctx.cr6.eq) goto loc_82141528;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// addi r9,r10,64
	ctx.r9.s64 = ctx.r10.s64 + 64;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82141500
	if (ctx.cr6.lt) goto loc_82141500;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82141528:
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// lwz r11,4688(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4688);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82141574
	if (ctx.cr6.eq) goto loc_82141574;
	// lis r11,-32153
	ctx.r11.s64 = -2107179008;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,-16784
	ctx.r9.s64 = ctx.r11.s64 + -16784;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82141548:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r8,r7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, ctx.xer);
	// beq cr6,0x8214157c
	if (ctx.cr6.eq) goto loc_8214157C;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r7,r9,16
	ctx.r7.s64 = ctx.r9.s64 + 16;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x82141548
	if (ctx.cr6.lt) goto loc_82141548;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// blr 
	return;
loc_82141574:
	// lis r11,-32153
	ctx.r11.s64 = -2107179008;
	// lwz r10,-16768(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16768);
loc_8214157C:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821414F0) {
	__imp__sub_821414F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82141584) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82141584) {
	__imp__sub_82141584(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82141588) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// addi r10,r11,-30024
	ctx.r10.s64 = ctx.r11.s64 + -30024;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82141594:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821415b8
	if (!ctx.cr6.eq) goto loc_821415B8;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// addi r9,r10,64
	ctx.r9.s64 = ctx.r10.s64 + 64;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82141594
	if (ctx.cr6.lt) goto loc_82141594;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_821415B8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82141588) {
	__imp__sub_82141588(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821415C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32155
	ctx.r10.s64 = -2107310080;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-30024
	ctx.r10.s64 = ctx.r10.s64 + -30024;
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821415dc
	if (ctx.cr6.eq) goto loc_821415DC;
	// li r11,1
	ctx.r11.s64 = 1;
loc_821415DC:
	// lbz r10,32(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821415ec
	if (ctx.cr6.eq) goto loc_821415EC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_821415EC:
	// li r10,2
	ctx.r10.s64 = 2;
	// srawi r9,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 31;
	// rlwinm r8,r10,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// subfc r7,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r7.s64 = ctx.r11.s64 - ctx.r10.s64;
	// adde r11,r8,r9
	temp.u8 = (ctx.r8.u32 + ctx.r9.u32 < ctx.r8.u32) | (ctx.r8.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ctx.r8.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821415C0) {
	__imp__sub_821415C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82141608) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x82141610;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x8213ba88
	ctx.lr = 0x82141618;
	sub_8213BA88(ctx, base);
	// lis r10,-32191
	ctx.r10.s64 = -2109669376;
	// li r27,1
	ctx.r27.s64 = 1;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// li r3,14
	ctx.r3.s64 = 14;
	// addi r4,r9,10880
	ctx.r4.s64 = ctx.r9.s64 + 10880;
	// stw r27,4688(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4688, ctx.r27.u32);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// bl 0x82280a68
	ctx.lr = 0x82141638;
	sub_82280A68(ctx, base);
	// bl 0x8230b268
	ctx.lr = 0x8214163C;
	sub_8230B268(ctx, base);
	// lis r8,-32021
	ctx.r8.s64 = -2098528256;
	// li r10,2
	ctx.r10.s64 = 2;
	// lwz r11,-14904(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -14904);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lbz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x821416c0
	if (ctx.cr6.eq) goto loc_821416C0;
	// addi r28,r11,-30024
	ctx.r28.s64 = ctx.r11.s64 + -30024;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r11,r28,-32
	ctx.r11.s64 = ctx.r28.s64 + -32;
loc_82141668:
	// stbu r31,32(r11)
	ea = 32 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r31.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x82141668
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82141668;
	// lis r11,-32153
	ctx.r11.s64 = -2107179008;
	// addi r29,r11,-16784
	ctx.r29.s64 = ctx.r11.s64 + -16784;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_8214167C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x821416a4
	if (ctx.cr6.lt) goto loc_821416A4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82141280
	ctx.lr = 0x82141690;
	sub_82141280(ctx, base);
	// rlwinm r11,r3,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 5) & 0xFFFFFFE0;
	// lbzx r10,r11,r28
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r28.u32);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// beq cr6,0x821416a4
	if (ctx.cr6.eq) goto loc_821416A4;
	// stbx r27,r11,r28
	PPC_STORE_U8(ctx.r11.u32 + ctx.r28.u32, ctx.r27.u8);
loc_821416A4:
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// addi r11,r29,16
	ctx.r11.s64 = ctx.r29.s64 + 16;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8214167c
	if (ctx.cr6.lt) goto loc_8214167C;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_821416C0:
	// addi r11,r11,-30024
	ctx.r11.s64 = ctx.r11.s64 + -30024;
loc_821416C4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// beq cr6,0x821416d4
	if (ctx.cr6.eq) goto loc_821416D4;
	// stb r27,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r27.u8);
loc_821416D4:
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// bdnz 0x821416c4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821416C4;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82141608) {
	__imp__sub_82141608(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821416E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821416E4) {
	__imp__sub_821416E4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821416E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x821416F0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x8213ba88
	ctx.lr = 0x821416FC;
	sub_8213BA88(ctx, base);
	// lis r10,-32191
	ctx.r10.s64 = -2109669376;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// li r3,14
	ctx.r3.s64 = 14;
	// addi r4,r9,10960
	ctx.r4.s64 = ctx.r9.s64 + 10960;
	// lwz r30,4688(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4688);
	// stw r11,4688(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4688, ctx.r11.u32);
	// bl 0x82280a68
	ctx.lr = 0x8214171C;
	sub_82280A68(ctx, base);
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// addi r31,r11,-30024
	ctx.r31.s64 = ctx.r11.s64 + -30024;
	// lbz r8,-30024(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + -30024);
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// beq cr6,0x82141738
	if (ctx.cr6.eq) goto loc_82141738;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
loc_82141738:
	// lbz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82141760
	if (ctx.cr6.eq) goto loc_82141760;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// ble cr6,0x82141758
	if (!ctx.cr6.gt) goto loc_82141758;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82131a08
	ctx.lr = 0x82141758;
	sub_82131A08(ctx, base);
loc_82141758:
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,32(r31)
	PPC_STORE_U8(ctx.r31.u32 + 32, ctx.r11.u8);
loc_82141760:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x821417a4
	if (ctx.cr6.eq) goto loc_821417A4;
	// lis r30,-32153
	ctx.r30.s64 = -2107179008;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r29,-16768(r30)
	PPC_STORE_U32(ctx.r30.u32 + -16768, ctx.r29.u32);
	// bl 0x8213b9f0
	ctx.lr = 0x82141778;
	sub_8213B9F0(ctx, base);
	// lwz r3,-16768(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -16768);
	// bl 0x8213b948
	ctx.lr = 0x82141780;
	sub_8213B948(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_82141784:
	// lwz r11,-16768(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -16768);
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82141798
	if (ctx.cr6.eq) goto loc_82141798;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8230fd80
	ctx.lr = 0x82141798;
	sub_8230FD80(ctx, base);
loc_82141798:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,4
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 4, ctx.xer);
	// blt cr6,0x82141784
	if (ctx.cr6.lt) goto loc_82141784;
loc_821417A4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821416E8) {
	__imp__sub_821416E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821417AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821417AC) {
	__imp__sub_821417AC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821417B0) {
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
	// lis r11,-32021
	ctx.r11.s64 = -2098528256;
	// lwz r11,-14904(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14904);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821417fc
	if (!ctx.cr6.eq) goto loc_821417FC;
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// lwz r11,4688(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4688);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82141844
	if (ctx.cr6.eq) goto loc_82141844;
	// lis r11,-32153
	ctx.r11.s64 = -2107179008;
	// lwz r3,-16764(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16764);
	// bl 0x821416e8
	ctx.lr = 0x821417EC;
	sub_821416E8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_821417FC:
	// bl 0x82141608
	ctx.lr = 0x82141800;
	sub_82141608(ctx, base);
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r11,-30024
	ctx.r11.s64 = ctx.r11.s64 + -30024;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8214181c
	if (ctx.cr6.eq) goto loc_8214181C;
	// li r9,1
	ctx.r9.s64 = 1;
loc_8214181C:
	// lbz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8214182c
	if (ctx.cr6.eq) goto loc_8214182C;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
loc_8214182C:
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// bge cr6,0x82141844
	if (!ctx.cr6.lt) goto loc_82141844;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,11040
	ctx.r4.s64 = ctx.r11.s64 + 11040;
	// bl 0x822830e8
	ctx.lr = 0x82141844;
	sub_822830E8(ctx, base);
loc_82141844:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821417B0) {
	__imp__sub_821417B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82141854) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82141854) {
	__imp__sub_82141854(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82141858) {
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
	// lis r11,-31937
	ctx.r11.s64 = -2093023232;
	// lis r31,-32153
	ctx.r31.s64 = -2107179008;
	// addi r11,r11,-17592
	ctx.r11.s64 = ctx.r11.s64 + -17592;
	// addi r9,r11,68
	ctx.r9.s64 = ctx.r11.s64 + 68;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmpwi cr6,r8,2
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 2, ctx.xer);
	// bne cr6,0x821418a8
	if (!ctx.cr6.eq) goto loc_821418A8;
	// addi r11,r11,100
	ctx.r11.s64 = ctx.r11.s64 + 100;
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// bl 0x823deaf8
	ctx.lr = 0x8214189C;
	sub_823DEAF8(ctx, base);
	// lis r9,-32153
	ctx.r9.s64 = -2107179008;
	// stw r3,-16768(r9)
	PPC_STORE_U32(ctx.r9.u32 + -16768, ctx.r3.u32);
	// b 0x821418c0
	goto loc_821418C0;
loc_821418A8:
	// lwz r4,-16764(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + -16764);
	// lis r11,-32153
	ctx.r11.s64 = -2107179008;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r3,r10,11156
	ctx.r3.s64 = ctx.r10.s64 + 11156;
	// stw r4,-16768(r11)
	PPC_STORE_U32(ctx.r11.u32 + -16768, ctx.r4.u32);
	// bl 0x822e2170
	ctx.lr = 0x821418C0;
	sub_822E2170(ctx, base);
loc_821418C0:
	// lwz r3,-16764(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -16764);
	// bl 0x821416e8
	ctx.lr = 0x821418C8;
	sub_821416E8(ctx, base);
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

PPC_WEAK_FUNC(sub_82141858) {
	__imp__sub_82141858(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821418DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821418DC) {
	__imp__sub_821418DC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821418E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x821418E8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32153
	ctx.r11.s64 = -2107179008;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r29,r11,-16784
	ctx.r29.s64 = ctx.r11.s64 + -16784;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
loc_821418FC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8214191c
	if (ctx.cr6.lt) goto loc_8214191C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8213af90
	ctx.lr = 0x82141910;
	sub_8213AF90(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8214193c
	if (ctx.cr6.eq) goto loc_8214193C;
loc_8214191C:
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r11,r29,16
	ctx.r11.s64 = ctx.r29.s64 + 16;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821418fc
	if (ctx.cr6.lt) goto loc_821418FC;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_8214193C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821418E0) {
	__imp__sub_821418E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82141948) {
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
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r11,-30024
	ctx.r11.s64 = ctx.r11.s64 + -30024;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82141970
	if (ctx.cr6.eq) goto loc_82141970;
	// li r9,1
	ctx.r9.s64 = 1;
loc_82141970:
	// lbz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82141980
	if (ctx.cr6.eq) goto loc_82141980;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
loc_82141980:
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// blt cr6,0x821419a8
	if (ctx.cr6.lt) goto loc_821419A8;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,11252
	ctx.r4.s64 = ctx.r11.s64 + 11252;
	// bl 0x8227cf18
	ctx.lr = 0x82141998;
	sub_8227CF18(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r10,11184
	ctx.r4.s64 = ctx.r10.s64 + 11184;
	// bl 0x8227cf18
	ctx.lr = 0x821419A8;
	sub_8227CF18(ctx, base);
loc_821419A8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82141948) {
	__imp__sub_82141948(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821419B8) {
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
	// lis r11,-32153
	ctx.r11.s64 = -2107179008;
	// lwz r31,-16764(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16764);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82141280
	ctx.lr = 0x821419D8;
	sub_82141280(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r5,r10,11276
	ctx.r5.s64 = ctx.r10.s64 + 11276;
	// bl 0x8227ebd8
	ctx.lr = 0x821419E8;
	sub_8227EBD8(ctx, base);
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

PPC_WEAK_FUNC(sub_821419B8) {
	__imp__sub_821419B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821419FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821419FC) {
	__imp__sub_821419FC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82141A00) {
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
	// lis r11,-32153
	ctx.r11.s64 = -2107179008;
	// lwz r31,-16764(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16764);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82141280
	ctx.lr = 0x82141A20;
	sub_82141280(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r5,r10,11300
	ctx.r5.s64 = ctx.r10.s64 + 11300;
	// bl 0x8227ebd8
	ctx.lr = 0x82141A30;
	sub_8227EBD8(ctx, base);
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

PPC_WEAK_FUNC(sub_82141A00) {
	__imp__sub_82141A00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82141A44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82141A44) {
	__imp__sub_82141A44(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82141A48) {
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
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82141b08
	if (ctx.cr6.eq) goto loc_82141B08;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x82141ae8
	if (ctx.cr6.eq) goto loc_82141AE8;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x82141ad0
	if (ctx.cr6.eq) goto loc_82141AD0;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x82141b08
	if (!ctx.cr6.eq) goto loc_82141B08;
	// lis r11,-32153
	ctx.r11.s64 = -2107179008;
	// lwz r3,-16764(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16764);
	// bl 0x82141280
	ctx.lr = 0x82141A88;
	sub_82141280(ctx, base);
	// lis r10,-32155
	ctx.r10.s64 = -2107310080;
	// rlwinm r9,r3,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r8,r10,-30024
	ctx.r8.s64 = ctx.r10.s64 + -30024;
	// lbzx r7,r9,r8
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r8.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82141b08
	if (ctx.cr6.eq) goto loc_82141B08;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82141b08
	if (ctx.cr6.eq) goto loc_82141B08;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8236b650
	ctx.lr = 0x82141AB0;
	sub_8236B650(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8236b610
	ctx.lr = 0x82141ABC;
	sub_8236B610(ctx, base);
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
loc_82141AD0:
	// bl 0x82141a00
	ctx.lr = 0x82141AD4;
	sub_82141A00(ctx, base);
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
loc_82141AE8:
	// lis r11,-32153
	ctx.r11.s64 = -2107179008;
	// lwz r31,-16764(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16764);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82141280
	ctx.lr = 0x82141AF8;
	sub_82141280(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r5,r10,11276
	ctx.r5.s64 = ctx.r10.s64 + 11276;
	// bl 0x8227ebd8
	ctx.lr = 0x82141B08;
	sub_8227EBD8(ctx, base);
loc_82141B08:
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

PPC_WEAK_FUNC(sub_82141A48) {
	__imp__sub_82141A48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82141B1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82141B1C) {
	__imp__sub_82141B1C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82141B20) {
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
	ctx.lr = 0x82141B30;
	sub_8228BCC0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82141b90
	if (ctx.cr6.eq) goto loc_82141B90;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822c3f30
	ctx.lr = 0x82141B44;
	sub_822C3F30(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82141b5c
	if (ctx.cr6.eq) goto loc_82141B5C;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lbz r10,29088(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 29088);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82141b90
	if (ctx.cr6.eq) goto loc_82141B90;
loc_82141B5C:
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// addi r10,r11,-30024
	ctx.r10.s64 = ctx.r11.s64 + -30024;
	// addi r11,r10,12
	ctx.r11.s64 = ctx.r10.s64 + 12;
loc_82141B68:
	// lbz r9,-12(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + -12);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82141b80
	if (ctx.cr6.eq) goto loc_82141B80;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// bgt cr6,0x82141ba4
	if (ctx.cr6.gt) goto loc_82141BA4;
loc_82141B80:
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// addi r9,r10,76
	ctx.r9.s64 = ctx.r10.s64 + 76;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82141b68
	if (ctx.cr6.lt) goto loc_82141B68;
loc_82141B90:
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
loc_82141BA4:
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

PPC_WEAK_FUNC(sub_82141B20) {
	__imp__sub_82141B20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82141BB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// addi r10,r11,-30024
	ctx.r10.s64 = ctx.r11.s64 + -30024;
	// addi r11,r10,12
	ctx.r11.s64 = ctx.r10.s64 + 12;
loc_82141BC4:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bgt cr6,0x82141be8
	if (ctx.cr6.gt) goto loc_82141BE8;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// addi r9,r10,76
	ctx.r9.s64 = ctx.r10.s64 + 76;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82141bc4
	if (ctx.cr6.lt) goto loc_82141BC4;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82141BE8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82141BB8) {
	__imp__sub_82141BB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82141BF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// addi r10,r11,-30024
	ctx.r10.s64 = ctx.r11.s64 + -30024;
	// addi r11,r10,12
	ctx.r11.s64 = ctx.r10.s64 + 12;
loc_82141BFC:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r9,6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 6, ctx.xer);
	// beq cr6,0x82141c20
	if (ctx.cr6.eq) goto loc_82141C20;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// addi r9,r10,76
	ctx.r9.s64 = ctx.r10.s64 + 76;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82141bfc
	if (ctx.cr6.lt) goto loc_82141BFC;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82141C20:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82141BF0) {
	__imp__sub_82141BF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82141C28) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82141C28) {
	__imp__sub_82141C28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82141C30) {
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
	// bl 0x8230ac58
	ctx.lr = 0x82141C48;
	sub_8230AC58(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x82141c80
	if (!ctx.cr6.gt) goto loc_82141C80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8230b298
	ctx.lr = 0x82141C58;
	sub_8230B298(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82141c80
	if (!ctx.cr6.eq) goto loc_82141C80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8230ac10
	ctx.lr = 0x82141C6C;
	sub_8230AC10(ctx, base);
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
loc_82141C80:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,11324
	ctx.r3.s64 = ctx.r11.s64 + 11324;
	// bl 0x822e84f0
	ctx.lr = 0x82141C90;
	sub_822E84F0(ctx, base);
	// bl 0x822c4080
	ctx.lr = 0x82141C94;
	sub_822C4080(ctx, base);
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

PPC_WEAK_FUNC(sub_82141C30) {
	__imp__sub_82141C30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82141CA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r11,-30024
	ctx.r10.s64 = ctx.r11.s64 + -30024;
	// lbz r11,-30024(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + -30024);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82141cc4
	if (ctx.cr6.eq) goto loc_82141CC4;
	// li r9,1
	ctx.r9.s64 = 1;
loc_82141CC4:
	// lbz r11,32(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82141cd4
	if (ctx.cr6.eq) goto loc_82141CD4;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
loc_82141CD4:
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// ble cr6,0x82141d10
	if (!ctx.cr6.gt) goto loc_82141D10;
	// addi r11,r10,12
	ctx.r11.s64 = ctx.r10.s64 + 12;
loc_82141CE0:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r9,6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 6, ctx.xer);
	// beq cr6,0x82141d1c
	if (ctx.cr6.eq) goto loc_82141D1C;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// addi r9,r10,76
	ctx.r9.s64 = ctx.r10.s64 + 76;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82141ce0
	if (ctx.cr6.lt) goto loc_82141CE0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82141D00:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82141d14
	if (!ctx.cr6.eq) goto loc_82141D14;
loc_82141D10:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82141D14:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
loc_82141D1C:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82141d00
	goto loc_82141D00;
}

PPC_WEAK_FUNC(sub_82141CA8) {
	__imp__sub_82141CA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82141D24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82141D24) {
	__imp__sub_82141D24(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82141D28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// rlwinm r10,r4,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r11,r11,-30024
	ctx.r11.s64 = ctx.r11.s64 + -30024;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// lbzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// beq cr6,0x82141d50
	if (ctx.cr6.eq) goto loc_82141D50;
	// li r9,1
	ctx.r9.s64 = 1;
	// stbx r9,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u8);
loc_82141D50:
	// lis r11,-32153
	ctx.r11.s64 = -2107179008;
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-16784
	ctx.r9.s64 = ctx.r11.s64 + -16784;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// li r3,14
	ctx.r3.s64 = 14;
	// addi r4,r8,11344
	ctx.r4.s64 = ctx.r8.s64 + 11344;
	// stwx r6,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r6.u32);
	// b 0x82280900
	sub_82280900(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82141D28) {
	__imp__sub_82141D28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82141D70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82141D78;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32153
	ctx.r11.s64 = -2107179008;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-16784
	ctx.r11.s64 = ctx.r11.s64 + -16784;
	// li r9,-1
	ctx.r9.s64 = -1;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r8,11388
	ctx.r4.s64 = ctx.r8.s64 + 11388;
	// lwzx r31,r10,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// li r3,14
	ctx.r3.s64 = 14;
	// stwx r9,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// bl 0x82280900
	ctx.lr = 0x82141DAC;
	sub_82280900(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x82141dec
	if (ctx.cr6.lt) goto loc_82141DEC;
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// rlwinm r29,r31,5,0,26
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r30,r11,-30024
	ctx.r30.s64 = ctx.r11.s64 + -30024;
	// lbzx r11,r29,r30
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r30.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82141dec
	if (ctx.cr6.eq) goto loc_82141DEC;
	// addi r11,r30,12
	ctx.r11.s64 = ctx.r30.s64 + 12;
	// lwzx r10,r29,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// ble cr6,0x82141de4
	if (!ctx.cr6.gt) goto loc_82141DE4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82131a08
	ctx.lr = 0x82141DE4;
	sub_82131A08(ctx, base);
loc_82141DE4:
	// li r11,0
	ctx.r11.s64 = 0;
	// stbx r11,r29,r30
	PPC_STORE_U8(ctx.r29.u32 + ctx.r30.u32, ctx.r11.u8);
loc_82141DEC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82141D70) {
	__imp__sub_82141D70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82141DF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82141DF4) {
	__imp__sub_82141DF4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82141DF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r10,r11,-30024
	ctx.r10.s64 = ctx.r11.s64 + -30024;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82141E08:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// addi r9,r10,64
	ctx.r9.s64 = ctx.r10.s64 + 64;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82141e08
	if (ctx.cr6.lt) goto loc_82141E08;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82141DF8) {
	__imp__sub_82141DF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82141E30) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x82141e60
	if (!ctx.cr6.gt) goto loc_82141E60;
	// lis r10,-32155
	ctx.r10.s64 = -2107310080;
	// addi r10,r10,-30024
	ctx.r10.s64 = ctx.r10.s64 + -30024;
loc_82141E44:
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82141e68
	if (!ctx.cr6.eq) goto loc_82141E68;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x82141e44
	if (ctx.cr6.lt) goto loc_82141E44;
loc_82141E60:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82141E68:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82141E30) {
	__imp__sub_82141E30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82141E70) {
	PPC_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bge cr6,0x82141ea4
	if (!ctx.cr6.lt) goto loc_82141EA4;
	// lis r10,-32155
	ctx.r10.s64 = -2107310080;
	// addi r10,r10,-30024
	ctx.r10.s64 = ctx.r10.s64 + -30024;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
loc_82141E88:
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82141eac
	if (!ctx.cr6.eq) goto loc_82141EAC;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,-32
	ctx.r10.s64 = ctx.r10.s64 + -32;
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// bgt cr6,0x82141e88
	if (ctx.cr6.gt) goto loc_82141E88;
loc_82141EA4:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82141EAC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82141E70) {
	__imp__sub_82141E70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82141EB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82141EB4) {
	__imp__sub_82141EB4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82141EB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf44
	ctx.lr = 0x82141EC0;
	__savegprlr_15(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32155
	ctx.r10.s64 = -2107310080;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r15,r10,-30024
	ctx.r15.s64 = ctx.r10.s64 + -30024;
	// lbz r10,-30024(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + -30024);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82141ee0
	if (ctx.cr6.eq) goto loc_82141EE0;
	// li r11,1
	ctx.r11.s64 = 1;
loc_82141EE0:
	// lbz r10,32(r15)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r15.u32 + 32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82141ef0
	if (ctx.cr6.eq) goto loc_82141EF0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_82141EF0:
	// li r10,2
	ctx.r10.s64 = 2;
	// srawi r9,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 31;
	// subfc r7,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r7.s64 = ctx.r11.s64 - ctx.r10.s64;
	// rlwinm r8,r10,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// lis r30,-32255
	ctx.r30.s64 = -2113863680;
	// adde r19,r8,r9
	temp.u8 = (ctx.r8.u32 + ctx.r9.u32 < ctx.r8.u32) | (ctx.r8.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r19.u64 = ctx.r8.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lis r3,-32153
	ctx.r3.s64 = -2107179008;
	// lis r4,-32249
	ctx.r4.s64 = -2113470464;
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r16,r15
	ctx.r16.u64 = ctx.r15.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// lis r18,-32153
	ctx.r18.s64 = -2107179008;
	// lis r21,-32191
	ctx.r21.s64 = -2109669376;
	// addi r17,r30,11324
	ctx.r17.s64 = ctx.r30.s64 + 11324;
	// addi r29,r3,-16784
	ctx.r29.s64 = ctx.r3.s64 + -16784;
	// addi r20,r4,-28736
	ctx.r20.s64 = ctx.r4.s64 + -28736;
	// addi r23,r5,11552
	ctx.r23.s64 = ctx.r5.s64 + 11552;
	// addi r22,r6,11536
	ctx.r22.s64 = ctx.r6.s64 + 11536;
	// addi r28,r7,11520
	ctx.r28.s64 = ctx.r7.s64 + 11520;
	// addi r27,r8,11504
	ctx.r27.s64 = ctx.r8.s64 + 11504;
	// addi r26,r9,11488
	ctx.r26.s64 = ctx.r9.s64 + 11488;
	// addi r25,r10,11472
	ctx.r25.s64 = ctx.r10.s64 + 11472;
	// addi r24,r11,11456
	ctx.r24.s64 = ctx.r11.s64 + 11456;
loc_82141F64:
	// lbz r11,0(r16)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r16.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82142108
	if (ctx.cr6.eq) goto loc_82142108;
	// lwz r11,4688(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4688);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82141fb4
	if (ctx.cr6.eq) goto loc_82141FB4;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82141F84:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r31,r9
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x82141fac
	if (ctx.cr6.eq) goto loc_82141FAC;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r9,r29,16
	ctx.r9.s64 = ctx.r29.s64 + 16;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82141f84
	if (ctx.cr6.lt) goto loc_82141F84;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// b 0x82141fb8
	goto loc_82141FB8;
loc_82141FAC:
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
	// b 0x82141fb8
	goto loc_82141FB8;
loc_82141FB4:
	// lwz r30,-16768(r18)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r18.u32 + -16768);
loc_82141FB8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8230ac58
	ctx.lr = 0x82141FC0;
	sub_8230AC58(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x82141fe8
	if (!ctx.cr6.gt) goto loc_82141FE8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8230b298
	ctx.lr = 0x82141FD0;
	sub_8230B298(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82141fe8
	if (!ctx.cr6.eq) goto loc_82141FE8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8230ac10
	ctx.lr = 0x82141FE4;
	sub_8230AC10(ctx, base);
	// b 0x82141ff8
	goto loc_82141FF8;
loc_82141FE8:
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822e84f0
	ctx.lr = 0x82141FF4;
	sub_822E84F0(ctx, base);
	// bl 0x822c4080
	ctx.lr = 0x82141FF8;
	sub_822C4080(ctx, base);
loc_82141FF8:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822e84f0
	ctx.lr = 0x82142008;
	sub_822E84F0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822e2520
	ctx.lr = 0x82142010;
	sub_822E2520(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822e84f0
	ctx.lr = 0x8214201C;
	sub_822E84F0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x822e20d0
	ctx.lr = 0x82142024;
	sub_822E20D0(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822e84f0
	ctx.lr = 0x82142030;
	sub_822E84F0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822e20d0
	ctx.lr = 0x82142038;
	sub_822E20D0(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822e84f0
	ctx.lr = 0x82142044;
	sub_822E84F0(ctx, base);
	// clrlwi r11,r19,24
	ctx.r11.u64 = ctx.r19.u32 & 0xFF;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r4,r10,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// bl 0x822e20d0
	ctx.lr = 0x82142054;
	sub_822E20D0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822e84f0
	ctx.lr = 0x82142060;
	sub_822E84F0(ctx, base);
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// bl 0x822e20d0
	ctx.lr = 0x82142068;
	sub_822E20D0(ctx, base);
	// lwz r11,4688(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4688);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821420a4
	if (ctx.cr6.eq) goto loc_821420A4;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8214207C:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r31,r9
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x821420a8
	if (ctx.cr6.eq) goto loc_821420A8;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r9,r29,16
	ctx.r9.s64 = ctx.r29.s64 + 16;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8214207c
	if (ctx.cr6.lt) goto loc_8214207C;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// b 0x821420a8
	goto loc_821420A8;
loc_821420A4:
	// lwz r10,-16768(r18)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r18.u32 + -16768);
loc_821420A8:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x8230ac58
	ctx.lr = 0x821420B0;
	sub_8230AC58(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// ble cr6,0x821420e4
	if (!ctx.cr6.gt) goto loc_821420E4;
	// bl 0x822e84f0
	ctx.lr = 0x821420C4;
	sub_822E84F0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822e20d0
	ctx.lr = 0x821420CC;
	sub_822E20D0(ctx, base);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822e84f0
	ctx.lr = 0x821420D8;
	sub_822E84F0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x822e20d0
	ctx.lr = 0x821420E0;
	sub_822E20D0(ctx, base);
	// b 0x82142194
	goto loc_82142194;
loc_821420E4:
	// bl 0x822e84f0
	ctx.lr = 0x821420E8;
	sub_822E84F0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x822e20d0
	ctx.lr = 0x821420F0;
	sub_822E20D0(ctx, base);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822e84f0
	ctx.lr = 0x821420FC;
	sub_822E84F0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822e20d0
	ctx.lr = 0x82142104;
	sub_822E20D0(ctx, base);
	// b 0x82142194
	goto loc_82142194;
loc_82142108:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822e84f0
	ctx.lr = 0x82142114;
	sub_822E84F0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822e20d0
	ctx.lr = 0x8214211C;
	sub_822E20D0(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822e84f0
	ctx.lr = 0x82142128;
	sub_822E84F0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x822e20d0
	ctx.lr = 0x82142130;
	sub_822E20D0(ctx, base);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822e84f0
	ctx.lr = 0x8214213C;
	sub_822E84F0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822e20d0
	ctx.lr = 0x82142144;
	sub_822E20D0(ctx, base);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822e84f0
	ctx.lr = 0x82142150;
	sub_822E84F0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822e20d0
	ctx.lr = 0x82142158;
	sub_822E20D0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822e84f0
	ctx.lr = 0x82142164;
	sub_822E84F0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822e20d0
	ctx.lr = 0x8214216C;
	sub_822E20D0(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822e84f0
	ctx.lr = 0x82142178;
	sub_822E84F0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822e20d0
	ctx.lr = 0x82142180;
	sub_822E20D0(ctx, base);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822e84f0
	ctx.lr = 0x8214218C;
	sub_822E84F0(ctx, base);
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// bl 0x822e2520
	ctx.lr = 0x82142194;
	sub_822E2520(ctx, base);
loc_82142194:
	// addi r16,r16,32
	ctx.r16.s64 = ctx.r16.s64 + 32;
	// addi r11,r15,64
	ctx.r11.s64 = ctx.r15.s64 + 64;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r16,r11
	ctx.cr6.compare<int32_t>(ctx.r16.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82141f64
	if (ctx.cr6.lt) goto loc_82141F64;
	// lbz r11,0(r15)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r15.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821421bc
	if (ctx.cr6.eq) goto loc_821421BC;
	// li r10,1
	ctx.r10.s64 = 1;
loc_821421BC:
	// lbz r11,32(r15)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r15.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821421cc
	if (ctx.cr6.eq) goto loc_821421CC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_821421CC:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r3,r11,11436
	ctx.r3.s64 = ctx.r11.s64 + 11436;
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x821421e4
	if (ctx.cr6.eq) goto loc_821421E4;
	// li r4,0
	ctx.r4.s64 = 0;
loc_821421E4:
	// bl 0x822e20d0
	ctx.lr = 0x821421E8;
	sub_822E20D0(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x823ddf94
	__restgprlr_15(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82141EB8) {
	__imp__sub_82141EB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821421F0) {
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
	// lis r10,-31937
	ctx.r10.s64 = -2093023232;
	// lis r9,-32153
	ctx.r9.s64 = -2107179008;
	// addi r11,r10,-17592
	ctx.r11.s64 = ctx.r10.s64 + -17592;
	// addi r9,r9,-16784
	ctx.r9.s64 = ctx.r9.s64 + -16784;
	// addi r8,r11,36
	ctx.r8.s64 = ctx.r11.s64 + 36;
	// lwz r11,-17592(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -17592);
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r7,r8
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// rlwinm r8,r31,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r8,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// blt cr6,0x82142248
	if (ctx.cr6.lt) goto loc_82142248;
	// bl 0x82141948
	ctx.lr = 0x82142234;
	sub_82141948(ctx, base);
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
loc_82142248:
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r10,r11,-30024
	ctx.r10.s64 = ctx.r11.s64 + -30024;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82142258:
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8214228c
	if (ctx.cr6.eq) goto loc_8214228C;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// addi r7,r10,64
	ctx.r7.s64 = ctx.r10.s64 + 64;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x82142258
	if (ctx.cr6.lt) goto loc_82142258;
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
loc_8214228C:
	// rlwinm r11,r6,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 5) & 0xFFFFFFE0;
	// lbzx r7,r11,r10
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r7,1
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 1, ctx.xer);
	// beq cr6,0x821422a4
	if (ctx.cr6.eq) goto loc_821422A4;
	// li r7,1
	ctx.r7.s64 = 1;
	// stbx r7,r11,r10
	PPC_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r7.u8);
loc_821422A4:
	// stwx r6,r8,r9
	PPC_STORE_U32(ctx.r8.u32 + ctx.r9.u32, ctx.r6.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r11,11344
	ctx.r4.s64 = ctx.r11.s64 + 11344;
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x82280900
	ctx.lr = 0x821422BC;
	sub_82280900(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8213b948
	ctx.lr = 0x821422C4;
	sub_8213B948(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82141280
	ctx.lr = 0x821422CC;
	sub_82141280(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x8212fa88
	ctx.lr = 0x821422D4;
	sub_8212FA88(ctx, base);
	// bl 0x82141eb8
	ctx.lr = 0x821422D8;
	sub_82141EB8(ctx, base);
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

PPC_WEAK_FUNC(sub_821421F0) {
	__imp__sub_821421F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821422EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821422EC) {
	__imp__sub_821422EC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821422F0) {
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
	// lis r11,-31937
	ctx.r11.s64 = -2093023232;
	// lis r10,-32153
	ctx.r10.s64 = -2107179008;
	// addi r11,r11,-17592
	ctx.r11.s64 = ctx.r11.s64 + -17592;
	// addi r9,r10,-16784
	ctx.r9.s64 = ctx.r10.s64 + -16784;
	// addi r8,r11,36
	ctx.r8.s64 = ctx.r11.s64 + 36;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r8
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// rlwinm r7,r3,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r7,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// blt cr6,0x821423a0
	if (ctx.cr6.lt) goto loc_821423A0;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82142398
	if (!ctx.cr6.eq) goto loc_82142398;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,11628
	ctx.r4.s64 = ctx.r11.s64 + 11628;
	// bl 0x822c3da0
	ctx.lr = 0x8214234C;
	sub_822C3DA0(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r10,11572
	ctx.r4.s64 = ctx.r10.s64 + 11572;
	// bl 0x8227cf18
	ctx.lr = 0x8214235C;
	sub_8227CF18(ctx, base);
	// li r10,2
	ctx.r10.s64 = 2;
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// addi r11,r11,-30024
	ctx.r11.s64 = ctx.r11.s64 + -30024;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// li r10,1
	ctx.r10.s64 = 1;
loc_82142370:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// beq cr6,0x82142380
	if (ctx.cr6.eq) goto loc_82142380;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
loc_82142380:
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// bdnz 0x82142370
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82142370;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82142398:
	// bl 0x82141d70
	ctx.lr = 0x8214239C;
	sub_82141D70(ctx, base);
	// bl 0x82141eb8
	ctx.lr = 0x821423A0;
	sub_82141EB8(ctx, base);
loc_821423A0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821422F0) {
	__imp__sub_821422F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821423B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x821423B8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-32153
	ctx.r9.s64 = -2107179008;
	// li r11,-1
	ctx.r11.s64 = -1;
	// addi r8,r9,-16784
	ctx.r8.s64 = ctx.r9.s64 + -16784;
	// lis r10,-32155
	ctx.r10.s64 = -2107310080;
	// li r28,0
	ctx.r28.s64 = 0;
	// stw r11,-16784(r9)
	PPC_STORE_U32(ctx.r9.u32 + -16784, ctx.r11.u32);
	// addi r29,r10,-30024
	ctx.r29.s64 = ctx.r10.s64 + -30024;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// stw r11,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r11.u32);
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// stw r11,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r11.u32);
	// stw r11,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r11.u32);
loc_821423EC:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82142410
	if (ctx.cr6.eq) goto loc_82142410;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// ble cr6,0x8214240c
	if (!ctx.cr6.gt) goto loc_8214240C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82131a08
	ctx.lr = 0x8214240C;
	sub_82131A08(ctx, base);
loc_8214240C:
	// stb r28,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r28.u8);
loc_82142410:
	// addi r31,r31,32
	ctx.r31.s64 = ctx.r31.s64 + 32;
	// addi r11,r29,64
	ctx.r11.s64 = ctx.r29.s64 + 64;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821423ec
	if (ctx.cr6.lt) goto loc_821423EC;
	// bl 0x82141eb8
	ctx.lr = 0x82142428;
	sub_82141EB8(ctx, base);
	// lis r11,-32153
	ctx.r11.s64 = -2107179008;
	// lwz r31,-16764(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16764);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82141280
	ctx.lr = 0x82142438;
	sub_82141280(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r5,r10,11276
	ctx.r5.s64 = ctx.r10.s64 + 11276;
	// bl 0x8227ebd8
	ctx.lr = 0x82142448;
	sub_8227EBD8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821423B0) {
	__imp__sub_821423B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82142450) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x82142458;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r29,r11,-30024
	ctx.r29.s64 = ctx.r11.s64 + -30024;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
loc_82142470:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82142494
	if (ctx.cr6.eq) goto loc_82142494;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// ble cr6,0x82142490
	if (!ctx.cr6.gt) goto loc_82142490;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82131a08
	ctx.lr = 0x82142490;
	sub_82131A08(ctx, base);
loc_82142490:
	// stb r28,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r28.u8);
loc_82142494:
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8212fa88
	ctx.lr = 0x821424A0;
	sub_8212FA88(ctx, base);
	// addi r31,r31,32
	ctx.r31.s64 = ctx.r31.s64 + 32;
	// addi r11,r29,64
	ctx.r11.s64 = ctx.r29.s64 + 64;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82142470
	if (ctx.cr6.lt) goto loc_82142470;
	// lis r11,-32153
	ctx.r11.s64 = -2107179008;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// addi r28,r11,-16784
	ctx.r28.s64 = ctx.r11.s64 + -16784;
	// li r27,1
	ctx.r27.s64 = 1;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_821424C8:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x821424f0
	if (ctx.cr6.lt) goto loc_821424F0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82141280
	ctx.lr = 0x821424DC;
	sub_82141280(ctx, base);
	// rlwinm r11,r3,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 5) & 0xFFFFFFE0;
	// lbzx r10,r11,r29
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r29.u32);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// beq cr6,0x821424f0
	if (ctx.cr6.eq) goto loc_821424F0;
	// stbx r27,r11,r29
	PPC_STORE_U8(ctx.r11.u32 + ctx.r29.u32, ctx.r27.u8);
loc_821424F0:
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// addi r11,r28,16
	ctx.r11.s64 = ctx.r28.s64 + 16;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821424c8
	if (ctx.cr6.lt) goto loc_821424C8;
	// bl 0x8230be68
	ctx.lr = 0x82142508;
	sub_8230BE68(ctx, base);
	// bl 0x82141eb8
	ctx.lr = 0x8214250C;
	sub_82141EB8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82142450) {
	__imp__sub_82142450(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82142514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82142514) {
	__imp__sub_82142514(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82142518) {
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
loc_8214252C:
	// li r4,-5
	ctx.r4.s64 = -5;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8212fa50
	ctx.lr = 0x82142538;
	sub_8212FA50(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// blt cr6,0x8214252c
	if (ctx.cr6.lt) goto loc_8214252C;
	// bl 0x8230be78
	ctx.lr = 0x82142548;
	sub_8230BE78(ctx, base);
	// bl 0x82141eb8
	ctx.lr = 0x8214254C;
	sub_82141EB8(ctx, base);
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

PPC_WEAK_FUNC(sub_82142518) {
	__imp__sub_82142518(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82142560) {
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
	// lis r11,-32153
	ctx.r11.s64 = -2107179008;
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r5,r11,-16640
	ctx.r5.s64 = ctx.r11.s64 + -16640;
	// addi r3,r9,-4852
	ctx.r3.s64 = ctx.r9.s64 + -4852;
	// addi r4,r10,6232
	ctx.r4.s64 = ctx.r10.s64 + 6232;
	// bl 0x8227da10
	ctx.lr = 0x82142588;
	sub_8227DA10(ctx, base);
	// lis r8,-32153
	ctx.r8.s64 = -2107179008;
	// lis r7,-32236
	ctx.r7.s64 = -2112618496;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// addi r5,r8,-16660
	ctx.r5.s64 = ctx.r8.s64 + -16660;
	// addi r3,r6,-4836
	ctx.r3.s64 = ctx.r6.s64 + -4836;
	// addi r4,r7,5640
	ctx.r4.s64 = ctx.r7.s64 + 5640;
	// bl 0x8227da10
	ctx.lr = 0x821425A4;
	sub_8227DA10(ctx, base);
	// lis r5,-32153
	ctx.r5.s64 = -2107179008;
	// lis r4,-32236
	ctx.r4.s64 = -2112618496;
	// lis r3,-32255
	ctx.r3.s64 = -2113863680;
	// addi r5,r5,-16680
	ctx.r5.s64 = ctx.r5.s64 + -16680;
	// addi r3,r3,11276
	ctx.r3.s64 = ctx.r3.s64 + 11276;
	// addi r4,r4,8688
	ctx.r4.s64 = ctx.r4.s64 + 8688;
	// bl 0x8227da10
	ctx.lr = 0x821425C0;
	sub_8227DA10(ctx, base);
	// lis r11,-32153
	ctx.r11.s64 = -2107179008;
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r5,r11,-16700
	ctx.r5.s64 = ctx.r11.s64 + -16700;
	// addi r3,r9,11300
	ctx.r3.s64 = ctx.r9.s64 + 11300;
	// addi r4,r10,8944
	ctx.r4.s64 = ctx.r10.s64 + 8944;
	// bl 0x8227da10
	ctx.lr = 0x821425DC;
	sub_8227DA10(ctx, base);
	// lis r8,-32153
	ctx.r8.s64 = -2107179008;
	// lis r7,-32236
	ctx.r7.s64 = -2112618496;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// addi r5,r8,-16720
	ctx.r5.s64 = ctx.r8.s64 + -16720;
	// addi r3,r6,11700
	ctx.r3.s64 = ctx.r6.s64 + 11700;
	// addi r4,r7,9136
	ctx.r4.s64 = ctx.r7.s64 + 9136;
	// bl 0x8227da10
	ctx.lr = 0x821425F8;
	sub_8227DA10(ctx, base);
	// lis r5,-32153
	ctx.r5.s64 = -2107179008;
	// lis r4,-32236
	ctx.r4.s64 = -2112618496;
	// lis r3,-32255
	ctx.r3.s64 = -2113863680;
	// addi r5,r5,-16740
	ctx.r5.s64 = ctx.r5.s64 + -16740;
	// addi r3,r3,11676
	ctx.r3.s64 = ctx.r3.s64 + 11676;
	// addi r4,r4,9296
	ctx.r4.s64 = ctx.r4.s64 + 9296;
	// bl 0x8227da10
	ctx.lr = 0x82142614;
	sub_8227DA10(ctx, base);
	// lis r11,-32153
	ctx.r11.s64 = -2107179008;
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r5,r11,-16760
	ctx.r5.s64 = ctx.r11.s64 + -16760;
	// addi r3,r9,11652
	ctx.r3.s64 = ctx.r9.s64 + 11652;
	// addi r4,r10,9496
	ctx.r4.s64 = ctx.r10.s64 + 9496;
	// bl 0x8227da10
	ctx.lr = 0x82142630;
	sub_8227DA10(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82142560) {
	__imp__sub_82142560(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82142640) {
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
	// bl 0x82142560
	ctx.lr = 0x82142650;
	sub_82142560(ctx, base);
	// lis r10,-32153
	ctx.r10.s64 = -2107179008;
	// li r11,-1
	ctx.r11.s64 = -1;
	// addi r9,r10,-16784
	ctx.r9.s64 = ctx.r10.s64 + -16784;
	// stw r11,-16784(r10)
	PPC_STORE_U32(ctx.r10.u32 + -16784, ctx.r11.u32);
	// stw r11,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
	// stw r11,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r11.u32);
	// stw r11,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82142640) {
	__imp__sub_82142640(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8214267C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8214267C) {
	__imp__sub_8214267C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82142680) {
	PPC_FUNC_PROLOGUE();
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r3,120
	ctx.r11.s64 = ctx.r3.s64 + 120;
loc_82142688:
	// lbz r8,-7(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + -7);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x821426a0
	if (ctx.cr6.eq) goto loc_821426A0;
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// cmpld cr6,r9,r4
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, ctx.r4.u64, ctx.xer);
	// beq cr6,0x821426b8
	if (ctx.cr6.eq) goto loc_821426B8;
loc_821426A0:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// blt cr6,0x82142688
	if (ctx.cr6.lt) goto loc_82142688;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_821426B8:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82142680) {
	__imp__sub_82142680(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821426C0) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lbz r10,112(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 112);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821426e8
	if (!ctx.cr6.eq) goto loc_821426E8;
	// li r3,0
	ctx.r3.s64 = 0;
	// std r10,120(r11)
	PPC_STORE_U64(ctx.r11.u32 + 120, ctx.r10.u64);
	// blr 
	return;
loc_821426E8:
	// ld r3,120(r11)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r11.u32 + 120);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821426C0) {
	__imp__sub_821426C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821426F0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821426F0) {
	__imp__sub_821426F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821426F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821426F4) {
	__imp__sub_821426F4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821426F8) {
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
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// li r10,6
	ctx.r10.s64 = 6;
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r9,10100(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 10100);
	// lwz r8,10096(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 10096);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
loc_8214272C:
	// stdu r7,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r7.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x8214272c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8214272C;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,4
	ctx.r10.s64 = 4;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// stw r9,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// addi r5,r3,8
	ctx.r5.s64 = ctx.r3.s64 + 8;
	// stw r8,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r8.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82375908
	ctx.lr = 0x82142770;
	sub_82375908(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x821427a0
	if (!ctx.cr6.lt) goto loc_821427A0;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r3,16
	ctx.r3.s64 = 16;
	// addi r4,r11,11724
	ctx.r4.s64 = ctx.r11.s64 + 11724;
	// bl 0x82280b08
	ctx.lr = 0x8214278C;
	sub_82280B08(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_821427A0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821426F8) {
	__imp__sub_821426F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821427B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821427B4) {
	__imp__sub_821427B4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821427B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x821427C0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// add r29,r3,r4
	ctx.r29.u64 = ctx.r3.u64 + ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lbz r11,208(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 208);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82142868
	if (!ctx.cr6.eq) goto loc_82142868;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821427F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8214283c
	if (ctx.cr6.lt) goto loc_8214283C;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r11,10100
	ctx.r5.s64 = ctx.r11.s64 + 10100;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8214281C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x82142848
	if (!ctx.cr6.lt) goto loc_82142848;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8214283C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8214283C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_82142848:
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stb r11,208(r29)
	PPC_STORE_U8(ctx.r29.u32 + 208, ctx.r11.u8);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r10,11756
	ctx.r4.s64 = ctx.r10.s64 + 11756;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82280900
	ctx.lr = 0x82142868;
	sub_82280900(ctx, base);
loc_82142868:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821427B8) {
	__imp__sub_821427B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82142874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82142874) {
	__imp__sub_82142874(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82142878) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82142880;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// add r29,r3,r4
	ctx.r29.u64 = ctx.r3.u64 + ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lbz r11,208(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 208);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82142930
	if (ctx.cr6.eq) goto loc_82142930;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r4,r11,11896
	ctx.r4.s64 = ctx.r11.s64 + 11896;
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x82280900
	ctx.lr = 0x821428B4;
	sub_82280900(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// stb r10,208(r29)
	PPC_STORE_U8(ctx.r29.u32 + 208, ctx.r10.u8);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r5,r9,10100
	ctx.r5.s64 = ctx.r9.s64 + 10100;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r7,16(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x821428E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x821428fc
	if (!ctx.cr6.lt) goto loc_821428FC;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r3,16
	ctx.r3.s64 = 16;
	// addi r4,r11,11848
	ctx.r4.s64 = ctx.r11.s64 + 11848;
	// bl 0x82280b08
	ctx.lr = 0x821428FC;
	sub_82280B08(ctx, base);
loc_821428FC:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82142914;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x8214293c
	if (!ctx.cr6.lt) goto loc_8214293C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r3,16
	ctx.r3.s64 = 16;
	// addi r4,r11,11804
	ctx.r4.s64 = ctx.r11.s64 + 11804;
	// bl 0x82280b08
	ctx.lr = 0x82142930;
	sub_82280B08(ctx, base);
loc_82142930:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_8214293C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82142878) {
	__imp__sub_82142878(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82142948) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82142988
	if (ctx.cr6.eq) goto loc_82142988;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82142970:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82142878
	ctx.lr = 0x8214297C;
	sub_82142878(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,4
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 4, ctx.xer);
	// blt cr6,0x82142970
	if (ctx.cr6.lt) goto loc_82142970;
loc_82142988:
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

PPC_WEAK_FUNC(sub_82142948) {
	__imp__sub_82142948(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821429A0) {
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
	// rlwinm r11,r5,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// li r7,0
	ctx.r7.s64 = 0;
	// add r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 + ctx.r11.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// li r5,1
	ctx.r5.s64 = 1;
	// add r31,r11,r4
	ctx.r31.u64 = ctx.r11.u64 + ctx.r4.u64;
	// addi r4,r31,120
	ctx.r4.s64 = ctx.r31.s64 + 120;
	// bl 0x8236b1e8
	ctx.lr = 0x821429D4;
	sub_8236B1E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821429ec
	if (!ctx.cr6.eq) goto loc_821429EC;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x821429f0
	if (ctx.cr6.gt) goto loc_821429F0;
loc_821429EC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_821429F0:
	// stb r11,152(r31)
	PPC_STORE_U8(ctx.r31.u32 + 152, ctx.r11.u8);
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

PPC_WEAK_FUNC(sub_821429A0) {
	__imp__sub_821429A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82142A08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82142A10;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r4,120
	ctx.r31.s64 = ctx.r4.s64 + 120;
	// li r30,2
	ctx.r30.s64 = 2;
loc_82142A20:
	// lbz r11,-7(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + -7);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82142a68
	if (ctx.cr6.eq) goto loc_82142A68;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8236b1e8
	ctx.lr = 0x82142A44;
	sub_8236B1E8(ctx, base);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// subfe r8,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r8,r9
	ctx.r11.u64 = ctx.r8.u64 & ctx.r9.u64;
	// neg r7,r11
	ctx.r7.s64 = -ctx.r11.s64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// andc r6,r7,r11
	ctx.r6.u64 = ctx.r7.u64 & ~ctx.r11.u64;
	// rlwinm r5,r6,1,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0x1;
	// stb r5,32(r31)
	PPC_STORE_U8(ctx.r31.u32 + 32, ctx.r5.u8);
loc_82142A68:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,48
	ctx.r31.s64 = ctx.r31.s64 + 48;
	// bne 0x82142a20
	if (!ctx.cr0.eq) goto loc_82142A20;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82142A08) {
	__imp__sub_82142A08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82142A7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82142A7C) {
	__imp__sub_82142A7C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82142A80) {
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
	// bl 0x8235aa78
	ctx.lr = 0x82142AA0;
	sub_8235AA78(ctx, base);
	// bl 0x8230b018
	ctx.lr = 0x82142AA4;
	sub_8230B018(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82142ab8
	if (ctx.cr6.eq) goto loc_82142AB8;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82142acc
	goto loc_82142ACC;
loc_82142AB8:
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lbz r3,152(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 152);
loc_82142ACC:
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

PPC_WEAK_FUNC(sub_82142A80) {
	__imp__sub_82142A80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82142AE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82142AE4) {
	__imp__sub_82142AE4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82142AE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82142AF0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8230b488
	ctx.lr = 0x82142B04;
	sub_8230B488(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82142948
	ctx.lr = 0x82142B10;
	sub_82142948(ctx, base);
	// cmpwi cr6,r29,2
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 2, ctx.xer);
	// beq cr6,0x82142b24
	if (ctx.cr6.eq) goto loc_82142B24;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821427b8
	ctx.lr = 0x82142B24;
	sub_821427B8(ctx, base);
loc_82142B24:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82142AE8) {
	__imp__sub_82142AE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82142B2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82142B2C) {
	__imp__sub_82142B2C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82142B30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x82142B38;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x8235aa60
	ctx.lr = 0x82142B54;
	sub_8235AA60(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r31,120
	ctx.r11.s64 = ctx.r31.s64 + 120;
loc_82142B60:
	// lbz r8,-7(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + -7);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82142b78
	if (ctx.cr6.eq) goto loc_82142B78;
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// cmpld cr6,r9,r28
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, ctx.r28.u64, ctx.xer);
	// beq cr6,0x82142b8c
	if (ctx.cr6.eq) goto loc_82142B8C;
loc_82142B78:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// blt cr6,0x82142b60
	if (ctx.cr6.lt) goto loc_82142B60;
	// li r10,-1
	ctx.r10.s64 = -1;
loc_82142B8C:
	// cmpw cr6,r10,r30
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r30.s32, ctx.xer);
	// beq cr6,0x82142cf8
	if (ctx.cr6.eq) goto loc_82142CF8;
	// cmpldi cr6,r28,0
	ctx.cr6.compare<uint64_t>(ctx.r28.u64, 0, ctx.xer);
	// bne cr6,0x82142ba8
	if (!ctx.cr6.eq) goto loc_82142BA8;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_82142BA8:
	// lbz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82142c80
	if (ctx.cr6.eq) goto loc_82142C80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8230b018
	ctx.lr = 0x82142BBC;
	sub_8230B018(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82142bf8
	if (ctx.cr6.eq) goto loc_82142BF8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8230afc8
	ctx.lr = 0x82142BD0;
	sub_8230AFC8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x8230b488
	ctx.lr = 0x82142BD8;
	sub_8230B488(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82142948
	ctx.lr = 0x82142BE4;
	sub_82142948(ctx, base);
	// cmpwi cr6,r27,2
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 2, ctx.xer);
	// beq cr6,0x82142bf8
	if (ctx.cr6.eq) goto loc_82142BF8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821427b8
	ctx.lr = 0x82142BF8;
	sub_821427B8(ctx, base);
loc_82142BF8:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82142C1C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r9,10100
	ctx.r5.s64 = ctx.r9.s64 + 10100;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,20(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82142C40;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r27,r31,208
	ctx.r27.s64 = ctx.r31.s64 + 208;
loc_82142C48:
	// lbzx r11,r27,r29
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + ctx.r29.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82142c74
	if (ctx.cr6.eq) goto loc_82142C74;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82142C74;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82142C74:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpwi cr6,r29,4
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 4, ctx.xer);
	// blt cr6,0x82142c48
	if (ctx.cr6.lt) goto loc_82142C48;
loc_82142C80:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235c248
	ctx.lr = 0x82142C88;
	sub_8235C248(ctx, base);
	// addi r11,r30,3
	ctx.r11.s64 = ctx.r30.s64 + 3;
	// rlwinm r10,r30,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r30,r10
	ctx.r10.u64 = ctx.r30.u64 + ctx.r10.u64;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r10,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// li r8,1
	ctx.r8.s64 = 1;
	// add r30,r11,r31
	ctx.r30.u64 = ctx.r11.u64 + ctx.r31.u64;
	// rlwinm r7,r9,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// slw r6,r8,r3
	ctx.r6.u64 = ctx.r3.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r3.u8 & 0x3F));
	// li r5,0
	ctx.r5.s64 = 0;
	// stwx r6,r7,r31
	PPC_STORE_U32(ctx.r7.u32 + ctx.r31.u32, ctx.r6.u32);
	// stb r8,113(r30)
	PPC_STORE_U8(ctx.r30.u32 + 113, ctx.r8.u8);
	// li r7,0
	ctx.r7.s64 = 0;
	// stb r5,153(r30)
	PPC_STORE_U8(ctx.r30.u32 + 153, ctx.r5.u8);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r30,120
	ctx.r4.s64 = ctx.r30.s64 + 120;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8236b1e8
	ctx.lr = 0x82142CD8;
	sub_8236B1E8(ctx, base);
	// addic r4,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r4.s64 = ctx.r3.s64 + -1;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// subfe r9,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 & ctx.r10.u64;
	// neg r7,r8
	ctx.r7.s64 = -ctx.r8.s64;
	// andc r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 & ~ctx.r8.u64;
	// rlwinm r5,r6,1,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0x1;
	// stb r5,152(r30)
	PPC_STORE_U8(ctx.r30.u32 + 152, ctx.r5.u8);
loc_82142CF8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82142B30) {
	__imp__sub_82142B30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82142D04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82142D04) {
	__imp__sub_82142D04(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82142D08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82142D10;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r30,r11,r3
	ctx.r30.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lbz r10,113(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 113);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82142d44
	if (!ctx.cr6.eq) goto loc_82142D44;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_82142D44:
	// ld r29,120(r30)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r30.u32 + 120);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r4,r11,12132
	ctx.r4.s64 = ctx.r11.s64 + 12132;
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82280900
	ctx.lr = 0x82142D68;
	sub_82280900(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,113(r30)
	PPC_STORE_U8(ctx.r30.u32 + 113, ctx.r10.u8);
	// lbz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82142e80
	if (ctx.cr6.eq) goto loc_82142E80;
	// addi r11,r31,120
	ctx.r11.s64 = ctx.r31.s64 + 120;
loc_82142D80:
	// lbz r8,-7(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + -7);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82142d98
	if (ctx.cr6.eq) goto loc_82142D98;
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// cmpld cr6,r9,r29
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, ctx.r29.u64, ctx.xer);
	// beq cr6,0x82142dac
	if (ctx.cr6.eq) goto loc_82142DAC;
loc_82142D98:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// blt cr6,0x82142d80
	if (ctx.cr6.lt) goto loc_82142D80;
	// b 0x82142db4
	goto loc_82142DB4;
loc_82142DAC:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge cr6,0x82142e80
	if (!ctx.cr6.lt) goto loc_82142E80;
loc_82142DB4:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r11,10100
	ctx.r5.s64 = ctx.r11.s64 + 10100;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,24(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82142DD8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82142df4
	if (ctx.cr6.eq) goto loc_82142DF4;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r3,16
	ctx.r3.s64 = 16;
	// addi r4,r11,12080
	ctx.r4.s64 = ctx.r11.s64 + 12080;
	// bl 0x82280b08
	ctx.lr = 0x82142DF4;
	sub_82280B08(ctx, base);
loc_82142DF4:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82142E0C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82142e28
	if (ctx.cr6.eq) goto loc_82142E28;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r3,16
	ctx.r3.s64 = 16;
	// addi r4,r11,12028
	ctx.r4.s64 = ctx.r11.s64 + 12028;
	// bl 0x82280b08
	ctx.lr = 0x82142E28;
	sub_82280B08(ctx, base);
loc_82142E28:
	// lwz r3,216(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 216);
	// bl 0x8230bd68
	ctx.lr = 0x82142E30;
	sub_8230BD68(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82142e80
	if (ctx.cr6.eq) goto loc_82142E80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,216(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 216);
	// bl 0x8230c3d0
	ctx.lr = 0x82142E48;
	sub_8230C3D0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82142e70
	if (ctx.cr6.lt) goto loc_82142E70;
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r10,212(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// li r3,1
	ctx.r3.s64 = 1;
	// slw r9,r11,r28
	ctx.r9.u64 = ctx.r28.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r28.u8 & 0x3F));
	// andc r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 & ~ctx.r9.u64;
	// stw r8,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r8.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_82142E70:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r3,14
	ctx.r3.s64 = 14;
	// addi r4,r11,11952
	ctx.r4.s64 = ctx.r11.s64 + 11952;
	// bl 0x82280900
	ctx.lr = 0x82142E80;
	sub_82280900(ctx, base);
loc_82142E80:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82142D08) {
	__imp__sub_82142D08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82142E8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82142E8C) {
	__imp__sub_82142E8C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82142E90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82142E98;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r30,r3,113
	ctx.r30.s64 = ctx.r3.s64 + 113;
loc_82142EA8:
	// lbz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82142ec0
	if (ctx.cr6.eq) goto loc_82142EC0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82142d08
	ctx.lr = 0x82142EC0;
	sub_82142D08(ctx, base);
loc_82142EC0:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,48
	ctx.r30.s64 = ctx.r30.s64 + 48;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// blt cr6,0x82142ea8
	if (ctx.cr6.lt) goto loc_82142EA8;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82142ef8
	if (ctx.cr6.eq) goto loc_82142EF8;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82142EE0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82142878
	ctx.lr = 0x82142EEC;
	sub_82142878(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,4
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 4, ctx.xer);
	// blt cr6,0x82142ee0
	if (ctx.cr6.lt) goto loc_82142EE0;
loc_82142EF8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82142E90) {
	__imp__sub_82142E90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82142F00) {
	PPC_FUNC_PROLOGUE();
	// lbz r10,113(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 113);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82142f1c
	if (ctx.cr6.eq) goto loc_82142F1C;
	// ld r10,120(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 120);
	// li r11,1
	ctx.r11.s64 = 1;
	// std r10,0(r4)
	PPC_STORE_U64(ctx.r4.u32 + 0, ctx.r10.u64);
loc_82142F1C:
	// lbz r10,161(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 161);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82142f3c
	if (ctx.cr6.eq) goto loc_82142F3C;
	// ld r10,168(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 168);
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// stdx r10,r9,r4
	PPC_STORE_U64(ctx.r9.u32 + ctx.r4.u32, ctx.r10.u64);
	// blr 
	return;
loc_82142F3C:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82142F00) {
	__imp__sub_82142F00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82142F44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82142F44) {
	__imp__sub_82142F44(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82142F48) {
	PPC_FUNC_PROLOGUE();
	// lbz r10,113(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 113);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82142f5c
	if (ctx.cr6.eq) goto loc_82142F5C;
	// li r11,1
	ctx.r11.s64 = 1;
loc_82142F5C:
	// lbz r10,161(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 161);
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82142F48) {
	__imp__sub_82142F48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82142F74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82142F74) {
	__imp__sub_82142F74(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82142F78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82142F80;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// add r10,r4,r10
	ctx.r10.u64 = ctx.r4.u64 + ctx.r10.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// add r31,r10,r3
	ctx.r31.u64 = ctx.r10.u64 + ctx.r3.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// lbz r9,113(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 113);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82142fd4
	if (!ctx.cr6.eq) goto loc_82142FD4;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r4,r10,12344
	ctx.r4.s64 = ctx.r10.s64 + 12344;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82280900
	ctx.lr = 0x82142FC8;
	sub_82280900(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_82142FD4:
	// ld r7,120(r31)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r31.u32 + 120);
	// cmpldi cr6,r7,0
	ctx.cr6.compare<uint64_t>(ctx.r7.u64, 0, ctx.xer);
	// bne cr6,0x82142ffc
	if (!ctx.cr6.eq) goto loc_82142FFC;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r3,16
	ctx.r3.s64 = 16;
	// addi r4,r11,12288
	ctx.r4.s64 = ctx.r11.s64 + 12288;
	// bl 0x82280900
	ctx.lr = 0x82142FF0;
	sub_82280900(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_82142FFC:
	// lis r10,-31835
	ctx.r10.s64 = -2086338560;
	// lwz r10,8816(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8816);
	// lbz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 12);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8214302c
	if (ctx.cr6.eq) goto loc_8214302C;
	// lhz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// addi r4,r9,12228
	ctx.r4.s64 = ctx.r9.s64 + 12228;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82280900
	ctx.lr = 0x8214302C;
	sub_82280900(ctx, base);
loc_8214302C:
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// ld r4,120(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 120);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8214304C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82143064
	if (ctx.cr6.lt) goto loc_82143064;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_82143064:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r3,16
	ctx.r3.s64 = 16;
	// addi r4,r11,12184
	ctx.r4.s64 = ctx.r11.s64 + 12184;
	// bl 0x82280b08
	ctx.lr = 0x82143074;
	sub_82280B08(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82142F78) {
	__imp__sub_82142F78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82143080) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82143088;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x82141340
	ctx.lr = 0x821430A0;
	sub_82141340(ctx, base);
	// add r11,r3,r30
	ctx.r11.u64 = ctx.r3.u64 + ctx.r30.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lbz r10,208(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 208);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821430d4
	if (ctx.cr6.eq) goto loc_821430D4;
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// lwz r11,4688(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4688);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821430e0
	if (!ctx.cr6.eq) goto loc_821430E0;
	// lis r11,-32153
	ctx.r11.s64 = -2107179008;
	// lwz r11,-16768(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16768);
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// beq cr6,0x821430f4
	if (ctx.cr6.eq) goto loc_821430F4;
loc_821430D4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_821430E0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821413c8
	ctx.lr = 0x821430E8;
	sub_821413C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821430d4
	if (ctx.cr6.eq) goto loc_821430D4;
loc_821430F4:
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8214310C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821430d4
	if (ctx.cr6.eq) goto loc_821430D4;
	// li r11,10
	ctx.r11.s64 = 10;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,76(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82143140;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// rlwinm r11,r3,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// and r3,r7,r8
	ctx.r3.u64 = ctx.r7.u64 & ctx.r8.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82143080) {
	__imp__sub_82143080(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82143158) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82143160;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x8230bd68
	ctx.lr = 0x82143178;
	sub_8230BD68(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82143190
	if (!ctx.cr6.eq) goto loc_82143190;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_82143190:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8230bd88
	ctx.lr = 0x82143198;
	sub_8230BD88(ctx, base);
	// cmpld cr6,r30,r3
	ctx.cr6.compare<uint64_t>(ctx.r30.u64, ctx.r3.u64, ctx.xer);
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bne cr6,0x821431cc
	if (!ctx.cr6.eq) goto loc_821431CC;
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821431B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r9,r3,-1
	ctx.r9.s64 = ctx.r3.s64 + -1;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r3,r8,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_821431CC:
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821431DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r9,r3,-1
	ctx.r9.s64 = ctx.r3.s64 + -1;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r3,r8,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82143158) {
	__imp__sub_82143158(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821431F0) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82141340
	ctx.lr = 0x82143218;
	sub_82141340(ctx, base);
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8214322C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r9,r3,-1
	ctx.r9.s64 = ctx.r3.s64 + -1;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r3,r8,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
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

PPC_WEAK_FUNC(sub_821431F0) {
	__imp__sub_821431F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82143250) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x82143258;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// addi r31,r3,120
	ctx.r31.s64 = ctx.r3.s64 + 120;
	// mr r27,r26
	ctx.r27.u64 = ctx.r26.u64;
	// li r29,2
	ctx.r29.s64 = 2;
loc_82143274:
	// lbz r10,-8(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + -8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82143288
	if (!ctx.cr6.eq) goto loc_82143288;
	// std r26,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r26.u64);
	// b 0x821432b0
	goto loc_821432B0;
loc_82143288:
	// ld r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// cmpldi cr6,r5,0
	ctx.cr6.compare<uint64_t>(ctx.r5.u64, 0, ctx.xer);
	// beq cr6,0x821432b0
	if (ctx.cr6.eq) goto loc_821432B0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82143158
	ctx.lr = 0x821432A0;
	sub_82143158(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821432b0
	if (ctx.cr6.eq) goto loc_821432B0;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
loc_821432B0:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r31,r31,48
	ctx.r31.s64 = ctx.r31.s64 + 48;
	// bne 0x82143274
	if (!ctx.cr0.eq) goto loc_82143274;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82143250) {
	__imp__sub_82143250(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821432C8) {
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
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821432E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// neg r9,r3
	ctx.r9.s64 = -ctx.r3.s64;
	// andc r8,r9,r3
	ctx.r8.u64 = ctx.r9.u64 & ~ctx.r3.u64;
	// rlwinm r3,r8,1,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821432C8) {
	__imp__sub_821432C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82143304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82143304) {
	__imp__sub_82143304(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82143308) {
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
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82143340
	if (ctx.cr6.eq) goto loc_82143340;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82143338;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
loc_82143340:
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

PPC_WEAK_FUNC(sub_82143308) {
	__imp__sub_82143308(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82143354) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82143354) {
	__imp__sub_82143354(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82143358) {
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
	// bl 0x82372b90
	ctx.lr = 0x8214336C;
	sub_82372B90(ctx, base);
	// cmpwi cr6,r3,1245
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1245, ctx.xer);
	// beq cr6,0x82143384
	if (ctx.cr6.eq) goto loc_82143384;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82143388
	if (!ctx.cr6.eq) goto loc_82143388;
loc_82143384:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82143388:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82143358) {
	__imp__sub_82143358(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82143398) {
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
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82372b90
	ctx.lr = 0x821433C4;
	sub_82372B90(ctx, base);
	// cmpwi cr6,r3,1245
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1245, ctx.xer);
	// beq cr6,0x821433dc
	if (ctx.cr6.eq) goto loc_821433DC;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x821433e0
	if (!ctx.cr6.eq) goto loc_821433E0;
loc_821433DC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_821433E0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821433f4
	if (ctx.cr6.eq) goto loc_821433F4;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82143458
	goto loc_82143458;
loc_821433F4:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r30,120
	ctx.r10.s64 = ctx.r30.s64 + 120;
loc_821433FC:
	// lbz r8,-7(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + -7);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82143414
	if (ctx.cr6.eq) goto loc_82143414;
	// ld r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// cmpld cr6,r9,r31
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, ctx.r31.u64, ctx.xer);
	// beq cr6,0x82143428
	if (ctx.cr6.eq) goto loc_82143428;
loc_82143414:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// blt cr6,0x821433fc
	if (ctx.cr6.lt) goto loc_821433FC;
	// b 0x82143450
	goto loc_82143450;
loc_82143428:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82143450
	if (ctx.cr6.lt) goto loc_82143450;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// lbz r9,153(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 153);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82143454
	if (!ctx.cr6.eq) goto loc_82143454;
loc_82143450:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82143454:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
loc_82143458:
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

PPC_WEAK_FUNC(sub_82143398) {
	__imp__sub_82143398(ctx, base);
}

