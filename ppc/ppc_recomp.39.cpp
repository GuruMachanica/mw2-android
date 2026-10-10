#include "ppc_recomp_shared.h"

PPC_FUNC_IMPL(__imp__sub_821B0774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821B0774) {
	__imp__sub_821B0774(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B0778) {
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
	// bl 0x821aedc8
	ctx.lr = 0x821B0790;
	sub_821AEDC8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821b07b4
	if (!ctx.cr6.eq) goto loc_821B07B4;
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
loc_821B07B4:
	// lwz r11,324(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 324);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821b085c
	if (!ctx.cr6.eq) goto loc_821B085C;
	// lwz r11,308(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 308);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x821b085c
	if (!ctx.cr6.eq) goto loc_821B085C;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,92(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b085c
	if (ctx.cr6.eq) goto loc_821B085C;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r12,4
	ctx.r12.s64 = 262144;
	// slw r8,r9,r10
	ctx.r8.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r10.u8 & 0x3F));
	// ori r12,r12,7932
	ctx.r12.u64 = ctx.r12.u64 | 7932;
	// and r7,r8,r12
	ctx.r7.u64 = ctx.r8.u64 & ctx.r12.u64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x821b085c
	if (!ctx.cr6.eq) goto loc_821B085C;
	// lhz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// rlwinm r9,r10,0,0,16
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFF8000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821b085c
	if (ctx.cr6.eq) goto loc_821B085C;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lfs f1,32(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f1.f64 = double(temp.f32);
	// lfs f2,248(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 248);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x820d52c0
	ctx.lr = 0x821B081C;
	sub_820D52C0(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f0,30232(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 30232);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x821b0840
	if (ctx.cr6.lt) goto loc_821B0840;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,24504(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24504);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x821b0844
	if (!ctx.cr6.gt) goto loc_821B0844;
loc_821B0840:
	// li r11,0
	ctx.r11.s64 = 0;
loc_821B0844:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
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
loc_821B085C:
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

PPC_WEAK_FUNC(sub_821B0778) {
	__imp__sub_821B0778(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B0874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821B0874) {
	__imp__sub_821B0874(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B0878) {
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
	// bl 0x821b0778
	ctx.lr = 0x821B0894;
	sub_821B0778(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// addi r30,r11,-25976
	ctx.r30.s64 = ctx.r11.s64 + -25976;
	// beq cr6,0x821b08b8
	if (ctx.cr6.eq) goto loc_821B08B8;
	// li r5,0
	ctx.r5.s64 = 0;
	// lhz r4,82(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 82);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82229da8
	ctx.lr = 0x821B08B8;
	sub_82229DA8(ctx, base);
loc_821B08B8:
	// lwz r11,668(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 668);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821b0918
	if (ctx.cr6.eq) goto loc_821B0918;
	// lfs f0,3472(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 3472);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmuls f13,f0,f0
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f12,3468(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 3468);
	ctx.f12.f64 = double(temp.f32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r31,672
	ctx.r4.s64 = ctx.r31.s64 + 672;
	// addi r3,r11,232
	ctx.r3.s64 = ctx.r11.s64 + 232;
	// lfs f0,6056(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6056);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f11,f12,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f13.f64));
	// fsubs f10,f0,f11
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// fsel f1,f10,f0,f11
	ctx.f1.f64 = ctx.f10.f64 >= 0.0 ? ctx.f0.f64 : ctx.f11.f64;
	// bl 0x821ab030
	ctx.lr = 0x821B08F4;
	sub_821AB030(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821b0918
	if (ctx.cr6.eq) goto loc_821B0918;
	// li r5,0
	ctx.r5.s64 = 0;
	// lhz r4,596(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 596);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82229da8
	ctx.lr = 0x821B0910;
	sub_82229DA8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 668, ctx.r11.u32);
loc_821B0918:
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

PPC_WEAK_FUNC(sub_821B0878) {
	__imp__sub_821B0878(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B0930) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x821B0938;
	__savegprlr_25(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32032
	ctx.r11.s64 = -2099249152;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r11,-6112(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6112);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821b0970
	if (!ctx.cr6.eq) goto loc_821B0970;
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// addi r10,r11,9624
	ctx.r10.s64 = ctx.r11.s64 + 9624;
	// lwz r11,52(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// addi r9,r11,50
	ctx.r9.s64 = ctx.r11.s64 + 50;
	// stw r9,328(r3)
	PPC_STORE_U32(ctx.r3.u32 + 328, ctx.r9.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_821B0970:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r31,268(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 268);
	// bl 0x822846c0
	ctx.lr = 0x821B097C;
	sub_822846C0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821b09a4
	if (!ctx.cr6.eq) goto loc_821B09A4;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r3,18
	ctx.r3.s64 = 18;
	// addi r4,r11,25304
	ctx.r4.s64 = ctx.r11.s64 + 25304;
	// bl 0x82280900
	ctx.lr = 0x821B0994;
	sub_82280900(ctx, base);
loc_821B0994:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8222f680
	ctx.lr = 0x821B099C;
	sub_8222F680(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_821B09A4:
	// bl 0x822ef118
	ctx.lr = 0x821B09A8;
	sub_822EF118(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821b09e4
	if (!ctx.cr6.eq) goto loc_821B09E4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32191
	ctx.r10.s64 = -2109669376;
	// addi r9,r10,7188
	ctx.r9.s64 = ctx.r10.s64 + 7188;
	// lbz r8,88(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 88);
	// rotlwi r7,r8,2
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r8.u32, 2);
	// lwzx r6,r7,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// lhz r3,0(r6)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r6.u32 + 0);
	// bl 0x822a13a0
	ctx.lr = 0x821B09D0;
	sub_822A13A0(ctx, base);
	// lis r4,-32255
	ctx.r4.s64 = -2113863680;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r4,25216
	ctx.r4.s64 = ctx.r4.s64 + 25216;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822830e8
	ctx.lr = 0x821B09E4;
	sub_822830E8(ctx, base);
loc_821B09E4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821db330
	ctx.lr = 0x821B09EC;
	sub_821DB330(ctx, base);
	// lwz r11,3480(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3480);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821b0a00
	if (ctx.cr6.eq) goto loc_821B0A00;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821b00d0
	ctx.lr = 0x821B0A00;
	sub_821B00D0(ctx, base);
loc_821B0A00:
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// addi r30,r11,7616
	ctx.r30.s64 = ctx.r11.s64 + 7616;
loc_821B0A08:
	// lwz r11,180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b0a1c
	if (ctx.cr6.eq) goto loc_821B0A1C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821da588
	ctx.lr = 0x821B0A1C;
	sub_821DA588(ctx, base);
loc_821B0A1C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ae438
	ctx.lr = 0x821B0A24;
	sub_821AE438(ctx, base);
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r31
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// mulli r10,r8,28
	ctx.r10.s64 = ctx.r8.s64 * 28;
	// lwzx r11,r7,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r30.u32);
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r5,16(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x821B0A58;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x821b0a08
	if (ctx.cr6.eq) goto loc_821B0A08;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lfs f0,232(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 232);
	ctx.f0.f64 = double(temp.f32);
	// li r26,0
	ctx.r26.s64 = 0;
	// addi r30,r28,232
	ctx.r30.s64 = ctx.r28.s64 + 232;
	// lfs f13,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x821b0aa4
	if (!ctx.cr6.eq) goto loc_821B0AA4;
	// lfs f0,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x821b0aa4
	if (!ctx.cr6.eq) goto loc_821B0AA4;
	// lfs f0,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// li r9,1
	ctx.r9.s64 = 1;
	// lfs f13,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x821b0aa8
	if (ctx.cr6.eq) goto loc_821B0AA8;
loc_821B0AA4:
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
loc_821B0AA8:
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// stfs f0,20(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// addi r10,r28,16
	ctx.r10.s64 = ctx.r28.s64 + 16;
	// lfs f13,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// rlwinm r27,r9,27,31,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// stfs f13,24(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// lfs f12,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,28(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// blt cr6,0x821b0ae4
	if (ctx.cr6.lt) goto loc_821B0AE4;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x821b0ae8
	if (!ctx.cr6.gt) goto loc_821B0AE8;
loc_821B0AE4:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_821B0AE8:
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// addi r11,r28,64
	ctx.r11.s64 = ctx.r28.s64 + 64;
	// subfic r8,r9,0
	ctx.xer.ca = ctx.r9.u32 <= 0;
	ctx.r8.s64 = 0 - ctx.r9.s64;
	// addi r9,r28,244
	ctx.r9.s64 = ctx.r28.s64 + 244;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r8,r7,28
	ctx.r8.u64 = ctx.r7.u32 & 0xF;
	// rlwinm r8,r8,0,30,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// addi r6,r8,1
	ctx.r6.s64 = ctx.r8.s64 + 1;
	// stw r6,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r6.u32);
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,28(r28)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r28.u32 + 28, temp.u32);
	// lfs f13,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,32(r28)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r28.u32 + 32, temp.u32);
	// lfs f12,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,36(r28)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r28.u32 + 36, temp.u32);
	// lfs f11,244(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 244);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,64(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 64);
	ctx.f10.f64 = double(temp.f32);
	// fcmpu cr6,f11,f10
	ctx.cr6.compare(ctx.f11.f64, ctx.f10.f64);
	// bne cr6,0x821b0b58
	if (!ctx.cr6.eq) goto loc_821B0B58;
	// lfs f0,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x821b0b58
	if (!ctx.cr6.eq) goto loc_821B0B58;
	// lfs f0,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// li r10,1
	ctx.r10.s64 = 1;
	// lfs f13,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x821b0b5c
	if (ctx.cr6.eq) goto loc_821B0B5C;
loc_821B0B58:
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
loc_821B0B5C:
	// clrlwi r7,r27,24
	ctx.r7.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x821b0b74
	if (!ctx.cr6.eq) goto loc_821B0B74;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// bne cr6,0x821b0b78
	if (!ctx.cr6.eq) goto loc_821B0B78;
loc_821B0B74:
	// li r8,1
	ctx.r8.s64 = 1;
loc_821B0B78:
	// clrlwi r29,r8,24
	ctx.r29.u64 = ctx.r8.u32 & 0xFF;
	// lwz r8,52(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 52);
	// addi r10,r28,52
	ctx.r10.s64 = ctx.r28.s64 + 52;
	// cmpwi cr6,r8,10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 10, ctx.xer);
	// blt cr6,0x821b0b98
	if (ctx.cr6.lt) goto loc_821B0B98;
	// cmpwi cr6,r8,12
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 12, ctx.xer);
	// li r8,1
	ctx.r8.s64 = 1;
	// ble cr6,0x821b0b9c
	if (!ctx.cr6.gt) goto loc_821B0B9C;
loc_821B0B98:
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
loc_821B0B9C:
	// clrlwi r8,r8,24
	ctx.r8.u64 = ctx.r8.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// subfic r7,r8,0
	ctx.xer.ca = ctx.r8.u32 <= 0;
	ctx.r7.s64 = 0 - ctx.r8.s64;
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r8,r6,28
	ctx.r8.u64 = ctx.r6.u32 & 0xF;
	// rlwinm r8,r8,0,30,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// addi r5,r8,1
	ctx.r5.s64 = ctx.r8.s64 + 1;
	// stw r5,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r5.u32);
	// lfs f0,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f13,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f12,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// beq cr6,0x821b0be8
	if (ctx.cr6.eq) goto loc_821B0BE8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82340d30
	ctx.lr = 0x821B0BE0;
	sub_82340D30(ctx, base);
	// addi r3,r31,3424
	ctx.r3.s64 = ctx.r31.s64 + 3424;
	// bl 0x821d16e0
	ctx.lr = 0x821B0BE8;
	sub_821D16E0(ctx, base);
loc_821B0BE8:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82240688
	ctx.lr = 0x821B0BF4;
	sub_82240688(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b0c08
	if (ctx.cr6.eq) goto loc_821B0C08;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8223fcb0
	ctx.lr = 0x821B0C08;
	sub_8223FCB0(ctx, base);
loc_821B0C08:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x822401e8
	ctx.lr = 0x821B0C10;
	sub_822401E8(ctx, base);
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// addi r3,r31,404
	ctx.r3.s64 = ctx.r31.s64 + 404;
	// addi r27,r11,9624
	ctx.r27.s64 = ctx.r11.s64 + 9624;
	// lwz r4,52(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 52);
	// bl 0x82317030
	ctx.lr = 0x821B0C24;
	sub_82317030(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821b0c48
	if (ctx.cr6.eq) goto loc_821B0C48;
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b0c4c
	if (ctx.cr6.eq) goto loc_821B0C4C;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821aaa38
	ctx.lr = 0x821B0C44;
	sub_821AAA38(ctx, base);
	// b 0x821b0c4c
	goto loc_821B0C4C;
loc_821B0C48:
	// stb r26,3524(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3524, ctx.r26.u8);
loc_821B0C4C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821c61a0
	ctx.lr = 0x821B0C54;
	sub_821C61A0(ctx, base);
	// lbz r11,350(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 350);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b0cd8
	if (ctx.cr6.eq) goto loc_821B0CD8;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// addi r10,r31,184
	ctx.r10.s64 = ctx.r31.s64 + 184;
loc_821B0C68:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,9
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 9, ctx.xer);
	// beq cr6,0x821b0d48
	if (ctx.cr6.eq) goto loc_821B0D48;
	// lwz r9,208(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x821b0c68
	if (!ctx.cr6.gt) goto loc_821B0C68;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_821B0C8C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821b0cd8
	if (!ctx.cr6.eq) goto loc_821B0CD8;
	// stw r26,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r26.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// li r7,-1
	ctx.r7.s64 = -1;
	// lwz r11,332(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 332);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r26,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r26.u32);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821f1080
	ctx.lr = 0x821B0CD8;
	sub_821F1080(ctx, base);
loc_821B0CD8:
	// lwz r11,268(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 268);
	// lwz r10,3480(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3480);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x821b0cfc
	if (ctx.cr6.eq) goto loc_821B0CFC;
	// lbz r11,5037(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5037);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821b0cfc
	if (!ctx.cr6.eq) goto loc_821B0CFC;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821e32c0
	ctx.lr = 0x821B0CFC;
	sub_821E32C0(ctx, base);
loc_821B0CFC:
	// cmpwi cr6,r25,2
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 2, ctx.xer);
	// addi r30,r31,536
	ctx.r30.s64 = ctx.r31.s64 + 536;
	// addi r29,r31,664
	ctx.r29.s64 = ctx.r31.s64 + 664;
	// beq cr6,0x821b0d50
	if (ctx.cr6.eq) goto loc_821B0D50;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x821b0d2c
	if (ctx.cr6.eq) goto loc_821B0D2C;
loc_821B0D14:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821a9c28
	ctx.lr = 0x821B0D20;
	sub_821A9C28(ctx, base);
	// addi r30,r30,64
	ctx.r30.s64 = ctx.r30.s64 + 64;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x821b0d14
	if (!ctx.cr6.eq) goto loc_821B0D14;
loc_821B0D2C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821b0878
	ctx.lr = 0x821B0D34;
	sub_821B0878(ctx, base);
	// lwz r11,52(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 52);
	// addi r11,r11,50
	ctx.r11.s64 = ctx.r11.s64 + 50;
	// stw r11,328(r28)
	PPC_STORE_U32(ctx.r28.u32 + 328, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_821B0D48:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x821b0c8c
	goto loc_821B0C8C;
loc_821B0D50:
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x821b0d70
	if (ctx.cr6.eq) goto loc_821B0D70;
loc_821B0D58:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821a9d50
	ctx.lr = 0x821B0D64;
	sub_821A9D50(ctx, base);
	// addi r30,r30,64
	ctx.r30.s64 = ctx.r30.s64 + 64;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x821b0d58
	if (!ctx.cr6.eq) goto loc_821B0D58;
loc_821B0D70:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821b8730
	ctx.lr = 0x821B0D78;
	sub_821B8730(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821b0994
	if (ctx.cr6.eq) goto loc_821B0994;
	// lwz r11,52(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 52);
	// addi r11,r11,50
	ctx.r11.s64 = ctx.r11.s64 + 50;
	// stw r11,328(r28)
	PPC_STORE_U32(ctx.r28.u32 + 328, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821B0930) {
	__imp__sub_821B0930(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B0D94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821B0D94) {
	__imp__sub_821B0D94(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B0D98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf54
	ctx.lr = 0x821B0DA0;
	__savegprlr_19(ctx, base);
	// addi r12,r1,-112
	ctx.r12.s64 = ctx.r1.s64 + -112;
	// bl 0x823de018
	ctx.lr = 0x821B0DA8;
	__savefpr_24(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f30,3436(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 3436);
	ctx.f30.f64 = double(temp.f32);
	// lfs f29,3440(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 3440);
	ctx.f29.f64 = double(temp.f32);
	// lhz r23,3448(r3)
	ctx.r23.u64 = PPC_LOAD_U16(ctx.r3.u32 + 3448);
	// lfs f28,3444(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 3444);
	ctx.f28.f64 = double(temp.f32);
	// lwz r22,3456(r3)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3456);
	// lfs f27,3460(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 3460);
	ctx.f27.f64 = double(temp.f32);
	// lwz r21,3452(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3452);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f0,232(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	ctx.f0.f64 = double(temp.f32);
	// addi r30,r3,3424
	ctx.r30.s64 = ctx.r3.s64 + 3424;
	// stfs f0,3424(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 3424, temp.u32);
	// addi r29,r3,3436
	ctx.r29.s64 = ctx.r3.s64 + 3436;
	// lfs f13,236(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 236);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stfs f13,3428(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3428, temp.u32);
	// lfs f12,240(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 240);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,3432(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3432, temp.u32);
	// bl 0x821d1450
	ctx.lr = 0x821B0DF8;
	sub_821D1450(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821b0e24
	if (!ctx.cr6.eq) goto loc_821B0E24;
loc_821B0E00:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r10,312(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 312);
	// rlwinm r9,r10,0,29,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFE7;
	// stw r9,312(r11)
	PPC_STORE_U32(ctx.r11.u32 + 312, ctx.r9.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// addi r12,r1,-112
	ctx.r12.s64 = ctx.r1.s64 + -112;
	// bl 0x823de064
	ctx.lr = 0x821B0E20;
	__restfpr_24(ctx, base);
	// b 0x823ddfa4
	__restgprlr_19(ctx, base);
	return;
loc_821B0E24:
	// lwz r19,3668(r31)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3668);
	// cmpwi cr6,r19,2047
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 2047, ctx.xer);
	// bne cr6,0x821b0e54
	if (!ctx.cr6.eq) goto loc_821B0E54;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r10,312(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 312);
	// rlwinm r9,r10,0,29,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFE7;
	// stw r9,312(r11)
	PPC_STORE_U32(ctx.r11.u32 + 312, ctx.r9.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// addi r12,r1,-112
	ctx.r12.s64 = ctx.r1.s64 + -112;
	// bl 0x823de064
	ctx.lr = 0x821B0E50;
	__restfpr_24(ctx, base);
	// b 0x823ddfa4
	__restgprlr_19(ctx, base);
	return;
loc_821B0E54:
	// lbz r11,3688(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3688);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821b0f94
	if (!ctx.cr6.eq) goto loc_821B0F94;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821aa628
	ctx.lr = 0x821B0E70;
	sub_821AA628(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821b0f94
	if (ctx.cr6.eq) goto loc_821B0F94;
	// addi r3,r31,3712
	ctx.r3.s64 = ctx.r31.s64 + 3712;
	// bl 0x821c7710
	ctx.lr = 0x821B0E80;
	sub_821C7710(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821b0f94
	if (ctx.cr6.eq) goto loc_821B0F94;
	// lfs f0,3472(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 3472);
	ctx.f0.f64 = double(temp.f32);
	// lbz r11,4608(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4608);
	// fmuls f13,f0,f0
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f12,3468(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 3468);
	ctx.f12.f64 = double(temp.f32);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// addi r27,r31,4700
	ctx.r27.s64 = ctx.r31.s64 + 4700;
	// addi r10,r11,131
	ctx.r10.s64 = ctx.r11.s64 + 131;
	// addi r26,r31,3672
	ctx.r26.s64 = ctx.r31.s64 + 3672;
	// mulli r11,r10,28
	ctx.r11.s64 = ctx.r10.s64 * 28;
	// fmadds f11,f12,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f13.f64));
	// add r25,r11,r31
	ctx.r25.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r20,0
	ctx.r20.s64 = 0;
	// addi r24,r31,3680
	ctx.r24.s64 = ctx.r31.s64 + 3680;
	// lfs f26,24496(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24496);
	ctx.f26.f64 = double(temp.f32);
	// fsqrts f31,f11
	ctx.f31.f64 = double(float(sqrt(ctx.f11.f64)));
loc_821B0EC8:
	// lfs f0,0(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lfs f13,0(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f25,f0,f13
	ctx.f25.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,4(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f24,f12,f11
	ctx.f24.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// bl 0x822d4ac8
	ctx.lr = 0x821B0EE8;
	sub_822D4AC8(ctx, base);
	// lfs f10,4(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f31,f31,f26
	ctx.f31.f64 = double(float(ctx.f31.f64 * ctx.f26.f64));
	// lfs f9,0(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f25,f10
	ctx.f8.f64 = double(float(ctx.f25.f64 * ctx.f10.f64));
	// fmuls f7,f9,f24
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f24.f64));
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f8,f7
	ctx.cr6.compare(ctx.f8.f64, ctx.f7.f64);
	// bge cr6,0x821b0f0c
	if (!ctx.cr6.lt) goto loc_821B0F0C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_821B0F0C:
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821aa6a0
	ctx.lr = 0x821B0F1C;
	sub_821AA6A0(ctx, base);
	// stfs f30,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// stfs f29,4(r29)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r29.u32 + 4, temp.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stfs f28,8(r29)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r29.u32 + 8, temp.u32);
	// stw r22,3456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3456, ctx.r22.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stfs f27,3460(r31)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3460, temp.u32);
	// sth r23,3448(r31)
	PPC_STORE_U16(ctx.r31.u32 + 3448, ctx.r23.u16);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r21,3452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3452, ctx.r21.u32);
	// lfs f0,232(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// lfs f13,236(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 236);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// lfs f12,240(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 240);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// bl 0x821d1450
	ctx.lr = 0x821B0F60;
	sub_821D1450(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821b0e00
	if (ctx.cr6.eq) goto loc_821B0E00;
	// lbz r11,3688(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3688);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821b0f94
	if (!ctx.cr6.eq) goto loc_821B0F94;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,3668(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3668);
	// bl 0x821aa628
	ctx.lr = 0x821B0F80;
	sub_821AA628(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821b0f94
	if (ctx.cr6.eq) goto loc_821B0F94;
	// addi r20,r20,1
	ctx.r20.s64 = ctx.r20.s64 + 1;
	// cmpwi cr6,r20,2
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 2, ctx.xer);
	// blt cr6,0x821b0ec8
	if (ctx.cr6.lt) goto loc_821B0EC8;
loc_821B0F94:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,312(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 312);
	// rlwinm r11,r11,0,27,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x18;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821b0fd0
	if (ctx.cr6.eq) goto loc_821B0FD0;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x821b0fbc
	if (ctx.cr6.eq) goto loc_821B0FBC;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bne cr6,0x821b0fc0
	if (!ctx.cr6.eq) goto loc_821B0FC0;
loc_821B0FBC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821B0FC0:
	// lwz r11,312(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 312);
	// rlwinm r9,r11,0,29,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFE7;
	// stw r9,312(r10)
	PPC_STORE_U32(ctx.r10.u32 + 312, ctx.r9.u32);
	// b 0x821b0fd4
	goto loc_821B0FD4;
loc_821B0FD0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821B0FD4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,312(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 312);
	// or r9,r10,r28
	ctx.r9.u64 = ctx.r10.u64 | ctx.r28.u64;
	// stw r9,312(r11)
	PPC_STORE_U32(ctx.r11.u32 + 312, ctx.r9.u32);
	// lwz r8,3668(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3668);
	// cmpwi cr6,r8,2047
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 2047, ctx.xer);
	// beq cr6,0x821b111c
	if (ctx.cr6.eq) goto loc_821B111C;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821b105c
	if (!ctx.cr6.eq) goto loc_821B105C;
	// addi r3,r31,3712
	ctx.r3.s64 = ctx.r31.s64 + 3712;
	// bl 0x821c7660
	ctx.lr = 0x821B1000;
	sub_821C7660(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821b105c
	if (!ctx.cr6.eq) goto loc_821B105C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,3468
	ctx.r3.s64 = ctx.r31.s64 + 3468;
	// bl 0x822d4b60
	ctx.lr = 0x821B1014;
	sub_822D4B60(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f12,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,232(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f0,f10
	ctx.f9.f64 = double(float(ctx.f0.f64 - ctx.f10.f64));
	// lfs f8,236(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 236);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f13,f8
	ctx.f7.f64 = double(float(ctx.f13.f64 - ctx.f8.f64));
	// lfs f0,5880(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5880);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f6,f1,f0
	ctx.f6.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fmuls f5,f12,f9
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f9.f64));
	// fmadds f4,f11,f7,f5
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f7.f64 + ctx.f5.f64));
	// fcmpu cr6,f4,f6
	ctx.cr6.compare(ctx.f4.f64, ctx.f6.f64);
	// blt cr6,0x821b105c
	if (ctx.cr6.lt) goto loc_821B105C;
	// li r3,0
	ctx.r3.s64 = 0;
loc_821B105C:
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// mulli r8,r19,624
	ctx.r8.s64 = ctx.r19.s64 * 624;
	// addi r7,r11,9624
	ctx.r7.s64 = ctx.r11.s64 + 9624;
	// lwz r11,4(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// add r10,r8,r11
	ctx.r10.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lwz r10,272(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 272);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821b10dc
	if (!ctx.cr6.eq) goto loc_821B10DC;
	// lwz r9,3668(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3668);
	// mulli r9,r9,624
	ctx.r9.s64 = ctx.r9.s64 * 624;
	// add r6,r9,r11
	ctx.r6.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r5,272(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 272);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x821b10d4
	if (!ctx.cr6.eq) goto loc_821B10D4;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821b111c
	if (ctx.cr6.eq) goto loc_821B111C;
	// lbz r11,4608(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4608);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// extsb r30,r11
	ctx.r30.s64 = ctx.r11.s8;
	// bl 0x821af7f8
	ctx.lr = 0x821B10B0;
	sub_821AF7F8(ctx, base);
	// lbz r10,4608(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4608);
	// extsb r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	// cmpw cr6,r30,r9
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x821b111c
	if (!ctx.cr6.eq) goto loc_821B111C;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// addi r12,r1,-112
	ctx.r12.s64 = ctx.r1.s64 + -112;
	// bl 0x823de064
	ctx.lr = 0x821B10D0;
	__restfpr_24(ctx, base);
	// b 0x823ddfa4
	__restgprlr_19(ctx, base);
	return;
loc_821B10D4:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821b10e4
	if (ctx.cr6.eq) goto loc_821B10E4;
loc_821B10DC:
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
	// b 0x821b10e8
	goto loc_821B10E8;
loc_821B10E4:
	// lwz r11,3668(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3668);
loc_821B10E8:
	// lbz r10,4610(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4610);
	// sth r11,4614(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4614, ctx.r11.u16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821b1100
	if (!ctx.cr6.eq) goto loc_821B1100;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stb r11,4610(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4610, ctx.r11.u8);
loc_821B1100:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821b1134
	if (ctx.cr6.eq) goto loc_821B1134;
	// lwz r11,4(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lwz r10,272(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 272);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821b1120
	if (ctx.cr6.eq) goto loc_821B1120;
loc_821B111C:
	// stw r19,3668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3668, ctx.r19.u32);
loc_821B1120:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// addi r12,r1,-112
	ctx.r12.s64 = ctx.r1.s64 + -112;
	// bl 0x823de064
	ctx.lr = 0x821B1130;
	__restfpr_24(ctx, base);
	// b 0x823ddfa4
	__restgprlr_19(ctx, base);
	return;
loc_821B1134:
	// li r11,2047
	ctx.r11.s64 = 2047;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,3668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3668, ctx.r11.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// addi r12,r1,-112
	ctx.r12.s64 = ctx.r1.s64 + -112;
	// bl 0x823de064
	ctx.lr = 0x821B114C;
	__restfpr_24(ctx, base);
	// b 0x823ddfa4
	__restgprlr_19(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821B0D98) {
	__imp__sub_821B0D98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B1150) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x821B1158;
	__savegprlr_29(ctx, base);
	// stfd f29,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f29.u64);
	// stfd f30,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f30.u64);
	// stfd f31,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-688(r1)
	ea = -688 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,3488(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3488);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lhz r29,3448(r3)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r3.u32 + 3448);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x821b1208
	if (ctx.cr6.eq) goto loc_821B1208;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x821b1208
	if (ctx.cr6.eq) goto loc_821B1208;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lfs f1,248(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 248);
	ctx.f1.f64 = double(temp.f32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x822d52c8
	ctx.lr = 0x821B1194;
	sub_822D52C8(ctx, base);
	// lfs f12,3468(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 3468);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,3472(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 3472);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r31,3468
	ctx.r11.s64 = ctx.r31.s64 + 3468;
	// lfs f11,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f11.f64 = double(temp.f32);
	// fneg f13,f0
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fmuls f9,f11,f12
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// lfs f10,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f10.f64 = double(temp.f32);
	// lfs f8,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f10,f12
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// lfs f4,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f5,f8,f12
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f12.f64));
	// lfs f6,3476(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 3476);
	ctx.f6.f64 = double(temp.f32);
	// stfs f9,3468(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3468, temp.u32);
	// stfs f7,3472(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3472, temp.u32);
	// stfs f5,3476(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3476, temp.u32);
	// lfs f1,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f1.f64 = double(temp.f32);
	// fmadds f2,f4,f13,f9
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f13.f64 + ctx.f9.f64));
	// stfs f2,3468(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3468, temp.u32);
	// fmr f3,f9
	ctx.f3.f64 = ctx.f9.f64;
	// lfs f0,3472(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 3472);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f12,f1,f13,f0
	ctx.f12.f64 = double(float(ctx.f1.f64 * ctx.f13.f64 + ctx.f0.f64));
	// lfs f11,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f11.f64 = double(temp.f32);
	// stfs f12,3472(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3472, temp.u32);
	// lfs f10,3476(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 3476);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f9,f11,f13,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f13.f64 + ctx.f10.f64));
	// stfs f9,3476(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3476, temp.u32);
	// fadds f7,f6,f9
	ctx.f7.f64 = double(float(ctx.f6.f64 + ctx.f9.f64));
	// stfs f7,3476(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3476, temp.u32);
	// fmr f8,f9
	ctx.f8.f64 = ctx.f9.f64;
loc_821B1208:
	// lis r11,-31834
	ctx.r11.s64 = -2086273024;
	// addi r30,r31,3712
	ctx.r30.s64 = ctx.r31.s64 + 3712;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,-16972(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16972);
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,3492(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3492, temp.u32);
	// bl 0x821c71f8
	ctx.lr = 0x821B1224;
	sub_821C71F8(ctx, base);
	// lwz r10,4680(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4680);
	// lwz r9,3412(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3412);
	// rlwinm r8,r10,0,18,16
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFBFFF;
	// stb r3,3690(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3690, ctx.r3.u8);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// stw r8,4680(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4680, ctx.r8.u32);
	// bne cr6,0x821b126c
	if (!ctx.cr6.eq) goto loc_821B126C;
	// lbz r11,3404(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3404);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b126c
	if (ctx.cr6.eq) goto loc_821B126C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821c6fc0
	ctx.lr = 0x821B1254;
	sub_821C6FC0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b126c
	if (ctx.cr6.eq) goto loc_821B126C;
	// lhz r11,4824(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4824);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b12c8
	if (ctx.cr6.eq) goto loc_821B12C8;
loc_821B126C:
	// lhz r11,4824(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4824);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b128c
	if (ctx.cr6.eq) goto loc_821B128C;
	// lwz r11,3488(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3488);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x821b128c
	if (ctx.cr6.eq) goto loc_821B128C;
	// lbz r11,5038(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5038);
loc_821B128C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b134c
	if (ctx.cr6.eq) goto loc_821B134C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821aea98
	ctx.lr = 0x821B12A0;
	sub_821AEA98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821b15bc
	if (!ctx.cr6.eq) goto loc_821B15BC;
	// lwz r11,3412(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3412);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x821b1388
	if (!ctx.cr6.eq) goto loc_821B1388;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821c6fc0
	ctx.lr = 0x821B12BC;
	sub_821C6FC0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b1388
	if (ctx.cr6.eq) goto loc_821B1388;
loc_821B12C8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821b0d98
	ctx.lr = 0x821B12D0;
	sub_821B0D98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821b1340
	if (ctx.cr6.eq) goto loc_821B1340;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,4648(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4648);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,7540(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7540);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x821b1314
	if (!ctx.cr6.gt) goto loc_821B1314;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,3476(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 3476);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x821b1314
	if (!ctx.cr6.gt) goto loc_821B1314;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lfs f0,3432(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 3432);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,240(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 240);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x821b1340
	if (!ctx.cr6.gt) goto loc_821B1340;
loc_821B1314:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lbz r11,105(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 105);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b15bc
	if (ctx.cr6.eq) goto loc_821B15BC;
	// bl 0x8223fcb0
	ctx.lr = 0x821B1328;
	sub_8223FCB0(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8223fb90
	ctx.lr = 0x821B1330;
	sub_8223FB90(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lbz r10,105(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 105);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821b15bc
	if (ctx.cr6.eq) goto loc_821B15BC;
loc_821B1340:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821aa958
	ctx.lr = 0x821B1348;
	sub_821AA958(ctx, base);
	// b 0x821b15bc
	goto loc_821B15BC;
loc_821B134C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r31,3424
	ctx.r3.s64 = ctx.r31.s64 + 3424;
	// lwz r10,312(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 312);
	// rlwinm r9,r10,0,29,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFE7;
	// stw r9,312(r11)
	PPC_STORE_U32(ctx.r11.u32 + 312, ctx.r9.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lfs f0,232(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,3424(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3424, temp.u32);
	// lfs f13,236(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 236);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,3428(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3428, temp.u32);
	// lfs f12,240(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 240);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,3432(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3432, temp.u32);
	// bl 0x821d1450
	ctx.lr = 0x821B1380;
	sub_821D1450(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821b15bc
	if (!ctx.cr6.eq) goto loc_821B15BC;
loc_821B1388:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// addi r3,r11,232
	ctx.r3.s64 = ctx.r11.s64 + 232;
	// li r9,-1
	ctx.r9.s64 = -1;
	// li r8,64
	ctx.r8.s64 = 64;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// lfs f2,3096(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3096);
	ctx.f2.f64 = double(temp.f32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lfs f1,25344(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 25344);
	ctx.f1.f64 = double(temp.f32);
	// lfs f31,232(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,236(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 236);
	ctx.f30.f64 = double(temp.f32);
	// lfs f29,240(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 240);
	ctx.f29.f64 = double(temp.f32);
	// bl 0x82234bd8
	ctx.lr = 0x821B13C0;
	sub_82234BD8(ctx, base);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// lfs f0,6912(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 6912);
	ctx.f0.f64 = double(temp.f32);
	// blt cr6,0x821b14d8
	if (ctx.cr6.lt) goto loc_821B14D8;
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
	// addi r10,r1,120
	ctx.r10.s64 = ctx.r1.s64 + 120;
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_821B13F0:
	// lwz r11,-8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8);
	// lfs f13,24(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f13,f30
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f30.f64));
	// lfs f11,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f11,f29
	ctx.f10.f64 = double(float(ctx.f11.f64 - ctx.f29.f64));
	// lfs f9,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f9,f31
	ctx.f8.f64 = double(float(ctx.f9.f64 - ctx.f31.f64));
	// fmuls f7,f12,f12
	ctx.f7.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f6,f10,f10,f7
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f10.f64 + ctx.f7.f64));
	// fmadds f13,f8,f8,f6
	ctx.f13.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 + ctx.f6.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x821b1428
	if (ctx.cr6.lt) goto loc_821B1428;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
loc_821B1428:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lfs f13,24(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f13,f30
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f30.f64));
	// lfs f11,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f11,f29
	ctx.f10.f64 = double(float(ctx.f11.f64 - ctx.f29.f64));
	// lfs f9,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f9,f31
	ctx.f8.f64 = double(float(ctx.f9.f64 - ctx.f31.f64));
	// fmuls f7,f12,f12
	ctx.f7.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f6,f10,f10,f7
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f10.f64 + ctx.f7.f64));
	// fmadds f13,f8,f8,f6
	ctx.f13.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 + ctx.f6.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x821b1460
	if (ctx.cr6.lt) goto loc_821B1460;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
loc_821B1460:
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lfs f13,24(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f13,f30
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f30.f64));
	// lfs f11,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f11,f29
	ctx.f10.f64 = double(float(ctx.f11.f64 - ctx.f29.f64));
	// lfs f9,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f9,f31
	ctx.f8.f64 = double(float(ctx.f9.f64 - ctx.f31.f64));
	// fmuls f7,f12,f12
	ctx.f7.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f6,f10,f10,f7
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f10.f64 + ctx.f7.f64));
	// fmadds f13,f8,f8,f6
	ctx.f13.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 + ctx.f6.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x821b1498
	if (ctx.cr6.lt) goto loc_821B1498;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
loc_821B1498:
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// lfs f13,24(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f13,f30
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f30.f64));
	// lfs f11,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f11,f29
	ctx.f10.f64 = double(float(ctx.f11.f64 - ctx.f29.f64));
	// lfs f9,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f9,f31
	ctx.f8.f64 = double(float(ctx.f9.f64 - ctx.f31.f64));
	// fmuls f7,f12,f12
	ctx.f7.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f6,f10,f10,f7
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f10.f64 + ctx.f7.f64));
	// fmadds f13,f8,f8,f6
	ctx.f13.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 + ctx.f6.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x821b14d0
	if (ctx.cr6.lt) goto loc_821B14D0;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
loc_821B14D0:
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// bdnz 0x821b13f0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821B13F0;
loc_821B14D8:
	// cmpw cr6,r8,r3
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r3.s32, ctx.xer);
	// bge cr6,0x821b1534
	if (!ctx.cr6.lt) goto loc_821B1534;
	// subf r7,r8,r3
	ctx.r7.s64 = ctx.r3.s64 - ctx.r8.s64;
	// rlwinm r10,r8,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_821B14F4:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lfs f13,24(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f13,f30
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f30.f64));
	// lfs f11,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f11,f29
	ctx.f10.f64 = double(float(ctx.f11.f64 - ctx.f29.f64));
	// lfs f9,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f9,f31
	ctx.f8.f64 = double(float(ctx.f9.f64 - ctx.f31.f64));
	// fmuls f7,f12,f12
	ctx.f7.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f6,f10,f10,f7
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f10.f64 + ctx.f7.f64));
	// fmadds f13,f8,f8,f6
	ctx.f13.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 + ctx.f6.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x821b152c
	if (ctx.cr6.lt) goto loc_821B152C;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
loc_821B152C:
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x821b14f4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821B14F4;
loc_821B1534:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821b15bc
	if (ctx.cr6.eq) goto loc_821B15BC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lfs f0,28(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f13,240(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 240);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f13,6016(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6016);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,5484(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5484);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x821b156c
	if (!ctx.cr6.gt) goto loc_821B156C;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// b 0x821b1594
	goto loc_821B1594;
loc_821B156C:
	// fcmpu cr6,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x821b1594
	if (!ctx.cr6.lt) goto loc_821B1594;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f13,25340(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 25340);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x821b1590
	if (!ctx.cr6.lt) goto loc_821B1590;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f0,25336(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 25336);
	ctx.f0.f64 = double(temp.f32);
	// b 0x821b1594
	goto loc_821B1594;
loc_821B1590:
	// fmr f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f12.f64;
loc_821B1594:
	// lfs f13,232(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,3424(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3424, temp.u32);
	// lfs f11,236(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 236);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,3428(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3428, temp.u32);
	// lfs f10,240(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 240);
	ctx.f10.f64 = double(temp.f32);
	// fadds f8,f0,f10
	ctx.f8.f64 = double(float(ctx.f0.f64 + ctx.f10.f64));
	// stfs f10,3432(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3432, temp.u32);
	// fmr f9,f10
	ctx.f9.f64 = ctx.f10.f64;
	// stfs f8,3432(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3432, temp.u32);
	// stfs f12,3444(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3444, temp.u32);
loc_821B15BC:
	// lbz r11,3525(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3525);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b15d4
	if (ctx.cr6.eq) goto loc_821B15D4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,8
	ctx.r10.s64 = 8;
	// stb r10,89(r11)
	PPC_STORE_U8(ctx.r11.u32 + 89, ctx.r10.u8);
loc_821B15D4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lfs f0,3424(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 3424);
	ctx.f0.f64 = double(temp.f32);
	// li r10,0
	ctx.r10.s64 = 0;
	// clrlwi r9,r29,16
	ctx.r9.u64 = ctx.r29.u32 & 0xFFFF;
	// stfs f0,232(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 232, temp.u32);
	// lfs f13,3428(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 3428);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,236(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 236, temp.u32);
	// lfs f12,3432(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 3432);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,240(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 240, temp.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lhz r7,3448(r31)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r31.u32 + 3448);
	// stw r10,3488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3488, ctx.r10.u32);
	// sth r7,130(r8)
	PPC_STORE_U16(ctx.r8.u32 + 130, ctx.r7.u16);
	// lhz r6,3448(r31)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r31.u32 + 3448);
	// cmplw cr6,r9,r6
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x821b162c
	if (ctx.cr6.eq) goto loc_821B162C;
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r10,r11,-25976
	ctx.r10.s64 = ctx.r11.s64 + -25976;
	// lhz r4,532(r10)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r10.u32 + 532);
	// bl 0x82229da8
	ctx.lr = 0x821B162C;
	sub_82229DA8(ctx, base);
loc_821B162C:
	// addi r1,r1,688
	ctx.r1.s64 = ctx.r1.s64 + 688;
	// lfd f29,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f30,-48(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821B1150) {
	__imp__sub_821B1150(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B1640) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x821B1648;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r30,r3,4916
	ctx.r30.s64 = ctx.r3.s64 + 4916;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r29,r11,232
	ctx.r29.s64 = ctx.r11.s64 + 232;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821aae88
	ctx.lr = 0x821B1668;
	sub_821AAE88(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821b1680
	if (!ctx.cr6.eq) goto loc_821B1680;
loc_821B1674:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_821B1680:
	// addi r3,r31,3712
	ctx.r3.s64 = ctx.r31.s64 + 3712;
	// bl 0x821c6fc0
	ctx.lr = 0x821B1688;
	sub_821C6FC0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821b16b4
	if (!ctx.cr6.eq) goto loc_821B16B4;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821b170c
	if (ctx.cr6.eq) goto loc_821B170C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821aee48
	ctx.lr = 0x821B16AC;
	sub_821AEE48(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_821B16B4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,4616
	ctx.r3.s64 = ctx.r31.s64 + 4616;
	// bl 0x821aae88
	ctx.lr = 0x821B16C0;
	sub_821AAE88(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b1674
	if (ctx.cr6.eq) goto loc_821B1674;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821b170c
	if (ctx.cr6.eq) goto loc_821B170C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ae080
	ctx.lr = 0x821B16E4;
	sub_821AE080(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821b170c
	if (!ctx.cr6.eq) goto loc_821B170C;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,92(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// addi r4,r11,20
	ctx.r4.s64 = ctx.r11.s64 + 20;
	// bl 0x821ab0a8
	ctx.lr = 0x821B1704;
	sub_821AB0A8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_821B170C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821B1640) {
	__imp__sub_821B1640(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B1718) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x821B1720;
	__savegprlr_26(ctx, base);
	// stfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f30.u64);
	// stfd f31,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r26,0
	ctx.r26.s64 = 0;
	// addi r27,r3,3712
	ctx.r27.s64 = ctx.r3.s64 + 3712;
	// stw r26,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r26.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r26,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r26.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821c6fc0
	ctx.lr = 0x821B1748;
	sub_821C6FC0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lfs f30,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f30.f64 = double(temp.f32);
	// beq cr6,0x821b17a8
	if (ctx.cr6.eq) goto loc_821B17A8;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821c7180
	ctx.lr = 0x821B1764;
	sub_821C7180(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821b179c
	if (!ctx.cr6.eq) goto loc_821B179C;
	// addi r4,r31,4916
	ctx.r4.s64 = ctx.r31.s64 + 4916;
	// addi r3,r31,4616
	ctx.r3.s64 = ctx.r31.s64 + 4616;
	// bl 0x821aae88
	ctx.lr = 0x821B177C;
	sub_821AAE88(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b179c
	if (ctx.cr6.eq) goto loc_821B179C;
loc_821B1788:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_821B179C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821aba40
	ctx.lr = 0x821B17A4;
	sub_821ABA40(ctx, base);
	// b 0x821b17d0
	goto loc_821B17D0;
loc_821B17A8:
	// lfs f0,4996(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4996);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bne cr6,0x821b17d0
	if (!ctx.cr6.eq) goto loc_821B17D0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r31,4916
	ctx.r4.s64 = ctx.r31.s64 + 4916;
	// addi r3,r11,232
	ctx.r3.s64 = ctx.r11.s64 + 232;
	// bl 0x821aae88
	ctx.lr = 0x821B17C4;
	sub_821AAE88(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821b1788
	if (!ctx.cr6.eq) goto loc_821B1788;
loc_821B17D0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,4928(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4928);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4780(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4780);
	ctx.f12.f64 = double(temp.f32);
	// fabs f31,f12
	ctx.f31.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// lfs f0,7932(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7932);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// ble cr6,0x821b17f4
	if (!ctx.cr6.gt) goto loc_821B17F4;
	// fmr f31,f0
	ctx.f31.f64 = ctx.f0.f64;
loc_821B17F4:
	// fcmpu cr6,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f30.f64);
	// bgt cr6,0x821b1824
	if (ctx.cr6.gt) goto loc_821B1824;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,4916
	ctx.r4.s64 = ctx.r31.s64 + 4916;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821af5b0
	ctx.lr = 0x821B1814;
	sub_821AF5B0(ctx, base);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_821B1824:
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821db778
	ctx.lr = 0x821B1830;
	sub_821DB778(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8223fcb0
	ctx.lr = 0x821B1838;
	sub_8223FCB0(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8223fc50
	ctx.lr = 0x821B1844;
	sub_8223FC50(ctx, base);
	// stw r3,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821b1864
	if (!ctx.cr6.eq) goto loc_821B1864;
loc_821B1850:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_821B1864:
	// addi r30,r31,4916
	ctx.r30.s64 = ctx.r31.s64 + 4916;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82238eb8
	ctx.lr = 0x821B1874;
	sub_82238EB8(ctx, base);
	// stw r3,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821b1850
	if (ctx.cr6.eq) goto loc_821B1850;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821aeea8
	ctx.lr = 0x821B1888;
	sub_821AEEA8(ctx, base);
	// lfs f0,4640(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4640);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,4780(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4780);
	ctx.f12.f64 = double(temp.f32);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// lfs f13,4644(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4644);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f12,f30
	ctx.cr6.compare(ctx.f12.f64, ctx.f30.f64);
	// bge cr6,0x821b18a4
	if (!ctx.cr6.lt) goto loc_821B18A4;
	// fneg f31,f31
	ctx.f31.u64 = ctx.f31.u64 ^ 0x8000000000000000;
loc_821B18A4:
	// lfs f12,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lfs f11,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f10,f13,f31,f12
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f31.f64 + ctx.f12.f64));
	// lfs f9,4924(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4924);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f8,f0,f31,f11
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f31.f64 + ctx.f11.f64));
	// stfs f10,96(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stfs f9,104(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// stfs f8,100(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x821cd188
	ctx.lr = 0x821B18D8;
	sub_821CD188(ctx, base);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// addi r29,r3,20
	ctx.r29.s64 = ctx.r3.s64 + 20;
	// lfs f1,5876(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 5876);
	ctx.f1.f64 = double(temp.f32);
	// lis r6,130
	ctx.r6.s64 = 8519680;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// ori r6,r6,21
	ctx.r6.u64 = ctx.r6.u64 | 21;
	// li r5,2047
	ctx.r5.s64 = 2047;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821c8b88
	ctx.lr = 0x821B190C;
	sub_821C8B88(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821aae88
	ctx.lr = 0x821B1918;
	sub_821AAE88(ctx, base);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x821b192c
	if (ctx.cr6.eq) goto loc_821B192C;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// b 0x821b1980
	goto loc_821B1980;
loc_821B192C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821aae88
	ctx.lr = 0x821B1938;
	sub_821AAE88(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b1960
	if (ctx.cr6.eq) goto loc_821B1960;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f13,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f12,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// b 0x821b197c
	goto loc_821B197C;
loc_821B1960:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821a96b8
	ctx.lr = 0x821B1968;
	sub_821A96B8(ctx, base);
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
loc_821B197C:
	// stfs f12,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
loc_821B1980:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x821c6a48
	ctx.lr = 0x821B198C;
	sub_821C6A48(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lbz r7,4722(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4722);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r8,r11,232
	ctx.r8.s64 = ctx.r11.s64 + 232;
	// stw r10,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// stw r9,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r9.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// stw r8,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r8.u32);
	// beq cr6,0x821b19c4
	if (ctx.cr6.eq) goto loc_821B19C4;
	// lbz r11,3153(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3153);
	// stw r10,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b19c8
	if (ctx.cr6.eq) goto loc_821B19C8;
loc_821B19C4:
	// stw r26,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r26.u32);
loc_821B19C8:
	// lwz r11,192(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821b19e4
	if (ctx.cr6.eq) goto loc_821B19E4;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// bl 0x821cd2a8
	ctx.lr = 0x821B19E0;
	sub_821CD2A8(ctx, base);
	// b 0x821b19e8
	goto loc_821B19E8;
loc_821B19E4:
	// bl 0x821c8948
	ctx.lr = 0x821B19E8;
	sub_821C8948(ctx, base);
loc_821B19E8:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821c6fc0
	ctx.lr = 0x821B19F0;
	sub_821C6FC0(ctx, base);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821B1718) {
	__imp__sub_821B1718(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B1A00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x821B1A08;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r29,r3,3712
	ctx.r29.s64 = ctx.r3.s64 + 3712;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821c6fc0
	ctx.lr = 0x821B1A1C;
	sub_821C6FC0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821b1a54
	if (!ctx.cr6.eq) goto loc_821B1A54;
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// lwz r10,4748(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4748);
	// addi r9,r11,9624
	ctx.r9.s64 = ctx.r11.s64 + 9624;
	// lwz r11,52(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 52);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x821b1a54
	if (!ctx.cr6.lt) goto loc_821B1A54;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4768(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4768, ctx.r11.u32);
	// stw r11,4772(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4772, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_821B1A54:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821b1718
	ctx.lr = 0x821B1A5C;
	sub_821B1718(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821c6fc0
	ctx.lr = 0x821B1A68;
	sub_821C6FC0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821b1a90
	if (!ctx.cr6.eq) goto loc_821B1A90;
	// clrlwi r10,r30,24
	ctx.r10.u64 = ctx.r30.u32 & 0xFF;
	// stw r11,4768(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4768, ctx.r11.u32);
	// stw r11,4772(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4772, ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821b1a90
	if (!ctx.cr6.eq) goto loc_821B1A90;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ab1d0
	ctx.lr = 0x821B1A90;
	sub_821AB1D0(ctx, base);
loc_821B1A90:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821B1A00) {
	__imp__sub_821B1A00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B1A98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x821B1AA0;
	__savegprlr_25(ctx, base);
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x823de028
	ctx.lr = 0x821B1AA8;
	__savefpr_28(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r28,r3,3712
	ctx.r28.s64 = ctx.r3.s64 + 3712;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// bl 0x821c6fc0
	ctx.lr = 0x821B1AC8;
	sub_821C6FC0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821b1b0c
	if (!ctx.cr6.eq) goto loc_821B1B0C;
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// lwz r10,4748(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4748);
	// addi r9,r11,9624
	ctx.r9.s64 = ctx.r11.s64 + 9624;
	// lwz r11,52(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 52);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x821b1b0c
	if (!ctx.cr6.lt) goto loc_821B1B0C;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r27,4768(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4768, ctx.r27.u32);
	// stw r27,4772(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4772, ctx.r27.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x823de074
	ctx.lr = 0x821B1B08;
	__restfpr_28(ctx, base);
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_821B1B0C:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lfs f31,4796(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4796);
	ctx.f31.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f30,4800(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4800);
	ctx.f30.f64 = double(temp.f32);
	// lfs f29,4804(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4804);
	ctx.f29.f64 = double(temp.f32);
	// addi r30,r31,4796
	ctx.r30.s64 = ctx.r31.s64 + 4796;
	// lfs f28,4792(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4792);
	ctx.f28.f64 = double(temp.f32);
	// bl 0x821ab2d8
	ctx.lr = 0x821B1B2C;
	sub_821AB2D8(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r11,232
	ctx.r3.s64 = ctx.r11.s64 + 232;
	// lfs f1,24828(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24828);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821ab030
	ctx.lr = 0x821B1B44;
	sub_821AB030(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821b1bdc
	if (!ctx.cr6.eq) goto loc_821B1BDC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,4792(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4792);
	ctx.f13.f64 = double(temp.f32);
	// li r27,0
	ctx.r27.s64 = 0;
	// lfs f0,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x821b1b6c
	if (!ctx.cr6.gt) goto loc_821B1B6C;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
loc_821B1B6C:
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821af5b0
	ctx.lr = 0x821B1B84;
	sub_821AF5B0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821c6fc0
	ctx.lr = 0x821B1B90;
	sub_821C6FC0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821b1bdc
	if (!ctx.cr6.eq) goto loc_821B1BDC;
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// stw r27,4768(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4768, ctx.r27.u32);
	// stw r27,4772(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4772, ctx.r27.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821b1bb8
	if (!ctx.cr6.eq) goto loc_821B1BB8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ab1d0
	ctx.lr = 0x821B1BB8;
	sub_821AB1D0(ctx, base);
loc_821B1BB8:
	// stfs f31,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stfs f30,4(r30)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// stfs f29,8(r30)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// stfs f28,4792(r31)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4792, temp.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x823de074
	ctx.lr = 0x821B1BD8;
	__restfpr_28(ctx, base);
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_821B1BDC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x823de074
	ctx.lr = 0x821B1BEC;
	__restfpr_28(ctx, base);
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821B1A98) {
	__imp__sub_821B1A98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B1BF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x821B1BF8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// lhz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b1ec8
	if (ctx.cr6.eq) goto loc_821B1EC8;
	// lis r9,-32052
	ctx.r9.s64 = -2100559872;
	// mulli r10,r11,624
	ctx.r10.s64 = ctx.r11.s64 * 624;
	// addi r11,r9,26552
	ctx.r11.s64 = ctx.r9.s64 + 26552;
	// addi r11,r11,272
	ctx.r11.s64 = ctx.r11.s64 + 272;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r29,-624(r8)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r8.u32 + -624);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x821b1ec8
	if (ctx.cr6.eq) goto loc_821B1EC8;
	// addi r30,r3,3712
	ctx.r30.s64 = ctx.r3.s64 + 3712;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821c6fc0
	ctx.lr = 0x821B1C44;
	sub_821C6FC0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b1ec8
	if (ctx.cr6.eq) goto loc_821B1EC8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ab4f8
	ctx.lr = 0x821B1C5C;
	sub_821AB4F8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b1ec8
	if (ctx.cr6.eq) goto loc_821B1EC8;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x821b1c8c
	if (ctx.cr6.eq) goto loc_821B1C8C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r11,232
	ctx.r3.s64 = ctx.r11.s64 + 232;
	// bl 0x821aad88
	ctx.lr = 0x821B1C80;
	sub_821AAD88(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821b1ec8
	if (!ctx.cr6.eq) goto loc_821B1EC8;
loc_821B1C8C:
	// lwz r11,668(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 668);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821b1cb4
	if (ctx.cr6.eq) goto loc_821B1CB4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r31,672
	ctx.r4.s64 = ctx.r31.s64 + 672;
	// addi r3,r11,232
	ctx.r3.s64 = ctx.r11.s64 + 232;
	// bl 0x821aad18
	ctx.lr = 0x821B1CA8;
	sub_821AAD18(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821b1ec8
	if (!ctx.cr6.eq) goto loc_821B1EC8;
loc_821B1CB4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821d91c0
	ctx.lr = 0x821B1CBC;
	sub_821D91C0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b1ec8
	if (ctx.cr6.eq) goto loc_821B1EC8;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821d8f18
	ctx.lr = 0x821B1CD4;
	sub_821D8F18(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b1ec8
	if (ctx.cr6.eq) goto loc_821B1EC8;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lfs f12,928(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 928);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,952(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 952);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r3,r10,232
	ctx.r3.s64 = ctx.r10.s64 + 232;
	// lfs f11,932(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 932);
	ctx.f11.f64 = double(temp.f32);
	// fmr f10,f12
	ctx.f10.f64 = ctx.f12.f64;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// fmr f9,f11
	ctx.f9.f64 = ctx.f11.f64;
	// addi r10,r30,928
	ctx.r10.s64 = ctx.r30.s64 + 928;
	// lfs f8,232(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f0,f12,f13,f7
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f13.f64 + ctx.f7.f64));
	// lfs f6,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmadds f13,f11,f13,f6
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f13.f64 + ctx.f6.f64));
	// lfs f5,236(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 236);
	ctx.f5.f64 = double(temp.f32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f12,5484(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5484);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f0,f0,f8
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f8.f64));
	// fsubs f13,f13,f5
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f5.f64));
	// fmuls f4,f10,f0
	ctx.f4.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmadds f3,f11,f13,f4
	ctx.f3.f64 = double(float(ctx.f11.f64 * ctx.f13.f64 + ctx.f4.f64));
	// fcmpu cr6,f3,f12
	ctx.cr6.compare(ctx.f3.f64, ctx.f12.f64);
	// ble cr6,0x821b1d8c
	if (!ctx.cr6.gt) goto loc_821B1D8C;
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f12,952(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 952);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f12,f12
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f10,f13,f13,f0
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fcmpu cr6,f10,f11
	ctx.cr6.compare(ctx.f10.f64, ctx.f11.f64);
	// bge cr6,0x821b1d8c
	if (!ctx.cr6.lt) goto loc_821B1D8C;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x821b1d80
	if (ctx.cr6.eq) goto loc_821B1D80;
	// lbz r11,5000(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5000);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821b1d80
	if (!ctx.cr6.eq) goto loc_821B1D80;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,5000(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5000, ctx.r11.u8);
	// bl 0x821b0160
	ctx.lr = 0x821B1D80;
	sub_821B0160(ctx, base);
loc_821B1D80:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_821B1D8C:
	// addi r28,r31,4916
	ctx.r28.s64 = ctx.r31.s64 + 4916;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x821aae88
	ctx.lr = 0x821B1D98;
	sub_821AAE88(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b1de0
	if (ctx.cr6.eq) goto loc_821B1DE0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821d91c0
	ctx.lr = 0x821B1DAC;
	sub_821D91C0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b1de0
	if (ctx.cr6.eq) goto loc_821B1DE0;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x821b1d80
	if (ctx.cr6.eq) goto loc_821B1D80;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r4,r27,20
	ctx.r4.s64 = ctx.r27.s64 + 20;
	// addi r3,r11,232
	ctx.r3.s64 = ctx.r11.s64 + 232;
	// bl 0x822d48f0
	ctx.lr = 0x821B1DD0;
	sub_822D48F0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821c7540
	ctx.lr = 0x821B1DD8;
	sub_821C7540(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821b1d80
	if (!ctx.cr6.eq) goto loc_821B1D80;
loc_821B1DE0:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x821b1ec8
	if (ctx.cr6.eq) goto loc_821B1EC8;
	// lbz r11,5000(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5000);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821b1ec8
	if (!ctx.cr6.eq) goto loc_821B1EC8;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,264(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 264);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821b1e20
	if (!ctx.cr6.eq) goto loc_821B1E20;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r11,232
	ctx.r3.s64 = ctx.r11.s64 + 232;
	// bl 0x821aae88
	ctx.lr = 0x821B1E14;
	sub_821AAE88(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821b1ec8
	if (!ctx.cr6.eq) goto loc_821B1EC8;
loc_821B1E20:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,232
	ctx.r4.s64 = ctx.r11.s64 + 232;
	// bl 0x821af128
	ctx.lr = 0x821B1E34;
	sub_821AF128(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b1ec8
	if (ctx.cr6.eq) goto loc_821B1EC8;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,5000(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5000, ctx.r11.u8);
	// bl 0x821b0160
	ctx.lr = 0x821B1E50;
	sub_821B0160(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,92(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b1e94
	if (ctx.cr6.eq) goto loc_821B1E94;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r11,20
	ctx.r3.s64 = ctx.r11.s64 + 20;
	// bl 0x821aae88
	ctx.lr = 0x821B1E6C;
	sub_821AAE88(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b1e94
	if (ctx.cr6.eq) goto loc_821B1E94;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// subf r9,r27,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r27.s64;
	// addic r8,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// subfe r3,r8,r9
	temp.u8 = (~ctx.r8.u32 + ctx.r9.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r8.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_821B1E94:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x821b1eb8
	if (ctx.cr6.eq) goto loc_821B1EB8;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r27,20
	ctx.r3.s64 = ctx.r27.s64 + 20;
	// bl 0x821aae88
	ctx.lr = 0x821B1EA8;
	sub_821AAE88(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x821b1ebc
	if (!ctx.cr6.eq) goto loc_821B1EBC;
loc_821B1EB8:
	// li r11,1
	ctx.r11.s64 = 1;
loc_821B1EBC:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_821B1EC8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821B1BF0) {
	__imp__sub_821B1BF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B1ED4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821B1ED4) {
	__imp__sub_821B1ED4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B1ED8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x821B1EE0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,4611(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4611);
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r26
	ctx.r27.u64 = ctx.r26.u64;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b1f0c
	if (ctx.cr6.eq) goto loc_821B1F0C;
	// addi r3,r3,3712
	ctx.r3.s64 = ctx.r3.s64 + 3712;
	// bl 0x821c6628
	ctx.lr = 0x821B1F08;
	sub_821C6628(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
loc_821B1F0C:
	// addi r30,r31,3712
	ctx.r30.s64 = ctx.r31.s64 + 3712;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821c66c0
	ctx.lr = 0x821B1F18;
	sub_821C66C0(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,672
	ctx.r4.s64 = ctx.r31.s64 + 672;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821af5b0
	ctx.lr = 0x821B1F30;
	sub_821AF5B0(ctx, base);
	// lbz r11,4611(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4611);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b1f4c
	if (ctx.cr6.eq) goto loc_821B1F4C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821c6628
	ctx.lr = 0x821B1F48;
	sub_821C6628(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_821B1F4C:
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b1f74
	if (ctx.cr6.eq) goto loc_821B1F74;
	// cmplw cr6,r27,r29
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x821b1f74
	if (!ctx.cr6.eq) goto loc_821B1F74;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821bb8d0
	ctx.lr = 0x821B1F68;
	sub_821BB8D0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821b1fb0
	if (!ctx.cr6.eq) goto loc_821B1FB0;
loc_821B1F74:
	// lbz r11,4608(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4608);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b1fa0
	if (ctx.cr6.eq) goto loc_821B1FA0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,232
	ctx.r4.s64 = ctx.r11.s64 + 232;
	// bl 0x821c6738
	ctx.lr = 0x821B1F90;
	sub_821C6738(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821c6f10
	ctx.lr = 0x821B1F98;
	sub_821C6F10(ctx, base);
	// stw r26,4756(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4756, ctx.r26.u32);
	// stw r26,4760(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4760, ctx.r26.u32);
loc_821B1FA0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821c88b0
	ctx.lr = 0x821B1FA8;
	sub_821C88B0(ctx, base);
	// stw r26,668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 668, ctx.r26.u32);
	// stw r26,664(r31)
	PPC_STORE_U32(ctx.r31.u32 + 664, ctx.r26.u32);
loc_821B1FB0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821B1ED8) {
	__imp__sub_821B1ED8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B1FB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x821B1FC0;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r25,0
	ctx.r25.s64 = 0;
	// lfs f5,4916(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4916);
	ctx.f5.f64 = double(temp.f32);
	// lfs f7,4920(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4920);
	ctx.f7.f64 = double(temp.f32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f6,4924(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4924);
	ctx.f6.f64 = double(temp.f32);
	// stb r25,5000(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5000, ctx.r25.u8);
	// addi r30,r3,4916
	ctx.r30.s64 = ctx.r3.s64 + 4916;
	// bl 0x821b0160
	ctx.lr = 0x821B1FE4;
	sub_821B0160(ctx, base);
	// li r26,1
	ctx.r26.s64 = 1;
	// lfs f4,4916(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4916);
	ctx.f4.f64 = double(temp.f32);
	// fcmpu cr6,f4,f5
	ctx.cr6.compare(ctx.f4.f64, ctx.f5.f64);
	// bne cr6,0x821b2010
	if (!ctx.cr6.eq) goto loc_821B2010;
	// lfs f0,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f7
	ctx.cr6.compare(ctx.f0.f64, ctx.f7.f64);
	// bne cr6,0x821b2010
	if (!ctx.cr6.eq) goto loc_821B2010;
	// lfs f0,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// fcmpu cr6,f0,f6
	ctx.cr6.compare(ctx.f0.f64, ctx.f6.f64);
	// beq cr6,0x821b2014
	if (ctx.cr6.eq) goto loc_821B2014;
loc_821B2010:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_821B2014:
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r28,r11,-25976
	ctx.r28.s64 = ctx.r11.s64 + -25976;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stb r9,5002(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5002, ctx.r9.u8);
	// beq cr6,0x821b2044
	if (ctx.cr6.eq) goto loc_821B2044;
	// li r5,0
	ctx.r5.s64 = 0;
	// lhz r4,84(r28)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r28.u32 + 84);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82229da8
	ctx.lr = 0x821B2040;
	sub_82229DA8(ctx, base);
	// stb r25,5003(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5003, ctx.r25.u8);
loc_821B2044:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ab800
	ctx.lr = 0x821B204C;
	sub_821AB800(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821b220c
	if (!ctx.cr6.eq) goto loc_821B220C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ae080
	ctx.lr = 0x821B2060;
	sub_821AE080(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b2098
	if (ctx.cr6.eq) goto loc_821B2098;
	// addi r3,r31,3712
	ctx.r3.s64 = ctx.r31.s64 + 3712;
	// bl 0x821c6fc0
	ctx.lr = 0x821B2074;
	sub_821C6FC0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b220c
	if (ctx.cr6.eq) goto loc_821B220C;
loc_821B2080:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821aba40
	ctx.lr = 0x821B2088;
	sub_821ABA40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821dba18
	ctx.lr = 0x821B2090;
	sub_821DBA18(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_821B2098:
	// lwz r29,4(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r30,4936(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4936);
	// lwz r27,92(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + 92);
	// bl 0x821af2a8
	ctx.lr = 0x821B20AC;
	sub_821AF2A8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821b20c4
	if (!ctx.cr6.eq) goto loc_821B20C4;
	// lbz r11,5003(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5003);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b2080
	if (ctx.cr6.eq) goto loc_821B2080;
loc_821B20C4:
	// lwz r11,668(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 668);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821b20f8
	if (ctx.cr6.eq) goto loc_821B20F8;
	// bl 0x821b1ed8
	ctx.lr = 0x821B20D8;
	sub_821B1ED8(ctx, base);
loc_821B20D8:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x821b21a0
	if (!ctx.cr6.eq) goto loc_821B21A0;
loc_821B20E0:
	// addi r3,r31,3712
	ctx.r3.s64 = ctx.r31.s64 + 3712;
	// bl 0x821c6fc0
	ctx.lr = 0x821B20E8;
	sub_821C6FC0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821b21b4
	if (!ctx.cr6.eq) goto loc_821B21B4;
	// b 0x821b21c0
	goto loc_821B21C0;
loc_821B20F8:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821b2164
	if (ctx.cr6.eq) goto loc_821B2164;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x821b1a98
	ctx.lr = 0x821B2110;
	sub_821B1A98(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b2154
	if (ctx.cr6.eq) goto loc_821B2154;
	// lbz r11,5003(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5003);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821b20d8
	if (!ctx.cr6.eq) goto loc_821B20D8;
	// addi r3,r31,3712
	ctx.r3.s64 = ctx.r31.s64 + 3712;
	// bl 0x821c6fc0
	ctx.lr = 0x821B2130;
	sub_821C6FC0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b20d8
	if (ctx.cr6.eq) goto loc_821B20D8;
	// stb r26,5003(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5003, ctx.r26.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// lhz r4,602(r28)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r28.u32 + 602);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82229da8
	ctx.lr = 0x821B2150;
	sub_82229DA8(ctx, base);
	// b 0x821b20d8
	goto loc_821B20D8;
loc_821B2154:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821dba18
	ctx.lr = 0x821B215C;
	sub_821DBA18(ctx, base);
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// b 0x821b20e0
	goto loc_821B20E0;
loc_821B2164:
	// bl 0x821b1a00
	ctx.lr = 0x821B2168;
	sub_821B1A00(ctx, base);
	// addi r3,r31,3712
	ctx.r3.s64 = ctx.r31.s64 + 3712;
	// bl 0x821c6fc0
	ctx.lr = 0x821B2170;
	sub_821C6FC0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b20e0
	if (ctx.cr6.eq) goto loc_821B20E0;
	// lbz r11,5003(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5003);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821b20e0
	if (!ctx.cr6.eq) goto loc_821B20E0;
	// stb r26,5003(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5003, ctx.r26.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// lhz r4,602(r28)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r28.u32 + 602);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82229da8
	ctx.lr = 0x821B219C;
	sub_82229DA8(ctx, base);
	// b 0x821b20e0
	goto loc_821B20E0;
loc_821B21A0:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822386a0
	ctx.lr = 0x821B21AC;
	sub_822386A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821b21c0
	if (ctx.cr6.eq) goto loc_821B21C0;
loc_821B21B4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82240108
	ctx.lr = 0x821B21C0;
	sub_82240108(ctx, base);
loc_821B21C0:
	// lbz r11,5002(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5002);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821b220c
	if (!ctx.cr6.eq) goto loc_821B220C;
	// lwz r11,92(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b21e4
	if (ctx.cr6.eq) goto loc_821B21E4;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// bne cr6,0x821b21e8
	if (!ctx.cr6.eq) goto loc_821B21E8;
loc_821B21E4:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_821B21E8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// stb r11,5002(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5002, ctx.r11.u8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b220c
	if (ctx.cr6.eq) goto loc_821B220C;
	// li r5,0
	ctx.r5.s64 = 0;
	// lhz r4,84(r28)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r28.u32 + 84);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82229da8
	ctx.lr = 0x821B2208;
	sub_82229DA8(ctx, base);
	// stb r25,5003(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5003, ctx.r25.u8);
loc_821B220C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821B1FB8) {
	__imp__sub_821B1FB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B2214) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821B2214) {
	__imp__sub_821B2214(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B2218) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x821B2220;
	__savegprlr_29(ctx, base);
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
	// lwz r10,468(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 468);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821b224c
	if (ctx.cr6.eq) goto loc_821B224C;
	// bl 0x821aba40
	ctx.lr = 0x821B2240;
	sub_821ABA40(ctx, base);
loc_821B2240:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_821B224C:
	// bl 0x821ab970
	ctx.lr = 0x821B2250;
	sub_821AB970(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821b2274
	if (!ctx.cr6.eq) goto loc_821B2274;
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// lwz r10,4752(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4752);
	// addi r9,r11,9624
	ctx.r9.s64 = ctx.r11.s64 + 9624;
	// lwz r11,52(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 52);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x821b2240
	if (ctx.cr6.lt) goto loc_821B2240;
loc_821B2274:
	// lbz r11,5005(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5005);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b2294
	if (ctx.cr6.eq) goto loc_821B2294;
	// bl 0x821b1fb8
	ctx.lr = 0x821B2288;
	sub_821B1FB8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_821B2294:
	// bl 0x821d8188
	ctx.lr = 0x821B2298;
	sub_821D8188(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821b22b0
	if (!ctx.cr6.eq) goto loc_821B22B0;
	// stb r29,5000(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5000, ctx.r29.u8);
loc_821B22B0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f5,4916(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4916);
	ctx.f5.f64 = double(temp.f32);
	// lfs f7,4920(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4920);
	ctx.f7.f64 = double(temp.f32);
	// addi r30,r31,4916
	ctx.r30.s64 = ctx.r31.s64 + 4916;
	// lfs f6,4924(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4924);
	ctx.f6.f64 = double(temp.f32);
	// bl 0x821b0160
	ctx.lr = 0x821B22C8;
	sub_821B0160(ctx, base);
	// lfs f4,4916(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4916);
	ctx.f4.f64 = double(temp.f32);
	// fcmpu cr6,f4,f5
	ctx.cr6.compare(ctx.f4.f64, ctx.f5.f64);
	// bne cr6,0x821b22f0
	if (!ctx.cr6.eq) goto loc_821B22F0;
	// lfs f0,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f7
	ctx.cr6.compare(ctx.f0.f64, ctx.f7.f64);
	// bne cr6,0x821b22f0
	if (!ctx.cr6.eq) goto loc_821B22F0;
	// lfs f0,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f0,f6
	ctx.cr6.compare(ctx.f0.f64, ctx.f6.f64);
	// beq cr6,0x821b22f4
	if (ctx.cr6.eq) goto loc_821B22F4;
loc_821B22F0:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_821B22F4:
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// stb r10,5002(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5002, ctx.r10.u8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821b2324
	if (ctx.cr6.eq) goto loc_821B2324;
	// stw r29,716(r31)
	PPC_STORE_U32(ctx.r31.u32 + 716, ctx.r29.u32);
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r11,-25976
	ctx.r10.s64 = ctx.r11.s64 + -25976;
	// lhz r4,84(r10)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r10.u32 + 84);
	// bl 0x82229da8
	ctx.lr = 0x821B2324;
	sub_82229DA8(ctx, base);
loc_821B2324:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ae080
	ctx.lr = 0x821B232C;
	sub_821AE080(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b2368
	if (ctx.cr6.eq) goto loc_821B2368;
	// addi r3,r31,3712
	ctx.r3.s64 = ctx.r31.s64 + 3712;
	// bl 0x821c6fc0
	ctx.lr = 0x821B2340;
	sub_821C6FC0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b235c
	if (ctx.cr6.eq) goto loc_821B235C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821aba40
	ctx.lr = 0x821B2354;
	sub_821ABA40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821dba18
	ctx.lr = 0x821B235C;
	sub_821DBA18(ctx, base);
loc_821B235C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_821B2368:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x822ea328
	ctx.lr = 0x821B2370;
	sub_822EA328(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821b239c
	if (ctx.cr6.eq) goto loc_821B239C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ab5d8
	ctx.lr = 0x821B2380;
	sub_821AB5D8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b239c
	if (ctx.cr6.eq) goto loc_821B239C;
	// lwz r11,668(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 668);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821b23a0
	if (ctx.cr6.eq) goto loc_821B23A0;
loc_821B239C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_821B23A0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821B2218) {
	__imp__sub_821B2218(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B23A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x821B23B0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r29,r11,232
	ctx.r29.s64 = ctx.r11.s64 + 232;
	// bl 0x821b1a98
	ctx.lr = 0x821B23D0;
	sub_821B1A98(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b24a8
	if (ctx.cr6.eq) goto loc_821B24A8;
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// lwz r10,4684(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4684);
	// addi r9,r11,9624
	ctx.r9.s64 = ctx.r11.s64 + 9624;
	// lwz r11,52(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 52);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x821b2434
	if (!ctx.cr6.eq) goto loc_821B2434;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821b4b48
	ctx.lr = 0x821B2400;
	sub_821B4B48(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821b2434
	if (!ctx.cr6.eq) goto loc_821B2434;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821aba40
	ctx.lr = 0x821B2410;
	sub_821ABA40(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r4,92(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x821b24e0
	if (ctx.cr6.eq) goto loc_821B24E0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ab2d8
	ctx.lr = 0x821B2428;
	sub_821AB2D8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_821B2434:
	// addi r3,r31,3712
	ctx.r3.s64 = ctx.r31.s64 + 3712;
	// bl 0x821c6fc0
	ctx.lr = 0x821B243C;
	sub_821C6FC0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821b249c
	if (!ctx.cr6.eq) goto loc_821B249C;
	// lbz r11,5000(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5000);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b249c
	if (ctx.cr6.eq) goto loc_821B249C;
	// addi r4,r31,4916
	ctx.r4.s64 = ctx.r31.s64 + 4916;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821aae88
	ctx.lr = 0x821B2460;
	sub_821AAE88(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b2484
	if (ctx.cr6.eq) goto loc_821B2484;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821aad88
	ctx.lr = 0x821B2478;
	sub_821AAD88(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821b2494
	if (!ctx.cr6.eq) goto loc_821B2494;
loc_821B2484:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,5000(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5000, ctx.r11.u8);
	// bl 0x821b0160
	ctx.lr = 0x821B2494;
	sub_821B0160(ctx, base);
loc_821B2494:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821dba18
	ctx.lr = 0x821B249C;
	sub_821DBA18(ctx, base);
loc_821B249C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_821B24A8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821db660
	ctx.lr = 0x821B24B0;
	sub_821DB660(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821b24d8
	if (!ctx.cr6.eq) goto loc_821B24D8;
	// lbz r11,3153(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3153);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821b24d8
	if (!ctx.cr6.eq) goto loc_821B24D8;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r5,3000
	ctx.r5.s64 = 3000;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82238218
	ctx.lr = 0x821B24D8;
	sub_82238218(ctx, base);
loc_821B24D8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821dba18
	ctx.lr = 0x821B24E0;
	sub_821DBA18(ctx, base);
loc_821B24E0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821B23A8) {
	__imp__sub_821B23A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B24EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821B24EC) {
	__imp__sub_821B24EC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B24F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x821B24F8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x821b2218
	ctx.lr = 0x821B2508;
	sub_821B2218(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b266c
	if (ctx.cr6.eq) goto loc_821B266C;
	// lwz r29,4(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r28,92(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 92);
	// bl 0x821aef80
	ctx.lr = 0x821B2524;
	sub_821AEF80(ctx, base);
	// lwz r11,668(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 668);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821b2540
	if (ctx.cr6.eq) goto loc_821B2540;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821b1ed8
	ctx.lr = 0x821B253C;
	sub_821B1ED8(ctx, base);
	// b 0x821b25a0
	goto loc_821B25A0;
loc_821B2540:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821b2568
	if (ctx.cr6.eq) goto loc_821B2568;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821b23a8
	ctx.lr = 0x821B2554;
	sub_821B23A8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821b25a0
	if (!ctx.cr6.eq) goto loc_821B25A0;
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x821b25a0
	goto loc_821B25A0;
loc_821B2568:
	// lbz r11,5000(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5000);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821b2580
	if (!ctx.cr6.eq) goto loc_821B2580;
	// bl 0x821b1a00
	ctx.lr = 0x821B257C;
	sub_821B1A00(ctx, base);
	// b 0x821b25a0
	goto loc_821B25A0;
loc_821B2580:
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,5000(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5000, ctx.r11.u8);
	// bl 0x821b0160
	ctx.lr = 0x821B258C;
	sub_821B0160(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ab970
	ctx.lr = 0x821B2594;
	sub_821AB970(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x821b265c
	if (!ctx.cr6.eq) goto loc_821B265C;
loc_821B25A0:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821b1bf0
	ctx.lr = 0x821B25B0;
	sub_821B1BF0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821b265c
	if (!ctx.cr6.eq) goto loc_821B265C;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x821b25d8
	if (!ctx.cr6.eq) goto loc_821B25D8;
	// addi r3,r31,3712
	ctx.r3.s64 = ctx.r31.s64 + 3712;
	// bl 0x821c6fc0
	ctx.lr = 0x821B25CC;
	sub_821C6FC0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b2604
	if (ctx.cr6.eq) goto loc_821B2604;
loc_821B25D8:
	// lbz r11,3153(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3153);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b25f8
	if (ctx.cr6.eq) goto loc_821B25F8;
	// lbz r11,3154(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3154);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b25f8
	if (ctx.cr6.eq) goto loc_821B25F8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821b4318
	ctx.lr = 0x821B25F8;
	sub_821B4318(ctx, base);
loc_821B25F8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82240108
	ctx.lr = 0x821B2604;
	sub_82240108(ctx, base);
loc_821B2604:
	// lbz r11,5002(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5002);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821b266c
	if (!ctx.cr6.eq) goto loc_821B266C;
	// lwz r11,92(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b2628
	if (ctx.cr6.eq) goto loc_821B2628;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x821b262c
	if (!ctx.cr6.eq) goto loc_821B262C;
loc_821B2628:
	// li r11,0
	ctx.r11.s64 = 0;
loc_821B262C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// stb r11,5002(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5002, ctx.r11.u8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b266c
	if (ctx.cr6.eq) goto loc_821B266C;
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r10,r11,-25976
	ctx.r10.s64 = ctx.r11.s64 + -25976;
	// lhz r4,84(r10)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r10.u32 + 84);
	// bl 0x82229da8
	ctx.lr = 0x821B2654;
	sub_82229DA8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_821B265C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821aba40
	ctx.lr = 0x821B2664;
	sub_821ABA40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821dba18
	ctx.lr = 0x821B266C;
	sub_821DBA18(ctx, base);
loc_821B266C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821B24F0) {
	__imp__sub_821B24F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B2674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821B2674) {
	__imp__sub_821B2674(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B2678) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r9,6
	ctx.r9.s64 = 6;
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,232(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,236(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 236);
	ctx.f11.f64 = double(temp.f32);
	// stw r9,3488(r3)
	PPC_STORE_U32(ctx.r3.u32 + 3488, ctx.r9.u32);
	// fsubs f10,f0,f12
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// lfs f0,5484(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f9,f13,f11
	ctx.f9.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// stfs f10,3468(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 3468, temp.u32);
	// stfs f9,3472(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 3472, temp.u32);
	// stfs f0,3476(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 3476, temp.u32);
	// b 0x821b1150
	sub_821B1150(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821B2678) {
	__imp__sub_821B2678(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B26B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821B26B4) {
	__imp__sub_821B26B4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B26B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x821B26C0;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,3412(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3412);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r29,0(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// beq cr6,0x821b2840
	if (ctx.cr6.eq) goto loc_821B2840;
	// lwz r30,468(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 468);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821b27d0
	if (ctx.cr6.eq) goto loc_821B27D0;
	// lbz r11,10(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 10);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b270c
	if (ctx.cr6.eq) goto loc_821B270C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821abfb0
	ctx.lr = 0x821B26FC;
	sub_821ABFB0(ctx, base);
	// lbz r11,11(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 11);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r4,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r4.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// b 0x821b2710
	goto loc_821B2710;
loc_821B270C:
	// li r4,1
	ctx.r4.s64 = 1;
loc_821B2710:
	// lis r5,642
	ctx.r5.s64 = 42074112;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// ori r5,r5,21
	ctx.r5.u64 = ctx.r5.u64 | 21;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82232ef8
	ctx.lr = 0x821B2724;
	sub_82232EF8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lfs f31,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f31.f64 = double(temp.f32);
	// bne cr6,0x821b2778
	if (!ctx.cr6.eq) goto loc_821B2778;
	// lbz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b2778
	if (ctx.cr6.eq) goto loc_821B2778;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,6
	ctx.r10.s64 = 6;
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,232(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,236(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 236);
	ctx.f11.f64 = double(temp.f32);
	// stw r10,3488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3488, ctx.r10.u32);
	// fsubs f10,f0,f12
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// stfs f10,3468(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3468, temp.u32);
	// fsubs f9,f13,f11
	ctx.f9.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// stfs f9,3472(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3472, temp.u32);
	// stfs f31,3476(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3476, temp.u32);
	// bl 0x821b1150
	ctx.lr = 0x821B2778;
	sub_821B1150(ctx, base);
loc_821B2778:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821aba40
	ctx.lr = 0x821B2780;
	sub_821ABA40(ctx, base);
	// lbz r11,10(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 10);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821b2794
	if (!ctx.cr6.eq) goto loc_821B2794;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821afd00
	ctx.lr = 0x821B2794;
	sub_821AFD00(ctx, base);
loc_821B2794:
	// stfs f31,3436(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3436, temp.u32);
	// stfs f31,3440(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3440, temp.u32);
	// stfs f31,3444(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3444, temp.u32);
	// stfs f31,3468(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3468, temp.u32);
	// stfs f31,3472(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3472, temp.u32);
	// stfs f31,3476(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3476, temp.u32);
	// lbz r11,10(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 10);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821b2840
	if (!ctx.cr6.eq) goto loc_821B2840;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82232d60
	ctx.lr = 0x821B27C4;
	sub_82232D60(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_821B27D0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821afd00
	ctx.lr = 0x821B27D8;
	sub_821AFD00(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ac0a0
	ctx.lr = 0x821B27E0;
	sub_821AC0A0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821b1150
	ctx.lr = 0x821B27E8;
	sub_821B1150(ctx, base);
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// lwz r9,4752(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4752);
	// addi r11,r11,9624
	ctx.r11.s64 = ctx.r11.s64 + 9624;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x821b2830
	if (!ctx.cr6.gt) goto loc_821B2830;
	// lwz r10,3668(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3668);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mulli r10,r10,624
	ctx.r10.s64 = ctx.r10.s64 * 624;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r8,272(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 272);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x821b2830
	if (ctx.cr6.eq) goto loc_821B2830;
	// lbz r11,4784(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4784);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821b2830
	if (!ctx.cr6.eq) goto loc_821B2830;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821dba18
	ctx.lr = 0x821B2830;
	sub_821DBA18(ctx, base);
loc_821B2830:
	// addi r5,r31,3540
	ctx.r5.s64 = ctx.r31.s64 + 3540;
	// lwz r4,3536(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3536);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821e3178
	ctx.lr = 0x821B2840;
	sub_821E3178(ctx, base);
loc_821B2840:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821B26B8) {
	__imp__sub_821B26B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B284C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821B284C) {
	__imp__sub_821B284C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B2850) {
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
	// bl 0x821b26b8
	ctx.lr = 0x821B286C;
	sub_821B26B8(ctx, base);
	// lwz r11,3412(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3412);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x821b28d0
	if (ctx.cr6.eq) goto loc_821B28D0;
	// lis r11,-32032
	ctx.r11.s64 = -2099249152;
	// lwz r11,-6004(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6004);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x821b28a0
	if (ctx.cr6.eq) goto loc_821B28A0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r31,3712
	ctx.r3.s64 = ctx.r31.s64 + 3712;
	// addi r4,r11,232
	ctx.r4.s64 = ctx.r11.s64 + 232;
	// bl 0x821c80f0
	ctx.lr = 0x821B28A0;
	sub_821C80F0(ctx, base);
loc_821B28A0:
	// addi r30,r31,3712
	ctx.r30.s64 = ctx.r31.s64 + 3712;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821c6fc0
	ctx.lr = 0x821B28AC;
	sub_821C6FC0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b28d0
	if (ctx.cr6.eq) goto loc_821B28D0;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r5,r10,232
	ctx.r5.s64 = ctx.r10.s64 + 232;
	// addi r4,r11,20
	ctx.r4.s64 = ctx.r11.s64 + 20;
	// bl 0x821ca350
	ctx.lr = 0x821B28D0;
	sub_821CA350(ctx, base);
loc_821B28D0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ae128
	ctx.lr = 0x821B28D8;
	sub_821AE128(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821adfd8
	ctx.lr = 0x821B28E0;
	sub_821ADFD8(ctx, base);
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

PPC_WEAK_FUNC(sub_821B2850) {
	__imp__sub_821B2850(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B28F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x821B2900;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// bl 0x82332af8
	ctx.lr = 0x821B2920;
	sub_82332AF8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82332b10
	ctx.lr = 0x821B2928;
	sub_82332B10(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lfs f0,25476(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 25476);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f31,f31,f0
	ctx.f31.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
	// lfs f0,12168(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// ble cr6,0x821b294c
	if (!ctx.cr6.gt) goto loc_821B294C;
	// fmr f31,f0
	ctx.f31.f64 = ctx.f0.f64;
loc_821B294C:
	// addi r11,r31,26
	ctx.r11.s64 = ctx.r31.s64 + 26;
	// rlwinm r27,r11,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r27,r29
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r29.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821b2974
	if (ctx.cr6.eq) goto loc_821B2974;
	// addi r11,r31,50
	ctx.r11.s64 = ctx.r31.s64 + 50;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r9,r10,r29
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r29.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821b29c4
	if (!ctx.cr6.eq) goto loc_821B29C4;
loc_821B2974:
	// cmplwi cr6,r31,1
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 1, ctx.xer);
	// blt cr6,0x821b299c
	if (ctx.cr6.lt) goto loc_821B299C;
	// bne cr6,0x821b29c4
	if (!ctx.cr6.eq) goto loc_821B29C4;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lhz r30,126(r11)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r11.u32 + 126);
	// bl 0x82332b28
	ctx.lr = 0x821B2990;
	sub_82332B28(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r4,r10,25416
	ctx.r4.s64 = ctx.r10.s64 + 25416;
	// b 0x821b29b4
	goto loc_821B29B4;
loc_821B299C:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lhz r30,126(r11)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r11.u32 + 126);
	// bl 0x82332b28
	ctx.lr = 0x821B29AC;
	sub_82332B28(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r4,r10,25360
	ctx.r4.s64 = ctx.r10.s64 + 25360;
loc_821B29B4:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822830e8
	ctx.lr = 0x821B29C4;
	sub_822830E8(ctx, base);
loc_821B29C4:
	// addi r11,r31,50
	ctx.r11.s64 = ctx.r31.s64 + 50;
	// lwzx r4,r27,r29
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r29.u32);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r3,r10,r29
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r29.u32);
	// bl 0x822d45d8
	ctx.lr = 0x821B29DC;
	sub_822D45D8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821B28F8) {
	__imp__sub_821B28F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B29E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x821B29F0;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// bl 0x8223fa40
	ctx.lr = 0x821B2A10;
	sub_8223FA40(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8223fa40
	ctx.lr = 0x821B2A1C;
	sub_8223FA40(ctx, base);
	// lfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lfs f8,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// fmuls f5,f12,f12
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f4,f9,f9,f5
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f5.f64));
	// fmadds f3,f6,f6,f4
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f4.f64));
	// fsqrts f1,f3
	ctx.f1.f64 = double(float(sqrt(ctx.f3.f64)));
	// bne cr6,0x821b2a68
	if (!ctx.cr6.eq) goto loc_821B2A68;
	// lis r11,-32032
	ctx.r11.s64 = -2099249152;
	// lwz r11,-5984(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5984);
	// lfs f0,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f0,f1
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
loc_821B2A68:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821b28f8
	ctx.lr = 0x821B2A78;
	sub_821B28F8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821B29E8) {
	__imp__sub_821B29E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B2A80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,264(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 264);
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x821b2aa4
	if (ctx.cr6.eq) goto loc_821B2AA4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,2416(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2416);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_821B2AA4:
	// rlwinm r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821b2abc
	if (ctx.cr6.eq) goto loc_821B2ABC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f1,8336(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8336);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_821B2ABC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,12168(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821B2A80) {
	__imp__sub_821B2A80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B2AC8) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8223fa40
	ctx.lr = 0x821B2AE8;
	sub_8223FA40(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8223fa40
	ctx.lr = 0x821B2AF4;
	sub_8223FA40(ctx, base);
	// lfs f10,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f9.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fsubs f8,f9,f10
	ctx.f8.f64 = double(float(ctx.f9.f64 - ctx.f10.f64));
	// lfs f7,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f6.f64 = double(temp.f32);
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// fsubs f5,f6,f7
	ctx.f5.f64 = double(float(ctx.f6.f64 - ctx.f7.f64));
	// lfs f4,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f3.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// fsubs f2,f3,f4
	ctx.f2.f64 = double(float(ctx.f3.f64 - ctx.f4.f64));
	// lfs f0,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfs f13,25484(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 25484);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f7,f8,f8
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f8.f64));
	// lfs f12,5484(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5484);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,25480(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 25480);
	ctx.f11.f64 = double(temp.f32);
	// lfs f1,6032(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 6032);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,264(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 264);
	// fmadds f4,f5,f5,f7
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f5.f64 + ctx.f7.f64));
	// lfs f10,40(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,44(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	ctx.f9.f64 = double(temp.f32);
	// lfs f6,48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f3,f2,f2,f4
	ctx.f3.f64 = double(float(ctx.f2.f64 * ctx.f2.f64 + ctx.f4.f64));
	// fsqrts f7,f3
	ctx.f7.f64 = double(float(sqrt(ctx.f3.f64)));
	// fneg f4,f7
	ctx.f4.u64 = ctx.f7.u64 ^ 0x8000000000000000;
	// fsel f3,f4,f0,f7
	ctx.f3.f64 = ctx.f4.f64 >= 0.0 ? ctx.f0.f64 : ctx.f7.f64;
	// fdivs f7,f0,f3
	ctx.f7.f64 = double(float(ctx.f0.f64 / ctx.f3.f64));
	// fmuls f4,f7,f2
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f2.f64));
	// fmuls f3,f7,f8
	ctx.f3.f64 = double(float(ctx.f7.f64 * ctx.f8.f64));
	// fmuls f2,f5,f7
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f7.f64));
	// fneg f8,f4
	ctx.f8.u64 = ctx.f4.u64 ^ 0x8000000000000000;
	// fmuls f7,f10,f3
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f3.f64));
	// fmadds f5,f9,f8,f7
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f8.f64 + ctx.f7.f64));
	// fmadds f4,f6,f2,f5
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f2.f64 + ctx.f5.f64));
	// fabs f3,f4
	ctx.f3.u64 = ctx.f4.u64 & ~0x8000000000000000;
	// fsubs f2,f3,f13
	ctx.f2.f64 = double(float(ctx.f3.f64 - ctx.f13.f64));
	// fneg f10,f3
	ctx.f10.u64 = ctx.f3.u64 ^ 0x8000000000000000;
	// fsel f9,f2,f13,f3
	ctx.f9.f64 = ctx.f2.f64 >= 0.0 ? ctx.f13.f64 : ctx.f3.f64;
	// fsel f8,f10,f12,f9
	ctx.f8.f64 = ctx.f10.f64 >= 0.0 ? ctx.f12.f64 : ctx.f9.f64;
	// fnmsubs f0,f8,f11,f0
	ctx.f0.f64 = double(float(-(ctx.f8.f64 * ctx.f11.f64 - ctx.f0.f64)));
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// blt cr6,0x821b2bb0
	if (ctx.cr6.lt) goto loc_821B2BB0;
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
loc_821B2BB0:
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

PPC_WEAK_FUNC(sub_821B2AC8) {
	__imp__sub_821B2AC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B2BC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821B2BC4) {
	__imp__sub_821B2BC4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B2BC8) {
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
	// bl 0x823de014
	ctx.lr = 0x821B2BE0;
	__savefpr_23(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8223fae0
	ctx.lr = 0x821B2BF8;
	sub_8223FAE0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lfs f12,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f24,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f24.f64 = double(temp.f32);
	// lwz r11,264(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 264);
	// lfs f31,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f30.f64 = double(temp.f32);
	// fsubs f27,f0,f31
	ctx.f27.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
	// lfs f29,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f29.f64 = double(temp.f32);
	// fsubs f26,f13,f30
	ctx.f26.f64 = double(float(ctx.f13.f64 - ctx.f30.f64));
	// fsubs f25,f12,f29
	ctx.f25.f64 = double(float(ctx.f12.f64 - ctx.f29.f64));
	// bl 0x821d9030
	ctx.lr = 0x821B2C38;
	sub_821D9030(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821b2c4c
	if (ctx.cr6.eq) goto loc_821B2C4C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f24,5876(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5876);
	ctx.f24.f64 = double(temp.f32);
loc_821B2C4C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f0,8336(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8336);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f13,f27,f0,f31
	ctx.f13.f64 = double(float(ctx.f27.f64 * ctx.f0.f64 + ctx.f31.f64));
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmadds f12,f26,f0,f30
	ctx.f12.f64 = double(float(ctx.f26.f64 * ctx.f0.f64 + ctx.f30.f64));
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmadds f11,f25,f0,f29
	ctx.f11.f64 = double(float(ctx.f25.f64 * ctx.f0.f64 + ctx.f29.f64));
	// stfs f11,88(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x821d9030
	ctx.lr = 0x821B2C7C;
	sub_821D9030(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lfs f23,5808(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5808);
	ctx.f23.f64 = double(temp.f32);
	// beq cr6,0x821b2c94
	if (ctx.cr6.eq) goto loc_821B2C94;
	// fadds f24,f24,f23
	ctx.f24.f64 = double(float(ctx.f24.f64 + ctx.f23.f64));
loc_821B2C94:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f28,2416(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2416);
	ctx.f28.f64 = double(temp.f32);
	// fmadds f0,f27,f28,f31
	ctx.f0.f64 = double(float(ctx.f27.f64 * ctx.f28.f64 + ctx.f31.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmadds f13,f26,f28,f30
	ctx.f13.f64 = double(float(ctx.f26.f64 * ctx.f28.f64 + ctx.f30.f64));
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmadds f12,f25,f28,f29
	ctx.f12.f64 = double(float(ctx.f25.f64 * ctx.f28.f64 + ctx.f29.f64));
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x821d9030
	ctx.lr = 0x821B2CC4;
	sub_821D9030(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821b2cd4
	if (ctx.cr6.eq) goto loc_821B2CD4;
	// fadds f24,f24,f23
	ctx.fpscr.disableFlushMode();
	ctx.f24.f64 = double(float(ctx.f24.f64 + ctx.f23.f64));
loc_821B2CD4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f0,5880(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5880);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f13,f27,f0,f31
	ctx.f13.f64 = double(float(ctx.f27.f64 * ctx.f0.f64 + ctx.f31.f64));
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmadds f12,f26,f0,f30
	ctx.f12.f64 = double(float(ctx.f26.f64 * ctx.f0.f64 + ctx.f30.f64));
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmadds f11,f25,f0,f29
	ctx.f11.f64 = double(float(ctx.f25.f64 * ctx.f0.f64 + ctx.f29.f64));
	// stfs f11,88(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x821d9030
	ctx.lr = 0x821B2D04;
	sub_821D9030(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,11804(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11804);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12168(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f13.f64 = double(temp.f32);
	// beq cr6,0x821b2d30
	if (ctx.cr6.eq) goto loc_821B2D30;
	// fadds f12,f24,f23
	ctx.f12.f64 = double(float(ctx.f24.f64 + ctx.f23.f64));
	// fmadds f11,f12,f0,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fmuls f1,f11,f28
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f28.f64));
	// b 0x821b2d38
	goto loc_821B2D38;
loc_821B2D30:
	// fmadds f0,f24,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f24.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fmuls f1,f0,f28
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f28.f64));
loc_821B2D38:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x823de060
	ctx.lr = 0x821B2D44;
	__restfpr_23(ctx, base);
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

PPC_WEAK_FUNC(sub_821B2BC8) {
	__imp__sub_821B2BC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B2D58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lbz r11,3166(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 3166);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b2d70
	if (ctx.cr6.eq) goto loc_821B2D70;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,12168(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_821B2D70:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r9,r10,44576
	ctx.r9.u64 = ctx.r10.u64 | 44576;
	// lwz r8,264(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 264);
	// lfsx f1,r8,r9
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821B2D58) {
	__imp__sub_821B2D58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B2D88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x821B2D90;
	__savegprlr_28(ctx, base);
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x823de028
	ctx.lr = 0x821B2D98;
	__savefpr_28(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f28,f1
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = ctx.f1.f64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x821aa3d0
	ctx.lr = 0x821B2DAC;
	sub_821AA3D0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r10,264(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 264);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821b2e58
	if (ctx.cr6.eq) goto loc_821B2E58;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r5,60(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 60);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821b29e8
	ctx.lr = 0x821B2DD4;
	sub_821B29E8(ctx, base);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f1.f64;
	// addi r11,r11,12168
	ctx.r11.s64 = ctx.r11.s64 + 12168;
	// lwz r9,264(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 264);
	// lfs f31,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f31.f64 = double(temp.f32);
	// lwz r11,12(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// clrlwi r8,r11,31
	ctx.r8.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x821b2e08
	if (ctx.cr6.eq) goto loc_821B2E08;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f30,2416(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2416);
	ctx.f30.f64 = double(temp.f32);
	// b 0x821b2e24
	goto loc_821B2E24;
loc_821B2E08:
	// rlwinm r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821b2e20
	if (ctx.cr6.eq) goto loc_821B2E20;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f30,8336(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8336);
	ctx.f30.f64 = double(temp.f32);
	// b 0x821b2e24
	goto loc_821B2E24;
loc_821B2E20:
	// fmr f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f31.f64;
loc_821B2E24:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821b2ac8
	ctx.lr = 0x821B2E30;
	sub_821B2AC8(ctx, base);
	// lbz r11,3166(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3166);
	// lfs f12,220(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	ctx.f12.f64 = double(temp.f32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821b2f40
	if (!ctx.cr6.eq) goto loc_821B2F40;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r9,r10,44576
	ctx.r9.u64 = ctx.r10.u64 | 44576;
	// lwz r8,264(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 264);
	// lfsx f0,r8,r9
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	ctx.f0.f64 = double(temp.f32);
	// b 0x821b2f44
	goto loc_821B2F44;
loc_821B2E58:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r29,60(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 60);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8223fa40
	ctx.lr = 0x821B2E68;
	sub_8223FA40(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8223fa40
	ctx.lr = 0x821B2E74;
	sub_8223FA40(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f12,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f31,f0,f13
	ctx.f31.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f30,f12,f11
	ctx.f30.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// lfs f9,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f29,f10,f9
	ctx.f29.f64 = double(float(ctx.f10.f64 - ctx.f9.f64));
	// bl 0x82332af8
	ctx.lr = 0x821B2EA0;
	sub_82332AF8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82332b10
	ctx.lr = 0x821B2EA8;
	sub_82332B10(ctx, base);
	// fmuls f8,f31,f31
	ctx.fpscr.disableFlushMode();
	ctx.f8.f64 = double(float(ctx.f31.f64 * ctx.f31.f64));
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r11,r11,12168
	ctx.r11.s64 = ctx.r11.s64 + 12168;
	// lfs f0,25476(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 25476);
	ctx.f0.f64 = double(temp.f32);
	// lfs f31,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f31.f64 = double(temp.f32);
	// fmadds f7,f29,f29,f8
	ctx.f7.f64 = double(float(ctx.f29.f64 * ctx.f29.f64 + ctx.f8.f64));
	// fmadds f6,f30,f30,f7
	ctx.f6.f64 = double(float(ctx.f30.f64 * ctx.f30.f64 + ctx.f7.f64));
	// fsqrts f5,f6
	ctx.f5.f64 = double(float(sqrt(ctx.f6.f64)));
	// fmuls f30,f5,f0
	ctx.f30.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// fcmpu cr6,f30,f31
	ctx.cr6.compare(ctx.f30.f64, ctx.f31.f64);
	// ble cr6,0x821b2ee0
	if (!ctx.cr6.gt) goto loc_821B2EE0;
	// fmr f30,f31
	ctx.f30.f64 = ctx.f31.f64;
loc_821B2EE0:
	// lwz r11,104(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 104);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b2ef8
	if (ctx.cr6.eq) goto loc_821B2EF8;
	// lhz r11,100(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 100);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821b2f20
	if (!ctx.cr6.eq) goto loc_821B2F20;
loc_821B2EF8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lhz r29,126(r11)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r11.u32 + 126);
	// bl 0x82332b28
	ctx.lr = 0x821B2F08;
	sub_82332B28(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r10,25360
	ctx.r4.s64 = ctx.r10.s64 + 25360;
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// bl 0x822830e8
	ctx.lr = 0x821B2F20;
	sub_822830E8(ctx, base);
loc_821B2F20:
	// lwz r4,104(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 104);
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// lhz r3,100(r28)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r28.u32 + 100);
	// bl 0x822d45d8
	ctx.lr = 0x821B2F30;
	sub_822D45D8(ctx, base);
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f1.f64;
	// fmr f30,f31
	ctx.f30.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// fmr f12,f31
	ctx.f12.f64 = ctx.f31.f64;
loc_821B2F40:
	// fmr f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f31.f64;
loc_821B2F44:
	// lfs f13,84(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f11,216(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 216);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f11,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// lfs f13,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f9,f10,f28
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f28.f64));
	// fmuls f8,f9,f29
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f29.f64));
	// fmuls f7,f8,f30
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f30.f64));
	// fmuls f6,f7,f1
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f1.f64));
	// fmuls f5,f6,f12
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f12.f64));
	// fmuls f4,f5,f0
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// fsubs f3,f4,f31
	ctx.f3.f64 = double(float(ctx.f4.f64 - ctx.f31.f64));
	// fneg f2,f4
	ctx.f2.u64 = ctx.f4.u64 ^ 0x8000000000000000;
	// fsel f1,f3,f31,f4
	ctx.f1.f64 = ctx.f3.f64 >= 0.0 ? ctx.f31.f64 : ctx.f4.f64;
	// fsel f1,f2,f13,f1
	ctx.f1.f64 = ctx.f2.f64 >= 0.0 ? ctx.f13.f64 : ctx.f1.f64;
	// stfs f1,232(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 232, temp.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x823de074
	ctx.lr = 0x821B2F90;
	__restfpr_28(ctx, base);
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821B2D88) {
	__imp__sub_821B2D88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B2F94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821B2F94) {
	__imp__sub_821B2F94(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B2F98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x821B2FA0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lfs f0,272(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 272);
	ctx.f0.f64 = double(temp.f32);
	// addi r29,r4,48
	ctx.r29.s64 = ctx.r4.s64 + 48;
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// addi r28,r4,36
	ctx.r28.s64 = ctx.r4.s64 + 36;
	// lfs f13,276(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	ctx.f13.f64 = double(temp.f32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stfs f13,4(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lfs f12,280(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 280);
	ctx.f12.f64 = double(temp.f32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stfs f12,8(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// lfs f11,284(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 284);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,12(r4)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r4.u32 + 12, temp.u32);
	// lfs f10,288(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 288);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,16(r4)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r4.u32 + 16, temp.u32);
	// lfs f9,292(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 292);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,20(r4)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r4.u32 + 20, temp.u32);
	// lfs f8,296(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 296);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,24(r4)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r4.u32 + 24, temp.u32);
	// lfs f7,300(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 300);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,28(r4)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r4.u32 + 28, temp.u32);
	// lfs f6,304(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 304);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,32(r4)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r4.u32 + 32, temp.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x821d8898
	ctx.lr = 0x821B3008;
	sub_821D8898(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821b3034
	if (!ctx.cr6.eq) goto loc_821B3034;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821d8670
	ctx.lr = 0x821B301C;
	sub_821D8670(ctx, base);
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// lfs f13,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r29)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r29.u32 + 4, temp.u32);
	// lfs f12,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r29)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r29.u32 + 8, temp.u32);
loc_821B3034:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821B2F98) {
	__imp__sub_821B2F98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B303C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821B303C) {
	__imp__sub_821B303C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B3040) {
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
	ctx.lr = 0x821B3058;
	__savefpr_25(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f1.f64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8223fae0
	ctx.lr = 0x821B3074;
	sub_8223FAE0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8223fb50
	ctx.lr = 0x821B307C;
	sub_8223FB50(ctx, base);
	// lfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,40(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,44(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// fmr f30,f1
	ctx.f30.f64 = ctx.f1.f64;
	// fsubs f10,f13,f11
	ctx.f10.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// lfs f9,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f8.f64 = double(temp.f32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// fsubs f7,f9,f8
	ctx.f7.f64 = double(float(ctx.f9.f64 - ctx.f8.f64));
	// lfs f31,12168(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f31.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r30,r31,36
	ctx.r30.s64 = ctx.r31.s64 + 36;
	// lwz r8,264(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 264);
	// fmuls f6,f12,f12
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// lfs f0,5484(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// fmadds f5,f10,f10,f6
	ctx.f5.f64 = double(float(ctx.f10.f64 * ctx.f10.f64 + ctx.f6.f64));
	// fmadds f4,f7,f7,f5
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f7.f64 + ctx.f5.f64));
	// fsqrts f3,f4
	ctx.f3.f64 = double(float(sqrt(ctx.f4.f64)));
	// fneg f2,f3
	ctx.f2.u64 = ctx.f3.u64 ^ 0x8000000000000000;
	// fsel f1,f2,f31,f3
	ctx.f1.f64 = ctx.f2.f64 >= 0.0 ? ctx.f31.f64 : ctx.f3.f64;
	// fdivs f11,f31,f1
	ctx.f11.f64 = double(float(ctx.f31.f64 / ctx.f1.f64));
	// fmuls f10,f12,f11
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// fmuls f9,f11,f7
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f7.f64));
	// fmuls f8,f10,f10
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// fneg f7,f9
	ctx.f7.u64 = ctx.f9.u64 ^ 0x8000000000000000;
	// fmadds f6,f7,f7,f8
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f7.f64 + ctx.f8.f64));
	// fsqrts f5,f6
	ctx.f5.f64 = double(float(sqrt(ctx.f6.f64)));
	// fneg f4,f5
	ctx.f4.u64 = ctx.f5.u64 ^ 0x8000000000000000;
	// fsel f3,f4,f31,f5
	ctx.f3.f64 = ctx.f4.f64 >= 0.0 ? ctx.f31.f64 : ctx.f5.f64;
	// fdivs f2,f31,f3
	ctx.f2.f64 = double(float(ctx.f31.f64 / ctx.f3.f64));
	// fmuls f27,f10,f2
	ctx.f27.f64 = double(float(ctx.f10.f64 * ctx.f2.f64));
	// fmuls f26,f7,f2
	ctx.f26.f64 = double(float(ctx.f7.f64 * ctx.f2.f64));
	// fmuls f25,f2,f0
	ctx.f25.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// beq cr6,0x821b313c
	if (ctx.cr6.eq) goto loc_821B313C;
	// fadds f13,f13,f30
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f30.f64));
	// lfs f12,240(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 240);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,25356(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 25356);
	ctx.f0.f64 = double(temp.f32);
	// lfs f28,6016(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6016);
	ctx.f28.f64 = double(temp.f32);
	// fsubs f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// fsubs f10,f0,f11
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// fsel f29,f10,f0,f11
	ctx.f29.f64 = ctx.f10.f64 >= 0.0 ? ctx.f0.f64 : ctx.f11.f64;
	// b 0x821b316c
	goto loc_821B316C;
loc_821B313C:
	// fsubs f0,f31,f29
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f31.f64 - ctx.f29.f64));
	// lwz r10,268(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 268);
	// lfs f13,192(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 192);
	ctx.f13.f64 = double(temp.f32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// fmuls f28,f13,f0
	ctx.f28.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// beq cr6,0x821b3160
	if (ctx.cr6.eq) goto loc_821B3160;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,25356(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 25356);
	ctx.f13.f64 = double(temp.f32);
	// b 0x821b3164
	goto loc_821B3164;
loc_821B3160:
	// lfs f13,200(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 200);
	ctx.f13.f64 = double(temp.f32);
loc_821B3164:
	// fmuls f29,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fmuls f30,f0,f30
	ctx.f30.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
loc_821B316C:
	// bl 0x8222fe68
	ctx.lr = 0x821B3170;
	sub_8222FE68(ctx, base);
	// fmuls f28,f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = double(float(ctx.f1.f64 * ctx.f28.f64));
	// bl 0x8222fe20
	ctx.lr = 0x821B3178;
	sub_8222FE20(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f13,f27,f28,f0
	ctx.f13.f64 = double(float(ctx.f27.f64 * ctx.f28.f64 + ctx.f0.f64));
	// lfs f12,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f11,f26,f28,f12
	ctx.f11.f64 = double(float(ctx.f26.f64 * ctx.f28.f64 + ctx.f12.f64));
	// lfs f10,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f8,f1,f29,f30
	ctx.f8.f64 = double(float(ctx.f1.f64 * ctx.f29.f64 + ctx.f30.f64));
	// fmadds f7,f25,f28,f9
	ctx.f7.f64 = double(float(ctx.f25.f64 * ctx.f28.f64 + ctx.f9.f64));
	// fsubs f6,f13,f10
	ctx.f6.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// stfs f6,0(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// lfs f5,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f4,f11,f5
	ctx.f4.f64 = double(float(ctx.f11.f64 - ctx.f5.f64));
	// fadds f3,f7,f8
	ctx.f3.f64 = double(float(ctx.f7.f64 + ctx.f8.f64));
	// stfs f4,4(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// fmuls f13,f4,f4
	ctx.f13.f64 = double(float(ctx.f4.f64 * ctx.f4.f64));
	// lfs f2,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// fmr f1,f6
	ctx.f1.f64 = ctx.f6.f64;
	// fmr f0,f4
	ctx.f0.f64 = ctx.f4.f64;
	// fsubs f12,f3,f2
	ctx.f12.f64 = double(float(ctx.f3.f64 - ctx.f2.f64));
	// stfs f12,8(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// fmadds f11,f6,f6,f13
	ctx.f11.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f13.f64));
	// fmr f10,f12
	ctx.f10.f64 = ctx.f12.f64;
	// fmadds f9,f12,f12,f11
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f11.f64));
	// fsqrts f8,f9
	ctx.f8.f64 = double(float(sqrt(ctx.f9.f64)));
	// fneg f7,f8
	ctx.f7.u64 = ctx.f8.u64 ^ 0x8000000000000000;
	// fsel f6,f7,f31,f8
	ctx.f6.f64 = ctx.f7.f64 >= 0.0 ? ctx.f31.f64 : ctx.f8.f64;
	// fdivs f5,f31,f6
	ctx.f5.f64 = double(float(ctx.f31.f64 / ctx.f6.f64));
	// fmuls f4,f1,f5
	ctx.f4.f64 = double(float(ctx.f1.f64 * ctx.f5.f64));
	// stfs f4,0(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// fmuls f3,f0,f5
	ctx.f3.f64 = double(float(ctx.f0.f64 * ctx.f5.f64));
	// stfs f3,4(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// fmuls f2,f12,f5
	ctx.f2.f64 = double(float(ctx.f12.f64 * ctx.f5.f64));
	// stfs f2,8(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x823de068
	ctx.lr = 0x821B3208;
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

PPC_WEAK_FUNC(sub_821B3040) {
	__imp__sub_821B3040(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B321C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821B321C) {
	__imp__sub_821B321C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B3220) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x821B3228;
	__savegprlr_29(ctx, base);
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x823de024
	ctx.lr = 0x821B3230;
	__savefpr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r3,36
	ctx.r11.s64 = ctx.r3.s64 + 36;
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,44(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	ctx.f10.f64 = double(temp.f32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fsubs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lfs f8,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,40(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f7.f64 = double(temp.f32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// fsubs f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// lfs f31,12168(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f31.f64 = double(temp.f32);
	// lfs f5,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f5.f64 = double(temp.f32);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lfs f4,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f4.f64 = double(temp.f32);
	// addi r11,r3,24
	ctx.r11.s64 = ctx.r3.s64 + 24;
	// lfs f3,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f2,f12,f12
	ctx.f2.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f1,f9,f9,f2
	ctx.f1.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f2.f64));
	// fmadds f0,f6,f6,f1
	ctx.f0.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f1.f64));
	// fsqrts f13,f0
	ctx.f13.f64 = double(float(sqrt(ctx.f0.f64)));
	// fneg f11,f13
	ctx.f11.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fsel f10,f11,f31,f13
	ctx.f10.f64 = ctx.f11.f64 >= 0.0 ? ctx.f31.f64 : ctx.f13.f64;
	// fdivs f8,f31,f10
	ctx.f8.f64 = double(float(ctx.f31.f64 / ctx.f10.f64));
	// fmuls f7,f8,f12
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f12.f64));
	// fmuls f6,f8,f6
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f6.f64));
	// fmuls f2,f9,f8
	ctx.f2.f64 = double(float(ctx.f9.f64 * ctx.f8.f64));
	// fmuls f1,f5,f7
	ctx.f1.f64 = double(float(ctx.f5.f64 * ctx.f7.f64));
	// fmuls f0,f4,f6
	ctx.f0.f64 = double(float(ctx.f4.f64 * ctx.f6.f64));
	// fmuls f13,f3,f2
	ctx.f13.f64 = double(float(ctx.f3.f64 * ctx.f2.f64));
	// fmsubs f12,f4,f2,f1
	ctx.f12.f64 = double(float(ctx.f4.f64 * ctx.f2.f64 - ctx.f1.f64));
	// fmsubs f11,f3,f7,f0
	ctx.f11.f64 = double(float(ctx.f3.f64 * ctx.f7.f64 - ctx.f0.f64));
	// fmsubs f10,f5,f6,f13
	ctx.f10.f64 = double(float(ctx.f5.f64 * ctx.f6.f64 - ctx.f13.f64));
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
	// fsel f4,f5,f31,f6
	ctx.f4.f64 = ctx.f5.f64 >= 0.0 ? ctx.f31.f64 : ctx.f6.f64;
	// fdivs f3,f31,f4
	ctx.f3.f64 = double(float(ctx.f31.f64 / ctx.f4.f64));
	// fmuls f29,f3,f10
	ctx.f29.f64 = double(float(ctx.f3.f64 * ctx.f10.f64));
	// fmuls f28,f12,f3
	ctx.f28.f64 = double(float(ctx.f12.f64 * ctx.f3.f64));
	// fmuls f27,f11,f3
	ctx.f27.f64 = double(float(ctx.f11.f64 * ctx.f3.f64));
	// bl 0x8222fe68
	ctx.lr = 0x821B32EC;
	sub_8222FE68(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f2,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// lfs f0,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f30,6016(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 6016);
	ctx.f30.f64 = double(temp.f32);
	// fmuls f12,f1,f30
	ctx.f12.f64 = double(float(ctx.f1.f64 * ctx.f30.f64));
	// fmadds f29,f12,f29,f2
	ctx.f29.f64 = double(float(ctx.f12.f64 * ctx.f29.f64 + ctx.f2.f64));
	// fmadds f28,f28,f12,f0
	ctx.f28.f64 = double(float(ctx.f28.f64 * ctx.f12.f64 + ctx.f0.f64));
	// fmadds f27,f27,f12,f13
	ctx.f27.f64 = double(float(ctx.f27.f64 * ctx.f12.f64 + ctx.f13.f64));
	// bl 0x8222fe68
	ctx.lr = 0x821B3314;
	sub_8222FE68(ctx, base);
	// fmuls f11,f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64 * ctx.f30.f64));
	// lfs f10,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f6,f10,f11,f29
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f11.f64 + ctx.f29.f64));
	// fmadds f5,f9,f11,f28
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f11.f64 + ctx.f28.f64));
	// fmadds f4,f7,f11,f27
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f11.f64 + ctx.f27.f64));
	// fsubs f3,f6,f8
	ctx.f3.f64 = double(float(ctx.f6.f64 - ctx.f8.f64));
	// stfs f3,0(r29)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// lfs f2,40(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f2.f64 = double(temp.f32);
	// fsubs f1,f5,f2
	ctx.f1.f64 = double(float(ctx.f5.f64 - ctx.f2.f64));
	// fmuls f11,f1,f1
	ctx.f11.f64 = double(float(ctx.f1.f64 * ctx.f1.f64));
	// stfs f1,4(r29)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 4, temp.u32);
	// lfs f0,44(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f10,f4,f0
	ctx.f10.f64 = double(float(ctx.f4.f64 - ctx.f0.f64));
	// fmadds f9,f3,f3,f11
	ctx.f9.f64 = double(float(ctx.f3.f64 * ctx.f3.f64 + ctx.f11.f64));
	// stfs f10,8(r29)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r29.u32 + 8, temp.u32);
	// fmr f13,f3
	ctx.f13.f64 = ctx.f3.f64;
	// fmr f12,f1
	ctx.f12.f64 = ctx.f1.f64;
	// fmadds f8,f10,f10,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f10.f64 + ctx.f9.f64));
	// fsqrts f7,f8
	ctx.f7.f64 = double(float(sqrt(ctx.f8.f64)));
	// fneg f6,f7
	ctx.f6.u64 = ctx.f7.u64 ^ 0x8000000000000000;
	// fsel f5,f6,f31,f7
	ctx.f5.f64 = ctx.f6.f64 >= 0.0 ? ctx.f31.f64 : ctx.f7.f64;
	// fdivs f4,f31,f5
	ctx.f4.f64 = double(float(ctx.f31.f64 / ctx.f5.f64));
	// fmuls f2,f13,f4
	ctx.f2.f64 = double(float(ctx.f13.f64 * ctx.f4.f64));
	// stfs f2,0(r29)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// fmuls f1,f1,f4
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f4.f64));
	// stfs f1,4(r29)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 4, temp.u32);
	// fmuls f0,f4,f10
	ctx.f0.f64 = double(float(ctx.f4.f64 * ctx.f10.f64));
	// stfs f0,8(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 8, temp.u32);
	// fmr f3,f10
	ctx.f3.f64 = ctx.f10.f64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x823de070
	ctx.lr = 0x821B33A0;
	__restfpr_27(ctx, base);
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821B3220) {
	__imp__sub_821B3220(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B33A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821B33A4) {
	__imp__sub_821B33A4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B33A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,228(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 228);
	// lis r8,-32052
	ctx.r8.s64 = -2100559872;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// addi r11,r8,26552
	ctx.r11.s64 = ctx.r8.s64 + 26552;
	// stw r10,224(r3)
	PPC_STORE_U32(ctx.r3.u32 + 224, ctx.r10.u32);
	// stw r7,228(r3)
	PPC_STORE_U32(ctx.r3.u32 + 228, ctx.r7.u32);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r11,r11,272
	ctx.r11.s64 = ctx.r11.s64 + 272;
	// lhz r6,56(r9)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r9.u32 + 56);
	// mulli r10,r6,624
	ctx.r10.s64 = ctx.r6.s64 * 624;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r4,-624(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + -624);
	// b 0x821b3040
	sub_821B3040(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821B33A8) {
	__imp__sub_821B33A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B33E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821B33E4) {
	__imp__sub_821B33E4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B33E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x821B33F0;
	__savegprlr_27(ctx, base);
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x823de00c
	ctx.lr = 0x821B33F8;
	__savefpr_21(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r28,0(r4)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f21,f1
	ctx.fpscr.disableFlushMode();
	ctx.f21.f64 = ctx.f1.f64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8223fae0
	ctx.lr = 0x821B3418;
	sub_8223FAE0(ctx, base);
	// lfs f13,40(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fsubs f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// lfs f10,44(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f9.f64 = double(temp.f32);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// fsubs f8,f9,f10
	ctx.f8.f64 = double(float(ctx.f9.f64 - ctx.f10.f64));
	// lfs f7,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f6.f64 = double(temp.f32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// fsubs f5,f6,f7
	ctx.f5.f64 = double(float(ctx.f6.f64 - ctx.f7.f64));
	// lfs f31,12168(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f31.f64 = double(temp.f32);
	// lfs f4,48(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f4.f64 = double(temp.f32);
	// addi r30,r31,36
	ctx.r30.s64 = ctx.r31.s64 + 36;
	// lfs f3,52(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	ctx.f3.f64 = double(temp.f32);
	// addi r11,r31,48
	ctx.r11.s64 = ctx.r31.s64 + 48;
	// lfs f2,56(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	ctx.f2.f64 = double(temp.f32);
	// lfs f0,25500(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 25500);
	ctx.f0.f64 = double(temp.f32);
	// lfs f28,5484(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 5484);
	ctx.f28.f64 = double(temp.f32);
	// fmuls f1,f11,f11
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// fmadds f13,f8,f8,f1
	ctx.f13.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 + ctx.f1.f64));
	// fmadds f12,f5,f5,f13
	ctx.f12.f64 = double(float(ctx.f5.f64 * ctx.f5.f64 + ctx.f13.f64));
	// fsqrts f22,f12
	ctx.f22.f64 = double(float(sqrt(ctx.f12.f64)));
	// fneg f10,f22
	ctx.f10.u64 = ctx.f22.u64 ^ 0x8000000000000000;
	// fsel f9,f10,f31,f22
	ctx.f9.f64 = ctx.f10.f64 >= 0.0 ? ctx.f31.f64 : ctx.f22.f64;
	// fdivs f7,f31,f9
	ctx.f7.f64 = double(float(ctx.f31.f64 / ctx.f9.f64));
	// fmuls f30,f11,f7
	ctx.f30.f64 = double(float(ctx.f11.f64 * ctx.f7.f64));
	// fmuls f29,f7,f5
	ctx.f29.f64 = double(float(ctx.f7.f64 * ctx.f5.f64));
	// fmuls f27,f8,f7
	ctx.f27.f64 = double(float(ctx.f8.f64 * ctx.f7.f64));
	// fmuls f6,f30,f30
	ctx.f6.f64 = double(float(ctx.f30.f64 * ctx.f30.f64));
	// fneg f5,f29
	ctx.f5.u64 = ctx.f29.u64 ^ 0x8000000000000000;
	// fmuls f4,f4,f29
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f29.f64));
	// fmadds f1,f5,f5,f6
	ctx.f1.f64 = double(float(ctx.f5.f64 * ctx.f5.f64 + ctx.f6.f64));
	// fmadds f13,f3,f30,f4
	ctx.f13.f64 = double(float(ctx.f3.f64 * ctx.f30.f64 + ctx.f4.f64));
	// fsqrts f12,f1
	ctx.f12.f64 = double(float(sqrt(ctx.f1.f64)));
	// fneg f11,f12
	ctx.f11.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// fmadds f10,f2,f27,f13
	ctx.f10.f64 = double(float(ctx.f2.f64 * ctx.f27.f64 + ctx.f13.f64));
	// fsel f9,f11,f31,f12
	ctx.f9.f64 = ctx.f11.f64 >= 0.0 ? ctx.f31.f64 : ctx.f12.f64;
	// fcmpu cr6,f10,f0
	ctx.cr6.compare(ctx.f10.f64, ctx.f0.f64);
	// fdivs f8,f31,f9
	ctx.f8.f64 = double(float(ctx.f31.f64 / ctx.f9.f64));
	// fmuls f26,f30,f8
	ctx.f26.f64 = double(float(ctx.f30.f64 * ctx.f8.f64));
	// fmuls f25,f5,f8
	ctx.f25.f64 = double(float(ctx.f5.f64 * ctx.f8.f64));
	// fmuls f24,f8,f28
	ctx.f24.f64 = double(float(ctx.f8.f64 * ctx.f28.f64));
	// bge cr6,0x821b34f0
	if (!ctx.cr6.lt) goto loc_821B34F0;
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// li r27,1
	ctx.r27.s64 = 1;
	// fmuls f13,f0,f26
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f26.f64));
	// lfs f12,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f10,f12,f25,f13
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f25.f64 + ctx.f13.f64));
	// fmadds f9,f11,f24,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f24.f64 + ctx.f10.f64));
	// fcmpu cr6,f9,f28
	ctx.cr6.compare(ctx.f9.f64, ctx.f28.f64);
	// b 0x821b3504
	goto loc_821B3504;
loc_821B34F0:
	// li r27,0
	ctx.r27.s64 = 0;
	// bl 0x8222fe20
	ctx.lr = 0x821B34F8;
	sub_8222FE20(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2416(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2416);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
loc_821B3504:
	// ble cr6,0x821b3510
	if (!ctx.cr6.gt) goto loc_821B3510;
	// fmr f23,f31
	ctx.fpscr.disableFlushMode();
	ctx.f23.f64 = ctx.f31.f64;
	// b 0x821b3518
	goto loc_821B3518;
loc_821B3510:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f23,2424(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2424);
	ctx.f23.f64 = double(temp.f32);
loc_821B3518:
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821b3560
	if (!ctx.cr6.eq) goto loc_821B3560;
	// bl 0x82334308
	ctx.lr = 0x821B352C;
	sub_82334308(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b3560
	if (ctx.cr6.eq) goto loc_821B3560;
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,1216(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1216);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,5524(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5524);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bl 0x823dde60
	ctx.lr = 0x821B3550;
	sub_823DDE60(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// fsubs f11,f31,f21
	ctx.f11.f64 = double(float(ctx.f31.f64 - ctx.f21.f64));
	// fmuls f10,f12,f22
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f22.f64));
	// fmuls f28,f10,f11
	ctx.f28.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
loc_821B3560:
	// lwz r11,264(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 264);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b35e4
	if (ctx.cr6.eq) goto loc_821B35E4;
	// bl 0x8222fe20
	ctx.lr = 0x821B3570;
	sub_8222FE20(ctx, base);
	// fadds f12,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64 + ctx.f31.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f11,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f10,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f9.f64 = double(temp.f32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f13,6016(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6016);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,6056(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6056);
	ctx.f0.f64 = double(temp.f32);
	// fnmsubs f8,f29,f0,f11
	ctx.f8.f64 = double(float(-(ctx.f29.f64 * ctx.f0.f64 - ctx.f11.f64)));
	// fnmsubs f7,f30,f0,f10
	ctx.f7.f64 = double(float(-(ctx.f30.f64 * ctx.f0.f64 - ctx.f10.f64)));
	// fmadds f6,f12,f13,f28
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f13.f64 + ctx.f28.f64));
	// fnmsubs f5,f27,f0,f9
	ctx.f5.f64 = double(float(-(ctx.f27.f64 * ctx.f0.f64 - ctx.f9.f64)));
	// fmuls f4,f6,f23
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f23.f64));
	// fmadds f3,f26,f4,f8
	ctx.f3.f64 = double(float(ctx.f26.f64 * ctx.f4.f64 + ctx.f8.f64));
	// stfs f3,80(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmadds f2,f25,f4,f7
	ctx.f2.f64 = double(float(ctx.f25.f64 * ctx.f4.f64 + ctx.f7.f64));
	// stfs f2,84(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmadds f1,f24,f4,f5
	ctx.f1.f64 = double(float(ctx.f24.f64 * ctx.f4.f64 + ctx.f5.f64));
	// stfs f1,88(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x8223fb50
	ctx.lr = 0x821B35C4;
	sub_8223FB50(ctx, base);
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// bl 0x8222fe20
	ctx.lr = 0x821B35CC;
	sub_8222FE20(ctx, base);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lfs f13,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,25496(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 25496);
	ctx.f0.f64 = double(temp.f32);
	// fnmsubs f12,f1,f0,f30
	ctx.f12.f64 = double(float(-(ctx.f1.f64 * ctx.f0.f64 - ctx.f30.f64)));
	// fadds f0,f13,f12
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// b 0x821b3660
	goto loc_821B3660;
loc_821B35E4:
	// fsubs f22,f31,f21
	ctx.fpscr.disableFlushMode();
	ctx.f22.f64 = double(float(ctx.f31.f64 - ctx.f21.f64));
	// bl 0x8222fe20
	ctx.lr = 0x821B35EC;
	sub_8222FE20(ctx, base);
	// fmuls f11,f1,f22
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64 * ctx.f22.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f10,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f10.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f9,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f8.f64 = double(temp.f32);
	// lfs f13,5876(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5876);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,25492(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 25492);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,6056(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 6056);
	ctx.f0.f64 = double(temp.f32);
	// fnmsubs f7,f29,f0,f10
	ctx.f7.f64 = double(float(-(ctx.f29.f64 * ctx.f0.f64 - ctx.f10.f64)));
	// fnmsubs f4,f27,f0,f8
	ctx.f4.f64 = double(float(-(ctx.f27.f64 * ctx.f0.f64 - ctx.f8.f64)));
	// fmadds f5,f11,f13,f28
	ctx.f5.f64 = double(float(ctx.f11.f64 * ctx.f13.f64 + ctx.f28.f64));
	// fnmsubs f6,f30,f0,f9
	ctx.f6.f64 = double(float(-(ctx.f30.f64 * ctx.f0.f64 - ctx.f9.f64)));
	// fadds f3,f5,f12
	ctx.f3.f64 = double(float(ctx.f5.f64 + ctx.f12.f64));
	// fmuls f2,f3,f23
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f23.f64));
	// fmadds f1,f26,f2,f7
	ctx.f1.f64 = double(float(ctx.f26.f64 * ctx.f2.f64 + ctx.f7.f64));
	// stfs f1,80(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmadds f0,f25,f2,f6
	ctx.f0.f64 = double(float(ctx.f25.f64 * ctx.f2.f64 + ctx.f6.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmadds f13,f24,f2,f4
	ctx.f13.f64 = double(float(ctx.f24.f64 * ctx.f2.f64 + ctx.f4.f64));
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x8222fe68
	ctx.lr = 0x821B3648;
	sub_8222FE68(ctx, base);
	// fmuls f12,f1,f22
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64 * ctx.f22.f64));
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lfs f11,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,25488(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 25488);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f10,f12,f0
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fadds f0,f10,f11
	ctx.f0.f64 = double(float(ctx.f10.f64 + ctx.f11.f64));
loc_821B3660:
	// lfs f13,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lfs f12,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// lfs f10,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f10.f64 = double(temp.f32);
	// stfs f11,0(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// lfs f9,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f10,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 - ctx.f9.f64));
	// fmuls f4,f8,f8
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f8.f64));
	// stfs f8,4(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// lfs f7,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f3,f0,f7
	ctx.f3.f64 = double(float(ctx.f0.f64 - ctx.f7.f64));
	// fmadds f2,f11,f11,f4
	ctx.f2.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f4.f64));
	// stfs f3,8(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// fmr f6,f11
	ctx.f6.f64 = ctx.f11.f64;
	// fmr f5,f8
	ctx.f5.f64 = ctx.f8.f64;
	// fmr f1,f3
	ctx.f1.f64 = ctx.f3.f64;
	// fmadds f0,f3,f3,f2
	ctx.f0.f64 = double(float(ctx.f3.f64 * ctx.f3.f64 + ctx.f2.f64));
	// fsqrts f13,f0
	ctx.f13.f64 = double(float(sqrt(ctx.f0.f64)));
	// fneg f12,f13
	ctx.f12.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fsel f11,f12,f31,f13
	ctx.f11.f64 = ctx.f12.f64 >= 0.0 ? ctx.f31.f64 : ctx.f13.f64;
	// fdivs f10,f31,f11
	ctx.f10.f64 = double(float(ctx.f31.f64 / ctx.f11.f64));
	// fmuls f9,f6,f10
	ctx.f9.f64 = double(float(ctx.f6.f64 * ctx.f10.f64));
	// stfs f9,0(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// fmuls f8,f8,f10
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f10.f64));
	// stfs f8,4(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// fmuls f7,f3,f10
	ctx.f7.f64 = double(float(ctx.f3.f64 * ctx.f10.f64));
	// stfs f7,8(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x823de058
	ctx.lr = 0x821B36DC;
	__restfpr_21(ctx, base);
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821B33E8) {
	__imp__sub_821B33E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B36E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x821B36E8;
	__savegprlr_27(ctx, base);
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x823de01c
	ctx.lr = 0x821B36F0;
	__savefpr_25(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r27,-32191
	ctx.r27.s64 = -2109669376;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lfs f0,7264(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 7264);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,25512(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 25512);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x821b3724
	if (!ctx.cr6.eq) goto loc_821B3724;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfd f0,25504(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 25504);
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// stfs f0,7264(r27)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r27.u32 + 7264, temp.u32);
loc_821B3724:
	// lfs f0,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// addi r30,r3,36
	ctx.r30.s64 = ctx.r3.s64 + 36;
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,8(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,44(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	ctx.f10.f64 = double(temp.f32);
	// addi r29,r3,24
	ctx.r29.s64 = ctx.r3.s64 + 24;
	// fsubs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lfs f8,4(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,40(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// lfs f31,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f31.f64 = double(temp.f32);
	// lfs f5,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f2,f12,f12
	ctx.f2.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f1,f9,f9,f2
	ctx.f1.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f2.f64));
	// fmadds f0,f6,f6,f1
	ctx.f0.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f1.f64));
	// fsqrts f13,f0
	ctx.f13.f64 = double(float(sqrt(ctx.f0.f64)));
	// fneg f11,f13
	ctx.f11.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fsel f10,f11,f31,f13
	ctx.f10.f64 = ctx.f11.f64 >= 0.0 ? ctx.f31.f64 : ctx.f13.f64;
	// fdivs f8,f31,f10
	ctx.f8.f64 = double(float(ctx.f31.f64 / ctx.f10.f64));
	// fmuls f30,f8,f12
	ctx.f30.f64 = double(float(ctx.f8.f64 * ctx.f12.f64));
	// fmuls f29,f8,f6
	ctx.f29.f64 = double(float(ctx.f8.f64 * ctx.f6.f64));
	// fmuls f28,f9,f8
	ctx.f28.f64 = double(float(ctx.f9.f64 * ctx.f8.f64));
	// fmuls f7,f5,f30
	ctx.f7.f64 = double(float(ctx.f5.f64 * ctx.f30.f64));
	// fmuls f6,f4,f29
	ctx.f6.f64 = double(float(ctx.f4.f64 * ctx.f29.f64));
	// fmuls f2,f3,f28
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f28.f64));
	// fmsubs f1,f4,f28,f7
	ctx.f1.f64 = double(float(ctx.f4.f64 * ctx.f28.f64 - ctx.f7.f64));
	// fmsubs f0,f3,f30,f6
	ctx.f0.f64 = double(float(ctx.f3.f64 * ctx.f30.f64 - ctx.f6.f64));
	// fmsubs f13,f5,f29,f2
	ctx.f13.f64 = double(float(ctx.f5.f64 * ctx.f29.f64 - ctx.f2.f64));
	// fmuls f12,f1,f1
	ctx.f12.f64 = double(float(ctx.f1.f64 * ctx.f1.f64));
	// fmadds f11,f0,f0,f12
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f12.f64));
	// fmadds f10,f13,f13,f11
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f11.f64));
	// fsqrts f9,f10
	ctx.f9.f64 = double(float(sqrt(ctx.f10.f64)));
	// fneg f8,f9
	ctx.f8.u64 = ctx.f9.u64 ^ 0x8000000000000000;
	// fsel f7,f8,f31,f9
	ctx.f7.f64 = ctx.f8.f64 >= 0.0 ? ctx.f31.f64 : ctx.f9.f64;
	// fdivs f6,f31,f7
	ctx.f6.f64 = double(float(ctx.f31.f64 / ctx.f7.f64));
	// fmuls f27,f6,f13
	ctx.f27.f64 = double(float(ctx.f6.f64 * ctx.f13.f64));
	// fmuls f26,f1,f6
	ctx.f26.f64 = double(float(ctx.f1.f64 * ctx.f6.f64));
	// fmuls f25,f0,f6
	ctx.f25.f64 = double(float(ctx.f0.f64 * ctx.f6.f64));
	// bl 0x8222fe20
	ctx.lr = 0x821B37D0;
	sub_8222FE20(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,2416(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2416);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x821b37e8
	if (!ctx.cr6.gt) goto loc_821B37E8;
	// fmr f13,f31
	ctx.f13.f64 = ctx.f31.f64;
	// b 0x821b37f0
	goto loc_821B37F0;
loc_821B37E8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,2424(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2424);
	ctx.f13.f64 = double(temp.f32);
loc_821B37F0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,7264(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 7264);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f12,0(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,4(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f0,6056(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6056);
	ctx.f0.f64 = double(temp.f32);
	// fnmsubs f9,f30,f0,f12
	ctx.f9.f64 = double(float(-(ctx.f30.f64 * ctx.f0.f64 - ctx.f12.f64)));
	// fnmsubs f8,f29,f0,f11
	ctx.f8.f64 = double(float(-(ctx.f29.f64 * ctx.f0.f64 - ctx.f11.f64)));
	// fnmsubs f7,f28,f0,f10
	ctx.f7.f64 = double(float(-(ctx.f28.f64 * ctx.f0.f64 - ctx.f10.f64)));
	// fmadds f30,f27,f13,f9
	ctx.f30.f64 = double(float(ctx.f27.f64 * ctx.f13.f64 + ctx.f9.f64));
	// fmadds f29,f26,f13,f8
	ctx.f29.f64 = double(float(ctx.f26.f64 * ctx.f13.f64 + ctx.f8.f64));
	// fmadds f28,f25,f13,f7
	ctx.f28.f64 = double(float(ctx.f25.f64 * ctx.f13.f64 + ctx.f7.f64));
	// bl 0x8222fe68
	ctx.lr = 0x821B3828;
	sub_8222FE68(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f6,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// lfs f0,13904(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 13904);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f2,f1,f0
	ctx.f2.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fmadds f1,f6,f2,f30
	ctx.f1.f64 = double(float(ctx.f6.f64 * ctx.f2.f64 + ctx.f30.f64));
	// fmadds f0,f5,f2,f29
	ctx.f0.f64 = double(float(ctx.f5.f64 * ctx.f2.f64 + ctx.f29.f64));
	// fmadds f13,f3,f2,f28
	ctx.f13.f64 = double(float(ctx.f3.f64 * ctx.f2.f64 + ctx.f28.f64));
	// fsubs f12,f1,f4
	ctx.f12.f64 = double(float(ctx.f1.f64 - ctx.f4.f64));
	// stfs f12,0(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// lfs f11,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f0,f11
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// fmuls f6,f10,f10
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// stfs f10,4(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// lfs f9,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f5,f13,f9
	ctx.f5.f64 = double(float(ctx.f13.f64 - ctx.f9.f64));
	// fmadds f4,f12,f12,f6
	ctx.f4.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f6.f64));
	// stfs f5,8(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// fmr f8,f12
	ctx.f8.f64 = ctx.f12.f64;
	// fmr f7,f10
	ctx.f7.f64 = ctx.f10.f64;
	// fmr f3,f5
	ctx.f3.f64 = ctx.f5.f64;
	// fmadds f2,f5,f5,f4
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f5.f64 + ctx.f4.f64));
	// fsqrts f1,f2
	ctx.f1.f64 = double(float(sqrt(ctx.f2.f64)));
	// fneg f0,f1
	ctx.f0.u64 = ctx.f1.u64 ^ 0x8000000000000000;
	// fsel f13,f0,f31,f1
	ctx.f13.f64 = ctx.f0.f64 >= 0.0 ? ctx.f31.f64 : ctx.f1.f64;
	// fdivs f12,f31,f13
	ctx.f12.f64 = double(float(ctx.f31.f64 / ctx.f13.f64));
	// fmuls f11,f8,f12
	ctx.f11.f64 = double(float(ctx.f8.f64 * ctx.f12.f64));
	// stfs f11,0(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// fmuls f10,f10,f12
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// stfs f10,4(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// fmuls f9,f5,f12
	ctx.f9.f64 = double(float(ctx.f5.f64 * ctx.f12.f64));
	// stfs f9,8(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x823de068
	ctx.lr = 0x821B38BC;
	__restfpr_25(ctx, base);
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821B36E0) {
	__imp__sub_821B36E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B38C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,224(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 224);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lis r9,-32052
	ctx.r9.s64 = -2100559872;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// addi r11,r9,26552
	ctx.r11.s64 = ctx.r9.s64 + 26552;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// stw r7,224(r10)
	PPC_STORE_U32(ctx.r10.u32 + 224, ctx.r7.u32);
	// lhz r6,56(r8)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r8.u32 + 56);
	// mulli r10,r6,624
	ctx.r10.s64 = ctx.r6.s64 * 624;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r10,r11,-624
	ctx.r10.s64 = ctx.r11.s64 + -624;
	// lwz r4,-352(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -352);
	// b 0x821b33e8
	sub_821B33E8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821B38C0) {
	__imp__sub_821B38C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B38F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,48(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lfs f13,52(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lfs f12,56(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821B38F8) {
	__imp__sub_821B38F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B3914) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821B3914) {
	__imp__sub_821B3914(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B3918) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f12,0(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lfs f11,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,40(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// fmuls f4,f9,f9
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f9.f64));
	// stfs f9,4(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lfs f8,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fmr f6,f12
	ctx.f6.f64 = ctx.f12.f64;
	// lfs f7,44(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f3,f8,f7
	ctx.f3.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// fmadds f2,f12,f12,f4
	ctx.f2.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f4.f64));
	// lfs f0,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// fmr f5,f9
	ctx.f5.f64 = ctx.f9.f64;
	// stfs f3,8(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// fmr f1,f3
	ctx.f1.f64 = ctx.f3.f64;
	// fmadds f13,f3,f3,f2
	ctx.f13.f64 = double(float(ctx.f3.f64 * ctx.f3.f64 + ctx.f2.f64));
	// fsqrts f12,f13
	ctx.f12.f64 = double(float(sqrt(ctx.f13.f64)));
	// fneg f11,f12
	ctx.f11.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// fsel f10,f11,f0,f12
	ctx.f10.f64 = ctx.f11.f64 >= 0.0 ? ctx.f0.f64 : ctx.f12.f64;
	// fdivs f9,f0,f10
	ctx.f9.f64 = double(float(ctx.f0.f64 / ctx.f10.f64));
	// fmuls f8,f6,f9
	ctx.f8.f64 = double(float(ctx.f6.f64 * ctx.f9.f64));
	// stfs f8,0(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// fmuls f7,f5,f9
	ctx.f7.f64 = double(float(ctx.f5.f64 * ctx.f9.f64));
	// stfs f7,4(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// fmuls f6,f3,f9
	ctx.f6.f64 = double(float(ctx.f3.f64 * ctx.f9.f64));
	// stfs f6,8(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821B3918) {
	__imp__sub_821B3918(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B3994) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821B3994) {
	__imp__sub_821B3994(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B3998) {
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
	// stfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x821b2d88
	ctx.lr = 0x821B39BC;
	sub_821B2D88(ctx, base);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x8222fe20
	ctx.lr = 0x821B39C4;
	sub_8222FE20(ctx, base);
	// fcmpu cr6,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f1.f64);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ble cr6,0x821b3a14
	if (!ctx.cr6.gt) goto loc_821B3A14;
	// lwz r11,228(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r8,-32052
	ctx.r8.s64 = -2100559872;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stw r10,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r10.u32);
	// addi r11,r8,26552
	ctx.r11.s64 = ctx.r8.s64 + 26552;
	// stw r7,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r7.u32);
	// lhz r6,56(r9)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r9.u32 + 56);
	// addi r10,r11,272
	ctx.r10.s64 = ctx.r11.s64 + 272;
	// mulli r11,r6,624
	ctx.r11.s64 = ctx.r6.s64 * 624;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r4,-624(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + -624);
	// bl 0x821b3040
	ctx.lr = 0x821B3A0C;
	sub_821B3040(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x821b3a40
	goto loc_821B3A40;
loc_821B3A14:
	// lwz r11,224(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,26552
	ctx.r10.s64 = ctx.r10.s64 + 26552;
	// stw r8,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r8.u32);
	// lhz r7,56(r9)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r9.u32 + 56);
	// mulli r11,r7,624
	ctx.r11.s64 = ctx.r7.s64 * 624;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r11,-624
	ctx.r10.s64 = ctx.r11.s64 + -624;
	// lwz r4,-352(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -352);
	// bl 0x821b33e8
	ctx.lr = 0x821B3A40;
	sub_821B33E8(ctx, base);
loc_821B3A40:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
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

PPC_WEAK_FUNC(sub_821B3998) {
	__imp__sub_821B3998(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B3A5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821B3A5C) {
	__imp__sub_821B3A5C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B3A60) {
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
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// lbz r9,91(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 91);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821b3aa4
	if (ctx.cr6.eq) goto loc_821B3AA4;
	// lis r10,-31961
	ctx.r10.s64 = -2094596096;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r9,r10,-25976
	ctx.r9.s64 = ctx.r10.s64 + -25976;
	// lhz r4,196(r9)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r9.u32 + 196);
	// bl 0x8222f018
	ctx.lr = 0x821B3AA0;
	sub_8222F018(ctx, base);
	// b 0x821b3aac
	goto loc_821B3AAC;
loc_821B3AA4:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8222e490
	ctx.lr = 0x821B3AAC;
	sub_8222E490(ctx, base);
loc_821B3AAC:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821b3220
	ctx.lr = 0x821B3ABC;
	sub_821B3220(ctx, base);
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

PPC_WEAK_FUNC(sub_821B3A60) {
	__imp__sub_821B3A60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B3AD0) {
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
	// lfs f13,48(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmuls f10,f0,f13
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f9,52(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f9.f64 = double(temp.f32);
	// addi r5,r3,48
	ctx.r5.s64 = ctx.r3.s64 + 48;
	// lfs f12,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f8,56(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	ctx.f8.f64 = double(temp.f32);
	// lfs f11,25516(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 25516);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f7,f9,f13,f10
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f13.f64 + ctx.f10.f64));
	// fmadds f6,f8,f12,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f12.f64 + ctx.f7.f64));
	// fabs f5,f6
	ctx.f5.u64 = ctx.f6.u64 & ~0x8000000000000000;
	// fcmpu cr6,f5,f11
	ctx.cr6.compare(ctx.f5.f64, ctx.f11.f64);
	// bge cr6,0x821b3bac
	if (!ctx.cr6.lt) goto loc_821B3BAC;
	// lfs f10,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmuls f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// lfs f6,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// lfs f8,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f5,f6,f12
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f12.f64));
	// fmuls f7,f8,f0
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f11,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f11.f64 = double(temp.f32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f1,7932(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 7932);
	ctx.f1.f64 = double(temp.f32);
	// fmsubs f4,f8,f12,f9
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f12.f64 - ctx.f9.f64));
	// fmsubs f2,f10,f0,f5
	ctx.f2.f64 = double(float(ctx.f10.f64 * ctx.f0.f64 - ctx.f5.f64));
	// fmsubs f3,f6,f13,f7
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f13.f64 - ctx.f7.f64));
	// fmuls f0,f4,f4
	ctx.f0.f64 = double(float(ctx.f4.f64 * ctx.f4.f64));
	// fmadds f13,f3,f3,f0
	ctx.f13.f64 = double(float(ctx.f3.f64 * ctx.f3.f64 + ctx.f0.f64));
	// fmadds f12,f2,f2,f13
	ctx.f12.f64 = double(float(ctx.f2.f64 * ctx.f2.f64 + ctx.f13.f64));
	// fsqrts f10,f12
	ctx.f10.f64 = double(float(sqrt(ctx.f12.f64)));
	// fneg f9,f10
	ctx.f9.u64 = ctx.f10.u64 ^ 0x8000000000000000;
	// fsel f8,f9,f11,f10
	ctx.f8.f64 = ctx.f9.f64 >= 0.0 ? ctx.f11.f64 : ctx.f10.f64;
	// fdivs f7,f11,f8
	ctx.f7.f64 = double(float(ctx.f11.f64 / ctx.f8.f64));
	// fmuls f6,f7,f4
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f4.f64));
	// stfs f6,80(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f5,f7,f2
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f2.f64));
	// stfs f5,84(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmuls f4,f3,f7
	ctx.f4.f64 = double(float(ctx.f3.f64 * ctx.f7.f64));
	// stfs f4,88(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x822d4e08
	ctx.lr = 0x821B3B94;
	sub_822D4E08(ctx, base);
	// lfs f3,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f1.f64 = double(temp.f32);
	// stfs f3,0(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// stfs f2,4(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// stfs f1,8(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
loc_821B3BAC:
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

PPC_WEAK_FUNC(sub_821B3AD0) {
	__imp__sub_821B3AD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B3BC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// lwz r10,236(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 236);
	// addi r9,r11,9624
	ctx.r9.s64 = ctx.r11.s64 + 9624;
	// lwz r11,52(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 52);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x821b3be0
	if (!ctx.cr6.eq) goto loc_821B3BE0;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_821B3BE0:
	// stw r11,236(r3)
	PPC_STORE_U32(ctx.r3.u32 + 236, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821B3BC0) {
	__imp__sub_821B3BC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B3BEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821B3BEC) {
	__imp__sub_821B3BEC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B3BF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x821B3BF8;
	__savegprlr_25(ctx, base);
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// lwz r10,236(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 236);
	// lwz r27,0(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r26,r11,9624
	ctx.r26.s64 = ctx.r11.s64 + 9624;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// lwz r11,52(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 52);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x821b3c34
	if (!ctx.cr6.eq) goto loc_821B3C34;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x821b3c3c
	goto loc_821B3C3C;
loc_821B3C34:
	// stw r11,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
loc_821B3C3C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821b3e9c
	if (!ctx.cr6.eq) goto loc_821B3E9C;
	// lhz r3,214(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 214);
	// bl 0x822a13a0
	ctx.lr = 0x821B3C50;
	sub_822A13A0(ctx, base);
	// bl 0x82232100
	ctx.lr = 0x821B3C54;
	sub_82232100(ctx, base);
	// stw r3,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r3.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x82332af8
	ctx.lr = 0x821B3C60;
	sub_82332AF8(ctx, base);
	// stw r3,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r3.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82332b10
	ctx.lr = 0x821B3C6C;
	sub_82332B10(ctx, base);
	// stw r3,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r3.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821b2f98
	ctx.lr = 0x821B3C7C;
	sub_821B2F98(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821aa3a0
	ctx.lr = 0x821B3C84;
	sub_821AA3A0(ctx, base);
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x821bebf8
	ctx.lr = 0x821B3C94;
	sub_821BEBF8(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x821b3dcc
	if (ctx.cr6.eq) goto loc_821B3DCC;
	// lfs f0,4(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f13.f64 = double(temp.f32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,140(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lfs f8,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// lfs f0,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f5,f12,f12
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f4,f9,f9,f5
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f5.f64));
	// fmadds f3,f6,f6,f4
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f4.f64));
	// fsqrts f2,f3
	ctx.f2.f64 = double(float(sqrt(ctx.f3.f64)));
	// fneg f1,f2
	ctx.f1.u64 = ctx.f2.u64 ^ 0x8000000000000000;
	// fsel f13,f1,f0,f2
	ctx.f13.f64 = ctx.f1.f64 >= 0.0 ? ctx.f0.f64 : ctx.f2.f64;
	// fdivs f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// fmuls f10,f11,f6
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f6.f64));
	// stfs f10,96(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmuls f8,f12,f11
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// stfs f8,100(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmuls f7,f9,f11
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f11.f64));
	// stfs f7,104(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// beq cr6,0x821b3d94
	if (ctx.cr6.eq) goto loc_821B3D94;
	// lwz r11,272(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 272);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b3d94
	if (ctx.cr6.eq) goto loc_821B3D94;
	// addi r29,r30,208
	ctx.r29.s64 = ctx.r30.s64 + 208;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822d59e8
	ctx.lr = 0x821B3D28;
	sub_822D59E8(ctx, base);
	// lfs f0,208(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 208);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f11,220(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	ctx.f11.f64 = double(temp.f32);
	// fabs f10,f12
	ctx.f10.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// fcmpu cr6,f10,f11
	ctx.cr6.compare(ctx.f10.f64, ctx.f11.f64);
	// bge cr6,0x821b3d94
	if (!ctx.cr6.lt) goto loc_821B3D94;
	// lfs f0,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f11,16(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// fabs f10,f12
	ctx.f10.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// fcmpu cr6,f10,f11
	ctx.cr6.compare(ctx.f10.f64, ctx.f11.f64);
	// bge cr6,0x821b3d94
	if (!ctx.cr6.lt) goto loc_821B3D94;
	// lfs f0,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f11,20(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// fabs f10,f12
	ctx.f10.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// fcmpu cr6,f10,f11
	ctx.cr6.compare(ctx.f10.f64, ctx.f11.f64);
	// bge cr6,0x821b3d94
	if (!ctx.cr6.lt) goto loc_821B3D94;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_821B3D88:
	// bl 0x821b3998
	ctx.lr = 0x821B3D8C;
	sub_821B3998(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821b3d9c
	if (ctx.cr6.eq) goto loc_821B3D9C;
loc_821B3D94:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x821b3ad0
	ctx.lr = 0x821B3D9C;
	sub_821B3AD0(ctx, base);
loc_821B3D9C:
	// sth r28,124(r27)
	PPC_STORE_U16(ctx.r27.u32 + 124, ctx.r28.u16);
	// lwz r3,160(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821b3e44
	if (!ctx.cr6.eq) goto loc_821B3E44;
	// bl 0x82334308
	ctx.lr = 0x821B3DB4;
	sub_82334308(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821b3e18
	if (!ctx.cr6.eq) goto loc_821B3E18;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f1.f64 = double(temp.f32);
	// b 0x821b3e20
	goto loc_821B3E20;
loc_821B3DCC:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x821b3df0
	if (!ctx.cr6.eq) goto loc_821B3DF0;
	// lfs f0,144(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// b 0x821b3d94
	goto loc_821B3D94;
loc_821B3DF0:
	// lwz r11,272(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 272);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b3e0c
	if (ctx.cr6.eq) goto loc_821B3E0C;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// b 0x821b3d88
	goto loc_821B3D88;
loc_821B3E0C:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x821b3a60
	ctx.lr = 0x821B3E14;
	sub_821B3A60(ctx, base);
	// b 0x821b3d94
	goto loc_821B3D94;
loc_821B3E18:
	// lwz r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// lfs f1,1216(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1216);
	ctx.f1.f64 = double(temp.f32);
loc_821B3E20:
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// lwz r7,52(r26)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r26.u32 + 52);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821e2978
	ctx.lr = 0x821B3E34;
	sub_821E2978(ctx, base);
	// cntlzw r11,r25
	ctx.r11.u64 = ctx.r25.u32 == 0 ? 32 : __builtin_clz(ctx.r25.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r4,r11,30
	ctx.r4.s64 = ctx.r11.s64 + 30;
	// b 0x821b3e90
	goto loc_821B3E90;
loc_821B3E44:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x821b3e9c
	if (!ctx.cr6.eq) goto loc_821B3E9C;
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bne cr6,0x821b3e70
	if (!ctx.cr6.eq) goto loc_821B3E70;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82231680
	ctx.lr = 0x821B3E6C;
	sub_82231680(ctx, base);
	// b 0x821b3e8c
	goto loc_821B3E8C;
loc_821B3E70:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r7,r10,-5928
	ctx.r7.s64 = ctx.r10.s64 + -5928;
	// li r8,0
	ctx.r8.s64 = 0;
	// lfs f1,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82231a78
	ctx.lr = 0x821B3E8C;
	sub_82231A78(ctx, base);
loc_821B3E8C:
	// li r4,30
	ctx.r4.s64 = 30;
loc_821B3E90:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8222f978
	ctx.lr = 0x821B3E9C;
	sub_8222F978(ctx, base);
loc_821B3E9C:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821B3BF0) {
	__imp__sub_821B3BF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B3EA8) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// lwz r10,236(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 236);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r9,r11,9624
	ctx.r9.s64 = ctx.r11.s64 + 9624;
	// lwz r11,52(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 52);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x821b3ee0
	if (!ctx.cr6.eq) goto loc_821B3EE0;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x821b3ee8
	goto loc_821B3EE8;
loc_821B3EE0:
	// stw r11,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
loc_821B3EE8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821b3f58
	if (!ctx.cr6.eq) goto loc_821B3F58;
	// lhz r3,214(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 214);
	// bl 0x822a13a0
	ctx.lr = 0x821B3EFC;
	sub_822A13A0(ctx, base);
	// bl 0x82232100
	ctx.lr = 0x821B3F00;
	sub_82232100(ctx, base);
	// stw r3,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r3.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82332af8
	ctx.lr = 0x821B3F0C;
	sub_82332AF8(ctx, base);
	// stw r3,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82332b10
	ctx.lr = 0x821B3F18;
	sub_82332B10(ctx, base);
	// stw r3,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821b2f98
	ctx.lr = 0x821B3F28;
	sub_821B2F98(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lfs f0,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// li r5,0
	ctx.r5.s64 = 0;
	// lfs f13,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f13.f64 = double(temp.f32);
	// li r4,30
	ctx.r4.s64 = 30;
	// lfs f12,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// sth r30,124(r10)
	PPC_STORE_U16(ctx.r10.u32 + 124, ctx.r30.u16);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8222f978
	ctx.lr = 0x821B3F58;
	sub_8222F978(ctx, base);
loc_821B3F58:
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

PPC_WEAK_FUNC(sub_821B3EA8) {
	__imp__sub_821B3EA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B3F70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x821B3F78;
	__savegprlr_26(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r26,0(r3)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lhz r3,214(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 214);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x822a13a0
	ctx.lr = 0x821B3F90;
	sub_822A13A0(ctx, base);
	// bl 0x82232100
	ctx.lr = 0x821B3F94;
	sub_82232100(ctx, base);
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// lwz r10,236(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r27,r11,9624
	ctx.r27.s64 = ctx.r11.s64 + 9624;
	// lwz r11,52(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 52);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x821b3fb8
	if (!ctx.cr6.eq) goto loc_821B3FB8;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x821b3fc0
	goto loc_821B3FC0;
loc_821B3FB8:
	// stw r11,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
loc_821B3FC0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b3fd8
	if (ctx.cr6.eq) goto loc_821B3FD8;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_821B3FD8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821aa3d0
	ctx.lr = 0x821B3FE0;
	sub_821AA3D0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821b2f98
	ctx.lr = 0x821B3FF0;
	sub_821B2F98(ctx, base);
	// stw r30,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r30.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82332af8
	ctx.lr = 0x821B3FFC;
	sub_82332AF8(ctx, base);
	// stw r3,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82332b10
	ctx.lr = 0x821B4008;
	sub_82332B10(ctx, base);
	// stw r3,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r3.u32);
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821d8670
	ctx.lr = 0x821B4018;
	sub_821D8670(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x821b40b8
	if (ctx.cr6.eq) goto loc_821B40B8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8223fae0
	ctx.lr = 0x821B402C;
	sub_8223FAE0(ctx, base);
	// lfs f13,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f0.f64 = double(temp.f32);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// lfs f12,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f11,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,140(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f13,f11,f12
	ctx.f13.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// lfs f9,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f12,f9,f10
	ctx.f12.f64 = double(float(ctx.f9.f64 - ctx.f10.f64));
	// beq cr6,0x821b4088
	if (ctx.cr6.eq) goto loc_821B4088;
	// lfs f11,4(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f0,f0
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmuls f9,f11,f11
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// lfs f8,0(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// fmr f7,f11
	ctx.f7.f64 = ctx.f11.f64;
	// fmadds f6,f13,f13,f10
	ctx.f6.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f10.f64));
	// fmadds f5,f8,f8,f9
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 + ctx.f9.f64));
	// fsqrts f4,f6
	ctx.f4.f64 = double(float(sqrt(ctx.f6.f64)));
	// fsqrts f3,f5
	ctx.f3.f64 = double(float(sqrt(ctx.f5.f64)));
	// fdivs f2,f4,f3
	ctx.f2.f64 = double(float(ctx.f4.f64 / ctx.f3.f64));
	// fmuls f0,f8,f2
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f2.f64));
	// fmuls f13,f11,f2
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f2.f64));
loc_821B4088:
	// fmuls f10,f13,f13
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f11,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f9,f12,f12,f10
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f10.f64));
	// fmadds f8,f0,f0,f9
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f9.f64));
	// fsqrts f7,f8
	ctx.f7.f64 = double(float(sqrt(ctx.f8.f64)));
	// fneg f6,f7
	ctx.f6.u64 = ctx.f7.u64 ^ 0x8000000000000000;
	// fsel f5,f6,f11,f7
	ctx.f5.f64 = ctx.f6.f64 >= 0.0 ? ctx.f11.f64 : ctx.f7.f64;
	// fdivs f4,f11,f5
	ctx.f4.f64 = double(float(ctx.f11.f64 / ctx.f5.f64));
	// fmuls f3,f4,f0
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// fmuls f1,f12,f4
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f4.f64));
	// b 0x821b40f8
	goto loc_821B40F8;
loc_821B40B8:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x821b4108
	if (ctx.cr6.eq) goto loc_821B4108;
	// lfs f13,4(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmuls f12,f13,f13
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// lfs f11,8(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,0(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f0,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f9,f11,f11,f12
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f12.f64));
	// fmadds f8,f10,f10,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f10.f64 + ctx.f9.f64));
	// fsqrts f7,f8
	ctx.f7.f64 = double(float(sqrt(ctx.f8.f64)));
	// fneg f6,f7
	ctx.f6.u64 = ctx.f7.u64 ^ 0x8000000000000000;
	// fsel f5,f6,f0,f7
	ctx.f5.f64 = ctx.f6.f64 >= 0.0 ? ctx.f0.f64 : ctx.f7.f64;
	// fdivs f4,f0,f5
	ctx.f4.f64 = double(float(ctx.f0.f64 / ctx.f5.f64));
	// fmuls f3,f4,f10
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f10.f64));
	// fmuls f1,f11,f4
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f4.f64));
loc_821B40F8:
	// fmuls f2,f13,f4
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = double(float(ctx.f13.f64 * ctx.f4.f64));
	// stfs f1,104(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f2,100(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f3,96(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
loc_821B4108:
	// sth r30,124(r26)
	PPC_STORE_U16(ctx.r26.u32 + 124, ctx.r30.u16);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r8,52(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 52);
	// lfs f3,5484(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f3.f64 = double(temp.f32);
	// lfs f1,25352(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 25352);
	ctx.f1.f64 = double(temp.f32);
	// fmr f2,f3
	ctx.f2.f64 = ctx.f3.f64;
	// bl 0x822313a8
	ctx.lr = 0x821B4130;
	sub_822313A8(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821B3F70) {
	__imp__sub_821B3F70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B4138) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lwz r11,268(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 268);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b418c
	if (ctx.cr6.eq) goto loc_821B418C;
	// lhz r3,214(r11)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + 214);
	// bl 0x822a13a0
	ctx.lr = 0x821B416C;
	sub_822A13A0(ctx, base);
	// bl 0x82232100
	ctx.lr = 0x821B4170;
	sub_82232100(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,268(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 268);
	// bl 0x821b28f8
	ctx.lr = 0x821B4188;
	sub_821B28F8(ctx, base);
	// b 0x821b4214
	goto loc_821B4214;
loc_821B418C:
	// lis r11,-32052
	ctx.r11.s64 = -2100559872;
	// lwz r9,26520(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26520);
	// lfs f0,12(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bgt cr6,0x821b41b0
	if (ctx.cr6.gt) goto loc_821B41B0;
	// lis r11,-32032
	ctx.r11.s64 = -2099249152;
	// lwz r11,-6160(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6160);
	// lfs f0,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// b 0x821b4208
	goto loc_821B4208;
loc_821B41B0:
	// lis r11,-32021
	ctx.r11.s64 = -2098528256;
	// lis r10,-32021
	ctx.r10.s64 = -2098528256;
	// lwz r11,-14908(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14908);
	// lwz r10,-14924(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -14924);
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bge cr6,0x821b4204
	if (!ctx.cr6.lt) goto loc_821B4204;
	// lis r11,-32032
	ctx.r11.s64 = -2099249152;
	// lfs f13,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,-6160(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6160);
	// lfs f12,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// beq cr6,0x821b4204
	if (ctx.cr6.eq) goto loc_821B4204;
	// lfs f12,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f0,f12
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// lfs f10,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f31,f12
	ctx.f9.f64 = double(float(ctx.f31.f64 - ctx.f12.f64));
	// fsubs f8,f13,f10
	ctx.f8.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// fdivs f7,f9,f11
	ctx.f7.f64 = double(float(ctx.f9.f64 / ctx.f11.f64));
	// fmadds f0,f7,f8,f10
	ctx.f0.f64 = double(float(ctx.f7.f64 * ctx.f8.f64 + ctx.f10.f64));
	// b 0x821b4208
	goto loc_821B4208;
loc_821B4204:
	// lfs f0,12(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
loc_821B4208:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,7324(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7324);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
loc_821B4214:
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

PPC_WEAK_FUNC(sub_821B4138) {
	__imp__sub_821B4138(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B422C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821B422C) {
	__imp__sub_821B422C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B4230) {
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
	// lhz r3,214(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 214);
	// bl 0x822a13a0
	ctx.lr = 0x821B4244;
	sub_822A13A0(ctx, base);
	// bl 0x82232100
	ctx.lr = 0x821B4248;
	sub_82232100(ctx, base);
	// bl 0x82334448
	ctx.lr = 0x821B424C;
	sub_82334448(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821B4230) {
	__imp__sub_821B4230(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B425C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821B425C) {
	__imp__sub_821B425C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B4260) {
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
	// lhz r3,214(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 214);
	// bl 0x822a13a0
	ctx.lr = 0x821B4274;
	sub_822A13A0(ctx, base);
	// bl 0x82232100
	ctx.lr = 0x821B4278;
	sub_82232100(ctx, base);
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

PPC_WEAK_FUNC(sub_821B4260) {
	__imp__sub_821B4260(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B4290) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x821B4298;
	__savegprlr_27(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32024
	ctx.r11.s64 = -2098724864;
	// lis r10,-32020
	ctx.r10.s64 = -2098462720;
	// li r5,32
	ctx.r5.s64 = 32;
	// addi r9,r10,9624
	ctx.r9.s64 = ctx.r10.s64 + 9624;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,11204(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11204);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,52(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 52);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r8,716(r3)
	PPC_STORE_U32(ctx.r3.u32 + 716, ctx.r8.u32);
	// bl 0x821ba9b8
	ctx.lr = 0x821B42CC;
	sub_821BA9B8(ctx, base);
	// li r27,0
	ctx.r27.s64 = 0;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r3,712(r31)
	PPC_STORE_U32(ctx.r31.u32 + 712, ctx.r3.u32);
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// ble cr6,0x821b4308
	if (!ctx.cr6.gt) goto loc_821B4308;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r28,r31,5058
	ctx.r28.s64 = ctx.r31.s64 + 5058;
	// addi r29,r11,-4
	ctx.r29.s64 = ctx.r11.s64 + -4;
loc_821B42EC:
	// lwzu r3,4(r29)
	ea = 4 + ctx.r29.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	ctx.r29.u32 = ea;
	// bl 0x82234950
	ctx.lr = 0x821B42F4;
	sub_82234950(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// sthu r3,2(r28)
	ea = 2 + ctx.r28.u32;
	PPC_STORE_U16(ea, ctx.r3.u16);
	ctx.r28.u32 = ea;
	// lwz r10,712(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 712);
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x821b42ec
	if (ctx.cr6.lt) goto loc_821B42EC;
loc_821B4308:
	// stb r27,3154(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3154, ctx.r27.u8);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821B4290) {
	__imp__sub_821B4290(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B4314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821B4314) {
	__imp__sub_821B4314(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B4318) {
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
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,92(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b4344
	if (ctx.cr6.eq) goto loc_821B4344;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82240108
	ctx.lr = 0x821B4344;
	sub_82240108(ctx, base);
loc_821B4344:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,3140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3140, ctx.r11.u32);
	// stb r11,3154(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3154, ctx.r11.u8);
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

PPC_WEAK_FUNC(sub_821B4318) {
	__imp__sub_821B4318(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B4364) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821B4364) {
	__imp__sub_821B4364(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B4368) {
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
	// li r30,1
	ctx.r30.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stb r30,3154(r3)
	PPC_STORE_U8(ctx.r3.u32 + 3154, ctx.r30.u8);
	// bl 0x821ae110
	ctx.lr = 0x821B438C;
	sub_821AE110(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821b43c4
	if (ctx.cr6.eq) goto loc_821B43C4;
	// lwz r10,3140(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3140);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt cr6,0x821b43bc
	if (ctx.cr6.gt) goto loc_821B43BC;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// slw r9,r30,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r30.u32 << (ctx.r10.u8 & 0x3F));
	// rlwinm r8,r9,0,23,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x100;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x821b43c4
	if (ctx.cr6.eq) goto loc_821B43C4;
loc_821B43BC:
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x822365a8
	ctx.lr = 0x821B43C4;
	sub_822365A8(ctx, base);
loc_821B43C4:
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

PPC_WEAK_FUNC(sub_821B4368) {
	__imp__sub_821B4368(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B43DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821B43DC) {
	__imp__sub_821B43DC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B43E0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,712(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 712);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,3155(r3)
	PPC_STORE_U8(ctx.r3.u32 + 3155, ctx.r11.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821B43E0) {
	__imp__sub_821B43E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B43F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,712(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 712);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821b440c
	if (!ctx.cr6.eq) goto loc_821B440C;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_821B440C:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,712(r3)
	PPC_STORE_U32(ctx.r3.u32 + 712, ctx.r11.u32);
	// addi r11,r11,2530
	ctx.r11.s64 = ctx.r11.s64 + 2530;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r3,r10,r3
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r3.u32);
	// b 0x82234970
	sub_82234970(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821B43F8) {
	__imp__sub_821B43F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B4424) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821B4424) {
	__imp__sub_821B4424(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B4428) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x821b44a0
	if (ctx.cr6.eq) goto loc_821B44A0;
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// li r10,112
	ctx.r10.s64 = 112;
	// addi r9,r11,9624
	ctx.r9.s64 = ctx.r11.s64 + 9624;
	// lwz r11,20(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// subf r8,r11,r5
	ctx.r8.s64 = ctx.r5.s64 - ctx.r11.s64;
	// divw r7,r8,r10
	ctx.r7.s32 = ctx.r8.s32 / ctx.r10.s32;
	// mulli r11,r7,44
	ctx.r11.s64 = ctx.r7.s64 * 44;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r6,840(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 840);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x821b44a0
	if (ctx.cr6.eq) goto loc_821B44A0;
	// lfs f0,28(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f13,860(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 860);
	ctx.f13.f64 = double(temp.f32);
	// li r3,0
	ctx.r3.s64 = 0;
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,852(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 852);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lfs f8,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,856(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 856);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// lfs f0,14892(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 14892);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f5,f12,f12
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f4,f9,f9,f5
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f5.f64));
	// fmadds f3,f6,f6,f4
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f4.f64));
	// fcmpu cr6,f3,f0
	ctx.cr6.compare(ctx.f3.f64, ctx.f0.f64);
	// bltlr cr6
	if (ctx.cr6.lt) return;
loc_821B44A0:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821B4428) {
	__imp__sub_821B4428(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B44A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,28(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lfs f8,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// lfs f0,25520(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 25520);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fmuls f5,f12,f12
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f4,f9,f9,f5
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f5.f64));
	// fmadds f3,f6,f6,f4
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f4.f64));
	// fcmpu cr6,f3,f0
	ctx.cr6.compare(ctx.f3.f64, ctx.f0.f64);
	// bgt cr6,0x821b44f0
	if (ctx.cr6.gt) goto loc_821B44F0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_821B44F0:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821B44A8) {
	__imp__sub_821B44A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B44F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x821B4500;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x821aa3d0
	ctx.lr = 0x821B450C;
	sub_821AA3D0(ctx, base);
	// lbz r11,3154(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 3154);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821b4630
	if (!ctx.cr6.eq) goto loc_821B4630;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821b467c
	if (ctx.cr6.eq) goto loc_821B467C;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,5000
	ctx.r5.s64 = 5000;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r29,92(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x821d9100
	ctx.lr = 0x821B453C;
	sub_821D9100(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821b45c8
	if (!ctx.cr6.eq) goto loc_821B45C8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lfs f0,240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 240);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,240(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 240);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,232(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,232(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 232);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lfs f8,236(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 236);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,236(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 236);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// lfs f0,-23300(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -23300);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f5,f12,f12
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f4,f9,f9,f5
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f5.f64));
	// fmadds f3,f6,f6,f4
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f4.f64));
	// fcmpu cr6,f3,f0
	ctx.cr6.compare(ctx.f3.f64, ctx.f0.f64);
	// ble cr6,0x821b45c8
	if (!ctx.cr6.gt) goto loc_821B45C8;
	// lwz r4,100(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x821b467c
	if (ctx.cr6.eq) goto loc_821B467C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82235ec0
	ctx.lr = 0x821B45A4;
	sub_82235EC0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821b467c
	if (ctx.cr6.eq) goto loc_821B467C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r11,232
	ctx.r4.s64 = ctx.r11.s64 + 232;
	// bl 0x821b9fc8
	ctx.lr = 0x821B45BC;
	sub_821B9FC8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821b467c
	if (!ctx.cr6.eq) goto loc_821B467C;
loc_821B45C8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821cf148
	ctx.lr = 0x821B45D0;
	sub_821CF148(ctx, base);
	// lwz r31,804(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 804);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821b467c
	if (ctx.cr6.eq) goto loc_821B467C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821b44a8
	ctx.lr = 0x821B45E8;
	sub_821B44A8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b4630
	if (ctx.cr6.eq) goto loc_821B4630;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// slw r11,r10,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// rlwinm r9,r11,0,23,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x821b463c
	if (ctx.cr6.eq) goto loc_821B463C;
	// lwz r11,712(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 712);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821b467c
	if (ctx.cr6.eq) goto loc_821B467C;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82236610
	ctx.lr = 0x821B4628;
	sub_82236610(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821b467c
	if (ctx.cr6.eq) goto loc_821B467C;
loc_821B4630:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_821B463C:
	// lis r12,4
	ctx.r12.s64 = 262144;
	// ori r12,r12,7932
	ctx.r12.u64 = ctx.r12.u64 | 7932;
	// and r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 & ctx.r12.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821b467c
	if (ctx.cr6.eq) goto loc_821B467C;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82236610
	ctx.lr = 0x821B4660;
	sub_82236610(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821b4630
	if (!ctx.cr6.eq) goto loc_821B4630;
	// addi r4,r31,20
	ctx.r4.s64 = ctx.r31.s64 + 20;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821b9fc8
	ctx.lr = 0x821B4674;
	sub_821B9FC8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_821B467C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821B44F8) {
	__imp__sub_821B44F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B4688) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x821B4690;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4940(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4940);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821b46b4
	if (!ctx.cr6.eq) goto loc_821B46B4;
	// bl 0x821b1640
	ctx.lr = 0x821B46A8;
	sub_821B1640(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b47a8
	if (ctx.cr6.eq) goto loc_821B47A8;
loc_821B46B4:
	// lwz r11,712(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 712);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821b46c8
	if (!ctx.cr6.eq) goto loc_821B46C8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821b4290
	ctx.lr = 0x821B46C8;
	sub_821B4290(ctx, base);
loc_821B46C8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821aa3d0
	ctx.lr = 0x821B46D0;
	sub_821AA3D0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821b46e8
	if (ctx.cr6.eq) goto loc_821B46E8;
	// bl 0x8223fb90
	ctx.lr = 0x821B46E0;
	sub_8223FB90(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x821b46ec
	goto loc_821B46EC;
loc_821B46E8:
	// li r29,0
	ctx.r29.s64 = 0;
loc_821B46EC:
	// lwz r11,712(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 712);
	// neg r10,r11
	ctx.r10.s64 = -ctx.r11.s64;
	// andc r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 & ~ctx.r11.u64;
	// rlwinm r27,r9,1,31,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
loc_821B46FC:
	// lwz r11,712(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 712);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x821b4790
	if (!ctx.cr6.gt) goto loc_821B4790;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,712(r31)
	PPC_STORE_U32(ctx.r31.u32 + 712, ctx.r11.u32);
	// addi r11,r11,2530
	ctx.r11.s64 = ctx.r11.s64 + 2530;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r3,r10,r31
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r31.u32);
	// bl 0x82234970
	ctx.lr = 0x821B4720;
	sub_82234970(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x821b473c
	if (ctx.cr6.eq) goto loc_821B473C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82235ec0
	ctx.lr = 0x821B4734;
	sub_82235EC0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821b46fc
	if (!ctx.cr6.eq) goto loc_821B46FC;
loc_821B473C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82236610
	ctx.lr = 0x821B474C;
	sub_82236610(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821b46fc
	if (!ctx.cr6.eq) goto loc_821B46FC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x822386a0
	ctx.lr = 0x821B4760;
	sub_822386A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821b46fc
	if (ctx.cr6.eq) goto loc_821B46FC;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821b4428
	ctx.lr = 0x821B4778;
	sub_821B4428(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b46fc
	if (ctx.cr6.eq) goto loc_821B46FC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_821B4790:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x821b47a8
	if (ctx.cr6.eq) goto loc_821B47A8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821b47a8
	if (!ctx.cr6.eq) goto loc_821B47A8;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,3155(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3155, ctx.r11.u8);
loc_821B47A8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821B4688) {
	__imp__sub_821B4688(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B47B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821B47B4) {
	__imp__sub_821B47B4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B47B8) {
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
	// bl 0x821ab968
	ctx.lr = 0x821B47D4;
	sub_821AB968(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821b48a8
	if (!ctx.cr6.eq) goto loc_821B48A8;
	// lbz r11,3155(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3155);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b48a8
	if (ctx.cr6.eq) goto loc_821B48A8;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,3155(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3155, ctx.r11.u8);
	// bl 0x821aa3d0
	ctx.lr = 0x821B47FC;
	sub_821AA3D0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821b48a8
	if (ctx.cr6.eq) goto loc_821B48A8;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,5000
	ctx.r5.s64 = 5000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821d9100
	ctx.lr = 0x821B4818;
	sub_821D9100(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b48a8
	if (ctx.cr6.eq) goto loc_821B48A8;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r10,232
	ctx.r3.s64 = ctx.r10.s64 + 232;
	// lfs f0,240(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 240);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,240(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 240);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,232(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 232);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,232(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lfs f8,236(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 236);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,236(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 236);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// lfs f0,20420(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 20420);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f5,f12,f12
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f4,f9,f9,f5
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f5.f64));
	// fmadds f3,f6,f6,f4
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f4.f64));
	// fcmpu cr6,f3,f0
	ctx.cr6.compare(ctx.f3.f64, ctx.f0.f64);
	// bge cr6,0x821b48a8
	if (!ctx.cr6.lt) goto loc_821B48A8;
	// addi r4,r31,4916
	ctx.r4.s64 = ctx.r31.s64 + 4916;
	// bl 0x821aae88
	ctx.lr = 0x821B4878;
	sub_821AAE88(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b48a8
	if (ctx.cr6.eq) goto loc_821B48A8;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821bf4e0
	ctx.lr = 0x821B4890;
	sub_821BF4E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821bf6e8
	ctx.lr = 0x821B4898;
	sub_821BF6E8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821b48ac
	if (!ctx.cr6.eq) goto loc_821B48AC;
loc_821B48A8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821B48AC:
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

PPC_WEAK_FUNC(sub_821B47B8) {
	__imp__sub_821B47B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B48C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821B48C4) {
	__imp__sub_821B48C4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B48C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x821B48D0;
	__savegprlr_26(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x8223fb10
	ctx.lr = 0x821B48E8;
	sub_8223FB10(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821201f0
	ctx.lr = 0x821B48F0;
	sub_821201F0(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r31,92(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821b4924
	if (ctx.cr6.eq) goto loc_821B4924;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-2264
	ctx.r5.s64 = ctx.r11.s64 + -2264;
	// addi r4,r31,20
	ctx.r4.s64 = ctx.r31.s64 + 20;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x821f2d08
	ctx.lr = 0x821B4918;
	sub_821F2D08(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82235a10
	ctx.lr = 0x821B4924;
	sub_82235A10(ctx, base);
loc_821B4924:
	// lwz r11,712(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 712);
	// addic. r31,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r31.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821b49b8
	if (ctx.cr0.lt) goto loc_821B49B8;
	// addi r11,r31,2531
	ctx.r11.s64 = ctx.r31.s64 + 2531;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r26,r10,20464
	ctx.r26.s64 = ctx.r10.s64 + 20464;
	// add r28,r11,r30
	ctx.r28.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r27,r11,-2040
	ctx.r27.s64 = ctx.r11.s64 + -2040;
loc_821B494C:
	// lhzu r3,-2(r28)
	ea = -2 + ctx.r28.u32;
	ctx.r3.u64 = PPC_LOAD_U16(ea);
	ctx.r28.u32 = ea;
	// bl 0x82234970
	ctx.lr = 0x821B4954;
	sub_82234970(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r30,r3,20
	ctx.r30.s64 = ctx.r3.s64 + 20;
	// bl 0x822359f8
	ctx.lr = 0x821B4960;
	sub_822359F8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// li r6,1
	ctx.r6.s64 = 1;
	// bl 0x821f2d08
	ctx.lr = 0x821B4974;
	sub_821F2D08(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82235a10
	ctx.lr = 0x821B4980;
	sub_82235A10(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82235560
	ctx.lr = 0x821B498C;
	sub_82235560(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x822e84f0
	ctx.lr = 0x821B499C;
	sub_822E84F0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821fe7d8
	ctx.lr = 0x821B49B0;
	sub_821FE7D8(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge 0x821b494c
	if (!ctx.cr0.lt) goto loc_821B494C;
loc_821B49B8:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821B48C8) {
	__imp__sub_821B48C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B49C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821B49C4) {
	__imp__sub_821B49C4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B49C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x821B49D0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32024
	ctx.r11.s64 = -2098724864;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,11240(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11240);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821b4a18
	if (ctx.cr6.eq) goto loc_821B4A18;
	// lis r11,-32032
	ctx.r11.s64 = -2099249152;
	// lwz r11,-5908(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5908);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x821b4a10
	if (ctx.cr6.lt) goto loc_821B4A10;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lhz r9,126(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 126);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x821b4a18
	if (!ctx.cr6.eq) goto loc_821B4A18;
loc_821B4A10:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821b48c8
	ctx.lr = 0x821B4A18;
	sub_821B48C8(ctx, base);
loc_821B4A18:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ab968
	ctx.lr = 0x821B4A20;
	sub_821AB968(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b4a40
	if (ctx.cr6.eq) goto loc_821B4A40;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,3140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3140, ctx.r11.u32);
	// stb r11,3154(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3154, ctx.r11.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_821B4A40:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821aa3d0
	ctx.lr = 0x821B4A48;
	sub_821AA3D0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821b4b3c
	if (ctx.cr6.eq) goto loc_821B4B3C;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x821b4a7c
	if (ctx.cr6.eq) goto loc_821B4A7C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821aee48
	ctx.lr = 0x821B4A6C;
	sub_821AEE48(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r9,1
	ctx.r9.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821b4a80
	if (!ctx.cr6.eq) goto loc_821B4A80;
loc_821B4A7C:
	// li r9,0
	ctx.r9.s64 = 0;
loc_821B4A80:
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// li r8,112
	ctx.r8.s64 = 112;
	// addi r11,r11,9624
	ctx.r11.s64 = ctx.r11.s64 + 9624;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// subf r7,r10,r29
	ctx.r7.s64 = ctx.r29.s64 - ctx.r10.s64;
	// divw r6,r7,r8
	ctx.r6.s32 = ctx.r7.s32 / ctx.r8.s32;
	// mulli r10,r6,44
	ctx.r10.s64 = ctx.r6.s64 * 44;
	// add r30,r10,r31
	ctx.r30.u64 = ctx.r10.u64 + ctx.r31.u64;
	// lbz r5,824(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 824);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x821b4ad0
	if (ctx.cr6.eq) goto loc_821B4AD0;
	// lwz r10,3140(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3140);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x821b4b3c
	if (!ctx.cr6.eq) goto loc_821B4B3C;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x821b4b3c
	if (ctx.cr6.eq) goto loc_821B4B3C;
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// stw r11,3140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3140, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_821B4AD0:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x821b4aec
	if (ctx.cr6.eq) goto loc_821B4AEC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821b44f8
	ctx.lr = 0x821B4AE0;
	sub_821B44F8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b4b34
	if (ctx.cr6.eq) goto loc_821B4B34;
loc_821B4AEC:
	// lwz r11,3140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3140);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821b4b3c
	if (ctx.cr6.eq) goto loc_821B4B3C;
	// li r5,500
	ctx.r5.s64 = 500;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821d9100
	ctx.lr = 0x821B4B08;
	sub_821D9100(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821b4b3c
	if (!ctx.cr6.eq) goto loc_821B4B3C;
	// lwz r11,836(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 836);
	// lwz r10,832(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 832);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821b4b28
	if (ctx.cr6.lt) goto loc_821B4B28;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_821B4B28:
	// lwz r10,3140(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3140);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x821b4b3c
	if (!ctx.cr6.lt) goto loc_821B4B3C;
loc_821B4B34:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821b4368
	ctx.lr = 0x821B4B3C;
	sub_821B4368(ctx, base);
loc_821B4B3C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821B49C8) {
	__imp__sub_821B49C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B4B44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821B4B44) {
	__imp__sub_821B4B44(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B4B48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x821B4B50;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r28,r11,232
	ctx.r28.s64 = ctx.r11.s64 + 232;
	// bl 0x821aa3d0
	ctx.lr = 0x821B4B68;
	sub_821AA3D0(ctx, base);
	// lbz r11,3153(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3153);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b4dd0
	if (ctx.cr6.eq) goto loc_821B4DD0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821b4dd0
	if (ctx.cr6.eq) goto loc_821B4DD0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ab968
	ctx.lr = 0x821B4B88;
	sub_821AB968(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b4dd0
	if (ctx.cr6.eq) goto loc_821B4DD0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821aa4f0
	ctx.lr = 0x821B4BA0;
	sub_821AA4F0(ctx, base);
	// lfs f13,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// lfs f10,4(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fsubs f9,f13,f10
	ctx.f9.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// lfs f5,24(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	ctx.f5.f64 = double(temp.f32);
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f3,f13,f5
	ctx.f3.f64 = double(float(ctx.f13.f64 - ctx.f5.f64));
	// lfs f8,8(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lfs f2,28(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	ctx.f2.f64 = double(temp.f32);
	// fsubs f7,f12,f8
	ctx.f7.f64 = double(float(ctx.f12.f64 - ctx.f8.f64));
	// lfs f11,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f1,f12,f2
	ctx.f1.f64 = double(float(ctx.f12.f64 - ctx.f2.f64));
	// lfs f6,0(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// fsubs f4,f11,f6
	ctx.f4.f64 = double(float(ctx.f11.f64 - ctx.f6.f64));
	// lfs f0,25732(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 25732);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r31,3712
	ctx.r3.s64 = ctx.r31.s64 + 3712;
	// fmuls f10,f3,f3
	ctx.f10.f64 = double(float(ctx.f3.f64 * ctx.f3.f64));
	// lfs f13,20(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f11,f13
	ctx.f12.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// fmuls f11,f9,f9
	ctx.f11.f64 = double(float(ctx.f9.f64 * ctx.f9.f64));
	// fmadds f8,f1,f1,f10
	ctx.f8.f64 = double(float(ctx.f1.f64 * ctx.f1.f64 + ctx.f10.f64));
	// fmadds f9,f7,f7,f11
	ctx.f9.f64 = double(float(ctx.f7.f64 * ctx.f7.f64 + ctx.f11.f64));
	// fmadds f6,f12,f12,f8
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f8.f64));
	// fmadds f7,f4,f4,f9
	ctx.f7.f64 = double(float(ctx.f4.f64 * ctx.f4.f64 + ctx.f9.f64));
	// fsubs f5,f0,f7
	ctx.f5.f64 = double(float(ctx.f0.f64 - ctx.f7.f64));
	// fsel f4,f5,f7,f0
	ctx.f4.f64 = ctx.f5.f64 >= 0.0 ? ctx.f7.f64 : ctx.f0.f64;
	// fsubs f3,f4,f6
	ctx.f3.f64 = double(float(ctx.f4.f64 - ctx.f6.f64));
	// fsel f1,f3,f6,f4
	ctx.f1.f64 = ctx.f3.f64 >= 0.0 ? ctx.f6.f64 : ctx.f4.f64;
	// bl 0x821c7248
	ctx.lr = 0x821B4C1C;
	sub_821C7248(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821b4c8c
	if (ctx.cr6.eq) goto loc_821B4C8C;
	// lis r11,-32024
	ctx.r11.s64 = -2098724864;
	// lwz r11,11240(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11240);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821b4c6c
	if (ctx.cr6.eq) goto loc_821B4C6C;
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r11,9624
	ctx.r10.s64 = ctx.r11.s64 + 9624;
	// lwz r30,52(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// bl 0x82234950
	ctx.lr = 0x821B4C4C;
	sub_82234950(ctx, base);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r8,25656
	ctx.r4.s64 = ctx.r8.s64 + 25656;
	// li r3,18
	ctx.r3.s64 = 18;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// lhz r5,126(r9)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r9.u32 + 126);
	// bl 0x82280900
	ctx.lr = 0x821B4C6C;
	sub_82280900(ctx, base);
loc_821B4C6C:
	// lwz r11,712(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 712);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821b4c80
	if (!ctx.cr6.eq) goto loc_821B4C80;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,3155(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3155, ctx.r11.u8);
loc_821B4C80:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_821B4C8C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r27,1
	ctx.r27.s64 = 1;
	// lis r12,4
	ctx.r12.s64 = 262144;
	// slw r10,r27,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r27.u32 << (ctx.r11.u8 & 0x3F));
	// ori r12,r12,7932
	ctx.r12.u64 = ctx.r12.u64 | 7932;
	// and r9,r10,r12
	ctx.r9.u64 = ctx.r10.u64 & ctx.r12.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x821b4dd0
	if (ctx.cr6.eq) goto loc_821B4DD0;
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// li r10,112
	ctx.r10.s64 = 112;
	// addi r28,r11,9624
	ctx.r28.s64 = ctx.r11.s64 + 9624;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// subf r9,r11,r29
	ctx.r9.s64 = ctx.r29.s64 - ctx.r11.s64;
	// divw r8,r9,r10
	ctx.r8.s32 = ctx.r9.s32 / ctx.r10.s32;
	// mulli r11,r8,44
	ctx.r11.s64 = ctx.r8.s64 * 44;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r5,r11,824
	ctx.r5.s64 = ctx.r11.s64 + 824;
	// bl 0x821cd9f0
	ctx.lr = 0x821B4CDC;
	sub_821CD9F0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821b4dd0
	if (ctx.cr6.eq) goto loc_821B4DD0;
	// addi r4,r3,20
	ctx.r4.s64 = ctx.r3.s64 + 20;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821b9fc8
	ctx.lr = 0x821B4CF4;
	sub_821B9FC8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821b4d5c
	if (!ctx.cr6.eq) goto loc_821B4D5C;
	// lis r11,-32024
	ctx.r11.s64 = -2098724864;
	// lwz r11,11240(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11240);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821b4d40
	if (ctx.cr6.eq) goto loc_821B4D40;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r30,52(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 52);
	// bl 0x82234950
	ctx.lr = 0x821B4D20;
	sub_82234950(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r10,25592
	ctx.r4.s64 = ctx.r10.s64 + 25592;
	// li r3,18
	ctx.r3.s64 = 18;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// lhz r5,126(r11)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r11.u32 + 126);
	// bl 0x82280900
	ctx.lr = 0x821B4D40;
	sub_82280900(ctx, base);
loc_821B4D40:
	// lwz r11,712(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 712);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821b4d50
	if (!ctx.cr6.eq) goto loc_821B4D50;
	// stb r27,3155(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3155, ctx.r27.u8);
loc_821B4D50:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_821B4D5C:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821b44a8
	ctx.lr = 0x821B4D68;
	sub_821B44A8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821b4dd0
	if (!ctx.cr6.eq) goto loc_821B4DD0;
	// lis r11,-32024
	ctx.r11.s64 = -2098724864;
	// lwz r11,11240(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11240);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821b4db4
	if (ctx.cr6.eq) goto loc_821B4DB4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r30,52(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 52);
	// bl 0x82234950
	ctx.lr = 0x821B4D94;
	sub_82234950(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r10,25524
	ctx.r4.s64 = ctx.r10.s64 + 25524;
	// li r3,18
	ctx.r3.s64 = 18;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// lhz r5,126(r11)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r11.u32 + 126);
	// bl 0x82280900
	ctx.lr = 0x821B4DB4;
	sub_82280900(ctx, base);
loc_821B4DB4:
	// lwz r11,712(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 712);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821b4d50
	if (!ctx.cr6.eq) goto loc_821B4D50;
	// stb r27,3155(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3155, ctx.r27.u8);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_821B4DD0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821B4B48) {
	__imp__sub_821B4B48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B4DDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821B4DDC) {
	__imp__sub_821B4DDC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B4DE0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821B4DE0) {
	__imp__sub_821B4DE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B4DE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821B4DE4) {
	__imp__sub_821B4DE4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B4DE8) {
	PPC_FUNC_PROLOGUE();
	// lhz r3,3368(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 3368);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821b4df8
	if (!ctx.cr6.eq) goto loc_821B4DF8;
	// blr 
	return;
loc_821B4DF8:
	// b 0x822a3d58
	sub_822A3D58(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821B4DE8) {
	__imp__sub_821B4DE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B4DFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821B4DFC) {
	__imp__sub_821B4DFC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B4E00) {
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
	// lwz r11,3372(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3372);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b4e30
	if (ctx.cr6.eq) goto loc_821B4E30;
	// stw r11,3376(r3)
	PPC_STORE_U32(ctx.r3.u32 + 3376, ctx.r11.u32);
	// stb r30,3406(r3)
	PPC_STORE_U8(ctx.r3.u32 + 3406, ctx.r30.u8);
loc_821B4E30:
	// lhz r11,3368(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 3368);
	// stw r30,3372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3372, ctx.r30.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b4e68
	if (ctx.cr6.eq) goto loc_821B4E68;
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r10,r11,-25976
	ctx.r10.s64 = ctx.r11.s64 + -25976;
	// lhz r4,110(r10)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r10.u32 + 110);
	// bl 0x82229da8
	ctx.lr = 0x821B4E58;
	sub_82229DA8(ctx, base);
	// lhz r3,3368(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 3368);
	// bl 0x822ac730
	ctx.lr = 0x821B4E60;
	sub_822AC730(ctx, base);
	// sth r30,3368(r31)
	PPC_STORE_U16(ctx.r31.u32 + 3368, ctx.r30.u16);
	// stw r30,668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 668, ctx.r30.u32);
loc_821B4E68:
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

PPC_WEAK_FUNC(sub_821B4E00) {
	__imp__sub_821B4E00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B4E80) {
	PPC_FUNC_PROLOGUE();
	// lbz r10,3404(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 3404);
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// stb r4,3404(r3)
	PPC_STORE_U8(ctx.r3.u32 + 3404, ctx.r4.u8);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r10,r11,-25976
	ctx.r10.s64 = ctx.r11.s64 + -25976;
	// lhz r4,564(r10)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r10.u32 + 564);
	// b 0x82229da8
	sub_82229DA8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821B4E80) {
	__imp__sub_821B4E80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B4EAC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821B4EAC) {
	__imp__sub_821B4EAC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B4EB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x821B4EB8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,3372(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3372);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x821b4f24
	if (!ctx.cr6.eq) goto loc_821B4F24;
	// lwz r11,3416(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3416);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821b4eec
	if (ctx.cr6.eq) goto loc_821B4EEC;
	// stw r11,3412(r3)
	PPC_STORE_U32(ctx.r3.u32 + 3412, ctx.r11.u32);
	// b 0x821b4ef0
	goto loc_821B4EF0;
loc_821B4EEC:
	// stw r28,3412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3412, ctx.r28.u32);
loc_821B4EF0:
	// lbz r11,3404(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3404);
	// clrlwi r10,r27,24
	ctx.r10.u64 = ctx.r27.u32 & 0xFF;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x821b4fdc
	if (ctx.cr6.eq) goto loc_821B4FDC;
	// stb r27,3404(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3404, ctx.r27.u8);
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r11,-25976
	ctx.r10.s64 = ctx.r11.s64 + -25976;
	// lhz r4,564(r10)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r10.u32 + 564);
	// bl 0x82229da8
	ctx.lr = 0x821B4F1C;
	sub_82229DA8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_821B4F24:
	// bl 0x822ad770
	ctx.lr = 0x821B4F28;
	sub_822AD770(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821b4e00
	ctx.lr = 0x821B4F30;
	sub_821B4E00(ctx, base);
	// bl 0x822b2a90
	ctx.lr = 0x821B4F34;
	sub_822B2A90(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821cfae8
	ctx.lr = 0x821B4F3C;
	sub_821CFAE8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r30,1
	ctx.r30.s64 = 1;
	// stb r11,3298(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3298, ctx.r11.u8);
	// stw r11,3416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3416, ctx.r11.u32);
	// stb r30,3407(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3407, ctx.r30.u8);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,312(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 312);
	// rlwinm r9,r10,0,20,18
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFEFFF;
	// stw r9,312(r11)
	PPC_STORE_U32(ctx.r11.u32 + 312, ctx.r9.u32);
	// lwz r11,3376(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3376);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b4f94
	if (ctx.cr6.eq) goto loc_821B4F94;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x821b4f94
	if (ctx.cr6.eq) goto loc_821B4F94;
	// lbz r11,3406(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3406);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821b4f94
	if (!ctx.cr6.eq) goto loc_821B4F94;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82229d78
	ctx.lr = 0x821B4F90;
	sub_82229D78(ctx, base);
	// bl 0x822ac730
	ctx.lr = 0x821B4F94;
	sub_822AC730(ctx, base);
loc_821B4F94:
	// lwz r11,3384(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3384);
	// stw r29,3372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3372, ctx.r29.u32);
	// stb r30,3406(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3406, ctx.r30.u8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r28,3412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3412, ctx.r28.u32);
	// stb r27,3404(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3404, ctx.r27.u8);
	// stb r30,5038(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5038, ctx.r30.u8);
	// bne cr6,0x821b4fbc
	if (!ctx.cr6.eq) goto loc_821B4FBC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ae110
	ctx.lr = 0x821B4FBC;
	sub_821AE110(ctx, base);
loc_821B4FBC:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82229d78
	ctx.lr = 0x821B4FCC;
	sub_82229D78(ctx, base);
	// sth r3,3368(r31)
	PPC_STORE_U16(ctx.r31.u32 + 3368, ctx.r3.u16);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x821fda38
	ctx.lr = 0x821B4FD8;
	sub_821FDA38(ctx, base);
	// bl 0x822b2ae8
	ctx.lr = 0x821B4FDC;
	sub_822B2AE8(ctx, base);
loc_821B4FDC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821B4EB0) {
	__imp__sub_821B4EB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B4FE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821B4FE4) {
	__imp__sub_821B4FE4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B4FE8) {
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
	// lfs f0,3440(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 3440);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmuls f13,f0,f0
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f12,3436(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 3436);
	ctx.f12.f64 = double(temp.f32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// lfs f0,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f11,f12,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f13.f64));
	// fcmpu cr6,f11,f0
	ctx.cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// bge cr6,0x821b5044
	if (!ctx.cr6.lt) goto loc_821B5044;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x821b4eb0
	ctx.lr = 0x821B5028;
	sub_821B4EB0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,3408(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3408, ctx.r11.u8);
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
loc_821B5044:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r10,-32053
	ctx.r10.s64 = -2100625408;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r9,r10,-500
	ctx.r9.s64 = ctx.r10.s64 + -500;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r8,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// addi r4,r11,132
	ctx.r4.s64 = ctx.r11.s64 + 132;
	// bl 0x821b4eb0
	ctx.lr = 0x821B5064;
	sub_821B4EB0(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// stb r7,3408(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3408, ctx.r7.u8);
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

PPC_WEAK_FUNC(sub_821B4FE8) {
	__imp__sub_821B4FE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B5080) {
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
	// bl 0x821ac4e8
	ctx.lr = 0x821B50A0;
	sub_821AC4E8(ctx, base);
	// lhz r11,4824(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4824);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821b50cc
	if (!ctx.cr6.eq) goto loc_821B50CC;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x821b4eb0
	ctx.lr = 0x821B50C0;
	sub_821B4EB0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,3408(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3408, ctx.r11.u8);
	// b 0x821b50d0
	goto loc_821B50D0;
loc_821B50CC:
	// bl 0x821b4fe8
	ctx.lr = 0x821B50D0;
	sub_821B4FE8(ctx, base);
loc_821B50D0:
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

PPC_WEAK_FUNC(sub_821B5080) {
	__imp__sub_821B5080(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B50E8) {
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
	// bl 0x821aa3a0
	ctx.lr = 0x821B5104;
	sub_821AA3A0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821b5148
	if (ctx.cr6.eq) goto loc_821B5148;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821d95c8
	ctx.lr = 0x821B5114;
	sub_821D95C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b5148
	if (ctx.cr6.eq) goto loc_821B5148;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x822ea328
	ctx.lr = 0x821B5128;
	sub_822EA328(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821b5148
	if (ctx.cr6.eq) goto loc_821B5148;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r10,-32053
	ctx.r10.s64 = -2100625408;
	// addi r9,r10,-500
	ctx.r9.s64 = ctx.r10.s64 + -500;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r8,r9
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// b 0x821b5160
	goto loc_821B5160;
loc_821B5148:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r10,-32053
	ctx.r10.s64 = -2100625408;
	// addi r9,r10,-500
	ctx.r9.s64 = ctx.r10.s64 + -500;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r8,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// addi r30,r11,156
	ctx.r30.s64 = ctx.r11.s64 + 156;
loc_821B5160:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ac4e8
	ctx.lr = 0x821B5168;
	sub_821AC4E8(ctx, base);
	// lhz r11,4824(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4824);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x821b5194
	if (!ctx.cr6.eq) goto loc_821B5194;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x821b4eb0
	ctx.lr = 0x821B5188;
	sub_821B4EB0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,3408(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3408, ctx.r11.u8);
	// b 0x821b5198
	goto loc_821B5198;
loc_821B5194:
	// bl 0x821b4fe8
	ctx.lr = 0x821B5198;
	sub_821B4FE8(ctx, base);
loc_821B5198:
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

PPC_WEAK_FUNC(sub_821B50E8) {
	__imp__sub_821B50E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B51B0) {
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
	// lwz r11,4712(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4712);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821b5210
	if (ctx.cr6.eq) goto loc_821B5210;
	// lis r10,-32020
	ctx.r10.s64 = -2098462720;
	// addi r9,r10,9624
	ctx.r9.s64 = ctx.r10.s64 + 9624;
	// lwz r10,52(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 52);
	// subf r8,r10,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cmpwi cr6,r8,200
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 200, ctx.xer);
	// bge cr6,0x821b5210
	if (!ctx.cr6.lt) goto loc_821B5210;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x821b4eb0
	ctx.lr = 0x821B51F4;
	sub_821B4EB0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,3408(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3408, ctx.r11.u8);
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
loc_821B5210:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r10,-32053
	ctx.r10.s64 = -2100625408;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r9,r10,-500
	ctx.r9.s64 = ctx.r10.s64 + -500;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r11,r8,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// addi r4,r11,132
	ctx.r4.s64 = ctx.r11.s64 + 132;
	// bl 0x821b4eb0
	ctx.lr = 0x821B5238;
	sub_821B4EB0(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// stb r7,3408(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3408, ctx.r7.u8);
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

PPC_WEAK_FUNC(sub_821B51B0) {
	__imp__sub_821B51B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B5254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821B5254) {
	__imp__sub_821B5254(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B5258) {
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
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r31,92(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 92);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x821b5290
	if (!ctx.cr6.eq) goto loc_821B5290;
loc_821B5278:
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
loc_821B5290:
	// lbz r11,5005(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5005);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b52bc
	if (ctx.cr6.eq) goto loc_821B52BC;
	// lwz r3,4936(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4936);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x821b52bc
	if (ctx.cr6.eq) goto loc_821B52BC;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821b5278
	if (ctx.cr6.eq) goto loc_821B5278;
	// bl 0x822386a0
	ctx.lr = 0x821B52B4;
	sub_822386A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821b5278
	if (!ctx.cr6.eq) goto loc_821B5278;
loc_821B52BC:
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

PPC_WEAK_FUNC(sub_821B5258) {
	__imp__sub_821B5258(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B52D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821B52D4) {
	__imp__sub_821B52D4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B52D8) {
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
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// bl 0x822ea328
	ctx.lr = 0x821B52F8;
	sub_822EA328(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821b531c
	if (!ctx.cr6.eq) goto loc_821B531C;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r10,-32053
	ctx.r10.s64 = -2100625408;
	// addi r9,r10,-500
	ctx.r9.s64 = ctx.r10.s64 + -500;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_821B5310:
	// lwzx r11,r8,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// addi r3,r11,156
	ctx.r3.s64 = ctx.r11.s64 + 156;
	// b 0x821b53bc
	goto loc_821B53BC;
loc_821B531C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821b5258
	ctx.lr = 0x821B5324;
	sub_821B5258(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821b539c
	if (ctx.cr6.eq) goto loc_821B539C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821aee48
	ctx.lr = 0x821B5338;
	sub_821AEE48(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b539c
	if (ctx.cr6.eq) goto loc_821B539C;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821b9250
	ctx.lr = 0x821B5358;
	sub_821B9250(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821b539c
	if (ctx.cr6.eq) goto loc_821B539C;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821b53bc
	if (!ctx.cr6.eq) goto loc_821B53BC;
	// lbz r11,5005(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5005);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821b539c
	if (!ctx.cr6.eq) goto loc_821B539C;
	// lbz r11,721(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 721);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821b539c
	if (!ctx.cr6.eq) goto loc_821B539C;
	// lbz r11,3153(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3153);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821b539c
	if (!ctx.cr6.eq) goto loc_821B539C;
	// li r4,3000
	ctx.r4.s64 = 3000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821adf68
	ctx.lr = 0x821B539C;
	sub_821ADF68(ctx, base);
loc_821B539C:
	// lwz r11,3160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3160);
	// lis r10,-32053
	ctx.r10.s64 = -2100625408;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r9,r10,-500
	ctx.r9.s64 = ctx.r10.s64 + -500;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// blt cr6,0x821b5310
	if (ctx.cr6.lt) goto loc_821B5310;
	// lwzx r3,r8,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
loc_821B53BC:
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

PPC_WEAK_FUNC(sub_821B52D8) {
	__imp__sub_821B52D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B53D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821B53D4) {
	__imp__sub_821B53D4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B53D8) {
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
	// lhz r11,4824(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4824);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821b5470
	if (!ctx.cr6.eq) goto loc_821B5470;
	// lwz r11,4712(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4712);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821b542c
	if (ctx.cr6.eq) goto loc_821B542C;
	// lis r10,-32020
	ctx.r10.s64 = -2098462720;
	// addi r9,r10,9624
	ctx.r9.s64 = ctx.r10.s64 + 9624;
	// lwz r10,52(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 52);
	// subf r8,r10,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cmpwi cr6,r8,200
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 200, ctx.xer);
	// bge cr6,0x821b542c
	if (!ctx.cr6.lt) goto loc_821B542C;
	// bl 0x821b52d8
	ctx.lr = 0x821B5420;
	sub_821B52D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x821b5448
	goto loc_821B5448;
loc_821B542C:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r10,-32053
	ctx.r10.s64 = -2100625408;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r9,r10,-500
	ctx.r9.s64 = ctx.r10.s64 + -500;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r8,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// addi r4,r11,132
	ctx.r4.s64 = ctx.r11.s64 + 132;
loc_821B5448:
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821b4eb0
	ctx.lr = 0x821B5454;
	sub_821B4EB0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,3408(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3408, ctx.r11.u8);
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
loc_821B5470:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r10,-32053
	ctx.r10.s64 = -2100625408;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r9,r10,-500
	ctx.r9.s64 = ctx.r10.s64 + -500;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r8,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// addi r4,r11,156
	ctx.r4.s64 = ctx.r11.s64 + 156;
	// bl 0x821b4fe8
	ctx.lr = 0x821B5490;
	sub_821B4FE8(ctx, base);
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

PPC_WEAK_FUNC(sub_821B53D8) {
	__imp__sub_821B53D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B54A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821B54A4) {
	__imp__sub_821B54A4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B54A8) {
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
	// lwz r11,4712(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4712);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821b5508
	if (ctx.cr6.eq) goto loc_821B5508;
	// lis r10,-32020
	ctx.r10.s64 = -2098462720;
	// addi r9,r10,9624
	ctx.r9.s64 = ctx.r10.s64 + 9624;
	// lwz r10,52(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 52);
	// subf r8,r10,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cmpwi cr6,r8,200
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 200, ctx.xer);
	// bge cr6,0x821b5508
	if (!ctx.cr6.lt) goto loc_821B5508;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x821b4eb0
	ctx.lr = 0x821B54EC;
	sub_821B4EB0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,3408(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3408, ctx.r11.u8);
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
loc_821B5508:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r10,-32053
	ctx.r10.s64 = -2100625408;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r9,r10,-500
	ctx.r9.s64 = ctx.r10.s64 + -500;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r11,r8,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// addi r4,r11,132
	ctx.r4.s64 = ctx.r11.s64 + 132;
	// bl 0x821b4eb0
	ctx.lr = 0x821B5530;
	sub_821B4EB0(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// stb r7,3408(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3408, ctx.r7.u8);
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

PPC_WEAK_FUNC(sub_821B54A8) {
	__imp__sub_821B54A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B554C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821B554C) {
	__imp__sub_821B554C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B5550) {
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
	// lhz r11,4824(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4824);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821b55e8
	if (!ctx.cr6.eq) goto loc_821B55E8;
	// lwz r11,4712(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4712);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821b55a4
	if (ctx.cr6.eq) goto loc_821B55A4;
	// lis r10,-32020
	ctx.r10.s64 = -2098462720;
	// addi r9,r10,9624
	ctx.r9.s64 = ctx.r10.s64 + 9624;
	// lwz r10,52(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 52);
	// subf r8,r10,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cmpwi cr6,r8,200
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 200, ctx.xer);
	// bgt cr6,0x821b55a4
	if (ctx.cr6.gt) goto loc_821B55A4;
	// bl 0x821b52d8
	ctx.lr = 0x821B5598;
	sub_821B52D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x821b55c0
	goto loc_821B55C0;
loc_821B55A4:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r10,-32053
	ctx.r10.s64 = -2100625408;
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r9,r10,-500
	ctx.r9.s64 = ctx.r10.s64 + -500;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r8,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// addi r4,r11,132
	ctx.r4.s64 = ctx.r11.s64 + 132;
loc_821B55C0:
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821b4eb0
	ctx.lr = 0x821B55CC;
	sub_821B4EB0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,3408(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3408, ctx.r11.u8);
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
loc_821B55E8:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r10,-32053
	ctx.r10.s64 = -2100625408;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r9,r10,-500
	ctx.r9.s64 = ctx.r10.s64 + -500;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r8,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// addi r4,r11,156
	ctx.r4.s64 = ctx.r11.s64 + 156;
	// bl 0x821b4fe8
	ctx.lr = 0x821B5608;
	sub_821B4FE8(ctx, base);
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

PPC_WEAK_FUNC(sub_821B5550) {
	__imp__sub_821B5550(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B561C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821B561C) {
	__imp__sub_821B561C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B5620) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32020
	ctx.r10.s64 = -2098462720;
	// lwz r11,3144(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3144);
	// addi r9,r10,9624
	ctx.r9.s64 = ctx.r10.s64 + 9624;
	// addi r11,r11,2000
	ctx.r11.s64 = ctx.r11.s64 + 2000;
	// lwz r10,52(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 52);
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

PPC_WEAK_FUNC(sub_821B5620) {
	__imp__sub_821B5620(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B564C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821B564C) {
	__imp__sub_821B564C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B5650) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lis r10,-32053
	ctx.r10.s64 = -2100625408;
	// lwz r9,3372(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3372);
	// addi r8,r10,-500
	ctx.r8.s64 = ctx.r10.s64 + -500;
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r7,r8
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// cmplw cr6,r9,r6
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// addi r10,r11,9624
	ctx.r10.s64 = ctx.r11.s64 + 9624;
	// lwz r11,52(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// stw r11,3144(r3)
	PPC_STORE_U32(ctx.r3.u32 + 3144, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821B5650) {
	__imp__sub_821B5650(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B5684) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821B5684) {
	__imp__sub_821B5684(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B5688) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x821B5690;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x821ac4e8
	ctx.lr = 0x821B569C;
	sub_821AC4E8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ac678
	ctx.lr = 0x821B56A4;
	sub_821AC678(ctx, base);
	// lbz r8,5005(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5005);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32020
	ctx.r10.s64 = -2098462720;
	// lis r11,-32053
	ctx.r11.s64 = -2100625408;
	// stb r9,3408(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3408, ctx.r9.u8);
	// addi r29,r10,9624
	ctx.r29.s64 = ctx.r10.s64 + 9624;
	// addi r28,r11,-500
	ctx.r28.s64 = ctx.r11.s64 + -500;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x821b56dc
	if (ctx.cr6.eq) goto loc_821B56DC;
	// lwz r10,3144(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3144);
	// lwz r11,52(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 52);
	// addi r10,r10,2000
	ctx.r10.s64 = ctx.r10.s64 + 2000;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x821b5814
	if (ctx.cr6.gt) goto loc_821B5814;
loc_821B56DC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821b5258
	ctx.lr = 0x821B56E4;
	sub_821B5258(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821b57e8
	if (ctx.cr6.eq) goto loc_821B57E8;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x822ea328
	ctx.lr = 0x821B56F8;
	sub_822EA328(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821b57e8
	if (ctx.cr6.eq) goto loc_821B57E8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821aee48
	ctx.lr = 0x821B5708;
	sub_821AEE48(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b57e8
	if (ctx.cr6.eq) goto loc_821B57E8;
	// lbz r11,3153(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3153);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b5740
	if (ctx.cr6.eq) goto loc_821B5740;
	// lwz r11,3140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3140);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821b573c
	if (ctx.cr6.eq) goto loc_821B573C;
	// bl 0x821d95c8
	ctx.lr = 0x821B5738;
	sub_821D95C8(ctx, base);
	// b 0x821b5740
	goto loc_821B5740;
loc_821B573C:
	// bl 0x821d91c0
	ctx.lr = 0x821B5740;
	sub_821D91C0(ctx, base);
loc_821B5740:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821b9250
	ctx.lr = 0x821B5754;
	sub_821B9250(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821b57e8
	if (ctx.cr6.eq) goto loc_821B57E8;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x821b5780
	if (ctx.cr6.eq) goto loc_821B5780;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821b4eb0
	ctx.lr = 0x821B5778;
	sub_821B4EB0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_821B5780:
	// lbz r11,721(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 721);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b57b8
	if (ctx.cr6.eq) goto loc_821B57B8;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r10,-32053
	ctx.r10.s64 = -2100625408;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r9,r10,-500
	ctx.r9.s64 = ctx.r10.s64 + -500;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r4,r8,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// bl 0x821b4eb0
	ctx.lr = 0x821B57B0;
	sub_821B4EB0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_821B57B8:
	// lbz r11,5005(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5005);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821b57e8
	if (!ctx.cr6.eq) goto loc_821B57E8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821b8af8
	ctx.lr = 0x821B57D0;
	sub_821B8AF8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821b57e8
	if (!ctx.cr6.eq) goto loc_821B57E8;
	// li r4,3000
	ctx.r4.s64 = 3000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821adf68
	ctx.lr = 0x821B57E8;
	sub_821ADF68(ctx, base);
loc_821B57E8:
	// lbz r11,5005(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5005);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b5814
	if (ctx.cr6.eq) goto loc_821B5814;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,3372(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3372);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r28
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r28.u32);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x821b5814
	if (ctx.cr6.eq) goto loc_821B5814;
	// lwz r11,52(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 52);
	// stw r11,3144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3144, ctx.r11.u32);
loc_821B5814:
	// lhz r11,4824(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4824);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// subfic r9,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r11.s64;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// subfe r7,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r11,r7,0,31,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// addi r6,r11,4
	ctx.r6.s64 = ctx.r11.s64 + 4;
	// lwzx r4,r8,r28
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r28.u32);
	// bl 0x821b4eb0
	ctx.lr = 0x821B5840;
	sub_821B4EB0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821B5688) {
	__imp__sub_821B5688(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B5848) {
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
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lis r10,-32053
	ctx.r10.s64 = -2100625408;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r9,r10,-500
	ctx.r9.s64 = ctx.r10.s64 + -500;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwzx r11,r8,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// addi r4,r11,120
	ctx.r4.s64 = ctx.r11.s64 + 120;
	// bl 0x821b4eb0
	ctx.lr = 0x821B5880;
	sub_821B4EB0(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// stb r7,3408(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3408, ctx.r7.u8);
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

PPC_WEAK_FUNC(sub_821B5848) {
	__imp__sub_821B5848(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B589C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821B589C) {
	__imp__sub_821B589C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B58A0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lis r10,-32053
	ctx.r10.s64 = -2100625408;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r9,r10,-500
	ctx.r9.s64 = ctx.r10.s64 + -500;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwzx r11,r8,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// addi r4,r11,180
	ctx.r4.s64 = ctx.r11.s64 + 180;
	// b 0x821b4eb0
	sub_821B4EB0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821B58A0) {
	__imp__sub_821B58A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B58C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821B58C4) {
	__imp__sub_821B58C4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B58C8) {
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
	// lwz r6,3416(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3416);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x821b58ec
	if (!ctx.cr6.eq) goto loc_821B58EC;
	// li r6,4
	ctx.r6.s64 = 4;
loc_821B58EC:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r10,-32053
	ctx.r10.s64 = -2100625408;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r9,r10,-500
	ctx.r9.s64 = ctx.r10.s64 + -500;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r11,r8,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// addi r4,r11,84
	ctx.r4.s64 = ctx.r11.s64 + 84;
	// bl 0x821b4eb0
	ctx.lr = 0x821B5910;
	sub_821B4EB0(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// stb r7,3408(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3408, ctx.r7.u8);
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

PPC_WEAK_FUNC(sub_821B58C8) {
	__imp__sub_821B58C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B592C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821B592C) {
	__imp__sub_821B592C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B5930) {
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
	// lwz r11,3416(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3416);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821b595c
	if (!ctx.cr6.eq) goto loc_821B595C;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
loc_821B595C:
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821b4eb0
	ctx.lr = 0x821B596C;
	sub_821B4EB0(ctx, base);
	// stb r30,3408(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3408, ctx.r30.u8);
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

PPC_WEAK_FUNC(sub_821B5930) {
	__imp__sub_821B5930(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B5988) {
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
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lis r10,-32053
	ctx.r10.s64 = -2100625408;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r9,r10,-500
	ctx.r9.s64 = ctx.r10.s64 + -500;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwzx r11,r8,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// addi r4,r11,144
	ctx.r4.s64 = ctx.r11.s64 + 144;
	// bl 0x821b4eb0
	ctx.lr = 0x821B59C0;
	sub_821B4EB0(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
	// stb r7,3408(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3408, ctx.r7.u8);
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

PPC_WEAK_FUNC(sub_821B5988) {
	__imp__sub_821B5988(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B59DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821B59DC) {
	__imp__sub_821B59DC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B59E0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821B59E0) {
	__imp__sub_821B59E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B59E8) {
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
	// lwz r3,476(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 476);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821b5a18
	if (ctx.cr6.eq) goto loc_821B5A18;
	// li r4,96
	ctx.r4.s64 = 96;
	// bl 0x8229e118
	ctx.lr = 0x821B5A10;
	sub_8229E118(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 476, ctx.r11.u32);
loc_821B5A18:
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

PPC_WEAK_FUNC(sub_821B59E8) {
	__imp__sub_821B59E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B5A2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821B5A2C) {
	__imp__sub_821B5A2C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B5A30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r10,324(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 324);
	// addi r11,r3,324
	ctx.r11.s64 = ctx.r3.s64 + 324;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x821b5a44
	if (!ctx.cr6.eq) goto loc_821B5A44;
	// addi r11,r3,308
	ctx.r11.s64 = ctx.r3.s64 + 308;
loc_821B5A44:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,-3
	ctx.r11.s64 = ctx.r11.s64 + -3;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r9,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stb r9,266(r3)
	PPC_STORE_U8(ctx.r3.u32 + 266, ctx.r9.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821B5A30) {
	__imp__sub_821B5A30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B5A5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821B5A5C) {
	__imp__sub_821B5A5C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B5A60) {
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lbz r10,723(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 723);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r9,r11,25736
	ctx.r9.s64 = ctx.r11.s64 + 25736;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,5124(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5124, ctx.r9.u32);
	// bne cr6,0x821b5aa0
	if (!ctx.cr6.eq) goto loc_821B5AA0;
	// bl 0x821ae110
	ctx.lr = 0x821B5A94;
	sub_821AE110(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82240108
	ctx.lr = 0x821B5AA0;
	sub_82240108(ctx, base);
loc_821B5AA0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821aba40
	ctx.lr = 0x821B5AA8;
	sub_821ABA40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821b5988
	ctx.lr = 0x821B5AB0;
	sub_821B5988(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,5038(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5038, ctx.r11.u8);
	// bl 0x821b4de8
	ctx.lr = 0x821B5AC0;
	sub_821B4DE8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821b5af0
	if (!ctx.cr6.eq) goto loc_821B5AF0;
	// lwz r11,208(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// addi r11,r11,46
	ctx.r11.s64 = ctx.r11.s64 + 46;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r31
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// cmpwi cr6,r9,9
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 9, ctx.xer);
	// bne cr6,0x821b5ae8
	if (!ctx.cr6.eq) goto loc_821B5AE8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_821B5AE4:
	// bl 0x821daa58
	ctx.lr = 0x821B5AE8;
	sub_821DAA58(ctx, base);
loc_821B5AE8:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x821b5b6c
	goto loc_821B5B6C;
loc_821B5AF0:
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821e5e70
	ctx.lr = 0x821B5AFC;
	sub_821E5E70(ctx, base);
	// lwz r11,476(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 476);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b5ae4
	if (ctx.cr6.eq) goto loc_821B5AE4;
	// bl 0x821a9ec0
	ctx.lr = 0x821B5B10;
	sub_821A9EC0(ctx, base);
	// lwz r10,324(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 324);
	// addi r11,r31,324
	ctx.r11.s64 = ctx.r31.s64 + 324;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x821b5b24
	if (!ctx.cr6.eq) goto loc_821B5B24;
	// addi r11,r31,308
	ctx.r11.s64 = ctx.r31.s64 + 308;
loc_821B5B24:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r3,r31,308
	ctx.r3.s64 = ctx.r31.s64 + 308;
	// addi r11,r11,-3
	ctx.r11.s64 = ctx.r11.s64 + -3;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r9,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stb r9,266(r31)
	PPC_STORE_U8(ctx.r31.u32 + 266, ctx.r9.u8);
	// lfs f2,248(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 248);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,244(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 244);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821ce2b8
	ctx.lr = 0x821B5B48;
	sub_821CE2B8(ctx, base);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f0,5484(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stfs f0,3436(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3436, temp.u32);
	// stfs f0,3440(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3440, temp.u32);
	// stfs f0,3444(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3444, temp.u32);
	// stfs f0,3468(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3468, temp.u32);
	// stfs f0,3472(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3472, temp.u32);
	// stfs f0,3476(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3476, temp.u32);
loc_821B5B6C:
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

PPC_WEAK_FUNC(sub_821B5A60) {
	__imp__sub_821B5A60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B5B84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821B5B84) {
	__imp__sub_821B5B84(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B5B88) {
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
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r10,r11,-25976
	ctx.r10.s64 = ctx.r11.s64 + -25976;
	// lhz r4,486(r10)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r10.u32 + 486);
	// bl 0x82229da8
	ctx.lr = 0x821B5BAC;
	sub_82229DA8(ctx, base);
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

PPC_WEAK_FUNC(sub_821B5B88) {
	__imp__sub_821B5B88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B5BC0) {
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lbz r10,723(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 723);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r9,r11,25752
	ctx.r9.s64 = ctx.r11.s64 + 25752;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,5124(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5124, ctx.r9.u32);
	// bne cr6,0x821b5bfc
	if (!ctx.cr6.eq) goto loc_821B5BFC;
	// bl 0x821ae110
	ctx.lr = 0x821B5BF0;
	sub_821AE110(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82240108
	ctx.lr = 0x821B5BFC;
	sub_82240108(ctx, base);
loc_821B5BFC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821aba40
	ctx.lr = 0x821B5C04;
	sub_821ABA40(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,3388
	ctx.r4.s64 = ctx.r31.s64 + 3388;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821b5930
	ctx.lr = 0x821B5C18;
	sub_821B5930(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821b4de8
	ctx.lr = 0x821B5C20;
	sub_821B4DE8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x821b5c48
	if (!ctx.cr6.eq) goto loc_821B5C48;
	// bl 0x821daa58
	ctx.lr = 0x821B5C30;
	sub_821DAA58(ctx, base);
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
loc_821B5C48:
	// bl 0x821a9ec0
	ctx.lr = 0x821B5C4C;
	sub_821A9EC0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821b26b8
	ctx.lr = 0x821B5C54;
	sub_821B26B8(ctx, base);
	// lwz r10,324(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 324);
	// addi r11,r31,324
	ctx.r11.s64 = ctx.r31.s64 + 324;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x821b5c68
	if (!ctx.cr6.eq) goto loc_821B5C68;
	// addi r11,r31,308
	ctx.r11.s64 = ctx.r31.s64 + 308;
loc_821B5C68:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,-3
	ctx.r11.s64 = ctx.r11.s64 + -3;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r9,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stb r9,266(r31)
	PPC_STORE_U8(ctx.r31.u32 + 266, ctx.r9.u8);
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

PPC_WEAK_FUNC(sub_821B5BC0) {
	__imp__sub_821B5BC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B5C94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821B5C94) {
	__imp__sub_821B5C94(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B5C98) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r3,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x10;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rlwinm r11,r3,0,29,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x6;
	// ori r3,r11,8
	ctx.r3.u64 = ctx.r11.u64 | 8;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821B5C98) {
	__imp__sub_821B5C98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B5CB0) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r3,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// ori r3,r3,16
	ctx.r3.u64 = ctx.r3.u64 | 16;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821B5CB0) {
	__imp__sub_821B5CB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B5CC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821B5CC4) {
	__imp__sub_821B5CC4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B5CC8) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,10(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x821b5cec
	if (ctx.cr6.eq) goto loc_821B5CEC;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lbz r4,11(r3)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r3.u32 + 11);
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// b 0x82237330
	sub_82237330(ctx, base);
	return;
loc_821B5CEC:
	// lbz r4,11(r3)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r3.u32 + 11);
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// b 0x82236db8
	sub_82236DB8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821B5CC8) {
	__imp__sub_821B5CC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B5CF8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821B5CF8) {
	__imp__sub_821B5CF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B5CFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821B5CFC) {
	__imp__sub_821B5CFC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B5D00) {
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
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x821b5d88
	if (ctx.cr6.lt) goto loc_821B5D88;
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r10,-32053
	ctx.r10.s64 = -2100625408;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// addi r31,r10,-464
	ctx.r31.s64 = ctx.r10.s64 + -464;
	// rlwinm r30,r11,3,0,28
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r30,r31
	ctx.r11.u64 = ctx.r30.u64 + ctx.r31.u64;
	// lbz r10,10(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 10);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// beq cr6,0x821b5d5c
	if (ctx.cr6.eq) goto loc_821B5D5C;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// bne cr6,0x821b5d6c
	if (!ctx.cr6.eq) goto loc_821B5D6C;
	// li r5,-1
	ctx.r5.s64 = -1;
	// lbz r4,11(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 11);
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x82237330
	ctx.lr = 0x821B5D58;
	sub_82237330(ctx, base);
	// b 0x821b5d6c
	goto loc_821B5D6C;
loc_821B5D5C:
	// li r5,-1
	ctx.r5.s64 = -1;
	// lbz r4,11(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 11);
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// bl 0x82236db8
	ctx.lr = 0x821B5D6C;
	sub_82236DB8(ctx, base);
loc_821B5D6C:
	// addi r10,r31,10
	ctx.r10.s64 = ctx.r31.s64 + 10;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r31,8
	ctx.r11.s64 = ctx.r31.s64 + 8;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r30,r11
	ctx.r3.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stbx r9,r30,r10
	PPC_STORE_U8(ctx.r30.u32 + ctx.r10.u32, ctx.r9.u8);
	// bl 0x822a24e0
	ctx.lr = 0x821B5D88;
	sub_822A24E0(ctx, base);
loc_821B5D88:
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

PPC_WEAK_FUNC(sub_821B5D00) {
	__imp__sub_821B5D00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B5DA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32053
	ctx.r11.s64 = -2100625408;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,-464
	ctx.r9.s64 = ctx.r11.s64 + -464;
	// addi r11,r9,8
	ctx.r11.s64 = ctx.r9.s64 + 8;
loc_821B5DB0:
	// lhz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplw cr6,r8,r3
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x821b5dd8
	if (ctx.cr6.eq) goto loc_821B5DD8;
	// addi r11,r11,40
	ctx.r11.s64 = ctx.r11.s64 + 40;
	// addi r8,r9,1288
	ctx.r8.s64 = ctx.r9.s64 + 1288;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x821b5db0
	if (ctx.cr6.lt) goto loc_821B5DB0;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_821B5DD8:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821B5DA0) {
	__imp__sub_821B5DA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B5DE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x821B5DE8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32053
	ctx.r11.s64 = -2100625408;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r31,r11,-464
	ctx.r31.s64 = ctx.r11.s64 + -464;
	// beq cr6,0x821b5e38
	if (ctx.cr6.eq) goto loc_821B5E38;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r31,8
	ctx.r11.s64 = ctx.r31.s64 + 8;
loc_821B5E0C:
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r28
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x821b5e30
	if (ctx.cr6.eq) goto loc_821B5E30;
	// addi r11,r11,40
	ctx.r11.s64 = ctx.r11.s64 + 40;
	// addi r9,r31,1288
	ctx.r9.s64 = ctx.r31.s64 + 1288;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x821b5e0c
	if (ctx.cr6.lt) goto loc_821B5E0C;
	// li r10,-1
	ctx.r10.s64 = -1;
loc_821B5E30:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x821b5d00
	ctx.lr = 0x821B5E38;
	sub_821B5D00(ctx, base);
loc_821B5E38:
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r10,r11,9624
	ctx.r10.s64 = ctx.r11.s64 + 9624;
	// lwz r11,52(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// add r29,r11,r30
	ctx.r29.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bgt cr6,0x821b5e7c
	if (ctx.cr6.gt) goto loc_821B5E7C;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x821b5e70
	if (!ctx.cr6.eq) goto loc_821B5E70;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,25928
	ctx.r3.s64 = ctx.r11.s64 + 25928;
	// bl 0x822ad350
	ctx.lr = 0x821B5E64;
	sub_822AD350(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_821B5E70:
	// lis r29,32767
	ctx.r29.s64 = 2147418112;
	// ori r29,r29,65535
	ctx.r29.u64 = ctx.r29.u64 | 65535;
	// b 0x821b5ecc
	goto loc_821B5ECC;
loc_821B5E7C:
	// cmpwi cr6,r30,250
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 250, ctx.xer);
	// bge cr6,0x821b5ecc
	if (!ctx.cr6.lt) goto loc_821B5ECC;
	// extsw r11,r30
	ctx.r11.s64 = ctx.r30.s32;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfs f0,5804(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5804);
	ctx.f0.f64 = double(temp.f32);
	// lfd f2,25920(r10)
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r10.u32 + 25920);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// stfd f2,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f2.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// li r3,18
	ctx.r3.s64 = 18;
	// addi r4,r8,25808
	ctx.r4.s64 = ctx.r8.s64 + 25808;
	// fmuls f1,f12,f0
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfd f1,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x82280c30
	ctx.lr = 0x821B5ECC;
	sub_82280C30(ctx, base);
loc_821B5ECC:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r31,10
	ctx.r10.s64 = ctx.r31.s64 + 10;
loc_821B5ED4:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821b5f14
	if (ctx.cr6.eq) goto loc_821B5F14;
	// addi r10,r10,40
	ctx.r10.s64 = ctx.r10.s64 + 40;
	// addi r9,r31,1290
	ctx.r9.s64 = ctx.r31.s64 + 1290;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x821b5ed4
	if (ctx.cr6.lt) goto loc_821B5ED4;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r11,25772
	ctx.r3.s64 = ctx.r11.s64 + 25772;
	// bl 0x822e84f0
	ctx.lr = 0x821B5F04;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x821B5F08;
	sub_822AD350(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_821B5F14:
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r31,8
	ctx.r9.s64 = ctx.r31.s64 + 8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// rlwinm r30,r11,3,0,28
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r30,r9
	ctx.r3.u64 = ctx.r30.u64 + ctx.r9.u64;
	// bl 0x822a24e0
	ctx.lr = 0x821B5F30;
	sub_822A24E0(ctx, base);
	// add r3,r30,r31
	ctx.r3.u64 = ctx.r30.u64 + ctx.r31.u64;
	// stwx r29,r30,r31
	PPC_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r29.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821B5DE0) {
	__imp__sub_821B5DE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B5F40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x821B5F48;
	__savegprlr_27(ctx, base);
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x823de028
	ctx.lr = 0x821B5F50;
	__savefpr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lfs f13,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x821b5f80
	if (!ctx.cr6.eq) goto loc_821B5F80;
	// lfs f0,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x821b604c
	if (ctx.cr6.eq) goto loc_821B604C;
loc_821B5F80:
	// lis r11,-32053
	ctx.r11.s64 = -2100625408;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r11,-464
	ctx.r11.s64 = ctx.r11.s64 + -464;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r31,r11,20
	ctx.r31.s64 = ctx.r11.s64 + 20;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f30,2412(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2412);
	ctx.f30.f64 = double(temp.f32);
	// li r28,0
	ctx.r28.s64 = 0;
	// lfs f31,5484(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5484);
	ctx.f31.f64 = double(temp.f32);
	// lfs f29,5808(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5808);
	ctx.f29.f64 = double(temp.f32);
loc_821B5FA8:
	// lbz r11,-10(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + -10);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x821b603c
	if (!ctx.cr6.eq) goto loc_821B603C;
	// lbz r11,-9(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + -9);
	// and r10,r11,r27
	ctx.r10.u64 = ctx.r11.u64 & ctx.r27.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x821b603c
	if (ctx.cr6.eq) goto loc_821B603C;
	// lfs f0,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bne cr6,0x821b603c
	if (!ctx.cr6.eq) goto loc_821B603C;
	// lfs f0,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bne cr6,0x821b603c
	if (!ctx.cr6.eq) goto loc_821B603C;
	// lfs f12,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fadds f0,f12,f11
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// lfs f13,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x821b6004
	if (!ctx.cr6.gt) goto loc_821B6004;
	// lfs f11,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f11,f0
	ctx.cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// bgt cr6,0x821b603c
	if (ctx.cr6.gt) goto loc_821B603C;
loc_821B6004:
	// fcmpu cr6,f13,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bge cr6,0x821b6018
	if (!ctx.cr6.lt) goto loc_821B6018;
	// lfs f0,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// blt cr6,0x821b603c
	if (ctx.cr6.lt) goto loc_821B603C;
loc_821B6018:
	// lfs f0,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// fadds f28,f0,f29
	ctx.f28.f64 = double(float(ctx.f0.f64 + ctx.f29.f64));
	// addi r3,r31,-8
	ctx.r3.s64 = ctx.r31.s64 + -8;
	// bl 0x822d5828
	ctx.lr = 0x821B6030;
	sub_822D5828(ctx, base);
	// fmuls f13,f28,f28
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f28.f64 * ctx.f28.f64));
	// fcmpu cr6,f1,f13
	ctx.cr6.compare(ctx.f1.f64, ctx.f13.f64);
	// blt cr6,0x821b6060
	if (ctx.cr6.lt) goto loc_821B6060;
loc_821B603C:
	// addi r28,r28,40
	ctx.r28.s64 = ctx.r28.s64 + 40;
	// addi r31,r31,40
	ctx.r31.s64 = ctx.r31.s64 + 40;
	// cmplwi cr6,r28,1280
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 1280, ctx.xer);
	// blt cr6,0x821b5fa8
	if (ctx.cr6.lt) goto loc_821B5FA8;
loc_821B604C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x823de074
	ctx.lr = 0x821B605C;
	__restfpr_28(ctx, base);
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_821B6060:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x823de074
	ctx.lr = 0x821B6070;
	__restfpr_28(ctx, base);
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821B5F40) {
	__imp__sub_821B5F40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B6074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821B6074) {
	__imp__sub_821B6074(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B6078) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x821B6080;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r5,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x10;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821b60a4
	if (ctx.cr6.eq) goto loc_821B60A4;
	// rlwinm r11,r5,0,29,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x6;
	// ori r31,r11,8
	ctx.r31.u64 = ctx.r11.u64 | 8;
loc_821B60A4:
	// bl 0x821b5de0
	ctx.lr = 0x821B60A8;
	sub_821B5DE0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821b6134
	if (ctx.cr6.eq) goto loc_821B6134;
	// li r10,7
	ctx.r10.s64 = 7;
	// clrlwi r6,r31,24
	ctx.r6.u64 = ctx.r31.u32 & 0xFF;
	// clrlwi r9,r30,24
	ctx.r9.u64 = ctx.r30.u32 & 0xFF;
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// stb r6,11(r11)
	PPC_STORE_U8(ctx.r11.u32 + 11, ctx.r6.u8);
	// stb r9,10(r11)
	PPC_STORE_U8(ctx.r11.u32 + 10, ctx.r9.u8);
	// addi r8,r29,-4
	ctx.r8.s64 = ctx.r29.s64 + -4;
	// addi r7,r3,-4
	ctx.r7.s64 = ctx.r3.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_821B60D8:
	// lwzu r10,4(r8)
	ea = 4 + ctx.r8.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	ctx.r8.u32 = ea;
	// stwu r10,4(r7)
	ea = 4 + ctx.r7.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r7.u32 = ea;
	// bdnz 0x821b60d8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821B60D8;
	// lis r8,-32020
	ctx.r8.s64 = -2098462720;
	// clrlwi r10,r9,24
	ctx.r10.u64 = ctx.r9.u32 & 0xFF;
	// addi r7,r8,9624
	ctx.r7.s64 = ctx.r8.s64 + 9624;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// lwz r9,52(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 52);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// beq cr6,0x821b6124
	if (ctx.cr6.eq) goto loc_821B6124;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// bne cr6,0x821b6130
	if (!ctx.cr6.eq) goto loc_821B6130;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// clrlwi r4,r6,24
	ctx.r4.u64 = ctx.r6.u32 & 0xFF;
	// bl 0x82237330
	ctx.lr = 0x821B6118;
	sub_82237330(ctx, base);
	// bl 0x821afc80
	ctx.lr = 0x821B611C;
	sub_821AFC80(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_821B6124:
	// li r5,1
	ctx.r5.s64 = 1;
	// clrlwi r4,r6,24
	ctx.r4.u64 = ctx.r6.u32 & 0xFF;
	// bl 0x82236db8
	ctx.lr = 0x821B6130;
	sub_82236DB8(ctx, base);
loc_821B6130:
	// bl 0x821afc80
	ctx.lr = 0x821B6134;
	sub_821AFC80(ctx, base);
loc_821B6134:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821B6078) {
	__imp__sub_821B6078(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B613C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821B613C) {
	__imp__sub_821B613C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B6140) {
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
	// li r9,7
	ctx.r9.s64 = 7;
	// addi r10,r1,76
	ctx.r10.s64 = ctx.r1.s64 + 76;
	// addi r11,r6,-4
	ctx.r11.s64 = ctx.r6.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_821B615C:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x821b615c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821B615C;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r6,1
	ctx.r6.s64 = 1;
	// bl 0x821b6078
	ctx.lr = 0x821B6174;
	sub_821B6078(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821B6140) {
	__imp__sub_821B6140(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B6184) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821B6184) {
	__imp__sub_821B6184(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B6188) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,312(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 312);
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// oris r9,r10,64
	ctx.r9.u64 = ctx.r10.u64 | 4194304;
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r9,312(r11)
	PPC_STORE_U32(ctx.r11.u32 + 312, ctx.r9.u32);
	// lfs f0,192(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 192);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,184(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 184);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,196(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 196);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,180(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 180);
	ctx.f11.f64 = double(temp.f32);
	// fabs f10,f11
	ctx.f10.u64 = ctx.f11.u64 & ~0x8000000000000000;
	// fadds f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 + ctx.f0.f64));
	// fabs f8,f13
	ctx.f8.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fmuls f7,f9,f9
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f9.f64));
	// fadds f6,f8,f12
	ctx.f6.f64 = double(float(ctx.f8.f64 + ctx.f12.f64));
	// fmadds f5,f6,f6,f7
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f7.f64));
	// fsqrts f4,f5
	ctx.f4.f64 = double(float(sqrt(ctx.f5.f64)));
	// stfs f4,84(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// bl 0x821b6078
	ctx.lr = 0x821B61E4;
	sub_821B6078(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821B6188) {
	__imp__sub_821B6188(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B61F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821B61F4) {
	__imp__sub_821B61F4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B61F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32053
	ctx.r11.s64 = -2100625408;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r11,-464
	ctx.r11.s64 = ctx.r11.s64 + -464;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
loc_821B620C:
	// lbz r7,-2(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// cmplwi cr6,r7,2
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 2, ctx.xer);
	// bne cr6,0x821b6224
	if (!ctx.cr6.eq) goto loc_821B6224;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r8,r3
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x821b623c
	if (ctx.cr6.eq) goto loc_821B623C;
loc_821B6224:
	// addi r10,r10,40
	ctx.r10.s64 = ctx.r10.s64 + 40;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,40
	ctx.r11.s64 = ctx.r11.s64 + 40;
	// cmplwi cr6,r10,1280
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1280, ctx.xer);
	// blt cr6,0x821b620c
	if (ctx.cr6.lt) goto loc_821B620C;
	// blr 
	return;
loc_821B623C:
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// b 0x821b5d00
	sub_821B5D00(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821B61F8) {
	__imp__sub_821B61F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B6244) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821B6244) {
	__imp__sub_821B6244(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B6248) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,10(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x821b6564
	if (!ctx.cr6.eq) goto loc_821B6564;
	// lfs f0,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmuls f13,f0,f0
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f30,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f30.f64 = double(temp.f32);
	// fcmpu cr6,f13,f30
	ctx.cr6.compare(ctx.f13.f64, ctx.f30.f64);
	// bne cr6,0x821b629c
	if (!ctx.cr6.eq) goto loc_821B629C;
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x821bd428
	ctx.lr = 0x821B6294;
	sub_821BD428(ctx, base);
	// fsqrts f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(sqrt(ctx.f1.f64)));
	// b 0x821b62a0
	goto loc_821B62A0;
loc_821B629C:
	// lfs f31,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f31.f64 = double(temp.f32);
loc_821B62A0:
	// lfs f1,32(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f1.f64 = double(temp.f32);
	// fcmpu cr6,f1,f30
	ctx.cr6.compare(ctx.f1.f64, ctx.f30.f64);
	// bne cr6,0x821b638c
	if (!ctx.cr6.eq) goto loc_821B638C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,2412(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2412);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x821b638c
	if (!ctx.cr6.eq) goto loc_821B638C;
	// lfs f0,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f13,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lfs f12,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// addi r30,r11,-2280
	ctx.r30.s64 = ctx.r11.s64 + -2280;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x821f35e0
	ctx.lr = 0x821B62FC;
	sub_821F35E0(ctx, base);
	// lfs f11,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f10.f64 = double(temp.f32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// fsubs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// stfs f9,88(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821f35e0
	ctx.lr = 0x821B6328;
	sub_821F35E0(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f8,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f8.f64 = double(temp.f32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lfs f7,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f7.f64 = double(temp.f32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// li r6,1
	ctx.r6.s64 = 1;
	// lfs f30,5488(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5488);
	ctx.f30.f64 = double(temp.f32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// fmadds f6,f7,f30,f8
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f30.f64 + ctx.f8.f64));
	// stfs f6,88(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x821f35e0
	ctx.lr = 0x821B635C;
	sub_821F35E0(ctx, base);
	// lfs f5,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f4.f64 = double(temp.f32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// fmadds f3,f4,f30,f5
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f30.f64 + ctx.f5.f64));
	// stfs f3,88(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821f35e0
	ctx.lr = 0x821B6388;
	sub_821F35E0(ctx, base);
	// b 0x821b6564
	goto loc_821B6564;
loc_821B638C:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x822d52c8
	ctx.lr = 0x821B6398;
	sub_822D52C8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lfs f1,36(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822d52c8
	ctx.lr = 0x821B63A8;
	sub_822D52C8(ctx, base);
	// lfs f0,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f12,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f10,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// addi r30,r11,-2280
	ctx.r30.s64 = ctx.r11.s64 + -2280;
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stfs f11,88(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stfs f10,84(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f3,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f2.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x821f32e0
	ctx.lr = 0x821B63F0;
	sub_821F32E0(ctx, base);
	// lfs f9,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f8.f64 = double(temp.f32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lfs f7,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f6,f8,f31,f9
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f31.f64 + ctx.f9.f64));
	// lfs f5,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f5.f64 = double(temp.f32);
	// li r6,1
	ctx.r6.s64 = 1;
	// lfs f4,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f4.f64 = double(temp.f32);
	// fmadds f3,f5,f31,f7
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f31.f64 + ctx.f7.f64));
	// lfs f2,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f2.f64 = double(temp.f32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// fmadds f1,f2,f31,f4
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f31.f64 + ctx.f4.f64));
	// stfs f6,96(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f3,100(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stfs f1,104(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x821f2d08
	ctx.lr = 0x821B6434;
	sub_821F2D08(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f13.f64 = double(temp.f32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lfs f12,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f11,f13,f31,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f31.f64 + ctx.f0.f64));
	// lfs f10,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f10.f64 = double(temp.f32);
	// li r6,1
	ctx.r6.s64 = 1;
	// lfs f9,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f8,f10,f31,f12
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f31.f64 + ctx.f12.f64));
	// lfs f7,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f7.f64 = double(temp.f32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// fmadds f6,f7,f31,f9
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f31.f64 + ctx.f9.f64));
	// stfs f11,96(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f8,100(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stfs f6,104(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x821f2d08
	ctx.lr = 0x821B6478;
	sub_821F2D08(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f5,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f5.f64 = double(temp.f32);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// lfs f4,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f4.f64 = double(temp.f32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lfs f13,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// li r8,1
	ctx.r8.s64 = 1;
	// lfs f12,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// lfs f0,5488(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5488);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f10,f13,f31,f12
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f31.f64 + ctx.f12.f64));
	// fmadds f0,f4,f0,f5
	ctx.f0.f64 = double(float(ctx.f4.f64 * ctx.f0.f64 + ctx.f5.f64));
	// lfs f11,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f9.f64 = double(temp.f32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f8,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f7,f11,f31,f9
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f31.f64 + ctx.f9.f64));
	// lfs f3,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f2.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f10,96(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmadds f6,f8,f31,f0
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f31.f64 + ctx.f0.f64));
	// stfs f7,100(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f6,104(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x821f32e0
	ctx.lr = 0x821B64DC;
	sub_821F32E0(ctx, base);
	// lfs f5,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f4.f64 = double(temp.f32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lfs f3,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f3.f64 = double(temp.f32);
	// fmadds f2,f4,f31,f5
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f31.f64 + ctx.f5.f64));
	// lfs f1,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f1.f64 = double(temp.f32);
	// li r6,1
	ctx.r6.s64 = 1;
	// lfs f0,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f13,f1,f31,f3
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f31.f64 + ctx.f3.f64));
	// lfs f12,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f12.f64 = double(temp.f32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// fmadds f11,f12,f31,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64 + ctx.f0.f64));
	// stfs f2,96(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stfs f11,104(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x821f2d08
	ctx.lr = 0x821B6520;
	sub_821F2D08(ctx, base);
	// lfs f10,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f9.f64 = double(temp.f32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lfs f8,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f7,f9,f31,f10
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f31.f64 + ctx.f10.f64));
	// lfs f6,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f6.f64 = double(temp.f32);
	// li r6,1
	ctx.r6.s64 = 1;
	// lfs f5,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f5.f64 = double(temp.f32);
	// fmadds f4,f6,f31,f8
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f31.f64 + ctx.f8.f64));
	// lfs f3,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f3.f64 = double(temp.f32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// fmadds f2,f3,f31,f5
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f31.f64 + ctx.f5.f64));
	// stfs f7,96(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f4,100(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stfs f2,104(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x821f2d08
	ctx.lr = 0x821B6564;
	sub_821F2D08(ctx, base);
loc_821B6564:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
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

PPC_WEAK_FUNC(sub_821B6248) {
	__imp__sub_821B6248(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B6584) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821B6584) {
	__imp__sub_821B6584(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B6588) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32053
	ctx.r11.s64 = -2100625408;
	// li r5,1280
	ctx.r5.s64 = 1280;
	// addi r3,r11,-464
	ctx.r3.s64 = ctx.r11.s64 + -464;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x823de090
	sub_823DE090(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821B6588) {
	__imp__sub_821B6588(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B659C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821B659C) {
	__imp__sub_821B659C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B65A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x821B65A8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32053
	ctx.r11.s64 = -2100625408;
	// li r31,32
	ctx.r31.s64 = 32;
	// addi r29,r11,-464
	ctx.r29.s64 = ctx.r11.s64 + -464;
	// addi r30,r29,8
	ctx.r30.s64 = ctx.r29.s64 + 8;
loc_821B65BC:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822a24e0
	ctx.lr = 0x821B65C8;
	sub_822A24E0(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,40
	ctx.r30.s64 = ctx.r30.s64 + 40;
	// bne 0x821b65bc
	if (!ctx.cr0.eq) goto loc_821B65BC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r5,1280
	ctx.r5.s64 = 1280;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823de090
	ctx.lr = 0x821B65E4;
	sub_823DE090(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821B65A0) {
	__imp__sub_821B65A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B65EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821B65EC) {
	__imp__sub_821B65EC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B65F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x821B65F8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32053
	ctx.r11.s64 = -2100625408;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r11,r11,-464
	ctx.r11.s64 = ctx.r11.s64 + -464;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r31,r11,36
	ctx.r31.s64 = ctx.r11.s64 + 36;
loc_821B6610:
	// lbz r11,-26(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + -26);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b666c
	if (ctx.cr6.eq) goto loc_821B666C;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x821b6644
	if (ctx.cr6.eq) goto loc_821B6644;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x821b666c
	if (!ctx.cr6.eq) goto loc_821B666C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r4,-24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24);
	// addi r3,r11,180
	ctx.r3.s64 = ctx.r11.s64 + 180;
	// bl 0x8233cbf8
	ctx.lr = 0x821B663C;
	sub_8233CBF8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// b 0x821b6668
	goto loc_821B6668;
loc_821B6644:
	// addi r4,r31,-24
	ctx.r4.s64 = ctx.r31.s64 + -24;
	// lfs f4,-8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	ctx.f4.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f3,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,-4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,-12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821ad488
	ctx.lr = 0x821B6660;
	sub_821AD488(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
loc_821B6668:
	// bne cr6,0x821b6688
	if (!ctx.cr6.eq) goto loc_821B6688;
loc_821B666C:
	// addi r29,r29,40
	ctx.r29.s64 = ctx.r29.s64 + 40;
	// addi r31,r31,40
	ctx.r31.s64 = ctx.r31.s64 + 40;
	// cmplwi cr6,r29,1280
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 1280, ctx.xer);
	// blt cr6,0x821b6610
	if (ctx.cr6.lt) goto loc_821B6610;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_821B6688:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821B65F0) {
	__imp__sub_821B65F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B6694) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821B6694) {
	__imp__sub_821B6694(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B6698) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4680(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4680);
	// li r10,1
	ctx.r10.s64 = 1;
	// ori r9,r11,8192
	ctx.r9.u64 = ctx.r11.u64 | 8192;
	// stb r10,3704(r3)
	PPC_STORE_U8(ctx.r3.u32 + 3704, ctx.r10.u8);
	// stw r9,4680(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4680, ctx.r9.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821B6698) {
	__imp__sub_821B6698(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B66B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4680(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4680);
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r9,r11,0,19,17
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFDFFF;
	// stb r10,3704(r3)
	PPC_STORE_U8(ctx.r3.u32 + 3704, ctx.r10.u8);
	// stw r9,4680(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4680, ctx.r9.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821B66B0) {
	__imp__sub_821B66B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B66C8) {
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
	// li r3,-1
	ctx.r3.s64 = -1;
	// bl 0x821a9b38
	ctx.lr = 0x821B66E4;
	sub_821A9B38(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821b6748
	if (ctx.cr6.eq) goto loc_821B6748;
	// li r30,0
	ctx.r30.s64 = 0;
loc_821B66F4:
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r31
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// cmpwi cr6,r9,4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4, ctx.xer);
	// bne cr6,0x821b6730
	if (!ctx.cr6.eq) goto loc_821B6730;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821b65f0
	ctx.lr = 0x821B6714;
	sub_821B65F0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821b6730
	if (!ctx.cr6.eq) goto loc_821B6730;
	// lwz r11,4680(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4680);
	// stb r30,3704(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3704, ctx.r30.u8);
	// rlwinm r10,r11,0,19,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFDFFF;
	// stw r10,4680(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4680, ctx.r10.u32);
loc_821B6730:
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821a9b98
	ctx.lr = 0x821B673C;
	sub_821A9B98(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821b66f4
	if (!ctx.cr6.eq) goto loc_821B66F4;
loc_821B6748:
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

PPC_WEAK_FUNC(sub_821B66C8) {
	__imp__sub_821B66C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B6760) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32053
	ctx.r8.s64 = -2100625408;
	// li r10,8
	ctx.r10.s64 = 8;
	// addi r11,r8,-464
	ctx.r11.s64 = ctx.r8.s64 + -464;
	// lfs f1,2424(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2424);
	ctx.f1.f64 = double(temp.f32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_821B677C:
	// lbz r10,-6(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -6);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821b67b0
	if (ctx.cr6.eq) goto loc_821B67B0;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// beq cr6,0x821b67a0
	if (ctx.cr6.eq) goto loc_821B67A0;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// bne cr6,0x821b67b0
	if (!ctx.cr6.eq) goto loc_821B67B0;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// b 0x821b67a4
	goto loc_821B67A4;
loc_821B67A0:
	// lfs f0,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
loc_821B67A4:
	// fcmpu cr6,f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// ble cr6,0x821b67b0
	if (!ctx.cr6.gt) goto loc_821B67B0;
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
loc_821B67B0:
	// lbz r10,34(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 34);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821b67e4
	if (ctx.cr6.eq) goto loc_821B67E4;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// beq cr6,0x821b67d4
	if (ctx.cr6.eq) goto loc_821B67D4;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// bne cr6,0x821b67e4
	if (!ctx.cr6.eq) goto loc_821B67E4;
	// lfs f0,40(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// b 0x821b67d8
	goto loc_821B67D8;
loc_821B67D4:
	// lfs f0,48(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
loc_821B67D8:
	// fcmpu cr6,f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// ble cr6,0x821b67e4
	if (!ctx.cr6.gt) goto loc_821B67E4;
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
loc_821B67E4:
	// lbz r10,74(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 74);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821b6818
	if (ctx.cr6.eq) goto loc_821B6818;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// beq cr6,0x821b6808
	if (ctx.cr6.eq) goto loc_821B6808;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// bne cr6,0x821b6818
	if (!ctx.cr6.eq) goto loc_821B6818;
	// lfs f0,80(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// b 0x821b680c
	goto loc_821B680C;
loc_821B6808:
	// lfs f0,88(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
loc_821B680C:
	// fcmpu cr6,f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// ble cr6,0x821b6818
	if (!ctx.cr6.gt) goto loc_821B6818;
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
loc_821B6818:
	// lbz r10,114(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 114);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821b684c
	if (ctx.cr6.eq) goto loc_821B684C;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// beq cr6,0x821b683c
	if (ctx.cr6.eq) goto loc_821B683C;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// bne cr6,0x821b684c
	if (!ctx.cr6.eq) goto loc_821B684C;
	// lfs f0,120(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	ctx.f0.f64 = double(temp.f32);
	// b 0x821b6840
	goto loc_821B6840;
loc_821B683C:
	// lfs f0,128(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
loc_821B6840:
	// fcmpu cr6,f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// ble cr6,0x821b684c
	if (!ctx.cr6.gt) goto loc_821B684C;
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
loc_821B684C:
	// addi r11,r11,160
	ctx.r11.s64 = ctx.r11.s64 + 160;
	// bdnz 0x821b677c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821B677C;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821B6760) {
	__imp__sub_821B6760(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B6858) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x821b6884
	if (!ctx.cr6.gt) goto loc_821B6884;
loc_821B6868:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r5
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x821b688c
	if (ctx.cr6.eq) goto loc_821B688C;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmpw cr6,r10,r4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r4.s32, ctx.xer);
	// blt cr6,0x821b6868
	if (ctx.cr6.lt) goto loc_821B6868;
loc_821B6884:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_821B688C:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821B6858) {
	__imp__sub_821B6858(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B6894) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821B6894) {
	__imp__sub_821B6894(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B6898) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x821B68A0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32053
	ctx.r11.s64 = -2100625408;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r11,r11,-464
	ctx.r11.s64 = ctx.r11.s64 + -464;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r11,36
	ctx.r31.s64 = ctx.r11.s64 + 36;
loc_821B68B8:
	// lbz r11,-26(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + -26);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b6908
	if (ctx.cr6.eq) goto loc_821B6908;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x821b68e4
	if (ctx.cr6.eq) goto loc_821B68E4;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x821b6908
	if (!ctx.cr6.eq) goto loc_821B6908;
	// addi r3,r29,20
	ctx.r3.s64 = ctx.r29.s64 + 20;
	// lwz r4,-24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24);
	// bl 0x8233cd78
	ctx.lr = 0x821B68E0;
	sub_8233CD78(ctx, base);
	// b 0x821b6900
	goto loc_821B6900;
loc_821B68E4:
	// addi r4,r31,-24
	ctx.r4.s64 = ctx.r31.s64 + -24;
	// lfs f4,-8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	ctx.f4.f64 = double(temp.f32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f3,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,-4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,-12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822375e0
	ctx.lr = 0x821B6900;
	sub_822375E0(ctx, base);
loc_821B6900:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821b6924
	if (!ctx.cr6.eq) goto loc_821B6924;
loc_821B6908:
	// addi r30,r30,40
	ctx.r30.s64 = ctx.r30.s64 + 40;
	// addi r31,r31,40
	ctx.r31.s64 = ctx.r31.s64 + 40;
	// cmplwi cr6,r30,1280
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1280, ctx.xer);
	// blt cr6,0x821b68b8
	if (ctx.cr6.lt) goto loc_821B68B8;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_821B6924:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821B6898) {
	__imp__sub_821B6898(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B6930) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x821B6938;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x821ab968
	ctx.lr = 0x821B6944;
	sub_821AB968(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821b696c
	if (!ctx.cr6.eq) goto loc_821B696C;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821b24f0
	ctx.lr = 0x821B6958;
	sub_821B24F0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821ab968
	ctx.lr = 0x821B6960;
	sub_821AB968(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b69d4
	if (ctx.cr6.eq) goto loc_821B69D4;
loc_821B696C:
	// lbz r11,4612(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 4612);
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// addic. r30,r10,1
	ctx.xer.ca = ctx.r10.u32 > 4294967294;
	ctx.r30.s64 = ctx.r10.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x821b69d4
	if (ctx.cr0.lt) goto loc_821B69D4;
	// mulli r11,r30,28
	ctx.r11.s64 = ctx.r30.s64 * 28;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// addi r29,r11,3736
	ctx.r29.s64 = ctx.r11.s64 + 3736;
loc_821B6988:
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x821b69c8
	if (!ctx.cr6.gt) goto loc_821B69C8;
	// bl 0x82234970
	ctx.lr = 0x821B6998;
	sub_82234970(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821b69c8
	if (ctx.cr6.eq) goto loc_821B69C8;
	// bl 0x821b6898
	ctx.lr = 0x821B69A8;
	sub_821B6898(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821b69c8
	if (!ctx.cr6.eq) goto loc_821B69C8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,4(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// bl 0x822386a0
	ctx.lr = 0x821B69C0;
	sub_822386A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821b69e0
	if (!ctx.cr6.eq) goto loc_821B69E0;
loc_821B69C8:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,-28
	ctx.r29.s64 = ctx.r29.s64 + -28;
	// bge 0x821b6988
	if (!ctx.cr0.lt) goto loc_821B6988;
loc_821B69D4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_821B69E0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821B6930) {
	__imp__sub_821B6930(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B69EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821B69EC) {
	__imp__sub_821B69EC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B69F0) {
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
	// bl 0x821ae110
	ctx.lr = 0x821B6A10;
	sub_821AE110(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82240108
	ctx.lr = 0x821B6A1C;
	sub_82240108(ctx, base);
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r11,-25976
	ctx.r10.s64 = ctx.r11.s64 + -25976;
	// lhz r4,84(r10)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r10.u32 + 84);
	// bl 0x82229da8
	ctx.lr = 0x821B6A34;
	sub_82229DA8(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r9,5003(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5003, ctx.r9.u8);
	// bl 0x821ab958
	ctx.lr = 0x821B6A44;
	sub_821AB958(ctx, base);
	// stb r3,3705(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3705, ctx.r3.u8);
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

PPC_WEAK_FUNC(sub_821B69F0) {
	__imp__sub_821B69F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B6A60) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4680(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4680);
	// ori r10,r11,8192
	ctx.r10.u64 = ctx.r11.u64 | 8192;
	// stw r10,4680(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4680, ctx.r10.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821B6A60) {
	__imp__sub_821B6A60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B6A70) {
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
	// lis r11,-32053
	ctx.r11.s64 = -2100625408;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,-464
	ctx.r9.s64 = ctx.r11.s64 + -464;
	// addi r11,r9,8
	ctx.r11.s64 = ctx.r9.s64 + 8;
loc_821B6A8C:
	// lhz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplw cr6,r8,r3
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x821b6ab0
	if (ctx.cr6.eq) goto loc_821B6AB0;
	// addi r11,r11,40
	ctx.r11.s64 = ctx.r11.s64 + 40;
	// addi r8,r9,1288
	ctx.r8.s64 = ctx.r9.s64 + 1288;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x821b6a8c
	if (ctx.cr6.lt) goto loc_821B6A8C;
	// li r10,-1
	ctx.r10.s64 = -1;
loc_821B6AB0:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x821b5d00
	ctx.lr = 0x821B6AB8;
	sub_821B5D00(ctx, base);
	// bl 0x821b66c8
	ctx.lr = 0x821B6ABC;
	sub_821B66C8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821B6A70) {
	__imp__sub_821B6A70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B6ACC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821B6ACC) {
	__imp__sub_821B6ACC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B6AD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x821B6AD8;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32053
	ctx.r11.s64 = -2100625408;
	// li r26,0
	ctx.r26.s64 = 0;
	// addi r11,r11,-464
	ctx.r11.s64 = ctx.r11.s64 + -464;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r31,r11,36
	ctx.r31.s64 = ctx.r11.s64 + 36;
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// li r27,32
	ctx.r27.s64 = 32;
	// lis r25,-32032
	ctx.r25.s64 = -2099249152;
	// addi r28,r11,9624
	ctx.r28.s64 = ctx.r11.s64 + 9624;
loc_821B6B00:
	// lbz r11,-26(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + -26);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b6bc0
	if (ctx.cr6.eq) goto loc_821B6BC0;
	// lwz r10,52(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 52);
	// addi r30,r31,-36
	ctx.r30.s64 = ctx.r31.s64 + -36;
	// lwz r9,-36(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + -36);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x821b6b30
	if (ctx.cr6.lt) goto loc_821B6B30;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821b5d00
	ctx.lr = 0x821B6B28;
	sub_821B5D00(ctx, base);
	// li r26,1
	ctx.r26.s64 = 1;
	// b 0x821b6bc0
	goto loc_821B6BC0;
loc_821B6B30:
	// lwz r10,-32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -32);
	// lwz r9,52(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 52);
	// subf r8,r10,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	// cmpwi cr6,r8,250
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 250, ctx.xer);
	// blt cr6,0x821b6ba8
	if (ctx.cr6.lt) goto loc_821B6BA8;
	// lbz r5,-25(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + -25);
	// rlwinm r10,r5,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x8;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x821b6b58
	if (ctx.cr6.eq) goto loc_821B6B58;
	// ori r5,r5,16
	ctx.r5.u64 = ctx.r5.u64 | 16;
loc_821B6B58:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x821b6b80
	if (ctx.cr6.eq) goto loc_821B6B80;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x821b6ba0
	if (!ctx.cr6.eq) goto loc_821B6BA0;
	// li r4,23
	ctx.r4.s64 = 23;
	// lfs f1,-20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -20);
	ctx.f1.f64 = double(temp.f32);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r6,-24(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24);
	// bl 0x821be9c8
	ctx.lr = 0x821B6B7C;
	sub_821BE9C8(ctx, base);
	// b 0x821b6ba0
	goto loc_821B6BA0;
loc_821B6B80:
	// addi r6,r31,-24
	ctx.r6.s64 = ctx.r31.s64 + -24;
	// lfs f4,-8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	ctx.f4.f64 = double(temp.f32);
	// li r4,20
	ctx.r4.s64 = 20;
	// lfs f3,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// li r3,0
	ctx.r3.s64 = 0;
	// lfs f2,-4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,-12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821be7c0
	ctx.lr = 0x821B6BA0;
	sub_821BE7C0(ctx, base);
loc_821B6BA0:
	// lwz r11,52(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 52);
	// stw r11,-32(r31)
	PPC_STORE_U32(ctx.r31.u32 + -32, ctx.r11.u32);
loc_821B6BA8:
	// lwz r11,-6172(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -6172);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821b6bc0
	if (ctx.cr6.eq) goto loc_821B6BC0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821b6248
	ctx.lr = 0x821B6BC0;
	sub_821B6248(ctx, base);
loc_821B6BC0:
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,40
	ctx.r31.s64 = ctx.r31.s64 + 40;
	// bne 0x821b6b00
	if (!ctx.cr0.eq) goto loc_821B6B00;
	// clrlwi r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b6be0
	if (ctx.cr6.eq) goto loc_821B6BE0;
	// bl 0x821b66c8
	ctx.lr = 0x821B6BE0;
	sub_821B66C8(ctx, base);
loc_821B6BE0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821B6AD0) {
	__imp__sub_821B6AD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B6BE8) {
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
	// bl 0x8222fd60
	ctx.lr = 0x821B6C00;
	sub_8222FD60(ctx, base);
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// lfs f13,3708(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 3708);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// lfs f0,20484(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20484);
	ctx.f0.f64 = double(temp.f32);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fmuls f9,f13,f0
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fcmpu cr6,f10,f9
	ctx.cr6.compare(ctx.f10.f64, ctx.f9.f64);
	// bgt cr6,0x821b6c40
	if (ctx.cr6.gt) goto loc_821B6C40;
	// lwz r11,4680(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4680);
	// li r10,1
	ctx.r10.s64 = 1;
	// ori r9,r11,8192
	ctx.r9.u64 = ctx.r11.u64 | 8192;
	// stb r10,3704(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3704, ctx.r10.u8);
	// stw r9,4680(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4680, ctx.r9.u32);
loc_821B6C40:
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

PPC_WEAK_FUNC(sub_821B6BE8) {
	__imp__sub_821B6BE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B6C54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821B6C54) {
	__imp__sub_821B6C54(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B6C58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf64
	ctx.lr = 0x821B6C60;
	__savegprlr_23(ctx, base);
	// stwu r1,-2208(r1)
	ea = -2208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r9,-2
	ctx.r9.s64 = -2;
	// li r8,256
	ctx.r8.s64 = 256;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lfs f2,9868(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9868);
	ctx.f2.f64 = double(temp.f32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,232
	ctx.r3.s64 = ctx.r11.s64 + 232;
	// bl 0x82234bd8
	ctx.lr = 0x821B6C90;
	sub_82234BD8(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x821b6de4
	if (!ctx.cr6.gt) goto loc_821B6DE4;
	// addi r26,r28,-8
	ctx.r26.s64 = ctx.r28.s64 + -8;
	// addi r25,r1,80
	ctx.r25.s64 = ctx.r1.s64 + 80;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// li r27,1
	ctx.r27.s64 = 1;
	// lis r23,-32255
	ctx.r23.s64 = -2113863680;
loc_821B6CB0:
	// lwz r31,0(r25)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821b6898
	ctx.lr = 0x821B6CBC;
	sub_821B6898(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821b6db0
	if (!ctx.cr6.eq) goto loc_821B6DB0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// bl 0x822386a0
	ctx.lr = 0x821B6CD4;
	sub_822386A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821b6db0
	if (ctx.cr6.eq) goto loc_821B6DB0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r12,4
	ctx.r12.s64 = 262144;
	// slw r10,r27,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r27.u32 << (ctx.r11.u8 & 0x3F));
	// ori r12,r12,7932
	ctx.r12.u64 = ctx.r12.u64 | 7932;
	// and r9,r10,r12
	ctx.r9.u64 = ctx.r10.u64 & ctx.r12.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x821b6d10
	if (ctx.cr6.eq) goto loc_821B6D10;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821b9e40
	ctx.lr = 0x821B6D04;
	sub_821B9E40(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b6db0
	if (ctx.cr6.eq) goto loc_821B6DB0;
loc_821B6D10:
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x821b6d3c
	if (!ctx.cr6.gt) goto loc_821B6D3C;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_821B6D20:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r31
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x821b6df0
	if (ctx.cr6.eq) goto loc_821B6DF0;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmpw cr6,r10,r30
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r30.s32, ctx.xer);
	// blt cr6,0x821b6d20
	if (ctx.cr6.lt) goto loc_821B6D20;
loc_821B6D3C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_821B6D40:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821b6db0
	if (!ctx.cr6.eq) goto loc_821B6DB0;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lfs f0,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lfs f12,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// lis r12,4
	ctx.r12.s64 = 262144;
	// slw r9,r27,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r27.u32 << (ctx.r10.u8 & 0x3F));
	// lfs f11,232(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	ctx.f11.f64 = double(temp.f32);
	// ori r12,r12,7932
	ctx.r12.u64 = ctx.r12.u64 | 7932;
	// fsubs f10,f0,f11
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// lfs f9,240(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 240);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f13,f9
	ctx.f8.f64 = double(float(ctx.f13.f64 - ctx.f9.f64));
	// lfs f7,236(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 236);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f12,f7
	ctx.f6.f64 = double(float(ctx.f12.f64 - ctx.f7.f64));
	// and r8,r9,r12
	ctx.r8.u64 = ctx.r9.u64 & ctx.r12.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// fmuls f5,f10,f10
	ctx.f5.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// fmadds f4,f8,f8,f5
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 + ctx.f5.f64));
	// fmadds f0,f6,f6,f4
	ctx.f0.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f4.f64));
	// beq cr6,0x821b6da4
	if (ctx.cr6.eq) goto loc_821B6DA4;
	// lfs f13,25768(r23)
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 25768);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
loc_821B6DA4:
	// stfs f0,12(r26)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r26.u32 + 12, temp.u32);
	// stwu r31,8(r26)
	ea = 8 + ctx.r26.u32;
	PPC_STORE_U32(ea, ctx.r31.u32);
	ctx.r26.u32 = ea;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
loc_821B6DB0:
	// addic. r24,r24,-1
	ctx.xer.ca = ctx.r24.u32 > 0;
	ctx.r24.s64 = ctx.r24.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// addi r25,r25,8
	ctx.r25.s64 = ctx.r25.s64 + 8;
	// bne 0x821b6cb0
	if (!ctx.cr0.eq) goto loc_821B6CB0;
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// ble cr6,0x821b6de4
	if (!ctx.cr6.gt) goto loc_821B6DE4;
	// rlwinm r11,r30,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// add r4,r11,r28
	ctx.r4.u64 = ctx.r11.u64 + ctx.r28.u64;
	// addi r6,r10,18680
	ctx.r6.s64 = ctx.r10.s64 + 18680;
	// subf r9,r28,r4
	ctx.r9.s64 = ctx.r4.s64 - ctx.r28.s64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// srawi r5,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r5.s64 = ctx.r9.s32 >> 3;
	// bl 0x821b7458
	ctx.lr = 0x821B6DE4;
	sub_821B7458(ctx, base);
loc_821B6DE4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,2208
	ctx.r1.s64 = ctx.r1.s64 + 2208;
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
loc_821B6DF0:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// b 0x821b6d40
	goto loc_821B6D40;
}

PPC_WEAK_FUNC(sub_821B6C58) {
	__imp__sub_821B6C58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B6DF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x821B6E00;
	__savegprlr_26(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-2192(r1)
	ea = -2192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x821b6760
	ctx.lr = 0x821B6E10;
	sub_821B6760(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x821b6ee0
	if (ctx.cr6.lt) goto loc_821B6EE0;
	// li r26,0
	ctx.r26.s64 = 0;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stb r26,3705(r3)
	PPC_STORE_U8(ctx.r3.u32 + 3705, ctx.r26.u8);
	// lfs f0,25764(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 25764);
	ctx.f0.f64 = double(temp.f32);
	// fadds f31,f1,f0
	ctx.f31.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// bl 0x821b6930
	ctx.lr = 0x821B6E38;
	sub_821B6930(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821b6e84
	if (ctx.cr6.eq) goto loc_821B6E84;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r3,20
	ctx.r4.s64 = ctx.r3.s64 + 20;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821af5b0
	ctx.lr = 0x821B6E5C;
	sub_821AF5B0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b6e84
	if (ctx.cr6.eq) goto loc_821B6E84;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821b69f0
	ctx.lr = 0x821B6E74;
	sub_821B69F0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,2192
	ctx.r1.s64 = ctx.r1.s64 + 2192;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_821B6E84:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821b6c58
	ctx.lr = 0x821B6E94;
	sub_821B6C58(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x821b6ee0
	if (!ctx.cr6.gt) goto loc_821B6EE0;
	// addi r29,r1,80
	ctx.r29.s64 = ctx.r1.s64 + 80;
loc_821B6EA8:
	// lwz r30,0(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r30,20
	ctx.r4.s64 = ctx.r30.s64 + 20;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821af5b0
	ctx.lr = 0x821B6EC4;
	sub_821AF5B0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821b6ef0
	if (!ctx.cr6.eq) goto loc_821B6EF0;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// cmpw cr6,r28,r27
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x821b6ea8
	if (ctx.cr6.lt) goto loc_821B6EA8;
loc_821B6EE0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,2192
	ctx.r1.s64 = ctx.r1.s64 + 2192;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_821B6EF0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ae110
	ctx.lr = 0x821B6EF8;
	sub_821AE110(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82240108
	ctx.lr = 0x821B6F04;
	sub_82240108(ctx, base);
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r11,-25976
	ctx.r10.s64 = ctx.r11.s64 + -25976;
	// lhz r4,84(r10)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r10.u32 + 84);
	// bl 0x82229da8
	ctx.lr = 0x821B6F1C;
	sub_82229DA8(ctx, base);
	// stb r26,5003(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5003, ctx.r26.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ab958
	ctx.lr = 0x821B6F28;
	sub_821AB958(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r9,3705(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3705, ctx.r9.u8);
	// addi r1,r1,2192
	ctx.r1.s64 = ctx.r1.s64 + 2192;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821B6DF8) {
	__imp__sub_821B6DF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B6F40) {
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
	// bl 0x821b6df8
	ctx.lr = 0x821B6F58;
	sub_821B6DF8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,4680(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4680);
	// beq cr6,0x821b6f78
	if (ctx.cr6.eq) goto loc_821B6F78;
	// li r10,1
	ctx.r10.s64 = 1;
	// ori r9,r11,8192
	ctx.r9.u64 = ctx.r11.u64 | 8192;
	// b 0x821b6f80
	goto loc_821B6F80;
loc_821B6F78:
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r9,r11,0,19,17
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFDFFF;
loc_821B6F80:
	// stw r9,4680(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4680, ctx.r9.u32);
	// stb r10,3704(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3704, ctx.r10.u8);
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

PPC_WEAK_FUNC(sub_821B6F40) {
	__imp__sub_821B6F40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B6F9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821B6F9C) {
	__imp__sub_821B6F9C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B6FA0) {
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
	// lbz r11,3704(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 3704);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b7100
	if (ctx.cr6.eq) goto loc_821B7100;
	// bl 0x821a9ec0
	ctx.lr = 0x821B6FC8;
	sub_821A9EC0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,25972
	ctx.r10.s64 = ctx.r11.s64 + 25972;
	// stw r10,5124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5124, ctx.r10.u32);
	// bl 0x821ab968
	ctx.lr = 0x821B6FDC;
	sub_821AB968(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821b7078
	if (ctx.cr6.eq) goto loc_821B7078;
	// bl 0x821ab958
	ctx.lr = 0x821B6FF0;
	sub_821AB958(ctx, base);
	// lbz r11,3705(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3705);
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x821b7020
	if (!ctx.cr6.lt) goto loc_821B7020;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821b65f0
	ctx.lr = 0x821B7008;
	sub_821B65F0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b70ec
	if (ctx.cr6.eq) goto loc_821B70EC;
	// bl 0x821ab958
	ctx.lr = 0x821B701C;
	sub_821AB958(ctx, base);
	// stb r3,3705(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3705, ctx.r3.u8);
loc_821B7020:
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821cfae0
	ctx.lr = 0x821B702C;
	sub_821CFAE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821dba38
	ctx.lr = 0x821B7034;
	sub_821DBA38(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821dd828
	ctx.lr = 0x821B7048;
	sub_821DD828(ctx, base);
	// lhz r11,4824(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4824);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821b7060
	if (!ctx.cr6.eq) goto loc_821B7060;
	// lwz r11,4768(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4768);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b70d8
	if (ctx.cr6.eq) goto loc_821B70D8;
loc_821B7060:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821aba40
	ctx.lr = 0x821B7068;
	sub_821ABA40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821b2850
	ctx.lr = 0x821B7070;
	sub_821B2850(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x821b710c
	goto loc_821B710C;
loc_821B7078:
	// bl 0x821b65f0
	ctx.lr = 0x821B707C;
	sub_821B65F0(ctx, base);
	// clrlwi r30,r3,24
	ctx.r30.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821b70e8
	if (ctx.cr6.eq) goto loc_821B70E8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f1,6044(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6044);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821ac318
	ctx.lr = 0x821B7098;
	sub_821AC318(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821b70b4
	if (ctx.cr6.eq) goto loc_821B70B4;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r5,3000
	ctx.r5.s64 = 3000;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// bl 0x82238218
	ctx.lr = 0x821B70B4;
	sub_82238218(ctx, base);
loc_821B70B4:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821b70e8
	if (ctx.cr6.eq) goto loc_821B70E8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821b6df8
	ctx.lr = 0x821B70C4;
	sub_821B6DF8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b70e8
	if (ctx.cr6.eq) goto loc_821B70E8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821b50e8
	ctx.lr = 0x821B70D8;
	sub_821B50E8(ctx, base);
loc_821B70D8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821b2850
	ctx.lr = 0x821B70E0;
	sub_821B2850(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x821b710c
	goto loc_821B710C;
loc_821B70E8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_821B70EC:
	// lwz r11,4680(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4680);
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r9,r11,0,19,17
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFDFFF;
	// stb r10,3704(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3704, ctx.r10.u8);
	// stw r9,4680(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4680, ctx.r9.u32);
loc_821B7100:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x821da9e8
	ctx.lr = 0x821B7108;
	sub_821DA9E8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_821B710C:
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

PPC_WEAK_FUNC(sub_821B6FA0) {
	__imp__sub_821B6FA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B7124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821B7124) {
	__imp__sub_821B7124(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B7128) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x821B7130;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,-1
	ctx.r11.s64 = ctx.r4.s64 + -1;
	// std r6,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.r6.u64);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
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
	// bge cr6,0x821b71c4
	if (!ctx.cr6.lt) goto loc_821B71C4;
loc_821B715C:
	// rlwinm r11,r30,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// mtctr r26
	ctx.ctr.u64 = ctx.r26.u64;
	// addi r4,r1,184
	ctx.r4.s64 = ctx.r1.s64 + 184;
	// add r29,r11,r28
	ctx.r29.u64 = ctx.r11.u64 + ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x821B7174;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b71b0
	if (ctx.cr6.eq) goto loc_821B71B0;
	// rlwinm r11,r31,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r9,r30,-1
	ctx.r9.s64 = ctx.r30.s64 + -1;
	// add r8,r11,r28
	ctx.r8.u64 = ctx.r11.u64 + ctx.r28.u64;
	// srawi r7,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 1;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// stwx r10,r11,r28
	PPC_STORE_U32(ctx.r11.u32 + ctx.r28.u32, ctx.r10.u32);
	// cmpw cr6,r27,r30
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r30.s32, ctx.xer);
	// lwz r6,4(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addze r30,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r30.s64 = temp.s64;
	// stw r6,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r6.u32);
	// blt cr6,0x821b715c
	if (ctx.cr6.lt) goto loc_821B715C;
loc_821B71B0:
	// ld r11,184(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 184);
	// rlwinm r10,r31,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// stdx r11,r10,r28
	PPC_STORE_U64(ctx.r10.u32 + ctx.r28.u32, ctx.r11.u64);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_821B71C4:
	// rlwinm r11,r31,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// stdx r6,r11,r28
	PPC_STORE_U64(ctx.r11.u32 + ctx.r28.u32, ctx.r6.u64);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821B7128) {
	__imp__sub_821B7128(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B71D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821B71D4) {
	__imp__sub_821B71D4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B71D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x821B71E0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x821B7204;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b7230
	if (ctx.cr6.eq) goto loc_821B7230;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x821b7230
	if (ctx.cr6.eq) goto loc_821B7230;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// ld r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// std r10,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r10.u64);
loc_821B7230:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x821B7240;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b726c
	if (ctx.cr6.eq) goto loc_821B726C;
	// cmplw cr6,r29,r31
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x821b726c
	if (ctx.cr6.eq) goto loc_821B726C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// ld r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r29.u32 + 0);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r9,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r9.u32);
	// std r10,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
loc_821B726C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x821B727C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b72a8
	if (ctx.cr6.eq) goto loc_821B72A8;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x821b72a8
	if (ctx.cr6.eq) goto loc_821B72A8;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// ld r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// std r10,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r10.u64);
loc_821B72A8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821B71D8) {
	__imp__sub_821B71D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B72B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x821B72B8;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// rlwinm r31,r11,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// cmpw cr6,r31,r5
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x821b7340
	if (!ctx.cr6.lt) goto loc_821B7340;
loc_821B72E4:
	// rlwinm r11,r31,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// mtctr r27
	ctx.ctr.u64 = ctx.r27.u64;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r4,r3,-8
	ctx.r4.s64 = ctx.r3.s64 + -8;
	// bctrl 
	ctx.lr = 0x821B72F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b7308
	if (ctx.cr6.eq) goto loc_821B7308;
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
loc_821B7308:
	// rlwinm r10,r31,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r11,r29,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r10,r30
	ctx.r9.u64 = ctx.r10.u64 + ctx.r30.u64;
	// add r8,r11,r30
	ctx.r8.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r7,r31,1
	ctx.r7.s64 = ctx.r31.s64 + 1;
	// lwzx r6,r10,r30
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// rlwinm r31,r7,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r31,r28
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r28.s32, ctx.xer);
	// stwx r6,r11,r30
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r6.u32);
	// lwz r5,4(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r5,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r5.u32);
	// blt cr6,0x821b72e4
	if (ctx.cr6.lt) goto loc_821B72E4;
	// cmpw cr6,r31,r28
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r28.s32, ctx.xer);
loc_821B7340:
	// bne cr6,0x821b7368
	if (!ctx.cr6.eq) goto loc_821B7368;
	// rlwinm r11,r28,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r10,r29,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// add r9,r10,r30
	ctx.r9.u64 = ctx.r10.u64 + ctx.r30.u64;
	// addi r29,r28,-1
	ctx.r29.s64 = ctx.r28.s64 + -1;
	// lwz r8,-8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// stwx r8,r10,r30
	PPC_STORE_U32(ctx.r10.u32 + ctx.r30.u32, ctx.r8.u32);
	// lwz r7,-4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// stw r7,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r7.u32);
loc_821B7368:
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821b7128
	ctx.lr = 0x821B7380;
	sub_821B7128(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821B72B0) {
	__imp__sub_821B72B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B7388) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x821B7390;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// subf r11,r3,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r3.s64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// srawi r28,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r28.s64 = ctx.r11.s32 >> 3;
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
	// ble 0x821b73dc
	if (!ctx.cr0.gt) goto loc_821B73DC;
	// rlwinm r11,r31,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// add r30,r11,r3
	ctx.r30.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_821B73B8:
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// ldu r6,-8(r30)
	ea = -8 + ctx.r30.u32;
	ctx.r6.u64 = PPC_LOAD_U64(ea);
	ctx.r30.u32 = ea;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821b72b0
	ctx.lr = 0x821B73D4;
	sub_821B72B0(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bgt cr6,0x821b73b8
	if (ctx.cr6.gt) goto loc_821B73B8;
loc_821B73DC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821B7388) {
	__imp__sub_821B7388(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B73E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821B73E4) {
	__imp__sub_821B73E4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B73E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x821B73F0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// subf r31,r3,r4
	ctx.r31.s64 = ctx.r4.s64 - ctx.r3.s64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// srawi r11,r31,3
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r31.s32 >> 3;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x821b7450
	if (!ctx.cr6.gt) goto loc_821B7450;
	// addi r29,r3,-8
	ctx.r29.s64 = ctx.r3.s64 + -8;
loc_821B7410:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// add r11,r29,r31
	ctx.r11.u64 = ctx.r29.u64 + ctx.r31.u64;
	// ldx r6,r29,r31
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r29.u32 + ctx.r31.u32);
	// addi r9,r31,-8
	ctx.r9.s64 = ctx.r31.s64 + -8;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// srawi r5,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r5.s64 = ctx.r9.s32 >> 3;
	// li r4,0
	ctx.r4.s64 = 0;
	// stwx r10,r29,r31
	PPC_STORE_U32(ctx.r29.u32 + ctx.r31.u32, ctx.r10.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r8,4(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// bl 0x821b72b0
	ctx.lr = 0x821B7440;
	sub_821B72B0(ctx, base);
	// addi r31,r31,-8
	ctx.r31.s64 = ctx.r31.s64 + -8;
	// srawi r11,r31,3
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r31.s32 >> 3;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bgt cr6,0x821b7410
	if (ctx.cr6.gt) goto loc_821B7410;
loc_821B7450:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821B73E8) {
	__imp__sub_821B73E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B7458) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x821B7460;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// subf r11,r3,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r3.s64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// srawi r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// ble cr6,0x821b7510
	if (!ctx.cr6.gt) goto loc_821B7510;
loc_821B7484:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x821b7534
	if (!ctx.cr6.gt) goto loc_821B7534;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82181250
	ctx.lr = 0x821B74A0;
	sub_82181250(ctx, base);
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
	// rlwinm r7,r9,0,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFF8;
	// rlwinm r6,r8,0,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFF8;
	// cmpw cr6,r6,r7
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r7.s32, ctx.xer);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// bge cr6,0x821b74f0
	if (!ctx.cr6.lt) goto loc_821B74F0;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821b7458
	ctx.lr = 0x821B74E8;
	sub_821B7458(ctx, base);
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// b 0x821b7500
	goto loc_821B7500;
loc_821B74F0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821b7458
	ctx.lr = 0x821B74FC;
	sub_821B7458(ctx, base);
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
loc_821B7500:
	// subf r11,r30,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r30.s64;
	// srawi r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// bgt cr6,0x821b7484
	if (ctx.cr6.gt) goto loc_821B7484;
loc_821B7510:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x821b752c
	if (!ctx.cr6.gt) goto loc_821B752C;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821960b8
	ctx.lr = 0x821B752C;
	sub_821960B8(ctx, base);
loc_821B752C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_821B7534:
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// ble cr6,0x821b7510
	if (!ctx.cr6.gt) goto loc_821B7510;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x821b755c
	if (!ctx.cr6.gt) goto loc_821B755C;
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
	// bl 0x821b7388
	ctx.lr = 0x821B755C;
	sub_821B7388(ctx, base);
loc_821B755C:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821b73e8
	ctx.lr = 0x821B756C;
	sub_821B73E8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821B7458) {
	__imp__sub_821B7458(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B7574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821B7574) {
	__imp__sub_821B7574(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B7578) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32018
	ctx.r11.s64 = -2098331648;
	// rlwinm r10,r3,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r11,r11,6688
	ctx.r11.s64 = ctx.r11.s64 + 6688;
	// addi r9,r11,7964
	ctx.r9.s64 = ctx.r11.s64 + 7964;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821B7578) {
	__imp__sub_821B7578(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B7590) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32018
	ctx.r11.s64 = -2098331648;
	// lhz r9,126(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 126);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r10,r11,6688
	ctx.r10.s64 = ctx.r11.s64 + 6688;
	// addi r11,r10,7968
	ctx.r11.s64 = ctx.r10.s64 + 7968;
loc_821B75A4:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// addi r8,r10,8480
	ctx.r8.s64 = ctx.r10.s64 + 8480;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x821b75a4
	if (ctx.cr6.lt) goto loc_821B75A4;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821B7590) {
	__imp__sub_821B7590(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B75CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821B75CC) {
	__imp__sub_821B75CC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B75D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf4c
	ctx.lr = 0x821B75D8;
	__savegprlr_17(ctx, base);
	// addi r12,r1,-128
	ctx.r12.s64 = ctx.r1.s64 + -128;
	// bl 0x823de024
	ctx.lr = 0x821B75E0;
	__savefpr_27(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r24,r11,9240
	ctx.r24.s64 = ctx.r11.s64 + 9240;
	// lis r25,-32190
	ctx.r25.s64 = -2109603840;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r21,0
	ctx.r21.s64 = 0;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// lfs f27,2424(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2424);
	ctx.f27.f64 = double(temp.f32);
	// mr r17,r3
	ctx.r17.u64 = ctx.r3.u64;
	// fmr f30,f27
	ctx.f30.f64 = ctx.f27.f64;
	// lwz r31,-32312(r25)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r25.u32 + -32312);
	// mr r18,r21
	ctx.r18.u64 = ctx.r21.u64;
	// lfs f31,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f31.f64 = double(temp.f32);
	// mr r19,r21
	ctx.r19.u64 = ctx.r21.u64;
	// fmr f28,f27
	ctx.f28.f64 = ctx.f27.f64;
	// mr r20,r21
	ctx.r20.u64 = ctx.r21.u64;
	// mr r30,r21
	ctx.r30.u64 = ctx.r21.u64;
	// fmr f29,f27
	ctx.f29.f64 = ctx.f27.f64;
	// addi r29,r10,26552
	ctx.r29.s64 = ctx.r10.s64 + 26552;
	// addi r26,r24,16
	ctx.r26.s64 = ctx.r24.s64 + 16;
	// mr r27,r21
	ctx.r27.u64 = ctx.r21.u64;
	// li r22,1
	ctx.r22.s64 = 1;
	// lis r23,-32166
	ctx.r23.s64 = -2108030976;
loc_821B7640:
	// lbz r10,29088(r23)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r23.u32 + 29088);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821b7664
	if (!ctx.cr6.eq) goto loc_821B7664;
	// subfc r11,r31,r30
	ctx.xer.ca = ctx.r30.u32 >= ctx.r31.u32;
	ctx.r11.s64 = ctx.r30.s64 - ctx.r31.s64;
	// eqv r10,r31,r30
	ctx.r10.u64 = ~(ctx.r31.u64 ^ ctx.r30.u64);
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// addze r8,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r8.s64 = temp.s64;
	// clrlwi r11,r8,31
	ctx.r11.u64 = ctx.r8.u32 & 0x1;
	// b 0x821b7670
	goto loc_821B7670;
loc_821B7664:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_821B7670:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b76e4
	if (ctx.cr6.eq) goto loc_821B76E4;
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// lwz r3,272(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 272);
	// add r4,r27,r11
	ctx.r4.u64 = ctx.r27.u64 + ctx.r11.u64;
	// bl 0x8223fae0
	ctx.lr = 0x821B768C;
	sub_8223FAE0(ctx, base);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// li r6,0
	ctx.r6.s64 = 0;
	// add r31,r27,r11
	ctx.r31.u64 = ctx.r27.u64 + ctx.r11.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821e6c48
	ctx.lr = 0x821B76A8;
	sub_821E6C48(ctx, base);
	// addi r11,r1,104
	ctx.r11.s64 = ctx.r1.s64 + 104;
	// addi r28,r1,80
	ctx.r28.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfsx f31,r27,r11
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r27.u32 + ctx.r11.u32, temp.u32);
	// stbx r22,r30,r28
	PPC_STORE_U8(ctx.r30.u32 + ctx.r28.u32, ctx.r22.u8);
	// bl 0x822d4ac8
	ctx.lr = 0x821B76C0;
	sub_822D4AC8(ctx, base);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// bne cr6,0x821b76e0
	if (!ctx.cr6.eq) goto loc_821B76E0;
	// li r6,0
	ctx.r6.s64 = 0;
	// stbx r21,r30,r28
	PPC_STORE_U8(ctx.r30.u32 + ctx.r28.u32, ctx.r21.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821e6c48
	ctx.lr = 0x821B76E0;
	sub_821E6C48(ctx, base);
loc_821B76E0:
	// lwz r31,-32312(r25)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r25.u32 + -32312);
loc_821B76E4:
	// addi r26,r26,9780
	ctx.r26.s64 = ctx.r26.s64 + 9780;
	// addi r11,r24,19576
	ctx.r11.s64 = ctx.r24.s64 + 19576;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,624
	ctx.r29.s64 = ctx.r29.s64 + 624;
	// addi r27,r27,12
	ctx.r27.s64 = ctx.r27.s64 + 12;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821b7640
	if (ctx.cr6.lt) goto loc_821B7640;
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// addi r11,r11,9624
	ctx.r11.s64 = ctx.r11.s64 + 9624;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// lwz r29,72(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x821b78e8
	if (!ctx.cr6.gt) goto loc_821B78E8;
	// lis r10,-32018
	ctx.r10.s64 = -2098331648;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r28,r10,6688
	ctx.r28.s64 = ctx.r10.s64 + 6688;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r30,r28,7968
	ctx.r30.s64 = ctx.r28.s64 + 7968;
	// lfs f7,2416(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2416);
	ctx.f7.f64 = double(temp.f32);
	// lfs f8,6912(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6912);
	ctx.f8.f64 = double(temp.f32);
loc_821B773C:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x821b7754
	if (!ctx.cr6.eq) goto loc_821B7754;
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(ctx.r17.s32, 0, ctx.xer);
	// bne cr6,0x821b7940
	if (!ctx.cr6.eq) goto loc_821B7940;
	// b 0x821b78d0
	goto loc_821B78D0;
loc_821B7754:
	// li r11,2
	ctx.r11.s64 = 2;
	// lbz r6,29088(r23)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r23.u32 + 29088);
	// mulli r10,r10,624
	ctx.r10.s64 = ctx.r10.s64 * 624;
	// fmr f11,f8
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = ctx.f8.f64;
	// fmr f10,f8
	ctx.f10.f64 = ctx.f8.f64;
	// fmr f9,f8
	ctx.f9.f64 = ctx.f8.f64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// add r8,r10,r5
	ctx.r8.u64 = ctx.r10.u64 + ctx.r5.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
	// addi r7,r24,16
	ctx.r7.s64 = ctx.r24.s64 + 16;
	// mr r10,r21
	ctx.r10.u64 = ctx.r21.u64;
loc_821B7784:
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x821b77a4
	if (!ctx.cr6.eq) goto loc_821B77A4;
	// subfc r9,r31,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r31.u32;
	ctx.r9.s64 = ctx.r11.s64 - ctx.r31.s64;
	// eqv r27,r31,r11
	ctx.r27.u64 = ~(ctx.r31.u64 ^ ctx.r11.u64);
	// rlwinm r9,r27,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0x1;
	// addze r9,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r9.s64 = temp.s64;
	// clrlwi r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	// b 0x821b77b0
	goto loc_821B77B0;
loc_821B77A4:
	// lwz r9,0(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// addic r27,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r27.s64 = ctx.r9.s64 + -1;
	// subfe r9,r27,r9
	temp.u8 = (~ctx.r27.u32 + ctx.r9.u32 < ~ctx.r27.u32) | (~ctx.r27.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r27.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_821B77B0:
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821b7890
	if (ctx.cr6.eq) goto loc_821B7890;
	// addi r9,r1,136
	ctx.r9.s64 = ctx.r1.s64 + 136;
	// lfs f12,236(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 236);
	ctx.f12.f64 = double(temp.f32);
	// addi r27,r1,80
	ctx.r27.s64 = ctx.r1.s64 + 80;
	// lfs f13,232(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 232);
	ctx.f13.f64 = double(temp.f32);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lfs f6,240(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 240);
	ctx.f6.f64 = double(temp.f32);
	// addi r26,r1,128
	ctx.r26.s64 = ctx.r1.s64 + 128;
	// lbzx r27,r11,r27
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r27.u32);
	// lfs f5,-4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -4);
	ctx.f5.f64 = double(temp.f32);
	// lfsx f4,r10,r26
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r26.u32);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f0,f12,f5
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f5.f64));
	// lfs f3,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// fsubs f12,f13,f4
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f4.f64));
	// fsubs f13,f6,f3
	ctx.f13.f64 = double(float(ctx.f6.f64 - ctx.f3.f64));
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x821b7800
	if (ctx.cr6.eq) goto loc_821B7800;
	// fmr f13,f31
	ctx.f13.f64 = ctx.f31.f64;
loc_821B7800:
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// fmuls f6,f12,f12
	ctx.fpscr.disableFlushMode();
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// addi r27,r1,100
	ctx.r27.s64 = ctx.r1.s64 + 100;
	// addi r26,r1,104
	ctx.r26.s64 = ctx.r1.s64 + 104;
	// lfsx f5,r10,r9
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f5,f12
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f12.f64));
	// lfsx f3,r10,r27
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r27.u32);
	ctx.f3.f64 = double(temp.f32);
	// lfsx f2,r10,r26
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r26.u32);
	ctx.f2.f64 = double(temp.f32);
	// fmadds f1,f0,f0,f6
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f6.f64));
	// fmadds f12,f3,f0,f4
	ctx.f12.f64 = double(float(ctx.f3.f64 * ctx.f0.f64 + ctx.f4.f64));
	// fmadds f0,f13,f13,f1
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f1.f64));
	// fmadds f13,f2,f13,f12
	ctx.f13.f64 = double(float(ctx.f2.f64 * ctx.f13.f64 + ctx.f12.f64));
	// fcmpu cr6,f13,f31
	ctx.cr6.compare(ctx.f13.f64, ctx.f31.f64);
	// bge cr6,0x821b784c
	if (!ctx.cr6.lt) goto loc_821B784C;
	// fcmpu cr6,f30,f0
	ctx.cr6.compare(ctx.f30.f64, ctx.f0.f64);
	// bge cr6,0x821b784c
	if (!ctx.cr6.lt) goto loc_821B784C;
	// fsubs f12,f0,f11
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// fsel f11,f12,f11,f0
	ctx.f11.f64 = ctx.f12.f64 >= 0.0 ? ctx.f11.f64 : ctx.f0.f64;
	// b 0x821b7850
	goto loc_821B7850;
loc_821B784C:
	// fmr f11,f31
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = ctx.f31.f64;
loc_821B7850:
	// fmuls f13,f13,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fmuls f12,f0,f7
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f7.f64));
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bgt cr6,0x821b7874
	if (ctx.cr6.gt) goto loc_821B7874;
	// fcmpu cr6,f28,f0
	ctx.cr6.compare(ctx.f28.f64, ctx.f0.f64);
	// bge cr6,0x821b7874
	if (!ctx.cr6.lt) goto loc_821B7874;
	// fsubs f13,f0,f10
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f10.f64));
	// fsel f10,f13,f10,f0
	ctx.f10.f64 = ctx.f13.f64 >= 0.0 ? ctx.f10.f64 : ctx.f0.f64;
	// b 0x821b7878
	goto loc_821B7878;
loc_821B7874:
	// fmr f10,f31
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = ctx.f31.f64;
loc_821B7878:
	// fcmpu cr6,f29,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f29.f64, ctx.f0.f64);
	// bge cr6,0x821b788c
	if (!ctx.cr6.lt) goto loc_821B788C;
	// fsubs f13,f0,f9
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f9.f64));
	// fsel f9,f13,f9,f0
	ctx.f9.f64 = ctx.f13.f64 >= 0.0 ? ctx.f9.f64 : ctx.f0.f64;
	// b 0x821b7890
	goto loc_821B7890;
loc_821B788C:
	// fmr f9,f31
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = ctx.f31.f64;
loc_821B7890:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r7,r7,9780
	ctx.r7.s64 = ctx.r7.s64 + 9780;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// bdnz 0x821b7784
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821B7784;
	// fcmpu cr6,f11,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f11.f64, ctx.f31.f64);
	// beq cr6,0x821b78b0
	if (ctx.cr6.eq) goto loc_821B78B0;
	// fmr f30,f11
	ctx.f30.f64 = ctx.f11.f64;
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
loc_821B78B0:
	// fcmpu cr6,f10,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f10.f64, ctx.f31.f64);
	// beq cr6,0x821b78c0
	if (ctx.cr6.eq) goto loc_821B78C0;
	// fmr f28,f10
	ctx.f28.f64 = ctx.f10.f64;
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
loc_821B78C0:
	// fcmpu cr6,f9,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f9.f64, ctx.f31.f64);
	// beq cr6,0x821b78d0
	if (ctx.cr6.eq) goto loc_821B78D0;
	// fmr f29,f9
	ctx.f29.f64 = ctx.f9.f64;
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
loc_821B78D0:
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r30,r30,32
	ctx.r30.s64 = ctx.r30.s64 + 32;
	// cmpw cr6,r3,r29
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r29.s32, ctx.xer);
	// blt cr6,0x821b773c
	if (ctx.cr6.lt) goto loc_821B773C;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x821b78fc
	if (!ctx.cr6.eq) goto loc_821B78FC;
loc_821B78E8:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// addi r12,r1,-128
	ctx.r12.s64 = ctx.r1.s64 + -128;
	// bl 0x823de070
	ctx.lr = 0x821B78F8;
	__restfpr_27(ctx, base);
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
loc_821B78FC:
	// fcmpu cr6,f30,f27
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f30.f64, ctx.f27.f64);
	// beq cr6,0x821b790c
	if (ctx.cr6.eq) goto loc_821B790C;
	// mr r31,r18
	ctx.r31.u64 = ctx.r18.u64;
	// b 0x821b791c
	goto loc_821B791C;
loc_821B790C:
	// fcmpu cr6,f28,f27
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f28.f64, ctx.f27.f64);
	// mr r31,r19
	ctx.r31.u64 = ctx.r19.u64;
	// bne cr6,0x821b791c
	if (!ctx.cr6.eq) goto loc_821B791C;
	// mr r31,r20
	ctx.r31.u64 = ctx.r20.u64;
loc_821B791C:
	// rlwinm r30,r31,5,0,26
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r29,r28,7968
	ctx.r29.s64 = ctx.r28.s64 + 7968;
	// lwzx r11,r30,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r29.u32);
	// mulli r11,r11,624
	ctx.r11.s64 = ctx.r11.s64 * 624;
	// add r3,r11,r5
	ctx.r3.u64 = ctx.r11.u64 + ctx.r5.u64;
	// bl 0x8222f680
	ctx.lr = 0x821B7934;
	sub_8222F680(ctx, base);
	// li r10,-1
	ctx.r10.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stwx r10,r30,r29
	PPC_STORE_U32(ctx.r30.u32 + ctx.r29.u32, ctx.r10.u32);
loc_821B7940:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// addi r12,r1,-128
	ctx.r12.s64 = ctx.r1.s64 + -128;
	// bl 0x823de070
	ctx.lr = 0x821B794C;
	__restfpr_27(ctx, base);
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821B75D0) {
	__imp__sub_821B75D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B7950) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf58
	ctx.lr = 0x821B7958;
	__savegprlr_20(ctx, base);
	// stfd f30,-120(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -120, ctx.f30.u64);
	// stfd f31,-112(r1)
	PPC_STORE_U64(ctx.r1.u32 + -112, ctx.f31.u64);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// addi r21,r11,9240
	ctx.r21.s64 = ctx.r11.s64 + 9240;
	// addi r27,r10,26552
	ctx.r27.s64 = ctx.r10.s64 + 26552;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r28,r21,16
	ctx.r28.s64 = ctx.r21.s64 + 16;
	// addi r31,r27,272
	ctx.r31.s64 = ctx.r27.s64 + 272;
	// li r30,0
	ctx.r30.s64 = 0;
	// lis r22,-32190
	ctx.r22.s64 = -2109603840;
	// lis r20,-32166
	ctx.r20.s64 = -2108030976;
loc_821B798C:
	// lbz r10,29088(r20)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r20.u32 + 29088);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821b79b8
	if (!ctx.cr6.eq) goto loc_821B79B8;
	// lwz r11,-32312(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + -32312);
	// subfc r9,r11,r29
	ctx.xer.ca = ctx.r29.u32 >= ctx.r11.u32;
	ctx.r9.s64 = ctx.r29.s64 - ctx.r11.s64;
	// eqv r8,r11,r29
	ctx.r8.u64 = ~(ctx.r11.u64 ^ ctx.r29.u64);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// rlwinm r7,r8,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// addze r6,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r6.s64 = temp.s64;
	// clrlwi r11,r6,31
	ctx.r11.u64 = ctx.r6.u32 & 0x1;
	// b 0x821b79c4
	goto loc_821B79C4;
loc_821B79B8:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_821B79C4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b7a00
	if (ctx.cr6.eq) goto loc_821B7A00;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821b7bc0
	if (ctx.cr6.eq) goto loc_821B7BC0;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// add r4,r30,r11
	ctx.r4.u64 = ctx.r30.u64 + ctx.r11.u64;
	// bl 0x8223fae0
	ctx.lr = 0x821B79E8;
	sub_8223FAE0(ctx, base);
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// add r4,r30,r11
	ctx.r4.u64 = ctx.r30.u64 + ctx.r11.u64;
	// addi r3,r31,-272
	ctx.r3.s64 = ctx.r31.s64 + -272;
	// bl 0x821e6c48
	ctx.lr = 0x821B7A00;
	sub_821E6C48(ctx, base);
loc_821B7A00:
	// addi r31,r31,624
	ctx.r31.s64 = ctx.r31.s64 + 624;
	// addi r11,r27,1520
	ctx.r11.s64 = ctx.r27.s64 + 1520;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r28,r28,9780
	ctx.r28.s64 = ctx.r28.s64 + 9780;
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821b798c
	if (ctx.cr6.lt) goto loc_821B798C;
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// li r23,0
	ctx.r23.s64 = 0;
	// addi r26,r11,9624
	ctx.r26.s64 = ctx.r11.s64 + 9624;
	// lwz r11,72(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 72);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x821b7bc0
	if (!ctx.cr6.gt) goto loc_821B7BC0;
	// lis r11,-32018
	ctx.r11.s64 = -2098331648;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r11,6688
	ctx.r11.s64 = ctx.r11.s64 + 6688;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r24,r11,7968
	ctx.r24.s64 = ctx.r11.s64 + 7968;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f30,5484(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f30.f64 = double(temp.f32);
	// addi r25,r11,-9672
	ctx.r25.s64 = ctx.r11.s64 + -9672;
	// lfs f31,25520(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 25520);
	ctx.f31.f64 = double(temp.f32);
loc_821B7A58:
	// lwz r10,0(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x821b7bac
	if (ctx.cr6.lt) goto loc_821B7BAC;
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// mulli r10,r10,624
	ctx.r10.s64 = ctx.r10.s64 * 624;
	// add r28,r10,r11
	ctx.r28.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,352(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 352);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821b7bac
	if (ctx.cr6.eq) goto loc_821B7BAC;
	// lwz r10,52(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 52);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x821b7bac
	if (ctx.cr6.gt) goto loc_821B7BAC;
	// li r29,1
	ctx.r29.s64 = 1;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r27,r21,16
	ctx.r27.s64 = ctx.r21.s64 + 16;
	// li r31,0
	ctx.r31.s64 = 0;
loc_821B7A98:
	// lbz r10,29088(r20)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r20.u32 + 29088);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821b7ac4
	if (!ctx.cr6.eq) goto loc_821B7AC4;
	// lwz r11,-32312(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + -32312);
	// subfc r9,r11,r30
	ctx.xer.ca = ctx.r30.u32 >= ctx.r11.u32;
	ctx.r9.s64 = ctx.r30.s64 - ctx.r11.s64;
	// eqv r8,r11,r30
	ctx.r8.u64 = ~(ctx.r11.u64 ^ ctx.r30.u64);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// rlwinm r7,r8,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// addze r6,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r6.s64 = temp.s64;
	// clrlwi r11,r6,31
	ctx.r11.u64 = ctx.r6.u32 & 0x1;
	// b 0x821b7ad0
	goto loc_821B7AD0;
loc_821B7AC4:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_821B7AD0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b7b78
	if (ctx.cr6.eq) goto loc_821B7B78;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lfs f0,232(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 232);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,240(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 240);
	ctx.f13.f64 = double(temp.f32);
	// addi r5,r28,232
	ctx.r5.s64 = ctx.r28.s64 + 232;
	// add r4,r31,r11
	ctx.r4.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lfs f12,236(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 236);
	ctx.f12.f64 = double(temp.f32);
	// addi r11,r1,104
	ctx.r11.s64 = ctx.r1.s64 + 104;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lfs f11,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// lfs f10,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f13,f10
	ctx.f9.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// lfs f8,-4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f13,f12,f8
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f8.f64));
	// fmuls f7,f0,f0
	ctx.f7.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f6,f9,f9,f7
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f7.f64));
	// fmadds f5,f13,f13,f6
	ctx.f5.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f6.f64));
	// fcmpu cr6,f5,f31
	ctx.cr6.compare(ctx.f5.f64, ctx.f31.f64);
	// bge cr6,0x821b7b30
	if (!ctx.cr6.lt) goto loc_821B7B30;
	// li r29,0
	ctx.r29.s64 = 0;
	// b 0x821b7b78
	goto loc_821B7B78;
loc_821B7B30:
	// addi r11,r1,132
	ctx.r11.s64 = ctx.r1.s64 + 132;
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// lfsx f12,r31,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// lfsx f10,r31,r10
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f9,f10,f0,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f0.f64 + ctx.f11.f64));
	// fcmpu cr6,f9,f30
	ctx.cr6.compare(ctx.f9.f64, ctx.f30.f64);
	// ble cr6,0x821b7b78
	if (!ctx.cr6.gt) goto loc_821B7B78;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// li r9,2049
	ctx.r9.s64 = 2049;
	// li r8,2047
	ctx.r8.s64 = 2047;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82342160
	ctx.lr = 0x821B7B68;
	sub_82342160(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// subfic r10,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r29,r8,r29
	ctx.r29.u64 = ctx.r8.u64 & ctx.r29.u64;
loc_821B7B78:
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r27,r27,9780
	ctx.r27.s64 = ctx.r27.s64 + 9780;
	// cmpwi cr6,r31,24
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 24, ctx.xer);
	// blt cr6,0x821b7a98
	if (ctx.cr6.lt) goto loc_821B7A98;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x821b7ba0
	if (ctx.cr6.eq) goto loc_821B7BA0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8222f680
	ctx.lr = 0x821B7B9C;
	sub_8222F680(ctx, base);
	// b 0x821b7bac
	goto loc_821B7BAC;
loc_821B7BA0:
	// lwz r11,52(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 52);
	// addi r11,r11,500
	ctx.r11.s64 = ctx.r11.s64 + 500;
	// stw r11,352(r28)
	PPC_STORE_U32(ctx.r28.u32 + 352, ctx.r11.u32);
loc_821B7BAC:
	// lwz r11,72(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 72);
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// addi r24,r24,32
	ctx.r24.s64 = ctx.r24.s64 + 32;
	// cmpw cr6,r23,r11
	ctx.cr6.compare<int32_t>(ctx.r23.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821b7a58
	if (ctx.cr6.lt) goto loc_821B7A58;
loc_821B7BC0:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lfd f30,-120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// lfd f31,-112(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// b 0x823ddfa8
	__restgprlr_20(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821B7950) {
	__imp__sub_821B7950(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B7BD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x821B7BD8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r31,r11,9624
	ctx.r31.s64 = ctx.r11.s64 + 9624;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x821b7c3c
	if (!ctx.cr6.lt) goto loc_821B7C3C;
	// lis r9,-32018
	ctx.r9.s64 = -2098331648;
	// rlwinm r10,r3,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r9,r9,6688
	ctx.r9.s64 = ctx.r9.s64 + 6688;
	// addi r9,r9,7968
	ctx.r9.s64 = ctx.r9.s64 + 7968;
	// add r30,r10,r9
	ctx.r30.u64 = ctx.r10.u64 + ctx.r9.u64;
loc_821B7C0C:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x821b7c2c
	if (ctx.cr6.lt) goto loc_821B7C2C;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mulli r10,r10,624
	ctx.r10.s64 = ctx.r10.s64 * 624;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x8222f680
	ctx.lr = 0x821B7C28;
	sub_8222F680(ctx, base);
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
loc_821B7C2C:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,32
	ctx.r30.s64 = ctx.r30.s64 + 32;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821b7c0c
	if (ctx.cr6.lt) goto loc_821B7C0C;
loc_821B7C3C:
	// stw r28,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821B7BD0) {
	__imp__sub_821B7BD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B7C48) {
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
	// bl 0x821b7950
	ctx.lr = 0x821B7C58;
	sub_821B7950(ctx, base);
	// lis r11,-32032
	ctx.r11.s64 = -2099249152;
	// lis r10,-32020
	ctx.r10.s64 = -2098462720;
	// addi r9,r10,9624
	ctx.r9.s64 = ctx.r10.s64 + 9624;
	// lwz r11,-5904(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5904);
	// lwz r10,72(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 72);
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpw cr6,r10,r3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r3.s32, ctx.xer);
	// beq cr6,0x821b7c7c
	if (ctx.cr6.eq) goto loc_821B7C7C;
	// bl 0x821b7bd0
	ctx.lr = 0x821B7C7C;
	sub_821B7BD0(ctx, base);
loc_821B7C7C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821B7C48) {
	__imp__sub_821B7C48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B7C8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821B7C8C) {
	__imp__sub_821B7C8C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B7C90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32018
	ctx.r11.s64 = -2098331648;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lis r8,-32020
	ctx.r8.s64 = -2098462720;
	// addi r11,r11,6688
	ctx.r11.s64 = ctx.r11.s64 + 6688;
	// rlwinm r7,r10,5,0,26
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r6,r11,7968
	ctx.r6.s64 = ctx.r11.s64 + 7968;
	// rlwinm r4,r9,5,0,26
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r5,r11,7968
	ctx.r5.s64 = ctx.r11.s64 + 7968;
	// lis r9,-32053
	ctx.r9.s64 = -2100625408;
	// addi r3,r8,9624
	ctx.r3.s64 = ctx.r8.s64 + 9624;
	// lwzx r8,r7,r6
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	// addi r6,r9,820
	ctx.r6.s64 = ctx.r9.s64 + 820;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lwzx r5,r4,r5
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r5.u32);
	// mulli r11,r8,624
	ctx.r11.s64 = ctx.r8.s64 * 624;
	// lfs f13,820(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 820);
	ctx.f13.f64 = double(temp.f32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lfs f0,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfd f11,26000(r7)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r7.u32 + 26000);
	// mulli r9,r5,624
	ctx.r9.s64 = ctx.r5.s64 * 624;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r9,r11,232
	ctx.r9.s64 = ctx.r11.s64 + 232;
	// addi r9,r10,232
	ctx.r9.s64 = ctx.r10.s64 + 232;
	// lfs f10,236(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 236);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,236(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 236);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f10,f0
	ctx.f8.f64 = double(float(ctx.f10.f64 - ctx.f0.f64));
	// fsubs f7,f9,f0
	ctx.f7.f64 = double(float(ctx.f9.f64 - ctx.f0.f64));
	// lfs f6,232(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,232(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 232);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f4,f6,f13
	ctx.f4.f64 = double(float(ctx.f6.f64 - ctx.f13.f64));
	// lfs f2,240(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 240);
	ctx.f2.f64 = double(temp.f32);
	// fsubs f3,f5,f13
	ctx.f3.f64 = double(float(ctx.f5.f64 - ctx.f13.f64));
	// lfs f1,240(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 240);
	ctx.f1.f64 = double(temp.f32);
	// fsubs f0,f2,f12
	ctx.f0.f64 = double(float(ctx.f2.f64 - ctx.f12.f64));
	// fsubs f13,f1,f12
	ctx.f13.f64 = double(float(ctx.f1.f64 - ctx.f12.f64));
	// fmuls f12,f8,f8
	ctx.f12.f64 = double(float(ctx.f8.f64 * ctx.f8.f64));
	// fmuls f10,f7,f7
	ctx.f10.f64 = double(float(ctx.f7.f64 * ctx.f7.f64));
	// fmadds f9,f4,f4,f12
	ctx.f9.f64 = double(float(ctx.f4.f64 * ctx.f4.f64 + ctx.f12.f64));
	// fmadds f8,f3,f3,f10
	ctx.f8.f64 = double(float(ctx.f3.f64 * ctx.f3.f64 + ctx.f10.f64));
	// fmadds f7,f0,f0,f9
	ctx.f7.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f9.f64));
	// fmadds f6,f13,f13,f8
	ctx.f6.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f8.f64));
	// fsubs f0,f7,f6
	ctx.f0.f64 = double(float(ctx.f7.f64 - ctx.f6.f64));
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// bge cr6,0x821b7d54
	if (!ctx.cr6.lt) goto loc_821B7D54;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_821B7D54:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfd f13,17072(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r11.u32 + 17072);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821B7C90) {
	__imp__sub_821B7C90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B7D70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x821B7D78;
	__savegprlr_25(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r10,8
	ctx.r10.s64 = 8;
	// addi r11,r1,72
	ctx.r11.s64 = ctx.r1.s64 + 72;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_821B7D8C:
	// stdu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x821b7d8c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821B7D8C;
	// li r10,16
	ctx.r10.s64 = 16;
	// lis r11,-32018
	ctx.r11.s64 = -2098331648;
	// addi r9,r1,76
	ctx.r9.s64 = ctx.r1.s64 + 76;
	// addi r25,r11,6688
	ctx.r25.s64 = ctx.r11.s64 + 6688;
	// li r31,0
	ctx.r31.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r25,7968
	ctx.r10.s64 = ctx.r25.s64 + 7968;
loc_821B7DB4:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// blt cr6,0x821b7dc8
	if (ctx.cr6.lt) goto loc_821B7DC8;
	// stwu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r9.u32 = ea;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_821B7DC8:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// bdnz 0x821b7db4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821B7DB4;
	// cmpwi cr6,r31,6
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 6, ctx.xer);
	// ble cr6,0x821b7e54
	if (!ctx.cr6.gt) goto loc_821B7E54;
	// lis r11,-32052
	ctx.r11.s64 = -2100559872;
	// lis r10,-32053
	ctx.r10.s64 = -2100625408;
	// addi r9,r11,26552
	ctx.r9.s64 = ctx.r11.s64 + 26552;
	// addi r4,r10,820
	ctx.r4.s64 = ctx.r10.s64 + 820;
	// lwz r3,272(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 272);
	// bl 0x8223fae0
	ctx.lr = 0x821B7DF4;
	sub_8223FAE0(ctx, base);
	// lis r8,-32229
	ctx.r8.s64 = -2112159744;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r6,r8,31888
	ctx.r6.s64 = ctx.r8.s64 + 31888;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823def18
	ctx.lr = 0x821B7E0C;
	sub_823DEF18(ctx, base);
	// cmpwi cr6,r31,6
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 6, ctx.xer);
	// ble cr6,0x821b7e54
	if (!ctx.cr6.gt) goto loc_821B7E54;
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// addi r28,r1,100
	ctx.r28.s64 = ctx.r1.s64 + 100;
	// addi r31,r31,-6
	ctx.r31.s64 = ctx.r31.s64 + -6;
	// li r26,-1
	ctx.r26.s64 = -1;
	// addi r27,r11,9624
	ctx.r27.s64 = ctx.r11.s64 + 9624;
loc_821B7E28:
	// lwzu r11,4(r28)
	ea = 4 + ctx.r28.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r28.u32 = ea;
	// addi r30,r25,7968
	ctx.r30.s64 = ctx.r25.s64 + 7968;
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// rlwinm r29,r11,5,0,26
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// lwzx r11,r29,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r30.u32);
	// mulli r11,r11,624
	ctx.r11.s64 = ctx.r11.s64 * 624;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x8222f680
	ctx.lr = 0x821B7E48;
	sub_8222F680(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stwx r26,r29,r30
	PPC_STORE_U32(ctx.r29.u32 + ctx.r30.u32, ctx.r26.u32);
	// bne 0x821b7e28
	if (!ctx.cr0.eq) goto loc_821B7E28;
loc_821B7E54:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821B7D70) {
	__imp__sub_821B7D70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B7E5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821B7E5C) {
	__imp__sub_821B7E5C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B7E60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32018
	ctx.r11.s64 = -2098331648;
	// lhz r8,126(r3)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r3.u32 + 126);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,6688
	ctx.r9.s64 = ctx.r11.s64 + 6688;
	// addi r11,r9,7968
	ctx.r11.s64 = ctx.r9.s64 + 7968;
loc_821B7E74:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r7,r8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r8.s32, ctx.xer);
	// beq cr6,0x821b7e98
	if (ctx.cr6.eq) goto loc_821B7E98;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// addi r7,r9,8480
	ctx.r7.s64 = ctx.r9.s64 + 8480;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x821b7e74
	if (ctx.cr6.lt) goto loc_821B7E74;
	// li r10,0
	ctx.r10.s64 = 0;
loc_821B7E98:
	// rlwinm r11,r10,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r10,r9,7968
	ctx.r10.s64 = ctx.r9.s64 + 7968;
	// li r9,-1
	ctx.r9.s64 = -1;
	// stwx r9,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821B7E60) {
	__imp__sub_821B7E60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B7EAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821B7EAC) {
	__imp__sub_821B7EAC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B7EB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// lwz r10,468(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 468);
	// addi r9,r11,9624
	ctx.r9.s64 = ctx.r11.s64 + 9624;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r11,52(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 52);
	// addi r8,r11,50
	ctx.r8.s64 = ctx.r11.s64 + 50;
	// stw r8,328(r3)
	PPC_STORE_U32(ctx.r3.u32 + 328, ctx.r8.u32);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x822334c0
	sub_822334C0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821B7EB0) {
	__imp__sub_821B7EB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B7ED4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821B7ED4) {
	__imp__sub_821B7ED4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B7ED8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x821B7EE0;
	__savegprlr_26(ctx, base);
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x823de028
	ctx.lr = 0x821B7EE8;
	__savefpr_28(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,8(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// lfs f13,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f12,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// lfs f10,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f9,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f30,5808(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5808);
	ctx.f30.f64 = double(temp.f32);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// fadds f11,f0,f30
	ctx.f11.f64 = double(float(ctx.f0.f64 + ctx.f30.f64));
	// lfs f8,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f31,26008(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 26008);
	ctx.f31.f64 = double(temp.f32);
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// fmadds f7,f10,f31,f13
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f31.f64 + ctx.f13.f64));
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f29,5484(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5484);
	ctx.f29.f64 = double(temp.f32);
	// fmadds f6,f9,f31,f12
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f31.f64 + ctx.f12.f64));
	// lfs f0,7540(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 7540);
	ctx.f0.f64 = double(temp.f32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// stfs f11,88(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// stfs f29,160(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// stfs f29,164(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// stfs f0,168(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// fmadds f5,f8,f31,f11
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f31.f64 + ctx.f11.f64));
	// stfs f0,172(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// stfs f0,176(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stfs f0,180(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stfs f7,96(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// stfs f6,100(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f5,104(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x821fe618
	ctx.lr = 0x821B7F98;
	sub_821FE618(ctx, base);
	// lfs f0,192(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// bne cr6,0x821b7fbc
	if (!ctx.cr6.eq) goto loc_821B7FBC;
loc_821B7FA4:
	// stfs f29,0(r26)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r26.u32 + 0, temp.u32);
	// lfs f1,8(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x823de074
	ctx.lr = 0x821B7FB8;
	__restfpr_28(ctx, base);
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_821B7FBC:
	// lfs f13,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// lfs f12,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// lfs f11,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f11.f64 = double(temp.f32);
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// lfs f10,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f10.f64 = double(temp.f32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lfs f9,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f10,f13
	ctx.f8.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// lfs f7,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f9,f12
	ctx.f6.f64 = double(float(ctx.f9.f64 - ctx.f12.f64));
	// fsubs f5,f7,f11
	ctx.f5.f64 = double(float(ctx.f7.f64 - ctx.f11.f64));
	// lfs f4,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f3,f4,f30
	ctx.f3.f64 = double(float(ctx.f4.f64 - ctx.f30.f64));
	// stfs f3,104(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// fmadds f13,f8,f0,f13
	ctx.f13.f64 = double(float(ctx.f8.f64 * ctx.f0.f64 + ctx.f13.f64));
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmadds f12,f6,f0,f12
	ctx.f12.f64 = double(float(ctx.f6.f64 * ctx.f0.f64 + ctx.f12.f64));
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmadds f2,f5,f0,f11
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f0.f64 + ctx.f11.f64));
	// stfs f2,88(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f12,100(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// bl 0x821fe618
	ctx.lr = 0x821B8028;
	sub_821FE618(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lbz r9,233(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 233);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lfs f28,12168(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f28.f64 = double(temp.f32);
	// bne cr6,0x821b8088
	if (!ctx.cr6.eq) goto loc_821B8088;
	// lfs f0,192(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f28
	ctx.cr6.compare(ctx.f0.f64, ctx.f28.f64);
	// bge cr6,0x821b8088
	if (!ctx.cr6.lt) goto loc_821B8088;
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f10,f13
	ctx.f8.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// lfs f7,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
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
	// b 0x821b80a0
	goto loc_821B80A0;
loc_821B8088:
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
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f12,120(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
loc_821B80A0:
	// lfs f0,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// fadds f13,f0,f30
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f30.f64));
	// lfs f0,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// lfs f11,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// lfs f10,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fnmsubs f9,f11,f31,f0
	ctx.f9.f64 = double(float(-(ctx.f11.f64 * ctx.f31.f64 - ctx.f0.f64)));
	// lfs f8,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fnmsubs f7,f10,f31,f12
	ctx.f7.f64 = double(float(-(ctx.f10.f64 * ctx.f31.f64 - ctx.f12.f64)));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// stfs f9,96(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f7,100(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fnmsubs f6,f8,f31,f13
	ctx.f6.f64 = double(float(-(ctx.f8.f64 * ctx.f31.f64 - ctx.f13.f64)));
	// stfs f6,104(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x821fe618
	ctx.lr = 0x821B80FC;
	sub_821FE618(ctx, base);
	// lfs f0,192(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// beq cr6,0x821b7fa4
	if (ctx.cr6.eq) goto loc_821B7FA4;
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// lfs f12,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// lfs f11,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f11.f64 = double(temp.f32);
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// lfs f10,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f10.f64 = double(temp.f32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lfs f9,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f10,f13
	ctx.f8.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// lfs f7,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f9,f12
	ctx.f6.f64 = double(float(ctx.f9.f64 - ctx.f12.f64));
	// fsubs f5,f7,f11
	ctx.f5.f64 = double(float(ctx.f7.f64 - ctx.f11.f64));
	// lfs f4,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f3,f4,f30
	ctx.f3.f64 = double(float(ctx.f4.f64 - ctx.f30.f64));
	// stfs f3,104(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// fmadds f13,f8,f0,f13
	ctx.f13.f64 = double(float(ctx.f8.f64 * ctx.f0.f64 + ctx.f13.f64));
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmadds f12,f6,f0,f12
	ctx.f12.f64 = double(float(ctx.f6.f64 * ctx.f0.f64 + ctx.f12.f64));
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmadds f2,f5,f0,f11
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f0.f64 + ctx.f11.f64));
	// stfs f2,88(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f12,100(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// bl 0x821fe618
	ctx.lr = 0x821B8174;
	sub_821FE618(ctx, base);
	// lbz r10,233(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 233);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821b81c0
	if (!ctx.cr6.eq) goto loc_821B81C0;
	// lfs f0,192(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f28
	ctx.cr6.compare(ctx.f0.f64, ctx.f28.f64);
	// bge cr6,0x821b81c0
	if (!ctx.cr6.lt) goto loc_821B81C0;
	// lfs f12,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f9,f11,f12
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// lfs f10,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f10.f64 = double(temp.f32);
	// lfs f8,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f8,f13
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f13.f64));
	// fsubs f5,f7,f10
	ctx.f5.f64 = double(float(ctx.f7.f64 - ctx.f10.f64));
	// fmadds f11,f9,f0,f12
	ctx.f11.f64 = double(float(ctx.f9.f64 * ctx.f0.f64 + ctx.f12.f64));
	// fmadds f13,f6,f0,f13
	ctx.f13.f64 = double(float(ctx.f6.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fmadds f12,f5,f0,f10
	ctx.f12.f64 = double(float(ctx.f5.f64 * ctx.f0.f64 + ctx.f10.f64));
	// b 0x821b81cc
	goto loc_821B81CC;
loc_821B81C0:
	// lfs f13,0(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,4(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,8(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
loc_821B81CC:
	// lfs f0,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// lfs f9,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f9.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// lfs f10,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f10.f64 = double(temp.f32);
	// stfs f12,136(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f11,132(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f13,128(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// bne cr6,0x821b8204
	if (!ctx.cr6.eq) goto loc_821B8204;
	// fcmpu cr6,f10,f11
	ctx.cr6.compare(ctx.f10.f64, ctx.f11.f64);
	// bne cr6,0x821b8204
	if (!ctx.cr6.eq) goto loc_821B8204;
	// fcmpu cr6,f9,f12
	ctx.cr6.compare(ctx.f9.f64, ctx.f12.f64);
	// bne cr6,0x821b8204
	if (!ctx.cr6.eq) goto loc_821B8204;
	// stfs f29,0(r26)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r26.u32 + 0, temp.u32);
	// b 0x821b825c
	goto loc_821B825C;
loc_821B8204:
	// fsubs f0,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// fsubs f13,f10,f11
	ctx.f13.f64 = double(float(ctx.f10.f64 - ctx.f11.f64));
	// stfs f13,148(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// fsubs f12,f9,f12
	ctx.f12.f64 = double(float(ctx.f9.f64 - ctx.f12.f64));
	// stfs f12,152(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x822d4fb0
	ctx.lr = 0x821B8224;
	sub_822D4FB0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,2420(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2420);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f31,f1,f0
	ctx.f31.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// lfs f0,2416(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2416);
	ctx.f0.f64 = double(temp.f32);
	// fadds f1,f31,f0
	ctx.f1.f64 = double(float(ctx.f31.f64 + ctx.f0.f64));
	// bl 0x823dde20
	ctx.lr = 0x821B8240;
	sub_823DDE20(ctx, base);
	// frsp f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64));
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f12,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,2412(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2412);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f10,f31,f11
	ctx.f10.f64 = double(float(ctx.f31.f64 - ctx.f11.f64));
	// fmuls f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f9,0(r26)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r26.u32 + 0, temp.u32);
loc_821B825C:
	// lis r11,-32021
	ctx.r11.s64 = -2098528256;
	// lwz r11,-14920(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14920);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821b82a4
	if (ctx.cr6.eq) goto loc_821B82A4;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r31,r11,-2072
	ctx.r31.s64 = ctx.r11.s64 + -2072;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x821f2d08
	ctx.lr = 0x821B828C;
	sub_821F2D08(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821f2d08
	ctx.lr = 0x821B82A0;
	sub_821F2D08(ctx, base);
	// lfs f12,136(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f12.f64 = double(temp.f32);
loc_821B82A4:
	// lfs f0,8(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fadds f13,f0,f12
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// lfs f12,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,-3660(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -3660);
	ctx.f0.f64 = double(temp.f32);
	// fadds f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// fmuls f1,f11,f0
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x823de074
	ctx.lr = 0x821B82CC;
	__restfpr_28(ctx, base);
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821B7ED8) {
	__imp__sub_821B7ED8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B82D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x821B82D8;
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lfs f13,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lfs f31,5808(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5808);
	ctx.f31.f64 = double(temp.f32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lfs f12,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f0,f31
	ctx.f11.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// fsubs f10,f0,f31
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f11,88(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// stfs f12,100(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// stfs f10,104(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// bl 0x822d52c8
	ctx.lr = 0x821B8340;
	sub_822D52C8(ctx, base);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821b7ed8
	ctx.lr = 0x821B835C;
	sub_821B7ED8(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// lfs f29,5484(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f29.f64 = double(temp.f32);
	// beq cr6,0x821b83b4
	if (ctx.cr6.eq) goto loc_821B83B4;
	// lfs f0,0(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fabs f13,f0
	ctx.f13.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f13,f31
	ctx.cr6.compare(ctx.f13.f64, ctx.f31.f64);
	// bge cr6,0x821b83b0
	if (!ctx.cr6.lt) goto loc_821B83B0;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821b7ed8
	ctx.lr = 0x821B839C;
	sub_821B7ED8(ctx, base);
	// fadds f13,f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64 + ctx.f30.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2416(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2416);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f30,f13,f0
	ctx.f30.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// b 0x821b83b4
	goto loc_821B83B4;
loc_821B83B0:
	// stfs f29,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
loc_821B83B4:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x821b842c
	if (ctx.cr6.eq) goto loc_821B842C;
	// lfs f0,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f31,f30,f0
	ctx.f31.f64 = double(float(ctx.f30.f64 - ctx.f0.f64));
	// fcmpu cr6,f31,f29
	ctx.cr6.compare(ctx.f31.f64, ctx.f29.f64);
	// bge cr6,0x821b8428
	if (!ctx.cr6.lt) goto loc_821B8428;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f11,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r5,r10,24524
	ctx.r5.s64 = ctx.r10.s64 + 24524;
	// stfs f11,84(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// li r7,2047
	ctx.r7.s64 = 2047;
	// lfs f0,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stfs f11,100(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fsubs f10,f13,f0
	ctx.f10.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfs f10,104(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x821fe678
	ctx.lr = 0x821B841C;
	sub_821FE678(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821b8428
	if (ctx.cr6.eq) goto loc_821B8428;
	// fmr f31,f29
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f29.f64;
loc_821B8428:
	// stfs f31,0(r26)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r26.u32 + 0, temp.u32);
loc_821B842C:
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

PPC_WEAK_FUNC(sub_821B82D0) {
	__imp__sub_821B82D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B8440) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// fabs f0,f3
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f3.u64 & ~0x8000000000000000;
	// fmr f12,f1
	ctx.f12.f64 = ctx.f1.f64;
	// fcmpu cr6,f0,f4
	ctx.cr6.compare(ctx.f0.f64, ctx.f4.f64);
	// ble cr6,0x821b846c
	if (!ctx.cr6.gt) goto loc_821B846C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,2424(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2424);
	ctx.f13.f64 = double(temp.f32);
	// fsel f0,f3,f0,f13
	ctx.f0.f64 = ctx.f3.f64 >= 0.0 ? ctx.f0.f64 : ctx.f13.f64;
	// fmadds f1,f0,f4,f1
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f4.f64 + ctx.f1.f64));
	// blr 
	return;
loc_821B846C:
	// fmr f1,f2
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f2.f64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821B8440) {
	__imp__sub_821B8440(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B8474) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821B8474) {
	__imp__sub_821B8474(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B8478) {
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
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bne cr6,0x821b84f0
	if (!ctx.cr6.eq) goto loc_821B84F0;
	// lis r11,-32018
	ctx.r11.s64 = -2098331648;
	// lhz r7,126(r3)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r3.u32 + 126);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r11,6688
	ctx.r8.s64 = ctx.r11.s64 + 6688;
	// addi r11,r8,7968
	ctx.r11.s64 = ctx.r8.s64 + 7968;
loc_821B84BC:
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r6,r7
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r7.s32, ctx.xer);
	// beq cr6,0x821b84e0
	if (ctx.cr6.eq) goto loc_821B84E0;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// addi r6,r8,8480
	ctx.r6.s64 = ctx.r8.s64 + 8480;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x821b84bc
	if (ctx.cr6.lt) goto loc_821B84BC;
	// li r9,0
	ctx.r9.s64 = 0;
loc_821B84E0:
	// rlwinm r9,r9,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r11,r8,7972
	ctx.r11.s64 = ctx.r8.s64 + 7972;
	// add r31,r9,r11
	ctx.r31.u64 = ctx.r9.u64 + ctx.r11.u64;
	// b 0x821b84f8
	goto loc_821B84F8;
loc_821B84F0:
	// lwz r11,268(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 268);
	// addi r31,r11,404
	ctx.r31.s64 = ctx.r11.s64 + 404;
loc_821B84F8:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b8604
	if (ctx.cr6.eq) goto loc_821B8604;
	// lwz r11,316(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 316);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// lfs f1,248(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 248);
	ctx.f1.f64 = double(temp.f32);
	// lhz r3,126(r10)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r10.u32 + 126);
	// rlwinm r4,r11,0,18,15
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFF3FFF;
	// addi r5,r10,232
	ctx.r5.s64 = ctx.r10.s64 + 232;
	// rlwinm r4,r4,0,7,5
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFFFDFFFFFF;
	// beq cr6,0x821b85f4
	if (ctx.cr6.eq) goto loc_821B85F4;
	// addi r9,r1,88
	ctx.r9.s64 = ctx.r1.s64 + 88;
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// bl 0x821b82d0
	ctx.lr = 0x821B8534;
	sub_821B82D0(ctx, base);
	// lfs f2,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f2.f64 = double(temp.f32);
	// lfs f29,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f29.f64 = double(temp.f32);
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x820d52c0
	ctx.lr = 0x821B8544;
	sub_820D52C0(ctx, base);
	// fabs f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r30,r11,25988
	ctx.r30.s64 = ctx.r11.s64 + 25988;
	// lfs f0,25988(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 25988);
	ctx.f0.f64 = double(temp.f32);
	// lfs f30,2424(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2424);
	ctx.f30.f64 = double(temp.f32);
	// lfs f31,12168(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12168);
	ctx.f31.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x821b857c
	if (!ctx.cr6.gt) goto loc_821B857C;
	// fsel f13,f1,f31,f30
	ctx.f13.f64 = ctx.f1.f64 >= 0.0 ? ctx.f31.f64 : ctx.f30.f64;
	// lfs f12,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f0,f13,f0,f12
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64 + ctx.f12.f64));
	// b 0x821b8580
	goto loc_821B8580;
loc_821B857C:
	// fmr f0,f29
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f29.f64;
loc_821B8580:
	// stfs f0,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// lfs f29,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f29.f64 = double(temp.f32);
	// lfs f2,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f2.f64 = double(temp.f32);
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x820d52c0
	ctx.lr = 0x821B8594;
	sub_820D52C0(ctx, base);
	// fabs f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// lfs f0,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x821b85b4
	if (!ctx.cr6.gt) goto loc_821B85B4;
	// fsel f13,f1,f31,f30
	ctx.f13.f64 = ctx.f1.f64 >= 0.0 ? ctx.f31.f64 : ctx.f30.f64;
	// lfs f12,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f0,f13,f0,f12
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64 + ctx.f12.f64));
	// b 0x821b85b8
	goto loc_821B85B8;
loc_821B85B4:
	// fmr f0,f29
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f29.f64;
loc_821B85B8:
	// stfs f0,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// lfs f11,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f11,f0
	ctx.f13.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// lfs f12,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fabs f10,f13
	ctx.f10.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fcmpu cr6,f10,f12
	ctx.cr6.compare(ctx.f10.f64, ctx.f12.f64);
	// ble cr6,0x821b85e8
	if (!ctx.cr6.gt) goto loc_821B85E8;
	// fsel f13,f13,f31,f30
	ctx.f13.f64 = ctx.f13.f64 >= 0.0 ? ctx.f31.f64 : ctx.f30.f64;
	// fmadds f0,f13,f12,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f12.f64 + ctx.f0.f64));
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// b 0x821b8604
	goto loc_821B8604;
loc_821B85E8:
	// stfs f11,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// fmr f0,f11
	ctx.f0.f64 = ctx.f11.f64;
	// b 0x821b8604
	goto loc_821B8604;
loc_821B85F4:
	// addi r9,r31,12
	ctx.r9.s64 = ctx.r31.s64 + 12;
	// addi r8,r31,20
	ctx.r8.s64 = ctx.r31.s64 + 20;
	// addi r7,r31,16
	ctx.r7.s64 = ctx.r31.s64 + 16;
	// bl 0x821b82d0
	ctx.lr = 0x821B8604;
	sub_821B82D0(ctx, base);
loc_821B8604:
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

PPC_WEAK_FUNC(sub_821B8478) {
	__imp__sub_821B8478(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B8628) {
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
	// lwz r10,268(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 268);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r31,r10,404
	ctx.r31.s64 = ctx.r10.s64 + 404;
	// lbz r10,405(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 405);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821b8718
	if (ctx.cr6.eq) goto loc_821B8718;
	// lwz r10,316(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 316);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// lfs f1,248(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 248);
	ctx.f1.f64 = double(temp.f32);
	// lhz r3,126(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 126);
	// rlwinm r4,r10,0,18,15
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFF3FFF;
	// li r8,0
	ctx.r8.s64 = 0;
	// rlwinm r4,r4,0,7,5
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFFFDFFFFFF;
	// addi r5,r11,232
	ctx.r5.s64 = ctx.r11.s64 + 232;
	// beq cr6,0x821b870c
	if (ctx.cr6.eq) goto loc_821B870C;
	// addi r9,r1,84
	ctx.r9.s64 = ctx.r1.s64 + 84;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// bl 0x821b82d0
	ctx.lr = 0x821B8684;
	sub_821B82D0(ctx, base);
	// lfs f2,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f2.f64 = double(temp.f32);
	// lfs f31,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x820d52c0
	ctx.lr = 0x821B8694;
	sub_820D52C0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fabs f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r11,25988
	ctx.r11.s64 = ctx.r11.s64 + 25988;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f10,2424(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2424);
	ctx.f10.f64 = double(temp.f32);
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,12168(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12168);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x821b86cc
	if (!ctx.cr6.gt) goto loc_821B86CC;
	// fsel f13,f1,f11,f10
	ctx.f13.f64 = ctx.f1.f64 >= 0.0 ? ctx.f11.f64 : ctx.f10.f64;
	// lfs f12,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f0,f13,f0,f12
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64 + ctx.f12.f64));
	// b 0x821b86d0
	goto loc_821B86D0;
loc_821B86CC:
	// fmr f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f31.f64;
loc_821B86D0:
	// stfs f0,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// lfs f9,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f9.f64 = double(temp.f32);
	// lfs f0,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f9,f0
	ctx.f13.f64 = double(float(ctx.f9.f64 - ctx.f0.f64));
	// lfs f12,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fabs f8,f13
	ctx.f8.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fcmpu cr6,f8,f12
	ctx.cr6.compare(ctx.f8.f64, ctx.f12.f64);
	// ble cr6,0x821b8700
	if (!ctx.cr6.gt) goto loc_821B8700;
	// fsel f13,f13,f11,f10
	ctx.f13.f64 = ctx.f13.f64 >= 0.0 ? ctx.f11.f64 : ctx.f10.f64;
	// fmadds f0,f13,f12,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f12.f64 + ctx.f0.f64));
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// b 0x821b8718
	goto loc_821B8718;
loc_821B8700:
	// stfs f9,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// fmr f0,f9
	ctx.f0.f64 = ctx.f9.f64;
	// b 0x821b8718
	goto loc_821B8718;
loc_821B870C:
	// addi r9,r31,12
	ctx.r9.s64 = ctx.r31.s64 + 12;
	// addi r7,r31,16
	ctx.r7.s64 = ctx.r31.s64 + 16;
	// bl 0x821b82d0
	ctx.lr = 0x821B8718;
	sub_821B82D0(ctx, base);
loc_821B8718:
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

PPC_WEAK_FUNC(sub_821B8628) {
	__imp__sub_821B8628(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B8730) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf64
	ctx.lr = 0x821B8738;
	__savegprlr_23(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821b75d0
	ctx.lr = 0x821B8748;
	sub_821B75D0(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x821b8760
	if (!ctx.cr6.lt) goto loc_821B8760;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
loc_821B8760:
	// lwz r29,268(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 268);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821a9810
	ctx.lr = 0x821B876C;
	sub_821A9810(ctx, base);
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// addi r31,r29,404
	ctx.r31.s64 = ctx.r29.s64 + 404;
	// addi r25,r11,9624
	ctx.r25.s64 = ctx.r11.s64 + 9624;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,52(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 52);
	// bl 0x82317030
	ctx.lr = 0x821B8788;
	sub_82317030(ctx, base);
	// li r11,6
	ctx.r11.s64 = 6;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r9,r10,-4
	ctx.r9.s64 = ctx.r10.s64 + -4;
	// addi r10,r31,-4
	ctx.r10.s64 = ctx.r31.s64 + -4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_821B879C:
	// lwzu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stwu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x821b879c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821B879C;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r26,1
	ctx.r26.s64 = 1;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821b87d4
	if (!ctx.cr6.eq) goto loc_821B87D4;
	// lwz r11,3412(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 3412);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// beq cr6,0x821b87d4
	if (ctx.cr6.eq) goto loc_821B87D4;
	// lwz r11,468(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 468);
	// mr r23,r26
	ctx.r23.u64 = ctx.r26.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b87d8
	if (ctx.cr6.eq) goto loc_821B87D8;
loc_821B87D4:
	// mr r23,r28
	ctx.r23.u64 = ctx.r28.u64;
loc_821B87D8:
	// lhz r3,126(r30)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r30.u32 + 126);
	// bl 0x821bd230
	ctx.lr = 0x821B87E0;
	sub_821BD230(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821ad608
	ctx.lr = 0x821B87E8;
	sub_821AD608(ctx, base);
	// lis r11,130
	ctx.r11.s64 = 8519680;
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r28,352(r30)
	PPC_STORE_U32(ctx.r30.u32 + 352, ctx.r28.u32);
	// ori r7,r11,17
	ctx.r7.u64 = ctx.r11.u64 | 17;
	// stb r26,288(r30)
	PPC_STORE_U8(ctx.r30.u32 + 288, ctx.r26.u8);
	// lis r9,1024
	ctx.r9.s64 = 67108864;
	// stb r10,291(r30)
	PPC_STORE_U8(ctx.r30.u32 + 291, ctx.r10.u8);
	// li r8,15
	ctx.r8.s64 = 15;
	// stw r7,316(r30)
	PPC_STORE_U32(ctx.r30.u32 + 316, ctx.r7.u32);
	// stw r9,204(r30)
	PPC_STORE_U32(ctx.r30.u32 + 204, ctx.r9.u32);
	// addi r31,r30,16
	ctx.r31.s64 = ctx.r30.s64 + 16;
	// stb r8,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r8.u8);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// blt cr6,0x821b8830
	if (ctx.cr6.lt) goto loc_821B8830;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// ble cr6,0x821b8834
	if (!ctx.cr6.gt) goto loc_821B8834;
loc_821B8830:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_821B8834:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addi r4,r30,232
	ctx.r4.s64 = ctx.r30.s64 + 232;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x821b885c
	if (ctx.cr6.eq) goto loc_821B885C;
	// lwz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8222fb90
	ctx.lr = 0x821B8850;
	sub_8222FB90(ctx, base);
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// mr r23,r28
	ctx.r23.u64 = ctx.r28.u64;
	// b 0x821b8864
	goto loc_821B8864;
loc_821B885C:
	// bl 0x8222fb90
	ctx.lr = 0x821B8860;
	sub_8222FB90(ctx, base);
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
loc_821B8864:
	// lis r11,-32018
	ctx.r11.s64 = -2098331648;
	// rlwinm r8,r24,5,0,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r11,r11,6688
	ctx.r11.s64 = ctx.r11.s64 + 6688;
	// rlwinm r10,r27,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,7964
	ctx.r9.s64 = ctx.r11.s64 + 7964;
	// addi r11,r11,7836
	ctx.r11.s64 = ctx.r11.s64 + 7836;
	// lis r7,-31961
	ctx.r7.s64 = -2094596096;
	// add r31,r8,r9
	ctx.r31.u64 = ctx.r8.u64 + ctx.r9.u64;
	// addi r4,r7,-25976
	ctx.r4.s64 = ctx.r7.s64 + -25976;
	// lwzx r6,r8,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwzx r7,r10,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lhz r4,46(r4)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r4.u32 + 46);
	// stwx r6,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r6.u32);
	// stwx r7,r8,r9
	PPC_STORE_U32(ctx.r8.u32 + ctx.r9.u32, ctx.r7.u32);
	// lhz r6,126(r30)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r30.u32 + 126);
	// stw r6,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r6.u32);
	// bl 0x82229da8
	ctx.lr = 0x821B88B0;
	sub_82229DA8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lhz r3,126(r30)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r30.u32 + 126);
	// bl 0x822a88e0
	ctx.lr = 0x821B88BC;
	sub_822A88E0(ctx, base);
	// li r10,6
	ctx.r10.s64 = 6;
	// addi r11,r31,8
	ctx.r11.s64 = ctx.r31.s64 + 8;
	// addi r9,r1,76
	ctx.r9.s64 = ctx.r1.s64 + 76;
	// addi r8,r11,-4
	ctx.r8.s64 = ctx.r11.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_821B88D0:
	// lwzu r10,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// stwu r10,4(r8)
	ea = 4 + ctx.r8.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r8.u32 = ea;
	// bdnz 0x821b88d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821B88D0;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq cr6,0x821b8924
	if (ctx.cr6.eq) goto loc_821B8924;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821b8918
	if (!ctx.cr6.eq) goto loc_821B8918;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r10,52(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 52);
	// li r8,500
	ctx.r8.s64 = 500;
	// stb r26,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r26.u8);
	// stb r26,10(r31)
	PPC_STORE_U8(ctx.r31.u32 + 10, ctx.r26.u8);
	// stw r8,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r8.u32);
	// lfs f0,5484(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// stfs f0,24(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// stfs f0,28(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
loc_821B8918:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821b8478
	ctx.lr = 0x821B8924;
	sub_821B8478(ctx, base);
loc_821B8924:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8222feb8
	ctx.lr = 0x821B8930;
	sub_8222FEB8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821B8730) {
	__imp__sub_821B8730(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B893C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821B893C) {
	__imp__sub_821B893C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B8940) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32018
	ctx.r11.s64 = -2098331648;
	// lhz r8,126(r3)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r3.u32 + 126);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,6688
	ctx.r9.s64 = ctx.r11.s64 + 6688;
	// addi r11,r9,7968
	ctx.r11.s64 = ctx.r9.s64 + 7968;
loc_821B8954:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r7,r8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r8.s32, ctx.xer);
	// beq cr6,0x821b8978
	if (ctx.cr6.eq) goto loc_821B8978;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// addi r7,r9,8480
	ctx.r7.s64 = ctx.r9.s64 + 8480;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x821b8954
	if (ctx.cr6.lt) goto loc_821B8954;
	// li r10,0
	ctx.r10.s64 = 0;
loc_821B8978:
	// rlwinm r11,r10,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r10,r9,7964
	ctx.r10.s64 = ctx.r9.s64 + 7964;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821B8940) {
	__imp__sub_821B8940(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B8988) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x821B8990;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x821b89d0
	if (!ctx.cr6.eq) goto loc_821B89D0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,27440(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 27440);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821ac318
	ctx.lr = 0x821B89BC;
	sub_821AC318(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821b89d0
	if (ctx.cr6.eq) goto loc_821B89D0;
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// lfs f31,7388(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7388);
	ctx.f31.f64 = double(temp.f32);
	// b 0x821b89d8
	goto loc_821B89D8;
loc_821B89D0:
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// lfs f31,7384(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7384);
	ctx.f31.f64 = double(temp.f32);
loc_821B89D8:
	// lwz r11,3236(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3236);
	// li r27,0
	ctx.r27.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x821b8a64
	if (!ctx.cr6.gt) goto loc_821B8A64;
	// lis r11,-32052
	ctx.r11.s64 = -2100559872;
	// addi r29,r30,3240
	ctx.r29.s64 = ctx.r30.s64 + 3240;
	// addi r28,r11,26552
	ctx.r28.s64 = ctx.r11.s64 + 26552;
loc_821B89F4:
	// lhz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b8a50
	if (ctx.cr6.eq) goto loc_821B8A50;
	// mulli r11,r11,624
	ctx.r11.s64 = ctx.r11.s64 * 624;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,-624
	ctx.r4.s64 = ctx.r11.s64 + -624;
	// bl 0x821d8500
	ctx.lr = 0x821B8A18;
	sub_821D8500(ctx, base);
	// lfs f0,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f11,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f10,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 - ctx.f11.f64));
	// lfs f8,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f7,f8
	ctx.f6.f64 = double(float(ctx.f7.f64 - ctx.f8.f64));
	// fmuls f5,f12,f12
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f4,f9,f9,f5
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f5.f64));
	// fmadds f3,f6,f6,f4
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f4.f64));
	// fcmpu cr6,f3,f31
	ctx.cr6.compare(ctx.f3.f64, ctx.f31.f64);
	// blt cr6,0x821b8a88
	if (ctx.cr6.lt) goto loc_821B8A88;
loc_821B8A50:
	// lwz r11,3236(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3236);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r29,r29,20
	ctx.r29.s64 = ctx.r29.s64 + 20;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821b89f4
	if (ctx.cr6.lt) goto loc_821B89F4;
loc_821B8A64:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821aa3a0
	ctx.lr = 0x821B8A6C;
	sub_821AA3A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821b8a98
	if (!ctx.cr6.eq) goto loc_821B8A98;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_821B8A88:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_821B8A98:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821d8500
	ctx.lr = 0x821B8AA4;
	sub_821D8500(ctx, base);
	// lfs f0,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f11,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f10,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 - ctx.f11.f64));
	// lfs f8,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f7,f8
	ctx.f6.f64 = double(float(ctx.f7.f64 - ctx.f8.f64));
	// fmuls f5,f12,f12
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f4,f9,f9,f5
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f5.f64));
	// fmadds f3,f6,f6,f4
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f4.f64));
	// fcmpu cr6,f3,f31
	ctx.cr6.compare(ctx.f3.f64, ctx.f31.f64);
	// bgt cr6,0x821b8ae4
	if (ctx.cr6.gt) goto loc_821B8AE4;
	// li r11,0
	ctx.r11.s64 = 0;
loc_821B8AE4:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821B8988) {
	__imp__sub_821B8988(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B8AF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821B8AF4) {
	__imp__sub_821B8AF4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B8AF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x821B8B00;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,3236(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3236);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x821b8b8c
	if (!ctx.cr6.gt) goto loc_821B8B8C;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r3,3256
	ctx.r31.s64 = ctx.r3.s64 + 3256;
loc_821B8B20:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x821b8b3c
	if (ctx.cr6.eq) goto loc_821B8B3C;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82235f58
	ctx.lr = 0x821B8B34;
	sub_82235F58(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821b8b98
	if (!ctx.cr6.eq) goto loc_821B8B98;
loc_821B8B3C:
	// lwz r11,3236(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 3236);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,20
	ctx.r31.s64 = ctx.r31.s64 + 20;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821b8b20
	if (ctx.cr6.lt) goto loc_821B8B20;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821aa3a0
	ctx.lr = 0x821B8B58;
	sub_821AA3A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821b8b8c
	if (ctx.cr6.eq) goto loc_821B8B8C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821d8510
	ctx.lr = 0x821B8B6C;
	sub_821D8510(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821b8b8c
	if (ctx.cr6.eq) goto loc_821B8B8C;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82235f58
	ctx.lr = 0x821B8B80;
	sub_82235F58(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bne cr6,0x821b8b90
	if (!ctx.cr6.eq) goto loc_821B8B90;
loc_821B8B8C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821B8B90:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_821B8B98:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821B8AF8) {
	__imp__sub_821B8AF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B8BA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821B8BA4) {
	__imp__sub_821B8BA4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B8BA8) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lfs f13,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lfs f12,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f2,f0,f13
	ctx.f2.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f1,f12,f11
	ctx.f1.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// bl 0x823de9c8
	ctx.lr = 0x821B8BE0;
	sub_823DE9C8(ctx, base);
	// frsp f10,f1
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f1.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f9,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f9.f64 = double(temp.f32);
	// lfs f0,12336(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12336);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f8,f10,f0
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fsubs f1,f8,f9
	ctx.f1.f64 = double(float(ctx.f8.f64 - ctx.f9.f64));
	// bl 0x822d77c0
	ctx.lr = 0x821B8BFC;
	sub_822D77C0(ctx, base);
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x821b8c38
	if (!ctx.cr6.gt) goto loc_821B8C38;
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x821b8c48
	if (!ctx.cr6.lt) goto loc_821B8C48;
	// fcmpu cr6,f1,f13
	ctx.cr6.compare(ctx.f1.f64, ctx.f13.f64);
	// ble cr6,0x821b8c48
	if (!ctx.cr6.gt) goto loc_821B8C48;
loc_821B8C1C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821B8C20:
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
loc_821B8C38:
	// fcmpu cr6,f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x821b8c1c
	if (ctx.cr6.lt) goto loc_821B8C1C;
	// fcmpu cr6,f1,f13
	ctx.cr6.compare(ctx.f1.f64, ctx.f13.f64);
	// bgt cr6,0x821b8c1c
	if (ctx.cr6.gt) goto loc_821B8C1C;
loc_821B8C48:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x821b8c20
	goto loc_821B8C20;
}

PPC_WEAK_FUNC(sub_821B8BA8) {
	__imp__sub_821B8BA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B8C50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x821B8C58;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// cmplw cr6,r10,r5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x821b8c94
	if (!ctx.cr6.eq) goto loc_821B8C94;
	// bl 0x821aee48
	ctx.lr = 0x821B8C80;
	sub_821AEE48(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b8c94
	if (ctx.cr6.eq) goto loc_821B8C94;
	// lfs f31,12(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	ctx.f31.f64 = double(temp.f32);
	// b 0x821b8c98
	goto loc_821B8C98;
loc_821B8C94:
	// lfs f31,8(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f31.f64 = double(temp.f32);
loc_821B8C98:
	// addi r4,r31,20
	ctx.r4.s64 = ctx.r31.s64 + 20;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822d4918
	ctx.lr = 0x821B8CA4;
	sub_822D4918(ctx, base);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// bge cr6,0x821b8cbc
	if (!ctx.cr6.lt) goto loc_821B8CBC;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_821B8CBC:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821b8ba8
	ctx.lr = 0x821B8CCC;
	sub_821B8BA8(ctx, base);
	// clrlwi r3,r3,24
	ctx.r3.u64 = ctx.r3.u32 & 0xFF;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821B8C50) {
	__imp__sub_821B8C50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B8CDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821B8CDC) {
	__imp__sub_821B8CDC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B8CE0) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,18
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 18, ctx.xer);
	// bne cr6,0x821b8d34
	if (!ctx.cr6.eq) goto loc_821B8D34;
	// lis r11,-32053
	ctx.r11.s64 = -2100625408;
	// addi r31,r11,996
	ctx.r31.s64 = ctx.r11.s64 + 996;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r5,r31,4
	ctx.r5.s64 = ctx.r31.s64 + 4;
	// bl 0x82234350
	ctx.lr = 0x821B8D10;
	sub_82234350(ctx, base);
	// lis r10,-32191
	ctx.r10.s64 = -2109669376;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,7384(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 7384);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
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
loc_821B8D34:
	// lhz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// rlwinm r9,r10,0,22,22
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x200;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821b8d8c
	if (ctx.cr6.eq) goto loc_821B8D8C;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x821b8d68
	if (!ctx.cr6.eq) goto loc_821B8D68;
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// addi r3,r11,7392
	ctx.r3.s64 = ctx.r11.s64 + 7392;
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
loc_821B8D68:
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x821b8d8c
	if (!ctx.cr6.eq) goto loc_821B8D8C;
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// addi r3,r11,7456
	ctx.r3.s64 = ctx.r11.s64 + 7456;
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
loc_821B8D8C:
	// lis r10,-32191
	ctx.r10.s64 = -2109669376;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,7272
	ctx.r8.s64 = ctx.r10.s64 + 7272;
	// lwzx r3,r9,r8
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
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

PPC_WEAK_FUNC(sub_821B8CE0) {
	__imp__sub_821B8CE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B8DB0) {
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x821b8e20
	if (ctx.cr6.eq) goto loc_821B8E20;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x821b8de4
	if (!ctx.cr6.eq) goto loc_821B8DE4;
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// addi r3,r11,7440
	ctx.r3.s64 = ctx.r11.s64 + 7440;
	// b 0x821b8dec
	goto loc_821B8DEC;
loc_821B8DE4:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x821b8ce0
	ctx.lr = 0x821B8DEC;
	sub_821B8CE0(ctx, base);
loc_821B8DEC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lfs f0,2412(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2412);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f12,816(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 816, temp.u32);
	// lfs f11,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fneg f10,f11
	ctx.f10.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// lfs f0,6028(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6028);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,24816(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 24816);
	ctx.f13.f64 = double(temp.f32);
	// stfs f10,820(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 820, temp.u32);
	// b 0x821b8e38
	goto loc_821B8E38;
loc_821B8E20:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f0,6028(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6028);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,24816(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24816);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,816(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 816, temp.u32);
	// stfs f13,820(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 820, temp.u32);
loc_821B8E38:
	// stfs f13,812(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 812, temp.u32);
	// stfs f0,808(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 808, temp.u32);
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

PPC_WEAK_FUNC(sub_821B8DB0) {
	__imp__sub_821B8DB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B8E54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821B8E54) {
	__imp__sub_821B8E54(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B8E58) {
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
	// lis r11,-32053
	ctx.r11.s64 = -2100625408;
	// li r5,80
	ctx.r5.s64 = 80;
	// addi r31,r11,832
	ctx.r31.s64 = ctx.r11.s64 + 832;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x823de090
	ctx.lr = 0x821B8E84;
	sub_823DE090(ctx, base);
	// lis r10,-32018
	ctx.r10.s64 = -2098331648;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r10,6688
	ctx.r30.s64 = ctx.r10.s64 + 6688;
	// li r5,80
	ctx.r5.s64 = 80;
	// addi r11,r30,84
	ctx.r11.s64 = ctx.r30.s64 + 84;
	// addi r10,r30,36
	ctx.r10.s64 = ctx.r30.s64 + 36;
	// addi r9,r30,36
	ctx.r9.s64 = ctx.r30.s64 + 36;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// stw r10,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r10.u32);
	// addi r11,r30,60
	ctx.r11.s64 = ctx.r30.s64 + 60;
	// stw r9,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r9.u32);
	// addi r10,r30,72
	ctx.r10.s64 = ctx.r30.s64 + 72;
	// addi r9,r30,48
	ctx.r9.s64 = ctx.r30.s64 + 48;
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// stw r10,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r10.u32);
	// addi r11,r30,84
	ctx.r11.s64 = ctx.r30.s64 + 84;
	// stw r9,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r9.u32);
	// addi r10,r30,36
	ctx.r10.s64 = ctx.r30.s64 + 36;
	// addi r9,r30,60
	ctx.r9.s64 = ctx.r30.s64 + 60;
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// stw r10,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r10.u32);
	// addi r11,r30,12
	ctx.r11.s64 = ctx.r30.s64 + 12;
	// stw r9,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r9.u32);
	// addi r10,r30,12
	ctx.r10.s64 = ctx.r30.s64 + 12;
	// addi r9,r30,12
	ctx.r9.s64 = ctx.r30.s64 + 12;
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r10,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r10.u32);
	// stw r9,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r9.u32);
	// bl 0x823de090
	ctx.lr = 0x821B8EFC;
	sub_823DE090(ctx, base);
	// addi r11,r30,5292
	ctx.r11.s64 = ctx.r30.s64 + 5292;
	// addi r10,r30,5244
	ctx.r10.s64 = ctx.r30.s64 + 5244;
	// addi r9,r30,5244
	ctx.r9.s64 = ctx.r30.s64 + 5244;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// addi r11,r30,5268
	ctx.r11.s64 = ctx.r30.s64 + 5268;
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// addi r10,r30,5280
	ctx.r10.s64 = ctx.r30.s64 + 5280;
	// addi r9,r30,5256
	ctx.r9.s64 = ctx.r30.s64 + 5256;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// addi r11,r30,5292
	ctx.r11.s64 = ctx.r30.s64 + 5292;
	// stw r9,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r9.u32);
	// addi r10,r30,5244
	ctx.r10.s64 = ctx.r30.s64 + 5244;
	// addi r9,r30,5268
	ctx.r9.s64 = ctx.r30.s64 + 5268;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// stw r10,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r10.u32);
	// addi r11,r30,5220
	ctx.r11.s64 = ctx.r30.s64 + 5220;
	// stw r9,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r9.u32);
	// addi r10,r30,5220
	ctx.r10.s64 = ctx.r30.s64 + 5220;
	// addi r9,r30,5220
	ctx.r9.s64 = ctx.r30.s64 + 5220;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// stw r10,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r10.u32);
	// stw r9,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r9.u32);
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

PPC_WEAK_FUNC(sub_821B8E58) {
	__imp__sub_821B8E58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B8F74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821B8F74) {
	__imp__sub_821B8F74(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B8F78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x821B8F80;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,3405(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 3405);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// beq cr6,0x821b8fc0
	if (ctx.cr6.eq) goto loc_821B8FC0;
	// lis r10,-32053
	ctx.r10.s64 = -2100625408;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r10,-500
	ctx.r9.s64 = ctx.r10.s64 + -500;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwzx r7,r8,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// stw r7,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r7.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_821B8FC0:
	// lis r10,-32191
	ctx.r10.s64 = -2109669376;
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,7352
	ctx.r8.s64 = ctx.r10.s64 + 7352;
	// rlwinm r6,r9,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r7,r8
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// lwzx r4,r5,r6
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r6.u32);
	// stw r4,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r4.u32);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r3,19
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 19, ctx.xer);
	// bne cr6,0x821b9034
	if (!ctx.cr6.eq) goto loc_821B9034;
	// lhz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 4);
	// rlwinm r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821b9034
	if (ctx.cr6.eq) goto loc_821B9034;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821aa3a0
	ctx.lr = 0x821B9004;
	sub_821AA3A0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821b9018
	if (ctx.cr6.eq) goto loc_821B9018;
	// lbz r11,3172(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3172);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821b9034
	if (!ctx.cr6.eq) goto loc_821B9034;
loc_821B9018:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r10,-32053
	ctx.r10.s64 = -2100625408;
	// addi r9,r10,-500
	ctx.r9.s64 = ctx.r10.s64 + -500;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r8,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// addi r7,r11,156
	ctx.r7.s64 = ctx.r11.s64 + 156;
	// stw r7,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r7.u32);
loc_821B9034:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821b9054
	if (!ctx.cr6.eq) goto loc_821B9054;
	// lhz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 4);
	// li r3,0
	ctx.r3.s64 = 0;
	// rlwinm r10,r11,0,0,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF8000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821b9058
	if (ctx.cr6.eq) goto loc_821B9058;
loc_821B9054:
	// li r3,1
	ctx.r3.s64 = 1;
loc_821B9058:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821B8F78) {
	__imp__sub_821B8F78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B9060) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x821B9068;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// bl 0x821b8ce0
	ctx.lr = 0x821B9080;
	sub_821B8CE0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821aa3a0
	ctx.lr = 0x821B908C;
	sub_821AA3A0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821aa3d0
	ctx.lr = 0x821B9098;
	sub_821AA3D0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x821b90ec
	if (ctx.cr6.eq) goto loc_821B90EC;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821b90f4
	if (!ctx.cr6.eq) goto loc_821B90F4;
	// clrlwi r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821b90d0
	if (!ctx.cr6.eq) goto loc_821B90D0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821d9090
	ctx.lr = 0x821B90C4;
	sub_821D9090(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b91e0
	if (ctx.cr6.eq) goto loc_821B91E0;
loc_821B90D0:
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r29,232
	ctx.r4.s64 = ctx.r29.s64 + 232;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821b8c50
	ctx.lr = 0x821B90E4;
	sub_821B8C50(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_821B90EC:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821b9198
	if (ctx.cr6.eq) goto loc_821B9198;
loc_821B90F4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x821dee98
	ctx.lr = 0x821B9100;
	sub_821DEE98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821b91e0
	if (!ctx.cr6.eq) goto loc_821B91E0;
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// li r10,112
	ctx.r10.s64 = 112;
	// addi r9,r11,9624
	ctx.r9.s64 = ctx.r11.s64 + 9624;
	// lwz r11,20(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// subf r8,r11,r30
	ctx.r8.s64 = ctx.r30.s64 - ctx.r11.s64;
	// divw r7,r8,r10
	ctx.r7.s32 = ctx.r8.s32 / ctx.r10.s32;
	// mulli r11,r7,44
	ctx.r11.s64 = ctx.r7.s64 * 44;
	// add r6,r11,r31
	ctx.r6.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r5,840(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 840);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x821b91e0
	if (!ctx.cr6.gt) goto loc_821B91E0;
	// clrlwi r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b914c
	if (ctx.cr6.eq) goto loc_821B914C;
	// lbz r11,5005(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5005);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b9168
	if (ctx.cr6.eq) goto loc_821B9168;
loc_821B914C:
	// li r5,500
	ctx.r5.s64 = 500;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821d9100
	ctx.lr = 0x821B915C;
	sub_821D9100(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b91e0
	if (ctx.cr6.eq) goto loc_821B91E0;
loc_821B9168:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r5,3000
	ctx.r5.s64 = 3000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821d8468
	ctx.lr = 0x821B917C;
	sub_821D8468(ctx, base);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821b8c50
	ctx.lr = 0x821B9190;
	sub_821B8C50(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_821B9198:
	// clrlwi r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b91e0
	if (ctx.cr6.eq) goto loc_821B91E0;
	// lhz r11,3288(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 3288);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b91e0
	if (ctx.cr6.eq) goto loc_821B91E0;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// mulli r11,r11,624
	ctx.r11.s64 = ctx.r11.s64 * 624;
	// addi r10,r10,26552
	ctx.r10.s64 = ctx.r10.s64 + 26552;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r11,r11,-624
	ctx.r11.s64 = ctx.r11.s64 + -624;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,388
	ctx.r4.s64 = ctx.r11.s64 + 388;
	// bl 0x821b8c50
	ctx.lr = 0x821B91D8;
	sub_821B8C50(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_821B91E0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821B9060) {
	__imp__sub_821B9060(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B91EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821B91EC) {
	__imp__sub_821B91EC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B91F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x821B91F8;
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
	// bl 0x821b8ce0
	ctx.lr = 0x821B920C;
	sub_821B8CE0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821aa3a0
	ctx.lr = 0x821B9218;
	sub_821AA3A0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821b9240
	if (ctx.cr6.eq) goto loc_821B9240;
	// addi r4,r3,232
	ctx.r4.s64 = ctx.r3.s64 + 232;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821b8c50
	ctx.lr = 0x821B9234;
	sub_821B8C50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bne cr6,0x821b9244
	if (!ctx.cr6.eq) goto loc_821B9244;
loc_821B9240:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821B9244:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821B91F0) {
	__imp__sub_821B91F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B924C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821B924C) {
	__imp__sub_821B924C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B9250) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x821B9258;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x821b8f78
	ctx.lr = 0x821B9274;
	sub_821B8F78(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821b9284
	if (!ctx.cr6.eq) goto loc_821B9284;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_821B9284:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// slw r9,r10,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// rlwinm r8,r9,0,23,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x100;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x821b935c
	if (!ctx.cr6.eq) goto loc_821B935C;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821b9060
	ctx.lr = 0x821B92AC;
	sub_821B9060(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821b92c8
	if (ctx.cr6.eq) goto loc_821B92C8;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_821B92C8:
	// lwz r11,3236(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3236);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x821b9354
	if (!ctx.cr6.gt) goto loc_821B9354;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821b8988
	ctx.lr = 0x821B92E0;
	sub_821B8988(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b9354
	if (ctx.cr6.eq) goto loc_821B9354;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821aa3a0
	ctx.lr = 0x821B92F4;
	sub_821AA3A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821b935c
	if (ctx.cr6.eq) goto loc_821B935C;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,3000
	ctx.r5.s64 = 3000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821d8468
	ctx.lr = 0x821B9310;
	sub_821D8468(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r11,26020
	ctx.r5.s64 = ctx.r11.s64 + 26020;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821b8ba8
	ctx.lr = 0x821B9324;
	sub_821B8BA8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821b935c
	if (!ctx.cr6.eq) goto loc_821B935C;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r10,-32053
	ctx.r10.s64 = -2100625408;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r9,r10,-500
	ctx.r9.s64 = ctx.r10.s64 + -500;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r8,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// stw r7,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r7.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_821B9354:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
loc_821B935C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821B9250) {
	__imp__sub_821B9250(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B9368) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f0,28(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32191
	ctx.r10.s64 = -2109669376;
	// lfs f12,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f11,240(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 240);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// lfs f9,232(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f9,f13
	ctx.f8.f64 = double(float(ctx.f9.f64 - ctx.f13.f64));
	// lfs f7,236(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 236);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f7,f12
	ctx.f6.f64 = double(float(ctx.f7.f64 - ctx.f12.f64));
	// lfs f0,7380(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 7380);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,5484(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5484);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,12168(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12168);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f5,f10,f10
	ctx.f5.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// fmadds f4,f8,f8,f5
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 + ctx.f5.f64));
	// fmadds f3,f6,f6,f4
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f4.f64));
	// fsubs f2,f3,f0
	ctx.f2.f64 = double(float(ctx.f3.f64 - ctx.f0.f64));
	// fneg f1,f3
	ctx.f1.u64 = ctx.f3.u64 ^ 0x8000000000000000;
	// fsel f11,f2,f0,f3
	ctx.f11.f64 = ctx.f2.f64 >= 0.0 ? ctx.f0.f64 : ctx.f3.f64;
	// fsel f10,f1,f13,f11
	ctx.f10.f64 = ctx.f1.f64 >= 0.0 ? ctx.f13.f64 : ctx.f11.f64;
	// fdivs f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 / ctx.f0.f64));
	// fsubs f1,f12,f9
	ctx.f1.f64 = double(float(ctx.f12.f64 - ctx.f9.f64));
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821B9368) {
	__imp__sub_821B9368(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B93D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lis r10,-32020
	ctx.r10.s64 = -2098462720;
	// addi r9,r10,9624
	ctx.r9.s64 = ctx.r10.s64 + 9624;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r8,r11,20
	ctx.r8.s64 = ctx.r11.s64 + 20;
	// lwz r11,52(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 52);
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r7,r4
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r4.u32);
	// cmpw cr6,r6,r11
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x821b9404
	if (!ctx.cr6.gt) goto loc_821B9404;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,12168(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_821B9404:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821B93D0) {
	__imp__sub_821B93D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B9410) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,736(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 736);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x821b942c
	if (!ctx.cr6.gt) goto loc_821B942C;
	// lfs f0,744(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 744);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x821b9430
	if (ctx.cr6.lt) goto loc_821B9430;
loc_821B942C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_821B9430:
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
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
	// lfs f0,12168(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,5484(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5484);
	ctx.f13.f64 = double(temp.f32);
	// fsel f1,f12,f0,f13
	ctx.f1.f64 = ctx.f12.f64 >= 0.0 ? ctx.f0.f64 : ctx.f13.f64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821B9410) {
	__imp__sub_821B9410(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B945C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821B945C) {
	__imp__sub_821B945C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B9460) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x821B9468;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r3,r3,3184
	ctx.r3.s64 = ctx.r3.s64 + 3184;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x821ded88
	ctx.lr = 0x821B9480;
	sub_821DED88(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821b8ce0
	ctx.lr = 0x821B948C;
	sub_821B8CE0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821aa3a0
	ctx.lr = 0x821B9498;
	sub_821AA3A0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821b94f0
	if (ctx.cr6.eq) goto loc_821B94F0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821d91c0
	ctx.lr = 0x821B94AC;
	sub_821D91C0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821b94c4
	if (!ctx.cr6.eq) goto loc_821B94C4;
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821b94f0
	if (!ctx.cr6.eq) goto loc_821B94F0;
loc_821B94C4:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r29,232
	ctx.r3.s64 = ctx.r29.s64 + 232;
	// bl 0x821b8ba8
	ctx.lr = 0x821B94D4;
	sub_821B8BA8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b9550
	if (ctx.cr6.eq) goto loc_821B9550;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,12168(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f1.f64 = double(temp.f32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_821B94F0:
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b9550
	if (ctx.cr6.eq) goto loc_821B9550;
	// lfs f0,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lfs f13,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lfs f12,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lfs f11,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f11.f64 = double(temp.f32);
	// fadds f10,f0,f12
	ctx.f10.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// lfs f9,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f9.f64 = double(temp.f32);
	// fadds f8,f13,f11
	ctx.f8.f64 = double(float(ctx.f13.f64 + ctx.f11.f64));
	// stfs f10,88(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f9,96(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f8,92(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// bl 0x821b8ba8
	ctx.lr = 0x821B9534;
	sub_821B8BA8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b9550
	if (ctx.cr6.eq) goto loc_821B9550;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,12168(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f1.f64 = double(temp.f32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_821B9550:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f1.f64 = double(temp.f32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821B9460) {
	__imp__sub_821B9460(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B9560) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x821B9568;
	__savegprlr_26(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,3236(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3236);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// li r27,0
	ctx.r27.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x821b9600
	if (!ctx.cr6.gt) goto loc_821B9600;
	// lis r11,-32052
	ctx.r11.s64 = -2100559872;
	// addi r29,r3,3240
	ctx.r29.s64 = ctx.r3.s64 + 3240;
	// addi r28,r11,26552
	ctx.r28.s64 = ctx.r11.s64 + 26552;
loc_821B9598:
	// lhz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b95ec
	if (ctx.cr6.eq) goto loc_821B95EC;
	// mulli r11,r11,624
	ctx.r11.s64 = ctx.r11.s64 * 624;
	// lfs f31,736(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 736);
	ctx.f31.f64 = double(temp.f32);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// addi r3,r30,20
	ctx.r3.s64 = ctx.r30.s64 + 20;
	// addi r11,r11,-624
	ctx.r11.s64 = ctx.r11.s64 + -624;
	// addi r4,r11,232
	ctx.r4.s64 = ctx.r11.s64 + 232;
	// bl 0x822d4918
	ctx.lr = 0x821B95C0;
	sub_822D4918(ctx, base);
	// fmuls f0,f31,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f31.f64 * ctx.f31.f64));
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x821b95ec
	if (ctx.cr6.lt) goto loc_821B95EC;
	// lwz r4,16(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x821b95ec
	if (ctx.cr6.eq) goto loc_821B95EC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82235f58
	ctx.lr = 0x821B95E0;
	sub_82235F58(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821b95ec
	if (ctx.cr6.eq) goto loc_821B95EC;
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
loc_821B95EC:
	// lwz r11,3236(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3236);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r29,r29,20
	ctx.r29.s64 = ctx.r29.s64 + 20;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821b9598
	if (ctx.cr6.lt) goto loc_821B9598;
loc_821B9600:
	// extsw r11,r26
	ctx.r11.s64 = ctx.r26.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f1,f13
	ctx.f1.f64 = double(float(ctx.f13.f64));
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-64(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821B9560) {
	__imp__sub_821B9560(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B9620) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,16(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lfs f31,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f31.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x821b96d4
	if (ctx.cr6.eq) goto loc_821B96D4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f0,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f12,232(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f0,f12
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// stfs f11,80(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f10,236(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 236);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f13,f10
	ctx.f9.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// stfs f9,84(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// bl 0x822d4ac8
	ctx.lr = 0x821B9678;
	sub_822D4AC8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,27440(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 27440);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x821b96d4
	if (ctx.cr6.lt) goto loc_821B96D4;
	// lfs f0,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f11,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f10.f64 = double(temp.f32);
	// lfs f13,6040(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6040);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f11,f10,f12
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f10.f64 + ctx.f12.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x821b96b8
	if (!ctx.cr6.gt) goto loc_821B96B8;
	// lfs f1,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// b 0x821b96d8
	goto loc_821B96D8;
loc_821B96B8:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,26036(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 26036);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x821b96d4
	if (!ctx.cr6.lt) goto loc_821B96D4;
	// lfs f0,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// fneg f1,f0
	ctx.f1.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// b 0x821b96d8
	goto loc_821B96D8;
loc_821B96D4:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
loc_821B96D8:
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

PPC_WEAK_FUNC(sub_821B9620) {
	__imp__sub_821B9620(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B96F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lhz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821b970c
	if (ctx.cr6.eq) goto loc_821B970C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,12168(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_821B970C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821B96F0) {
	__imp__sub_821B96F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B9718) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x821b974c
	if (!ctx.cr6.eq) goto loc_821B974C;
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// lwz r10,96(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 96);
	// addi r9,r11,9624
	ctx.r9.s64 = ctx.r11.s64 + 9624;
	// lwz r11,52(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 52);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x821b974c
	if (!ctx.cr6.lt) goto loc_821B974C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,12168(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_821B974C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821B9718) {
	__imp__sub_821B9718(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B9758) {
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x821b9790
	if (ctx.cr6.eq) goto loc_821B9790;
	// bl 0x82235ec0
	ctx.lr = 0x821B9770;
	sub_82235EC0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821b9790
	if (!ctx.cr6.eq) goto loc_821B9790;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f1.f64 = double(temp.f32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_821B9790:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,12168(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f1.f64 = double(temp.f32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821B9758) {
	__imp__sub_821B9758(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B97A8) {
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x821b97e0
	if (ctx.cr6.eq) goto loc_821B97E0;
	// bl 0x82235ec0
	ctx.lr = 0x821B97C0;
	sub_82235EC0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821b97e0
	if (ctx.cr6.eq) goto loc_821B97E0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f1.f64 = double(temp.f32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_821B97E0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,12168(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f1.f64 = double(temp.f32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821B97A8) {
	__imp__sub_821B97A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B97F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// slw r9,r10,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// rlwinm r8,r9,0,13,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x7FFFC;
	// rlwinm r8,r8,0,24,13
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFC00FF;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x821b9820
	if (ctx.cr6.eq) goto loc_821B9820;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,12168(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_821B9820:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821B97F8) {
	__imp__sub_821B97F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B982C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821B982C) {
	__imp__sub_821B982C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B9830) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// slw r11,r10,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// rlwinm r9,r11,0,23,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x821b9854
	if (ctx.cr6.eq) goto loc_821B9854;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,12168(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_821B9854:
	// lis r12,4
	ctx.r12.s64 = 262144;
	// ori r12,r12,7932
	ctx.r12.u64 = ctx.r12.u64 | 7932;
	// and r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 & ctx.r12.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821b9874
	if (ctx.cr6.eq) goto loc_821B9874;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,2416(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2416);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_821B9874:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821B9830) {
	__imp__sub_821B9830(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B9880) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x821b98a4
	if (!ctx.cr6.eq) goto loc_821B98A4;
	// lhz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// rlwinm r10,r11,0,18,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821b98a4
	if (!ctx.cr6.eq) goto loc_821B98A4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_821B98A4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,12168(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821B9880) {
	__imp__sub_821B9880(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B98B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x821B98B8;
	__savegprlr_28(ctx, base);
	// stfd f29,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f29.u64);
	// stfd f30,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f30.u64);
	// stfd f31,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f0,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,28(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// lis r9,-32191
	ctx.r9.s64 = -2109669376;
	// lfs f12,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lfs f11,236(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 236);
	ctx.f11.f64 = double(temp.f32);
	// lis r5,-32021
	ctx.r5.s64 = -2098528256;
	// fsubs f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// lfs f9,240(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 240);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f9,f13
	ctx.f8.f64 = double(float(ctx.f9.f64 - ctx.f13.f64));
	// lfs f7,232(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f7,f12
	ctx.f6.f64 = double(float(ctx.f7.f64 - ctx.f12.f64));
	// lfs f0,7380(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 7380);
	ctx.f0.f64 = double(temp.f32);
	// lfs f30,5484(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 5484);
	ctx.f30.f64 = double(temp.f32);
	// lwz r9,4(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// lfs f29,12168(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 12168);
	ctx.f29.f64 = double(temp.f32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r10,-32020
	ctx.r10.s64 = -2098462720;
	// lwz r11,-18984(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + -18984);
	// addi r4,r9,20
	ctx.r4.s64 = ctx.r9.s64 + 20;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r28,r10,9624
	ctx.r28.s64 = ctx.r10.s64 + 9624;
	// rlwinm r3,r4,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// fmuls f5,f10,f10
	ctx.f5.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// lfs f4,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f4.f64 = double(temp.f32);
	// lwz r10,52(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 52);
	// lwzx r11,r3,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r31.u32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// fmadds f3,f8,f8,f5
	ctx.f3.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 + ctx.f5.f64));
	// fmadds f2,f6,f6,f3
	ctx.f2.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f3.f64));
	// fsubs f1,f2,f0
	ctx.f1.f64 = double(float(ctx.f2.f64 - ctx.f0.f64));
	// fneg f13,f2
	ctx.f13.u64 = ctx.f2.u64 ^ 0x8000000000000000;
	// fsel f12,f1,f0,f2
	ctx.f12.f64 = ctx.f1.f64 >= 0.0 ? ctx.f0.f64 : ctx.f2.f64;
	// fsel f11,f13,f30,f12
	ctx.f11.f64 = ctx.f13.f64 >= 0.0 ? ctx.f30.f64 : ctx.f12.f64;
	// fdivs f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 / ctx.f0.f64));
	// fsubs f9,f29,f10
	ctx.f9.f64 = double(float(ctx.f29.f64 - ctx.f10.f64));
	// fmuls f12,f9,f4
	ctx.f12.f64 = double(float(ctx.f9.f64 * ctx.f4.f64));
	// ble cr6,0x821b9978
	if (!ctx.cr6.gt) goto loc_821B9978;
	// fmr f13,f29
	ctx.f13.f64 = ctx.f29.f64;
	// b 0x821b997c
	goto loc_821B997C;
loc_821B9978:
	// fmr f13,f30
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f30.f64;
loc_821B997C:
	// lis r11,-32024
	ctx.r11.s64 = -2098724864;
	// lfs f0,12(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,736(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 736);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// lwz r11,11196(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11196);
	// lfs f10,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// fnmsubs f13,f10,f13,f12
	ctx.f13.f64 = double(float(-(ctx.f10.f64 * ctx.f13.f64 - ctx.f12.f64)));
	// ble cr6,0x821b99ac
	if (!ctx.cr6.gt) goto loc_821B99AC;
	// lfs f12,744(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 744);
	ctx.f12.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// blt cr6,0x821b99b0
	if (ctx.cr6.lt) goto loc_821B99B0;
loc_821B99AC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_821B99B0:
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// lis r10,-32024
	ctx.r10.s64 = -2098724864;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// lwz r11,11288(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 11288);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f10,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// fsel f9,f11,f29,f30
	ctx.f9.f64 = ctx.f11.f64 >= 0.0 ? ctx.f29.f64 : ctx.f30.f64;
	// fmadds f31,f9,f10,f13
	ctx.f31.f64 = double(float(ctx.f9.f64 * ctx.f10.f64 + ctx.f13.f64));
	// bl 0x821b9620
	ctx.lr = 0x821B99E8;
	sub_821B9620(ctx, base);
	// lis r9,-32024
	ctx.r9.s64 = -2098724864;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// lwz r11,13412(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 13412);
	// lfs f8,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f31,f1,f8,f31
	ctx.f31.f64 = double(float(ctx.f1.f64 * ctx.f8.f64 + ctx.f31.f64));
	// beq cr6,0x821b9a1c
	if (ctx.cr6.eq) goto loc_821B9A1C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82235ec0
	ctx.lr = 0x821B9A0C;
	sub_82235EC0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821b9a1c
	if (!ctx.cr6.eq) goto loc_821B9A1C;
	// fmr f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f30.f64;
	// b 0x821b9a20
	goto loc_821B9A20;
loc_821B9A1C:
	// fmr f0,f29
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f29.f64;
loc_821B9A20:
	// lis r11,-32024
	ctx.r11.s64 = -2098724864;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r9,1
	ctx.r9.s64 = 1;
	// slw r8,r9,r10
	ctx.r8.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r10.u8 & 0x3F));
	// lwz r11,13396(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13396);
	// rlwinm r7,r8,0,13,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x7FFFC;
	// rlwinm r7,r7,0,24,13
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFFFFFC00FF;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// lfs f13,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f13,f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64 + ctx.f31.f64));
	// beq cr6,0x821b9a54
	if (ctx.cr6.eq) goto loc_821B9A54;
	// fmr f0,f29
	ctx.f0.f64 = ctx.f29.f64;
	// b 0x821b9a58
	goto loc_821B9A58;
loc_821B9A54:
	// fmr f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f30.f64;
loc_821B9A58:
	// lis r11,-32032
	ctx.r11.s64 = -2099249152;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,-6176(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6176);
	// lfs f12,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f31,f12,f0,f13
	ctx.f31.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f13.f64));
	// bl 0x821b9460
	ctx.lr = 0x821B9A74;
	sub_821B9460(ctx, base);
	// lis r29,-32032
	ctx.r29.s64 = -2099249152;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,-5928(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -5928);
	// lfs f11,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f31,f1,f11,f31
	ctx.f31.f64 = double(float(ctx.f1.f64 * ctx.f11.f64 + ctx.f31.f64));
	// bl 0x821b9560
	ctx.lr = 0x821B9A90;
	sub_821B9560(ctx, base);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,-5928(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -5928);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lfs f10,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f13,f1,f10,f31
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f10.f64 + ctx.f31.f64));
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// bne cr6,0x821b9ac4
	if (!ctx.cr6.eq) goto loc_821B9AC4;
	// lwz r10,96(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lwz r11,52(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 52);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x821b9ac4
	if (!ctx.cr6.lt) goto loc_821B9AC4;
	// fmr f0,f29
	ctx.f0.f64 = ctx.f29.f64;
	// b 0x821b9ac8
	goto loc_821B9AC8;
loc_821B9AC4:
	// fmr f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f30.f64;
loc_821B9AC8:
	// lis r11,-32032
	ctx.r11.s64 = -2099249152;
	// lhz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// rlwinm r9,r10,0,25,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lwz r11,-6060(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6060);
	// lfs f12,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32021
	ctx.r11.s64 = -2098528256;
	// fmadds f0,f12,f0,f13
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f13.f64));
	// lwz r11,-14892(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14892);
	// lfs f13,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// beq cr6,0x821b9b0c
	if (ctx.cr6.eq) goto loc_821B9B0C;
	// fmadds f1,f13,f29,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f29.f64 + ctx.f0.f64));
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f29,-64(r1)
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f30,-56(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_821B9B0C:
	// fmadds f1,f13,f30,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f30.f64 + ctx.f0.f64));
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f29,-64(r1)
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f30,-56(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821B98B0) {
	__imp__sub_821B98B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B9B24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821B9B24) {
	__imp__sub_821B9B24(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B9B28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x821B9B30;
	__savegprlr_29(ctx, base);
	// stfd f29,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f29.u64);
	// stfd f30,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f30.u64);
	// stfd f31,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f0,28(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32191
	ctx.r10.s64 = -2109669376;
	// lfs f12,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r29,-32021
	ctx.r29.s64 = -2098528256;
	// lfs f11,240(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 240);
	ctx.f11.f64 = double(temp.f32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// fsubs f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// lfs f9,232(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f9,f13
	ctx.f8.f64 = double(float(ctx.f9.f64 - ctx.f13.f64));
	// lfs f7,236(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 236);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f7,f12
	ctx.f6.f64 = double(float(ctx.f7.f64 - ctx.f12.f64));
	// lfs f0,7380(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 7380);
	ctx.f0.f64 = double(temp.f32);
	// lfs f29,5484(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5484);
	ctx.f29.f64 = double(temp.f32);
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lfs f30,12168(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 12168);
	ctx.f30.f64 = double(temp.f32);
	// lis r6,-32020
	ctx.r6.s64 = -2098462720;
	// addi r4,r11,20
	ctx.r4.s64 = ctx.r11.s64 + 20;
	// lwz r3,-18984(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -18984);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// addi r5,r6,9624
	ctx.r5.s64 = ctx.r6.s64 + 9624;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// fmuls f5,f10,f10
	ctx.f5.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// lfs f4,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f4.f64 = double(temp.f32);
	// lwz r11,52(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 52);
	// lwzx r9,r10,r31
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// fmadds f3,f8,f8,f5
	ctx.f3.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 + ctx.f5.f64));
	// fmadds f2,f6,f6,f3
	ctx.f2.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f3.f64));
	// fsubs f1,f2,f0
	ctx.f1.f64 = double(float(ctx.f2.f64 - ctx.f0.f64));
	// fneg f13,f2
	ctx.f13.u64 = ctx.f2.u64 ^ 0x8000000000000000;
	// fsel f12,f1,f0,f2
	ctx.f12.f64 = ctx.f1.f64 >= 0.0 ? ctx.f0.f64 : ctx.f2.f64;
	// fsel f11,f13,f29,f12
	ctx.f11.f64 = ctx.f13.f64 >= 0.0 ? ctx.f29.f64 : ctx.f12.f64;
	// fdivs f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 / ctx.f0.f64));
	// fsubs f9,f30,f10
	ctx.f9.f64 = double(float(ctx.f30.f64 - ctx.f10.f64));
	// fmuls f13,f9,f4
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f4.f64));
	// ble cr6,0x821b9bec
	if (!ctx.cr6.gt) goto loc_821B9BEC;
	// fmr f0,f30
	ctx.f0.f64 = ctx.f30.f64;
	// b 0x821b9bf0
	goto loc_821B9BF0;
loc_821B9BEC:
	// fmr f0,f29
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f29.f64;
loc_821B9BF0:
	// lis r11,-32024
	ctx.r11.s64 = -2098724864;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// lwz r11,11196(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11196);
	// lfs f12,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// fnmsubs f31,f12,f0,f13
	ctx.f31.f64 = double(float(-(ctx.f12.f64 * ctx.f0.f64 - ctx.f13.f64)));
	// beq cr6,0x821b9c24
	if (ctx.cr6.eq) goto loc_821B9C24;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82235ec0
	ctx.lr = 0x821B9C14;
	sub_82235EC0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821b9c24
	if (ctx.cr6.eq) goto loc_821B9C24;
	// fmr f13,f29
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f29.f64;
	// b 0x821b9c28
	goto loc_821B9C28;
loc_821B9C24:
	// fmr f13,f30
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f30.f64;
loc_821B9C28:
	// lwz r11,-18984(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -18984);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f11,f0,f13,f31
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f13.f64 + ctx.f31.f64));
	// bne cr6,0x821b9c54
	if (!ctx.cr6.eq) goto loc_821B9C54;
	// lhz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// rlwinm r10,r11,0,18,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821b9c54
	if (!ctx.cr6.eq) goto loc_821B9C54;
	// fmr f13,f29
	ctx.f13.f64 = ctx.f29.f64;
	// b 0x821b9c58
	goto loc_821B9C58;
loc_821B9C54:
	// fmr f13,f30
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f30.f64;
loc_821B9C58:
	// fmuls f13,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// slw r11,r10,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// rlwinm r8,r11,0,23,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	// lfs f12,2416(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2416);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f13,f13,f12,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f12.f64 + ctx.f11.f64));
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x821b9c88
	if (ctx.cr6.eq) goto loc_821B9C88;
	// fmuls f12,f0,f30
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// b 0x821b9ca8
	goto loc_821B9CA8;
loc_821B9C88:
	// lis r12,4
	ctx.r12.s64 = 262144;
	// ori r12,r12,7932
	ctx.r12.u64 = ctx.r12.u64 | 7932;
	// and r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 & ctx.r12.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821b9ca4
	if (ctx.cr6.eq) goto loc_821B9CA4;
	// fmuls f12,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// b 0x821b9ca8
	goto loc_821B9CA8;
loc_821B9CA4:
	// fmuls f12,f0,f29
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f29.f64));
loc_821B9CA8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,5880(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5880);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f1,f12,f0,f13
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f13.f64));
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f29,-56(r1)
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f30,-48(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821B9B28) {
	__imp__sub_821B9B28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B9CC8) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f0,28(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32191
	ctx.r10.s64 = -2109669376;
	// lfs f12,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32021
	ctx.r7.s64 = -2098528256;
	// lfs f11,240(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 240);
	ctx.f11.f64 = double(temp.f32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// fsubs f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// lfs f9,232(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f9,f13
	ctx.f8.f64 = double(float(ctx.f9.f64 - ctx.f13.f64));
	// lfs f7,236(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 236);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f7,f12
	ctx.f6.f64 = double(float(ctx.f7.f64 - ctx.f12.f64));
	// lfs f0,7380(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 7380);
	ctx.f0.f64 = double(temp.f32);
	// lfs f31,5484(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5484);
	ctx.f31.f64 = double(temp.f32);
	// lwz r11,-18984(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + -18984);
	// lfs f30,12168(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12168);
	ctx.f30.f64 = double(temp.f32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// lfs f5,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f10,f10
	ctx.f4.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// fmadds f3,f8,f8,f4
	ctx.f3.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 + ctx.f4.f64));
	// fmadds f2,f6,f6,f3
	ctx.f2.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f3.f64));
	// fsubs f1,f2,f0
	ctx.f1.f64 = double(float(ctx.f2.f64 - ctx.f0.f64));
	// fneg f13,f2
	ctx.f13.u64 = ctx.f2.u64 ^ 0x8000000000000000;
	// fsel f12,f1,f0,f2
	ctx.f12.f64 = ctx.f1.f64 >= 0.0 ? ctx.f0.f64 : ctx.f2.f64;
	// fsel f11,f13,f31,f12
	ctx.f11.f64 = ctx.f13.f64 >= 0.0 ? ctx.f31.f64 : ctx.f12.f64;
	// fdivs f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 / ctx.f0.f64));
	// fsubs f9,f30,f10
	ctx.f9.f64 = double(float(ctx.f30.f64 - ctx.f10.f64));
	// fmuls f29,f9,f5
	ctx.f29.f64 = double(float(ctx.f9.f64 * ctx.f5.f64));
	// beq cr6,0x821b9d88
	if (ctx.cr6.eq) goto loc_821B9D88;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82235ec0
	ctx.lr = 0x821B9D78;
	sub_82235EC0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821b9d88
	if (!ctx.cr6.eq) goto loc_821B9D88;
	// fmr f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f31.f64;
	// b 0x821b9d8c
	goto loc_821B9D8C;
loc_821B9D88:
	// fmr f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f30.f64;
loc_821B9D8C:
	// lis r11,-32024
	ctx.r11.s64 = -2098724864;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r9,1
	ctx.r9.s64 = 1;
	// slw r8,r9,r10
	ctx.r8.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r10.u8 & 0x3F));
	// lwz r11,13396(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13396);
	// rlwinm r7,r8,0,13,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x7FFFC;
	// rlwinm r7,r7,0,24,13
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFFFFFC00FF;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// lfs f13,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f13,f13,f0,f29
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64 + ctx.f29.f64));
	// beq cr6,0x821b9dc0
	if (ctx.cr6.eq) goto loc_821B9DC0;
	// fmr f0,f30
	ctx.f0.f64 = ctx.f30.f64;
	// b 0x821b9dc4
	goto loc_821B9DC4;
loc_821B9DC0:
	// fmr f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f31.f64;
loc_821B9DC4:
	// lis r11,-32032
	ctx.r11.s64 = -2099249152;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,-6176(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6176);
	// lfs f12,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f29,f12,f0,f13
	ctx.f29.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f13.f64));
	// bl 0x821b9460
	ctx.lr = 0x821B9DE0;
	sub_821B9460(ctx, base);
	// lis r10,-32032
	ctx.r10.s64 = -2099249152;
	// lhz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// rlwinm r8,r9,0,25,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// lwz r11,-5928(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -5928);
	// lfs f11,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// lis r11,-32021
	ctx.r11.s64 = -2098528256;
	// fmadds f0,f1,f11,f29
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f11.f64 + ctx.f29.f64));
	// lwz r11,-14892(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14892);
	// lfs f13,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// beq cr6,0x821b9e14
	if (ctx.cr6.eq) goto loc_821B9E14;
	// fmadds f1,f13,f30,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f30.f64 + ctx.f0.f64));
	// b 0x821b9e18
	goto loc_821B9E18;
loc_821B9E14:
	// fmadds f1,f13,f31,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f31.f64 + ctx.f0.f64));
loc_821B9E18:
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

PPC_WEAK_FUNC(sub_821B9CC8) {
	__imp__sub_821B9CC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B9E3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821B9E3C) {
	__imp__sub_821B9E3C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B9E40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x821B9E48;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x822386a0
	ctx.lr = 0x821B9E60;
	sub_822386A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821b9f10
	if (ctx.cr6.eq) goto loc_821B9F10;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821aa3d0
	ctx.lr = 0x821B9E70;
	sub_821AA3D0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821b9f1c
	if (ctx.cr6.eq) goto loc_821B9F1C;
	// lwz r11,3236(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3236);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x821b9ea0
	if (!ctx.cr6.gt) goto loc_821B9EA0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821b8988
	ctx.lr = 0x821B9E94;
	sub_821B8988(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b9f10
	if (ctx.cr6.eq) goto loc_821B9F10;
loc_821B9EA0:
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821d8500
	ctx.lr = 0x821B9EB0;
	sub_821D8500(ctx, base);
	// lbz r11,3173(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3173);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821b9ed4
	if (!ctx.cr6.eq) goto loc_821B9ED4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821b8af8
	ctx.lr = 0x821B9EC8;
	sub_821B8AF8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821b9ee8
	if (!ctx.cr6.eq) goto loc_821B9EE8;
loc_821B9ED4:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82235e30
	ctx.lr = 0x821B9EE0;
	sub_82235E30(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821b9f10
	if (ctx.cr6.eq) goto loc_821B9F10;
loc_821B9EE8:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821b9250
	ctx.lr = 0x821B9EFC;
	sub_821B9250(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821b9f44
	if (ctx.cr6.eq) goto loc_821B9F44;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821b9f44
	if (!ctx.cr6.eq) goto loc_821B9F44;
loc_821B9F10:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_821B9F1C:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821b8f78
	ctx.lr = 0x821B9F2C;
	sub_821B8F78(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821b9f44
	if (ctx.cr6.eq) goto loc_821B9F44;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b9f48
	if (ctx.cr6.eq) goto loc_821B9F48;
loc_821B9F44:
	// li r3,1
	ctx.r3.s64 = 1;
loc_821B9F48:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821B9E40) {
	__imp__sub_821B9E40(ctx, base);
}

