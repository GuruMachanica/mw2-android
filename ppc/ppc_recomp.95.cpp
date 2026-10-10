#include "ppc_recomp_shared.h"

PPC_FUNC_IMPL(__imp__sub_8238DB3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8238DB3C) {
	__imp__sub_8238DB3C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238DB40) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8238DB40) {
	__imp__sub_8238DB40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238DB48) {
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
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,8
	ctx.r3.s64 = 8;
	// addi r4,r11,32552
	ctx.r4.s64 = ctx.r11.s64 + 32552;
	// bl 0x82280900
	ctx.lr = 0x8238DB6C;
	sub_82280900(ctx, base);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// li r3,8
	ctx.r3.s64 = 8;
	// addi r4,r10,32456
	ctx.r4.s64 = ctx.r10.s64 + 32456;
	// bl 0x82280900
	ctx.lr = 0x8238DB7C;
	sub_82280900(ctx, base);
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// li r3,8
	ctx.r3.s64 = 8;
	// addi r4,r9,32360
	ctx.r4.s64 = ctx.r9.s64 + 32360;
	// bl 0x82280900
	ctx.lr = 0x8238DB8C;
	sub_82280900(ctx, base);
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r8,32348
	ctx.r4.s64 = ctx.r8.s64 + 32348;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82280900
	ctx.lr = 0x8238DBA0;
	sub_82280900(ctx, base);
	// lis r7,-32251
	ctx.r7.s64 = -2113601536;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r7,32332
	ctx.r4.s64 = ctx.r7.s64 + 32332;
	// bl 0x822830e8
	ctx.lr = 0x8238DBB0;
	sub_822830E8(ctx, base);
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

PPC_WEAK_FUNC(sub_8238DB48) {
	__imp__sub_8238DB48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238DBC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8238DBC4) {
	__imp__sub_8238DBC4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238DBC8) {
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
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r31,r11,14512
	ctx.r31.s64 = ctx.r11.s64 + 14512;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r10,32644
	ctx.r4.s64 = ctx.r10.s64 + 32644;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823df2b0
	ctx.lr = 0x8238DBF4;
	sub_823DF2B0(ctx, base);
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

PPC_WEAK_FUNC(sub_8238DBC8) {
	__imp__sub_8238DBC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238DC0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8238DC0C) {
	__imp__sub_8238DC0C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238DC10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-31799
	ctx.r10.s64 = -2083979264;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,3224
	ctx.r10.s64 = ctx.r10.s64 + 3224;
	// stw r11,1204(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1204, ctx.r11.u32);
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x8238dc38
	if (!ctx.cr6.eq) goto loc_8238DC38;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,1200(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1200, ctx.r11.u32);
	// blr 
	return;
loc_8238DC38:
	// li r9,2
	ctx.r9.s64 = 2;
	// srawi r8,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 31;
	// rlwinm r7,r9,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// subfc r6,r9,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r9.u32;
	ctx.r6.s64 = ctx.r11.s64 - ctx.r9.s64;
	// adde r11,r7,r8
	temp.u8 = (ctx.r7.u32 + ctx.r8.u32 < ctx.r7.u32) | (ctx.r7.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ctx.r7.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r11,1200(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1200, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8238DC10) {
	__imp__sub_8238DC10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238DC54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8238DC54) {
	__imp__sub_8238DC54(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238DC58) {
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
	// lis r10,0
	ctx.r10.s64 = 0;
	// addi r31,r11,3224
	ctx.r31.s64 = ctx.r11.s64 + 3224;
	// ori r11,r10,32768
	ctx.r11.u64 = ctx.r10.u64 | 32768;
	// li r5,1028
	ctx.r5.s64 = 1028;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// stw r11,1272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1272, ctx.r11.u32);
	// bl 0x822e54e0
	ctx.lr = 0x8238DC8C;
	sub_822E54E0(ctx, base);
	// lis r11,16
	ctx.r11.s64 = 1048576;
	// stw r3,1276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1276, ctx.r3.u32);
	// li r5,1028
	ctx.r5.s64 = 1028;
	// stw r11,1280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1280, ctx.r11.u32);
	// li r4,32
	ctx.r4.s64 = 32;
	// lis r3,16
	ctx.r3.s64 = 1048576;
	// bl 0x822e54e0
	ctx.lr = 0x8238DCA8;
	sub_822E54E0(ctx, base);
	// li r11,64
	ctx.r11.s64 = 64;
	// stw r3,1284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1284, ctx.r3.u32);
	// stw r11,1288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1288, ctx.r11.u32);
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

PPC_WEAK_FUNC(sub_8238DC58) {
	__imp__sub_8238DC58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238DCC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x8238DCD0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31799
	ctx.r10.s64 = -2083979264;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r30,r10,3224
	ctx.r30.s64 = ctx.r10.s64 + 3224;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r28,1204(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1204, ctx.r28.u32);
	// lwz r11,24(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x8238dd04
	if (!ctx.cr6.eq) goto loc_8238DD04;
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x8238dd18
	goto loc_8238DD18;
loc_8238DD04:
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
loc_8238DD18:
	// li r5,124
	ctx.r5.s64 = 124;
	// stw r11,1200(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1200, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823de090
	ctx.lr = 0x8238DD2C;
	sub_823DE090(ctx, base);
	// lwz r4,16(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// li r10,6
	ctx.r10.s64 = 6;
	// lis r9,6184
	ctx.r9.s64 = 405274624;
	// li r11,1
	ctx.r11.s64 = 1;
	// ori r7,r9,390
	ctx.r7.u64 = ctx.r9.u64 | 390;
	// stw r4,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r4.u32);
	// lis r6,10280
	ctx.r6.s64 = 673710080;
	// lwz r3,20(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// stw r7,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// ori r5,r6,262
	ctx.r5.u64 = ctx.r6.u64 | 262;
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// addi r8,r31,68
	ctx.r8.s64 = ctx.r31.s64 + 68;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// addi r9,r30,1264
	ctx.r9.s64 = ctx.r30.s64 + 1264;
	// lwz r10,1200(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1200);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// lwz r10,1204(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1204);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// stw r28,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r28.u32);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// stw r10,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
	// stw r28,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r28.u32);
	// lbz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// cntlzw r7,r10
	ctx.r7.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r6,r7,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// stw r28,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r28.u32);
	// stw r28,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r28.u32);
	// stw r6,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r6.u32);
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// stw r5,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r5.u32);
loc_8238DDB4:
	// lwzu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// stwu r11,4(r8)
	ea = 4 + ctx.r8.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r8.u32 = ea;
	// bdnz 0x8238ddb4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8238DDB4;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8238DCC8) {
	__imp__sub_8238DCC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238DDC8) {
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
	// lis r10,-31799
	ctx.r10.s64 = -2083979264;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r10,4520
	ctx.r31.s64 = ctx.r10.s64 + 4520;
	// stw r11,4520(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4520, ctx.r11.u32);
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// lbz r11,1(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8238de30
	if (ctx.cr6.eq) goto loc_8238DE30;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lfs f0,32648(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32648);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stfs f0,28(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// b 0x8238de40
	goto loc_8238DE40;
loc_8238DE30:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,32272(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32272);
	ctx.f0.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f0,28(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
loc_8238DE40:
	// lis r10,-31936
	ctx.r10.s64 = -2092957696;
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// lwz r3,-4784(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4784);
	// bl 0x822e1f18
	ctx.lr = 0x8238DE50;
	sub_822E1F18(ctx, base);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lfs f0,28(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r6,12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// lfs f13,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// std r8,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r8.u64);
	// lfd f9,88(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r7,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r7.u64);
	// lfd f7,96(r1)
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// stfs f13,16(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// fcfid f6,f9
	ctx.f6.f64 = double(ctx.f9.s64);
	// fcfid f5,f7
	ctx.f5.f64 = double(ctx.f7.s64);
	// frsp f4,f12
	ctx.f4.f64 = double(float(ctx.f12.f64));
	// frsp f8,f10
	ctx.f8.f64 = double(float(ctx.f10.f64));
	// frsp f2,f6
	ctx.f2.f64 = double(float(ctx.f6.f64));
	// frsp f1,f5
	ctx.f1.f64 = double(float(ctx.f5.f64));
	// fmuls f13,f4,f0
	ctx.f13.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// fmuls f3,f8,f0
	ctx.f3.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fdivs f0,f3,f2
	ctx.f0.f64 = double(float(ctx.f3.f64 / ctx.f2.f64));
	// stfs f0,36(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// fdivs f0,f13,f1
	ctx.f0.f64 = double(float(ctx.f13.f64 / ctx.f1.f64));
	// stfs f0,32(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
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

PPC_WEAK_FUNC(sub_8238DDC8) {
	__imp__sub_8238DDC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238DEE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8238DEE4) {
	__imp__sub_8238DEE4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238DEE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// addi r10,r11,4520
	ctx.r10.s64 = ctx.r11.s64 + 4520;
	// lwz r3,20(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8238DEE8) {
	__imp__sub_8238DEE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238DEF8) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x820bb2a8
	sub_820BB2A8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8238DEF8) {
	__imp__sub_8238DEF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238DF04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8238DF04) {
	__imp__sub_8238DF04(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238DF08) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31799
	ctx.r10.s64 = -2083979264;
	// li r11,97
	ctx.r11.s64 = 97;
	// addi r9,r10,13512
	ctx.r9.s64 = ctx.r10.s64 + 13512;
	// stb r11,20(r9)
	PPC_STORE_U8(ctx.r9.u32 + 20, ctx.r11.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8238DF08) {
	__imp__sub_8238DF08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238DF1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8238DF1C) {
	__imp__sub_8238DF1C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238DF20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x820bb2a8
	ctx.lr = 0x8238DF38;
	sub_820BB2A8(ctx, base);
	// lwz r10,172(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// lwz r9,168(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// addi r11,r11,4520
	ctx.r11.s64 = ctx.r11.s64 + 4520;
	// blt cr6,0x8238df58
	if (ctx.cr6.lt) goto loc_8238DF58;
	// stw r9,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r9.u32);
	// b 0x8238df5c
	goto loc_8238DF5C;
loc_8238DF58:
	// stw r10,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r10.u32);
loc_8238DF5C:
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r9,244(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// rlwinm r10,r10,15,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 15) & 0x1;
	// cmpwi cr6,r9,6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 6, ctx.xer);
	// stb r10,44(r11)
	PPC_STORE_U8(ctx.r11.u32 + 44, ctx.r10.u8);
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// addi r11,r11,13512
	ctx.r11.s64 = ctx.r11.s64 + 13512;
	// blt cr6,0x8238df88
	if (ctx.cr6.lt) goto loc_8238DF88;
	// li r10,6
	ctx.r10.s64 = 6;
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// b 0x8238df8c
	goto loc_8238DF8C;
loc_8238DF88:
	// stw r9,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r9.u32);
loc_8238DF8C:
	// lwz r10,144(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r8,188(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// rlwinm r9,r10,22,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 22) & 0x1;
	// lwz r6,140(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// rlwinm r10,r10,6,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0x1;
	// stb r7,21(r11)
	PPC_STORE_U8(ctx.r11.u32 + 21, ctx.r7.u8);
	// stb r9,8(r11)
	PPC_STORE_U8(ctx.r11.u32 + 8, ctx.r9.u8);
	// rlwinm r9,r6,16,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 16) & 0x1;
	// stb r10,9(r11)
	PPC_STORE_U8(ctx.r11.u32 + 9, ctx.r10.u8);
	// li r10,97
	ctx.r10.s64 = 97;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stb r9,22(r11)
	PPC_STORE_U8(ctx.r11.u32 + 22, ctx.r9.u8);
	// stb r10,20(r11)
	PPC_STORE_U8(ctx.r11.u32 + 20, ctx.r10.u8);
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8238DF20) {
	__imp__sub_8238DF20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238DFD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8238DFD4) {
	__imp__sub_8238DFD4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238DFD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// lwz r3,12644(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12644);
	// b 0x822e0238
	sub_822E0238(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8238DFD8) {
	__imp__sub_8238DFD8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238DFE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8238DFE4) {
	__imp__sub_8238DFE4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238DFE8) {
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
	// bl 0x823de01c
	ctx.lr = 0x8238E000;
	__savefpr_25(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// lis r10,-31780
	ctx.r10.s64 = -2082734080;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,12644(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12644);
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r10,12832(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12832);
	// lfs f31,12168(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12168);
	ctx.f31.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f30,5484(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 5484);
	ctx.f30.f64 = double(temp.f32);
	// lfs f0,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f29,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f29.f64 = double(temp.f32);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lfs f27,6232(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 6232);
	ctx.f27.f64 = double(temp.f32);
	// fdivs f28,f31,f0
	ctx.f28.f64 = double(float(ctx.f31.f64 / ctx.f0.f64));
	// lfs f25,2416(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2416);
	ctx.f25.f64 = double(temp.f32);
	// lfs f26,2956(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2956);
	ctx.f26.f64 = double(temp.f32);
loc_8238E050:
	// fcmpu cr6,f28,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f28.f64, ctx.f31.f64);
	// bne cr6,0x8238e070
	if (!ctx.cr6.eq) goto loc_8238E070;
	// fcmpu cr6,f29,f30
	ctx.cr6.compare(ctx.f29.f64, ctx.f30.f64);
	// bne cr6,0x8238e070
	if (!ctx.cr6.eq) goto loc_8238E070;
	// rlwinm r11,r31,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 8) & 0xFFFFFF00;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// b 0x8238e0d8
	goto loc_8238E0D8;
loc_8238E070:
	// extsw r11,r31
	ctx.r11.s64 = ctx.r31.s32;
	// fsubs f0,f31,f29
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f31.f64 - ctx.f29.f64));
	// fmr f2,f28
	ctx.f2.f64 = ctx.f28.f64;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmsubs f10,f11,f27,f29
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f27.f64 - ctx.f29.f64));
	// fdivs f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 / ctx.f0.f64));
	// fsubs f8,f9,f31
	ctx.f8.f64 = double(float(ctx.f9.f64 - ctx.f31.f64));
	// fneg f7,f9
	ctx.f7.u64 = ctx.f9.u64 ^ 0x8000000000000000;
	// fsel f6,f8,f31,f9
	ctx.f6.f64 = ctx.f8.f64 >= 0.0 ? ctx.f31.f64 : ctx.f9.f64;
	// fsel f5,f7,f30,f6
	ctx.f5.f64 = ctx.f7.f64 >= 0.0 ? ctx.f30.f64 : ctx.f6.f64;
	// fsubs f4,f5,f31
	ctx.f4.f64 = double(float(ctx.f5.f64 - ctx.f31.f64));
	// fneg f3,f5
	ctx.f3.u64 = ctx.f5.u64 ^ 0x8000000000000000;
	// fsel f1,f4,f31,f5
	ctx.f1.f64 = ctx.f4.f64 >= 0.0 ? ctx.f31.f64 : ctx.f5.f64;
	// fsel f1,f3,f30,f1
	ctx.f1.f64 = ctx.f3.f64 >= 0.0 ? ctx.f30.f64 : ctx.f1.f64;
	// bl 0x823e1e88
	ctx.lr = 0x8238E0B8;
	sub_823E1E88(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fmadds f1,f0,f26,f25
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f26.f64 + ctx.f25.f64));
	// bl 0x823dde20
	ctx.lr = 0x8238E0C4;
	sub_823DDE20(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// fctiwz f12,f13
	ctx.f12.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f12,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f12.u64);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// clrlwi r11,r10,16
	ctx.r11.u64 = ctx.r10.u32 & 0xFFFF;
loc_8238E0D8:
	// rlwinm r9,r31,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r31,1
	ctx.r10.s64 = ctx.r31.s64 + 1;
	// clrlwi r31,r10,16
	ctx.r31.u64 = ctx.r10.u32 & 0xFFFF;
	// sthx r11,r9,r30
	PPC_STORE_U16(ctx.r9.u32 + ctx.r30.u32, ctx.r11.u16);
	// cmplwi cr6,r31,256
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 256, ctx.xer);
	// blt cr6,0x8238e050
	if (ctx.cr6.lt) goto loc_8238E050;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x823de068
	ctx.lr = 0x8238E0FC;
	__restfpr_25(ctx, base);
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

PPC_WEAK_FUNC(sub_8238DFE8) {
	__imp__sub_8238DFE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238E110) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-608(r1)
	ea = -608 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// addi r10,r11,4520
	ctx.r10.s64 = ctx.r11.s64 + 4520;
	// lbz r9,44(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 44);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8238e140
	if (ctx.cr6.eq) goto loc_8238E140;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8238dfe8
	ctx.lr = 0x8238E138;
	sub_8238DFE8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823a9c00
	ctx.lr = 0x8238E140;
	sub_823A9C00(ctx, base);
loc_8238E140:
	// addi r1,r1,608
	ctx.r1.s64 = ctx.r1.s64 + 608;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8238E110) {
	__imp__sub_8238E110(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238E150) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8238dfe8
	ctx.lr = 0x8238E174;
	sub_8238DFE8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x8238e1b4
	if (!ctx.cr6.gt) goto loc_8238E1B4;
	// lis r10,0
	ctx.r10.s64 = 0;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
loc_8238E190:
	// lbzx r8,r11,r31
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r31.u32);
	// rotlwi r7,r8,1
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// lhzx r6,r7,r9
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r7.u32 + ctx.r9.u32);
	// rotlwi r5,r6,8
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r6.u32, 8);
	// subf r4,r6,r5
	ctx.r4.s64 = ctx.r5.s64 - ctx.r6.s64;
	// divw r3,r4,r10
	ctx.r3.s32 = ctx.r4.s32 / ctx.r10.s32;
	// stbx r3,r11,r31
	PPC_STORE_U8(ctx.r11.u32 + ctx.r31.u32, ctx.r3.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x8238e190
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8238E190;
loc_8238E1B4:
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

PPC_WEAK_FUNC(sub_8238E150) {
	__imp__sub_8238E150(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238E1CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8238E1CC) {
	__imp__sub_8238E1CC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238E1D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// li r9,10
	ctx.r9.s64 = 10;
	// addi r8,r11,13312
	ctx.r8.s64 = ctx.r11.s64 + 13312;
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
	// addi r10,r8,-4
	ctx.r10.s64 = ctx.r8.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8238E1E8:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8238e1e8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8238E1E8;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r11.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8238E1D0) {
	__imp__sub_8238E1D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238E200) {
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
	// bl 0x823b2778
	ctx.lr = 0x8238E210;
	sub_823B2778(ctx, base);
	// bl 0x8238be80
	ctx.lr = 0x8238E214;
	sub_8238BE80(ctx, base);
	// bl 0x823c39c0
	ctx.lr = 0x8238E218;
	sub_823C39C0(ctx, base);
	// bl 0x8239ccb8
	ctx.lr = 0x8238E21C;
	sub_8239CCB8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8238E200) {
	__imp__sub_8238E200(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238E22C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8238E22C) {
	__imp__sub_8238E22C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238E230) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8238E230) {
	__imp__sub_8238E230(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238E238) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8238E240;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r3,8
	ctx.r3.s64 = 8;
	// addi r4,r11,32652
	ctx.r4.s64 = ctx.r11.s64 + 32652;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82280900
	ctx.lr = 0x8238E260;
	sub_82280900(ctx, base);
	// lis r10,-31799
	ctx.r10.s64 = -2083979264;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// addi r11,r10,3224
	ctx.r11.s64 = ctx.r10.s64 + 3224;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x820bdec8
	ctx.lr = 0x8238E284;
	sub_820BDEC8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8238E238) {
	__imp__sub_8238E238(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238E28C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8238E28C) {
	__imp__sub_8238E28C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238E290) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8238E290) {
	__imp__sub_8238E290(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238E298) {
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
	// addi r31,r11,3224
	ctx.r31.s64 = ctx.r11.s64 + 3224;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8238e2d4
	if (!ctx.cr6.eq) goto loc_8238E2D4;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r3,8
	ctx.r3.s64 = 8;
	// addi r4,r11,32684
	ctx.r4.s64 = ctx.r11.s64 + 32684;
	// bl 0x82280900
	ctx.lr = 0x8238E2CC;
	sub_82280900(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_8238E2D4:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// bl 0x8238df20
	ctx.lr = 0x8238E2E4;
	sub_8238DF20(ctx, base);
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

PPC_WEAK_FUNC(sub_8238E298) {
	__imp__sub_8238E298(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238E2FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8238E2FC) {
	__imp__sub_8238E2FC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238E300) {
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
	// lis r6,-31780
	ctx.r6.s64 = -2082734080;
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lis r31,-31799
	ctx.r31.s64 = -2083979264;
	// lwz r5,16(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r11,r31,3204
	ctx.r11.s64 = ctx.r31.s64 + 3204;
	// lwz r10,12676(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12676);
	// addi r8,r11,10212
	ctx.r8.s64 = ctx.r11.s64 + 10212;
	// lwz r3,3204(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3204);
	// addi r4,r11,10276
	ctx.r4.s64 = ctx.r11.s64 + 10276;
	// lwz r11,3204(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3204);
	// rlwinm r6,r3,2,27,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0x1C;
	// rlwinm r11,r11,3,26,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x38;
	// lbz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 12);
	// add r3,r11,r8
	ctx.r3.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addic r8,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// subfe r11,r8,r10
	temp.u8 = (~ctx.r8.u32 + ctx.r10.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r8.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r11,20(r7)
	PPC_STORE_U32(ctx.r7.u32 + 20, ctx.r11.u32);
	// stwx r5,r6,r4
	PPC_STORE_U32(ctx.r6.u32 + ctx.r4.u32, ctx.r5.u32);
	// bl 0x823ef5a0
	ctx.lr = 0x8238E364;
	sub_823EF5A0(ctx, base);
	// lwsync 
	// lwz r11,3204(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3204);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,3204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3204, ctx.r10.u32);
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

PPC_WEAK_FUNC(sub_8238E300) {
	__imp__sub_8238E300(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238E388) {
	PPC_FUNC_PROLOGUE();
	// fcmpu cr6,f1,f2
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f2.f64);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x8238e398
	if (ctx.cr6.lt) goto loc_8238E398;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8238E398:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8238E388) {
	__imp__sub_8238E388(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238E3A0) {
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
	// addi r31,r11,3224
	ctx.r31.s64 = ctx.r11.s64 + 3224;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x820bad78
	ctx.lr = 0x8238E3C0;
	sub_820BAD78(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x820bacf8
	ctx.lr = 0x8238E3C8;
	sub_820BACF8(ctx, base);
	// li r3,50
	ctx.r3.s64 = 50;
	// bl 0x8228b0d8
	ctx.lr = 0x8238E3D0;
	sub_8228B0D8(ctx, base);
	// lwsync 
	// lis r10,-31799
	ctx.r10.s64 = -2083979264;
	// addi r9,r10,3212
	ctx.r9.s64 = ctx.r10.s64 + 3212;
	// lwz r8,3212(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3212);
	// stw r8,-8(r9)
	PPC_STORE_U32(ctx.r9.u32 + -8, ctx.r8.u32);
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

PPC_WEAK_FUNC(sub_8238E3A0) {
	__imp__sub_8238E3A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238E3F8) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r3,6184
	ctx.r3.s64 = 405274624;
	// ori r3,r3,390
	ctx.r3.u64 = ctx.r3.u64 | 390;
	// bl 0x823c6030
	ctx.lr = 0x8238E41C;
	sub_823C6030(ctx, base);
	// lis r10,-31799
	ctx.r10.s64 = -2083979264;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r31,r10,3224
	ctx.r31.s64 = ctx.r10.s64 + 3224;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// bl 0x8238dcc8
	ctx.lr = 0x8238E438;
	sub_8238DCC8(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r3,8
	ctx.r3.s64 = 8;
	// addi r4,r11,32652
	ctx.r4.s64 = ctx.r11.s64 + 32652;
	// bl 0x82280900
	ctx.lr = 0x8238E448;
	sub_82280900(ctx, base);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r6,261
	ctx.r6.s64 = 261;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r8,r31,8
	ctx.r8.s64 = ctx.r31.s64 + 8;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x820bdec8
	ctx.lr = 0x8238E464;
	sub_820BDEC8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8230dc80
	ctx.lr = 0x8238E46C;
	sub_8230DC80(ctx, base);
	// lis r10,-31799
	ctx.r10.s64 = -2083979264;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stb r11,13352(r10)
	PPC_STORE_U8(ctx.r10.u32 + 13352, ctx.r11.u8);
	// bge cr6,0x8238e4b8
	if (!ctx.cr6.lt) goto loc_8238E4B8;
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r31,r11,14512
	ctx.r31.s64 = ctx.r11.s64 + 14512;
	// addi r4,r10,32644
	ctx.r4.s64 = ctx.r10.s64 + 32644;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x823df2b0
	ctx.lr = 0x8238E49C;
	sub_823DF2B0(ctx, base);
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r9,32720
	ctx.r4.s64 = ctx.r9.s64 + 32720;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82280900
	ctx.lr = 0x8238E4B0;
	sub_82280900(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8238e4fc
	goto loc_8238E4FC;
loc_8238E4B8:
	// lis r11,-32199
	ctx.r11.s64 = -2110193664;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r11,-7424
	ctx.r4.s64 = ctx.r11.s64 + -7424;
	// bl 0x820c3b80
	ctx.lr = 0x8238E4C8;
	sub_820C3B80(ctx, base);
	// addi r30,r31,20
	ctx.r30.s64 = ctx.r31.s64 + 20;
loc_8238E4CC:
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x820bdec8
	ctx.lr = 0x8238E4E8;
	sub_820BDEC8(ctx, base);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// addi r11,r31,92
	ctx.r11.s64 = ctx.r31.s64 + 92;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8238e4cc
	if (ctx.cr6.lt) goto loc_8238E4CC;
	// li r3,1
	ctx.r3.s64 = 1;
loc_8238E4FC:
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

PPC_WEAK_FUNC(sub_8238E3F8) {
	__imp__sub_8238E3F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238E514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8238E514) {
	__imp__sub_8238E514(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238E518) {
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
	// bl 0x823b1e18
	ctx.lr = 0x8238E530;
	sub_823B1E18(ctx, base);
	// bl 0x823ad980
	ctx.lr = 0x8238E534;
	sub_823AD980(ctx, base);
	// bl 0x8238d418
	ctx.lr = 0x8238E538;
	sub_8238D418(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r3,8
	ctx.r3.s64 = 8;
	// addi r4,r11,32760
	ctx.r4.s64 = ctx.r11.s64 + 32760;
	// bl 0x82280900
	ctx.lr = 0x8238E548;
	sub_82280900(ctx, base);
	// bl 0x823b1e58
	ctx.lr = 0x8238E54C;
	sub_823B1E58(ctx, base);
	// lis r10,-31780
	ctx.r10.s64 = -2082734080;
	// lwz r3,12644(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12644);
	// bl 0x822e0238
	ctx.lr = 0x8238E558;
	sub_822E0238(ctx, base);
	// bl 0x823894b8
	ctx.lr = 0x8238E55C;
	sub_823894B8(ctx, base);
	// bl 0x823b2778
	ctx.lr = 0x8238E560;
	sub_823B2778(ctx, base);
	// bl 0x8238be80
	ctx.lr = 0x8238E564;
	sub_8238BE80(ctx, base);
	// bl 0x823c39c0
	ctx.lr = 0x8238E568;
	sub_823C39C0(ctx, base);
	// bl 0x8239ccb8
	ctx.lr = 0x8238E56C;
	sub_8239CCB8(ctx, base);
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r30,r11,12692
	ctx.r30.s64 = ctx.r11.s64 + 12692;
loc_8238E578:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x822e0228
	ctx.lr = 0x8238E580;
	sub_822E0228(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8238e598
	if (ctx.cr6.eq) goto loc_8238E598;
	// addi r3,r31,2
	ctx.r3.s64 = ctx.r31.s64 + 2;
	// bl 0x8228b510
	ctx.lr = 0x8238E598;
	sub_8228B510(ctx, base);
loc_8238E598:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplwi cr6,r31,3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 3, ctx.xer);
	// blt cr6,0x8238e578
	if (ctx.cr6.lt) goto loc_8238E578;
	// li r3,1
	ctx.r3.s64 = 1;
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

PPC_WEAK_FUNC(sub_8238E518) {
	__imp__sub_8238E518(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238E5C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8238E5C4) {
	__imp__sub_8238E5C4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238E5C8) {
	PPC_FUNC_PROLOGUE();
	// b 0x8238e518
	sub_8238E518(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8238E5C8) {
	__imp__sub_8238E5C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238E5CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8238E5CC) {
	__imp__sub_8238E5CC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238E5D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823f1914
	ctx.lr = 0x8238E5EC;
	__imp__XGetVideoMode(ctx, base);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lfs f0,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// subfe r8,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addic r7,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// stb r8,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r8.u8);
	// subfe r6,r7,r11
	temp.u8 = (~ctx.r7.u32 + ctx.r11.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stb r6,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r6.u8);
	// beq cr6,0x8238e658
	if (ctx.cr6.eq) goto loc_8238E658;
	// li r11,1024
	ctx.r11.s64 = 1024;
	// li r10,600
	ctx.r10.s64 = 600;
	// li r9,1280
	ctx.r9.s64 = 1280;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// li r8,720
	ctx.r8.s64 = 720;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// li r7,2
	ctx.r7.s64 = 2;
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// stw r8,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r8.u32);
	// stw r7,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r7.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8238E658:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r10,1280
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1280, ctx.xer);
	// blt cr6,0x8238e66c
	if (ctx.cr6.lt) goto loc_8238E66C;
	// li r10,1280
	ctx.r10.s64 = 1280;
	// b 0x8238e678
	goto loc_8238E678;
loc_8238E66C:
	// cmpwi cr6,r10,640
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 640, ctx.xer);
	// bgt cr6,0x8238e678
	if (ctx.cr6.gt) goto loc_8238E678;
	// li r10,640
	ctx.r10.s64 = 640;
loc_8238E678:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// cmpwi cr6,r11,720
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 720, ctx.xer);
	// blt cr6,0x8238e690
	if (ctx.cr6.lt) goto loc_8238E690;
	// li r11,720
	ctx.r11.s64 = 720;
	// b 0x8238e69c
	goto loc_8238E69C;
loc_8238E690:
	// cmpwi cr6,r11,480
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 480, ctx.xer);
	// bgt cr6,0x8238e69c
	if (ctx.cr6.gt) goto loc_8238E69C;
	// li r11,480
	ctx.r11.s64 = 480;
loc_8238E69C:
	// li r10,896
	ctx.r10.s64 = 896;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// li r9,576
	ctx.r9.s64 = 576;
	// li r8,2
	ctx.r8.s64 = 2;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
	// stw r8,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r8.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8238E5D0) {
	__imp__sub_8238E5D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238E6CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8238E6CC) {
	__imp__sub_8238E6CC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238E6D0) {
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
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8238e5d0
	ctx.lr = 0x8238E6F4;
	sub_8238E5D0(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
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

PPC_WEAK_FUNC(sub_8238E6D0) {
	__imp__sub_8238E6D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238E71C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8238E71C) {
	__imp__sub_8238E71C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238E720) {
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
	// lis r10,-31799
	ctx.r10.s64 = -2083979264;
	// li r11,1
	ctx.r11.s64 = 1;
	// lbz r9,4580(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 4580);
	// stb r11,4580(r10)
	PPC_STORE_U8(ctx.r10.u32 + 4580, ctx.r11.u8);
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r7,r8,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x8238e76c
	if (!ctx.cr6.eq) goto loc_8238E76C;
	// bl 0x823b2778
	ctx.lr = 0x8238E750;
	sub_823B2778(ctx, base);
	// bl 0x8238be80
	ctx.lr = 0x8238E754;
	sub_8238BE80(ctx, base);
	// bl 0x823c39c0
	ctx.lr = 0x8238E758;
	sub_823C39C0(ctx, base);
	// bl 0x8239ccb8
	ctx.lr = 0x8238E75C;
	sub_8239CCB8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8238E76C:
	// bl 0x8238e518
	ctx.lr = 0x8238E770;
	sub_8238E518(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8238e76c
	if (ctx.cr6.eq) goto loc_8238E76C;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8238E720) {
	__imp__sub_8238E720(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238E78C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8238E78C) {
	__imp__sub_8238E78C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238E790) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31799
	ctx.r10.s64 = -2083979264;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,14508(r10)
	PPC_STORE_U8(ctx.r10.u32 + 14508, ctx.r11.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8238E790) {
	__imp__sub_8238E790(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238E7A0) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r31,r11,3224
	ctx.r31.s64 = ctx.r11.s64 + 3224;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x820c3b88
	ctx.lr = 0x8238E7C8;
	sub_820C3B88(ctx, base);
	// lwz r11,1220(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1220);
	// addi r10,r31,1212
	ctx.r10.s64 = ctx.r31.s64 + 1212;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r9,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x820c5200
	ctx.lr = 0x8238E7E4;
	sub_820C5200(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x8238e824
	if (!ctx.cr6.lt) goto loc_8238E824;
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r30,r11,14512
	ctx.r30.s64 = ctx.r11.s64 + 14512;
	// addi r4,r10,32644
	ctx.r4.s64 = ctx.r10.s64 + 32644;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x823df2b0
	ctx.lr = 0x8238E80C;
	sub_823DF2B0(ctx, base);
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r9,-32748
	ctx.r4.s64 = ctx.r9.s64 + -32748;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82280b08
	ctx.lr = 0x8238E824;
	sub_82280B08(ctx, base);
loc_8238E824:
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

PPC_WEAK_FUNC(sub_8238E7A0) {
	__imp__sub_8238E7A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238E83C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8238E83C) {
	__imp__sub_8238E83C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238E840) {
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
	// bl 0x82390a98
	ctx.lr = 0x8238E854;
	sub_82390A98(ctx, base);
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r31,r11,3224
	ctx.r31.s64 = ctx.r11.s64 + 3224;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x820b9428
	ctx.lr = 0x8238E870;
	sub_820B9428(ctx, base);
	// bl 0x8238e7a0
	ctx.lr = 0x8238E874;
	sub_8238E7A0(ctx, base);
	// lwz r11,1220(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1220);
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// stw r11,1220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1220, ctx.r11.u32);
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

PPC_WEAK_FUNC(sub_8238E840) {
	__imp__sub_8238E840(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238E894) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8238E894) {
	__imp__sub_8238E894(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238E898) {
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
	// bl 0x823a2f98
	ctx.lr = 0x8238E8A8;
	sub_823A2F98(ctx, base);
	// bl 0x823c76b8
	ctx.lr = 0x8238E8AC;
	sub_823C76B8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8238E898) {
	__imp__sub_8238E898(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238E8BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8238E8BC) {
	__imp__sub_8238E8BC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238E8C0) {
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
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// li r5,944
	ctx.r5.s64 = 944;
	// addi r31,r11,13536
	ctx.r31.s64 = ctx.r11.s64 + 13536;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823de090
	ctx.lr = 0x8238E8EC;
	sub_823DE090(ctx, base);
	// lis r10,-31799
	ctx.r10.s64 = -2083979264;
	// li r5,8704
	ctx.r5.s64 = 8704;
	// addi r30,r10,4608
	ctx.r30.s64 = ctx.r10.s64 + 4608;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823de090
	ctx.lr = 0x8238E904;
	sub_823DE090(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,8320(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8320, ctx.r11.u32);
	// bl 0x823aef38
	ctx.lr = 0x8238E910;
	sub_823AEF38(ctx, base);
	// lis r9,-31777
	ctx.r9.s64 = -2082537472;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// addi r6,r9,-19840
	ctx.r6.s64 = ctx.r9.s64 + -19840;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,5484(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12168(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 12168);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,64(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 64, temp.u32);
	// stfs f0,68(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 68, temp.u32);
	// stfs f0,72(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 72, temp.u32);
	// stfs f13,76(r6)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r6.u32 + 76, temp.u32);
	// stfs f0,80(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 80, temp.u32);
	// stfs f0,84(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 84, temp.u32);
	// stfs f0,88(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 88, temp.u32);
	// stfs f13,92(r6)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r6.u32 + 92, temp.u32);
	// bl 0x822d5b78
	ctx.lr = 0x8238E950;
	sub_822D5B78(ctx, base);
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// bl 0x822d5b78
	ctx.lr = 0x8238E958;
	sub_822D5B78(ctx, base);
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// bl 0x822d5b78
	ctx.lr = 0x8238E960;
	sub_822D5B78(ctx, base);
	// addi r3,r31,192
	ctx.r3.s64 = ctx.r31.s64 + 192;
	// bl 0x822d5b78
	ctx.lr = 0x8238E968;
	sub_822D5B78(ctx, base);
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

PPC_WEAK_FUNC(sub_8238E8C0) {
	__imp__sub_8238E8C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238E980) {
	PPC_FUNC_PROLOGUE();
	// b 0x82390a50
	sub_82390A50(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8238E980) {
	__imp__sub_8238E980(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238E984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8238E984) {
	__imp__sub_8238E984(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238E988) {
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
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r3,8
	ctx.r3.s64 = 8;
	// addi r4,r11,-32704
	ctx.r4.s64 = ctx.r11.s64 + -32704;
	// bl 0x82280900
	ctx.lr = 0x8238E9A4;
	sub_82280900(ctx, base);
	// bl 0x822e7be8
	ctx.lr = 0x8238E9A8;
	sub_822E7BE8(ctx, base);
	// bl 0x823a2f98
	ctx.lr = 0x8238E9AC;
	sub_823A2F98(ctx, base);
	// bl 0x823c76b8
	ctx.lr = 0x8238E9B0;
	sub_823C76B8(ctx, base);
	// bl 0x8238e8c0
	ctx.lr = 0x8238E9B4;
	sub_8238E8C0(ctx, base);
	// bl 0x823be7e0
	ctx.lr = 0x8238E9B8;
	sub_823BE7E0(ctx, base);
	// bl 0x8238e720
	ctx.lr = 0x8238E9BC;
	sub_8238E720(ctx, base);
	// bl 0x823adc00
	ctx.lr = 0x8238E9C0;
	sub_823ADC00(ctx, base);
	// bl 0x823b18b0
	ctx.lr = 0x8238E9C4;
	sub_823B18B0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8238E988) {
	__imp__sub_8238E988(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238E9D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8238E9D4) {
	__imp__sub_8238E9D4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238E9D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// addi r10,r11,3224
	ctx.r10.s64 = ctx.r11.s64 + 3224;
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-31775
	ctx.r11.s64 = -2082406400;
	// addi r11,r11,-24112
	ctx.r11.s64 = ctx.r11.s64 + -24112;
	// addi r3,r11,144
	ctx.r3.s64 = ctx.r11.s64 + 144;
	// b 0x823c86c8
	sub_823C86C8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8238E9D8) {
	__imp__sub_8238E9D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238E9FC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8238E9FC) {
	__imp__sub_8238E9FC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238EA00) {
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
	// bl 0x82390a98
	ctx.lr = 0x8238EA18;
	sub_82390A98(ctx, base);
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// lis r10,-31799
	ctx.r10.s64 = -2083979264;
	// addi r9,r11,13352
	ctx.r9.s64 = ctx.r11.s64 + 13352;
	// addi r8,r10,3224
	ctx.r8.s64 = ctx.r10.s64 + 3224;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,1(r9)
	PPC_STORE_U8(ctx.r9.u32 + 1, ctx.r11.u8);
	// lwz r11,8(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8238ea4c
	if (ctx.cr6.eq) goto loc_8238EA4C;
	// lis r11,-31775
	ctx.r11.s64 = -2082406400;
	// addi r11,r11,-24112
	ctx.r11.s64 = ctx.r11.s64 + -24112;
	// addi r3,r11,144
	ctx.r3.s64 = ctx.r11.s64 + 144;
	// bl 0x823c86c8
	ctx.lr = 0x8238EA4C;
	sub_823C86C8(ctx, base);
loc_8238EA4C:
	// bl 0x823a2080
	ctx.lr = 0x8238EA50;
	sub_823A2080(ctx, base);
	// bl 0x823c39f8
	ctx.lr = 0x8238EA54;
	sub_823C39F8(ctx, base);
	// bl 0x823b9a18
	ctx.lr = 0x8238EA58;
	sub_823B9A18(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// lis r10,-31799
	ctx.r10.s64 = -2083979264;
	// lis r5,-31799
	ctx.r5.s64 = -2083979264;
	// addi r7,r10,4608
	ctx.r7.s64 = ctx.r10.s64 + 4608;
	// lis r8,-31799
	ctx.r8.s64 = -2083979264;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,13412(r5)
	PPC_STORE_U32(ctx.r5.u32 + 13412, ctx.r9.u32);
	// lis r9,-31777
	ctx.r9.s64 = -2082537472;
	// stw r11,8456(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8456, ctx.r11.u32);
	// lis r4,-31799
	ctx.r4.s64 = -2083979264;
	// stw r10,14492(r8)
	PPC_STORE_U32(ctx.r8.u32 + 14492, ctx.r10.u32);
	// lis r6,-31799
	ctx.r6.s64 = -2083979264;
	// lis r3,-31799
	ctx.r3.s64 = -2083979264;
	// lis r7,-31799
	ctx.r7.s64 = -2083979264;
	// addi r8,r9,-19840
	ctx.r8.s64 = ctx.r9.s64 + -19840;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,4576(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4576, ctx.r10.u32);
	// stw r11,4568(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4568, ctx.r11.u32);
	// addi r10,r8,-8
	ctx.r10.s64 = ctx.r8.s64 + -8;
	// stw r11,3216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 3216, ctx.r11.u32);
	// stw r9,14480(r7)
	PPC_STORE_U32(ctx.r7.u32 + 14480, ctx.r9.u32);
loc_8238EAB8:
	// stdu r11,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U64(ea, ctx.r11.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x8238eab8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8238EAB8;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x8238eacc
	if (ctx.cr6.eq) goto loc_8238EACC;
	// bl 0x823904b8
	ctx.lr = 0x8238EACC;
	sub_823904B8(ctx, base);
loc_8238EACC:
	// bl 0x823c76c0
	ctx.lr = 0x8238EAD0;
	sub_823C76C0(ctx, base);
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

PPC_WEAK_FUNC(sub_8238EA00) {
	__imp__sub_8238EA00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238EAE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8238EAE4) {
	__imp__sub_8238EAE4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238EAE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// addi r10,r11,4608
	ctx.r10.s64 = ctx.r11.s64 + 4608;
	// lwz r11,8456(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8456);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r11,-32684
	ctx.r3.s64 = ctx.r11.s64 + -32684;
	// b 0x8230d720
	sub_8230D720(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8238EAE8) {
	__imp__sub_8238EAE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238EB08) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8238EB08) {
	__imp__sub_8238EB08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238EB0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8238EB0C) {
	__imp__sub_8238EB0C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238EB10) {
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
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,8
	ctx.r3.s64 = 8;
	// addi r4,r11,-32704
	ctx.r4.s64 = ctx.r11.s64 + -32704;
	// bl 0x82280900
	ctx.lr = 0x8238EB34;
	sub_82280900(ctx, base);
	// bl 0x822e7be8
	ctx.lr = 0x8238EB38;
	sub_822E7BE8(ctx, base);
	// bl 0x823a2f98
	ctx.lr = 0x8238EB3C;
	sub_823A2F98(ctx, base);
	// bl 0x823c76b8
	ctx.lr = 0x8238EB40;
	sub_823C76B8(ctx, base);
	// bl 0x8238e8c0
	ctx.lr = 0x8238EB44;
	sub_8238E8C0(ctx, base);
	// bl 0x823be7e0
	ctx.lr = 0x8238EB48;
	sub_823BE7E0(ctx, base);
	// bl 0x8238e720
	ctx.lr = 0x8238EB4C;
	sub_8238E720(ctx, base);
	// bl 0x823adc00
	ctx.lr = 0x8238EB50;
	sub_823ADC00(ctx, base);
	// bl 0x823b18b0
	ctx.lr = 0x8238EB54;
	sub_823B18B0(ctx, base);
	// lis r10,-31799
	ctx.r10.s64 = -2083979264;
	// li r5,48
	ctx.r5.s64 = 48;
	// addi r4,r10,4520
	ctx.r4.s64 = ctx.r10.s64 + 4520;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823de1f0
	ctx.lr = 0x8238EB68;
	sub_823DE1F0(ctx, base);
	// lis r9,-31799
	ctx.r9.s64 = -2083979264;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r8,r9,13352
	ctx.r8.s64 = ctx.r9.s64 + 13352;
	// stb r11,1(r8)
	PPC_STORE_U8(ctx.r8.u32 + 1, ctx.r11.u8);
	// bl 0x82390c00
	ctx.lr = 0x8238EB7C;
	sub_82390C00(ctx, base);
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

PPC_WEAK_FUNC(sub_8238EB10) {
	__imp__sub_8238EB10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238EB90) {
	PPC_FUNC_PROLOGUE();
	// b 0x8238bf08
	sub_8238BF08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8238EB90) {
	__imp__sub_8238EB90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238EB94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8238EB94) {
	__imp__sub_8238EB94(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238EB98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// addi r10,r11,13536
	ctx.r10.s64 = ctx.r11.s64 + 13536;
	// stw r3,664(r10)
	PPC_STORE_U32(ctx.r10.u32 + 664, ctx.r3.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8238EB98) {
	__imp__sub_8238EB98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238EBA8) {
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
	// bl 0x82310110
	ctx.lr = 0x8238EBB8;
	sub_82310110(ctx, base);
	// lis r10,-31799
	ctx.r10.s64 = -2083979264;
	// lis r9,-31799
	ctx.r9.s64 = -2083979264;
	// addi r8,r10,3208
	ctx.r8.s64 = ctx.r10.s64 + 3208;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r3,3208(r10)
	PPC_STORE_U32(ctx.r10.u32 + 3208, ctx.r3.u32);
	// stw r11,14592(r9)
	PPC_STORE_U32(ctx.r9.u32 + 14592, ctx.r11.u32);
	// stw r3,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8238EBA8) {
	__imp__sub_8238EBA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238EBE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8238EBE4) {
	__imp__sub_8238EBE4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238EBE8) {
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
	// bl 0x8228c8e0
	ctx.lr = 0x8238EBF8;
	sub_8228C8E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8238ec0c
	if (ctx.cr6.eq) goto loc_8238EC0C;
	// bl 0x82310110
	ctx.lr = 0x8238EC04;
	sub_82310110(ctx, base);
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// stw r3,3208(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3208, ctx.r3.u32);
loc_8238EC0C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8238EBE8) {
	__imp__sub_8238EBE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238EC1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8238EC1C) {
	__imp__sub_8238EC1C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238EC20) {
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
	// bl 0x82310110
	ctx.lr = 0x8238EC30;
	sub_82310110(ctx, base);
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// lwz r11,14488(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14488);
	// subf r10,r11,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r11.s64;
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// xori r3,r9,1
	ctx.r3.u64 = ctx.r9.u64 ^ 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8238EC20) {
	__imp__sub_8238EC20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238EC54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8238EC54) {
	__imp__sub_8238EC54(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238EC58) {
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
	// bl 0x8228b5b8
	ctx.lr = 0x8238EC68;
	sub_8228B5B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8238ec90
	if (ctx.cr6.eq) goto loc_8238EC90;
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// lis r10,-31799
	ctx.r10.s64 = -2083979264;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,3204(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3204);
	// lwz r8,3212(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3212);
	// subf r7,r9,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r9.s64;
	// cmpwi cr6,r7,1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1, ctx.xer);
	// ble cr6,0x8238ec94
	if (!ctx.cr6.gt) goto loc_8238EC94;
loc_8238EC90:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8238EC94:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8238EC58) {
	__imp__sub_8238EC58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238ECA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8238ECA4) {
	__imp__sub_8238ECA4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238ECA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x8238ECB0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82310110
	ctx.lr = 0x8238ECB8;
	sub_82310110(ctx, base);
	// lis r11,-31809
	ctx.r11.s64 = -2084634624;
	// lis r10,9
	ctx.r10.s64 = 589824;
	// addi r30,r11,24448
	ctx.r30.s64 = ctx.r11.s64 + 24448;
	// ori r9,r10,41432
	ctx.r9.u64 = ctx.r10.u64 | 41432;
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// lis r27,-31799
	ctx.r27.s64 = -2083979264;
	// addi r31,r11,3204
	ctx.r31.s64 = ctx.r11.s64 + 3204;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwzx r11,r30,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8238ed18
	if (ctx.cr6.eq) goto loc_8238ED18;
	// bl 0x8228b5b8
	ctx.lr = 0x8238ECE8;
	sub_8228B5B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8238ed04
	if (ctx.cr6.eq) goto loc_8238ED04;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,3212(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 3212);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// ble cr6,0x8238ed18
	if (!ctx.cr6.gt) goto loc_8238ED18;
loc_8238ED04:
	// lis r10,9
	ctx.r10.s64 = 589824;
	// li r11,0
	ctx.r11.s64 = 0;
	// ori r9,r10,41432
	ctx.r9.u64 = ctx.r10.u64 | 41432;
	// stwx r11,r30,r9
	PPC_STORE_U32(ctx.r30.u32 + ctx.r9.u32, ctx.r11.u32);
	// bl 0x821338a0
	ctx.lr = 0x8238ED18;
	sub_821338A0(ctx, base);
loc_8238ED18:
	// lis r11,-32199
	ctx.r11.s64 = -2110193664;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,-5032
	ctx.r3.s64 = ctx.r11.s64 + -5032;
	// bl 0x823b7840
	ctx.lr = 0x8238ED28;
	sub_823B7840(ctx, base);
	// bl 0x82141398
	ctx.lr = 0x8238ED2C;
	sub_82141398(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x8238edb4
	if (!ctx.cr6.eq) goto loc_8238EDB4;
	// lis r29,-31799
	ctx.r29.s64 = -2083979264;
loc_8238ED38:
	// bl 0x82310110
	ctx.lr = 0x8238ED3C;
	sub_82310110(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,3208(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 3208);
	// subf r11,r11,r28
	ctx.r11.s64 = ctx.r28.s64 - ctx.r11.s64;
	// subf r10,r10,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r10.s64;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// ble cr6,0x8238ed58
	if (!ctx.cr6.gt) goto loc_8238ED58;
	// li r11,12
	ctx.r11.s64 = 12;
loc_8238ED58:
	// subf. r10,r10,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble 0x8238edb4
	if (!ctx.cr0.gt) goto loc_8238EDB4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,3212(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 3212);
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x8238edb4
	if (ctx.cr6.eq) goto loc_8238EDB4;
	// lis r11,9
	ctx.r11.s64 = 589824;
	// ori r9,r11,41432
	ctx.r9.u64 = ctx.r11.u64 | 41432;
	// lwzx r11,r30,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8238ed9c
	if (ctx.cr6.eq) goto loc_8238ED9C;
	// lis r10,9
	ctx.r10.s64 = 589824;
	// li r11,0
	ctx.r11.s64 = 0;
	// ori r9,r10,41432
	ctx.r9.u64 = ctx.r10.u64 | 41432;
	// stwx r11,r30,r9
	PPC_STORE_U32(ctx.r30.u32 + ctx.r9.u32, ctx.r11.u32);
	// bl 0x821338a0
	ctx.lr = 0x8238ED98;
	sub_821338A0(ctx, base);
	// b 0x8238ed38
	goto loc_8238ED38;
loc_8238ED9C:
	// add r11,r10,r3
	ctx.r11.u64 = ctx.r10.u64 + ctx.r3.u64;
	// lis r10,-32199
	ctx.r10.s64 = -2110193664;
	// stw r11,11284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11284, ctx.r11.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r10,-5088
	ctx.r3.s64 = ctx.r10.s64 + -5088;
	// bl 0x823b7840
	ctx.lr = 0x8238EDB4;
	sub_823B7840(ctx, base);
loc_8238EDB4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8238ECA8) {
	__imp__sub_8238ECA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238EDBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8238EDBC) {
	__imp__sub_8238EDBC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238EDC0) {
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
	// lis r30,-31799
	ctx.r30.s64 = -2083979264;
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// addi r31,r11,3212
	ctx.r31.s64 = ctx.r11.s64 + 3212;
	// lwz r10,3204(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3204);
	// lwz r9,3212(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3212);
	// subf r8,r10,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	// cmpwi cr6,r8,2
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 2, ctx.xer);
	// ble cr6,0x8238ee10
	if (!ctx.cr6.gt) goto loc_8238EE10;
loc_8238EDF4:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8228b0d8
	ctx.lr = 0x8238EDFC;
	sub_8228B0D8(ctx, base);
	// lwz r11,3204(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3204);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// bgt cr6,0x8238edf4
	if (ctx.cr6.gt) goto loc_8238EDF4;
loc_8238EE10:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r31
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r31.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwcx. r11,0,r31
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r31.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8238ee10
	if (!ctx.cr0.eq) goto loc_8238EE10;
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

PPC_WEAK_FUNC(sub_8238EDC0) {
	__imp__sub_8238EDC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238EE44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8238EE44) {
	__imp__sub_8238EE44(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238EE48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8238EE50;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lfs f1,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x821ff1f8
	ctx.lr = 0x8238EE64;
	sub_821FF1F8(ctx, base);
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// addi r29,r11,13536
	ctx.r29.s64 = ctx.r11.s64 + 13536;
	// stb r3,656(r29)
	PPC_STORE_U8(ctx.r29.u32 + 656, ctx.r3.u8);
	// lfs f1,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821ff1f8
	ctx.lr = 0x8238EE78;
	sub_821FF1F8(ctx, base);
	// stb r3,657(r29)
	PPC_STORE_U8(ctx.r29.u32 + 657, ctx.r3.u8);
	// lfs f1,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821ff1f8
	ctx.lr = 0x8238EE84;
	sub_821FF1F8(ctx, base);
	// stb r3,658(r29)
	PPC_STORE_U8(ctx.r29.u32 + 658, ctx.r3.u8);
	// lfs f1,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821ff1f8
	ctx.lr = 0x8238EE90;
	sub_821FF1F8(ctx, base);
	// stb r3,659(r29)
	PPC_STORE_U8(ctx.r29.u32 + 659, ctx.r3.u8);
	// lfs f1,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821ff1f8
	ctx.lr = 0x8238EE9C;
	sub_821FF1F8(ctx, base);
	// stb r3,660(r29)
	PPC_STORE_U8(ctx.r29.u32 + 660, ctx.r3.u8);
	// lfs f1,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821ff1f8
	ctx.lr = 0x8238EEA8;
	sub_821FF1F8(ctx, base);
	// stb r3,661(r29)
	PPC_STORE_U8(ctx.r29.u32 + 661, ctx.r3.u8);
	// lfs f1,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821ff1f8
	ctx.lr = 0x8238EEB4;
	sub_821FF1F8(ctx, base);
	// stb r3,662(r29)
	PPC_STORE_U8(ctx.r29.u32 + 662, ctx.r3.u8);
	// lfs f1,12(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821ff1f8
	ctx.lr = 0x8238EEC0;
	sub_821FF1F8(ctx, base);
	// stb r3,663(r29)
	PPC_STORE_U8(ctx.r29.u32 + 663, ctx.r3.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8238EE48) {
	__imp__sub_8238EE48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238EECC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8238EECC) {
	__imp__sub_8238EECC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238EED0) {
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
	// li r9,10
	ctx.r9.s64 = 10;
	// addi r8,r11,13312
	ctx.r8.s64 = ctx.r11.s64 + 13312;
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
	// addi r10,r8,-4
	ctx.r10.s64 = ctx.r8.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8238EEF4:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8238eef4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8238EEF4;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r11.u8);
	// bl 0x823a2f98
	ctx.lr = 0x8238EF0C;
	sub_823A2F98(ctx, base);
	// bl 0x82390448
	ctx.lr = 0x8238EF10;
	sub_82390448(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8238EED0) {
	__imp__sub_8238EED0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238EF20) {
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
	// bl 0x82390f20
	ctx.lr = 0x8238EF34;
	sub_82390F20(ctx, base);
	// bl 0x82390a98
	ctx.lr = 0x8238EF38;
	sub_82390A98(ctx, base);
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// addi r31,r11,3224
	ctx.r31.s64 = ctx.r11.s64 + 3224;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x820bad78
	ctx.lr = 0x8238EF48;
	sub_820BAD78(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x820bacf8
	ctx.lr = 0x8238EF50;
	sub_820BACF8(ctx, base);
	// li r3,50
	ctx.r3.s64 = 50;
	// bl 0x8228b0d8
	ctx.lr = 0x8238EF58;
	sub_8228B0D8(ctx, base);
	// lwsync 
	// lis r10,-31799
	ctx.r10.s64 = -2083979264;
	// addi r9,r10,3212
	ctx.r9.s64 = ctx.r10.s64 + 3212;
	// lwz r8,3212(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3212);
	// stw r8,-8(r9)
	PPC_STORE_U32(ctx.r9.u32 + -8, ctx.r8.u32);
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

PPC_WEAK_FUNC(sub_8238EF20) {
	__imp__sub_8238EF20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238EF80) {
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
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,8
	ctx.r3.s64 = 8;
	// addi r4,r11,-32560
	ctx.r4.s64 = ctx.r11.s64 + -32560;
	// bl 0x82280900
	ctx.lr = 0x8238EFA8;
	sub_82280900(ctx, base);
	// lis r10,-31799
	ctx.r10.s64 = -2083979264;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// addi r30,r10,14512
	ctx.r30.s64 = ctx.r10.s64 + 14512;
	// addi r4,r9,32644
	ctx.r4.s64 = ctx.r9.s64 + 32644;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x823df2b0
	ctx.lr = 0x8238EFC4;
	sub_823DF2B0(ctx, base);
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r8,-32596
	ctx.r4.s64 = ctx.r8.s64 + -32596;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82280900
	ctx.lr = 0x8238EFD8;
	sub_82280900(ctx, base);
	// lis r7,-32251
	ctx.r7.s64 = -2113601536;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r7,32332
	ctx.r4.s64 = ctx.r7.s64 + 32332;
	// bl 0x822830e8
	ctx.lr = 0x8238EFE8;
	sub_822830E8(ctx, base);
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

PPC_WEAK_FUNC(sub_8238EF80) {
	__imp__sub_8238EF80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238F000) {
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
	// bl 0x823c6c88
	ctx.lr = 0x8238F014;
	sub_823C6C88(ctx, base);
	// lis r31,-31799
	ctx.r31.s64 = -2083979264;
	// lbz r11,14508(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 14508);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8238f02c
	if (!ctx.cr6.eq) goto loc_8238F02C;
	// bl 0x82390720
	ctx.lr = 0x8238F028;
	sub_82390720(ctx, base);
	// bl 0x823b9cb8
	ctx.lr = 0x8238F02C;
	sub_823B9CB8(ctx, base);
loc_8238F02C:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r3,8
	ctx.r3.s64 = 8;
	// addi r4,r11,-32400
	ctx.r4.s64 = ctx.r11.s64 + -32400;
	// bl 0x82280900
	ctx.lr = 0x8238F03C;
	sub_82280900(ctx, base);
	// bl 0x823b1090
	ctx.lr = 0x8238F040;
	sub_823B1090(ctx, base);
	// lbz r10,14508(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 14508);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8238f060
	if (!ctx.cr6.eq) goto loc_8238F060;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r3,8
	ctx.r3.s64 = 8;
	// addi r4,r11,-32440
	ctx.r4.s64 = ctx.r11.s64 + -32440;
	// bl 0x82280900
	ctx.lr = 0x8238F05C;
	sub_82280900(ctx, base);
	// bl 0x823b0b38
	ctx.lr = 0x8238F060;
	sub_823B0B38(ctx, base);
loc_8238F060:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r3,8
	ctx.r3.s64 = 8;
	// addi r4,r11,-32472
	ctx.r4.s64 = ctx.r11.s64 + -32472;
	// bl 0x82280900
	ctx.lr = 0x8238F070;
	sub_82280900(ctx, base);
	// lbz r10,14508(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 14508);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8238f090
	if (!ctx.cr6.eq) goto loc_8238F090;
	// bl 0x823cb228
	ctx.lr = 0x8238F080;
	sub_823CB228(ctx, base);
	// bl 0x8238f4f0
	ctx.lr = 0x8238F084;
	sub_8238F4F0(ctx, base);
	// lis r10,-31799
	ctx.r10.s64 = -2083979264;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r3,3200(r10)
	PPC_STORE_U32(ctx.r10.u32 + 3200, ctx.r3.u32);
loc_8238F090:
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

PPC_WEAK_FUNC(sub_8238F000) {
	__imp__sub_8238F000(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238F0A8) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// addi r31,r11,3224
	ctx.r31.s64 = ctx.r11.s64 + 3224;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8238f0e4
	if (!ctx.cr6.eq) goto loc_8238F0E4;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r3,8
	ctx.r3.s64 = 8;
	// addi r4,r11,32684
	ctx.r4.s64 = ctx.r11.s64 + 32684;
	// bl 0x82280900
	ctx.lr = 0x8238F0DC;
	sub_82280900(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_8238F0E4:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// bl 0x8238df20
	ctx.lr = 0x8238F0F4;
	sub_8238DF20(ctx, base);
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// addi r31,r11,13384
	ctx.r31.s64 = ctx.r11.s64 + 13384;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8238e5d0
	ctx.lr = 0x8238F104;
	sub_8238E5D0(ctx, base);
	// li r9,7
	ctx.r9.s64 = 7;
	// addi r10,r1,76
	ctx.r10.s64 = ctx.r1.s64 + 76;
	// addi r11,r31,-4
	ctx.r11.s64 = ctx.r31.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8238F114:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8238f114
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8238F114;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8238ddc8
	ctx.lr = 0x8238F128;
	sub_8238DDC8(ctx, base);
	// bl 0x8228c220
	ctx.lr = 0x8238F12C;
	sub_8228C220(ctx, base);
	// bl 0x8238dc58
	ctx.lr = 0x8238F130;
	sub_8238DC58(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8238e3f8
	ctx.lr = 0x8238F138;
	sub_8238E3F8(ctx, base);
	// bl 0x823a4ac8
	ctx.lr = 0x8238F13C;
	sub_823A4AC8(ctx, base);
	// bl 0x8238f000
	ctx.lr = 0x8238F140;
	sub_8238F000(ctx, base);
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

PPC_WEAK_FUNC(sub_8238F0A8) {
	__imp__sub_8238F0A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238F154) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8238F154) {
	__imp__sub_8238F154(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238F158) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// addi r10,r11,13352
	ctx.r10.s64 = ctx.r11.s64 + 13352;
	// lbz r9,1(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8238f21c
	if (!ctx.cr6.eq) goto loc_8238F21C;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8238eca8
	ctx.lr = 0x8238F188;
	sub_8238ECA8(ctx, base);
	// bl 0x8238edc0
	ctx.lr = 0x8238F18C;
	sub_8238EDC0(ctx, base);
	// lis r11,-31771
	ctx.r11.s64 = -2082144256;
	// lis r10,-31799
	ctx.r10.s64 = -2083979264;
	// addi r9,r11,-26624
	ctx.r9.s64 = ctx.r11.s64 + -26624;
	// addi r31,r10,3224
	ctx.r31.s64 = ctx.r10.s64 + 3224;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,24(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x820c0fe8
	ctx.lr = 0x8238F1AC;
	sub_820C0FE8(ctx, base);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,15
	ctx.r6.s64 = 15;
	// lfs f31,5484(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 5484);
	ctx.f31.f64 = double(temp.f32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x820c29b0
	ctx.lr = 0x8238F1D8;
	sub_820C29B0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r6,1212(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1212);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r8,0
	ctx.r8.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x820c4308
	ctx.lr = 0x8238F20C;
	sub_820C4308(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,1212(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1212);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x820c3390
	ctx.lr = 0x8238F21C;
	sub_820C3390(ctx, base);
loc_8238F21C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
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

PPC_WEAK_FUNC(sub_8238F158) {
	__imp__sub_8238F158(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238F234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8238F234) {
	__imp__sub_8238F234(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238F238) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x8238F240;
	__savegprlr_28(ctx, base);
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x823de020
	ctx.lr = 0x8238F248;
	__savefpr_26(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// lwz r11,12676(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12676);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8238f448
	if (ctx.cr6.eq) goto loc_8238F448;
	// bl 0x82141398
	ctx.lr = 0x8238F268;
	sub_82141398(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x8238f448
	if (!ctx.cr6.eq) goto loc_8238F448;
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// lis r29,-31799
	ctx.r29.s64 = -2083979264;
	// lis r10,-31799
	ctx.r10.s64 = -2083979264;
	// addi r31,r29,3212
	ctx.r31.s64 = ctx.r29.s64 + 3212;
	// addi r9,r10,4520
	ctx.r9.s64 = ctx.r10.s64 + 4520;
	// lwz r30,3204(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3204);
	// addi r8,r31,10268
	ctx.r8.s64 = ctx.r31.s64 + 10268;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// addi r6,r30,-1
	ctx.r6.s64 = ctx.r30.s64 + -1;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// clrlwi r28,r6,29
	ctx.r28.u64 = ctx.r6.u32 & 0x7;
	// lfs f30,16(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	ctx.f30.f64 = double(temp.f32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// rlwinm r4,r28,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f31,12168(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 12168);
	ctx.f31.f64 = double(temp.f32);
	// fdivs f28,f31,f30
	ctx.f28.f64 = double(float(ctx.f31.f64 / ctx.f30.f64));
	// lfs f0,11804(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 11804);
	ctx.f0.f64 = double(temp.f32);
	// lwzx r10,r4,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r8.u32);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f29,f11,f0
	ctx.f29.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// bl 0x823ef5c0
	ctx.lr = 0x8238F2D0;
	sub_823EF5C0(ctx, base);
	// addi r9,r30,-2
	ctx.r9.s64 = ctx.r30.s64 + -2;
	// lfd f10,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// addi r8,r31,10204
	ctx.r8.s64 = ctx.r31.s64 + 10204;
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// addi r7,r31,10204
	ctx.r7.s64 = ctx.r31.s64 + 10204;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// rlwinm r6,r9,3,26,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0x38;
	// rlwinm r5,r28,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 3) & 0xFFFFFFF8;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// ldx r11,r6,r8
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r6.u32 + ctx.r8.u32);
	// ldx r3,r5,r7
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r5.u32 + ctx.r7.u32);
	// lfs f0,6020(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 6020);
	ctx.f0.f64 = double(temp.f32);
	// subf r10,r11,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r11.s64;
	// frsp f5,f9
	ctx.f5.f64 = double(float(ctx.f9.f64));
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f8,80(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// frsp f6,f7
	ctx.f6.f64 = double(float(ctx.f7.f64));
	// fdivs f4,f6,f5
	ctx.f4.f64 = double(float(ctx.f6.f64 / ctx.f5.f64));
	// fsubs f3,f4,f0
	ctx.f3.f64 = double(float(ctx.f4.f64 - ctx.f0.f64));
	// fsubs f2,f28,f4
	ctx.f2.f64 = double(float(ctx.f28.f64 - ctx.f4.f64));
	// fsel f0,f3,f0,f4
	ctx.f0.f64 = ctx.f3.f64 >= 0.0 ? ctx.f0.f64 : ctx.f4.f64;
	// fsel f13,f2,f28,f0
	ctx.f13.f64 = ctx.f2.f64 >= 0.0 ? ctx.f28.f64 : ctx.f0.f64;
	// fmuls f30,f13,f30
	ctx.f30.f64 = double(float(ctx.f13.f64 * ctx.f30.f64));
	// bl 0x823df940
	ctx.lr = 0x8238F334;
	sub_823DF940(ctx, base);
	// frsp f27,f1
	ctx.fpscr.disableFlushMode();
	ctx.f27.f64 = double(float(ctx.f1.f64));
	// fsubs f1,f29,f30
	ctx.f1.f64 = double(float(ctx.f29.f64 - ctx.f30.f64));
	// bl 0x823df940
	ctx.lr = 0x8238F340;
	sub_823DF940(ctx, base);
	// lis r9,-21846
	ctx.r9.s64 = -1431699456;
	// lwz r11,1360(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1360);
	// lwz r8,3212(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 3212);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// ori r7,r9,43691
	ctx.r7.u64 = ctx.r9.u64 | 43691;
	// subf r6,r30,r8
	ctx.r6.s64 = ctx.r8.s64 - ctx.r30.s64;
	// mulhwu r5,r11,r7
	ctx.r5.u64 = (uint64_t(ctx.r11.u32) * uint64_t(ctx.r7.u32)) >> 32;
	// fsubs f11,f27,f12
	ctx.f11.f64 = double(float(ctx.f27.f64 - ctx.f12.f64));
	// rlwinm r10,r5,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 31) & 0x7FFFFFFF;
	// extsw r4,r6
	ctx.r4.s64 = ctx.r6.s32;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// std r4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// lfd f10,80(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// subf r9,r3,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r3.s64;
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// addi r10,r31,11284
	ctx.r10.s64 = ctx.r31.s64 + 11284;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,1360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1360, ctx.r11.u32);
	// stfsx f11,r8,r10
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r8.u32 + ctx.r10.u32, temp.u32);
	// fmadds f29,f8,f30,f29
	ctx.f29.f64 = double(float(ctx.f8.f64 * ctx.f30.f64 + ctx.f29.f64));
	// fadds f27,f30,f29
	ctx.f27.f64 = double(float(ctx.f30.f64 + ctx.f29.f64));
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x823df940
	ctx.lr = 0x8238F3A8;
	sub_823DF940(ctx, base);
	// frsp f7,f1
	ctx.fpscr.disableFlushMode();
	ctx.f7.f64 = double(float(ctx.f1.f64));
	// lis r7,-32252
	ctx.r7.s64 = -2113667072;
	// fmr f1,f27
	ctx.f1.f64 = ctx.f27.f64;
	// lfs f30,30604(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 30604);
	ctx.f30.f64 = double(temp.f32);
	// lis r6,-32250
	ctx.r6.s64 = -2113536000;
	// fmuls f6,f29,f30
	ctx.f6.f64 = double(float(ctx.f29.f64 * ctx.f30.f64));
	// lfs f29,-32364(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -32364);
	ctx.f29.f64 = double(temp.f32);
	// fmadds f26,f7,f29,f6
	ctx.f26.f64 = double(float(ctx.f7.f64 * ctx.f29.f64 + ctx.f6.f64));
	// bl 0x823df940
	ctx.lr = 0x8238F3CC;
	sub_823DF940(ctx, base);
	// lwz r4,11284(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11284);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r11,11288(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11288);
	// frsp f5,f1
	ctx.fpscr.disableFlushMode();
	ctx.f5.f64 = double(float(ctx.f1.f64));
	// lwz r10,11292(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11292);
	// fmuls f4,f27,f30
	ctx.f4.f64 = double(float(ctx.f27.f64 * ctx.f30.f64));
	// lis r9,-32199
	ctx.r9.s64 = -2110193664;
	// li r5,3
	ctx.r5.s64 = 3;
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// addi r6,r9,-7288
	ctx.r6.s64 = ctx.r9.s64 + -7288;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// addi r4,r1,108
	ctx.r4.s64 = ctx.r1.s64 + 108;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// fmadds f30,f5,f29,f4
	ctx.f30.f64 = double(float(ctx.f5.f64 * ctx.f29.f64 + ctx.f4.f64));
	// bl 0x8238fc18
	ctx.lr = 0x8238F40C;
	sub_8238FC18(ctx, base);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f13,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f3,f30,f26
	ctx.f3.f64 = double(float(ctx.f30.f64 - ctx.f26.f64));
	// lfs f0,5488(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 5488);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f2,f13,f0
	ctx.f2.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fsel f1,f2,f13,f0
	ctx.f1.f64 = ctx.f2.f64 >= 0.0 ? ctx.f13.f64 : ctx.f0.f64;
	// fsubs f0,f1,f3
	ctx.f0.f64 = double(float(ctx.f1.f64 - ctx.f3.f64));
	// fsel f13,f0,f3,f1
	ctx.f13.f64 = ctx.f0.f64 >= 0.0 ? ctx.f3.f64 : ctx.f1.f64;
	// fsubs f12,f13,f31
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f31.f64));
	// fsel f11,f12,f13,f31
	ctx.f11.f64 = ctx.f12.f64 >= 0.0 ? ctx.f13.f64 : ctx.f31.f64;
	// fmuls f1,f11,f28
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f28.f64));
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x823de06c
	ctx.lr = 0x8238F444;
	__restfpr_26(ctx, base);
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_8238F448:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x823de06c
	ctx.lr = 0x8238F458;
	__restfpr_26(ctx, base);
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8238F238) {
	__imp__sub_8238F238(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238F45C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8238F45C) {
	__imp__sub_8238F45C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238F460) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x8238F468;
	__savegprlr_26(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,-1
	ctx.r11.s64 = ctx.r4.s64 + -1;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// cmpw cr6,r5,r4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r4.s32, ctx.xer);
	// addze r30,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r30.s64 = temp.s64;
	// bge cr6,0x8238f4dc
	if (!ctx.cr6.lt) goto loc_8238F4DC;
loc_8238F498:
	// rlwinm r28,r30,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// mtctr r26
	ctx.ctr.u64 = ctx.r26.u64;
	// lfsx f1,r28,r29
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r29.u32);
	ctx.f1.f64 = double(temp.f32);
	// bctrl 
	ctx.lr = 0x8238F4AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// beq cr6,0x8238f4e0
	if (ctx.cr6.eq) goto loc_8238F4E0;
	// addi r10,r30,-1
	ctx.r10.s64 = ctx.r30.s64 + -1;
	// lfsx f0,r28,r29
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r29.u32);
	ctx.f0.f64 = double(temp.f32);
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// stfsx f0,r11,r29
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r29.u32, temp.u32);
	// srawi r9,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 1;
	// cmpw cr6,r27,r30
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r30.s32, ctx.xer);
	// addze r30,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r30.s64 = temp.s64;
	// blt cr6,0x8238f498
	if (ctx.cr6.lt) goto loc_8238F498;
loc_8238F4DC:
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
loc_8238F4E0:
	// stfsx f31,r11,r29
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r29.u32, temp.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-64(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8238F460) {
	__imp__sub_8238F460(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238F4F0) {
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
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r10,r11,3224
	ctx.r10.s64 = ctx.r11.s64 + 3224;
	// li r4,9
	ctx.r4.s64 = 9;
	// lwz r3,8(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// bl 0x820bb418
	ctx.lr = 0x8238F51C;
	sub_820BB418(ctx, base);
	// lis r9,-32761
	ctx.r9.s64 = -2147024896;
	// addic r8,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r8.s64 = ctx.r3.s64 + -1;
	// ori r6,r9,14
	ctx.r6.u64 = ctx.r9.u64 | 14;
	// subfe r5,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r5.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r31,r5,r6
	ctx.r31.u64 = ctx.r5.u64 & ctx.r6.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge cr6,0x8238f570
	if (!ctx.cr6.lt) goto loc_8238F570;
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r30,r11,14512
	ctx.r30.s64 = ctx.r11.s64 + 14512;
	// addi r4,r10,32644
	ctx.r4.s64 = ctx.r10.s64 + 32644;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x823df2b0
	ctx.lr = 0x8238F554;
	sub_823DF2B0(ctx, base);
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r9,-32644
	ctx.r4.s64 = ctx.r9.s64 + -32644;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82280900
	ctx.lr = 0x8238F56C;
	sub_82280900(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_8238F570:
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

PPC_WEAK_FUNC(sub_8238F4F0) {
	__imp__sub_8238F4F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238F588) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x8238F590;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lfs f2,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lfs f1,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x8238F5B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8238f5d8
	if (ctx.cr6.eq) goto loc_8238F5D8;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x8238f5d8
	if (ctx.cr6.eq) goto loc_8238F5D8;
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,0(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
loc_8238F5D8:
	// lfs f2,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// lfs f1,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bctrl 
	ctx.lr = 0x8238F5E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8238f60c
	if (ctx.cr6.eq) goto loc_8238F60C;
	// cmplw cr6,r29,r31
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x8238f60c
	if (ctx.cr6.eq) goto loc_8238F60C;
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,0(r29)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
loc_8238F60C:
	// lfs f2,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// lfs f1,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bctrl 
	ctx.lr = 0x8238F61C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8238f640
	if (ctx.cr6.eq) goto loc_8238F640;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x8238f640
	if (ctx.cr6.eq) goto loc_8238F640;
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,0(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
loc_8238F640:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8238F588) {
	__imp__sub_8238F588(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238F648) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x8238F650;
	__savegprlr_26(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// rlwinm r31,r11,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// cmpw cr6,r31,r5
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x8238f6d0
	if (!ctx.cr6.lt) goto loc_8238F6D0;
loc_8238F680:
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r27
	ctx.ctr.u64 = ctx.r27.u64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lfs f2,-4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bctrl 
	ctx.lr = 0x8238F698;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8238f6a8
	if (ctx.cr6.eq) goto loc_8238F6A8;
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
loc_8238F6A8:
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r31,1
	ctx.r9.s64 = ctx.r31.s64 + 1;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// rlwinm r31,r9,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lfsx f0,r11,r30
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r10,r30
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r30.u32, temp.u32);
	// cmpw cr6,r31,r28
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r28.s32, ctx.xer);
	// blt cr6,0x8238f680
	if (ctx.cr6.lt) goto loc_8238F680;
	// cmpw cr6,r31,r28
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r28.s32, ctx.xer);
loc_8238F6D0:
	// bne cr6,0x8238f6ec
	if (!ctx.cr6.eq) goto loc_8238F6EC;
	// rlwinm r11,r28,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r11,r30
	ctx.r9.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r29,r28,-1
	ctx.r29.s64 = ctx.r28.s64 + -1;
	// lfs f0,-4(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r10,r30
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r30.u32, temp.u32);
loc_8238F6EC:
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8238f460
	ctx.lr = 0x8238F704;
	sub_8238F460(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8238F648) {
	__imp__sub_8238F648(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238F710) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x8238F718;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// subf r11,r3,r5
	ctx.r11.s64 = ctx.r5.s64 - ctx.r3.s64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// cmpwi cr6,r11,40
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 40, ctx.xer);
	// ble cr6,0x8238f7a4
	if (!ctx.cr6.gt) goto loc_8238F7A4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// srawi r10,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 3;
	// addze r11,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r11.s64 = temp.s64;
	// rlwinm r29,r11,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r26,r11,3,0,28
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r27,r29,r3
	ctx.r27.u64 = ctx.r29.u64 + ctx.r3.u64;
	// add r5,r26,r3
	ctx.r5.u64 = ctx.r26.u64 + ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x8238f588
	ctx.lr = 0x8238F75C;
	sub_8238F588(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// add r5,r29,r31
	ctx.r5.u64 = ctx.r29.u64 + ctx.r31.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// subf r3,r29,r31
	ctx.r3.s64 = ctx.r31.s64 - ctx.r29.s64;
	// bl 0x8238f588
	ctx.lr = 0x8238F770;
	sub_8238F588(ctx, base);
	// subf r29,r29,r28
	ctx.r29.s64 = ctx.r28.s64 - ctx.r29.s64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// subf r3,r26,r28
	ctx.r3.s64 = ctx.r28.s64 - ctx.r26.s64;
	// bl 0x8238f588
	ctx.lr = 0x8238F788;
	sub_8238F588(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8238f588
	ctx.lr = 0x8238F79C;
	sub_8238F588(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_8238F7A4:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8238f588
	ctx.lr = 0x8238F7B0;
	sub_8238F588(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8238F710) {
	__imp__sub_8238F710(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238F7B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x8238F7C0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// subf r11,r3,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r3.s64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// srawi r28,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r28.s64 = ctx.r11.s32 >> 2;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// srawi r10,r28,1
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r28.s32 >> 1;
	// addze. r31,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r31.s64 = temp.s64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble 0x8238f80c
	if (!ctx.cr0.gt) goto loc_8238F80C;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r30,r11,r3
	ctx.r30.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_8238F7E8:
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// lfsu f1,-4(r30)
	ctx.fpscr.disableFlushMode();
	ea = -4 + ctx.r30.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.f1.f64 = double(temp.f32);
	ctx.r30.u32 = ea;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8238f648
	ctx.lr = 0x8238F804;
	sub_8238F648(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bgt cr6,0x8238f7e8
	if (ctx.cr6.gt) goto loc_8238F7E8;
loc_8238F80C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8238F7B8) {
	__imp__sub_8238F7B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238F814) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8238F814) {
	__imp__sub_8238F814(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238F818) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x8238F820;
	__savegprlr_25(ctx, base);
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// cmplw cr6,r3,r4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x8238f8f8
	if (ctx.cr6.eq) goto loc_8238F8F8;
	// addi r30,r3,4
	ctx.r30.s64 = ctx.r3.s64 + 4;
	// cmplw cr6,r30,r4
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x8238f8f8
	if (ctx.cr6.eq) goto loc_8238F8F8;
	// subfic r26,r3,4
	ctx.xer.ca = ctx.r3.u32 <= 4;
	ctx.r26.s64 = 4 - ctx.r3.s64;
loc_8238F84C:
	// lfs f31,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f31.f64 = double(temp.f32);
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// lfs f2,0(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x8238F864;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8238f8a0
	if (ctx.cr6.eq) goto loc_8238F8A0;
	// add r11,r26,r30
	ctx.r11.u64 = ctx.r26.u64 + ctx.r30.u64;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// srawi. r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x8238f898
	if (!ctx.cr0.gt) goto loc_8238F898;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// subf r11,r4,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r4.s64;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x823e0230
	ctx.lr = 0x8238F898;
	sub_823E0230(ctx, base);
loc_8238F898:
	// stfs f31,0(r27)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r27.u32 + 0, temp.u32);
	// b 0x8238f8ec
	goto loc_8238F8EC;
loc_8238F8A0:
	// lfs f2,-4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	ctx.f2.f64 = double(temp.f32);
	// addi r31,r30,-4
	ctx.r31.s64 = ctx.r30.s64 + -4;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x8238F8B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8238f8e8
	if (ctx.cr6.eq) goto loc_8238F8E8;
loc_8238F8C0:
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stfs f0,0(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// lfsu f2,-4(r31)
	ea = -4 + ctx.r31.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.f2.f64 = double(temp.f32);
	ctx.r31.u32 = ea;
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x8238F8DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8238f8c0
	if (!ctx.cr6.eq) goto loc_8238F8C0;
loc_8238F8E8:
	// stfs f31,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
loc_8238F8EC:
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r30,r25
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r25.u32, ctx.xer);
	// bne cr6,0x8238f84c
	if (!ctx.cr6.eq) goto loc_8238F84C;
loc_8238F8F8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8238F818) {
	__imp__sub_8238F818(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238F904) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8238F904) {
	__imp__sub_8238F904(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238F908) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf64
	ctx.lr = 0x8238F910;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// subf r11,r4,r5
	ctx.r11.s64 = ctx.r5.s64 - ctx.r4.s64;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// srawi r10,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 2;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// srawi r9,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 1;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// addze r8,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r8.s64 = temp.s64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r5,-4
	ctx.r5.s64 = ctx.r5.s64 + -4;
	// add r31,r11,r4
	ctx.r31.u64 = ctx.r11.u64 + ctx.r4.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8238f710
	ctx.lr = 0x8238F94C;
	sub_8238F710(ctx, base);
	// addi r28,r31,4
	ctx.r28.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r25,r31
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r31.u32, ctx.xer);
	// bge cr6,0x8238f9a0
	if (!ctx.cr6.lt) goto loc_8238F9A0;
loc_8238F958:
	// lfs f2,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// addi r30,r31,-4
	ctx.r30.s64 = ctx.r31.s64 + -4;
	// lfs f1,-4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	ctx.f1.f64 = double(temp.f32);
	// mtctr r26
	ctx.ctr.u64 = ctx.r26.u64;
	// bctrl 
	ctx.lr = 0x8238F96C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8238f9a0
	if (!ctx.cr6.eq) goto loc_8238F9A0;
	// lfs f2,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// mtctr r26
	ctx.ctr.u64 = ctx.r26.u64;
	// lfs f1,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bctrl 
	ctx.lr = 0x8238F988;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8238f9a0
	if (!ctx.cr6.eq) goto loc_8238F9A0;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// cmplw cr6,r25,r30
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r30.u32, ctx.xer);
	// blt cr6,0x8238f958
	if (ctx.cr6.lt) goto loc_8238F958;
loc_8238F9A0:
	// cmplw cr6,r28,r24
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r24.u32, ctx.xer);
	// bge cr6,0x8238f9ec
	if (!ctx.cr6.lt) goto loc_8238F9EC;
loc_8238F9A8:
	// lfs f2,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// mtctr r26
	ctx.ctr.u64 = ctx.r26.u64;
	// lfs f1,0(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bctrl 
	ctx.lr = 0x8238F9B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8238f9ec
	if (!ctx.cr6.eq) goto loc_8238F9EC;
	// lfs f2,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// mtctr r26
	ctx.ctr.u64 = ctx.r26.u64;
	// lfs f1,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bctrl 
	ctx.lr = 0x8238F9D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8238f9ec
	if (!ctx.cr6.eq) goto loc_8238F9EC;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmplw cr6,r28,r24
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r24.u32, ctx.xer);
	// blt cr6,0x8238f9a8
	if (ctx.cr6.lt) goto loc_8238F9A8;
loc_8238F9EC:
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
loc_8238F9F4:
	// cmplw cr6,r29,r24
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r24.u32, ctx.xer);
	// bge cr6,0x8238fa60
	if (!ctx.cr6.lt) goto loc_8238FA60;
loc_8238F9FC:
	// lfs f2,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// mtctr r26
	ctx.ctr.u64 = ctx.r26.u64;
	// lfs f1,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bctrl 
	ctx.lr = 0x8238FA0C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8238fa54
	if (!ctx.cr6.eq) goto loc_8238FA54;
	// lfs f2,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// mtctr r26
	ctx.ctr.u64 = ctx.r26.u64;
	// lfs f1,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bctrl 
	ctx.lr = 0x8238FA28;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8238fa60
	if (!ctx.cr6.eq) goto loc_8238FA60;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x8238fa54
	if (ctx.cr6.eq) goto loc_8238FA54;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f0,0(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
loc_8238FA54:
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r29,r24
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r24.u32, ctx.xer);
	// blt cr6,0x8238f9fc
	if (ctx.cr6.lt) goto loc_8238F9FC;
loc_8238FA60:
	// cmplw cr6,r27,r25
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r25.u32, ctx.xer);
	// ble cr6,0x8238fad4
	if (!ctx.cr6.gt) goto loc_8238FAD4;
	// addi r30,r27,-4
	ctx.r30.s64 = ctx.r27.s64 + -4;
loc_8238FA6C:
	// lfs f2,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// mtctr r26
	ctx.ctr.u64 = ctx.r26.u64;
	// lfs f1,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bctrl 
	ctx.lr = 0x8238FA7C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8238fac0
	if (!ctx.cr6.eq) goto loc_8238FAC0;
	// lfs f2,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// mtctr r26
	ctx.ctr.u64 = ctx.r26.u64;
	// lfs f1,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bctrl 
	ctx.lr = 0x8238FA98;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8238fad0
	if (!ctx.cr6.eq) goto loc_8238FAD0;
	// addi r31,r31,-4
	ctx.r31.s64 = ctx.r31.s64 + -4;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x8238fac0
	if (ctx.cr6.eq) goto loc_8238FAC0;
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,0(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
loc_8238FAC0:
	// addi r27,r27,-4
	ctx.r27.s64 = ctx.r27.s64 + -4;
	// addi r30,r30,-4
	ctx.r30.s64 = ctx.r30.s64 + -4;
	// cmplw cr6,r25,r27
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r27.u32, ctx.xer);
	// blt cr6,0x8238fa6c
	if (ctx.cr6.lt) goto loc_8238FA6C;
loc_8238FAD0:
	// cmplw cr6,r27,r25
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r25.u32, ctx.xer);
loc_8238FAD4:
	// bne cr6,0x8238fb30
	if (!ctx.cr6.eq) goto loc_8238FB30;
	// cmplw cr6,r29,r24
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r24.u32, ctx.xer);
	// beq cr6,0x8238fb98
	if (ctx.cr6.eq) goto loc_8238FB98;
	// cmplw cr6,r28,r29
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x8238fb00
	if (ctx.cr6.eq) goto loc_8238FB00;
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x8238fb00
	if (ctx.cr6.eq) goto loc_8238FB00;
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,0(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// stfs f0,0(r28)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
loc_8238FB00:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8238f9f4
	if (ctx.cr6.eq) goto loc_8238F9F4;
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,0(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// b 0x8238f9f4
	goto loc_8238F9F4;
loc_8238FB30:
	// cmplw cr6,r29,r24
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r24.u32, ctx.xer);
	// addi r27,r27,-4
	ctx.r27.s64 = ctx.r27.s64 + -4;
	// bne cr6,0x8238fb78
	if (!ctx.cr6.eq) goto loc_8238FB78;
	// addi r31,r31,-4
	ctx.r31.s64 = ctx.r31.s64 + -4;
	// cmplw cr6,r27,r31
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x8238fb58
	if (ctx.cr6.eq) goto loc_8238FB58;
	// lfs f0,0(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,0(r27)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r27.u32 + 0, temp.u32);
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
loc_8238FB58:
	// addi r28,r28,-4
	ctx.r28.s64 = ctx.r28.s64 + -4;
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x8238f9f4
	if (ctx.cr6.eq) goto loc_8238F9F4;
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,0(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// stfs f0,0(r28)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
	// b 0x8238f9f4
	goto loc_8238F9F4;
loc_8238FB78:
	// cmplw cr6,r29,r27
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r27.u32, ctx.xer);
	// beq cr6,0x8238fb90
	if (ctx.cr6.eq) goto loc_8238FB90;
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,0(r29)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// stfs f0,0(r27)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r27.u32 + 0, temp.u32);
loc_8238FB90:
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// b 0x8238f9f4
	goto loc_8238F9F4;
loc_8238FB98:
	// stw r31,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r31.u32);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// stw r28,4(r23)
	PPC_STORE_U32(ctx.r23.u32 + 4, ctx.r28.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8238F908) {
	__imp__sub_8238F908(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238FBAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8238FBAC) {
	__imp__sub_8238FBAC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238FBB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x8238FBB8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// subf r31,r3,r4
	ctx.r31.s64 = ctx.r4.s64 - ctx.r3.s64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// srawi r11,r31,2
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r31.s32 >> 2;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x8238fc0c
	if (!ctx.cr6.gt) goto loc_8238FC0C;
	// addi r29,r3,-4
	ctx.r29.s64 = ctx.r3.s64 + -4;
loc_8238FBD8:
	// lfsx f1,r29,r31
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r31.u32);
	ctx.f1.f64 = double(temp.f32);
	// addi r11,r31,-4
	ctx.r11.s64 = ctx.r31.s64 + -4;
	// lfs f0,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// stfsx f0,r29,r31
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + ctx.r31.u32, temp.u32);
	// srawi r5,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r11.s32 >> 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8238f648
	ctx.lr = 0x8238FBFC;
	sub_8238F648(ctx, base);
	// addi r31,r31,-4
	ctx.r31.s64 = ctx.r31.s64 + -4;
	// srawi r11,r31,2
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r31.s32 >> 2;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bgt cr6,0x8238fbd8
	if (ctx.cr6.gt) goto loc_8238FBD8;
loc_8238FC0C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8238FBB0) {
	__imp__sub_8238FBB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238FC14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8238FC14) {
	__imp__sub_8238FC14(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238FC18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x8238FC20;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// subf r11,r3,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r3.s64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// ble cr6,0x8238fcd0
	if (!ctx.cr6.gt) goto loc_8238FCD0;
loc_8238FC44:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x8238fcf4
	if (!ctx.cr6.gt) goto loc_8238FCF4;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8238f908
	ctx.lr = 0x8238FC60;
	sub_8238F908(ctx, base);
	// srawi r11,r29,1
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r29.s32 >> 1;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// add r29,r10,r11
	ctx.r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r27,84(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r26,80(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// subf r9,r27,r31
	ctx.r9.s64 = ctx.r31.s64 - ctx.r27.s64;
	// subf r8,r30,r26
	ctx.r8.s64 = ctx.r26.s64 - ctx.r30.s64;
	// rlwinm r7,r9,0,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFC;
	// rlwinm r6,r8,0,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFC;
	// cmpw cr6,r6,r7
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r7.s32, ctx.xer);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// bge cr6,0x8238fcb0
	if (!ctx.cr6.lt) goto loc_8238FCB0;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8238fc18
	ctx.lr = 0x8238FCA8;
	sub_8238FC18(ctx, base);
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// b 0x8238fcc0
	goto loc_8238FCC0;
loc_8238FCB0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8238fc18
	ctx.lr = 0x8238FCBC;
	sub_8238FC18(ctx, base);
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
loc_8238FCC0:
	// subf r11,r30,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r30.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// bgt cr6,0x8238fc44
	if (ctx.cr6.gt) goto loc_8238FC44;
loc_8238FCD0:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x8238fcec
	if (!ctx.cr6.gt) goto loc_8238FCEC;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8238f818
	ctx.lr = 0x8238FCEC;
	sub_8238F818(ctx, base);
loc_8238FCEC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_8238FCF4:
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// ble cr6,0x8238fcd0
	if (!ctx.cr6.gt) goto loc_8238FCD0;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x8238fd1c
	if (!ctx.cr6.gt) goto loc_8238FD1C;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8238f7b8
	ctx.lr = 0x8238FD1C;
	sub_8238F7B8(ctx, base);
loc_8238FD1C:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8238fbb0
	ctx.lr = 0x8238FD2C;
	sub_8238FBB0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8238FC18) {
	__imp__sub_8238FC18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238FD34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8238FD34) {
	__imp__sub_8238FD34(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238FD38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lbz r9,2(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r9,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r9.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfs f0,6232(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6232);
	ctx.f0.f64 = double(temp.f32);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f11,0(r4)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lbz r7,1(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// std r7,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r7.u64);
	// lfd f10,-16(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fmuls f7,f8,f0
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// stfs f7,4(r4)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// lbz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// std r5,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r5.u64);
	// lfd f6,-16(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// fmuls f3,f4,f0
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// stfs f3,8(r4)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// lbz r11,3(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 3);
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f2,-16(r1)
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f1,f2
	ctx.f1.f64 = double(ctx.f2.s64);
	// frsp f13,f1
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f12,12(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 12, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8238FD38) {
	__imp__sub_8238FD38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238FDB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8238FDB4) {
	__imp__sub_8238FDB4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238FDB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_8238FDD0:
	// rlwinm r8,r3,5,0,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 5) & 0xFFFFFFE0;
	// lbzu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// add r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 + ctx.r3.u64;
	// xor r3,r8,r11
	ctx.r3.u64 = ctx.r8.u64 ^ ctx.r11.u64;
	// extsb r11,r9
	ctx.r11.s64 = ctx.r9.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8238fdd0
	if (!ctx.cr6.eq) goto loc_8238FDD0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8238FDB8) {
	__imp__sub_8238FDB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238FDF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_8238FE08:
	// lbzu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// rlwinm r8,r3,5,0,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 5) & 0xFFFFFFE0;
	// ori r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 | 32;
	// add r6,r8,r3
	ctx.r6.u64 = ctx.r8.u64 + ctx.r3.u64;
	// extsb r11,r9
	ctx.r11.s64 = ctx.r9.s8;
	// xor r3,r7,r6
	ctx.r3.u64 = ctx.r7.u64 ^ ctx.r6.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8238fe08
	if (!ctx.cr6.eq) goto loc_8238FE08;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8238FDF0) {
	__imp__sub_8238FDF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238FE2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8238FE2C) {
	__imp__sub_8238FE2C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238FE30) {
	PPC_FUNC_PROLOGUE();
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,128
	ctx.r4.s64 = 128;
	// b 0x822e54e0
	sub_822E54E0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8238FE30) {
	__imp__sub_8238FE30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238FE3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8238FE3C) {
	__imp__sub_8238FE3C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238FE40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8238fe98
	if (ctx.cr6.eq) goto loc_8238FE98;
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fneg f12,f1
	ctx.f12.u64 = ctx.f1.u64 ^ 0x8000000000000000;
	// lfs f13,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r5,8
	ctx.r11.s64 = ctx.r5.s64 + 8;
	// lfs f11,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
loc_8238FE60:
	// lfs f10,-4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f8,-8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f5,f8,f13,f9
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f13.f64 + ctx.f9.f64));
	// fmadds f4,f7,f11,f5
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f11.f64 + ctx.f5.f64));
	// fadds f3,f4,f6
	ctx.f3.f64 = double(float(ctx.f4.f64 + ctx.f6.f64));
	// fcmpu cr6,f3,f12
	ctx.cr6.compare(ctx.f3.f64, ctx.f12.f64);
	// blt cr6,0x8238fea0
	if (ctx.cr6.lt) goto loc_8238FEA0;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x8238fe60
	if (ctx.cr6.lt) goto loc_8238FE60;
loc_8238FE98:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8238FEA0:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8238FE40) {
	__imp__sub_8238FE40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238FEA8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8238febc
	if (!ctx.cr6.eq) goto loc_8238FEBC;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_8238FEBC:
	// b 0x8235d5a8
	sub_8235D5A8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8238FEA8) {
	__imp__sub_8238FEA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8238FEC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf54
	ctx.lr = 0x8238FEC8;
	__savegprlr_19(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r22,r9
	ctx.r22.u64 = ctx.r9.u64;
	// lfs f12,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lfs f10,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// mr r24,r10
	ctx.r24.u64 = ctx.r10.u64;
	// lfs f8,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f13,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lfs f11,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// lfs f9,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// lfs f0,20420(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 20420);
	ctx.f0.f64 = double(temp.f32);
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// fmadds f7,f13,f0,f12
	ctx.f7.f64 = double(float(ctx.f13.f64 * ctx.f0.f64 + ctx.f12.f64));
	// stfs f7,80(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmadds f6,f11,f0,f10
	ctx.f6.f64 = double(float(ctx.f11.f64 * ctx.f0.f64 + ctx.f10.f64));
	// stfs f6,84(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmadds f5,f9,f0,f8
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f0.f64 + ctx.f8.f64));
	// stfs f5,88(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// mr r23,r8
	ctx.r23.u64 = ctx.r8.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// beq cr6,0x8238ff40
	if (ctx.cr6.eq) goto loc_8238FF40;
	// li r6,-1
	ctx.r6.s64 = -1;
	// bl 0x8211ec08
	ctx.lr = 0x8238FF3C;
	sub_8211EC08(ctx, base);
	// b 0x8238ff4c
	goto loc_8238FF4C;
loc_8238FF40:
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r6,r10,-9672
	ctx.r6.s64 = ctx.r10.s64 + -9672;
	// bl 0x8211e9c0
	ctx.lr = 0x8238FF4C;
	sub_8211E9C0(ctx, base);
loc_8238FF4C:
	// lbz r10,137(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 137);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82390198
	if (!ctx.cr6.eq) goto loc_82390198;
	// lbz r10,136(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 136);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82390198
	if (!ctx.cr6.eq) goto loc_82390198;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x82390198
	if (ctx.cr6.eq) goto loc_82390198;
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82390198
	if (ctx.cr6.eq) goto loc_82390198;
	// subf r10,r11,r31
	ctx.r10.s64 = ctx.r31.s64 - ctx.r11.s64;
loc_8238FF88:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stbx r9,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne cr6,0x8238ff88
	if (!ctx.cr6.eq) goto loc_8238FF88;
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// add r20,r23,r24
	ctx.r20.u64 = ctx.r23.u64 + ctx.r24.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// add r19,r22,r24
	ctx.r19.u64 = ctx.r22.u64 + ctx.r24.u64;
	// srawi r8,r10,20
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFFFFF) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 20;
	// stb r11,0(r23)
	PPC_STORE_U8(ctx.r23.u32 + 0, ctx.r11.u8);
	// lis r9,-32191
	ctx.r9.s64 = -2109669376;
	// clrlwi r10,r8,27
	ctx.r10.u64 = ctx.r8.u32 & 0x1F;
	// stb r11,-1(r20)
	PPC_STORE_U8(ctx.r20.u32 + -1, ctx.r11.u8);
	// stb r11,0(r22)
	PPC_STORE_U8(ctx.r22.u32 + 0, ctx.r11.u8);
	// addi r28,r9,19480
	ctx.r28.s64 = ctx.r9.s64 + 19480;
	// stb r11,-1(r19)
	PPC_STORE_U8(ctx.r19.u32 + -1, ctx.r11.u8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8238fff4
	if (!ctx.cr6.gt) goto loc_8238FFF4;
	// cmpwi cr6,r10,31
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 31, ctx.xer);
	// bge cr6,0x8238fff4
	if (!ctx.cr6.lt) goto loc_8238FFF4;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r28
	ctx.r10.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lwz r4,-20(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + -20);
	// b 0x8238fffc
	goto loc_8238FFFC;
loc_8238FFF4:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r4,r11,-32344
	ctx.r4.s64 = ctx.r11.s64 + -32344;
loc_8238FFFC:
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x823dfa38
	ctx.lr = 0x82390008;
	sub_823DFA38(ctx, base);
	// lbz r11,-1(r20)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r20.u32 + -1);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82390198
	if (!ctx.cr6.eq) goto loc_82390198;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_82390018:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82390018
	if (!ctx.cr6.eq) goto loc_82390018;
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// subf r11,r23,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r23.s64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// rotlwi r26,r8,0
	ctx.r26.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// beq cr6,0x82390058
	if (ctx.cr6.eq) goto loc_82390058;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-15188
	ctx.r4.s64 = ctx.r11.s64 + -15188;
	// b 0x82390060
	goto loc_82390060;
loc_82390058:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r4,r11,-32360
	ctx.r4.s64 = ctx.r11.s64 + -32360;
loc_82390060:
	// bl 0x823dfa38
	ctx.lr = 0x82390064;
	sub_823DFA38(ctx, base);
	// lbz r11,-1(r19)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r19.u32 + -1);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82390198
	if (!ctx.cr6.eq) goto loc_82390198;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_82390074:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82390074
	if (!ctx.cr6.eq) goto loc_82390074;
	// subf r10,r22,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r22.s64;
	// lwz r11,600(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 600);
	// li r21,30
	ctx.r21.s64 = 30;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// rotlwi r27,r10,0
	ctx.r27.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// beq cr6,0x8239018c
	if (ctx.cr6.eq) goto loc_8239018C;
	// li r29,600
	ctx.r29.s64 = 600;
	// li r25,32
	ctx.r25.s64 = 32;
loc_823900A8:
	// addi r11,r28,8
	ctx.r11.s64 = ctx.r28.s64 + 8;
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwzx r9,r29,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// and r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 & ctx.r10.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8239010c
	if (ctx.cr6.eq) goto loc_8239010C;
	// stbx r25,r26,r23
	PPC_STORE_U8(ctx.r26.u32 + ctx.r23.u32, ctx.r25.u8);
	// addi r31,r26,1
	ctx.r31.s64 = ctx.r26.s64 + 1;
	// lwzx r4,r29,r28
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r28.u32);
	// add r30,r31,r23
	ctx.r30.u64 = ctx.r31.u64 + ctx.r23.u64;
	// subf r5,r31,r24
	ctx.r5.s64 = ctx.r24.s64 - ctx.r31.s64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823dfa38
	ctx.lr = 0x823900DC;
	sub_823DFA38(ctx, base);
	// lbz r11,-1(r20)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r20.u32 + -1);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82390198
	if (!ctx.cr6.eq) goto loc_82390198;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_823900EC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823900ec
	if (!ctx.cr6.eq) goto loc_823900EC;
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// add r26,r11,r31
	ctx.r26.u64 = ctx.r11.u64 + ctx.r31.u64;
loc_8239010C:
	// addi r11,r28,12
	ctx.r11.s64 = ctx.r28.s64 + 12;
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwzx r9,r29,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// and r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 & ctx.r10.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82390170
	if (ctx.cr6.eq) goto loc_82390170;
	// stbx r25,r27,r22
	PPC_STORE_U8(ctx.r27.u32 + ctx.r22.u32, ctx.r25.u8);
	// addi r31,r27,1
	ctx.r31.s64 = ctx.r27.s64 + 1;
	// lwzx r4,r29,r28
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r28.u32);
	// add r30,r31,r22
	ctx.r30.u64 = ctx.r31.u64 + ctx.r22.u64;
	// subf r5,r31,r24
	ctx.r5.s64 = ctx.r24.s64 - ctx.r31.s64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823dfa38
	ctx.lr = 0x82390140;
	sub_823DFA38(ctx, base);
	// lbz r11,-1(r19)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r19.u32 + -1);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82390198
	if (!ctx.cr6.eq) goto loc_82390198;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82390150:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82390150
	if (!ctx.cr6.eq) goto loc_82390150;
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// add r27,r11,r31
	ctx.r27.u64 = ctx.r11.u64 + ctx.r31.u64;
loc_82390170:
	// addi r21,r21,1
	ctx.r21.s64 = ctx.r21.s64 + 1;
	// rlwinm r11,r21,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r21,r11
	ctx.r11.u64 = ctx.r21.u64 + ctx.r11.u64;
	// rlwinm r29,r11,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r29,r28
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r28.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823900a8
	if (!ctx.cr6.eq) goto loc_823900A8;
loc_8239018C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x823ddfa4
	__restgprlr_19(ctx, base);
	return;
loc_82390198:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x823ddfa4
	__restgprlr_19(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8238FEC0) {
	__imp__sub_8238FEC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823901A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823901A4) {
	__imp__sub_823901A4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823901A8) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// fmr f30,f1
	ctx.f30.f64 = ctx.f1.f64;
	// fmr f29,f2
	ctx.f29.f64 = ctx.f2.f64;
	// fabs f1,f3
	ctx.f1.u64 = ctx.f3.u64 & ~0x8000000000000000;
	// bl 0x823dedc8
	ctx.lr = 0x823901D0;
	sub_823DEDC8(ctx, base);
	// frsp f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f1.f64));
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x823de720
	ctx.lr = 0x823901DC;
	sub_823DE720(ctx, base);
	// fdivs f13,f30,f29
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f30.f64 / ctx.f29.f64));
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfd f0,-21528(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + -21528);
	// fmul f1,f1,f13
	ctx.f1.f64 = ctx.f1.f64 * ctx.f13.f64;
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgt cr6,0x82390204
	if (ctx.cr6.gt) goto loc_82390204;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lfd f0,-32320(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + -32320);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x82390208
	if (!ctx.cr6.lt) goto loc_82390208;
loc_82390204:
	// fmr f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f0.f64;
loc_82390208:
	// bl 0x823ded00
	ctx.lr = 0x8239020C;
	sub_823DED00(ctx, base);
	// fadd f29,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f1.f64 + ctx.f31.f64;
	// fmr f30,f1
	ctx.f30.f64 = ctx.f1.f64;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x823de720
	ctx.lr = 0x8239021C;
	sub_823DE720(ctx, base);
	// fsub f31,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f31.f64 - ctx.f30.f64;
	// fmr f30,f1
	ctx.f30.f64 = ctx.f1.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x823de720
	ctx.lr = 0x8239022C;
	sub_823DE720(ctx, base);
	// fdiv f30,f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64 / ctx.f30.f64;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x823dde60
	ctx.lr = 0x82390238;
	sub_823DDE60(ctx, base);
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f1.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x823dde60
	ctx.lr = 0x82390244;
	sub_823DDE60(ctx, base);
	// fdiv f13,f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f1.f64 / ctx.f29.f64;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// fmul f12,f30,f30
	ctx.f12.f64 = ctx.f30.f64 * ctx.f30.f64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfd f0,-32328(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + -32328);
	// lfs f1,5484(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f1.f64 = double(temp.f32);
	// fmadd f11,f13,f13,f12
	ctx.f11.f64 = ctx.f13.f64 * ctx.f13.f64 + ctx.f12.f64;
	// fmul f10,f11,f0
	ctx.f10.f64 = ctx.f11.f64 * ctx.f0.f64;
	// frsp f0,f10
	ctx.f0.f64 = double(float(ctx.f10.f64));
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// blt cr6,0x82390284
	if (ctx.cr6.lt) goto loc_82390284;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f1.f64 = double(temp.f32);
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// bgt cr6,0x82390284
	if (ctx.cr6.gt) goto loc_82390284;
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
loc_82390284:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f29,-32(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// lfd f30,-24(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// lfd f31,-16(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823901A8) {
	__imp__sub_823901A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823902A0) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8239b8e0
	ctx.lr = 0x823902B8;
	sub_8239B8E0(ctx, base);
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r11,13536
	ctx.r11.s64 = ctx.r11.s64 + 13536;
	// lfs f0,5484(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,500(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 500);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// beq cr6,0x8239035c
	if (ctx.cr6.eq) goto loc_8239035C;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x8239035c
	if (ctx.cr6.eq) goto loc_8239035C;
	// lbz r6,494(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 494);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// li r3,1
	ctx.r3.s64 = 1;
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lfs f0,6232(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 6232);
	ctx.f0.f64 = double(temp.f32);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// lfs f13,12168(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12168);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f10,0(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// lbz r4,493(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 493);
	// std r4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// lfd f9,80(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// frsp f7,f8
	ctx.f7.f64 = double(float(ctx.f8.f64));
	// fmuls f6,f7,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// stfs f6,4(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// lbz r10,492(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 492);
	// stfs f13,12(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f5,80(r1)
	ctx.f5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f4,f5
	ctx.f4.f64 = double(ctx.f5.s64);
	// frsp f3,f4
	ctx.f3.f64 = double(float(ctx.f4.f64));
	// fmuls f2,f3,f0
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// stfs f2,8(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
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
loc_8239035C:
	// lis r10,-31780
	ctx.r10.s64 = -2082734080;
	// lwz r10,12880(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12880);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82390418
	if (ctx.cr6.eq) goto loc_82390418;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x8239038c
	if (!ctx.cr6.eq) goto loc_8239038C;
	// lis r9,-31780
	ctx.r9.s64 = -2082734080;
	// lwz r9,13120(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 13120);
	// lwz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82390418
	if (ctx.cr6.eq) goto loc_82390418;
loc_8239038C:
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// bne cr6,0x823903b8
	if (!ctx.cr6.eq) goto loc_823903B8;
	// fcmpu cr6,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x823903b8
	if (ctx.cr6.eq) goto loc_823903B8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,492
	ctx.r3.s64 = ctx.r11.s64 + 492;
	// bl 0x8238fd38
	ctx.lr = 0x823903A8;
	sub_8238FD38(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,12168(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82390428
	goto loc_82390428;
loc_823903B8:
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x823903f4
	if (ctx.cr6.eq) goto loc_823903F4;
	// bl 0x82310110
	ctx.lr = 0x823903C4;
	sub_82310110(ctx, base);
	// rlwinm r11,r3,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x200;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823903f4
	if (ctx.cr6.eq) goto loc_823903F4;
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,13012(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13012);
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// bl 0x820dc660
	ctx.lr = 0x823903E4;
	sub_820DC660(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,12168(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82390428
	goto loc_82390428;
loc_823903F4:
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,13056(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13056);
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// bl 0x820dc660
	ctx.lr = 0x82390408;
	sub_820DC660(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,12168(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82390428
	goto loc_82390428;
loc_82390418:
	// stfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
loc_82390428:
	// stfs f0,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
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

PPC_WEAK_FUNC(sub_823902A0) {
	__imp__sub_823902A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82390440) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82390440) {
	__imp__sub_82390440(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82390444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82390444) {
	__imp__sub_82390444(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82390448) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82390450;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31799
	ctx.r10.s64 = -2083979264;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// addi r30,r10,14600
	ctx.r30.s64 = ctx.r10.s64 + 14600;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 32768;
	// ori r10,r10,8192
	ctx.r10.u64 = ctx.r10.u64 | 8192;
	// stw r11,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r11.u32);
	// stw r10,-4(r30)
	PPC_STORE_U32(ctx.r30.u32 + -4, ctx.r10.u32);
	// bl 0x823cb2f0
	ctx.lr = 0x82390478;
	sub_823CB2F0(ctx, base);
	// bl 0x823b9970
	ctx.lr = 0x8239047C;
	sub_823B9970(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r31,2
	ctx.r31.s64 = 2;
	// addi r29,r30,-16
	ctx.r29.s64 = ctx.r30.s64 + -16;
	// addi r28,r11,-32064
	ctx.r28.s64 = ctx.r11.s64 + -32064;
loc_8239048C:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,32(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// bl 0x8238fe30
	ctx.lr = 0x82390498;
	sub_8238FE30(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stwu r3,16(r29)
	ea = 16 + ctx.r29.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r29.u32 = ea;
	// bne 0x8239048c
	if (!ctx.cr0.eq) goto loc_8239048C;
	// bl 0x8239b378
	ctx.lr = 0x823904A8;
	sub_8239B378(ctx, base);
	// bl 0x8238eba8
	ctx.lr = 0x823904AC;
	sub_8238EBA8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82390448) {
	__imp__sub_82390448(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823904B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823904B4) {
	__imp__sub_823904B4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823904B8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823904B8) {
	__imp__sub_823904B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823904BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823904BC) {
	__imp__sub_823904BC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823904C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x823904C8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82390504
	if (ctx.cr6.eq) goto loc_82390504;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// rlwinm r4,r4,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r5,r11,-32052
	ctx.r5.s64 = ctx.r11.s64 + -32052;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// bl 0x823b0fb0
	ctx.lr = 0x823904FC;
	sub_823B0FB0(ctx, base);
	// stw r3,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r3.u32);
	// b 0x82390508
	goto loc_82390508;
loc_82390504:
	// stw r27,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r27.u32);
loc_82390508:
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// mullw r4,r28,r29
	ctx.r4.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r29.s32);
	// stw r29,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r29.u32);
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// addi r3,r31,44
	ctx.r3.s64 = ctx.r31.s64 + 44;
	// bl 0x823b0fb8
	ctx.lr = 0x82390520;
	sub_823B0FB8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823904C0) {
	__imp__sub_823904C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82390528) {
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
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82390568
	if (!ctx.cr6.eq) goto loc_82390568;
loc_8239054C:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8228b0d8
	ctx.lr = 0x82390554;
	sub_8228B0D8(ctx, base);
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
loc_82390568:
	// lwsync 
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// clrlwi r11,r11,26
	ctx.r11.u64 = ctx.r11.u32 & 0x3F;
	// addi r10,r11,74
	ctx.r10.s64 = ctx.r11.s64 + 74;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// bl 0x820badb0
	ctx.lr = 0x82390584;
	sub_820BADB0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8239054c
	if (!ctx.cr6.eq) goto loc_8239054C;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// clrlwi r10,r11,26
	ctx.r10.u64 = ctx.r11.u32 & 0x3F;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,10
	ctx.r10.s64 = ctx.r10.s64 + 10;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r31
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// addis r7,r8,16
	ctx.r7.s64 = ctx.r8.s64 + 1048576;
	// stw r7,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r7.u32);
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

PPC_WEAK_FUNC(sub_82390528) {
	__imp__sub_82390528(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823905C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823905C4) {
	__imp__sub_823905C4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823905C8) {
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
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lis r11,0
	ctx.r11.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r10,r10,127
	ctx.r10.s64 = ctx.r10.s64 + 127;
	// ori r11,r11,33792
	ctx.r11.u64 = ctx.r11.u64 | 33792;
	// rlwinm r9,r10,0,0,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF80;
	// add r10,r9,r11
	ctx.r10.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r8,r9,0,0,11
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFF00000;
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// rlwinm r9,r7,0,0,11
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82390610
	if (ctx.cr6.eq) goto loc_82390610;
	// add r10,r9,r11
	ctx.r10.u64 = ctx.r9.u64 + ctx.r11.u64;
loc_82390610:
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r10,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r10.u32);
	// rlwinm r9,r10,0,0,11
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFF00000;
	// addi r8,r31,-1
	ctx.r8.s64 = ctx.r31.s64 + -1;
	// rlwinm r10,r8,0,0,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82390630
	if (ctx.cr6.eq) goto loc_82390630;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_82390630:
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// stw r31,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r31.u32);
	// subf. r10,r11,r31
	ctx.r10.s64 = ctx.r31.s64 - ctx.r11.s64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble 0x82390654
	if (!ctx.cr0.gt) goto loc_82390654;
loc_82390640:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82390528
	ctx.lr = 0x82390648;
	sub_82390528(ctx, base);
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// subf. r10,r11,r31
	ctx.r10.s64 = ctx.r31.s64 - ctx.r11.s64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt 0x82390640
	if (ctx.cr0.gt) goto loc_82390640;
loc_82390654:
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

PPC_WEAK_FUNC(sub_823905C8) {
	__imp__sub_823905C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239066C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8239066C) {
	__imp__sub_8239066C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82390670) {
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
	// lwz r30,0(r5)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// addi r31,r6,-1
	ctx.r31.s64 = ctx.r6.s64 + -1;
	// bl 0x8236b940
	ctx.lr = 0x82390690;
	sub_8236B940(ctx, base);
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bge cr6,0x823906b4
	if (!ctx.cr6.lt) goto loc_823906B4;
	// lis r10,-31799
	ctx.r10.s64 = -2083979264;
	// mulli r11,r11,552
	ctx.r11.s64 = ctx.r11.s64 * 552;
	// addi r10,r10,3224
	ctx.r10.s64 = ctx.r10.s64 + 3224;
	// addi r10,r10,96
	ctx.r10.s64 = ctx.r10.s64 + 96;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x823906b8
	goto loc_823906B8;
loc_823906B4:
	// li r8,0
	ctx.r8.s64 = 0;
loc_823906B8:
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// andc r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 & ~ctx.r31.u64;
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// rlwinm r7,r11,0,0,11
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// addi r6,r10,-1
	ctx.r6.s64 = ctx.r10.s64 + -1;
	// rlwinm r9,r6,0,0,11
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x823906e4
	if (ctx.cr6.eq) goto loc_823906E4;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// add r10,r9,r30
	ctx.r10.u64 = ctx.r9.u64 + ctx.r30.u64;
loc_823906E4:
	// lwz r9,12(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// clrlwi r11,r11,12
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFFF;
	// stw r10,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r10.u32);
	// add r3,r9,r11
	ctx.r3.u64 = ctx.r9.u64 + ctx.r11.u64;
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

PPC_WEAK_FUNC(sub_82390670) {
	__imp__sub_82390670(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239070C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8239070C) {
	__imp__sub_8239070C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82390710) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82390710) {
	__imp__sub_82390710(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82390714) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82390714) {
	__imp__sub_82390714(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82390718) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82390718) {
	__imp__sub_82390718(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239071C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8239071C) {
	__imp__sub_8239071C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82390720) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf40
	ctx.lr = 0x82390728;
	__savegprlr_14(ctx, base);
	// stfd f30,-168(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -168, ctx.f30.u64);
	// stfd f31,-160(r1)
	PPC_STORE_U64(ctx.r1.u32 + -160, ctx.f31.u64);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// addi r30,r11,3224
	ctx.r30.s64 = ctx.r11.s64 + 3224;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x820bad78
	ctx.lr = 0x82390744;
	sub_820BAD78(ctx, base);
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// li r31,2
	ctx.r31.s64 = 2;
	// addi r29,r30,-428
	ctx.r29.s64 = ctx.r30.s64 + -428;
	// lis r28,16
	ctx.r28.s64 = 1048576;
loc_82390754:
	// li r5,1028
	ctx.r5.s64 = 1028;
	// li r4,128
	ctx.r4.s64 = 128;
	// lis r3,16
	ctx.r3.s64 = 1048576;
	// bl 0x822e54e0
	ctx.lr = 0x82390764;
	sub_822E54E0(ctx, base);
	// stw r3,536(r29)
	PPC_STORE_U32(ctx.r29.u32 + 536, ctx.r3.u32);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stwu r28,552(r29)
	ea = 552 + ctx.r29.u32;
	PPC_STORE_U32(ea, ctx.r28.u32);
	ctx.r29.u32 = ea;
	// bne 0x82390754
	if (!ctx.cr0.eq) goto loc_82390754;
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r11,r11,14720
	ctx.r11.s64 = ctx.r11.s64 + 14720;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// lis r10,4
	ctx.r10.s64 = 262144;
	// addi r31,r11,5060
	ctx.r31.s64 = ctx.r11.s64 + 5060;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r27,32
	ctx.r27.s64 = 32;
	// li r14,3840
	ctx.r14.s64 = 3840;
	// li r15,18432
	ctx.r15.s64 = 18432;
	// ori r22,r10,8192
	ctx.r22.u64 = ctx.r10.u64 | 8192;
	// addi r28,r11,-32052
	ctx.r28.s64 = ctx.r11.s64 + -32052;
	// li r16,9216
	ctx.r16.s64 = 9216;
	// li r17,44
	ctx.r17.s64 = 44;
	// li r18,20
	ctx.r18.s64 = 20;
loc_823907B4:
	// lis r4,0
	ctx.r4.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// ori r4,r4,49152
	ctx.r4.u64 = ctx.r4.u64 | 49152;
	// addi r3,r31,-32
	ctx.r3.s64 = ctx.r31.s64 + -32;
	// bl 0x823b0fb0
	ctx.lr = 0x823907C8;
	sub_823B0FB0(ctx, base);
	// li r11,24576
	ctx.r11.s64 = 24576;
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// lis r4,8
	ctx.r4.s64 = 524288;
	// stw r11,-36(r31)
	PPC_STORE_U32(ctx.r31.u32 + -36, ctx.r11.u32);
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// stw r29,-40(r31)
	PPC_STORE_U32(ctx.r31.u32 + -40, ctx.r29.u32);
	// stw r27,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r27.u32);
	// bl 0x823b0fb8
	ctx.lr = 0x823907E8;
	sub_823B0FB8(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,7680
	ctx.r4.s64 = 7680;
	// addi r3,r31,-124
	ctx.r3.s64 = ctx.r31.s64 + -124;
	// bl 0x823b0fb0
	ctx.lr = 0x823907F8;
	sub_823B0FB0(ctx, base);
	// stw r3,-92(r31)
	PPC_STORE_U32(ctx.r31.u32 + -92, ctx.r3.u32);
	// stw r14,-128(r31)
	PPC_STORE_U32(ctx.r31.u32 + -128, ctx.r14.u32);
	// lis r4,1
	ctx.r4.s64 = 65536;
	// stw r29,-132(r31)
	PPC_STORE_U32(ctx.r31.u32 + -132, ctx.r29.u32);
	// addi r3,r31,-88
	ctx.r3.s64 = ctx.r31.s64 + -88;
	// stw r27,-44(r31)
	PPC_STORE_U32(ctx.r31.u32 + -44, ctx.r27.u32);
	// ori r4,r4,16384
	ctx.r4.u64 = ctx.r4.u64 | 16384;
	// bl 0x823b0fb8
	ctx.lr = 0x82390818;
	sub_823B0FB8(ctx, base);
	// lis r4,0
	ctx.r4.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// ori r4,r4,36864
	ctx.r4.u64 = ctx.r4.u64 | 36864;
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// bl 0x823b0fb0
	ctx.lr = 0x8239082C;
	sub_823B0FB0(ctx, base);
	// stw r3,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r3.u32);
	// stw r15,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r15.u32);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// stw r29,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r29.u32);
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// stw r27,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r27.u32);
	// bl 0x823b0fb8
	ctx.lr = 0x82390848;
	sub_823B0FB8(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,18432
	ctx.r4.s64 = 18432;
	// addi r3,r31,152
	ctx.r3.s64 = ctx.r31.s64 + 152;
	// bl 0x823b0fb0
	ctx.lr = 0x82390858;
	sub_823B0FB0(ctx, base);
	// stw r3,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r3.u32);
	// stw r16,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r16.u32);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// stw r29,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r29.u32);
	// addi r3,r31,188
	ctx.r3.s64 = ctx.r31.s64 + 188;
	// stw r17,232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 232, ctx.r17.u32);
	// bl 0x823b0fb8
	ctx.lr = 0x82390874;
	sub_823B0FB8(ctx, base);
	// stw r29,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r29.u32);
	// stw r29,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r29.u32);
	// lis r4,11
	ctx.r4.s64 = 720896;
	// stw r29,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r29.u32);
	// addi r3,r31,280
	ctx.r3.s64 = ctx.r31.s64 + 280;
	// stw r18,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r18.u32);
	// ori r4,r4,16384
	ctx.r4.u64 = ctx.r4.u64 | 16384;
	// bl 0x823b0fb8
	ctx.lr = 0x82390894;
	sub_823B0FB8(ctx, base);
	// lwz r10,20(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r9,24(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// addi r21,r31,604
	ctx.r21.s64 = ctx.r31.s64 + 604;
	// lwz r8,28(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// li r19,18
	ctx.r19.s64 = 18;
	// lwz r7,32(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// lwz r6,36(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// stw r10,604(r31)
	PPC_STORE_U32(ctx.r31.u32 + 604, ctx.r10.u32);
	// stw r9,812(r31)
	PPC_STORE_U32(ctx.r31.u32 + 812, ctx.r9.u32);
	// stw r8,668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 668, ctx.r8.u32);
	// stw r7,876(r31)
	PPC_STORE_U32(ctx.r31.u32 + 876, ctx.r7.u32);
	// stw r6,620(r31)
	PPC_STORE_U32(ctx.r31.u32 + 620, ctx.r6.u32);
	// lwz r5,40(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// lwz r4,68(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// lwz r3,72(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// lwz r11,52(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// stw r20,428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 428, ctx.r20.u32);
	// stw r20,432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 432, ctx.r20.u32);
	// lwz r10,44(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// lwz r9,48(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// lwz r8,56(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// lwz r7,60(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// lwz r6,64(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// lwz r26,76(r30)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// lwz r25,80(r30)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// lwz r24,84(r30)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// lwz r23,88(r30)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// stw r5,828(r31)
	PPC_STORE_U32(ctx.r31.u32 + 828, ctx.r5.u32);
	// stw r10,636(r31)
	PPC_STORE_U32(ctx.r31.u32 + 636, ctx.r10.u32);
	// stw r11,652(r31)
	PPC_STORE_U32(ctx.r31.u32 + 652, ctx.r11.u32);
	// stw r9,844(r31)
	PPC_STORE_U32(ctx.r31.u32 + 844, ctx.r9.u32);
	// stw r8,860(r31)
	PPC_STORE_U32(ctx.r31.u32 + 860, ctx.r8.u32);
	// stw r7,684(r31)
	PPC_STORE_U32(ctx.r31.u32 + 684, ctx.r7.u32);
	// stw r6,700(r31)
	PPC_STORE_U32(ctx.r31.u32 + 700, ctx.r6.u32);
	// stw r4,716(r31)
	PPC_STORE_U32(ctx.r31.u32 + 716, ctx.r4.u32);
	// stw r3,732(r31)
	PPC_STORE_U32(ctx.r31.u32 + 732, ctx.r3.u32);
	// stw r26,748(r31)
	PPC_STORE_U32(ctx.r31.u32 + 748, ctx.r26.u32);
	// stw r25,764(r31)
	PPC_STORE_U32(ctx.r31.u32 + 764, ctx.r25.u32);
	// stw r24,780(r31)
	PPC_STORE_U32(ctx.r31.u32 + 780, ctx.r24.u32);
	// stw r23,796(r31)
	PPC_STORE_U32(ctx.r31.u32 + 796, ctx.r23.u32);
loc_82390934:
	// lis r11,-32199
	ctx.r11.s64 = -2110193664;
	// lis r10,-32199
	ctx.r10.s64 = -2110193664;
	// lis r9,-32199
	ctx.r9.s64 = -2110193664;
	// lis r8,0
	ctx.r8.s64 = 0;
	// mr r7,r21
	ctx.r7.u64 = ctx.r21.u64;
	// ori r8,r8,32768
	ctx.r8.u64 = ctx.r8.u64 | 32768;
	// addi r6,r11,1816
	ctx.r6.s64 = ctx.r11.s64 + 1816;
	// addi r5,r10,1808
	ctx.r5.s64 = ctx.r10.s64 + 1808;
	// addi r4,r9,1648
	ctx.r4.s64 = ctx.r9.s64 + 1648;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x820c56e8
	ctx.lr = 0x82390960;
	sub_820C56E8(ctx, base);
	// stw r3,4(r21)
	PPC_STORE_U32(ctx.r21.u32 + 4, ctx.r3.u32);
	// addic. r19,r19,-1
	ctx.xer.ca = ctx.r19.u32 > 0;
	ctx.r19.s64 = ctx.r19.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// addi r21,r21,16
	ctx.r21.s64 = ctx.r21.s64 + 16;
	// bne 0x82390934
	if (!ctx.cr0.eq) goto loc_82390934;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addis r31,r31,9
	ctx.r31.s64 = ctx.r31.s64 + 589824;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r31,r31,-20992
	ctx.r31.s64 = ctx.r31.s64 + -20992;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bne 0x823907b4
	if (!ctx.cr0.eq) goto loc_823907B4;
	// lis r11,-31771
	ctx.r11.s64 = -2082144256;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r11,-27424
	ctx.r11.s64 = ctx.r11.s64 + -27424;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r31,r11,56
	ctx.r31.s64 = ctx.r11.s64 + 56;
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// lfs f30,12168(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f30.f64 = double(temp.f32);
	// li r30,4
	ctx.r30.s64 = 4;
	// li r24,6
	ctx.r24.s64 = 6;
	// lfs f31,5484(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5484);
	ctx.f31.f64 = double(temp.f32);
	// li r25,-1
	ctx.r25.s64 = -1;
	// addi r26,r11,4520
	ctx.r26.s64 = ctx.r11.s64 + 4520;
loc_823909B8:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,12
	ctx.r4.s64 = 12;
	// addi r3,r31,-32
	ctx.r3.s64 = ctx.r31.s64 + -32;
	// bl 0x823b0fb0
	ctx.lr = 0x823909C8;
	sub_823B0FB0(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// stw r24,-36(r31)
	PPC_STORE_U32(ctx.r31.u32 + -36, ctx.r24.u32);
	// li r4,128
	ctx.r4.s64 = 128;
	// stw r29,-40(r31)
	PPC_STORE_U32(ctx.r31.u32 + -40, ctx.r29.u32);
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// stw r27,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r27.u32);
	// bl 0x823b0fb8
	ctx.lr = 0x823909E4;
	sub_823B0FB8(ctx, base);
	// lwz r10,4(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r3,r31,-56
	ctx.r3.s64 = ctx.r31.s64 + -56;
	// fmr f8,f30
	ctx.fpscr.disableFlushMode();
	ctx.f8.f64 = ctx.f30.f64;
	// stw r25,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r25.u32);
	// fmr f7,f30
	ctx.f7.f64 = ctx.f30.f64;
	// fmr f6,f31
	ctx.f6.f64 = ctx.f31.f64;
	// std r10,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r10.u64);
	// lfd f13,104(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lfd f0,96(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f11,f0
	ctx.f11.f64 = double(ctx.f0.s64);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// fmr f5,f31
	ctx.f5.f64 = ctx.f31.f64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// frsp f3,f11
	ctx.f3.f64 = double(float(ctx.f11.f64));
	// frsp f4,f12
	ctx.f4.f64 = double(float(ctx.f12.f64));
	// bl 0x823bff70
	ctx.lr = 0x82390A30;
	sub_823BFF70(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,108
	ctx.r31.s64 = ctx.r31.s64 + 108;
	// bne 0x823909b8
	if (!ctx.cr0.eq) goto loc_823909B8;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lfd f30,-168(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -168);
	// lfd f31,-160(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x823ddf90
	__restgprlr_14(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82390720) {
	__imp__sub_82390720(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82390A4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82390A4C) {
	__imp__sub_82390A4C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82390A50) {
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
	// lis r11,-32197
	ctx.r11.s64 = -2110062592;
	// addi r3,r11,1384
	ctx.r3.s64 = ctx.r11.s64 + 1384;
	// bl 0x8228c658
	ctx.lr = 0x82390A68;
	sub_8228C658(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82390a84
	if (!ctx.cr6.eq) goto loc_82390A84;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-32032
	ctx.r4.s64 = ctx.r11.s64 + -32032;
	// bl 0x822830e8
	ctx.lr = 0x82390A84;
	sub_822830E8(ctx, base);
loc_82390A84:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82390A50) {
	__imp__sub_82390A50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82390A94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82390A94) {
	__imp__sub_82390A94(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82390A98) {
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
	// bl 0x8228bc50
	ctx.lr = 0x82390AAC;
	sub_8228BC50(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82390ae8
	if (!ctx.cr6.eq) goto loc_82390AE8;
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// addi r31,r11,13352
	ctx.r31.s64 = ctx.r11.s64 + 13352;
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82390ae8
	if (ctx.cr6.eq) goto loc_82390AE8;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82390ae8
	if (!ctx.cr6.eq) goto loc_82390AE8;
	// bl 0x8228b558
	ctx.lr = 0x82390ADC;
	sub_8228B558(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// bl 0x823aee78
	ctx.lr = 0x82390AE8;
	sub_823AEE78(ctx, base);
loc_82390AE8:
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

PPC_WEAK_FUNC(sub_82390A98) {
	__imp__sub_82390A98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82390AFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82390AFC) {
	__imp__sub_82390AFC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82390B00) {
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
	// bl 0x8228bcc0
	ctx.lr = 0x82390B14;
	sub_8228BCC0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82390b5c
	if (ctx.cr6.eq) goto loc_82390B5C;
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// addi r31,r11,13352
	ctx.r31.s64 = ctx.r11.s64 + 13352;
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82390b5c
	if (ctx.cr6.eq) goto loc_82390B5C;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82390b68
	if (!ctx.cr6.eq) goto loc_82390B68;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82390b80
	if (!ctx.cr6.eq) goto loc_82390B80;
	// bl 0x8228b558
	ctx.lr = 0x82390B50;
	sub_8228B558(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// b 0x82390b84
	goto loc_82390B84;
loc_82390B5C:
	// bl 0x823ad840
	ctx.lr = 0x82390B60;
	sub_823AD840(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82390b80
	if (!ctx.cr6.eq) goto loc_82390B80;
loc_82390B68:
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
loc_82390B80:
	// bl 0x823ad808
	ctx.lr = 0x82390B84;
	sub_823AD808(ctx, base);
loc_82390B84:
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

PPC_WEAK_FUNC(sub_82390B00) {
	__imp__sub_82390B00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82390B9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82390B9C) {
	__imp__sub_82390B9C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82390BA0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31799
	ctx.r10.s64 = -2083979264;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,14592(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 14592);
	// lwz r9,5556(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 5556);
	// stw r11,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
	// stw r11,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r11.u32);
	// stw r11,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82390BA0) {
	__imp__sub_82390BA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82390BC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// lis r10,65
	ctx.r10.s64 = 4259840;
	// lis r9,-31799
	ctx.r9.s64 = -2083979264;
	// li r8,-1
	ctx.r8.s64 = -1;
	// addi r7,r9,13536
	ctx.r7.s64 = ctx.r9.s64 + 13536;
	// lwz r11,14592(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14592);
	// lwz r6,5484(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// subfc r11,r10,r5
	ctx.xer.ca = ctx.r5.u32 >= ctx.r10.u32;
	ctx.r11.s64 = ctx.r5.s64 - ctx.r10.s64;
	// subfze r11,r8
	temp.u8 = ~ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca;
	ctx.r11.u64 = ~ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r11,920(r7)
	PPC_STORE_U32(ctx.r7.u32 + 920, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82390BC0) {
	__imp__sub_82390BC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82390BF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// addi r10,r11,13536
	ctx.r10.s64 = ctx.r11.s64 + 13536;
	// lwz r3,920(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 920);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82390BF0) {
	__imp__sub_82390BF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82390C00) {
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
	// addi r31,r11,13352
	ctx.r31.s64 = ctx.r11.s64 + 13352;
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82390c40
	if (ctx.cr6.eq) goto loc_82390C40;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82390c40
	if (ctx.cr6.eq) goto loc_82390C40;
	// bl 0x823ad808
	ctx.lr = 0x82390C34;
	sub_823AD808(ctx, base);
	// bl 0x8228bf48
	ctx.lr = 0x82390C38;
	sub_8228BF48(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
loc_82390C40:
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

PPC_WEAK_FUNC(sub_82390C00) {
	__imp__sub_82390C00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82390C54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82390C54) {
	__imp__sub_82390C54(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82390C58) {
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
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,-19040
	ctx.r3.s64 = ctx.r11.s64 + -19040;
	// bl 0x823b7840
	ctx.lr = 0x82390C74;
	sub_823B7840(ctx, base);
	// lwsync 
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82390C58) {
	__imp__sub_82390C58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82390C88) {
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
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,-19016
	ctx.r3.s64 = ctx.r11.s64 + -19016;
	// bl 0x823b7840
	ctx.lr = 0x82390CA4;
	sub_823B7840(ctx, base);
	// lwsync 
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82390C88) {
	__imp__sub_82390C88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82390CB8) {
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
	// addi r31,r11,13352
	ctx.r31.s64 = ctx.r11.s64 + 13352;
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82390cf8
	if (ctx.cr6.eq) goto loc_82390CF8;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82390cf8
	if (ctx.cr6.eq) goto loc_82390CF8;
	// bl 0x823ad808
	ctx.lr = 0x82390CEC;
	sub_823AD808(ctx, base);
	// bl 0x8228bf48
	ctx.lr = 0x82390CF0;
	sub_8228BF48(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
loc_82390CF8:
	// bl 0x823b7e20
	ctx.lr = 0x82390CFC;
	sub_823B7E20(ctx, base);
	// lis r31,-31799
	ctx.r31.s64 = -2083979264;
	// lis r10,65
	ctx.r10.s64 = 4259840;
	// lis r9,-31799
	ctx.r9.s64 = -2083979264;
	// li r8,-1
	ctx.r8.s64 = -1;
	// addi r7,r9,13536
	ctx.r7.s64 = ctx.r9.s64 + 13536;
	// lwz r11,14592(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14592);
	// lwz r6,5484(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// subfc r11,r10,r5
	ctx.xer.ca = ctx.r5.u32 >= ctx.r10.u32;
	ctx.r11.s64 = ctx.r5.s64 - ctx.r10.s64;
	// subfze r11,r8
	temp.u8 = ~ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca;
	ctx.r11.u64 = ~ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r11,920(r7)
	PPC_STORE_U32(ctx.r7.u32 + 920, ctx.r11.u32);
	// bl 0x823b7d70
	ctx.lr = 0x82390D2C;
	sub_823B7D70(ctx, base);
	// lis r3,-32215
	ctx.r3.s64 = -2111242240;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r3,-19040
	ctx.r3.s64 = ctx.r3.s64 + -19040;
	// bl 0x823b7840
	ctx.lr = 0x82390D3C;
	sub_823B7840(ctx, base);
	// lwsync 
	// lwz r3,14592(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14592);
	// bl 0x8228c948
	ctx.lr = 0x82390D48;
	sub_8228C948(ctx, base);
	// bl 0x8238eba8
	ctx.lr = 0x82390D4C;
	sub_8238EBA8(ctx, base);
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

PPC_WEAK_FUNC(sub_82390CB8) {
	__imp__sub_82390CB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82390D60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// lwz r11,12756(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12756);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82390d7c
	if (!ctx.cr6.eq) goto loc_82390D7C;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82390D7C:
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// addi r10,r11,13352
	ctx.r10.s64 = ctx.r11.s64 + 13352;
	// lbz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 12);
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r3,r8,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82390D60) {
	__imp__sub_82390D60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82390D94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82390D94) {
	__imp__sub_82390D94(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82390D98) {
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
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// lwz r11,12756(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12756);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82390dc0
	if (!ctx.cr6.eq) goto loc_82390DC0;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82390dd4
	goto loc_82390DD4;
loc_82390DC0:
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// addi r10,r11,13352
	ctx.r10.s64 = ctx.r11.s64 + 13352;
	// lbz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 12);
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r11,r8,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
loc_82390DD4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82390e08
	if (!ctx.cr6.eq) goto loc_82390E08;
	// bl 0x8228bcc0
	ctx.lr = 0x82390DE4;
	sub_8228BCC0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82390df4
	if (ctx.cr6.eq) goto loc_82390DF4;
	// bl 0x82390a98
	ctx.lr = 0x82390DF4;
	sub_82390A98(ctx, base);
loc_82390DF4:
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
loc_82390E08:
	// bl 0x82390cb8
	ctx.lr = 0x82390E0C;
	sub_82390CB8(ctx, base);
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

PPC_WEAK_FUNC(sub_82390D98) {
	__imp__sub_82390D98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82390E20) {
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
	// lis r30,-31799
	ctx.r30.s64 = -2083979264;
	// rlwinm r11,r3,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,14592(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 14592);
	// stw r3,5952(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5952, ctx.r3.u32);
	// beq cr6,0x82390e50
	if (ctx.cr6.eq) goto loc_82390E50;
	// bl 0x8238edc0
	ctx.lr = 0x82390E50;
	sub_8238EDC0(ctx, base);
loc_82390E50:
	// bl 0x82390d98
	ctx.lr = 0x82390E54;
	sub_82390D98(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82390f08
	if (!ctx.cr6.eq) goto loc_82390F08;
	// bl 0x8228bcc0
	ctx.lr = 0x82390E64;
	sub_8228BCC0(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// addi r31,r11,13352
	ctx.r31.s64 = ctx.r11.s64 + 13352;
	// beq cr6,0x82390e8c
	if (ctx.cr6.eq) goto loc_82390E8C;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
loc_82390E8C:
	// bl 0x8228bcc0
	ctx.lr = 0x82390E90;
	sub_8228BCC0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82390ea0
	if (ctx.cr6.eq) goto loc_82390EA0;
	// bl 0x823b7e20
	ctx.lr = 0x82390EA0;
	sub_823B7E20(ctx, base);
loc_82390EA0:
	// lwz r3,14592(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 14592);
	// lis r10,-31799
	ctx.r10.s64 = -2083979264;
	// lis r11,65
	ctx.r11.s64 = 4259840;
	// li r9,-1
	ctx.r9.s64 = -1;
	// addi r8,r10,13536
	ctx.r8.s64 = ctx.r10.s64 + 13536;
	// lwz r7,5484(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5484);
	// lwz r6,0(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// subfc r11,r11,r6
	ctx.xer.ca = ctx.r6.u32 >= ctx.r11.u32;
	ctx.r11.s64 = ctx.r6.s64 - ctx.r11.s64;
	// subfze r11,r9
	temp.u8 = ~ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca;
	ctx.r11.u64 = ~ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r11,920(r8)
	PPC_STORE_U32(ctx.r8.u32 + 920, ctx.r11.u32);
	// bl 0x823aede0
	ctx.lr = 0x82390ECC;
	sub_823AEDE0(ctx, base);
	// bl 0x823b0468
	ctx.lr = 0x82390ED0;
	sub_823B0468(ctx, base);
	// bl 0x823ad698
	ctx.lr = 0x82390ED4;
	sub_823AD698(ctx, base);
	// lwz r11,14592(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 14592);
	// lwz r3,5952(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5952);
	// bl 0x823ad468
	ctx.lr = 0x82390EE0;
	sub_823AD468(ctx, base);
	// bl 0x8238eba8
	ctx.lr = 0x82390EE4;
	sub_8238EBA8(ctx, base);
	// bl 0x8228bcc0
	ctx.lr = 0x82390EE8;
	sub_8228BCC0(ctx, base);
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82390f08
	if (ctx.cr6.eq) goto loc_82390F08;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
loc_82390F08:
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

PPC_WEAK_FUNC(sub_82390E20) {
	__imp__sub_82390E20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82390F20) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31799
	ctx.r10.s64 = -2083979264;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,13536
	ctx.r9.s64 = ctx.r10.s64 + 13536;
	// stw r11,896(r9)
	PPC_STORE_U32(ctx.r9.u32 + 896, ctx.r11.u32);
	// b 0x8238eba8
	sub_8238EBA8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82390F20) {
	__imp__sub_82390F20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82390F34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82390F34) {
	__imp__sub_82390F34(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82390F38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82390F40;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// lwz r31,14592(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14592);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x823910c4
	if (ctx.cr6.eq) goto loc_823910C4;
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// addi r30,r11,13352
	ctx.r30.s64 = ctx.r11.s64 + 13352;
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82390f90
	if (!ctx.cr6.eq) goto loc_82390F90;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r29,r11,-32000
	ctx.r29.s64 = ctx.r11.s64 + -32000;
loc_82390F70:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82280900
	ctx.lr = 0x82390F7C;
	sub_82280900(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8228b0d8
	ctx.lr = 0x82390F84;
	sub_8228B0D8(ctx, base);
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82390f70
	if (ctx.cr6.eq) goto loc_82390F70;
loc_82390F90:
	// lwsync 
	// lwz r11,5560(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5560);
	// lwz r10,5568(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5568);
	// li r4,6
	ctx.r4.s64 = 6;
	// mulli r11,r11,8496
	ctx.r11.s64 = ctx.r11.s64 * 8496;
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r30,3816
	ctx.r5.s64 = ctx.r30.s64 + 3816;
	// bl 0x823cbea8
	ctx.lr = 0x82390FB4;
	sub_823CBEA8(ctx, base);
	// addi r5,r30,4304
	ctx.r5.s64 = ctx.r30.s64 + 4304;
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823cbea8
	ctx.lr = 0x82390FC4;
	sub_823CBEA8(ctx, base);
	// addi r5,r30,5280
	ctx.r5.s64 = ctx.r30.s64 + 5280;
	// li r4,9
	ctx.r4.s64 = 9;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823cbea8
	ctx.lr = 0x82390FD4;
	sub_823CBEA8(ctx, base);
	// addi r5,r30,5768
	ctx.r5.s64 = ctx.r30.s64 + 5768;
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823cbea8
	ctx.lr = 0x82390FE4;
	sub_823CBEA8(ctx, base);
	// addi r5,r30,6256
	ctx.r5.s64 = ctx.r30.s64 + 6256;
	// li r4,11
	ctx.r4.s64 = 11;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823cbea8
	ctx.lr = 0x82390FF4;
	sub_823CBEA8(ctx, base);
	// addi r5,r30,6744
	ctx.r5.s64 = ctx.r30.s64 + 6744;
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823cbea8
	ctx.lr = 0x82391004;
	sub_823CBEA8(ctx, base);
	// addi r5,r30,3328
	ctx.r5.s64 = ctx.r30.s64 + 3328;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823cbea8
	ctx.lr = 0x82391014;
	sub_823CBEA8(ctx, base);
	// addi r5,r31,10616
	ctx.r5.s64 = ctx.r31.s64 + 10616;
	// li r4,13
	ctx.r4.s64 = 13;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823cbea8
	ctx.lr = 0x82391024;
	sub_823CBEA8(ctx, base);
	// addi r5,r31,10992
	ctx.r5.s64 = ctx.r31.s64 + 10992;
	// li r4,14
	ctx.r4.s64 = 14;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823cbea8
	ctx.lr = 0x82391034;
	sub_823CBEA8(ctx, base);
	// addi r5,r31,11368
	ctx.r5.s64 = ctx.r31.s64 + 11368;
	// li r4,15
	ctx.r4.s64 = 15;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823cbea8
	ctx.lr = 0x82391044;
	sub_823CBEA8(ctx, base);
	// addi r5,r31,11744
	ctx.r5.s64 = ctx.r31.s64 + 11744;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823cbea8
	ctx.lr = 0x82391054;
	sub_823CBEA8(ctx, base);
	// addi r5,r31,12120
	ctx.r5.s64 = ctx.r31.s64 + 12120;
	// li r4,17
	ctx.r4.s64 = 17;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823cbea8
	ctx.lr = 0x82391064;
	sub_823CBEA8(ctx, base);
	// addi r5,r30,888
	ctx.r5.s64 = ctx.r30.s64 + 888;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823cbea8
	ctx.lr = 0x82391074;
	sub_823CBEA8(ctx, base);
	// addi r5,r30,1376
	ctx.r5.s64 = ctx.r30.s64 + 1376;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823cbea8
	ctx.lr = 0x82391084;
	sub_823CBEA8(ctx, base);
	// addi r5,r30,1864
	ctx.r5.s64 = ctx.r30.s64 + 1864;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823cbea8
	ctx.lr = 0x82391094;
	sub_823CBEA8(ctx, base);
	// addi r5,r30,2352
	ctx.r5.s64 = ctx.r30.s64 + 2352;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823cbea8
	ctx.lr = 0x823910A4;
	sub_823CBEA8(ctx, base);
	// addi r5,r31,12500
	ctx.r5.s64 = ctx.r31.s64 + 12500;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823cbea8
	ctx.lr = 0x823910B4;
	sub_823CBEA8(ctx, base);
	// addi r5,r30,4792
	ctx.r5.s64 = ctx.r30.s64 + 4792;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823cbea8
	ctx.lr = 0x823910C4;
	sub_823CBEA8(ctx, base);
loc_823910C4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82390F38) {
	__imp__sub_82390F38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823910CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823910CC) {
	__imp__sub_823910CC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823910D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// lwz r11,-24832(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -24832);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823910e8
	if (ctx.cr6.eq) goto loc_823910E8;
	// twi 31,r0,22
loc_823910E8:
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// cmpwi cr6,r3,8
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 8, ctx.xer);
	// addi r10,r11,14640
	ctx.r10.s64 = ctx.r11.s64 + 14640;
	// lwz r11,14640(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14640);
	// lwz r10,-8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// blt cr6,0x82391114
	if (ctx.cr6.lt) goto loc_82391114;
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// addi r10,r10,-8192
	ctx.r10.s64 = ctx.r10.s64 + -8192;
loc_82391114:
	// cmpw cr6,r4,r10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x82391130
	if (!ctx.cr6.gt) goto loc_82391130;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_82391130:
	// li r10,8
	ctx.r10.s64 = 8;
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r6,r3,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// subfc r5,r10,r3
	ctx.xer.ca = ctx.r3.u32 >= ctx.r10.u32;
	ctx.r5.s64 = ctx.r3.s64 - ctx.r10.s64;
	// rlwinm r31,r10,1,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// add r10,r7,r9
	ctx.r10.u64 = ctx.r7.u64 + ctx.r9.u64;
	// subfe r7,r6,r31
	temp.u8 = (~ctx.r6.u32 + ctx.r31.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r31.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r6.u64 + ctx.r31.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// add r6,r9,r4
	ctx.r6.u64 = ctx.r9.u64 + ctx.r4.u64;
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// and r9,r7,r4
	ctx.r9.u64 = ctx.r7.u64 & ctx.r4.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// stw r6,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
	// add r3,r8,r9
	ctx.r3.u64 = ctx.r8.u64 + ctx.r9.u64;
	// stw r3,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r3.u32);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// sth r5,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r5.u16);
	// sth r4,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, ctx.r4.u16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823910D0) {
	__imp__sub_823910D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82391180) {
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
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// lwz r11,14640(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14640);
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// subf r6,r10,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r10.s64;
	// add r31,r10,r9
	ctx.r31.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r6,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
	// lhz r3,0(r7)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r7.u32 + 0);
	// lhz r11,2(r7)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r7.u32 + 2);
	// add r4,r11,r8
	ctx.r4.u64 = ctx.r11.u64 + ctx.r8.u64;
	// bl 0x823910d0
	ctx.lr = 0x823911C4;
	sub_823910D0(ctx, base);
	// subfic r5,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r5.s64 = 0 - ctx.r3.s64;
	// subfe r3,r4,r4
	temp.u8 = (~ctx.r4.u32 + ctx.r4.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r4.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r4.u64 + ctx.r4.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r3,r31
	ctx.r3.u64 = ctx.r3.u64 & ctx.r31.u64;
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

PPC_WEAK_FUNC(sub_82391180) {
	__imp__sub_82391180(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823911E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823911E4) {
	__imp__sub_823911E4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823911E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// lis r10,-31799
	ctx.r10.s64 = -2083979264;
	// lwz r11,14592(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14592);
	// lwz r10,14640(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 14640);
	// lwz r8,5560(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5560);
	// lwz r9,5568(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5568);
	// mulli r8,r8,8496
	ctx.r8.s64 = ctx.r8.s64 * 8496;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// add r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 + ctx.r9.u64;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r6,756(r7)
	PPC_STORE_U32(ctx.r7.u32 + 756, ctx.r6.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823911E8) {
	__imp__sub_823911E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239121C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8239121C) {
	__imp__sub_8239121C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82391220) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// lis r10,-31799
	ctx.r10.s64 = -2083979264;
	// lwz r11,14592(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14592);
	// lwz r10,14640(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 14640);
	// lwz r8,5560(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5560);
	// lwz r9,5568(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5568);
	// mulli r8,r8,8496
	ctx.r8.s64 = ctx.r8.s64 * 8496;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// add r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 + ctx.r9.u64;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r6,756(r7)
	PPC_STORE_U32(ctx.r7.u32 + 756, ctx.r6.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82391220) {
	__imp__sub_82391220(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82391254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82391254) {
	__imp__sub_82391254(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82391258) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,14592(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14592);
	// lwz r8,5560(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5560);
	// lwz r10,5568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5568);
	// mulli r11,r8,8496
	ctx.r11.s64 = ctx.r8.s64 * 8496;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r9,756(r7)
	PPC_STORE_U32(ctx.r7.u32 + 756, ctx.r9.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82391258) {
	__imp__sub_82391258(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239127C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8239127C) {
	__imp__sub_8239127C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82391280) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// lis r10,-31799
	ctx.r10.s64 = -2083979264;
	// lwz r11,14640(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14640);
	// lwz r10,14592(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 14592);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r9,5572(r10)
	PPC_STORE_U32(ctx.r10.u32 + 5572, ctx.r9.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82391280) {
	__imp__sub_82391280(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823912A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823912A4) {
	__imp__sub_823912A4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823912A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// lwz r11,-24832(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -24832);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823912bc
	if (ctx.cr6.eq) goto loc_823912BC;
	// twi 31,r0,22
loc_823912BC:
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// addi r10,r11,14640
	ctx.r10.s64 = ctx.r11.s64 + 14640;
	// lwz r11,14640(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14640);
	// lwz r9,-8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	// cmpwi cr6,r9,4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4, ctx.xer);
	// bge cr6,0x823912e8
	if (!ctx.cr6.lt) goto loc_823912E8;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// blr 
	return;
loc_823912E8:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r7,r10,4
	ctx.r7.s64 = ctx.r10.s64 + 4;
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// li r6,0
	ctx.r6.s64 = 0;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r7,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// addi r5,r8,4
	ctx.r5.s64 = ctx.r8.s64 + 4;
	// li r4,4
	ctx.r4.s64 = 4;
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// stw r5,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r5.u32);
	// sth r6,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r6.u16);
	// sth r4,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, ctx.r4.u16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823912A8) {
	__imp__sub_823912A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239131C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8239131C) {
	__imp__sub_8239131C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82391320) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x82391328;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x8228bcc0
	ctx.lr = 0x82391330;
	sub_8228BCC0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82391370
	if (ctx.cr6.eq) goto loc_82391370;
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// addi r31,r11,13352
	ctx.r31.s64 = ctx.r11.s64 + 13352;
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82391370
	if (ctx.cr6.eq) goto loc_82391370;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82391370
	if (ctx.cr6.eq) goto loc_82391370;
	// bl 0x823ad808
	ctx.lr = 0x82391364;
	sub_823AD808(ctx, base);
	// bl 0x8228bf48
	ctx.lr = 0x82391368;
	sub_8228BF48(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stb r30,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r30.u8);
loc_82391370:
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,-19016
	ctx.r3.s64 = ctx.r11.s64 + -19016;
	// bl 0x823b7840
	ctx.lr = 0x82391380;
	sub_823B7840(ctx, base);
	// lwsync 
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// addi r27,r11,13536
	ctx.r27.s64 = ctx.r11.s64 + 13536;
	// lwz r6,896(r27)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r27.u32 + 896);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x823913a0
	if (!ctx.cr6.eq) goto loc_823913A0;
	// bl 0x820e4eb8
	ctx.lr = 0x8239139C;
	sub_820E4EB8(ctx, base);
	// lwz r6,896(r27)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r27.u32 + 896);
loc_823913A0:
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// lwz r8,364(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 364);
	// lis r10,-31799
	ctx.r10.s64 = -2083979264;
	// addi r29,r11,-8688
	ctx.r29.s64 = ctx.r11.s64 + -8688;
	// addi r11,r10,14720
	ctx.r11.s64 = ctx.r10.s64 + 14720;
	// lis r9,8
	ctx.r9.s64 = 524288;
	// lis r7,-31799
	ctx.r7.s64 = -2083979264;
	// ori r5,r9,44544
	ctx.r5.u64 = ctx.r9.u64 | 44544;
	// lwz r9,96(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 96);
	// addi r28,r7,14640
	ctx.r28.s64 = ctx.r7.s64 + 14640;
	// lwz r10,-84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -84);
	// lis r31,-31799
	ctx.r31.s64 = -2083979264;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r4,r10,-1
	ctx.r4.s64 = ctx.r10.s64 + -1;
	// srawi r3,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r9.s32 >> 1;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// addze r4,r3
	temp.s64 = ctx.r3.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r3.u32;
	ctx.r4.s64 = temp.s64;
	// mullw r7,r10,r5
	ctx.r7.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r5.s32);
	// stw r10,-84(r11)
	PPC_STORE_U32(ctx.r11.u32 + -84, ctx.r10.u32);
	// addi r10,r8,1
	ctx.r10.s64 = ctx.r8.s64 + 1;
	// rlwinm r3,r4,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// stw r10,364(r27)
	PPC_STORE_U32(ctx.r27.u32 + 364, ctx.r10.u32);
	// subf r9,r3,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r3.s64;
	// lis r10,0
	ctx.r10.s64 = 0;
	// stw r11,14592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 14592, ctx.r11.u32);
	// stw r9,96(r29)
	PPC_STORE_U32(ctx.r29.u32 + 96, ctx.r9.u32);
	// lis r9,-31781
	ctx.r9.s64 = -2082799616;
	// ori r7,r10,33984
	ctx.r7.u64 = ctx.r10.u64 | 33984;
	// stw r6,5564(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5564, ctx.r6.u32);
	// addi r8,r9,-27264
	ctx.r8.s64 = ctx.r9.s64 + -27264;
	// lwz r10,14592(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14592);
	// addi r9,r28,-40
	ctx.r9.s64 = ctx.r28.s64 + -40;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r6,r11,r8
	ctx.r6.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stw r6,5568(r10)
	PPC_STORE_U32(ctx.r10.u32 + 5568, ctx.r6.u32);
	// lwz r10,14592(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14592);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r5,5556(r10)
	PPC_STORE_U32(ctx.r10.u32 + 5556, ctx.r5.u32);
	// lwz r11,896(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 896);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82391458
	if (!ctx.cr6.eq) goto loc_82391458;
	// bl 0x823b9170
	ctx.lr = 0x82391458;
	sub_823B9170(ctx, base);
loc_82391458:
	// lwz r11,96(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 96);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r10,14592(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14592);
	// mulli r11,r11,44
	ctx.r11.s64 = ctx.r11.s64 * 44;
	// add r8,r11,r29
	ctx.r8.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stw r8,5484(r10)
	PPC_STORE_U32(ctx.r10.u32 + 5484, ctx.r8.u32);
	// lwz r11,14592(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14592);
	// lwz r7,5484(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	// lwz r10,40(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 40);
	// stw r10,88(r29)
	PPC_STORE_U32(ctx.r29.u32 + 88, ctx.r10.u32);
	// lwz r6,5484(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	// stw r30,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r30.u32);
	// lwz r11,14592(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14592);
	// lwz r10,5556(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5556);
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// stw r30,5396(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5396, ctx.r30.u32);
	// lwz r11,14592(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14592);
	// stw r30,5400(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5400, ctx.r30.u32);
	// lwz r11,14592(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14592);
	// stw r30,5404(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5404, ctx.r30.u32);
	// lwz r11,14592(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14592);
	// stw r30,5440(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5440, ctx.r30.u32);
	// lwz r11,14592(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14592);
	// stw r30,5444(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5444, ctx.r30.u32);
	// lwz r11,14592(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14592);
	// stw r9,5448(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5448, ctx.r9.u32);
	// lwz r11,14592(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14592);
	// stw r30,5468(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5468, ctx.r30.u32);
	// lwz r11,14592(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14592);
	// stw r30,5452(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5452, ctx.r30.u32);
	// lwz r11,14592(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14592);
	// stw r30,5456(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5456, ctx.r30.u32);
	// lwz r11,14592(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14592);
	// stw r30,5460(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5460, ctx.r30.u32);
	// lwz r11,14592(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14592);
	// stw r30,5464(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5464, ctx.r30.u32);
	// lwz r11,14592(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14592);
	// addi r3,r11,4928
	ctx.r3.s64 = ctx.r11.s64 + 4928;
	// bl 0x823bfe48
	ctx.lr = 0x823914F4;
	sub_823BFE48(ctx, base);
	// lwz r11,14592(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14592);
	// addi r3,r11,5020
	ctx.r3.s64 = ctx.r11.s64 + 5020;
	// bl 0x823bfe48
	ctx.lr = 0x82391500;
	sub_823BFE48(ctx, base);
	// lwz r11,14592(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14592);
	// stw r30,5472(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5472, ctx.r30.u32);
	// lwz r11,14592(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14592);
	// addi r3,r11,5112
	ctx.r3.s64 = ctx.r11.s64 + 5112;
	// bl 0x823bfe48
	ctx.lr = 0x82391514;
	sub_823BFE48(ctx, base);
	// lwz r11,14592(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14592);
	// stw r30,5476(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5476, ctx.r30.u32);
	// lwz r11,14592(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14592);
	// addi r3,r11,5204
	ctx.r3.s64 = ctx.r11.s64 + 5204;
	// bl 0x823bfe48
	ctx.lr = 0x82391528;
	sub_823BFE48(ctx, base);
	// lwz r11,14592(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14592);
	// stw r30,5480(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5480, ctx.r30.u32);
	// lwz r11,14592(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14592);
	// addi r3,r11,5296
	ctx.r3.s64 = ctx.r11.s64 + 5296;
	// bl 0x823bfe48
	ctx.lr = 0x8239153C;
	sub_823BFE48(ctx, base);
	// li r11,9
	ctx.r11.s64 = 9;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lwz r11,14592(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14592);
	// stw r30,5496(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5496, ctx.r30.u32);
	// lwz r11,14592(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14592);
	// stw r30,5572(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5572, ctx.r30.u32);
	// lwz r11,14592(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14592);
	// addi r11,r11,5584
	ctx.r11.s64 = ctx.r11.s64 + 5584;
loc_82391560:
	// stdu r10,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r10.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x82391560
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82391560;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82391320) {
	__imp__sub_82391320(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82391570) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// lwz r11,14592(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14592);
	// lwz r10,5496(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5496);
	// mulli r9,r10,336
	ctx.r9.s64 = ctx.r10.s64 * 336;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r3,r9,3584
	ctx.r3.s64 = ctx.r9.s64 + 3584;
	// stw r10,5496(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5496, ctx.r10.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82391570) {
	__imp__sub_82391570(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82391594) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82391594) {
	__imp__sub_82391594(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82391598) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// addi r10,r11,4608
	ctx.r10.s64 = ctx.r11.s64 + 4608;
	// lwz r3,8356(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8356);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82391598) {
	__imp__sub_82391598(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823915B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x823915B8;
	__savegprlr_29(ctx, base);
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x823de018
	ctx.lr = 0x823915C0;
	__savefpr_24(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,268(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 268);
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// fmr f29,f3
	ctx.f29.f64 = ctx.f3.f64;
	// addi r29,r11,4608
	ctx.r29.s64 = ctx.r11.s64 + 4608;
	// fmr f28,f4
	ctx.f28.f64 = ctx.f4.f64;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// fmr f27,f5
	ctx.f27.f64 = ctx.f5.f64;
	// fmr f26,f6
	ctx.f26.f64 = ctx.f6.f64;
	// fmr f25,f7
	ctx.f25.f64 = ctx.f7.f64;
	// fmr f24,f8
	ctx.f24.f64 = ctx.f8.f64;
	// bne cr6,0x82391600
	if (!ctx.cr6.eq) goto loc_82391600;
	// lwz r31,8356(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8356);
loc_82391600:
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82391624
	if (!ctx.cr6.eq) goto loc_82391624;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x82391628
	if (ctx.cr6.eq) goto loc_82391628;
loc_82391624:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82391628:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8239165c
	if (ctx.cr6.eq) goto loc_8239165C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8238bd18
	ctx.lr = 0x8239163C;
	sub_8238BD18(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8239165c
	if (!ctx.cr6.eq) goto loc_8239165C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8238bdd0
	ctx.lr = 0x82391650;
	sub_8238BDD0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r4,r11,-31848
	ctx.r4.s64 = ctx.r11.s64 + -31848;
	// b 0x8239167c
	goto loc_8239167C;
loc_8239165C:
	// lbz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 60);
	// rlwinm r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8239168c
	if (ctx.cr6.eq) goto loc_8239168C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8238bdd0
	ctx.lr = 0x82391674;
	sub_8238BDD0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r4,r11,-31968
	ctx.r4.s64 = ctx.r11.s64 + -31968;
loc_8239167C:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82280c30
	ctx.lr = 0x82391688;
	sub_82280C30(ctx, base);
	// lwz r31,8356(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8356);
loc_8239168C:
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// lwz r11,-24832(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -24832);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823916a0
	if (ctx.cr6.eq) goto loc_823916A0;
	// twi 31,r0,22
loc_823916A0:
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// addi r9,r11,14640
	ctx.r9.s64 = ctx.r11.s64 + 14640;
	// lwz r10,14640(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14640);
	// lwz r9,-8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + -8);
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// subf r8,r11,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r11.s64;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// addi r7,r9,-8192
	ctx.r7.s64 = ctx.r9.s64 + -8192;
	// cmpwi cr6,r7,44
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 44, ctx.xer);
	// bge cr6,0x823916e4
	if (!ctx.cr6.lt) goto loc_823916E4;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x823de064
	ctx.lr = 0x823916E0;
	__restfpr_24(ctx, base);
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_823916E4:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r8,r11,44
	ctx.r8.s64 = ctx.r11.s64 + 44;
	// li r7,8
	ctx.r7.s64 = 8;
	// lwz r3,260(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// li r6,44
	ctx.r6.s64 = 44;
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// addi r4,r11,40
	ctx.r4.s64 = ctx.r11.s64 + 40;
	// sth r7,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r7.u16);
	// sth r6,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r6.u16);
	// stfs f31,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f30,12(r11)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stw r31,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
	// stfs f29,16(r11)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// stfs f28,20(r11)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// stfs f27,24(r11)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// stfs f26,28(r11)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// stfs f25,32(r11)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// stfs f24,36(r11)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// bl 0x8238fea8
	ctx.lr = 0x82391738;
	sub_8238FEA8(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x823de064
	ctx.lr = 0x82391744;
	__restfpr_24(ctx, base);
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823915B0) {
	__imp__sub_823915B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82391748) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82391750;
	__savegprlr_29(ctx, base);
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x823de018
	ctx.lr = 0x82391758;
	__savefpr_24(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,268(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 268);
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// fmr f29,f3
	ctx.f29.f64 = ctx.f3.f64;
	// addi r29,r11,4608
	ctx.r29.s64 = ctx.r11.s64 + 4608;
	// fmr f28,f4
	ctx.f28.f64 = ctx.f4.f64;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// fmr f27,f5
	ctx.f27.f64 = ctx.f5.f64;
	// fmr f26,f6
	ctx.f26.f64 = ctx.f6.f64;
	// fmr f25,f7
	ctx.f25.f64 = ctx.f7.f64;
	// fmr f24,f8
	ctx.f24.f64 = ctx.f8.f64;
	// bne cr6,0x82391798
	if (!ctx.cr6.eq) goto loc_82391798;
	// lwz r31,8356(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8356);
loc_82391798:
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x823917bc
	if (!ctx.cr6.eq) goto loc_823917BC;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x823917c0
	if (ctx.cr6.eq) goto loc_823917C0;
loc_823917BC:
	// li r11,1
	ctx.r11.s64 = 1;
loc_823917C0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823917f4
	if (ctx.cr6.eq) goto loc_823917F4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8238bd18
	ctx.lr = 0x823917D4;
	sub_8238BD18(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823917f4
	if (!ctx.cr6.eq) goto loc_823917F4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8238bdd0
	ctx.lr = 0x823917E8;
	sub_8238BDD0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r4,r11,-31624
	ctx.r4.s64 = ctx.r11.s64 + -31624;
	// b 0x82391814
	goto loc_82391814;
loc_823917F4:
	// lbz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 60);
	// rlwinm r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82391824
	if (ctx.cr6.eq) goto loc_82391824;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8238bdd0
	ctx.lr = 0x8239180C;
	sub_8238BDD0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r4,r11,-31752
	ctx.r4.s64 = ctx.r11.s64 + -31752;
loc_82391814:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82280c30
	ctx.lr = 0x82391820;
	sub_82280C30(ctx, base);
	// lwz r31,8356(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8356);
loc_82391824:
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// lwz r11,-24832(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -24832);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82391838
	if (ctx.cr6.eq) goto loc_82391838;
	// twi 31,r0,22
loc_82391838:
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// addi r9,r11,14640
	ctx.r9.s64 = ctx.r11.s64 + 14640;
	// lwz r10,14640(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14640);
	// lwz r9,-8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + -8);
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// subf r8,r11,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r11.s64;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// addi r7,r9,-8192
	ctx.r7.s64 = ctx.r9.s64 + -8192;
	// cmpwi cr6,r7,44
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 44, ctx.xer);
	// bge cr6,0x8239187c
	if (!ctx.cr6.lt) goto loc_8239187C;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x823de064
	ctx.lr = 0x82391878;
	__restfpr_24(ctx, base);
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_8239187C:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r8,r11,44
	ctx.r8.s64 = ctx.r11.s64 + 44;
	// li r7,9
	ctx.r7.s64 = 9;
	// lwz r3,260(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// li r6,44
	ctx.r6.s64 = 44;
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// addi r4,r11,40
	ctx.r4.s64 = ctx.r11.s64 + 40;
	// sth r7,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r7.u16);
	// sth r6,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r6.u16);
	// stfs f31,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f30,12(r11)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stw r31,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
	// stfs f29,16(r11)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// stfs f28,20(r11)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// stfs f27,24(r11)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// stfs f26,28(r11)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// stfs f25,32(r11)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// stfs f24,36(r11)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// bl 0x8238fea8
	ctx.lr = 0x823918D0;
	sub_8238FEA8(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x823de064
	ctx.lr = 0x823918DC;
	__restfpr_24(ctx, base);
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82391748) {
	__imp__sub_82391748(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823918E0) {
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
	// fmr f31,f9
	ctx.f31.f64 = ctx.f9.f64;
	// lwz r11,-24832(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -24832);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8239190c
	if (ctx.cr6.eq) goto loc_8239190C;
	// twi 31,r0,22
loc_8239190C:
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// addi r10,r11,14640
	ctx.r10.s64 = ctx.r11.s64 + 14640;
	// lwz r11,14640(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14640);
	// lwz r9,-8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// subf r8,r10,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r10.s64;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// addi r7,r9,-8192
	ctx.r7.s64 = ctx.r9.s64 + -8192;
	// cmpwi cr6,r7,48
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 48, ctx.xer);
	// bge cr6,0x82391944
	if (!ctx.cr6.lt) goto loc_82391944;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// b 0x823919bc
	goto loc_823919BC;
loc_82391944:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r7,r10,48
	ctx.r7.s64 = ctx.r10.s64 + 48;
	// lwz r8,212(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// li r6,10
	ctx.r6.s64 = 10;
	// add r31,r9,r10
	ctx.r31.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r7,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// li r5,48
	ctx.r5.s64 = 48;
	// stw r31,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r31.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// sthx r6,r9,r10
	PPC_STORE_U16(ctx.r9.u32 + ctx.r10.u32, ctx.r6.u16);
	// sth r5,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r5.u16);
	// bne cr6,0x82391980
	if (!ctx.cr6.eq) goto loc_82391980;
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// addi r10,r11,4608
	ctx.r10.s64 = ctx.r11.s64 + 4608;
	// lwz r8,8356(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8356);
loc_82391980:
	// stfs f1,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
	// stfs f2,12(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// addi r4,r31,40
	ctx.r4.s64 = ctx.r31.s64 + 40;
	// stfs f3,16(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// lwz r3,204(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// stfs f4,20(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// stfs f5,24(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// stfs f6,28(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// stfs f7,32(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// stfs f8,36(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// bl 0x8238fea8
	ctx.lr = 0x823919B0;
	sub_8238FEA8(ctx, base);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x822d77c0
	ctx.lr = 0x823919B8;
	sub_822D77C0(ctx, base);
	// stfs f1,44(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
loc_823919BC:
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

PPC_WEAK_FUNC(sub_823918E0) {
	__imp__sub_823918E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823919D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823919D4) {
	__imp__sub_823919D4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823919D8) {
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
	// fmr f31,f13
	ctx.f31.f64 = ctx.f13.f64;
	// lwz r11,-24832(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -24832);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82391a04
	if (ctx.cr6.eq) goto loc_82391A04;
	// twi 31,r0,22
loc_82391A04:
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// addi r10,r11,14640
	ctx.r10.s64 = ctx.r11.s64 + 14640;
	// lwz r11,14640(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14640);
	// lwz r9,-8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// subf r8,r10,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r10.s64;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// addi r7,r9,-8192
	ctx.r7.s64 = ctx.r9.s64 + -8192;
	// cmpwi cr6,r7,64
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 64, ctx.xer);
	// bge cr6,0x82391a3c
	if (!ctx.cr6.lt) goto loc_82391A3C;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// b 0x82391ac4
	goto loc_82391AC4;
loc_82391A3C:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r7,r10,64
	ctx.r7.s64 = ctx.r10.s64 + 64;
	// lwz r8,244(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// li r6,11
	ctx.r6.s64 = 11;
	// add r31,r9,r10
	ctx.r31.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r7,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// li r5,64
	ctx.r5.s64 = 64;
	// stw r31,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r31.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// sthx r6,r9,r10
	PPC_STORE_U16(ctx.r9.u32 + ctx.r10.u32, ctx.r6.u16);
	// sth r5,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r5.u16);
	// bne cr6,0x82391a78
	if (!ctx.cr6.eq) goto loc_82391A78;
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// addi r10,r11,4608
	ctx.r10.s64 = ctx.r11.s64 + 4608;
	// lwz r8,8356(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8356);
loc_82391A78:
	// stfs f1,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
	// stfs f2,12(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// addi r4,r31,56
	ctx.r4.s64 = ctx.r31.s64 + 56;
	// stfs f3,16(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// lwz r3,236(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// stfs f4,20(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// stfs f5,24(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// stfs f6,28(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// stfs f7,32(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// stfs f8,36(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// stfs f9,40(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// stfs f10,44(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// stfs f11,48(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// stfs f12,52(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// bl 0x8238fea8
	ctx.lr = 0x82391AB8;
	sub_8238FEA8(ctx, base);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x822d77c0
	ctx.lr = 0x82391AC0;
	sub_822D77C0(ctx, base);
	// stfs f1,60(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
loc_82391AC4:
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

PPC_WEAK_FUNC(sub_823919D8) {
	__imp__sub_823919D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82391ADC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82391ADC) {
	__imp__sub_82391ADC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82391AE0) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x82391AE8;
	__savegprlr_27(ctx, base);
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// lwz r11,-24832(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -24832);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82391afc
	if (ctx.cr6.eq) goto loc_82391AFC;
	// twi 31,r0,22
loc_82391AFC:
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// addi r30,r11,14640
	ctx.r30.s64 = ctx.r11.s64 + 14640;
	// lwz r31,14640(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14640);
	// lwz r30,-8(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8);
	// lwz r29,8(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// subf r29,r11,r29
	ctx.r29.s64 = ctx.r29.s64 - ctx.r11.s64;
	// add r30,r29,r30
	ctx.r30.u64 = ctx.r29.u64 + ctx.r30.u64;
	// addi r30,r30,-8192
	ctx.r30.s64 = ctx.r30.s64 + -8192;
	// cmpwi cr6,r30,40
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 40, ctx.xer);
	// bge cr6,0x82391b34
	if (!ctx.cr6.lt) goto loc_82391B34;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_82391B34:
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r29,r11,40
	ctx.r29.s64 = ctx.r11.s64 + 40;
	// lwz r28,84(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r27,12
	ctx.r27.s64 = 12;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// li r30,40
	ctx.r30.s64 = 40;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// sth r27,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r27.u16);
	// sth r30,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r30.u16);
	// stw r3,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
	// stw r4,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r4.u32);
	// stw r5,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r5.u32);
	// stw r6,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r6.u32);
	// stw r7,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r7.u32);
	// stw r8,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r8.u32);
	// stw r9,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r9.u32);
	// stw r10,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// stw r28,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r28.u32);
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82391AE0) {
	__imp__sub_82391AE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82391B84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82391B84) {
	__imp__sub_82391B84(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82391B88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x82391B90;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r26,244(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82391bc0
	if (!ctx.cr6.eq) goto loc_82391BC0;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bge cr6,0x82391bc0
	if (!ctx.cr6.lt) goto loc_82391BC0;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_82391BC0:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_82391BC4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82391bc4
	if (!ctx.cr6.eq) goto loc_82391BC4;
	// subf r11,r28,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r28.s64;
	// lis r10,-31780
	ctx.r10.s64 = -2082734080;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// rotlwi r29,r9,0
	ctx.r29.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r11,-24832(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -24832);
	// addi r8,r29,84
	ctx.r8.s64 = ctx.r29.s64 + 84;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r9,r8,0,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFC;
	// beq cr6,0x82391bfc
	if (ctx.cr6.eq) goto loc_82391BFC;
	// twi 31,r0,22
loc_82391BFC:
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// addi r10,r11,14640
	ctx.r10.s64 = ctx.r11.s64 + 14640;
	// lwz r11,14640(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14640);
	// lwz r8,-8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// subf r7,r10,r7
	ctx.r7.s64 = ctx.r7.s64 - ctx.r10.s64;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// addi r6,r8,-8192
	ctx.r6.s64 = ctx.r8.s64 + -8192;
	// cmpw cr6,r9,r6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r6.s32, ctx.xer);
	// ble cr6,0x82391c3c
	if (!ctx.cr6.gt) goto loc_82391C3C;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_82391C3C:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// li r6,16
	ctx.r6.s64 = 16;
	// lwz r3,228(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// add r31,r8,r10
	ctx.r31.u64 = ctx.r8.u64 + ctx.r10.u64;
	// stw r7,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// stw r31,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r31.u32);
	// addi r4,r31,28
	ctx.r4.s64 = ctx.r31.s64 + 28;
	// sthx r6,r8,r10
	PPC_STORE_U16(ctx.r8.u32 + ctx.r10.u32, ctx.r6.u16);
	// sth r9,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r9.u16);
	// stfs f1,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// stfs f2,8(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// stw r5,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r5.u32);
	// stfs f5,12(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// stfs f3,20(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// stfs f4,24(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// bl 0x8238fea8
	ctx.lr = 0x82391C80;
	sub_8238FEA8(ctx, base);
	// lwz r11,236(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r27,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r27.u32);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// bne cr6,0x82391ca0
	if (!ctx.cr6.eq) goto loc_82391CA0;
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x82391cec
	goto loc_82391CEC;
loc_82391CA0:
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x82391cb0
	if (!ctx.cr6.eq) goto loc_82391CB0;
	// li r11,12
	ctx.r11.s64 = 12;
	// b 0x82391cec
	goto loc_82391CEC;
loc_82391CB0:
	// cmpwi cr6,r11,128
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 128, ctx.xer);
	// bne cr6,0x82391cc0
	if (!ctx.cr6.eq) goto loc_82391CC0;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82391cec
	goto loc_82391CEC;
loc_82391CC0:
	// cmpwi cr6,r11,132
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 132, ctx.xer);
	// bne cr6,0x82391cd0
	if (!ctx.cr6.eq) goto loc_82391CD0;
	// li r11,5
	ctx.r11.s64 = 5;
	// b 0x82391cec
	goto loc_82391CEC;
loc_82391CD0:
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x82391ce0
	if (!ctx.cr6.eq) goto loc_82391CE0;
	// li r11,1024
	ctx.r11.s64 = 1024;
	// b 0x82391cec
	goto loc_82391CEC;
loc_82391CE0:
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bne cr6,0x82391cf0
	if (!ctx.cr6.eq) goto loc_82391CF0;
	// li r11,3072
	ctx.r11.s64 = 3072;
loc_82391CEC:
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
loc_82391CF0:
	// cmpwi cr6,r26,-1
	ctx.cr6.compare<int32_t>(ctx.r26.s32, -1, ctx.xer);
	// ble cr6,0x82391d10
	if (!ctx.cr6.gt) goto loc_82391D10;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lbz r10,255(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 255);
	// ori r9,r11,2
	ctx.r9.u64 = ctx.r11.u64 | 2;
	// stw r26,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r26.u32);
	// stw r9,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r9.u32);
	// stb r10,44(r31)
	PPC_STORE_U8(ctx.r31.u32 + 44, ctx.r10.u8);
loc_82391D10:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x823de1f0
	ctx.lr = 0x82391D20;
	sub_823DE1F0(ctx, base);
	// add r11,r31,r29
	ctx.r11.u64 = ctx.r31.u64 + ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r30,80(r11)
	PPC_STORE_U8(ctx.r11.u32 + 80, ctx.r30.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82391B88) {
	__imp__sub_82391B88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82391D34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82391D34) {
	__imp__sub_82391D34(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82391D38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,239(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 239);
	// lwz r10,228(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// lwz r9,220(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// lwz r8,212(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// stb r11,111(r1)
	PPC_STORE_U8(ctx.r1.u32 + 111, ctx.r11.u8);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// bl 0x82391b88
	ctx.lr = 0x82391D68;
	sub_82391B88(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82391D38) {
	__imp__sub_82391D38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82391D78) {
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
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82391da8
	if (!ctx.cr6.eq) goto loc_82391DA8;
loc_82391D94:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82391DA8:
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f13,12(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,5484(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x82391d94
	if (ctx.cr6.eq) goto loc_82391D94;
	// lwz r9,36(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// addi r4,r11,48
	ctx.r4.s64 = ctx.r11.s64 + 48;
	// ori r7,r9,48
	ctx.r7.u64 = ctx.r9.u64 | 48;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r7,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r7.u32);
	// lfs f11,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// lfs f0,6020(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 6020);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,12(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f5,f13,f12
	ctx.f5.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// fmuls f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// stfs f8,88(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmuls f7,f10,f0
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f7,84(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmuls f6,f11,f0
	ctx.f6.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f6,80(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f5,92(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// bl 0x8238fea8
	ctx.lr = 0x82391E10;
	sub_8238FEA8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82391D78) {
	__imp__sub_82391D78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82391E24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82391E24) {
	__imp__sub_82391E24(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82391E28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82391e44
	if (!ctx.cr6.eq) goto loc_82391E44;
loc_82391E38:
	// li r3,0
	ctx.r3.s64 = 0;
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_82391E44:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82391e38
	if (ctx.cr6.eq) goto loc_82391E38;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x82391e38
	if (ctx.cr6.eq) goto loc_82391E38;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r31,36(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// stw r4,68(r11)
	PPC_STORE_U32(ctx.r11.u32 + 68, ctx.r4.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// ori r4,r31,192
	ctx.r4.u64 = ctx.r31.u64 | 192;
	// stw r5,72(r11)
	PPC_STORE_U32(ctx.r11.u32 + 72, ctx.r5.u32);
	// stw r6,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r6.u32);
	// stw r4,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r4.u32);
	// lfs f0,5484(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// stw r7,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r7.u32);
	// stfs f0,76(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 76, temp.u32);
	// stw r8,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r8.u32);
	// stw r9,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r9.u32);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82391E28) {
	__imp__sub_82391E28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82391E90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x82391E98;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82391ff8
	if (ctx.cr6.eq) goto loc_82391FF8;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82391EB4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82391eb4
	if (!ctx.cr6.eq) goto loc_82391EB4;
	// subf r11,r27,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r27.s64;
	// lis r10,-31780
	ctx.r10.s64 = -2082734080;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// rotlwi r28,r9,0
	ctx.r28.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r11,-24832(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -24832);
	// addi r8,r28,84
	ctx.r8.s64 = ctx.r28.s64 + 84;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r9,r8,0,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFC;
	// beq cr6,0x82391eec
	if (ctx.cr6.eq) goto loc_82391EEC;
	// twi 31,r0,22
loc_82391EEC:
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// addi r10,r11,14640
	ctx.r10.s64 = ctx.r11.s64 + 14640;
	// lwz r11,14640(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14640);
	// lwz r8,-8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// subf r7,r10,r7
	ctx.r7.s64 = ctx.r7.s64 - ctx.r10.s64;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// addi r6,r8,-8192
	ctx.r6.s64 = ctx.r8.s64 + -8192;
	// cmpw cr6,r9,r6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r6.s32, ctx.xer);
	// ble cr6,0x82391f28
	if (!ctx.cr6.gt) goto loc_82391F28;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_82391F28:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
	// lwz r3,212(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// add r31,r10,r8
	ctx.r31.u64 = ctx.r10.u64 + ctx.r8.u64;
	// stw r7,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// li r9,16
	ctx.r9.s64 = 16;
	// stw r31,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r31.u32);
	// addi r4,r31,28
	ctx.r4.s64 = ctx.r31.s64 + 28;
	// sthx r9,r10,r8
	PPC_STORE_U16(ctx.r10.u32 + ctx.r8.u32, ctx.r9.u16);
	// sth r6,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r6.u16);
	// stfs f1,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// stfs f2,8(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// stw r5,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r5.u32);
	// stfs f5,12(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// stfs f3,20(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// stfs f4,24(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// bl 0x8238fea8
	ctx.lr = 0x82391F70;
	sub_8238FEA8(ctx, base);
	// lwz r11,220(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r29,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r29.u32);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// bne cr6,0x82391f90
	if (!ctx.cr6.eq) goto loc_82391F90;
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x82391fdc
	goto loc_82391FDC;
loc_82391F90:
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x82391fa0
	if (!ctx.cr6.eq) goto loc_82391FA0;
	// li r11,12
	ctx.r11.s64 = 12;
	// b 0x82391fdc
	goto loc_82391FDC;
loc_82391FA0:
	// cmpwi cr6,r11,128
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 128, ctx.xer);
	// bne cr6,0x82391fb0
	if (!ctx.cr6.eq) goto loc_82391FB0;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82391fdc
	goto loc_82391FDC;
loc_82391FB0:
	// cmpwi cr6,r11,132
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 132, ctx.xer);
	// bne cr6,0x82391fc0
	if (!ctx.cr6.eq) goto loc_82391FC0;
	// li r11,5
	ctx.r11.s64 = 5;
	// b 0x82391fdc
	goto loc_82391FDC;
loc_82391FC0:
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x82391fd0
	if (!ctx.cr6.eq) goto loc_82391FD0;
	// li r11,1024
	ctx.r11.s64 = 1024;
	// b 0x82391fdc
	goto loc_82391FDC;
loc_82391FD0:
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bne cr6,0x82391fe0
	if (!ctx.cr6.eq) goto loc_82391FE0;
	// li r11,3072
	ctx.r11.s64 = 3072;
loc_82391FDC:
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
loc_82391FE0:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x823de1f0
	ctx.lr = 0x82391FF0;
	sub_823DE1F0(ctx, base);
	// add r11,r31,r28
	ctx.r11.u64 = ctx.r31.u64 + ctx.r28.u64;
	// stb r30,80(r11)
	PPC_STORE_U8(ctx.r11.u32 + 80, ctx.r30.u8);
loc_82391FF8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82391E90) {
	__imp__sub_82391E90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82392000) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x82392008;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8239219c
	if (ctx.cr6.eq) goto loc_8239219C;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82392024:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82392024
	if (!ctx.cr6.eq) goto loc_82392024;
	// subf r11,r26,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r26.s64;
	// lis r10,-31780
	ctx.r10.s64 = -2082734080;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// rotlwi r27,r9,0
	ctx.r27.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r11,-24832(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -24832);
	// addi r8,r27,84
	ctx.r8.s64 = ctx.r27.s64 + 84;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r9,r8,0,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFC;
	// beq cr6,0x8239205c
	if (ctx.cr6.eq) goto loc_8239205C;
	// twi 31,r0,22
loc_8239205C:
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// addi r10,r11,14640
	ctx.r10.s64 = ctx.r11.s64 + 14640;
	// lwz r11,14640(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14640);
	// lwz r8,-8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// subf r7,r10,r7
	ctx.r7.s64 = ctx.r7.s64 - ctx.r10.s64;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// addi r6,r8,-8192
	ctx.r6.s64 = ctx.r8.s64 + -8192;
	// cmpw cr6,r9,r6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r6.s32, ctx.xer);
	// ble cr6,0x82392098
	if (!ctx.cr6.gt) goto loc_82392098;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_82392098:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// lwz r28,228(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// add r31,r10,r8
	ctx.r31.u64 = ctx.r10.u64 + ctx.r8.u64;
	// stw r7,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// stw r31,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r31.u32);
	// addi r4,r31,28
	ctx.r4.s64 = ctx.r31.s64 + 28;
	// sthx r3,r10,r8
	PPC_STORE_U16(ctx.r10.u32 + ctx.r8.u32, ctx.r3.u16);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// sth r9,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r9.u16);
	// stfs f1,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// stfs f2,8(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// stw r5,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r5.u32);
	// stfs f5,12(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// stfs f3,20(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// stfs f4,24(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// bl 0x8238fea8
	ctx.lr = 0x823920E0;
	sub_8238FEA8(ctx, base);
	// lwz r11,236(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r29,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r29.u32);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// bne cr6,0x82392100
	if (!ctx.cr6.eq) goto loc_82392100;
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x8239214c
	goto loc_8239214C;
loc_82392100:
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x82392110
	if (!ctx.cr6.eq) goto loc_82392110;
	// li r11,12
	ctx.r11.s64 = 12;
	// b 0x8239214c
	goto loc_8239214C;
loc_82392110:
	// cmpwi cr6,r11,128
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 128, ctx.xer);
	// bne cr6,0x82392120
	if (!ctx.cr6.eq) goto loc_82392120;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8239214c
	goto loc_8239214C;
loc_82392120:
	// cmpwi cr6,r11,132
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 132, ctx.xer);
	// bne cr6,0x82392130
	if (!ctx.cr6.eq) goto loc_82392130;
	// li r11,5
	ctx.r11.s64 = 5;
	// b 0x8239214c
	goto loc_8239214C;
loc_82392130:
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x82392140
	if (!ctx.cr6.eq) goto loc_82392140;
	// li r11,1024
	ctx.r11.s64 = 1024;
	// b 0x8239214c
	goto loc_8239214C;
loc_82392140:
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bne cr6,0x82392150
	if (!ctx.cr6.eq) goto loc_82392150;
	// li r11,3072
	ctx.r11.s64 = 3072;
loc_8239214C:
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
loc_82392150:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x823de1f0
	ctx.lr = 0x82392160;
	sub_823DE1F0(ctx, base);
	// add r10,r31,r27
	ctx.r10.u64 = ctx.r31.u64 + ctx.r27.u64;
	// lbz r9,255(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 255);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stb r30,80(r10)
	PPC_STORE_U8(ctx.r10.u32 + 80, ctx.r30.u8);
	// beq cr6,0x82392180
	if (ctx.cr6.eq) goto loc_82392180;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// ori r10,r11,512
	ctx.r10.u64 = ctx.r11.u64 | 512;
	// stw r10,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r10.u32);
loc_82392180:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,244(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// ori r10,r11,256
	ctx.r10.u64 = ctx.r11.u64 | 256;
	// stw r10,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r10.u32);
	// bl 0x82391d78
	ctx.lr = 0x8239219C;
	sub_82391D78(ctx, base);
loc_8239219C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82392000) {
	__imp__sub_82392000(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823921A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823921A4) {
	__imp__sub_823921A4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823921A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf64
	ctx.lr = 0x823921B0;
	__savegprlr_23(ctx, base);
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x823de024
	ctx.lr = 0x823921B8;
	__savefpr_27(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// lwz r23,316(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// addi r30,r11,4608
	ctx.r30.s64 = ctx.r11.s64 + 4608;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// fmr f29,f3
	ctx.f29.f64 = ctx.f3.f64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// fmr f28,f4
	ctx.f28.f64 = ctx.f4.f64;
	// fmr f27,f5
	ctx.f27.f64 = ctx.f5.f64;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
	// lwz r10,8356(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8356);
	// bne cr6,0x823921fc
	if (!ctx.cr6.eq) goto loc_823921FC;
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
loc_823921FC:
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,48(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82392224
	if (!ctx.cr6.eq) goto loc_82392224;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// beq cr6,0x82392228
	if (ctx.cr6.eq) goto loc_82392228;
loc_82392224:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82392228:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8239226c
	if (ctx.cr6.eq) goto loc_8239226C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8238bd18
	ctx.lr = 0x8239223C;
	sub_8238BD18(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82392268
	if (!ctx.cr6.eq) goto loc_82392268;
loc_82392248:
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r3,57
	ctx.r3.s64 = 57;
	// bl 0x823ddd78
	ctx.lr = 0x82392258;
	sub_823DDD78(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x823de070
	ctx.lr = 0x82392264;
	__restfpr_27(ctx, base);
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
loc_82392268:
	// lwz r10,8356(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8356);
loc_8239226C:
	// lwz r24,324(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
	// bne cr6,0x82392280
	if (!ctx.cr6.eq) goto loc_82392280;
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
loc_82392280:
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x823922a4
	if (!ctx.cr6.eq) goto loc_823922A4;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// beq cr6,0x823922a8
	if (ctx.cr6.eq) goto loc_823922A8;
loc_823922A4:
	// li r11,1
	ctx.r11.s64 = 1;
loc_823922A8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823922c8
	if (ctx.cr6.eq) goto loc_823922C8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8238bd18
	ctx.lr = 0x823922BC;
	sub_8238BD18(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82392248
	if (ctx.cr6.eq) goto loc_82392248;
loc_823922C8:
	// lbz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82392484
	if (ctx.cr6.eq) goto loc_82392484;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_823922D8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823922d8
	if (!ctx.cr6.eq) goto loc_823922D8;
	// subf r11,r25,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r25.s64;
	// lis r10,-31780
	ctx.r10.s64 = -2082734080;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// rotlwi r29,r9,0
	ctx.r29.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r11,-24832(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -24832);
	// addi r8,r29,84
	ctx.r8.s64 = ctx.r29.s64 + 84;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r9,r8,0,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFC;
	// beq cr6,0x82392310
	if (ctx.cr6.eq) goto loc_82392310;
	// twi 31,r0,22
loc_82392310:
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// addi r10,r11,14640
	ctx.r10.s64 = ctx.r11.s64 + 14640;
	// lwz r11,14640(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14640);
	// lwz r8,-8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// subf r7,r10,r7
	ctx.r7.s64 = ctx.r7.s64 - ctx.r10.s64;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// addi r6,r8,-8192
	ctx.r6.s64 = ctx.r8.s64 + -8192;
	// cmpw cr6,r9,r6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r6.s32, ctx.xer);
	// ble cr6,0x82392350
	if (!ctx.cr6.gt) goto loc_82392350;
	// stw r28,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r28.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x823de070
	ctx.lr = 0x8239234C;
	__restfpr_27(ctx, base);
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
loc_82392350:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// lwz r30,292(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// add r31,r8,r10
	ctx.r31.u64 = ctx.r8.u64 + ctx.r10.u64;
	// stw r7,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r31,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r31.u32);
	// addi r4,r31,28
	ctx.r4.s64 = ctx.r31.s64 + 28;
	// sthx r5,r8,r10
	PPC_STORE_U16(ctx.r8.u32 + ctx.r10.u32, ctx.r5.u16);
	// sth r9,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r9.u16);
	// stfs f31,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// stfs f30,8(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// stw r26,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r26.u32);
	// stfs f27,12(r31)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// stfs f29,20(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// stfs f28,24(r31)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// bl 0x8238fea8
	ctx.lr = 0x82392398;
	sub_8238FEA8(ctx, base);
	// lwz r11,300(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 300);
	// stw r27,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r27.u32);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// stw r28,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r28.u32);
	// bne cr6,0x823923b4
	if (!ctx.cr6.eq) goto loc_823923B4;
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x82392400
	goto loc_82392400;
loc_823923B4:
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x823923c4
	if (!ctx.cr6.eq) goto loc_823923C4;
	// li r11,12
	ctx.r11.s64 = 12;
	// b 0x82392400
	goto loc_82392400;
loc_823923C4:
	// cmpwi cr6,r11,128
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 128, ctx.xer);
	// bne cr6,0x823923d4
	if (!ctx.cr6.eq) goto loc_823923D4;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82392400
	goto loc_82392400;
loc_823923D4:
	// cmpwi cr6,r11,132
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 132, ctx.xer);
	// bne cr6,0x823923e4
	if (!ctx.cr6.eq) goto loc_823923E4;
	// li r11,5
	ctx.r11.s64 = 5;
	// b 0x82392400
	goto loc_82392400;
loc_823923E4:
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x823923f4
	if (!ctx.cr6.eq) goto loc_823923F4;
	// li r11,1024
	ctx.r11.s64 = 1024;
	// b 0x82392400
	goto loc_82392400;
loc_823923F4:
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bne cr6,0x82392404
	if (!ctx.cr6.eq) goto loc_82392404;
	// li r11,3072
	ctx.r11.s64 = 3072;
loc_82392400:
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
loc_82392404:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x823de1f0
	ctx.lr = 0x82392414;
	sub_823DE1F0(ctx, base);
	// add r11,r31,r29
	ctx.r11.u64 = ctx.r31.u64 + ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r5,308(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r28,80(r11)
	PPC_STORE_U8(ctx.r11.u32 + 80, ctx.r28.u8);
	// bl 0x82391d78
	ctx.lr = 0x8239242C;
	sub_82391D78(ctx, base);
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x82392484
	if (ctx.cr6.eq) goto loc_82392484;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x82392484
	if (ctx.cr6.eq) goto loc_82392484;
	// lwz r11,332(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 332);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82392484
	if (ctx.cr6.eq) goto loc_82392484;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r9,36(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r8,340(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// lwz r7,348(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 348);
	// ori r6,r9,192
	ctx.r6.u64 = ctx.r9.u64 | 192;
	// lwz r5,356(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// stw r23,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r23.u32);
	// lfs f0,5484(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// stw r24,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r24.u32);
	// stfs f0,76(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 76, temp.u32);
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// stw r6,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r6.u32);
	// stw r8,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r8.u32);
	// stw r7,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r7.u32);
	// stw r5,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r5.u32);
loc_82392484:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x823de070
	ctx.lr = 0x82392490;
	__restfpr_27(ctx, base);
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823921A8) {
	__imp__sub_823921A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82392494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82392494) {
	__imp__sub_82392494(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82392498) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x823924A0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823925c4
	if (ctx.cr6.eq) goto loc_823925C4;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_823924BC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823924bc
	if (!ctx.cr6.eq) goto loc_823924BC;
	// subf r11,r29,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r29.s64;
	// lis r10,-31780
	ctx.r10.s64 = -2082734080;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// rotlwi r30,r9,0
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r11,-24832(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -24832);
	// addi r4,r30,52
	ctx.r4.s64 = ctx.r30.s64 + 52;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r9,r4,0,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFC;
	// beq cr6,0x823924f4
	if (ctx.cr6.eq) goto loc_823924F4;
	// twi 31,r0,22
loc_823924F4:
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// addi r10,r11,14640
	ctx.r10.s64 = ctx.r11.s64 + 14640;
	// lwz r11,14640(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14640);
	// lwz r4,-8(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// subf r31,r10,r3
	ctx.r31.s64 = ctx.r3.s64 - ctx.r10.s64;
	// add r4,r31,r4
	ctx.r4.u64 = ctx.r31.u64 + ctx.r4.u64;
	// addi r4,r4,-8192
	ctx.r4.s64 = ctx.r4.s64 + -8192;
	// cmpw cr6,r9,r4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r4.s32, ctx.xer);
	// ble cr6,0x82392530
	if (!ctx.cr6.gt) goto loc_82392530;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_82392530:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r31,r4,r10
	ctx.r31.u64 = ctx.r4.u64 + ctx.r10.u64;
	// stw r3,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
	// li r10,17
	ctx.r10.s64 = 17;
	// stw r31,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r31.u32);
	// addi r4,r31,44
	ctx.r4.s64 = ctx.r31.s64 + 44;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// sth r10,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r10.u16);
	// sth r9,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r9.u16);
	// lfs f0,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// stw r28,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r28.u32);
	// lfs f13,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,8(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// lfs f12,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,12(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// lfs f11,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,20(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// lfs f10,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,24(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// lfs f9,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,28(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// lfs f8,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,32(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// lfs f7,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,36(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// lfs f6,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,40(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// bl 0x8238fea8
	ctx.lr = 0x823925A8;
	sub_8238FEA8(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// bl 0x823de1f0
	ctx.lr = 0x823925B8;
	sub_823DE1F0(ctx, base);
	// add r9,r31,r30
	ctx.r9.u64 = ctx.r31.u64 + ctx.r30.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// stb r8,48(r9)
	PPC_STORE_U8(ctx.r9.u32 + 48, ctx.r8.u8);
loc_823925C4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82392498) {
	__imp__sub_82392498(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823925CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823925CC) {
	__imp__sub_823925CC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823925D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x823925D8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// subf r31,r5,r4
	ctx.r31.s64 = ctx.r4.s64 - ctx.r5.s64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// add r4,r3,r5
	ctx.r4.u64 = ctx.r3.u64 + ctx.r5.u64;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// cmpw cr6,r6,r31
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r31.s32, ctx.xer);
	// addi r3,r7,80
	ctx.r3.s64 = ctx.r7.s64 + 80;
	// bgt cr6,0x82392608
	if (ctx.cr6.gt) goto loc_82392608;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// b 0x82392620
	goto loc_82392620;
loc_82392608:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x823de1f0
	ctx.lr = 0x82392610;
	sub_823DE1F0(ctx, base);
	// add r11,r31,r30
	ctx.r11.u64 = ctx.r31.u64 + ctx.r30.u64;
	// subf r5,r31,r29
	ctx.r5.s64 = ctx.r29.s64 - ctx.r31.s64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r11,80
	ctx.r3.s64 = ctx.r11.s64 + 80;
loc_82392620:
	// bl 0x823de1f0
	ctx.lr = 0x82392624;
	sub_823DE1F0(ctx, base);
	// add r11,r29,r30
	ctx.r11.u64 = ctx.r29.u64 + ctx.r30.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,80(r11)
	PPC_STORE_U8(ctx.r11.u32 + 80, ctx.r10.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823925D0) {
	__imp__sub_823925D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82392638) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x82392640;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x82392668
	if (!ctx.cr6.eq) goto loc_82392668;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_82392668:
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// addi r10,r30,84
	ctx.r10.s64 = ctx.r30.s64 + 84;
	// rlwinm r9,r10,0,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	// lwz r11,-24832(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -24832);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82392684
	if (ctx.cr6.eq) goto loc_82392684;
	// twi 31,r0,22
loc_82392684:
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// addi r10,r11,14640
	ctx.r10.s64 = ctx.r11.s64 + 14640;
	// lwz r11,14640(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14640);
	// lwz r8,-8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8);
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// subf r6,r10,r6
	ctx.r6.s64 = ctx.r6.s64 - ctx.r10.s64;
	// add r8,r6,r8
	ctx.r8.u64 = ctx.r6.u64 + ctx.r8.u64;
	// addi r5,r8,-8192
	ctx.r5.s64 = ctx.r8.s64 + -8192;
	// cmpw cr6,r9,r5
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r5.s32, ctx.xer);
	// ble cr6,0x823926c4
	if (!ctx.cr6.gt) goto loc_823926C4;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_823926C4:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// lwz r3,220(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// add r31,r8,r10
	ctx.r31.u64 = ctx.r8.u64 + ctx.r10.u64;
	// stw r6,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
	// stw r31,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r31.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// sthx r5,r8,r10
	PPC_STORE_U16(ctx.r8.u32 + ctx.r10.u32, ctx.r5.u16);
	// addi r4,r31,28
	ctx.r4.s64 = ctx.r31.s64 + 28;
	// sth r9,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r9.u16);
	// stfs f1,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// stfs f2,8(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// stw r7,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r7.u32);
	// lfs f0,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// stfs f3,20(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// stfs f4,24(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// bl 0x8238fea8
	ctx.lr = 0x82392710;
	sub_8238FEA8(ctx, base);
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// lwz r11,228(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r8,r10,65535
	ctx.r8.u64 = ctx.r10.u64 | 65535;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// stw r9,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r9.u32);
	// stw r8,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r8.u32);
	// bne cr6,0x82392738
	if (!ctx.cr6.eq) goto loc_82392738;
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x82392784
	goto loc_82392784;
loc_82392738:
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x82392748
	if (!ctx.cr6.eq) goto loc_82392748;
	// li r11,12
	ctx.r11.s64 = 12;
	// b 0x82392784
	goto loc_82392784;
loc_82392748:
	// cmpwi cr6,r11,128
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 128, ctx.xer);
	// bne cr6,0x82392758
	if (!ctx.cr6.eq) goto loc_82392758;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82392784
	goto loc_82392784;
loc_82392758:
	// cmpwi cr6,r11,132
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 132, ctx.xer);
	// bne cr6,0x82392768
	if (!ctx.cr6.eq) goto loc_82392768;
	// li r11,5
	ctx.r11.s64 = 5;
	// b 0x82392784
	goto loc_82392784;
loc_82392768:
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x82392778
	if (!ctx.cr6.eq) goto loc_82392778;
	// li r11,1024
	ctx.r11.s64 = 1024;
	// b 0x82392784
	goto loc_82392784;
loc_82392778:
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bne cr6,0x82392788
	if (!ctx.cr6.eq) goto loc_82392788;
	// li r11,3072
	ctx.r11.s64 = 3072;
loc_82392784:
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
loc_82392788:
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823925d0
	ctx.lr = 0x823927A0;
	sub_823925D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82392638) {
	__imp__sub_82392638(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823927AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823927AC) {
	__imp__sub_823927AC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823927B0) {
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
	// lwz r11,212(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// lwz r10,204(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// bl 0x82392638
	ctx.lr = 0x823927D0;
	sub_82392638(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823927B0) {
	__imp__sub_823927B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823927E0) {
	PPC_FUNC_PROLOGUE();
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
	// lwz r11,228(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// lwz r31,220(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// bl 0x82392638
	ctx.lr = 0x82392804;
	sub_82392638(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82392824
	if (ctx.cr6.eq) goto loc_82392824;
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r5,236(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// ori r10,r11,256
	ctx.r10.u64 = ctx.r11.u64 | 256;
	// stw r10,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r10.u32);
	// bl 0x82391d78
	ctx.lr = 0x82392824;
	sub_82391D78(ctx, base);
loc_82392824:
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

PPC_WEAK_FUNC(sub_823927E0) {
	__imp__sub_823927E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82392838) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf64
	ctx.lr = 0x82392840;
	__savegprlr_23(ctx, base);
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x823de028
	ctx.lr = 0x82392848;
	__savefpr_28(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// lwz r23,372(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// addi r30,r11,4608
	ctx.r30.s64 = ctx.r11.s64 + 4608;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// fmr f29,f3
	ctx.f29.f64 = ctx.f3.f64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// fmr f28,f4
	ctx.f28.f64 = ctx.f4.f64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// lwz r10,8356(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8356);
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
	// bne cr6,0x82392890
	if (!ctx.cr6.eq) goto loc_82392890;
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
loc_82392890:
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,48(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x823928b4
	if (!ctx.cr6.eq) goto loc_823928B4;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x823928b8
	if (ctx.cr6.eq) goto loc_823928B8;
loc_823928B4:
	// li r11,1
	ctx.r11.s64 = 1;
loc_823928B8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823928fc
	if (ctx.cr6.eq) goto loc_823928FC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8238bd18
	ctx.lr = 0x823928CC;
	sub_8238BD18(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823928f8
	if (!ctx.cr6.eq) goto loc_823928F8;
loc_823928D8:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r3,57
	ctx.r3.s64 = 57;
	// bl 0x823ddd78
	ctx.lr = 0x823928E8;
	sub_823DDD78(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x823de074
	ctx.lr = 0x823928F4;
	__restfpr_28(ctx, base);
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
loc_823928F8:
	// lwz r10,8356(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8356);
loc_823928FC:
	// lwz r28,380(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 380);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// bne cr6,0x82392910
	if (!ctx.cr6.eq) goto loc_82392910;
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
loc_82392910:
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82392934
	if (!ctx.cr6.eq) goto loc_82392934;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x82392938
	if (ctx.cr6.eq) goto loc_82392938;
loc_82392934:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82392938:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82392958
	if (ctx.cr6.eq) goto loc_82392958;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8238bd18
	ctx.lr = 0x8239294C;
	sub_8238BD18(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823928d8
	if (ctx.cr6.eq) goto loc_823928D8;
loc_82392958:
	// lwz r11,324(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// lwz r30,316(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// fmr f4,f28
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f28.f64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// fmr f3,f29
	ctx.f3.f64 = ctx.f29.f64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// bl 0x82392638
	ctx.lr = 0x82392990;
	sub_82392638(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82392a00
	if (ctx.cr6.eq) goto loc_82392A00;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r5,332(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 332);
	// bl 0x82391d78
	ctx.lr = 0x823929A8;
	sub_82391D78(ctx, base);
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x82392a00
	if (ctx.cr6.eq) goto loc_82392A00;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82392a00
	if (ctx.cr6.eq) goto loc_82392A00;
	// lwz r11,340(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82392a00
	if (ctx.cr6.eq) goto loc_82392A00;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r9,36(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r8,348(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 348);
	// lwz r7,356(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// ori r6,r9,192
	ctx.r6.u64 = ctx.r9.u64 | 192;
	// lwz r5,364(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 364);
	// stw r23,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r23.u32);
	// lfs f0,5484(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// stw r28,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r28.u32);
	// stfs f0,76(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 76, temp.u32);
	// stw r6,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r6.u32);
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// stw r8,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r8.u32);
	// stw r7,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r7.u32);
	// stw r5,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r5.u32);
loc_82392A00:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x823de074
	ctx.lr = 0x82392A0C;
	__restfpr_28(ctx, base);
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82392838) {
	__imp__sub_82392838(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82392A10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r11,-24832(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -24832);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82392a2c
	if (ctx.cr6.eq) goto loc_82392A2C;
	// twi 31,r0,22
loc_82392A2C:
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// addi r8,r11,14640
	ctx.r8.s64 = ctx.r11.s64 + 14640;
	// lwz r10,14640(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14640);
	// lwz r8,-8(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + -8);
	// lwz r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// subf r7,r11,r7
	ctx.r7.s64 = ctx.r7.s64 - ctx.r11.s64;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// addi r6,r8,-8192
	ctx.r6.s64 = ctx.r8.s64 + -8192;
	// cmpwi cr6,r6,44
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 44, ctx.xer);
	// bge cr6,0x82392a64
	if (!ctx.cr6.lt) goto loc_82392A64;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// blr 
	return;
loc_82392A64:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r7,r11,44
	ctx.r7.s64 = ctx.r11.s64 + 44;
	// li r6,13
	ctx.r6.s64 = 13;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// li r4,44
	ctx.r4.s64 = 44;
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// sth r6,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r6.u16);
	// sth r4,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r4.u16);
	// beq cr6,0x82392a98
	if (ctx.cr6.eq) goto loc_82392A98;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// b 0x82392aa4
	goto loc_82392AA4;
loc_82392A98:
	// lis r10,-31799
	ctx.r10.s64 = -2083979264;
	// addi r8,r10,4608
	ctx.r8.s64 = ctx.r10.s64 + 4608;
	// lwz r10,8356(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8356);
loc_82392AA4:
	// lfs f0,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// addi r4,r11,40
	ctx.r4.s64 = ctx.r11.s64 + 40;
	// lfs f13,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,12(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// lfs f12,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,16(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// lfs f11,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,20(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// lfs f10,16(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,24(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// lfs f9,20(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,28(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// lfs f8,24(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,32(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// lfs f7,28(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,36(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// b 0x8238fea8
	sub_8238FEA8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82392A10) {
	__imp__sub_82392A10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82392AF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// lwz r11,-24832(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -24832);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82392b08
	if (ctx.cr6.eq) goto loc_82392B08;
	// twi 31,r0,22
loc_82392B08:
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// addi r6,r11,14640
	ctx.r6.s64 = ctx.r11.s64 + 14640;
	// lwz r10,14640(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14640);
	// lwz r6,-8(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + -8);
	// lwz r5,8(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// subf r5,r11,r5
	ctx.r5.s64 = ctx.r5.s64 - ctx.r11.s64;
	// add r6,r5,r6
	ctx.r6.u64 = ctx.r5.u64 + ctx.r6.u64;
	// addi r4,r6,-8192
	ctx.r4.s64 = ctx.r6.s64 + -8192;
	// cmpwi cr6,r4,60
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 60, ctx.xer);
	// bge cr6,0x82392b40
	if (!ctx.cr6.lt) goto loc_82392B40;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// blr 
	return;
loc_82392B40:
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r5,r11,60
	ctx.r5.s64 = ctx.r11.s64 + 60;
	// li r4,14
	ctx.r4.s64 = 14;
	// add r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
	// stw r5,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r5.u32);
	// li r3,60
	ctx.r3.s64 = 60;
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// sth r4,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r4.u16);
	// sth r3,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r3.u16);
	// beq cr6,0x82392b74
	if (ctx.cr6.eq) goto loc_82392B74;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// b 0x82392b80
	goto loc_82392B80;
loc_82392B74:
	// lis r10,-31799
	ctx.r10.s64 = -2083979264;
	// addi r9,r10,4608
	ctx.r9.s64 = ctx.r10.s64 + 4608;
	// lwz r10,8356(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8356);
loc_82392B80:
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lfs f0,0(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// addi r4,r11,56
	ctx.r4.s64 = ctx.r11.s64 + 56;
	// lfs f13,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// stfs f13,12(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// lfs f12,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,16(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// lfs f11,12(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,20(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// lfs f10,16(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,24(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// lfs f9,20(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,28(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// lfs f8,24(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,32(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// lfs f7,28(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 28);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,36(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// stfs f1,40(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// stfs f2,44(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r11.u32 + 44, temp.u32);
	// stfs f3,48(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 48, temp.u32);
	// stfs f4,52(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// b 0x8238fea8
	sub_8238FEA8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82392AF0) {
	__imp__sub_82392AF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82392BE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// lwz r11,-24832(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -24832);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82392bf4
	if (ctx.cr6.eq) goto loc_82392BF4;
	// twi 31,r0,22
loc_82392BF4:
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// addi r9,r11,14640
	ctx.r9.s64 = ctx.r11.s64 + 14640;
	// lwz r10,14640(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14640);
	// lwz r9,-8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + -8);
	// lwz r6,8(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// subf r6,r11,r6
	ctx.r6.s64 = ctx.r6.s64 - ctx.r11.s64;
	// add r9,r6,r9
	ctx.r9.u64 = ctx.r6.u64 + ctx.r9.u64;
	// addi r5,r9,-8192
	ctx.r5.s64 = ctx.r9.s64 + -8192;
	// cmpwi cr6,r5,28
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 28, ctx.xer);
	// bge cr6,0x82392c2c
	if (!ctx.cr6.lt) goto loc_82392C2C;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// blr 
	return;
loc_82392C2C:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r6,r11,28
	ctx.r6.s64 = ctx.r11.s64 + 28;
	// li r5,15
	ctx.r5.s64 = 15;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r6,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r6.u32);
	// li r4,28
	ctx.r4.s64 = 28;
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// sth r5,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r5.u16);
	// sth r4,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r4.u16);
	// beq cr6,0x82392c60
	if (ctx.cr6.eq) goto loc_82392C60;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// b 0x82392c6c
	goto loc_82392C6C;
loc_82392C60:
	// lis r10,-31799
	ctx.r10.s64 = -2083979264;
	// addi r9,r10,4608
	ctx.r9.s64 = ctx.r10.s64 + 4608;
	// lwz r10,8356(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8356);
loc_82392C6C:
	// stfs f1,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stfs f2,12(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// addi r4,r11,24
	ctx.r4.s64 = ctx.r11.s64 + 24;
	// stfs f3,16(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// stfs f4,20(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// b 0x8238fea8
	sub_8238FEA8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82392BE0) {
	__imp__sub_82392BE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82392C8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82392C8C) {
	__imp__sub_82392C8C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82392C90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// lwz r11,-24832(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -24832);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82392ca4
	if (ctx.cr6.eq) goto loc_82392CA4;
	// twi 31,r0,22
loc_82392CA4:
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// addi r10,r11,14640
	ctx.r10.s64 = ctx.r11.s64 + 14640;
	// lwz r11,14640(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14640);
	// lwz r9,-8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	// cmpwi cr6,r9,20
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 20, ctx.xer);
	// bge cr6,0x82392cd0
	if (!ctx.cr6.lt) goto loc_82392CD0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// b 0x82392d00
	goto loc_82392D00;
loc_82392CD0:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r7,r10,20
	ctx.r7.s64 = ctx.r10.s64 + 20;
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// li r6,1
	ctx.r6.s64 = 1;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r7,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// addi r5,r8,20
	ctx.r5.s64 = ctx.r8.s64 + 20;
	// li r4,20
	ctx.r4.s64 = 20;
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// stw r5,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r5.u32);
	// sth r6,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r6.u16);
	// sth r4,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, ctx.r4.u16);
loc_82392D00:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82392d2c
	if (ctx.cr6.eq) goto loc_82392D2C;
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,8(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// lfs f12,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,12(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// lfs f11,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,16(r10)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + 16, temp.u32);
	// blr 
	return;
loc_82392D2C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// stfs f0,8(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// stfs f0,12(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// stfs f0,16(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 16, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82392C90) {
	__imp__sub_82392C90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82392D48) {
	PPC_FUNC_PROLOGUE();
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// lwz r11,-24832(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -24832);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82392d60
	if (ctx.cr6.eq) goto loc_82392D60;
	// twi 31,r0,22
loc_82392D60:
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// addi r10,r11,14640
	ctx.r10.s64 = ctx.r11.s64 + 14640;
	// lwz r11,14640(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14640);
	// lwz r9,-8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	// cmpwi cr6,r9,20
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 20, ctx.xer);
	// bge cr6,0x82392d8c
	if (!ctx.cr6.lt) goto loc_82392D8C;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// b 0x82392dbc
	goto loc_82392DBC;
loc_82392D8C:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r7,r10,20
	ctx.r7.s64 = ctx.r10.s64 + 20;
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// li r31,5
	ctx.r31.s64 = 5;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r7,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// addi r9,r8,20
	ctx.r9.s64 = ctx.r8.s64 + 20;
	// li r8,20
	ctx.r8.s64 = 20;
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// sth r31,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r31.u16);
	// sth r8,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, ctx.r8.u16);
loc_82392DBC:
	// stw r3,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r3.u32);
	// stw r4,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r4.u32);
	// stw r5,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r5.u32);
	// stw r6,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r6.u32);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82392D48) {
	__imp__sub_82392D48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82392DD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82392DD4) {
	__imp__sub_82392DD4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82392DD8) {
	PPC_FUNC_PROLOGUE();
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// lwz r11,-24832(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -24832);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82392df0
	if (ctx.cr6.eq) goto loc_82392DF0;
	// twi 31,r0,22
loc_82392DF0:
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// addi r10,r11,14640
	ctx.r10.s64 = ctx.r11.s64 + 14640;
	// lwz r11,14640(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14640);
	// lwz r9,-8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	// cmpwi cr6,r9,20
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 20, ctx.xer);
	// bge cr6,0x82392e1c
	if (!ctx.cr6.lt) goto loc_82392E1C;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// b 0x82392e4c
	goto loc_82392E4C;
loc_82392E1C:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r7,r10,20
	ctx.r7.s64 = ctx.r10.s64 + 20;
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// li r31,6
	ctx.r31.s64 = 6;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r7,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// addi r9,r8,20
	ctx.r9.s64 = ctx.r8.s64 + 20;
	// li r8,20
	ctx.r8.s64 = 20;
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// sth r31,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r31.u16);
	// sth r8,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, ctx.r8.u16);
loc_82392E4C:
	// stw r3,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r3.u32);
	// stw r4,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r4.u32);
	// stw r5,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r5.u32);
	// stw r6,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r6.u32);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82392DD8) {
	__imp__sub_82392DD8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82392E64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82392E64) {
	__imp__sub_82392E64(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82392E68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// lwz r11,-24832(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -24832);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82392e7c
	if (ctx.cr6.eq) goto loc_82392E7C;
	// twi 31,r0,22
loc_82392E7C:
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// addi r10,r11,14640
	ctx.r10.s64 = ctx.r11.s64 + 14640;
	// lwz r11,14640(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14640);
	// lwz r9,-8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	// cmpwi cr6,r9,4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4, ctx.xer);
	// bge cr6,0x82392ea8
	if (!ctx.cr6.lt) goto loc_82392EA8;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// blr 
	return;
loc_82392EA8:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r7,r10,4
	ctx.r7.s64 = ctx.r10.s64 + 4;
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// li r6,7
	ctx.r6.s64 = 7;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r7,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// addi r5,r8,4
	ctx.r5.s64 = ctx.r8.s64 + 4;
	// li r4,4
	ctx.r4.s64 = 4;
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// stw r5,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r5.u32);
	// sth r6,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r6.u16);
	// sth r4,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, ctx.r4.u16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82392E68) {
	__imp__sub_82392E68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82392EDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82392EDC) {
	__imp__sub_82392EDC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82392EE0) {
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
	// lis r30,-31780
	ctx.r30.s64 = -2082734080;
	// lwz r11,13132(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13132);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r9,44(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x82392f60
	if (ctx.cr6.eq) goto loc_82392F60;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r31,0
	ctx.r31.s64 = 0;
	// lfs f30,5804(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5804);
	ctx.f30.f64 = double(temp.f32);
	// lfs f31,5484(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5484);
	ctx.f31.f64 = double(temp.f32);
	// b 0x82392f30
	goto loc_82392F30;
loc_82392F2C:
	// lwz r11,13132(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 13132);
loc_82392F30:
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82392f44
	if (!ctx.cr6.eq) goto loc_82392F44;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// b 0x82392f48
	goto loc_82392F48;
loc_82392F44:
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
loc_82392F48:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82300bc8
	ctx.lr = 0x82392F50;
	sub_82300BC8(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,4
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 4, ctx.xer);
	// blt cr6,0x82392f2c
	if (ctx.cr6.lt) goto loc_82392F2C;
	// b 0x82392fb0
	goto loc_82392FB0;
loc_82392F60:
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,13128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13128);
	// lfs f1,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82300bc8
	ctx.lr = 0x82392F74;
	sub_82300BC8(ctx, base);
	// lis r10,-31780
	ctx.r10.s64 = -2082734080;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,12940(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12940);
	// lfs f1,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82300bc8
	ctx.lr = 0x82392F88;
	sub_82300BC8(ctx, base);
	// lis r9,-31780
	ctx.r9.s64 = -2082734080;
	// li r3,2
	ctx.r3.s64 = 2;
	// lwz r11,12776(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12776);
	// lfs f1,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82300bc8
	ctx.lr = 0x82392F9C;
	sub_82300BC8(ctx, base);
	// lis r8,-31780
	ctx.r8.s64 = -2082734080;
	// li r3,3
	ctx.r3.s64 = 3;
	// lwz r11,12648(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12648);
	// lfs f1,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82300bc8
	ctx.lr = 0x82392FB0;
	sub_82300BC8(ctx, base);
loc_82392FB0:
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

PPC_WEAK_FUNC(sub_82392EE0) {
	__imp__sub_82392EE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82392FD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// addi r10,r11,13536
	ctx.r10.s64 = ctx.r11.s64 + 13536;
	// lwz r11,780(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 780);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82392fec
	if (ctx.cr6.eq) goto loc_82392FEC;
loc_82392FE4:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82392FEC:
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// lwz r11,12624(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12624);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x82392fe4
	if (!ctx.cr6.eq) goto loc_82392FE4;
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// lwz r11,13136(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13136);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x82392fe4
	if (!ctx.cr6.eq) goto loc_82392FE4;
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// lwz r11,12896(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12896);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
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

PPC_WEAK_FUNC(sub_82392FD0) {
	__imp__sub_82392FD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82393030) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// lis r10,-31775
	ctx.r10.s64 = -2082406400;
	// addi r9,r10,-21248
	ctx.r9.s64 = ctx.r10.s64 + -21248;
	// lwz r11,12820(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12820);
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,784(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 784, temp.u32);
	// stfs f0,788(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 788, temp.u32);
	// stfs f0,792(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 792, temp.u32);
	// stfs f0,796(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 796, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82393030) {
	__imp__sub_82393030(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82393058) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82393060;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// lwz r11,13104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13104);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82393094
	if (ctx.cr6.eq) goto loc_82393094;
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// addi r10,r11,4608
	ctx.r10.s64 = ctx.r11.s64 + 4608;
	// lwz r11,8456(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8456);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82393094
	if (ctx.cr6.eq) goto loc_82393094;
	// addi r3,r11,340
	ctx.r3.s64 = ctx.r11.s64 + 340;
	// bl 0x823cd460
	ctx.lr = 0x82393094;
	sub_823CD460(ctx, base);
loc_82393094:
	// bl 0x82392ee0
	ctx.lr = 0x82393098;
	sub_82392EE0(ctx, base);
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// addi r28,r11,13536
	ctx.r28.s64 = ctx.r11.s64 + 13536;
	// lwz r11,780(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 780);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x823930b4
	if (ctx.cr6.eq) goto loc_823930B4;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82393104
	goto loc_82393104;
loc_823930B4:
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// lwz r11,12624(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12624);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x823930d0
	if (ctx.cr6.eq) goto loc_823930D0;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82393104
	goto loc_82393104;
loc_823930D0:
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// lwz r11,13136(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13136);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x823930ec
	if (ctx.cr6.eq) goto loc_823930EC;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82393104
	goto loc_82393104;
loc_823930EC:
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// lwz r11,12896(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12896);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_82393104:
	// stb r11,708(r28)
	PPC_STORE_U8(ctx.r28.u32 + 708, ctx.r11.u8);
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// lwz r3,12996(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12996);
	// bl 0x823a4938
	ctx.lr = 0x82393114;
	sub_823A4938(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82393128
	if (ctx.cr6.eq) goto loc_82393128;
	// bl 0x82390a98
	ctx.lr = 0x82393124;
	sub_82390A98(ctx, base);
	// bl 0x823b9a18
	ctx.lr = 0x82393128;
	sub_823B9A18(ctx, base);
loc_82393128:
	// lis r10,-31780
	ctx.r10.s64 = -2082734080;
	// lbz r11,508(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 508);
	// addi r9,r10,11264
	ctx.r9.s64 = ctx.r10.s64 + 11264;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lbz r10,708(r9)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + 708);
	// beq cr6,0x82393150
	if (ctx.cr6.eq) goto loc_82393150;
	// rlwinm r9,r10,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// subfic r8,r9,0
	ctx.xer.ca = ctx.r9.u32 <= 0;
	ctx.r8.s64 = 0 - ctx.r9.s64;
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 & ctx.r11.u64;
loc_82393150:
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8239316c
	if (!ctx.cr6.eq) goto loc_8239316C;
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8239316c
	if (!ctx.cr6.eq) goto loc_8239316C;
	// li r11,1
	ctx.r11.s64 = 1;
loc_8239316C:
	// lis r10,-31780
	ctx.r10.s64 = -2082734080;
	// lis r29,-31780
	ctx.r29.s64 = -2082734080;
	// lwz r3,12852(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12852);
	// lbz r9,11(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 11);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x823931a4
	if (!ctx.cr6.eq) goto loc_823931A4;
	// lwz r10,12804(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12804);
	// lbz r10,11(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 11);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823931a4
	if (!ctx.cr6.eq) goto loc_823931A4;
	// lbz r8,709(r28)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r28.u32 + 709);
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x823931f8
	if (ctx.cr6.eq) goto loc_823931F8;
loc_823931A4:
	// stb r11,709(r28)
	PPC_STORE_U8(ctx.r28.u32 + 709, ctx.r11.u8);
	// bl 0x822e0228
	ctx.lr = 0x823931AC;
	sub_822E0228(ctx, base);
	// lwz r3,12804(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12804);
	// bl 0x822e0228
	ctx.lr = 0x823931B4;
	sub_822E0228(ctx, base);
	// bl 0x8228bc50
	ctx.lr = 0x823931B8;
	sub_8228BC50(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823931f4
	if (!ctx.cr6.eq) goto loc_823931F4;
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// addi r31,r11,13352
	ctx.r31.s64 = ctx.r11.s64 + 13352;
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823931f4
	if (ctx.cr6.eq) goto loc_823931F4;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823931f4
	if (!ctx.cr6.eq) goto loc_823931F4;
	// bl 0x8228b558
	ctx.lr = 0x823931E8;
	sub_8228B558(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// bl 0x823aee78
	ctx.lr = 0x823931F4;
	sub_823AEE78(ctx, base);
loc_823931F4:
	// bl 0x823be7e0
	ctx.lr = 0x823931F8;
	sub_823BE7E0(ctx, base);
loc_823931F8:
	// lis r30,-31780
	ctx.r30.s64 = -2082734080;
	// lwz r3,12820(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12820);
	// bl 0x823a4938
	ctx.lr = 0x82393204;
	sub_823A4938(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// lis r11,-31775
	ctx.r11.s64 = -2082406400;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// addi r31,r11,-21248
	ctx.r31.s64 = ctx.r11.s64 + -21248;
	// beq cr6,0x82393230
	if (ctx.cr6.eq) goto loc_82393230;
	// lwz r11,12820(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12820);
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,784(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 784, temp.u32);
	// stfs f0,788(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 788, temp.u32);
	// stfs f0,792(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 792, temp.u32);
	// stfs f0,796(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 796, temp.u32);
loc_82393230:
	// lwz r11,12804(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12804);
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// lis r8,-31780
	ctx.r8.s64 = -2082734080;
	// lbz r7,772(r28)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r28.u32 + 772);
	// addi r9,r9,-32144
	ctx.r9.s64 = ctx.r9.s64 + -32144;
	// lwz r6,12(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r10,12664(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12664);
	// rlwinm r11,r6,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f0,544(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 544, temp.u32);
	// stfs f13,548(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 548, temp.u32);
	// stfs f12,552(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 552, temp.u32);
	// stfs f11,556(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 556, temp.u32);
	// lbz r30,12(r10)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r10.u32 + 12);
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// cmplw cr6,r7,r30
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82393288
	if (ctx.cr6.eq) goto loc_82393288;
	// bl 0x82390a98
	ctx.lr = 0x82393288;
	sub_82390A98(ctx, base);
loc_82393288:
	// lis r11,-31771
	ctx.r11.s64 = -2082144256;
	// stb r30,772(r28)
	PPC_STORE_U8(ctx.r28.u32 + 772, ctx.r30.u8);
	// lis r10,-31780
	ctx.r10.s64 = -2082734080;
	// addi r9,r11,-26624
	ctx.r9.s64 = ctx.r11.s64 + -26624;
	// subfic r8,r29,0
	ctx.xer.ca = ctx.r29.u32 <= 0;
	ctx.r8.s64 = 0 - ctx.r29.s64;
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lwz r10,13060(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13060);
	// lwz r11,80(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 80);
	// and r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 & ctx.r11.u64;
	// stw r11,1236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1236, ctx.r11.u32);
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stw r11,780(r28)
	PPC_STORE_U32(ctx.r28.u32 + 780, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82393058) {
	__imp__sub_82393058(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823932C0) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r11,13536
	ctx.r9.s64 = ctx.r11.s64 + 13536;
	// lfs f0,12168(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,936(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 936, temp.u32);
	// bl 0x8228bcc0
	ctx.lr = 0x823932E8;
	sub_8228BCC0(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x823932f8
	if (ctx.cr6.eq) goto loc_823932F8;
	// bl 0x82393058
	ctx.lr = 0x823932F8;
	sub_82393058(ctx, base);
loc_823932F8:
	// bl 0x823b23b0
	ctx.lr = 0x823932FC;
	sub_823B23B0(ctx, base);
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// addi r31,r11,4608
	ctx.r31.s64 = ctx.r11.s64 + 4608;
	// lwz r11,8320(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8320);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8239334c
	if (ctx.cr6.eq) goto loc_8239334C;
	// bl 0x8228b9f8
	ctx.lr = 0x82393314;
	sub_8228B9F8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8239334c
	if (ctx.cr6.eq) goto loc_8239334C;
	// bl 0x82178030
	ctx.lr = 0x82393320;
	sub_82178030(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8320, ctx.r11.u32);
	// lwsync 
	// bl 0x82390a98
	ctx.lr = 0x82393330;
	sub_82390A98(ctx, base);
	// bl 0x823cff50
	ctx.lr = 0x82393334;
	sub_823CFF50(ctx, base);
	// lwz r11,8456(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8456);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82393344
	if (ctx.cr6.eq) goto loc_82393344;
	// bl 0x823ce6f0
	ctx.lr = 0x82393344;
	sub_823CE6F0(ctx, base);
loc_82393344:
	// bl 0x8217a608
	ctx.lr = 0x82393348;
	sub_8217A608(ctx, base);
	// bl 0x821780f8
	ctx.lr = 0x8239334C;
	sub_821780F8(ctx, base);
loc_8239334C:
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

PPC_WEAK_FUNC(sub_823932C0) {
	__imp__sub_823932C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82393360) {
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
	// bl 0x823912a8
	ctx.lr = 0x82393370;
	sub_823912A8(ctx, base);
	// lis r9,-31799
	ctx.r9.s64 = -2083979264;
	// lis r8,-31799
	ctx.r8.s64 = -2083979264;
	// lis r7,-31799
	ctx.r7.s64 = -2083979264;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r6,r7,13536
	ctx.r6.s64 = ctx.r7.s64 + 13536;
	// lwz r10,14644(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 14644);
	// addi r5,r10,-1
	ctx.r5.s64 = ctx.r10.s64 + -1;
	// clrlwi r10,r5,31
	ctx.r10.u64 = ctx.r5.u32 & 0x1;
	// stw r10,14644(r9)
	PPC_STORE_U32(ctx.r9.u32 + 14644, ctx.r10.u32);
	// lwz r10,14592(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 14592);
	// lwz r4,5556(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 5556);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// stw r11,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r11.u32);
	// stw r11,896(r6)
	PPC_STORE_U32(ctx.r6.u32 + 896, ctx.r11.u32);
	// bl 0x8228bcc0
	ctx.lr = 0x823933B0;
	sub_8228BCC0(ctx, base);
	// clrlwi r3,r3,24
	ctx.r3.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823933d4
	if (ctx.cr6.eq) goto loc_823933D4;
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// lwz r10,-8576(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8576);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x823933d4
	if (!ctx.cr6.eq) goto loc_823933D4;
	// li r3,27
	ctx.r3.s64 = 27;
	// bl 0x823b7e40
	ctx.lr = 0x823933D4;
	sub_823B7E40(ctx, base);
loc_823933D4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82393360) {
	__imp__sub_82393360(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823933E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823933E4) {
	__imp__sub_823933E4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823933E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// lwz r11,-24832(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -24832);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823933fc
	if (ctx.cr6.eq) goto loc_823933FC;
	// twi 31,r0,22
loc_823933FC:
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// addi r10,r11,14640
	ctx.r10.s64 = ctx.r11.s64 + 14640;
	// lwz r11,14640(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14640);
	// lwz r9,-8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	// cmpwi cr6,r9,28
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 28, ctx.xer);
	// bge cr6,0x82393428
	if (!ctx.cr6.lt) goto loc_82393428;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// b 0x82393458
	goto loc_82393458;
loc_82393428:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r7,r10,28
	ctx.r7.s64 = ctx.r10.s64 + 28;
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// li r5,4
	ctx.r5.s64 = 4;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r7,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// addi r9,r8,28
	ctx.r9.s64 = ctx.r8.s64 + 28;
	// li r8,28
	ctx.r8.s64 = 28;
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// sth r5,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r5.u16);
	// sth r8,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, ctx.r8.u16);
loc_82393458:
	// stfs f1,8(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// stb r6,5(r10)
	PPC_STORE_U8(ctx.r10.u32 + 5, ctx.r6.u8);
	// stb r3,4(r10)
	PPC_STORE_U8(ctx.r10.u32 + 4, ctx.r3.u8);
	// lfs f0,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,16(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 16, temp.u32);
	// lfs f12,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,20(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 20, temp.u32);
	// lfs f11,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,24(r10)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + 24, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823933E8) {
	__imp__sub_823933E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82393488) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// lwz r11,-24832(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -24832);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8239349c
	if (ctx.cr6.eq) goto loc_8239349C;
	// twi 31,r0,22
loc_8239349C:
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// addi r10,r11,14640
	ctx.r10.s64 = ctx.r11.s64 + 14640;
	// lwz r11,14640(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14640);
	// lwz r9,-8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	// cmpwi cr6,r9,8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 8, ctx.xer);
	// bge cr6,0x823934cc
	if (!ctx.cr6.lt) goto loc_823934CC;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// stw r3,4(0)
	PPC_STORE_U32(4, ctx.r3.u32);
	// blr 
	return;
loc_823934CC:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r7,r10,8
	ctx.r7.s64 = ctx.r10.s64 + 8;
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// li r6,2
	ctx.r6.s64 = 2;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r7,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// addi r5,r8,8
	ctx.r5.s64 = ctx.r8.s64 + 8;
	// li r4,8
	ctx.r4.s64 = 8;
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// stw r5,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r5.u32);
	// sth r6,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r6.u16);
	// sth r4,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, ctx.r4.u16);
	// stw r3,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r3.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82393488) {
	__imp__sub_82393488(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82393504) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82393504) {
	__imp__sub_82393504(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82393508) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// lwz r11,-24832(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -24832);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8239351c
	if (ctx.cr6.eq) goto loc_8239351C;
	// twi 31,r0,22
loc_8239351C:
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// addi r10,r11,14640
	ctx.r10.s64 = ctx.r11.s64 + 14640;
	// lwz r11,14640(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14640);
	// lwz r9,-8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	// cmpwi cr6,r9,24
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 24, ctx.xer);
	// bge cr6,0x82393548
	if (!ctx.cr6.lt) goto loc_82393548;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// b 0x82393578
	goto loc_82393578;
loc_82393548:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r6,r10,24
	ctx.r6.s64 = ctx.r10.s64 + 24;
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// li r5,3
	ctx.r5.s64 = 3;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r6,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
	// addi r4,r8,24
	ctx.r4.s64 = ctx.r8.s64 + 24;
	// li r3,24
	ctx.r3.s64 = 24;
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// stw r4,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r4.u32);
	// sth r5,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r5.u16);
	// sth r3,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, ctx.r3.u16);
loc_82393578:
	// stfs f1,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// stw r7,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, ctx.r7.u32);
	// stfs f2,8(r10)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// stfs f3,12(r10)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// stfs f4,16(r10)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r10.u32 + 16, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82393508) {
	__imp__sub_82393508(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82393590) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// lwz r11,-24832(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -24832);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823935ac
	if (ctx.cr6.eq) goto loc_823935AC;
	// twi 31,r0,22
loc_823935AC:
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// addi r9,r11,14640
	ctx.r9.s64 = ctx.r11.s64 + 14640;
	// lwz r10,14640(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14640);
	// lwz r9,-8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + -8);
	// lwz r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// subf r7,r11,r7
	ctx.r7.s64 = ctx.r7.s64 - ctx.r11.s64;
	// add r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 + ctx.r9.u64;
	// addi r6,r9,-8192
	ctx.r6.s64 = ctx.r9.s64 + -8192;
	// cmpwi cr6,r6,28
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 28, ctx.xer);
	// bge cr6,0x823935e4
	if (!ctx.cr6.lt) goto loc_823935E4;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// blr 
	return;
loc_823935E4:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r7,r11,28
	ctx.r7.s64 = ctx.r11.s64 + 28;
	// li r6,18
	ctx.r6.s64 = 18;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// li r5,28
	ctx.r5.s64 = 28;
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// sth r6,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r6.u16);
	// sth r5,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r5.u16);
	// stfs f1,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f2,12(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stw r3,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
	// stfs f3,16(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// stw r8,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r8.u32);
	// stfs f4,20(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82393590) {
	__imp__sub_82393590(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82393624) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82393624) {
	__imp__sub_82393624(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82393628) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// lwz r11,-24832(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -24832);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8239363c
	if (ctx.cr6.eq) goto loc_8239363C;
	// twi 31,r0,22
loc_8239363C:
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// addi r9,r11,14640
	ctx.r9.s64 = ctx.r11.s64 + 14640;
	// lwz r10,14640(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14640);
	// lwz r9,-8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + -8);
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// subf r8,r11,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r11.s64;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// addi r7,r9,-8192
	ctx.r7.s64 = ctx.r9.s64 + -8192;
	// cmpwi cr6,r7,32
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 32, ctx.xer);
	// bge cr6,0x82393674
	if (!ctx.cr6.lt) goto loc_82393674;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// blr 
	return;
loc_82393674:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r8,r11,32
	ctx.r8.s64 = ctx.r11.s64 + 32;
	// li r7,19
	ctx.r7.s64 = 19;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// sth r7,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r7.u16);
	// sth r6,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r6.u16);
	// stfs f1,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f2,12(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stb r5,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r5.u8);
	// stfs f3,16(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// stfs f4,20(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// stfs f5,24(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// stfs f6,28(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82393628) {
	__imp__sub_82393628(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823936BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823936BC) {
	__imp__sub_823936BC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823936C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// lwz r11,-24832(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -24832);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823936d4
	if (ctx.cr6.eq) goto loc_823936D4;
	// twi 31,r0,22
loc_823936D4:
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// addi r9,r11,14640
	ctx.r9.s64 = ctx.r11.s64 + 14640;
	// lwz r10,14640(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14640);
	// lwz r9,-8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + -8);
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// subf r8,r11,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r11.s64;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// addi r7,r9,-8192
	ctx.r7.s64 = ctx.r9.s64 + -8192;
	// cmpwi cr6,r7,32
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 32, ctx.xer);
	// bge cr6,0x8239370c
	if (!ctx.cr6.lt) goto loc_8239370C;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// blr 
	return;
loc_8239370C:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r8,r11,32
	ctx.r8.s64 = ctx.r11.s64 + 32;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// li r6,19
	ctx.r6.s64 = 19;
	// li r5,32
	ctx.r5.s64 = 32;
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// lfs f0,5484(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// sth r6,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r6.u16);
	// sth r5,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r5.u16);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f0,12(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stb r4,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r4.u8);
	// stfs f1,16(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// stfs f2,20(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// stfs f3,24(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// stfs f4,28(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823936C0) {
	__imp__sub_823936C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8239375C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8239375C) {
	__imp__sub_8239375C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82393760) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x82393768;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r8,r11,14632
	ctx.r8.s64 = ctx.r11.s64 + 14632;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// lwz r10,8(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r31,12(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8239381c
	if (ctx.cr6.eq) goto loc_8239381C;
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,20
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 20, ctx.xer);
	// bne cr6,0x8239381c
	if (!ctx.cr6.eq) goto loc_8239381C;
	// extsh r30,r3
	ctx.r30.s64 = ctx.r3.s16;
	// lhz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// rlwinm r28,r30,4,0,27
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// bgt cr6,0x8239381c
	if (ctx.cr6.gt) goto loc_8239381C;
	// lbz r11,6(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 6);
	// clrlwi r9,r4,24
	ctx.r9.u64 = ctx.r4.u32 & 0xFF;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8239381c
	if (!ctx.cr6.eq) goto loc_8239381C;
	// lbz r11,7(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 7);
	// clrlwi r9,r5,24
	ctx.r9.u64 = ctx.r5.u32 & 0xFF;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8239381c
	if (!ctx.cr6.eq) goto loc_8239381C;
	// lhz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// add r9,r11,r30
	ctx.r9.u64 = ctx.r11.u64 + ctx.r30.u64;
	// cmpwi cr6,r9,32767
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 32767, ctx.xer);
	// bgt cr6,0x8239381c
	if (ctx.cr6.gt) goto loc_8239381C;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82391180
	ctx.lr = 0x823937F4;
	sub_82391180(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823938a8
	if (ctx.cr6.eq) goto loc_823938A8;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x823de1f0
	ctx.lr = 0x82393808;
	sub_823DE1F0(ctx, base);
	// lhz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// sth r10,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r10.u16);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_8239381C:
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// extsh r9,r29
	ctx.r9.s64 = ctx.r29.s16;
	// rlwinm r5,r9,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r11,-24832(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -24832);
	// addi r9,r5,8
	ctx.r9.s64 = ctx.r5.s64 + 8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8239383c
	if (ctx.cr6.eq) goto loc_8239383C;
	// twi 31,r0,22
loc_8239383C:
	// lwz r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,0(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// subf r7,r11,r7
	ctx.r7.s64 = ctx.r7.s64 - ctx.r11.s64;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// addi r6,r8,-8192
	ctx.r6.s64 = ctx.r8.s64 + -8192;
	// cmpw cr6,r9,r6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r6.s32, ctx.xer);
	// ble cr6,0x8239386c
	if (!ctx.cr6.gt) goto loc_8239386C;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_8239386C:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// li r9,20
	ctx.r9.s64 = 20;
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// sth r9,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r9.u16);
	// sth r6,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r6.u16);
	// sth r29,4(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4, ctx.r29.u16);
	// stb r27,6(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6, ctx.r27.u8);
	// stb r26,7(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7, ctx.r26.u8);
	// bl 0x823de1f0
	ctx.lr = 0x823938A8;
	sub_823DE1F0(ctx, base);
loc_823938A8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82393760) {
	__imp__sub_82393760(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823938B0) {
	PPC_FUNC_PROLOGUE();
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// b 0x82393760
	sub_82393760(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823938B0) {
	__imp__sub_823938B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823938BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823938BC) {
	__imp__sub_823938BC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823938C0) {
	PPC_FUNC_PROLOGUE();
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// li r5,3
	ctx.r5.s64 = 3;
	// b 0x82393760
	sub_82393760(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823938C0) {
	__imp__sub_823938C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823938CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823938CC) {
	__imp__sub_823938CC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823938D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x823938D8;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r8,r11,14632
	ctx.r8.s64 = ctx.r11.s64 + 14632;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// lwz r10,8(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r31,12(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8239398c
	if (ctx.cr6.eq) goto loc_8239398C;
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,21
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 21, ctx.xer);
	// bne cr6,0x8239398c
	if (!ctx.cr6.eq) goto loc_8239398C;
	// extsh r30,r3
	ctx.r30.s64 = ctx.r3.s16;
	// lhz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// rlwinm r28,r30,5,0,26
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// bgt cr6,0x8239398c
	if (ctx.cr6.gt) goto loc_8239398C;
	// lbz r11,6(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 6);
	// clrlwi r9,r4,24
	ctx.r9.u64 = ctx.r4.u32 & 0xFF;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8239398c
	if (!ctx.cr6.eq) goto loc_8239398C;
	// lbz r11,7(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 7);
	// clrlwi r9,r5,24
	ctx.r9.u64 = ctx.r5.u32 & 0xFF;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8239398c
	if (!ctx.cr6.eq) goto loc_8239398C;
	// lhz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// add r9,r11,r30
	ctx.r9.u64 = ctx.r11.u64 + ctx.r30.u64;
	// cmpwi cr6,r9,32767
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 32767, ctx.xer);
	// bgt cr6,0x8239398c
	if (ctx.cr6.gt) goto loc_8239398C;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82391180
	ctx.lr = 0x82393964;
	sub_82391180(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82393a18
	if (ctx.cr6.eq) goto loc_82393A18;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x823de1f0
	ctx.lr = 0x82393978;
	sub_823DE1F0(ctx, base);
	// lhz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// sth r10,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r10.u16);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_8239398C:
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// extsh r9,r29
	ctx.r9.s64 = ctx.r29.s16;
	// rlwinm r5,r9,5,0,26
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// lwz r11,-24832(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -24832);
	// addi r9,r5,8
	ctx.r9.s64 = ctx.r5.s64 + 8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823939ac
	if (ctx.cr6.eq) goto loc_823939AC;
	// twi 31,r0,22
loc_823939AC:
	// lwz r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,0(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// subf r7,r11,r7
	ctx.r7.s64 = ctx.r7.s64 - ctx.r11.s64;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// addi r6,r8,-8192
	ctx.r6.s64 = ctx.r8.s64 + -8192;
	// cmpw cr6,r9,r6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r6.s32, ctx.xer);
	// ble cr6,0x823939dc
	if (!ctx.cr6.gt) goto loc_823939DC;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_823939DC:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// li r9,21
	ctx.r9.s64 = 21;
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// sth r9,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r9.u16);
	// sth r6,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r6.u16);
	// sth r29,4(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4, ctx.r29.u16);
	// stb r27,6(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6, ctx.r27.u8);
	// stb r26,7(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7, ctx.r26.u8);
	// bl 0x823de1f0
	ctx.lr = 0x82393A18;
	sub_823DE1F0(ctx, base);
loc_82393A18:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823938D0) {
	__imp__sub_823938D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82393A20) {
	PPC_FUNC_PROLOGUE();
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// b 0x823938d0
	sub_823938D0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82393A20) {
	__imp__sub_82393A20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82393A2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82393A2C) {
	__imp__sub_82393A2C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82393A30) {
	PPC_FUNC_PROLOGUE();
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// li r5,3
	ctx.r5.s64 = 3;
	// b 0x823938d0
	sub_823938D0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82393A30) {
	__imp__sub_82393A30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82393A3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82393A3C) {
	__imp__sub_82393A3C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82393A40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf50
	ctx.lr = 0x82393A48;
	__savegprlr_18(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// mr r20,r5
	ctx.r20.u64 = ctx.r5.u64;
	// mr r19,r7
	ctx.r19.u64 = ctx.r7.u64;
	// mr r18,r10
	ctx.r18.u64 = ctx.r10.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82393a6c
	if (ctx.cr6.eq) goto loc_82393A6C;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// b 0x82393a78
	goto loc_82393A78;
loc_82393A6C:
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// addi r10,r11,4608
	ctx.r10.s64 = ctx.r11.s64 + 4608;
	// lwz r21,8356(r10)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8356);
loc_82393A78:
	// lwz r11,64(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 64);
	// addi r10,r22,3
	ctx.r10.s64 = ctx.r22.s64 + 3;
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwzx r4,r5,r7
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r7.u32);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x82393ba0
	if (ctx.cr6.eq) goto loc_82393BA0;
	// extsh r11,r8
	ctx.r11.s64 = ctx.r8.s16;
	// extsh r7,r6
	ctx.r7.s64 = ctx.r6.s16;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r5,r11,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r30,r5,20
	ctx.r30.s64 = ctx.r5.s64 + 20;
	// rlwinm r29,r10,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r28,r11,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r27,r29,r30
	ctx.r27.u64 = ctx.r29.u64 + ctx.r30.u64;
	// lis r4,-31780
	ctx.r4.s64 = -2082734080;
	// rlwinm r26,r11,3,0,28
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r25,r28,r27
	ctx.r25.u64 = ctx.r28.u64 + ctx.r27.u64;
	// addi r3,r7,1
	ctx.r3.s64 = ctx.r7.s64 + 1;
	// add r24,r26,r25
	ctx.r24.u64 = ctx.r26.u64 + ctx.r25.u64;
	// lwz r11,-24832(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + -24832);
	// rlwinm r23,r3,1,0,29
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFC;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// add r10,r23,r24
	ctx.r10.u64 = ctx.r23.u64 + ctx.r24.u64;
	// beq cr6,0x82393ae4
	if (ctx.cr6.eq) goto loc_82393AE4;
	// twi 31,r0,22
loc_82393AE4:
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// addi r7,r11,14640
	ctx.r7.s64 = ctx.r11.s64 + 14640;
	// lwz r11,14640(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14640);
	// lwz r3,-8(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + -8);
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// subf r31,r7,r4
	ctx.r31.s64 = ctx.r4.s64 - ctx.r7.s64;
	// add r3,r31,r3
	ctx.r3.u64 = ctx.r31.u64 + ctx.r3.u64;
	// addi r3,r3,-8192
	ctx.r3.s64 = ctx.r3.s64 + -8192;
	// cmpw cr6,r10,r3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r3.s32, ctx.xer);
	// ble cr6,0x82393b20
	if (!ctx.cr6.gt) goto loc_82393B20;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823ddfa0
	__restgprlr_18(ctx, base);
	return;
loc_82393B20:
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// add r4,r7,r10
	ctx.r4.u64 = ctx.r7.u64 + ctx.r10.u64;
	// add r31,r3,r7
	ctx.r31.u64 = ctx.r3.u64 + ctx.r7.u64;
	// stw r4,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r4.u32);
	// li r7,22
	ctx.r7.s64 = 22;
	// stw r31,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r31.u32);
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// sth r7,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r7.u16);
	// sth r10,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r10.u16);
	// stw r21,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r21.u32);
	// stw r22,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r22.u32);
	// stb r20,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r20.u8);
	// sth r6,14(r31)
	PPC_STORE_U16(ctx.r31.u32 + 14, ctx.r6.u16);
	// sth r8,16(r31)
	PPC_STORE_U16(ctx.r31.u32 + 16, ctx.r8.u16);
	// bl 0x823de1f0
	ctx.lr = 0x82393B60;
	sub_823DE1F0(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// add r3,r31,r30
	ctx.r3.u64 = ctx.r31.u64 + ctx.r30.u64;
	// bl 0x823de1f0
	ctx.lr = 0x82393B70;
	sub_823DE1F0(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// add r3,r31,r27
	ctx.r3.u64 = ctx.r31.u64 + ctx.r27.u64;
	// lwz r4,292(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// bl 0x823de1f0
	ctx.lr = 0x82393B80;
	sub_823DE1F0(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// add r3,r31,r25
	ctx.r3.u64 = ctx.r31.u64 + ctx.r25.u64;
	// lwz r4,300(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 300);
	// bl 0x823de1f0
	ctx.lr = 0x82393B90;
	sub_823DE1F0(ctx, base);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// add r3,r31,r24
	ctx.r3.u64 = ctx.r31.u64 + ctx.r24.u64;
	// bl 0x823de1f0
	ctx.lr = 0x82393BA0;
	sub_823DE1F0(ctx, base);
loc_82393BA0:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823ddfa0
	__restgprlr_18(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82393A40) {
	__imp__sub_82393A40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82393BA8) {
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
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// lwz r31,196(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// bl 0x82393a40
	ctx.lr = 0x82393BE4;
	sub_82393A40(ctx, base);
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

PPC_WEAK_FUNC(sub_82393BA8) {
	__imp__sub_82393BA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82393BF8) {
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
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// lwz r31,196(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// li r5,3
	ctx.r5.s64 = 3;
	// bl 0x82393a40
	ctx.lr = 0x82393C34;
	sub_82393A40(ctx, base);
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

PPC_WEAK_FUNC(sub_82393BF8) {
	__imp__sub_82393BF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82393C48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// lwz r11,-24832(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -24832);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82393c5c
	if (ctx.cr6.eq) goto loc_82393C5C;
	// twi 31,r0,22
loc_82393C5C:
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// addi r10,r11,14640
	ctx.r10.s64 = ctx.r11.s64 + 14640;
	// lwz r11,14640(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14640);
	// lwz r9,-8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// subf r8,r10,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r10.s64;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// addi r7,r9,-8192
	ctx.r7.s64 = ctx.r9.s64 + -8192;
	// cmpwi cr6,r7,8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 8, ctx.xer);
	// bge cr6,0x82393c94
	if (!ctx.cr6.lt) goto loc_82393C94;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// blr 
	return;
loc_82393C94:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r8,r10,8
	ctx.r8.s64 = ctx.r10.s64 + 8;
	// li r7,23
	ctx.r7.s64 = 23;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// li r6,8
	ctx.r6.s64 = 8;
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// sth r7,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r7.u16);
	// sth r6,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, ctx.r6.u16);
	// stw r3,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r3.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82393C48) {
	__imp__sub_82393C48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82393CC0) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82393c48
	sub_82393C48(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82393CC0) {
	__imp__sub_82393CC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82393CC8) {
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
	ctx.lr = 0x82393CD8;
	sub_8228BCC0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82393d38
	if (ctx.cr6.eq) goto loc_82393D38;
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// addi r11,r11,13352
	ctx.r11.s64 = ctx.r11.s64 + 13352;
	// lbz r10,1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82393d38
	if (ctx.cr6.eq) goto loc_82393D38;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82393d20
	if (ctx.cr6.eq) goto loc_82393D20;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82393D20:
	// lwsync 
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// bl 0x82390c00
	ctx.lr = 0x82393D34;
	sub_82390C00(ctx, base);
	// bl 0x8228b5d8
	ctx.lr = 0x82393D38;
	sub_8228B5D8(ctx, base);
loc_82393D38:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82393CC8) {
	__imp__sub_82393CC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82393D48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82393D50;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x8228bcc0
	ctx.lr = 0x82393D58;
	sub_8228BCC0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82393e1c
	if (ctx.cr6.eq) goto loc_82393E1C;
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// addi r31,r11,13352
	ctx.r31.s64 = ctx.r11.s64 + 13352;
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82393e1c
	if (ctx.cr6.eq) goto loc_82393E1C;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82393d98
	if (ctx.cr6.eq) goto loc_82393D98;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_82393D98:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82393db8
	if (!ctx.cr6.eq) goto loc_82393DB8;
loc_82393DA4:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8228b0d8
	ctx.lr = 0x82393DAC;
	sub_8228B0D8(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82393da4
	if (ctx.cr6.eq) goto loc_82393DA4;
loc_82393DB8:
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82393e18
	if (!ctx.cr6.eq) goto loc_82393E18;
	// lis r11,-32117
	ctx.r11.s64 = -2104819712;
	// lis r10,-32117
	ctx.r10.s64 = -2104819712;
	// lis r30,-32117
	ctx.r30.s64 = -2104819712;
loc_82393DE4:
	// lwz r11,-8836(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8836);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,-8836(r10)
	PPC_STORE_U32(ctx.r10.u32 + -8836, ctx.r11.u32);
	// bl 0x8228b0d8
	ctx.lr = 0x82393DF8;
	sub_8228B0D8(ctx, base);
	// lwz r9,-8836(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8836);
	// lis r11,-32117
	ctx.r11.s64 = -2104819712;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// lis r10,-32117
	ctx.r10.s64 = -2104819712;
	// stw r9,-8836(r30)
	PPC_STORE_U32(ctx.r30.u32 + -8836, ctx.r9.u32);
	// lwz r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82393de4
	if (ctx.cr6.eq) goto loc_82393DE4;
loc_82393E18:
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
loc_82393E1C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82393D48) {
	__imp__sub_82393D48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82393E24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82393E24) {
	__imp__sub_82393E24(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82393E28) {
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
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82393ecc
	if (ctx.cr6.eq) goto loc_82393ECC;
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// addi r31,r11,13352
	ctx.r31.s64 = ctx.r11.s64 + 13352;
loc_82393E50:
	// bl 0x8228bcc0
	ctx.lr = 0x82393E54;
	sub_8228BCC0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82393ec4
	if (ctx.cr6.eq) goto loc_82393EC4;
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82393ec4
	if (ctx.cr6.eq) goto loc_82393EC4;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82393e88
	if (ctx.cr6.eq) goto loc_82393E88;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// b 0x82393ec4
	goto loc_82393EC4;
loc_82393E88:
	// lwsync 
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lbz r9,1(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// beq cr6,0x82393ec0
	if (ctx.cr6.eq) goto loc_82393EC0;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82393ec0
	if (ctx.cr6.eq) goto loc_82393EC0;
	// bl 0x823ad808
	ctx.lr = 0x82393EB4;
	sub_823AD808(ctx, base);
	// bl 0x8228bf48
	ctx.lr = 0x82393EB8;
	sub_8228BF48(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
loc_82393EC0:
	// bl 0x8228b5d8
	ctx.lr = 0x82393EC4;
	sub_8228B5D8(ctx, base);
loc_82393EC4:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x82393e50
	if (!ctx.cr0.eq) goto loc_82393E50;
loc_82393ECC:
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

PPC_WEAK_FUNC(sub_82393E28) {
	__imp__sub_82393E28(ctx, base);
}

