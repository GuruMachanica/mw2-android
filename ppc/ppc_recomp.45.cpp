#include "ppc_recomp_shared.h"

PPC_FUNC_IMPL(__imp__sub_821EB1B8) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r3.u32);
	// lhz r10,134(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 134);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lhz r30,132(r1)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r1.u32 + 132);
	// bne cr6,0x821eb214
	if (!ctx.cr6.eq) goto loc_821EB214;
	// lis r11,-32052
	ctx.r11.s64 = -2100559872;
	// clrlwi r4,r30,16
	ctx.r4.u64 = ctx.r30.u32 & 0xFFFF;
	// addi r11,r11,26552
	ctx.r11.s64 = ctx.r11.s64 + 26552;
	// mulli r10,r4,624
	ctx.r10.s64 = ctx.r4.s64 * 624;
	// addi r9,r11,264
	ctx.r9.s64 = ctx.r11.s64 + 264;
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x821eb220
	if (!ctx.cr6.eq) goto loc_821EB220;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17480
	ctx.r3.s64 = ctx.r11.s64 + -17480;
	// bl 0x822e84f0
	ctx.lr = 0x821EB210;
	sub_822E84F0(ctx, base);
	// b 0x821eb21c
	goto loc_821EB21C;
loc_821EB214:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
loc_821EB21C:
	// bl 0x822ad548
	ctx.lr = 0x821EB220;
	sub_822AD548(ctx, base);
loc_821EB220:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f31.f64 = double(temp.f32);
	// bl 0x822acb68
	ctx.lr = 0x821EB22C;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x821eb258
	if (ctx.cr6.eq) goto loc_821EB258;
	// cmplwi cr6,r3,2
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// beq cr6,0x821eb24c
	if (ctx.cr6.eq) goto loc_821EB24C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-15464
	ctx.r3.s64 = ctx.r11.s64 + -15464;
	// bl 0x822ad350
	ctx.lr = 0x821EB248;
	sub_822AD350(ctx, base);
	// b 0x821eb2d4
	goto loc_821EB2D4;
loc_821EB24C:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822b1fb0
	ctx.lr = 0x821EB254;
	sub_822B1FB0(ctx, base);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
loc_821EB258:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b20b8
	ctx.lr = 0x821EB260;
	sub_822B20B8(ctx, base);
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// li r31,2
	ctx.r31.s64 = 2;
	// addi r11,r11,-25976
	ctx.r11.s64 = ctx.r11.s64 + -25976;
	// lhz r10,168(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 168);
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x821eb2ac
	if (ctx.cr6.eq) goto loc_821EB2AC;
	// lhz r10,170(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 170);
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x821eb28c
	if (!ctx.cr6.eq) goto loc_821EB28C;
	// li r31,3
	ctx.r31.s64 = 3;
	// b 0x821eb2ac
	goto loc_821EB2AC;
loc_821EB28C:
	// lhz r11,172(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 172);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x821eb2a0
	if (!ctx.cr6.eq) goto loc_821EB2A0;
	// li r31,4
	ctx.r31.s64 = 4;
	// b 0x821eb2ac
	goto loc_821EB2AC;
loc_821EB2A0:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-15824
	ctx.r3.s64 = ctx.r11.s64 + -15824;
	// bl 0x822ad350
	ctx.lr = 0x821EB2AC;
	sub_822AD350(ctx, base);
loc_821EB2AC:
	// stfd f31,32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f31.u64);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// addi r3,r11,-15492
	ctx.r3.s64 = ctx.r11.s64 + -15492;
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x822e84f0
	ctx.lr = 0x821EB2C8;
	sub_822E84F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// clrlwi r3,r30,16
	ctx.r3.u64 = ctx.r30.u32 & 0xFFFF;
	// bl 0x8233cae8
	ctx.lr = 0x821EB2D4;
	sub_8233CAE8(ctx, base);
loc_821EB2D4:
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

PPC_WEAK_FUNC(sub_821EB1B8) {
	__imp__sub_821EB1B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821EB2F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x821EB2F8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r3.u32);
	// lhz r10,150(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 150);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lhz r28,148(r1)
	ctx.r28.u64 = PPC_LOAD_U16(ctx.r1.u32 + 148);
	// bne cr6,0x821eb344
	if (!ctx.cr6.eq) goto loc_821EB344;
	// clrlwi r4,r28,16
	ctx.r4.u64 = ctx.r28.u32 & 0xFFFF;
	// lis r11,-32052
	ctx.r11.s64 = -2100559872;
	// mulli r10,r4,624
	ctx.r10.s64 = ctx.r4.s64 * 624;
	// addi r11,r11,26552
	ctx.r11.s64 = ctx.r11.s64 + 26552;
	// add r29,r10,r11
	ctx.r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,264(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 264);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821eb354
	if (!ctx.cr6.eq) goto loc_821EB354;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17480
	ctx.r3.s64 = ctx.r11.s64 + -17480;
	// bl 0x822e84f0
	ctx.lr = 0x821EB33C;
	sub_822E84F0(ctx, base);
	// bl 0x822ad548
	ctx.lr = 0x821EB340;
	sub_822AD548(ctx, base);
	// b 0x821eb354
	goto loc_821EB354;
loc_821EB344:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x821EB350;
	sub_822AD548(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
loc_821EB354:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b2288
	ctx.lr = 0x821EB35C;
	sub_822B2288(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822dd930
	ctx.lr = 0x821EB364;
	sub_822DD930(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821eb388
	if (!ctx.cr6.eq) goto loc_821EB388;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,-15152
	ctx.r3.s64 = ctx.r11.s64 + -15152;
	// bl 0x822e84f0
	ctx.lr = 0x821EB37C;
	sub_822E84F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822ad4e0
	ctx.lr = 0x821EB388;
	sub_822AD4E0(ctx, base);
loc_821EB388:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222e7f0
	ctx.lr = 0x821EB390;
	sub_8222E7F0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x822acb68
	ctx.lr = 0x821EB39C;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x821eb418
	if (ctx.cr6.eq) goto loc_821EB418;
	// cmplwi cr6,r3,2
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// beq cr6,0x821eb3d4
	if (ctx.cr6.eq) goto loc_821EB3D4;
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// beq cr6,0x821eb3c8
	if (ctx.cr6.eq) goto loc_821EB3C8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-15164
	ctx.r3.s64 = ctx.r11.s64 + -15164;
	// bl 0x822ad350
	ctx.lr = 0x821EB3C0;
	sub_822AD350(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_821EB3C8:
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x822b1c50
	ctx.lr = 0x821EB3D0;
	sub_822B1C50(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_821EB3D4:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822b20b8
	ctx.lr = 0x821EB3DC;
	sub_822B20B8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8222f9f0
	ctx.lr = 0x821EB3F0;
	sub_8222F9F0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// clrlwi r4,r31,16
	ctx.r4.u64 = ctx.r31.u32 & 0xFFFF;
	// lhz r5,126(r29)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r29.u32 + 126);
	// addi r3,r11,-15176
	ctx.r3.s64 = ctx.r11.s64 + -15176;
	// bl 0x822e84f0
	ctx.lr = 0x821EB404;
	sub_822E84F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// clrlwi r3,r28,16
	ctx.r3.u64 = ctx.r28.u32 & 0xFFFF;
	// bl 0x8233cae8
	ctx.lr = 0x821EB410;
	sub_8233CAE8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_821EB418:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// clrlwi r4,r31,16
	ctx.r4.u64 = ctx.r31.u32 & 0xFFFF;
	// addi r3,r11,-15184
	ctx.r3.s64 = ctx.r11.s64 + -15184;
	// bl 0x822e84f0
	ctx.lr = 0x821EB428;
	sub_822E84F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// clrlwi r3,r28,16
	ctx.r3.u64 = ctx.r28.u32 & 0xFFFF;
	// bl 0x8233cae8
	ctx.lr = 0x821EB434;
	sub_8233CAE8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821EB2F0) {
	__imp__sub_821EB2F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821EB43C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821EB43C) {
	__imp__sub_821EB43C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821EB440) {
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
	// stw r3,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r3.u32);
	// lhz r10,134(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 134);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lhz r30,132(r1)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r1.u32 + 132);
	// bne cr6,0x821eb498
	if (!ctx.cr6.eq) goto loc_821EB498;
	// lis r11,-32052
	ctx.r11.s64 = -2100559872;
	// clrlwi r4,r30,16
	ctx.r4.u64 = ctx.r30.u32 & 0xFFFF;
	// addi r11,r11,26552
	ctx.r11.s64 = ctx.r11.s64 + 26552;
	// mulli r10,r4,624
	ctx.r10.s64 = ctx.r4.s64 * 624;
	// addi r9,r11,264
	ctx.r9.s64 = ctx.r11.s64 + 264;
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x821eb4a4
	if (!ctx.cr6.eq) goto loc_821EB4A4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17480
	ctx.r3.s64 = ctx.r11.s64 + -17480;
	// bl 0x822e84f0
	ctx.lr = 0x821EB494;
	sub_822E84F0(ctx, base);
	// b 0x821eb4a0
	goto loc_821EB4A0;
loc_821EB498:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
loc_821EB4A0:
	// bl 0x822ad548
	ctx.lr = 0x821EB4A4;
	sub_822AD548(ctx, base);
loc_821EB4A4:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b2288
	ctx.lr = 0x821EB4AC;
	sub_822B2288(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822dd930
	ctx.lr = 0x821EB4B4;
	sub_822DD930(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821eb4d8
	if (!ctx.cr6.eq) goto loc_821EB4D8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,-15152
	ctx.r3.s64 = ctx.r11.s64 + -15152;
	// bl 0x822e84f0
	ctx.lr = 0x821EB4CC;
	sub_822E84F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822ad4e0
	ctx.lr = 0x821EB4D8;
	sub_822AD4E0(ctx, base);
loc_821EB4D8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222e7f0
	ctx.lr = 0x821EB4E0;
	sub_8222E7F0(ctx, base);
	// clrlwi r31,r3,16
	ctx.r31.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x821eb4f8
	if (!ctx.cr6.eq) goto loc_821EB4F8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-15112
	ctx.r3.s64 = ctx.r11.s64 + -15112;
	// bl 0x822ad350
	ctx.lr = 0x821EB4F8;
	sub_822AD350(ctx, base);
loc_821EB4F8:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,-15124
	ctx.r3.s64 = ctx.r11.s64 + -15124;
	// bl 0x822e84f0
	ctx.lr = 0x821EB508;
	sub_822E84F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// clrlwi r3,r30,16
	ctx.r3.u64 = ctx.r30.u32 & 0xFFFF;
	// bl 0x8233cae8
	ctx.lr = 0x821EB514;
	sub_8233CAE8(ctx, base);
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

PPC_WEAK_FUNC(sub_821EB440) {
	__imp__sub_821EB440(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821EB52C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821EB52C) {
	__imp__sub_821EB52C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821EB530) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x821EB538;
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
	// stw r3,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r3.u32);
	// lhz r10,166(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 166);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821eb588
	if (!ctx.cr6.eq) goto loc_821EB588;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// lhz r4,164(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 164);
	// addi r11,r10,26552
	ctx.r11.s64 = ctx.r10.s64 + 26552;
	// mulli r10,r4,624
	ctx.r10.s64 = ctx.r4.s64 * 624;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r9,264(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821eb598
	if (!ctx.cr6.eq) goto loc_821EB598;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17480
	ctx.r3.s64 = ctx.r11.s64 + -17480;
	// bl 0x822e84f0
	ctx.lr = 0x821EB580;
	sub_822E84F0(ctx, base);
	// bl 0x822ad548
	ctx.lr = 0x821EB584;
	sub_822AD548(ctx, base);
	// b 0x821eb598
	goto loc_821EB598;
loc_821EB588:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x821EB594;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_821EB598:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b2288
	ctx.lr = 0x821EB5A0;
	sub_822B2288(ctx, base);
	// bl 0x822171f8
	ctx.lr = 0x821EB5A4;
	sub_822171F8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822b1c50
	ctx.lr = 0x821EB5B0;
	sub_822B1C50(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x822acb68
	ctx.lr = 0x821EB5B8;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,2
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// ble cr6,0x821eb63c
	if (!ctx.cr6.gt) goto loc_821EB63C;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x822b1fb0
	ctx.lr = 0x821EB5C8;
	sub_822B1FB0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// lfs f30,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f30.f64 = double(temp.f32);
	// fcmpu cr6,f1,f30
	ctx.cr6.compare(ctx.f1.f64, ctx.f30.f64);
	// bgt cr6,0x821eb5ec
	if (ctx.cr6.gt) goto loc_821EB5EC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r4,r11,-15092
	ctx.r4.s64 = ctx.r11.s64 + -15092;
	// bl 0x822ad4e0
	ctx.lr = 0x821EB5EC;
	sub_822AD4E0(ctx, base);
loc_821EB5EC:
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// addi r10,r11,9624
	ctx.r10.s64 = ctx.r11.s64 + 9624;
	// lfs f0,16336(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16336);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// ble cr6,0x821eb608
	if (!ctx.cr6.gt) goto loc_821EB608;
	// fdivs f0,f31,f0
	ctx.f0.f64 = double(float(ctx.f31.f64 / ctx.f0.f64));
	// b 0x821eb614
	goto loc_821EB614;
loc_821EB608:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,5804(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5804);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f31,f0
	ctx.f0.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
loc_821EB614:
	// fcmpu cr6,f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bge cr6,0x821eb624
	if (!ctx.cr6.lt) goto loc_821EB624;
	// fmr f0,f30
	ctx.f0.f64 = ctx.f30.f64;
	// b 0x821eb644
	goto loc_821EB644;
loc_821EB624:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,12168(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x821eb644
	if (!ctx.cr6.gt) goto loc_821EB644;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// b 0x821eb644
	goto loc_821EB644;
loc_821EB63C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,8116(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8116);
	ctx.f0.f64 = double(temp.f32);
loc_821EB644:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,-21688(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -21688);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,2416(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2416);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f1,f0,f13,f12
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f13.f64 + ctx.f12.f64));
	// bl 0x823dde20
	ctx.lr = 0x821EB65C;
	sub_823DDE20(ctx, base);
	// lwz r9,264(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// clrlwi r8,r30,30
	ctx.r8.u64 = ctx.r30.u32 & 0x3;
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// rlwinm r7,r29,7,24,24
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 7) & 0x80;
	// stw r8,436(r9)
	PPC_STORE_U32(ctx.r9.u32 + 436, ctx.r8.u32);
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r5,r6,2,25,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0x7C;
	// lwz r4,436(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 436);
	// or r3,r5,r4
	ctx.r3.u64 = ctx.r5.u64 | ctx.r4.u64;
	// stw r3,436(r11)
	PPC_STORE_U32(ctx.r11.u32 + 436, ctx.r3.u32);
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// lwz r10,436(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 436);
	// or r9,r7,r10
	ctx.r9.u64 = ctx.r7.u64 | ctx.r10.u64;
	// stw r9,436(r11)
	PPC_STORE_U32(ctx.r11.u32 + 436, ctx.r9.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f30,-48(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821EB530) {
	__imp__sub_821EB530(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821EB6B0) {
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
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// lhz r10,118(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 118);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821eb704
	if (!ctx.cr6.eq) goto loc_821EB704;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// lhz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 116);
	// addi r11,r10,26552
	ctx.r11.s64 = ctx.r10.s64 + 26552;
	// mulli r10,r4,624
	ctx.r10.s64 = ctx.r4.s64 * 624;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r9,264(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821eb714
	if (!ctx.cr6.eq) goto loc_821EB714;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17480
	ctx.r3.s64 = ctx.r11.s64 + -17480;
	// bl 0x822e84f0
	ctx.lr = 0x821EB6FC;
	sub_822E84F0(ctx, base);
	// bl 0x822ad548
	ctx.lr = 0x821EB700;
	sub_822AD548(ctx, base);
	// b 0x821eb714
	goto loc_821EB714;
loc_821EB704:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x821EB710;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_821EB714:
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,436(r11)
	PPC_STORE_U32(ctx.r11.u32 + 436, ctx.r10.u32);
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

PPC_WEAK_FUNC(sub_821EB6B0) {
	__imp__sub_821EB6B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821EB734) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821EB734) {
	__imp__sub_821EB734(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821EB738) {
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
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// lhz r10,118(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 118);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821eb78c
	if (!ctx.cr6.eq) goto loc_821EB78C;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// lhz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 116);
	// addi r11,r10,26552
	ctx.r11.s64 = ctx.r10.s64 + 26552;
	// mulli r10,r4,624
	ctx.r10.s64 = ctx.r4.s64 * 624;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r9,264(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821eb79c
	if (!ctx.cr6.eq) goto loc_821EB79C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17480
	ctx.r3.s64 = ctx.r11.s64 + -17480;
	// bl 0x822e84f0
	ctx.lr = 0x821EB784;
	sub_822E84F0(ctx, base);
	// bl 0x822ad548
	ctx.lr = 0x821EB788;
	sub_822AD548(ctx, base);
	// b 0x821eb79c
	goto loc_821EB79C;
loc_821EB78C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x821EB798;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_821EB79C:
	// bl 0x822acb68
	ctx.lr = 0x821EB7A0;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x821eb7c8
	if (ctx.cr6.eq) goto loc_821EB7C8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-15036
	ctx.r3.s64 = ctx.r11.s64 + -15036;
	// bl 0x822ad350
	ctx.lr = 0x821EB7B4;
	sub_822AD350(ctx, base);
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
loc_821EB7C8:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b1c50
	ctx.lr = 0x821EB7D0;
	sub_822B1C50(ctx, base);
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lwz r10,700(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 700);
	// beq cr6,0x821eb7fc
	if (ctx.cr6.eq) goto loc_821EB7FC;
	// rlwinm r9,r10,0,27,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// stw r9,700(r11)
	PPC_STORE_U32(ctx.r11.u32 + 700, ctx.r9.u32);
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
loc_821EB7FC:
	// ori r9,r10,32
	ctx.r9.u64 = ctx.r10.u64 | 32;
	// stw r9,700(r11)
	PPC_STORE_U32(ctx.r11.u32 + 700, ctx.r9.u32);
	// lwz r3,264(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// bl 0x8232b9f0
	ctx.lr = 0x821EB80C;
	sub_8232B9F0(ctx, base);
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

PPC_WEAK_FUNC(sub_821EB738) {
	__imp__sub_821EB738(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821EB820) {
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
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// lhz r10,118(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 118);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821eb874
	if (!ctx.cr6.eq) goto loc_821EB874;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// lhz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 116);
	// addi r11,r10,26552
	ctx.r11.s64 = ctx.r10.s64 + 26552;
	// mulli r10,r4,624
	ctx.r10.s64 = ctx.r4.s64 * 624;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r9,264(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821eb884
	if (!ctx.cr6.eq) goto loc_821EB884;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17480
	ctx.r3.s64 = ctx.r11.s64 + -17480;
	// bl 0x822e84f0
	ctx.lr = 0x821EB86C;
	sub_822E84F0(ctx, base);
	// bl 0x822ad548
	ctx.lr = 0x821EB870;
	sub_822AD548(ctx, base);
	// b 0x821eb884
	goto loc_821EB884;
loc_821EB874:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x821EB880;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_821EB884:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b1c50
	ctx.lr = 0x821EB88C;
	sub_822B1C50(ctx, base);
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r9,r10,0,14,12
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFBFFFF;
	// bne cr6,0x821eb8a4
	if (!ctx.cr6.eq) goto loc_821EB8A4;
	// oris r9,r10,4
	ctx.r9.u64 = ctx.r10.u64 | 262144;
loc_821EB8A4:
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
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

PPC_WEAK_FUNC(sub_821EB820) {
	__imp__sub_821EB820(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821EB8BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821EB8BC) {
	__imp__sub_821EB8BC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821EB8C0) {
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
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// lhz r10,118(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 118);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821eb914
	if (!ctx.cr6.eq) goto loc_821EB914;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// lhz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 116);
	// addi r11,r10,26552
	ctx.r11.s64 = ctx.r10.s64 + 26552;
	// mulli r10,r4,624
	ctx.r10.s64 = ctx.r4.s64 * 624;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r9,264(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821eb924
	if (!ctx.cr6.eq) goto loc_821EB924;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17480
	ctx.r3.s64 = ctx.r11.s64 + -17480;
	// bl 0x822e84f0
	ctx.lr = 0x821EB90C;
	sub_822E84F0(ctx, base);
	// bl 0x822ad548
	ctx.lr = 0x821EB910;
	sub_822AD548(ctx, base);
	// b 0x821eb924
	goto loc_821EB924;
loc_821EB914:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x821EB920;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_821EB924:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b1c50
	ctx.lr = 0x821EB92C;
	sub_822B1C50(ctx, base);
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r9,r10,0,15,13
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFDFFFF;
	// bne cr6,0x821eb944
	if (!ctx.cr6.eq) goto loc_821EB944;
	// oris r9,r10,2
	ctx.r9.u64 = ctx.r10.u64 | 131072;
loc_821EB944:
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
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

PPC_WEAK_FUNC(sub_821EB8C0) {
	__imp__sub_821EB8C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821EB95C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821EB95C) {
	__imp__sub_821EB95C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821EB960) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x821EB968;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r3.u32);
	// lhz r10,150(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 150);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821eb9b0
	if (!ctx.cr6.eq) goto loc_821EB9B0;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// lhz r4,148(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 148);
	// addi r11,r10,26552
	ctx.r11.s64 = ctx.r10.s64 + 26552;
	// mulli r10,r4,624
	ctx.r10.s64 = ctx.r4.s64 * 624;
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r9,264(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 264);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821eb9c0
	if (!ctx.cr6.eq) goto loc_821EB9C0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17480
	ctx.r3.s64 = ctx.r11.s64 + -17480;
	// bl 0x822e84f0
	ctx.lr = 0x821EB9A8;
	sub_822E84F0(ctx, base);
	// bl 0x822ad548
	ctx.lr = 0x821EB9AC;
	sub_822AD548(ctx, base);
	// b 0x821eb9c0
	goto loc_821EB9C0;
loc_821EB9B0:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x821EB9BC;
	sub_822AD548(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
loc_821EB9C0:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b1c50
	ctx.lr = 0x821EB9C8;
	sub_822B1C50(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// blt cr6,0x821ebaf4
	if (ctx.cr6.lt) goto loc_821EBAF4;
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// bgt cr6,0x821ebaf4
	if (ctx.cr6.gt) goto loc_821EBAF4;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r31,r4,-1
	ctx.r31.s64 = ctx.r4.s64 + -1;
	// bl 0x822b2288
	ctx.lr = 0x821EB9E8;
	sub_822B2288(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r4,r11,12584
	ctx.r4.s64 = ctx.r11.s64 + 12584;
	// bl 0x822e8058
	ctx.lr = 0x821EB9F8;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821eba48
	if (!ctx.cr6.eq) goto loc_821EBA48;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x822b2288
	ctx.lr = 0x821EBA08;
	sub_822B2288(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82333200
	ctx.lr = 0x821EBA14;
	sub_82333200(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x8220f168
	ctx.lr = 0x821EBA20;
	sub_8220F168(ctx, base);
	// addi r11,r31,268
	ctx.r11.s64 = ctx.r31.s64 + 268;
	// addi r10,r31,272
	ctx.r10.s64 = ctx.r31.s64 + 272;
	// lwz r6,264(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 264);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// li r7,1
	ctx.r7.s64 = 1;
	// stwx r7,r9,r6
	PPC_STORE_U32(ctx.r9.u32 + ctx.r6.u32, ctx.r7.u32);
	// lwz r5,264(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 264);
	// stwx r28,r8,r5
	PPC_STORE_U32(ctx.r8.u32 + ctx.r5.u32, ctx.r28.u32);
	// b 0x821ebab4
	goto loc_821EBAB4;
loc_821EBA48:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r11,-14792
	ctx.r4.s64 = ctx.r11.s64 + -14792;
	// bl 0x822e8058
	ctx.lr = 0x821EBA58;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821eba68
	if (!ctx.cr6.eq) goto loc_821EBA68;
	// li r9,2
	ctx.r9.s64 = 2;
	// b 0x821ebaa4
	goto loc_821EBAA4;
loc_821EBA68:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r11,-14804
	ctx.r4.s64 = ctx.r11.s64 + -14804;
	// bl 0x822e8058
	ctx.lr = 0x821EBA78;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821eba88
	if (!ctx.cr6.eq) goto loc_821EBA88;
	// li r9,3
	ctx.r9.s64 = 3;
	// b 0x821ebaa4
	goto loc_821EBAA4;
loc_821EBA88:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r11,-28736
	ctx.r4.s64 = ctx.r11.s64 + -28736;
	// bl 0x822e8058
	ctx.lr = 0x821EBA98;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821ebae0
	if (!ctx.cr6.eq) goto loc_821EBAE0;
	// li r9,0
	ctx.r9.s64 = 0;
loc_821EBAA4:
	// addi r11,r31,268
	ctx.r11.s64 = ctx.r31.s64 + 268;
	// lwz r10,264(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 264);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r8,r10
	PPC_STORE_U32(ctx.r8.u32 + ctx.r10.u32, ctx.r9.u32);
loc_821EBAB4:
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// bne cr6,0x821ebb08
	if (!ctx.cr6.eq) goto loc_821EBB08;
	// lwz r11,264(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 264);
	// lwz r10,1080(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1080);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x821ebb08
	if (ctx.cr6.eq) goto loc_821EBB08;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-14880
	ctx.r3.s64 = ctx.r11.s64 + -14880;
	// bl 0x822ad350
	ctx.lr = 0x821EBAD8;
	sub_822AD350(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_821EBAE0:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-14952
	ctx.r3.s64 = ctx.r11.s64 + -14952;
	// bl 0x822ad350
	ctx.lr = 0x821EBAEC;
	sub_822AD350(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_821EBAF4:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r3,r11,-14996
	ctx.r3.s64 = ctx.r11.s64 + -14996;
	// bl 0x822e84f0
	ctx.lr = 0x821EBB04;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x821EBB08;
	sub_822AD350(ctx, base);
loc_821EBB08:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821EB960) {
	__imp__sub_821EB960(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821EBB10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x821EBB18;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r3.u32);
	// lhz r10,150(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 150);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821ebb60
	if (!ctx.cr6.eq) goto loc_821EBB60;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// lhz r4,148(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 148);
	// addi r11,r10,26552
	ctx.r11.s64 = ctx.r10.s64 + 26552;
	// mulli r10,r4,624
	ctx.r10.s64 = ctx.r4.s64 * 624;
	// add r29,r10,r11
	ctx.r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r9,264(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 264);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821ebb70
	if (!ctx.cr6.eq) goto loc_821EBB70;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17480
	ctx.r3.s64 = ctx.r11.s64 + -17480;
	// bl 0x822e84f0
	ctx.lr = 0x821EBB58;
	sub_822E84F0(ctx, base);
	// bl 0x822ad548
	ctx.lr = 0x821EBB5C;
	sub_822AD548(ctx, base);
	// b 0x821ebb70
	goto loc_821EBB70;
loc_821EBB60:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x821EBB6C;
	sub_822AD548(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
loc_821EBB70:
	// bl 0x82332c40
	ctx.lr = 0x821EBB74;
	sub_82332C40(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x822ad190
	ctx.lr = 0x821EBB7C;
	sub_822AD190(ctx, base);
	// li r31,1
	ctx.r31.s64 = 1;
	// cmplwi cr6,r28,1
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 1, ctx.xer);
	// ble cr6,0x821ebc34
	if (!ctx.cr6.gt) goto loc_821EBC34;
	// lis r30,-32032
	ctx.r30.s64 = -2099249152;
	// lwz r8,-5944(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5944);
loc_821EBB90:
	// lwz r9,264(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 264);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x821ebba8
	if (ctx.cr6.eq) goto loc_821EBBA8;
	// lbz r11,12(r8)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821ebc14
	if (!ctx.cr6.eq) goto loc_821EBC14;
loc_821EBBA8:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821ebc28
	if (ctx.cr6.eq) goto loc_821EBC28;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x821ebbcc
	if (ctx.cr6.eq) goto loc_821EBBCC;
	// lbz r11,12(r8)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821ebbcc
	if (ctx.cr6.eq) goto loc_821EBBCC;
	// li r11,14
	ctx.r11.s64 = 14;
	// b 0x821ebbfc
	goto loc_821EBBFC;
loc_821EBBCC:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r9,544
	ctx.r10.s64 = ctx.r9.s64 + 544;
loc_821EBBD4:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r7,r31
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x821ebbf4
	if (ctx.cr6.eq) goto loc_821EBBF4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpwi cr6,r11,15
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 15, ctx.xer);
	// blt cr6,0x821ebbd4
	if (ctx.cr6.lt) goto loc_821EBBD4;
	// b 0x821ebc28
	goto loc_821EBC28;
loc_821EBBF4:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x821ebc28
	if (ctx.cr6.lt) goto loc_821EBC28;
loc_821EBBFC:
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r11,r11,604
	ctx.r11.s64 = ctx.r11.s64 + 604;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821ebc28
	if (ctx.cr6.eq) goto loc_821EBC28;
loc_821EBC14:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332b28
	ctx.lr = 0x821EBC1C;
	sub_82332B28(ctx, base);
	// bl 0x822aced0
	ctx.lr = 0x821EBC20;
	sub_822ACED0(ctx, base);
	// bl 0x822ad208
	ctx.lr = 0x821EBC24;
	sub_822AD208(ctx, base);
	// lwz r8,-5944(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5944);
loc_821EBC28:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x821ebb90
	if (ctx.cr6.lt) goto loc_821EBB90;
loc_821EBC34:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821EBB10) {
	__imp__sub_821EBB10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821EBC3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821EBC3C) {
	__imp__sub_821EBC3C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821EBC40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x821EBC48;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r3.u32);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lhz r10,150(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 150);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821ebc94
	if (!ctx.cr6.eq) goto loc_821EBC94;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// lhz r4,148(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 148);
	// addi r11,r10,26552
	ctx.r11.s64 = ctx.r10.s64 + 26552;
	// mulli r10,r4,624
	ctx.r10.s64 = ctx.r4.s64 * 624;
	// add r29,r10,r11
	ctx.r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r9,264(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 264);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821ebca4
	if (!ctx.cr6.eq) goto loc_821EBCA4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17480
	ctx.r3.s64 = ctx.r11.s64 + -17480;
	// bl 0x822e84f0
	ctx.lr = 0x821EBC8C;
	sub_822E84F0(ctx, base);
	// bl 0x822ad548
	ctx.lr = 0x821EBC90;
	sub_822AD548(ctx, base);
	// b 0x821ebca4
	goto loc_821EBCA4;
loc_821EBC94:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x821EBCA0;
	sub_822AD548(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
loc_821EBCA4:
	// bl 0x82332c40
	ctx.lr = 0x821EBCA8;
	sub_82332C40(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x822ad190
	ctx.lr = 0x821EBCB0;
	sub_822AD190(ctx, base);
	// li r31,1
	ctx.r31.s64 = 1;
	// cmplwi cr6,r28,1
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 1, ctx.xer);
	// ble cr6,0x821ebd7c
	if (!ctx.cr6.gt) goto loc_821EBD7C;
	// lis r30,-32032
	ctx.r30.s64 = -2099249152;
	// lwz r8,-5944(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5944);
loc_821EBCC4:
	// lwz r9,264(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 264);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x821ebcdc
	if (ctx.cr6.eq) goto loc_821EBCDC;
	// lbz r11,12(r8)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821ebd48
	if (!ctx.cr6.eq) goto loc_821EBD48;
loc_821EBCDC:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821ebd70
	if (ctx.cr6.eq) goto loc_821EBD70;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x821ebd00
	if (ctx.cr6.eq) goto loc_821EBD00;
	// lbz r11,12(r8)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821ebd00
	if (ctx.cr6.eq) goto loc_821EBD00;
	// li r11,14
	ctx.r11.s64 = 14;
	// b 0x821ebd30
	goto loc_821EBD30;
loc_821EBD00:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r9,544
	ctx.r10.s64 = ctx.r9.s64 + 544;
loc_821EBD08:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r7,r31
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x821ebd28
	if (ctx.cr6.eq) goto loc_821EBD28;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpwi cr6,r11,15
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 15, ctx.xer);
	// blt cr6,0x821ebd08
	if (ctx.cr6.lt) goto loc_821EBD08;
	// b 0x821ebd70
	goto loc_821EBD70;
loc_821EBD28:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x821ebd70
	if (ctx.cr6.lt) goto loc_821EBD70;
loc_821EBD30:
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r11,r11,604
	ctx.r11.s64 = ctx.r11.s64 + 604;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821ebd70
	if (ctx.cr6.eq) goto loc_821EBD70;
loc_821EBD48:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332af8
	ctx.lr = 0x821EBD50;
	sub_82332AF8(ctx, base);
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// cmpw cr6,r11,r27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r27.s32, ctx.xer);
	// bne cr6,0x821ebd6c
	if (!ctx.cr6.eq) goto loc_821EBD6C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332b28
	ctx.lr = 0x821EBD64;
	sub_82332B28(ctx, base);
	// bl 0x822aced0
	ctx.lr = 0x821EBD68;
	sub_822ACED0(ctx, base);
	// bl 0x822ad208
	ctx.lr = 0x821EBD6C;
	sub_822AD208(ctx, base);
loc_821EBD6C:
	// lwz r8,-5944(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5944);
loc_821EBD70:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x821ebcc4
	if (ctx.cr6.lt) goto loc_821EBCC4;
loc_821EBD7C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821EBC40) {
	__imp__sub_821EBC40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821EBD84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821EBD84) {
	__imp__sub_821EBD84(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821EBD88) {
	PPC_FUNC_PROLOGUE();
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x821ebc40
	sub_821EBC40(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821EBD88) {
	__imp__sub_821EBD88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821EBD90) {
	PPC_FUNC_PROLOGUE();
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x821ebc40
	sub_821EBC40(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821EBD90) {
	__imp__sub_821EBD90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821EBD98) {
	PPC_FUNC_PROLOGUE();
	// li r4,2
	ctx.r4.s64 = 2;
	// b 0x821ebc40
	sub_821EBC40(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821EBD98) {
	__imp__sub_821EBD98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821EBDA0) {
	PPC_FUNC_PROLOGUE();
	// li r4,4
	ctx.r4.s64 = 4;
	// b 0x821ebc40
	sub_821EBC40(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821EBDA0) {
	__imp__sub_821EBDA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821EBDA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x821EBDB0;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r3.u32);
	// lhz r10,166(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 166);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821ebdf8
	if (!ctx.cr6.eq) goto loc_821EBDF8;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// lhz r4,164(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 164);
	// addi r11,r10,26552
	ctx.r11.s64 = ctx.r10.s64 + 26552;
	// mulli r10,r4,624
	ctx.r10.s64 = ctx.r4.s64 * 624;
	// add r25,r10,r11
	ctx.r25.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r9,264(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 264);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821ebe08
	if (!ctx.cr6.eq) goto loc_821EBE08;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17480
	ctx.r3.s64 = ctx.r11.s64 + -17480;
	// bl 0x822e84f0
	ctx.lr = 0x821EBDF0;
	sub_822E84F0(ctx, base);
	// bl 0x822ad548
	ctx.lr = 0x821EBDF4;
	sub_822AD548(ctx, base);
	// b 0x821ebe08
	goto loc_821EBE08;
loc_821EBDF8:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x821EBE04;
	sub_822AD548(ctx, base);
	// li r25,0
	ctx.r25.s64 = 0;
loc_821EBE08:
	// bl 0x822acb68
	ctx.lr = 0x821EBE0C;
	sub_822ACB68(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821ebe24
	if (!ctx.cr6.eq) goto loc_821EBE24;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-14744
	ctx.r3.s64 = ctx.r11.s64 + -14744;
	// bl 0x822ad350
	ctx.lr = 0x821EBE24;
	sub_822AD350(ctx, base);
loc_821EBE24:
	// li r27,0
	ctx.r27.s64 = 0;
	// li r26,1
	ctx.r26.s64 = 1;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x821ebeb0
	if (ctx.cr6.eq) goto loc_821EBEB0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32191
	ctx.r10.s64 = -2109669376;
	// addi r29,r11,-14784
	ctx.r29.s64 = ctx.r11.s64 + -14784;
	// addi r31,r10,7688
	ctx.r31.s64 = ctx.r10.s64 + 7688;
loc_821EBE48:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822b20b8
	ctx.lr = 0x821EBE50;
	sub_822B20B8(ctx, base);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// li r10,0
	ctx.r10.s64 = 0;
loc_821EBE58:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lhz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r9.u32 + 0);
	// cmplw cr6,r3,r8
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x821ebe80
	if (ctx.cr6.eq) goto loc_821EBE80;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r9,r31,24
	ctx.r9.s64 = ctx.r31.s64 + 24;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x821ebe58
	if (ctx.cr6.lt) goto loc_821EBE58;
	// b 0x821ebe88
	goto loc_821EBE88;
loc_821EBE80:
	// slw r11,r26,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r26.u32 << (ctx.r10.u8 & 0x3F));
	// or r27,r11,r27
	ctx.r27.u64 = ctx.r11.u64 | ctx.r27.u64;
loc_821EBE88:
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// bne cr6,0x821ebea4
	if (!ctx.cr6.eq) goto loc_821EBEA4;
	// bl 0x822a13a0
	ctx.lr = 0x821EBE94;
	sub_822A13A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822e84f0
	ctx.lr = 0x821EBEA0;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x821EBEA4;
	sub_822AD350(ctx, base);
loc_821EBEA4:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x821ebe48
	if (ctx.cr6.lt) goto loc_821EBE48;
loc_821EBEB0:
	// bl 0x82332c40
	ctx.lr = 0x821EBEB4;
	sub_82332C40(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x822ad190
	ctx.lr = 0x821EBEBC;
	sub_822AD190(ctx, base);
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// cmplwi cr6,r29,1
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 1, ctx.xer);
	// ble cr6,0x821ebf90
	if (!ctx.cr6.gt) goto loc_821EBF90;
	// lis r30,-32032
	ctx.r30.s64 = -2099249152;
	// lwz r8,-5944(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5944);
loc_821EBED0:
	// lwz r9,264(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 264);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x821ebee8
	if (ctx.cr6.eq) goto loc_821EBEE8;
	// lbz r11,12(r8)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821ebf54
	if (!ctx.cr6.eq) goto loc_821EBF54;
loc_821EBEE8:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821ebf84
	if (ctx.cr6.eq) goto loc_821EBF84;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x821ebf0c
	if (ctx.cr6.eq) goto loc_821EBF0C;
	// lbz r11,12(r8)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821ebf0c
	if (ctx.cr6.eq) goto loc_821EBF0C;
	// li r11,14
	ctx.r11.s64 = 14;
	// b 0x821ebf3c
	goto loc_821EBF3C;
loc_821EBF0C:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r9,544
	ctx.r10.s64 = ctx.r9.s64 + 544;
loc_821EBF14:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r7,r31
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x821ebf34
	if (ctx.cr6.eq) goto loc_821EBF34;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpwi cr6,r11,15
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 15, ctx.xer);
	// blt cr6,0x821ebf14
	if (ctx.cr6.lt) goto loc_821EBF14;
	// b 0x821ebf84
	goto loc_821EBF84;
loc_821EBF34:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x821ebf84
	if (ctx.cr6.lt) goto loc_821EBF84;
loc_821EBF3C:
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r11,r11,604
	ctx.r11.s64 = ctx.r11.s64 + 604;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821ebf84
	if (ctx.cr6.eq) goto loc_821EBF84;
loc_821EBF54:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332af8
	ctx.lr = 0x821EBF5C;
	sub_82332AF8(ctx, base);
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// slw r10,r26,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r26.u32 << (ctx.r11.u8 & 0x3F));
	// and r9,r10,r27
	ctx.r9.u64 = ctx.r10.u64 & ctx.r27.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x821ebf80
	if (ctx.cr6.eq) goto loc_821EBF80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332b28
	ctx.lr = 0x821EBF78;
	sub_82332B28(ctx, base);
	// bl 0x822aced0
	ctx.lr = 0x821EBF7C;
	sub_822ACED0(ctx, base);
	// bl 0x822ad208
	ctx.lr = 0x821EBF80;
	sub_822AD208(ctx, base);
loc_821EBF80:
	// lwz r8,-5944(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5944);
loc_821EBF84:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x821ebed0
	if (ctx.cr6.lt) goto loc_821EBED0;
loc_821EBF90:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821EBDA8) {
	__imp__sub_821EBDA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821EBF98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x821EBFA0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r3.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lhz r10,150(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 150);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821ebfec
	if (!ctx.cr6.eq) goto loc_821EBFEC;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// lhz r4,148(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 148);
	// addi r11,r10,26552
	ctx.r11.s64 = ctx.r10.s64 + 26552;
	// mulli r10,r4,624
	ctx.r10.s64 = ctx.r4.s64 * 624;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r9,264(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821ebffc
	if (!ctx.cr6.eq) goto loc_821EBFFC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17480
	ctx.r3.s64 = ctx.r11.s64 + -17480;
	// bl 0x822e84f0
	ctx.lr = 0x821EBFE4;
	sub_822E84F0(ctx, base);
	// bl 0x822ad548
	ctx.lr = 0x821EBFE8;
	sub_822AD548(ctx, base);
	// b 0x821ebffc
	goto loc_821EBFFC;
loc_821EBFEC:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x821EBFF8;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_821EBFFC:
	// li r30,1000
	ctx.r30.s64 = 1000;
	// bl 0x822acb68
	ctx.lr = 0x821EC004;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x821ec05c
	if (ctx.cr6.eq) goto loc_821EC05C;
	// cmplwi cr6,r3,2
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// beq cr6,0x821ec028
	if (ctx.cr6.eq) goto loc_821EC028;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-14648
	ctx.r3.s64 = ctx.r11.s64 + -14648;
	// bl 0x822ad350
	ctx.lr = 0x821EC020;
	sub_822AD350(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_821EC028:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822b1fb0
	ctx.lr = 0x821EC030;
	sub_822B1FB0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,12240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12240);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// lfs f0,2416(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2416);
	ctx.f0.f64 = double(temp.f32);
	// fadds f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// bl 0x823dde20
	ctx.lr = 0x821EC04C;
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
loc_821EC05C:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b2288
	ctx.lr = 0x821EC064;
	sub_822B2288(ctx, base);
	// addi r9,r29,11162
	ctx.r9.s64 = ctx.r29.s64 + 11162;
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// rlwinm r10,r29,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 6) & 0xFFFFFFC0;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addis r3,r7,1
	ctx.r3.s64 = ctx.r7.s64 + 65536;
	// stwx r30,r8,r11
	PPC_STORE_U32(ctx.r8.u32 + ctx.r11.u32, ctx.r30.u32);
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r3,r3,-20868
	ctx.r3.s64 = ctx.r3.s64 + -20868;
	// bl 0x822e7e98
	ctx.lr = 0x821EC094;
	sub_822E7E98(ctx, base);
	// lis r6,-32191
	ctx.r6.s64 = -2109669376;
	// rlwinm r4,r29,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r6,7712
	ctx.r11.s64 = ctx.r6.s64 + 7712;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r3,r10,-14660
	ctx.r3.s64 = ctx.r10.s64 + -14660;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwzx r4,r4,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r11.u32);
	// bl 0x822e84f0
	ctx.lr = 0x821EC0B8;
	sub_822E84F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lhz r3,126(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 126);
	// bl 0x8233cae8
	ctx.lr = 0x821EC0C4;
	sub_8233CAE8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821EBF98) {
	__imp__sub_821EBF98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821EC0CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821EC0CC) {
	__imp__sub_821EC0CC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821EC0D0) {
	PPC_FUNC_PROLOGUE();
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x821ebf98
	sub_821EBF98(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821EC0D0) {
	__imp__sub_821EC0D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821EC0D8) {
	PPC_FUNC_PROLOGUE();
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x821ebf98
	sub_821EBF98(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821EC0D8) {
	__imp__sub_821EC0D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821EC0E0) {
	PPC_FUNC_PROLOGUE();
	// li r4,2
	ctx.r4.s64 = 2;
	// b 0x821ebf98
	sub_821EBF98(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821EC0E0) {
	__imp__sub_821EC0E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821EC0E8) {
	PPC_FUNC_PROLOGUE();
	// li r4,3
	ctx.r4.s64 = 3;
	// b 0x821ebf98
	sub_821EBF98(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821EC0E8) {
	__imp__sub_821EC0E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821EC0F0) {
	PPC_FUNC_PROLOGUE();
	// li r4,4
	ctx.r4.s64 = 4;
	// b 0x821ebf98
	sub_821EBF98(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821EC0F0) {
	__imp__sub_821EC0F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821EC0F8) {
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
	// stw r3,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r3.u32);
	// lhz r10,166(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 166);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821ec15c
	if (!ctx.cr6.eq) goto loc_821EC15C;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// lhz r4,164(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 164);
	// addi r11,r10,26552
	ctx.r11.s64 = ctx.r10.s64 + 26552;
	// mulli r10,r4,624
	ctx.r10.s64 = ctx.r4.s64 * 624;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r9,264(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821ec16c
	if (!ctx.cr6.eq) goto loc_821EC16C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17480
	ctx.r3.s64 = ctx.r11.s64 + -17480;
	// bl 0x822e84f0
	ctx.lr = 0x821EC154;
	sub_822E84F0(ctx, base);
	// bl 0x822ad548
	ctx.lr = 0x821EC158;
	sub_822AD548(ctx, base);
	// b 0x821ec16c
	goto loc_821EC16C;
loc_821EC15C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x821EC168;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_821EC16C:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b1fb0
	ctx.lr = 0x821EC174;
	sub_822B1FB0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f1.f64;
	// bl 0x822b1fb0
	ctx.lr = 0x821EC180;
	sub_822B1FB0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// lfs f30,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f30.f64 = double(temp.f32);
	// fcmpu cr6,f1,f30
	ctx.cr6.compare(ctx.f1.f64, ctx.f30.f64);
	// bge cr6,0x821ec1a4
	if (!ctx.cr6.lt) goto loc_821EC1A4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,-14536
	ctx.r4.s64 = ctx.r11.s64 + -14536;
	// bl 0x822ad4e0
	ctx.lr = 0x821EC1A4;
	sub_822AD4E0(ctx, base);
loc_821EC1A4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fcmpu cr6,f29,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f29.f64, ctx.f30.f64);
	// lfs f0,12240(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12240);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f31,f0
	ctx.f0.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r30,84(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bge cr6,0x821ec1d4
	if (!ctx.cr6.lt) goto loc_821EC1D4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-14572
	ctx.r4.s64 = ctx.r11.s64 + -14572;
	// bl 0x822ad4e0
	ctx.lr = 0x821EC1D4;
	sub_822AD4E0(ctx, base);
loc_821EC1D4:
	// stfd f29,32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f29.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r3,r11,-21512
	ctx.r3.s64 = ctx.r11.s64 + -21512;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822e84f0
	ctx.lr = 0x821EC1F8;
	sub_822E84F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lhz r3,126(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 126);
	// bl 0x8233cae8
	ctx.lr = 0x821EC204;
	sub_8233CAE8(ctx, base);
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

PPC_WEAK_FUNC(sub_821EC0F8) {
	__imp__sub_821EC0F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821EC228) {
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
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// lhz r10,118(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 118);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821ec27c
	if (!ctx.cr6.eq) goto loc_821EC27C;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// lhz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 116);
	// addi r11,r10,26552
	ctx.r11.s64 = ctx.r10.s64 + 26552;
	// mulli r10,r4,624
	ctx.r10.s64 = ctx.r4.s64 * 624;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r9,264(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821ec28c
	if (!ctx.cr6.eq) goto loc_821EC28C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17480
	ctx.r3.s64 = ctx.r11.s64 + -17480;
	// bl 0x822e84f0
	ctx.lr = 0x821EC274;
	sub_822E84F0(ctx, base);
	// bl 0x822ad548
	ctx.lr = 0x821EC278;
	sub_822AD548(ctx, base);
	// b 0x821ec28c
	goto loc_821EC28C;
loc_821EC27C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x821EC288;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_821EC28C:
	// lis r11,0
	ctx.r11.s64 = 0;
	// lwz r10,264(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// ori r9,r11,44988
	ctx.r9.u64 = ctx.r11.u64 | 44988;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821ec2ac
	if (ctx.cr6.eq) goto loc_821EC2AC;
	// bl 0x82300a60
	ctx.lr = 0x821EC2A8;
	sub_82300A60(ctx, base);
	// bl 0x822aced0
	ctx.lr = 0x821EC2AC;
	sub_822ACED0(ctx, base);
loc_821EC2AC:
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

PPC_WEAK_FUNC(sub_821EC228) {
	__imp__sub_821EC228(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821EC2C0) {
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
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// lhz r10,118(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 118);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821ec314
	if (!ctx.cr6.eq) goto loc_821EC314;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// lhz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 116);
	// addi r11,r10,26552
	ctx.r11.s64 = ctx.r10.s64 + 26552;
	// mulli r10,r4,624
	ctx.r10.s64 = ctx.r4.s64 * 624;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r9,264(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821ec324
	if (!ctx.cr6.eq) goto loc_821EC324;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17480
	ctx.r3.s64 = ctx.r11.s64 + -17480;
	// bl 0x822e84f0
	ctx.lr = 0x821EC30C;
	sub_822E84F0(ctx, base);
	// bl 0x822ad548
	ctx.lr = 0x821EC310;
	sub_822AD548(ctx, base);
	// b 0x821ec324
	goto loc_821EC324;
loc_821EC314:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x821EC320;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_821EC324:
	// lis r11,0
	ctx.r11.s64 = 0;
	// lwz r10,264(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// ori r9,r11,44992
	ctx.r9.u64 = ctx.r11.u64 | 44992;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821ec344
	if (ctx.cr6.eq) goto loc_821EC344;
	// bl 0x82300a60
	ctx.lr = 0x821EC340;
	sub_82300A60(ctx, base);
	// bl 0x822aced0
	ctx.lr = 0x821EC344;
	sub_822ACED0(ctx, base);
loc_821EC344:
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

PPC_WEAK_FUNC(sub_821EC2C0) {
	__imp__sub_821EC2C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821EC358) {
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
	// stw r3,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r3.u32);
	// lhz r10,150(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 150);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821ec3ac
	if (!ctx.cr6.eq) goto loc_821EC3AC;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// lhz r4,148(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 148);
	// addi r11,r10,26552
	ctx.r11.s64 = ctx.r10.s64 + 26552;
	// mulli r10,r4,624
	ctx.r10.s64 = ctx.r4.s64 * 624;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r9,264(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821ec3bc
	if (!ctx.cr6.eq) goto loc_821EC3BC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17480
	ctx.r3.s64 = ctx.r11.s64 + -17480;
	// bl 0x822e84f0
	ctx.lr = 0x821EC3A4;
	sub_822E84F0(ctx, base);
	// bl 0x822ad548
	ctx.lr = 0x821EC3A8;
	sub_822AD548(ctx, base);
	// b 0x821ec3bc
	goto loc_821EC3BC;
loc_821EC3AC:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x821EC3B8;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_821EC3BC:
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r3,264(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8235ed10
	ctx.lr = 0x821EC3CC;
	sub_8235ED10(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822ad190
	ctx.lr = 0x821EC3D4;
	sub_822AD190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822acb78
	ctx.lr = 0x821EC3DC;
	sub_822ACB78(ctx, base);
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// addi r31,r11,-25976
	ctx.r31.s64 = ctx.r11.s64 + -25976;
	// lhz r3,146(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 146);
	// bl 0x822ad280
	ctx.lr = 0x821EC3EC;
	sub_822AD280(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822ad078
	ctx.lr = 0x821EC3F4;
	sub_822AD078(ctx, base);
	// lhz r3,126(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 126);
	// bl 0x822ad280
	ctx.lr = 0x821EC3FC;
	sub_822AD280(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822ad078
	ctx.lr = 0x821EC404;
	sub_822AD078(ctx, base);
	// lhz r3,14(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 14);
	// bl 0x822ad280
	ctx.lr = 0x821EC40C;
	sub_822AD280(ctx, base);
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

PPC_WEAK_FUNC(sub_821EC358) {
	__imp__sub_821EC358(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821EC420) {
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
	// bl 0x8220ed10
	ctx.lr = 0x821EC438;
	sub_8220ED10(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821ec490
	if (ctx.cr6.eq) goto loc_821EC490;
	// lwz r11,264(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 264);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821ec490
	if (ctx.cr6.eq) goto loc_821EC490;
	// bl 0x822acb68
	ctx.lr = 0x821EC454;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,2
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// beq cr6,0x821ec468
	if (ctx.cr6.eq) goto loc_821EC468;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-14456
	ctx.r3.s64 = ctx.r11.s64 + -14456;
	// bl 0x822ad350
	ctx.lr = 0x821EC468;
	sub_822AD350(ctx, base);
loc_821EC468:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b2288
	ctx.lr = 0x821EC470;
	sub_822B2288(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822b2288
	ctx.lr = 0x821EC47C;
	sub_822B2288(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lhz r3,126(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 126);
	// bl 0x8227eae0
	ctx.lr = 0x821EC48C;
	sub_8227EAE0(ctx, base);
	// b 0x821ec49c
	goto loc_821EC49C;
loc_821EC490:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-14512
	ctx.r3.s64 = ctx.r11.s64 + -14512;
	// bl 0x822ad548
	ctx.lr = 0x821EC49C;
	sub_822AD548(ctx, base);
loc_821EC49C:
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

PPC_WEAK_FUNC(sub_821EC420) {
	__imp__sub_821EC420(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821EC4B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821EC4B4) {
	__imp__sub_821EC4B4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821EC4B8) {
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
	// stw r3,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r3.u32);
	// lhz r10,182(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 182);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821ec50c
	if (!ctx.cr6.eq) goto loc_821EC50C;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// lhz r4,180(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 180);
	// addi r11,r10,26552
	ctx.r11.s64 = ctx.r10.s64 + 26552;
	// mulli r10,r4,624
	ctx.r10.s64 = ctx.r4.s64 * 624;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r9,264(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821ec51c
	if (!ctx.cr6.eq) goto loc_821EC51C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17480
	ctx.r3.s64 = ctx.r11.s64 + -17480;
	// bl 0x822e84f0
	ctx.lr = 0x821EC504;
	sub_822E84F0(ctx, base);
	// bl 0x822ad548
	ctx.lr = 0x821EC508;
	sub_822AD548(ctx, base);
	// b 0x821ec51c
	goto loc_821EC51C;
loc_821EC50C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x821EC518;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_821EC51C:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r5,316(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,264(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// bl 0x8231d188
	ctx.lr = 0x821EC530;
	sub_8231D188(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821ec544
	if (!ctx.cr6.eq) goto loc_821EC544;
	// li r3,0
	ctx.r3.s64 = 0;
loc_821EC544:
	// bl 0x822acb78
	ctx.lr = 0x821EC548;
	sub_822ACB78(ctx, base);
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

PPC_WEAK_FUNC(sub_821EC4B8) {
	__imp__sub_821EC4B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821EC55C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821EC55C) {
	__imp__sub_821EC55C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821EC560) {
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
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// lhz r10,118(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 118);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821ec5b4
	if (!ctx.cr6.eq) goto loc_821EC5B4;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// lhz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 116);
	// addi r11,r10,26552
	ctx.r11.s64 = ctx.r10.s64 + 26552;
	// mulli r10,r4,624
	ctx.r10.s64 = ctx.r4.s64 * 624;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r9,264(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821ec5c4
	if (!ctx.cr6.eq) goto loc_821EC5C4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17480
	ctx.r3.s64 = ctx.r11.s64 + -17480;
	// bl 0x822e84f0
	ctx.lr = 0x821EC5AC;
	sub_822E84F0(ctx, base);
	// bl 0x822ad548
	ctx.lr = 0x821EC5B0;
	sub_822AD548(ctx, base);
	// b 0x821ec5c4
	goto loc_821EC5C4;
loc_821EC5B4:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x821EC5C0;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_821EC5C4:
	// lwz r3,264(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// bl 0x8231d3c0
	ctx.lr = 0x821EC5CC;
	sub_8231D3C0(ctx, base);
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

PPC_WEAK_FUNC(sub_821EC560) {
	__imp__sub_821EC560(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821EC5E0) {
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
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// lhz r10,118(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 118);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821ec634
	if (!ctx.cr6.eq) goto loc_821EC634;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// lhz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 116);
	// addi r11,r10,26552
	ctx.r11.s64 = ctx.r10.s64 + 26552;
	// mulli r10,r4,624
	ctx.r10.s64 = ctx.r4.s64 * 624;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r9,264(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821ec644
	if (!ctx.cr6.eq) goto loc_821EC644;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17480
	ctx.r3.s64 = ctx.r11.s64 + -17480;
	// bl 0x822e84f0
	ctx.lr = 0x821EC62C;
	sub_822E84F0(ctx, base);
	// bl 0x822ad548
	ctx.lr = 0x821EC630;
	sub_822AD548(ctx, base);
	// b 0x821ec644
	goto loc_821EC644;
loc_821EC634:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x821EC640;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_821EC644:
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r3,r10,30,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x1;
	// bl 0x822acb78
	ctx.lr = 0x821EC654;
	sub_822ACB78(ctx, base);
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

PPC_WEAK_FUNC(sub_821EC5E0) {
	__imp__sub_821EC5E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821EC668) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x821EC670;
	__savegprlr_29(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r3.u32);
	// lhz r10,182(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 182);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lhz r29,180(r1)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r1.u32 + 180);
	// bne cr6,0x821ec6b8
	if (!ctx.cr6.eq) goto loc_821EC6B8;
	// lis r11,-32052
	ctx.r11.s64 = -2100559872;
	// clrlwi r4,r29,16
	ctx.r4.u64 = ctx.r29.u32 & 0xFFFF;
	// addi r11,r11,26552
	ctx.r11.s64 = ctx.r11.s64 + 26552;
	// mulli r10,r4,624
	ctx.r10.s64 = ctx.r4.s64 * 624;
	// addi r9,r11,264
	ctx.r9.s64 = ctx.r11.s64 + 264;
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x821ec6c4
	if (!ctx.cr6.eq) goto loc_821EC6C4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17480
	ctx.r3.s64 = ctx.r11.s64 + -17480;
	// bl 0x822e84f0
	ctx.lr = 0x821EC6B4;
	sub_822E84F0(ctx, base);
	// b 0x821ec6c0
	goto loc_821EC6C0;
loc_821EC6B8:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
loc_821EC6C0:
	// bl 0x822ad548
	ctx.lr = 0x821EC6C4;
	sub_822AD548(ctx, base);
loc_821EC6C4:
	// bl 0x822acb68
	ctx.lr = 0x821EC6C8;
	sub_822ACB68(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// blt cr6,0x821ec6dc
	if (ctx.cr6.lt) goto loc_821EC6DC;
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// ble cr6,0x821ec6e8
	if (!ctx.cr6.gt) goto loc_821EC6E8;
loc_821EC6DC:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-14400
	ctx.r3.s64 = ctx.r11.s64 + -14400;
	// bl 0x822ad350
	ctx.lr = 0x821EC6E8;
	sub_822AD350(ctx, base);
loc_821EC6E8:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b1c50
	ctx.lr = 0x821EC6F0;
	sub_822B1C50(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822b2498
	ctx.lr = 0x821EC700;
	sub_822B2498(ctx, base);
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// ble cr6,0x821ec73c
	if (!ctx.cr6.gt) goto loc_821EC73C;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x822b2498
	ctx.lr = 0x821EC714;
	sub_822B2498(ctx, base);
	// cmpwi cr6,r30,3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 3, ctx.xer);
	// ble cr6,0x821ec734
	if (!ctx.cr6.gt) goto loc_821EC734;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x822b2498
	ctx.lr = 0x821EC728;
	sub_822B2498(ctx, base);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// b 0x821ec744
	goto loc_821EC744;
loc_821EC734:
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// b 0x821ec740
	goto loc_821EC740;
loc_821EC73C:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821EC740:
	// li r6,0
	ctx.r6.s64 = 0;
loc_821EC744:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822190a8
	ctx.lr = 0x821EC750;
	sub_822190A8(ctx, base);
	// clrlwi r11,r29,16
	ctx.r11.u64 = ctx.r29.u32 & 0xFFFF;
	// li r10,1
	ctx.r10.s64 = 1;
	// slw r9,r10,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// stw r9,168(r3)
	PPC_STORE_U32(ctx.r3.u32 + 168, ctx.r9.u32);
	// bl 0x82229b60
	ctx.lr = 0x821EC764;
	sub_82229B60(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821EC668) {
	__imp__sub_821EC668(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821EC76C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821EC76C) {
	__imp__sub_821EC76C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821EC770) {
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
	// stw r3,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r3.u32);
	// lhz r10,134(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 134);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821ec7c8
	if (!ctx.cr6.eq) goto loc_821EC7C8;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// lhz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 132);
	// addi r11,r10,26552
	ctx.r11.s64 = ctx.r10.s64 + 26552;
	// mulli r10,r4,624
	ctx.r10.s64 = ctx.r4.s64 * 624;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r9,264(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821ec7d8
	if (!ctx.cr6.eq) goto loc_821EC7D8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17480
	ctx.r3.s64 = ctx.r11.s64 + -17480;
	// bl 0x822e84f0
	ctx.lr = 0x821EC7C0;
	sub_822E84F0(ctx, base);
	// bl 0x822ad548
	ctx.lr = 0x821EC7C4;
	sub_822AD548(ctx, base);
	// b 0x821ec7d8
	goto loc_821EC7D8;
loc_821EC7C8:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x821EC7D4;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_821EC7D8:
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r30,264(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// bl 0x822b1c50
	ctx.lr = 0x821EC7E4;
	sub_822B1C50(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x821ec7f8
	if (ctx.cr6.lt) goto loc_821EC7F8;
	// cmpwi cr6,r3,100
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 100, ctx.xer);
	// ble cr6,0x821ec810
	if (!ctx.cr6.gt) goto loc_821EC810;
loc_821EC7F8:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r5,100
	ctx.r5.s64 = 100;
	// addi r3,r11,-14368
	ctx.r3.s64 = ctx.r11.s64 + -14368;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822e84f0
	ctx.lr = 0x821EC80C;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x821EC810;
	sub_822AD350(ctx, base);
loc_821EC810:
	// lis r11,0
	ctx.r11.s64 = 0;
	// lwz r10,700(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 700);
	// ori r9,r11,44184
	ctx.r9.u64 = ctx.r11.u64 | 44184;
	// ori r8,r10,1024
	ctx.r8.u64 = ctx.r10.u64 | 1024;
	// stw r8,700(r30)
	PPC_STORE_U32(ctx.r30.u32 + 700, ctx.r8.u32);
	// stwx r31,r30,r9
	PPC_STORE_U32(ctx.r30.u32 + ctx.r9.u32, ctx.r31.u32);
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

PPC_WEAK_FUNC(sub_821EC770) {
	__imp__sub_821EC770(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821EC840) {
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
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// lhz r10,118(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 118);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821ec894
	if (!ctx.cr6.eq) goto loc_821EC894;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// lhz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 116);
	// addi r11,r10,26552
	ctx.r11.s64 = ctx.r10.s64 + 26552;
	// mulli r10,r4,624
	ctx.r10.s64 = ctx.r4.s64 * 624;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r9,264(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821ec8a4
	if (!ctx.cr6.eq) goto loc_821EC8A4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17480
	ctx.r3.s64 = ctx.r11.s64 + -17480;
	// bl 0x822e84f0
	ctx.lr = 0x821EC88C;
	sub_822E84F0(ctx, base);
	// bl 0x822ad548
	ctx.lr = 0x821EC890;
	sub_822AD548(ctx, base);
	// b 0x821ec8a4
	goto loc_821EC8A4;
loc_821EC894:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x821EC8A0;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_821EC8A4:
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// lwz r10,700(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 700);
	// rlwinm r9,r10,0,22,20
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFBFF;
	// stw r9,700(r11)
	PPC_STORE_U32(ctx.r11.u32 + 700, ctx.r9.u32);
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

PPC_WEAK_FUNC(sub_821EC840) {
	__imp__sub_821EC840(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821EC8C8) {
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
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// lhz r10,118(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 118);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821ec91c
	if (!ctx.cr6.eq) goto loc_821EC91C;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// lhz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 116);
	// addi r11,r10,26552
	ctx.r11.s64 = ctx.r10.s64 + 26552;
	// mulli r10,r4,624
	ctx.r10.s64 = ctx.r4.s64 * 624;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r9,264(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821ec92c
	if (!ctx.cr6.eq) goto loc_821EC92C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17480
	ctx.r3.s64 = ctx.r11.s64 + -17480;
	// bl 0x822e84f0
	ctx.lr = 0x821EC914;
	sub_822E84F0(ctx, base);
	// bl 0x822ad548
	ctx.lr = 0x821EC918;
	sub_822AD548(ctx, base);
	// b 0x821ec92c
	goto loc_821EC92C;
loc_821EC91C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x821EC928;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_821EC92C:
	// bl 0x822acb68
	ctx.lr = 0x821EC930;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821ec958
	if (!ctx.cr6.eq) goto loc_821EC958;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17348
	ctx.r3.s64 = ctx.r11.s64 + -17348;
	// bl 0x822ad350
	ctx.lr = 0x821EC944;
	sub_822AD350(ctx, base);
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
loc_821EC958:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b28d0
	ctx.lr = 0x821EC960;
	sub_822B28D0(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x821ec9a0
	if (!ctx.cr6.eq) goto loc_821EC9A0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b29b0
	ctx.lr = 0x821EC970;
	sub_822B29B0(ctx, base);
	// cmpwi cr6,r3,22
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 22, ctx.xer);
	// bne cr6,0x821ec9cc
	if (!ctx.cr6.eq) goto loc_821EC9CC;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82229bf0
	ctx.lr = 0x821EC980;
	sub_82229BF0(ctx, base);
	// lhz r11,126(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 126);
	// lwz r10,264(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// stw r11,1032(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1032, ctx.r11.u32);
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// lwz r9,1028(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1028);
	// rlwinm r8,r9,0,26,24
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFBF;
	// stw r8,1028(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1028, ctx.r8.u32);
	// b 0x821ec9d8
	goto loc_821EC9D8;
loc_821EC9A0:
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// bne cr6,0x821ec9cc
	if (!ctx.cr6.eq) goto loc_821EC9CC;
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r10,1028(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1028);
	// ori r9,r10,64
	ctx.r9.u64 = ctx.r10.u64 | 64;
	// stw r9,1028(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1028, ctx.r9.u32);
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// addi r4,r11,1036
	ctx.r4.s64 = ctx.r11.s64 + 1036;
	// bl 0x822b2498
	ctx.lr = 0x821EC9C8;
	sub_822B2498(ctx, base);
	// b 0x821ec9d8
	goto loc_821EC9D8;
loc_821EC9CC:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-14328
	ctx.r3.s64 = ctx.r11.s64 + -14328;
	// bl 0x822ad350
	ctx.lr = 0x821EC9D8;
	sub_822AD350(ctx, base);
loc_821EC9D8:
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// lwz r10,1028(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1028);
	// ori r9,r10,1
	ctx.r9.u64 = ctx.r10.u64 | 1;
	// stw r9,1028(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1028, ctx.r9.u32);
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// lwz r8,1028(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1028);
	// rlwinm r7,r8,0,31,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// stw r7,1028(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1028, ctx.r7.u32);
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// lwz r6,1028(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1028);
	// rlwinm r5,r6,0,30,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// stw r5,1028(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1028, ctx.r5.u32);
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// lwz r4,1028(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1028);
	// rlwinm r3,r4,0,29,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// stw r3,1028(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1028, ctx.r3.u32);
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

PPC_WEAK_FUNC(sub_821EC8C8) {
	__imp__sub_821EC8C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821ECA2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821ECA2C) {
	__imp__sub_821ECA2C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821ECA30) {
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
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// lhz r10,118(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 118);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821eca84
	if (!ctx.cr6.eq) goto loc_821ECA84;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// lhz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 116);
	// addi r11,r10,26552
	ctx.r11.s64 = ctx.r10.s64 + 26552;
	// mulli r10,r4,624
	ctx.r10.s64 = ctx.r4.s64 * 624;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r9,264(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821eca94
	if (!ctx.cr6.eq) goto loc_821ECA94;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17480
	ctx.r3.s64 = ctx.r11.s64 + -17480;
	// bl 0x822e84f0
	ctx.lr = 0x821ECA7C;
	sub_822E84F0(ctx, base);
	// bl 0x822ad548
	ctx.lr = 0x821ECA80;
	sub_822AD548(ctx, base);
	// b 0x821eca94
	goto loc_821ECA94;
loc_821ECA84:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x821ECA90;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_821ECA94:
	// bl 0x822acb68
	ctx.lr = 0x821ECA98;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bge cr6,0x821ecac0
	if (!ctx.cr6.lt) goto loc_821ECAC0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17348
	ctx.r3.s64 = ctx.r11.s64 + -17348;
	// bl 0x822ad350
	ctx.lr = 0x821ECAAC;
	sub_822AD350(ctx, base);
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
loc_821ECAC0:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b28d0
	ctx.lr = 0x821ECAC8;
	sub_822B28D0(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x821ecb34
	if (!ctx.cr6.eq) goto loc_821ECB34;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b29b0
	ctx.lr = 0x821ECAD8;
	sub_822B29B0(ctx, base);
	// cmpwi cr6,r3,22
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 22, ctx.xer);
	// bne cr6,0x821ecb60
	if (!ctx.cr6.eq) goto loc_821ECB60;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82229bf0
	ctx.lr = 0x821ECAE8;
	sub_82229BF0(ctx, base);
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// lhz r10,126(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 126);
	// stw r10,1032(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1032, ctx.r10.u32);
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// lwz r9,1028(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1028);
	// rlwinm r8,r9,0,26,24
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFBF;
	// stw r8,1028(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1028, ctx.r8.u32);
	// bl 0x8222c9d8
	ctx.lr = 0x821ECB08;
	sub_8222C9D8(ctx, base);
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// lwz r10,1028(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1028);
	// beq cr6,0x821ecb28
	if (ctx.cr6.eq) goto loc_821ECB28;
	// ori r9,r10,4
	ctx.r9.u64 = ctx.r10.u64 | 4;
	// stw r9,1028(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1028, ctx.r9.u32);
	// b 0x821ecb6c
	goto loc_821ECB6C;
loc_821ECB28:
	// ori r9,r10,8
	ctx.r9.u64 = ctx.r10.u64 | 8;
	// stw r9,1028(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1028, ctx.r9.u32);
	// b 0x821ecb6c
	goto loc_821ECB6C;
loc_821ECB34:
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// bne cr6,0x821ecb60
	if (!ctx.cr6.eq) goto loc_821ECB60;
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r10,1028(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1028);
	// ori r9,r10,64
	ctx.r9.u64 = ctx.r10.u64 | 64;
	// stw r9,1028(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1028, ctx.r9.u32);
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// addi r4,r11,1036
	ctx.r4.s64 = ctx.r11.s64 + 1036;
	// bl 0x822b2498
	ctx.lr = 0x821ECB5C;
	sub_822B2498(ctx, base);
	// b 0x821ecb6c
	goto loc_821ECB6C;
loc_821ECB60:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-14328
	ctx.r3.s64 = ctx.r11.s64 + -14328;
	// bl 0x822ad350
	ctx.lr = 0x821ECB6C;
	sub_822AD350(ctx, base);
loc_821ECB6C:
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// lwz r10,1028(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1028);
	// ori r9,r10,1
	ctx.r9.u64 = ctx.r10.u64 | 1;
	// stw r9,1028(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1028, ctx.r9.u32);
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// lwz r8,1028(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1028);
	// ori r7,r8,2
	ctx.r7.u64 = ctx.r8.u64 | 2;
	// stw r7,1028(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1028, ctx.r7.u32);
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

PPC_WEAK_FUNC(sub_821ECA30) {
	__imp__sub_821ECA30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821ECBA0) {
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
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// lhz r10,118(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 118);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821ecbf4
	if (!ctx.cr6.eq) goto loc_821ECBF4;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// lhz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 116);
	// addi r11,r10,26552
	ctx.r11.s64 = ctx.r10.s64 + 26552;
	// mulli r10,r4,624
	ctx.r10.s64 = ctx.r4.s64 * 624;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r9,264(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821ecc04
	if (!ctx.cr6.eq) goto loc_821ECC04;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17480
	ctx.r3.s64 = ctx.r11.s64 + -17480;
	// bl 0x822e84f0
	ctx.lr = 0x821ECBEC;
	sub_822E84F0(ctx, base);
	// bl 0x822ad548
	ctx.lr = 0x821ECBF0;
	sub_822AD548(ctx, base);
	// b 0x821ecc04
	goto loc_821ECC04;
loc_821ECBF4:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x821ECC00;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_821ECC04:
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// li r10,2047
	ctx.r10.s64 = 2047;
	// lwz r9,1028(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1028);
	// rlwinm r8,r9,0,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r8,1028(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1028, ctx.r8.u32);
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// lwz r7,1028(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1028);
	// rlwinm r6,r7,0,31,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// stw r6,1028(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1028, ctx.r6.u32);
	// lwz r5,264(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// stw r10,1032(r5)
	PPC_STORE_U32(ctx.r5.u32 + 1032, ctx.r10.u32);
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// lwz r4,1028(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1028);
	// rlwinm r3,r4,0,30,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// stw r3,1028(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1028, ctx.r3.u32);
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// lwz r10,1028(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1028);
	// rlwinm r9,r10,0,29,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// stw r9,1028(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1028, ctx.r9.u32);
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

PPC_WEAK_FUNC(sub_821ECBA0) {
	__imp__sub_821ECBA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821ECC64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821ECC64) {
	__imp__sub_821ECC64(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821ECC68) {
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
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// lhz r10,118(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 118);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821eccbc
	if (!ctx.cr6.eq) goto loc_821ECCBC;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// lhz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 116);
	// addi r11,r10,26552
	ctx.r11.s64 = ctx.r10.s64 + 26552;
	// mulli r10,r4,624
	ctx.r10.s64 = ctx.r4.s64 * 624;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r9,264(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821ecccc
	if (!ctx.cr6.eq) goto loc_821ECCCC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17480
	ctx.r3.s64 = ctx.r11.s64 + -17480;
	// bl 0x822e84f0
	ctx.lr = 0x821ECCB4;
	sub_822E84F0(ctx, base);
	// bl 0x822ad548
	ctx.lr = 0x821ECCB8;
	sub_822AD548(ctx, base);
	// b 0x821ecccc
	goto loc_821ECCCC;
loc_821ECCBC:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x821ECCC8;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_821ECCCC:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b1c50
	ctx.lr = 0x821ECCD4;
	sub_822B1C50(ctx, base);
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lwz r10,1028(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1028);
	// ori r9,r10,16
	ctx.r9.u64 = ctx.r10.u64 | 16;
	// bne cr6,0x821eccec
	if (!ctx.cr6.eq) goto loc_821ECCEC;
	// rlwinm r9,r10,0,28,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
loc_821ECCEC:
	// stw r9,1028(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1028, ctx.r9.u32);
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

PPC_WEAK_FUNC(sub_821ECC68) {
	__imp__sub_821ECC68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821ECD04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821ECD04) {
	__imp__sub_821ECD04(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821ECD08) {
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
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// lhz r10,118(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 118);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821ecd5c
	if (!ctx.cr6.eq) goto loc_821ECD5C;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// lhz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 116);
	// addi r11,r10,26552
	ctx.r11.s64 = ctx.r10.s64 + 26552;
	// mulli r10,r4,624
	ctx.r10.s64 = ctx.r4.s64 * 624;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r9,264(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821ecd6c
	if (!ctx.cr6.eq) goto loc_821ECD6C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17480
	ctx.r3.s64 = ctx.r11.s64 + -17480;
	// bl 0x822e84f0
	ctx.lr = 0x821ECD54;
	sub_822E84F0(ctx, base);
	// bl 0x822ad548
	ctx.lr = 0x821ECD58;
	sub_822AD548(ctx, base);
	// b 0x821ecd6c
	goto loc_821ECD6C;
loc_821ECD5C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x821ECD68;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_821ECD6C:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b1c50
	ctx.lr = 0x821ECD74;
	sub_822B1C50(ctx, base);
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lwz r10,1028(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1028);
	// ori r9,r10,32
	ctx.r9.u64 = ctx.r10.u64 | 32;
	// bne cr6,0x821ecd8c
	if (!ctx.cr6.eq) goto loc_821ECD8C;
	// rlwinm r9,r10,0,27,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
loc_821ECD8C:
	// stw r9,1028(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1028, ctx.r9.u32);
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

PPC_WEAK_FUNC(sub_821ECD08) {
	__imp__sub_821ECD08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821ECDA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821ECDA4) {
	__imp__sub_821ECDA4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821ECDA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-14280
	ctx.r3.s64 = ctx.r11.s64 + -14280;
	// b 0x822ad350
	sub_822AD350(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821ECDA8) {
	__imp__sub_821ECDA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821ECDB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821ECDB4) {
	__imp__sub_821ECDB4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821ECDB8) {
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
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// bne cr6,0x821ece14
	if (!ctx.cr6.eq) goto loc_821ECE14;
	// addi r11,r11,-19152
	ctx.r11.s64 = ctx.r11.s64 + -19152;
	// li r30,104
	ctx.r30.s64 = 104;
	// addi r31,r11,-12
	ctx.r31.s64 = ctx.r11.s64 + -12;
loc_821ECDE4:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwzu r4,12(r31)
	ea = 12 + ctx.r31.u32;
	ctx.r4.u64 = PPC_LOAD_U32(ea);
	ctx.r31.u32 = ea;
	// bl 0x82295358
	ctx.lr = 0x821ECDF0;
	sub_82295358(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x821ecde4
	if (!ctx.cr0.eq) goto loc_821ECDE4;
loc_821ECDF8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821ECDFC:
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
loc_821ECE14:
	// addi r4,r11,-19152
	ctx.r4.s64 = ctx.r11.s64 + -19152;
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
loc_821ECE28:
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
loc_821ECE30:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r31,0(r10)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r31,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r31.s64;
	// beq cr6,0x821ece54
	if (ctx.cr6.eq) goto loc_821ECE54;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x821ece30
	if (ctx.cr6.eq) goto loc_821ECE30;
loc_821ECE54:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x821ece74
	if (ctx.cr6.eq) goto loc_821ECE74;
	// addi r6,r6,12
	ctx.r6.s64 = ctx.r6.s64 + 12;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r8,r8,12
	ctx.r8.s64 = ctx.r8.s64 + 12;
	// cmplwi cr6,r6,1248
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 1248, ctx.xer);
	// blt cr6,0x821ece28
	if (ctx.cr6.lt) goto loc_821ECE28;
	// b 0x821ecdf8
	goto loc_821ECDF8;
loc_821ECE74:
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
	// b 0x821ecdfc
	goto loc_821ECDFC;
}

PPC_WEAK_FUNC(sub_821ECDB8) {
	__imp__sub_821ECDB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821ECE94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821ECE94) {
	__imp__sub_821ECE94(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821ECE98) {
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
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b2288
	ctx.lr = 0x821ECEB8;
	sub_822B2288(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821eced0
	if (ctx.cr6.eq) goto loc_821ECED0;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821ecee0
	if (!ctx.cr6.eq) goto loc_821ECEE0;
loc_821ECED0:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-13308
	ctx.r4.s64 = ctx.r11.s64 + -13308;
	// bl 0x822ad4e0
	ctx.lr = 0x821ECEE0;
	sub_822AD4E0(ctx, base);
loc_821ECEE0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8212f8d8
	ctx.lr = 0x821ECEEC;
	sub_8212F8D8(ctx, base);
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

PPC_WEAK_FUNC(sub_821ECE98) {
	__imp__sub_821ECE98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821ECF04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821ECF04) {
	__imp__sub_821ECF04(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821ECF08) {
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
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// lhz r10,118(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 118);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821ecf5c
	if (!ctx.cr6.eq) goto loc_821ECF5C;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// lhz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 116);
	// addi r11,r10,26552
	ctx.r11.s64 = ctx.r10.s64 + 26552;
	// mulli r10,r4,624
	ctx.r10.s64 = ctx.r4.s64 * 624;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r9,264(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821ecf6c
	if (!ctx.cr6.eq) goto loc_821ECF6C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17480
	ctx.r3.s64 = ctx.r11.s64 + -17480;
	// bl 0x822e84f0
	ctx.lr = 0x821ECF54;
	sub_822E84F0(ctx, base);
	// bl 0x822ad548
	ctx.lr = 0x821ECF58;
	sub_822AD548(ctx, base);
	// b 0x821ecf6c
	goto loc_821ECF6C;
loc_821ECF5C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x821ECF68;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_821ECF6C:
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// addi r10,r11,9624
	ctx.r10.s64 = ctx.r11.s64 + 9624;
	// lwz r11,2892(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2892);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821ecfc4
	if (!ctx.cr6.eq) goto loc_821ECFC4;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lbz r10,29088(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 29088);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821ecfb0
	if (ctx.cr6.eq) goto loc_821ECFB0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-13272
	ctx.r3.s64 = ctx.r11.s64 + -13272;
	// bl 0x822ad350
	ctx.lr = 0x821ECF9C;
	sub_822AD350(ctx, base);
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
loc_821ECFB0:
	// lhz r3,126(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 126);
	// bl 0x821ece98
	ctx.lr = 0x821ECFB8;
	sub_821ECE98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bne cr6,0x821ecfc8
	if (!ctx.cr6.eq) goto loc_821ECFC8;
loc_821ECFC4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821ECFC8:
	// bl 0x822acbf8
	ctx.lr = 0x821ECFCC;
	sub_822ACBF8(ctx, base);
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

PPC_WEAK_FUNC(sub_821ECF08) {
	__imp__sub_821ECF08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821ECFE0) {
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
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// lhz r10,118(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 118);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821ed034
	if (!ctx.cr6.eq) goto loc_821ED034;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// lhz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 116);
	// addi r11,r10,26552
	ctx.r11.s64 = ctx.r10.s64 + 26552;
	// mulli r10,r4,624
	ctx.r10.s64 = ctx.r4.s64 * 624;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r9,264(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821ed044
	if (!ctx.cr6.eq) goto loc_821ED044;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17480
	ctx.r3.s64 = ctx.r11.s64 + -17480;
	// bl 0x822e84f0
	ctx.lr = 0x821ED02C;
	sub_822E84F0(ctx, base);
	// bl 0x822ad548
	ctx.lr = 0x821ED030;
	sub_822AD548(ctx, base);
	// b 0x821ed044
	goto loc_821ED044;
loc_821ED034:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x821ED040;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_821ED044:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b1c50
	ctx.lr = 0x821ED04C;
	sub_822B1C50(ctx, base);
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r9,r10,0,5,3
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFF7FFFFFF;
	// bne cr6,0x821ed064
	if (!ctx.cr6.eq) goto loc_821ED064;
	// oris r9,r10,2048
	ctx.r9.u64 = ctx.r10.u64 | 134217728;
loc_821ED064:
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
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

PPC_WEAK_FUNC(sub_821ECFE0) {
	__imp__sub_821ECFE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821ED07C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821ED07C) {
	__imp__sub_821ED07C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821ED080) {
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
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// lhz r10,118(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 118);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821ed0d4
	if (!ctx.cr6.eq) goto loc_821ED0D4;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// lhz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 116);
	// addi r11,r10,26552
	ctx.r11.s64 = ctx.r10.s64 + 26552;
	// mulli r10,r4,624
	ctx.r10.s64 = ctx.r4.s64 * 624;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r9,264(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821ed0e4
	if (!ctx.cr6.eq) goto loc_821ED0E4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17480
	ctx.r3.s64 = ctx.r11.s64 + -17480;
	// bl 0x822e84f0
	ctx.lr = 0x821ED0CC;
	sub_822E84F0(ctx, base);
	// bl 0x822ad548
	ctx.lr = 0x821ED0D0;
	sub_822AD548(ctx, base);
	// b 0x821ed0e4
	goto loc_821ED0E4;
loc_821ED0D4:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x821ED0E0;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_821ED0E4:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b1c50
	ctx.lr = 0x821ED0EC;
	sub_822B1C50(ctx, base);
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r9,r10,0,4,2
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFEFFFFFFF;
	// bne cr6,0x821ed104
	if (!ctx.cr6.eq) goto loc_821ED104;
	// oris r9,r10,4096
	ctx.r9.u64 = ctx.r10.u64 | 268435456;
loc_821ED104:
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
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

PPC_WEAK_FUNC(sub_821ED080) {
	__imp__sub_821ED080(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821ED11C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821ED11C) {
	__imp__sub_821ED11C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821ED120) {
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
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// lhz r10,118(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 118);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lhz r31,116(r1)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r1.u32 + 116);
	// bne cr6,0x821ed174
	if (!ctx.cr6.eq) goto loc_821ED174;
	// lis r11,-32052
	ctx.r11.s64 = -2100559872;
	// clrlwi r4,r31,16
	ctx.r4.u64 = ctx.r31.u32 & 0xFFFF;
	// addi r11,r11,26552
	ctx.r11.s64 = ctx.r11.s64 + 26552;
	// mulli r10,r4,624
	ctx.r10.s64 = ctx.r4.s64 * 624;
	// addi r9,r11,264
	ctx.r9.s64 = ctx.r11.s64 + 264;
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x821ed180
	if (!ctx.cr6.eq) goto loc_821ED180;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17480
	ctx.r3.s64 = ctx.r11.s64 + -17480;
	// bl 0x822e84f0
	ctx.lr = 0x821ED170;
	sub_822E84F0(ctx, base);
	// b 0x821ed17c
	goto loc_821ED17C;
loc_821ED174:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
loc_821ED17C:
	// bl 0x822ad548
	ctx.lr = 0x821ED180;
	sub_822AD548(ctx, base);
loc_821ED180:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// clrlwi r3,r31,16
	ctx.r3.u64 = ctx.r31.u32 & 0xFFFF;
	// addi r4,r11,-26084
	ctx.r4.s64 = ctx.r11.s64 + -26084;
	// bl 0x8233cae8
	ctx.lr = 0x821ED190;
	sub_8233CAE8(ctx, base);
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

PPC_WEAK_FUNC(sub_821ED120) {
	__imp__sub_821ED120(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821ED1A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821ED1A4) {
	__imp__sub_821ED1A4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821ED1A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x821ED1B0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r3.u32);
	// lhz r10,150(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 150);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lhz r28,148(r1)
	ctx.r28.u64 = PPC_LOAD_U16(ctx.r1.u32 + 148);
	// bne cr6,0x821ed1fc
	if (!ctx.cr6.eq) goto loc_821ED1FC;
	// clrlwi r4,r28,16
	ctx.r4.u64 = ctx.r28.u32 & 0xFFFF;
	// lis r11,-32052
	ctx.r11.s64 = -2100559872;
	// mulli r10,r4,624
	ctx.r10.s64 = ctx.r4.s64 * 624;
	// addi r11,r11,26552
	ctx.r11.s64 = ctx.r11.s64 + 26552;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,264(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821ed20c
	if (!ctx.cr6.eq) goto loc_821ED20C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17480
	ctx.r3.s64 = ctx.r11.s64 + -17480;
	// bl 0x822e84f0
	ctx.lr = 0x821ED1F4;
	sub_822E84F0(ctx, base);
	// bl 0x822ad548
	ctx.lr = 0x821ED1F8;
	sub_822AD548(ctx, base);
	// b 0x821ed20c
	goto loc_821ED20C;
loc_821ED1FC:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x821ED208;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_821ED20C:
	// lwz r31,264(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r11,724(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 724);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x821ed270
	if (ctx.cr6.lt) goto loc_821ED270;
	// addi r30,r31,504
	ctx.r30.s64 = ctx.r31.s64 + 504;
loc_821ED224:
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r4,8
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 8, ctx.xer);
	// beq cr6,0x821ed250
	if (ctx.cr6.eq) goto loc_821ED250;
	// cmpwi cr6,r4,10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 10, ctx.xer);
	// beq cr6,0x821ed250
	if (ctx.cr6.eq) goto loc_821ED250;
	// cmpwi cr6,r4,12
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 12, ctx.xer);
	// beq cr6,0x821ed250
	if (ctx.cr6.eq) goto loc_821ED250;
	// cmpwi cr6,r4,11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 11, ctx.xer);
	// beq cr6,0x821ed250
	if (ctx.cr6.eq) goto loc_821ED250;
	// cmpwi cr6,r4,9
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 9, ctx.xer);
	// bne cr6,0x821ed25c
	if (!ctx.cr6.eq) goto loc_821ED25C;
loc_821ED250:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82322348
	ctx.lr = 0x821ED25C;
	sub_82322348(ctx, base);
loc_821ED25C:
	// lwz r11,724(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 724);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,28
	ctx.r30.s64 = ctx.r30.s64 + 28;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x821ed224
	if (!ctx.cr6.gt) goto loc_821ED224;
loc_821ED270:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8232fd90
	ctx.lr = 0x821ED278;
	sub_8232FD90(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// clrlwi r3,r28,16
	ctx.r3.u64 = ctx.r28.u32 & 0xFFFF;
	// addi r4,r11,-26100
	ctx.r4.s64 = ctx.r11.s64 + -26100;
	// bl 0x8233cae8
	ctx.lr = 0x821ED288;
	sub_8233CAE8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821ED1A8) {
	__imp__sub_821ED1A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821ED290) {
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
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// lhz r10,118(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 118);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821ed2e4
	if (!ctx.cr6.eq) goto loc_821ED2E4;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// lhz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 116);
	// addi r11,r10,26552
	ctx.r11.s64 = ctx.r10.s64 + 26552;
	// mulli r10,r4,624
	ctx.r10.s64 = ctx.r4.s64 * 624;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r9,264(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821ed2f4
	if (!ctx.cr6.eq) goto loc_821ED2F4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17480
	ctx.r3.s64 = ctx.r11.s64 + -17480;
	// bl 0x822e84f0
	ctx.lr = 0x821ED2DC;
	sub_822E84F0(ctx, base);
	// bl 0x822ad548
	ctx.lr = 0x821ED2E0;
	sub_822AD548(ctx, base);
	// b 0x821ed2f4
	goto loc_821ED2F4;
loc_821ED2E4:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x821ED2F0;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_821ED2F4:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b1c50
	ctx.lr = 0x821ED2FC;
	sub_822B1C50(ctx, base);
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r9,r10,0,9,7
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFF7FFFFF;
	// bne cr6,0x821ed314
	if (!ctx.cr6.eq) goto loc_821ED314;
	// oris r9,r10,128
	ctx.r9.u64 = ctx.r10.u64 | 8388608;
loc_821ED314:
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
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

PPC_WEAK_FUNC(sub_821ED290) {
	__imp__sub_821ED290(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821ED32C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821ED32C) {
	__imp__sub_821ED32C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821ED330) {
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
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// lhz r10,118(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 118);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821ed384
	if (!ctx.cr6.eq) goto loc_821ED384;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// lhz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 116);
	// addi r11,r10,26552
	ctx.r11.s64 = ctx.r10.s64 + 26552;
	// mulli r10,r4,624
	ctx.r10.s64 = ctx.r4.s64 * 624;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r9,264(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821ed394
	if (!ctx.cr6.eq) goto loc_821ED394;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17480
	ctx.r3.s64 = ctx.r11.s64 + -17480;
	// bl 0x822e84f0
	ctx.lr = 0x821ED37C;
	sub_822E84F0(ctx, base);
	// bl 0x822ad548
	ctx.lr = 0x821ED380;
	sub_822AD548(ctx, base);
	// b 0x821ed394
	goto loc_821ED394;
loc_821ED384:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x821ED390;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_821ED394:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b1c50
	ctx.lr = 0x821ED39C;
	sub_822B1C50(ctx, base);
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r9,r10,0,8,6
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFEFFFFFF;
	// bne cr6,0x821ed3b4
	if (!ctx.cr6.eq) goto loc_821ED3B4;
	// oris r9,r10,256
	ctx.r9.u64 = ctx.r10.u64 | 16777216;
loc_821ED3B4:
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
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

PPC_WEAK_FUNC(sub_821ED330) {
	__imp__sub_821ED330(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821ED3CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821ED3CC) {
	__imp__sub_821ED3CC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821ED3D0) {
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
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// lhz r10,118(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 118);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821ed424
	if (!ctx.cr6.eq) goto loc_821ED424;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// lhz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 116);
	// addi r11,r10,26552
	ctx.r11.s64 = ctx.r10.s64 + 26552;
	// mulli r10,r4,624
	ctx.r10.s64 = ctx.r4.s64 * 624;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r9,264(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821ed434
	if (!ctx.cr6.eq) goto loc_821ED434;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17480
	ctx.r3.s64 = ctx.r11.s64 + -17480;
	// bl 0x822e84f0
	ctx.lr = 0x821ED41C;
	sub_822E84F0(ctx, base);
	// bl 0x822ad548
	ctx.lr = 0x821ED420;
	sub_822AD548(ctx, base);
	// b 0x821ed434
	goto loc_821ED434;
loc_821ED424:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x821ED430;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_821ED434:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b1c50
	ctx.lr = 0x821ED43C;
	sub_822B1C50(ctx, base);
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r9,r10,0,7,5
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFDFFFFFF;
	// bne cr6,0x821ed454
	if (!ctx.cr6.eq) goto loc_821ED454;
	// oris r9,r10,512
	ctx.r9.u64 = ctx.r10.u64 | 33554432;
loc_821ED454:
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
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

PPC_WEAK_FUNC(sub_821ED3D0) {
	__imp__sub_821ED3D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821ED46C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821ED46C) {
	__imp__sub_821ED46C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821ED470) {
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
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// lhz r10,118(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 118);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821ed4c4
	if (!ctx.cr6.eq) goto loc_821ED4C4;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// lhz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 116);
	// addi r11,r10,26552
	ctx.r11.s64 = ctx.r10.s64 + 26552;
	// mulli r10,r4,624
	ctx.r10.s64 = ctx.r4.s64 * 624;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r9,264(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821ed4d4
	if (!ctx.cr6.eq) goto loc_821ED4D4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17480
	ctx.r3.s64 = ctx.r11.s64 + -17480;
	// bl 0x822e84f0
	ctx.lr = 0x821ED4BC;
	sub_822E84F0(ctx, base);
	// bl 0x822ad548
	ctx.lr = 0x821ED4C0;
	sub_822AD548(ctx, base);
	// b 0x821ed4d4
	goto loc_821ED4D4;
loc_821ED4C4:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x821ED4D0;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_821ED4D4:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b1c50
	ctx.lr = 0x821ED4DC;
	sub_822B1C50(ctx, base);
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r9,r10,0,6,4
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFBFFFFFF;
	// bne cr6,0x821ed4f4
	if (!ctx.cr6.eq) goto loc_821ED4F4;
	// oris r9,r10,1024
	ctx.r9.u64 = ctx.r10.u64 | 67108864;
loc_821ED4F4:
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
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

PPC_WEAK_FUNC(sub_821ED470) {
	__imp__sub_821ED470(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821ED50C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821ED50C) {
	__imp__sub_821ED50C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821ED510) {
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
	// stw r3,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r3.u32);
	// lhz r10,150(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 150);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lhz r30,148(r1)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r1.u32 + 148);
	// bne cr6,0x821ed570
	if (!ctx.cr6.eq) goto loc_821ED570;
	// lis r11,-32052
	ctx.r11.s64 = -2100559872;
	// clrlwi r4,r30,16
	ctx.r4.u64 = ctx.r30.u32 & 0xFFFF;
	// addi r11,r11,26552
	ctx.r11.s64 = ctx.r11.s64 + 26552;
	// mulli r10,r4,624
	ctx.r10.s64 = ctx.r4.s64 * 624;
	// addi r9,r11,264
	ctx.r9.s64 = ctx.r11.s64 + 264;
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x821ed57c
	if (!ctx.cr6.eq) goto loc_821ED57C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17480
	ctx.r3.s64 = ctx.r11.s64 + -17480;
	// bl 0x822e84f0
	ctx.lr = 0x821ED56C;
	sub_822E84F0(ctx, base);
	// b 0x821ed578
	goto loc_821ED578;
loc_821ED570:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
loc_821ED578:
	// bl 0x822ad548
	ctx.lr = 0x821ED57C;
	sub_822AD548(ctx, base);
loc_821ED57C:
	// bl 0x822acb68
	ctx.lr = 0x821ED580;
	sub_822ACB68(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// blt cr6,0x821ed634
	if (ctx.cr6.lt) goto loc_821ED634;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bgt cr6,0x821ed634
	if (ctx.cr6.gt) goto loc_821ED634;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b1fb0
	ctx.lr = 0x821ED59C;
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
	// blt cr6,0x821ed628
	if (ctx.cr6.lt) goto loc_821ED628;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f30,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f30.f64 = double(temp.f32);
	// fcmpu cr6,f1,f30
	ctx.cr6.compare(ctx.f1.f64, ctx.f30.f64);
	// bgt cr6,0x821ed628
	if (ctx.cr6.gt) goto loc_821ED628;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// bne cr6,0x821ed5ec
	if (!ctx.cr6.eq) goto loc_821ED5EC;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822b1c50
	ctx.lr = 0x821ED5D0;
	sub_822B1C50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x821ed614
	if (ctx.cr6.lt) goto loc_821ED614;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bge cr6,0x821ed614
	if (!ctx.cr6.lt) goto loc_821ED614;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x821ed5ec
	if (!ctx.cr6.eq) goto loc_821ED5EC;
	// fsubs f31,f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f30.f64 - ctx.f31.f64));
loc_821ED5EC:
	// stfd f31,24(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 24, ctx.f31.u64);
	// ld r4,24(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 24);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// addi r3,r11,-13112
	ctx.r3.s64 = ctx.r11.s64 + -13112;
	// bl 0x822e84f0
	ctx.lr = 0x821ED604;
	sub_822E84F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// clrlwi r3,r30,16
	ctx.r3.u64 = ctx.r30.u32 & 0xFFFF;
	// bl 0x8233cae8
	ctx.lr = 0x821ED610;
	sub_8233CAE8(ctx, base);
	// b 0x821ed640
	goto loc_821ED640;
loc_821ED614:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r11,-13148
	ctx.r3.s64 = ctx.r11.s64 + -13148;
	// bl 0x822e84f0
	ctx.lr = 0x821ED624;
	sub_822E84F0(ctx, base);
	// b 0x821ed63c
	goto loc_821ED63C;
loc_821ED628:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-13180
	ctx.r3.s64 = ctx.r11.s64 + -13180;
	// b 0x821ed63c
	goto loc_821ED63C;
loc_821ED634:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-13212
	ctx.r3.s64 = ctx.r11.s64 + -13212;
loc_821ED63C:
	// bl 0x822ad350
	ctx.lr = 0x821ED640;
	sub_822AD350(ctx, base);
loc_821ED640:
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

PPC_WEAK_FUNC(sub_821ED510) {
	__imp__sub_821ED510(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821ED660) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r11,-13032
	ctx.r4.s64 = ctx.r11.s64 + -13032;
	// li r30,5
	ctx.r30.s64 = 5;
	// bl 0x822e8058
	ctx.lr = 0x821ED688;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821ed720
	if (ctx.cr6.eq) goto loc_821ED720;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-13044
	ctx.r4.s64 = ctx.r11.s64 + -13044;
	// bl 0x822e8058
	ctx.lr = 0x821ED6A0;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821ed6b0
	if (!ctx.cr6.eq) goto loc_821ED6B0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x821ed720
	goto loc_821ED720;
loc_821ED6B0:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-13056
	ctx.r4.s64 = ctx.r11.s64 + -13056;
	// bl 0x822e8058
	ctx.lr = 0x821ED6C0;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821ed6d0
	if (!ctx.cr6.eq) goto loc_821ED6D0;
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x821ed720
	goto loc_821ED720;
loc_821ED6D0:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-13068
	ctx.r4.s64 = ctx.r11.s64 + -13068;
	// bl 0x822e8058
	ctx.lr = 0x821ED6E0;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821ed6f0
	if (!ctx.cr6.eq) goto loc_821ED6F0;
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x821ed720
	goto loc_821ED720;
loc_821ED6F0:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-13076
	ctx.r4.s64 = ctx.r11.s64 + -13076;
	// bl 0x822e8058
	ctx.lr = 0x821ED700;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821ed710
	if (!ctx.cr6.eq) goto loc_821ED710;
	// li r3,4
	ctx.r3.s64 = 4;
	// b 0x821ed720
	goto loc_821ED720;
loc_821ED710:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-13100
	ctx.r3.s64 = ctx.r11.s64 + -13100;
	// bl 0x822ad350
	ctx.lr = 0x821ED71C;
	sub_822AD350(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_821ED720:
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

PPC_WEAK_FUNC(sub_821ED660) {
	__imp__sub_821ED660(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821ED738) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x821ED740;
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
	// stw r3,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r3.u32);
	// lhz r10,166(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 166);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lhz r31,164(r1)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r1.u32 + 164);
	// bne cr6,0x821ed790
	if (!ctx.cr6.eq) goto loc_821ED790;
	// lis r11,-32052
	ctx.r11.s64 = -2100559872;
	// clrlwi r4,r31,16
	ctx.r4.u64 = ctx.r31.u32 & 0xFFFF;
	// addi r11,r11,26552
	ctx.r11.s64 = ctx.r11.s64 + 26552;
	// mulli r10,r4,624
	ctx.r10.s64 = ctx.r4.s64 * 624;
	// addi r9,r11,264
	ctx.r9.s64 = ctx.r11.s64 + 264;
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x821ed79c
	if (!ctx.cr6.eq) goto loc_821ED79C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17480
	ctx.r3.s64 = ctx.r11.s64 + -17480;
	// bl 0x822e84f0
	ctx.lr = 0x821ED78C;
	sub_822E84F0(ctx, base);
	// b 0x821ed798
	goto loc_821ED798;
loc_821ED790:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
loc_821ED798:
	// bl 0x822ad548
	ctx.lr = 0x821ED79C;
	sub_822AD548(ctx, base);
loc_821ED79C:
	// bl 0x822acb68
	ctx.lr = 0x821ED7A0;
	sub_822ACB68(ctx, base);
	// cmpwi cr6,r3,7
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 7, ctx.xer);
	// beq cr6,0x821ed7c4
	if (ctx.cr6.eq) goto loc_821ED7C4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-13212
	ctx.r3.s64 = ctx.r11.s64 + -13212;
	// bl 0x822ad350
	ctx.lr = 0x821ED7B4;
	sub_822AD350(ctx, base);
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
loc_821ED7C4:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b2288
	ctx.lr = 0x821ED7CC;
	sub_822B2288(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822b1c50
	ctx.lr = 0x821ED7D8;
	sub_822B1C50(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x822b1c50
	ctx.lr = 0x821ED7E4;
	sub_822B1C50(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x822b2288
	ctx.lr = 0x821ED7F0;
	sub_822B2288(ctx, base);
	// bl 0x821ed660
	ctx.lr = 0x821ED7F4;
	sub_821ED660(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x822b1fb0
	ctx.lr = 0x821ED800;
	sub_822B1FB0(ctx, base);
	// li r3,5
	ctx.r3.s64 = 5;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x822b1fb0
	ctx.lr = 0x821ED80C;
	sub_822B1FB0(ctx, base);
	// li r3,6
	ctx.r3.s64 = 6;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// bl 0x822b1fb0
	ctx.lr = 0x821ED818;
	sub_822B1FB0(ctx, base);
	// fmr f3,f1
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f1.f64;
	// stfd f30,64(r1)
	PPC_STORE_U64(ctx.r1.u32 + 64, ctx.f30.u64);
	// ld r9,64(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 64);
	// stfd f31,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.f31.u64);
	// ld r8,56(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 56);
	// stfd f3,72(r1)
	PPC_STORE_U64(ctx.r1.u32 + 72, ctx.f3.u64);
	// ld r10,72(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 72);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// addi r3,r11,-13024
	ctx.r3.s64 = ctx.r11.s64 + -13024;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822e84f0
	ctx.lr = 0x821ED858;
	sub_822E84F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// clrlwi r3,r31,16
	ctx.r3.u64 = ctx.r31.u32 & 0xFFFF;
	// bl 0x8233cae8
	ctx.lr = 0x821ED864;
	sub_8233CAE8(ctx, base);
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

PPC_WEAK_FUNC(sub_821ED738) {
	__imp__sub_821ED738(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821ED874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821ED874) {
	__imp__sub_821ED874(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821ED878) {
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
	// bl 0x822b2288
	ctx.lr = 0x821ED898;
	sub_822B2288(ctx, base);
	// bl 0x821ed660
	ctx.lr = 0x821ED89C;
	sub_821ED660(ctx, base);
	// stw r3,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r3.u32);
	// addi r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 1;
	// bl 0x822b1fb0
	ctx.lr = 0x821ED8A8;
	sub_822B1FB0(ctx, base);
	// stfs f1,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// addi r3,r31,2
	ctx.r3.s64 = ctx.r31.s64 + 2;
	// bl 0x822b1fb0
	ctx.lr = 0x821ED8B4;
	sub_822B1FB0(ctx, base);
	// stfs f1,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// addi r3,r31,3
	ctx.r3.s64 = ctx.r31.s64 + 3;
	// bl 0x822b1fb0
	ctx.lr = 0x821ED8C0;
	sub_822B1FB0(ctx, base);
	// stfs f1,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
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

PPC_WEAK_FUNC(sub_821ED878) {
	__imp__sub_821ED878(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821ED8DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821ED8DC) {
	__imp__sub_821ED8DC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821ED8E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x821ED8E8;
	__savegprlr_27(ctx, base);
	// stfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f30.u64);
	// stfd f31,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r3.u32);
	// lhz r10,278(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 278);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lhz r27,276(r1)
	ctx.r27.u64 = PPC_LOAD_U16(ctx.r1.u32 + 276);
	// bne cr6,0x821ed938
	if (!ctx.cr6.eq) goto loc_821ED938;
	// lis r11,-32052
	ctx.r11.s64 = -2100559872;
	// clrlwi r4,r27,16
	ctx.r4.u64 = ctx.r27.u32 & 0xFFFF;
	// addi r11,r11,26552
	ctx.r11.s64 = ctx.r11.s64 + 26552;
	// mulli r10,r4,624
	ctx.r10.s64 = ctx.r4.s64 * 624;
	// addi r9,r11,264
	ctx.r9.s64 = ctx.r11.s64 + 264;
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x821ed944
	if (!ctx.cr6.eq) goto loc_821ED944;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17480
	ctx.r3.s64 = ctx.r11.s64 + -17480;
	// bl 0x822e84f0
	ctx.lr = 0x821ED934;
	sub_822E84F0(ctx, base);
	// b 0x821ed940
	goto loc_821ED940;
loc_821ED938:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
loc_821ED940:
	// bl 0x822ad548
	ctx.lr = 0x821ED944;
	sub_822AD548(ctx, base);
loc_821ED944:
	// bl 0x822acb68
	ctx.lr = 0x821ED948;
	sub_822ACB68(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,14
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 14, ctx.xer);
	// beq cr6,0x821ed988
	if (ctx.cr6.eq) goto loc_821ED988;
	// cmpwi cr6,r3,10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 10, ctx.xer);
	// beq cr6,0x821ed988
	if (ctx.cr6.eq) goto loc_821ED988;
	// cmpwi cr6,r3,6
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 6, ctx.xer);
	// beq cr6,0x821ed988
	if (ctx.cr6.eq) goto loc_821ED988;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-12876
	ctx.r3.s64 = ctx.r11.s64 + -12876;
	// bl 0x822e84f0
	ctx.lr = 0x821ED974;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x821ED978;
	sub_822AD350(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_821ED988:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b2288
	ctx.lr = 0x821ED990;
	sub_822B2288(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822b1c50
	ctx.lr = 0x821ED99C;
	sub_822B1C50(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x822b2288
	ctx.lr = 0x821ED9A8;
	sub_822B2288(ctx, base);
	// bl 0x821ed660
	ctx.lr = 0x821ED9AC;
	sub_821ED660(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r3,3
	ctx.r3.s64 = 3;
	// stw r28,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r28.u32);
	// bl 0x822b1fb0
	ctx.lr = 0x821ED9BC;
	sub_822B1FB0(ctx, base);
	// li r3,4
	ctx.r3.s64 = 4;
	// stfs f1,144(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// fmr f30,f1
	ctx.f30.f64 = ctx.f1.f64;
	// bl 0x822b1fb0
	ctx.lr = 0x821ED9CC;
	sub_822B1FB0(ctx, base);
	// li r3,5
	ctx.r3.s64 = 5;
	// stfs f1,148(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x822b1fb0
	ctx.lr = 0x821ED9DC;
	sub_822B1FB0(ctx, base);
	// stfs f1,152(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// fmr f3,f1
	ctx.f3.f64 = ctx.f1.f64;
	// cmpwi cr6,r29,10
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 10, ctx.xer);
	// blt cr6,0x821eda08
	if (ctx.cr6.lt) goto loc_821EDA08;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// li r3,6
	ctx.r3.s64 = 6;
	// bl 0x821ed878
	ctx.lr = 0x821ED9F8;
	sub_821ED878(ctx, base);
	// lfs f3,152(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f3.f64 = double(temp.f32);
	// lwz r28,156(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// lfs f31,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f30.f64 = double(temp.f32);
loc_821EDA08:
	// cmpwi cr6,r29,14
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 14, ctx.xer);
	// bne cr6,0x821edab0
	if (!ctx.cr6.eq) goto loc_821EDAB0;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x821ed878
	ctx.lr = 0x821EDA1C;
	sub_821ED878(ctx, base);
	// lfs f2,148(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f2.f64 = double(temp.f32);
	// lfs f3,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f3.f64 = double(temp.f32);
	// lwz r11,188(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// lfs f1,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f1.f64 = double(temp.f32);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stfd f2,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.f2.u64);
	// ld r8,56(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 56);
	// stfd f3,64(r1)
	PPC_STORE_U64(ctx.r1.u32 + 64, ctx.f3.u64);
	// ld r9,64(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 64);
	// stfd f1,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.f1.u64);
	// ld r7,48(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 48);
	// addi r3,r10,-12928
	ctx.r3.s64 = ctx.r10.s64 + -12928;
	// lfs f9,184(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	ctx.f9.f64 = double(temp.f32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lfs f8,180(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	ctx.f8.f64 = double(temp.f32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lfs f7,176(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,168(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f6.f64 = double(temp.f32);
	// lwz r6,156(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// lfs f5,164(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f5.f64 = double(temp.f32);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// lfs f4,160(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f4.f64 = double(temp.f32);
	// stfd f9,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.f9.u64);
	// stfd f8,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.f8.u64);
	// stfd f7,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.f7.u64);
	// stfd f6,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f6.u64);
	// stfd f5,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f5.u64);
	// stfd f4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f4.u64);
	// lwz r10,172(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// bl 0x822e84f0
	ctx.lr = 0x821EDA94;
	sub_822E84F0(ctx, base);
loc_821EDA94:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// clrlwi r3,r27,16
	ctx.r3.u64 = ctx.r27.u32 & 0xFFFF;
	// bl 0x8233cae8
	ctx.lr = 0x821EDAA0;
	sub_8233CAE8(ctx, base);
loc_821EDAA0:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_821EDAB0:
	// cmpwi cr6,r29,6
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 6, ctx.xer);
	// bne cr6,0x821edaf4
	if (!ctx.cr6.eq) goto loc_821EDAF4;
	// stfd f3,64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 64, ctx.f3.u64);
	// ld r9,64(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 64);
	// stfd f31,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.f31.u64);
	// ld r8,56(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 56);
	// stfd f30,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.f30.u64);
	// ld r7,48(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 48);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// addi r3,r11,-12956
	ctx.r3.s64 = ctx.r11.s64 + -12956;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822e84f0
	ctx.lr = 0x821EDAF0;
	sub_822E84F0(ctx, base);
	// b 0x821eda94
	goto loc_821EDA94;
loc_821EDAF4:
	// cmpwi cr6,r29,10
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 10, ctx.xer);
	// bne cr6,0x821edaa0
	if (!ctx.cr6.eq) goto loc_821EDAA0;
	// stfd f3,64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 64, ctx.f3.u64);
	// ld r9,64(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 64);
	// lfs f6,168(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f6.f64 = double(temp.f32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f5,164(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f5.f64 = double(temp.f32);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// lfs f4,160(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f4.f64 = double(temp.f32);
	// addi r3,r11,-12996
	ctx.r3.s64 = ctx.r11.s64 + -12996;
	// stfd f31,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.f31.u64);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stfd f30,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.f30.u64);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stfd f6,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f6.u64);
	// lwz r10,172(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// stfd f5,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f5.u64);
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// stfd f4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f4.u64);
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// ld r8,56(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 56);
	// ld r7,48(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 48);
	// bl 0x822e84f0
	ctx.lr = 0x821EDB50;
	sub_822E84F0(ctx, base);
	// b 0x821eda94
	goto loc_821EDA94;
}

PPC_WEAK_FUNC(sub_821ED8E0) {
	__imp__sub_821ED8E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821EDB54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821EDB54) {
	__imp__sub_821EDB54(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821EDB58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x821EDB60;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r3.u32);
	// lhz r10,134(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 134);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lhz r29,132(r1)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r1.u32 + 132);
	// bne cr6,0x821edba8
	if (!ctx.cr6.eq) goto loc_821EDBA8;
	// lis r11,-32052
	ctx.r11.s64 = -2100559872;
	// clrlwi r4,r29,16
	ctx.r4.u64 = ctx.r29.u32 & 0xFFFF;
	// addi r11,r11,26552
	ctx.r11.s64 = ctx.r11.s64 + 26552;
	// mulli r10,r4,624
	ctx.r10.s64 = ctx.r4.s64 * 624;
	// addi r9,r11,264
	ctx.r9.s64 = ctx.r11.s64 + 264;
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x821edbb4
	if (!ctx.cr6.eq) goto loc_821EDBB4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17480
	ctx.r3.s64 = ctx.r11.s64 + -17480;
	// bl 0x822e84f0
	ctx.lr = 0x821EDBA4;
	sub_822E84F0(ctx, base);
	// b 0x821edbb0
	goto loc_821EDBB0;
loc_821EDBA8:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
loc_821EDBB0:
	// bl 0x822ad548
	ctx.lr = 0x821EDBB4;
	sub_822AD548(ctx, base);
loc_821EDBB4:
	// bl 0x822acb68
	ctx.lr = 0x821EDBB8;
	sub_822ACB68(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// blt cr6,0x821edc7c
	if (ctx.cr6.lt) goto loc_821EDC7C;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bgt cr6,0x821edc7c
	if (ctx.cr6.gt) goto loc_821EDC7C;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b1c50
	ctx.lr = 0x821EDBD4;
	sub_822B1C50(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// beq cr6,0x821edc4c
	if (ctx.cr6.eq) goto loc_821EDC4C;
	// cmpwi cr6,r30,3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 3, ctx.xer);
	// beq cr6,0x821edc0c
	if (ctx.cr6.eq) goto loc_821EDC0C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-12768
	ctx.r3.s64 = ctx.r11.s64 + -12768;
	// bl 0x822e84f0
	ctx.lr = 0x821EDBF8;
	sub_822E84F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// clrlwi r3,r29,16
	ctx.r3.u64 = ctx.r29.u32 & 0xFFFF;
	// bl 0x8233cae8
	ctx.lr = 0x821EDC04;
	sub_8233CAE8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_821EDC0C:
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x822b1c50
	ctx.lr = 0x821EDC14;
	sub_822B1C50(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822b2288
	ctx.lr = 0x821EDC20;
	sub_822B2288(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r11,-12792
	ctx.r3.s64 = ctx.r11.s64 + -12792;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822e84f0
	ctx.lr = 0x821EDC38;
	sub_822E84F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// clrlwi r3,r29,16
	ctx.r3.u64 = ctx.r29.u32 & 0xFFFF;
	// bl 0x8233cae8
	ctx.lr = 0x821EDC44;
	sub_8233CAE8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_821EDC4C:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822b2288
	ctx.lr = 0x821EDC54;
	sub_822B2288(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r11,-12816
	ctx.r3.s64 = ctx.r11.s64 + -12816;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822e84f0
	ctx.lr = 0x821EDC68;
	sub_822E84F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// clrlwi r3,r29,16
	ctx.r3.u64 = ctx.r29.u32 & 0xFFFF;
	// bl 0x8233cae8
	ctx.lr = 0x821EDC74;
	sub_8233CAE8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_821EDC7C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-13212
	ctx.r3.s64 = ctx.r11.s64 + -13212;
	// bl 0x822ad350
	ctx.lr = 0x821EDC88;
	sub_822AD350(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821EDB58) {
	__imp__sub_821EDB58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821EDC90) {
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
	// stw r3,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r3.u32);
	// lhz r9,134(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 134);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// addi r30,r11,26552
	ctx.r30.s64 = ctx.r11.s64 + 26552;
	// bne cr6,0x821edce8
	if (!ctx.cr6.eq) goto loc_821EDCE8;
	// lhz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 132);
	// mulli r11,r4,624
	ctx.r11.s64 = ctx.r4.s64 * 624;
	// add r31,r11,r30
	ctx.r31.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r10,264(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821edcf8
	if (!ctx.cr6.eq) goto loc_821EDCF8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17480
	ctx.r3.s64 = ctx.r11.s64 + -17480;
	// bl 0x822e84f0
	ctx.lr = 0x821EDCE0;
	sub_822E84F0(ctx, base);
	// bl 0x822ad548
	ctx.lr = 0x821EDCE4;
	sub_822AD548(ctx, base);
	// b 0x821edcf8
	goto loc_821EDCF8;
loc_821EDCE8:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x821EDCF4;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_821EDCF8:
	// lis r11,0
	ctx.r11.s64 = 0;
	// lwz r10,264(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// ori r9,r11,44444
	ctx.r9.u64 = ctx.r11.u64 | 44444;
	// lhzx r11,r10,r9
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821edd30
	if (ctx.cr6.eq) goto loc_821EDD30;
	// mulli r11,r11,624
	ctx.r11.s64 = ctx.r11.s64 * 624;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r31,r11,-624
	ctx.r31.s64 = ctx.r11.s64 + -624;
	// bl 0x82229bf0
	ctx.lr = 0x821EDD24;
	sub_82229BF0(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// beq cr6,0x821edd34
	if (ctx.cr6.eq) goto loc_821EDD34;
loc_821EDD30:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821EDD34:
	// bl 0x822acbf8
	ctx.lr = 0x821EDD38;
	sub_822ACBF8(ctx, base);
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

PPC_WEAK_FUNC(sub_821EDC90) {
	__imp__sub_821EDC90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821EDD50) {
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
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// lhz r10,118(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 118);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821edda4
	if (!ctx.cr6.eq) goto loc_821EDDA4;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// lhz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 116);
	// addi r11,r10,26552
	ctx.r11.s64 = ctx.r10.s64 + 26552;
	// mulli r10,r4,624
	ctx.r10.s64 = ctx.r4.s64 * 624;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r9,264(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821eddb4
	if (!ctx.cr6.eq) goto loc_821EDDB4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17480
	ctx.r3.s64 = ctx.r11.s64 + -17480;
	// bl 0x822e84f0
	ctx.lr = 0x821EDD9C;
	sub_822E84F0(ctx, base);
	// bl 0x822ad548
	ctx.lr = 0x821EDDA0;
	sub_822AD548(ctx, base);
	// b 0x821eddb4
	goto loc_821EDDB4;
loc_821EDDA4:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x821EDDB0;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_821EDDB4:
	// lwz r10,264(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// lwz r11,504(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 504);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x821ede14
	if (ctx.cr6.eq) goto loc_821EDE14;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// beq cr6,0x821ede14
	if (ctx.cr6.eq) goto loc_821EDE14;
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// beq cr6,0x821ede14
	if (ctx.cr6.eq) goto loc_821EDE14;
	// cmpwi cr6,r11,14
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 14, ctx.xer);
	// beq cr6,0x821ede14
	if (ctx.cr6.eq) goto loc_821EDE14;
	// cmpwi cr6,r11,15
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 15, ctx.xer);
	// beq cr6,0x821ede14
	if (ctx.cr6.eq) goto loc_821EDE14;
	// lwz r11,532(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 532);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x821ede14
	if (ctx.cr6.eq) goto loc_821EDE14;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// beq cr6,0x821ede14
	if (ctx.cr6.eq) goto loc_821EDE14;
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// beq cr6,0x821ede14
	if (ctx.cr6.eq) goto loc_821EDE14;
	// cmpwi cr6,r11,14
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 14, ctx.xer);
	// beq cr6,0x821ede14
	if (ctx.cr6.eq) goto loc_821EDE14;
	// cmpwi cr6,r11,15
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 15, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x821ede18
	if (!ctx.cr6.eq) goto loc_821EDE18;
loc_821EDE14:
	// li r11,1
	ctx.r11.s64 = 1;
loc_821EDE18:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x822acb78
	ctx.lr = 0x821EDE20;
	sub_822ACB78(ctx, base);
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

PPC_WEAK_FUNC(sub_821EDD50) {
	__imp__sub_821EDD50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821EDE34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821EDE34) {
	__imp__sub_821EDE34(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821EDE38) {
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
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// lhz r10,118(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 118);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821ede8c
	if (!ctx.cr6.eq) goto loc_821EDE8C;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// lhz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 116);
	// addi r11,r10,26552
	ctx.r11.s64 = ctx.r10.s64 + 26552;
	// mulli r10,r4,624
	ctx.r10.s64 = ctx.r4.s64 * 624;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r9,264(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821ede9c
	if (!ctx.cr6.eq) goto loc_821EDE9C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17480
	ctx.r3.s64 = ctx.r11.s64 + -17480;
	// bl 0x822e84f0
	ctx.lr = 0x821EDE84;
	sub_822E84F0(ctx, base);
	// bl 0x822ad548
	ctx.lr = 0x821EDE88;
	sub_822AD548(ctx, base);
	// b 0x821ede9c
	goto loc_821EDE9C;
loc_821EDE8C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x821EDE98;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_821EDE9C:
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// lwz r11,504(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 504);
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// blt cr6,0x821edeb8
	if (ctx.cr6.lt) goto loc_821EDEB8;
	// cmpwi cr6,r11,21
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 21, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x821edebc
	if (!ctx.cr6.gt) goto loc_821EDEBC;
loc_821EDEB8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_821EDEBC:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x822acb78
	ctx.lr = 0x821EDEC4;
	sub_822ACB78(ctx, base);
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

PPC_WEAK_FUNC(sub_821EDE38) {
	__imp__sub_821EDE38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821EDED8) {
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
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// lhz r10,118(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 118);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821edf2c
	if (!ctx.cr6.eq) goto loc_821EDF2C;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// lhz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 116);
	// addi r11,r10,26552
	ctx.r11.s64 = ctx.r10.s64 + 26552;
	// mulli r10,r4,624
	ctx.r10.s64 = ctx.r4.s64 * 624;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r9,264(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821edf3c
	if (!ctx.cr6.eq) goto loc_821EDF3C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17480
	ctx.r3.s64 = ctx.r11.s64 + -17480;
	// bl 0x822e84f0
	ctx.lr = 0x821EDF24;
	sub_822E84F0(ctx, base);
	// bl 0x822ad548
	ctx.lr = 0x821EDF28;
	sub_822AD548(ctx, base);
	// b 0x821edf3c
	goto loc_821EDF3C;
loc_821EDF2C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x821EDF38;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_821EDF3C:
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// lwz r11,504(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 504);
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// beq cr6,0x821edf60
	if (ctx.cr6.eq) goto loc_821EDF60;
	// cmpwi cr6,r11,14
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 14, ctx.xer);
	// beq cr6,0x821edf60
	if (ctx.cr6.eq) goto loc_821EDF60;
	// cmpwi cr6,r11,15
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 15, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x821edf64
	if (!ctx.cr6.eq) goto loc_821EDF64;
loc_821EDF60:
	// li r11,1
	ctx.r11.s64 = 1;
loc_821EDF64:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x822acb78
	ctx.lr = 0x821EDF6C;
	sub_822ACB78(ctx, base);
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

PPC_WEAK_FUNC(sub_821EDED8) {
	__imp__sub_821EDED8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821EDF80) {
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
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// lhz r10,118(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 118);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821edfd4
	if (!ctx.cr6.eq) goto loc_821EDFD4;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// lhz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 116);
	// addi r11,r10,26552
	ctx.r11.s64 = ctx.r10.s64 + 26552;
	// mulli r10,r4,624
	ctx.r10.s64 = ctx.r4.s64 * 624;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r9,264(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821edfe4
	if (!ctx.cr6.eq) goto loc_821EDFE4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17480
	ctx.r3.s64 = ctx.r11.s64 + -17480;
	// bl 0x822e84f0
	ctx.lr = 0x821EDFCC;
	sub_822E84F0(ctx, base);
	// bl 0x822ad548
	ctx.lr = 0x821EDFD0;
	sub_822AD548(ctx, base);
	// b 0x821edfe4
	goto loc_821EDFE4;
loc_821EDFD4:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x821EDFE0;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_821EDFE4:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b1c50
	ctx.lr = 0x821EDFEC;
	sub_822B1C50(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// lwz r10,264(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ori r8,r11,44556
	ctx.r8.u64 = ctx.r11.u64 | 44556;
	// li r9,0
	ctx.r9.s64 = 0;
	// bne cr6,0x821ee008
	if (!ctx.cr6.eq) goto loc_821EE008;
	// li r9,1
	ctx.r9.s64 = 1;
loc_821EE008:
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

PPC_WEAK_FUNC(sub_821EDF80) {
	__imp__sub_821EDF80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821EE020) {
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
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// lhz r10,118(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 118);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821ee074
	if (!ctx.cr6.eq) goto loc_821EE074;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// lhz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 116);
	// addi r11,r10,26552
	ctx.r11.s64 = ctx.r10.s64 + 26552;
	// mulli r10,r4,624
	ctx.r10.s64 = ctx.r4.s64 * 624;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r9,264(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821ee084
	if (!ctx.cr6.eq) goto loc_821EE084;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17480
	ctx.r3.s64 = ctx.r11.s64 + -17480;
	// bl 0x822e84f0
	ctx.lr = 0x821EE06C;
	sub_822E84F0(ctx, base);
	// bl 0x822ad548
	ctx.lr = 0x821EE070;
	sub_822AD548(ctx, base);
	// b 0x821ee084
	goto loc_821EE084;
loc_821EE074:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x821EE080;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_821EE084:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b1c50
	ctx.lr = 0x821EE08C;
	sub_822B1C50(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// lwz r10,264(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// addic r9,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r9.s64 = ctx.r3.s64 + -1;
	// ori r8,r11,44573
	ctx.r8.u64 = ctx.r11.u64 | 44573;
	// subfe r7,r9,r3
	temp.u8 = (~ctx.r9.u32 + ctx.r3.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r9.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stbx r7,r10,r8
	PPC_STORE_U8(ctx.r10.u32 + ctx.r8.u32, ctx.r7.u8);
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

PPC_WEAK_FUNC(sub_821EE020) {
	__imp__sub_821EE020(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821EE0B8) {
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
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// lhz r10,118(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 118);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821ee10c
	if (!ctx.cr6.eq) goto loc_821EE10C;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// lhz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 116);
	// addi r11,r10,26552
	ctx.r11.s64 = ctx.r10.s64 + 26552;
	// mulli r10,r4,624
	ctx.r10.s64 = ctx.r4.s64 * 624;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r9,264(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821ee11c
	if (!ctx.cr6.eq) goto loc_821EE11C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17480
	ctx.r3.s64 = ctx.r11.s64 + -17480;
	// bl 0x822e84f0
	ctx.lr = 0x821EE104;
	sub_822E84F0(ctx, base);
	// bl 0x822ad548
	ctx.lr = 0x821EE108;
	sub_822AD548(ctx, base);
	// b 0x821ee11c
	goto loc_821EE11C;
loc_821EE10C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x821EE118;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_821EE11C:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b1c50
	ctx.lr = 0x821EE124;
	sub_822B1C50(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// lwz r10,264(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// addic r9,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r9.s64 = ctx.r3.s64 + -1;
	// ori r8,r11,44574
	ctx.r8.u64 = ctx.r11.u64 | 44574;
	// subfe r7,r9,r3
	temp.u8 = (~ctx.r9.u32 + ctx.r3.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r9.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stbx r7,r10,r8
	PPC_STORE_U8(ctx.r10.u32 + ctx.r8.u32, ctx.r7.u8);
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

PPC_WEAK_FUNC(sub_821EE0B8) {
	__imp__sub_821EE0B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821EE150) {
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
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// lhz r10,118(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 118);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821ee1a4
	if (!ctx.cr6.eq) goto loc_821EE1A4;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// lhz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 116);
	// addi r11,r10,26552
	ctx.r11.s64 = ctx.r10.s64 + 26552;
	// mulli r10,r4,624
	ctx.r10.s64 = ctx.r4.s64 * 624;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r9,264(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821ee1b4
	if (!ctx.cr6.eq) goto loc_821EE1B4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17480
	ctx.r3.s64 = ctx.r11.s64 + -17480;
	// bl 0x822e84f0
	ctx.lr = 0x821EE19C;
	sub_822E84F0(ctx, base);
	// bl 0x822ad548
	ctx.lr = 0x821EE1A0;
	sub_822AD548(ctx, base);
	// b 0x821ee1b4
	goto loc_821EE1B4;
loc_821EE1A4:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x821EE1B0;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_821EE1B4:
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// lwz r10,700(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 700);
	// rlwinm r9,r10,0,26,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFBF;
	// stw r9,700(r11)
	PPC_STORE_U32(ctx.r11.u32 + 700, ctx.r9.u32);
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

PPC_WEAK_FUNC(sub_821EE150) {
	__imp__sub_821EE150(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821EE1D8) {
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
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// lhz r10,118(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 118);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821ee22c
	if (!ctx.cr6.eq) goto loc_821EE22C;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// lhz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 116);
	// addi r11,r10,26552
	ctx.r11.s64 = ctx.r10.s64 + 26552;
	// mulli r10,r4,624
	ctx.r10.s64 = ctx.r4.s64 * 624;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r9,264(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821ee23c
	if (!ctx.cr6.eq) goto loc_821EE23C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17480
	ctx.r3.s64 = ctx.r11.s64 + -17480;
	// bl 0x822e84f0
	ctx.lr = 0x821EE224;
	sub_822E84F0(ctx, base);
	// bl 0x822ad548
	ctx.lr = 0x821EE228;
	sub_822AD548(ctx, base);
	// b 0x821ee23c
	goto loc_821EE23C;
loc_821EE22C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x821EE238;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_821EE23C:
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// ori r9,r10,1
	ctx.r9.u64 = ctx.r10.u64 | 1;
	// stw r9,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r9.u32);
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

PPC_WEAK_FUNC(sub_821EE1D8) {
	__imp__sub_821EE1D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821EE260) {
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
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// lhz r10,118(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 118);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821ee2b4
	if (!ctx.cr6.eq) goto loc_821EE2B4;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// lhz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 116);
	// addi r11,r10,26552
	ctx.r11.s64 = ctx.r10.s64 + 26552;
	// mulli r10,r4,624
	ctx.r10.s64 = ctx.r4.s64 * 624;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r9,264(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821ee2c4
	if (!ctx.cr6.eq) goto loc_821EE2C4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17480
	ctx.r3.s64 = ctx.r11.s64 + -17480;
	// bl 0x822e84f0
	ctx.lr = 0x821EE2AC;
	sub_822E84F0(ctx, base);
	// bl 0x822ad548
	ctx.lr = 0x821EE2B0;
	sub_822AD548(ctx, base);
	// b 0x821ee2c4
	goto loc_821EE2C4;
loc_821EE2B4:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x821EE2C0;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_821EE2C4:
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// rlwinm r9,r10,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r9,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r9.u32);
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

PPC_WEAK_FUNC(sub_821EE260) {
	__imp__sub_821EE260(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821EE2E8) {
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
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// lhz r10,118(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 118);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821ee33c
	if (!ctx.cr6.eq) goto loc_821EE33C;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// lhz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 116);
	// addi r11,r10,26552
	ctx.r11.s64 = ctx.r10.s64 + 26552;
	// mulli r10,r4,624
	ctx.r10.s64 = ctx.r4.s64 * 624;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r9,264(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821ee34c
	if (!ctx.cr6.eq) goto loc_821EE34C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17480
	ctx.r3.s64 = ctx.r11.s64 + -17480;
	// bl 0x822e84f0
	ctx.lr = 0x821EE334;
	sub_822E84F0(ctx, base);
	// bl 0x822ad548
	ctx.lr = 0x821EE338;
	sub_822AD548(ctx, base);
	// b 0x821ee34c
	goto loc_821EE34C;
loc_821EE33C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x821EE348;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_821EE34C:
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// ori r9,r10,4096
	ctx.r9.u64 = ctx.r10.u64 | 4096;
	// stw r9,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r9.u32);
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

PPC_WEAK_FUNC(sub_821EE2E8) {
	__imp__sub_821EE2E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821EE370) {
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
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// lhz r10,118(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 118);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821ee3c4
	if (!ctx.cr6.eq) goto loc_821EE3C4;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// lhz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 116);
	// addi r11,r10,26552
	ctx.r11.s64 = ctx.r10.s64 + 26552;
	// mulli r10,r4,624
	ctx.r10.s64 = ctx.r4.s64 * 624;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r9,264(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821ee3d4
	if (!ctx.cr6.eq) goto loc_821EE3D4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17480
	ctx.r3.s64 = ctx.r11.s64 + -17480;
	// bl 0x822e84f0
	ctx.lr = 0x821EE3BC;
	sub_822E84F0(ctx, base);
	// bl 0x822ad548
	ctx.lr = 0x821EE3C0;
	sub_822AD548(ctx, base);
	// b 0x821ee3d4
	goto loc_821EE3D4;
loc_821EE3C4:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x821EE3D0;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_821EE3D4:
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// rlwinm r9,r10,0,20,18
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFEFFF;
	// stw r9,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r9.u32);
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

PPC_WEAK_FUNC(sub_821EE370) {
	__imp__sub_821EE370(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821EE3F8) {
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
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// lhz r10,118(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 118);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821ee44c
	if (!ctx.cr6.eq) goto loc_821EE44C;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// lhz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 116);
	// addi r11,r10,26552
	ctx.r11.s64 = ctx.r10.s64 + 26552;
	// mulli r10,r4,624
	ctx.r10.s64 = ctx.r4.s64 * 624;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r9,264(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821ee45c
	if (!ctx.cr6.eq) goto loc_821EE45C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17480
	ctx.r3.s64 = ctx.r11.s64 + -17480;
	// bl 0x822e84f0
	ctx.lr = 0x821EE444;
	sub_822E84F0(ctx, base);
	// bl 0x822ad548
	ctx.lr = 0x821EE448;
	sub_822AD548(ctx, base);
	// b 0x821ee45c
	goto loc_821EE45C;
loc_821EE44C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x821EE458;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_821EE45C:
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// ori r9,r10,8192
	ctx.r9.u64 = ctx.r10.u64 | 8192;
	// stw r9,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r9.u32);
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

PPC_WEAK_FUNC(sub_821EE3F8) {
	__imp__sub_821EE3F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821EE480) {
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
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// lhz r10,118(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 118);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821ee4d4
	if (!ctx.cr6.eq) goto loc_821EE4D4;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// lhz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 116);
	// addi r11,r10,26552
	ctx.r11.s64 = ctx.r10.s64 + 26552;
	// mulli r10,r4,624
	ctx.r10.s64 = ctx.r4.s64 * 624;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r9,264(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821ee4e4
	if (!ctx.cr6.eq) goto loc_821EE4E4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17480
	ctx.r3.s64 = ctx.r11.s64 + -17480;
	// bl 0x822e84f0
	ctx.lr = 0x821EE4CC;
	sub_822E84F0(ctx, base);
	// bl 0x822ad548
	ctx.lr = 0x821EE4D0;
	sub_822AD548(ctx, base);
	// b 0x821ee4e4
	goto loc_821EE4E4;
loc_821EE4D4:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x821EE4E0;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_821EE4E4:
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// rlwinm r9,r10,0,19,17
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFDFFF;
	// stw r9,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r9.u32);
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

PPC_WEAK_FUNC(sub_821EE480) {
	__imp__sub_821EE480(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821EE508) {
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
	// stw r3,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r3.u32);
	// lhz r10,134(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 134);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821ee560
	if (!ctx.cr6.eq) goto loc_821EE560;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// lhz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 132);
	// addi r11,r10,26552
	ctx.r11.s64 = ctx.r10.s64 + 26552;
	// mulli r10,r4,624
	ctx.r10.s64 = ctx.r4.s64 * 624;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r9,264(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821ee570
	if (!ctx.cr6.eq) goto loc_821EE570;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17480
	ctx.r3.s64 = ctx.r11.s64 + -17480;
	// bl 0x822e84f0
	ctx.lr = 0x821EE558;
	sub_822E84F0(ctx, base);
	// bl 0x822ad548
	ctx.lr = 0x821EE55C;
	sub_822AD548(ctx, base);
	// b 0x821ee570
	goto loc_821EE570;
loc_821EE560:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x821EE56C;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_821EE570:
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// lwz r10,172(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 172);
	// rlwinm r9,r10,0,11,11
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x100000;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x821ee590
	if (ctx.cr6.eq) goto loc_821EE590;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-12728
	ctx.r3.s64 = ctx.r11.s64 + -12728;
	// bl 0x822ad350
	ctx.lr = 0x821EE590;
	sub_822AD350(ctx, base);
loc_821EE590:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82229bf0
	ctx.lr = 0x821EE598;
	sub_82229BF0(ctx, base);
	// lwz r11,276(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821ee5b4
	if (!ctx.cr6.eq) goto loc_821EE5B4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-12752
	ctx.r3.s64 = ctx.r11.s64 + -12752;
	// bl 0x822ad350
	ctx.lr = 0x821EE5B4;
	sub_822AD350(ctx, base);
loc_821EE5B4:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8234a4a8
	ctx.lr = 0x821EE5C4;
	sub_8234A4A8(ctx, base);
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

PPC_WEAK_FUNC(sub_821EE508) {
	__imp__sub_821EE508(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821EE5DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821EE5DC) {
	__imp__sub_821EE5DC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821EE5E0) {
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
	// stw r3,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r3.u32);
	// lhz r9,134(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 134);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// addi r30,r11,26552
	ctx.r30.s64 = ctx.r11.s64 + 26552;
	// bne cr6,0x821ee638
	if (!ctx.cr6.eq) goto loc_821EE638;
	// lhz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 132);
	// mulli r11,r4,624
	ctx.r11.s64 = ctx.r4.s64 * 624;
	// add r31,r11,r30
	ctx.r31.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r10,264(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821ee648
	if (!ctx.cr6.eq) goto loc_821EE648;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17480
	ctx.r3.s64 = ctx.r11.s64 + -17480;
	// bl 0x822e84f0
	ctx.lr = 0x821EE630;
	sub_822E84F0(ctx, base);
	// bl 0x822ad548
	ctx.lr = 0x821EE634;
	sub_822AD548(ctx, base);
	// b 0x821ee648
	goto loc_821EE648;
loc_821EE638:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x821EE644;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_821EE648:
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// lwz r10,172(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 172);
	// rlwinm r9,r10,0,11,11
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x100000;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x821ee668
	if (!ctx.cr6.eq) goto loc_821EE668;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-12632
	ctx.r3.s64 = ctx.r11.s64 + -12632;
	// bl 0x822ad350
	ctx.lr = 0x821EE668;
	sub_822AD350(ctx, base);
loc_821EE668:
	// lhz r11,256(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 256);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821ee680
	if (!ctx.cr6.eq) goto loc_821EE680;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-12656
	ctx.r3.s64 = ctx.r11.s64 + -12656;
	// bl 0x822ad350
	ctx.lr = 0x821EE680;
	sub_822AD350(ctx, base);
loc_821EE680:
	// lhz r11,256(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 256);
	// mulli r11,r11,624
	ctx.r11.s64 = ctx.r11.s64 * 624;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r30,r11,-624
	ctx.r30.s64 = ctx.r11.s64 + -624;
	// lwz r10,-348(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -348);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821ee6a8
	if (!ctx.cr6.eq) goto loc_821EE6A8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-12692
	ctx.r3.s64 = ctx.r11.s64 + -12692;
	// bl 0x822ad350
	ctx.lr = 0x821EE6A8;
	sub_822AD350(ctx, base);
loc_821EE6A8:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8234a4a8
	ctx.lr = 0x821EE6B8;
	sub_8234A4A8(ctx, base);
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

PPC_WEAK_FUNC(sub_821EE5E0) {
	__imp__sub_821EE5E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821EE6D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x821EE6D8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r3.u32);
	// lhz r10,134(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 134);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821ee720
	if (!ctx.cr6.eq) goto loc_821EE720;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// lhz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 132);
	// addi r11,r10,26552
	ctx.r11.s64 = ctx.r10.s64 + 26552;
	// mulli r10,r4,624
	ctx.r10.s64 = ctx.r4.s64 * 624;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r9,264(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821ee730
	if (!ctx.cr6.eq) goto loc_821EE730;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17480
	ctx.r3.s64 = ctx.r11.s64 + -17480;
	// bl 0x822e84f0
	ctx.lr = 0x821EE718;
	sub_822E84F0(ctx, base);
	// bl 0x822ad548
	ctx.lr = 0x821EE71C;
	sub_822AD548(ctx, base);
	// b 0x821ee730
	goto loc_821EE730;
loc_821EE720:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x821EE72C;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_821EE730:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b2288
	ctx.lr = 0x821EE738;
	sub_822B2288(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82232100
	ctx.lr = 0x821EE740;
	sub_82232100(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x8220f168
	ctx.lr = 0x821EE74C;
	sub_8220F168(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822b2288
	ctx.lr = 0x821EE754;
	sub_822B2288(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r11,-12516
	ctx.r4.s64 = ctx.r11.s64 + -12516;
	// bl 0x822e8058
	ctx.lr = 0x821EE764;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821ee774
	if (!ctx.cr6.eq) goto loc_821EE774;
	// li r10,8
	ctx.r10.s64 = 8;
	// b 0x821ee7d0
	goto loc_821EE7D0;
loc_821EE774:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,-12524
	ctx.r4.s64 = ctx.r11.s64 + -12524;
	// bl 0x822e8058
	ctx.lr = 0x821EE784;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821ee794
	if (!ctx.cr6.eq) goto loc_821EE794;
	// li r10,6
	ctx.r10.s64 = 6;
	// b 0x821ee7d0
	goto loc_821EE7D0;
loc_821EE794:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,-12532
	ctx.r4.s64 = ctx.r11.s64 + -12532;
	// bl 0x822e8058
	ctx.lr = 0x821EE7A4;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821ee7b4
	if (!ctx.cr6.eq) goto loc_821EE7B4;
	// li r10,30
	ctx.r10.s64 = 30;
	// b 0x821ee7d0
	goto loc_821EE7D0;
loc_821EE7B4:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,-12544
	ctx.r4.s64 = ctx.r11.s64 + -12544;
	// bl 0x822e8058
	ctx.lr = 0x821EE7C4;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821ee7f8
	if (!ctx.cr6.eq) goto loc_821EE7F8;
	// li r10,29
	ctx.r10.s64 = 29;
loc_821EE7D0:
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// lwz r9,700(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 700);
	// ori r8,r9,32768
	ctx.r8.u64 = ctx.r9.u64 | 32768;
	// stw r8,700(r11)
	PPC_STORE_U32(ctx.r11.u32 + 700, ctx.r8.u32);
	// lwz r7,264(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// stw r29,1048(r7)
	PPC_STORE_U32(ctx.r7.u32 + 1048, ctx.r29.u32);
	// lwz r6,264(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// stw r10,1052(r6)
	PPC_STORE_U32(ctx.r6.u32 + 1052, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_821EE7F8:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r11,-12600
	ctx.r3.s64 = ctx.r11.s64 + -12600;
	// bl 0x822e84f0
	ctx.lr = 0x821EE808;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x821EE80C;
	sub_822AD350(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821EE6D0) {
	__imp__sub_821EE6D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821EE814) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821EE814) {
	__imp__sub_821EE814(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821EE818) {
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
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// lhz r10,118(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 118);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821ee86c
	if (!ctx.cr6.eq) goto loc_821EE86C;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// lhz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 116);
	// addi r11,r10,26552
	ctx.r11.s64 = ctx.r10.s64 + 26552;
	// mulli r10,r4,624
	ctx.r10.s64 = ctx.r4.s64 * 624;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r9,264(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821ee87c
	if (!ctx.cr6.eq) goto loc_821EE87C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17480
	ctx.r3.s64 = ctx.r11.s64 + -17480;
	// bl 0x822e84f0
	ctx.lr = 0x821EE864;
	sub_822E84F0(ctx, base);
	// bl 0x822ad548
	ctx.lr = 0x821EE868;
	sub_822AD548(ctx, base);
	// b 0x821ee87c
	goto loc_821EE87C;
loc_821EE86C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x821EE878;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_821EE87C:
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// lwz r10,700(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 700);
	// oris r9,r10,1
	ctx.r9.u64 = ctx.r10.u64 | 65536;
	// stw r9,700(r11)
	PPC_STORE_U32(ctx.r11.u32 + 700, ctx.r9.u32);
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

PPC_WEAK_FUNC(sub_821EE818) {
	__imp__sub_821EE818(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821EE8A0) {
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
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// lhz r10,118(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 118);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821ee8f4
	if (!ctx.cr6.eq) goto loc_821EE8F4;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// lhz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 116);
	// addi r11,r10,26552
	ctx.r11.s64 = ctx.r10.s64 + 26552;
	// mulli r10,r4,624
	ctx.r10.s64 = ctx.r4.s64 * 624;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r9,264(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821ee904
	if (!ctx.cr6.eq) goto loc_821EE904;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17480
	ctx.r3.s64 = ctx.r11.s64 + -17480;
	// bl 0x822e84f0
	ctx.lr = 0x821EE8EC;
	sub_822E84F0(ctx, base);
	// bl 0x822ad548
	ctx.lr = 0x821EE8F0;
	sub_822AD548(ctx, base);
	// b 0x821ee904
	goto loc_821EE904;
loc_821EE8F4:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x821EE900;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_821EE904:
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// lwz r10,700(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 700);
	// rlwinm r9,r10,0,16,14
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFEFFFF;
	// stw r9,700(r11)
	PPC_STORE_U32(ctx.r11.u32 + 700, ctx.r9.u32);
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

PPC_WEAK_FUNC(sub_821EE8A0) {
	__imp__sub_821EE8A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821EE928) {
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
	// stw r3,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r3.u32);
	// lhz r10,134(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 134);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lhz r31,132(r1)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r1.u32 + 132);
	// bne cr6,0x821ee980
	if (!ctx.cr6.eq) goto loc_821EE980;
	// lis r11,-32052
	ctx.r11.s64 = -2100559872;
	// clrlwi r4,r31,16
	ctx.r4.u64 = ctx.r31.u32 & 0xFFFF;
	// addi r11,r11,26552
	ctx.r11.s64 = ctx.r11.s64 + 26552;
	// mulli r10,r4,624
	ctx.r10.s64 = ctx.r4.s64 * 624;
	// addi r9,r11,264
	ctx.r9.s64 = ctx.r11.s64 + 264;
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x821ee98c
	if (!ctx.cr6.eq) goto loc_821EE98C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17480
	ctx.r3.s64 = ctx.r11.s64 + -17480;
	// bl 0x822e84f0
	ctx.lr = 0x821EE97C;
	sub_822E84F0(ctx, base);
	// b 0x821ee988
	goto loc_821EE988;
loc_821EE980:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
loc_821EE988:
	// bl 0x822ad548
	ctx.lr = 0x821EE98C;
	sub_822AD548(ctx, base);
loc_821EE98C:
	// bl 0x822acb68
	ctx.lr = 0x821EE990;
	sub_822ACB68(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x821ee9a8
	if (ctx.cr6.eq) goto loc_821EE9A8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-13212
	ctx.r3.s64 = ctx.r11.s64 + -13212;
	// bl 0x822ad350
	ctx.lr = 0x821EE9A4;
	sub_822AD350(ctx, base);
	// b 0x821ee9dc
	goto loc_821EE9DC;
loc_821EE9A8:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b2288
	ctx.lr = 0x821EE9B0;
	sub_822B2288(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822b1c50
	ctx.lr = 0x821EE9BC;
	sub_822B1C50(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r11,-12508
	ctx.r3.s64 = ctx.r11.s64 + -12508;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822e84f0
	ctx.lr = 0x821EE9D0;
	sub_822E84F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// clrlwi r3,r31,16
	ctx.r3.u64 = ctx.r31.u32 & 0xFFFF;
	// bl 0x8233cae8
	ctx.lr = 0x821EE9DC;
	sub_8233CAE8(ctx, base);
loc_821EE9DC:
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

PPC_WEAK_FUNC(sub_821EE928) {
	__imp__sub_821EE928(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821EE9F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821EE9F4) {
	__imp__sub_821EE9F4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821EE9F8) {
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
	// stw r3,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r3.u32);
	// lhz r10,134(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 134);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lhz r30,132(r1)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r1.u32 + 132);
	// bne cr6,0x821eea50
	if (!ctx.cr6.eq) goto loc_821EEA50;
	// lis r11,-32052
	ctx.r11.s64 = -2100559872;
	// clrlwi r4,r30,16
	ctx.r4.u64 = ctx.r30.u32 & 0xFFFF;
	// addi r11,r11,26552
	ctx.r11.s64 = ctx.r11.s64 + 26552;
	// mulli r10,r4,624
	ctx.r10.s64 = ctx.r4.s64 * 624;
	// addi r9,r11,264
	ctx.r9.s64 = ctx.r11.s64 + 264;
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x821eea5c
	if (!ctx.cr6.eq) goto loc_821EEA5C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17480
	ctx.r3.s64 = ctx.r11.s64 + -17480;
	// bl 0x822e84f0
	ctx.lr = 0x821EEA4C;
	sub_822E84F0(ctx, base);
	// b 0x821eea58
	goto loc_821EEA58;
loc_821EEA50:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
loc_821EEA58:
	// bl 0x822ad548
	ctx.lr = 0x821EEA5C;
	sub_822AD548(ctx, base);
loc_821EEA5C:
	// bl 0x822acb68
	ctx.lr = 0x821EEA60;
	sub_822ACB68(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x821eea78
	if (ctx.cr6.eq) goto loc_821EEA78;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-13212
	ctx.r3.s64 = ctx.r11.s64 + -13212;
	// bl 0x822ad350
	ctx.lr = 0x821EEA74;
	sub_822AD350(ctx, base);
	// b 0x821eeae0
	goto loc_821EEAE0;
loc_821EEA78:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b2288
	ctx.lr = 0x821EEA80;
	sub_822B2288(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822b1fb0
	ctx.lr = 0x821EEA8C;
	sub_822B1FB0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x821eeaac
	if (!ctx.cr6.lt) goto loc_821EEAAC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-12492
	ctx.r3.s64 = ctx.r11.s64 + -12492;
	// bl 0x822ad350
	ctx.lr = 0x821EEAA8;
	sub_822AD350(ctx, base);
	// b 0x821eeae0
	goto loc_821EEAE0;
loc_821EEAAC:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r10,-12508
	ctx.r3.s64 = ctx.r10.s64 + -12508;
	// lfs f0,-14544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -14544);
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
	ctx.lr = 0x821EEAD4;
	sub_822E84F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// clrlwi r3,r30,16
	ctx.r3.u64 = ctx.r30.u32 & 0xFFFF;
	// bl 0x8233cae8
	ctx.lr = 0x821EEAE0;
	sub_8233CAE8(ctx, base);
loc_821EEAE0:
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

PPC_WEAK_FUNC(sub_821EE9F8) {
	__imp__sub_821EE9F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821EEAF8) {
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
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// lhz r10,118(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 118);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lhz r31,116(r1)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r1.u32 + 116);
	// bne cr6,0x821eeb4c
	if (!ctx.cr6.eq) goto loc_821EEB4C;
	// lis r11,-32052
	ctx.r11.s64 = -2100559872;
	// clrlwi r4,r31,16
	ctx.r4.u64 = ctx.r31.u32 & 0xFFFF;
	// addi r11,r11,26552
	ctx.r11.s64 = ctx.r11.s64 + 26552;
	// mulli r10,r4,624
	ctx.r10.s64 = ctx.r4.s64 * 624;
	// addi r9,r11,264
	ctx.r9.s64 = ctx.r11.s64 + 264;
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x821eeb58
	if (!ctx.cr6.eq) goto loc_821EEB58;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17480
	ctx.r3.s64 = ctx.r11.s64 + -17480;
	// bl 0x822e84f0
	ctx.lr = 0x821EEB48;
	sub_822E84F0(ctx, base);
	// b 0x821eeb54
	goto loc_821EEB54;
loc_821EEB4C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
loc_821EEB54:
	// bl 0x822ad548
	ctx.lr = 0x821EEB58;
	sub_822AD548(ctx, base);
loc_821EEB58:
	// bl 0x822acb68
	ctx.lr = 0x821EEB5C;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x821eeb74
	if (ctx.cr6.eq) goto loc_821EEB74;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-12444
	ctx.r4.s64 = ctx.r11.s64 + -12444;
	// bl 0x822ad4e0
	ctx.lr = 0x821EEB74;
	sub_822AD4E0(ctx, base);
loc_821EEB74:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b2288
	ctx.lr = 0x821EEB7C;
	sub_822B2288(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-12464
	ctx.r3.s64 = ctx.r11.s64 + -12464;
	// bl 0x822e84f0
	ctx.lr = 0x821EEB8C;
	sub_822E84F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// clrlwi r3,r31,16
	ctx.r3.u64 = ctx.r31.u32 & 0xFFFF;
	// bl 0x8233cae8
	ctx.lr = 0x821EEB98;
	sub_8233CAE8(ctx, base);
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

PPC_WEAK_FUNC(sub_821EEAF8) {
	__imp__sub_821EEAF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821EEBAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821EEBAC) {
	__imp__sub_821EEBAC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821EEBB0) {
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
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// bne cr6,0x821eec0c
	if (!ctx.cr6.eq) goto loc_821EEC0C;
	// addi r11,r11,-13728
	ctx.r11.s64 = ctx.r11.s64 + -13728;
	// li r30,35
	ctx.r30.s64 = 35;
	// addi r31,r11,-12
	ctx.r31.s64 = ctx.r11.s64 + -12;
loc_821EEBDC:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwzu r4,12(r31)
	ea = 12 + ctx.r31.u32;
	ctx.r4.u64 = PPC_LOAD_U32(ea);
	ctx.r31.u32 = ea;
	// bl 0x82295358
	ctx.lr = 0x821EEBE8;
	sub_82295358(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x821eebdc
	if (!ctx.cr0.eq) goto loc_821EEBDC;
loc_821EEBF0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821EEBF4:
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
loc_821EEC0C:
	// addi r4,r11,-13728
	ctx.r4.s64 = ctx.r11.s64 + -13728;
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
loc_821EEC20:
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
loc_821EEC28:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r31,0(r10)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r31,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r31.s64;
	// beq cr6,0x821eec4c
	if (ctx.cr6.eq) goto loc_821EEC4C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x821eec28
	if (ctx.cr6.eq) goto loc_821EEC28;
loc_821EEC4C:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x821eec6c
	if (ctx.cr6.eq) goto loc_821EEC6C;
	// addi r6,r6,12
	ctx.r6.s64 = ctx.r6.s64 + 12;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r8,r8,12
	ctx.r8.s64 = ctx.r8.s64 + 12;
	// cmplwi cr6,r6,420
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 420, ctx.xer);
	// blt cr6,0x821eec20
	if (ctx.cr6.lt) goto loc_821EEC20;
	// b 0x821eebf0
	goto loc_821EEBF0;
loc_821EEC6C:
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
	// b 0x821eebf4
	goto loc_821EEBF4;
}

PPC_WEAK_FUNC(sub_821EEBB0) {
	__imp__sub_821EEBB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821EEC8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821EEC8C) {
	__imp__sub_821EEC8C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821EEC90) {
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
	// bl 0x820da4f0
	ctx.lr = 0x821EECA8;
	sub_820DA4F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x821eecd4
	if (ctx.cr6.lt) goto loc_821EECD4;
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,604
	ctx.r3.s64 = ctx.r11.s64 + 604;
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
loc_821EECD4:
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

PPC_WEAK_FUNC(sub_821EEC90) {
	__imp__sub_821EEC90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821EECEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821EECEC) {
	__imp__sub_821EECEC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821EECF0) {
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
	// lis r11,-32024
	ctx.r11.s64 = -2098724864;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,11208(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11208);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821eed58
	if (!ctx.cr6.eq) goto loc_821EED58;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-12376
	ctx.r3.s64 = ctx.r11.s64 + -12376;
	// bl 0x822e84f0
	ctx.lr = 0x821EED24;
	sub_822E84F0(ctx, base);
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// li r9,624
	ctx.r9.s64 = 624;
	// addi r8,r10,26552
	ctx.r8.s64 = ctx.r10.s64 + 26552;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// subf r7,r8,r31
	ctx.r7.s64 = ctx.r31.s64 - ctx.r8.s64;
	// divw r3,r7,r9
	ctx.r3.s32 = ctx.r7.s32 / ctx.r9.s32;
	// bl 0x8233cae8
	ctx.lr = 0x821EED40;
	sub_8233CAE8(ctx, base);
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
loc_821EED58:
	// lwz r11,332(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 332);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x821eeda4
	if (ctx.cr6.gt) goto loc_821EEDA4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-12408
	ctx.r3.s64 = ctx.r11.s64 + -12408;
	// bl 0x822e84f0
	ctx.lr = 0x821EED70;
	sub_822E84F0(ctx, base);
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// li r9,624
	ctx.r9.s64 = 624;
	// addi r8,r10,26552
	ctx.r8.s64 = ctx.r10.s64 + 26552;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// subf r7,r8,r31
	ctx.r7.s64 = ctx.r31.s64 - ctx.r8.s64;
	// divw r3,r7,r9
	ctx.r3.s32 = ctx.r7.s32 / ctx.r9.s32;
	// bl 0x8233cae8
	ctx.lr = 0x821EED8C;
	sub_8233CAE8(ctx, base);
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
loc_821EEDA4:
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

PPC_WEAK_FUNC(sub_821EECF0) {
	__imp__sub_821EECF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821EEDBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821EEDBC) {
	__imp__sub_821EEDBC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821EEDC0) {
	PPC_FUNC_PROLOGUE();
	// b 0x821eecf0
	sub_821EECF0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821EEDC0) {
	__imp__sub_821EEDC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821EEDC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821EEDC4) {
	__imp__sub_821EEDC4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821EEDC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x821EEDD0;
	__savegprlr_26(ctx, base);
	// stwu r1,-1168(r1)
	ea = -1168 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-31936
	ctx.r9.s64 = -2092957696;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// addi r11,r9,-22504
	ctx.r11.s64 = ctx.r9.s64 + -22504;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r8,r11,68
	ctx.r8.s64 = ctx.r11.s64 + 68;
	// lwz r11,-22504(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -22504);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r28,r10,-18728
	ctx.r28.s64 = ctx.r10.s64 + -18728;
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r27,r7,r8
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// cmpw cr6,r3,r27
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r27.s32, ctx.xer);
	// bge cr6,0x821eee78
	if (!ctx.cr6.lt) goto loc_821EEE78;
	// li r26,32
	ctx.r26.s64 = 32;
loc_821EEE08:
	// li r5,1024
	ctx.r5.s64 = 1024;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8227d380
	ctx.lr = 0x821EEE18;
	sub_8227D380(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_821EEE20:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821eee20
	if (!ctx.cr6.eq) goto loc_821EEE20;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// add r30,r5,r31
	ctx.r30.u64 = ctx.r5.u64 + ctx.r31.u64;
	// cmpwi cr6,r30,1023
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1023, ctx.xer);
	// bge cr6,0x821eee78
	if (!ctx.cr6.lt) goto loc_821EEE78;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// add r3,r31,r28
	ctx.r3.u64 = ctx.r31.u64 + ctx.r28.u64;
	// bl 0x823de1f0
	ctx.lr = 0x821EEE54;
	sub_823DE1F0(ctx, base);
	// addi r11,r27,-1
	ctx.r11.s64 = ctx.r27.s64 + -1;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x821eee6c
	if (ctx.cr6.eq) goto loc_821EEE6C;
	// stbx r26,r30,r28
	PPC_STORE_U8(ctx.r30.u32 + ctx.r28.u32, ctx.r26.u8);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_821EEE6C:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpw cr6,r29,r27
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x821eee08
	if (ctx.cr6.lt) goto loc_821EEE08;
loc_821EEE78:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stbx r11,r31,r28
	PPC_STORE_U8(ctx.r31.u32 + ctx.r28.u32, ctx.r11.u8);
	// addi r1,r1,1168
	ctx.r1.s64 = ctx.r1.s64 + 1168;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821EEDC8) {
	__imp__sub_821EEDC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821EEE8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821EEE8C) {
	__imp__sub_821EEE8C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821EEE90) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821eeef4
	if (ctx.cr6.eq) goto loc_821EEEF4;
loc_821EEEBC:
	// cmpwi cr6,r3,27
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 27, ctx.xer);
	// bne cr6,0x821eeecc
	if (!ctx.cr6.eq) goto loc_821EEECC;
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// b 0x821eeee4
	goto loc_821EEEE4;
loc_821EEECC:
	// cmpwi cr6,r3,32
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 32, ctx.xer);
	// blt cr6,0x821eeee0
	if (ctx.cr6.lt) goto loc_821EEEE0;
	// bl 0x823dfa20
	ctx.lr = 0x821EEED8;
	sub_823DFA20(ctx, base);
	// stb r3,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r3.u8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
loc_821EEEE0:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_821EEEE4:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821eeebc
	if (!ctx.cr6.eq) goto loc_821EEEBC;
loc_821EEEF4:
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
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

PPC_WEAK_FUNC(sub_821EEE90) {
	__imp__sub_821EEE90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821EEF14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821EEF14) {
	__imp__sub_821EEF14(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821EEF18) {
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
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-12344
	ctx.r3.s64 = ctx.r11.s64 + -12344;
	// bl 0x822e84f0
	ctx.lr = 0x821EEF34;
	sub_822E84F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,-1
	ctx.r3.s64 = -1;
	// bl 0x8233cae8
	ctx.lr = 0x821EEF40;
	sub_8233CAE8(ctx, base);
	// lis r10,-32020
	ctx.r10.s64 = -2098462720;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r8,r10,9624
	ctx.r8.s64 = ctx.r10.s64 + 9624;
	// lfs f0,6912(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 6912);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,2872(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 2872, temp.u32);
	// stfs f0,2876(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 2876, temp.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821EEF18) {
	__imp__sub_821EEF18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821EEF68) {
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
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821eedc8
	ctx.lr = 0x821EEF7C;
	sub_821EEDC8(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-12344
	ctx.r3.s64 = ctx.r11.s64 + -12344;
	// bl 0x822e84f0
	ctx.lr = 0x821EEF8C;
	sub_822E84F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,-1
	ctx.r3.s64 = -1;
	// bl 0x8233cae8
	ctx.lr = 0x821EEF98;
	sub_8233CAE8(ctx, base);
	// lis r10,-32020
	ctx.r10.s64 = -2098462720;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r8,r10,9624
	ctx.r8.s64 = ctx.r10.s64 + 9624;
	// lfs f0,6912(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 6912);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,2872(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 2872, temp.u32);
	// stfs f0,2876(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 2876, temp.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821EEF68) {
	__imp__sub_821EEF68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821EEFC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x821EEFC8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x821eecf0
	ctx.lr = 0x821EEFD4;
	sub_821EECF0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821ef31c
	if (ctx.cr6.eq) goto loc_821EF31C;
	// li r3,2
	ctx.r3.s64 = 2;
	// lwz r31,264(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 264);
	// bl 0x821eedc8
	ctx.lr = 0x821EEFE8;
	sub_821EEDC8(ctx, base);
	// bl 0x823deaf8
	ctx.lr = 0x821EEFEC;
	sub_823DEAF8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821eedc8
	ctx.lr = 0x821EEFF8;
	sub_821EEDC8(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821ef31c
	if (ctx.cr6.eq) goto loc_821EF31C;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_821EF008:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821ef008
	if (!ctx.cr6.eq) goto loc_821EF008;
	// subf r11,r27,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r27.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821ef31c
	if (ctx.cr6.eq) goto loc_821EF31C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r4,r11,24440
	ctx.r4.s64 = ctx.r11.s64 + 24440;
	// bl 0x822e8058
	ctx.lr = 0x821EF03C;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821ef05c
	if (!ctx.cr6.eq) goto loc_821EF05C;
	// lis r11,-32032
	ctx.r11.s64 = -2099249152;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,-5944(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5944);
	// bl 0x822e1f18
	ctx.lr = 0x821EF054;
	sub_822E1F18(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// b 0x821ef07c
	goto loc_821EF07C;
loc_821EF05C:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r5,6
	ctx.r5.s64 = 6;
	// addi r4,r11,27216
	ctx.r4.s64 = ctx.r11.s64 + 27216;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x822e7ee0
	ctx.lr = 0x821EF074;
	sub_822E7EE0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821ef0c0
	if (!ctx.cr6.eq) goto loc_821EF0C0;
loc_821EF07C:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x821ef094
	if (ctx.cr6.eq) goto loc_821EF094;
	// lwz r11,332(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 332);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// stw r11,332(r29)
	PPC_STORE_U32(ctx.r29.u32 + 332, ctx.r11.u32);
	// b 0x821ef0b4
	goto loc_821EF0B4;
loc_821EF094:
	// lis r11,-32032
	ctx.r11.s64 = -2099249152;
	// lwz r10,264(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 264);
	// lwz r11,-5900(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5900);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r9,340(r10)
	PPC_STORE_U32(ctx.r10.u32 + 340, ctx.r9.u32);
	// lwz r8,264(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 264);
	// lwz r7,340(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 340);
	// stw r7,332(r29)
	PPC_STORE_U32(ctx.r29.u32 + 332, ctx.r7.u32);
loc_821EF0B4:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x821ef31c
	if (ctx.cr6.eq) goto loc_821EF31C;
	// b 0x821ef10c
	goto loc_821EF10C;
loc_821EF0C0:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r4,r11,-12220
	ctx.r4.s64 = ctx.r11.s64 + -12220;
	// bl 0x822e8058
	ctx.lr = 0x821EF0D0;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821ef0f0
	if (!ctx.cr6.eq) goto loc_821EF0F0;
	// lis r11,-32032
	ctx.r11.s64 = -2099249152;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,-5944(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5944);
	// bl 0x822e1f18
	ctx.lr = 0x821EF0E8;
	sub_822E1F18(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_821EF0F0:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r11,-12228
	ctx.r4.s64 = ctx.r11.s64 + -12228;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822e7ee0
	ctx.lr = 0x821EF104;
	sub_822E7EE0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821ef174
	if (!ctx.cr6.eq) goto loc_821EF174;
loc_821EF10C:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x821ef138
	if (ctx.cr6.eq) goto loc_821EF138;
	// lwz r4,692(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 692);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x821ef16c
	if (ctx.cr6.eq) goto loc_821EF16C;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821f6e78
	ctx.lr = 0x821EF134;
	sub_821F6E78(ctx, base);
	// b 0x821ef16c
	goto loc_821EF16C;
loc_821EF138:
	// li r31,544
	ctx.r31.s64 = 544;
loc_821EF13C:
	// lwz r11,264(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 264);
	// lwzx r4,r31,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x821ef160
	if (ctx.cr6.eq) goto loc_821EF160;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,998
	ctx.r6.s64 = 998;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821f6e78
	ctx.lr = 0x821EF160;
	sub_821F6E78(ctx, base);
loc_821EF160:
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplwi cr6,r31,604
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 604, ctx.xer);
	// blt cr6,0x821ef13c
	if (ctx.cr6.lt) goto loc_821EF13C;
loc_821EF16C:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x821ef31c
	if (ctx.cr6.eq) goto loc_821EF31C;
loc_821EF174:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r5,7
	ctx.r5.s64 = 7;
	// addi r4,r11,-12236
	ctx.r4.s64 = ctx.r11.s64 + -12236;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822e7ee0
	ctx.lr = 0x821EF188;
	sub_822E7EE0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821ef1d4
	if (!ctx.cr6.eq) goto loc_821EF1D4;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x821ef1d4
	if (ctx.cr6.eq) goto loc_821EF1D4;
	// li r31,544
	ctx.r31.s64 = 544;
loc_821EF19C:
	// lwz r11,264(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 264);
	// lwzx r4,r31,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x821ef1c0
	if (ctx.cr6.eq) goto loc_821EF1C0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,998
	ctx.r6.s64 = 998;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821f6e78
	ctx.lr = 0x821EF1C0;
	sub_821F6E78(ctx, base);
loc_821EF1C0:
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplwi cr6,r31,604
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 604, ctx.xer);
	// blt cr6,0x821ef19c
	if (ctx.cr6.lt) goto loc_821EF19C;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_821EF1D4:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x821ef31c
	if (!ctx.cr6.eq) goto loc_821EF31C;
	// lis r10,-32020
	ctx.r10.s64 = -2098462720;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r28,r10,9624
	ctx.r28.s64 = ctx.r10.s64 + 9624;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r11,36(r28)
	PPC_STORE_U32(ctx.r28.u32 + 36, ctx.r11.u32);
	// bl 0x82232100
	ctx.lr = 0x821EF1F4;
	sub_82232100(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821ef314
	if (ctx.cr6.eq) goto loc_821EF314;
	// bl 0x82332af8
	ctx.lr = 0x821EF204;
	sub_82332AF8(ctx, base);
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x821ef234
	if (!ctx.cr6.eq) goto loc_821EF234;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r11,-12336
	ctx.r4.s64 = ctx.r11.s64 + -12336;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82280b08
	ctx.lr = 0x821EF224;
	sub_82280B08(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,36(r28)
	PPC_STORE_U32(ctx.r28.u32 + 36, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_821EF234:
	// bl 0x8222f3a8
	ctx.lr = 0x821EF238;
	sub_8222F3A8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f0,232(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 232);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stfs f0,232(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 232, temp.u32);
	// lfs f13,236(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 236);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,236(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 236, temp.u32);
	// lfs f12,240(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 240);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,240(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 240, temp.u32);
	// bl 0x821f78e0
	ctx.lr = 0x821EF260;
	sub_821F78E0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f8930
	ctx.lr = 0x821EF26C;
	sub_821F8930(ctx, base);
	// lis r11,20971
	ctx.r11.s64 = 1374355456;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r8,364(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 364);
	// ori r9,r11,34079
	ctx.r9.u64 = ctx.r11.u64 | 34079;
	// stb r10,290(r31)
	PPC_STORE_U8(ctx.r31.u32 + 290, ctx.r10.u8);
	// mulhw r7,r8,r9
	ctx.r7.s64 = (int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32)) >> 32;
	// srawi r11,r7,6
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3F) != 0);
	ctx.r11.s64 = ctx.r7.s32 >> 6;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mulli r5,r6,200
	ctx.r5.s64 = ctx.r6.s64 * 200;
	// subf r3,r5,r8
	ctx.r3.s64 = ctx.r8.s64 - ctx.r5.s64;
	// bl 0x82332af8
	ctx.lr = 0x821EF29C;
	sub_82332AF8(ctx, base);
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821ef2e8
	if (ctx.cr6.eq) goto loc_821EF2E8;
	// lwz r10,264(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 264);
	// lwz r9,684(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 684);
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x821ef2e8
	if (ctx.cr6.eq) goto loc_821EF2E8;
	// lwz r9,688(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 688);
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x821ef2e8
	if (ctx.cr6.eq) goto loc_821EF2E8;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x821ef2e4
	if (ctx.cr6.eq) goto loc_821EF2E4;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x821ef2e4
	if (ctx.cr6.eq) goto loc_821EF2E4;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x821ef2e4
	if (ctx.cr6.eq) goto loc_821EF2E4;
	// stw r11,688(r10)
	PPC_STORE_U32(ctx.r10.u32 + 688, ctx.r11.u32);
	// b 0x821ef2e8
	goto loc_821EF2E8;
loc_821EF2E4:
	// stw r11,684(r10)
	PPC_STORE_U32(ctx.r10.u32 + 684, ctx.r11.u32);
loc_821EF2E8:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f9a68
	ctx.lr = 0x821EF2F8;
	sub_821F9A68(ctx, base);
	// lbz r10,176(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 176);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stb r11,290(r31)
	PPC_STORE_U8(ctx.r31.u32 + 290, ctx.r11.u8);
	// beq cr6,0x821ef314
	if (ctx.cr6.eq) goto loc_821EF314;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222f680
	ctx.lr = 0x821EF314;
	sub_8222F680(ctx, base);
loc_821EF314:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,36(r28)
	PPC_STORE_U32(ctx.r28.u32 + 36, ctx.r11.u32);
loc_821EF31C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821EEFC0) {
	__imp__sub_821EEFC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821EF324) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821EF324) {
	__imp__sub_821EF324(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821EF328) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x821EF330;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x820da730
	ctx.lr = 0x821EF344;
	sub_820DA730(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820da4f0
	ctx.lr = 0x821EF354;
	sub_820DA4F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x821ef3fc
	if (ctx.cr6.lt) goto loc_821EF3FC;
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r11,r11,604
	ctx.r11.s64 = ctx.r11.s64 + 604;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821ef3fc
	if (ctx.cr6.eq) goto loc_821EF3FC;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82332af8
	ctx.lr = 0x821EF37C;
	sub_82332AF8(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmpw cr6,r29,r30
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r30.s32, ctx.xer);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ble cr6,0x821ef3a0
	if (!ctx.cr6.gt) goto loc_821EF3A0;
	// subf r5,r30,r29
	ctx.r5.s64 = ctx.r29.s64 - ctx.r30.s64;
	// bl 0x82334578
	ctx.lr = 0x821EF398;
	sub_82334578(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_821EF3A0:
	// li r5,0
	ctx.r5.s64 = 0;
	// subf r30,r29,r30
	ctx.r30.s64 = ctx.r30.s64 - ctx.r29.s64;
	// bl 0x82334578
	ctx.lr = 0x821EF3AC;
	sub_82334578(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
loc_821EF3B0:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820da6b8
	ctx.lr = 0x821EF3C0;
	sub_820DA6B8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpw cr6,r3,r30
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r30.s32, ctx.xer);
	// lwz r4,536(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 536);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ble cr6,0x821ef3e4
	if (!ctx.cr6.gt) goto loc_821EF3E4;
	// neg r6,r30
	ctx.r6.s64 = -ctx.r30.s64;
	// bl 0x82331e00
	ctx.lr = 0x821EF3E0;
	sub_82331E00(ctx, base);
	// b 0x821ef3f0
	goto loc_821EF3F0;
loc_821EF3E4:
	// li r6,0
	ctx.r6.s64 = 0;
	// subf r30,r11,r30
	ctx.r30.s64 = ctx.r30.s64 - ctx.r11.s64;
	// bl 0x82331e38
	ctx.lr = 0x821EF3F0;
	sub_82331E38(ctx, base);
loc_821EF3F0:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpwi cr6,r29,2
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 2, ctx.xer);
	// blt cr6,0x821ef3b0
	if (ctx.cr6.lt) goto loc_821EF3B0;
loc_821EF3FC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821EF328) {
	__imp__sub_821EF328(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821EF404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821EF404) {
	__imp__sub_821EF404(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821EF408) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x821EF410;
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
	// bl 0x82332af8
	ctx.lr = 0x821EF424;
	sub_82332AF8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82334578
	ctx.lr = 0x821EF438;
	sub_82334578(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,536(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 536);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82331e38
	ctx.lr = 0x821EF44C;
	sub_82331E38(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,536(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 536);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82331e38
	ctx.lr = 0x821EF460;
	sub_82331E38(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821EF408) {
	__imp__sub_821EF408(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821EF468) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x821EF470;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x821eecf0
	ctx.lr = 0x821EF47C;
	sub_821EECF0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821ef6b0
	if (ctx.cr6.eq) goto loc_821EF6B0;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x821eedc8
	ctx.lr = 0x821EF48C;
	sub_821EEDC8(ctx, base);
	// bl 0x823deaf8
	ctx.lr = 0x821EF490;
	sub_823DEAF8(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821eedc8
	ctx.lr = 0x821EF49C;
	sub_821EEDC8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821ef6b0
	if (ctx.cr6.eq) goto loc_821EF6B0;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_821EF4AC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821ef4ac
	if (!ctx.cr6.eq) goto loc_821EF4AC;
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821ef6b0
	if (ctx.cr6.eq) goto loc_821EF6B0;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,24440
	ctx.r4.s64 = ctx.r11.s64 + 24440;
	// bl 0x822e8058
	ctx.lr = 0x821EF4E0;
	sub_822E8058(ctx, base);
	// li r31,1
	ctx.r31.s64 = 1;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821ef504
	if (!ctx.cr6.eq) goto loc_821EF504;
	// lis r11,-32032
	ctx.r11.s64 = -2099249152;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-5944(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5944);
	// bl 0x822e1f18
	ctx.lr = 0x821EF4FC;
	sub_822E1F18(ctx, base);
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// b 0x821ef524
	goto loc_821EF524;
loc_821EF504:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r5,6
	ctx.r5.s64 = 6;
	// addi r4,r11,27216
	ctx.r4.s64 = ctx.r11.s64 + 27216;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// bl 0x822e7ee0
	ctx.lr = 0x821EF51C;
	sub_822E7EE0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821ef54c
	if (!ctx.cr6.eq) goto loc_821EF54C;
loc_821EF524:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x821ef540
	if (ctx.cr6.eq) goto loc_821EF540;
	// lwz r11,332(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 332);
	// subf r10,r27,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r27.s64;
	// stw r10,332(r29)
	PPC_STORE_U32(ctx.r29.u32 + 332, ctx.r10.u32);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bge cr6,0x821ef544
	if (!ctx.cr6.lt) goto loc_821EF544;
loc_821EF540:
	// stw r31,332(r29)
	PPC_STORE_U32(ctx.r29.u32 + 332, ctx.r31.u32);
loc_821EF544:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x821ef6b0
	if (ctx.cr6.eq) goto loc_821EF6B0;
loc_821EF54C:
	// lwz r11,264(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 264);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r26,r11,680
	ctx.r26.s64 = ctx.r11.s64 + 680;
	// bne cr6,0x821ef578
	if (!ctx.cr6.eq) goto loc_821EF578;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r11,-12228
	ctx.r4.s64 = ctx.r11.s64 + -12228;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822e7ee0
	ctx.lr = 0x821EF570;
	sub_822E7EE0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821ef5c8
	if (!ctx.cr6.eq) goto loc_821EF5C8;
loc_821EF578:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x821ef59c
	if (ctx.cr6.eq) goto loc_821EF59C;
	// lwz r4,12(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x821ef5c0
	if (ctx.cr6.eq) goto loc_821EF5C0;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r3,264(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 264);
	// bl 0x821ef328
	ctx.lr = 0x821EF598;
	sub_821EF328(ctx, base);
	// b 0x821ef5c0
	goto loc_821EF5C0;
loc_821EF59C:
	// li r31,544
	ctx.r31.s64 = 544;
loc_821EF5A0:
	// lwz r3,264(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 264);
	// lwzx r4,r31,r3
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r3.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x821ef5b4
	if (ctx.cr6.eq) goto loc_821EF5B4;
	// bl 0x821ef408
	ctx.lr = 0x821EF5B4;
	sub_821EF408(ctx, base);
loc_821EF5B4:
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpwi cr6,r31,604
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 604, ctx.xer);
	// blt cr6,0x821ef5a0
	if (ctx.cr6.lt) goto loc_821EF5A0;
loc_821EF5C0:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x821ef6b0
	if (ctx.cr6.eq) goto loc_821EF6B0;
loc_821EF5C8:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r5,7
	ctx.r5.s64 = 7;
	// addi r4,r11,-12236
	ctx.r4.s64 = ctx.r11.s64 + -12236;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822e7ee0
	ctx.lr = 0x821EF5DC;
	sub_822E7EE0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821ef620
	if (!ctx.cr6.eq) goto loc_821EF620;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x821ef620
	if (ctx.cr6.eq) goto loc_821EF620;
	// li r31,544
	ctx.r31.s64 = 544;
loc_821EF5F0:
	// lwz r3,264(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 264);
	// lwzx r4,r31,r3
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r3.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x821ef608
	if (ctx.cr6.eq) goto loc_821EF608;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x821ef328
	ctx.lr = 0x821EF608;
	sub_821EF328(ctx, base);
loc_821EF608:
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpwi cr6,r31,604
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 604, ctx.xer);
	// blt cr6,0x821ef5f0
	if (ctx.cr6.lt) goto loc_821EF5F0;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x821ef6b0
	if (ctx.cr6.eq) goto loc_821EF6B0;
	// b 0x821ef640
	goto loc_821EF640;
loc_821EF620:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne cr6,0x821ef640
	if (!ctx.cr6.eq) goto loc_821EF640;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,-12220
	ctx.r4.s64 = ctx.r11.s64 + -12220;
	// bl 0x822e8058
	ctx.lr = 0x821EF638;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821ef6b0
	if (!ctx.cr6.eq) goto loc_821EF6B0;
loc_821EF640:
	// li r30,544
	ctx.r30.s64 = 544;
loc_821EF644:
	// lwz r11,264(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 264);
	// lwzx r31,r30,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821ef674
	if (ctx.cr6.eq) goto loc_821EF674;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332af8
	ctx.lr = 0x821EF65C;
	sub_82332AF8(ctx, base);
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x821ef674
	if (ctx.cr6.eq) goto loc_821EF674;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,264(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 264);
	// bl 0x82232598
	ctx.lr = 0x821EF674;
	sub_82232598(ctx, base);
loc_821EF674:
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpwi cr6,r30,604
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 604, ctx.xer);
	// blt cr6,0x821ef644
	if (ctx.cr6.lt) goto loc_821EF644;
	// lwz r11,12(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821ef6b0
	if (ctx.cr6.eq) goto loc_821EF6B0;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// stw r11,12(r26)
	PPC_STORE_U32(ctx.r26.u32 + 12, ctx.r11.u32);
	// li r9,624
	ctx.r9.s64 = 624;
	// addi r8,r10,26552
	ctx.r8.s64 = ctx.r10.s64 + 26552;
	// li r4,0
	ctx.r4.s64 = 0;
	// subf r7,r8,r29
	ctx.r7.s64 = ctx.r29.s64 - ctx.r8.s64;
	// divw r3,r7,r9
	ctx.r3.s32 = ctx.r7.s32 / ctx.r9.s32;
	// bl 0x82232128
	ctx.lr = 0x821EF6B0;
	sub_82232128(ctx, base);
loc_821EF6B0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821EF468) {
	__imp__sub_821EF468(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821EF6B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf54
	ctx.lr = 0x821EF6C0;
	__savegprlr_19(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x821eecf0
	ctx.lr = 0x821EF6CC;
	sub_821EECF0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821ef7b8
	if (ctx.cr6.eq) goto loc_821EF7B8;
	// lwz r11,312(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// xori r21,r11,1
	ctx.r21.u64 = ctx.r11.u64 ^ 1;
	// clrlwi r10,r21,31
	ctx.r10.u64 = ctx.r21.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x821ef6f4
	if (ctx.cr6.eq) goto loc_821EF6F4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r22,r11,-12192
	ctx.r22.s64 = ctx.r11.s64 + -12192;
	// b 0x821ef6fc
	goto loc_821EF6FC;
loc_821EF6F4:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r22,r11,-12212
	ctx.r22.s64 = ctx.r11.s64 + -12212;
loc_821EF6FC:
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lis r29,-32190
	ctx.r29.s64 = -2109603840;
	// addi r20,r11,9240
	ctx.r20.s64 = ctx.r11.s64 + 9240;
	// lis r8,-32052
	ctx.r8.s64 = -2100559872;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r10,-32020
	ctx.r10.s64 = -2098462720;
	// lwz r11,-32312(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -32312);
	// li r24,0
	ctx.r24.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r23,r20,16
	ctx.r23.s64 = ctx.r20.s64 + 16;
	// li r25,624
	ctx.r25.s64 = 624;
	// lis r19,-32166
	ctx.r19.s64 = -2108030976;
	// addi r28,r8,26552
	ctx.r28.s64 = ctx.r8.s64 + 26552;
	// addi r27,r9,-12420
	ctx.r27.s64 = ctx.r9.s64 + -12420;
	// addi r26,r10,9624
	ctx.r26.s64 = ctx.r10.s64 + 9624;
loc_821EF738:
	// lbz r9,29088(r19)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r19.u32 + 29088);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821ef75c
	if (!ctx.cr6.eq) goto loc_821EF75C;
	// subfc r10,r11,r24
	ctx.xer.ca = ctx.r24.u32 >= ctx.r11.u32;
	ctx.r10.s64 = ctx.r24.s64 - ctx.r11.s64;
	// eqv r9,r11,r24
	ctx.r9.u64 = ~(ctx.r11.u64 ^ ctx.r24.u64);
	// rlwinm r8,r9,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// addze r7,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r7.s64 = temp.s64;
	// clrlwi r10,r7,31
	ctx.r10.u64 = ctx.r7.u32 & 0x1;
	// b 0x821ef768
	goto loc_821EF768;
loc_821EF75C:
	// lwz r10,0(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r10,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r9.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_821EF768:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821ef7a0
	if (ctx.cr6.eq) goto loc_821EF7A0;
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// add r31,r30,r11
	ctx.r31.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stw r21,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r21.u32);
	// bl 0x822e84f0
	ctx.lr = 0x821EF78C;
	sub_822E84F0(ctx, base);
	// subf r11,r28,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r28.s64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// divw r3,r11,r25
	ctx.r3.s32 = ctx.r11.s32 / ctx.r25.s32;
	// bl 0x8233cae8
	ctx.lr = 0x821EF79C;
	sub_8233CAE8(ctx, base);
	// lwz r11,-32312(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -32312);
loc_821EF7A0:
	// addi r23,r23,9780
	ctx.r23.s64 = ctx.r23.s64 + 9780;
	// addi r10,r20,19576
	ctx.r10.s64 = ctx.r20.s64 + 19576;
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// addi r30,r30,624
	ctx.r30.s64 = ctx.r30.s64 + 624;
	// cmpw cr6,r23,r10
	ctx.cr6.compare<int32_t>(ctx.r23.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x821ef738
	if (ctx.cr6.lt) goto loc_821EF738;
loc_821EF7B8:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x823ddfa4
	__restgprlr_19(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821EF6B8) {
	__imp__sub_821EF6B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821EF7C0) {
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
	// bl 0x821eecf0
	ctx.lr = 0x821EF7D8;
	sub_821EECF0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821ef834
	if (ctx.cr6.eq) goto loc_821EF834;
	// lwz r11,312(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// xori r10,r11,2
	ctx.r10.u64 = ctx.r11.u64 ^ 2;
	// rlwinm r9,r10,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// stw r10,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r10.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x821ef804
	if (ctx.cr6.eq) goto loc_821EF804;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,-12152
	ctx.r4.s64 = ctx.r11.s64 + -12152;
	// b 0x821ef80c
	goto loc_821EF80C;
loc_821EF804:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,-12176
	ctx.r4.s64 = ctx.r11.s64 + -12176;
loc_821EF80C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-12420
	ctx.r3.s64 = ctx.r11.s64 + -12420;
	// bl 0x822e84f0
	ctx.lr = 0x821EF818;
	sub_822E84F0(ctx, base);
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// li r9,624
	ctx.r9.s64 = 624;
	// addi r8,r10,26552
	ctx.r8.s64 = ctx.r10.s64 + 26552;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// subf r7,r8,r31
	ctx.r7.s64 = ctx.r31.s64 - ctx.r8.s64;
	// divw r3,r7,r9
	ctx.r3.s32 = ctx.r7.s32 / ctx.r9.s32;
	// bl 0x8233cae8
	ctx.lr = 0x821EF834;
	sub_8233CAE8(ctx, base);
loc_821EF834:
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

PPC_WEAK_FUNC(sub_821EF7C0) {
	__imp__sub_821EF7C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821EF848) {
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
	// bl 0x821eecf0
	ctx.lr = 0x821EF860;
	sub_821EECF0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821ef8bc
	if (ctx.cr6.eq) goto loc_821EF8BC;
	// lwz r11,312(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// xori r10,r11,4
	ctx.r10.u64 = ctx.r11.u64 ^ 4;
	// rlwinm r9,r10,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// stw r10,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r10.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x821ef88c
	if (!ctx.cr6.eq) goto loc_821EF88C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,-12112
	ctx.r4.s64 = ctx.r11.s64 + -12112;
	// b 0x821ef894
	goto loc_821EF894;
loc_821EF88C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,-12128
	ctx.r4.s64 = ctx.r11.s64 + -12128;
loc_821EF894:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-12420
	ctx.r3.s64 = ctx.r11.s64 + -12420;
	// bl 0x822e84f0
	ctx.lr = 0x821EF8A0;
	sub_822E84F0(ctx, base);
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// li r9,624
	ctx.r9.s64 = 624;
	// addi r8,r10,26552
	ctx.r8.s64 = ctx.r10.s64 + 26552;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// subf r7,r8,r31
	ctx.r7.s64 = ctx.r31.s64 - ctx.r8.s64;
	// divw r3,r7,r9
	ctx.r3.s32 = ctx.r7.s32 / ctx.r9.s32;
	// bl 0x8233cae8
	ctx.lr = 0x821EF8BC;
	sub_8233CAE8(ctx, base);
loc_821EF8BC:
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

PPC_WEAK_FUNC(sub_821EF848) {
	__imp__sub_821EF848(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821EF8D0) {
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
	// bl 0x821eecf0
	ctx.lr = 0x821EF8E8;
	sub_821EECF0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821ef960
	if (ctx.cr6.eq) goto loc_821EF960;
	// lis r11,0
	ctx.r11.s64 = 0;
	// lwz r10,264(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// ori r11,r11,44372
	ctx.r11.u64 = ctx.r11.u64 | 44372;
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// beq cr6,0x821ef928
	if (ctx.cr6.eq) goto loc_821EF928;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// rlwinm r6,r7,0,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r4,r11,12696
	ctx.r4.s64 = ctx.r11.s64 + 12696;
	// b 0x821ef934
	goto loc_821EF934;
loc_821EF928:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// ori r6,r7,1
	ctx.r6.u64 = ctx.r7.u64 | 1;
	// addi r4,r11,12680
	ctx.r4.s64 = ctx.r11.s64 + 12680;
loc_821EF934:
	// stw r6,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r6.u32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-12420
	ctx.r3.s64 = ctx.r11.s64 + -12420;
	// bl 0x822e84f0
	ctx.lr = 0x821EF944;
	sub_822E84F0(ctx, base);
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// li r9,624
	ctx.r9.s64 = 624;
	// addi r8,r10,26552
	ctx.r8.s64 = ctx.r10.s64 + 26552;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// subf r7,r8,r31
	ctx.r7.s64 = ctx.r31.s64 - ctx.r8.s64;
	// divw r3,r7,r9
	ctx.r3.s32 = ctx.r7.s32 / ctx.r9.s32;
	// bl 0x8233cae8
	ctx.lr = 0x821EF960;
	sub_8233CAE8(ctx, base);
loc_821EF960:
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

PPC_WEAK_FUNC(sub_821EF8D0) {
	__imp__sub_821EF8D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821EF974) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821EF974) {
	__imp__sub_821EF974(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821EF978) {
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
	// bl 0x821eecf0
	ctx.lr = 0x821EF990;
	sub_821EECF0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821efa08
	if (ctx.cr6.eq) goto loc_821EFA08;
	// lis r11,0
	ctx.r11.s64 = 0;
	// lwz r10,264(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// ori r11,r11,44372
	ctx.r11.u64 = ctx.r11.u64 | 44372;
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// rlwinm r8,r9,0,30,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// beq cr6,0x821ef9d0
	if (ctx.cr6.eq) goto loc_821EF9D0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// rlwinm r6,r7,0,31,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// addi r4,r11,12748
	ctx.r4.s64 = ctx.r11.s64 + 12748;
	// b 0x821ef9dc
	goto loc_821EF9DC;
loc_821EF9D0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// ori r6,r7,2
	ctx.r6.u64 = ctx.r7.u64 | 2;
	// addi r4,r11,12736
	ctx.r4.s64 = ctx.r11.s64 + 12736;
loc_821EF9DC:
	// stw r6,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r6.u32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-12420
	ctx.r3.s64 = ctx.r11.s64 + -12420;
	// bl 0x822e84f0
	ctx.lr = 0x821EF9EC;
	sub_822E84F0(ctx, base);
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// li r9,624
	ctx.r9.s64 = 624;
	// addi r8,r10,26552
	ctx.r8.s64 = ctx.r10.s64 + 26552;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// subf r7,r8,r31
	ctx.r7.s64 = ctx.r31.s64 - ctx.r8.s64;
	// divw r3,r7,r9
	ctx.r3.s32 = ctx.r7.s32 / ctx.r9.s32;
	// bl 0x8233cae8
	ctx.lr = 0x821EFA08;
	sub_8233CAE8(ctx, base);
loc_821EFA08:
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

PPC_WEAK_FUNC(sub_821EF978) {
	__imp__sub_821EF978(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821EFA1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821EFA1C) {
	__imp__sub_821EFA1C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821EFA20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32024
	ctx.r11.s64 = -2098724864;
	// lwz r11,13380(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13380);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r10,312(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 312);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r9,264(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 264);
	// lis r6,1
	ctx.r6.s64 = 65536;
	// rlwinm r8,r10,0,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	// stw r11,332(r3)
	PPC_STORE_U32(ctx.r3.u32 + 332, ctx.r11.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// stw r8,312(r3)
	PPC_STORE_U32(ctx.r3.u32 + 312, ctx.r8.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,332(r9)
	PPC_STORE_U32(ctx.r9.u32 + 332, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,12
	ctx.r7.s64 = 12;
	// ori r6,r6,34464
	ctx.r6.u64 = ctx.r6.u64 | 34464;
	// b 0x821f0690
	sub_821F0690(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821EFA20) {
	__imp__sub_821EFA20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821EFA74) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821EFA74) {
	__imp__sub_821EFA74(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821EFA78) {
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
	// addi r3,r3,232
	ctx.r3.s64 = ctx.r3.s64 + 232;
	// bl 0x822e8620
	ctx.lr = 0x821EFA94;
	sub_822E8620(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-12420
	ctx.r3.s64 = ctx.r11.s64 + -12420;
	// bl 0x822e84f0
	ctx.lr = 0x821EFAA4;
	sub_822E84F0(ctx, base);
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// li r9,624
	ctx.r9.s64 = 624;
	// addi r8,r10,26552
	ctx.r8.s64 = ctx.r10.s64 + 26552;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// subf r7,r8,r31
	ctx.r7.s64 = ctx.r31.s64 - ctx.r8.s64;
	// divw r3,r7,r9
	ctx.r3.s32 = ctx.r7.s32 / ctx.r9.s32;
	// bl 0x8233cae8
	ctx.lr = 0x821EFAC0;
	sub_8233CAE8(ctx, base);
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

PPC_WEAK_FUNC(sub_821EFA78) {
	__imp__sub_821EFA78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821EFAD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821EFAD4) {
	__imp__sub_821EFAD4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821EFAD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x821EFAE0;
	__savegprlr_28(ctx, base);
	// stwu r1,-1184(r1)
	ea = -1184 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x821eecf0
	ctx.lr = 0x821EFAEC;
	sub_821EECF0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821efb14
	if (!ctx.cr6.eq) goto loc_821EFB14;
	// lis r11,-32024
	ctx.r11.s64 = -2098724864;
	// lwz r11,11208(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11208);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821efb14
	if (!ctx.cr6.eq) goto loc_821EFB14;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,-12036
	ctx.r4.s64 = ctx.r11.s64 + -12036;
	// b 0x821efc20
	goto loc_821EFC20;
loc_821EFB14:
	// lis r11,-31936
	ctx.r11.s64 = -2092957696;
	// addi r29,r11,-22504
	ctx.r29.s64 = ctx.r11.s64 + -22504;
	// addi r10,r29,68
	ctx.r10.s64 = ctx.r29.s64 + 68;
	// lwz r11,-22504(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22504);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x821efc18
	if (ctx.cr6.lt) goto loc_821EFC18;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bgt cr6,0x821efc18
	if (ctx.cr6.gt) goto loc_821EFC18;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r30,r10,-4
	ctx.r30.s64 = ctx.r10.s64 + -4;
loc_821EFB48:
	// addi r31,r11,1
	ctx.r31.s64 = ctx.r11.s64 + 1;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8227d380
	ctx.lr = 0x821EFB5C;
	sub_8227D380(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x823dec00
	ctx.lr = 0x821EFB64;
	sub_823DEC00(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfsu f0,4(r30)
	ea = 4 + ctx.r30.u32;
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r30.u32 = ea;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// blt cr6,0x821efb48
	if (ctx.cr6.lt) goto loc_821EFB48;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r10,r29,68
	ctx.r10.s64 = ctx.r29.s64 + 68;
	// lwz r9,264(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 264);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f13,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,280(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 280);
	ctx.f12.f64 = double(temp.f32);
	// lwzx r11,r7,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// lfs f0,5484(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f11,104(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// beq cr6,0x821efbe0
	if (ctx.cr6.eq) goto loc_821EFBE0;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x821efc00
	if (!ctx.cr6.eq) goto loc_821EFC00;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x8227d380
	ctx.lr = 0x821EFBD0;
	sub_8227D380(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x823dec00
	ctx.lr = 0x821EFBD8;
	sub_823DEC00(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
loc_821EFBE0:
	// li r5,1024
	ctx.r5.s64 = 1024;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x8227d380
	ctx.lr = 0x821EFBF0;
	sub_8227D380(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x823dec00
	ctx.lr = 0x821EFBF8;
	sub_823DEC00(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
loc_821EFC00:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821ff518
	ctx.lr = 0x821EFC10;
	sub_821FF518(ctx, base);
	// addi r1,r1,1184
	ctx.r1.s64 = ctx.r1.s64 + 1184;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_821EFC18:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,-12092
	ctx.r4.s64 = ctx.r11.s64 + -12092;
loc_821EFC20:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r3,r10,-12420
	ctx.r3.s64 = ctx.r10.s64 + -12420;
	// bl 0x822e84f0
	ctx.lr = 0x821EFC2C;
	sub_822E84F0(ctx, base);
	// lis r9,-32052
	ctx.r9.s64 = -2100559872;
	// li r8,624
	ctx.r8.s64 = 624;
	// addi r7,r9,26552
	ctx.r7.s64 = ctx.r9.s64 + 26552;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// subf r6,r7,r28
	ctx.r6.s64 = ctx.r28.s64 - ctx.r7.s64;
	// divw r3,r6,r8
	ctx.r3.s32 = ctx.r6.s32 / ctx.r8.s32;
	// bl 0x8233cae8
	ctx.lr = 0x821EFC48;
	sub_8233CAE8(ctx, base);
	// addi r1,r1,1184
	ctx.r1.s64 = ctx.r1.s64 + 1184;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821EFAD8) {
	__imp__sub_821EFAD8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821EFC50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-2144(r1)
	ea = -2144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31936
	ctx.r10.s64 = -2092957696;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r10,-22504
	ctx.r11.s64 = ctx.r10.s64 + -22504;
	// addi r9,r11,68
	ctx.r9.s64 = ctx.r11.s64 + 68;
	// lwz r11,-22504(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -22504);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r8,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// cmpwi cr6,r7,3
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 3, ctx.xer);
	// beq cr6,0x821efc9c
	if (ctx.cr6.eq) goto loc_821EFC9C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// lwz r11,-12012(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -12012);
	// stw r11,1104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1104, ctx.r11.u32);
	// b 0x821efce4
	goto loc_821EFCE4;
loc_821EFC9C:
	// li r5,1024
	ctx.r5.s64 = 1024;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8227d380
	ctx.lr = 0x821EFCAC;
	sub_8227D380(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823deaf8
	ctx.lr = 0x821EFCB4;
	sub_823DEAF8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x821efcd4
	if (ctx.cr6.lt) goto loc_821EFCD4;
	// cmpwi cr6,r3,32
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 32, ctx.xer);
	// bge cr6,0x821efcd4
	if (!ctx.cr6.lt) goto loc_821EFCD4;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r3,2792
	ctx.r3.s64 = ctx.r3.s64 + 2792;
	// bl 0x8233dd38
	ctx.lr = 0x821EFCD4;
	sub_8233DD38(ctx, base);
loc_821EFCD4:
	// li r5,1024
	ctx.r5.s64 = 1024;
	// addi r4,r1,1104
	ctx.r4.s64 = ctx.r1.s64 + 1104;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x8227d380
	ctx.lr = 0x821EFCE4;
	sub_8227D380(ctx, base);
loc_821EFCE4:
	// addi r3,r1,1104
	ctx.r3.s64 = ctx.r1.s64 + 1104;
	// bl 0x822aced0
	ctx.lr = 0x821EFCEC;
	sub_822ACED0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822aced0
	ctx.lr = 0x821EFCF4;
	sub_822ACED0(ctx, base);
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r10,r11,-25976
	ctx.r10.s64 = ctx.r11.s64 + -25976;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lhz r4,558(r10)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r10.u32 + 558);
	// bl 0x82229da8
	ctx.lr = 0x821EFD0C;
	sub_82229DA8(ctx, base);
	// addi r1,r1,2144
	ctx.r1.s64 = ctx.r1.s64 + 2144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821EFC50) {
	__imp__sub_821EFC50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821EFD20) {
	PPC_FUNC_PROLOGUE();
	// b 0x8222f230
	sub_8222F230(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821EFD20) {
	__imp__sub_821EFD20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821EFD24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821EFD24) {
	__imp__sub_821EFD24(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821EFD28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,256
	ctx.r5.s64 = 256;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8227d380
	ctx.lr = 0x821EFD48;
	sub_8227D380(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823deaf8
	ctx.lr = 0x821EFD50;
	sub_823DEAF8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r5,256
	ctx.r5.s64 = 256;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x8227d380
	ctx.lr = 0x821EFD64;
	sub_8227D380(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823deaf8
	ctx.lr = 0x821EFD6C;
	sub_823DEAF8(ctx, base);
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// mulli r10,r31,624
	ctx.r10.s64 = ctx.r31.s64 * 624;
	// addi r9,r11,9624
	ctx.r9.s64 = ctx.r11.s64 + 9624;
	// clrlwi r8,r3,16
	ctx.r8.u64 = ctx.r3.u32 & 0xFFFF;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lhz r7,462(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 462);
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x821efd98
	if (!ctx.cr6.eq) goto loc_821EFD98;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,465(r11)
	PPC_STORE_U8(ctx.r11.u32 + 465, ctx.r10.u8);
loc_821EFD98:
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821EFD28) {
	__imp__sub_821EFD28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821EFDAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821EFDAC) {
	__imp__sub_821EFDAC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821EFDB0) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x821b75d0
	sub_821B75D0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821EFDB0) {
	__imp__sub_821EFDB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821EFDB8) {
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
	// stwu r1,-1152(r1)
	ea = -1152 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x821eedc0
	ctx.lr = 0x821EFDD4;
	sub_821EEDC0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821efdfc
	if (!ctx.cr6.eq) goto loc_821EFDFC;
	// lis r11,-32052
	ctx.r11.s64 = -2100559872;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r9,r11,26552
	ctx.r9.s64 = ctx.r11.s64 + 26552;
	// li r8,624
	ctx.r8.s64 = 624;
	// subf r7,r9,r30
	ctx.r7.s64 = ctx.r30.s64 - ctx.r9.s64;
	// addi r4,r10,-12376
	ctx.r4.s64 = ctx.r10.s64 + -12376;
	// divw r3,r7,r8
	ctx.r3.s32 = ctx.r7.s32 / ctx.r8.s32;
	// b 0x821efed0
	goto loc_821EFED0;
loc_821EFDFC:
	// lis r10,-31936
	ctx.r10.s64 = -2092957696;
	// addi r11,r10,-22504
	ctx.r11.s64 = ctx.r10.s64 + -22504;
	// addi r9,r11,68
	ctx.r9.s64 = ctx.r11.s64 + 68;
	// lwz r11,-22504(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -22504);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r8,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// cmpwi cr6,r7,2
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 2, ctx.xer);
	// beq cr6,0x821efe3c
	if (ctx.cr6.eq) goto loc_821EFE3C;
	// lis r11,-32052
	ctx.r11.s64 = -2100559872;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r9,r11,26552
	ctx.r9.s64 = ctx.r11.s64 + 26552;
	// li r8,624
	ctx.r8.s64 = 624;
	// subf r7,r9,r30
	ctx.r7.s64 = ctx.r30.s64 - ctx.r9.s64;
	// addi r4,r10,-11968
	ctx.r4.s64 = ctx.r10.s64 + -11968;
	// divw r3,r7,r8
	ctx.r3.s32 = ctx.r7.s32 / ctx.r8.s32;
	// b 0x821efed0
	goto loc_821EFED0;
loc_821EFE3C:
	// li r5,1024
	ctx.r5.s64 = 1024;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8227d380
	ctx.lr = 0x821EFE4C;
	sub_8227D380(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823deaf8
	ctx.lr = 0x821EFE54;
	sub_823DEAF8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x821efea4
	if (ctx.cr6.lt) goto loc_821EFEA4;
	// bl 0x82234988
	ctx.lr = 0x821EFE64;
	sub_82234988(ctx, base);
	// cmpw cr6,r31,r3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r3.s32, ctx.xer);
	// bge cr6,0x821efea4
	if (!ctx.cr6.lt) goto loc_821EFEA4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82234970
	ctx.lr = 0x821EFE74;
	sub_82234970(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r3,20
	ctx.r4.s64 = ctx.r3.s64 + 20;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f0,5484(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f13,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x821ff518
	ctx.lr = 0x821EFEA0;
	sub_821FF518(ctx, base);
	// b 0x821efed4
	goto loc_821EFED4;
loc_821EFEA4:
	// bl 0x82234988
	ctx.lr = 0x821EFEA8;
	sub_82234988(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-12008
	ctx.r3.s64 = ctx.r11.s64 + -12008;
	// bl 0x822e84f0
	ctx.lr = 0x821EFEB8;
	sub_822E84F0(ctx, base);
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// li r9,624
	ctx.r9.s64 = 624;
	// addi r8,r10,26552
	ctx.r8.s64 = ctx.r10.s64 + 26552;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// subf r7,r8,r30
	ctx.r7.s64 = ctx.r30.s64 - ctx.r8.s64;
	// divw r3,r7,r9
	ctx.r3.s32 = ctx.r7.s32 / ctx.r9.s32;
loc_821EFED0:
	// bl 0x8233cae8
	ctx.lr = 0x821EFED4;
	sub_8233CAE8(ctx, base);
loc_821EFED4:
	// addi r1,r1,1152
	ctx.r1.s64 = ctx.r1.s64 + 1152;
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

PPC_WEAK_FUNC(sub_821EFDB8) {
	__imp__sub_821EFDB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821EFEEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821EFEEC) {
	__imp__sub_821EFEEC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821EFEF0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821EFEF0) {
	__imp__sub_821EFEF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821EFEF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821EFEF4) {
	__imp__sub_821EFEF4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821EFEF8) {
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
	// bl 0x821eedc0
	ctx.lr = 0x821EFF10;
	sub_821EEDC0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821eff4c
	if (ctx.cr6.eq) goto loc_821EFF4C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r5,168(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 168);
	// lhz r4,124(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 124);
	// bl 0x821f82f8
	ctx.lr = 0x821EFF28;
	sub_821F82F8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821eff4c
	if (ctx.cr6.eq) goto loc_821EFF4C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f7b90
	ctx.lr = 0x821EFF3C;
	sub_821F7B90(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222f978
	ctx.lr = 0x821EFF4C;
	sub_8222F978(ctx, base);
loc_821EFF4C:
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

PPC_WEAK_FUNC(sub_821EFEF8) {
	__imp__sub_821EFEF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821EFF60) {
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
	// lis r9,-32052
	ctx.r9.s64 = -2100559872;
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r8,-32052
	ctx.r8.s64 = -2100559872;
	// mulli r10,r3,624
	ctx.r10.s64 = ctx.r3.s64 * 624;
	// stw r11,-17704(r9)
	PPC_STORE_U32(ctx.r9.u32 + -17704, ctx.r11.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r11,r8,26552
	ctx.r11.s64 = ctx.r8.s64 + 26552;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x8227d940
	ctx.lr = 0x821EFF9C;
	sub_8227D940(ctx, base);
	// li r5,1024
	ctx.r5.s64 = 1024;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8227d380
	ctx.lr = 0x821EFFAC;
	sub_8227D380(ctx, base);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r7,32260
	ctx.r4.s64 = ctx.r7.s64 + 32260;
	// bl 0x822e8058
	ctx.lr = 0x821EFFBC;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821effd0
	if (!ctx.cr6.eq) goto loc_821EFFD0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8227e370
	ctx.lr = 0x821EFFCC;
	sub_8227E370(ctx, base);
	// b 0x821f02ec
	goto loc_821F02EC;
loc_821EFFD0:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-11832
	ctx.r4.s64 = ctx.r11.s64 + -11832;
	// bl 0x822e8058
	ctx.lr = 0x821EFFE0;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821efff4
	if (!ctx.cr6.eq) goto loc_821EFFF4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8227e558
	ctx.lr = 0x821EFFF0;
	sub_8227E558(ctx, base);
	// b 0x821f02ec
	goto loc_821F02EC;
loc_821EFFF4:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-11844
	ctx.r4.s64 = ctx.r11.s64 + -11844;
	// bl 0x822e8058
	ctx.lr = 0x821F0004;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821f0014
	if (!ctx.cr6.eq) goto loc_821F0014;
	// bl 0x821eef68
	ctx.lr = 0x821F0010;
	sub_821EEF68(ctx, base);
	// b 0x821f02ec
	goto loc_821F02EC;
loc_821F0014:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-11848
	ctx.r4.s64 = ctx.r11.s64 + -11848;
	// bl 0x822e8058
	ctx.lr = 0x821F0024;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821f0038
	if (!ctx.cr6.eq) goto loc_821F0038;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821efc50
	ctx.lr = 0x821F0034;
	sub_821EFC50(ctx, base);
	// b 0x821f02ec
	goto loc_821F02EC;
loc_821F0038:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-4112
	ctx.r4.s64 = ctx.r11.s64 + -4112;
	// bl 0x822e8058
	ctx.lr = 0x821F0048;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821f0058
	if (!ctx.cr6.eq) goto loc_821F0058;
	// bl 0x821efd28
	ctx.lr = 0x821F0054;
	sub_821EFD28(ctx, base);
	// b 0x821f02ec
	goto loc_821F02EC;
loc_821F0058:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-1716
	ctx.r4.s64 = ctx.r11.s64 + -1716;
	// bl 0x822e8058
	ctx.lr = 0x821F0068;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821f0078
	if (!ctx.cr6.eq) goto loc_821F0078;
	// bl 0x821b75d0
	ctx.lr = 0x821F0074;
	sub_821B75D0(ctx, base);
	// b 0x821f02ec
	goto loc_821F02EC;
loc_821F0078:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,12912
	ctx.r4.s64 = ctx.r11.s64 + 12912;
	// bl 0x822e8058
	ctx.lr = 0x821F0088;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821f009c
	if (!ctx.cr6.eq) goto loc_821F009C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821eefc0
	ctx.lr = 0x821F0098;
	sub_821EEFC0(ctx, base);
	// b 0x821f02ec
	goto loc_821F02EC;
loc_821F009C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,12904
	ctx.r4.s64 = ctx.r11.s64 + 12904;
	// bl 0x822e8058
	ctx.lr = 0x821F00AC;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821f00c0
	if (!ctx.cr6.eq) goto loc_821F00C0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ef468
	ctx.lr = 0x821F00BC;
	sub_821EF468(ctx, base);
	// b 0x821f02ec
	goto loc_821F02EC;
loc_821F00C0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,12900
	ctx.r4.s64 = ctx.r11.s64 + 12900;
	// bl 0x822e8058
	ctx.lr = 0x821F00D0;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821f00e4
	if (!ctx.cr6.eq) goto loc_821F00E4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ef6b8
	ctx.lr = 0x821F00E0;
	sub_821EF6B8(ctx, base);
	// b 0x821f02ec
	goto loc_821F02EC;
loc_821F00E4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,12892
	ctx.r4.s64 = ctx.r11.s64 + 12892;
	// bl 0x822e8058
	ctx.lr = 0x821F00F4;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821f0108
	if (!ctx.cr6.eq) goto loc_821F0108;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ef7c0
	ctx.lr = 0x821F0104;
	sub_821EF7C0(ctx, base);
	// b 0x821f02ec
	goto loc_821F02EC;
loc_821F0108:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,12880
	ctx.r4.s64 = ctx.r11.s64 + 12880;
	// bl 0x822e8058
	ctx.lr = 0x821F0118;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821f012c
	if (!ctx.cr6.eq) goto loc_821F012C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ef848
	ctx.lr = 0x821F0128;
	sub_821EF848(ctx, base);
	// b 0x821f02ec
	goto loc_821F02EC;
loc_821F012C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,12872
	ctx.r4.s64 = ctx.r11.s64 + 12872;
	// bl 0x822e8058
	ctx.lr = 0x821F013C;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821f0150
	if (!ctx.cr6.eq) goto loc_821F0150;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ef8d0
	ctx.lr = 0x821F014C;
	sub_821EF8D0(ctx, base);
	// b 0x821f02ec
	goto loc_821F02EC;
loc_821F0150:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,12868
	ctx.r4.s64 = ctx.r11.s64 + 12868;
	// bl 0x822e8058
	ctx.lr = 0x821F0160;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821f0174
	if (!ctx.cr6.eq) goto loc_821F0174;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ef978
	ctx.lr = 0x821F0170;
	sub_821EF978(ctx, base);
	// b 0x821f02ec
	goto loc_821F02EC;
loc_821F0174:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,12920
	ctx.r4.s64 = ctx.r11.s64 + 12920;
	// bl 0x822e8058
	ctx.lr = 0x821F0184;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821f0198
	if (!ctx.cr6.eq) goto loc_821F0198;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821efa20
	ctx.lr = 0x821F0194;
	sub_821EFA20(ctx, base);
	// b 0x821f02ec
	goto loc_821F02EC;
loc_821F0198:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-11856
	ctx.r4.s64 = ctx.r11.s64 + -11856;
	// bl 0x822e8058
	ctx.lr = 0x821F01A8;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821f01bc
	if (!ctx.cr6.eq) goto loc_821F01BC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821efa78
	ctx.lr = 0x821F01B8;
	sub_821EFA78(ctx, base);
	// b 0x821f02ec
	goto loc_821F02EC;
loc_821F01BC:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-11872
	ctx.r4.s64 = ctx.r11.s64 + -11872;
	// bl 0x822e8058
	ctx.lr = 0x821F01CC;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821f02ec
	if (ctx.cr6.eq) goto loc_821F02EC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,12844
	ctx.r4.s64 = ctx.r11.s64 + 12844;
	// bl 0x822e8058
	ctx.lr = 0x821F01E4;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821f01f8
	if (!ctx.cr6.eq) goto loc_821F01F8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821efad8
	ctx.lr = 0x821F01F4;
	sub_821EFAD8(ctx, base);
	// b 0x821f02ec
	goto loc_821F02EC;
loc_821F01F8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,12832
	ctx.r4.s64 = ctx.r11.s64 + 12832;
	// bl 0x822e8058
	ctx.lr = 0x821F0208;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821f021c
	if (!ctx.cr6.eq) goto loc_821F021C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821efdb8
	ctx.lr = 0x821F0218;
	sub_821EFDB8(ctx, base);
	// b 0x821f02ec
	goto loc_821F02EC;
loc_821F021C:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,2012
	ctx.r4.s64 = ctx.r11.s64 + 2012;
	// bl 0x822e8058
	ctx.lr = 0x821F022C;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821f024c
	if (!ctx.cr6.eq) goto loc_821F024C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821eedc0
	ctx.lr = 0x821F023C;
	sub_821EEDC0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821f024c
	if (ctx.cr6.eq) goto loc_821F024C;
	// bl 0x821c1758
	ctx.lr = 0x821F0248;
	sub_821C1758(ctx, base);
	// b 0x821f02ec
	goto loc_821F02EC;
loc_821F024C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,12816
	ctx.r4.s64 = ctx.r11.s64 + 12816;
	// bl 0x822e8058
	ctx.lr = 0x821F025C;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821f026c
	if (!ctx.cr6.eq) goto loc_821F026C;
	// bl 0x8227d2d8
	ctx.lr = 0x821F0268;
	sub_8227D2D8(ctx, base);
	// b 0x821f02ec
	goto loc_821F02EC;
loc_821F026C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,12800
	ctx.r4.s64 = ctx.r11.s64 + 12800;
	// bl 0x822e8058
	ctx.lr = 0x821F027C;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821f028c
	if (!ctx.cr6.eq) goto loc_821F028C;
	// bl 0x821efd20
	ctx.lr = 0x821F0288;
	sub_821EFD20(ctx, base);
	// b 0x821f02ec
	goto loc_821F02EC;
loc_821F028C:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,28328
	ctx.r4.s64 = ctx.r11.s64 + 28328;
	// bl 0x822e8058
	ctx.lr = 0x821F029C;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821f02b0
	if (!ctx.cr6.eq) goto loc_821F02B0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821efef8
	ctx.lr = 0x821F02AC;
	sub_821EFEF8(ctx, base);
	// b 0x821f02ec
	goto loc_821F02EC;
loc_821F02B0:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-11884
	ctx.r4.s64 = ctx.r11.s64 + -11884;
	// bl 0x822e8058
	ctx.lr = 0x821F02C0;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821f02d0
	if (!ctx.cr6.eq) goto loc_821F02D0;
	// bl 0x8222ba10
	ctx.lr = 0x821F02CC;
	sub_8222BA10(ctx, base);
	// b 0x821f02ec
	goto loc_821F02EC;
loc_821F02D0:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,-11924
	ctx.r3.s64 = ctx.r11.s64 + -11924;
	// bl 0x822e84f0
	ctx.lr = 0x821F02E0;
	sub_822E84F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8233cae8
	ctx.lr = 0x821F02EC;
	sub_8233CAE8(ctx, base);
loc_821F02EC:
	// bl 0x8227d960
	ctx.lr = 0x821F02F0;
	sub_8227D960(ctx, base);
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

PPC_WEAK_FUNC(sub_821EFF60) {
	__imp__sub_821EFF60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F0308) {
	PPC_FUNC_PROLOGUE();
	// subf r11,r4,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r4.s64;
loc_821F030C:
	// lbz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stbx r10,r11,r4
	PPC_STORE_U8(ctx.r11.u32 + ctx.r4.u32, ctx.r10.u8);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// bne cr6,0x821f030c
	if (!ctx.cr6.eq) goto loc_821F030C;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821F0308) {
	__imp__sub_821F0308(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F0324) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821F0324) {
	__imp__sub_821F0324(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F0328) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x821F0330;
	__savegprlr_25(ctx, base);
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// ld r12,-8192(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8192);
	// stwu r1,-8592(r1)
	ea = -8592 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32052
	ctx.r11.s64 = -2100559872;
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r27,r11,-17616
	ctx.r27.s64 = ctx.r11.s64 + -17616;
	// addi r30,r10,-8
	ctx.r30.s64 = ctx.r10.s64 + -8;
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// lfs f31,12168(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12168);
	ctx.f31.f64 = double(temp.f32);
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// li r25,7
	ctx.r25.s64 = 7;
	// addi r26,r11,7736
	ctx.r26.s64 = ctx.r11.s64 + 7736;
	// addi r28,r10,-17696
	ctx.r28.s64 = ctx.r10.s64 + -17696;
loc_821F0374:
	// lwzx r3,r31,r26
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r26.u32);
	// stfsx f31,r31,r28
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r28.u32, temp.u32);
	// stw r31,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r31.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r3,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r3.u32);
	// stwu r25,12(r30)
	ea = 12 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r25.u32);
	ctx.r30.u32 = ea;
	// bl 0x822a2088
	ctx.lr = 0x821F0390;
	sub_822A2088(ctx, base);
	// sth r3,0(r29)
	PPC_STORE_U16(ctx.r29.u32 + 0, ctx.r3.u16);
	// addi r10,r27,40
	ctx.r10.s64 = ctx.r27.s64 + 40;
	// addi r29,r29,2
	ctx.r29.s64 = ctx.r29.s64 + 2;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r29,r10
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x821f0374
	if (ctx.cr6.lt) goto loc_821F0374;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r31,r11,-11520
	ctx.r31.s64 = ctx.r11.s64 + -11520;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// lfs f0,5484(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// addi r5,r9,-11532
	ctx.r5.s64 = ctx.r9.s64 + -11532;
	// stfs f0,72(r28)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r28.u32 + 72, temp.u32);
	// addi r4,r8,-11552
	ctx.r4.s64 = ctx.r8.s64 + -11552;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r6,r1,320
	ctx.r6.s64 = ctx.r1.s64 + 320;
	// bl 0x8227fef8
	ctx.lr = 0x821F03D8;
	sub_8227FEF8(ctx, base);
	// lis r7,-32225
	ctx.r7.s64 = -2111897600;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r9,r7,776
	ctx.r9.s64 = ctx.r7.s64 + 776;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,20
	ctx.r5.s64 = 20;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x822ea3f8
	ctx.lr = 0x821F03FC;
	sub_822EA3F8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821f0418
	if (!ctx.cr6.eq) goto loc_821F0418;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r11,-11592
	ctx.r4.s64 = ctx.r11.s64 + -11592;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822830e8
	ctx.lr = 0x821F0418;
	sub_822830E8(ctx, base);
loc_821F0418:
	// addi r1,r1,8592
	ctx.r1.s64 = ctx.r1.s64 + 8592;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821F0328) {
	__imp__sub_821F0328(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F0424) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821F0424) {
	__imp__sub_821F0424(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F0428) {
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
	// lwz r3,264(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 264);
	// lwz r11,504(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 504);
	// lhz r30,124(r31)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r31.u32 + 124);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x821f0464
	if (ctx.cr6.eq) goto loc_821F0464;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x821f0464
	if (ctx.cr6.eq) goto loc_821F0464;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x821f0470
	if (!ctx.cr6.eq) goto loc_821F0470;
loc_821F0464:
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r10,r11,44220
	ctx.r10.u64 = ctx.r11.u64 | 44220;
	// lhzx r30,r3,r10
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r3.u32 + ctx.r10.u32);
loc_821F0470:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x820da5b0
	ctx.lr = 0x821F0478;
	sub_820DA5B0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821f0500
	if (ctx.cr6.eq) goto loc_821F0500;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821f0500
	if (ctx.cr6.eq) goto loc_821F0500;
	// bl 0x82332c40
	ctx.lr = 0x821F048C;
	sub_82332C40(ctx, base);
	// cmplw cr6,r30,r3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// bge cr6,0x821f0500
	if (!ctx.cr6.lt) goto loc_821F0500;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,264(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// bl 0x820da730
	ctx.lr = 0x821F04A0;
	sub_820DA730(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821f0500
	if (ctx.cr6.eq) goto loc_821F0500;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,264(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// bl 0x82333718
	ctx.lr = 0x821F04B4;
	sub_82333718(ctx, base);
	// clrlwi r4,r3,24
	ctx.r4.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8231f478
	ctx.lr = 0x821F04C0;
	sub_8231F478(ctx, base);
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r10,172(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 172);
	// rlwinm r9,r10,0,20,21
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xC00;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x821f0500
	if (!ctx.cr6.eq) goto loc_821F0500;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f7de0
	ctx.lr = 0x821F04E0;
	sub_821F7DE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x821f7b90
	ctx.lr = 0x821F04F0;
	sub_821F7B90(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821f0500
	if (ctx.cr6.eq) goto loc_821F0500;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,328(r30)
	PPC_STORE_U32(ctx.r30.u32 + 328, ctx.r11.u32);
loc_821F0500:
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

PPC_WEAK_FUNC(sub_821F0428) {
	__imp__sub_821F0428(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F0518) {
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
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x821f054c
	if (ctx.cr6.eq) goto loc_821F054C;
	// cmplw cr6,r5,r3
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x821f054c
	if (ctx.cr6.eq) goto loc_821F054C;
	// lfs f0,232(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 232);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,236(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 236);
	ctx.f12.f64 = double(temp.f32);
	// lfs f9,240(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 240);
	ctx.f9.f64 = double(temp.f32);
	// b 0x821f0568
	goto loc_821F0568;
loc_821F054C:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x821f05c0
	if (ctx.cr6.eq) goto loc_821F05C0;
	// cmplw cr6,r4,r31
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x821f05c0
	if (ctx.cr6.eq) goto loc_821F05C0;
	// lfs f0,232(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 232);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,236(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 236);
	ctx.f12.f64 = double(temp.f32);
	// lfs f9,240(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 240);
	ctx.f9.f64 = double(temp.f32);
loc_821F0568:
	// lfs f7,240(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	ctx.f7.f64 = double(temp.f32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f10,236(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f6,f9,f7
	ctx.f6.f64 = double(float(ctx.f9.f64 - ctx.f7.f64));
	// lfs f13,232(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f8,f12,f10
	ctx.f8.f64 = double(float(ctx.f12.f64 - ctx.f10.f64));
	// fsubs f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f6,88(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f8,84(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f11,80(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// bl 0x822d4ed0
	ctx.lr = 0x821F0594;
	sub_822D4ED0(ctx, base);
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// li r10,336
	ctx.r10.s64 = 336;
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stfiwx f0,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.f0.u32);
	// bl 0x822d4ed0
	ctx.lr = 0x821F05AC;
	sub_822D4ED0(ctx, base);
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
loc_821F05C0:
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// li r10,336
	ctx.r10.s64 = 336;
	// lfs f0,248(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfiwx f13,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.f13.u32);
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

PPC_WEAK_FUNC(sub_821F0518) {
	__imp__sub_821F0518(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F05E8) {
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
	// bl 0x822b20b8
	ctx.lr = 0x821F0600;
	sub_822B20B8(ctx, base);
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// clrlwi r8,r3,16
	ctx.r8.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r9,r11,7880
	ctx.r9.s64 = ctx.r11.s64 + 7880;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_821F0614:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lhz r6,0(r7)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r7.u32 + 0);
	// cmplw cr6,r6,r8
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x821f0674
	if (ctx.cr6.eq) goto loc_821F0674;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r7,r9,64
	ctx.r7.s64 = ctx.r9.s64 + 64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x821f0614
	if (ctx.cr6.lt) goto loc_821F0614;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// bl 0x822a13a0
	ctx.lr = 0x821F0640;
	sub_822A13A0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-11496
	ctx.r3.s64 = ctx.r11.s64 + -11496;
	// bl 0x822e84f0
	ctx.lr = 0x821F0650;
	sub_822E84F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822ad4e0
	ctx.lr = 0x821F065C;
	sub_822AD4E0(ctx, base);
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
loc_821F0674:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
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

PPC_WEAK_FUNC(sub_821F05E8) {
	__imp__sub_821F05E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F068C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821F068C) {
	__imp__sub_821F068C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F0690) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf64
	ctx.lr = 0x821F0698;
	__savegprlr_23(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,264(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 264);
	// mr r24,r10
	ctx.r24.u64 = ctx.r10.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// bge cr6,0x821f0940
	if (!ctx.cr6.lt) goto loc_821F0940;
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821f077c
	if (ctx.cr6.eq) goto loc_821F077C;
	// bl 0x8222fe68
	ctx.lr = 0x821F06D4;
	sub_8222FE68(ctx, base);
	// stfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// bl 0x8222fe68
	ctx.lr = 0x821F06DC;
	sub_8222FE68(ctx, base);
	// stfs f1,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// bl 0x8222fe68
	ctx.lr = 0x821F06E4;
	sub_8222FE68(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r3,264(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// lfs f12,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,240(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	ctx.f10.f64 = double(temp.f32);
	// lfs f0,3740(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3740);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,3844(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3844);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f9,f12,f0
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f8,232(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f11,f0
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f6,236(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	ctx.f6.f64 = double(temp.f32);
	// fadds f5,f10,f13
	ctx.f5.f64 = double(float(ctx.f10.f64 + ctx.f13.f64));
	// fmuls f4,f1,f0
	ctx.f4.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// stfs f9,80(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f8,96(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f7,84(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f6,100(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f5,104(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f4,88(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r9,700(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 700);
	// rlwinm r8,r9,0,30,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x821f074c
	if (ctx.cr6.eq) goto loc_821F074C;
	// lwz r29,680(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 680);
	// b 0x821f0750
	goto loc_821F0750;
loc_821F074C:
	// lwz r29,692(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 692);
loc_821F0750:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r27,52(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// bl 0x82333718
	ctx.lr = 0x821F075C;
	sub_82333718(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// bl 0x822067b8
	ctx.lr = 0x821F077C;
	sub_822067B8(ctx, base);
loc_821F077C:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// bne cr6,0x821f078c
	if (!ctx.cr6.eq) goto loc_821F078C;
	// bl 0x822acd78
	ctx.lr = 0x821F0788;
	sub_822ACD78(ctx, base);
	// b 0x821f0798
	goto loc_821F0798;
loc_821F078C:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82332b28
	ctx.lr = 0x821F0794;
	sub_82332B28(ctx, base);
	// bl 0x822aced0
	ctx.lr = 0x821F0798;
	sub_822ACED0(ctx, base);
loc_821F0798:
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// rlwinm r28,r28,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r29,r11,7880
	ctx.r29.s64 = ctx.r11.s64 + 7880;
	// lwzx r10,r28,r29
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r29.u32);
	// lhz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// bl 0x822acff0
	ctx.lr = 0x821F07B0;
	sub_822ACFF0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82229b60
	ctx.lr = 0x821F07B8;
	sub_82229B60(ctx, base);
	// lis r9,-31961
	ctx.r9.s64 = -2094596096;
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r8,r9,-25976
	ctx.r8.s64 = ctx.r9.s64 + -25976;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lhz r4,46(r8)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r8.u32 + 46);
	// bl 0x82229da8
	ctx.lr = 0x821F07D0;
	sub_82229DA8(ctx, base);
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// cntlzw r6,r7
	ctx.r6.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm r10,r6,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// addi r5,r10,6
	ctx.r5.s64 = ctx.r10.s64 + 6;
	// stw r5,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r5.u32);
	// beq cr6,0x821f0808
	if (ctx.cr6.eq) goto loc_821F0808;
	// lhz r26,126(r30)
	ctx.r26.u64 = PPC_LOAD_U16(ctx.r30.u32 + 126);
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// blt cr6,0x821f0808
	if (ctx.cr6.lt) goto loc_821F0808;
	// cmpwi cr6,r26,2
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 2, ctx.xer);
	// blt cr6,0x821f080c
	if (ctx.cr6.lt) goto loc_821F080C;
loc_821F0808:
	// li r26,2046
	ctx.r26.s64 = 2046;
loc_821F080C:
	// lwz r11,272(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r30,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r30.u32);
	// beq cr6,0x821f0828
	if (ctx.cr6.eq) goto loc_821F0828;
	// lwz r11,312(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 312);
	// oris r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 65536;
	// stw r10,312(r30)
	PPC_STORE_U32(ctx.r30.u32 + 312, ctx.r10.u32);
loc_821F0828:
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// li r27,0
	ctx.r27.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,1024
	ctx.r9.s64 = 67108864;
	// sth r27,124(r31)
	PPC_STORE_U16(ctx.r31.u32 + 124, ctx.r27.u16);
	// stb r10,289(r31)
	PPC_STORE_U8(ctx.r31.u32 + 289, ctx.r10.u8);
	// stw r9,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r9.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r8,7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 7, ctx.xer);
	// beq cr6,0x821f0890
	if (ctx.cr6.eq) goto loc_821F0890;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r31,244
	ctx.r30.s64 = ctx.r31.s64 + 244;
	// lfs f0,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,244(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 244, temp.u32);
	// stfs f0,252(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 252, temp.u32);
	// bl 0x821f0518
	ctx.lr = 0x821F0874;
	sub_821F0518(ctx, base);
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// lfs f0,244(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,264(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 264, temp.u32);
	// lfs f13,248(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,268(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 268, temp.u32);
	// lfs f12,252(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,272(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 272, temp.u32);
loc_821F0890:
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// sth r27,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r27.u16);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r11,9624
	ctx.r9.s64 = ctx.r11.s64 + 9624;
	// li r8,17
	ctx.r8.s64 = 17;
	// lfs f0,6016(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6016);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,188(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 188, temp.u32);
	// stfs f0,200(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 200, temp.u32);
	// lwz r11,52(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 52);
	// addi r11,r11,1700
	ctx.r11.s64 = ctx.r11.s64 + 1700;
	// stw r11,64(r9)
	PPC_STORE_U32(ctx.r9.u32 + 64, ctx.r11.u32);
	// stb r8,291(r31)
	PPC_STORE_U8(ctx.r31.u32 + 291, ctx.r8.u8);
	// bl 0x82338288
	ctx.lr = 0x821F08C4;
	sub_82338288(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r30,264(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// bl 0x82332b28
	ctx.lr = 0x821F08D0;
	sub_82332B28(ctx, base);
	// lwzx r7,r28,r29
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r29.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lhz r3,0(r7)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r7.u32 + 0);
	// bl 0x822a13c8
	ctx.lr = 0x821F08E0;
	sub_822A13C8(ctx, base);
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// lfs f3,36(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,32(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	ctx.f2.f64 = double(temp.f32);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// lfs f1,28(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	ctx.f1.f64 = double(temp.f32);
	// addi r3,r6,-11464
	ctx.r3.s64 = ctx.r6.s64 + -11464;
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
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// bl 0x822e84f0
	ctx.lr = 0x821F0920;
	sub_822E84F0(ctx, base);
	// lis r30,-32153
	ctx.r30.s64 = -2107179008;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,-16768(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -16768);
	// bl 0x82360768
	ctx.lr = 0x821F0930;
	sub_82360768(ctx, base);
	// lwz r3,-16768(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -16768);
	// bl 0x82360460
	ctx.lr = 0x821F0938;
	sub_82360460(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82340d30
	ctx.lr = 0x821F0940;
	sub_82340D30(ctx, base);
loc_821F0940:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821F0690) {
	__imp__sub_821F0690(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F0948) {
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
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x821f09a0
	if (ctx.cr6.eq) goto loc_821F09A0;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x82332af8
	ctx.lr = 0x821F096C;
	sub_82332AF8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821f09a0
	if (ctx.cr6.eq) goto loc_821F09A0;
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821f09a0
	if (!ctx.cr6.eq) goto loc_821F09A0;
	// lwz r11,1460(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1460);
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f1,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f1.f64 = double(temp.f32);
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
loc_821F09A0:
	// lis r11,-32052
	ctx.r11.s64 = -2100559872;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-17696
	ctx.r9.s64 = ctx.r11.s64 + -17696;
	// lfsx f1,r10,r9
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	ctx.f1.f64 = double(temp.f32);
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

PPC_WEAK_FUNC(sub_821F0948) {
	__imp__sub_821F0948(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F09C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821F09C4) {
	__imp__sub_821F09C4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F09C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,332(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 332);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x821f09f8
	if (ctx.cr6.eq) goto loc_821F09F8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x821f09f8
	if (ctx.cr6.gt) goto loc_821F09F8;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x821f09f8
	if (!ctx.cr6.gt) goto loc_821F09F8;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,332(r10)
	PPC_STORE_U32(ctx.r10.u32 + 332, ctx.r11.u32);
	// blr 
	return;
loc_821F09F8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821F09C8) {
	__imp__sub_821F09C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F0A00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x821F0A08;
	__savegprlr_28(ctx, base);
	// lwz r8,264(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 264);
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
	// ori r29,r11,44572
	ctx.r29.u64 = ctx.r11.u64 | 44572;
	// lwz r10,340(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 340);
	// cmpw cr6,r5,r10
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x821f0a28
	if (!ctx.cr6.eq) goto loc_821F0A28;
	// stbx r30,r8,r29
	PPC_STORE_U8(ctx.r8.u32 + ctx.r29.u32, ctx.r30.u8);
loc_821F0A28:
	// lwz r11,332(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 332);
	// cmpw cr6,r5,r11
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x821f0bd4
	if (ctx.cr6.eq) goto loc_821F0BD4;
	// li r28,1
	ctx.r28.s64 = 1;
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// beq cr6,0x821f0a5c
	if (ctx.cr6.eq) goto loc_821F0A5C;
	// cmpwi cr6,r6,2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 2, ctx.xer);
	// beq cr6,0x821f0a5c
	if (ctx.cr6.eq) goto loc_821F0A5C;
	// cmpwi cr6,r6,9
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 9, ctx.xer);
	// beq cr6,0x821f0a5c
	if (ctx.cr6.eq) goto loc_821F0A5C;
	// cmpwi cr6,r6,3
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 3, ctx.xer);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// bne cr6,0x821f0a60
	if (!ctx.cr6.eq) goto loc_821F0A60;
loc_821F0A5C:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_821F0A60:
	// lis r9,0
	ctx.r9.s64 = 0;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,-32020
	ctx.r10.s64 = -2098462720;
	// ori r7,r9,44568
	ctx.r7.u64 = ctx.r9.u64 | 44568;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r31,r10,9624
	ctx.r31.s64 = ctx.r10.s64 + 9624;
	// beq cr6,0x821f0af8
	if (ctx.cr6.eq) goto loc_821F0AF8;
	// lis r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// ori r11,r11,44560
	ctx.r11.u64 = ctx.r11.u64 | 44560;
	// lfs f13,5484(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f13.f64 = double(temp.f32);
	// lfsx f0,r8,r11
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x821f0af8
	if (ctx.cr6.eq) goto loc_821F0AF8;
	// lfs f13,240(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 240);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f0
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f11,240(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 240);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f13,f11
	ctx.f10.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// lfs f9,232(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 232);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,232(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 232);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f9,f8
	ctx.f7.f64 = double(float(ctx.f9.f64 - ctx.f8.f64));
	// lfs f6,236(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 236);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,236(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 236);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f4,f6,f5
	ctx.f4.f64 = double(float(ctx.f6.f64 - ctx.f5.f64));
	// fmuls f3,f10,f10
	ctx.f3.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// fmadds f2,f7,f7,f3
	ctx.f2.f64 = double(float(ctx.f7.f64 * ctx.f7.f64 + ctx.f3.f64));
	// fmadds f1,f4,f4,f2
	ctx.f1.f64 = double(float(ctx.f4.f64 * ctx.f4.f64 + ctx.f2.f64));
	// fcmpu cr6,f1,f12
	ctx.cr6.compare(ctx.f1.f64, ctx.f12.f64);
	// bge cr6,0x821f0af8
	if (!ctx.cr6.lt) goto loc_821F0AF8;
	// lbzx r11,r8,r29
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r29.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821f0af4
	if (ctx.cr6.eq) goto loc_821F0AF4;
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwzx r10,r8,r7
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x821f0af8
	if (ctx.cr6.lt) goto loc_821F0AF8;
loc_821F0AF4:
	// stw r30,332(r3)
	PPC_STORE_U32(ctx.r3.u32 + 332, ctx.r30.u32);
loc_821F0AF8:
	// lwz r11,332(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 332);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x821f0bd4
	if (ctx.cr6.gt) goto loc_821F0BD4;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x821f0bd4
	if (!ctx.cr6.gt) goto loc_821F0BD4;
	// lis r11,-32032
	ctx.r11.s64 = -2099249152;
	// lwz r11,-5968(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5968);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821f0b38
	if (ctx.cr6.eq) goto loc_821F0B38;
	// cmpwi cr6,r6,6
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 6, ctx.xer);
	// beq cr6,0x821f0b30
	if (ctx.cr6.eq) goto loc_821F0B30;
	// cmpwi cr6,r6,7
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 7, ctx.xer);
	// bne cr6,0x821f0b38
	if (!ctx.cr6.eq) goto loc_821F0B38;
loc_821F0B30:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// b 0x821f0b3c
	goto loc_821F0B3C;
loc_821F0B38:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_821F0B3C:
	// lis r5,-32032
	ctx.r5.s64 = -2099249152;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// lwz r11,-6044(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + -6044);
	// lbz r4,12(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x821f0b64
	if (ctx.cr6.eq) goto loc_821F0B64;
	// addi r11,r6,-8
	ctx.r11.s64 = ctx.r6.s64 + -8;
	// cntlzw r6,r11
	ctx.r6.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r6,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// b 0x821f0b68
	goto loc_821F0B68;
loc_821F0B64:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_821F0B68:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821f0b88
	if (!ctx.cr6.eq) goto loc_821F0B88;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821f0b88
	if (!ctx.cr6.eq) goto loc_821F0B88;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821f0bd4
	if (ctx.cr6.eq) goto loc_821F0BD4;
loc_821F0B88:
	// lbzx r11,r8,r29
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r29.u32);
	// add r10,r8,r29
	ctx.r10.u64 = ctx.r8.u64 + ctx.r29.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821f0bb4
	if (!ctx.cr6.eq) goto loc_821F0BB4;
	// lis r9,0
	ctx.r9.s64 = 0;
	// stb r28,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r28.u8);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// ori r6,r9,44564
	ctx.r6.u64 = ctx.r9.u64 | 44564;
	// lwzx r9,r8,r6
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r6.u32);
	// add r5,r9,r11
	ctx.r5.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stwx r5,r8,r7
	PPC_STORE_U32(ctx.r8.u32 + ctx.r7.u32, ctx.r5.u32);
loc_821F0BB4:
	// lbz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821f0bd4
	if (ctx.cr6.eq) goto loc_821F0BD4;
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwzx r10,r8,r7
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x821f0bd4
	if (!ctx.cr6.lt) goto loc_821F0BD4;
	// stw r28,332(r3)
	PPC_STORE_U32(ctx.r3.u32 + 332, ctx.r28.u32);
loc_821F0BD4:
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821F0A00) {
	__imp__sub_821F0A00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F0BD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf64
	ctx.lr = 0x821F0BE0;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// lwz r3,260(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// mr r23,r8
	ctx.r23.u64 = ctx.r8.u64;
	// mr r27,r9
	ctx.r27.u64 = ctx.r9.u64;
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821f0c18
	if (!ctx.cr6.eq) goto loc_821F0C18;
	// bl 0x822acd78
	ctx.lr = 0x821F0C14;
	sub_822ACD78(ctx, base);
	// b 0x821f0c20
	goto loc_821F0C20;
loc_821F0C18:
	// bl 0x82332b28
	ctx.lr = 0x821F0C1C;
	sub_82332B28(ctx, base);
	// bl 0x822aced0
	ctx.lr = 0x821F0C20;
	sub_822ACED0(ctx, base);
loc_821F0C20:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822acbf8
	ctx.lr = 0x821F0C28;
	sub_822ACBF8(ctx, base);
	// lwz r3,252(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r30,r11,-28736
	ctx.r30.s64 = ctx.r11.s64 + -28736;
	// beq cr6,0x821f0c44
	if (ctx.cr6.eq) goto loc_821F0C44;
	// bl 0x822acff0
	ctx.lr = 0x821F0C40;
	sub_822ACFF0(ctx, base);
	// b 0x821f0c4c
	goto loc_821F0C4C;
loc_821F0C44:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822aced0
	ctx.lr = 0x821F0C4C;
	sub_822ACED0(ctx, base);
loc_821F0C4C:
	// lwz r31,244(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821f0c8c
	if (ctx.cr6.eq) goto loc_821F0C8C;
	// addi r11,r31,239
	ctx.r11.s64 = ctx.r31.s64 + 239;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r11,r10,r28
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r28.u32);
	// addi r3,r11,1208
	ctx.r3.s64 = ctx.r11.s64 + 1208;
	// bl 0x8233dd98
	ctx.lr = 0x821F0C6C;
	sub_8233DD98(ctx, base);
	// addi r9,r31,270
	ctx.r9.s64 = ctx.r31.s64 + 270;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r3,r8,r28
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r8.u32 + ctx.r28.u32);
	// bl 0x822acff0
	ctx.lr = 0x821F0C80;
	sub_822ACFF0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822acff0
	ctx.lr = 0x821F0C88;
	sub_822ACFF0(ctx, base);
	// b 0x821f0c9c
	goto loc_821F0C9C;
loc_821F0C8C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822aced0
	ctx.lr = 0x821F0C94;
	sub_822ACED0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822aced0
	ctx.lr = 0x821F0C9C;
	sub_822ACED0(ctx, base);
loc_821F0C9C:
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// rlwinm r10,r27,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,7880
	ctx.r9.s64 = ctx.r11.s64 + 7880;
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lhz r3,0(r8)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r8.u32 + 0);
	// bl 0x822acff0
	ctx.lr = 0x821F0CB4;
	sub_822ACFF0(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// addi r31,r11,-5928
	ctx.r31.s64 = ctx.r11.s64 + -5928;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bne cr6,0x821f0ccc
	if (!ctx.cr6.eq) goto loc_821F0CCC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_821F0CCC:
	// bl 0x822ad078
	ctx.lr = 0x821F0CD0;
	sub_822AD078(ctx, base);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bne cr6,0x821f0ce0
	if (!ctx.cr6.eq) goto loc_821F0CE0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_821F0CE0:
	// bl 0x822ad078
	ctx.lr = 0x821F0CE4;
	sub_822AD078(ctx, base);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82229b60
	ctx.lr = 0x821F0CEC;
	sub_82229B60(ctx, base);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x822acbf8
	ctx.lr = 0x821F0CF4;
	sub_822ACBF8(ctx, base);
	// li r5,10
	ctx.r5.s64 = 10;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82229da8
	ctx.lr = 0x821F0D04;
	sub_82229DA8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821F0BD8) {
	__imp__sub_821F0BD8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F0D0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821F0D0C) {
	__imp__sub_821F0D0C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F0D10) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,264(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 264);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821f0d40
	if (ctx.cr6.eq) goto loc_821F0D40;
	// lwz r11,172(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 172);
	// rlwinm r10,r11,0,11,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1FFC00;
	// rlwinm r10,r10,0,20,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFF00FFF;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x821f0d3c
	if (ctx.cr6.eq) goto loc_821F0D3C;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_821F0D3C:
	// b 0x82332c00
	sub_82332C00(ctx, base);
	return;
loc_821F0D40:
	// lwz r10,280(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 280);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lhz r3,124(r11)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + 124);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821F0D10) {
	__imp__sub_821F0D10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F0D58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x821F0D60;
	__savegprlr_26(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// lfs f31,-23144(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -23144);
	ctx.f31.f64 = double(temp.f32);
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x821f0d98
	if (!ctx.cr6.eq) goto loc_821F0D98;
	// ori r29,r29,4
	ctx.r29.u64 = ctx.r29.u64 | 4;
	// b 0x821f0da4
	goto loc_821F0DA4;
loc_821F0D98:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x822d4b08
	ctx.lr = 0x821F0DA4;
	sub_822D4B08(ctx, base);
loc_821F0DA4:
	// lwz r11,264(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 264);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821f0de0
	if (ctx.cr6.eq) goto loc_821F0DE0;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x821f0dcc
	if (ctx.cr6.eq) goto loc_821F0DCC;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f31,11804(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 11804);
	ctx.f31.f64 = double(temp.f32);
	// b 0x821f0de0
	goto loc_821F0DE0;
loc_821F0DCC:
	// rlwinm r10,r10,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x821f0de0
	if (ctx.cr6.eq) goto loc_821F0DE0;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lfs f31,-11392(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -11392);
	ctx.f31.f64 = double(temp.f32);
loc_821F0DE0:
	// extsw r10,r28
	ctx.r10.s64 = ctx.r28.s32;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// fctiwz f10,f11
	ctx.f10.s64 = (ctx.f11.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f10.u64);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r10,60
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 60, ctx.xer);
	// ble cr6,0x821f0e10
	if (!ctx.cr6.gt) goto loc_821F0E10;
	// li r10,60
	ctx.r10.s64 = 60;
loc_821F0E10:
	// lwz r9,312(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 312);
	// rlwinm r8,r29,0,29,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x4;
	// rlwinm r7,r9,0,26,26
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x20;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// addic r6,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r6.s64 = ctx.r7.s64 + -1;
	// subfe r4,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r4.u64 = ~ctx.r5.u64 + ctx.r5.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r8,r4,r10
	ctx.r8.u64 = ctx.r4.u64 & ctx.r10.u64;
	// bne cr6,0x821f0f3c
	if (!ctx.cr6.eq) goto loc_821F0F3C;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x821f0f3c
	if (ctx.cr6.eq) goto loc_821F0F3C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821f0f3c
	if (ctx.cr6.eq) goto loc_821F0F3C;
	// lwz r10,172(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 172);
	// rlwinm r9,r10,0,20,21
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xC00;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x821f0f3c
	if (!ctx.cr6.eq) goto loc_821F0F3C;
	// extsw r10,r8
	ctx.r10.s64 = ctx.r8.s32;
	// lfs f13,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lis r9,-32032
	ctx.r9.s64 = -2099249152;
	// lfs f12,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// lwz r10,-6028(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + -6028);
	// lfs f0,25480(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 25480);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r11,40
	ctx.r9.s64 = ctx.r11.s64 + 40;
	// lfs f8,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// cmplw cr6,r30,r27
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r27.u32, ctx.xer);
	// lfs f7,40(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f6,f9
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f9.f64));
	// fmuls f4,f5,f0
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// fmuls f3,f13,f4
	ctx.f3.f64 = double(float(ctx.f13.f64 * ctx.f4.f64));
	// fmuls f2,f12,f4
	ctx.f2.f64 = double(float(ctx.f12.f64 * ctx.f4.f64));
	// fmuls f1,f8,f4
	ctx.f1.f64 = double(float(ctx.f8.f64 * ctx.f4.f64));
	// fadds f0,f7,f3
	ctx.f0.f64 = double(float(ctx.f7.f64 + ctx.f3.f64));
	// stfs f0,40(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// lfs f13,44(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f13,f2
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f2.f64));
	// stfs f12,44(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 44, temp.u32);
	// lfs f11,48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f11.f64 = double(temp.f32);
	// fadds f10,f11,f1
	ctx.f10.f64 = double(float(ctx.f11.f64 + ctx.f1.f64));
	// stfs f10,48(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 48, temp.u32);
	// bne cr6,0x821f0f00
	if (!ctx.cr6.eq) goto loc_821F0F00;
	// cmpwi cr6,r26,6
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 6, ctx.xer);
	// beq cr6,0x821f0ee8
	if (ctx.cr6.eq) goto loc_821F0EE8;
	// cmpwi cr6,r26,7
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 7, ctx.xer);
	// beq cr6,0x821f0ee8
	if (ctx.cr6.eq) goto loc_821F0EE8;
	// cmpwi cr6,r26,4
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 4, ctx.xer);
	// beq cr6,0x821f0ee8
	if (ctx.cr6.eq) goto loc_821F0EE8;
	// cmpwi cr6,r26,5
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 5, ctx.xer);
	// bne cr6,0x821f0f00
	if (!ctx.cr6.eq) goto loc_821F0F00;
loc_821F0EE8:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f13,48(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// lfd f0,25920(r10)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + 25920);
	// fmul f12,f13,f0
	ctx.f12.f64 = ctx.f13.f64 * ctx.f0.f64;
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// stfs f11,48(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 48, temp.u32);
loc_821F0F00:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x821f0f3c
	if (!ctx.cr6.eq) goto loc_821F0F3C;
	// rlwinm r10,r8,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r10,200
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 200, ctx.xer);
	// blt cr6,0x821f0f20
	if (ctx.cr6.lt) goto loc_821F0F20;
	// li r10,200
	ctx.r10.s64 = 200;
	// b 0x821f0f2c
	goto loc_821F0F2C;
loc_821F0F20:
	// cmpwi cr6,r10,50
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 50, ctx.xer);
	// bgt cr6,0x821f0f2c
	if (ctx.cr6.gt) goto loc_821F0F2C;
	// li r10,50
	ctx.r10.s64 = 50;
loc_821F0F2C:
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// ori r8,r9,256
	ctx.r8.u64 = ctx.r9.u64 | 256;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
loc_821F0F3C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821F0D58) {
	__imp__sub_821F0D58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F0F48) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,272(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 272);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821f0f5c
	if (!ctx.cr6.eq) goto loc_821F0F5C;
loc_821F0F54:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_821F0F5C:
	// lbz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821f0f54
	if (ctx.cr6.eq) goto loc_821F0F54;
	// lwz r11,268(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 268);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821f0f54
	if (ctx.cr6.eq) goto loc_821F0F54;
	// lwz r11,272(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 272);
	// lbz r10,89(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 89);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821f0f54
	if (!ctx.cr6.eq) goto loc_821F0F54;
	// lhz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821f0fb0
	if (ctx.cr6.eq) goto loc_821F0FB0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// mulli r11,r11,624
	ctx.r11.s64 = ctx.r11.s64 * 624;
	// addi r10,r10,26552
	ctx.r10.s64 = ctx.r10.s64 + 26552;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r9,r3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r3.u32, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_821F0FB0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821F0F48) {
	__imp__sub_821F0F48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F0FB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821f0fc8
	if (!ctx.cr6.eq) goto loc_821F0FC8;
loc_821F0FC0:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_821F0FC8:
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x821f0fc0
	if (!ctx.cr6.eq) goto loc_821F0FC0;
	// lwz r11,384(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 384);
	// rlwinm r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x821f0fc0
	if (ctx.cr6.eq) goto loc_821F0FC0;
	// lhz r11,324(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 324);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821f0fc0
	if (ctx.cr6.eq) goto loc_821F0FC0;
	// lis r9,-32052
	ctx.r9.s64 = -2100559872;
	// mulli r10,r11,624
	ctx.r10.s64 = ctx.r11.s64 * 624;
	// addi r11,r9,26552
	ctx.r11.s64 = ctx.r9.s64 + 26552;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r8,-356(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + -356);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x821f0fc0
	if (ctx.cr6.eq) goto loc_821F0FC0;
	// lwz r11,-352(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -352);
	// lwz r10,272(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 272);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x821f0fc0
	if (!ctx.cr6.eq) goto loc_821F0FC0;
	// lis r10,-32020
	ctx.r10.s64 = -2098462720;
	// lwz r9,88(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// li r11,2500
	ctx.r11.s64 = 2500;
	// addi r8,r10,9624
	ctx.r8.s64 = ctx.r10.s64 + 9624;
	// lwz r10,52(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 52);
	// subf r7,r9,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r9.s64;
	// subfc r6,r7,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r7.u32;
	ctx.r6.s64 = ctx.r11.s64 - ctx.r7.s64;
	// eqv r5,r7,r11
	ctx.r5.u64 = ~(ctx.r7.u64 ^ ctx.r11.u64);
	// rlwinm r4,r5,1,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x1;
	// addze r3,r4
	temp.s64 = ctx.r4.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r4.u32;
	ctx.r3.s64 = temp.s64;
	// clrlwi r3,r3,31
	ctx.r3.u64 = ctx.r3.u32 & 0x1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821F0FB8) {
	__imp__sub_821F0FB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F1054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821F1054) {
	__imp__sub_821F1054(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F1058) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,268(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 268);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821f1070
	if (ctx.cr6.eq) goto loc_821F1070;
	// lbz r11,3164(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3164);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_821F1070:
	// lwz r11,332(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 332);
	// subf r10,r4,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r4.s64;
	// stw r10,332(r3)
	PPC_STORE_U32(ctx.r3.u32 + 332, ctx.r10.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821F1058) {
	__imp__sub_821F1058(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F1080) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf40
	ctx.lr = 0x821F1088;
	__savegprlr_14(ctx, base);
	// stfd f29,-176(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -176, ctx.f29.u64);
	// stfd f30,-168(r1)
	PPC_STORE_U64(ctx.r1.u32 + -168, ctx.f30.u64);
	// stfd f31,-160(r1)
	PPC_STORE_U64(ctx.r1.u32 + -160, ctx.f31.u64);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,289(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 289);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r16,r4
	ctx.r16.u64 = ctx.r4.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// mr r19,r7
	ctx.r19.u64 = ctx.r7.u64;
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// mr r20,r9
	ctx.r20.u64 = ctx.r9.u64;
	// mr r21,r10
	ctx.r21.u64 = ctx.r10.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821f1150
	if (ctx.cr6.eq) goto loc_821F1150;
	// lwz r15,428(r1)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + 428);
	// cmpwi cr6,r15,19
	ctx.cr6.compare<int32_t>(ctx.r15.s32, 19, ctx.xer);
	// beq cr6,0x821f1150
	if (ctx.cr6.eq) goto loc_821F1150;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822ac8c0
	ctx.lr = 0x821F10D8;
	sub_822AC8C0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821f1168
	if (!ctx.cr6.eq) goto loc_821F1168;
	// lhz r3,302(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 302);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821f10f8
	if (ctx.cr6.eq) goto loc_821F10F8;
	// bl 0x822a13a0
	ctx.lr = 0x821F10F0;
	sub_822A13A0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x821f1100
	goto loc_821F1100;
loc_821F10F8:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r30,r11,-24004
	ctx.r30.s64 = ctx.r11.s64 + -24004;
loc_821F1100:
	// lfs f31,240(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	ctx.f31.f64 = double(temp.f32);
	// lhz r3,292(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 292);
	// lfs f30,236(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	ctx.f30.f64 = double(temp.f32);
	// lfs f29,232(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	ctx.f29.f64 = double(temp.f32);
	// bl 0x822a13a0
	ctx.lr = 0x821F1114;
	sub_822A13A0(ctx, base);
	// stfd f29,48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.f29.u64);
	// ld r7,48(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 48);
	// stfd f30,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.f30.u64);
	// ld r8,56(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 56);
	// stfd f31,64(r1)
	PPC_STORE_U64(ctx.r1.u32 + 64, ctx.f31.u64);
	// ld r9,64(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 64);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// addi r4,r11,-11344
	ctx.r4.s64 = ctx.r11.s64 + -11344;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r3,15
	ctx.r3.s64 = 15;
	// bl 0x82280c30
	ctx.lr = 0x821F1150;
	sub_82280C30(ctx, base);
loc_821F1150:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
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
loc_821F1168:
	// lis r11,-32052
	ctx.r11.s64 = -2100559872;
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 0, ctx.xer);
	// addi r11,r11,26552
	ctx.r11.s64 = ctx.r11.s64 + 26552;
	// bne cr6,0x821f1180
	if (!ctx.cr6.eq) goto loc_821F1180;
	// addis r10,r11,19
	ctx.r10.s64 = ctx.r11.s64 + 1245184;
	// addi r16,r10,31520
	ctx.r16.s64 = ctx.r10.s64 + 31520;
loc_821F1180:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// bne cr6,0x821f1190
	if (!ctx.cr6.eq) goto loc_821F1190;
	// addis r11,r11,19
	ctx.r11.s64 = ctx.r11.s64 + 1245184;
	// addi r24,r11,31520
	ctx.r24.s64 = ctx.r11.s64 + 31520;
loc_821F1190:
	// lwz r22,420(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 420);
	// li r14,0
	ctx.r14.s64 = 0;
	// cmpwi cr6,r22,-1
	ctx.cr6.compare<int32_t>(ctx.r22.s32, -1, ctx.xer);
	// bne cr6,0x821f11d4
	if (!ctx.cr6.eq) goto loc_821F11D4;
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 0, ctx.xer);
	// beq cr6,0x821f11b8
	if (ctx.cr6.eq) goto loc_821F11B8;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x821f0d10
	ctx.lr = 0x821F11B0;
	sub_821F0D10(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// b 0x821f11d4
	goto loc_821F11D4;
loc_821F11B8:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x821f11d0
	if (ctx.cr6.eq) goto loc_821F11D0;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x821f0d10
	ctx.lr = 0x821F11C8;
	sub_821F0D10(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// b 0x821f11d4
	goto loc_821F11D4;
loc_821F11D0:
	// mr r22,r14
	ctx.r22.u64 = ctx.r14.u64;
loc_821F11D4:
	// lwz r11,276(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821f1234
	if (ctx.cr6.eq) goto loc_821F1234;
	// lwz r11,444(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 444);
	// mr r10,r21
	ctx.r10.u64 = ctx.r21.u64;
	// lwz r29,436(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 436);
	// mr r9,r20
	ctx.r9.u64 = ctx.r20.u64;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// stw r14,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r14.u32);
	// mr r7,r19
	ctx.r7.u64 = ctx.r19.u64;
	// stw r15,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r15.u32);
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// stw r22,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r22.u32);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8234adf8
	ctx.lr = 0x821F1220;
	sub_8234ADF8(ctx, base);
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
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
loc_821F1234:
	// lwz r18,264(r31)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// li r17,1
	ctx.r17.s64 = 1;
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 0, ctx.xer);
	// beq cr6,0x821f13b4
	if (ctx.cr6.eq) goto loc_821F13B4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82348e30
	ctx.lr = 0x821F124C;
	sub_82348E30(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821f1150
	if (!ctx.cr6.eq) goto loc_821F1150;
	// lwz r11,16(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 16);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x821f1150
	if (!ctx.cr6.eq) goto loc_821F1150;
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r10,r11,44372
	ctx.r10.u64 = ctx.r11.u64 | 44372;
	// lwzx r9,r18,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r18.u32 + ctx.r10.u32);
	// clrlwi r8,r9,30
	ctx.r8.u64 = ctx.r9.u32 & 0x3;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x821f1150
	if (!ctx.cr6.eq) goto loc_821F1150;
	// cmpwi cr6,r21,11
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 11, ctx.xer);
	// beq cr6,0x821f133c
	if (ctx.cr6.eq) goto loc_821F133C;
	// clrlwi r11,r20,31
	ctx.r11.u64 = ctx.r20.u32 & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// extsw r11,r30
	ctx.r11.s64 = ctx.r30.s32;
	// beq cr6,0x821f12c8
	if (ctx.cr6.eq) goto loc_821F12C8;
	// std r11,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r11.u64);
	// lfd f0,128(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lis r10,-32020
	ctx.r10.s64 = -2098462720;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lwz r11,26016(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26016);
	// lfs f11,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f11,f12
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// fctiwz f9,f10
	ctx.f9.s64 = (ctx.f10.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f9,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.f9.u64);
	// lwz r30,132(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// b 0x821f133c
	goto loc_821F133C;
loc_821F12C8:
	// cmpwi cr6,r21,8
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 8, ctx.xer);
	// bne cr6,0x821f1300
	if (!ctx.cr6.eq) goto loc_821F1300;
	// std r11,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r11.u64);
	// lis r10,-32024
	ctx.r10.s64 = -2098724864;
	// lwz r11,11280(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 11280);
	// lfs f11,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// lfd f0,128(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f10,f11,f12
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// fctiwz f9,f10
	ctx.f9.s64 = (ctx.f10.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f9,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.f9.u64);
	// lwz r30,132(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// b 0x821f133c
	goto loc_821F133C;
loc_821F1300:
	// std r11,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r11.u64);
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// lis r9,0
	ctx.r9.s64 = 0;
	// ori r8,r9,44584
	ctx.r8.u64 = ctx.r9.u64 | 44584;
	// lwz r11,26536(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26536);
	// lfsx f11,r18,r8
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r18.u32 + ctx.r8.u32);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f10.f64));
	// lfd f0,128(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f8,f9,f12
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// fctiwz f7,f8
	ctx.f7.s64 = (ctx.f8.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f8.f64));
	// stfd f7,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.f7.u64);
	// lwz r30,132(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
loc_821F133C:
	// lwz r11,264(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 264);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821f1378
	if (ctx.cr6.eq) goto loc_821F1378;
	// extsw r11,r30
	ctx.r11.s64 = ctx.r30.s32;
	// lis r10,-32021
	ctx.r10.s64 = -2098528256;
	// std r11,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r11.u64);
	// lfd f13,128(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// lwz r11,-19080(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -19080);
	// lfs f0,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f10,f0,f11
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// fctiwz f9,f10
	ctx.f9.s64 = (ctx.f10.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f9,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.f9.u64);
	// lwz r30,132(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
loc_821F1378:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x821f0fb8
	ctx.lr = 0x821F1384;
	sub_821F0FB8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821f13a8
	if (!ctx.cr6.eq) goto loc_821F13A8;
	// lwz r11,332(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 332);
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// addze r11,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r11.s64 = temp.s64;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821f13a8
	if (ctx.cr6.lt) goto loc_821F13A8;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_821F13A8:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bgt cr6,0x821f13b4
	if (ctx.cr6.gt) goto loc_821F13B4;
	// mr r30,r17
	ctx.r30.u64 = ctx.r17.u64;
loc_821F13B4:
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f0f48
	ctx.lr = 0x821F13C0;
	sub_821F0F48(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821f1150
	if (ctx.cr6.eq) goto loc_821F1150;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,268(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lfs f31,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f31.f64 = double(temp.f32);
	// beq cr6,0x821f142c
	if (ctx.cr6.eq) goto loc_821F142C;
	// cmpwi cr6,r21,8
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 8, ctx.xer);
	// beq cr6,0x821f142c
	if (ctx.cr6.eq) goto loc_821F142C;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x821f0948
	ctx.lr = 0x821F13F4;
	sub_821F0948(ctx, base);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// beq cr6,0x821f1150
	if (ctx.cr6.eq) goto loc_821F1150;
	// extsw r11,r30
	ctx.r11.s64 = ctx.r30.s32;
	// std r11,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r11.u64);
	// lfd f0,128(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f11,f12,f1
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f1.f64));
	// fctiwz f10,f11
	ctx.f10.s64 = (ctx.f11.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f10,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.f10.u64);
	// lwz r30,132(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bgt cr6,0x821f142c
	if (ctx.cr6.gt) goto loc_821F142C;
	// mr r30,r17
	ctx.r30.u64 = ctx.r17.u64;
loc_821F142C:
	// stfs f31,136(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// mr r9,r21
	ctx.r9.u64 = ctx.r21.u64;
	// stfs f31,140(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// mr r8,r20
	ctx.r8.u64 = ctx.r20.u64;
	// stfs f31,144(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// addi r6,r1,136
	ctx.r6.s64 = ctx.r1.s64 + 136;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f0d58
	ctx.lr = 0x821F1458;
	sub_821F0D58(ctx, base);
	// lwz r11,312(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x821f1150
	if (!ctx.cr6.eq) goto loc_821F1150;
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// bge cr6,0x821f1474
	if (!ctx.cr6.lt) goto loc_821F1474;
	// mr r30,r17
	ctx.r30.u64 = ctx.r17.u64;
loc_821F1474:
	// lwz r3,268(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// lwz r26,444(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 444);
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// lwz r25,436(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 436);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r27,r11,-25976
	ctx.r27.s64 = ctx.r11.s64 + -25976;
	// beq cr6,0x821f1514
	if (ctx.cr6.eq) goto loc_821F1514;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x821aa0f0
	ctx.lr = 0x821F14A0;
	sub_821AA0F0(ctx, base);
	// lis r11,-32021
	ctx.r11.s64 = -2098528256;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// subf r28,r3,r30
	ctx.r28.s64 = ctx.r30.s64 - ctx.r3.s64;
	// lwz r11,-14876(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14876);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821f14dc
	if (ctx.cr6.eq) goto loc_821F14DC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lwz r6,332(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 332);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// lhz r5,126(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 126);
	// addi r4,r11,-11388
	ctx.r4.s64 = ctx.r11.s64 + -11388;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r3,15
	ctx.r3.s64 = 15;
	// bl 0x82280900
	ctx.lr = 0x821F14DC;
	sub_82280900(ctx, base);
loc_821F14DC:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x821f1514
	if (ctx.cr6.eq) goto loc_821F1514;
	// stw r26,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r26.u32);
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
	// stw r22,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r22.u32);
	// mr r9,r21
	ctx.r9.u64 = ctx.r21.u64;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// lhz r3,502(r27)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r27.u32 + 502);
	// mr r7,r19
	ctx.r7.u64 = ctx.r19.u64;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x821f0bd8
	ctx.lr = 0x821F1514;
	sub_821F0BD8(ctx, base);
loc_821F1514:
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 0, ctx.xer);
	// beq cr6,0x821f1584
	if (ctx.cr6.eq) goto loc_821F1584;
	// addis r10,r18,1
	ctx.r10.s64 = ctx.r18.s64 + 65536;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// addi r10,r10,-21124
	ctx.r10.s64 = ctx.r10.s64 + -21124;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// add r9,r11,r28
	ctx.r9.u64 = ctx.r11.u64 + ctx.r28.u64;
	// addis r11,r18,1
	ctx.r11.s64 = ctx.r18.s64 + 65536;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lis r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-21116
	ctx.r11.s64 = ctx.r11.s64 + -21116;
	// ori r9,r10,44432
	ctx.r9.u64 = ctx.r10.u64 | 44432;
	// beq cr6,0x821f1568
	if (ctx.cr6.eq) goto loc_821F1568;
	// lfs f0,136(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f13,140(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f12,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stwx r14,r18,r9
	PPC_STORE_U32(ctx.r18.u32 + ctx.r9.u32, ctx.r14.u32);
	// b 0x821f1584
	goto loc_821F1584;
loc_821F1568:
	// lfs f0,232(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f13,236(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f12,240(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stwx r17,r18,r9
	PPC_STORE_U32(ctx.r18.u32 + ctx.r9.u32, ctx.r17.u32);
loc_821F1584:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x821f184c
	if (ctx.cr6.eq) goto loc_821F184C;
	// lwz r11,312(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x821f15ac
	if (ctx.cr6.eq) goto loc_821F15AC;
	// lwz r11,332(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 332);
	// subf. r10,r28,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r28.s64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt 0x821f15ac
	if (ctx.cr0.gt) goto loc_821F15AC;
	// addi r28,r11,-1
	ctx.r28.s64 = ctx.r11.s64 + -1;
loc_821F15AC:
	// lwz r10,268(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	// lwz r11,332(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 332);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// beq cr6,0x821f15cc
	if (ctx.cr6.eq) goto loc_821F15CC;
	// lbz r10,3164(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 3164);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821f15d4
	if (!ctx.cr6.eq) goto loc_821F15D4;
loc_821F15CC:
	// subf r11,r28,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r28.s64;
	// stw r11,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r11.u32);
loc_821F15D4:
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 0, ctx.xer);
	// beq cr6,0x821f1678
	if (ctx.cr6.eq) goto loc_821F1678;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x823220b0
	ctx.lr = 0x821F15EC;
	sub_823220B0(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r10,r11,44573
	ctx.r10.u64 = ctx.r11.u64 | 44573;
	// lbzx r9,r18,r10
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r18.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821f1614
	if (ctx.cr6.eq) goto loc_821F1614;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f0a00
	ctx.lr = 0x821F1614;
	sub_821F0A00(ctx, base);
loc_821F1614:
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r10,r11,44574
	ctx.r10.u64 = ctx.r11.u64 | 44574;
	// lbzx r9,r18,r10
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r18.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821f1678
	if (ctx.cr6.eq) goto loc_821F1678;
	// lwz r11,332(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 332);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x821f1678
	if (ctx.cr6.eq) goto loc_821F1678;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x821f1678
	if (ctx.cr6.gt) goto loc_821F1678;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x821f1678
	if (!ctx.cr6.gt) goto loc_821F1678;
	// stw r17,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r17.u32);
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// mr r9,r21
	ctx.r9.u64 = ctx.r21.u64;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// stw r26,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r26.u32);
	// mr r7,r19
	ctx.r7.u64 = ctx.r19.u64;
	// stw r22,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r22.u32);
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lhz r3,48(r27)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r27.u32 + 48);
	// bl 0x821f0bd8
	ctx.lr = 0x821F1678;
	sub_821F0BD8(ctx, base);
loc_821F1678:
	// stw r22,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r22.u32);
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
	// stw r26,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r26.u32);
	// mr r9,r21
	ctx.r9.u64 = ctx.r21.u64;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// lhz r3,42(r27)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r27.u32 + 42);
	// mr r7,r19
	ctx.r7.u64 = ctx.r19.u64;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x821f0bd8
	ctx.lr = 0x821F16A8;
	sub_821F0BD8(ctx, base);
	// lwz r11,332(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 332);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x821f17e0
	if (ctx.cr6.gt) goto loc_821F17E0;
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 0, ctx.xer);
	// beq cr6,0x821f16c8
	if (ctx.cr6.eq) goto loc_821F16C8;
	// lwz r10,312(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// ori r9,r10,32
	ctx.r9.u64 = ctx.r10.u64 | 32;
	// stw r9,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r9.u32);
loc_821F16C8:
	// cmpwi cr6,r11,-999
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -999, ctx.xer);
	// bge cr6,0x821f16d8
	if (!ctx.cr6.lt) goto loc_821F16D8;
	// li r11,-999
	ctx.r11.s64 = -999;
	// stw r11,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r11.u32);
loc_821F16D8:
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 0, ctx.xer);
	// bne cr6,0x821f175c
	if (!ctx.cr6.eq) goto loc_821F175C;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// bne cr6,0x821f16f0
	if (!ctx.cr6.eq) goto loc_821F16F0;
	// bl 0x822acd78
	ctx.lr = 0x821F16EC;
	sub_822ACD78(ctx, base);
	// b 0x821f16fc
	goto loc_821F16FC;
loc_821F16F0:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82332b28
	ctx.lr = 0x821F16F8;
	sub_82332B28(ctx, base);
	// bl 0x822aced0
	ctx.lr = 0x821F16FC;
	sub_822ACED0(ctx, base);
loc_821F16FC:
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// rlwinm r10,r21,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,7880
	ctx.r9.s64 = ctx.r11.s64 + 7880;
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lhz r3,0(r8)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r8.u32 + 0);
	// bl 0x822acff0
	ctx.lr = 0x821F1714;
	sub_822ACFF0(ctx, base);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82229b60
	ctx.lr = 0x821F171C;
	sub_82229B60(ctx, base);
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lhz r4,46(r27)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r27.u32 + 46);
	// bl 0x82229da8
	ctx.lr = 0x821F172C;
	sub_82229DA8(ctx, base);
	// lwz r7,264(r24)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r24.u32 + 264);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x821f175c
	if (ctx.cr6.eq) goto loc_821F175C;
	// lwz r11,272(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821f175c
	if (ctx.cr6.eq) goto loc_821F175C;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x821f1758
	if (ctx.cr6.eq) goto loc_821F1758;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_821F1758:
	// bl 0x823382a0
	ctx.lr = 0x821F175C;
	sub_823382A0(ctx, base);
loc_821F175C:
	// lwz r11,272(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821f1780
	if (ctx.cr6.eq) goto loc_821F1780;
	// stw r24,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r24.u32);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x821f1780
	if (ctx.cr6.eq) goto loc_821F1780;
	// lwz r11,312(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 312);
	// oris r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 65536;
	// stw r10,312(r24)
	PPC_STORE_U32(ctx.r24.u32 + 312, ctx.r10.u32);
loc_821F1780:
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// lbz r10,291(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 291);
	// addi r11,r11,8272
	ctx.r11.s64 = ctx.r11.s64 + 8272;
	// mulli r9,r10,44
	ctx.r9.s64 = ctx.r10.s64 * 44;
	// addi r8,r11,24
	ctx.r8.s64 = ctx.r11.s64 + 24;
	// lwzx r30,r9,r8
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821f17d0
	if (ctx.cr6.eq) goto loc_821F17D0;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x821f0d10
	ctx.lr = 0x821F17A8;
	sub_821F0D10(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r7,r21
	ctx.r7.u64 = ctx.r21.u64;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r9,r1,136
	ctx.r9.s64 = ctx.r1.s64 + 136;
	// mr r10,r15
	ctx.r10.u64 = ctx.r15.u64;
	// bctrl 
	ctx.lr = 0x821F17D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821F17D0:
	// lbz r11,176(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 176);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821f1828
	if (!ctx.cr6.eq) goto loc_821F1828;
	// b 0x821f184c
	goto loc_821F184C;
loc_821F17E0:
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// lbz r10,291(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 291);
	// addi r11,r11,8272
	ctx.r11.s64 = ctx.r11.s64 + 8272;
	// mulli r9,r10,44
	ctx.r9.s64 = ctx.r10.s64 * 44;
	// addi r8,r11,20
	ctx.r8.s64 = ctx.r11.s64 + 20;
	// lwzx r11,r9,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821f1828
	if (ctx.cr6.eq) goto loc_821F1828;
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// mr r9,r15
	ctx.r9.u64 = ctx.r15.u64;
	// addi r8,r1,136
	ctx.r8.s64 = ctx.r1.s64 + 136;
	// mr r7,r21
	ctx.r7.u64 = ctx.r21.u64;
	// mr r6,r19
	ctx.r6.u64 = ctx.r19.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x821F1828;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821F1828:
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821f184c
	if (ctx.cr6.eq) goto loc_821F184C;
	// lwz r10,332(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 332);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge cr6,0x821f1844
	if (!ctx.cr6.lt) goto loc_821F1844;
	// stw r14,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r14.u32);
loc_821F1844:
	// lwz r10,332(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 332);
	// stw r10,332(r11)
	PPC_STORE_U32(ctx.r11.u32 + 332, ctx.r10.u32);
loc_821F184C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
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

PPC_WEAK_FUNC(sub_821F1080) {
	__imp__sub_821F1080(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F1864) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821F1864) {
	__imp__sub_821F1864(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F1868) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf54
	ctx.lr = 0x821F1870;
	__savegprlr_19(ctx, base);
	// addi r12,r1,-112
	ctx.r12.s64 = ctx.r1.s64 + -112;
	// bl 0x823de018
	ctx.lr = 0x821F1878;
	__savefpr_24(ctx, base);
	// stwu r1,-464(r1)
	ea = -464 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r12,16476
	ctx.r12.s64 = 1079771136;
	// lwz r11,204(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 204);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmr f25,f2
	ctx.fpscr.disableFlushMode();
	ctx.f25.f64 = ctx.f2.f64;
	// ori r12,r12,8
	ctx.r12.u64 = ctx.r12.u64 | 8;
	// mr r20,r9
	ctx.r20.u64 = ctx.r9.u64;
	// and r9,r11,r12
	ctx.r9.u64 = ctx.r11.u64 & ctx.r12.u64;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// lfs f28,7932(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 7932);
	ctx.f28.f64 = double(temp.f32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x821f18ec
	if (!ctx.cr6.eq) goto loc_821F18EC;
	// lfs f0,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f1,f1
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f1.f64));
	// lfs f12,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f0,f12
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// lfs f10,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f10,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 - ctx.f9.f64));
	// lfs f7,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f5,f7,f6
	ctx.f5.f64 = double(float(ctx.f7.f64 - ctx.f6.f64));
	// fmuls f4,f11,f11
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// fmadds f2,f8,f8,f4
	ctx.f2.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 + ctx.f4.f64));
	// fmadds f1,f5,f5,f2
	ctx.f1.f64 = double(float(ctx.f5.f64 * ctx.f5.f64 + ctx.f2.f64));
	// fcmpu cr6,f1,f13
	ctx.cr6.compare(ctx.f1.f64, ctx.f13.f64);
	// bge cr6,0x821f21ec
	if (!ctx.cr6.lt) goto loc_821F21EC;
loc_821F18EC:
	// lfs f26,240(r21)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r21.u32 + 240);
	ctx.f26.f64 = double(temp.f32);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x821f1900
	if (ctx.cr6.eq) goto loc_821F1900;
	// lhz r19,126(r5)
	ctx.r19.u64 = PPC_LOAD_U16(ctx.r5.u32 + 126);
	// b 0x821f1904
	goto loc_821F1904;
loc_821F1900:
	// li r19,2047
	ctx.r19.s64 = 2047;
loc_821F1904:
	// lwz r3,272(r21)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r21.u32 + 272);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821f1c78
	if (ctx.cr6.eq) goto loc_821F1C78;
	// lwz r11,264(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 264);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821f1924
	if (ctx.cr6.eq) goto loc_821F1924;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f28,6016(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6016);
	ctx.f28.f64 = double(temp.f32);
loc_821F1924:
	// lfs f0,4(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,0(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lfs f27,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f27.f64 = double(temp.f32);
	// lfs f0,5484(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f3,f0
	ctx.cr6.compare(ctx.f3.f64, ctx.f0.f64);
	// fmuls f8,f12,f12
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f7,f9,f9,f8
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f8.f64));
	// fsqrts f6,f7
	ctx.f6.f64 = double(float(sqrt(ctx.f7.f64)));
	// fneg f5,f6
	ctx.f5.u64 = ctx.f6.u64 ^ 0x8000000000000000;
	// fsel f4,f5,f27,f6
	ctx.f4.f64 = ctx.f5.f64 >= 0.0 ? ctx.f27.f64 : ctx.f6.f64;
	// fdivs f2,f27,f4
	ctx.f2.f64 = double(float(ctx.f27.f64 / ctx.f4.f64));
	// fmuls f1,f2,f12
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f12.f64));
	// fmuls f31,f2,f9
	ctx.f31.f64 = double(float(ctx.f2.f64 * ctx.f9.f64));
	// fmuls f30,f2,f0
	ctx.f30.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// fneg f29,f1
	ctx.f29.u64 = ctx.f1.u64 ^ 0x8000000000000000;
	// beq cr6,0x821f1990
	if (ctx.cr6.eq) goto loc_821F1990;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,2416
	ctx.r11.s64 = ctx.r11.s64 + 2416;
	// lfs f11,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f0,f3,f11
	ctx.f0.f64 = double(float(ctx.f3.f64 * ctx.f11.f64));
	// b 0x821f19b0
	goto loc_821F19B0;
loc_821F1990:
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// bl 0x8223fae0
	ctx.lr = 0x821F1998;
	sub_8223FAE0(ctx, base);
	// lfs f0,200(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fsubs f13,f0,f26
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f26.f64));
	// addi r11,r11,2416
	ctx.r11.s64 = ctx.r11.s64 + 2416;
	// lfs f11,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f0,f13,f11
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
loc_821F19B0:
	// lbz r10,551(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 551);
	// lfs f13,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821f19f0
	if (ctx.cr6.eq) goto loc_821F19F0;
	// lfs f12,192(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f12,f13
	ctx.f9.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// lfs f8,200(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// fadds f6,f10,f8
	ctx.f6.f64 = double(float(ctx.f10.f64 + ctx.f8.f64));
	// lfs f5,196(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	ctx.f5.f64 = double(temp.f32);
	// fadds f4,f5,f7
	ctx.f4.f64 = double(float(ctx.f5.f64 + ctx.f7.f64));
	// fmuls f13,f9,f11
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f11.f64));
	// fmuls f12,f6,f11
	ctx.f12.f64 = double(float(ctx.f6.f64 * ctx.f11.f64));
	// fmuls f11,f4,f11
	ctx.f11.f64 = double(float(ctx.f4.f64 * ctx.f11.f64));
	// b 0x821f19fc
	goto loc_821F19FC;
loc_821F19F0:
	// lfs f12,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fadds f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
loc_821F19FC:
	// fneg f10,f28
	ctx.fpscr.disableFlushMode();
	ctx.f10.u64 = ctx.f28.u64 ^ 0x8000000000000000;
	// lis r11,-32032
	ctx.r11.s64 = -2099249152;
	// fmadds f9,f30,f28,f12
	ctx.f9.f64 = double(float(ctx.f30.f64 * ctx.f28.f64 + ctx.f12.f64));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmadds f8,f29,f28,f13
	ctx.f8.f64 = double(float(ctx.f29.f64 * ctx.f28.f64 + ctx.f13.f64));
	// stfs f11,132(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// fmadds f7,f31,f28,f11
	ctx.f7.f64 = double(float(ctx.f31.f64 * ctx.f28.f64 + ctx.f11.f64));
	// stfs f12,136(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f13,128(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// lwz r23,556(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 556);
	// lwz r11,-6200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6200);
	// stfs f8,140(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stfs f7,144(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// stfs f8,152(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f7,156(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// lfs f28,2424(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2424);
	ctx.f28.f64 = double(temp.f32);
	// fmadds f6,f10,f30,f12
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f30.f64 + ctx.f12.f64));
	// fmadds f5,f10,f30,f12
	ctx.f5.f64 = double(float(ctx.f10.f64 * ctx.f30.f64 + ctx.f12.f64));
	// fmadds f4,f10,f29,f13
	ctx.f4.f64 = double(float(ctx.f10.f64 * ctx.f29.f64 + ctx.f13.f64));
	// stfs f4,164(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// fmadds f3,f10,f31,f11
	ctx.f3.f64 = double(float(ctx.f10.f64 * ctx.f31.f64 + ctx.f11.f64));
	// stfs f3,168(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// fmadds f2,f10,f29,f13
	ctx.f2.f64 = double(float(ctx.f10.f64 * ctx.f29.f64 + ctx.f13.f64));
	// stfs f2,176(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// fmadds f1,f10,f31,f11
	ctx.f1.f64 = double(float(ctx.f10.f64 * ctx.f31.f64 + ctx.f11.f64));
	// stfs f1,180(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// fadds f13,f9,f0
	ctx.f13.f64 = double(float(ctx.f9.f64 + ctx.f0.f64));
	// stfs f13,148(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// fsubs f12,f9,f0
	ctx.f12.f64 = double(float(ctx.f9.f64 - ctx.f0.f64));
	// stfs f12,160(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// fadds f11,f6,f0
	ctx.f11.f64 = double(float(ctx.f6.f64 + ctx.f0.f64));
	// stfs f11,172(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// fsubs f10,f5,f0
	ctx.f10.f64 = double(float(ctx.f5.f64 - ctx.f0.f64));
	// stfs f10,184(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// lbz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821f1b9c
	if (ctx.cr6.eq) goto loc_821F1B9C;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// addi r31,r1,128
	ctx.r31.s64 = ctx.r1.s64 + 128;
	// li r27,5
	ctx.r27.s64 = 5;
	// li r22,1
	ctx.r22.s64 = 1;
	// addi r24,r11,-2280
	ctx.r24.s64 = ctx.r11.s64 + -2280;
	// addi r26,r10,-2008
	ctx.r26.s64 = ctx.r10.s64 + -2008;
	// addi r25,r9,-2072
	ctx.r25.s64 = ctx.r9.s64 + -2072;
loc_821F1AB8:
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// fcmpu cr6,f25,f28
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f25.f64, ctx.f28.f64);
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// beq cr6,0x821f1b44
	if (ctx.cr6.eq) goto loc_821F1B44;
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// beq cr6,0x821f1b44
	if (ctx.cr6.eq) goto loc_821F1B44;
	// lfs f0,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,0(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lfs f8,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,4(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// lfs f5,0(r20)
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,4(r20)
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,8(r20)
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 8);
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
	// fsel f10,f11,f27,f13
	ctx.f10.f64 = ctx.f11.f64 >= 0.0 ? ctx.f27.f64 : ctx.f13.f64;
	// fdivs f8,f27,f10
	ctx.f8.f64 = double(float(ctx.f27.f64 / ctx.f10.f64));
	// fmuls f7,f8,f9
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f9.f64));
	// fmuls f6,f6,f8
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f8.f64));
	// fmuls f2,f12,f8
	ctx.f2.f64 = double(float(ctx.f12.f64 * ctx.f8.f64));
	// fmuls f1,f5,f7
	ctx.f1.f64 = double(float(ctx.f5.f64 * ctx.f7.f64));
	// fmadds f0,f4,f6,f1
	ctx.f0.f64 = double(float(ctx.f4.f64 * ctx.f6.f64 + ctx.f1.f64));
	// fmadds f13,f3,f2,f0
	ctx.f13.f64 = double(float(ctx.f3.f64 * ctx.f2.f64 + ctx.f0.f64));
	// fcmpu cr6,f13,f25
	ctx.cr6.compare(ctx.f13.f64, ctx.f25.f64);
	// bge cr6,0x821f1b44
	if (!ctx.cr6.lt) goto loc_821F1B44;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_821F1B44:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821f1b78
	if (ctx.cr6.eq) goto loc_821F1B78;
	// li r8,0
	ctx.r8.s64 = 0;
	// lhz r5,126(r21)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r21.u32 + 126);
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// mr r6,r19
	ctx.r6.u64 = ctx.r19.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821fe770
	ctx.lr = 0x821F1B6C;
	sub_821FE770(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821f1b78
	if (!ctx.cr6.eq) goto loc_821F1B78;
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
loc_821F1B78:
	// li r7,200
	ctx.r7.s64 = 200;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821f2d18
	ctx.lr = 0x821F1B90;
	sub_821F2D18(ctx, base);
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// bne 0x821f1ab8
	if (!ctx.cr0.eq) goto loc_821F1AB8;
loc_821F1B9C:
	// addi r31,r1,128
	ctx.r31.s64 = ctx.r1.s64 + 128;
loc_821F1BA0:
	// fcmpu cr6,f25,f28
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f25.f64, ctx.f28.f64);
	// beq cr6,0x821f1c1c
	if (ctx.cr6.eq) goto loc_821F1C1C;
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// beq cr6,0x821f1c1c
	if (ctx.cr6.eq) goto loc_821F1C1C;
	// lfs f0,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,0(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lfs f8,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,4(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// lfs f5,0(r20)
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,4(r20)
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,8(r20)
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 8);
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
	// fsel f10,f11,f27,f13
	ctx.f10.f64 = ctx.f11.f64 >= 0.0 ? ctx.f27.f64 : ctx.f13.f64;
	// fdivs f8,f27,f10
	ctx.f8.f64 = double(float(ctx.f27.f64 / ctx.f10.f64));
	// fmuls f7,f8,f9
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f9.f64));
	// fmuls f6,f6,f8
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f8.f64));
	// fmuls f2,f12,f8
	ctx.f2.f64 = double(float(ctx.f12.f64 * ctx.f8.f64));
	// fmuls f1,f5,f7
	ctx.f1.f64 = double(float(ctx.f5.f64 * ctx.f7.f64));
	// fmadds f0,f4,f6,f1
	ctx.f0.f64 = double(float(ctx.f4.f64 * ctx.f6.f64 + ctx.f1.f64));
	// fmadds f13,f3,f2,f0
	ctx.f13.f64 = double(float(ctx.f3.f64 * ctx.f2.f64 + ctx.f0.f64));
	// fcmpu cr6,f13,f25
	ctx.cr6.compare(ctx.f13.f64, ctx.f25.f64);
	// blt cr6,0x821f1c40
	if (ctx.cr6.lt) goto loc_821F1C40;
loc_821F1C1C:
	// li r8,0
	ctx.r8.s64 = 0;
	// lhz r5,126(r21)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r21.u32 + 126);
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// mr r6,r19
	ctx.r6.u64 = ctx.r19.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821fe770
	ctx.lr = 0x821F1C38;
	sub_821FE770(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821f1c64
	if (!ctx.cr6.eq) goto loc_821F1C64;
loc_821F1C40:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// cmpwi cr6,r30,5
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 5, ctx.xer);
	// blt cr6,0x821f1ba0
	if (ctx.cr6.lt) goto loc_821F1BA0;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// addi r12,r1,-112
	ctx.r12.s64 = ctx.r1.s64 + -112;
	// bl 0x823de064
	ctx.lr = 0x821F1C60;
	__restfpr_24(ctx, base);
	// b 0x823ddfa4
	__restgprlr_19(ctx, base);
	return;
loc_821F1C64:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// addi r12,r1,-112
	ctx.r12.s64 = ctx.r1.s64 + -112;
	// bl 0x823de064
	ctx.lr = 0x821F1C74;
	__restfpr_24(ctx, base);
	// b 0x823ddfa4
	__restgprlr_19(ctx, base);
	return;
loc_821F1C78:
	// lis r10,-31961
	ctx.r10.s64 = -2094596096;
	// lhz r9,292(r21)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r21.u32 + 292);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r8,r10,-25976
	ctx.r8.s64 = ctx.r10.s64 + -25976;
	// addi r30,r11,-5928
	ctx.r30.s64 = ctx.r11.s64 + -5928;
	// lhz r7,156(r8)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r8.u32 + 156);
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x821f1db4
	if (!ctx.cr6.eq) goto loc_821F1DB4;
	// lhz r11,604(r21)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r21.u32 + 604);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821f1db4
	if (ctx.cr6.eq) goto loc_821F1DB4;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x822846c0
	ctx.lr = 0x821F1CAC;
	sub_822846C0(ctx, base);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// bl 0x822eee00
	ctx.lr = 0x821F1CB4;
	sub_822EEE00(ctx, base);
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// addi r3,r21,244
	ctx.r3.s64 = ctx.r21.s64 + 244;
	// bl 0x822da650
	ctx.lr = 0x821F1CC0;
	sub_822DA650(ctx, base);
	// lfs f0,212(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	ctx.f0.f64 = double(temp.f32);
	// lfs f10,252(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,256(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f2,f10,f0
	ctx.f2.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f8,260(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f1,f9,f0
	ctx.f1.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmuls f0,f8,f0
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// lfs f6,268(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 268);
	ctx.f6.f64 = double(temp.f32);
	// lfs f7,264(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 264);
	ctx.f7.f64 = double(temp.f32);
	// fabs f31,f6
	ctx.f31.u64 = ctx.f6.u64 & ~0x8000000000000000;
	// lfs f13,216(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	ctx.f13.f64 = double(temp.f32);
	// fabs f29,f7
	ctx.f29.u64 = ctx.f7.u64 & ~0x8000000000000000;
	// lfs f5,272(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	ctx.f5.f64 = double(temp.f32);
	// fabs f10,f10
	ctx.f10.u64 = ctx.f10.u64 & ~0x8000000000000000;
	// fabs f30,f5
	ctx.f30.u64 = ctx.f5.u64 & ~0x8000000000000000;
	// lfs f12,208(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	ctx.f12.f64 = double(temp.f32);
	// fabs f9,f9
	ctx.f9.u64 = ctx.f9.u64 & ~0x8000000000000000;
	// lfs f11,224(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	ctx.f11.f64 = double(temp.f32);
	// fabs f8,f8
	ctx.f8.u64 = ctx.f8.u64 & ~0x8000000000000000;
	// lfs f4,240(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,244(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	ctx.f3.f64 = double(temp.f32);
	// fabs f28,f4
	ctx.f28.u64 = ctx.f4.u64 & ~0x8000000000000000;
	// fmadds f7,f7,f13,f2
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f13.f64 + ctx.f2.f64));
	// fmadds f6,f6,f13,f1
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f13.f64 + ctx.f1.f64));
	// fmadds f5,f5,f13,f0
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fabs f26,f3
	ctx.f26.u64 = ctx.f3.u64 & ~0x8000000000000000;
	// fmuls f13,f10,f11
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
	// fmuls f27,f9,f11
	ctx.f27.f64 = double(float(ctx.f9.f64 * ctx.f11.f64));
	// lfs f2,248(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 248);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f11,f8,f11
	ctx.f11.f64 = double(float(ctx.f8.f64 * ctx.f11.f64));
	// lfs f0,228(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	ctx.f0.f64 = double(temp.f32);
	// fabs f24,f2
	ctx.f24.u64 = ctx.f2.u64 & ~0x8000000000000000;
	// fmadds f7,f12,f4,f7
	ctx.f7.f64 = double(float(ctx.f12.f64 * ctx.f4.f64 + ctx.f7.f64));
	// lfs f1,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// fmadds f6,f3,f12,f6
	ctx.f6.f64 = double(float(ctx.f3.f64 * ctx.f12.f64 + ctx.f6.f64));
	// lfs f9,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f5,f2,f12,f5
	ctx.f5.f64 = double(float(ctx.f2.f64 * ctx.f12.f64 + ctx.f5.f64));
	// lfs f8,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f2,236(r21)
	temp.u32 = PPC_LOAD_U32(ctx.r21.u32 + 236);
	ctx.f2.f64 = double(temp.f32);
	// lfs f10,220(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f3,f29,f0,f13
	ctx.f3.f64 = double(float(ctx.f29.f64 * ctx.f0.f64 + ctx.f13.f64));
	// lfs f4,232(r21)
	temp.u32 = PPC_LOAD_U32(ctx.r21.u32 + 232);
	ctx.f4.f64 = double(temp.f32);
	// lfs f12,240(r21)
	temp.u32 = PPC_LOAD_U32(ctx.r21.u32 + 240);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f13,f31,f0,f27
	ctx.f13.f64 = double(float(ctx.f31.f64 * ctx.f0.f64 + ctx.f27.f64));
	// fmadds f11,f30,f0,f11
	ctx.f11.f64 = double(float(ctx.f30.f64 * ctx.f0.f64 + ctx.f11.f64));
	// fadds f7,f7,f1
	ctx.f7.f64 = double(float(ctx.f7.f64 + ctx.f1.f64));
	// fadds f6,f6,f9
	ctx.f6.f64 = double(float(ctx.f6.f64 + ctx.f9.f64));
	// fadds f1,f5,f8
	ctx.f1.f64 = double(float(ctx.f5.f64 + ctx.f8.f64));
	// fmadds f0,f28,f10,f3
	ctx.f0.f64 = double(float(ctx.f28.f64 * ctx.f10.f64 + ctx.f3.f64));
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// fmadds f13,f26,f10,f13
	ctx.f13.f64 = double(float(ctx.f26.f64 * ctx.f10.f64 + ctx.f13.f64));
	// stfs f13,112(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmadds f11,f24,f10,f11
	ctx.f11.f64 = double(float(ctx.f24.f64 * ctx.f10.f64 + ctx.f11.f64));
	// stfs f11,116(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fadds f4,f7,f4
	ctx.f4.f64 = double(float(ctx.f7.f64 + ctx.f4.f64));
	// stfs f4,96(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fadds f5,f2,f6
	ctx.f5.f64 = double(float(ctx.f2.f64 + ctx.f6.f64));
	// stfs f5,100(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fadds f6,f12,f1
	ctx.f6.f64 = double(float(ctx.f12.f64 + ctx.f1.f64));
	// stfs f6,104(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// b 0x821f1ddc
	goto loc_821F1DDC;
loc_821F1DB4:
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r10,r1,92
	ctx.r10.s64 = ctx.r1.s64 + 92;
	// addi r11,r21,204
	ctx.r11.s64 = ctx.r21.s64 + 204;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_821F1DC4:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x821f1dc4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821F1DC4;
	// lfs f6,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f4.f64 = double(temp.f32);
loc_821F1DDC:
	// lis r31,-32032
	ctx.r31.s64 = -2099249152;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,-6200(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -6200);
	// lfs f31,5484(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f31.f64 = double(temp.f32);
	// lbz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821f1e28
	if (ctx.cr6.eq) goto loc_821F1E28;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r6,r11,-2040
	ctx.r6.s64 = ctx.r11.s64 + -2040;
	// li r8,300
	ctx.r8.s64 = 300;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x821f2d40
	ctx.lr = 0x821F1E18;
	sub_821F2D40(ctx, base);
	// lwz r11,-6200(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -6200);
	// lfs f6,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f4.f64 = double(temp.f32);
loc_821F1E28:
	// lfs f0,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f4
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f4.f64));
	// lfs f13,8(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f13,f6
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f6.f64));
	// lfs f12,4(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f12,f5
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f5.f64));
	// stfs f4,128(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f5,132(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f6,136(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// fmuls f11,f0,f0
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f10,f13,f13,f11
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f11.f64));
	// fmadds f9,f12,f12,f10
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f10.f64));
	// fsqrts f11,f9
	ctx.f11.f64 = double(float(sqrt(ctx.f9.f64)));
	// fcmpu cr6,f11,f31
	ctx.cr6.compare(ctx.f11.f64, ctx.f31.f64);
	// beq cr6,0x821f1c64
	if (ctx.cr6.eq) goto loc_821F1C64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f30,12168(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f30.f64 = double(temp.f32);
	// fdivs f10,f30,f11
	ctx.f10.f64 = double(float(ctx.f30.f64 / ctx.f11.f64));
	// fmuls f11,f10,f12
	ctx.f11.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// fmuls f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmuls f9,f13,f10
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// fneg f12,f11
	ctx.f12.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
	// fmuls f8,f12,f12
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f7,f0,f0,f8
	ctx.f7.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f8.f64));
	// fsqrts f10,f7
	ctx.f10.f64 = double(float(sqrt(ctx.f7.f64)));
	// fcmpu cr6,f10,f31
	ctx.cr6.compare(ctx.f10.f64, ctx.f31.f64);
	// bne cr6,0x821f1ea0
	if (!ctx.cr6.eq) goto loc_821F1EA0;
	// fmr f12,f30
	ctx.f12.f64 = ctx.f30.f64;
	// b 0x821f1eac
	goto loc_821F1EAC;
loc_821F1EA0:
	// fdivs f13,f30,f10
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f30.f64 / ctx.f10.f64));
	// fmuls f12,f13,f12
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
loc_821F1EAC:
	// fmuls f8,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// lfs f3,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f10,f9,f13
	ctx.f10.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// lfs f2,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f1,f12,f11
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// lfs f29,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f29.f64 = double(temp.f32);
	// fmuls f28,f2,f12
	ctx.f28.f64 = double(float(ctx.f2.f64 * ctx.f12.f64));
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// fmuls f27,f3,f13
	ctx.f27.f64 = double(float(ctx.f3.f64 * ctx.f13.f64));
	// li r22,1
	ctx.r22.s64 = 1;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r30,0
	ctx.r30.s64 = 0;
	// stb r22,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r22.u8);
	// stb r22,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r22.u8);
	// fmsubs f9,f9,f12,f8
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f12.f64 - ctx.f8.f64));
	// stb r22,2(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2, ctx.r22.u8);
	// fmsubs f10,f11,f31,f10
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f31.f64 - ctx.f10.f64));
	// lfs f7,6044(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 6044);
	ctx.f7.f64 = double(temp.f32);
	// fmsubs f8,f13,f0,f1
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f0.f64 - ctx.f1.f64));
	// stb r22,3(r10)
	PPC_STORE_U8(ctx.r10.u32 + 3, ctx.r22.u8);
	// fabs f0,f28
	ctx.f0.u64 = ctx.f28.u64 & ~0x8000000000000000;
	// stb r22,4(r10)
	PPC_STORE_U8(ctx.r10.u32 + 4, ctx.r22.u8);
	// fabs f11,f27
	ctx.f11.u64 = ctx.f27.u64 & ~0x8000000000000000;
	// fmuls f1,f9,f3
	ctx.f1.f64 = double(float(ctx.f9.f64 * ctx.f3.f64));
	// fmuls f2,f10,f2
	ctx.f2.f64 = double(float(ctx.f10.f64 * ctx.f2.f64));
	// fmuls f3,f29,f8
	ctx.f3.f64 = double(float(ctx.f29.f64 * ctx.f8.f64));
	// fadds f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f11.f64));
	// fabs f1,f1
	ctx.f1.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// fabs f2,f2
	ctx.f2.u64 = ctx.f2.u64 & ~0x8000000000000000;
	// fabs f11,f3
	ctx.f11.u64 = ctx.f3.u64 & ~0x8000000000000000;
	// fcmpu cr6,f0,f7
	ctx.cr6.compare(ctx.f0.f64, ctx.f7.f64);
	// fadds f3,f1,f2
	ctx.f3.f64 = double(float(ctx.f1.f64 + ctx.f2.f64));
	// fadds f11,f3,f11
	ctx.f11.f64 = double(float(ctx.f3.f64 + ctx.f11.f64));
	// bge cr6,0x821f1f40
	if (!ctx.cr6.lt) goto loc_821F1F40;
	// fmr f0,f31
	ctx.f0.f64 = ctx.f31.f64;
	// stb r30,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r30.u8);
	// stb r30,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r30.u8);
loc_821F1F40:
	// fcmpu cr6,f11,f7
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f11.f64, ctx.f7.f64);
	// bge cr6,0x821f1f60
	if (!ctx.cr6.lt) goto loc_821F1F60;
	// fmr f11,f31
	ctx.f11.f64 = ctx.f31.f64;
	// stb r30,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r30.u8);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// stb r30,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r30.u8);
	// bne cr6,0x821f1f60
	if (!ctx.cr6.eq) goto loc_821F1F60;
	// stb r30,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r30.u8);
loc_821F1F60:
	// fmuls f3,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmuls f2,f0,f13
	ctx.f2.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lwz r23,556(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 556);
	// fmuls f7,f0,f31
	ctx.f7.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// fmuls f1,f10,f11
	ctx.f1.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
	// fmuls f0,f9,f11
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f11.f64));
	// fmuls f13,f8,f11
	ctx.f13.f64 = double(float(ctx.f8.f64 * ctx.f11.f64));
	// lfs f31,2424(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2424);
	ctx.f31.f64 = double(temp.f32);
	// fadds f11,f4,f3
	ctx.f11.f64 = double(float(ctx.f4.f64 + ctx.f3.f64));
	// fsubs f8,f5,f2
	ctx.f8.f64 = double(float(ctx.f5.f64 - ctx.f2.f64));
	// fadds f10,f5,f2
	ctx.f10.f64 = double(float(ctx.f5.f64 + ctx.f2.f64));
	// fsubs f9,f4,f3
	ctx.f9.f64 = double(float(ctx.f4.f64 - ctx.f3.f64));
	// fadds f12,f6,f7
	ctx.f12.f64 = double(float(ctx.f6.f64 + ctx.f7.f64));
	// fsubs f7,f6,f7
	ctx.f7.f64 = double(float(ctx.f6.f64 - ctx.f7.f64));
	// fadds f5,f11,f1
	ctx.f5.f64 = double(float(ctx.f11.f64 + ctx.f1.f64));
	// stfs f5,140(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// fadds f2,f0,f8
	ctx.f2.f64 = double(float(ctx.f0.f64 + ctx.f8.f64));
	// stfs f2,156(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// fadds f4,f10,f0
	ctx.f4.f64 = double(float(ctx.f10.f64 + ctx.f0.f64));
	// stfs f4,144(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// fadds f3,f9,f1
	ctx.f3.f64 = double(float(ctx.f9.f64 + ctx.f1.f64));
	// stfs f3,152(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// fadds f6,f13,f12
	ctx.f6.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// stfs f6,148(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// fsubs f5,f11,f1
	ctx.f5.f64 = double(float(ctx.f11.f64 - ctx.f1.f64));
	// stfs f5,164(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// fsubs f2,f9,f1
	ctx.f2.f64 = double(float(ctx.f9.f64 - ctx.f1.f64));
	// stfs f2,176(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// fsubs f4,f10,f0
	ctx.f4.f64 = double(float(ctx.f10.f64 - ctx.f0.f64));
	// stfs f4,168(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// fsubs f1,f8,f0
	ctx.f1.f64 = double(float(ctx.f8.f64 - ctx.f0.f64));
	// stfs f1,180(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// fadds f6,f13,f7
	ctx.f6.f64 = double(float(ctx.f13.f64 + ctx.f7.f64));
	// stfs f6,160(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// fsubs f3,f12,f13
	ctx.f3.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// stfs f3,172(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// fsubs f0,f7,f13
	ctx.f0.f64 = double(float(ctx.f7.f64 - ctx.f13.f64));
	// stfs f0,184(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// lbz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821f2124
	if (ctx.cr6.eq) goto loc_821F2124;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
	// addi r31,r1,128
	ctx.r31.s64 = ctx.r1.s64 + 128;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r24,r11,-2280
	ctx.r24.s64 = ctx.r11.s64 + -2280;
	// addi r26,r10,-2008
	ctx.r26.s64 = ctx.r10.s64 + -2008;
	// addi r25,r9,-2072
	ctx.r25.s64 = ctx.r9.s64 + -2072;
loc_821F202C:
	// lbzx r11,r27,r8
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + ctx.r8.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821f2110
	if (ctx.cr6.eq) goto loc_821F2110;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// fcmpu cr6,f25,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f25.f64, ctx.f31.f64);
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// beq cr6,0x821f20c4
	if (ctx.cr6.eq) goto loc_821F20C4;
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// beq cr6,0x821f20c4
	if (ctx.cr6.eq) goto loc_821F20C4;
	// lfs f0,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lfs f8,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,0(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// lfs f5,0(r20)
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,4(r20)
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,8(r20)
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 8);
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
	// fsel f10,f11,f30,f13
	ctx.f10.f64 = ctx.f11.f64 >= 0.0 ? ctx.f30.f64 : ctx.f13.f64;
	// fdivs f8,f30,f10
	ctx.f8.f64 = double(float(ctx.f30.f64 / ctx.f10.f64));
	// fmuls f7,f8,f6
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f6.f64));
	// fmuls f6,f12,f8
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f8.f64));
	// fmuls f2,f9,f8
	ctx.f2.f64 = double(float(ctx.f9.f64 * ctx.f8.f64));
	// fmuls f1,f5,f7
	ctx.f1.f64 = double(float(ctx.f5.f64 * ctx.f7.f64));
	// fmadds f0,f4,f6,f1
	ctx.f0.f64 = double(float(ctx.f4.f64 * ctx.f6.f64 + ctx.f1.f64));
	// fmadds f13,f3,f2,f0
	ctx.f13.f64 = double(float(ctx.f3.f64 * ctx.f2.f64 + ctx.f0.f64));
	// fcmpu cr6,f13,f25
	ctx.cr6.compare(ctx.f13.f64, ctx.f25.f64);
	// bge cr6,0x821f20c4
	if (!ctx.cr6.lt) goto loc_821F20C4;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_821F20C4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821f20f8
	if (ctx.cr6.eq) goto loc_821F20F8;
	// li r8,0
	ctx.r8.s64 = 0;
	// lhz r5,126(r21)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r21.u32 + 126);
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// mr r6,r19
	ctx.r6.u64 = ctx.r19.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821fe770
	ctx.lr = 0x821F20EC;
	sub_821FE770(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821f20f8
	if (!ctx.cr6.eq) goto loc_821F20F8;
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
loc_821F20F8:
	// li r7,300
	ctx.r7.s64 = 300;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821f2d18
	ctx.lr = 0x821F2110;
	sub_821F2D18(ctx, base);
loc_821F2110:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// cmpwi cr6,r27,5
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 5, ctx.xer);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// blt cr6,0x821f202c
	if (ctx.cr6.lt) goto loc_821F202C;
loc_821F2124:
	// addi r31,r1,128
	ctx.r31.s64 = ctx.r1.s64 + 128;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
loc_821F212C:
	// lbzx r11,r30,r11
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821f21d8
	if (ctx.cr6.eq) goto loc_821F21D8;
	// fcmpu cr6,f25,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f25.f64, ctx.f31.f64);
	// beq cr6,0x821f21b4
	if (ctx.cr6.eq) goto loc_821F21B4;
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// beq cr6,0x821f21b4
	if (ctx.cr6.eq) goto loc_821F21B4;
	// lfs f0,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lfs f8,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,0(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// lfs f5,0(r20)
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,4(r20)
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,8(r20)
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 8);
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
	// fsel f10,f11,f30,f13
	ctx.f10.f64 = ctx.f11.f64 >= 0.0 ? ctx.f30.f64 : ctx.f13.f64;
	// fdivs f8,f30,f10
	ctx.f8.f64 = double(float(ctx.f30.f64 / ctx.f10.f64));
	// fmuls f7,f8,f6
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f6.f64));
	// fmuls f6,f12,f8
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f8.f64));
	// fmuls f2,f9,f8
	ctx.f2.f64 = double(float(ctx.f9.f64 * ctx.f8.f64));
	// fmuls f1,f5,f7
	ctx.f1.f64 = double(float(ctx.f5.f64 * ctx.f7.f64));
	// fmadds f0,f4,f6,f1
	ctx.f0.f64 = double(float(ctx.f4.f64 * ctx.f6.f64 + ctx.f1.f64));
	// fmadds f13,f3,f2,f0
	ctx.f13.f64 = double(float(ctx.f3.f64 * ctx.f2.f64 + ctx.f0.f64));
	// fcmpu cr6,f13,f25
	ctx.cr6.compare(ctx.f13.f64, ctx.f25.f64);
	// blt cr6,0x821f21d8
	if (ctx.cr6.lt) goto loc_821F21D8;
loc_821F21B4:
	// li r8,0
	ctx.r8.s64 = 0;
	// lhz r5,126(r21)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r21.u32 + 126);
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// mr r6,r19
	ctx.r6.u64 = ctx.r19.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821fe770
	ctx.lr = 0x821F21D0;
	sub_821FE770(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821f1c64
	if (!ctx.cr6.eq) goto loc_821F1C64;
loc_821F21D8:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// cmpwi cr6,r30,5
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 5, ctx.xer);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// blt cr6,0x821f212c
	if (ctx.cr6.lt) goto loc_821F212C;
loc_821F21EC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// addi r12,r1,-112
	ctx.r12.s64 = ctx.r1.s64 + -112;
	// bl 0x823de064
	ctx.lr = 0x821F21FC;
	__restfpr_24(ctx, base);
	// b 0x823ddfa4
	__restgprlr_19(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821F1868) {
	__imp__sub_821F1868(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F2200) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lbz r11,173(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 173);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// beq cr6,0x821f2244
	if (ctx.cr6.eq) goto loc_821F2244;
	// lfs f0,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,240(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 240);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,232(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 232);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lfs f8,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,236(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 236);
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
	// blr 
	return;
loc_821F2244:
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,208(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 208);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,212(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 212);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lfs f8,220(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 220);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,216(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 216);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f5,f7,f6
	ctx.f5.f64 = double(float(ctx.f7.f64 - ctx.f6.f64));
	// lfs f0,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// lfs f4,224(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 224);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,228(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 228);
	ctx.f3.f64 = double(temp.f32);
	// fabs f2,f12
	ctx.f2.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// fabs f1,f9
	ctx.f1.u64 = ctx.f9.u64 & ~0x8000000000000000;
	// fabs f13,f5
	ctx.f13.u64 = ctx.f5.u64 & ~0x8000000000000000;
	// fsubs f12,f2,f8
	ctx.f12.f64 = double(float(ctx.f2.f64 - ctx.f8.f64));
	// fsubs f11,f1,f4
	ctx.f11.f64 = double(float(ctx.f1.f64 - ctx.f4.f64));
	// fsubs f10,f13,f3
	ctx.f10.f64 = double(float(ctx.f13.f64 - ctx.f3.f64));
	// fsel f9,f12,f12,f0
	ctx.f9.f64 = ctx.f12.f64 >= 0.0 ? ctx.f12.f64 : ctx.f0.f64;
	// fsel f8,f11,f11,f0
	ctx.f8.f64 = ctx.f11.f64 >= 0.0 ? ctx.f11.f64 : ctx.f0.f64;
	// fsel f7,f10,f10,f0
	ctx.f7.f64 = ctx.f10.f64 >= 0.0 ? ctx.f10.f64 : ctx.f0.f64;
	// fmuls f6,f9,f9
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f9.f64));
	// fmadds f5,f8,f8,f6
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 + ctx.f6.f64));
	// fmadds f4,f7,f7,f5
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f7.f64 + ctx.f5.f64));
	// fsqrts f1,f4
	ctx.f1.f64 = double(float(sqrt(ctx.f4.f64)));
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821F2200) {
	__imp__sub_821F2200(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F22B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821F22B4) {
	__imp__sub_821F22B4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F22B8) {
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// lfs f12,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// li r5,2048
	ctx.r5.s64 = 2048;
	// lfs f0,20928(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20928);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// fmuls f11,f1,f0
	ctx.f11.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f11,92(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f11,96(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f11,100(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// bl 0x8227bff0
	ctx.lr = 0x821F2310;
	sub_8227BFF0(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
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

PPC_WEAK_FUNC(sub_821F22B8) {
	__imp__sub_821F22B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F2328) {
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
	// cmplwi cr6,r3,5
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 5, ctx.xer);
	// bgt cr6,0x821f241c
	if (ctx.cr6.gt) goto loc_821F241C;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x821f237c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_821F237C;
	// bdzf 4*cr6+eq,0x821f239c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_821F239C;
	// bdzf 4*cr6+eq,0x821f23bc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_821F23BC;
	// bdzf 4*cr6+eq,0x821f23dc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_821F23DC;
	// bne cr6,0x821f23fc
	if (!ctx.cr6.eq) goto loc_821F23FC;
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// addi r10,r11,-25976
	ctx.r10.s64 = ctx.r11.s64 + -25976;
	// lhz r3,80(r10)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r10.u32 + 80);
	// bl 0x822acff0
	ctx.lr = 0x821F236C;
	sub_822ACFF0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_821F237C:
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// addi r10,r11,-25976
	ctx.r10.s64 = ctx.r11.s64 + -25976;
	// lhz r3,20(r10)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r10.u32 + 20);
	// bl 0x822acff0
	ctx.lr = 0x821F238C;
	sub_822ACFF0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_821F239C:
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// addi r10,r11,-25976
	ctx.r10.s64 = ctx.r11.s64 + -25976;
	// lhz r3,12(r10)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r10.u32 + 12);
	// bl 0x822acff0
	ctx.lr = 0x821F23AC;
	sub_822ACFF0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_821F23BC:
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// addi r10,r11,-25976
	ctx.r10.s64 = ctx.r11.s64 + -25976;
	// lhz r3,548(r10)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r10.u32 + 548);
	// bl 0x822acff0
	ctx.lr = 0x821F23CC;
	sub_822ACFF0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_821F23DC:
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// addi r10,r11,-25976
	ctx.r10.s64 = ctx.r11.s64 + -25976;
	// lhz r3,566(r10)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r10.u32 + 566);
	// bl 0x822acff0
	ctx.lr = 0x821F23EC;
	sub_822ACFF0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_821F23FC:
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// addi r10,r11,-25976
	ctx.r10.s64 = ctx.r11.s64 + -25976;
	// lhz r3,44(r10)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r10.u32 + 44);
	// bl 0x822acff0
	ctx.lr = 0x821F240C;
	sub_822ACFF0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_821F241C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r3,15
	ctx.r3.s64 = 15;
	// addi r4,r11,-11268
	ctx.r4.s64 = ctx.r11.s64 + -11268;
	// bl 0x82280c30
	ctx.lr = 0x821F242C;
	sub_82280C30(ctx, base);
	// bl 0x822acd78
	ctx.lr = 0x821F2430;
	sub_822ACD78(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821F2328) {
	__imp__sub_821F2328(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F2440) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,208(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 208);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,212(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 212);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lfs f7,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// lfs f8,220(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 220);
	ctx.f8.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f6,216(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 216);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f5,f7,f6
	ctx.f5.f64 = double(float(ctx.f7.f64 - ctx.f6.f64));
	// lfs f0,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// lfs f4,224(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 224);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,228(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 228);
	ctx.f3.f64 = double(temp.f32);
	// fabs f2,f12
	ctx.f2.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// fabs f13,f9
	ctx.f13.u64 = ctx.f9.u64 & ~0x8000000000000000;
	// fabs f12,f5
	ctx.f12.u64 = ctx.f5.u64 & ~0x8000000000000000;
	// fsubs f11,f2,f8
	ctx.f11.f64 = double(float(ctx.f2.f64 - ctx.f8.f64));
	// fsubs f10,f13,f4
	ctx.f10.f64 = double(float(ctx.f13.f64 - ctx.f4.f64));
	// fsubs f9,f12,f3
	ctx.f9.f64 = double(float(ctx.f12.f64 - ctx.f3.f64));
	// fsel f8,f11,f11,f0
	ctx.f8.f64 = ctx.f11.f64 >= 0.0 ? ctx.f11.f64 : ctx.f0.f64;
	// fsel f7,f10,f10,f0
	ctx.f7.f64 = ctx.f10.f64 >= 0.0 ? ctx.f10.f64 : ctx.f0.f64;
	// fsel f6,f9,f9,f0
	ctx.f6.f64 = ctx.f9.f64 >= 0.0 ? ctx.f9.f64 : ctx.f0.f64;
	// fmuls f5,f8,f8
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f8.f64));
	// fmadds f4,f7,f7,f5
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f7.f64 + ctx.f5.f64));
	// fmadds f3,f6,f6,f4
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f4.f64));
	// fcmpu cr6,f3,f1
	ctx.cr6.compare(ctx.f3.f64, ctx.f1.f64);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821F2440) {
	__imp__sub_821F2440(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F24BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821F24BC) {
	__imp__sub_821F24BC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F24C0) {
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
	// lwz r11,264(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 264);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821f24ec
	if (!ctx.cr6.eq) goto loc_821F24EC;
loc_821F24D8:
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
loc_821F24EC:
	// lfs f0,8(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32032
	ctx.r11.s64 = -2099249152;
	// lfs f13,240(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 240);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lwz r11,-6196(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6196);
	// lfs f11,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// fabs f10,f12
	ctx.f10.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// fcmpu cr6,f10,f11
	ctx.cr6.compare(ctx.f10.f64, ctx.f11.f64);
	// blt cr6,0x821f24d8
	if (ctx.cr6.lt) goto loc_821F24D8;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821f24d8
	if (ctx.cr6.eq) goto loc_821F24D8;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x821f24d8
	if (!ctx.cr6.eq) goto loc_821F24D8;
	// lhz r3,124(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 124);
	// bl 0x82332af8
	ctx.lr = 0x821F252C;
	sub_82332AF8(ctx, base);
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x821f24d8
	if (!ctx.cr6.eq) goto loc_821F24D8;
	// lwz r11,1060(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1060);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821f254c
	if (ctx.cr6.eq) goto loc_821F254C;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x821f24d8
	if (!ctx.cr6.eq) goto loc_821F24D8;
loc_821F254C:
	// lbz r11,1655(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1655);
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

PPC_WEAK_FUNC(sub_821F24C0) {
	__imp__sub_821F24C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F2568) {
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
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// rlwinm r10,r11,0,16,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x821f25cc
	if (ctx.cr6.eq) goto loc_821F25CC;
	// lis r9,-32020
	ctx.r9.s64 = -2098462720;
	// lwz r11,1136(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1136);
	// lwz r10,1140(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1140);
	// addi r8,r9,9624
	ctx.r8.s64 = ctx.r9.s64 + 9624;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,52(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 52);
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x821f25cc
	if (!ctx.cr6.lt) goto loc_821F25CC;
	// lwz r3,1132(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1132);
	// bl 0x82321c38
	ctx.lr = 0x821F25AC;
	sub_82321C38(ctx, base);
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
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
loc_821F25CC:
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

PPC_WEAK_FUNC(sub_821F2568) {
	__imp__sub_821F2568(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F25E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32052
	ctx.r11.s64 = -2100559872;
	// rlwinm r10,r3,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r11,-17616
	ctx.r9.s64 = ctx.r11.s64 + -17616;
	// lhzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821F25E0) {
	__imp__sub_821F25E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F25F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821F25F4) {
	__imp__sub_821F25F4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F25F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32052
	ctx.r11.s64 = -2100559872;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,-17616
	ctx.r9.s64 = ctx.r11.s64 + -17616;
	// clrlwi r8,r3,16
	ctx.r8.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_821F260C:
	// lhz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x821f2634
	if (ctx.cr6.eq) goto loc_821F2634;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// addi r7,r9,40
	ctx.r7.s64 = ctx.r9.s64 + 40;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x821f260c
	if (ctx.cr6.lt) goto loc_821F260C;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_821F2634:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821F25F8) {
	__imp__sub_821F25F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F263C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821F263C) {
	__imp__sub_821F263C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F2640) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r4,r3,232
	ctx.r4.s64 = ctx.r3.s64 + 232;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// lfs f3,5484(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f3.f64 = double(temp.f32);
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// stb r7,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r7.u8);
	// bl 0x821f1868
	ctx.lr = 0x821F2678;
	sub_821F1868(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821F2640) {
	__imp__sub_821F2640(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F2688) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x821F2690;
	__savegprlr_28(ctx, base);
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x823de028
	ctx.lr = 0x821F2698;
	__savefpr_28(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,289(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 289);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// fmr f29,f2
	ctx.f29.f64 = ctx.f2.f64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821f2870
	if (ctx.cr6.eq) goto loc_821F2870;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821f2200
	ctx.lr = 0x821F26CC;
	sub_821F2200(ctx, base);
	// fmr f28,f1
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = ctx.f1.f64;
	// fcmpu cr6,f1,f30
	ctx.cr6.compare(ctx.f1.f64, ctx.f30.f64);
	// bgt cr6,0x821f2870
	if (ctx.cr6.gt) goto loc_821F2870;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r8,10241
	ctx.r8.s64 = 10241;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// lfs f31,12168(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f31.f64 = double(temp.f32);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lfs f3,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f3.f64 = double(temp.f32);
	// addi r4,r4,232
	ctx.r4.s64 = ctx.r4.s64 + 232;
	// stb r7,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r7.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// bl 0x821f1868
	ctx.lr = 0x821F2718;
	sub_821F1868(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821f2870
	if (ctx.cr6.eq) goto loc_821F2870;
	// fcmpu cr6,f28,f29
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f28.f64, ctx.f29.f64);
	// bgt cr6,0x821f2730
	if (ctx.cr6.gt) goto loc_821F2730;
	// fmr f30,f31
	ctx.f30.f64 = ctx.f31.f64;
	// b 0x821f2740
	goto loc_821F2740;
loc_821F2730:
	// fsubs f0,f30,f29
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f30.f64 - ctx.f29.f64));
	// fsubs f13,f28,f29
	ctx.f13.f64 = double(float(ctx.f28.f64 - ctx.f29.f64));
	// fdivs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// fsubs f30,f31,f12
	ctx.f30.f64 = double(float(ctx.f31.f64 - ctx.f12.f64));
loc_821F2740:
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821f2778
	if (ctx.cr6.eq) goto loc_821F2778;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821e6c48
	ctx.lr = 0x821F2760;
	sub_821E6C48(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,264(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// bl 0x821e6b40
	ctx.lr = 0x821F276C;
	sub_821E6B40(ctx, base);
	// lwz r3,272(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// bl 0x821db968
	ctx.lr = 0x821F2774;
	sub_821DB968(ctx, base);
	// b 0x821f27b4
	goto loc_821F27B4;
loc_821F2778:
	// lwz r3,268(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821f2798
	if (ctx.cr6.eq) goto loc_821F2798;
	// bl 0x821d8768
	ctx.lr = 0x821F2788;
	sub_821D8768(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,268(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	// bl 0x821d8670
	ctx.lr = 0x821F2794;
	sub_821D8670(ctx, base);
	// b 0x821f27b4
	goto loc_821F27B4;
loc_821F2798:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,244
	ctx.r3.s64 = ctx.r31.s64 + 244;
	// bl 0x822da518
	ctx.lr = 0x821F27A8;
	sub_822DA518(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222e490
	ctx.lr = 0x821F27B4;
	sub_8222E490(ctx, base);
loc_821F27B4:
	// lfs f0,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lfs f8,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// lfs f5,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f3.f64 = double(temp.f32);
	// lfs f0,2416(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2416);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f2,f12,f12
	ctx.f2.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f1,f9,f9,f2
	ctx.f1.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f2.f64));
	// fmadds f13,f6,f6,f1
	ctx.f13.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f1.f64));
	// frsqrte f11,f13
	ctx.f11.f64 = 1.0 / sqrt(ctx.f13.f64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fmuls f8,f6,f10
	ctx.f8.f64 = double(float(ctx.f6.f64 * ctx.f10.f64));
	// fmuls f7,f12,f10
	ctx.f7.f64 = double(float(ctx.f12.f64 * ctx.f10.f64));
	// fmuls f6,f9,f10
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f10.f64));
	// fmuls f5,f5,f8
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f8.f64));
	// fmadds f4,f4,f7,f5
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f7.f64 + ctx.f5.f64));
	// fmadds f3,f3,f6,f4
	ctx.f3.f64 = double(float(ctx.f3.f64 * ctx.f6.f64 + ctx.f4.f64));
	// fadds f2,f3,f31
	ctx.f2.f64 = double(float(ctx.f3.f64 + ctx.f31.f64));
	// fmuls f31,f2,f0
	ctx.f31.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// bl 0x821f2328
	ctx.lr = 0x821F2828;
	sub_821F2328(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x821f283c
	if (ctx.cr6.eq) goto loc_821F283C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82229b60
	ctx.lr = 0x821F2838;
	sub_82229B60(ctx, base);
	// b 0x821f2840
	goto loc_821F2840;
loc_821F283C:
	// bl 0x822acd78
	ctx.lr = 0x821F2840;
	sub_822ACD78(ctx, base);
loc_821F2840:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x822acc78
	ctx.lr = 0x821F2848;
	sub_822ACC78(ctx, base);
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x822acc78
	ctx.lr = 0x821F2850;
	sub_822ACC78(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822ad078
	ctx.lr = 0x821F2858;
	sub_822AD078(ctx, base);
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// li r5,5
	ctx.r5.s64 = 5;
	// addi r10,r11,-25976
	ctx.r10.s64 = ctx.r11.s64 + -25976;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lhz r4,288(r10)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r10.u32 + 288);
	// bl 0x82229da8
	ctx.lr = 0x821F2870;
	sub_82229DA8(ctx, base);
loc_821F2870:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x823de074
	ctx.lr = 0x821F287C;
	__restfpr_28(ctx, base);
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821F2688) {
	__imp__sub_821F2688(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F2880) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x821F2888;
	__savegprlr_26(ctx, base);
	// stfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f30.u64);
	// stfd f31,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// ld r12,-8192(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8192);
	// stwu r1,-8384(r1)
	ea = -8384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f30,f1
	ctx.f30.f64 = ctx.f1.f64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// fmr f31,f2
	ctx.f31.f64 = ctx.f2.f64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// lfs f0,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f2,f0
	ctx.cr6.compare(ctx.f2.f64, ctx.f0.f64);
	// bge cr6,0x821f28c4
	if (!ctx.cr6.lt) goto loc_821F28C4;
	// fmr f31,f0
	ctx.f31.f64 = ctx.f0.f64;
loc_821F28C4:
	// fcmpu cr6,f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f30.f64, ctx.f31.f64);
	// bge cr6,0x821f28d0
	if (!ctx.cr6.lt) goto loc_821F28D0;
	// fmr f30,f31
	ctx.f30.f64 = ctx.f31.f64;
loc_821F28D0:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// lfs f13,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// li r5,2048
	ctx.r5.s64 = 2048;
	// lfs f12,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f0,20928(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20928);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f11,f30,f0
	ctx.f11.f64 = double(float(ctx.f30.f64 * ctx.f0.f64));
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f11,92(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f11,96(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f11,100(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// bl 0x8227bff0
	ctx.lr = 0x821F2914;
	sub_8227BFF0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x821f295c
	if (!ctx.cr6.gt) goto loc_821F295C;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r11,-4
	ctx.r30.s64 = ctx.r11.s64 + -4;
	// lis r11,-32052
	ctx.r11.s64 = -2100559872;
	// addi r28,r11,26552
	ctx.r28.s64 = ctx.r11.s64 + 26552;
loc_821F2930:
	// lwzu r11,4(r30)
	ea = 4 + ctx.r30.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// mulli r11,r11,624
	ctx.r11.s64 = ctx.r11.s64 * 624;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// add r3,r11,r28
	ctx.r3.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bl 0x821f2688
	ctx.lr = 0x821F2954;
	sub_821F2688(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x821f2930
	if (!ctx.cr0.eq) goto loc_821F2930;
loc_821F295C:
	// addi r1,r1,8384
	ctx.r1.s64 = ctx.r1.s64 + 8384;
	// lfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821F2880) {
	__imp__sub_821F2880(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F296C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821F296C) {
	__imp__sub_821F296C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F2970) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf40
	ctx.lr = 0x821F2978;
	__savegprlr_14(ctx, base);
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x823de008
	ctx.lr = 0x821F2980;
	__savefpr_20(ctx, base);
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// ld r12,-8192(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8192);
	// stwu r1,-8608(r1)
	ea = -8608 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// fmr f23,f1
	ctx.fpscr.disableFlushMode();
	ctx.f23.f64 = ctx.f1.f64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// fmr f24,f2
	ctx.f24.f64 = ctx.f2.f64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// fmr f26,f3
	ctx.f26.f64 = ctx.f3.f64;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// fmr f22,f4
	ctx.f22.f64 = ctx.f4.f64;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r5,30
	ctx.r5.s64 = 30;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mr r18,r10
	ctx.r18.u64 = ctx.r10.u64;
	// mr r14,r27
	ctx.r14.u64 = ctx.r27.u64;
	// bl 0x821be0d8
	ctx.lr = 0x821F29C8;
	sub_821BE0D8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f30,12168(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f30.f64 = double(temp.f32);
	// fcmpu cr6,f26,f30
	ctx.cr6.compare(ctx.f26.f64, ctx.f30.f64);
	// bge cr6,0x821f29dc
	if (!ctx.cr6.lt) goto loc_821F29DC;
	// fmr f26,f30
	ctx.f26.f64 = ctx.f30.f64;
loc_821F29DC:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// lfs f13,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// li r5,2048
	ctx.r5.s64 = 2048;
	// lfs f12,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// stfs f13,132(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lfs f0,20928(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20928);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f20,f26,f26
	ctx.f20.f64 = double(float(ctx.f26.f64 * ctx.f26.f64));
	// fmuls f11,f26,f0
	ctx.f11.f64 = double(float(ctx.f26.f64 * ctx.f0.f64));
	// stfs f12,136(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f11,140(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stfs f11,144(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f11,148(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// bl 0x8227bff0
	ctx.lr = 0x821F2A24;
	sub_8227BFF0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x821f2cd8
	if (!ctx.cr6.gt) goto loc_821F2CD8;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r22,8708(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 8708);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lwz r24,8700(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 8700);
	// lis r7,128
	ctx.r7.s64 = 8388608;
	// lwz r17,8692(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 8692);
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// lfs f21,5804(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5804);
	ctx.f21.f64 = double(temp.f32);
	// addi r19,r1,160
	ctx.r19.s64 = ctx.r1.s64 + 160;
	// lfs f28,5484(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 5484);
	ctx.f28.f64 = double(temp.f32);
	// mr r15,r3
	ctx.r15.u64 = ctx.r3.u64;
	// ori r23,r7,8209
	ctx.r23.u64 = ctx.r7.u64 | 8209;
	// li r21,1
	ctx.r21.s64 = 1;
	// lis r26,-32256
	ctx.r26.s64 = -2113929216;
	// addi r16,r11,9624
	ctx.r16.s64 = ctx.r11.s64 + 9624;
	// addi r20,r10,26552
	ctx.r20.s64 = ctx.r10.s64 + 26552;
loc_821F2A70:
	// lwz r11,0(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// mulli r11,r11,624
	ctx.r11.s64 = ctx.r11.s64 * 624;
	// add r31,r11,r20
	ctx.r31.u64 = ctx.r11.u64 + ctx.r20.u64;
	// cmplw cr6,r31,r17
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r17.u32, ctx.xer);
	// beq cr6,0x821f2ccc
	if (ctx.cr6.eq) goto loc_821F2CCC;
	// lbz r11,289(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 289);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821f2ccc
	if (ctx.cr6.eq) goto loc_821F2CCC;
	// lwz r11,312(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x821f2ccc
	if (!ctx.cr6.eq) goto loc_821F2CCC;
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821f2ab8
	if (ctx.cr6.eq) goto loc_821F2AB8;
	// lwz r11,2900(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 2900);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821f2ccc
	if (!ctx.cr6.eq) goto loc_821F2CCC;
loc_821F2AB8:
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,208(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,212(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lfs f8,220(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,216(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 216);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f5,f7,f6
	ctx.f5.f64 = double(float(ctx.f7.f64 - ctx.f6.f64));
	// lfs f4,224(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,228(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	ctx.f3.f64 = double(temp.f32);
	// fabs f2,f12
	ctx.f2.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// fabs f1,f9
	ctx.f1.u64 = ctx.f9.u64 & ~0x8000000000000000;
	// fabs f0,f5
	ctx.f0.u64 = ctx.f5.u64 & ~0x8000000000000000;
	// fsubs f13,f2,f8
	ctx.f13.f64 = double(float(ctx.f2.f64 - ctx.f8.f64));
	// fsubs f12,f1,f4
	ctx.f12.f64 = double(float(ctx.f1.f64 - ctx.f4.f64));
	// fsubs f11,f0,f3
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f3.f64));
	// fsel f10,f13,f13,f28
	ctx.f10.f64 = ctx.f13.f64 >= 0.0 ? ctx.f13.f64 : ctx.f28.f64;
	// fsel f9,f12,f12,f28
	ctx.f9.f64 = ctx.f12.f64 >= 0.0 ? ctx.f12.f64 : ctx.f28.f64;
	// fsel f8,f11,f11,f28
	ctx.f8.f64 = ctx.f11.f64 >= 0.0 ? ctx.f11.f64 : ctx.f28.f64;
	// fmuls f7,f10,f10
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// fmadds f6,f9,f9,f7
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f7.f64));
	// fmadds f31,f8,f8,f6
	ctx.f31.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 + ctx.f6.f64));
	// fcmpu cr6,f31,f20
	ctx.cr6.compare(ctx.f31.f64, ctx.f20.f64);
	// bge cr6,0x821f2ccc
	if (!ctx.cr6.lt) goto loc_821F2CCC;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821f24c0
	ctx.lr = 0x821F2B30;
	sub_821F24C0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821f2ccc
	if (ctx.cr6.eq) goto loc_821F2CCC;
	// fsqrts f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(sqrt(ctx.f31.f64)));
	// stw r23,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r23.u32);
	// stb r21,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r21.u8);
	// addi r29,r31,232
	ctx.r29.s64 = ctx.r31.s64 + 232;
	// mr r9,r18
	ctx.r9.u64 = ctx.r18.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fdivs f13,f0,f26
	ctx.f13.f64 = double(float(ctx.f0.f64 / ctx.f26.f64));
	// fsubs f12,f23,f24
	ctx.f12.f64 = double(float(ctx.f23.f64 - ctx.f24.f64));
	// fmr f3,f28
	ctx.f3.f64 = ctx.f28.f64;
	// fmr f2,f22
	ctx.f2.f64 = ctx.f22.f64;
	// fmr f1,f26
	ctx.f1.f64 = ctx.f26.f64;
	// fsubs f25,f30,f13
	ctx.f25.f64 = double(float(ctx.f30.f64 - ctx.f13.f64));
	// fmadds f27,f12,f25,f24
	ctx.f27.f64 = double(float(ctx.f12.f64 * ctx.f25.f64 + ctx.f24.f64));
	// bl 0x821f1868
	ctx.lr = 0x821F2B7C;
	sub_821F1868(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821f2b8c
	if (ctx.cr6.eq) goto loc_821F2B8C;
	// fmr f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f30.f64;
	// b 0x821f2b90
	goto loc_821F2B90;
loc_821F2B8C:
	// fmr f31,f28
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f28.f64;
loc_821F2B90:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822325f8
	ctx.lr = 0x821F2B9C;
	sub_822325F8(ctx, base);
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f1.f64;
	// fcmpu cr6,f1,f28
	ctx.cr6.compare(ctx.f1.f64, ctx.f28.f64);
	// ble cr6,0x821f2bc4
	if (!ctx.cr6.gt) goto loc_821F2BC4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f3,f1
	ctx.f3.f64 = ctx.f1.f64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f27
	ctx.f1.f64 = ctx.f27.f64;
	// bl 0x82232710
	ctx.lr = 0x821F2BBC;
	sub_82232710(ctx, base);
	// fsubs f0,f30,f29
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f30.f64 - ctx.f29.f64));
	// fmuls f31,f0,f31
	ctx.f31.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
loc_821F2BC4:
	// fcmpu cr6,f31,f28
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f28.f64);
	// ble cr6,0x821f2ccc
	if (!ctx.cr6.gt) goto loc_821F2CCC;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x821f2bec
	if (ctx.cr6.eq) goto loc_821F2BEC;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82231be8
	ctx.lr = 0x821F2BE0;
	sub_82231BE8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821f2bec
	if (ctx.cr6.eq) goto loc_821F2BEC;
	// mr r14,r21
	ctx.r14.u64 = ctx.r21.u64;
loc_821F2BEC:
	// fmuls f13,f31,f27
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f31.f64 * ctx.f27.f64));
	// lfs f12,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// fsubs f10,f12,f11
	ctx.f10.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// lfs f9,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// li r9,5
	ctx.r9.s64 = 5;
	// lfs f7,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// lfs f6,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// lfs f0,13872(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 13872);
	ctx.f0.f64 = double(temp.f32);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// fsubs f5,f9,f8
	ctx.f5.f64 = double(float(ctx.f9.f64 - ctx.f8.f64));
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fsubs f4,f7,f6
	ctx.f4.f64 = double(float(ctx.f7.f64 - ctx.f6.f64));
	// stfs f5,112(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stw r27,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r27.u32);
	// fctiwz f3,f13
	ctx.f3.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f3,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.f3.u64);
	// lwz r8,156(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// stfs f4,116(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fadds f2,f10,f0
	ctx.f2.f64 = double(float(ctx.f10.f64 + ctx.f0.f64));
	// stfs f2,120(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// stw r22,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r22.u32);
	// bl 0x821f1080
	ctx.lr = 0x821F2C64;
	sub_821F1080(ctx, base);
	// lwz r3,276(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821f2ccc
	if (ctx.cr6.eq) goto loc_821F2CCC;
	// lfs f0,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f11,f0,f0
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f13,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f10,f13,f13,f11
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f11.f64));
	// fmadds f9,f12,f12,f10
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f10.f64));
	// fsqrts f8,f9
	ctx.f8.f64 = double(float(sqrt(ctx.f9.f64)));
	// fneg f7,f8
	ctx.f7.u64 = ctx.f8.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f8,f21
	ctx.cr6.compare(ctx.f8.f64, ctx.f21.f64);
	// fsel f6,f7,f30,f8
	ctx.f6.f64 = ctx.f7.f64 >= 0.0 ? ctx.f30.f64 : ctx.f8.f64;
	// fdivs f5,f30,f6
	ctx.f5.f64 = double(float(ctx.f30.f64 / ctx.f6.f64));
	// fmuls f4,f5,f0
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// stfs f4,112(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmuls f3,f13,f5
	ctx.f3.f64 = double(float(ctx.f13.f64 * ctx.f5.f64));
	// stfs f3,116(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fmuls f2,f5,f12
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f12.f64));
	// stfs f2,120(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// ble cr6,0x821f2ccc
	if (!ctx.cr6.gt) goto loc_821F2CCC;
	// li r7,0
	ctx.r7.s64 = 0;
	// fmr f1,f25
	ctx.f1.f64 = ctx.f25.f64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x8234a978
	ctx.lr = 0x821F2CCC;
	sub_8234A978(ctx, base);
loc_821F2CCC:
	// addic. r15,r15,-1
	ctx.xer.ca = ctx.r15.u32 > 0;
	ctx.r15.s64 = ctx.r15.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r15.s32, 0, ctx.xer);
	// addi r19,r19,4
	ctx.r19.s64 = ctx.r19.s64 + 4;
	// bne 0x821f2a70
	if (!ctx.cr0.eq) goto loc_821F2A70;
loc_821F2CD8:
	// mr r6,r18
	ctx.r6.u64 = ctx.r18.u64;
	// fmr f4,f24
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f24.f64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f3,f23
	ctx.f3.f64 = ctx.f23.f64;
	// fmr f2,f22
	ctx.f2.f64 = ctx.f22.f64;
	// fmr f1,f26
	ctx.f1.f64 = ctx.f26.f64;
	// bl 0x821f3eb0
	ctx.lr = 0x821F2CF4;
	sub_821F3EB0(ctx, base);
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// addi r1,r1,8608
	ctx.r1.s64 = ctx.r1.s64 + 8608;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x823de054
	ctx.lr = 0x821F2D04;
	__restfpr_20(ctx, base);
	// b 0x823ddf90
	__restgprlr_14(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821F2970) {
	__imp__sub_821F2970(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F2D08) {
	PPC_FUNC_PROLOGUE();
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// b 0x82127ea8
	sub_82127EA8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821F2D08) {
	__imp__sub_821F2D08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F2D14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821F2D14) {
	__imp__sub_821F2D14(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F2D18) {
	PPC_FUNC_PROLOGUE();
	// li r8,1
	ctx.r8.s64 = 1;
	// b 0x82127ea8
	sub_82127EA8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821F2D18) {
	__imp__sub_821F2D18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F2D20) {
	PPC_FUNC_PROLOGUE();
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,20
	ctx.r5.s64 = 20;
	// b 0x82128080
	sub_82128080(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821F2D20) {
	__imp__sub_821F2D20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F2D2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821F2D2C) {
	__imp__sub_821F2D2C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F2D30) {
	PPC_FUNC_PROLOGUE();
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// b 0x82127f30
	sub_82127F30(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821F2D30) {
	__imp__sub_821F2D30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F2D3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821F2D3C) {
	__imp__sub_821F2D3C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F2D40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x821F2D48;
	__savegprlr_27(ctx, base);
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x823de00c
	ctx.lr = 0x821F2D50;
	__savefpr_21(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// lfs f0,5524(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5524);
	ctx.f0.f64 = double(temp.f32);
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// fmuls f31,f1,f0
	ctx.f31.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x823de720
	ctx.lr = 0x821F2D7C;
	sub_823DE720(ctx, base);
	// frsp f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = double(float(ctx.f1.f64));
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x823de800
	ctx.lr = 0x821F2D88;
	sub_823DE800(ctx, base);
	// lfs f10,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// frsp f11,f1
	ctx.f11.f64 = double(float(ctx.f1.f64));
	// lfs f0,16(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 - ctx.f0.f64));
	// lfs f8,12(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// fadds f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 + ctx.f0.f64));
	// lfs f7,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f7,f8
	ctx.f6.f64 = double(float(ctx.f7.f64 - ctx.f8.f64));
	// lfs f5,20(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	ctx.f5.f64 = double(temp.f32);
	// fadds f13,f7,f8
	ctx.f13.f64 = double(float(ctx.f7.f64 + ctx.f8.f64));
	// lfs f4,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f3,f4,f5
	ctx.f3.f64 = double(float(ctx.f4.f64 - ctx.f5.f64));
	// lfs f2,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// fadds f12,f4,f5
	ctx.f12.f64 = double(float(ctx.f4.f64 + ctx.f5.f64));
	// lfs f1,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// lfs f10,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fmr f8,f9
	ctx.f8.f64 = ctx.f9.f64;
	// fmr f7,f9
	ctx.f7.f64 = ctx.f9.f64;
	// fmr f5,f0
	ctx.f5.f64 = ctx.f0.f64;
	// fmuls f25,f9,f30
	ctx.f25.f64 = double(float(ctx.f9.f64 * ctx.f30.f64));
	// fmuls f24,f9,f30
	ctx.f24.f64 = double(float(ctx.f9.f64 * ctx.f30.f64));
	// fmuls f23,f0,f30
	ctx.f23.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// fmuls f22,f0,f30
	ctx.f22.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// fmr f31,f6
	ctx.f31.f64 = ctx.f6.f64;
	// fmr f29,f13
	ctx.f29.f64 = ctx.f13.f64;
	// fmr f28,f6
	ctx.f28.f64 = ctx.f6.f64;
	// fmuls f8,f8,f11
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f11.f64));
	// fmuls f7,f7,f11
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f11.f64));
	// fmuls f5,f5,f11
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f11.f64));
	// fmsubs f25,f6,f11,f25
	ctx.f25.f64 = double(float(ctx.f6.f64 * ctx.f11.f64 - ctx.f25.f64));
	// fmsubs f31,f13,f11,f24
	ctx.f31.f64 = double(float(ctx.f13.f64 * ctx.f11.f64 - ctx.f24.f64));
	// fadds f21,f2,f3
	ctx.f21.f64 = double(float(ctx.f2.f64 + ctx.f3.f64));
	// stfs f21,88(r1)
	temp.f32 = float(ctx.f21.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmsubs f29,f6,f11,f23
	ctx.f29.f64 = double(float(ctx.f6.f64 * ctx.f11.f64 - ctx.f23.f64));
	// fmsubs f28,f13,f11,f22
	ctx.f28.f64 = double(float(ctx.f13.f64 * ctx.f11.f64 - ctx.f22.f64));
	// fadds f21,f2,f3
	ctx.f21.f64 = double(float(ctx.f2.f64 + ctx.f3.f64));
	// stfs f21,100(r1)
	temp.f32 = float(ctx.f21.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fadds f24,f2,f3
	ctx.f24.f64 = double(float(ctx.f2.f64 + ctx.f3.f64));
	// stfs f24,112(r1)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmadds f8,f6,f30,f8
	ctx.f8.f64 = double(float(ctx.f6.f64 * ctx.f30.f64 + ctx.f8.f64));
	// fmadds f7,f13,f30,f7
	ctx.f7.f64 = double(float(ctx.f13.f64 * ctx.f30.f64 + ctx.f7.f64));
	// fmadds f5,f6,f30,f5
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f30.f64 + ctx.f5.f64));
	// fmr f4,f0
	ctx.f4.f64 = ctx.f0.f64;
	// fadds f3,f2,f3
	ctx.f3.f64 = double(float(ctx.f2.f64 + ctx.f3.f64));
	// stfs f3,124(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// fadds f3,f2,f12
	ctx.f3.f64 = double(float(ctx.f2.f64 + ctx.f12.f64));
	// stfs f3,136(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// fadds f3,f1,f25
	ctx.f3.f64 = double(float(ctx.f1.f64 + ctx.f25.f64));
	// stfs f3,80(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fadds f3,f1,f31
	ctx.f3.f64 = double(float(ctx.f1.f64 + ctx.f31.f64));
	// stfs f3,92(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// fadds f3,f1,f28
	ctx.f3.f64 = double(float(ctx.f1.f64 + ctx.f28.f64));
	// stfs f3,116(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fmr f27,f13
	ctx.f27.f64 = ctx.f13.f64;
	// fadds f8,f10,f8
	ctx.f8.f64 = double(float(ctx.f10.f64 + ctx.f8.f64));
	// stfs f8,84(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fadds f8,f10,f7
	ctx.f8.f64 = double(float(ctx.f10.f64 + ctx.f7.f64));
	// stfs f8,96(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fadds f7,f1,f29
	ctx.f7.f64 = double(float(ctx.f1.f64 + ctx.f29.f64));
	// stfs f7,104(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fadds f5,f10,f5
	ctx.f5.f64 = double(float(ctx.f10.f64 + ctx.f5.f64));
	// stfs f5,108(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// fmr f26,f9
	ctx.f26.f64 = ctx.f9.f64;
	// fmuls f4,f4,f11
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f11.f64));
	// fmr f8,f6
	ctx.f8.f64 = ctx.f6.f64;
	// fmr f7,f13
	ctx.f7.f64 = ctx.f13.f64;
	// fmuls f5,f9,f30
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f30.f64));
	// fmuls f3,f9,f11
	ctx.f3.f64 = double(float(ctx.f9.f64 * ctx.f11.f64));
	// fmuls f31,f9,f30
	ctx.f31.f64 = double(float(ctx.f9.f64 * ctx.f30.f64));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmuls f9,f9,f11
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f11.f64));
	// li r30,12
	ctx.r30.s64 = 12;
	// fmadds f4,f13,f30,f4
	ctx.f4.f64 = double(float(ctx.f13.f64 * ctx.f30.f64 + ctx.f4.f64));
	// addi r11,r10,14280
	ctx.r11.s64 = ctx.r10.s64 + 14280;
	// fmsubs f5,f6,f11,f5
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f11.f64 - ctx.f5.f64));
	// fmadds f3,f6,f30,f3
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f30.f64 + ctx.f3.f64));
	// addi r31,r11,-4
	ctx.r31.s64 = ctx.r11.s64 + -4;
	// fmr f29,f0
	ctx.f29.f64 = ctx.f0.f64;
	// fmsubs f8,f13,f11,f31
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f11.f64 - ctx.f31.f64));
	// fmadds f7,f7,f30,f9
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f30.f64 + ctx.f9.f64));
	// fadds f9,f2,f12
	ctx.f9.f64 = double(float(ctx.f2.f64 + ctx.f12.f64));
	// stfs f9,148(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// fadds f4,f10,f4
	ctx.f4.f64 = double(float(ctx.f10.f64 + ctx.f4.f64));
	// stfs f4,120(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fmuls f9,f0,f11
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// fmuls f4,f0,f30
	ctx.f4.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// fmuls f31,f0,f30
	ctx.f31.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// fmuls f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// fadds f5,f1,f5
	ctx.f5.f64 = double(float(ctx.f1.f64 + ctx.f5.f64));
	// stfs f5,128(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fadds f3,f10,f3
	ctx.f3.f64 = double(float(ctx.f10.f64 + ctx.f3.f64));
	// stfs f3,132(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// fadds f5,f2,f12
	ctx.f5.f64 = double(float(ctx.f2.f64 + ctx.f12.f64));
	// stfs f5,160(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// fadds f3,f2,f12
	ctx.f3.f64 = double(float(ctx.f2.f64 + ctx.f12.f64));
	// stfs f3,172(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// fadds f8,f1,f8
	ctx.f8.f64 = double(float(ctx.f1.f64 + ctx.f8.f64));
	// stfs f8,140(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// fadds f7,f10,f7
	ctx.f7.f64 = double(float(ctx.f10.f64 + ctx.f7.f64));
	// stfs f7,144(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// fmadds f12,f6,f30,f9
	ctx.f12.f64 = double(float(ctx.f6.f64 * ctx.f30.f64 + ctx.f9.f64));
	// fmsubs f2,f6,f11,f4
	ctx.f2.f64 = double(float(ctx.f6.f64 * ctx.f11.f64 - ctx.f4.f64));
	// fmsubs f11,f13,f11,f31
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f11.f64 - ctx.f31.f64));
	// fmadds f9,f13,f30,f0
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f30.f64 + ctx.f0.f64));
	// fadds f7,f10,f12
	ctx.f7.f64 = double(float(ctx.f10.f64 + ctx.f12.f64));
	// stfs f7,156(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// fadds f8,f1,f2
	ctx.f8.f64 = double(float(ctx.f1.f64 + ctx.f2.f64));
	// stfs f8,152(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// fadds f6,f1,f11
	ctx.f6.f64 = double(float(ctx.f1.f64 + ctx.f11.f64));
	// stfs f6,164(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// fadds f5,f10,f9
	ctx.f5.f64 = double(float(ctx.f10.f64 + ctx.f9.f64));
	// stfs f5,168(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
loc_821F2F48:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwzu r11,8(r31)
	ea = 8 + ctx.r31.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r31.u32 = ea;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r9,r11,r8
	ctx.r9.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// add r4,r11,r4
	ctx.r4.u64 = ctx.r11.u64 + ctx.r4.u64;
	// add r3,r10,r3
	ctx.r3.u64 = ctx.r10.u64 + ctx.r3.u64;
	// bl 0x82127ea8
	ctx.lr = 0x821F2F8C;
	sub_82127EA8(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x821f2f48
	if (!ctx.cr0.eq) goto loc_821F2F48;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x823de058
	ctx.lr = 0x821F2FA0;
	__restfpr_21(ctx, base);
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821F2D40) {
	__imp__sub_821F2D40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F2FA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821F2FA4) {
	__imp__sub_821F2FA4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F2FA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x821F2FB0;
	__savegprlr_27(ctx, base);
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x823de00c
	ctx.lr = 0x821F2FB8;
	__savefpr_21(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r9,8
	ctx.r9.s64 = 8;
	// lfs f30,12(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f30.f64 = double(temp.f32);
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// lfs f29,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f29.f64 = double(temp.f32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f28,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f28.f64 = double(temp.f32);
	// addi r11,r1,76
	ctx.r11.s64 = ctx.r1.s64 + 76;
	// lfs f27,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f27.f64 = double(temp.f32);
	// lfs f13,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f12,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// lfs f11,24(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 24);
	ctx.f11.f64 = double(temp.f32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lfs f10,12(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,28(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 28);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,16(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,32(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 32);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,20(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// lfs f31,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f31.f64 = double(temp.f32);
	// lfs f25,2424(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2424);
	ctx.f25.f64 = double(temp.f32);
	// lfs f26,12168(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12168);
	ctx.f26.f64 = double(temp.f32);
loc_821F3030:
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821f3044
	if (ctx.cr6.eq) goto loc_821F3044;
	// fmr f0,f26
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f26.f64;
	// b 0x821f3048
	goto loc_821F3048;
loc_821F3044:
	// fmr f0,f25
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f25.f64;
loc_821F3048:
	// rlwinm r9,r10,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// fmadds f0,f30,f0,f29
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f30.f64 * ctx.f0.f64 + ctx.f29.f64));
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821f3064
	if (ctx.cr6.eq) goto loc_821F3064;
	// fmr f0,f26
	ctx.f0.f64 = ctx.f26.f64;
	// b 0x821f3068
	goto loc_821F3068;
loc_821F3064:
	// fmr f0,f25
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f25.f64;
loc_821F3068:
	// rlwinm r9,r10,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// fmadds f0,f28,f0,f27
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f28.f64 * ctx.f0.f64 + ctx.f27.f64));
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821f3084
	if (ctx.cr6.eq) goto loc_821F3084;
	// fmr f0,f26
	ctx.f0.f64 = ctx.f26.f64;
	// b 0x821f3088
	goto loc_821F3088;
loc_821F3084:
	// fmr f0,f25
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f25.f64;
loc_821F3088:
	// fmadds f0,f13,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64 + ctx.f12.f64));
	// stfs f0,12(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lfs f24,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f24.f64 = double(temp.f32);
	// lfs f23,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f23.f64 = double(temp.f32);
	// fmuls f22,f23,f10
	ctx.f22.f64 = double(float(ctx.f23.f64 * ctx.f10.f64));
	// fmuls f21,f23,f7
	ctx.f21.f64 = double(float(ctx.f23.f64 * ctx.f7.f64));
	// fmuls f23,f23,f4
	ctx.f23.f64 = double(float(ctx.f23.f64 * ctx.f4.f64));
	// fmadds f22,f0,f9,f22
	ctx.f22.f64 = double(float(ctx.f0.f64 * ctx.f9.f64 + ctx.f22.f64));
	// fmadds f21,f0,f6,f21
	ctx.f21.f64 = double(float(ctx.f0.f64 * ctx.f6.f64 + ctx.f21.f64));
	// fmadds f0,f0,f3,f23
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f3.f64 + ctx.f23.f64));
	// fmadds f23,f24,f11,f22
	ctx.f23.f64 = double(float(ctx.f24.f64 * ctx.f11.f64 + ctx.f22.f64));
	// stfs f23,4(r11)
	temp.f32 = float(ctx.f23.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// fmadds f23,f24,f8,f21
	ctx.f23.f64 = double(float(ctx.f24.f64 * ctx.f8.f64 + ctx.f21.f64));
	// stfs f23,8(r11)
	temp.f32 = float(ctx.f23.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// fmadds f0,f24,f5,f0
	ctx.f0.f64 = double(float(ctx.f24.f64 * ctx.f5.f64 + ctx.f0.f64));
	// stfs f0,12(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f2
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f2.f64));
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f1.f64));
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lfs f0,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// stfsu f0,12(r11)
	ea = 12 + ctx.r11.u32;
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821f3030
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821F3030;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r30,12
	ctx.r30.s64 = 12;
	// addi r11,r11,14280
	ctx.r11.s64 = ctx.r11.s64 + 14280;
	// addi r31,r11,-4
	ctx.r31.s64 = ctx.r11.s64 + -4;
loc_821F3108:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwzu r11,8(r31)
	ea = 8 + ctx.r31.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r31.u32 = ea;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r9,r11,r8
	ctx.r9.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// add r4,r11,r4
	ctx.r4.u64 = ctx.r11.u64 + ctx.r4.u64;
	// add r3,r10,r3
	ctx.r3.u64 = ctx.r10.u64 + ctx.r3.u64;
	// bl 0x82127ea8
	ctx.lr = 0x821F314C;
	sub_82127EA8(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x821f3108
	if (!ctx.cr0.eq) goto loc_821F3108;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x823de058
	ctx.lr = 0x821F3160;
	__restfpr_21(ctx, base);
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821F2FA8) {
	__imp__sub_821F2FA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F3164) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821F3164) {
	__imp__sub_821F3164(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F3168) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x821F3170;
	__savegprlr_26(ctx, base);
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x823de020
	ctx.lr = 0x821F3178;
	__savefpr_26(ctx, base);
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// bl 0x822d4b08
	ctx.lr = 0x821F319C;
	sub_822D4B08(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822d53f8
	ctx.lr = 0x821F31A8;
	sub_822D53F8(ctx, base);
	// lfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r1,136
	ctx.r11.s64 = ctx.r1.s64 + 136;
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f8,f0,f13
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f11,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f11.f64 = double(temp.f32);
	// addi r31,r11,-12
	ctx.r31.s64 = ctx.r11.s64 + -12;
	// lfs f10,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f7,f12,f11
	ctx.f7.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// lfs f9,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f9.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmuls f6,f10,f9
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f9.f64));
	// li r30,0
	ctx.r30.s64 = 0;
	// lfs f27,14376(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14376);
	ctx.f27.f64 = double(temp.f32);
	// fmsubs f30,f12,f10,f8
	ctx.f30.f64 = double(float(ctx.f12.f64 * ctx.f10.f64 - ctx.f8.f64));
	// fmsubs f29,f13,f9,f7
	ctx.f29.f64 = double(float(ctx.f13.f64 * ctx.f9.f64 - ctx.f7.f64));
	// fmsubs f28,f0,f11,f6
	ctx.f28.f64 = double(float(ctx.f0.f64 * ctx.f11.f64 - ctx.f6.f64));
loc_821F31EC:
	// clrldi r11,r30,32
	ctx.r11.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// lfd f0,112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f26,f12,f27
	ctx.f26.f64 = double(float(ctx.f12.f64 * ctx.f27.f64));
	// fmr f1,f26
	ctx.f1.f64 = ctx.f26.f64;
	// bl 0x823de720
	ctx.lr = 0x821F320C;
	sub_823DE720(ctx, base);
	// frsp f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64));
	// fmr f1,f26
	ctx.f1.f64 = ctx.f26.f64;
	// fmuls f26,f11,f31
	ctx.f26.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// bl 0x823de800
	ctx.lr = 0x821F321C;
	sub_823DE800(ctx, base);
	// frsp f10,f1
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f1.f64));
	// lfs f9,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f7,f30,f26,f9
	ctx.f7.f64 = double(float(ctx.f30.f64 * ctx.f26.f64 + ctx.f9.f64));
	// lfs f8,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f6,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f5,f29,f26,f8
	ctx.f5.f64 = double(float(ctx.f29.f64 * ctx.f26.f64 + ctx.f8.f64));
	// lfs f3,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f3.f64 = double(temp.f32);
	// fmadds f4,f28,f26,f6
	ctx.f4.f64 = double(float(ctx.f28.f64 * ctx.f26.f64 + ctx.f6.f64));
	// stfs f7,4(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stfs f5,8(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// stfs f4,12(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// cmplwi cr6,r30,16
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 16, ctx.xer);
	// lfs f1,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f10,f31
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f31.f64));
	// fmr f2,f7
	ctx.f2.f64 = ctx.f7.f64;
	// fmadds f12,f3,f13,f7
	ctx.f12.f64 = double(float(ctx.f3.f64 * ctx.f13.f64 + ctx.f7.f64));
	// stfs f12,4(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// lfs f11,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f10,f1,f13,f11
	ctx.f10.f64 = double(float(ctx.f1.f64 * ctx.f13.f64 + ctx.f11.f64));
	// stfs f10,8(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// lfs f9,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f8,f0,f13,f9
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f13.f64 + ctx.f9.f64));
	// stfsu f8,12(r31)
	ea = 12 + ctx.r31.u32;
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r31.u32 = ea;
	// blt cr6,0x821f31ec
	if (ctx.cr6.lt) goto loc_821F31EC;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r30,r1,128
	ctx.r30.s64 = ctx.r1.s64 + 128;
loc_821F328C:
	// addi r31,r11,1
	ctx.r31.s64 = ctx.r11.s64 + 1;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// clrlwi r10,r31,28
	ctx.r10.u64 = ctx.r31.u32 & 0xF;
	// rlwinm r11,r31,1,27,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0x1E;
	// li r8,1
	ctx.r8.s64 = 1;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82127ea8
	ctx.lr = 0x821F32C0;
	sub_82127EA8(ctx, base);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// cmplwi cr6,r31,16
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 16, ctx.xer);
	// blt cr6,0x821f328c
	if (ctx.cr6.lt) goto loc_821F328C;
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x823de06c
	ctx.lr = 0x821F32DC;
	__restfpr_26(ctx, base);
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821F3168) {
	__imp__sub_821F3168(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F32E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x821F32E8;
	__savegprlr_26(ctx, base);
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x823de020
	ctx.lr = 0x821F32F0;
	__savefpr_26(ctx, base);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// fsubs f13,f3,f2
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f3.f64 - ctx.f2.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmr f29,f1
	ctx.f29.f64 = ctx.f1.f64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// fmr f31,f2
	ctx.f31.f64 = ctx.f2.f64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// lfs f0,14380(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14380);
	ctx.f0.f64 = double(temp.f32);
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// fmuls f30,f13,f0
	ctx.f30.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f13,5484(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f30,f13
	ctx.cr6.compare(ctx.f30.f64, ctx.f13.f64);
	// bge cr6,0x821f3340
	if (!ctx.cr6.lt) goto loc_821F3340;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,2412(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2412);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f31,f31,f13
	ctx.f31.f64 = double(float(ctx.f31.f64 - ctx.f13.f64));
	// fsubs f13,f3,f31
	ctx.f13.f64 = double(float(ctx.f3.f64 - ctx.f31.f64));
	// fmuls f30,f13,f0
	ctx.f30.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
loc_821F3340:
	// addi r11,r1,100
	ctx.r11.s64 = ctx.r1.s64 + 100;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r30,r11,-8
	ctx.r30.s64 = ctx.r11.s64 + -8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f28,5524(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5524);
	ctx.f28.f64 = double(temp.f32);
loc_821F3354:
	// clrldi r11,r31,32
	ctx.r11.u64 = ctx.r31.u64 & 0xFFFFFFFF;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmadds f11,f12,f30,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f30.f64 + ctx.f31.f64));
	// fmuls f27,f11,f28
	ctx.f27.f64 = double(float(ctx.f11.f64 * ctx.f28.f64));
	// fmr f1,f27
	ctx.f1.f64 = ctx.f27.f64;
	// bl 0x823de720
	ctx.lr = 0x821F3378;
	sub_823DE720(ctx, base);
	// frsp f26,f1
	ctx.fpscr.disableFlushMode();
	ctx.f26.f64 = double(float(ctx.f1.f64));
	// fmr f1,f27
	ctx.f1.f64 = ctx.f27.f64;
	// bl 0x823de800
	ctx.lr = 0x821F3384;
	sub_823DE800(ctx, base);
	// frsp f10,f1
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f1.f64));
	// lfs f9,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// fmadds f7,f26,f29,f8
	ctx.f7.f64 = double(float(ctx.f26.f64 * ctx.f29.f64 + ctx.f8.f64));
	// lfs f6,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// stfs f7,8(r30)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// cmplwi cr6,r31,16
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 16, ctx.xer);
	// fmadds f5,f10,f29,f9
	ctx.f5.f64 = double(float(ctx.f10.f64 * ctx.f29.f64 + ctx.f9.f64));
	// stfs f5,4(r30)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// stfsu f6,12(r30)
	ea = 12 + ctx.r30.u32;
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r30.u32 = ea;
	// blt cr6,0x821f3354
	if (ctx.cr6.lt) goto loc_821F3354;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// li r31,15
	ctx.r31.s64 = 15;
loc_821F33BC:
	// addi r30,r3,12
	ctx.r30.s64 = ctx.r3.s64 + 12;
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x82127ea8
	ctx.lr = 0x821F33D8;
	sub_82127EA8(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bne 0x821f33bc
	if (!ctx.cr0.eq) goto loc_821F33BC;
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x823de06c
	ctx.lr = 0x821F33F0;
	__restfpr_26(ctx, base);
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821F32E0) {
	__imp__sub_821F32E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F33F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821F33F4) {
	__imp__sub_821F33F4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F33F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x821F3400;
	__savegprlr_28(ctx, base);
	// stfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f30.u64);
	// stfd f31,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lfs f0,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f11,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// fmr f31,f2
	ctx.f31.f64 = ctx.f2.f64;
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// mr r28,r9
	ctx.r28.u64 = ctx.r9.u64;
	// fmadds f10,f11,f13,f12
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f13.f64 + ctx.f12.f64));
	// fsubs f30,f1,f10
	ctx.f30.f64 = double(float(ctx.f1.f64 - ctx.f10.f64));
	// bl 0x822d4ac8
	ctx.lr = 0x821F3450;
	sub_822D4AC8(ctx, base);
	// fdivs f9,f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = double(float(ctx.f30.f64 / ctx.f1.f64));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// lfs f8,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lfs f7,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lfs f6,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// li r8,1
	ctx.r8.s64 = 1;
	// lfs f0,2416(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2416);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// fmuls f30,f31,f0
	ctx.f30.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// fmadds f0,f13,f9,f8
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f9.f64 + ctx.f8.f64));
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// fmadds f11,f12,f9,f7
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f9.f64 + ctx.f7.f64));
	// stfs f11,140(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// fneg f5,f9
	ctx.f5.u64 = ctx.f9.u64 ^ 0x8000000000000000;
	// fadds f10,f30,f6
	ctx.f10.f64 = double(float(ctx.f30.f64 + ctx.f6.f64));
	// stfs f10,144(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f10,96(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmadds f4,f5,f13,f0
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f13.f64 + ctx.f0.f64));
	// stfs f4,88(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmadds f3,f5,f12,f11
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f12.f64 + ctx.f11.f64));
	// stfs f3,92(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// bl 0x82127ea8
	ctx.lr = 0x821F34C0;
	sub_82127EA8(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f1,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f1.f64 = double(temp.f32);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// fneg f11,f1
	ctx.f11.u64 = ctx.f1.u64 ^ 0x8000000000000000;
	// lfs f13,140(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f12.f64 = double(temp.f32);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lfs f10,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lfs f0,6004(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 6004);
	ctx.f0.f64 = double(temp.f32);
	// li r8,1
	ctx.r8.s64 = 1;
	// fmuls f2,f31,f0
	ctx.f2.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
	// stfs f10,112(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f10,96(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// fmadds f7,f30,f11,f12
	ctx.f7.f64 = double(float(ctx.f30.f64 * ctx.f11.f64 + ctx.f12.f64));
	// stfs f7,104(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fmadds f6,f2,f11,f12
	ctx.f6.f64 = double(float(ctx.f2.f64 * ctx.f11.f64 + ctx.f12.f64));
	// stfs f6,88(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f9,f30,f0,f13
	ctx.f9.f64 = double(float(ctx.f30.f64 * ctx.f0.f64 + ctx.f13.f64));
	// stfs f9,108(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// fmadds f8,f2,f0,f13
	ctx.f8.f64 = double(float(ctx.f2.f64 * ctx.f0.f64 + ctx.f13.f64));
	// stfs f8,92(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// bl 0x82127ea8
	ctx.lr = 0x821F3528;
	sub_82127EA8(ctx, base);
	// lfs f5,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f4.f64 = double(temp.f32);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// fadds f3,f5,f31
	ctx.f3.f64 = double(float(ctx.f5.f64 + ctx.f31.f64));
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// fadds f2,f4,f31
	ctx.f2.f64 = double(float(ctx.f4.f64 + ctx.f31.f64));
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// stfs f3,112(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f2,96(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// bl 0x82127ea8
	ctx.lr = 0x821F355C;
	sub_82127EA8(ctx, base);
	// lfs f1,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f1,f31
	ctx.f13.f64 = double(float(ctx.f1.f64 - ctx.f31.f64));
	// lfs f12,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f12.f64 = double(temp.f32);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// stfs f12,124(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stfs f13,128(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82127ea8
	ctx.lr = 0x821F3594;
	sub_82127EA8(ctx, base);
	// lfs f11,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f11,f31
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f31.f64));
	// lfs f8,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f8.f64 = double(temp.f32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stfs f10,120(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// stfs f8,124(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// stfs f9,128(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82127ea8
	ctx.lr = 0x821F35CC;
	sub_82127EA8(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821F33F8) {
	__imp__sub_821F33F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F35DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821F35DC) {
	__imp__sub_821F35DC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F35E0) {
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
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x821f3614
	if (ctx.cr6.eq) goto loc_821F3614;
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
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// b 0x821f3654
	goto loc_821F3654;
loc_821F3614:
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lwz r11,9624(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9624);
	// lfs f11,280(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 280);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 + ctx.f10.f64));
	// lfs f8,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f0,f8
	ctx.f6.f64 = double(float(ctx.f0.f64 - ctx.f8.f64));
	// fsubs f5,f13,f7
	ctx.f5.f64 = double(float(ctx.f13.f64 - ctx.f7.f64));
	// stfs f6,80(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f5,84(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fsubs f4,f12,f9
	ctx.f4.f64 = double(float(ctx.f12.f64 - ctx.f9.f64));
	// stfs f4,88(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
loc_821F3654:
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x821f3168
	ctx.lr = 0x821F3664;
	sub_821F3168(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821F35E0) {
	__imp__sub_821F35E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F3674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821F3674) {
	__imp__sub_821F3674(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F3678) {
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
	// lis r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// ori r31,r11,65535
	ctx.r31.u64 = ctx.r11.u64 | 65535;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r8,r10,-10920
	ctx.r8.s64 = ctx.r10.s64 + -10920;
	// addi r3,r9,-10948
	ctx.r3.s64 = ctx.r9.s64 + -10948;
	// li r7,68
	ctx.r7.s64 = 68;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,75
	ctx.r4.s64 = 75;
	// bl 0x822e1618
	ctx.lr = 0x821F36B4;
	sub_822E1618(ctx, base);
	// lis r8,-32052
	ctx.r8.s64 = -2100559872;
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r4,275
	ctx.r4.s64 = 275;
	// stw r3,-17568(r8)
	PPC_STORE_U32(ctx.r8.u32 + -17568, ctx.r3.u32);
	// addi r8,r7,-11024
	ctx.r8.s64 = ctx.r7.s64 + -11024;
	// addi r3,r5,-11052
	ctx.r3.s64 = ctx.r5.s64 + -11052;
	// li r7,68
	ctx.r7.s64 = 68;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x822e1618
	ctx.lr = 0x821F36E0;
	sub_822E1618(ctx, base);
	// lis r4,-32052
	ctx.r4.s64 = -2100559872;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r8,r11,-11100
	ctx.r8.s64 = ctx.r11.s64 + -11100;
	// li r7,68
	ctx.r7.s64 = 68;
	// stw r3,-17552(r4)
	PPC_STORE_U32(ctx.r4.u32 + -17552, ctx.r3.u32);
	// addi r3,r10,-11120
	ctx.r3.s64 = ctx.r10.s64 + -11120;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2000
	ctx.r4.s64 = 2000;
	// bl 0x822e1618
	ctx.lr = 0x821F370C;
	sub_822E1618(ctx, base);
	// lis r9,-32052
	ctx.r9.s64 = -2100559872;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// stw r3,-17556(r9)
	PPC_STORE_U32(ctx.r9.u32 + -17556, ctx.r3.u32);
	// lis r4,-32254
	ctx.r4.s64 = -2113798144;
	// lfs f3,6912(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 6912);
	ctx.f3.f64 = double(temp.f32);
	// addi r8,r5,-11192
	ctx.r8.s64 = ctx.r5.s64 + -11192;
	// lfs f2,17672(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 17672);
	ctx.f2.f64 = double(temp.f32);
	// addi r3,r4,-11224
	ctx.r3.s64 = ctx.r4.s64 + -11224;
	// li r7,68
	ctx.r7.s64 = 68;
	// lfs f1,6016(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 6016);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822e1660
	ctx.lr = 0x821F3744;
	sub_822E1660(ctx, base);
	// lis r11,-32052
	ctx.r11.s64 = -2100559872;
	// stw r3,-17564(r11)
	PPC_STORE_U32(ctx.r11.u32 + -17564, ctx.r3.u32);
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

PPC_WEAK_FUNC(sub_821F3678) {
	__imp__sub_821F3678(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F3760) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x821F3768;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32052
	ctx.r11.s64 = -2100559872;
	// lis r29,-32052
	ctx.r29.s64 = -2100559872;
	// addi r10,r11,-18804
	ctx.r10.s64 = ctx.r11.s64 + -18804;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,52(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// stw r11,-17560(r29)
	PPC_STORE_U32(ctx.r29.u32 + -17560, ctx.r11.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x823de090
	ctx.lr = 0x821F379C;
	sub_823DE090(ctx, base);
	// lwz r11,-17560(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -17560);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// ble cr6,0x821f37f4
	if (!ctx.cr6.gt) goto loc_821F37F4;
	// li r31,0
	ctx.r31.s64 = 0;
loc_821F37B4:
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// li r4,0
	ctx.r4.s64 = 0;
	// add r28,r11,r31
	ctx.r28.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r28,4
	ctx.r3.s64 = ctx.r28.s64 + 4;
	// bl 0x822a24e0
	ctx.lr = 0x821F37C8;
	sub_822A24E0(ctx, base);
	// lwz r11,-17560(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -17560);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// bl 0x821fa060
	ctx.lr = 0x821F37D8;
	sub_821FA060(ctx, base);
	// sth r3,4(r28)
	PPC_STORE_U16(ctx.r28.u32 + 4, ctx.r3.u16);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// lwz r11,-17560(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -17560);
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r30,r9
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x821f37b4
	if (ctx.cr6.lt) goto loc_821F37B4;
loc_821F37F4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821F3760) {
	__imp__sub_821F3760(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F37FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821F37FC) {
	__imp__sub_821F37FC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F3800) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x821F3808;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-32052
	ctx.r29.s64 = -2100559872;
	// lwz r11,-17560(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -17560);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821f3864
	if (ctx.cr6.eq) goto loc_821F3864;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x821f385c
	if (!ctx.cr6.gt) goto loc_821F385C;
	// li r31,0
	ctx.r31.s64 = 0;
loc_821F3830:
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// li r4,0
	ctx.r4.s64 = 0;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x822a24e0
	ctx.lr = 0x821F3844;
	sub_822A24E0(ctx, base);
	// lwz r11,-17560(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -17560);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x821f3830
	if (ctx.cr6.lt) goto loc_821F3830;
loc_821F385C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-17560(r29)
	PPC_STORE_U32(ctx.r29.u32 + -17560, ctx.r11.u32);
loc_821F3864:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821F3800) {
	__imp__sub_821F3800(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F386C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821F386C) {
	__imp__sub_821F386C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F3870) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-32052
	ctx.r8.s64 = -2100559872;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,-17560(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + -17560);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821f38ac
	if (ctx.cr6.eq) goto loc_821F38AC;
	// lwz r7,16(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// addi r10,r7,4
	ctx.r10.s64 = ctx.r7.s64 + 4;
loc_821F3890:
	// lhz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// cmplw cr6,r5,r3
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x821f38bc
	if (ctx.cr6.eq) goto loc_821F38BC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x821f3890
	if (ctx.cr6.lt) goto loc_821F3890;
loc_821F38AC:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_821F38BC:
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r7,r11
	ctx.r10.u64 = ctx.r7.u64 + ctx.r11.u64;
	// lhz r9,6(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 6);
	// stw r9,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
	// lwz r10,-17560(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + -17560);
	// lwz r10,16(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r3,8(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821F3870) {
	__imp__sub_821F3870(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F38E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32052
	ctx.r11.s64 = -2100559872;
	// lwz r11,-17560(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17560);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// subfc r9,r10,r3
	ctx.xer.ca = ctx.r3.u32 >= ctx.r10.u32;
	ctx.r9.s64 = ctx.r3.s64 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r3,r7,31
	ctx.r3.u64 = ctx.r7.u32 & 0x1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821F38E8) {
	__imp__sub_821F38E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F3904) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821F3904) {
	__imp__sub_821F3904(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F3908) {
	PPC_FUNC_PROLOGUE();
	// b 0x82188d48
	sub_82188D48(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821F3908) {
	__imp__sub_821F3908(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F390C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821F390C) {
	__imp__sub_821F390C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F3910) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r3,r11
	ctx.r9.u64 = ctx.r3.u64 + ctx.r11.u64;
	// lwz r11,-17560(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -17560);
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821F3910) {
	__imp__sub_821F3910(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F3930) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r3,r11
	ctx.r9.u64 = ctx.r3.u64 + ctx.r11.u64;
	// lwz r11,-17560(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -17560);
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lhzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// bne cr6,0x821f395c
	if (!ctx.cr6.eq) goto loc_821F395C;
	// li r3,3
	ctx.r3.s64 = 3;
	// blr 
	return;
loc_821F395C:
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// lwz r10,-17552(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -17552);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// clrlwi r8,r9,16
	ctx.r8.u64 = ctx.r9.u32 & 0xFFFF;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x821f397c
	if (ctx.cr6.lt) goto loc_821F397C;
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
loc_821F397C:
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// li r9,-1
	ctx.r9.s64 = -1;
	// lwz r10,-17568(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -17568);
	// lwz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// clrlwi r7,r8,16
	ctx.r7.u64 = ctx.r8.u32 & 0xFFFF;
	// subfc r11,r7,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r7.u32;
	ctx.r11.s64 = ctx.r11.s64 - ctx.r7.s64;
	// subfze r3,r9
	temp.u8 = ~ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca;
	ctx.r3.u64 = ~ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821F3930) {
	__imp__sub_821F3930(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F399C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821F399C) {
	__imp__sub_821F399C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F39A0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r3,r11
	ctx.r9.u64 = ctx.r3.u64 + ctx.r11.u64;
	// lwz r11,-17560(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -17560);
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lhzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// beq cr6,0x821f39e0
	if (ctx.cr6.eq) goto loc_821F39E0;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// lwz r10,-17552(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -17552);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// clrlwi r8,r9,16
	ctx.r8.u64 = ctx.r9.u32 & 0xFFFF;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x821f39e4
	if (ctx.cr6.lt) goto loc_821F39E4;
loc_821F39E0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_821F39E4:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821F39A0) {
	__imp__sub_821F39A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F39EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821F39EC) {
	__imp__sub_821F39EC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F39F0) {
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
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f0,-10856(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -10856);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,15048(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 15048);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f13,f1,f0,f13
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f0.f64 + ctx.f13.f64));
	// lfs f0,2416(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2416);
	ctx.f0.f64 = double(temp.f32);
	// fadds f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// bl 0x823dde20
	ctx.lr = 0x821F3A20;
	sub_823DDE20(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f13,27440(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 27440);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x821f3a48
	if (ctx.cr6.lt) goto loc_821F3A48;
	// li r3,63
	ctx.r3.s64 = 63;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_821F3A48:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x821f3a6c
	if (!ctx.cr6.lt) goto loc_821F3A6C;
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
loc_821F3A6C:
	// fctidz f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lbz r3,87(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 87);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821F39F0) {
	__imp__sub_821F39F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F3A88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x821F3A90;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r8,-32052
	ctx.r8.s64 = -2100559872;
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r7,-32020
	ctx.r7.s64 = -2098462720;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r10,-17560(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + -17560);
	// add r5,r3,r11
	ctx.r5.u64 = ctx.r3.u64 + ctx.r11.u64;
	// addi r4,r7,9624
	ctx.r4.s64 = ctx.r7.s64 + 9624;
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r9,52(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// lwz r10,-17560(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + -17560);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lhzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// bne cr6,0x821f3aec
	if (!ctx.cr6.eq) goto loc_821F3AEC;
	// li r27,3
	ctx.r27.s64 = 3;
	// b 0x821f3c90
	goto loc_821F3C90;
loc_821F3AEC:
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// lwz r10,-17552(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -17552);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// clrlwi r8,r9,16
	ctx.r8.u64 = ctx.r9.u32 & 0xFFFF;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x821f3bc0
	if (ctx.cr6.lt) goto loc_821F3BC0;
	// lfs f0,4(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmuls f13,f0,f0
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f12,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// li r27,2
	ctx.r27.s64 = 2;
	// lfs f0,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f10,f12,f12,f13
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f13.f64));
	// fmadds f9,f11,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f10.f64));
	// fcmpu cr6,f9,f0
	ctx.cr6.compare(ctx.f9.f64, ctx.f0.f64);
	// ble cr6,0x821f3c7c
	if (!ctx.cr6.gt) goto loc_821F3C7C;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x822d4700
	ctx.lr = 0x821F3B38;
	sub_822D4700(ctx, base);
	// stb r3,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r3.u8);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82188d48
	ctx.lr = 0x821F3B48;
	sub_82188D48(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82188d80
	ctx.lr = 0x821F3B54;
	sub_82188D80(ctx, base);
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f9,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f9.f64 = double(temp.f32);
	// lfs f11,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f10.f64 = double(temp.f32);
	// lfs f7,124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f8,f11,f10
	ctx.f8.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lfs f6,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f3,f6,f5
	ctx.f3.f64 = double(float(ctx.f6.f64 - ctx.f5.f64));
	// lfs f2,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f13,f12,f9
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f9.f64));
	// fmuls f12,f7,f12
	ctx.f12.f64 = double(float(ctx.f7.f64 * ctx.f12.f64));
	// lfs f0,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f11,f4,f8,f13
	ctx.f11.f64 = double(float(ctx.f4.f64 * ctx.f8.f64 + ctx.f13.f64));
	// fmadds f10,f2,f8,f12
	ctx.f10.f64 = double(float(ctx.f2.f64 * ctx.f8.f64 + ctx.f12.f64));
	// fmadds f1,f1,f3,f11
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f3.f64 + ctx.f11.f64));
	// fmadds f31,f0,f3,f10
	ctx.f31.f64 = double(float(ctx.f0.f64 * ctx.f3.f64 + ctx.f10.f64));
	// bl 0x821f39f0
	ctx.lr = 0x821F3BAC;
	sub_821F39F0(ctx, base);
	// stb r3,9(r31)
	PPC_STORE_U8(ctx.r31.u32 + 9, ctx.r3.u8);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x821f39f0
	ctx.lr = 0x821F3BB8;
	sub_821F39F0(ctx, base);
	// stb r3,10(r31)
	PPC_STORE_U8(ctx.r31.u32 + 10, ctx.r3.u8);
	// b 0x821f3c90
	goto loc_821F3C90;
loc_821F3BC0:
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// lwz r10,-17568(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -17568);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// clrlwi r8,r9,16
	ctx.r8.u64 = ctx.r9.u32 & 0xFFFF;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x821f3c20
	if (ctx.cr6.lt) goto loc_821F3C20;
	// li r27,1
	ctx.r27.s64 = 1;
	// bl 0x8222fe20
	ctx.lr = 0x821F3BE0;
	sub_8222FE20(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,6032(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6032);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x821f3c28
	if (!ctx.cr6.lt) goto loc_821F3C28;
	// bl 0x8222fe20
	ctx.lr = 0x821F3BF4;
	sub_8222FE20(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r10,100
	ctx.r10.s64 = 100;
	// lfs f0,-10848(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -10848);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// subfic r8,r9,3000
	ctx.xer.ca = ctx.r9.u32 <= 3000;
	ctx.r8.s64 = 3000 - ctx.r9.s64;
	// divw r7,r8,r10
	ctx.r7.s32 = ctx.r8.s32 / ctx.r10.s32;
	// sth r7,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r7.u16);
	// b 0x821f3c90
	goto loc_821F3C90;
loc_821F3C20:
	// li r27,0
	ctx.r27.s64 = 0;
	// b 0x821f3c90
	goto loc_821F3C90;
loc_821F3C28:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,7036(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7036);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x821f3c70
	if (!ctx.cr6.lt) goto loc_821F3C70;
	// bl 0x8222fe20
	ctx.lr = 0x821F3C3C;
	sub_8222FE20(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,0
	ctx.r10.s64 = 0;
	// li r9,100
	ctx.r9.s64 = 100;
	// ori r8,r10,60000
	ctx.r8.u64 = ctx.r10.u64 | 60000;
	// lfs f0,-10852(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -10852);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// subf r6,r7,r8
	ctx.r6.s64 = ctx.r8.s64 - ctx.r7.s64;
	// divw r5,r6,r9
	ctx.r5.s32 = ctx.r6.s32 / ctx.r9.s32;
	// sth r5,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r5.u16);
	// b 0x821f3c90
	goto loc_821F3C90;
loc_821F3C70:
	// li r11,0
	ctx.r11.s64 = 0;
	// sth r11,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r11.u16);
	// b 0x821f3c90
	goto loc_821F3C90;
loc_821F3C7C:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,255
	ctx.r10.s64 = 255;
	// stb r11,9(r31)
	PPC_STORE_U8(ctx.r31.u32 + 9, ctx.r11.u8);
	// stb r10,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r10.u8);
	// stb r11,10(r31)
	PPC_STORE_U8(ctx.r31.u32 + 10, ctx.r11.u8);
loc_821F3C90:
	// cmpwi cr6,r28,2
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 2, ctx.xer);
	// bge cr6,0x821f3cbc
	if (!ctx.cr6.lt) goto loc_821F3CBC;
	// cmpwi cr6,r27,2
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 2, ctx.xer);
	// blt cr6,0x821f3cbc
	if (ctx.cr6.lt) goto loc_821F3CBC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822acbf8
	ctx.lr = 0x821F3CA8;
	sub_822ACBF8(ctx, base);
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r10,r11,-25976
	ctx.r10.s64 = ctx.r11.s64 + -25976;
	// lhz r3,94(r10)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r10.u32 + 94);
	// bl 0x822ac478
	ctx.lr = 0x821F3CBC;
	sub_822AC478(ctx, base);
loc_821F3CBC:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821F3A88) {
	__imp__sub_821F3A88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F3CC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x821F3CD0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r8,-32052
	ctx.r8.s64 = -2100559872;
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// li r29,-1
	ctx.r29.s64 = -1;
	// add r10,r3,r11
	ctx.r10.u64 = ctx.r3.u64 + ctx.r11.u64;
	// lis r31,-32052
	ctx.r31.s64 = -2100559872;
	// lwz r11,-17560(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -17560);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r30,-32052
	ctx.r30.s64 = -2100559872;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,65535
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65535, ctx.xer);
	// bne cr6,0x821f3d10
	if (!ctx.cr6.eq) goto loc_821F3D10;
	// li r7,3
	ctx.r7.s64 = 3;
	// b 0x821f3d40
	goto loc_821F3D40;
loc_821F3D10:
	// lwz r7,-17552(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + -17552);
	// lwz r7,12(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// clrlwi r7,r7,16
	ctx.r7.u64 = ctx.r7.u32 & 0xFFFF;
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x821f3d2c
	if (ctx.cr6.lt) goto loc_821F3D2C;
	// li r7,2
	ctx.r7.s64 = 2;
	// b 0x821f3d40
	goto loc_821F3D40;
loc_821F3D2C:
	// lwz r7,-17568(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -17568);
	// lwz r7,12(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// clrlwi r7,r7,16
	ctx.r7.u64 = ctx.r7.u32 & 0xFFFF;
	// subfc r10,r7,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r7.u32;
	ctx.r10.s64 = ctx.r10.s64 - ctx.r7.s64;
	// subfze r7,r29
	temp.u8 = ~ctx.r29.u32 + ctx.xer.ca < ctx.xer.ca;
	ctx.r7.u64 = ~ctx.r29.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_821F3D40:
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// cmplwi cr6,r10,65534
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65534, ctx.xer);
	// ble cr6,0x821f3d54
	if (!ctx.cr6.gt) goto loc_821F3D54;
	// li r10,-2
	ctx.r10.s64 = -2;
loc_821F3D54:
	// sth r10,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r10.u16);
	// lwz r11,-17560(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -17560);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lhzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r9.u32);
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// bne cr6,0x821f3d74
	if (!ctx.cr6.eq) goto loc_821F3D74;
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x821f3da4
	goto loc_821F3DA4;
loc_821F3D74:
	// lwz r10,-17552(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + -17552);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// clrlwi r9,r10,16
	ctx.r9.u64 = ctx.r10.u32 & 0xFFFF;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x821f3d90
	if (ctx.cr6.lt) goto loc_821F3D90;
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x821f3da4
	goto loc_821F3DA4;
loc_821F3D90:
	// lwz r10,-17568(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -17568);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// clrlwi r9,r10,16
	ctx.r9.u64 = ctx.r10.u32 & 0xFFFF;
	// subfc r11,r9,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r9.u32;
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// subfze r11,r29
	temp.u8 = ~ctx.r29.u32 + ctx.xer.ca < ctx.xer.ca;
	ctx.r11.u64 = ~ctx.r29.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_821F3DA4:
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// beq cr6,0x821f3db4
	if (ctx.cr6.eq) goto loc_821F3DB4;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// bl 0x821f3a88
	ctx.lr = 0x821F3DB4;
	sub_821F3A88(ctx, base);
loc_821F3DB4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821F3CC8) {
	__imp__sub_821F3CC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F3DBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821F3DBC) {
	__imp__sub_821F3DBC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F3DC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// add r9,r3,r11
	ctx.r9.u64 = ctx.r3.u64 + ctx.r11.u64;
	// lwz r11,-17560(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -17560);
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,65535
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65535, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r9,-32052
	ctx.r9.s64 = -2100559872;
	// lwz r9,-17552(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17552);
	// lwz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// clrlwi r8,r8,16
	ctx.r8.u64 = ctx.r8.u32 & 0xFFFF;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// lis r9,-32052
	ctx.r9.s64 = -2100559872;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r7,-1
	ctx.r7.s64 = -1;
	// lwz r9,-17568(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17568);
	// lwz r4,12(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// sth r8,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r8.u16);
	// clrlwi r11,r4,16
	ctx.r11.u64 = ctx.r4.u32 & 0xFFFF;
	// subfc r11,r11,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r11.u32;
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// subfze r4,r7
	temp.u8 = ~ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca;
	ctx.r4.u64 = ~ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// b 0x821f3a88
	sub_821F3A88(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821F3DC0) {
	__imp__sub_821F3DC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F3E2C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821F3E2C) {
	__imp__sub_821F3E2C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F3E30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r3,r11
	ctx.r9.u64 = ctx.r3.u64 + ctx.r11.u64;
	// lwz r11,-17560(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -17560);
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lhz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r9,-32052
	ctx.r9.s64 = -2100559872;
	// lwz r9,-17552(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17552);
	// lwz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// clrlwi r7,r8,16
	ctx.r7.u64 = ctx.r8.u32 & 0xFFFF;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x821f3e78
	if (ctx.cr6.lt) goto loc_821F3E78;
	// li r4,2
	ctx.r4.s64 = 2;
	// b 0x821f3e94
	goto loc_821F3E94;
loc_821F3E78:
	// lis r9,-32052
	ctx.r9.s64 = -2100559872;
	// li r8,-1
	ctx.r8.s64 = -1;
	// lwz r9,-17568(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17568);
	// lwz r7,12(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// clrlwi r6,r7,16
	ctx.r6.u64 = ctx.r7.u32 & 0xFFFF;
	// subfc r11,r6,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r6.u32;
	ctx.r11.s64 = ctx.r11.s64 - ctx.r6.s64;
	// subfze r4,r8
	temp.u8 = ~ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca;
	ctx.r4.u64 = ~ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_821F3E94:
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// li r11,-1
	ctx.r11.s64 = -1;
	// addi r5,r9,-5928
	ctx.r5.s64 = ctx.r9.s64 + -5928;
	// sth r11,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r11.u16);
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// b 0x821f3a88
	sub_821F3A88(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821F3E30) {
	__imp__sub_821F3E30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F3EAC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821F3EAC) {
	__imp__sub_821F3EAC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F3EB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x821F3EB8;
	__savegprlr_25(ctx, base);
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x823de020
	ctx.lr = 0x821F3EC0;
	__savefpr_26(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// fmr f27,f2
	ctx.f27.f64 = ctx.f2.f64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// fmr f29,f3
	ctx.f29.f64 = ctx.f3.f64;
	// fmr f26,f4
	ctx.f26.f64 = ctx.f4.f64;
	// lfs f0,20476(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20476);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x821f3ef0
	if (!ctx.cr6.gt) goto loc_821F3EF0;
	// fmr f30,f0
	ctx.f30.f64 = ctx.f0.f64;
loc_821F3EF0:
	// lis r29,-32052
	ctx.r29.s64 = -2100559872;
	// fmuls f28,f30,f30
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = double(float(ctx.f30.f64 * ctx.f30.f64));
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r11,-17560(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -17560);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x821f4034
	if (!ctx.cr6.gt) goto loc_821F4034;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r30,0
	ctx.r30.s64 = 0;
	// lis r28,-32052
	ctx.r28.s64 = -2100559872;
	// lis r27,-32052
	ctx.r27.s64 = -2100559872;
	// lfs f31,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f31.f64 = double(temp.f32);
loc_821F3F20:
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82188d48
	ctx.lr = 0x821F3F2C;
	sub_82188D48(ctx, base);
	// lfs f13,108(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,4(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f12,8(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f13,f11,f12
	ctx.f13.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// lfs f10,0(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f12,f9,f10
	ctx.f12.f64 = double(float(ctx.f9.f64 - ctx.f10.f64));
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmuls f8,f0,f0
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f7,f13,f13,f8
	ctx.f7.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f8.f64));
	// fmadds f11,f12,f12,f7
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f7.f64));
	// fcmpu cr6,f11,f28
	ctx.cr6.compare(ctx.f11.f64, ctx.f28.f64);
	// bge cr6,0x821f401c
	if (!ctx.cr6.lt) goto loc_821F401C;
	// lwz r11,-17560(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -17560);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lhzx r11,r30,r11
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// beq cr6,0x821f401c
	if (ctx.cr6.eq) goto loc_821F401C;
	// lwz r10,-17552(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + -17552);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// clrlwi r9,r10,16
	ctx.r9.u64 = ctx.r10.u32 & 0xFFFF;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x821f401c
	if (!ctx.cr6.lt) goto loc_821F401C;
	// fsqrts f11,f11
	ctx.f11.f64 = double(float(sqrt(ctx.f11.f64)));
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// fdivs f10,f31,f11
	ctx.f10.f64 = double(float(ctx.f31.f64 / ctx.f11.f64));
	// fmuls f12,f10,f12
	ctx.f12.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmuls f0,f0,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// fmuls f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// beq cr6,0x821f3fe0
	if (ctx.cr6.eq) goto loc_821F3FE0;
	// lfs f10,0(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f10,f12
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// lfs f8,4(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,8(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f6,f8,f0,f9
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f0.f64 + ctx.f9.f64));
	// fmadds f5,f7,f13,f6
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f13.f64 + ctx.f6.f64));
	// fcmpu cr6,f5,f27
	ctx.cr6.compare(ctx.f5.f64, ctx.f27.f64);
	// blt cr6,0x821f401c
	if (ctx.cr6.lt) goto loc_821F401C;
loc_821F3FE0:
	// fsubs f0,f26,f29
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f26.f64 - ctx.f29.f64));
	// lwz r11,-17564(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -17564);
	// lfs f13,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f12,f0,f30
	ctx.f12.f64 = double(float(ctx.f0.f64 / ctx.f30.f64));
	// fmadds f11,f12,f11,f29
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f11.f64 + ctx.f29.f64));
	// fmuls f10,f11,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fctiwz f9,f10
	ctx.f9.s64 = (ctx.f10.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f9.u64);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x821f401c
	if (ctx.cr6.eq) goto loc_821F401C;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f3cc8
	ctx.lr = 0x821F401C;
	sub_821F3CC8(ctx, base);
loc_821F401C:
	// lwz r11,-17560(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -17560);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x821f3f20
	if (ctx.cr6.lt) goto loc_821F3F20;
loc_821F4034:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x823de06c
	ctx.lr = 0x821F4040;
	__restfpr_26(ctx, base);
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821F3EB0) {
	__imp__sub_821F3EB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F4044) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821F4044) {
	__imp__sub_821F4044(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F4048) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf68
	ctx.lr = 0x821F4050;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r27,-32052
	ctx.r27.s64 = -2100559872;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r7,-17560(r27)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r27.u32 + -17560);
	// lwz r11,4(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x821f4118
	if (!ctx.cr6.gt) goto loc_821F4118;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// li r26,0
	ctx.r26.s64 = 0;
	// li r28,-1
	ctx.r28.s64 = -1;
	// lis r29,-32052
	ctx.r29.s64 = -2100559872;
	// lis r24,-32052
	ctx.r24.s64 = -2100559872;
	// addi r31,r10,-5928
	ctx.r31.s64 = ctx.r10.s64 + -5928;
	// addi r25,r11,9624
	ctx.r25.s64 = ctx.r11.s64 + 9624;
loc_821F408C:
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// add r11,r26,r11
	ctx.r11.u64 = ctx.r26.u64 + ctx.r11.u64;
	// lhz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821f4104
	if (ctx.cr6.eq) goto loc_821F4104;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mulli r10,r10,100
	ctx.r10.s64 = ctx.r10.s64 * 100;
	// lwz r8,52(r25)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r25.u32 + 52);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmpw cr6,r6,r8
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x821f4104
	if (!ctx.cr6.lt) goto loc_821F4104;
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,65535
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 65535, ctx.xer);
	// beq cr6,0x821f4104
	if (ctx.cr6.eq) goto loc_821F4104;
	// lwz r10,-17552(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + -17552);
	// lwz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// clrlwi r8,r8,16
	ctx.r8.u64 = ctx.r8.u32 & 0xFFFF;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x821f4104
	if (!ctx.cr6.lt) goto loc_821F4104;
	// lwz r10,-17568(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + -17568);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// sth r8,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r8.u16);
	// clrlwi r8,r10,16
	ctx.r8.u64 = ctx.r10.u32 & 0xFFFF;
	// subfc r11,r8,r9
	ctx.xer.ca = ctx.r9.u32 >= ctx.r8.u32;
	ctx.r11.s64 = ctx.r9.s64 - ctx.r8.s64;
	// subfze r4,r28
	temp.u8 = ~ctx.r28.u32 + ctx.xer.ca < ctx.xer.ca;
	ctx.r4.u64 = ~ctx.r28.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// bl 0x821f3a88
	ctx.lr = 0x821F4100;
	sub_821F3A88(ctx, base);
	// lwz r7,-17560(r27)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r27.u32 + -17560);
loc_821F4104:
	// lwz r11,4(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r26,r26,12
	ctx.r26.s64 = ctx.r26.s64 + 12;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x821f408c
	if (ctx.cr6.lt) goto loc_821F408C;
loc_821F4118:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821F4048) {
	__imp__sub_821F4048(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F4120) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// lis r9,-32052
	ctx.r9.s64 = -2100559872;
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r3,r11
	ctx.r8.u64 = ctx.r3.u64 + ctx.r11.u64;
	// lwz r11,-17560(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -17560);
	// lwz r9,-17552(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17552);
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,12(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// lhzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r11.u32);
	// sthx r7,r10,r11
	PPC_STORE_U16(ctx.r10.u32 + ctx.r11.u32, ctx.r7.u16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821F4120) {
	__imp__sub_821F4120(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F4150) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r3,r11
	ctx.r9.u64 = ctx.r3.u64 + ctx.r11.u64;
	// lwz r11,-17560(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -17560);
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// sthx r4,r8,r7
	PPC_STORE_U16(ctx.r8.u32 + ctx.r7.u32, ctx.r4.u16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821F4150) {
	__imp__sub_821F4150(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F4170) {
	PPC_FUNC_PROLOGUE();
	// b 0x82287c60
	sub_82287C60(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821F4170) {
	__imp__sub_821F4170(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F4174) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821F4174) {
	__imp__sub_821F4174(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F4178) {
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
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r11,r11,1000
	ctx.r11.s64 = ctx.r11.s64 + 1000;
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x821f41ac
	if (!ctx.cr6.lt) goto loc_821F41AC;
	// li r11,255
	ctx.r11.s64 = 255;
	// stb r11,8(r4)
	PPC_STORE_U8(ctx.r4.u32 + 8, ctx.r11.u8);
loc_821F41AC:
	// lbz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// bne cr6,0x821f41c4
	if (!ctx.cr6.eq) goto loc_821F41C4;
	// bl 0x82287c60
	ctx.lr = 0x821F41C0;
	sub_82287C60(ctx, base);
	// b 0x821f41f4
	goto loc_821F41F4;
loc_821F41C4:
	// bl 0x82287cd0
	ctx.lr = 0x821F41C8;
	sub_82287CD0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lbz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 8);
	// bl 0x82287e08
	ctx.lr = 0x821F41D4;
	sub_82287E08(ctx, base);
	// li r5,6
	ctx.r5.s64 = 6;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lbz r4,9(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 9);
	// bl 0x82287d60
	ctx.lr = 0x821F41E4;
	sub_82287D60(ctx, base);
	// li r5,6
	ctx.r5.s64 = 6;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lbz r4,10(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 10);
	// bl 0x82287d60
	ctx.lr = 0x821F41F4;
	sub_82287D60(ctx, base);
loc_821F41F4:
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

PPC_WEAK_FUNC(sub_821F4178) {
	__imp__sub_821F4178(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F420C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821F420C) {
	__imp__sub_821F420C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F4210) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf60
	ctx.lr = 0x821F4218;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r25,-32052
	ctx.r25.s64 = -2100559872;
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r8,r11,9624
	ctx.r8.s64 = ctx.r11.s64 + 9624;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lwz r10,-17560(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + -17560);
	// li r31,0
	ctx.r31.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r24,52(r8)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r8.u32 + 52);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821f42bc
	if (ctx.cr6.eq) goto loc_821F42BC;
	// lis r23,-32052
	ctx.r23.s64 = -2100559872;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lis r22,-32052
	ctx.r22.s64 = -2100559872;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lwz r7,-17568(r23)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r23.u32 + -17568);
	// lwz r8,-17552(r22)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r22.u32 + -17552);
loc_821F4268:
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmpw cr6,r11,r26
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r26.s32, ctx.xer);
	// blt cr6,0x821f42a8
	if (ctx.cr6.lt) goto loc_821F42A8;
	// lhz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// beq cr6,0x821f42a0
	if (ctx.cr6.eq) goto loc_821F42A0;
	// lwz r6,12(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// clrlwi r5,r6,16
	ctx.r5.u64 = ctx.r6.u32 & 0xFFFF;
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// bge cr6,0x821f42a0
	if (!ctx.cr6.lt) goto loc_821F42A0;
	// lwz r6,12(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// clrlwi r5,r6,16
	ctx.r5.u64 = ctx.r6.u32 & 0xFFFF;
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x821f42a8
	if (ctx.cr6.lt) goto loc_821F42A8;
loc_821F42A0:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r29,r9,1
	ctx.r29.s64 = ctx.r9.s64 + 1;
loc_821F42A8:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// bdnz 0x821f4268
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821F4268;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x821f42cc
	if (!ctx.cr6.eq) goto loc_821F42CC;
loc_821F42BC:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82287c60
	ctx.lr = 0x821F42C4;
	sub_82287C60(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823ddfb0
	__restgprlr_22(ctx, base);
	return;
loc_821F42CC:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82287cd0
	ctx.lr = 0x821F42D4;
	sub_82287CD0(ctx, base);
	// rlwinm r11,r29,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r31,1
	ctx.r10.s64 = ctx.r31.s64 + 1;
	// addi r9,r11,11
	ctx.r9.s64 = ctx.r11.s64 + 11;
	// mulli r8,r10,13
	ctx.r8.s64 = ctx.r10.s64 * 13;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bge cr6,0x821f43d0
	if (!ctx.cr6.lt) goto loc_821F43D0;
	// bl 0x82287cd0
	ctx.lr = 0x821F42F4;
	sub_82287CD0(ctx, base);
	// lwz r11,-17560(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -17560);
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x821f43b8
	if (!ctx.cr6.gt) goto loc_821F43B8;
	// li r29,0
	ctx.r29.s64 = 0;
loc_821F430C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// add r30,r29,r10
	ctx.r30.u64 = ctx.r29.u64 + ctx.r10.u64;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpw cr6,r10,r26
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r26.s32, ctx.xer);
	// blt cr6,0x821f43a4
	if (ctx.cr6.lt) goto loc_821F43A4;
	// lhz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// cmplwi cr6,r10,65535
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65535, ctx.xer);
	// bne cr6,0x821f4334
	if (!ctx.cr6.eq) goto loc_821F4334;
	// li r31,3
	ctx.r31.s64 = 3;
	// b 0x821f4368
	goto loc_821F4368;
loc_821F4334:
	// lwz r9,-17552(r22)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r22.u32 + -17552);
	// lwz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// clrlwi r7,r8,16
	ctx.r7.u64 = ctx.r8.u32 & 0xFFFF;
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x821f4350
	if (ctx.cr6.lt) goto loc_821F4350;
	// li r31,2
	ctx.r31.s64 = 2;
	// b 0x821f4368
	goto loc_821F4368;
loc_821F4350:
	// lwz r9,-17568(r23)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r23.u32 + -17568);
	// lwz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// clrlwi r7,r8,16
	ctx.r7.u64 = ctx.r8.u32 & 0xFFFF;
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x821f43a4
	if (ctx.cr6.lt) goto loc_821F43A4;
	// li r31,1
	ctx.r31.s64 = 1;
loc_821F4368:
	// li r5,11
	ctx.r5.s64 = 11;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82287d60
	ctx.lr = 0x821F4378;
	sub_82287D60(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82287d60
	ctx.lr = 0x821F4388;
	sub_82287D60(ctx, base);
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// bne cr6,0x821f43a0
	if (!ctx.cr6.eq) goto loc_821F43A0;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821f4178
	ctx.lr = 0x821F43A0;
	sub_821F4178(ctx, base);
loc_821F43A0:
	// lwz r11,-17560(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -17560);
loc_821F43A4:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,12
	ctx.r29.s64 = ctx.r29.s64 + 12;
	// cmplw cr6,r28,r10
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x821f430c
	if (ctx.cr6.lt) goto loc_821F430C;
loc_821F43B8:
	// li r5,11
	ctx.r5.s64 = 11;
	// li r4,1024
	ctx.r4.s64 = 1024;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82287d60
	ctx.lr = 0x821F43C8;
	sub_82287D60(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823ddfb0
	__restgprlr_22(ctx, base);
	return;
loc_821F43D0:
	// bl 0x82287c60
	ctx.lr = 0x821F43D4;
	sub_82287C60(ctx, base);
	// li r5,11
	ctx.r5.s64 = 11;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82287d60
	ctx.lr = 0x821F43E4;
	sub_82287D60(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x821f447c
	if (ctx.cr6.eq) goto loc_821F447C;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r28,-1
	ctx.r28.s64 = -1;
loc_821F43F4:
	// lwz r11,-17560(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -17560);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lhzx r11,r30,r11
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// bne cr6,0x821f4410
	if (!ctx.cr6.eq) goto loc_821F4410;
	// li r31,3
	ctx.r31.s64 = 3;
	// b 0x821f4440
	goto loc_821F4440;
loc_821F4410:
	// lwz r10,-17552(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + -17552);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// clrlwi r9,r10,16
	ctx.r9.u64 = ctx.r10.u32 & 0xFFFF;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x821f442c
	if (ctx.cr6.lt) goto loc_821F442C;
	// li r31,2
	ctx.r31.s64 = 2;
	// b 0x821f4440
	goto loc_821F4440;
loc_821F442C:
	// lwz r10,-17568(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + -17568);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// clrlwi r9,r10,16
	ctx.r9.u64 = ctx.r10.u32 & 0xFFFF;
	// subfc r11,r9,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r9.u32;
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// subfze r31,r28
	temp.u8 = ~ctx.r28.u32 + ctx.xer.ca < ctx.xer.ca;
	ctx.r31.u64 = ~ctx.r28.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_821F4440:
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82287d60
	ctx.lr = 0x821F4450;
	sub_82287D60(ctx, base);
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// bne cr6,0x821f4470
	if (!ctx.cr6.eq) goto loc_821F4470;
	// lwz r11,-17560(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -17560);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// add r4,r30,r11
	ctx.r4.u64 = ctx.r30.u64 + ctx.r11.u64;
	// bl 0x821f4178
	ctx.lr = 0x821F4470;
	sub_821F4178(ctx, base);
loc_821F4470:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// bne 0x821f43f4
	if (!ctx.cr0.eq) goto loc_821F43F4;
loc_821F447C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823ddfb0
	__restgprlr_22(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821F4210) {
	__imp__sub_821F4210(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F4484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821F4484) {
	__imp__sub_821F4484(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F4488) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32052
	ctx.r11.s64 = -2100559872;
	// lwz r10,-17560(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17560);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// b 0x822e40f0
	sub_822E40F0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821F4488) {
	__imp__sub_821F4488(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F44B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821F44B0) {
	__imp__sub_821F44B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F44B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821F44B4) {
	__imp__sub_821F44B4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F44B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32052
	ctx.r11.s64 = -2100559872;
	// lwz r10,-17560(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17560);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// b 0x822e4480
	sub_822E4480(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821F44B8) {
	__imp__sub_821F44B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F44E0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821F44E0) {
	__imp__sub_821F44E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F44E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821F44E4) {
	__imp__sub_821F44E4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F44E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f13,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lfs f12,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lfs f10,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f13,f0
	ctx.f9.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f8,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// li r8,16
	ctx.r8.s64 = 16;
	// lfs f7,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fadds f6,f12,f8
	ctx.f6.f64 = double(float(ctx.f12.f64 + ctx.f8.f64));
	// fadds f5,f10,f7
	ctx.f5.f64 = double(float(ctx.f10.f64 + ctx.f7.f64));
	// stfs f11,80(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fsubs f4,f12,f8
	ctx.f4.f64 = double(float(ctx.f12.f64 - ctx.f8.f64));
	// stfs f9,96(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fsubs f3,f10,f7
	ctx.f3.f64 = double(float(ctx.f10.f64 - ctx.f7.f64));
	// stfs f6,84(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f5,88(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r6,r11,-9672
	ctx.r6.s64 = ctx.r11.s64 + -9672;
	// stfs f4,100(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// li r7,2047
	ctx.r7.s64 = 2047;
	// stfs f3,104(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x821fe618
	ctx.lr = 0x821F4564;
	sub_821FE618(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f2,144(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f2.f64 = double(temp.f32);
	// lfs f0,12168(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f2,f0
	ctx.cr6.compare(ctx.f2.f64, ctx.f0.f64);
	// beq cr6,0x821f4628
	if (ctx.cr6.eq) goto loc_821F4628;
	// lwz r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// lis r10,144
	ctx.r10.s64 = 9437184;
	// rlwinm r9,r11,0,7,11
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1F00000;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x821f4628
	if (!ctx.cr6.eq) goto loc_821F4628;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82276090
	ctx.lr = 0x821F4594;
	sub_82276090(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r11,2046
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2046, ctx.xer);
	// blt cr6,0x821f4628
	if (ctx.cr6.lt) goto loc_821F4628;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82276118
	ctx.lr = 0x821F45A8;
	sub_82276118(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821f4628
	if (ctx.cr6.eq) goto loc_821F4628;
	// lfs f12,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// lfs f10,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f10.f64 = double(temp.f32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f7,f10,f12
	ctx.f7.f64 = double(float(ctx.f10.f64 - ctx.f12.f64));
	// lfs f11,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f11.f64 = double(temp.f32);
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// lfs f0,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// lfs f8,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f9,f0,f13
	ctx.f9.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fsubs f6,f8,f11
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f11.f64));
	// lfs f0,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f0.f64 = double(temp.f32);
	// lfs f5,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// fneg f3,f5
	ctx.f3.u64 = ctx.f5.u64 ^ 0x8000000000000000;
	// lfs f2,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// fneg f1,f4
	ctx.f1.u64 = ctx.f4.u64 ^ 0x8000000000000000;
	// fneg f10,f2
	ctx.f10.u64 = ctx.f2.u64 ^ 0x8000000000000000;
	// stfs f3,112(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f1,116(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fmadds f8,f7,f0,f12
	ctx.f8.f64 = double(float(ctx.f7.f64 * ctx.f0.f64 + ctx.f12.f64));
	// stfs f10,120(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f8,132(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// fmadds f9,f9,f0,f13
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f0.f64 + ctx.f13.f64));
	// stfs f9,128(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fmadds f7,f6,f0,f11
	ctx.f7.f64 = double(float(ctx.f6.f64 * ctx.f0.f64 + ctx.f11.f64));
	// stfs f7,136(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// bl 0x821f3dc0
	ctx.lr = 0x821F4628;
	sub_821F3DC0(ctx, base);
loc_821F4628:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821F44E8) {
	__imp__sub_821F44E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821F463C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821F463C) {
	__imp__sub_821F463C(ctx, base);
}

