#include "ppc_recomp_shared.h"

PPC_FUNC_IMPL(__imp__sub_8211F360) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x8211F368;
	__savegprlr_25(ctx, base);
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x823de028
	ctx.lr = 0x8211F370;
	__savefpr_28(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8211f4c4
	if (ctx.cr6.eq) goto loc_8211F4C4;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lis r10,-32187
	ctx.r10.s64 = -2109407232;
	// ori r9,r11,61924
	ctx.r9.u64 = ctx.r11.u64 | 61924;
	// addi r11,r10,-15680
	ctx.r11.s64 = ctx.r10.s64 + -15680;
	// mullw r10,r3,r9
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r9.s32);
	// add r29,r10,r11
	ctx.r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8211edc8
	ctx.lr = 0x8211F3B0;
	sub_8211EDC8(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8211f4c4
	if (ctx.cr6.eq) goto loc_8211F4C4;
	// addis r28,r29,1
	ctx.r28.s64 = ctx.r29.s64 + 65536;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r28,r28,22924
	ctx.r28.s64 = ctx.r28.s64 + 22924;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82334778
	ctx.lr = 0x8211F3D0;
	sub_82334778(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8211f3ec
	if (!ctx.cr6.eq) goto loc_8211F3EC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82334898
	ctx.lr = 0x8211F3E4;
	sub_82334898(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8211f4c4
	if (ctx.cr6.eq) goto loc_8211F4C4;
loc_8211F3EC:
	// lis r11,2
	ctx.r11.s64 = 131072;
	// ori r10,r11,19056
	ctx.r10.u64 = ctx.r11.u64 | 19056;
	// lwzx r3,r29,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r10.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8211f4c4
	if (ctx.cr6.eq) goto loc_8211F4C4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,12(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lfs f13,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x8211f4c4
	if (ctx.cr6.eq) goto loc_8211F4C4;
	// bl 0x82332af8
	ctx.lr = 0x8211F41C;
	sub_82332AF8(ctx, base);
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x8211f4c4
	if (!ctx.cr6.eq) goto loc_8211F4C4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8211f0e0
	ctx.lr = 0x8211F434;
	sub_8211F0E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8211f458
	if (!ctx.cr6.eq) goto loc_8211F458;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f0,-29872(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -29872);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-29876(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -29876);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,11804(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 11804);
	ctx.f12.f64 = double(temp.f32);
	// b 0x8211f464
	goto loc_8211F464;
loc_8211F458:
	// lfs f0,0(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
loc_8211F464:
	// stfs f12,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8211eff0
	ctx.lr = 0x8211F480;
	sub_8211EFF0(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lbz r30,17(r31)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r31.u32 + 17);
	// lfs f31,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f31.f64 = double(temp.f32);
	// lbz r29,16(r31)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16);
	// lfs f30,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f30.f64 = double(temp.f32);
	// lfs f29,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f29.f64 = double(temp.f32);
	// lfs f28,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f28.f64 = double(temp.f32);
	// bl 0x82141160
	ctx.lr = 0x8211F4A0;
	sub_82141160(ctx, base);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// fmr f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f28.f64;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// fmr f3,f30
	ctx.f3.f64 = ctx.f30.f64;
	// fmr f4,f31
	ctx.f4.f64 = ctx.f31.f64;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// bl 0x822b7f70
	ctx.lr = 0x8211F4C4;
	sub_822B7F70(ctx, base);
loc_8211F4C4:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x823de074
	ctx.lr = 0x8211F4D0;
	__restfpr_28(ctx, base);
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8211F360) {
	__imp__sub_8211F360(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8211F4D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8211F4D4) {
	__imp__sub_8211F4D4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8211F4D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x8211F4E0;
	__savegprlr_25(ctx, base);
	// stfd f29,-88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f29.u64);
	// stfd f30,-80(r1)
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f30.u64);
	// stfd f31,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// mr r31,r9
	ctx.r31.u64 = ctx.r9.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8211f634
	if (ctx.cr6.eq) goto loc_8211F634;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lis r10,-32187
	ctx.r10.s64 = -2109407232;
	// ori r9,r11,61924
	ctx.r9.u64 = ctx.r11.u64 | 61924;
	// addi r11,r10,-15680
	ctx.r11.s64 = ctx.r10.s64 + -15680;
	// mullw r10,r3,r9
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r9.s32);
	// add r29,r10,r11
	ctx.r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8211edc8
	ctx.lr = 0x8211F534;
	sub_8211EDC8(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8211f634
	if (ctx.cr6.eq) goto loc_8211F634;
	// addis r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 65536;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r29,r29,22924
	ctx.r29.s64 = ctx.r29.s64 + 22924;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82334778
	ctx.lr = 0x8211F554;
	sub_82334778(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8211f570
	if (!ctx.cr6.eq) goto loc_8211F570;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82334898
	ctx.lr = 0x8211F568;
	sub_82334898(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8211f634
	if (ctx.cr6.eq) goto loc_8211F634;
loc_8211F570:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,12(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,124(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// lfs f13,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x8211f634
	if (ctx.cr6.eq) goto loc_8211F634;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8211f0e0
	ctx.lr = 0x8211F594;
	sub_8211F0E0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,13712
	ctx.r3.s64 = ctx.r11.s64 + 13712;
	// bl 0x822e84f0
	ctx.lr = 0x8211F5A8;
	sub_822E84F0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x8211f5d0
	if (!ctx.cr6.eq) goto loc_8211F5D0;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f0,-29872(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -29872);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-29876(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -29876);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,11804(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 11804);
	ctx.f12.f64 = double(temp.f32);
	// b 0x8211f5dc
	goto loc_8211F5DC;
loc_8211F5D0:
	// lfs f0,0(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
loc_8211F5DC:
	// stfs f12,120(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// lbz r29,17(r30)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r30.u32 + 17);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lbz r28,16(r30)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r30.u32 + 16);
	// lfs f30,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f30.f64 = double(temp.f32);
	// lfs f29,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f29.f64 = double(temp.f32);
	// bl 0x82141160
	ctx.lr = 0x8211F600;
	sub_82141160(ctx, base);
	// lis r5,32767
	ctx.r5.s64 = 2147418112;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f29.f64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// ori r5,r5,65535
	ctx.r5.u64 = ctx.r5.u64 | 65535;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// stw r25,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r25.u32);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// bl 0x822c1ce8
	ctx.lr = 0x8211F634;
	sub_822C1CE8(ctx, base);
loc_8211F634:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f29,-88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f30,-80(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8211F4D8) {
	__imp__sub_8211F4D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8211F648) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x8211F650;
	__savegprlr_25(ctx, base);
	// stfd f29,-88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f29.u64);
	// stfd f30,-80(r1)
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f30.u64);
	// stfd f31,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r28,r9
	ctx.r28.u64 = ctx.r9.u64;
	// lis r10,-32187
	ctx.r10.s64 = -2109407232;
	// ori r9,r11,61924
	ctx.r9.u64 = ctx.r11.u64 | 61924;
	// addi r11,r10,-15680
	ctx.r11.s64 = ctx.r10.s64 + -15680;
	// mullw r10,r3,r9
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r9.s32);
	// add r29,r10,r11
	ctx.r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// bl 0x8211edc8
	ctx.lr = 0x8211F69C;
	sub_8211EDC8(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8211f76c
	if (ctx.cr6.eq) goto loc_8211F76C;
	// addis r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 65536;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r29,r29,22924
	ctx.r29.s64 = ctx.r29.s64 + 22924;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82334778
	ctx.lr = 0x8211F6BC;
	sub_82334778(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8211f6d8
	if (!ctx.cr6.eq) goto loc_8211F6D8;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82334898
	ctx.lr = 0x8211F6D0;
	sub_82334898(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8211f76c
	if (ctx.cr6.eq) goto loc_8211F76C;
loc_8211F6D8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,12(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,124(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// lfs f13,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x8211f76c
	if (ctx.cr6.eq) goto loc_8211F76C;
	// lfs f0,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// lfs f13,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f12,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// addi r9,r11,1324
	ctx.r9.s64 = ctx.r11.s64 + 1324;
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f12,120(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// bl 0x822c4080
	ctx.lr = 0x8211F71C;
	sub_822C4080(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lbz r29,17(r31)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r31.u32 + 17);
	// lbz r28,16(r31)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16);
	// lfs f30,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f30.f64 = double(temp.f32);
	// lfs f29,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f29.f64 = double(temp.f32);
	// bl 0x82141160
	ctx.lr = 0x8211F738;
	sub_82141160(ctx, base);
	// lis r5,32767
	ctx.r5.s64 = 2147418112;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f29.f64;
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// ori r5,r5,65535
	ctx.r5.u64 = ctx.r5.u64 | 65535;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// stw r25,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r25.u32);
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// bl 0x822c1ce8
	ctx.lr = 0x8211F76C;
	sub_822C1CE8(ctx, base);
loc_8211F76C:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f29,-88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f30,-80(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8211F648) {
	__imp__sub_8211F648(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8211F780) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8211F788;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x82332af8
	ctx.lr = 0x8211F7A0;
	sub_82332AF8(ctx, base);
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8211f7b4
	if (ctx.cr6.eq) goto loc_8211F7B4;
	// lwz r5,104(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// b 0x8211f7b8
	goto loc_8211F7B8;
loc_8211F7B4:
	// lwz r5,100(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
loc_8211F7B8:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8211f7cc
	if (ctx.cr6.eq) goto loc_8211F7CC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lhz r4,126(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 126);
	// bl 0x820f9ae8
	ctx.lr = 0x8211F7CC;
	sub_820F9AE8(ctx, base);
loc_8211F7CC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8211F780) {
	__imp__sub_8211F780(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8211F7D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8211F7D4) {
	__imp__sub_8211F7D4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8211F7D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x8211F7E0;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,208(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 208);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8211f8d4
	if (!ctx.cr6.eq) goto loc_8211F8D4;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x82332af8
	ctx.lr = 0x8211F804;
	sub_82332AF8(ctx, base);
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8211f8bc
	if (ctx.cr6.eq) goto loc_8211F8BC;
	// lwz r11,112(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8211f8d4
	if (ctx.cr6.eq) goto loc_8211F8D4;
	// bl 0x82334408
	ctx.lr = 0x8211F824;
	sub_82334408(ctx, base);
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// add r9,r31,r11
	ctx.r9.u64 = ctx.r31.u64 + ctx.r11.u64;
	// addi r8,r10,-30176
	ctx.r8.s64 = ctx.r10.s64 + -30176;
	// rlwinm r7,r9,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// lis r6,2
	ctx.r6.s64 = 131072;
	// lis r5,-32187
	ctx.r5.s64 = -2109407232;
	// ori r4,r6,61924
	ctx.r4.u64 = ctx.r6.u64 | 61924;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwzx r30,r7,r8
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// mullw r11,r31,r4
	ctx.r11.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r4.s32);
	// addi r10,r5,-15680
	ctx.r10.s64 = ctx.r5.s64 + -15680;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// add r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82118900
	ctx.lr = 0x8211F864;
	sub_82118900(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8211f88c
	if (ctx.cr6.eq) goto loc_8211F88C;
	// addis r3,r31,3
	ctx.r3.s64 = ctx.r31.s64 + 196608;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// clrlwi r5,r29,16
	ctx.r5.u64 = ctx.r29.u32 & 0xFFFF;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r3,-7320
	ctx.r3.s64 = ctx.r3.s64 + -7320;
	// bl 0x820ee1e0
	ctx.lr = 0x8211F884;
	sub_820EE1E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8211f8a4
	if (!ctx.cr6.eq) goto loc_8211F8A4;
loc_8211F88C:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// ori r10,r11,22912
	ctx.r10.u64 = ctx.r11.u64 | 22912;
	// addi r3,r27,224
	ctx.r3.s64 = ctx.r27.s64 + 224;
	// lwzx r4,r31,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// bl 0x8231f840
	ctx.lr = 0x8211F8A4;
	sub_8231F840(ctx, base);
loc_8211F8A4:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r5,112(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 112);
	// lhz r3,334(r27)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r27.u32 + 334);
	// bl 0x820f9a68
	ctx.lr = 0x8211F8B4;
	sub_820F9A68(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_8211F8BC:
	// lwz r5,108(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 108);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8211f8d4
	if (ctx.cr6.eq) goto loc_8211F8D4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lhz r4,334(r27)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r27.u32 + 334);
	// bl 0x820f9ae8
	ctx.lr = 0x8211F8D4;
	sub_820F9AE8(ctx, base);
loc_8211F8D4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8211F7D8) {
	__imp__sub_8211F7D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8211F8DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8211F8DC) {
	__imp__sub_8211F8DC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8211F8E0) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-32187
	ctx.r9.s64 = -2109407232;
	// lis r8,2
	ctx.r8.s64 = 131072;
	// addi r7,r9,-15680
	ctx.r7.s64 = ctx.r9.s64 + -15680;
	// ori r6,r8,61924
	ctx.r6.u64 = ctx.r8.u64 | 61924;
	// addis r11,r7,2
	ctx.r11.s64 = ctx.r7.s64 + 131072;
	// mullw r5,r3,r6
	ctx.r5.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r6.s32);
	// addi r11,r11,19056
	ctx.r11.s64 = ctx.r11.s64 + 19056;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// stwx r10,r5,r11
	PPC_STORE_U32(ctx.r5.u32 + ctx.r11.u32, ctx.r10.u32);
	// b 0x82106d88
	sub_82106D88(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8211F8E0) {
	__imp__sub_8211F8E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8211F90C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8211F90C) {
	__imp__sub_8211F90C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8211F910) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x8211F918;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// ori r9,r10,61924
	ctx.r9.u64 = ctx.r10.u64 | 61924;
	// addi r29,r11,-15680
	ctx.r29.s64 = ctx.r11.s64 + -15680;
	// mullw r28,r3,r9
	ctx.r28.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r9.s32);
	// lis r8,2
	ctx.r8.s64 = 131072;
	// add r31,r28,r29
	ctx.r31.u64 = ctx.r28.u64 + ctx.r29.u64;
	// ori r7,r8,19056
	ctx.r7.u64 = ctx.r8.u64 | 19056;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwzx r3,r31,r7
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8211f988
	if (ctx.cr6.eq) goto loc_8211F988;
	// bl 0x82332af8
	ctx.lr = 0x8211F950;
	sub_82332AF8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addis r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 65536;
	// addi r3,r3,22924
	ctx.r3.s64 = ctx.r3.s64 + 22924;
	// lwz r4,64(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// bl 0x82334778
	ctx.lr = 0x8211F964;
	sub_82334778(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8211f988
	if (ctx.cr6.eq) goto loc_8211F988;
	// addis r10,r29,2
	ctx.r10.s64 = ctx.r29.s64 + 131072;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r10,r10,19056
	ctx.r10.s64 = ctx.r10.s64 + 19056;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stwx r11,r28,r10
	PPC_STORE_U32(ctx.r28.u32 + ctx.r10.u32, ctx.r11.u32);
	// bl 0x82106d88
	ctx.lr = 0x8211F988;
	sub_82106D88(ctx, base);
loc_8211F988:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8211F910) {
	__imp__sub_8211F910(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8211F990) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// addi r10,r11,28832
	ctx.r10.s64 = ctx.r11.s64 + 28832;
	// lwz r11,400(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 400);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r11,404(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 404);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lfs f0,420(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 420);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8211F990) {
	__imp__sub_8211F990(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8211F9B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8211F9B4) {
	__imp__sub_8211F9B4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8211F9B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// addi r10,r11,28832
	ctx.r10.s64 = ctx.r11.s64 + 28832;
	// lwz r11,392(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 392);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r11,396(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 396);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8211F9B8) {
	__imp__sub_8211F9B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8211F9D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8211F9D4) {
	__imp__sub_8211F9D4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8211F9D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// addi r10,r11,28832
	ctx.r10.s64 = ctx.r11.s64 + 28832;
	// lfs f1,428(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 428);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8211F9D8) {
	__imp__sub_8211F9D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8211F9E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8211F9F0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32155
	ctx.r10.s64 = -2107310080;
	// ori r9,r11,48796
	ctx.r9.u64 = ctx.r11.u64 | 48796;
	// addi r11,r10,-29944
	ctx.r11.s64 = ctx.r10.s64 + -29944;
	// mullw r10,r3,r9
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r9.s32);
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r6,4192(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4192);
	// cmpw cr6,r4,r6
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r6.s32, ctx.xer);
	// ble cr6,0x8211fa34
	if (!ctx.cr6.gt) goto loc_8211FA34;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r11,-13336
	ctx.r4.s64 = ctx.r11.s64 + -13336;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822830e8
	ctx.lr = 0x8211FA34;
	sub_822830E8(ctx, base);
loc_8211FA34:
	// lwz r11,4192(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4192);
	// addi r11,r11,-64
	ctx.r11.s64 = ctx.r11.s64 + -64;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x8211fa50
	if (ctx.cr6.gt) goto loc_8211FA50;
loc_8211FA44:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_8211FA50:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x8211fa44
	if (!ctx.cr6.gt) goto loc_8211FA44;
	// rlwinm r11,r31,6,20,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 6) & 0xFC0;
	// li r5,64
	ctx.r5.s64 = 64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r11,96
	ctx.r4.s64 = ctx.r11.s64 + 96;
	// bl 0x823de1f0
	ctx.lr = 0x8211FA70;
	sub_823DE1F0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8211F9E8) {
	__imp__sub_8211F9E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8211FA7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8211FA7C) {
	__imp__sub_8211FA7C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8211FA80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// lis r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-29944
	ctx.r11.s64 = ctx.r11.s64 + -29944;
	// ori r9,r10,48796
	ctx.r9.u64 = ctx.r10.u64 | 48796;
	// addi r8,r11,4192
	ctx.r8.s64 = ctx.r11.s64 + 4192;
	// mullw r7,r3,r9
	ctx.r7.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r9.s32);
	// lwzx r3,r7,r8
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8211FA80) {
	__imp__sub_8211FA80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8211FAA0) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,28832
	ctx.r10.s64 = ctx.r11.s64 + 28832;
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// lwz r11,576(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 576);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,580(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 580);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bl 0x823405b0
	ctx.lr = 0x8211FAD4;
	sub_823405B0(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// addi r3,r31,4112
	ctx.r3.s64 = ctx.r31.s64 + 4112;
	// bl 0x82340608
	ctx.lr = 0x8211FAE0;
	sub_82340608(ctx, base);
	// stw r3,4108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4108, ctx.r3.u32);
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

PPC_WEAK_FUNC(sub_8211FAA0) {
	__imp__sub_8211FAA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8211FAF8) {
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
	// lis r10,0
	ctx.r10.s64 = 0;
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-29944
	ctx.r11.s64 = ctx.r11.s64 + -29944;
	// ori r9,r10,48796
	ctx.r9.u64 = ctx.r10.u64 | 48796;
	// addi r11,r11,4216
	ctx.r11.s64 = ctx.r11.s64 + 4216;
	// mullw r10,r31,r9
	ctx.r10.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r9.s32);
	// lis r5,0
	ctx.r5.s64 = 0;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// ori r5,r5,44196
	ctx.r5.u64 = ctx.r5.u64 | 44196;
	// bl 0x823de1f0
	ctx.lr = 0x8211FB38;
	sub_823DE1F0(ctx, base);
	// lis r8,-32165
	ctx.r8.s64 = -2107965440;
	// mulli r7,r31,12824
	ctx.r7.s64 = ctx.r31.s64 * 12824;
	// addi r11,r8,-16408
	ctx.r11.s64 = ctx.r8.s64 + -16408;
	// addi r6,r11,8208
	ctx.r6.s64 = ctx.r11.s64 + 8208;
	// lwzx r3,r7,r6
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
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

PPC_WEAK_FUNC(sub_8211FAF8) {
	__imp__sub_8211FAF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8211FB60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8211FB68;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82333f60
	ctx.lr = 0x8211FB80;
	sub_82333F60(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32155
	ctx.r10.s64 = -2107310080;
	// ori r9,r11,48796
	ctx.r9.u64 = ctx.r11.u64 | 48796;
	// addi r11,r10,-29944
	ctx.r11.s64 = ctx.r10.s64 + -29944;
	// mullw r10,r31,r9
	ctx.r10.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r9.s32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r30,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r30.u32);
	// stw r29,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8211FB60) {
	__imp__sub_8211FB60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8211FBA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32155
	ctx.r10.s64 = -2107310080;
	// ori r9,r11,48796
	ctx.r9.u64 = ctx.r11.u64 | 48796;
	// addi r11,r10,-29944
	ctx.r11.s64 = ctx.r10.s64 + -29944;
	// mullw r10,r3,r9
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r9.s32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stfs f1,48(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 48, temp.u32);
	// stfs f2,52(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// stfs f3,56(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 56, temp.u32);
	// stfs f4,60(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r11.u32 + 60, temp.u32);
	// stfs f5,64(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + 64, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8211FBA8) {
	__imp__sub_8211FBA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8211FBD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// lis r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-29944
	ctx.r11.s64 = ctx.r11.s64 + -29944;
	// ori r9,r10,48796
	ctx.r9.u64 = ctx.r10.u64 | 48796;
	// addi r8,r11,68
	ctx.r8.s64 = ctx.r11.s64 + 68;
	// mullw r7,r3,r9
	ctx.r7.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r9.s32);
	// stfsx f1,r7,r8
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r7.u32 + ctx.r8.u32, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8211FBD8) {
	__imp__sub_8211FBD8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8211FBF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32155
	ctx.r10.s64 = -2107310080;
	// ori r9,r11,48796
	ctx.r9.u64 = ctx.r11.u64 | 48796;
	// addi r11,r10,-29944
	ctx.r11.s64 = ctx.r10.s64 + -29944;
	// mullw r10,r3,r9
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r9.s32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r8,80(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// or r7,r8,r4
	ctx.r7.u64 = ctx.r8.u64 | ctx.r4.u64;
	// stw r7,80(r11)
	PPC_STORE_U32(ctx.r11.u32 + 80, ctx.r7.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8211FBF8) {
	__imp__sub_8211FBF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8211FC20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8211FC28;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31937
	ctx.r11.s64 = -2093023232;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r31,r11,-17592
	ctx.r31.s64 = ctx.r11.s64 + -17592;
	// addi r29,r10,-28736
	ctx.r29.s64 = ctx.r10.s64 + -28736;
	// addi r10,r31,68
	ctx.r10.s64 = ctx.r31.s64 + 68;
	// lwz r11,-17592(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17592);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// ble cr6,0x8211fc64
	if (!ctx.cr6.gt) goto loc_8211FC64;
	// addi r10,r31,100
	ctx.r10.s64 = ctx.r31.s64 + 100;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r3,4(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x8211fc68
	goto loc_8211FC68;
loc_8211FC64:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_8211FC68:
	// bl 0x823deaf8
	ctx.lr = 0x8211FC6C;
	sub_823DEAF8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8211fc80
	if (ctx.cr6.lt) goto loc_8211FC80;
	// cmpwi cr6,r3,3017
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3017, ctx.xer);
	// blt cr6,0x8211fc90
	if (ctx.cr6.lt) goto loc_8211FC90;
loc_8211FC80:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,-13308
	ctx.r4.s64 = ctx.r11.s64 + -13308;
	// bl 0x822830e8
	ctx.lr = 0x8211FC90;
	sub_822830E8(ctx, base);
loc_8211FC90:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r31,68
	ctx.r10.s64 = ctx.r31.s64 + 68;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// ble cr6,0x8211fcb4
	if (!ctx.cr6.gt) goto loc_8211FCB4;
	// addi r10,r31,100
	ctx.r10.s64 = ctx.r31.s64 + 100;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r29,8(r9)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
loc_8211FCB4:
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// rlwinm r31,r30,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r11,28832
	ctx.r10.s64 = ctx.r11.s64 + 28832;
	// addis r11,r10,9
	ctx.r11.s64 = ctx.r10.s64 + 589824;
	// addi r30,r11,598
	ctx.r30.s64 = ctx.r11.s64 + 598;
	// lhzx r3,r31,r30
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + ctx.r30.u32);
	// bl 0x822a13a0
	ctx.lr = 0x8211FCD0;
	sub_822A13A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
loc_8211FCD8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x8211fcfc
	if (ctx.cr6.eq) goto loc_8211FCFC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8211fcd8
	if (ctx.cr6.eq) goto loc_8211FCD8;
loc_8211FCFC:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8211fd20
	if (ctx.cr6.eq) goto loc_8211FD20;
	// lhzx r3,r31,r30
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + ctx.r30.u32);
	// bl 0x822a2468
	ctx.lr = 0x8211FD0C;
	sub_822A2468(ctx, base);
	// li r5,20
	ctx.r5.s64 = 20;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822a1d20
	ctx.lr = 0x8211FD1C;
	sub_822A1D20(ctx, base);
	// sthx r3,r31,r30
	PPC_STORE_U16(ctx.r31.u32 + ctx.r30.u32, ctx.r3.u16);
loc_8211FD20:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8211FC20) {
	__imp__sub_8211FC20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8211FD28) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82104db8
	sub_82104DB8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8211FD28) {
	__imp__sub_8211FD28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8211FD30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8211FD38;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82365378
	ctx.lr = 0x8211FD40;
	sub_82365378(ctx, base);
	// bl 0x823653a0
	ctx.lr = 0x8211FD44;
	sub_823653A0(ctx, base);
	// bl 0x8238d5d0
	ctx.lr = 0x8211FD48;
	sub_8238D5D0(ctx, base);
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// addi r30,r11,28832
	ctx.r30.s64 = ctx.r11.s64 + 28832;
	// addis r11,r30,9
	ctx.r11.s64 = ctx.r30.s64 + 589824;
	// addi r31,r11,598
	ctx.r31.s64 = ctx.r11.s64 + 598;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r29,r11,-28736
	ctx.r29.s64 = ctx.r11.s64 + -28736;
loc_8211FD60:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r5,20
	ctx.r5.s64 = 20;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822a1d20
	ctx.lr = 0x8211FD70;
	sub_822A1D20(ctx, base);
	// addis r11,r30,9
	ctx.r11.s64 = ctx.r30.s64 + 589824;
	// sth r3,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r3.u16);
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// addi r9,r11,6632
	ctx.r9.s64 = ctx.r11.s64 + 6632;
	// cmpw cr6,r31,r9
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8211fd60
	if (ctx.cr6.lt) goto loc_8211FD60;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82121898
	ctx.lr = 0x8211FD90;
	sub_82121898(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82121950
	ctx.lr = 0x8211FD98;
	sub_82121950(ctx, base);
	// bl 0x82122ba8
	ctx.lr = 0x8211FD9C;
	sub_82122BA8(ctx, base);
	// bl 0x82138f58
	ctx.lr = 0x8211FDA0;
	sub_82138F58(ctx, base);
	// bl 0x8239ccb8
	ctx.lr = 0x8211FDA4;
	sub_8239CCB8(ctx, base);
	// bl 0x820f18b0
	ctx.lr = 0x8211FDA8;
	sub_820F18B0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82106920
	ctx.lr = 0x8211FDB0;
	sub_82106920(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8210a4f8
	ctx.lr = 0x8211FDB8;
	sub_8210A4F8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82105d70
	ctx.lr = 0x8211FDC0;
	sub_82105D70(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82105dd8
	ctx.lr = 0x8211FDC8;
	sub_82105DD8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82105e80
	ctx.lr = 0x8211FDD0;
	sub_82105E80(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82105ee0
	ctx.lr = 0x8211FDD8;
	sub_82105EE0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82105f50
	ctx.lr = 0x8211FDE0;
	sub_82105F50(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8211FD30) {
	__imp__sub_8211FD30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8211FDE8) {
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
	// bl 0x8227d8d0
	ctx.lr = 0x8211FE04;
	sub_8227D8D0(ctx, base);
	// lis r11,-31937
	ctx.r11.s64 = -2093023232;
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
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x8211fe34
	if (!ctx.cr6.gt) goto loc_8211FE34;
	// addi r11,r11,100
	ctx.r11.s64 = ctx.r11.s64 + 100;
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r31,0(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x8211fe3c
	goto loc_8211FE3C;
loc_8211FE34:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r31,r11,-28736
	ctx.r31.s64 = ctx.r11.s64 + -28736;
loc_8211FE3C:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// addi r10,r10,-13248
	ctx.r10.s64 = ctx.r10.s64 + -13248;
loc_8211FE48:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x8211fe6c
	if (ctx.cr6.eq) goto loc_8211FE6C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8211fe48
	if (ctx.cr6.eq) goto loc_8211FE48;
loc_8211FE6C:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8211fe84
	if (!ctx.cr6.eq) goto loc_8211FE84;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r4,r11,-13272
	ctx.r4.s64 = ctx.r11.s64 + -13272;
	// bl 0x822830e8
	ctx.lr = 0x8211FE84;
	sub_822830E8(ctx, base);
loc_8211FE84:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// addi r10,r10,-25528
	ctx.r10.s64 = ctx.r10.s64 + -25528;
loc_8211FE90:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x8211feb4
	if (ctx.cr6.eq) goto loc_8211FEB4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8211fe90
	if (ctx.cr6.eq) goto loc_8211FE90;
loc_8211FEB4:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8211fed0
	if (!ctx.cr6.eq) goto loc_8211FED0;
	// bl 0x8227d8f0
	ctx.lr = 0x8211FEC0;
	sub_8227D8F0(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8227d8b8
	ctx.lr = 0x8211FECC;
	sub_8227D8B8(ctx, base);
	// bl 0x8211fc20
	ctx.lr = 0x8211FED0;
	sub_8211FC20(ctx, base);
loc_8211FED0:
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

PPC_WEAK_FUNC(sub_8211FDE8) {
	__imp__sub_8211FDE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8211FEEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8211FEEC) {
	__imp__sub_8211FEEC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8211FEF0) {
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
	// clrlwi r11,r4,25
	ctx.r11.u64 = ctx.r4.u32 & 0x7F;
	// lis r10,-32165
	ctx.r10.s64 = -2107965440;
	// addi r8,r11,3078
	ctx.r8.s64 = ctx.r11.s64 + 3078;
	// addi r10,r10,-16408
	ctx.r10.s64 = ctx.r10.s64 + -16408;
	// mulli r9,r3,12824
	ctx.r9.s64 = ctx.r3.s64 * 12824;
	// add r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r6,8208(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8208);
	// lwzx r10,r7,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// stw r4,8212(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8212, ctx.r4.u32);
	// cmpw cr6,r4,r6
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r6.s32, ctx.xer);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r31,r10,8216
	ctx.r31.s64 = ctx.r10.s64 + 8216;
	// bne cr6,0x8211ff44
	if (!ctx.cr6.eq) goto loc_8211FF44;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,8204(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8204, ctx.r10.u32);
loc_8211FF44:
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lwz r11,28808(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28808);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8211ff6c
	if (ctx.cr6.eq) goto loc_8211FF6C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r4,r11,-13236
	ctx.r4.s64 = ctx.r11.s64 + -13236;
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x82280a68
	ctx.lr = 0x8211FF6C;
	sub_82280A68(ctx, base);
loc_8211FF6C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8211fde8
	ctx.lr = 0x8211FF74;
	sub_8211FDE8(ctx, base);
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

PPC_WEAK_FUNC(sub_8211FEF0) {
	__imp__sub_8211FEF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8211FF88) {
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
	// lis r10,9
	ctx.r10.s64 = 589824;
	// addi r31,r11,28832
	ctx.r31.s64 = ctx.r11.s64 + 28832;
	// ori r9,r10,6634
	ctx.r9.u64 = ctx.r10.u64 | 6634;
	// lbzx r8,r31,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r9.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8211ffe8
	if (ctx.cr6.eq) goto loc_8211FFE8;
	// bl 0x820f9850
	ctx.lr = 0x8211FFB8;
	sub_820F9850(ctx, base);
	// lis r11,9
	ctx.r11.s64 = 589824;
	// lis r10,9
	ctx.r10.s64 = 589824;
	// lis r9,9
	ctx.r9.s64 = 589824;
	// ori r8,r11,6634
	ctx.r8.u64 = ctx.r11.u64 | 6634;
	// ori r7,r10,6633
	ctx.r7.u64 = ctx.r10.u64 | 6633;
	// ori r6,r9,6635
	ctx.r6.u64 = ctx.r9.u64 | 6635;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stbx r11,r31,r8
	PPC_STORE_U8(ctx.r31.u32 + ctx.r8.u32, ctx.r11.u8);
	// stbx r10,r31,r7
	PPC_STORE_U8(ctx.r31.u32 + ctx.r7.u32, ctx.r10.u8);
	// stbx r9,r31,r6
	PPC_STORE_U8(ctx.r31.u32 + ctx.r6.u32, ctx.r9.u8);
loc_8211FFE8:
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

PPC_WEAK_FUNC(sub_8211FF88) {
	__imp__sub_8211FF88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8211FFFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8211FFFC) {
	__imp__sub_8211FFFC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82120000) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82120008;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82135128
	ctx.lr = 0x82120018;
	sub_82135128(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822f2260
	ctx.lr = 0x82120028;
	sub_822F2260(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x82120044
	if (ctx.cr6.eq) goto loc_82120044;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x822f22c8
	ctx.lr = 0x8212003C;
	sub_822F22C8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_82120044:
	// bl 0x822f2340
	ctx.lr = 0x82120048;
	sub_822F2340(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821350c0
	ctx.lr = 0x82120054;
	sub_821350C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82120078
	if (ctx.cr6.eq) goto loc_82120078;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822f2350
	ctx.lr = 0x8212006C;
	sub_822F2350(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_82120078:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,-13208
	ctx.r4.s64 = ctx.r11.s64 + -13208;
	// bl 0x822830e8
	ctx.lr = 0x82120088;
	sub_822830E8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82120000) {
	__imp__sub_82120000(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82120094) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82120094) {
	__imp__sub_82120094(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82120098) {
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
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8239cb00
	ctx.lr = 0x821200B0;
	sub_8239CB00(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8233dbd8
	ctx.lr = 0x821200B8;
	sub_8233DBD8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82120098) {
	__imp__sub_82120098(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821200C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x821200D0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x821332c8
	ctx.lr = 0x821200E8;
	sub_821332C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82120198
	if (ctx.cr6.eq) goto loc_82120198;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822b6fb0
	ctx.lr = 0x821200FC;
	sub_822B6FB0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8212017c
	if (!ctx.cr6.eq) goto loc_8212017C;
	// lis r11,-31859
	ctx.r11.s64 = -2087911424;
	// lwz r11,31488(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 31488);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82120178
	if (ctx.cr6.eq) goto loc_82120178;
	// lis r11,-31859
	ctx.r11.s64 = -2087911424;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r11,31484(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 31484);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82120154
	if (ctx.cr6.eq) goto loc_82120154;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r3,6
	ctx.r3.s64 = 6;
	// addi r4,r11,-13068
	ctx.r4.s64 = ctx.r11.s64 + -13068;
	// bl 0x822830e8
	ctx.lr = 0x82120140;
	sub_822830E8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,-13092
	ctx.r3.s64 = ctx.r11.s64 + -13092;
	// bl 0x822e84f0
	ctx.lr = 0x82120150;
	sub_822E84F0(ctx, base);
	// b 0x8212017c
	goto loc_8212017C;
loc_82120154:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r3,14
	ctx.r3.s64 = 14;
	// addi r4,r11,-13144
	ctx.r4.s64 = ctx.r11.s64 + -13144;
	// bl 0x82280c30
	ctx.lr = 0x82120164;
	sub_82280C30(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,-13092
	ctx.r3.s64 = ctx.r11.s64 + -13092;
	// bl 0x822e84f0
	ctx.lr = 0x82120174;
	sub_822E84F0(ctx, base);
	// b 0x8212017c
	goto loc_8212017C;
loc_82120178:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8212017C:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r8,32
	ctx.r8.s64 = 32;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82123ab0
	ctx.lr = 0x82120198;
	sub_82123AB0(ctx, base);
loc_82120198:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821200C8) {
	__imp__sub_821200C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821201A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// rlwinm r10,r3,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r11,28832
	ctx.r9.s64 = ctx.r11.s64 + 28832;
	// addis r11,r9,9
	ctx.r11.s64 = ctx.r9.s64 + 589824;
	// addi r8,r11,598
	ctx.r8.s64 = ctx.r11.s64 + 598;
	// lhzx r3,r10,r8
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r8.u32);
	// b 0x822a13a0
	sub_822A13A0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821201A0) {
	__imp__sub_821201A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821201BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821201BC) {
	__imp__sub_821201BC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821201C0) {
	PPC_FUNC_PROLOGUE();
	// b 0x822ddd08
	sub_822DDD08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821201C0) {
	__imp__sub_821201C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821201C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821201C4) {
	__imp__sub_821201C4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821201C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// addi r10,r11,28832
	ctx.r10.s64 = ctx.r11.s64 + 28832;
	// lfs f0,552(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 552);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lfs f0,556(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 556);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lfs f0,560(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 560);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821201C8) {
	__imp__sub_821201C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821201EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821201EC) {
	__imp__sub_821201EC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821201F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// addi r10,r11,28832
	ctx.r10.s64 = ctx.r11.s64 + 28832;
	// lfs f0,564(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 564);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lfs f0,568(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 568);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lfs f0,572(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 572);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821201F0) {
	__imp__sub_821201F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82120214) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82120214) {
	__imp__sub_82120214(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82120218) {
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
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,-19420(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19420);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82120274
	if (!ctx.cr6.eq) goto loc_82120274;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lfs f0,24(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r11,28832
	ctx.r10.s64 = ctx.r11.s64 + 28832;
	// stfs f0,564(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 564, temp.u32);
	// lfs f0,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,568(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 568, temp.u32);
	// lfs f0,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,572(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 572, temp.u32);
	// lfs f0,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,552(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 552, temp.u32);
	// lfs f0,40(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,556(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 556, temp.u32);
	// lfs f0,44(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,560(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 560, temp.u32);
loc_82120274:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82388f20
	ctx.lr = 0x82120280;
	sub_82388F20(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8238b158
	ctx.lr = 0x8212028C;
	sub_8238B158(ctx, base);
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

PPC_WEAK_FUNC(sub_82120218) {
	__imp__sub_82120218(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821202A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r10,r11,28832
	ctx.r10.s64 = ctx.r11.s64 + 28832;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r6,404(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 404);
	// lwz r5,400(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 400);
	// b 0x82392d48
	sub_82392D48(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821202A0) {
	__imp__sub_821202A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821202BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821202BC) {
	__imp__sub_821202BC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821202C0) {
	PPC_FUNC_PROLOGUE();
	// b 0x82392d48
	sub_82392D48(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821202C0) {
	__imp__sub_821202C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821202C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821202C4) {
	__imp__sub_821202C4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821202C8) {
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
	ctx.lr = 0x821202DC;
	__savefpr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stfs f5,196(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// lwz r31,236(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// stfs f6,204(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// addi r7,r1,220
	ctx.r7.s64 = ctx.r1.s64 + 220;
	// stfs f7,212(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// addi r6,r1,204
	ctx.r6.s64 = ctx.r1.s64 + 204;
	// stfs f8,220(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// addi r5,r1,212
	ctx.r5.s64 = ctx.r1.s64 + 212;
	// addi r4,r1,196
	ctx.r4.s64 = ctx.r1.s64 + 196;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// fmr f29,f3
	ctx.f29.f64 = ctx.f3.f64;
	// fmr f28,f4
	ctx.f28.f64 = ctx.f4.f64;
	// bl 0x8238bfb8
	ctx.lr = 0x8212031C;
	sub_8238BFB8(ctx, base);
	// lwz r11,228(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// lfs f8,220(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	ctx.f8.f64 = double(temp.f32);
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// lfs f7,212(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	ctx.f7.f64 = double(temp.f32);
	// fmr f4,f28
	ctx.f4.f64 = ctx.f28.f64;
	// lfs f6,204(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	ctx.f6.f64 = double(temp.f32);
	// fmr f3,f29
	ctx.f3.f64 = ctx.f29.f64;
	// lfs f5,196(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	ctx.f5.f64 = double(temp.f32);
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x823915b0
	ctx.lr = 0x8212034C;
	sub_823915B0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// addi r12,r1,-16
	ctx.r12.s64 = ctx.r1.s64 + -16;
	// bl 0x823de074
	ctx.lr = 0x82120358;
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

PPC_WEAK_FUNC(sub_821202C8) {
	__imp__sub_821202C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82120368) {
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
	ctx.lr = 0x8212037C;
	__savefpr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stfs f5,196(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// lwz r31,236(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// stfs f6,204(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// addi r7,r1,220
	ctx.r7.s64 = ctx.r1.s64 + 220;
	// stfs f7,212(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// addi r6,r1,204
	ctx.r6.s64 = ctx.r1.s64 + 204;
	// stfs f8,220(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// addi r5,r1,212
	ctx.r5.s64 = ctx.r1.s64 + 212;
	// addi r4,r1,196
	ctx.r4.s64 = ctx.r1.s64 + 196;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// fmr f29,f3
	ctx.f29.f64 = ctx.f3.f64;
	// fmr f28,f4
	ctx.f28.f64 = ctx.f4.f64;
	// bl 0x8238bfb8
	ctx.lr = 0x821203BC;
	sub_8238BFB8(ctx, base);
	// lwz r11,228(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// lfs f8,220(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	ctx.f8.f64 = double(temp.f32);
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// lfs f7,212(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	ctx.f7.f64 = double(temp.f32);
	// fmr f4,f28
	ctx.f4.f64 = ctx.f28.f64;
	// lfs f6,204(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	ctx.f6.f64 = double(temp.f32);
	// fmr f3,f29
	ctx.f3.f64 = ctx.f29.f64;
	// lfs f5,196(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	ctx.f5.f64 = double(temp.f32);
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82391748
	ctx.lr = 0x821203EC;
	sub_82391748(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// addi r12,r1,-16
	ctx.r12.s64 = ctx.r1.s64 + -16;
	// bl 0x823de074
	ctx.lr = 0x821203F8;
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

PPC_WEAK_FUNC(sub_82120368) {
	__imp__sub_82120368(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82120408) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x823de028
	ctx.lr = 0x82120418;
	__savefpr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stfs f1,172(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// addi r7,r1,196
	ctx.r7.s64 = ctx.r1.s64 + 196;
	// stfs f2,180(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// addi r6,r1,188
	ctx.r6.s64 = ctx.r1.s64 + 188;
	// stfs f3,188(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// addi r5,r1,180
	ctx.r5.s64 = ctx.r1.s64 + 180;
	// stfs f4,196(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// addi r4,r1,172
	ctx.r4.s64 = ctx.r1.s64 + 172;
	// fmr f31,f5
	ctx.f31.f64 = ctx.f5.f64;
	// fmr f30,f6
	ctx.f30.f64 = ctx.f6.f64;
	// fmr f29,f7
	ctx.f29.f64 = ctx.f7.f64;
	// fmr f28,f8
	ctx.f28.f64 = ctx.f8.f64;
	// bl 0x82140bc8
	ctx.lr = 0x82120450;
	sub_82140BC8(ctx, base);
	// lwz r11,260(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// lwz r10,252(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	// lfs f4,196(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,188(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	ctx.f3.f64 = double(temp.f32);
	// fmr f8,f28
	ctx.f8.f64 = ctx.f28.f64;
	// lfs f2,180(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	ctx.f2.f64 = double(temp.f32);
	// fmr f7,f29
	ctx.f7.f64 = ctx.f29.f64;
	// lfs f1,172(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	ctx.f1.f64 = double(temp.f32);
	// fmr f6,f30
	ctx.f6.f64 = ctx.f30.f64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// fmr f5,f31
	ctx.f5.f64 = ctx.f31.f64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bl 0x821202c8
	ctx.lr = 0x82120484;
	sub_821202C8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x823de074
	ctx.lr = 0x82120490;
	__restfpr_28(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82120408) {
	__imp__sub_82120408(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8212049C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8212049C) {
	__imp__sub_8212049C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821204A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x823de028
	ctx.lr = 0x821204B0;
	__savefpr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stfs f1,172(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// addi r7,r1,196
	ctx.r7.s64 = ctx.r1.s64 + 196;
	// stfs f2,180(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// addi r6,r1,188
	ctx.r6.s64 = ctx.r1.s64 + 188;
	// stfs f3,188(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// addi r5,r1,180
	ctx.r5.s64 = ctx.r1.s64 + 180;
	// stfs f4,196(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// addi r4,r1,172
	ctx.r4.s64 = ctx.r1.s64 + 172;
	// fmr f31,f5
	ctx.f31.f64 = ctx.f5.f64;
	// fmr f30,f6
	ctx.f30.f64 = ctx.f6.f64;
	// fmr f29,f7
	ctx.f29.f64 = ctx.f7.f64;
	// fmr f28,f8
	ctx.f28.f64 = ctx.f8.f64;
	// bl 0x82140810
	ctx.lr = 0x821204E8;
	sub_82140810(ctx, base);
	// lwz r11,260(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// lwz r10,252(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	// lfs f4,196(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,188(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	ctx.f3.f64 = double(temp.f32);
	// fmr f8,f28
	ctx.f8.f64 = ctx.f28.f64;
	// lfs f2,180(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	ctx.f2.f64 = double(temp.f32);
	// fmr f7,f29
	ctx.f7.f64 = ctx.f29.f64;
	// lfs f1,172(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	ctx.f1.f64 = double(temp.f32);
	// fmr f6,f30
	ctx.f6.f64 = ctx.f30.f64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// fmr f5,f31
	ctx.f5.f64 = ctx.f31.f64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bl 0x821202c8
	ctx.lr = 0x8212051C;
	sub_821202C8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x823de074
	ctx.lr = 0x82120528;
	__restfpr_28(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821204A0) {
	__imp__sub_821204A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82120534) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82120534) {
	__imp__sub_82120534(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82120538) {
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
	ctx.lr = 0x8212054C;
	__savefpr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stfs f5,212(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// lwz r31,260(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// stfs f6,220(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// addi r7,r1,236
	ctx.r7.s64 = ctx.r1.s64 + 236;
	// stfs f7,228(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 228, temp.u32);
	// addi r6,r1,220
	ctx.r6.s64 = ctx.r1.s64 + 220;
	// stfs f8,236(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 236, temp.u32);
	// addi r5,r1,228
	ctx.r5.s64 = ctx.r1.s64 + 228;
	// addi r4,r1,212
	ctx.r4.s64 = ctx.r1.s64 + 212;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// fmr f29,f3
	ctx.f29.f64 = ctx.f3.f64;
	// fmr f28,f4
	ctx.f28.f64 = ctx.f4.f64;
	// fmr f27,f9
	ctx.f27.f64 = ctx.f9.f64;
	// bl 0x8238bfb8
	ctx.lr = 0x82120590;
	sub_8238BFB8(ctx, base);
	// lwz r11,252(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	// lfs f8,236(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	ctx.f8.f64 = double(temp.f32);
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// lfs f7,228(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	ctx.f7.f64 = double(temp.f32);
	// fmr f9,f27
	ctx.f9.f64 = ctx.f27.f64;
	// lfs f6,220(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	ctx.f6.f64 = double(temp.f32);
	// fmr f4,f28
	ctx.f4.f64 = ctx.f28.f64;
	// lfs f5,212(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	ctx.f5.f64 = double(temp.f32);
	// fmr f3,f29
	ctx.f3.f64 = ctx.f29.f64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x823918e0
	ctx.lr = 0x821205C4;
	sub_823918E0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// addi r12,r1,-16
	ctx.r12.s64 = ctx.r1.s64 + -16;
	// bl 0x823de070
	ctx.lr = 0x821205D0;
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

PPC_WEAK_FUNC(sub_82120538) {
	__imp__sub_82120538(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821205E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x823de028
	ctx.lr = 0x821205F0;
	__savefpr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stfs f1,172(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// addi r7,r1,196
	ctx.r7.s64 = ctx.r1.s64 + 196;
	// stfs f2,180(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// addi r6,r1,188
	ctx.r6.s64 = ctx.r1.s64 + 188;
	// stfs f3,188(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// addi r5,r1,180
	ctx.r5.s64 = ctx.r1.s64 + 180;
	// stfs f4,196(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// addi r4,r1,172
	ctx.r4.s64 = ctx.r1.s64 + 172;
	// fmr f31,f5
	ctx.f31.f64 = ctx.f5.f64;
	// fmr f30,f6
	ctx.f30.f64 = ctx.f6.f64;
	// fmr f29,f7
	ctx.f29.f64 = ctx.f7.f64;
	// fmr f28,f8
	ctx.f28.f64 = ctx.f8.f64;
	// bl 0x82140bc8
	ctx.lr = 0x82120628;
	sub_82140BC8(ctx, base);
	// lwz r11,260(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// lwz r10,252(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	// lfs f4,196(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,188(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	ctx.f3.f64 = double(temp.f32);
	// fmr f8,f28
	ctx.f8.f64 = ctx.f28.f64;
	// lfs f2,180(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	ctx.f2.f64 = double(temp.f32);
	// fmr f7,f29
	ctx.f7.f64 = ctx.f29.f64;
	// lfs f1,172(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	ctx.f1.f64 = double(temp.f32);
	// fmr f6,f30
	ctx.f6.f64 = ctx.f30.f64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// fmr f5,f31
	ctx.f5.f64 = ctx.f31.f64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bl 0x82120368
	ctx.lr = 0x8212065C;
	sub_82120368(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x823de074
	ctx.lr = 0x82120668;
	__restfpr_28(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821205E0) {
	__imp__sub_821205E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82120674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82120674) {
	__imp__sub_82120674(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82120678) {
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
	ctx.lr = 0x8212068C;
	__savefpr_27(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stfs f1,220(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// addi r7,r1,244
	ctx.r7.s64 = ctx.r1.s64 + 244;
	// stfs f2,228(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 228, temp.u32);
	// addi r6,r1,236
	ctx.r6.s64 = ctx.r1.s64 + 236;
	// stfs f3,236(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 236, temp.u32);
	// addi r5,r1,228
	ctx.r5.s64 = ctx.r1.s64 + 228;
	// stfs f4,244(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 244, temp.u32);
	// addi r4,r1,220
	ctx.r4.s64 = ctx.r1.s64 + 220;
	// stfs f9,300(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 300, temp.u32);
	// fmr f31,f5
	ctx.f31.f64 = ctx.f5.f64;
	// stfs f10,308(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 308, temp.u32);
	// fmr f30,f6
	ctx.f30.f64 = ctx.f6.f64;
	// stfs f11,316(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 316, temp.u32);
	// fmr f29,f7
	ctx.f29.f64 = ctx.f7.f64;
	// stfs f12,324(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 324, temp.u32);
	// fmr f28,f8
	ctx.f28.f64 = ctx.f8.f64;
	// fmr f27,f13
	ctx.f27.f64 = ctx.f13.f64;
	// bl 0x82140bc8
	ctx.lr = 0x821206D8;
	sub_82140BC8(ctx, base);
	// lwz r31,348(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 348);
	// addi r7,r1,324
	ctx.r7.s64 = ctx.r1.s64 + 324;
	// addi r6,r1,316
	ctx.r6.s64 = ctx.r1.s64 + 316;
	// addi r5,r1,308
	ctx.r5.s64 = ctx.r1.s64 + 308;
	// addi r4,r1,300
	ctx.r4.s64 = ctx.r1.s64 + 300;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8238bfb8
	ctx.lr = 0x821206F4;
	sub_8238BFB8(ctx, base);
	// lwz r11,340(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// lfs f12,324(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	ctx.f12.f64 = double(temp.f32);
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r31.u32);
	// lfs f11,316(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	ctx.f11.f64 = double(temp.f32);
	// fmr f13,f27
	ctx.f13.f64 = ctx.f27.f64;
	// lfs f10,308(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	ctx.f10.f64 = double(temp.f32);
	// fmr f8,f28
	ctx.f8.f64 = ctx.f28.f64;
	// lfs f9,300(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 300);
	ctx.f9.f64 = double(temp.f32);
	// fmr f7,f29
	ctx.f7.f64 = ctx.f29.f64;
	// lfs f4,244(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	ctx.f4.f64 = double(temp.f32);
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// lfs f3,236(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	ctx.f3.f64 = double(temp.f32);
	// fmr f6,f30
	ctx.f6.f64 = ctx.f30.f64;
	// lfs f2,228(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	ctx.f2.f64 = double(temp.f32);
	// fmr f5,f31
	ctx.f5.f64 = ctx.f31.f64;
	// lfs f1,220(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x823919d8
	ctx.lr = 0x82120738;
	sub_823919D8(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// addi r12,r1,-16
	ctx.r12.s64 = ctx.r1.s64 + -16;
	// bl 0x823de070
	ctx.lr = 0x82120744;
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

PPC_WEAK_FUNC(sub_82120678) {
	__imp__sub_82120678(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82120754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82120754) {
	__imp__sub_82120754(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82120758) {
	PPC_FUNC_PROLOGUE();
	// b 0x82393cc0
	sub_82393CC0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82120758) {
	__imp__sub_82120758(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8212075C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8212075C) {
	__imp__sub_8212075C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82120760) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32155
	ctx.r10.s64 = -2107310080;
	// ori r9,r11,48796
	ctx.r9.u64 = ctx.r11.u64 | 48796;
	// addi r11,r10,-29944
	ctx.r11.s64 = ctx.r10.s64 + -29944;
	// mullw r10,r3,r9
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r9.s32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stfs f1,72(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 72, temp.u32);
	// stfs f2,76(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r11.u32 + 76, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82120760) {
	__imp__sub_82120760(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82120784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82120784) {
	__imp__sub_82120784(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82120788) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,0
	ctx.r10.s64 = 0;
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// ori r9,r10,48796
	ctx.r9.u64 = ctx.r10.u64 | 48796;
	// addi r11,r11,-29944
	ctx.r11.s64 = ctx.r11.s64 + -29944;
	// mullw r10,r3,r9
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r9.s32);
	// addi r11,r11,84
	ctx.r11.s64 = ctx.r11.s64 + 84;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f12,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82120788) {
	__imp__sub_82120788(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821207C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32155
	ctx.r10.s64 = -2107310080;
	// ori r9,r11,48796
	ctx.r9.u64 = ctx.r11.u64 | 48796;
	// addi r11,r10,-29944
	ctx.r11.s64 = ctx.r10.s64 + -29944;
	// mullw r10,r3,r9
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r9.s32);
	// addi r8,r4,21
	ctx.r8.s64 = ctx.r4.s64 + 21;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r10,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f0,f2
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f2.f64));
	// fsubs f12,f1,f0
	ctx.f12.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// fsel f11,f13,f2,f0
	ctx.f11.f64 = ctx.f13.f64 >= 0.0 ? ctx.f2.f64 : ctx.f0.f64;
	// fsel f10,f12,f1,f11
	ctx.f10.f64 = ctx.f12.f64 >= 0.0 ? ctx.f1.f64 : ctx.f11.f64;
	// stfsx f10,r10,r11
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821207C0) {
	__imp__sub_821207C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821207FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821207FC) {
	__imp__sub_821207FC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82120800) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82120808;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82141398
	ctx.lr = 0x82120810;
	sub_82141398(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82141bf0
	ctx.lr = 0x82120818;
	sub_82141BF0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82120830
	if (!ctx.cr6.eq) goto loc_82120830;
	// bl 0x82141040
	ctx.lr = 0x82120828;
	sub_82141040(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_82120830:
	// li r30,0
	ctx.r30.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82120838:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821413c8
	ctx.lr = 0x82120840;
	sub_821413C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82120860
	if (ctx.cr6.eq) goto loc_82120860;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82111cf8
	ctx.lr = 0x8212085C;
	sub_82111CF8(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
loc_82120860:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// blt cr6,0x82120838
	if (ctx.cr6.lt) goto loc_82120838;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82120800) {
	__imp__sub_82120800(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82120874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82120874) {
	__imp__sub_82120874(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82120878) {
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
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lis r10,9
	ctx.r10.s64 = 589824;
	// addi r9,r11,28832
	ctx.r9.s64 = ctx.r11.s64 + 28832;
	// ori r8,r10,6632
	ctx.r8.u64 = ctx.r10.u64 | 6632;
	// lbzx r7,r9,r8
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r8.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x821208c4
	if (ctx.cr6.eq) goto loc_821208C4;
	// bl 0x82365378
	ctx.lr = 0x821208A4;
	sub_82365378(ctx, base);
	// bl 0x823653a0
	ctx.lr = 0x821208A8;
	sub_823653A0(ctx, base);
	// bl 0x82131ff8
	ctx.lr = 0x821208AC;
	sub_82131FF8(ctx, base);
	// bl 0x82132118
	ctx.lr = 0x821208B0;
	sub_82132118(ctx, base);
	// bl 0x822c52a8
	ctx.lr = 0x821208B4;
	sub_822C52A8(ctx, base);
	// lis r11,-31936
	ctx.r11.s64 = -2092957696;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,-9404(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9404);
	// bl 0x822e1f80
	ctx.lr = 0x821208C4;
	sub_822E1F80(ctx, base);
loc_821208C4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82120878) {
	__imp__sub_82120878(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821208D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821208D4) {
	__imp__sub_821208D4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821208D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x821208E0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82310110
	ctx.lr = 0x821208EC;
	sub_82310110(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82368578
	ctx.lr = 0x821208F4;
	sub_82368578(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-27912
	ctx.r3.s64 = ctx.r11.s64 + -27912;
	// bl 0x822e04f8
	ctx.lr = 0x82120900;
	sub_822E04F8(ctx, base);
	// lis r10,-32165
	ctx.r10.s64 = -2107965440;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r31,r10,28832
	ctx.r31.s64 = ctx.r10.s64 + 28832;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x822d3e08
	ctx.lr = 0x8212091C;
	sub_822D3E08(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82310050
	ctx.lr = 0x82120924;
	sub_82310050(ctx, base);
	// lis r9,9
	ctx.r9.s64 = 589824;
	// lis r8,9
	ctx.r8.s64 = 589824;
	// ori r7,r9,6635
	ctx.r7.u64 = ctx.r9.u64 | 6635;
	// ori r6,r8,6634
	ctx.r6.u64 = ctx.r8.u64 | 6634;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stbx r11,r31,r7
	PPC_STORE_U8(ctx.r31.u32 + ctx.r7.u32, ctx.r11.u8);
	// stbx r10,r31,r6
	PPC_STORE_U8(ctx.r31.u32 + ctx.r6.u32, ctx.r10.u8);
	// bl 0x820f9110
	ctx.lr = 0x8212094C;
	sub_820F9110(ctx, base);
	// bl 0x82310110
	ctx.lr = 0x82120950;
	sub_82310110(ctx, base);
	// subf r5,r29,r3
	ctx.r5.s64 = ctx.r3.s64 - ctx.r29.s64;
	// lis r3,-32255
	ctx.r3.s64 = -2113863680;
	// extsw r11,r5
	ctx.r11.s64 = ctx.r5.s32;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// addi r4,r10,-13028
	ctx.r4.s64 = ctx.r10.s64 + -13028;
	// lfd f0,-12992(r3)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r3.u32 + -12992);
	// li r3,14
	ctx.r3.s64 = 14;
	// fmul f1,f13,f0
	ctx.f1.f64 = ctx.f13.f64 * ctx.f0.f64;
	// stfd f1,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x82280900
	ctx.lr = 0x82120988;
	sub_82280900(ctx, base);
	// bl 0x8238eb90
	ctx.lr = 0x8212098C;
	sub_8238EB90(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82121898
	ctx.lr = 0x82120994;
	sub_82121898(ctx, base);
	// bl 0x82122ba8
	ctx.lr = 0x82120998;
	sub_82122BA8(ctx, base);
	// bl 0x82138f58
	ctx.lr = 0x8212099C;
	sub_82138F58(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821208D8) {
	__imp__sub_821208D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821209A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821209A4) {
	__imp__sub_821209A4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821209A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x821209B0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31822
	ctx.r11.s64 = -2085486592;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r4,-356(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -356);
	// bl 0x82121810
	ctx.lr = 0x821209C4;
	sub_82121810(ctx, base);
	// bl 0x8210d068
	ctx.lr = 0x821209C8;
	sub_8210D068(ctx, base);
	// lis r10,-32165
	ctx.r10.s64 = -2107965440;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// addi r26,r10,28832
	ctx.r26.s64 = ctx.r10.s64 + 28832;
	// lis r28,-32190
	ctx.r28.s64 = -2109603840;
	// addi r29,r11,9240
	ctx.r29.s64 = ctx.r11.s64 + 9240;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r29,24
	ctx.r31.s64 = ctx.r29.s64 + 24;
	// stw r11,348(r26)
	PPC_STORE_U32(ctx.r26.u32 + 348, ctx.r11.u32);
	// lis r27,-32166
	ctx.r27.s64 = -2108030976;
	// lwz r10,-32312(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + -32312);
loc_821209F4:
	// lbz r9,29088(r27)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r27.u32 + 29088);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82120a18
	if (!ctx.cr6.eq) goto loc_82120A18;
	// subfc r11,r10,r30
	ctx.xer.ca = ctx.r30.u32 >= ctx.r10.u32;
	ctx.r11.s64 = ctx.r30.s64 - ctx.r10.s64;
	// eqv r8,r10,r30
	ctx.r8.u64 = ~(ctx.r10.u64 ^ ctx.r30.u64);
	// rlwinm r7,r8,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// addze r6,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r6.s64 = temp.s64;
	// clrlwi r11,r6,31
	ctx.r11.u64 = ctx.r6.u32 & 0x1;
	// b 0x82120a28
	goto loc_82120A28;
loc_82120A18:
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cntlzw r8,r11
	ctx.r8.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r8,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
loc_82120A28:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82120a4c
	if (ctx.cr6.eq) goto loc_82120A4C;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x82120a44
	if (ctx.cr6.eq) goto loc_82120A44;
	// lhz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
loc_82120A44:
	// bl 0x8210d098
	ctx.lr = 0x82120A48;
	sub_8210D098(ctx, base);
	// lwz r10,-32312(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + -32312);
loc_82120A4C:
	// addi r31,r31,9780
	ctx.r31.s64 = ctx.r31.s64 + 9780;
	// addi r11,r29,19584
	ctx.r11.s64 = ctx.r29.s64 + 19584;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821209f4
	if (ctx.cr6.lt) goto loc_821209F4;
	// bl 0x8210c918
	ctx.lr = 0x82120A64;
	sub_8210C918(ctx, base);
	// lwz r10,-32312(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + -32312);
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r29,24
	ctx.r31.s64 = ctx.r29.s64 + 24;
loc_82120A70:
	// lbz r9,29088(r27)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r27.u32 + 29088);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82120a94
	if (!ctx.cr6.eq) goto loc_82120A94;
	// subfc r11,r10,r30
	ctx.xer.ca = ctx.r30.u32 >= ctx.r10.u32;
	ctx.r11.s64 = ctx.r30.s64 - ctx.r10.s64;
	// eqv r8,r10,r30
	ctx.r8.u64 = ~(ctx.r10.u64 ^ ctx.r30.u64);
	// rlwinm r7,r8,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// addze r6,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r6.s64 = temp.s64;
	// clrlwi r11,r6,31
	ctx.r11.u64 = ctx.r6.u32 & 0x1;
	// b 0x82120aa4
	goto loc_82120AA4;
loc_82120A94:
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cntlzw r8,r11
	ctx.r8.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r8,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
loc_82120AA4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82120ac8
	if (ctx.cr6.eq) goto loc_82120AC8;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x82120ac0
	if (ctx.cr6.eq) goto loc_82120AC0;
	// lhz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
loc_82120AC0:
	// bl 0x8210c950
	ctx.lr = 0x82120AC4;
	sub_8210C950(ctx, base);
	// lwz r10,-32312(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + -32312);
loc_82120AC8:
	// addi r31,r31,9780
	ctx.r31.s64 = ctx.r31.s64 + 9780;
	// addi r11,r29,19584
	ctx.r11.s64 = ctx.r29.s64 + 19584;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82120a70
	if (ctx.cr6.lt) goto loc_82120A70;
	// lwsync 
	// lis r10,9
	ctx.r10.s64 = 589824;
	// li r11,1
	ctx.r11.s64 = 1;
	// ori r9,r10,6633
	ctx.r9.u64 = ctx.r10.u64 | 6633;
	// stbx r11,r26,r9
	PPC_STORE_U8(ctx.r26.u32 + ctx.r9.u32, ctx.r11.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821209A8) {
	__imp__sub_821209A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82120AF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32166
	ctx.r10.s64 = -2108030976;
	// lis r7,-32190
	ctx.r7.s64 = -2109603840;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// addi r9,r11,9240
	ctx.r9.s64 = ctx.r11.s64 + 9240;
	// lbz r8,29088(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 29088);
	// lwz r10,-32312(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + -32312);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82120b34
	if (!ctx.cr6.eq) goto loc_82120B34;
	// li r11,0
	ctx.r11.s64 = 0;
	// subfc r7,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r7.s64 = ctx.r11.s64 - ctx.r10.s64;
	// eqv r6,r10,r11
	ctx.r6.u64 = ~(ctx.r10.u64 ^ ctx.r11.u64);
	// rlwinm r5,r6,1,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0x1;
	// addze r4,r5
	temp.s64 = ctx.r5.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r5.u32;
	ctx.r4.s64 = temp.s64;
	// clrlwi r11,r4,31
	ctx.r11.u64 = ctx.r4.u32 & 0x1;
	// b 0x82120b44
	goto loc_82120B44;
loc_82120B34:
	// lwz r11,16(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cntlzw r7,r11
	ctx.r7.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r7,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
loc_82120B44:
	// clrlwi r7,r11,24
	ctx.r7.u64 = ctx.r11.u32 & 0xFF;
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// li r6,6
	ctx.r6.s64 = 6;
	// addi r7,r11,-30024
	ctx.r7.s64 = ctx.r11.s64 + -30024;
	// beq cr6,0x82120b7c
	if (ctx.cr6.eq) goto loc_82120B7C;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82120b6c
	if (!ctx.cr6.eq) goto loc_82120B6C;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82120b70
	goto loc_82120B70;
loc_82120B6C:
	// lhz r11,24(r9)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r9.u32 + 24);
loc_82120B70:
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r5,r7,12
	ctx.r5.s64 = ctx.r7.s64 + 12;
	// stwx r6,r11,r5
	PPC_STORE_U32(ctx.r11.u32 + ctx.r5.u32, ctx.r6.u32);
loc_82120B7C:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82120ba0
	if (!ctx.cr6.eq) goto loc_82120BA0;
	// li r11,1
	ctx.r11.s64 = 1;
	// subfc r5,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r5.s64 = ctx.r11.s64 - ctx.r10.s64;
	// eqv r4,r10,r11
	ctx.r4.u64 = ~(ctx.r10.u64 ^ ctx.r11.u64);
	// rlwinm r3,r4,1,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0x1;
	// addze r11,r3
	temp.s64 = ctx.r3.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r3.u32;
	ctx.r11.s64 = temp.s64;
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// b 0x82120bb0
	goto loc_82120BB0;
loc_82120BA0:
	// lwz r11,9796(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 9796);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
loc_82120BB0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82120bdc
	if (ctx.cr6.eq) goto loc_82120BDC;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82120bcc
	if (!ctx.cr6.eq) goto loc_82120BCC;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82120bd0
	goto loc_82120BD0;
loc_82120BCC:
	// lhz r11,9804(r9)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r9.u32 + 9804);
loc_82120BD0:
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r10,r7,12
	ctx.r10.s64 = ctx.r7.s64 + 12;
	// stwx r6,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r6.u32);
loc_82120BDC:
	// b 0x82120800
	sub_82120800(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82120AF8) {
	__imp__sub_82120AF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82120BE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x82120BE8;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x823401c8
	ctx.lr = 0x82120BF4;
	sub_823401C8(ctx, base);
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// li r4,1
	ctx.r4.s64 = 1;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfs f0,5804(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5804);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f31,f12,f0
	ctx.f31.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8210ca80
	ctx.lr = 0x82120C20;
	sub_8210CA80(ctx, base);
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lis r29,-32190
	ctx.r29.s64 = -2109603840;
	// addi r28,r11,9240
	ctx.r28.s64 = ctx.r11.s64 + 9240;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r28,24
	ctx.r31.s64 = ctx.r28.s64 + 24;
	// lis r27,-32166
	ctx.r27.s64 = -2108030976;
	// lwz r10,-32312(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + -32312);
loc_82120C3C:
	// lbz r9,29088(r27)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r27.u32 + 29088);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82120c60
	if (!ctx.cr6.eq) goto loc_82120C60;
	// subfc r11,r10,r30
	ctx.xer.ca = ctx.r30.u32 >= ctx.r10.u32;
	ctx.r11.s64 = ctx.r30.s64 - ctx.r10.s64;
	// eqv r8,r10,r30
	ctx.r8.u64 = ~(ctx.r10.u64 ^ ctx.r30.u64);
	// rlwinm r7,r8,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// addze r6,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r6.s64 = temp.s64;
	// clrlwi r11,r6,31
	ctx.r11.u64 = ctx.r6.u32 & 0x1;
	// b 0x82120c70
	goto loc_82120C70;
loc_82120C60:
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cntlzw r8,r11
	ctx.r8.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r8,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
loc_82120C70:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82120c9c
	if (ctx.cr6.eq) goto loc_82120C9C;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x82120c8c
	if (ctx.cr6.eq) goto loc_82120C8C;
	// lhz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
loc_82120C8C:
	// li r5,1
	ctx.r5.s64 = 1;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8210cdd8
	ctx.lr = 0x82120C98;
	sub_8210CDD8(ctx, base);
	// lwz r10,-32312(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + -32312);
loc_82120C9C:
	// addi r31,r31,9780
	ctx.r31.s64 = ctx.r31.s64 + 9780;
	// addi r11,r28,19584
	ctx.r11.s64 = ctx.r28.s64 + 19584;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82120c3c
	if (ctx.cr6.lt) goto loc_82120C3C;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82120BE0) {
	__imp__sub_82120BE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82120CBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82120CBC) {
	__imp__sub_82120CBC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82120CC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32155
	ctx.r10.s64 = -2107310080;
	// ori r11,r11,48796
	ctx.r11.u64 = ctx.r11.u64 | 48796;
	// addi r8,r10,-29944
	ctx.r8.s64 = ctx.r10.s64 + -29944;
	// mullw r9,r3,r11
	ctx.r9.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r11.s32);
	// stbx r4,r9,r8
	PPC_STORE_U8(ctx.r9.u32 + ctx.r8.u32, ctx.r4.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82120CC0) {
	__imp__sub_82120CC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82120CDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82120CDC) {
	__imp__sub_82120CDC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82120CE0) {
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
	// extsw r11,r7
	ctx.r11.s64 = ctx.r7.s32;
	// extsw r10,r4
	ctx.r10.s64 = ctx.r4.s32;
	// extsw r9,r3
	ctx.r9.s64 = ctx.r3.s32;
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// std r10,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r10.u64);
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// std r9,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r9.u64);
	// bl 0x82141110
	ctx.lr = 0x82120D18;
	sub_82141110(ctx, base);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// lfd f13,104(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// lfd f11,112(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f10,f13
	ctx.f10.f64 = double(ctx.f13.s64);
	// fcfid f9,f11
	ctx.f9.f64 = double(ctx.f11.s64);
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// frsp f1,f12
	ctx.f1.f64 = double(float(ctx.f12.f64));
	// frsp f2,f10
	ctx.f2.f64 = double(float(ctx.f10.f64));
	// frsp f3,f9
	ctx.f3.f64 = double(float(ctx.f9.f64));
	// bl 0x820ea8b8
	ctx.lr = 0x82120D58;
	sub_820EA8B8(ctx, base);
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

PPC_WEAK_FUNC(sub_82120CE0) {
	__imp__sub_82120CE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82120D70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf64
	ctx.lr = 0x82120D78;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x822e4928
	ctx.lr = 0x82120D84;
	sub_822E4928(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r4,6
	ctx.r4.s64 = 6;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x82120e64
	if (ctx.cr6.eq) goto loc_82120E64;
	// bl 0x822e4b00
	ctx.lr = 0x82120D9C;
	sub_822E4B00(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823692a0
	ctx.lr = 0x82120DA4;
	sub_823692A0(ctx, base);
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822e4b00
	ctx.lr = 0x82120DB0;
	sub_822E4B00(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82183218
	ctx.lr = 0x82120DBC;
	sub_82183218(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8218a260
	ctx.lr = 0x82120DC4;
	sub_8218A260(ctx, base);
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lis r10,-32166
	ctx.r10.s64 = -2108030976;
	// addi r24,r11,9240
	ctx.r24.s64 = ctx.r11.s64 + 9240;
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r23,r10,29088
	ctx.r23.s64 = ctx.r10.s64 + 29088;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r31,r24,24
	ctx.r31.s64 = ctx.r24.s64 + 24;
	// addi r25,r11,-32312
	ctx.r25.s64 = ctx.r11.s64 + -32312;
	// lwz r10,-32312(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -32312);
loc_82120DE8:
	// lbz r9,0(r23)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r23.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82120e0c
	if (!ctx.cr6.eq) goto loc_82120E0C;
	// subfc r11,r10,r29
	ctx.xer.ca = ctx.r29.u32 >= ctx.r10.u32;
	ctx.r11.s64 = ctx.r29.s64 - ctx.r10.s64;
	// eqv r8,r10,r29
	ctx.r8.u64 = ~(ctx.r10.u64 ^ ctx.r29.u64);
	// rlwinm r7,r8,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// addze r6,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r6.s64 = temp.s64;
	// clrlwi r11,r6,31
	ctx.r11.u64 = ctx.r6.u32 & 0x1;
	// b 0x82120e1c
	goto loc_82120E1C;
loc_82120E0C:
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cntlzw r8,r11
	ctx.r8.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r8,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
loc_82120E1C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82120e44
	if (ctx.cr6.eq) goto loc_82120E44;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// beq cr6,0x82120e38
	if (ctx.cr6.eq) goto loc_82120E38;
	// lhz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
loc_82120E38:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82130fa8
	ctx.lr = 0x82120E40;
	sub_82130FA8(ctx, base);
	// lwz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
loc_82120E44:
	// addi r31,r31,9780
	ctx.r31.s64 = ctx.r31.s64 + 9780;
	// addi r11,r24,19584
	ctx.r11.s64 = ctx.r24.s64 + 19584;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82120de8
	if (ctx.cr6.lt) goto loc_82120DE8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82139198
	ctx.lr = 0x82120E60;
	sub_82139198(ctx, base);
	// b 0x82120f2c
	goto loc_82120F2C;
loc_82120E64:
	// bl 0x822e4808
	ctx.lr = 0x82120E68;
	sub_822E4808(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82369650
	ctx.lr = 0x82120E70;
	sub_82369650(ctx, base);
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822e4808
	ctx.lr = 0x82120E7C;
	sub_822E4808(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82183108
	ctx.lr = 0x82120E88;
	sub_82183108(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8218a028
	ctx.lr = 0x82120E90;
	sub_8218A028(ctx, base);
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lis r10,-32190
	ctx.r10.s64 = -2109603840;
	// addi r24,r11,9240
	ctx.r24.s64 = ctx.r11.s64 + 9240;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r25,r10,-32312
	ctx.r25.s64 = ctx.r10.s64 + -32312;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r31,r24,24
	ctx.r31.s64 = ctx.r24.s64 + 24;
	// addi r23,r11,29088
	ctx.r23.s64 = ctx.r11.s64 + 29088;
	// lwz r10,-32312(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -32312);
loc_82120EB4:
	// lbz r9,0(r23)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r23.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82120ed8
	if (!ctx.cr6.eq) goto loc_82120ED8;
	// subfc r11,r10,r29
	ctx.xer.ca = ctx.r29.u32 >= ctx.r10.u32;
	ctx.r11.s64 = ctx.r29.s64 - ctx.r10.s64;
	// eqv r8,r10,r29
	ctx.r8.u64 = ~(ctx.r10.u64 ^ ctx.r29.u64);
	// rlwinm r7,r8,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// addze r6,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r6.s64 = temp.s64;
	// clrlwi r11,r6,31
	ctx.r11.u64 = ctx.r6.u32 & 0x1;
	// b 0x82120ee8
	goto loc_82120EE8;
loc_82120ED8:
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cntlzw r8,r11
	ctx.r8.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r8,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
loc_82120EE8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82120f10
	if (ctx.cr6.eq) goto loc_82120F10;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// beq cr6,0x82120f04
	if (ctx.cr6.eq) goto loc_82120F04;
	// lhz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
loc_82120F04:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82130ff0
	ctx.lr = 0x82120F0C;
	sub_82130FF0(ctx, base);
	// lwz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
loc_82120F10:
	// addi r31,r31,9780
	ctx.r31.s64 = ctx.r31.s64 + 9780;
	// addi r11,r24,19584
	ctx.r11.s64 = ctx.r24.s64 + 19584;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82120eb4
	if (ctx.cr6.lt) goto loc_82120EB4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821392a8
	ctx.lr = 0x82120F2C;
	sub_821392A8(ctx, base);
loc_82120F2C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82123d18
	ctx.lr = 0x82120F34;
	sub_82123D18(ctx, base);
	// lis r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32155
	ctx.r10.s64 = -2107310080;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r28,r24,24
	ctx.r28.s64 = ctx.r24.s64 + 24;
	// ori r29,r9,48796
	ctx.r29.u64 = ctx.r9.u64 | 48796;
	// addi r26,r10,-29944
	ctx.r26.s64 = ctx.r10.s64 + -29944;
loc_82120F50:
	// lbz r9,0(r23)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r23.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82120f74
	if (!ctx.cr6.eq) goto loc_82120F74;
	// subfc r10,r11,r27
	ctx.xer.ca = ctx.r27.u32 >= ctx.r11.u32;
	ctx.r10.s64 = ctx.r27.s64 - ctx.r11.s64;
	// eqv r8,r11,r27
	ctx.r8.u64 = ~(ctx.r11.u64 ^ ctx.r27.u64);
	// rlwinm r7,r8,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// addze r6,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r6.s64 = temp.s64;
	// clrlwi r10,r6,31
	ctx.r10.u64 = ctx.r6.u32 & 0x1;
	// b 0x82120f84
	goto loc_82120F84;
loc_82120F74:
	// lwz r10,-8(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + -8);
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
	// cntlzw r8,r10
	ctx.r8.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r8,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
loc_82120F84:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82120fd0
	if (ctx.cr6.eq) goto loc_82120FD0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// beq cr6,0x82120fa0
	if (ctx.cr6.eq) goto loc_82120FA0;
	// lhz r31,0(r28)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r28.u32 + 0);
loc_82120FA0:
	// lwz r9,32(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// addi r10,r26,28
	ctx.r10.s64 = ctx.r26.s64 + 28;
	// mullw r11,r31,r29
	ctx.r11.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r29.s32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x82120FC0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820ff480
	ctx.lr = 0x82120FCC;
	sub_820FF480(ctx, base);
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
loc_82120FD0:
	// addi r28,r28,9780
	ctx.r28.s64 = ctx.r28.s64 + 9780;
	// addi r10,r24,19584
	ctx.r10.s64 = ctx.r24.s64 + 19584;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmpw cr6,r28,r10
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82120f50
	if (ctx.cr6.lt) goto loc_82120F50;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8239ce38
	ctx.lr = 0x82120FEC;
	sub_8239CE38(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8234d368
	ctx.lr = 0x82120FF8;
	sub_8234D368(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82120D70) {
	__imp__sub_82120D70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82121000) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x822e76c8
	ctx.lr = 0x8212101C;
	sub_822E76C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bge cr6,0x8212106c
	if (!ctx.cr6.lt) goto loc_8212106C;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r11,r9,-13464
	ctx.r11.s64 = ctx.r9.s64 + -13464;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// lfs f11,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,12(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
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
loc_8212106C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,12168(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
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
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
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

PPC_WEAK_FUNC(sub_82121000) {
	__imp__sub_82121000(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82121098) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lis r10,9
	ctx.r10.s64 = 589824;
	// addi r9,r11,28832
	ctx.r9.s64 = ctx.r11.s64 + 28832;
	// ori r8,r10,6633
	ctx.r8.u64 = ctx.r10.u64 | 6633;
	// lbzx r3,r9,r8
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r8.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82121098) {
	__imp__sub_82121098(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821210B0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32165
	ctx.r10.s64 = -2107965440;
	// mulli r11,r3,12824
	ctx.r11.s64 = ctx.r3.s64 * 12824;
	// addi r10,r10,-16408
	ctx.r10.s64 = ctx.r10.s64 + -16408;
	// addi r10,r10,8204
	ctx.r10.s64 = ctx.r10.s64 + 8204;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821210B0) {
	__imp__sub_821210B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821210C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x821210D0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x8235aa48
	ctx.lr = 0x821210E8;
	sub_8235AA48(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82121138
	if (ctx.cr6.eq) goto loc_82121138;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82137ef0
	ctx.lr = 0x82121104;
	sub_82137EF0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82121144
	if (ctx.cr6.eq) goto loc_82121144;
	// lis r11,-31835
	ctx.r11.s64 = -2086338560;
	// lwz r11,8816(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8816);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82121138
	if (ctx.cr6.eq) goto loc_82121138;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,-12900
	ctx.r4.s64 = ctx.r11.s64 + -12900;
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x82280900
	ctx.lr = 0x82121138;
	sub_82280900(ctx, base);
loc_82121138:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_82121144:
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// rlwinm r10,r30,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r11,r11,-30024
	ctx.r11.s64 = ctx.r11.s64 + -30024;
	// addi r9,r11,12
	ctx.r9.s64 = ctx.r11.s64 + 12;
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmpwi cr6,r8,6
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 6, ctx.xer);
	// blt cr6,0x82121238
	if (ctx.cr6.lt) goto loc_82121238;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lis r10,-32187
	ctx.r10.s64 = -2109407232;
	// ori r9,r11,61924
	ctx.r9.u64 = ctx.r11.u64 | 61924;
	// addi r8,r10,-15680
	ctx.r8.s64 = ctx.r10.s64 + -15680;
	// mullw r7,r30,r9
	ctx.r7.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r9.s32);
	// lwzx r6,r7,r8
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// cmpw cr6,r6,r29
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r29.s32, ctx.xer);
	// bne cr6,0x821211b4
	if (!ctx.cr6.eq) goto loc_821211B4;
	// lis r11,-31835
	ctx.r11.s64 = -2086338560;
	// lwz r11,8816(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8816);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821211a8
	if (ctx.cr6.eq) goto loc_821211A8;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,-12940
	ctx.r4.s64 = ctx.r11.s64 + -12940;
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x82280900
	ctx.lr = 0x821211A8;
	sub_82280900(ctx, base);
loc_821211A8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_821211B4:
	// addi r11,r1,84
	ctx.r11.s64 = ctx.r1.s64 + 84;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// bl 0x8235c050
	ctx.lr = 0x821211CC;
	sub_8235C050(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
loc_821211DC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x821211fc
	if (!ctx.cr0.eq) goto loc_821211FC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x821211dc
	if (!ctx.cr6.eq) goto loc_821211DC;
loc_821211FC:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82121238
	if (!ctx.cr6.eq) goto loc_82121238;
	// lis r11,-31835
	ctx.r11.s64 = -2086338560;
	// lwz r11,8816(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8816);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8212122c
	if (ctx.cr6.eq) goto loc_8212122C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,-12984
	ctx.r4.s64 = ctx.r11.s64 + -12984;
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x82280900
	ctx.lr = 0x8212122C;
	sub_82280900(ctx, base);
loc_8212122C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_82121238:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821210C8) {
	__imp__sub_821210C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82121244) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82121244) {
	__imp__sub_82121244(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82121248) {
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
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8238d450
	ctx.lr = 0x82121268;
	sub_8238D450(ctx, base);
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// addi r10,r11,28832
	ctx.r10.s64 = ctx.r11.s64 + 28832;
	// lwz r11,332(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 332);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82121288
	if (ctx.cr6.eq) goto loc_82121288;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822c4c00
	ctx.lr = 0x82121288;
	sub_822C4C00(ctx, base);
loc_82121288:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82125cf8
	ctx.lr = 0x82121290;
	sub_82125CF8(ctx, base);
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// rlwinm r10,r31,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r11,r11,-30024
	ctx.r11.s64 = ctx.r11.s64 + -30024;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r8,r11,12
	ctx.r8.s64 = ctx.r11.s64 + 12;
	// stwx r9,r10,r8
	PPC_STORE_U32(ctx.r10.u32 + ctx.r8.u32, ctx.r9.u32);
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

PPC_WEAK_FUNC(sub_82121248) {
	__imp__sub_82121248(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821212BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821212BC) {
	__imp__sub_821212BC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821212C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31937
	ctx.r11.s64 = -2093023232;
	// lis r9,-32191
	ctx.r9.s64 = -2109669376;
	// addi r11,r11,-17592
	ctx.r11.s64 = ctx.r11.s64 + -17592;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r8,r11,68
	ctx.r8.s64 = ctx.r11.s64 + 68;
	// stb r10,1348(r9)
	PPC_STORE_U8(ctx.r9.u32 + 1348, ctx.r10.u8);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r10,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// cmpwi cr6,r7,1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1, ctx.xer);
	// ble cr6,0x8212131c
	if (!ctx.cr6.gt) goto loc_8212131C;
	// addi r9,r11,100
	ctx.r9.s64 = ctx.r11.s64 + 100;
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwz r4,4(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82121328
	if (ctx.cr6.eq) goto loc_82121328;
loc_82121300:
	// lbz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82121328
	if (!ctx.cr6.eq) goto loc_82121328;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-12852
	ctx.r4.s64 = ctx.r11.s64 + -12852;
	// b 0x82280900
	sub_82280900(ctx, base);
	return;
loc_8212131C:
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// addi r4,r9,-28736
	ctx.r4.s64 = ctx.r9.s64 + -28736;
	// b 0x82121300
	goto loc_82121300;
loc_82121328:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// b 0x82121248
	sub_82121248(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821212C0) {
	__imp__sub_821212C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82121334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82121334) {
	__imp__sub_82121334(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82121338) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-31937
	ctx.r9.s64 = -2093023232;
	// lis r8,-32155
	ctx.r8.s64 = -2107310080;
	// addi r11,r9,-17592
	ctx.r11.s64 = ctx.r9.s64 + -17592;
	// addi r10,r8,-30024
	ctx.r10.s64 = ctx.r8.s64 + -30024;
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
	// lwz r11,-17592(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17592);
	// addi r6,r10,12
	ctx.r6.s64 = ctx.r10.s64 + 12;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r5,r7
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r7.u32);
	// rlwinm r3,r4,5,0,26
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0xFFFFFFE0;
	// lwzx r11,r3,r6
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r6.u32);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x821212c0
	sub_821212C0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82121338) {
	__imp__sub_82121338(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82121370) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82121370) {
	__imp__sub_82121370(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82121374) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82121374) {
	__imp__sub_82121374(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82121378) {
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
	// bl 0x821212c0
	ctx.lr = 0x82121388;
	sub_821212C0(ctx, base);
	// lis r10,-32191
	ctx.r10.s64 = -2109669376;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,1348(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1348, ctx.r11.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82121378) {
	__imp__sub_82121378(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821213A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821213A4) {
	__imp__sub_821213A4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821213A8) {
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
	// bl 0x8238d5d0
	ctx.lr = 0x821213C0;
	sub_8238D5D0(ctx, base);
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// rlwinm r10,r31,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r11,r11,-30024
	ctx.r11.s64 = ctx.r11.s64 + -30024;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bne cr6,0x82121428
	if (!ctx.cr6.eq) goto loc_82121428;
	// li r9,0
	ctx.r9.s64 = 0;
	// stwx r9,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
	// bl 0x821285f0
	ctx.lr = 0x821213E8;
	sub_821285F0(ctx, base);
	// lis r31,-31936
	ctx.r31.s64 = -2092957696;
	// lwz r11,-9396(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -9396);
	// lwz r4,12(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lbz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82121428
	if (ctx.cr6.eq) goto loc_82121428;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-27340
	ctx.r3.s64 = ctx.r11.s64 + -27340;
	// bl 0x822e84f0
	ctx.lr = 0x8212140C;
	sub_822E84F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8227cf18
	ctx.lr = 0x82121418;
	sub_8227CF18(ctx, base);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lwz r3,-9396(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -9396);
	// addi r4,r10,-28736
	ctx.r4.s64 = ctx.r10.s64 + -28736;
	// bl 0x822e1fa8
	ctx.lr = 0x82121428;
	sub_822E1FA8(ctx, base);
loc_82121428:
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

PPC_WEAK_FUNC(sub_821213A8) {
	__imp__sub_821213A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8212143C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8212143C) {
	__imp__sub_8212143C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82121440) {
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
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lbz r10,1348(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1348);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82121474
	if (!ctx.cr6.eq) goto loc_82121474;
	// bl 0x8238d9d8
	ctx.lr = 0x82121468;
	sub_8238D9D8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8212147c
	if (ctx.cr6.eq) goto loc_8212147C;
loc_82121474:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821213a8
	ctx.lr = 0x8212147C;
	sub_821213A8(ctx, base);
loc_8212147C:
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

PPC_WEAK_FUNC(sub_82121440) {
	__imp__sub_82121440(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82121490) {
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
	// lis r4,1
	ctx.r4.s64 = 65536;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// ori r4,r4,32768
	ctx.r4.u64 = ctx.r4.u64 | 32768;
	// bl 0x822db808
	ctx.lr = 0x821214B4;
	sub_822DB808(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x822db8f0
	ctx.lr = 0x821214BC;
	sub_822DB8F0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// addi r31,r11,-12776
	ctx.r31.s64 = ctx.r11.s64 + -12776;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// ori r5,r5,32768
	ctx.r5.u64 = ctx.r5.u64 | 32768;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821775a8
	ctx.lr = 0x821214D8;
	sub_821775A8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82121584
	if (ctx.cr6.eq) goto loc_82121584;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e5ed0
	ctx.lr = 0x821214EC;
	sub_822E5ED0(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822e6d10
	ctx.lr = 0x821214F8;
	sub_822E6D10(ctx, base);
	// bl 0x823deaf8
	ctx.lr = 0x821214FC;
	sub_823DEAF8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x822e6d10
	ctx.lr = 0x82121508;
	sub_822E6D10(ctx, base);
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82121550
	if (ctx.cr6.eq) goto loc_82121550;
	// addi r31,r1,96
	ctx.r31.s64 = ctx.r1.s64 + 96;
loc_82121518:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// subf r10,r3,r31
	ctx.r10.s64 = ctx.r31.s64 - ctx.r3.s64;
loc_82121520:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stbx r9,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne cr6,0x82121520
	if (!ctx.cr6.eq) goto loc_82121520;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,32
	ctx.r31.s64 = ctx.r31.s64 + 32;
	// bl 0x822e6d10
	ctx.lr = 0x82121544;
	sub_822E6D10(ctx, base);
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82121518
	if (!ctx.cr6.eq) goto loc_82121518;
loc_82121550:
	// bl 0x822e5fb0
	ctx.lr = 0x82121554;
	sub_822E5FB0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822d94d8
	ctx.lr = 0x82121560;
	sub_822D94D8(ctx, base);
	// rlwinm r10,r3,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r3,r9,-12792
	ctx.r3.s64 = ctx.r9.s64 + -12792;
	// bl 0x822e84f0
	ctx.lr = 0x82121578;
	sub_822E84F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8227cf18
	ctx.lr = 0x82121584;
	sub_8227CF18(ctx, base);
loc_82121584:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x822db8d8
	ctx.lr = 0x8212158C;
	sub_822DB8D8(ctx, base);
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

PPC_WEAK_FUNC(sub_82121490) {
	__imp__sub_82121490(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821215A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821215A4) {
	__imp__sub_821215A4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821215A8) {
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
	// lis r9,-31937
	ctx.r9.s64 = -2093023232;
	// lis r8,-32155
	ctx.r8.s64 = -2107310080;
	// addi r11,r9,-17592
	ctx.r11.s64 = ctx.r9.s64 + -17592;
	// addi r10,r8,-30024
	ctx.r10.s64 = ctx.r8.s64 + -30024;
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
	// lwz r11,-17592(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17592);
	// addi r6,r10,12
	ctx.r6.s64 = ctx.r10.s64 + 12;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r5,r7
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r7.u32);
	// rlwinm r3,r4,5,0,26
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0xFFFFFFE0;
	// lwzx r11,r3,r6
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r6.u32);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x821215f8
	if (ctx.cr6.eq) goto loc_821215F8;
	// bl 0x821212c0
	ctx.lr = 0x821215EC;
	sub_821212C0(ctx, base);
	// lis r10,-32191
	ctx.r10.s64 = -2109669376;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,1348(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1348, ctx.r11.u8);
loc_821215F8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821215A8) {
	__imp__sub_821215A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82121608) {
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
	// bl 0x8238d4b8
	ctx.lr = 0x82121620;
	sub_8238D4B8(ctx, base);
	// bl 0x8238d9d8
	ctx.lr = 0x82121624;
	sub_8238D9D8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82121638
	if (ctx.cr6.eq) goto loc_82121638;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821213a8
	ctx.lr = 0x82121638;
	sub_821213A8(ctx, base);
loc_82121638:
	// bl 0x8238da10
	ctx.lr = 0x8212163C;
	sub_8238DA10(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82121650
	if (ctx.cr6.eq) goto loc_82121650;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8238d9c8
	ctx.lr = 0x82121650;
	sub_8238D9C8(ctx, base);
loc_82121650:
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

PPC_WEAK_FUNC(sub_82121608) {
	__imp__sub_82121608(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82121664) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82121664) {
	__imp__sub_82121664(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82121668) {
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
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8212fa08
	ctx.lr = 0x8212167C;
	sub_8212FA08(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821216a0
	if (ctx.cr6.eq) goto loc_821216A0;
	// lis r11,-32167
	ctx.r11.s64 = -2108096512;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// addi r9,r11,-8976
	ctx.r9.s64 = ctx.r11.s64 + -8976;
	// ori r8,r10,576
	ctx.r8.u64 = ctx.r10.u64 | 576;
	// li r11,1
	ctx.r11.s64 = 1;
	// stbx r11,r9,r8
	PPC_STORE_U8(ctx.r9.u32 + ctx.r8.u32, ctx.r11.u8);
loc_821216A0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82121668) {
	__imp__sub_82121668(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821216B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x821216B8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32167
	ctx.r11.s64 = -2108096512;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r30,r11,-8976
	ctx.r30.s64 = ctx.r11.s64 + -8976;
	// lwz r11,44(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821216e0
	if (!ctx.cr6.eq) goto loc_821216E0;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_821216E0:
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r28,36(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r31,4(r9)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// subf. r29,r31,r28
	ctx.r29.s64 = ctx.r28.s64 - ctx.r31.s64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bge 0x82121710
	if (!ctx.cr0.lt) goto loc_82121710;
	// add r29,r10,r29
	ctx.r29.u64 = ctx.r10.u64 + ctx.r29.u64;
loc_82121710:
	// addi r9,r4,-1
	ctx.r9.s64 = ctx.r4.s64 + -1;
	// cmpw cr6,r29,r9
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x82121738
	if (!ctx.cr6.gt) goto loc_82121738;
	// subf r11,r4,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r4.s64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r31,r11,1
	ctx.r31.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r31,r10
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x82121734
	if (!ctx.cr6.gt) goto loc_82121734;
	// subf r31,r10,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r10.s64;
loc_82121734:
	// mr r29,r9
	ctx.r29.u64 = ctx.r9.u64;
loc_82121738:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmpw cr6,r31,r28
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r28.s32, ctx.xer);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bge cr6,0x82121764
	if (!ctx.cr6.lt) goto loc_82121764;
	// subf r5,r31,r28
	ctx.r5.s64 = ctx.r28.s64 - ctx.r31.s64;
	// bl 0x823de1f0
	ctx.lr = 0x82121754;
	sub_823DE1F0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stbx r11,r29,r27
	PPC_STORE_U8(ctx.r29.u32 + ctx.r27.u32, ctx.r11.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_82121764:
	// subf r5,r31,r10
	ctx.r5.s64 = ctx.r10.s64 - ctx.r31.s64;
	// bl 0x823de1f0
	ctx.lr = 0x8212176C;
	sub_823DE1F0(ctx, base);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// add r3,r11,r27
	ctx.r3.u64 = ctx.r11.u64 + ctx.r27.u64;
	// bl 0x823de1f0
	ctx.lr = 0x82121784;
	sub_823DE1F0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stbx r11,r29,r27
	PPC_STORE_U8(ctx.r29.u32 + ctx.r27.u32, ctx.r11.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821216B0) {
	__imp__sub_821216B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82121794) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82121794) {
	__imp__sub_82121794(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82121798) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
loc_821217A8:
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lwz r8,16(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// divw r5,r7,r8
	ctx.r5.s32 = ctx.r7.s32 / ctx.r8.s32;
	// mullw r11,r5,r8
	ctx.r11.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r8.s32);
	// subf r11,r11,r7
	ctx.r11.s64 = ctx.r7.s64 - ctx.r11.s64;
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r7,r8,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r6,r7,r6
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	// rlwinm r11,r6,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// subf r9,r9,r5
	ctx.r9.s64 = ctx.r5.s64 - ctx.r9.s64;
	// add r8,r9,r4
	ctx.r8.u64 = ctx.r9.u64 + ctx.r4.u64;
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// lwz r7,44(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x821217a8
	if (ctx.cr6.lt) goto loc_821217A8;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82121798) {
	__imp__sub_82121798(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8212180C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8212180C) {
	__imp__sub_8212180C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82121810) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82121818;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32167
	ctx.r11.s64 = -2108096512;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,-8976
	ctx.r31.s64 = ctx.r11.s64 + -8976;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82121798
	ctx.lr = 0x82121830;
	sub_82121798(ctx, base);
	// addis r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 65536;
	// mulli r29,r30,18520
	ctx.r29.s64 = ctx.r30.s64 * 18520;
	// addi r11,r11,8800
	ctx.r11.s64 = ctx.r11.s64 + 8800;
	// li r30,4
	ctx.r30.s64 = 4;
	// add r3,r29,r11
	ctx.r3.u64 = ctx.r29.u64 + ctx.r11.u64;
loc_82121844:
	// bl 0x82121798
	ctx.lr = 0x82121848;
	sub_82121798(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r3,r3,52
	ctx.r3.s64 = ctx.r3.s64 + 52;
	// bne 0x82121844
	if (!ctx.cr0.eq) goto loc_82121844;
	// addis r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 65536;
	// addi r11,r11,14640
	ctx.r11.s64 = ctx.r11.s64 + 14640;
	// add r3,r29,r11
	ctx.r3.u64 = ctx.r29.u64 + ctx.r11.u64;
	// bl 0x82121798
	ctx.lr = 0x82121864;
	sub_82121798(ctx, base);
	// addis r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 65536;
	// addi r11,r11,18916
	ctx.r11.s64 = ctx.r11.s64 + 18916;
	// add r3,r29,r11
	ctx.r3.u64 = ctx.r29.u64 + ctx.r11.u64;
	// bl 0x82121798
	ctx.lr = 0x82121874;
	sub_82121798(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82121810) {
	__imp__sub_82121810(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8212187C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8212187C) {
	__imp__sub_8212187C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82121880) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82121880) {
	__imp__sub_82121880(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82121898) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32167
	ctx.r11.s64 = -2108096512;
	// mulli r9,r3,18520
	ctx.r9.s64 = ctx.r3.s64 * 18520;
	// addi r6,r11,-8976
	ctx.r6.s64 = ctx.r11.s64 + -8976;
	// li r11,0
	ctx.r11.s64 = 0;
	// addis r10,r6,1
	ctx.r10.s64 = ctx.r6.s64 + 65536;
	// addis r8,r6,1
	ctx.r8.s64 = ctx.r6.s64 + 65536;
	// addi r10,r10,8800
	ctx.r10.s64 = ctx.r10.s64 + 8800;
	// addi r7,r8,8852
	ctx.r7.s64 = ctx.r8.s64 + 8852;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addis r8,r6,1
	ctx.r8.s64 = ctx.r6.s64 + 65536;
	// stw r11,36(r10)
	PPC_STORE_U32(ctx.r10.u32 + 36, ctx.r11.u32);
	// stw r11,48(r10)
	PPC_STORE_U32(ctx.r10.u32 + 48, ctx.r11.u32);
	// stw r11,40(r10)
	PPC_STORE_U32(ctx.r10.u32 + 40, ctx.r11.u32);
	// stw r11,44(r10)
	PPC_STORE_U32(ctx.r10.u32 + 44, ctx.r11.u32);
	// add r10,r9,r7
	ctx.r10.u64 = ctx.r9.u64 + ctx.r7.u64;
	// addi r7,r8,8904
	ctx.r7.s64 = ctx.r8.s64 + 8904;
	// addis r8,r6,1
	ctx.r8.s64 = ctx.r6.s64 + 65536;
	// addi r8,r8,8956
	ctx.r8.s64 = ctx.r8.s64 + 8956;
	// stw r11,36(r10)
	PPC_STORE_U32(ctx.r10.u32 + 36, ctx.r11.u32);
	// stw r11,48(r10)
	PPC_STORE_U32(ctx.r10.u32 + 48, ctx.r11.u32);
	// stw r11,40(r10)
	PPC_STORE_U32(ctx.r10.u32 + 40, ctx.r11.u32);
	// stw r11,44(r10)
	PPC_STORE_U32(ctx.r10.u32 + 44, ctx.r11.u32);
	// add r10,r9,r7
	ctx.r10.u64 = ctx.r9.u64 + ctx.r7.u64;
	// stw r11,36(r10)
	PPC_STORE_U32(ctx.r10.u32 + 36, ctx.r11.u32);
	// stw r11,48(r10)
	PPC_STORE_U32(ctx.r10.u32 + 48, ctx.r11.u32);
	// stw r11,40(r10)
	PPC_STORE_U32(ctx.r10.u32 + 40, ctx.r11.u32);
	// stw r11,44(r10)
	PPC_STORE_U32(ctx.r10.u32 + 44, ctx.r11.u32);
	// add r10,r9,r8
	ctx.r10.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stw r11,36(r10)
	PPC_STORE_U32(ctx.r10.u32 + 36, ctx.r11.u32);
	// stw r11,48(r10)
	PPC_STORE_U32(ctx.r10.u32 + 48, ctx.r11.u32);
	// stw r11,40(r10)
	PPC_STORE_U32(ctx.r10.u32 + 40, ctx.r11.u32);
	// stw r11,44(r10)
	PPC_STORE_U32(ctx.r10.u32 + 44, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82121898) {
	__imp__sub_82121898(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8212191C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8212191C) {
	__imp__sub_8212191C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82121920) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32167
	ctx.r10.s64 = -2108096512;
	// mulli r11,r3,18520
	ctx.r11.s64 = ctx.r3.s64 * 18520;
	// addi r9,r10,-8976
	ctx.r9.s64 = ctx.r10.s64 + -8976;
	// li r10,0
	ctx.r10.s64 = 0;
	// addis r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 65536;
	// addi r9,r9,14640
	ctx.r9.s64 = ctx.r9.s64 + 14640;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r10,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r10.u32);
	// stw r10,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r10.u32);
	// stw r10,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r10.u32);
	// stw r10,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r10.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82121920) {
	__imp__sub_82121920(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82121950) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32167
	ctx.r10.s64 = -2108096512;
	// mulli r11,r3,18520
	ctx.r11.s64 = ctx.r3.s64 * 18520;
	// addi r9,r10,-8976
	ctx.r9.s64 = ctx.r10.s64 + -8976;
	// li r10,0
	ctx.r10.s64 = 0;
	// addis r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 65536;
	// addi r9,r9,18916
	ctx.r9.s64 = ctx.r9.s64 + 18916;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r10,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r10.u32);
	// stw r10,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r10.u32);
	// stw r10,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r10.u32);
	// stw r10,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r10.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82121950) {
	__imp__sub_82121950(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82121980) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82121988;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r30,r11,-11976
	ctx.r30.s64 = ctx.r11.s64 + -11976;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lfs f1,-112(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -112);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82140648
	ctx.lr = 0x821219A8;
	sub_82140648(ctx, base);
	// bl 0x823dde20
	ctx.lr = 0x821219AC;
	sub_823DDE20(ctx, base);
	// lis r11,-32167
	ctx.r11.s64 = -2108096512;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// addi r31,r11,-8976
	ctx.r31.s64 = ctx.r11.s64 + -8976;
	// lfs f1,-112(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -112);
	ctx.f1.f64 = double(temp.f32);
	// ori r9,r10,592
	ctx.r9.u64 = ctx.r10.u64 | 592;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// stfsx f0,r31,r9
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, temp.u32);
	// bl 0x82140788
	ctx.lr = 0x821219D4;
	sub_82140788(ctx, base);
	// bl 0x823dde20
	ctx.lr = 0x821219D8;
	sub_823DDE20(ctx, base);
	// lis r8,1
	ctx.r8.s64 = 65536;
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// ori r6,r8,596
	ctx.r6.u64 = ctx.r8.u64 | 596;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r5,3
	ctx.r5.s64 = 3;
	// lfs f31,-11972(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -11972);
	ctx.f31.f64 = double(temp.f32);
	// stfsx f0,r31,r6
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r6.u32, temp.u32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82140648
	ctx.lr = 0x82121A00;
	sub_82140648(ctx, base);
	// bl 0x823dde20
	ctx.lr = 0x82121A04;
	sub_823DDE20(ctx, base);
	// lis r4,1
	ctx.r4.s64 = 65536;
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// li r5,3
	ctx.r5.s64 = 3;
	// ori r11,r4,600
	ctx.r11.u64 = ctx.r4.u64 | 600;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stfsx f0,r31,r11
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, temp.u32);
	// bl 0x82140788
	ctx.lr = 0x82121A24;
	sub_82140788(ctx, base);
	// bl 0x823dde20
	ctx.lr = 0x82121A28;
	sub_823DDE20(ctx, base);
	// lis r10,-32165
	ctx.r10.s64 = -2107965440;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// addi r8,r10,28832
	ctx.r8.s64 = ctx.r10.s64 + 28832;
	// ori r7,r9,604
	ctx.r7.u64 = ctx.r9.u64 | 604;
	// lwz r3,384(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 384);
	// stfsx f0,r31,r7
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, temp.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82121b10
	if (ctx.cr6.eq) goto loc_82121B10;
	// bl 0x8238b698
	ctx.lr = 0x82121A50;
	sub_8238B698(ctx, base);
	// rlwinm r10,r3,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lfs f11,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// ori r5,r11,600
	ctx.r5.u64 = ctx.r11.u64 | 600;
	// ori r4,r9,592
	ctx.r4.u64 = ctx.r9.u64 | 592;
	// frsp f10,f13
	ctx.f10.f64 = double(float(ctx.f13.f64));
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lfsx f13,r31,r5
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r5.u32);
	ctx.f13.f64 = double(temp.f32);
	// lis r6,1
	ctx.r6.s64 = 65536;
	// ori r11,r7,604
	ctx.r11.u64 = ctx.r7.u64 | 604;
	// ori r10,r6,596
	ctx.r10.u64 = ctx.r6.u64 | 596;
	// lfsx f12,r31,r4
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r4.u32);
	ctx.f12.f64 = double(temp.f32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// fsubs f9,f13,f12
	ctx.f9.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lfsx f0,r31,r11
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// lis r6,1
	ctx.r6.s64 = 65536;
	// lfsx f13,r31,r10
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	ctx.f13.f64 = double(temp.f32);
	// lis r5,1
	ctx.r5.s64 = 65536;
	// fsubs f8,f0,f13
	ctx.f8.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f0,7640(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 7640);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,13872(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 13872);
	ctx.f13.f64 = double(temp.f32);
	// ori r4,r7,580
	ctx.r4.u64 = ctx.r7.u64 | 580;
	// ori r9,r6,588
	ctx.r9.u64 = ctx.r6.u64 | 588;
	// ori r8,r5,584
	ctx.r8.u64 = ctx.r5.u64 | 584;
	// fsubs f7,f9,f11
	ctx.f7.f64 = double(float(ctx.f9.f64 - ctx.f11.f64));
	// stwx r3,r31,r4
	PPC_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r3.u32);
	// fsubs f6,f8,f10
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f10.f64));
	// fsubs f5,f7,f0
	ctx.f5.f64 = double(float(ctx.f7.f64 - ctx.f0.f64));
	// fsubs f4,f6,f13
	ctx.f4.f64 = double(float(ctx.f6.f64 - ctx.f13.f64));
	// fctiwz f3,f5
	ctx.f3.s64 = (ctx.f5.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f5.f64));
	// stfd f3,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f3.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stwx r11,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r11.u32);
	// fctiwz f2,f4
	ctx.f2.s64 = (ctx.f4.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f4.f64));
	// stfd f2,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f2.u64);
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// divw r10,r7,r3
	ctx.r10.s32 = ctx.r7.s32 / ctx.r3.s32;
	// stwx r10,r31,r8
	PPC_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_82121B10:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// ori r8,r11,580
	ctx.r8.u64 = ctx.r11.u64 | 580;
	// ori r7,r10,584
	ctx.r7.u64 = ctx.r10.u64 | 584;
	// ori r6,r9,588
	ctx.r6.u64 = ctx.r9.u64 | 588;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stwx r11,r31,r8
	PPC_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r11.u32);
	// stwx r10,r31,r7
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r10.u32);
	// stwx r9,r31,r6
	PPC_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r9.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82121980) {
	__imp__sub_82121980(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82121B4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82121B4C) {
	__imp__sub_82121B4C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82121B50) {
	PPC_FUNC_PROLOGUE();
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lwz r31,84(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r30,92(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stw r5,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r5.u32);
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// stw r6,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r6.u32);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// stw r9,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// stw r7,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r7.u32);
	// stw r8,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r8.u32);
	// stw r10,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r10.u32);
	// stw r31,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r31.u32);
	// stw r30,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r30.u32);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82121B50) {
	__imp__sub_82121B50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82121BA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82121BA4) {
	__imp__sub_82121BA4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82121BA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32167
	ctx.r11.s64 = -2108096512;
	// lis r8,1
	ctx.r8.s64 = 65536;
	// lis r6,1
	ctx.r6.s64 = 65536;
	// addi r7,r11,-8976
	ctx.r7.s64 = ctx.r11.s64 + -8976;
	// ori r5,r8,564
	ctx.r5.u64 = ctx.r8.u64 | 564;
	// ori r4,r6,568
	ctx.r4.u64 = ctx.r6.u64 | 568;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,36(r7)
	PPC_STORE_U32(ctx.r7.u32 + 36, ctx.r11.u32);
	// stw r10,48(r7)
	PPC_STORE_U32(ctx.r7.u32 + 48, ctx.r10.u32);
	// stw r9,40(r7)
	PPC_STORE_U32(ctx.r7.u32 + 40, ctx.r9.u32);
	// stw r11,44(r7)
	PPC_STORE_U32(ctx.r7.u32 + 44, ctx.r11.u32);
	// stwx r10,r7,r5
	PPC_STORE_U32(ctx.r7.u32 + ctx.r5.u32, ctx.r10.u32);
	// stwx r9,r7,r4
	PPC_STORE_U32(ctx.r7.u32 + ctx.r4.u32, ctx.r9.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82121BA8) {
	__imp__sub_82121BA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82121BE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x82121BF0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r6,r11,-11876
	ctx.r6.s64 = ctx.r11.s64 + -11876;
	// addi r3,r10,-11888
	ctx.r3.s64 = ctx.r10.s64 + -11888;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822e15d0
	ctx.lr = 0x82121C10;
	sub_822E15D0(ctx, base);
	// lis r9,-32167
	ctx.r9.s64 = -2108096512;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// addi r6,r8,-11940
	ctx.r6.s64 = ctx.r8.s64 + -11940;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r3,-10700(r9)
	PPC_STORE_U32(ctx.r9.u32 + -10700, ctx.r3.u32);
	// addi r3,r7,-11960
	ctx.r3.s64 = ctx.r7.s64 + -11960;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x822e15d0
	ctx.lr = 0x82121C34;
	sub_822E15D0(ctx, base);
	// lis r6,-32167
	ctx.r6.s64 = -2108096512;
	// lis r5,-32165
	ctx.r5.s64 = -2107965440;
	// addi r26,r5,-32488
	ctx.r26.s64 = ctx.r5.s64 + -32488;
	// stw r3,-10004(r6)
	PPC_STORE_U32(ctx.r6.u32 + -10004, ctx.r3.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82282ca0
	ctx.lr = 0x82121C4C;
	sub_82282CA0(ctx, base);
	// lis r29,-32191
	ctx.r29.s64 = -2109669376;
	// li r27,1
	ctx.r27.s64 = 1;
	// lis r28,-32191
	ctx.r28.s64 = -2109669376;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// stw r27,20(r26)
	PPC_STORE_U32(ctx.r26.u32 + 20, ctx.r27.u32);
	// lis r10,-32165
	ctx.r10.s64 = -2107965440;
	// addi r30,r10,-25464
	ctx.r30.s64 = ctx.r10.s64 + -25464;
	// lfs f0,1360(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 1360);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r26)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r26.u32 + 16, temp.u32);
	// addi r31,r30,12
	ctx.r31.s64 = ctx.r30.s64 + 12;
	// lwz r11,1356(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1356);
	// stw r11,12(r26)
	PPC_STORE_U32(ctx.r26.u32 + 12, ctx.r11.u32);
loc_82121C7C:
	// addi r3,r31,-12
	ctx.r3.s64 = ctx.r31.s64 + -12;
	// bl 0x82282ca0
	ctx.lr = 0x82121C84;
	sub_82282CA0(ctx, base);
	// lwz r11,1356(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1356);
	// lfs f0,1360(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 1360);
	ctx.f0.f64 = double(temp.f32);
	// stw r27,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r27.u32);
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// addi r10,r30,8972
	ctx.r10.s64 = ctx.r30.s64 + 8972;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r31,r31,280
	ctx.r31.s64 = ctx.r31.s64 + 280;
	// cmpw cr6,r31,r10
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82121c7c
	if (ctx.cr6.lt) goto loc_82121C7C;
	// lis r10,-32167
	ctx.r10.s64 = -2108096512;
	// li r11,-1
	ctx.r11.s64 = -1;
	// addi r9,r10,-10504
	ctx.r9.s64 = ctx.r10.s64 + -10504;
	// lis r8,-32166
	ctx.r8.s64 = -2108030976;
	// lis r7,-32238
	ctx.r7.s64 = -2112749568;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// addi r5,r8,29064
	ctx.r5.s64 = ctx.r8.s64 + 29064;
	// stw r11,64(r9)
	PPC_STORE_U32(ctx.r9.u32 + 64, ctx.r11.u32);
	// addi r3,r6,-11968
	ctx.r3.s64 = ctx.r6.s64 + -11968;
	// addi r4,r7,7080
	ctx.r4.s64 = ctx.r7.s64 + 7080;
	// bl 0x8227da10
	ctx.lr = 0x82121CD4;
	sub_8227DA10(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82121BE8) {
	__imp__sub_82121BE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82121CDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82121CDC) {
	__imp__sub_82121CDC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82121CE0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82121CE0) {
	__imp__sub_82121CE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82121CE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82121CE4) {
	__imp__sub_82121CE4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82121CE8) {
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
	// bl 0x82141110
	ctx.lr = 0x82121CF8;
	sub_82141110(ctx, base);
	// bl 0x82121980
	ctx.lr = 0x82121CFC;
	sub_82121980(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82121CE8) {
	__imp__sub_82121CE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82121D0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82121D0C) {
	__imp__sub_82121D0C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82121D10) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82121D10) {
	__imp__sub_82121D10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82121D14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82121D14) {
	__imp__sub_82121D14(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82121D18) {
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
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x82121dd4
	if (ctx.cr6.eq) goto loc_82121DD4;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x82121d88
	if (ctx.cr6.eq) goto loc_82121D88;
	// addi r11,r3,-3
	ctx.r11.s64 = ctx.r3.s64 + -3;
	// lis r10,-32167
	ctx.r10.s64 = -2108096512;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,-11104
	ctx.r8.s64 = ctx.r10.s64 + -11104;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lwzx r5,r9,r8
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// lfs f0,12240(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 12240);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,2416(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 2416);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,12(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fadds f1,f11,f13
	ctx.f1.f64 = double(float(ctx.f11.f64 + ctx.f13.f64));
	// bl 0x823dde20
	ctx.lr = 0x82121D68;
	sub_823DDE20(ctx, base);
	// frsp f10,f1
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f1.f64));
	// fctiwz f9,f10
	ctx.f9.s64 = (ctx.f10.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f9.u64);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82121D88:
	// lis r11,-32167
	ctx.r11.s64 = -2108096512;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r11,-11104
	ctx.r9.s64 = ctx.r11.s64 + -11104;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f0,12240(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12240);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,1572(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1572);
	// lfs f13,2416(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2416);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fadds f1,f11,f13
	ctx.f1.f64 = double(float(ctx.f11.f64 + ctx.f13.f64));
	// bl 0x823dde20
	ctx.lr = 0x82121DB4;
	sub_823DDE20(ctx, base);
	// frsp f10,f1
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f1.f64));
	// fctiwz f9,f10
	ctx.f9.s64 = (ctx.f10.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f9.u64);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82121DD4:
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r11,28716(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28716);
	// lfs f0,12240(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12240);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,2416(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2416);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fadds f1,f11,f13
	ctx.f1.f64 = double(float(ctx.f11.f64 + ctx.f13.f64));
	// bl 0x823dde20
	ctx.lr = 0x82121DFC;
	sub_823DDE20(ctx, base);
	// frsp f10,f1
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f1.f64));
	// fctiwz f9,f10
	ctx.f9.s64 = (ctx.f10.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f9.u64);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82121D18) {
	__imp__sub_82121D18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82121E1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82121E1C) {
	__imp__sub_82121E1C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82121E20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lwz r10,16(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82121e88
	if (ctx.cr6.eq) goto loc_82121E88;
	// lwz r9,48(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	// li r11,2
	ctx.r11.s64 = 2;
	// lis r7,-31822
	ctx.r7.s64 = -2085486592;
	// lwz r8,4(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// addi r6,r9,1
	ctx.r6.s64 = ctx.r9.s64 + 1;
	// subfc r9,r11,r3
	ctx.xer.ca = ctx.r3.u32 >= ctx.r11.u32;
	ctx.r9.s64 = ctx.r3.s64 - ctx.r11.s64;
	// divw r31,r6,r10
	ctx.r31.s32 = ctx.r6.s32 / ctx.r10.s32;
	// rlwinm r30,r11,1,31,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// mullw r11,r31,r10
	ctx.r11.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r10.s32);
	// subf r10,r11,r6
	ctx.r10.s64 = ctx.r6.s64 - ctx.r11.s64;
	// rlwinm r6,r3,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	// stw r10,48(r4)
	PPC_STORE_U32(ctx.r4.u32 + 48, ctx.r10.u32);
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// subfe r4,r6,r30
	temp.u8 = (~ctx.r6.u32 + ctx.r30.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r30.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r4.u64 = ~ctx.r6.u64 + ctx.r30.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lwz r10,-356(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + -356);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// and r3,r4,r10
	ctx.r3.u64 = ctx.r4.u64 & ctx.r10.u64;
	// rotlwi r10,r3,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_82121E88:
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82121E20) {
	__imp__sub_82121E20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82121E94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82121E94) {
	__imp__sub_82121E94(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82121E98) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r9,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r9.u32);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82121ec4
	if (!ctx.cr6.eq) goto loc_82121EC4;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
loc_82121EC4:
	// lis r11,-32167
	ctx.r11.s64 = -2108096512;
	// addi r11,r11,-8976
	ctx.r11.s64 = ctx.r11.s64 + -8976;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// ori r8,r10,568
	ctx.r8.u64 = ctx.r10.u64 | 568;
	// ori r6,r9,584
	ctx.r6.u64 = ctx.r9.u64 | 584;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// ori r5,r7,568
	ctx.r5.u64 = ctx.r7.u64 | 568;
	// lwzx r9,r11,r8
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// lwzx r10,r11,r6
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stwx r9,r11,r5
	PPC_STORE_U32(ctx.r11.u32 + ctx.r5.u32, ctx.r9.u32);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// lwz r9,44(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82121f20
	if (ctx.cr6.lt) goto loc_82121F20;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// ori r8,r9,568
	ctx.r8.u64 = ctx.r9.u64 | 568;
	// stwx r10,r11,r8
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r10.u32);
	// blr 
	return;
loc_82121F20:
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r8,r10,568
	ctx.r8.u64 = ctx.r10.u64 | 568;
	// stwx r9,r11,r8
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r9.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82121E98) {
	__imp__sub_82121E98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82121F30) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82121f44
	if (!ctx.cr6.eq) goto loc_82121F44;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82121F44:
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// add r6,r11,r8
	ctx.r6.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// rlwinm r10,r6,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// add r5,r11,r4
	ctx.r5.u64 = ctx.r11.u64 + ctx.r4.u64;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// and r10,r5,r7
	ctx.r10.u64 = ctx.r5.u64 & ctx.r7.u64;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r9,36(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// blt cr6,0x82121fa0
	if (ctx.cr6.lt) goto loc_82121FA0;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82121f94
	if (ctx.cr6.lt) goto loc_82121F94;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82121fb8
	if (ctx.cr6.lt) goto loc_82121FB8;
loc_82121F94:
	// li r11,0
	ctx.r11.s64 = 0;
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
loc_82121FA0:
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x82121fb4
	if (!ctx.cr6.lt) goto loc_82121FB4;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bge cr6,0x82121fb8
	if (!ctx.cr6.lt) goto loc_82121FB8;
loc_82121FB4:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82121FB8:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82121F30) {
	__imp__sub_82121F30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82121FC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82121FC8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32167
	ctx.r11.s64 = -2108096512;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r29,r11,-8976
	ctx.r29.s64 = ctx.r11.s64 + -8976;
loc_82121FE0:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lwz r4,44(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// ori r10,r11,564
	ctx.r10.u64 = ctx.r11.u64 | 564;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// lwzx r5,r29,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r10.u32);
	// bne cr6,0x82122000
	if (!ctx.cr6.eq) goto loc_82122000;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82122074
	goto loc_82122074;
loc_82122000:
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// rlwinm r6,r10,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r7,r11,r5
	ctx.r7.u64 = ctx.r11.u64 + ctx.r5.u64;
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r6,r8,-1
	ctx.r6.s64 = ctx.r8.s64 + -1;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// and r8,r7,r6
	ctx.r8.u64 = ctx.r7.u64 & ctx.r6.u64;
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// blt cr6,0x82122058
	if (ctx.cr6.lt) goto loc_82122058;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82122050
	if (ctx.cr6.lt) goto loc_82122050;
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82122070
	if (ctx.cr6.lt) goto loc_82122070;
loc_82122050:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82122070
	goto loc_82122070;
loc_82122058:
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8212206c
	if (!ctx.cr6.lt) goto loc_8212206C;
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// bge cr6,0x82122070
	if (!ctx.cr6.lt) goto loc_82122070;
loc_8212206C:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82122070:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_82122074:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82122108
	if (ctx.cr6.eq) goto loc_82122108;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// addi r10,r4,-1
	ctx.r10.s64 = ctx.r4.s64 + -1;
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r10,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r10.u32);
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x821220a4
	if (!ctx.cr6.eq) goto loc_821220A4;
	// stw r3,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r3.u32);
loc_821220A4:
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x82121fe0
	if (!ctx.cr6.eq) goto loc_82121FE0;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r9,r11,568
	ctx.r9.u64 = ctx.r11.u64 | 568;
	// ori r7,r10,584
	ctx.r7.u64 = ctx.r10.u64 | 584;
	// lis r8,1
	ctx.r8.s64 = 65536;
	// ori r6,r8,568
	ctx.r6.u64 = ctx.r8.u64 | 568;
	// lwzx r10,r29,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r9.u32);
	// lwzx r11,r29,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r7.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stwx r10,r29,r6
	PPC_STORE_U32(ctx.r29.u32 + ctx.r6.u32, ctx.r10.u32);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82121fe0
	if (!ctx.cr6.lt) goto loc_82121FE0;
	// lwz r10,44(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 44);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821220f8
	if (ctx.cr6.lt) goto loc_821220F8;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r9,r10,568
	ctx.r9.u64 = ctx.r10.u64 | 568;
	// stwx r11,r29,r9
	PPC_STORE_U32(ctx.r29.u32 + ctx.r9.u32, ctx.r11.u32);
	// b 0x82121fe0
	goto loc_82121FE0;
loc_821220F8:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r9,r11,568
	ctx.r9.u64 = ctx.r11.u64 | 568;
	// stwx r10,r29,r9
	PPC_STORE_U32(ctx.r29.u32 + ctx.r9.u32, ctx.r10.u32);
	// b 0x82121fe0
	goto loc_82121FE0;
loc_82122108:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r30,r11,r10
	ctx.r30.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addis r10,r29,1
	ctx.r10.s64 = ctx.r29.s64 + 65536;
	// cmplw cr6,r5,r30
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r30.u32, ctx.xer);
	// addi r4,r10,52
	ctx.r4.s64 = ctx.r10.s64 + 52;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// ble cr6,0x82122154
	if (!ctx.cr6.gt) goto loc_82122154;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x823de1f0
	ctx.lr = 0x82122134;
	sub_823DE1F0(ctx, base);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// addis r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 65536;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// ori r9,r10,564
	ctx.r9.u64 = ctx.r10.u64 | 564;
	// addi r11,r11,52
	ctx.r11.s64 = ctx.r11.s64 + 52;
	// add r4,r30,r11
	ctx.r4.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwzx r11,r29,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r9.u32);
	// subf r5,r30,r11
	ctx.r5.s64 = ctx.r11.s64 - ctx.r30.s64;
loc_82122154:
	// bl 0x823de1f0
	ctx.lr = 0x82122158;
	sub_823DE1F0(ctx, base);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lis r9,1
	ctx.r9.s64 = 65536;
	// ori r8,r11,564
	ctx.r8.u64 = ctx.r11.u64 | 564;
	// ori r7,r9,564
	ctx.r7.u64 = ctx.r9.u64 | 564;
	// li r6,10
	ctx.r6.s64 = 10;
	// stw r10,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r10.u32);
	// lwzx r11,r29,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r8.u32);
	// stw r11,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r11.u32);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwzx r11,r29,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r7.u32);
	// lwz r9,36(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r3,r10,-1
	ctx.r3.s64 = ctx.r10.s64 + -1;
	// and r11,r4,r3
	ctx.r11.u64 = ctx.r4.u64 & ctx.r3.u64;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// stbx r6,r11,r5
	PPC_STORE_U8(ctx.r11.u32 + ctx.r5.u32, ctx.r6.u8);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// and r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 & ctx.r9.u64;
	// stw r8,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r8.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82121FC0) {
	__imp__sub_82121FC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821221C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8212221c
	if (ctx.cr6.eq) goto loc_8212221C;
	// addic. r7,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r7.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// blt 0x8212221c
	if (ctx.cr0.lt) goto loc_8212221C;
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
loc_821221E4:
	// divw r9,r11,r10
	ctx.r9.s32 = ctx.r11.s32 / ctx.r10.s32;
	// mullw r6,r9,r10
	ctx.r6.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// subf r3,r6,r11
	ctx.r3.s64 = ctx.r11.s64 - ctx.r6.s64;
	// rlwinm r9,r3,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r3,r9
	ctx.r5.u64 = ctx.r3.u64 + ctx.r9.u64;
	// rlwinm r9,r5,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// add r4,r9,r8
	ctx.r4.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lwz r9,20(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// clrlwi r6,r9,31
	ctx.r6.u64 = ctx.r9.u32 & 0x1;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// addic. r7,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// bge 0x821221e4
	if (!ctx.cr0.lt) goto loc_821221E4;
loc_8212221C:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821221C0) {
	__imp__sub_821221C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82122224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82122224) {
	__imp__sub_82122224(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82122228) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82122230;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x821222e8
	if (!ctx.cr6.gt) goto loc_821222E8;
loc_82122250:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// and r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 & ctx.r11.u64;
	// and r4,r8,r10
	ctx.r4.u64 = ctx.r8.u64 & ctx.r10.u64;
	// lbzx r3,r7,r9
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r9.u32);
	// lbzx r11,r4,r9
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + ctx.r9.u32);
	// extsb r3,r3
	ctx.r3.s64 = ctx.r3.s8;
	// extsb r4,r11
	ctx.r4.s64 = ctx.r11.s8;
	// bl 0x822b7bb8
	ctx.lr = 0x8212228C;
	sub_822B7BB8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
	// cmpwi cr6,r3,94
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 94, ctx.xer);
	// bne cr6,0x821222dc
	if (!ctx.cr6.eq) goto loc_821222DC;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// and r7,r11,r8
	ctx.r7.u64 = ctx.r11.u64 & ctx.r8.u64;
	// lbzx r6,r7,r9
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r9.u32);
	// extsb r11,r6
	ctx.r11.s64 = ctx.r6.s8;
	// cmpwi cr6,r11,94
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 94, ctx.xer);
	// beq cr6,0x821222dc
	if (ctx.cr6.eq) goto loc_821222DC;
	// cmpwi cr6,r11,48
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 48, ctx.xer);
	// blt cr6,0x821222dc
	if (ctx.cr6.lt) goto loc_821222DC;
	// cmpwi cr6,r11,57
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 57, ctx.xer);
	// bgt cr6,0x821222dc
	if (ctx.cr6.gt) goto loc_821222DC;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_821222DC:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82122250
	if (ctx.cr6.lt) goto loc_82122250;
loc_821222E8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82122228) {
	__imp__sub_82122228(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821222F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821222F4) {
	__imp__sub_821222F4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821222F8) {
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
	// lwz r11,20(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82122328
	if (!ctx.cr6.eq) goto loc_82122328;
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
loc_82122328:
	// bl 0x82122228
	ctx.lr = 0x8212232C;
	sub_82122228(ctx, base);
	// lis r11,-32167
	ctx.r11.s64 = -2108096512;
	// lis r10,-32167
	ctx.r10.s64 = -2108096512;
	// lwz r11,-11084(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11084);
	// lwz r10,-10704(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -10704);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mullw r11,r9,r3
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r3.s32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82122354
	if (!ctx.cr6.lt) goto loc_82122354;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82122354:
	// lis r10,-32167
	ctx.r10.s64 = -2108096512;
	// lwz r10,-10708(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -10708);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821222F8) {
	__imp__sub_821222F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82122374) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82122374) {
	__imp__sub_82122374(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82122378) {
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
	// lwz r11,20(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x821223a8
	if (!ctx.cr6.eq) goto loc_821223A8;
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
loc_821223A8:
	// bl 0x82122228
	ctx.lr = 0x821223AC;
	sub_82122228(ctx, base);
	// lis r11,-32167
	ctx.r11.s64 = -2108096512;
	// lwz r11,-11084(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11084);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mullw r3,r10,r3
	ctx.r3.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r3.s32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82122378) {
	__imp__sub_82122378(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821223CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821223CC) {
	__imp__sub_821223CC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821223D0) {
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
	// clrlwi r11,r4,31
	ctx.r11.u64 = ctx.r4.u32 & 0x1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821223fc
	if (!ctx.cr6.eq) goto loc_821223FC;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82122454
	goto loc_82122454;
loc_821223FC:
	// lis r11,-31822
	ctx.r11.s64 = -2085486592;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r30,-356(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + -356);
	// bl 0x821221c0
	ctx.lr = 0x8212240C;
	sub_821221C0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82122450
	if (ctx.cr6.eq) goto loc_82122450;
	// rlwinm r10,r3,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r31,r11,r9
	ctx.r31.u64 = ctx.r11.u64 + ctx.r9.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82122378
	ctx.lr = 0x82122438;
	sub_82122378(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// add r11,r3,r10
	ctx.r11.u64 = ctx.r3.u64 + ctx.r10.u64;
	// addi r3,r11,150
	ctx.r3.s64 = ctx.r11.s64 + 150;
	// subf r9,r30,r3
	ctx.r9.s64 = ctx.r3.s64 - ctx.r30.s64;
	// cmpwi cr6,r9,250
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 250, ctx.xer);
	// bge cr6,0x82122454
	if (!ctx.cr6.lt) goto loc_82122454;
loc_82122450:
	// addi r3,r30,250
	ctx.r3.s64 = ctx.r30.s64 + 250;
loc_82122454:
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

PPC_WEAK_FUNC(sub_821223D0) {
	__imp__sub_821223D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8212246C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8212246C) {
	__imp__sub_8212246C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82122470) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x82122478;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,16(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x821225d4
	if (ctx.cr6.eq) goto loc_821225D4;
	// lwz r7,40(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r8,44(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	// lis r9,-31822
	ctx.r9.s64 = -2085486592;
	// subfc r4,r11,r3
	ctx.xer.ca = ctx.r3.u32 >= ctx.r11.u32;
	ctx.r4.s64 = ctx.r3.s64 - ctx.r11.s64;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// lwz r7,48(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// rlwinm r30,r11,1,31,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// divw r11,r8,r10
	ctx.r11.s32 = ctx.r8.s32 / ctx.r10.s32;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r9,-356(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + -356);
	// mullw r10,r11,r10
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// subf r11,r10,r8
	ctx.r11.s64 = ctx.r8.s64 - ctx.r10.s64;
	// rlwinm r8,r3,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// subfe r8,r8,r30
	temp.u8 = (~ctx.r8.u32 + ctx.r30.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r30.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r8.u64 + ctx.r30.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// rlwinm r11,r3,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r30,r11,r5
	ctx.r30.u64 = ctx.r11.u64 + ctx.r5.u64;
	// and r28,r8,r9
	ctx.r28.u64 = ctx.r8.u64 & ctx.r9.u64;
	// stwx r7,r11,r5
	PPC_STORE_U32(ctx.r11.u32 + ctx.r5.u32, ctx.r7.u32);
	// stw r29,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r29.u32);
	// stw r29,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r29.u32);
	// stw r6,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r6.u32);
	// bl 0x821223d0
	ctx.lr = 0x82122500;
	sub_821223D0(ctx, base);
	// stw r3,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r3.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82122534
	if (ctx.cr6.eq) goto loc_82122534;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821222f8
	ctx.lr = 0x82122518;
	sub_821222F8(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r9,12(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r7,r3,r9
	ctx.r7.u64 = ctx.r3.u64 + ctx.r9.u64;
	// stw r7,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r7.u32);
loc_82122534:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82121fc0
	ctx.lr = 0x82122540;
	sub_82121FC0(ctx, base);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x821225d4
	if (ctx.cr6.eq) goto loc_821225D4;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82122560
	if (!ctx.cr6.eq) goto loc_82122560;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82121e98
	ctx.lr = 0x82122560;
	sub_82121E98(ctx, base);
loc_82122560:
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r11.s64;
	// stw r10,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r10.u32);
	// add. r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble 0x821225d4
	if (!ctx.cr0.gt) goto loc_821225D4;
	// lwz r9,40(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r6,r8,-1
	ctx.r6.s64 = ctx.r8.s64 + -1;
	// divw r5,r6,r11
	ctx.r5.s32 = ctx.r6.s32 / ctx.r11.s32;
	// mullw r4,r5,r11
	ctx.r4.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r11.s32);
	// subf r11,r4,r6
	ctx.r11.s64 = ctx.r6.s64 - ctx.r4.s64;
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r11,r8
	ctx.r3.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r11,r3,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r8,r11,r7
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// rlwinm r11,r8,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// subf r6,r10,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r10.s64;
	// cmpw cr6,r6,r28
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r28.s32, ctx.xer);
	// ble cr6,0x821225d4
	if (!ctx.cr6.gt) goto loc_821225D4;
	// add r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 + ctx.r28.u64;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_821225D4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82122470) {
	__imp__sub_82122470(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821225DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821225DC) {
	__imp__sub_821225DC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821225E0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,1
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1, ctx.xer);
	// blt cr6,0x82122650
	if (ctx.cr6.lt) goto loc_82122650;
	// beq cr6,0x82122634
	if (ctx.cr6.eq) goto loc_82122634;
	// cmplwi cr6,r4,3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 3, ctx.xer);
	// blt cr6,0x82122618
	if (ctx.cr6.lt) goto loc_82122618;
	// lis r11,-32167
	ctx.r11.s64 = -2108096512;
	// mulli r10,r3,18520
	ctx.r10.s64 = ctx.r3.s64 * 18520;
	// addi r9,r11,-8976
	ctx.r9.s64 = ctx.r11.s64 + -8976;
	// mulli r11,r4,52
	ctx.r11.s64 = ctx.r4.s64 * 52;
	// addis r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 65536;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r10,r9,8644
	ctx.r10.s64 = ctx.r9.s64 + 8644;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
loc_82122618:
	// lis r10,-32167
	ctx.r10.s64 = -2108096512;
	// mulli r11,r3,18520
	ctx.r11.s64 = ctx.r3.s64 * 18520;
	// addi r9,r10,-8976
	ctx.r9.s64 = ctx.r10.s64 + -8976;
	// addis r10,r9,1
	ctx.r10.s64 = ctx.r9.s64 + 65536;
	// addi r10,r10,18916
	ctx.r10.s64 = ctx.r10.s64 + 18916;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
loc_82122634:
	// lis r10,-32167
	ctx.r10.s64 = -2108096512;
	// mulli r11,r3,18520
	ctx.r11.s64 = ctx.r3.s64 * 18520;
	// addi r9,r10,-8976
	ctx.r9.s64 = ctx.r10.s64 + -8976;
	// addis r10,r9,1
	ctx.r10.s64 = ctx.r9.s64 + 65536;
	// addi r10,r10,14640
	ctx.r10.s64 = ctx.r10.s64 + 14640;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
loc_82122650:
	// lis r11,-32167
	ctx.r11.s64 = -2108096512;
	// addi r3,r11,-8976
	ctx.r3.s64 = ctx.r11.s64 + -8976;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821225E0) {
	__imp__sub_821225E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8212265C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8212265C) {
	__imp__sub_8212265C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82122660) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82122668;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// bl 0x82138ab0
	ctx.lr = 0x82122684;
	sub_82138AB0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821226c8
	if (ctx.cr6.eq) goto loc_821226C8;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne cr6,0x821226a4
	if (!ctx.cr6.eq) goto loc_821226A4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82121d18
	ctx.lr = 0x821226A0;
	sub_82121D18(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_821226A4:
	// rlwinm r11,r31,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0x1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// and r5,r11,r31
	ctx.r5.u64 = ctx.r11.u64 & ctx.r31.u64;
	// bl 0x821225e0
	ctx.lr = 0x821226BC;
	sub_821225E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82121e20
	ctx.lr = 0x821226C8;
	sub_82121E20(ctx, base);
loc_821226C8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82122660) {
	__imp__sub_82122660(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821226D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf68
	ctx.lr = 0x821226D8;
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
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// bl 0x82138ab0
	ctx.lr = 0x82122704;
	sub_82138AB0(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// lis r11,-32167
	ctx.r11.s64 = -2108096512;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// lfs f30,2416(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2416);
	ctx.f30.f64 = double(temp.f32);
	// addi r29,r11,-8976
	ctx.r29.s64 = ctx.r11.s64 + -8976;
	// lfs f31,12240(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12240);
	ctx.f31.f64 = double(temp.f32);
	// beq cr6,0x8212277c
	if (ctx.cr6.eq) goto loc_8212277C;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne cr6,0x82122758
	if (!ctx.cr6.eq) goto loc_82122758;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lwz r11,28716(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28716);
	// lfs f0,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// fadds f1,f13,f30
	ctx.f1.f64 = double(float(ctx.f13.f64 + ctx.f30.f64));
	// bl 0x823dde20
	ctx.lr = 0x82122748;
	sub_823DDE20(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// fctiwz f11,f12
	ctx.f11.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f11.u64);
	// lwz r30,84(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_82122758:
	// rlwinm r11,r30,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0x1;
	// addis r10,r29,1
	ctx.r10.s64 = ctx.r29.s64 + 65536;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// mulli r9,r31,18520
	ctx.r9.s64 = ctx.r31.s64 * 18520;
	// addi r11,r10,14640
	ctx.r11.s64 = ctx.r10.s64 + 14640;
	// and r5,r8,r30
	ctx.r5.u64 = ctx.r8.u64 & ctx.r30.u64;
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82121e20
	ctx.lr = 0x8212277C;
	sub_82121E20(ctx, base);
loc_8212277C:
	// li r28,3
	ctx.r28.s64 = 3;
	// lis r27,-31822
	ctx.r27.s64 = -2085486592;
loc_82122784:
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// bl 0x82138ab0
	ctx.lr = 0x82122798;
	sub_82138AB0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82122874
	if (ctx.cr6.eq) goto loc_82122874;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne cr6,0x821227b8
	if (!ctx.cr6.eq) goto loc_821227B8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82121d18
	ctx.lr = 0x821227B4;
	sub_82121D18(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_821227B8:
	// rlwinm r11,r30,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0x1;
	// cmplwi cr6,r28,1
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 1, ctx.xer);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// and r6,r11,r30
	ctx.r6.u64 = ctx.r11.u64 & ctx.r30.u64;
	// blt cr6,0x82122814
	if (ctx.cr6.lt) goto loc_82122814;
	// addis r10,r29,1
	ctx.r10.s64 = ctx.r29.s64 + 65536;
	// beq cr6,0x82122804
	if (ctx.cr6.eq) goto loc_82122804;
	// cmplwi cr6,r28,3
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 3, ctx.xer);
	// blt cr6,0x821227f4
	if (ctx.cr6.lt) goto loc_821227F4;
	// mulli r9,r31,18520
	ctx.r9.s64 = ctx.r31.s64 * 18520;
	// mulli r11,r28,52
	ctx.r11.s64 = ctx.r28.s64 * 52;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r10,r10,8644
	ctx.r10.s64 = ctx.r10.s64 + 8644;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x82122818
	goto loc_82122818;
loc_821227F4:
	// mulli r11,r31,18520
	ctx.r11.s64 = ctx.r31.s64 * 18520;
	// addi r10,r10,18916
	ctx.r10.s64 = ctx.r10.s64 + 18916;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x82122818
	goto loc_82122818;
loc_82122804:
	// mulli r11,r31,18520
	ctx.r11.s64 = ctx.r31.s64 * 18520;
	// addi r10,r10,14640
	ctx.r10.s64 = ctx.r10.s64 + 14640;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x82122818
	goto loc_82122818;
loc_82122814:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82122818:
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82122874
	if (ctx.cr6.eq) goto loc_82122874;
	// lwz r8,48(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// li r10,2
	ctx.r10.s64 = 2;
	// rlwinm r5,r31,1,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0x1;
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r4,r8,1
	ctx.r4.s64 = ctx.r8.s64 + 1;
	// lwz r8,-356(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + -356);
	// subfc r3,r10,r31
	ctx.xer.ca = ctx.r31.u32 >= ctx.r10.u32;
	ctx.r3.s64 = ctx.r31.s64 - ctx.r10.s64;
	// divw r30,r4,r9
	ctx.r30.s32 = ctx.r4.s32 / ctx.r9.s32;
	// rlwinm r10,r10,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// mullw r9,r30,r9
	ctx.r9.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r9.s32);
	// subf r4,r9,r4
	ctx.r4.s64 = ctx.r4.s64 - ctx.r9.s64;
	// subfe r3,r5,r10
	temp.u8 = (~ctx.r5.u32 + ctx.r10.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r5.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r10,r4,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r4,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r4.u32);
	// and r9,r3,r8
	ctx.r9.u64 = ctx.r3.u64 & ctx.r8.u64;
	// add r11,r10,r7
	ctx.r11.u64 = ctx.r10.u64 + ctx.r7.u64;
	// stwx r9,r10,r7
	PPC_STORE_U32(ctx.r10.u32 + ctx.r7.u32, ctx.r9.u32);
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// add r8,r10,r6
	ctx.r8.u64 = ctx.r10.u64 + ctx.r6.u64;
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
loc_82122874:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmplwi cr6,r28,6
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 6, ctx.xer);
	// ble cr6,0x82122784
	if (!ctx.cr6.gt) goto loc_82122784;
	// lis r11,-31936
	ctx.r11.s64 = -2092957696;
	// lwz r11,-9456(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9456);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82122958
	if (ctx.cr6.eq) goto loc_82122958;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// bl 0x82138ab0
	ctx.lr = 0x821228A8;
	sub_82138AB0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82122958
	if (ctx.cr6.eq) goto loc_82122958;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne cr6,0x821228e0
	if (!ctx.cr6.eq) goto loc_821228E0;
	// lwz r11,-556(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -556);
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// fadds f1,f13,f30
	ctx.f1.f64 = double(float(ctx.f13.f64 + ctx.f30.f64));
	// bl 0x823dde20
	ctx.lr = 0x821228D0;
	sub_823DDE20(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// fctiwz f11,f12
	ctx.f11.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f11.u64);
	// lwz r30,84(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_821228E0:
	// addis r10,r29,1
	ctx.r10.s64 = ctx.r29.s64 + 65536;
	// mulli r11,r31,18520
	ctx.r11.s64 = ctx.r31.s64 * 18520;
	// addi r10,r10,18916
	ctx.r10.s64 = ctx.r10.s64 + 18916;
	// rlwinm r9,r30,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0x1;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r9,-1
	ctx.r10.s64 = ctx.r9.s64 + -1;
	// and r6,r10,r30
	ctx.r6.u64 = ctx.r10.u64 & ctx.r30.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82122958
	if (ctx.cr6.eq) goto loc_82122958;
	// lwz r8,48(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// li r9,2
	ctx.r9.s64 = 2;
	// rlwinm r5,r31,1,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0x1;
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r4,r8,1
	ctx.r4.s64 = ctx.r8.s64 + 1;
	// lwz r8,-356(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + -356);
	// subfc r3,r9,r31
	ctx.xer.ca = ctx.r31.u32 >= ctx.r9.u32;
	ctx.r3.s64 = ctx.r31.s64 - ctx.r9.s64;
	// divw r31,r4,r10
	ctx.r31.s32 = ctx.r4.s32 / ctx.r10.s32;
	// rlwinm r9,r9,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// mullw r10,r31,r10
	ctx.r10.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r10.s32);
	// subf r4,r10,r4
	ctx.r4.s64 = ctx.r4.s64 - ctx.r10.s64;
	// subfe r3,r5,r9
	temp.u8 = (~ctx.r5.u32 + ctx.r9.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r5.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r4,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r4.u32);
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// and r10,r3,r8
	ctx.r10.u64 = ctx.r3.u64 & ctx.r8.u64;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// add r9,r10,r6
	ctx.r9.u64 = ctx.r10.u64 + ctx.r6.u64;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
loc_82122958:
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

PPC_WEAK_FUNC(sub_821226D0) {
	__imp__sub_821226D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82122968) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82122970;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// bl 0x82138ab0
	ctx.lr = 0x82122990;
	sub_82138AB0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821229bc
	if (ctx.cr6.eq) goto loc_821229BC;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// clrlwi r5,r28,24
	ctx.r5.u64 = ctx.r28.u32 & 0xFF;
	// bl 0x821225e0
	ctx.lr = 0x821229B0;
	sub_821225E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82122470
	ctx.lr = 0x821229BC;
	sub_82122470(ctx, base);
loc_821229BC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82122968) {
	__imp__sub_82122968(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821229C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821229C4) {
	__imp__sub_821229C4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821229C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x821229D0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x82138ab0
	ctx.lr = 0x821229F0;
	sub_82138AB0(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// lis r11,-32167
	ctx.r11.s64 = -2108096512;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// addi r30,r11,-8976
	ctx.r30.s64 = ctx.r11.s64 + -8976;
	// beq cr6,0x82122a18
	if (ctx.cr6.eq) goto loc_82122A18;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// clrlwi r5,r27,24
	ctx.r5.u64 = ctx.r27.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82122470
	ctx.lr = 0x82122A18;
	sub_82122470(ctx, base);
loc_82122A18:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82138ab0
	ctx.lr = 0x82122A28;
	sub_82138AB0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82122a54
	if (ctx.cr6.eq) goto loc_82122A54;
	// addis r10,r30,1
	ctx.r10.s64 = ctx.r30.s64 + 65536;
	// mulli r11,r31,18520
	ctx.r11.s64 = ctx.r31.s64 * 18520;
	// addi r10,r10,14640
	ctx.r10.s64 = ctx.r10.s64 + 14640;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// clrlwi r5,r27,24
	ctx.r5.u64 = ctx.r27.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82122470
	ctx.lr = 0x82122A54;
	sub_82122470(ctx, base);
loc_82122A54:
	// li r29,3
	ctx.r29.s64 = 3;
loc_82122A58:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82138ab0
	ctx.lr = 0x82122A68;
	sub_82138AB0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82122ad0
	if (ctx.cr6.eq) goto loc_82122AD0;
	// cmplwi cr6,r29,1
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 1, ctx.xer);
	// blt cr6,0x82122abc
	if (ctx.cr6.lt) goto loc_82122ABC;
	// mulli r11,r31,18520
	ctx.r11.s64 = ctx.r31.s64 * 18520;
	// addis r10,r30,1
	ctx.r10.s64 = ctx.r30.s64 + 65536;
	// beq cr6,0x82122ab0
	if (ctx.cr6.eq) goto loc_82122AB0;
	// cmplwi cr6,r29,3
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 3, ctx.xer);
	// blt cr6,0x82122aa4
	if (ctx.cr6.lt) goto loc_82122AA4;
	// mulli r9,r29,52
	ctx.r9.s64 = ctx.r29.s64 * 52;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r10,r10,8644
	ctx.r10.s64 = ctx.r10.s64 + 8644;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x82122ac0
	goto loc_82122AC0;
loc_82122AA4:
	// addi r10,r10,18916
	ctx.r10.s64 = ctx.r10.s64 + 18916;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x82122ac0
	goto loc_82122AC0;
loc_82122AB0:
	// addi r10,r10,14640
	ctx.r10.s64 = ctx.r10.s64 + 14640;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x82122ac0
	goto loc_82122AC0;
loc_82122ABC:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_82122AC0:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// clrlwi r5,r27,24
	ctx.r5.u64 = ctx.r27.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82122470
	ctx.lr = 0x82122AD0;
	sub_82122470(ctx, base);
loc_82122AD0:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplwi cr6,r29,6
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 6, ctx.xer);
	// ble cr6,0x82122a58
	if (!ctx.cr6.gt) goto loc_82122A58;
	// lis r11,-31936
	ctx.r11.s64 = -2092957696;
	// lwz r11,-9456(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9456);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82122b2c
	if (ctx.cr6.eq) goto loc_82122B2C;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82138ab0
	ctx.lr = 0x82122B00;
	sub_82138AB0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82122b2c
	if (ctx.cr6.eq) goto loc_82122B2C;
	// addis r10,r30,1
	ctx.r10.s64 = ctx.r30.s64 + 65536;
	// mulli r11,r31,18520
	ctx.r11.s64 = ctx.r31.s64 * 18520;
	// addi r10,r10,18916
	ctx.r10.s64 = ctx.r10.s64 + 18916;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// clrlwi r5,r27,24
	ctx.r5.u64 = ctx.r27.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82122470
	ctx.lr = 0x82122B2C;
	sub_82122470(ctx, base);
loc_82122B2C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821229C8) {
	__imp__sub_821229C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82122B34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82122B34) {
	__imp__sub_82122B34(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82122B38) {
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
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x821229c8
	ctx.lr = 0x82122B50;
	sub_821229C8(ctx, base);
	// lis r11,-32167
	ctx.r11.s64 = -2108096512;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// addi r11,r11,-8976
	ctx.r11.s64 = ctx.r11.s64 + -8976;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// ori r8,r10,564
	ctx.r8.u64 = ctx.r10.u64 | 564;
	// ori r7,r9,568
	ctx.r7.u64 = ctx.r9.u64 | 568;
	// li r10,0
	ctx.r10.s64 = 0;
	// stwx r10,r11,r8
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r10.u32);
	// lwz r9,44(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// lwzx r10,r11,r7
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// addi r6,r9,-1
	ctx.r6.s64 = ctx.r9.s64 + -1;
	// cmpw cr6,r10,r6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, ctx.xer);
	// bne cr6,0x82122b94
	if (!ctx.cr6.eq) goto loc_82122B94;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r8,r9,568
	ctx.r8.u64 = ctx.r9.u64 | 568;
	// stwx r10,r11,r8
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r10.u32);
loc_82122B94:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82122B38) {
	__imp__sub_82122B38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82122BA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82122BA4) {
	__imp__sub_82122BA4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82122BA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf40
	ctx.lr = 0x82122BB0;
	__savegprlr_14(ctx, base);
	// stfd f30,-168(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -168, ctx.f30.u64);
	// stfd f31,-160(r1)
	PPC_STORE_U64(ctx.r1.u32 + -160, ctx.f31.u64);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32167
	ctx.r11.s64 = -2108096512;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r11,r11,-8976
	ctx.r11.s64 = ctx.r11.s64 + -8976;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// lis r10,-32167
	ctx.r10.s64 = -2108096512;
	// addi r22,r11,9008
	ctx.r22.s64 = ctx.r11.s64 + 9008;
	// lfs f30,2416(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2416);
	ctx.f30.f64 = double(temp.f32);
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lfs f31,12240(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12240);
	ctx.f31.f64 = double(temp.f32);
	// li r29,0
	ctx.r29.s64 = 0;
	// li r19,2048
	ctx.r19.s64 = 2048;
	// li r20,3
	ctx.r20.s64 = 3;
	// li r18,1
	ctx.r18.s64 = 1;
	// li r16,1024
	ctx.r16.s64 = 1024;
	// li r17,5
	ctx.r17.s64 = 5;
	// addi r21,r11,28836
	ctx.r21.s64 = ctx.r11.s64 + 28836;
	// addi r24,r10,-11120
	ctx.r24.s64 = ctx.r10.s64 + -11120;
loc_82122C08:
	// addi r30,r22,-8400
	ctx.r30.s64 = ctx.r22.s64 + -8400;
	// addi r26,r22,1152
	ctx.r26.s64 = ctx.r22.s64 + 1152;
	// mr r25,r30
	ctx.r25.u64 = ctx.r30.u64;
	// mr r27,r22
	ctx.r27.u64 = ctx.r22.u64;
	// addi r31,r22,-228
	ctx.r31.s64 = ctx.r22.s64 + -228;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
loc_82122C20:
	// addi r11,r24,1568
	ctx.r11.s64 = ctx.r24.s64 + 1568;
	// lwzx r10,r28,r24
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r24.u32);
	// lwzx r9,r28,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// addi r23,r11,3
	ctx.r23.s64 = ctx.r11.s64 + 3;
	// lfs f0,12(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// fadds f1,f13,f30
	ctx.f1.f64 = double(float(ctx.f13.f64 + ctx.f30.f64));
	// bl 0x823dde20
	ctx.lr = 0x82122C44;
	sub_823DDE20(ctx, base);
	// addi r8,r21,-148
	ctx.r8.s64 = ctx.r21.s64 + -148;
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// lwzx r7,r28,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r8.u32);
	// lfs f11,12(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// fctiwz f10,f12
	ctx.f10.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// fmuls f9,f11,f31
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// stfd f10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f10.u64);
	// lwz r15,92(r1)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// fadds f1,f9,f30
	ctx.f1.f64 = double(float(ctx.f9.f64 + ctx.f30.f64));
	// bl 0x823dde20
	ctx.lr = 0x82122C6C;
	sub_823DDE20(ctx, base);
	// addi r6,r24,396
	ctx.r6.s64 = ctx.r24.s64 + 396;
	// frsp f8,f1
	ctx.fpscr.disableFlushMode();
	ctx.f8.f64 = double(float(ctx.f1.f64));
	// lwzx r5,r28,r6
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r6.u32);
	// lfs f7,12(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// fctiwz f6,f8
	ctx.f6.s64 = (ctx.f8.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f8.f64));
	// fmuls f5,f7,f31
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f31.f64));
	// stfd f6,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f6.u64);
	// lwz r14,92(r1)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// fadds f1,f5,f30
	ctx.f1.f64 = double(float(ctx.f5.f64 + ctx.f30.f64));
	// bl 0x823dde20
	ctx.lr = 0x82122C94;
	sub_823DDE20(ctx, base);
	// frsp f4,f1
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = double(float(ctx.f1.f64));
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// stw r27,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r27.u32);
	// addi r27,r27,288
	ctx.r27.s64 = ctx.r27.s64 + 288;
	// stw r26,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r26.u32);
	// addi r26,r26,96
	ctx.r26.s64 = ctx.r26.s64 + 96;
	// stw r25,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r25.u32);
	// addi r25,r25,2048
	ctx.r25.s64 = ctx.r25.s64 + 2048;
	// stw r29,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r29.u32);
	// cmplwi cr6,r28,16
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 16, ctx.xer);
	// stw r19,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r19.u32);
	// stw r29,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r29.u32);
	// stw r29,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r29.u32);
	// stw r29,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r29.u32);
	// stw r23,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r23.u32);
	// fctiwz f3,f4
	ctx.f3.s64 = (ctx.f4.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f4.f64));
	// stfd f3,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f3.u64);
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stw r20,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r20.u32);
	// stw r15,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r15.u32);
	// stw r14,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r14.u32);
	// stwu r4,52(r31)
	ea = 52 + ctx.r31.u32;
	PPC_STORE_U32(ea, ctx.r4.u32);
	ctx.r31.u32 = ea;
	// blt cr6,0x82122c20
	if (ctx.cr6.lt) goto loc_82122C20;
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// addi r9,r30,14084
	ctx.r9.s64 = ctx.r30.s64 + 14084;
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r7,r30,16484
	ctx.r7.s64 = ctx.r30.s64 + 16484;
	// addi r6,r30,9936
	ctx.r6.s64 = ctx.r30.s64 + 9936;
	// addis r10,r8,2
	ctx.r10.s64 = ctx.r8.s64 + 131072;
	// li r5,4096
	ctx.r5.s64 = 4096;
	// lwz r4,12(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r3,r30,18360
	ctx.r3.s64 = ctx.r30.s64 + 18360;
	// stw r9,14032(r30)
	PPC_STORE_U32(ctx.r30.u32 + 14032, ctx.r9.u32);
	// addi r11,r30,18480
	ctx.r11.s64 = ctx.r30.s64 + 18480;
	// addi r9,r30,17284
	ctx.r9.s64 = ctx.r30.s64 + 17284;
	// stw r7,14036(r30)
	PPC_STORE_U32(ctx.r30.u32 + 14036, ctx.r7.u32);
	// addi r22,r22,18520
	ctx.r22.s64 = ctx.r22.s64 + 18520;
	// stw r6,14040(r30)
	PPC_STORE_U32(ctx.r30.u32 + 14040, ctx.r6.u32);
	// addi r8,r10,-19488
	ctx.r8.s64 = ctx.r10.s64 + -19488;
	// stw r29,14068(r30)
	PPC_STORE_U32(ctx.r30.u32 + 14068, ctx.r29.u32);
	// stw r4,14048(r30)
	PPC_STORE_U32(ctx.r30.u32 + 14048, ctx.r4.u32);
	// stw r5,14044(r30)
	PPC_STORE_U32(ctx.r30.u32 + 14044, ctx.r5.u32);
	// cmpw cr6,r22,r8
	ctx.cr6.compare<int32_t>(ctx.r22.s32, ctx.r8.s32, ctx.xer);
	// stw r29,14072(r30)
	PPC_STORE_U32(ctx.r30.u32 + 14072, ctx.r29.u32);
	// stw r29,14076(r30)
	PPC_STORE_U32(ctx.r30.u32 + 14076, ctx.r29.u32);
	// stw r29,14080(r30)
	PPC_STORE_U32(ctx.r30.u32 + 14080, ctx.r29.u32);
	// stw r29,14052(r30)
	PPC_STORE_U32(ctx.r30.u32 + 14052, ctx.r29.u32);
	// stw r29,14056(r30)
	PPC_STORE_U32(ctx.r30.u32 + 14056, ctx.r29.u32);
	// stw r29,14060(r30)
	PPC_STORE_U32(ctx.r30.u32 + 14060, ctx.r29.u32);
	// stw r18,14064(r30)
	PPC_STORE_U32(ctx.r30.u32 + 14064, ctx.r18.u32);
	// stw r3,18308(r30)
	PPC_STORE_U32(ctx.r30.u32 + 18308, ctx.r3.u32);
	// stw r11,18312(r30)
	PPC_STORE_U32(ctx.r30.u32 + 18312, ctx.r11.u32);
	// stw r9,18316(r30)
	PPC_STORE_U32(ctx.r30.u32 + 18316, ctx.r9.u32);
	// stw r29,18344(r30)
	PPC_STORE_U32(ctx.r30.u32 + 18344, ctx.r29.u32);
	// stw r16,18320(r30)
	PPC_STORE_U32(ctx.r30.u32 + 18320, ctx.r16.u32);
	// stw r29,18348(r30)
	PPC_STORE_U32(ctx.r30.u32 + 18348, ctx.r29.u32);
	// stw r29,18352(r30)
	PPC_STORE_U32(ctx.r30.u32 + 18352, ctx.r29.u32);
	// stw r29,18356(r30)
	PPC_STORE_U32(ctx.r30.u32 + 18356, ctx.r29.u32);
	// stw r17,18324(r30)
	PPC_STORE_U32(ctx.r30.u32 + 18324, ctx.r17.u32);
	// stw r29,18328(r30)
	PPC_STORE_U32(ctx.r30.u32 + 18328, ctx.r29.u32);
	// stw r29,18332(r30)
	PPC_STORE_U32(ctx.r30.u32 + 18332, ctx.r29.u32);
	// stw r18,18336(r30)
	PPC_STORE_U32(ctx.r30.u32 + 18336, ctx.r18.u32);
	// stw r18,18340(r30)
	PPC_STORE_U32(ctx.r30.u32 + 18340, ctx.r18.u32);
	// blt cr6,0x82122c08
	if (ctx.cr6.lt) goto loc_82122C08;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lfd f30,-168(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -168);
	// lfd f31,-160(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x823ddf90
	__restgprlr_14(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82122BA8) {
	__imp__sub_82122BA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82122DA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82122DA4) {
	__imp__sub_82122DA4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82122DA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf40
	ctx.lr = 0x82122DB0;
	__savegprlr_14(ctx, base);
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x823de014
	ctx.lr = 0x82122DB8;
	__savefpr_23(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// lfs f27,5880(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5880);
	ctx.f27.f64 = double(temp.f32);
	// addi r5,r7,-10808
	ctx.r5.s64 = ctx.r7.s64 + -10808;
	// lfs f31,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,5484(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5484);
	ctx.f30.f64 = double(temp.f32);
	// addi r3,r6,-10828
	ctx.r3.s64 = ctx.r6.s64 + -10828;
	// li r10,0
	ctx.r10.s64 = 0;
	// lfs f3,6040(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 6040);
	ctx.f3.f64 = double(temp.f32);
	// fmr f6,f31
	ctx.f6.f64 = ctx.f31.f64;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// fmr f2,f27
	ctx.f2.f64 = ctx.f27.f64;
	// fmr f5,f30
	ctx.f5.f64 = ctx.f30.f64;
	// fmr f4,f31
	ctx.f4.f64 = ctx.f31.f64;
	// fmr f1,f27
	ctx.f1.f64 = ctx.f27.f64;
	// bl 0x822e1790
	ctx.lr = 0x82122E0C;
	sub_822E1790(ctx, base);
	// lis r11,-32167
	ctx.r11.s64 = -2108096512;
	// fmr f6,f31
	ctx.fpscr.disableFlushMode();
	ctx.f6.f64 = ctx.f31.f64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmr f5,f30
	ctx.f5.f64 = ctx.f30.f64;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// fmr f4,f31
	ctx.f4.f64 = ctx.f31.f64;
	// addi r30,r11,-8976
	ctx.r30.s64 = ctx.r11.s64 + -8976;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lfs f29,20208(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20208);
	ctx.f29.f64 = double(temp.f32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r7,r9,-10864
	ctx.r7.s64 = ctx.r9.s64 + -10864;
	// lfs f2,4292(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4292);
	ctx.f2.f64 = double(temp.f32);
	// addi r3,r8,-10888
	ctx.r3.s64 = ctx.r8.s64 + -10888;
	// stw r11,-1988(r30)
	PPC_STORE_U32(ctx.r30.u32 + -1988, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// fmr f3,f29
	ctx.f3.f64 = ctx.f29.f64;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// bl 0x822e1790
	ctx.lr = 0x82122E5C;
	sub_822E1790(ctx, base);
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// fmr f6,f31
	ctx.fpscr.disableFlushMode();
	ctx.f6.f64 = ctx.f31.f64;
	// addi r24,r11,28836
	ctx.r24.s64 = ctx.r11.s64 + 28836;
	// fmr f5,f30
	ctx.f5.f64 = ctx.f30.f64;
	// lis r5,-32252
	ctx.r5.s64 = -2113667072;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// lis r4,-32255
	ctx.r4.s64 = -2113863680;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lfs f28,2832(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 2832);
	ctx.f28.f64 = double(temp.f32);
	// addi r9,r4,-10928
	ctx.r9.s64 = ctx.r4.s64 + -10928;
	// lfs f3,-9384(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -9384);
	ctx.f3.f64 = double(temp.f32);
	// addi r3,r10,-10948
	ctx.r3.s64 = ctx.r10.s64 + -10948;
	// fmr f4,f28
	ctx.f4.f64 = ctx.f28.f64;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// stw r11,-124(r24)
	PPC_STORE_U32(ctx.r24.u32 + -124, ctx.r11.u32);
	// bl 0x822e1790
	ctx.lr = 0x82122EAC;
	sub_822E1790(ctx, base);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// stw r3,-548(r30)
	PPC_STORE_U32(ctx.r30.u32 + -548, ctx.r3.u32);
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// lfs f2,8116(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8116);
	ctx.f2.f64 = double(temp.f32);
	// lis r4,-32255
	ctx.r4.s64 = -2113863680;
	// lfs f3,6020(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 6020);
	ctx.f3.f64 = double(temp.f32);
	// addi r5,r6,-10976
	ctx.r5.s64 = ctx.r6.s64 + -10976;
	// fmr f6,f31
	ctx.f6.f64 = ctx.f31.f64;
	// addi r3,r4,-11000
	ctx.r3.s64 = ctx.r4.s64 + -11000;
	// fmr f5,f30
	ctx.f5.f64 = ctx.f30.f64;
	// li r10,0
	ctx.r10.s64 = 0;
	// fmr f4,f28
	ctx.f4.f64 = ctx.f28.f64;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// bl 0x822e1790
	ctx.lr = 0x82122EEC;
	sub_822E1790(ctx, base);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// fmr f2,f29
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f29.f64;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// fmr f6,f31
	ctx.f6.f64 = ctx.f31.f64;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lfs f24,8336(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8336);
	ctx.f24.f64 = double(temp.f32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lfs f25,6032(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 6032);
	ctx.f25.f64 = double(temp.f32);
	// addi r6,r8,-11028
	ctx.r6.s64 = ctx.r8.s64 + -11028;
	// fmr f5,f30
	ctx.f5.f64 = ctx.f30.f64;
	// addi r3,r7,-11052
	ctx.r3.s64 = ctx.r7.s64 + -11052;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,-128(r24)
	PPC_STORE_U32(ctx.r24.u32 + -128, ctx.r11.u32);
	// fmr f4,f24
	ctx.f4.f64 = ctx.f24.f64;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// fmr f3,f25
	ctx.f3.f64 = ctx.f25.f64;
	// bl 0x822e1790
	ctx.lr = 0x82122F38;
	sub_822E1790(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r3,-4(r30)
	PPC_STORE_U32(ctx.r30.u32 + -4, ctx.r3.u32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfs f23,11804(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11804);
	ctx.f23.f64 = double(temp.f32);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r10,-32167
	ctx.r10.s64 = -2108096512;
	// lis r9,-32167
	ctx.r9.s64 = -2108096512;
	// lis r8,-32167
	ctx.r8.s64 = -2108096512;
	// lfs f26,2416(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2416);
	ctx.f26.f64 = double(temp.f32);
	// lis r29,-32167
	ctx.r29.s64 = -2108096512;
	// lfs f29,6912(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 6912);
	ctx.f29.f64 = double(temp.f32);
	// lis r11,-32167
	ctx.r11.s64 = -2108096512;
	// lis r7,-32166
	ctx.r7.s64 = -2108030976;
	// lis r6,-32167
	ctx.r6.s64 = -2108096512;
	// lis r5,-32167
	ctx.r5.s64 = -2108096512;
	// lis r4,-32166
	ctx.r4.s64 = -2108030976;
	// lis r3,-32167
	ctx.r3.s64 = -2108096512;
	// lis r28,-32167
	ctx.r28.s64 = -2108096512;
	// lis r27,-32255
	ctx.r27.s64 = -2113863680;
	// lis r26,-32167
	ctx.r26.s64 = -2108096512;
	// lis r25,-32167
	ctx.r25.s64 = -2108096512;
	// addi r10,r10,-9120
	ctx.r10.s64 = ctx.r10.s64 + -9120;
	// addi r9,r9,-10960
	ctx.r9.s64 = ctx.r9.s64 + -10960;
	// addi r8,r8,-9240
	ctx.r8.s64 = ctx.r8.s64 + -9240;
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// addi r18,r29,-10296
	ctx.r18.s64 = ctx.r29.s64 + -10296;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// addi r14,r11,-10696
	ctx.r14.s64 = ctx.r11.s64 + -10696;
	// addi r23,r7,28840
	ctx.r23.s64 = ctx.r7.s64 + 28840;
	// addi r22,r6,-11080
	ctx.r22.s64 = ctx.r6.s64 + -11080;
	// addi r21,r5,-9888
	ctx.r21.s64 = ctx.r5.s64 + -9888;
	// addi r20,r4,28720
	ctx.r20.s64 = ctx.r4.s64 + 28720;
	// addi r19,r3,-11120
	ctx.r19.s64 = ctx.r3.s64 + -11120;
	// addi r17,r28,-10000
	ctx.r17.s64 = ctx.r28.s64 + -10000;
	// addi r29,r27,-12752
	ctx.r29.s64 = ctx.r27.s64 + -12752;
	// addi r16,r26,-9520
	ctx.r16.s64 = ctx.r26.s64 + -9520;
	// addi r15,r25,-10400
	ctx.r15.s64 = ctx.r25.s64 + -10400;
loc_82122FD4:
	// mulli r11,r31,26
	ctx.r11.s64 = ctx.r31.s64 * 26;
	// add r27,r11,r15
	ctx.r27.u64 = ctx.r11.u64 + ctx.r15.u64;
	// mulli r11,r31,69
	ctx.r11.s64 = ctx.r31.s64 * 69;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r4,r29,48
	ctx.r4.s64 = ctx.r29.s64 + 48;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// add r26,r11,r16
	ctx.r26.u64 = ctx.r11.u64 + ctx.r16.u64;
	// bl 0x823df2b0
	ctx.lr = 0x82122FF4;
	sub_823DF2B0(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r4,r29,80
	ctx.r4.s64 = ctx.r29.s64 + 80;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x823df2b0
	ctx.lr = 0x82123004;
	sub_823DF2B0(ctx, base);
	// rlwinm r28,r31,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// fmr f3,f29
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f29.f64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// li r7,0
	ctx.r7.s64 = 0;
	// lfsx f1,r28,r29
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r29.u32);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822e1660
	ctx.lr = 0x82123024;
	sub_822E1660(ctx, base);
	// addi r10,r30,-2128
	ctx.r10.s64 = ctx.r30.s64 + -2128;
	// mulli r11,r31,28
	ctx.r11.s64 = ctx.r31.s64 * 28;
	// stwx r3,r28,r10
	PPC_STORE_U32(ctx.r28.u32 + ctx.r10.u32, ctx.r3.u32);
	// add r27,r11,r17
	ctx.r27.u64 = ctx.r11.u64 + ctx.r17.u64;
	// mulli r11,r31,73
	ctx.r11.s64 = ctx.r31.s64 * 73;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r4,r29,152
	ctx.r4.s64 = ctx.r29.s64 + 152;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// add r26,r11,r18
	ctx.r26.u64 = ctx.r11.u64 + ctx.r18.u64;
	// bl 0x823df2b0
	ctx.lr = 0x8212304C;
	sub_823DF2B0(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r4,r29,184
	ctx.r4.s64 = ctx.r29.s64 + 184;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x823df2b0
	ctx.lr = 0x8212305C;
	sub_823DF2B0(ctx, base);
	// addi r9,r29,16
	ctx.r9.s64 = ctx.r29.s64 + 16;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,9
	ctx.r6.s64 = 9;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwzx r4,r28,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r9.u32);
	// bl 0x822e1618
	ctx.lr = 0x8212307C;
	sub_822E1618(ctx, base);
	// stwx r3,r28,r19
	PPC_STORE_U32(ctx.r28.u32 + ctx.r19.u32, ctx.r3.u32);
	// mulli r25,r31,29
	ctx.r25.s64 = ctx.r31.s64 * 29;
	// add r27,r25,r20
	ctx.r27.u64 = ctx.r25.u64 + ctx.r20.u64;
	// mulli r11,r31,84
	ctx.r11.s64 = ctx.r31.s64 * 84;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r4,r29,260
	ctx.r4.s64 = ctx.r29.s64 + 260;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// add r26,r11,r21
	ctx.r26.u64 = ctx.r11.u64 + ctx.r21.u64;
	// bl 0x823df2b0
	ctx.lr = 0x821230A0;
	sub_823DF2B0(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r4,r29,296
	ctx.r4.s64 = ctx.r29.s64 + 296;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x823df2b0
	ctx.lr = 0x821230B0;
	sub_823DF2B0(ctx, base);
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// fmr f3,f29
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f29.f64;
	// li r7,0
	ctx.r7.s64 = 0;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// fmr f1,f27
	ctx.f1.f64 = ctx.f27.f64;
	// bl 0x822e1660
	ctx.lr = 0x821230CC;
	sub_822E1660(ctx, base);
	// addi r8,r30,-576
	ctx.r8.s64 = ctx.r30.s64 + -576;
	// add r27,r25,r22
	ctx.r27.u64 = ctx.r25.u64 + ctx.r22.u64;
	// mulli r11,r31,54
	ctx.r11.s64 = ctx.r31.s64 * 54;
	// stwx r3,r28,r8
	PPC_STORE_U32(ctx.r28.u32 + ctx.r8.u32, ctx.r3.u32);
	// addi r4,r29,384
	ctx.r4.s64 = ctx.r29.s64 + 384;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// add r26,r11,r23
	ctx.r26.u64 = ctx.r11.u64 + ctx.r23.u64;
	// bl 0x823df2b0
	ctx.lr = 0x821230F0;
	sub_823DF2B0(ctx, base);
	// addi r4,r29,416
	ctx.r4.s64 = ctx.r29.s64 + 416;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x823df2b0
	ctx.lr = 0x82123100;
	sub_823DF2B0(ctx, base);
	// cmplwi cr6,r31,2
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 2, ctx.xer);
	// bne cr6,0x82123110
	if (!ctx.cr6.eq) goto loc_82123110;
	// fmr f1,f24
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f24.f64;
	// b 0x82123114
	goto loc_82123114;
loc_82123110:
	// fmr f1,f27
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f27.f64;
loc_82123114:
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// fmr f3,f29
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f29.f64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x822e1660
	ctx.lr = 0x8212312C;
	sub_822E1660(ctx, base);
	// addi r10,r24,-148
	ctx.r10.s64 = ctx.r24.s64 + -148;
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mulli r11,r31,30
	ctx.r11.s64 = ctx.r31.s64 * 30;
	// lwz r8,100(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stwx r3,r28,r10
	PPC_STORE_U32(ctx.r28.u32 + ctx.r10.u32, ctx.r3.u32);
	// add r27,r11,r9
	ctx.r27.u64 = ctx.r11.u64 + ctx.r9.u64;
	// mulli r11,r31,55
	ctx.r11.s64 = ctx.r31.s64 * 55;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r4,r29,472
	ctx.r4.s64 = ctx.r29.s64 + 472;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// add r26,r11,r8
	ctx.r26.u64 = ctx.r11.u64 + ctx.r8.u64;
	// bl 0x823df2b0
	ctx.lr = 0x8212315C;
	sub_823DF2B0(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r4,r29,504
	ctx.r4.s64 = ctx.r29.s64 + 504;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x823df2b0
	ctx.lr = 0x8212316C;
	sub_823DF2B0(ctx, base);
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// fmr f3,f29
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f29.f64;
	// li r7,0
	ctx.r7.s64 = 0;
	// fmr f2,f23
	ctx.f2.f64 = ctx.f23.f64;
	// fmr f1,f26
	ctx.f1.f64 = ctx.f26.f64;
	// bl 0x822e1660
	ctx.lr = 0x82123188;
	sub_822E1660(ctx, base);
	// addi r7,r30,-1748
	ctx.r7.s64 = ctx.r30.s64 + -1748;
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r6,104(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// mulli r10,r31,35
	ctx.r10.s64 = ctx.r31.s64 * 35;
	// stwx r3,r28,r7
	PPC_STORE_U32(ctx.r28.u32 + ctx.r7.u32, ctx.r3.u32);
	// add r5,r31,r11
	ctx.r5.u64 = ctx.r31.u64 + ctx.r11.u64;
	// add r27,r10,r6
	ctx.r27.u64 = ctx.r10.u64 + ctx.r6.u64;
	// rlwinm r11,r5,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r4,r29,560
	ctx.r4.s64 = ctx.r29.s64 + 560;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// add r26,r11,r14
	ctx.r26.u64 = ctx.r11.u64 + ctx.r14.u64;
	// bl 0x823df2b0
	ctx.lr = 0x821231BC;
	sub_823DF2B0(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r4,r29,596
	ctx.r4.s64 = ctx.r29.s64 + 596;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x823df2b0
	ctx.lr = 0x821231CC;
	sub_823DF2B0(ctx, base);
	// addi r4,r29,32
	ctx.r4.s64 = ctx.r29.s64 + 32;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// fmr f3,f29
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f29.f64;
	// li r7,0
	ctx.r7.s64 = 0;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lfsx f1,r28,r4
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r4.u32);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822e1660
	ctx.lr = 0x821231EC;
	sub_822E1660(ctx, base);
	// addi r11,r30,-1764
	ctx.r11.s64 = ctx.r30.s64 + -1764;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,4
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 4, ctx.xer);
	// stwx r3,r28,r11
	PPC_STORE_U32(ctx.r28.u32 + ctx.r11.u32, ctx.r3.u32);
	// blt cr6,0x82122fd4
	if (ctx.cr6.lt) goto loc_82122FD4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f3,f29
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f29.f64;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r8,r10,-11096
	ctx.r8.s64 = ctx.r10.s64 + -11096;
	// addi r3,r9,-11120
	ctx.r3.s64 = ctx.r9.s64 + -11120;
	// li r7,0
	ctx.r7.s64 = 0;
	// lfs f1,6016(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6016);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822e1660
	ctx.lr = 0x82123228;
	sub_822E1660(ctx, base);
	// stw r3,-556(r30)
	PPC_STORE_U32(ctx.r30.u32 + -556, ctx.r3.u32);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lfs f1,664(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 664);
	ctx.f1.f64 = double(temp.f32);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// fmr f3,f29
	ctx.f3.f64 = ctx.f29.f64;
	// addi r3,r7,-11136
	ctx.r3.s64 = ctx.r7.s64 + -11136;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// addi r8,r8,-11184
	ctx.r8.s64 = ctx.r8.s64 + -11184;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x822e1660
	ctx.lr = 0x82123250;
	sub_822E1660(ctx, base);
	// stw r3,-120(r24)
	PPC_STORE_U32(ctx.r24.u32 + -120, ctx.r3.u32);
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// addi r8,r6,-11232
	ctx.r8.s64 = ctx.r6.s64 + -11232;
	// addi r3,r5,-11252
	ctx.r3.s64 = ctx.r5.s64 + -11252;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,100
	ctx.r6.s64 = 100;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x822e1618
	ctx.lr = 0x82123278;
	sub_822E1618(ctx, base);
	// stw r3,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r3.u32);
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// fmr f3,f29
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f29.f64;
	// lis r3,-32255
	ctx.r3.s64 = -2113863680;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r8,r3,-11300
	ctx.r8.s64 = ctx.r3.s64 + -11300;
	// addi r3,r11,-11328
	ctx.r3.s64 = ctx.r11.s64 + -11328;
	// li r7,0
	ctx.r7.s64 = 0;
	// lfs f1,14248(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 14248);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822e1660
	ctx.lr = 0x821232A4;
	sub_822E1660(ctx, base);
	// stw r3,-2112(r30)
	PPC_STORE_U32(ctx.r30.u32 + -2112, ctx.r3.u32);
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// ori r31,r10,65535
	ctx.r31.u64 = ctx.r10.u64 | 65535;
	// addi r3,r7,-11356
	ctx.r3.s64 = ctx.r7.s64 + -11356;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r8,r9,-11416
	ctx.r8.s64 = ctx.r9.s64 + -11416;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,50
	ctx.r4.s64 = 50;
	// bl 0x822e1618
	ctx.lr = 0x821232D4;
	sub_822E1618(ctx, base);
	// lis r6,-32167
	ctx.r6.s64 = -2108096512;
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// lis r4,-32255
	ctx.r4.s64 = -2113863680;
	// addi r8,r5,-11488
	ctx.r8.s64 = ctx.r5.s64 + -11488;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r3,-11084(r6)
	PPC_STORE_U32(ctx.r6.u32 + -11084, ctx.r3.u32);
	// addi r3,r4,-11520
	ctx.r3.s64 = ctx.r4.s64 + -11520;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,6000
	ctx.r4.s64 = 6000;
	// bl 0x822e1618
	ctx.lr = 0x82123300;
	sub_822E1618(ctx, base);
	// lis r11,-32167
	ctx.r11.s64 = -2108096512;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r8,r10,-11580
	ctx.r8.s64 = ctx.r10.s64 + -11580;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r3,-10704(r11)
	PPC_STORE_U32(ctx.r11.u32 + -10704, ctx.r3.u32);
	// addi r3,r9,-11608
	ctx.r3.s64 = ctx.r9.s64 + -11608;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,700
	ctx.r4.s64 = 700;
	// bl 0x822e1618
	ctx.lr = 0x8212332C;
	sub_822E1618(ctx, base);
	// lis r8,-32167
	ctx.r8.s64 = -2108096512;
	// fmr f5,f31
	ctx.fpscr.disableFlushMode();
	ctx.f5.f64 = ctx.f31.f64;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// fmr f4,f30
	ctx.f4.f64 = ctx.f30.f64;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// stw r3,-10708(r8)
	PPC_STORE_U32(ctx.r8.u32 + -10708, ctx.r3.u32);
	// addi r10,r7,-11652
	ctx.r10.s64 = ctx.r7.s64 + -11652;
	// li r9,64
	ctx.r9.s64 = 64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// addi r3,r6,-11676
	ctx.r3.s64 = ctx.r6.s64 + -11676;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x822e16f0
	ctx.lr = 0x82123360;
	sub_822E16F0(ctx, base);
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// lis r4,-32167
	ctx.r4.s64 = -2108096512;
	// fmr f6,f31
	ctx.fpscr.disableFlushMode();
	ctx.f6.f64 = ctx.f31.f64;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// fmr f5,f30
	ctx.f5.f64 = ctx.f30.f64;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// fmr f4,f31
	ctx.f4.f64 = ctx.f31.f64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// fmr f2,f28
	ctx.f2.f64 = ctx.f28.f64;
	// addi r31,r10,-11716
	ctx.r31.s64 = ctx.r10.s64 + -11716;
	// lfs f3,-29876(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -29876);
	ctx.f3.f64 = double(temp.f32);
	// addi r3,r9,-11748
	ctx.r3.s64 = ctx.r9.s64 + -11748;
	// stw r11,-9528(r4)
	PPC_STORE_U32(ctx.r4.u32 + -9528, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x822e1790
	ctx.lr = 0x821233A4;
	sub_822E1790(ctx, base);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32167
	ctx.r7.s64 = -2108096512;
	// fmr f6,f31
	ctx.fpscr.disableFlushMode();
	ctx.f6.f64 = ctx.f31.f64;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// fmr f5,f30
	ctx.f5.f64 = ctx.f30.f64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// fmr f4,f31
	ctx.f4.f64 = ctx.f31.f64;
	// lfs f29,6048(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 6048);
	ctx.f29.f64 = double(temp.f32);
	// addi r3,r6,-11784
	ctx.r3.s64 = ctx.r6.s64 + -11784;
	// li r10,0
	ctx.r10.s64 = 0;
	// fmr f3,f29
	ctx.f3.f64 = ctx.f29.f64;
	// stw r11,-10404(r7)
	PPC_STORE_U32(ctx.r7.u32 + -10404, ctx.r11.u32);
	// fmr f2,f25
	ctx.f2.f64 = ctx.f25.f64;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x822e1790
	ctx.lr = 0x821233E4;
	sub_822E1790(ctx, base);
	// lis r5,-32166
	ctx.r5.s64 = -2108030976;
	// lis r4,-32255
	ctx.r4.s64 = -2113863680;
	// fmr f6,f31
	ctx.fpscr.disableFlushMode();
	ctx.f6.f64 = ctx.f31.f64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// fmr f5,f30
	ctx.f5.f64 = ctx.f30.f64;
	// addi r3,r4,-11816
	ctx.r3.s64 = ctx.r4.s64 + -11816;
	// stw r11,29060(r5)
	PPC_STORE_U32(ctx.r5.u32 + 29060, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// fmr f4,f31
	ctx.f4.f64 = ctx.f31.f64;
	// fmr f3,f30
	ctx.f3.f64 = ctx.f30.f64;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x822e1790
	ctx.lr = 0x8212341C;
	sub_822E1790(ctx, base);
	// lis r10,-32166
	ctx.r10.s64 = -2108030976;
	// fmr f6,f31
	ctx.fpscr.disableFlushMode();
	ctx.f6.f64 = ctx.f31.f64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// fmr f5,f30
	ctx.f5.f64 = ctx.f30.f64;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// stw r11,29056(r10)
	PPC_STORE_U32(ctx.r10.u32 + 29056, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// fmr f4,f31
	ctx.f4.f64 = ctx.f31.f64;
	// addi r3,r9,-11852
	ctx.r3.s64 = ctx.r9.s64 + -11852;
	// fmr f3,f28
	ctx.f3.f64 = ctx.f28.f64;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// fmr f2,f26
	ctx.f2.f64 = ctx.f26.f64;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// bl 0x822e1790
	ctx.lr = 0x82123454;
	sub_822E1790(ctx, base);
	// addi r11,r30,52
	ctx.r11.s64 = ctx.r30.s64 + 52;
	// addis r9,r30,1
	ctx.r9.s64 = ctx.r30.s64 + 65536;
	// lis r8,0
	ctx.r8.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// addi r10,r30,24628
	ctx.r10.s64 = ctx.r30.s64 + 24628;
	// addi r9,r9,-32716
	ctx.r9.s64 = ctx.r9.s64 + -32716;
	// ori r8,r8,32768
	ctx.r8.u64 = ctx.r8.u64 | 32768;
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r9.u32);
	// stw r8,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r8.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r11.u32);
	// li r8,1024
	ctx.r8.s64 = 1024;
	// stw r11,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r11.u32);
	// lis r7,-32167
	ctx.r7.s64 = -2108096512;
	// stw r10,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r10.u32);
	// stw r8,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r10,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r10.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r9,44(r30)
	PPC_STORE_U32(ctx.r30.u32 + 44, ctx.r9.u32);
	// stw r9,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r9.u32);
	// stw r3,-9244(r7)
	PPC_STORE_U32(ctx.r7.u32 + -9244, ctx.r3.u32);
	// stw r11,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r11.u32);
	// stw r8,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r8.u32);
	// bl 0x82122ba8
	ctx.lr = 0x821234C4;
	sub_82122BA8(ctx, base);
	// lis r6,-32252
	ctx.r6.s64 = -2113667072;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// lis r4,1
	ctx.r4.s64 = 65536;
	// lis r3,1
	ctx.r3.s64 = 65536;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lfs f0,-2072(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -2072);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r6,-2072
	ctx.r10.s64 = ctx.r6.s64 + -2072;
	// ori r9,r5,37648
	ctx.r9.u64 = ctx.r5.u64 | 37648;
	// ori r8,r4,37652
	ctx.r8.u64 = ctx.r4.u64 | 37652;
	// ori r7,r3,37656
	ctx.r7.u64 = ctx.r3.u64 | 37656;
	// ori r6,r11,37660
	ctx.r6.u64 = ctx.r11.u64 | 37660;
	// lfs f13,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfsx f0,r30,r9
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + ctx.r9.u32, temp.u32);
	// stfsx f13,r30,r8
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + ctx.r8.u32, temp.u32);
	// stfsx f12,r30,r7
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + ctx.r7.u32, temp.u32);
	// stfsx f11,r30,r6
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + ctx.r6.u32, temp.u32);
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x823de060
	ctx.lr = 0x82123518;
	__restfpr_23(ctx, base);
	// b 0x823ddf90
	__restgprlr_14(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82122DA8) {
	__imp__sub_82122DA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8212351C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8212351C) {
	__imp__sub_8212351C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82123520) {
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
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8212354c
	if (ctx.cr6.eq) goto loc_8212354C;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// bne cr6,0x8212354c
	if (!ctx.cr6.eq) goto loc_8212354C;
loc_82123540:
	// lbzu r11,1(r3)
	ea = 1 + ctx.r3.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r3.u32 = ea;
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// beq cr6,0x82123540
	if (ctx.cr6.eq) goto loc_82123540;
loc_8212354C:
	// bl 0x8238b6e0
	ctx.lr = 0x82123550;
	sub_8238B6E0(ctx, base);
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// subfic r10,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r8,r3
	ctx.r3.u64 = ctx.r8.u64 & ctx.r3.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82123520) {
	__imp__sub_82123520(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82123570) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf58
	ctx.lr = 0x82123578;
	__savegprlr_20(ctx, base);
	// stfd f31,-112(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -112, ctx.f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r20,-32166
	ctx.r20.s64 = -2108030976;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// lwz r11,29084(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 29084);
	// mr r21,r7
	ctx.r21.u64 = ctx.r7.u64;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// mr r22,r9
	ctx.r22.u64 = ctx.r9.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82123a9c
	if (!ctx.cr6.eq) goto loc_82123A9C;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
	// stw r11,29084(r20)
	PPC_STORE_U32(ctx.r20.u32 + 29084, ctx.r11.u32);
	// bl 0x821226d0
	ctx.lr = 0x821235BC;
	sub_821226D0(ctx, base);
	// lis r11,-32167
	ctx.r11.s64 = -2108096512;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// addi r31,r11,-8976
	ctx.r31.s64 = ctx.r11.s64 + -8976;
	// ori r9,r10,572
	ctx.r9.u64 = ctx.r10.u64 | 572;
	// lwzx r4,r31,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// cmpw cr6,r26,r4
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r4.s32, ctx.xer);
	// beq cr6,0x821235f8
	if (ctx.cr6.eq) goto loc_821235F8;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r10,r11,564
	ctx.r10.u64 = ctx.r11.u64 | 564;
	// lwzx r9,r31,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821235f8
	if (ctx.cr6.eq) goto loc_821235F8;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82122b38
	ctx.lr = 0x821235F8;
	sub_82122B38(ctx, base);
loc_821235F8:
	// cmpwi cr6,r26,2
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 2, ctx.xer);
	// beq cr6,0x82123614
	if (ctx.cr6.eq) goto loc_82123614;
	// cmpwi cr6,r26,3
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 3, ctx.xer);
	// beq cr6,0x82123614
	if (ctx.cr6.eq) goto loc_82123614;
	// cmpwi cr6,r26,4
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 4, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x82123618
	if (!ctx.cr6.eq) goto loc_82123618;
loc_82123614:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82123618:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82123660
	if (ctx.cr6.eq) goto loc_82123660;
	// addi r11,r26,-3
	ctx.r11.s64 = ctx.r26.s64 + -3;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r29,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r29.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// bl 0x82141110
	ctx.lr = 0x82123634;
	sub_82141110(ctx, base);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// li r7,4
	ctx.r7.s64 = 4;
	// and r4,r29,r7
	ctx.r4.u64 = ctx.r29.u64 & ctx.r7.u64;
	// lfs f31,-10776(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -10776);
	ctx.f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x822c2068
	ctx.lr = 0x8212364C;
	sub_822C2068(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8238b548
	ctx.lr = 0x82123658;
	sub_8238B548(ctx, base);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// b 0x82123674
	goto loc_82123674;
loc_82123660:
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r11,28832
	ctx.r9.s64 = ctx.r11.s64 + 28832;
	// lfs f31,12168(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f31.f64 = double(temp.f32);
	// lwz r24,384(r9)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r9.u32 + 384);
loc_82123674:
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// bne cr6,0x82123688
	if (!ctx.cr6.eq) goto loc_82123688;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r10,r11,588
	ctx.r10.u64 = ctx.r11.u64 | 588;
	// lwzx r21,r31,r10
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
loc_82123688:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// ori r10,r11,564
	ctx.r10.u64 = ctx.r11.u64 | 564;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwzx r9,r31,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// subfic r4,r9,512
	ctx.xer.ca = ctx.r9.u32 <= 512;
	ctx.r4.s64 = 512 - ctx.r9.s64;
	// bl 0x8238b6e0
	ctx.lr = 0x821236AC;
	sub_8238B6E0(ctx, base);
	// lbz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// subfic r7,r8,0
	ctx.xer.ca = ctx.r8.u32 <= 0;
	ctx.r7.s64 = 0 - ctx.r8.s64;
	// subfe r5,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r5.u64 = ~ctx.r6.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r27,r5,r3
	ctx.r27.u64 = ctx.r5.u64 & ctx.r3.u64;
	// cmplw cr6,r30,r27
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x8212371c
	if (!ctx.cr6.eq) goto loc_8212371C;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r10,r11,564
	ctx.r10.u64 = ctx.r11.u64 | 564;
	// lwzx r9,r31,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8212371c
	if (ctx.cr6.eq) goto loc_8212371C;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82122b38
	ctx.lr = 0x821236E8;
	sub_82122B38(ctx, base);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// ori r10,r11,564
	ctx.r10.u64 = ctx.r11.u64 | 564;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwzx r11,r31,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// subfic r4,r11,512
	ctx.xer.ca = ctx.r11.u32 <= 512;
	ctx.r4.s64 = 512 - ctx.r11.s64;
	// bl 0x8238b6e0
	ctx.lr = 0x8212370C;
	sub_8238B6E0(ctx, base);
	// lbz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// subfic r8,r9,0
	ctx.xer.ca = ctx.r9.u32 <= 0;
	ctx.r8.s64 = 0 - ctx.r9.s64;
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r27,r6,r3
	ctx.r27.u64 = ctx.r6.u64 & ctx.r3.u64;
loc_8212371C:
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// li r29,0
	ctx.r29.s64 = 0;
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82123a24
	if (ctx.cr6.eq) goto loc_82123A24;
	// li r28,94
	ctx.r28.s64 = 94;
loc_82123734:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822b7e18
	ctx.lr = 0x82123740;
	sub_822B7E18(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 10, ctx.xer);
	// beq cr6,0x82123924
	if (ctx.cr6.eq) goto loc_82123924;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r3,94
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 94, ctx.xer);
	// bne cr6,0x82123890
	if (!ctx.cr6.eq) goto loc_82123890;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821237f0
	if (ctx.cr6.eq) goto loc_821237F0;
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// extsb r11,r9
	ctx.r11.s64 = ctx.r9.s8;
	// cmpwi cr6,r11,94
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 94, ctx.xer);
	// beq cr6,0x821237f0
	if (ctx.cr6.eq) goto loc_821237F0;
	// cmpwi cr6,r11,48
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 48, ctx.xer);
	// blt cr6,0x821237f0
	if (ctx.cr6.lt) goto loc_821237F0;
	// cmpwi cr6,r11,57
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 57, ctx.xer);
	// bgt cr6,0x821237f0
	if (ctx.cr6.gt) goto loc_821237F0;
	// lis r8,1
	ctx.r8.s64 = 65536;
	// addis r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 65536;
	// ori r7,r8,564
	ctx.r7.u64 = ctx.r8.u64 | 564;
	// lis r6,1
	ctx.r6.s64 = 65536;
	// addi r5,r11,52
	ctx.r5.s64 = ctx.r11.s64 + 52;
	// ori r4,r6,564
	ctx.r4.u64 = ctx.r6.u64 | 564;
	// lis r3,1
	ctx.r3.s64 = 65536;
	// lwzx r11,r31,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	// addis r8,r31,1
	ctx.r8.s64 = ctx.r31.s64 + 65536;
	// ori r6,r3,564
	ctx.r6.u64 = ctx.r3.u64 | 564;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// addi r3,r8,52
	ctx.r3.s64 = ctx.r8.s64 + 52;
	// ori r8,r7,564
	ctx.r8.u64 = ctx.r7.u64 | 564;
	// stbx r28,r11,r5
	PPC_STORE_U8(ctx.r11.u32 + ctx.r5.u32, ctx.r28.u8);
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lwzx r11,r31,r4
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r4.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwx r11,r31,r6
	PPC_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r11.u32);
	// ori r6,r7,564
	ctx.r6.u64 = ctx.r7.u64 | 564;
	// stbx r9,r11,r3
	PPC_STORE_U8(ctx.r11.u32 + ctx.r3.u32, ctx.r9.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwzx r11,r31,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// stwx r5,r31,r6
	PPC_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r5.u32);
	// b 0x82123930
	goto loc_82123930;
loc_821237F0:
	// lbz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82123808
	if (ctx.cr6.eq) goto loc_82123808;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x821238e8
	if (!ctx.cr6.eq) goto loc_821238E8;
loc_82123808:
	// lis r9,1
	ctx.r9.s64 = 65536;
	// addis r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 65536;
	// ori r8,r9,564
	ctx.r8.u64 = ctx.r9.u64 | 564;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// addi r6,r11,52
	ctx.r6.s64 = ctx.r11.s64 + 52;
	// li r11,7
	ctx.r11.s64 = 7;
	// ori r4,r5,564
	ctx.r4.u64 = ctx.r5.u64 | 564;
	// lwzx r9,r31,r8
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// lis r3,1
	ctx.r3.s64 = 65536;
	// addis r8,r31,1
	ctx.r8.s64 = ctx.r31.s64 + 65536;
	// ori r5,r3,564
	ctx.r5.u64 = ctx.r3.u64 | 564;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r8,r8,52
	ctx.r8.s64 = ctx.r8.s64 + 52;
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// stbx r28,r9,r6
	PPC_STORE_U8(ctx.r9.u32 + ctx.r6.u32, ctx.r28.u8);
	// lwzx r11,r31,r4
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r4.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r9,r11,r8
	ctx.r9.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stwx r11,r31,r5
	PPC_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r11.u32);
	// addi r11,r9,-1
	ctx.r11.s64 = ctx.r9.s64 + -1;
loc_82123858:
	// lbzu r9,1(r7)
	ea = 1 + ctx.r7.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r7.u32 = ea;
	// stbu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x82123858
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82123858;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// ori r8,r11,564
	ctx.r8.u64 = ctx.r11.u64 | 564;
	// ori r7,r9,564
	ctx.r7.u64 = ctx.r9.u64 | 564;
	// addi r10,r10,7
	ctx.r10.s64 = ctx.r10.s64 + 7;
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwzx r11,r31,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// addi r6,r11,7
	ctx.r6.s64 = ctx.r11.s64 + 7;
	// stwx r6,r31,r7
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r6.u32);
	// b 0x82123930
	goto loc_82123930;
loc_82123890:
	// cmpwi cr6,r30,32
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 32, ctx.xer);
	// bne cr6,0x821238a4
	if (!ctx.cr6.eq) goto loc_821238A4;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x82123930
	if (!ctx.cr6.eq) goto loc_82123930;
	// b 0x821238e8
	goto loc_821238E8;
loc_821238A4:
	// cmpwi cr6,r30,255
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 255, ctx.xer);
	// ble cr6,0x821238e8
	if (!ctx.cr6.gt) goto loc_821238E8;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// addis r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 65536;
	// ori r8,r9,564
	ctx.r8.u64 = ctx.r9.u64 | 564;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// addi r6,r11,52
	ctx.r6.s64 = ctx.r11.s64 + 52;
	// ori r4,r7,564
	ctx.r4.u64 = ctx.r7.u64 | 564;
	// lis r3,1
	ctx.r3.s64 = 65536;
	// lwzx r11,r31,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// srawi r5,r30,8
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xFF) != 0);
	ctx.r5.s64 = ctx.r30.s32 >> 8;
	// ori r8,r3,564
	ctx.r8.u64 = ctx.r3.u64 | 564;
	// clrlwi r30,r30,24
	ctx.r30.u64 = ctx.r30.u32 & 0xFF;
	// stbx r5,r11,r6
	PPC_STORE_U8(ctx.r11.u32 + ctx.r6.u32, ctx.r5.u8);
	// lwzx r11,r31,r4
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r4.u32);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stwx r7,r31,r8
	PPC_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r7.u32);
loc_821238E8:
	// lis r9,1
	ctx.r9.s64 = 65536;
	// addis r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 65536;
	// ori r8,r9,564
	ctx.r8.u64 = ctx.r9.u64 | 564;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// addi r6,r11,52
	ctx.r6.s64 = ctx.r11.s64 + 52;
	// ori r5,r7,564
	ctx.r5.u64 = ctx.r7.u64 | 564;
	// lis r4,1
	ctx.r4.s64 = 65536;
	// lwzx r3,r31,r8
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// li r29,0
	ctx.r29.s64 = 0;
	// ori r9,r4,564
	ctx.r9.u64 = ctx.r4.u64 | 564;
	// stbx r30,r3,r6
	PPC_STORE_U8(ctx.r3.u32 + ctx.r6.u32, ctx.r30.u8);
	// lwzx r11,r31,r5
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r5.u32);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stwx r8,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r8.u32);
	// b 0x82123930
	goto loc_82123930;
loc_82123924:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82123938
	if (ctx.cr6.eq) goto loc_82123938;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82123930:
	// cmplw cr6,r10,r27
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x82123a18
	if (!ctx.cr6.eq) goto loc_82123A18;
loc_82123938:
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x821229c8
	ctx.lr = 0x8212394C;
	sub_821229C8(ctx, base);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lwz r9,44(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// ori r8,r11,568
	ctx.r8.u64 = ctx.r11.u64 | 568;
	// ori r7,r10,564
	ctx.r7.u64 = ctx.r10.u64 | 564;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r6,r9,-1
	ctx.r6.s64 = ctx.r9.s64 + -1;
	// stwx r11,r31,r7
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r11.u32);
	// lwzx r10,r31,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// cmpw cr6,r10,r6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, ctx.xer);
	// bne cr6,0x82123988
	if (!ctx.cr6.eq) goto loc_82123988;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r8,r9,568
	ctx.r8.u64 = ctx.r9.u64 | 568;
	// stwx r10,r31,r8
	PPC_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r10.u32);
loc_82123988:
	// cmpwi cr6,r30,10
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 10, ctx.xer);
	// beq cr6,0x821239cc
	if (ctx.cr6.eq) goto loc_821239CC;
	// extsb r10,r25
	ctx.r10.s64 = ctx.r25.s8;
	// li r29,1
	ctx.r29.s64 = 1;
	// cmpwi cr6,r10,55
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 55, ctx.xer);
	// beq cr6,0x821239cc
	if (ctx.cr6.eq) goto loc_821239CC;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// ori r8,r11,52
	ctx.r8.u64 = ctx.r11.u64 | 52;
	// ori r7,r10,53
	ctx.r7.u64 = ctx.r10.u64 | 53;
	// ori r6,r9,564
	ctx.r6.u64 = ctx.r9.u64 | 564;
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// stbx r28,r31,r8
	PPC_STORE_U8(ctx.r31.u32 + ctx.r8.u32, ctx.r28.u8);
	// stbx r25,r31,r7
	PPC_STORE_U8(ctx.r31.u32 + ctx.r7.u32, ctx.r25.u8);
	// stwx r11,r31,r6
	PPC_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r11.u32);
loc_821239CC:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// subfic r4,r11,512
	ctx.xer.ca = ctx.r11.u32 <= 512;
	ctx.r4.s64 = 512 - ctx.r11.s64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x821239f4
	if (ctx.cr6.eq) goto loc_821239F4;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// bne cr6,0x821239f4
	if (!ctx.cr6.eq) goto loc_821239F4;
loc_821239E8:
	// lbzu r11,1(r3)
	ea = 1 + ctx.r3.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r3.u32 = ea;
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// beq cr6,0x821239e8
	if (ctx.cr6.eq) goto loc_821239E8;
loc_821239F4:
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// bl 0x8238b6e0
	ctx.lr = 0x82123A04;
	sub_8238B6E0(ctx, base);
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// subfic r9,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r11.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r27,r7,r3
	ctx.r27.u64 = ctx.r7.u64 & ctx.r3.u64;
loc_82123A18:
	// lbz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82123734
	if (!ctx.cr6.eq) goto loc_82123734;
loc_82123A24:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r10,r11,564
	ctx.r10.u64 = ctx.r11.u64 | 564;
	// lwzx r9,r31,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82123a84
	if (ctx.cr6.eq) goto loc_82123A84;
	// cmpwi cr6,r26,2
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 2, ctx.xer);
	// beq cr6,0x82123a54
	if (ctx.cr6.eq) goto loc_82123A54;
	// cmpwi cr6,r26,3
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 3, ctx.xer);
	// beq cr6,0x82123a54
	if (ctx.cr6.eq) goto loc_82123A54;
	// cmpwi cr6,r26,4
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 4, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x82123a58
	if (!ctx.cr6.eq) goto loc_82123A58;
loc_82123A54:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82123A58:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// beq cr6,0x82123a78
	if (ctx.cr6.eq) goto loc_82123A78;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// bl 0x82122b38
	ctx.lr = 0x82123A74;
	sub_82122B38(ctx, base);
	// b 0x82123a84
	goto loc_82123A84;
loc_82123A78:
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x821229c8
	ctx.lr = 0x82123A84;
	sub_821229C8(ctx, base);
loc_82123A84:
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lwz r11,29084(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 29084);
	// ori r9,r10,572
	ctx.r9.u64 = ctx.r10.u64 | 572;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,29084(r20)
	PPC_STORE_U32(ctx.r20.u32 + 29084, ctx.r11.u32);
	// stwx r26,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r26.u32);
loc_82123A9C:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// b 0x823ddfa8
	__restgprlr_20(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82123570) {
	__imp__sub_82123570(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82123AAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82123AAC) {
	__imp__sub_82123AAC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82123AB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x82123AB8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// lwz r11,-29956(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29956);
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82123b28
	if (ctx.cr6.eq) goto loc_82123B28;
	// lbz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82123b28
	if (!ctx.cr6.eq) goto loc_82123B28;
	// cmpwi cr6,r4,6
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 6, ctx.xer);
	// beq cr6,0x82123b28
	if (ctx.cr6.eq) goto loc_82123B28;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822ec4e8
	ctx.lr = 0x82123B00;
	sub_822EC4E8(ctx, base);
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// li r8,55
	ctx.r8.s64 = 55;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82123570
	ctx.lr = 0x82123B20;
	sub_82123570(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822ec500
	ctx.lr = 0x82123B28;
	sub_822EC500(ctx, base);
loc_82123B28:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82123AB0) {
	__imp__sub_82123AB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82123B30) {
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
	// lis r9,-31936
	ctx.r9.s64 = -2092957696;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,-29956(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29956);
	// stw r10,-4912(r9)
	PPC_STORE_U32(ctx.r9.u32 + -4912, ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82123bc4
	if (ctx.cr6.eq) goto loc_82123BC4;
	// lbz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82123bc4
	if (!ctx.cr6.eq) goto loc_82123BC4;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822ec4e8
	ctx.lr = 0x82123B6C;
	sub_822EC4E8(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r5,r11,-27364
	ctx.r5.s64 = ctx.r11.s64 + -27364;
	// li r8,55
	ctx.r8.s64 = 55;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82123570
	ctx.lr = 0x82123B90;
	sub_82123570(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822ec500
	ctx.lr = 0x82123B98;
	sub_822EC500(ctx, base);
	// lis r10,-32167
	ctx.r10.s64 = -2108096512;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// addi r8,r10,-8976
	ctx.r8.s64 = ctx.r10.s64 + -8976;
	// ori r7,r9,568
	ctx.r7.u64 = ctx.r9.u64 | 568;
	// lwz r11,44(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 44);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stwx r11,r8,r7
	PPC_STORE_U32(ctx.r8.u32 + ctx.r7.u32, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82123BC4:
	// lis r11,-32167
	ctx.r11.s64 = -2108096512;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// addi r9,r11,-8976
	ctx.r9.s64 = ctx.r11.s64 + -8976;
	// ori r8,r10,568
	ctx.r8.u64 = ctx.r10.u64 | 568;
	// lwz r11,44(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 44);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stwx r11,r9,r8
	PPC_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82123B30) {
	__imp__sub_82123B30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82123BF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82123BF8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r5,r4,44
	ctx.r5.s64 = ctx.r4.s64 + 44;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82123C18;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r5,r30,40
	ctx.r5.s64 = ctx.r30.s64 + 40;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82123C30;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r30,48
	ctx.r5.s64 = ctx.r30.s64 + 48;
	// li r4,4
	ctx.r4.s64 = 4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82123C48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,32(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r5,r30,36
	ctx.r5.s64 = ctx.r30.s64 + 36;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82123C60;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,32(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r4,r7,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82123C84;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwinm r4,r10,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82123CA0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r29,36(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, ctx.xer);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bge cr6,0x82123cec
	if (!ctx.cr6.lt) goto loc_82123CEC;
	// subf r4,r11,r29
	ctx.r4.s64 = ctx.r29.s64 - ctx.r11.s64;
	// bctrl 
	ctx.lr = 0x82123CE4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_82123CEC:
	// lwz r8,12(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// subf r4,r11,r8
	ctx.r4.s64 = ctx.r8.s64 - ctx.r11.s64;
	// bctrl 
	ctx.lr = 0x82123CF8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,32(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r5,8(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82123D10;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82123BF0) {
	__imp__sub_82123BF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82123D18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82123D20;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32167
	ctx.r11.s64 = -2108096512;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r10,r11,-8976
	ctx.r10.s64 = ctx.r11.s64 + -8976;
	// li r31,4
	ctx.r31.s64 = 4;
	// addis r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 65536;
	// addi r30,r11,8800
	ctx.r30.s64 = ctx.r11.s64 + 8800;
loc_82123D3C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82123bf0
	ctx.lr = 0x82123D48;
	sub_82123BF0(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,52
	ctx.r30.s64 = ctx.r30.s64 + 52;
	// bne 0x82123d3c
	if (!ctx.cr0.eq) goto loc_82123D3C;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82123D18) {
	__imp__sub_82123D18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82123D5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82123D5C) {
	__imp__sub_82123D5C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82123D60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf68
	ctx.lr = 0x82123D68;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
loc_82123D7C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82123d7c
	if (!ctx.cr6.eq) goto loc_82123D7C;
	// subf r11,r27,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r27.s64;
	// li r25,0
	ctx.r25.s64 = 0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stb r25,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r25.u8);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// rotlwi r29,r11,0
	ctx.r29.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// beq cr6,0x82123e3c
	if (ctx.cr6.eq) goto loc_82123E3C;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
loc_82123DB0:
	// lwz r31,0(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822e7ee0
	ctx.lr = 0x82123DC4;
	sub_822E7EE0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82123e30
	if (!ctx.cr6.eq) goto loc_82123E30;
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82123dec
	if (!ctx.cr6.eq) goto loc_82123DEC;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822e7e98
	ctx.lr = 0x82123DE8;
	sub_822E7E98(ctx, base);
	// b 0x82123e30
	goto loc_82123E30;
loc_82123DEC:
	// lbzx r9,r31,r29
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r29.u32);
	// add r11,r29,r30
	ctx.r11.u64 = ctx.r29.u64 + ctx.r30.u64;
	// lbzx r8,r29,r30
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r30.u32);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82123e2c
	if (!ctx.cr6.eq) goto loc_82123E2C;
	// subf r9,r30,r31
	ctx.r9.s64 = ctx.r31.s64 - ctx.r30.s64;
loc_82123E08:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82123e2c
	if (ctx.cr6.eq) goto loc_82123E2C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lbzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x82123e08
	if (ctx.cr6.eq) goto loc_82123E08;
loc_82123E2C:
	// stbx r25,r10,r30
	PPC_STORE_U8(ctx.r10.u32 + ctx.r30.u32, ctx.r25.u8);
loc_82123E30:
	// addic. r26,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// bne 0x82123db0
	if (!ctx.cr0.eq) goto loc_82123DB0;
loc_82123E3C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82123D60) {
	__imp__sub_82123D60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82123E44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82123E44) {
	__imp__sub_82123E44(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82123E48) {
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
	// addi r11,r11,-32488
	ctx.r11.s64 = ctx.r11.s64 + -32488;
	// addi r3,r11,24
	ctx.r3.s64 = ctx.r11.s64 + 24;
	// bl 0x8227d8d0
	ctx.lr = 0x82123E68;
	sub_8227D8D0(ctx, base);
	// lis r11,-31937
	ctx.r11.s64 = -2093023232;
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
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x82123e98
	if (!ctx.cr6.gt) goto loc_82123E98;
	// addi r11,r11,100
	ctx.r11.s64 = ctx.r11.s64 + 100;
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r31,0(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x82123ea0
	goto loc_82123EA0;
loc_82123E98:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r31,r11,-28736
	ctx.r31.s64 = ctx.r11.s64 + -28736;
loc_82123EA0:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,92
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 92, ctx.xer);
	// beq cr6,0x82123eb8
	if (ctx.cr6.eq) goto loc_82123EB8;
	// cmpwi cr6,r11,47
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 47, ctx.xer);
	// bne cr6,0x82123ebc
	if (!ctx.cr6.eq) goto loc_82123EBC;
loc_82123EB8:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_82123EBC:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x823df9e0
	ctx.lr = 0x82123EC8;
	sub_823DF9E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82123ee4
	if (ctx.cr6.eq) goto loc_82123EE4;
loc_82123ED0:
	// lbzu r11,1(r31)
	ea = 1 + ctx.r31.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r31.u32 = ea;
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x823df9e0
	ctx.lr = 0x82123EDC;
	sub_823DF9E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82123ed0
	if (!ctx.cr6.eq) goto loc_82123ED0;
loc_82123EE4:
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

PPC_WEAK_FUNC(sub_82123E48) {
	__imp__sub_82123E48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82123EFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82123EFC) {
	__imp__sub_82123EFC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82123F00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82123F08;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r29,r11,-32488
	ctx.r29.s64 = ctx.r11.s64 + -32488;
	// lbz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 24);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x823df9e0
	ctx.lr = 0x82123F24;
	sub_823DF9E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82123f48
	if (ctx.cr6.eq) goto loc_82123F48;
	// addi r30,r29,24
	ctx.r30.s64 = ctx.r29.s64 + 24;
loc_82123F30:
	// lbzu r11,1(r30)
	ea = 1 + ctx.r30.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r30.u32 = ea;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x823df9e0
	ctx.lr = 0x82123F40;
	sub_823DF9E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82123f30
	if (!ctx.cr6.eq) goto loc_82123F30;
loc_82123F48:
	// addi r11,r29,24
	ctx.r11.s64 = ctx.r29.s64 + 24;
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82123f7c
	if (ctx.cr6.eq) goto loc_82123F7C;
loc_82123F5C:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x823df9e0
	ctx.lr = 0x82123F68;
	sub_823DF9E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82123f88
	if (!ctx.cr6.eq) goto loc_82123F88;
	// lbzu r11,1(r31)
	ea = 1 + ctx.r31.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r31.u32 = ea;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82123f5c
	if (!ctx.cr6.eq) goto loc_82123F5C;
loc_82123F7C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_82123F88:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82123F00) {
	__imp__sub_82123F00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82123F94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82123F94) {
	__imp__sub_82123F94(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82123F98) {
	PPC_FUNC_PROLOGUE();
	// b 0x8238b698
	sub_8238B698(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82123F98) {
	__imp__sub_82123F98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82123F9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82123F9C) {
	__imp__sub_82123F9C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82123FA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r10,r11,28832
	ctx.r10.s64 = ctx.r11.s64 + 28832;
	// lwz r5,384(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 384);
	// b 0x8238b5a8
	sub_8238B5A8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82123FA0) {
	__imp__sub_82123FA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82123FB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82123FB4) {
	__imp__sub_82123FB4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82123FB8) {
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
	// lis r9,-32167
	ctx.r9.s64 = -2108096512;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32165
	ctx.r10.s64 = -2107965440;
	// addi r7,r9,-10504
	ctx.r7.s64 = ctx.r9.s64 + -10504;
	// addi r8,r10,28832
	ctx.r8.s64 = ctx.r10.s64 + 28832;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r4,32767
	ctx.r4.s64 = 2147418112;
	// lfs f4,12168(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f4.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// fmr f3,f4
	ctx.f3.f64 = ctx.f4.f64;
	// lfs f0,96(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// ori r4,r4,65535
	ctx.r4.u64 = ctx.r4.u64 | 65535;
	// lfs f13,88(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// lwz r5,384(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 384);
	// lfs f1,84(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 84);
	ctx.f1.f64 = double(temp.f32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// lfs f5,5484(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 5484);
	ctx.f5.f64 = double(temp.f32);
	// fadds f2,f0,f13
	ctx.f2.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// bl 0x82391e90
	ctx.lr = 0x82124014;
	sub_82391E90(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82123FB8) {
	__imp__sub_82123FB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82124024) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82124024) {
	__imp__sub_82124024(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82124028) {
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
	// lis r9,-32167
	ctx.r9.s64 = -2108096512;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32165
	ctx.r10.s64 = -2107965440;
	// addi r7,r9,-10504
	ctx.r7.s64 = ctx.r9.s64 + -10504;
	// addi r8,r10,28832
	ctx.r8.s64 = ctx.r10.s64 + 28832;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lfs f4,12168(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f4.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// fmr f3,f4
	ctx.f3.f64 = ctx.f4.f64;
	// lfs f0,96(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// lfs f13,88(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// lwz r5,384(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 384);
	// lfs f1,84(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 84);
	ctx.f1.f64 = double(temp.f32);
	// fadds f2,f0,f13
	ctx.f2.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f5,5484(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 5484);
	ctx.f5.f64 = double(temp.f32);
	// bl 0x82391e90
	ctx.lr = 0x8212407C;
	sub_82391E90(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82124028) {
	__imp__sub_82124028(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8212408C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8212408C) {
	__imp__sub_8212408C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82124090) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32167
	ctx.r11.s64 = -2108096512;
	// addi r10,r11,-10504
	ctx.r10.s64 = ctx.r11.s64 + -10504;
	// lfs f0,88(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,96(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,92(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 92);
	ctx.f12.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,88(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 88, temp.u32);
	// stfs f12,84(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 84, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82124090) {
	__imp__sub_82124090(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821240B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821240B4) {
	__imp__sub_821240B4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821240B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// lis r10,-32167
	ctx.r10.s64 = -2108096512;
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// addi r9,r10,-10504
	ctx.r9.s64 = ctx.r10.s64 + -10504;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfs f0,84(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// stfs f0,84(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 84, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821240B8) {
	__imp__sub_821240B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821240E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821240E4) {
	__imp__sub_821240E4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821240E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x821240F0;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-32167
	ctx.r9.s64 = -2108096512;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r10,-32165
	ctx.r10.s64 = -2107965440;
	// addi r29,r9,-10504
	ctx.r29.s64 = ctx.r9.s64 + -10504;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r30,r10,28832
	ctx.r30.s64 = ctx.r10.s64 + 28832;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r4,32767
	ctx.r4.s64 = 2147418112;
	// li r7,0
	ctx.r7.s64 = 0;
	// lfs f0,96(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// lfs f4,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f4.f64 = double(temp.f32);
	// ori r4,r4,65535
	ctx.r4.u64 = ctx.r4.u64 | 65535;
	// lfs f13,88(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// lwz r5,384(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 384);
	// lfs f1,84(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 84);
	ctx.f1.f64 = double(temp.f32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f5,5484(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 5484);
	ctx.f5.f64 = double(temp.f32);
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// fadds f2,f0,f13
	ctx.f2.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// fmr f3,f4
	ctx.f3.f64 = ctx.f4.f64;
	// bl 0x82391e90
	ctx.lr = 0x82124148;
	sub_82391E90(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,384(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 384);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8238b5a8
	ctx.lr = 0x82124158;
	sub_8238B5A8(ctx, base);
	// extsw r6,r3
	ctx.r6.s64 = ctx.r3.s32;
	// std r6,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r6.u64);
	// lfd f13,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lfs f0,84(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fadds f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// stfs f0,84(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 84, temp.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821240E8) {
	__imp__sub_821240E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82124180) {
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
	ctx.lr = 0x82124198;
	__savefpr_26(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f1.f64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmr f28,f2
	ctx.f28.f64 = ctx.f2.f64;
	// addi r30,r11,28832
	ctx.r30.s64 = ctx.r11.s64 + 28832;
	// fmr f27,f3
	ctx.f27.f64 = ctx.f3.f64;
	// fmr f26,f4
	ctx.f26.f64 = ctx.f4.f64;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// lfs f31,5484(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f31.f64 = double(temp.f32);
	// lwz r11,440(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 440);
	// fmr f8,f31
	ctx.f8.f64 = ctx.f31.f64;
	// fmr f7,f31
	ctx.f7.f64 = ctx.f31.f64;
	// fmr f6,f31
	ctx.f6.f64 = ctx.f31.f64;
	// fmr f5,f31
	ctx.f5.f64 = ctx.f31.f64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// bl 0x823915b0
	ctx.lr = 0x821241E0;
	sub_823915B0(ctx, base);
	// lwz r11,440(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 440);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfs f13,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// lfs f12,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fmr f8,f31
	ctx.f8.f64 = ctx.f31.f64;
	// lfs f10,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fmr f7,f31
	ctx.f7.f64 = ctx.f31.f64;
	// lfs f0,2416(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2416);
	ctx.f0.f64 = double(temp.f32);
	// fmr f6,f31
	ctx.f6.f64 = ctx.f31.f64;
	// lfs f30,5488(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 5488);
	ctx.f30.f64 = double(temp.f32);
	// fmuls f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f9,f12,f0
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f13,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f10,f0
	ctx.f12.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f11,96(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f9,100(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmr f5,f31
	ctx.f5.f64 = ctx.f31.f64;
	// stfs f13,108(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// fmr f3,f30
	ctx.f3.f64 = ctx.f30.f64;
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fmr f4,f26
	ctx.f4.f64 = ctx.f26.f64;
	// fmr f2,f28
	ctx.f2.f64 = ctx.f28.f64;
	// bl 0x823915b0
	ctx.lr = 0x82124250;
	sub_823915B0(ctx, base);
	// fadds f11,f29,f27
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f29.f64 + ctx.f27.f64));
	// lwz r11,440(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 440);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// fmr f8,f31
	ctx.f8.f64 = ctx.f31.f64;
	// fmr f7,f31
	ctx.f7.f64 = ctx.f31.f64;
	// fmr f6,f31
	ctx.f6.f64 = ctx.f31.f64;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// fmr f5,f31
	ctx.f5.f64 = ctx.f31.f64;
	// fmr f3,f30
	ctx.f3.f64 = ctx.f30.f64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// fmr f4,f26
	ctx.f4.f64 = ctx.f26.f64;
	// fmr f2,f28
	ctx.f2.f64 = ctx.f28.f64;
	// fsubs f1,f11,f30
	ctx.f1.f64 = double(float(ctx.f11.f64 - ctx.f30.f64));
	// bl 0x823915b0
	ctx.lr = 0x82124288;
	sub_823915B0(ctx, base);
	// lwz r11,440(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 440);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// fmr f3,f27
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f27.f64;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// fmr f8,f31
	ctx.f8.f64 = ctx.f31.f64;
	// fmr f7,f31
	ctx.f7.f64 = ctx.f31.f64;
	// fmr f6,f31
	ctx.f6.f64 = ctx.f31.f64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// fmr f5,f31
	ctx.f5.f64 = ctx.f31.f64;
	// fmr f4,f30
	ctx.f4.f64 = ctx.f30.f64;
	// fmr f2,f28
	ctx.f2.f64 = ctx.f28.f64;
	// bl 0x823915b0
	ctx.lr = 0x821242BC;
	sub_823915B0(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// fmr f8,f31
	ctx.fpscr.disableFlushMode();
	ctx.f8.f64 = ctx.f31.f64;
	// fmr f7,f31
	ctx.f7.f64 = ctx.f31.f64;
	// fmr f6,f31
	ctx.f6.f64 = ctx.f31.f64;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// fadds f10,f28,f26
	ctx.f10.f64 = double(float(ctx.f28.f64 + ctx.f26.f64));
	// fmr f5,f31
	ctx.f5.f64 = ctx.f31.f64;
	// fmr f4,f30
	ctx.f4.f64 = ctx.f30.f64;
	// fmr f3,f27
	ctx.f3.f64 = ctx.f27.f64;
	// lwz r11,440(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 440);
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// fsubs f2,f10,f30
	ctx.f2.f64 = double(float(ctx.f10.f64 - ctx.f30.f64));
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// bl 0x823915b0
	ctx.lr = 0x821242F4;
	sub_823915B0(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x823de06c
	ctx.lr = 0x82124300;
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

PPC_WEAK_FUNC(sub_82124180) {
	__imp__sub_82124180(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82124314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82124314) {
	__imp__sub_82124314(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82124318) {
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
	// lis r10,-32167
	ctx.r10.s64 = -2108096512;
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// addi r8,r10,-8976
	ctx.r8.s64 = ctx.r10.s64 + -8976;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// lfs f0,-11980(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -11980);
	ctx.f0.f64 = double(temp.f32);
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lfs f13,-1444(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -1444);
	ctx.f13.f64 = double(temp.f32);
	// lis r6,1
	ctx.r6.s64 = 65536;
	// fsubs f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// ori r5,r7,600
	ctx.r5.u64 = ctx.r7.u64 | 600;
	// ori r3,r6,592
	ctx.r3.u64 = ctx.r6.u64 | 592;
	// lfs f13,-1440(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -1440);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f2,f13,f0
	ctx.f2.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// lfs f12,-1432(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -1432);
	ctx.f12.f64 = double(temp.f32);
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// lfsx f13,r8,r5
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r5.u32);
	ctx.f13.f64 = double(temp.f32);
	// lfsx f0,r8,r3
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r3.u32);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f10,f13,f0
	ctx.f10.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f13,13904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 13904);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f9,f1,f0
	ctx.f9.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// fmadds f4,f11,f12,f13
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f12.f64 + ctx.f13.f64));
	// fsubs f3,f10,f9
	ctx.f3.f64 = double(float(ctx.f10.f64 - ctx.f9.f64));
	// bl 0x82124180
	ctx.lr = 0x82124394;
	sub_82124180(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82124318) {
	__imp__sub_82124318(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821243A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821243A4) {
	__imp__sub_821243A4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821243A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf64
	ctx.lr = 0x821243B0;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// li r25,0
	ctx.r25.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x823dfa20
	ctx.lr = 0x821243D4;
	sub_823DFA20(ctx, base);
	// lbz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// addi r24,r11,-10768
	ctx.r24.s64 = ctx.r11.s64 + -10768;
	// beq cr6,0x8212447c
	if (ctx.cr6.eq) goto loc_8212447C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r23,r11,-10772
	ctx.r23.s64 = ctx.r11.s64 + -10772;
loc_821243F4:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x823dfa20
	ctx.lr = 0x82124400;
	sub_823DFA20(ctx, base);
	// subf r10,r3,r26
	ctx.r10.s64 = ctx.r26.s64 - ctx.r3.s64;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r28,r9,27,31,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82124424
	if (ctx.cr6.eq) goto loc_82124424;
	// lbzu r11,1(r29)
	ea = 1 + ctx.r29.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r29.u32 = ea;
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x823dfa20
	ctx.lr = 0x82124420;
	sub_823DFA20(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
loc_82124424:
	// clrlwi r11,r25,24
	ctx.r11.u64 = ctx.r25.u32 & 0xFF;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82124464
	if (ctx.cr6.eq) goto loc_82124464;
	// mr r25,r28
	ctx.r25.u64 = ctx.r28.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// bne cr6,0x82124444
	if (!ctx.cr6.eq) goto loc_82124444;
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
loc_82124444:
	// add r11,r30,r27
	ctx.r11.u64 = ctx.r30.u64 + ctx.r27.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
loc_82124450:
	// lbzu r11,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stbu r11,1(r9)
	ea = 1 + ctx.r9.u32;
	PPC_STORE_U8(ea, ctx.r11.u8);
	ctx.r9.u32 = ea;
	// bne cr6,0x82124450
	if (!ctx.cr6.eq) goto loc_82124450;
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
loc_82124464:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// stbx r11,r30,r27
	PPC_STORE_U8(ctx.r30.u32 + ctx.r27.u32, ctx.r11.u8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// lbzu r10,1(r31)
	ea = 1 + ctx.r31.u32;
	ctx.r10.u64 = PPC_LOAD_U8(ea);
	ctx.r31.u32 = ea;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821243f4
	if (!ctx.cr6.eq) goto loc_821243F4;
loc_8212447C:
	// lbz r8,0(r24)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r24.u32 + 0);
	// add r11,r30,r27
	ctx.r11.u64 = ctx.r30.u64 + ctx.r27.u64;
	// addi r10,r30,2
	ctx.r10.s64 = ctx.r30.s64 + 2;
	// li r9,32
	ctx.r9.s64 = 32;
	// addi r3,r10,1
	ctx.r3.s64 = ctx.r10.s64 + 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// stbx r8,r30,r27
	PPC_STORE_U8(ctx.r30.u32 + ctx.r27.u32, ctx.r8.u8);
	// lbz r6,1(r24)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r24.u32 + 1);
	// stb r6,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r6.u8);
	// lbz r5,2(r24)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r24.u32 + 2);
	// stb r5,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r5.u8);
	// stbx r9,r10,r27
	PPC_STORE_U8(ctx.r10.u32 + ctx.r27.u32, ctx.r9.u8);
	// stbx r7,r3,r27
	PPC_STORE_U8(ctx.r3.u32 + ctx.r27.u32, ctx.r7.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821243A8) {
	__imp__sub_821243A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821244B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x821244C0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x822e7fd0
	ctx.lr = 0x821244D8;
	sub_822E7FD0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821245e0
	if (ctx.cr6.eq) goto loc_821245E0;
	// subf r30,r28,r3
	ctx.r30.s64 = ctx.r3.s64 - ctx.r28.s64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823dfa38
	ctx.lr = 0x821244F8;
	sub_823DFA38(ctx, base);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// add r11,r30,r31
	ctx.r11.u64 = ctx.r30.u64 + ctx.r31.u64;
	// addi r8,r9,-10772
	ctx.r8.s64 = ctx.r9.s64 + -10772;
	// addi r28,r30,2
	ctx.r28.s64 = ctx.r30.s64 + 2;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// lbz r7,-10772(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + -10772);
	// stbx r7,r30,r31
	PPC_STORE_U8(ctx.r30.u32 + ctx.r31.u32, ctx.r7.u8);
	// lbz r6,1(r8)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r8.u32 + 1);
	// stb r6,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r6.u8);
	// lbz r5,2(r8)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r8.u32 + 2);
	// stb r5,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r5.u8);
loc_82124524:
	// lbz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82124524
	if (!ctx.cr6.eq) goto loc_82124524;
	// subf r11,r27,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r27.s64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// add r3,r28,r31
	ctx.r3.u64 = ctx.r28.u64 + ctx.r31.u64;
	// rotlwi r30,r11,0
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x823dfa38
	ctx.lr = 0x82124550;
	sub_823DFA38(ctx, base);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// add r11,r30,r28
	ctx.r11.u64 = ctx.r30.u64 + ctx.r28.u64;
	// addi r6,r7,-10768
	ctx.r6.s64 = ctx.r7.s64 + -10768;
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// add r9,r30,r29
	ctx.r9.u64 = ctx.r30.u64 + ctx.r29.u64;
	// lbz r5,-10768(r7)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r7.u32 + -10768);
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// stbx r5,r11,r31
	PPC_STORE_U8(ctx.r11.u32 + ctx.r31.u32, ctx.r5.u8);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// lbz r4,1(r6)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r6.u32 + 1);
	// add r7,r11,r31
	ctx.r7.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stb r4,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r4.u8);
	// lbz r3,2(r6)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r6.u32 + 2);
	// subf r7,r9,r7
	ctx.r7.s64 = ctx.r7.s64 - ctx.r9.s64;
	// stb r3,2(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2, ctx.r3.u8);
loc_8212458C:
	// lbz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stbx r10,r7,r8
	PPC_STORE_U8(ctx.r7.u32 + ctx.r8.u32, ctx.r10.u8);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// bne cr6,0x8212458c
	if (!ctx.cr6.eq) goto loc_8212458C;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_821245A4:
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x821245a4
	if (!ctx.cr6.eq) goto loc_821245A4;
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// li r9,32
	ctx.r9.s64 = 32;
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// li r7,0
	ctx.r7.s64 = 0;
	// rotlwi r10,r8,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// stbx r9,r11,r31
	PPC_STORE_U8(ctx.r11.u32 + ctx.r31.u32, ctx.r9.u8);
	// stbx r7,r3,r31
	PPC_STORE_U8(ctx.r3.u32 + ctx.r31.u32, ctx.r7.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_821245E0:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// subf r10,r28,r31
	ctx.r10.s64 = ctx.r31.s64 - ctx.r28.s64;
loc_821245E8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stbx r9,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne cr6,0x821245e8
	if (!ctx.cr6.eq) goto loc_821245E8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821244B8) {
	__imp__sub_821244B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82124608) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82124610;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82124648
	if (ctx.cr6.eq) goto loc_82124648;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// addi r4,r11,-10764
	ctx.r4.s64 = ctx.r11.s64 + -10764;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// bl 0x823df2b0
	ctx.lr = 0x82124640;
	sub_823DF2B0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x8212464c
	goto loc_8212464C;
loc_82124648:
	// li r31,0
	ctx.r31.s64 = 0;
loc_8212464C:
	// lis r11,-32167
	ctx.r11.s64 = -2108096512;
	// add r5,r31,r30
	ctx.r5.u64 = ctx.r31.u64 + ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,-10004(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -10004);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8212467c
	if (ctx.cr6.eq) goto loc_8212467C;
	// bl 0x821244b8
	ctx.lr = 0x82124670;
	sub_821244B8(ctx, base);
	// add r3,r3,r31
	ctx.r3.u64 = ctx.r3.u64 + ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_8212467C:
	// bl 0x821243a8
	ctx.lr = 0x82124680;
	sub_821243A8(ctx, base);
	// add r3,r3,r31
	ctx.r3.u64 = ctx.r3.u64 + ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82124608) {
	__imp__sub_82124608(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8212468C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8212468C) {
	__imp__sub_8212468C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82124690) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x82124698;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32167
	ctx.r11.s64 = -2108096512;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// lis r27,-32167
	ctx.r27.s64 = -2108096512;
	// lbz r10,-9536(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -9536);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821246e0
	if (!ctx.cr6.eq) goto loc_821246E0;
	// lwz r11,-10004(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -10004);
	// lbz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821246e0
	if (ctx.cr6.eq) goto loc_821246E0;
	// bl 0x822e7ee0
	ctx.lr = 0x821246D0;
	sub_822E7EE0(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_821246E0:
	// lbz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// li r31,0
	ctx.r31.s64 = 0;
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x823dfa20
	ctx.lr = 0x821246F0;
	sub_823DFA20(ctx, base);
	// lbz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82124760
	if (ctx.cr6.eq) goto loc_82124760;
loc_82124700:
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x823dfa20
	ctx.lr = 0x8212470C;
	sub_823DFA20(ctx, base);
	// cmpw cr6,r3,r29
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r29.s32, ctx.xer);
	// bne cr6,0x82124728
	if (!ctx.cr6.eq) goto loc_82124728;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r26
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r26.s32, ctx.xer);
	// beq cr6,0x8212476c
	if (ctx.cr6.eq) goto loc_8212476C;
	// lbzx r11,r31,r28
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r28.u32);
	// b 0x82124748
	goto loc_82124748;
loc_82124728:
	// lwz r11,-10004(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -10004);
	// lbz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82124754
	if (ctx.cr6.eq) goto loc_82124754;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x82124754
	if (ctx.cr6.eq) goto loc_82124754;
	// lbz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// li r31,0
	ctx.r31.s64 = 0;
loc_82124748:
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x823dfa20
	ctx.lr = 0x82124750;
	sub_823DFA20(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_82124754:
	// lbzu r11,1(r30)
	ea = 1 + ctx.r30.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r30.u32 = ea;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82124700
	if (!ctx.cr6.eq) goto loc_82124700;
loc_82124760:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_8212476C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82124690) {
	__imp__sub_82124690(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82124778) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32167
	ctx.r11.s64 = -2108096512;
	// addi r10,r11,-10504
	ctx.r10.s64 = ctx.r11.s64 + -10504;
	// lwz r5,76(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	// lwz r4,72(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// b 0x82124690
	sub_82124690(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82124778) {
	__imp__sub_82124778(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8212478C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8212478C) {
	__imp__sub_8212478C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82124790) {
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
	// lis r11,-32167
	ctx.r11.s64 = -2108096512;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,-10504
	ctx.r31.s64 = ctx.r11.s64 + -10504;
	// lwz r5,76(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// lwz r4,72(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// bl 0x82124690
	ctx.lr = 0x821247BC;
	sub_82124690(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8212480c
	if (ctx.cr6.eq) goto loc_8212480C;
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// lwz r10,64(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x821247ec
	if (!ctx.cr6.eq) goto loc_821247EC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822e7e98
	ctx.lr = 0x821247E8;
	sub_822E7E98(ctx, base);
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
loc_821247EC:
	// lwz r10,76(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// lbzx r11,r10,r30
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r30.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8212480c
	if (!ctx.cr6.eq) goto loc_8212480C;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r11.u8);
loc_8212480C:
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

PPC_WEAK_FUNC(sub_82124790) {
	__imp__sub_82124790(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82124824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82124824) {
	__imp__sub_82124824(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82124828) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x82124830;
	__savegprlr_27(ctx, base);
	// stfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f30.u64);
	// stfd f31,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32167
	ctx.r11.s64 = -2108096512;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,-10504
	ctx.r31.s64 = ctx.r11.s64 + -10504;
	// lwz r5,76(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// lwz r4,72(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// bl 0x82124690
	ctx.lr = 0x82124854;
	sub_82124690(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82124920
	if (ctx.cr6.eq) goto loc_82124920;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lfs f0,96(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f13,88(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f1,84(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	ctx.f1.f64 = double(temp.f32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// fadds f2,f0,f13
	ctx.f2.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// addi r27,r11,28832
	ctx.r27.s64 = ctx.r11.s64 + 28832;
	// addi r29,r10,-12052
	ctx.r29.s64 = ctx.r10.s64 + -12052;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r7,r29,-16
	ctx.r7.s64 = ctx.r29.s64 + -16;
	// lfs f31,12168(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12168);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,5484(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 5484);
	ctx.f30.f64 = double(temp.f32);
	// li r4,28
	ctx.r4.s64 = 28;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,384(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 384);
	// fmr f4,f31
	ctx.f4.f64 = ctx.f31.f64;
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// fmr f5,f30
	ctx.f5.f64 = ctx.f30.f64;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// bl 0x82391e90
	ctx.lr = 0x821248BC;
	sub_82391E90(ctx, base);
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// lfs f0,84(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f13,-10756(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -10756);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,84(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 84, temp.u32);
	// bl 0x822e0578
	ctx.lr = 0x821248D8;
	sub_822E0578(ctx, base);
	// lfs f0,96(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,88(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// li r4,40
	ctx.r4.s64 = 40;
	// lwz r5,384(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 384);
	// lfs f1,84(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	ctx.f1.f64 = double(temp.f32);
	// fmr f4,f31
	ctx.f4.f64 = ctx.f31.f64;
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// fmr f5,f30
	ctx.f5.f64 = ctx.f30.f64;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// fadds f2,f0,f13
	ctx.f2.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// bl 0x82391e90
	ctx.lr = 0x82124908;
	sub_82391E90(ctx, base);
	// lfs f13,88(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,96(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,92(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	ctx.f12.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,88(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 88, temp.u32);
	// stfs f12,84(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 84, temp.u32);
loc_82124920:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82124828) {
	__imp__sub_82124828(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82124930) {
	PPC_FUNC_PROLOGUE();
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x822e8058
	sub_822E8058(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82124930) {
	__imp__sub_82124930(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8212493C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8212493C) {
	__imp__sub_8212493C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82124940) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82124948;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r29,r11,-32488
	ctx.r29.s64 = ctx.r11.s64 + -32488;
	// lbz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 24);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x823df9e0
	ctx.lr = 0x82124964;
	sub_823DF9E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82124988
	if (ctx.cr6.eq) goto loc_82124988;
	// addi r30,r29,24
	ctx.r30.s64 = ctx.r29.s64 + 24;
loc_82124970:
	// lbzu r11,1(r30)
	ea = 1 + ctx.r30.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r30.u32 = ea;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x823df9e0
	ctx.lr = 0x82124980;
	sub_823DF9E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82124970
	if (!ctx.cr6.eq) goto loc_82124970;
loc_82124988:
	// addi r11,r29,24
	ctx.r11.s64 = ctx.r29.s64 + 24;
	// add r30,r11,r31
	ctx.r30.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lbzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r31.u32);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x823df9e0
	ctx.lr = 0x8212499C;
	sub_823DF9E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821249bc
	if (!ctx.cr6.eq) goto loc_821249BC;
loc_821249A4:
	// lbzu r11,1(r30)
	ea = 1 + ctx.r30.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r30.u32 = ea;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x823df9e0
	ctx.lr = 0x821249B4;
	sub_823DF9E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821249a4
	if (ctx.cr6.eq) goto loc_821249A4;
loc_821249BC:
	// addi r11,r29,24
	ctx.r11.s64 = ctx.r29.s64 + 24;
	// add r30,r11,r31
	ctx.r30.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lbzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r31.u32);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x823df9e0
	ctx.lr = 0x821249D0;
	sub_823DF9E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821249f0
	if (ctx.cr6.eq) goto loc_821249F0;
loc_821249D8:
	// lbzu r11,1(r30)
	ea = 1 + ctx.r30.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r30.u32 = ea;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x823df9e0
	ctx.lr = 0x821249E8;
	sub_823DF9E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821249d8
	if (!ctx.cr6.eq) goto loc_821249D8;
loc_821249F0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82124940) {
	__imp__sub_82124940(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821249FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821249FC) {
	__imp__sub_821249FC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82124A00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf5c
	ctx.lr = 0x82124A08;
	__savegprlr_21(ctx, base);
	// stfd f30,-112(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -112, ctx.f30.u64);
	// stfd f31,-104(r1)
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.f31.u64);
	// stwu r1,-1312(r1)
	ea = -1312 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31937
	ctx.r11.s64 = -2093023232;
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
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
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// ble cr6,0x82124a48
	if (!ctx.cr6.gt) goto loc_82124A48;
	// addi r11,r11,100
	ctx.r11.s64 = ctx.r11.s64 + 100;
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r24,4(r10)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x82124a50
	goto loc_82124A50;
loc_82124A48:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r24,r11,-28736
	ctx.r24.s64 = ctx.r11.s64 + -28736;
loc_82124A50:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_82124A54:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82124a54
	if (!ctx.cr6.eq) goto loc_82124A54;
	// subf r11,r24,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r24.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r23,r11,0
	ctx.r23.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq cr6,0x82124cc8
	if (ctx.cr6.eq) goto loc_82124CC8;
	// li r21,0
	ctx.r21.s64 = 0;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// mr r30,r21
	ctx.r30.u64 = ctx.r21.u64;
	// mr r31,r21
	ctx.r31.u64 = ctx.r21.u64;
	// mr r29,r21
	ctx.r29.u64 = ctx.r21.u64;
	// mr r25,r21
	ctx.r25.u64 = ctx.r21.u64;
	// ble cr6,0x82124cc8
	if (!ctx.cr6.gt) goto loc_82124CC8;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// addi r28,r1,112
	ctx.r28.s64 = ctx.r1.s64 + 112;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r27,r11,28832
	ctx.r27.s64 = ctx.r11.s64 + 28832;
loc_82124AA4:
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// lwz r4,0(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x822e7ee0
	ctx.lr = 0x82124AB4;
	sub_822E7EE0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82124b50
	if (!ctx.cr6.eq) goto loc_82124B50;
	// cmplwi cr6,r30,16
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 16, ctx.xer);
	// beq cr6,0x82124cc8
	if (ctx.cr6.eq) goto loc_82124CC8;
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82124ACC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82124acc
	if (!ctx.cr6.eq) goto loc_82124ACC;
	// subf r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// cmplwi cr6,r10,1024
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1024, ctx.xer);
	// bge cr6,0x82124cc8
	if (!ctx.cr6.lt) goto loc_82124CC8;
	// addi r11,r1,176
	ctx.r11.s64 = ctx.r1.s64 + 176;
	// add r4,r31,r11
	ctx.r4.u64 = ctx.r31.u64 + ctx.r11.u64;
	// stw r4,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r4.u32);
	// bl 0x822e7868
	ctx.lr = 0x82124B04;
	sub_822E7868(ctx, base);
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82124B0C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82124b0c
	if (!ctx.cr6.eq) goto loc_82124B0C;
	// subf r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	// lwz r5,384(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 384);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r31,r11,1
	ctx.r31.s64 = ctx.r11.s64 + 1;
	// bl 0x8238b5a8
	ctx.lr = 0x82124B3C;
	sub_8238B5A8(ctx, base);
	// cmpw cr6,r29,r3
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r3.s32, ctx.xer);
	// bge cr6,0x82124b48
	if (!ctx.cr6.lt) goto loc_82124B48;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_82124B48:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
loc_82124B50:
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// cmpw cr6,r25,r22
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r22.s32, ctx.xer);
	// blt cr6,0x82124aa4
	if (ctx.cr6.lt) goto loc_82124AA4;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x82124cc8
	if (ctx.cr6.eq) goto loc_82124CC8;
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r6,r11,18736
	ctx.r6.s64 = ctx.r11.s64 + 18736;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x823def18
	ctx.lr = 0x82124B80;
	sub_823DEF18(ctx, base);
	// lwz r31,384(r27)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + 384);
	// bl 0x82124940
	ctx.lr = 0x82124B88;
	sub_82124940(ctx, base);
	// lis r10,-32165
	ctx.r10.s64 = -2107965440;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r11,r10,-32488
	ctx.r11.s64 = ctx.r10.s64 + -32488;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r11,24
	ctx.r3.s64 = ctx.r11.s64 + 24;
	// bl 0x8238b5a8
	ctx.lr = 0x82124BA0;
	sub_8238B5A8(ctx, base);
	// extsw r9,r29
	ctx.r9.s64 = ctx.r29.s32;
	// extsw r8,r30
	ctx.r8.s64 = ctx.r30.s32;
	// std r9,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r9.u64);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// extsw r7,r3
	ctx.r7.s64 = ctx.r3.s32;
	// std r8,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r8.u64);
	// lfd f13,96(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// lis r11,-32167
	ctx.r11.s64 = -2108096512;
	// std r7,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r7.u64);
	// lfd f12,96(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// lis r6,1
	ctx.r6.s64 = 65536;
	// fcfid f8,f0
	ctx.f8.f64 = double(ctx.f0.s64);
	// addi r31,r11,-8976
	ctx.r31.s64 = ctx.r11.s64 + -8976;
	// frsp f3,f8
	ctx.f3.f64 = double(float(ctx.f8.f64));
	// ori r5,r6,596
	ctx.r5.u64 = ctx.r6.u64 | 596;
	// fcfid f9,f13
	ctx.f9.f64 = double(ctx.f13.s64);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r4,-32166
	ctx.r4.s64 = -2108030976;
	// addi r29,r11,-11980
	ctx.r29.s64 = ctx.r11.s64 + -11980;
	// lfs f0,-1432(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -1432);
	ctx.f0.f64 = double(temp.f32);
	// lis r3,-32256
	ctx.r3.s64 = -2113929216;
	// lfsx f13,r31,r5
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r5.u32);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,-1436(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -1436);
	ctx.f12.f64 = double(temp.f32);
	// fadds f7,f0,f13
	ctx.f7.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lwz r11,28712(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28712);
	// lfs f13,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r7,r11,12
	ctx.r7.s64 = ctx.r11.s64 + 12;
	// frsp f5,f9
	ctx.f5.f64 = double(float(ctx.f9.f64));
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fadds f31,f7,f13
	ctx.f31.f64 = double(float(ctx.f7.f64 + ctx.f13.f64));
	// fadds f6,f10,f12
	ctx.f6.f64 = double(float(ctx.f10.f64 + ctx.f12.f64));
	// lfs f12,13904(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 13904);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f4,f5,f0,f12
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f0.f64 + ctx.f12.f64));
	// fadds f3,f3,f12
	ctx.f3.f64 = double(float(ctx.f3.f64 + ctx.f12.f64));
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fsubs f30,f6,f13
	ctx.f30.f64 = double(float(ctx.f6.f64 - ctx.f13.f64));
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x82124180
	ctx.lr = 0x82124C3C;
	sub_82124180(ctx, base);
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// fadds f1,f30,f0
	ctx.f1.f64 = double(float(ctx.f30.f64 + ctx.f0.f64));
	// stfs f1,-1444(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + -1444, temp.u32);
	// fadds f0,f31,f0
	ctx.f0.f64 = double(float(ctx.f31.f64 + ctx.f0.f64));
	// stfs f0,-1440(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + -1440, temp.u32);
	// stfs f1,-1436(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + -1436, temp.u32);
	// ble cr6,0x82124cc8
	if (!ctx.cr6.gt) goto loc_82124CC8;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// lfs f13,-1432(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -1432);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r28,r11,-4
	ctx.r28.s64 = ctx.r11.s64 + -4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,12168(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f30.f64 = double(temp.f32);
loc_82124C78:
	// lis r4,32767
	ctx.r4.s64 = 2147418112;
	// lwzu r3,4(r28)
	ea = 4 + ctx.r28.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	ctx.r28.u32 = ea;
	// addi r11,r29,-40
	ctx.r11.s64 = ctx.r29.s64 + -40;
	// lwz r5,384(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 384);
	// ori r4,r4,65535
	ctx.r4.u64 = ctx.r4.u64 | 65535;
	// fmr f5,f30
	ctx.fpscr.disableFlushMode();
	ctx.f5.f64 = ctx.f30.f64;
	// fmr f4,f31
	ctx.f4.f64 = ctx.f31.f64;
	// stw r21,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r21.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// fadds f2,f0,f13
	ctx.f2.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// bl 0x82391e90
	ctx.lr = 0x82124CA8;
	sub_82391E90(ctx, base);
	// lfs f0,-1440(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -1440);
	ctx.f0.f64 = double(temp.f32);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// lfs f13,-1432(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -1432);
	ctx.f13.f64 = double(temp.f32);
	// lfs f1,-1436(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -1436);
	ctx.f1.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,-1440(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + -1440, temp.u32);
	// stfs f1,-1444(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + -1444, temp.u32);
	// bne 0x82124c78
	if (!ctx.cr0.eq) goto loc_82124C78;
loc_82124CC8:
	// addi r1,r1,1312
	ctx.r1.s64 = ctx.r1.s64 + 1312;
	// lfd f30,-112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// lfd f31,-104(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x823ddfac
	__restgprlr_21(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82124A00) {
	__imp__sub_82124A00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82124CD8) {
	PPC_FUNC_PROLOGUE();
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82124CE0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82124ce0
	if (!ctx.cr6.eq) goto loc_82124CE0;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82124D0C:
	// lbzx r11,r9,r10
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// bne cr6,0x82124d1c
	if (!ctx.cr6.eq) goto loc_82124D1C;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_82124D1C:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x82124d0c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82124D0C;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82124CD8) {
	__imp__sub_82124CD8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82124D28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x82124D30;
	__savegprlr_26(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-1200(r1)
	ea = -1200 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32167
	ctx.r11.s64 = -2108096512;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r11,-10504
	ctx.r31.s64 = ctx.r11.s64 + -10504;
	// lwz r5,76(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// lwz r4,72(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// bl 0x82124690
	ctx.lr = 0x82124D50;
	sub_82124690(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8212501c
	if (ctx.cr6.eq) goto loc_8212501C;
	// lbz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82124d78
	if (ctx.cr6.eq) goto loc_82124D78;
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// lbzx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r29.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8212501c
	if (!ctx.cr6.eq) goto loc_8212501C;
loc_82124D78:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822e0220
	ctx.lr = 0x82124D80;
	sub_822E0220(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x822dfca8
	ctx.lr = 0x82124D88;
	sub_822DFCA8(ctx, base);
	// clrlwi r26,r3,24
	ctx.r26.u64 = ctx.r3.u32 & 0xFF;
	// lis r27,-32166
	ctx.r27.s64 = -2108030976;
	// cntlzw r11,r26
	ctx.r11.u64 = ctx.r26.u32 == 0 ? 32 : __builtin_clz(ctx.r26.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// lwz r11,28712(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28712);
	// xori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 ^ 1;
	// addi r3,r10,2
	ctx.r3.s64 = ctx.r10.s64 + 2;
	// addi r4,r11,12
	ctx.r4.s64 = ctx.r11.s64 + 12;
	// bl 0x82124318
	ctx.lr = 0x82124DAC;
	sub_82124318(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r4,28
	ctx.r4.s64 = 28;
	// addi r28,r11,-12020
	ctx.r28.s64 = ctx.r11.s64 + -12020;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r5,r28,-48
	ctx.r5.s64 = ctx.r28.s64 + -48;
	// bl 0x82124028
	ctx.lr = 0x82124DC4;
	sub_82124028(ctx, base);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lfs f0,84(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f31,-10756(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -10756);
	ctx.f31.f64 = double(temp.f32);
	// fadds f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// stfs f0,84(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 84, temp.u32);
	// bl 0x822df088
	ctx.lr = 0x82124DE0;
	sub_822DF088(ctx, base);
	// addi r5,r28,-32
	ctx.r5.s64 = ctx.r28.s64 + -32;
	// li r4,40
	ctx.r4.s64 = 40;
	// bl 0x82124028
	ctx.lr = 0x82124DEC;
	sub_82124028(ctx, base);
	// lfs f0,88(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,96(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// lfs f12,92(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	ctx.f12.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,88(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 88, temp.u32);
	// stfs f12,84(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 84, temp.u32);
	// beq cr6,0x82124e54
	if (ctx.cr6.eq) goto loc_82124E54;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r4,r28,-16
	ctx.r4.s64 = ctx.r28.s64 + -16;
	// addi r3,r11,-10740
	ctx.r3.s64 = ctx.r11.s64 + -10740;
	// bl 0x82123fb8
	ctx.lr = 0x82124E1C;
	sub_82123FB8(ctx, base);
	// lfs f0,84(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// stfs f0,84(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 84, temp.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822df0a8
	ctx.lr = 0x82124E30;
	sub_822DF0A8(ctx, base);
	// addi r5,r28,-16
	ctx.r5.s64 = ctx.r28.s64 + -16;
	// li r4,40
	ctx.r4.s64 = 40;
	// bl 0x82124028
	ctx.lr = 0x82124E3C;
	sub_82124028(ctx, base);
	// lfs f0,88(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,96(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,92(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	ctx.f12.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,88(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 88, temp.u32);
	// stfs f12,84(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 84, temp.u32);
loc_82124E54:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r4,r28,-16
	ctx.r4.s64 = ctx.r28.s64 + -16;
	// addi r3,r11,-10752
	ctx.r3.s64 = ctx.r11.s64 + -10752;
	// bl 0x82123fb8
	ctx.lr = 0x82124E64;
	sub_82123FB8(ctx, base);
	// lfs f0,84(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// stfs f0,84(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 84, temp.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822df098
	ctx.lr = 0x82124E78;
	sub_822DF098(ctx, base);
	// addi r5,r28,-16
	ctx.r5.s64 = ctx.r28.s64 + -16;
	// li r4,40
	ctx.r4.s64 = 40;
	// bl 0x82124028
	ctx.lr = 0x82124E84;
	sub_82124028(ctx, base);
	// lfs f13,88(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,96(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// fadds f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lfs f12,92(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,84(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 84, temp.u32);
	// li r6,1024
	ctx.r6.s64 = 1024;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f0,88(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 88, temp.u32);
	// ld r4,60(r30)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r30.u32 + 60);
	// lbz r3,10(r30)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r30.u32 + 10);
	// bl 0x822df980
	ctx.lr = 0x82124EB8;
	sub_822DF980(ctx, base);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82124ed4
	if (ctx.cr6.eq) goto loc_82124ED4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82124cd8
	ctx.lr = 0x82124ECC;
	sub_82124CD8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x82124ed8
	goto loc_82124ED8;
loc_82124ED4:
	// li r29,0
	ctx.r29.s64 = 0;
loc_82124ED8:
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r11,28712(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28712);
	// add r10,r29,r10
	ctx.r10.u64 = ctx.r29.u64 + ctx.r10.u64;
	// addi r4,r11,12
	ctx.r4.s64 = ctx.r11.s64 + 12;
	// addi r3,r10,1
	ctx.r3.s64 = ctx.r10.s64 + 1;
	// bl 0x82124318
	ctx.lr = 0x82124EF0;
	sub_82124318(ctx, base);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82124f80
	if (ctx.cr6.eq) goto loc_82124F80;
	// addi r4,r28,16
	ctx.r4.s64 = ctx.r28.s64 + 16;
	// bl 0x82123fb8
	ctx.lr = 0x82124F04;
	sub_82123FB8(ctx, base);
	// lfs f0,96(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,92(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	ctx.f12.f64 = double(temp.f32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lfs f13,88(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// cmpwi cr6,r29,8
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 8, ctx.xer);
	// blt cr6,0x82124f5c
	if (ctx.cr6.lt) goto loc_82124F5C;
	// addi r11,r29,-8
	ctx.r11.s64 = ctx.r29.s64 + -8;
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82124F30:
	// fadds f13,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f12,84(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 84, temp.u32);
	// fadds f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// fadds f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// fadds f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// fadds f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// fadds f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// fadds f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// fadds f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// bdnz 0x82124f30
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82124F30;
	// stfs f13,88(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 88, temp.u32);
loc_82124F5C:
	// cmpw cr6,r10,r29
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r29.s32, ctx.xer);
	// bge cr6,0x82124f88
	if (!ctx.cr6.lt) goto loc_82124F88;
	// subf r11,r10,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r10.s64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82124F6C:
	// stfs f12,84(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 84, temp.u32);
	// fadds f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// bdnz 0x82124f6c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82124F6C;
	// stfs f13,88(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 88, temp.u32);
	// b 0x82124f88
	goto loc_82124F88;
loc_82124F80:
	// lfs f0,96(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,88(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
loc_82124F88:
	// lis r10,-32165
	ctx.r10.s64 = -2107965440;
	// lfs f1,84(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	ctx.f1.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// fadds f2,f13,f0
	ctx.f2.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// addi r8,r10,28832
	ctx.r8.s64 = ctx.r10.s64 + 28832;
	// lis r4,32767
	ctx.r4.s64 = 2147418112;
	// li r7,0
	ctx.r7.s64 = 0;
	// lfs f4,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f4.f64 = double(temp.f32);
	// ori r4,r4,65535
	ctx.r4.u64 = ctx.r4.u64 | 65535;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lfs f5,5484(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5484);
	ctx.f5.f64 = double(temp.f32);
	// lwz r5,384(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 384);
	// fmr f3,f4
	ctx.f3.f64 = ctx.f4.f64;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// bl 0x82391e90
	ctx.lr = 0x82124FCC;
	sub_82391E90(ctx, base);
	// lfs f0,88(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,96(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,92(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	ctx.f12.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f12,84(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 84, temp.u32);
	// stfs f0,88(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 88, temp.u32);
	// lbz r6,10(r30)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + 10);
	// cmplwi cr6,r6,6
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 6, ctx.xer);
	// bne cr6,0x8212501c
	if (!ctx.cr6.eq) goto loc_8212501C;
	// lis r10,-31937
	ctx.r10.s64 = -2093023232;
	// addi r11,r10,-17592
	ctx.r11.s64 = ctx.r10.s64 + -17592;
	// addi r9,r11,68
	ctx.r9.s64 = ctx.r11.s64 + 68;
	// lwz r11,-17592(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -17592);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r8,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// cmpwi cr6,r7,2
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 2, ctx.xer);
	// bne cr6,0x8212501c
	if (!ctx.cr6.eq) goto loc_8212501C;
	// lwz r4,60(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// lwz r3,64(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// bl 0x82124a00
	ctx.lr = 0x8212501C;
	sub_82124A00(ctx, base);
loc_8212501C:
	// addi r1,r1,1200
	ctx.r1.s64 = ctx.r1.s64 + 1200;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82124D28) {
	__imp__sub_82124D28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82125028) {
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
	// lis r11,-32167
	ctx.r11.s64 = -2108096512;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,-10504
	ctx.r31.s64 = ctx.r11.s64 + -10504;
	// lwz r5,76(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// lwz r4,72(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// bl 0x82124690
	ctx.lr = 0x82125054;
	sub_82124690(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821250b8
	if (ctx.cr6.eq) goto loc_821250B8;
	// lbz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8212507c
	if (ctx.cr6.eq) goto loc_8212507C;
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// lbzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821250b8
	if (!ctx.cr6.eq) goto loc_821250B8;
loc_8212507C:
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,28712(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28712);
	// addi r4,r11,12
	ctx.r4.s64 = ctx.r11.s64 + 12;
	// bl 0x82124318
	ctx.lr = 0x82125090;
	sub_82124318(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r10,-12084
	ctx.r4.s64 = ctx.r10.s64 + -12084;
	// bl 0x82123fb8
	ctx.lr = 0x821250A0;
	sub_82123FB8(ctx, base);
	// lfs f0,88(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,96(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,92(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	ctx.f12.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,88(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 88, temp.u32);
	// stfs f12,84(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 84, temp.u32);
loc_821250B8:
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

PPC_WEAK_FUNC(sub_82125028) {
	__imp__sub_82125028(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821250D0) {
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
	// lis r11,-32167
	ctx.r11.s64 = -2108096512;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,-10504
	ctx.r31.s64 = ctx.r11.s64 + -10504;
	// lwz r5,76(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// lwz r4,72(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// bl 0x82124690
	ctx.lr = 0x821250FC;
	sub_82124690(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82125130
	if (ctx.cr6.eq) goto loc_82125130;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,-12084
	ctx.r4.s64 = ctx.r11.s64 + -12084;
	// bl 0x82123fb8
	ctx.lr = 0x82125118;
	sub_82123FB8(ctx, base);
	// lfs f0,88(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,96(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,92(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	ctx.f12.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,88(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 88, temp.u32);
	// stfs f12,84(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 84, temp.u32);
loc_82125130:
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

PPC_WEAK_FUNC(sub_821250D0) {
	__imp__sub_821250D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82125148) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82125150;
	__savegprlr_28(ctx, base);
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32167
	ctx.r11.s64 = -2108096512;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r11,-10504
	ctx.r30.s64 = ctx.r11.s64 + -10504;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// lwz r4,72(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// bl 0x82124608
	ctx.lr = 0x82125178;
	sub_82124608(ctx, base);
	// lfs f0,84(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,88(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// fctiwz f13,f13
	ctx.f13.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f0,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.f0.u64);
	// stfd f13,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f13.u64);
	// lwz r29,108(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r28,100(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x822b7e60
	ctx.lr = 0x821251A4;
	sub_822B7E60(ctx, base);
	// lis r9,-32165
	ctx.r9.s64 = -2107965440;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r4,r9,-32488
	ctx.r4.s64 = ctx.r9.s64 + -32488;
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// li r8,5
	ctx.r8.s64 = 5;
	// li r7,5
	ctx.r7.s64 = 5;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8212fad8
	ctx.lr = 0x821251D0;
	sub_8212FAD8(ctx, base);
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82125148) {
	__imp__sub_82125148(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821251D8) {
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
	// lis r11,-32167
	ctx.r11.s64 = -2108096512;
	// lis r10,-32165
	ctx.r10.s64 = -2107965440;
	// addi r9,r11,-10504
	ctx.r9.s64 = ctx.r11.s64 + -10504;
	// addi r4,r10,-32488
	ctx.r4.s64 = ctx.r10.s64 + -32488;
	// li r8,5
	ctx.r8.s64 = 5;
	// li r7,5
	ctx.r7.s64 = 5;
	// lfs f0,88(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,84(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// fctiwz f13,f13
	ctx.f13.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// stfd f13,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f13.u64);
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r5,92(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x8212fc90
	ctx.lr = 0x82125220;
	sub_8212FC90(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821251D8) {
	__imp__sub_821251D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82125230) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32167
	ctx.r11.s64 = -2108096512;
	// lis r10,-32191
	ctx.r10.s64 = -2109669376;
	// addi r9,r11,-10504
	ctx.r9.s64 = ctx.r11.s64 + -10504;
	// lwz r10,1352(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1352);
	// lwz r11,68(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 68);
	// subfc r8,r11,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r11.u32;
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// eqv r7,r11,r10
	ctx.r7.u64 = ~(ctx.r11.u64 ^ ctx.r10.u64);
	// rlwinm r6,r7,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x1;
	// addze r5,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r5.s64 = temp.s64;
	// clrlwi r3,r5,31
	ctx.r3.u64 = ctx.r5.u32 & 0x1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82125230) {
	__imp__sub_82125230(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8212525C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8212525C) {
	__imp__sub_8212525C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82125260) {
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
	// addi r4,r11,-10684
	ctx.r4.s64 = ctx.r11.s64 + -10684;
	// bl 0x822e8058
	ctx.lr = 0x82125280;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821252a0
	if (!ctx.cr6.eq) goto loc_821252A0;
loc_82125288:
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
loc_821252A0:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-10692
	ctx.r4.s64 = ctx.r11.s64 + -10692;
	// bl 0x822e8058
	ctx.lr = 0x821252B0;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82125288
	if (ctx.cr6.eq) goto loc_82125288;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-10700
	ctx.r4.s64 = ctx.r11.s64 + -10700;
	// bl 0x822e8058
	ctx.lr = 0x821252C8;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82125288
	if (ctx.cr6.eq) goto loc_82125288;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-10708
	ctx.r4.s64 = ctx.r11.s64 + -10708;
	// bl 0x822e8058
	ctx.lr = 0x821252E0;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82125288
	if (ctx.cr6.eq) goto loc_82125288;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-10716
	ctx.r4.s64 = ctx.r11.s64 + -10716;
	// bl 0x822e8058
	ctx.lr = 0x821252F8;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82125288
	if (ctx.cr6.eq) goto loc_82125288;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-10724
	ctx.r4.s64 = ctx.r11.s64 + -10724;
	// bl 0x822e8058
	ctx.lr = 0x82125310;
	sub_822E8058(ctx, base);
	// cntlzw r10,r3
	ctx.r10.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
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

PPC_WEAK_FUNC(sub_82125260) {
	__imp__sub_82125260(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8212532C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8212532C) {
	__imp__sub_8212532C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82125330) {
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
	// lis r11,-32167
	ctx.r11.s64 = -2108096512;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,-10504
	ctx.r31.s64 = ctx.r11.s64 + -10504;
	// lbz r11,81(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 81);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821253d4
	if (ctx.cr6.eq) goto loc_821253D4;
	// lwz r10,68(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// ble cr6,0x821253d4
	if (!ctx.cr6.gt) goto loc_821253D4;
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// lwz r11,1352(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1352);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x821253d4
	if (!ctx.cr6.lt) goto loc_821253D4;
	// lbz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82125398
	if (ctx.cr6.eq) goto loc_82125398;
	// bl 0x82123f00
	ctx.lr = 0x82125388;
	sub_82123F00(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821253d4
	if (!ctx.cr6.eq) goto loc_821253D4;
	// lwz r10,68(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
loc_82125398:
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// add. r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x821253b4
	if (!ctx.cr0.lt) goto loc_821253B4;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// b 0x821253d8
	goto loc_821253D8;
loc_821253B4:
	// subfc r9,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// rlwinm r8,r11,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// rlwinm r7,r10,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// li r3,1
	ctx.r3.s64 = 1;
	// subfe r6,r8,r7
	temp.u8 = (~ctx.r8.u32 + ctx.r7.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r8.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 & ctx.r11.u64;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// b 0x821253d8
	goto loc_821253D8;
loc_821253D4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821253D8:
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

PPC_WEAK_FUNC(sub_82125330) {
	__imp__sub_82125330(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821253F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32167
	ctx.r11.s64 = -2108096512;
	// addi r11,r11,-10504
	ctx.r11.s64 = ctx.r11.s64 + -10504;
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x82125414
	if (ctx.cr6.lt) goto loc_82125414;
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82125418
	if (!ctx.cr6.eq) goto loc_82125418;
loc_82125414:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82125418:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821253F0) {
	__imp__sub_821253F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82125420) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32167
	ctx.r11.s64 = -2108096512;
	// addi r11,r11,-10504
	ctx.r11.s64 = ctx.r11.s64 + -10504;
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x82125444
	if (ctx.cr6.lt) goto loc_82125444;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// bne cr6,0x82125448
	if (!ctx.cr6.eq) goto loc_82125448;
loc_82125444:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82125448:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8212545c
	if (!ctx.cr6.eq) goto loc_8212545C;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8212545C:
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r10.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82125420) {
	__imp__sub_82125420(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82125474) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82125474) {
	__imp__sub_82125474(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82125478) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32167
	ctx.r11.s64 = -2108096512;
	// addi r10,r11,-10504
	ctx.r10.s64 = ctx.r11.s64 + -10504;
	// stb r3,81(r10)
	PPC_STORE_U8(ctx.r10.u32 + 81, ctx.r3.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82125478) {
	__imp__sub_82125478(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82125488) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mulli r10,r4,24
	ctx.r10.s64 = ctx.r4.s64 * 24;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// srawi r10,r5,31
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r5.s32 >> 31;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r8,r9,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// subfc r7,r9,r5
	ctx.xer.ca = ctx.r5.u32 >= ctx.r9.u32;
	ctx.r7.s64 = ctx.r5.s64 - ctx.r9.s64;
	// adde r3,r8,r10
	temp.u8 = (ctx.r8.u32 + ctx.r10.u32 < ctx.r8.u32) | (ctx.r8.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ctx.r8.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82125488) {
	__imp__sub_82125488(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821254AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821254AC) {
	__imp__sub_821254AC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821254B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,44(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32167
	ctx.r11.s64 = -2108096512;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r8,r11,-8976
	ctx.r8.s64 = ctx.r11.s64 + -8976;
loc_821254C8:
	// lwz r11,40(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// lwz r6,0(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,4(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r5,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r6,r10,r6
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r6.u32);
	// rlwinm r10,r6,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// add r5,r10,r9
	ctx.r5.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r10,4(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// subf. r9,r10,r3
	ctx.r9.s64 = ctx.r3.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bltlr 
	if (ctx.cr0.lt) return;
	// lwz r10,44(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r9,16(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// addi r6,r10,-1
	ctx.r6.s64 = ctx.r10.s64 + -1;
	// stw r11,40(r4)
	PPC_STORE_U32(ctx.r4.u32 + 40, ctx.r11.u32);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// stw r6,44(r4)
	PPC_STORE_U32(ctx.r4.u32 + 44, ctx.r6.u32);
	// bne cr6,0x8212551c
	if (!ctx.cr6.eq) goto loc_8212551C;
	// stw r7,40(r4)
	PPC_STORE_U32(ctx.r4.u32 + 40, ctx.r7.u32);
loc_8212551C:
	// cmplw cr6,r4,r8
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x8212557c
	if (!ctx.cr6.eq) goto loc_8212557C;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r9,r11,568
	ctx.r9.u64 = ctx.r11.u64 | 568;
	// ori r5,r10,584
	ctx.r5.u64 = ctx.r10.u64 | 584;
	// lis r6,1
	ctx.r6.s64 = 65536;
	// ori r6,r6,568
	ctx.r6.u64 = ctx.r6.u64 | 568;
	// lwzx r10,r8,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// lwzx r11,r8,r5
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r5.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stwx r10,r8,r6
	PPC_STORE_U32(ctx.r8.u32 + ctx.r6.u32, ctx.r10.u32);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8212557c
	if (!ctx.cr6.lt) goto loc_8212557C;
	// lwz r10,44(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 44);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82125570
	if (ctx.cr6.lt) goto loc_82125570;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r9,r10,568
	ctx.r9.u64 = ctx.r10.u64 | 568;
	// stwx r11,r8,r9
	PPC_STORE_U32(ctx.r8.u32 + ctx.r9.u32, ctx.r11.u32);
	// b 0x8212557c
	goto loc_8212557C;
loc_82125570:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r9,r11,568
	ctx.r9.u64 = ctx.r11.u64 | 568;
	// stwx r10,r8,r9
	PPC_STORE_U32(ctx.r8.u32 + ctx.r9.u32, ctx.r10.u32);
loc_8212557C:
	// lwz r11,44(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821254c8
	if (!ctx.cr6.eq) goto loc_821254C8;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821254B0) {
	__imp__sub_821254B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8212558C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8212558C) {
	__imp__sub_8212558C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82125590) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r11,32(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	// subf r10,r5,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r5.s64;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// lfs f1,12168(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12168);
	ctx.f1.f64 = double(temp.f32);
	// bge cr6,0x821255d8
	if (!ctx.cr6.lt) goto loc_821255D8;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f0,-16(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// std r10,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f11,f0
	ctx.f11.f64 = double(ctx.f0.s64);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// fdivs f1,f10,f9
	ctx.f1.f64 = double(float(ctx.f10.f64 / ctx.f9.f64));
loc_821255D8:
	// clrlwi r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82125660
	if (ctx.cr6.eq) goto loc_82125660;
	// lwz r11,24(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// lwz r8,28(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82125660
	if (!ctx.cr6.lt) goto loc_82125660;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// subf r10,r9,r5
	ctx.r10.s64 = ctx.r5.s64 - ctx.r9.s64;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// subf r8,r8,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r8.s64;
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// bgt cr6,0x8212561c
	if (ctx.cr6.gt) goto loc_8212561C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_8212561C:
	// lwz r10,28(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// subf r9,r9,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r9.s64;
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// subf r11,r11,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r11.s64;
	// std r8,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r8.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// add r7,r11,r5
	ctx.r7.u64 = ctx.r11.u64 + ctx.r5.u64;
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// extsw r6,r7
	ctx.r6.s64 = ctx.r7.s32;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// std r6,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r6.u64);
	// lfd f11,-16(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// fdivs f8,f9,f12
	ctx.f8.f64 = double(float(ctx.f9.f64 / ctx.f12.f64));
	// fmuls f1,f8,f1
	ctx.f1.f64 = double(float(ctx.f8.f64 * ctx.f1.f64));
	// blr 
	return;
loc_82125660:
	// lwz r10,28(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// subf r11,r11,r5
	ctx.r11.s64 = ctx.r5.s64 - ctx.r11.s64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// std r9,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r9.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// std r10,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r10.u64);
	// lfd f12,-8(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// fcfid f10,f12
	ctx.f10.f64 = double(ctx.f12.s64);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// frsp f11,f13
	ctx.f11.f64 = double(float(ctx.f13.f64));
	// fdivs f8,f11,f9
	ctx.f8.f64 = double(float(ctx.f11.f64 / ctx.f9.f64));
	// fmuls f1,f8,f1
	ctx.f1.f64 = double(float(ctx.f8.f64 * ctx.f1.f64));
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82125590) {
	__imp__sub_82125590(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821256B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// rlwinm r10,r3,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r11,r11,-30024
	ctx.r11.s64 = ctx.r11.s64 + -30024;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r9,r10,0,27,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x821256e0
	if (ctx.cr6.eq) goto loc_821256E0;
	// lbz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x821256e4
	if (ctx.cr6.eq) goto loc_821256E4;
loc_821256E0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_821256E4:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821256B0) {
	__imp__sub_821256B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821256EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821256EC) {
	__imp__sub_821256EC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821256F0) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82125704
	if (ctx.cr6.lt) goto loc_82125704;
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82125708
	if (ctx.cr6.lt) goto loc_82125708;
loc_82125704:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82125708:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821256F0) {
	__imp__sub_821256F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82125710) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32167
	ctx.r11.s64 = -2108096512;
	// mulli r10,r3,18520
	ctx.r10.s64 = ctx.r3.s64 * 18520;
	// addi r9,r11,-8976
	ctx.r9.s64 = ctx.r11.s64 + -8976;
	// mulli r11,r4,52
	ctx.r11.s64 = ctx.r4.s64 * 52;
	// addis r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 65536;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r7,r9,8844
	ctx.r7.s64 = ctx.r9.s64 + 8844;
	// lwzx r6,r8,r7
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// neg r5,r6
	ctx.r5.s64 = -ctx.r6.s64;
	// andc r4,r5,r6
	ctx.r4.u64 = ctx.r5.u64 & ~ctx.r6.u64;
	// rlwinm r3,r4,1,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0x1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82125710) {
	__imp__sub_82125710(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82125740) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32167
	ctx.r11.s64 = -2108096512;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// addi r9,r11,-8976
	ctx.r9.s64 = ctx.r11.s64 + -8976;
	// ori r8,r10,576
	ctx.r8.u64 = ctx.r10.u64 | 576;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// ori r6,r7,576
	ctx.r6.u64 = ctx.r7.u64 | 576;
	// lbzx r5,r9,r8
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r8.u32);
	// cntlzw r4,r5
	ctx.r4.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// rlwinm r11,r4,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x1;
	// stbx r11,r9,r6
	PPC_STORE_U8(ctx.r9.u32 + ctx.r6.u32, ctx.r11.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82125740) {
	__imp__sub_82125740(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8212576C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8212576C) {
	__imp__sub_8212576C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82125770) {
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
	ctx.lr = 0x82125788;
	__savefpr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// fadds f0,f1,f3
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 + ctx.f3.f64));
	// lis r30,-32255
	ctx.r30.s64 = -2113863680;
	// lis r11,-32167
	ctx.r11.s64 = -2108096512;
	// fmr f31,f2
	ctx.f31.f64 = ctx.f2.f64;
	// fmr f29,f4
	ctx.f29.f64 = ctx.f4.f64;
	// addi r31,r11,-8976
	ctx.r31.s64 = ctx.r11.s64 + -8976;
	// lfs f3,-11976(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -11976);
	ctx.f3.f64 = double(temp.f32);
	// lwz r11,-548(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -548);
	// fsubs f28,f0,f3
	ctx.f28.f64 = double(float(ctx.f0.f64 - ctx.f3.f64));
	// addi r7,r11,12
	ctx.r7.s64 = ctx.r11.s64 + 12;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// bl 0x82124180
	ctx.lr = 0x821257BC;
	sub_82124180(ctx, base);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// ori r9,r11,584
	ctx.r9.u64 = ctx.r11.u64 | 584;
	// lwzx r11,r31,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x821257ec
	if (ctx.cr6.gt) goto loc_821257EC;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lfs f3,-11976(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -11976);
	ctx.f3.f64 = double(temp.f32);
	// fmr f4,f29
	ctx.f4.f64 = ctx.f29.f64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// lwz r11,28708(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28708);
	// b 0x82125898
	goto loc_82125898;
loc_821257EC:
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// extsw r7,r8
	ctx.r7.s64 = ctx.r8.s32;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lis r6,1
	ctx.r6.s64 = 65536;
	// fcfid f11,f0
	ctx.f11.f64 = double(ctx.f0.s64);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// ori r5,r6,568
	ctx.r5.u64 = ctx.r6.u64 | 568;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// frsp f6,f11
	ctx.f6.f64 = double(float(ctx.f11.f64));
	// lwzx r10,r31,r5
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r5.u32);
	// lfs f30,12168(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12168);
	ctx.f30.f64 = double(temp.f32);
	// subf r3,r11,r10
	ctx.r3.s64 = ctx.r10.s64 - ctx.r11.s64;
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f9,80(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// fdivs f7,f30,f10
	ctx.f7.f64 = double(float(ctx.f30.f64 / ctx.f10.f64));
	// frsp f5,f8
	ctx.f5.f64 = double(float(ctx.f8.f64));
	// fmuls f4,f6,f7
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f7.f64));
	// fmuls f27,f5,f7
	ctx.f27.f64 = double(float(ctx.f5.f64 * ctx.f7.f64));
	// fmuls f1,f4,f29
	ctx.f1.f64 = double(float(ctx.f4.f64 * ctx.f29.f64));
	// bl 0x823df940
	ctx.lr = 0x82125858;
	sub_823DF940(ctx, base);
	// frsp f2,f1
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = double(float(ctx.f1.f64));
	// lfs f3,-11976(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -11976);
	ctx.f3.f64 = double(temp.f32);
	// fsubs f13,f27,f30
	ctx.f13.f64 = double(float(ctx.f27.f64 - ctx.f30.f64));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fadds f12,f31,f29
	ctx.f12.f64 = double(float(ctx.f31.f64 + ctx.f29.f64));
	// lis r9,-32166
	ctx.r9.s64 = -2108030976;
	// fneg f11,f27
	ctx.f11.u64 = ctx.f27.u64 ^ 0x8000000000000000;
	// lfs f0,5484(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,28708(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28708);
	// fsubs f10,f3,f2
	ctx.f10.f64 = double(float(ctx.f3.f64 - ctx.f2.f64));
	// fsel f9,f13,f30,f27
	ctx.f9.f64 = ctx.f13.f64 >= 0.0 ? ctx.f30.f64 : ctx.f27.f64;
	// fsel f4,f10,f3,f2
	ctx.f4.f64 = ctx.f10.f64 >= 0.0 ? ctx.f3.f64 : ctx.f2.f64;
	// fsel f8,f11,f0,f9
	ctx.f8.f64 = ctx.f11.f64 >= 0.0 ? ctx.f0.f64 : ctx.f9.f64;
	// fsubs f7,f12,f4
	ctx.f7.f64 = double(float(ctx.f12.f64 - ctx.f4.f64));
	// fsubs f6,f7,f31
	ctx.f6.f64 = double(float(ctx.f7.f64 - ctx.f31.f64));
	// fmadds f2,f8,f6,f31
	ctx.f2.f64 = double(float(ctx.f8.f64 * ctx.f6.f64 + ctx.f31.f64));
loc_82125898:
	// addi r7,r11,12
	ctx.r7.s64 = ctx.r11.s64 + 12;
	// fmr f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f28.f64;
	// bl 0x82124180
	ctx.lr = 0x821258A4;
	sub_82124180(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x823de070
	ctx.lr = 0x821258B0;
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

PPC_WEAK_FUNC(sub_82125770) {
	__imp__sub_82125770(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821258C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821258C4) {
	__imp__sub_821258C4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821258C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x821258D0;
	__savegprlr_26(ctx, base);
	// stfd f29,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f29.u64);
	// stfd f30,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f30.u64);
	// stfd f31,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// fmr f29,f1
	ctx.f29.f64 = ctx.f1.f64;
	// li r4,55
	ctx.r4.s64 = 55;
	// fmr f31,f2
	ctx.f31.f64 = ctx.f2.f64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82121000
	ctx.lr = 0x821258F8;
	sub_82121000(ctx, base);
	// lis r11,-32167
	ctx.r11.s64 = -2108096512;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// addi r31,r11,-8976
	ctx.r31.s64 = ctx.r11.s64 + -8976;
	// ori r8,r10,584
	ctx.r8.u64 = ctx.r10.u64 | 584;
	// ori r7,r9,568
	ctx.r7.u64 = ctx.r9.u64 | 568;
	// lis r6,1
	ctx.r6.s64 = 65536;
	// li r26,0
	ctx.r26.s64 = 0;
	// ori r5,r6,580
	ctx.r5.u64 = ctx.r6.u64 | 580;
	// lwzx r10,r31,r7
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	// lwzx r28,r31,r8
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// lwzx r11,r31,r5
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r5.u32);
	// subf. r29,r28,r10
	ctx.r29.s64 = ctx.r10.s64 - ctx.r28.s64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bge 0x82125954
	if (!ctx.cr0.lt) goto loc_82125954;
	// mullw r10,r11,r29
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r29.s32);
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// add r28,r28,r29
	ctx.r28.u64 = ctx.r28.u64 + ctx.r29.u64;
	// std r9,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r9.u64);
	// lfd f0,112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fsubs f31,f31,f12
	ctx.f31.f64 = double(float(ctx.f31.f64 - ctx.f12.f64));
loc_82125954:
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x82125a08
	if (!ctx.cr6.gt) goto loc_82125A08;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r10,-32165
	ctx.r10.s64 = -2107965440;
	// addi r27,r10,28832
	ctx.r27.s64 = ctx.r10.s64 + 28832;
	// lfs f30,12168(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12168);
	ctx.f30.f64 = double(temp.f32);
	// b 0x82125980
	goto loc_82125980;
loc_82125974:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r10,r11,580
	ctx.r10.u64 = ctx.r11.u64 | 580;
	// lwzx r11,r31,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
loc_82125980:
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// std r9,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r9.u64);
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// fmr f4,f30
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f30.f64;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// stw r26,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r26.u32);
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// fmr f3,f30
	ctx.f3.f64 = ctx.f30.f64;
	// add r6,r10,r29
	ctx.r6.u64 = ctx.r10.u64 + ctx.r29.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r7,384(r27)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r27.u32 + 384);
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// divw r5,r6,r11
	ctx.r5.s32 = ctx.r6.s32 / ctx.r11.s32;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mullw r11,r5,r11
	ctx.r11.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r11.s32);
	// subf r11,r11,r6
	ctx.r11.s64 = ctx.r6.s64 - ctx.r11.s64;
	// lfd f0,112(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// fadds f31,f12,f31
	ctx.f31.f64 = double(float(ctx.f12.f64 + ctx.f31.f64));
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// bl 0x823927b0
	ctx.lr = 0x821259FC;
	sub_823927B0(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r28
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r28.s32, ctx.xer);
	// blt cr6,0x82125974
	if (ctx.cr6.lt) goto loc_82125974;
loc_82125A08:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f29,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f30,-72(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821258C8) {
	__imp__sub_821258C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82125A1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82125A1C) {
	__imp__sub_82125A1C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82125A20) {
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
	// bl 0x82272b50
	ctx.lr = 0x82125A30;
	sub_82272B50(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r9,r11,-10672
	ctx.r9.s64 = ctx.r11.s64 + -10672;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r10,-10680
	ctx.r5.s64 = ctx.r10.s64 + -10680;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// bl 0x822e84f0
	ctx.lr = 0x82125A4C;
	sub_822E84F0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82125A20) {
	__imp__sub_82125A20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82125A5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82125A5C) {
	__imp__sub_82125A5C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82125A60) {
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
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// fmr f29,f3
	ctx.f29.f64 = ctx.f3.f64;
	// bl 0x82272b50
	ctx.lr = 0x82125A88;
	sub_82272B50(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r9,r11,-10672
	ctx.r9.s64 = ctx.r11.s64 + -10672;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r10,-10680
	ctx.r5.s64 = ctx.r10.s64 + -10680;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// bl 0x822e84f0
	ctx.lr = 0x82125AA4;
	sub_822E84F0(ctx, base);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// fctiwz f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f31.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f31.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r6,r7,-12104
	ctx.r6.s64 = ctx.r7.s64 + -12104;
	// lfs f0,7640(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 7640);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f29,f0
	ctx.f13.f64 = double(float(ctx.f29.f64 - ctx.f0.f64));
	// fadds f12,f13,f30
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f30.f64));
	// fctiwz f11,f12
	ctx.f11.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f11.u64);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82135238
	ctx.lr = 0x82125ADC;
	sub_82135238(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
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

PPC_WEAK_FUNC(sub_82125A60) {
	__imp__sub_82125A60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82125AF8) {
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
	ctx.lr = 0x82125B0C;
	__savefpr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32167
	ctx.r11.s64 = -2108096512;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// addi r8,r11,-8976
	ctx.r8.s64 = ctx.r11.s64 + -8976;
	// ori r7,r10,604
	ctx.r7.u64 = ctx.r10.u64 | 604;
	// ori r6,r9,596
	ctx.r6.u64 = ctx.r9.u64 | 596;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// lis r4,1
	ctx.r4.s64 = 65536;
	// lis r31,-32255
	ctx.r31.s64 = -2113863680;
	// lfsx f13,r8,r7
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	ctx.f13.f64 = double(temp.f32);
	// ori r11,r4,592
	ctx.r11.u64 = ctx.r4.u64 | 592;
	// lfsx f0,r8,r6
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r6.u32);
	ctx.f0.f64 = double(temp.f32);
	// ori r3,r5,600
	ctx.r3.u64 = ctx.r5.u64 | 600;
	// fsubs f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// addi r10,r31,-11980
	ctx.r10.s64 = ctx.r31.s64 + -11980;
	// lis r9,-32167
	ctx.r9.s64 = -2108096512;
	// lfsx f31,r8,r11
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	ctx.f31.f64 = double(temp.f32);
	// lfsx f12,r8,r3
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r3.u32);
	ctx.f12.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// lfs f13,-4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f30,f12,f31
	ctx.f30.f64 = double(float(ctx.f12.f64 - ctx.f31.f64));
	// fadds f29,f0,f13
	ctx.f29.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lwz r11,-8980(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -8980);
	// addi r7,r11,12
	ctx.r7.s64 = ctx.r11.s64 + 12;
	// fsubs f28,f11,f13
	ctx.f28.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// fmr f3,f30
	ctx.f3.f64 = ctx.f30.f64;
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// fmr f4,f28
	ctx.f4.f64 = ctx.f28.f64;
	// bl 0x82124180
	ctx.lr = 0x82125B84;
	sub_82124180(ctx, base);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f0,-11980(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -11980);
	ctx.f0.f64 = double(temp.f32);
	// fadds f27,f31,f0
	ctx.f27.f64 = double(float(ctx.f31.f64 + ctx.f0.f64));
	// fadds f29,f29,f0
	ctx.f29.f64 = double(float(ctx.f29.f64 + ctx.f0.f64));
	// lfs f31,13904(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 13904);
	ctx.f31.f64 = double(temp.f32);
	// fsubs f28,f28,f31
	ctx.f28.f64 = double(float(ctx.f28.f64 - ctx.f31.f64));
	// fmr f1,f27
	ctx.f1.f64 = ctx.f27.f64;
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// fmr f3,f28
	ctx.f3.f64 = ctx.f28.f64;
	// bl 0x82125a60
	ctx.lr = 0x82125BAC;
	sub_82125A60(ctx, base);
	// fmr f2,f29
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f29.f64;
	// fmr f1,f27
	ctx.f1.f64 = ctx.f27.f64;
	// fmr f4,f28
	ctx.f4.f64 = ctx.f28.f64;
	// fsubs f3,f30,f31
	ctx.f3.f64 = double(float(ctx.f30.f64 - ctx.f31.f64));
	// bl 0x82125770
	ctx.lr = 0x82125BC0;
	sub_82125770(ctx, base);
	// fmr f2,f29
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f29.f64;
	// fmr f1,f27
	ctx.f1.f64 = ctx.f27.f64;
	// bl 0x821258c8
	ctx.lr = 0x82125BCC;
	sub_821258C8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// addi r12,r1,-16
	ctx.r12.s64 = ctx.r1.s64 + -16;
	// bl 0x823de070
	ctx.lr = 0x82125BD8;
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

PPC_WEAK_FUNC(sub_82125AF8) {
	__imp__sub_82125AF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82125BE8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lis r11,-32167
	ctx.r11.s64 = -2108096512;
	// ori r9,r10,568
	ctx.r9.u64 = ctx.r10.u64 | 568;
	// addi r11,r11,-8976
	ctx.r11.s64 = ctx.r11.s64 + -8976;
	// lis r8,1
	ctx.r8.s64 = 65536;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// ori r6,r8,584
	ctx.r6.u64 = ctx.r8.u64 | 584;
	// ori r5,r7,568
	ctx.r5.u64 = ctx.r7.u64 | 568;
	// lwzx r10,r11,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
	// lwzx r9,r11,r6
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// stwx r10,r11,r5
	PPC_STORE_U32(ctx.r11.u32 + ctx.r5.u32, ctx.r10.u32);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82125c3c
	if (ctx.cr6.lt) goto loc_82125C3C;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r8,r10,568
	ctx.r8.u64 = ctx.r10.u64 | 568;
	// stwx r9,r11,r8
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r9.u32);
	// blr 
	return;
loc_82125C3C:
	// lis r9,1
	ctx.r9.s64 = 65536;
	// ori r8,r9,568
	ctx.r8.u64 = ctx.r9.u64 | 568;
	// stwx r10,r11,r8
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r10.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82125BE8) {
	__imp__sub_82125BE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82125C4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82125C4C) {
	__imp__sub_82125C4C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82125C50) {
	PPC_FUNC_PROLOGUE();
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lis r11,-32167
	ctx.r11.s64 = -2108096512;
	// ori r8,r10,568
	ctx.r8.u64 = ctx.r10.u64 | 568;
	// addi r11,r11,-8976
	ctx.r11.s64 = ctx.r11.s64 + -8976;
	// lwzx r10,r11,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// lwz r9,44(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82125c84
	if (ctx.cr6.lt) goto loc_82125C84;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r8,r10,568
	ctx.r8.u64 = ctx.r10.u64 | 568;
	// stwx r9,r11,r8
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r9.u32);
	// blr 
	return;
loc_82125C84:
	// lis r9,1
	ctx.r9.s64 = 65536;
	// ori r8,r9,568
	ctx.r8.u64 = ctx.r9.u64 | 568;
	// stwx r10,r11,r8
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r10.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82125C50) {
	__imp__sub_82125C50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82125C94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82125C94) {
	__imp__sub_82125C94(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82125C98) {
	PPC_FUNC_PROLOGUE();
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lis r11,-32167
	ctx.r11.s64 = -2108096512;
	// ori r9,r10,584
	ctx.r9.u64 = ctx.r10.u64 | 584;
	// addi r11,r11,-8976
	ctx.r11.s64 = ctx.r11.s64 + -8976;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// lwzx r9,r11,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82125cc8
	if (ctx.cr6.lt) goto loc_82125CC8;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r8,r10,568
	ctx.r8.u64 = ctx.r10.u64 | 568;
	// stwx r9,r11,r8
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r9.u32);
	// blr 
	return;
loc_82125CC8:
	// lis r9,1
	ctx.r9.s64 = 65536;
	// ori r8,r9,568
	ctx.r8.u64 = ctx.r9.u64 | 568;
	// stwx r10,r11,r8
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r10.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82125C98) {
	__imp__sub_82125C98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82125CD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32167
	ctx.r11.s64 = -2108096512;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// addi r9,r11,-8976
	ctx.r9.s64 = ctx.r11.s64 + -8976;
	// ori r8,r10,568
	ctx.r8.u64 = ctx.r10.u64 | 568;
	// lwz r11,44(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 44);
	// stwx r11,r9,r8
	PPC_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82125CD8) {
	__imp__sub_82125CD8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82125CF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82125CF4) {
	__imp__sub_82125CF4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82125CF8) {
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
	// lis r10,9
	ctx.r10.s64 = 589824;
	// addi r9,r11,28832
	ctx.r9.s64 = ctx.r11.s64 + 28832;
	// ori r8,r10,6632
	ctx.r8.u64 = ctx.r10.u64 | 6632;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lbzx r7,r9,r8
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r8.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82125e44
	if (ctx.cr6.eq) goto loc_82125E44;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// addi r3,r11,-32488
	ctx.r3.s64 = ctx.r11.s64 + -32488;
	// bl 0x82282ca0
	ctx.lr = 0x82125D34;
	sub_82282CA0(ctx, base);
	// lis r10,-32167
	ctx.r10.s64 = -2108096512;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-8976
	ctx.r9.s64 = ctx.r10.s64 + -8976;
	// lwz r10,-1464(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + -1464);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x82125d5c
	if (ctx.cr6.lt) goto loc_82125D5C;
	// lbz r10,-1528(r9)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + -1528);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// bne cr6,0x82125d60
	if (!ctx.cr6.eq) goto loc_82125D60;
loc_82125D5C:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82125D60:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82125d78
	if (ctx.cr6.eq) goto loc_82125D78;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stb r11,-1528(r9)
	PPC_STORE_U8(ctx.r9.u32 + -1528, ctx.r11.u8);
	// stw r10,-1464(r9)
	PPC_STORE_U32(ctx.r9.u32 + -1464, ctx.r10.u32);
loc_82125D78:
	// addis r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 65536;
	// mulli r10,r31,18520
	ctx.r10.s64 = ctx.r31.s64 * 18520;
	// addi r8,r8,8800
	ctx.r8.s64 = ctx.r8.s64 + 8800;
	// addis r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 65536;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// addi r7,r7,8852
	ctx.r7.s64 = ctx.r7.s64 + 8852;
	// lis r6,-32155
	ctx.r6.s64 = -2107310080;
	// addi r4,r6,-30024
	ctx.r4.s64 = ctx.r6.s64 + -30024;
	// stw r11,36(r8)
	PPC_STORE_U32(ctx.r8.u32 + 36, ctx.r11.u32);
	// stw r11,48(r8)
	PPC_STORE_U32(ctx.r8.u32 + 48, ctx.r11.u32);
	// stw r11,40(r8)
	PPC_STORE_U32(ctx.r8.u32 + 40, ctx.r11.u32);
	// stw r11,44(r8)
	PPC_STORE_U32(ctx.r8.u32 + 44, ctx.r11.u32);
	// add r8,r10,r7
	ctx.r8.u64 = ctx.r10.u64 + ctx.r7.u64;
	// addis r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 65536;
	// addi r6,r7,8904
	ctx.r6.s64 = ctx.r7.s64 + 8904;
	// addis r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 65536;
	// stw r11,36(r8)
	PPC_STORE_U32(ctx.r8.u32 + 36, ctx.r11.u32);
	// stw r11,48(r8)
	PPC_STORE_U32(ctx.r8.u32 + 48, ctx.r11.u32);
	// addi r5,r7,8956
	ctx.r5.s64 = ctx.r7.s64 + 8956;
	// stw r11,40(r8)
	PPC_STORE_U32(ctx.r8.u32 + 40, ctx.r11.u32);
	// addis r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 65536;
	// stw r11,44(r8)
	PPC_STORE_U32(ctx.r8.u32 + 44, ctx.r11.u32);
	// add r8,r10,r6
	ctx.r8.u64 = ctx.r10.u64 + ctx.r6.u64;
	// addis r6,r9,1
	ctx.r6.s64 = ctx.r9.s64 + 65536;
	// add r9,r10,r5
	ctx.r9.u64 = ctx.r10.u64 + ctx.r5.u64;
	// addi r5,r7,18916
	ctx.r5.s64 = ctx.r7.s64 + 18916;
	// lwz r7,4(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r11,36(r8)
	PPC_STORE_U32(ctx.r8.u32 + 36, ctx.r11.u32);
	// stw r11,48(r8)
	PPC_STORE_U32(ctx.r8.u32 + 48, ctx.r11.u32);
	// stw r11,40(r8)
	PPC_STORE_U32(ctx.r8.u32 + 40, ctx.r11.u32);
	// stw r11,44(r8)
	PPC_STORE_U32(ctx.r8.u32 + 44, ctx.r11.u32);
	// addi r8,r6,14640
	ctx.r8.s64 = ctx.r6.s64 + 14640;
	// stw r11,36(r9)
	PPC_STORE_U32(ctx.r9.u32 + 36, ctx.r11.u32);
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// stw r11,48(r9)
	PPC_STORE_U32(ctx.r9.u32 + 48, ctx.r11.u32);
	// stw r11,40(r9)
	PPC_STORE_U32(ctx.r9.u32 + 40, ctx.r11.u32);
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// lwz r6,36(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	// stw r11,44(r9)
	PPC_STORE_U32(ctx.r9.u32 + 44, ctx.r11.u32);
	// rlwinm r9,r7,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,36(r8)
	PPC_STORE_U32(ctx.r8.u32 + 36, ctx.r11.u32);
	// stw r11,48(r8)
	PPC_STORE_U32(ctx.r8.u32 + 48, ctx.r11.u32);
	// stw r11,40(r8)
	PPC_STORE_U32(ctx.r8.u32 + 40, ctx.r11.u32);
	// stw r11,44(r8)
	PPC_STORE_U32(ctx.r8.u32 + 44, ctx.r11.u32);
	// rlwinm r8,r6,0,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,36(r10)
	PPC_STORE_U32(ctx.r10.u32 + 36, ctx.r11.u32);
	// stw r11,48(r10)
	PPC_STORE_U32(ctx.r10.u32 + 48, ctx.r11.u32);
	// stw r11,40(r10)
	PPC_STORE_U32(ctx.r10.u32 + 40, ctx.r11.u32);
	// stw r11,44(r10)
	PPC_STORE_U32(ctx.r10.u32 + 44, ctx.r11.u32);
	// stw r9,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r9.u32);
	// stw r8,36(r4)
	PPC_STORE_U32(ctx.r4.u32 + 36, ctx.r8.u32);
loc_82125E44:
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

PPC_WEAK_FUNC(sub_82125CF8) {
	__imp__sub_82125CF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82125E58) {
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
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8212fa08
	ctx.lr = 0x82125E6C;
	sub_8212FA08(ctx, base);
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

PPC_WEAK_FUNC(sub_82125E58) {
	__imp__sub_82125E58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82125E88) {
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
	// mr r30,r9
	ctx.r30.u64 = ctx.r9.u64;
	// lwz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mullw r11,r5,r7
	ctx.r11.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r7.s32);
	// subf r10,r6,r4
	ctx.r10.s64 = ctx.r4.s64 - ctx.r6.s64;
	// subf r6,r6,r9
	ctx.r6.s64 = ctx.r9.s64 - ctx.r6.s64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82125ec4
	if (!ctx.cr6.lt) goto loc_82125EC4;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
loc_82125EC4:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x82125f14
	if (ctx.cr6.lt) goto loc_82125F14;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x82125ee8
	if (!ctx.cr6.gt) goto loc_82125EE8;
	// cmpw cr6,r6,r9
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x82125f14
	if (!ctx.cr6.lt) goto loc_82125F14;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r4,r11,-10640
	ctx.r4.s64 = ctx.r11.s64 + -10640;
	// b 0x82125f08
	goto loc_82125F08;
loc_82125EE8:
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82125f14
	if (!ctx.cr6.lt) goto loc_82125F14;
	// divw r11,r10,r7
	ctx.r11.s32 = ctx.r10.s32 / ctx.r7.s32;
	// mullw r10,r11,r7
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// cmpw cr6,r6,r10
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82125f14
	if (!ctx.cr6.lt) goto loc_82125F14;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r4,r11,-10660
	ctx.r4.s64 = ctx.r11.s64 + -10660;
loc_82125F08:
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x823652d8
	ctx.lr = 0x82125F10;
	sub_823652D8(ctx, base);
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
loc_82125F14:
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

PPC_WEAK_FUNC(sub_82125E88) {
	__imp__sub_82125E88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82125F2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82125F2C) {
	__imp__sub_82125F2C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82125F30) {
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
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// addi r31,r11,-32488
	ctx.r31.s64 = ctx.r11.s64 + -32488;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82282ca0
	ctx.lr = 0x82125F50;
	sub_82282CA0(ctx, base);
	// lis r11,-32167
	ctx.r11.s64 = -2108096512;
	// addi r11,r11,-10504
	ctx.r11.s64 = ctx.r11.s64 + -10504;
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x82125f74
	if (ctx.cr6.lt) goto loc_82125F74;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// bne cr6,0x82125f78
	if (!ctx.cr6.eq) goto loc_82125F78;
loc_82125F74:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82125F78:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82125f94
	if (ctx.cr6.eq) goto loc_82125F94;
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r10.u32);
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
loc_82125F94:
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// lis r10,-32155
	ctx.r10.s64 = -2107310080;
	// lis r9,-32167
	ctx.r9.s64 = -2108096512;
	// addi r6,r10,-30024
	ctx.r6.s64 = ctx.r10.s64 + -30024;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// lwz r11,1356(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1356);
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r4,-32191
	ctx.r4.s64 = -2109669376;
	// addi r3,r9,-8976
	ctx.r3.s64 = ctx.r9.s64 + -8976;
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// lwz r8,4(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// ori r5,r5,576
	ctx.r5.u64 = ctx.r5.u64 | 576;
	// lwz r7,36(r6)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + 36);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// xori r11,r8,1
	ctx.r11.u64 = ctx.r8.u64 ^ 1;
	// xori r10,r7,1
	ctx.r10.u64 = ctx.r7.u64 ^ 1;
	// lfs f0,1360(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 1360);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// stw r11,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r11.u32);
	// stbx r9,r3,r5
	PPC_STORE_U8(ctx.r3.u32 + ctx.r5.u32, ctx.r9.u8);
	// stw r10,36(r6)
	PPC_STORE_U32(ctx.r6.u32 + 36, ctx.r10.u32);
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

PPC_WEAK_FUNC(sub_82125F30) {
	__imp__sub_82125F30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82126000) {
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
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8212fa08
	ctx.lr = 0x82126014;
	sub_8212FA08(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82126024
	if (!ctx.cr6.eq) goto loc_82126024;
	// bl 0x82125f30
	ctx.lr = 0x82126024;
	sub_82125F30(ctx, base);
loc_82126024:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82126000) {
	__imp__sub_82126000(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82126034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82126034) {
	__imp__sub_82126034(ctx, base);
}

