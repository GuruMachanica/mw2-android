#include "ppc_recomp_shared.h"

PPC_FUNC_IMPL(__imp__sub_82126038) {
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
	ctx.lr = 0x8212604C;
	sub_8212FA08(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8212605c
	if (ctx.cr6.eq) goto loc_8212605C;
	// bl 0x82125f30
	ctx.lr = 0x8212605C;
	sub_82125F30(ctx, base);
loc_8212605C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82126038) {
	__imp__sub_82126038(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8212606C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8212606C) {
	__imp__sub_8212606C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82126070) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf68
	ctx.lr = 0x82126078;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// bl 0x8212fa08
	ctx.lr = 0x82126088;
	sub_8212FA08(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821264e0
	if (ctx.cr6.eq) goto loc_821264E0;
	// bl 0x8228bcc0
	ctx.lr = 0x82126098;
	sub_8228BCC0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821264e0
	if (ctx.cr6.eq) goto loc_821264E0;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r5,r11,-10524
	ctx.r5.s64 = ctx.r11.s64 + -10524;
	// addi r4,r10,-10528
	ctx.r4.s64 = ctx.r10.s64 + -10528;
	// addi r3,r9,-10540
	ctx.r3.s64 = ctx.r9.s64 + -10540;
	// bl 0x822e84f0
	ctx.lr = 0x821260C0;
	sub_822E84F0(ctx, base);
	// lis r8,-32165
	ctx.r8.s64 = -2107965440;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r7,r8,28832
	ctx.r7.s64 = ctx.r8.s64 + 28832;
	// lwz r3,384(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 384);
	// bl 0x8238b698
	ctx.lr = 0x821260D4;
	sub_8238B698(ctx, base);
	// extsw r6,r3
	ctx.r6.s64 = ctx.r3.s32;
	// lis r11,-32167
	ctx.r11.s64 = -2108096512;
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lis r5,1
	ctx.r5.s64 = 65536;
	// lis r4,1
	ctx.r4.s64 = 65536;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// addi r31,r11,-8976
	ctx.r31.s64 = ctx.r11.s64 + -8976;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// ori r11,r5,592
	ctx.r11.u64 = ctx.r5.u64 | 592;
	// ori r9,r4,596
	ctx.r9.u64 = ctx.r4.u64 | 596;
	// lis r8,-32167
	ctx.r8.s64 = -2108096512;
	// stfs f12,-1432(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + -1432, temp.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,-11980(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -11980);
	ctx.f0.f64 = double(temp.f32);
	// addi r26,r10,-11980
	ctx.r26.s64 = ctx.r10.s64 + -11980;
	// lfsx f13,r31,r11
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// lfsx f12,r31,r9
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	ctx.f12.f64 = double(temp.f32);
	// fadds f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// fadds f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// stfs f13,-1444(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + -1444, temp.u32);
	// stfs f0,-1440(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + -1440, temp.u32);
	// lwz r11,-10964(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -10964);
	// stfs f13,-1436(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + -1436, temp.u32);
	// addi r4,r11,12
	ctx.r4.s64 = ctx.r11.s64 + 12;
	// bl 0x82124318
	ctx.lr = 0x82126140;
	sub_82124318(ctx, base);
	// addi r4,r26,-124
	ctx.r4.s64 = ctx.r26.s64 + -124;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821240e8
	ctx.lr = 0x8212614C;
	sub_821240E8(ctx, base);
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lfs f13,0(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lis r6,-32165
	ctx.r6.s64 = -2107965440;
	// ori r5,r7,600
	ctx.r5.u64 = ctx.r7.u64 | 600;
	// addi r4,r6,-32488
	ctx.r4.s64 = ctx.r6.s64 + -32488;
	// lfsx f0,r31,r5
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r5.u32);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f0,-1444(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -1444);
	ctx.f0.f64 = double(temp.f32);
	// lwz r30,-1452(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + -1452);
	// fsubs f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// stfs f0,-1436(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + -1436, temp.u32);
	// fctiwz f10,f11
	ctx.f10.s64 = (ctx.f11.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f10.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r11.u32);
	// bl 0x82123e48
	ctx.lr = 0x8212618C;
	sub_82123E48(ctx, base);
	// stw r3,-1456(r31)
	PPC_STORE_U32(ctx.r31.u32 + -1456, ctx.r3.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82126194:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82126194
	if (!ctx.cr6.eq) goto loc_82126194;
	// subf r10,r3,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r3.s64;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stb r11,-1528(r31)
	PPC_STORE_U8(ctx.r31.u32 + -1528, ctx.r11.u8);
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r11,-1452(r31)
	PPC_STORE_U32(ctx.r31.u32 + -1452, ctx.r11.u32);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x821261d0
	if (ctx.cr6.eq) goto loc_821261D0;
	// bl 0x82125420
	ctx.lr = 0x821261C8;
	sub_82125420(ctx, base);
	// lwz r11,-1452(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -1452);
	// lwz r3,-1456(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -1456);
loc_821261D0:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821261f4
	if (!ctx.cr6.eq) goto loc_821261F4;
loc_821261D8:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// stb r11,-1447(r31)
	PPC_STORE_U8(ctx.r31.u32 + -1447, ctx.r11.u8);
	// bl 0x821251d8
	ctx.lr = 0x821261E8;
	sub_821251D8(ctx, base);
	// bl 0x8227d8f0
	ctx.lr = 0x821261EC;
	sub_8227D8F0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
loc_821261F4:
	// lis r11,-31937
	ctx.r11.s64 = -2093023232;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// addi r30,r11,-17592
	ctx.r30.s64 = ctx.r11.s64 + -17592;
	// addi r10,r30,68
	ctx.r10.s64 = ctx.r30.s64 + 68;
	// lwz r9,-17592(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17592);
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r8,r10
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// cmpwi cr6,r7,1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1, ctx.xer);
	// ble cr6,0x8212622c
	if (!ctx.cr6.gt) goto loc_8212622C;
	// bl 0x82125260
	ctx.lr = 0x8212621C;
	sub_82125260(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82126230
	if (!ctx.cr6.eq) goto loc_82126230;
loc_8212622C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82126230:
	// clrlwi r28,r11,24
	ctx.r28.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8212629c
	if (ctx.cr6.eq) goto loc_8212629C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r10,r30,68
	ctx.r10.s64 = ctx.r30.s64 + 68;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// ble cr6,0x82126264
	if (!ctx.cr6.gt) goto loc_82126264;
	// addi r10,r30,100
	ctx.r10.s64 = ctx.r30.s64 + 100;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x8212626c
	goto loc_8212626C;
loc_82126264:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r11,r11,-28736
	ctx.r11.s64 = ctx.r11.s64 + -28736;
loc_8212626C:
	// stw r11,-1456(r31)
	PPC_STORE_U32(ctx.r31.u32 + -1456, ctx.r11.u32);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82126274:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82126274
	if (!ctx.cr6.eq) goto loc_82126274;
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r11,-1452(r31)
	PPC_STORE_U32(ctx.r31.u32 + -1452, ctx.r11.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821261d8
	if (ctx.cr6.eq) goto loc_821261D8;
loc_8212629C:
	// lis r11,-32167
	ctx.r11.s64 = -2108096512;
	// lis r27,-32191
	ctx.r27.s64 = -2109669376;
	// lwz r11,-10004(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -10004);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stb r11,-1448(r31)
	PPC_STORE_U8(ctx.r31.u32 + -1448, ctx.r11.u8);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,-1460(r31)
	PPC_STORE_U32(ctx.r31.u32 + -1460, ctx.r10.u32);
	// bne cr6,0x821262dc
	if (!ctx.cr6.eq) goto loc_821262DC;
	// lis r8,-32167
	ctx.r8.s64 = -2108096512;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r7,-32238
	ctx.r7.s64 = -2112749568;
	// addi r3,r7,18320
	ctx.r3.s64 = ctx.r7.s64 + 18320;
	// stb r9,-9536(r8)
	PPC_STORE_U8(ctx.r8.u32 + -9536, ctx.r9.u8);
	// b 0x82126374
	goto loc_82126374;
loc_821262DC:
	// lis r29,-32167
	ctx.r29.s64 = -2108096512;
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// addi r3,r10,18320
	ctx.r3.s64 = ctx.r10.s64 + 18320;
	// stb r11,-9536(r29)
	PPC_STORE_U8(ctx.r29.u32 + -9536, ctx.r11.u8);
	// bl 0x822e33f0
	ctx.lr = 0x821262F4;
	sub_822E33F0(ctx, base);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x82126308
	if (!ctx.cr6.eq) goto loc_82126308;
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// addi r3,r11,18320
	ctx.r3.s64 = ctx.r11.s64 + 18320;
	// bl 0x8227db30
	ctx.lr = 0x82126308;
	sub_8227DB30(ctx, base);
loc_82126308:
	// lwz r30,-1460(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + -1460);
	// lwz r11,1352(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1352);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x82126390
	if (!ctx.cr6.gt) goto loc_82126390;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stb r11,-1448(r31)
	PPC_STORE_U8(ctx.r31.u32 + -1448, ctx.r11.u8);
	// stw r10,-1460(r31)
	PPC_STORE_U32(ctx.r31.u32 + -1460, ctx.r10.u32);
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// stb r9,-9536(r29)
	PPC_STORE_U8(ctx.r29.u32 + -9536, ctx.r9.u8);
	// addi r3,r11,18320
	ctx.r3.s64 = ctx.r11.s64 + 18320;
	// bl 0x822e33f0
	ctx.lr = 0x8212633C;
	sub_822E33F0(ctx, base);
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// addi r3,r10,18320
	ctx.r3.s64 = ctx.r10.s64 + 18320;
	// bl 0x8227db30
	ctx.lr = 0x82126348;
	sub_8227DB30(ctx, base);
	// lwz r30,-1460(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + -1460);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x821263ac
	if (!ctx.cr6.eq) goto loc_821263AC;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r11,-1448(r31)
	PPC_STORE_U8(ctx.r31.u32 + -1448, ctx.r11.u8);
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// stw r10,-1460(r31)
	PPC_STORE_U32(ctx.r31.u32 + -1460, ctx.r10.u32);
	// stb r9,-9536(r29)
	PPC_STORE_U8(ctx.r29.u32 + -9536, ctx.r9.u8);
	// addi r3,r11,18320
	ctx.r3.s64 = ctx.r11.s64 + 18320;
loc_82126374:
	// bl 0x822e33f0
	ctx.lr = 0x82126378;
	sub_822E33F0(ctx, base);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x8212638c
	if (!ctx.cr6.eq) goto loc_8212638C;
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// addi r3,r11,18320
	ctx.r3.s64 = ctx.r11.s64 + 18320;
	// bl 0x8227db30
	ctx.lr = 0x8212638C;
	sub_8227DB30(ctx, base);
loc_8212638C:
	// lwz r30,-1460(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + -1460);
loc_82126390:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x821263ac
	if (!ctx.cr6.eq) goto loc_821263AC;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x821251d8
	ctx.lr = 0x821263A0;
	sub_821251D8(ctx, base);
	// bl 0x8227d8f0
	ctx.lr = 0x821263A4;
	sub_8227D8F0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
loc_821263AC:
	// lwz r11,-1464(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -1464);
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, ctx.xer);
	// bge cr6,0x821263c4
	if (!ctx.cr6.lt) goto loc_821263C4;
	// lbz r10,-1528(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + -1528);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8212643c
	if (!ctx.cr6.eq) goto loc_8212643C;
loc_821263C4:
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,-1464(r31)
	PPC_STORE_U32(ctx.r31.u32 + -1464, ctx.r11.u32);
loc_821263CC:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x821251d8
	ctx.lr = 0x821263D4;
	sub_821251D8(ctx, base);
loc_821263D4:
	// lfs f13,-1440(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -1440);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,1352(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1352);
	// lfs f0,-1432(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -1432);
	ctx.f0.f64 = double(temp.f32);
	// fadds f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lfs f12,-1436(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -1436);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,-1444(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + -1444, temp.u32);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f0,-1440(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + -1440, temp.u32);
	// ble cr6,0x82126458
	if (!ctx.cr6.gt) goto loc_82126458;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r11,-10616
	ctx.r3.s64 = ctx.r11.s64 + -10616;
	// bl 0x822e84f0
	ctx.lr = 0x8212640C;
	sub_822E84F0(ctx, base);
	// lis r10,-32166
	ctx.r10.s64 = -2108030976;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,28712(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28712);
	// addi r4,r11,12
	ctx.r4.s64 = ctx.r11.s64 + 12;
	// bl 0x82124318
	ctx.lr = 0x82126424;
	sub_82124318(ctx, base);
	// addi r4,r26,-88
	ctx.r4.s64 = ctx.r26.s64 + -88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82123fb8
	ctx.lr = 0x82126430;
	sub_82123FB8(ctx, base);
	// bl 0x8227d8f0
	ctx.lr = 0x82126434;
	sub_8227D8F0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
loc_8212643C:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x821263cc
	if (ctx.cr6.lt) goto loc_821263CC;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82125148
	ctx.lr = 0x82126454;
	sub_82125148(ctx, base);
	// b 0x821263d4
	goto loc_821263D4;
loc_82126458:
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// beq cr6,0x821264bc
	if (ctx.cr6.eq) goto loc_821264BC;
	// lbz r11,-1448(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + -1448);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8212647c
	if (ctx.cr6.eq) goto loc_8212647C;
	// bl 0x82123f00
	ctx.lr = 0x82126470;
	sub_82123F00(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821264bc
	if (!ctx.cr6.eq) goto loc_821264BC;
loc_8212647C:
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,28712(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28712);
	// addi r4,r11,12
	ctx.r4.s64 = ctx.r11.s64 + 12;
	// bl 0x82124318
	ctx.lr = 0x82126490;
	sub_82124318(ctx, base);
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// addi r3,r10,18472
	ctx.r3.s64 = ctx.r10.s64 + 18472;
	// bl 0x822e33f0
	ctx.lr = 0x8212649C;
	sub_822E33F0(ctx, base);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x821264dc
	if (!ctx.cr6.eq) goto loc_821264DC;
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// addi r3,r11,20688
	ctx.r3.s64 = ctx.r11.s64 + 20688;
	// bl 0x8227db30
	ctx.lr = 0x821264B0;
	sub_8227DB30(ctx, base);
	// bl 0x8227d8f0
	ctx.lr = 0x821264B4;
	sub_8227D8F0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
loc_821264BC:
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// addi r3,r11,19752
	ctx.r3.s64 = ctx.r11.s64 + 19752;
	// bl 0x822e33f0
	ctx.lr = 0x821264C8;
	sub_822E33F0(ctx, base);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x821264dc
	if (!ctx.cr6.eq) goto loc_821264DC;
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// addi r3,r11,20520
	ctx.r3.s64 = ctx.r11.s64 + 20520;
	// bl 0x8227db30
	ctx.lr = 0x821264DC;
	sub_8227DB30(ctx, base);
loc_821264DC:
	// bl 0x8227d8f0
	ctx.lr = 0x821264E0;
	sub_8227D8F0(ctx, base);
loc_821264E0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82126070) {
	__imp__sub_82126070(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821264E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x821264F0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32167
	ctx.r11.s64 = -2108096512;
	// addi r30,r11,-10504
	ctx.r30.s64 = ctx.r11.s64 + -10504;
	// lwz r11,64(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82126518
	if (ctx.cr6.lt) goto loc_82126518;
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x8212651c
	if (!ctx.cr6.eq) goto loc_8212651C;
loc_82126518:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8212651C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82126534
	if (!ctx.cr6.eq) goto loc_82126534;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_82126534:
	// bl 0x82123e48
	ctx.lr = 0x82126538;
	sub_82123E48(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82125260
	ctx.lr = 0x82126540;
	sub_82125260(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82126574
	if (ctx.cr6.eq) goto loc_82126574;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r31,r11,-32488
	ctx.r31.s64 = ctx.r11.s64 + -32488;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// addi r5,r10,-10520
	ctx.r5.s64 = ctx.r10.s64 + -10520;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x822e8368
	ctx.lr = 0x82126570;
	sub_822E8368(ctx, base);
	// b 0x82126598
	goto loc_82126598;
loc_82126574:
	// lis r10,-32165
	ctx.r10.s64 = -2107965440;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r31,r10,-32488
	ctx.r31.s64 = ctx.r10.s64 + -32488;
loc_82126580:
	// lbzx r10,r11,r30
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r30.u32);
	// addi r9,r31,24
	ctx.r9.s64 = ctx.r31.s64 + 24;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stbx r10,r11,r9
	PPC_STORE_U8(ctx.r11.u32 + ctx.r9.u32, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne cr6,0x82126580
	if (!ctx.cr6.eq) goto loc_82126580;
loc_82126598:
	// bl 0x8227d8f0
	ctx.lr = 0x8212659C;
	sub_8227D8F0(ctx, base);
	// addi r11,r31,24
	ctx.r11.s64 = ctx.r31.s64 + 24;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_821265A4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821265a4
	if (!ctx.cr6.eq) goto loc_821265A4;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r10,r31,24
	ctx.r10.s64 = ctx.r31.s64 + 24;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// li r8,32
	ctx.r8.s64 = 32;
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// addi r7,r31,24
	ctx.r7.s64 = ctx.r31.s64 + 24;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// stbx r8,r11,r10
	PPC_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r8.u8);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stbx r6,r11,r7
	PPC_STORE_U8(ctx.r11.u32 + ctx.r7.u32, ctx.r6.u8);
	// bl 0x822b7e60
	ctx.lr = 0x821265F0;
	sub_822B7E60(ctx, base);
	// lwz r11,64(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82126610
	if (ctx.cr6.lt) goto loc_82126610;
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82126614
	if (!ctx.cr6.eq) goto loc_82126614;
loc_82126610:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82126614:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82126630
	if (ctx.cr6.eq) goto loc_82126630;
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,64(r30)
	PPC_STORE_U32(ctx.r30.u32 + 64, ctx.r11.u32);
	// stb r10,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r10.u8);
loc_82126630:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821264E8) {
	__imp__sub_821264E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8212663C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8212663C) {
	__imp__sub_8212663C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82126640) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x82122228
	ctx.lr = 0x82126668;
	sub_82122228(ctx, base);
	// lis r11,-32167
	ctx.r11.s64 = -2108096512;
	// lis r10,-32167
	ctx.r10.s64 = -2108096512;
	// lwz r6,12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lis r8,-31822
	ctx.r8.s64 = -2085486592;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r9,r31,16
	ctx.r9.s64 = ctx.r31.s64 + 16;
	// lwz r11,-10704(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -10704);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,-11084(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -11084);
	// lwz r4,-356(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + -356);
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r7,12(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// bl 0x82125e88
	ctx.lr = 0x8212669C;
	sub_82125E88(ctx, base);
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

PPC_WEAK_FUNC(sub_82126640) {
	__imp__sub_82126640(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821266B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821266B4) {
	__imp__sub_821266B4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821266B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf60
	ctx.lr = 0x821266C0;
	__savegprlr_22(ctx, base);
	// stfd f30,-104(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.f30.u64);
	// stfd f31,-96(r1)
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.f31.u64);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,412(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 412);
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
	// lwz r30,404(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 404);
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r23,r9
	ctx.r23.u64 = ctx.r9.u64;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r24,r8
	ctx.r24.u64 = ctx.r8.u64;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r11,r7,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// lis r8,-31822
	ctx.r8.s64 = -2085486592;
	// add r31,r11,r9
	ctx.r31.u64 = ctx.r11.u64 + ctx.r9.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// lwz r11,-356(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -356);
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// srawi r6,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r11.s32 >> 31;
	// subfc r3,r5,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r5.u32;
	ctx.r3.s64 = ctx.r11.s64 - ctx.r5.s64;
	// rlwinm r4,r5,1,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x1;
	// adde r11,r4,r6
	temp.u8 = (ctx.r4.u32 + ctx.r6.u32 < ctx.r4.u32) | (ctx.r4.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ctx.r4.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82126ac4
	if (ctx.cr6.eq) goto loc_82126AC4;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lfs f30,12168(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f30.f64 = double(temp.f32);
	// beq cr6,0x82126760
	if (ctx.cr6.eq) goto loc_82126760;
	// li r4,6
	ctx.r4.s64 = 6;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822c2068
	ctx.lr = 0x8212675C;
	sub_822C2068(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_82126760:
	// extsw r11,r27
	ctx.r11.s64 = ctx.r27.s32;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r11,192(r1)
	PPC_STORE_U64(ctx.r1.u32 + 192, ctx.r11.u64);
	// lfd f0,192(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 192);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfs f0,14276(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 14276);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f1,f11,f31
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// bl 0x8238b548
	ctx.lr = 0x8212678C;
	sub_8238B548(ctx, base);
	// lwz r27,444(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 444);
	// stfs f1,164(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f1,160(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// clrlwi r11,r27,30
	ctx.r11.u64 = ctx.r27.u32 & 0x3;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x821267f4
	if (ctx.cr6.eq) goto loc_821267F4;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82126844
	if (!ctx.cr6.eq) goto loc_82126844;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x8238ba78
	ctx.lr = 0x821267C4;
	sub_8238BA78(ctx, base);
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// lfs f0,164(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f0.f64 = double(temp.f32);
	// std r11,192(r1)
	PPC_STORE_U64(ctx.r1.u32 + 192, ctx.r11.u64);
	// lfd f13,192(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 192);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fctiwz f9,f10
	ctx.f9.s64 = (ctx.f10.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f9,192(r1)
	PPC_STORE_U64(ctx.r1.u32 + 192, ctx.f9.u64);
	// lwz r10,196(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// subf r28,r10,r28
	ctx.r28.s64 = ctx.r28.s64 - ctx.r10.s64;
	// b 0x82126844
	goto loc_82126844;
loc_821267F4:
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x8238ba78
	ctx.lr = 0x8212680C;
	sub_8238BA78(ctx, base);
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// lfs f13,164(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r11,192(r1)
	PPC_STORE_U64(ctx.r1.u32 + 192, ctx.r11.u64);
	// lfd f12,192(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 192);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// lfs f0,2416(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2416);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fmuls f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fctiwz f7,f8
	ctx.f7.s64 = (ctx.f8.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f8.f64));
	// stfd f7,192(r1)
	PPC_STORE_U64(ctx.r1.u32 + 192, ctx.f7.u64);
	// lwz r9,196(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// subf r28,r9,r28
	ctx.r28.s64 = ctx.r28.s64 - ctx.r9.s64;
loc_82126844:
	// rlwinm r11,r27,0,28,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0xC;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x8212689c
	if (ctx.cr6.eq) goto loc_8212689C;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bne cr6,0x821268d0
	if (!ctx.cr6.eq) goto loc_821268D0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8238b698
	ctx.lr = 0x82126860;
	sub_8238B698(ctx, base);
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// lfs f13,160(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r11,192(r1)
	PPC_STORE_U64(ctx.r1.u32 + 192, ctx.r11.u64);
	// lfd f12,192(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 192);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// lfs f0,6004(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6004);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fmuls f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fctiwz f7,f8
	ctx.f7.s64 = (ctx.f8.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f8.f64));
	// stfd f7,192(r1)
	PPC_STORE_U64(ctx.r1.u32 + 192, ctx.f7.u64);
	// lwz r9,196(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// subf r26,r9,r26
	ctx.r26.s64 = ctx.r26.s64 - ctx.r9.s64;
	// b 0x821268d0
	goto loc_821268D0;
loc_8212689C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8238b698
	ctx.lr = 0x821268A4;
	sub_8238B698(ctx, base);
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// lfs f0,160(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f0.f64 = double(temp.f32);
	// std r11,192(r1)
	PPC_STORE_U64(ctx.r1.u32 + 192, ctx.r11.u64);
	// lfd f13,192(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 192);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fctiwz f9,f10
	ctx.f9.s64 = (ctx.f10.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f9,192(r1)
	PPC_STORE_U64(ctx.r1.u32 + 192, ctx.f9.u64);
	// lwz r11,196(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// add r26,r11,r26
	ctx.r26.u64 = ctx.r11.u64 + ctx.r26.u64;
loc_821268D0:
	// extsw r11,r28
	ctx.r11.s64 = ctx.r28.s32;
	// extsw r10,r26
	ctx.r10.s64 = ctx.r26.s32;
	// std r11,176(r1)
	PPC_STORE_U64(ctx.r1.u32 + 176, ctx.r11.u64);
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// std r10,192(r1)
	PPC_STORE_U64(ctx.r1.u32 + 192, ctx.r10.u64);
	// lfd f0,192(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 192);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// lfd f12,176(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// frsp f11,f13
	ctx.f11.f64 = double(float(ctx.f13.f64));
	// fcfid f10,f12
	ctx.f10.f64 = double(ctx.f12.s64);
	// stfs f11,168(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// addi r7,r1,160
	ctx.r7.s64 = ctx.r1.s64 + 160;
	// addi r6,r1,164
	ctx.r6.s64 = ctx.r1.s64 + 164;
	// addi r5,r1,168
	ctx.r5.s64 = ctx.r1.s64 + 168;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// stfs f9,176(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// bl 0x82140bc8
	ctx.lr = 0x82126920;
	sub_82140BC8(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82126a54
	if (ctx.cr6.eq) goto loc_82126A54;
	// lis r10,-32167
	ctx.r10.s64 = -2108096512;
	// rlwinm r9,r11,0,27,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lwz r10,-9528(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -9528);
	// lfs f0,12(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,192(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// lfs f13,16(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,196(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// lfs f12,20(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,200(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// stfs f30,204(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// beq cr6,0x8212696c
	if (ctx.cr6.eq) goto loc_8212696C;
	// lis r11,-32167
	ctx.r11.s64 = -2108096512;
	// lwz r11,-9244(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9244);
	// b 0x821269a4
	goto loc_821269A4;
loc_8212696C:
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82126984
	if (ctx.cr6.eq) goto loc_82126984;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lwz r11,29060(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 29060);
	// b 0x821269a4
	goto loc_821269A4;
loc_82126984:
	// rlwinm r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8212699c
	if (ctx.cr6.eq) goto loc_8212699C;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lwz r11,29056(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 29056);
	// b 0x821269a4
	goto loc_821269A4;
loc_8212699C:
	// lis r11,-32167
	ctx.r11.s64 = -2108096512;
	// lwz r11,-10404(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -10404);
loc_821269A4:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// addi r28,r11,12
	ctx.r28.s64 = ctx.r11.s64 + 12;
	// bl 0x82126640
	ctx.lr = 0x821269B8;
	sub_82126640(ctx, base);
	// lwz r11,428(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 428);
	// addi r10,r1,192
	ctx.r10.s64 = ctx.r1.s64 + 192;
	// stw r28,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r28.u32);
	// lis r3,-31857
	ctx.r3.s64 = -2087780352;
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r8,-32167
	ctx.r8.s64 = -2108096512;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r29,r3,14296
	ctx.r29.s64 = ctx.r3.s64 + 14296;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// lis r9,-32167
	ctx.r9.s64 = -2108096512;
	// lfs f4,160(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f4.f64 = double(temp.f32);
	// lis r4,-32167
	ctx.r4.s64 = -2108096512;
	// lfs f3,164(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,168(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,176(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	ctx.f1.f64 = double(temp.f32);
	// lwz r10,-10704(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + -10704);
	// lwz r8,44(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 44);
	// lwz r11,-10708(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -10708);
	// lwz r9,-11084(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + -11084);
	// lwz r31,12(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stw r8,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r8.u32);
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r9,12(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// lwz r11,40(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r8,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r8.u32);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// stw r10,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// stw r9,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r9.u32);
	// stw r11,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r11.u32);
	// bl 0x82392838
	ctx.lr = 0x82126A44;
	sub_82392838(ctx, base);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// lfd f30,-104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// lfd f31,-96(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x823ddfb0
	__restgprlr_22(ctx, base);
	return;
loc_82126A54:
	// rlwinm r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lfs f4,160(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f4.f64 = double(temp.f32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,428(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 428);
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lfs f3,164(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,168(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f2.f64 = double(temp.f32);
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lfs f1,176(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	ctx.f1.f64 = double(temp.f32);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// beq cr6,0x82126ab4
	if (ctx.cr6.eq) goto loc_82126AB4;
	// lwz r9,420(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 420);
	// lis r10,-32191
	ctx.r10.s64 = -2109669376;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// addi r8,r10,1364
	ctx.r8.s64 = ctx.r10.s64 + 1364;
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// bl 0x823927e0
	ctx.lr = 0x82126AA4;
	sub_823927E0(ctx, base);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// lfd f30,-104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// lfd f31,-96(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x823ddfb0
	__restgprlr_22(ctx, base);
	return;
loc_82126AB4:
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// lwz r10,420(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 420);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// bl 0x823927b0
	ctx.lr = 0x82126AC4;
	sub_823927B0(ctx, base);
loc_82126AC4:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// lfd f30,-104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// lfd f31,-96(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x823ddfb0
	__restgprlr_22(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821266B8) {
	__imp__sub_821266B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82126AD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82126AD4) {
	__imp__sub_82126AD4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82126AD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf4c
	ctx.lr = 0x82126AE0;
	__savegprlr_17(ctx, base);
	// stfd f29,-152(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -152, ctx.f29.u64);
	// stfd f30,-144(r1)
	PPC_STORE_U64(ctx.r1.u32 + -144, ctx.f30.u64);
	// stfd f31,-136(r1)
	PPC_STORE_U64(ctx.r1.u32 + -136, ctx.f31.u64);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31822
	ctx.r11.s64 = -2085486592;
	// fmr f29,f1
	ctx.f29.f64 = ctx.f1.f64;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r19,r5
	ctx.r19.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// lwz r27,-356(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + -356);
	// mr r23,r7
	ctx.r23.u64 = ctx.r7.u64;
	// mr r18,r8
	ctx.r18.u64 = ctx.r8.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r17,r9
	ctx.r17.u64 = ctx.r9.u64;
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
	// bl 0x821254b0
	ctx.lr = 0x82126B24;
	sub_821254B0(ctx, base);
	// clrlwi r20,r30,24
	ctx.r20.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// bne cr6,0x82126b34
	if (!ctx.cr6.eq) goto loc_82126B34;
	// subf r29,r23,r29
	ctx.r29.s64 = ctx.r29.s64 - ctx.r23.s64;
loc_82126B34:
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82126c44
	if (!ctx.cr6.gt) goto loc_82126C44;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f31,2416(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2416);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,12168(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f30.f64 = double(temp.f32);
loc_82126B54:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// add r8,r11,r30
	ctx.r8.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// divw r5,r8,r9
	ctx.r5.s32 = ctx.r8.s32 / ctx.r9.s32;
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mullw r4,r5,r9
	ctx.r4.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r9.s32);
	// subf r11,r4,r8
	ctx.r11.s64 = ctx.r8.s64 - ctx.r4.s64;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r3,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r9,r11,r7
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r7,r8,r6
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r6.u32);
	// subf r11,r7,r27
	ctx.r11.s64 = ctx.r27.s64 - ctx.r7.s64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82126c34
	if (!ctx.cr6.lt) goto loc_82126C34;
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// std r10,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r10.u64);
	// lfd f0,128(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// std r9,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r9.u64);
	// lfd f13,136(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// fcfid f11,f0
	ctx.f11.f64 = double(ctx.f0.s64);
	// extsw r11,r23
	ctx.r11.s64 = ctx.r23.s32;
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// fdivs f8,f10,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 / ctx.f9.f64));
	// fsubs f0,f30,f8
	ctx.f0.f64 = double(float(ctx.f30.f64 - ctx.f8.f64));
	// beq cr6,0x82126c08
	if (ctx.cr6.eq) goto loc_82126C08;
	// std r11,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r11.u64);
	// lfd f13,144(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmadds f1,f11,f0,f31
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f0.f64 + ctx.f31.f64));
	// bl 0x823dde20
	ctx.lr = 0x82126BF0;
	sub_823DDE20(ctx, base);
	// frsp f10,f1
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f1.f64));
	// fctiwz f9,f10
	ctx.f9.s64 = (ctx.f10.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f9,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.f9.u64);
	// lwz r11,156(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// b 0x82126c34
	goto loc_82126C34;
loc_82126C08:
	// std r11,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r11.u64);
	// lfd f13,160(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmadds f1,f11,f0,f31
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f0.f64 + ctx.f31.f64));
	// bl 0x823dde20
	ctx.lr = 0x82126C20;
	sub_823DDE20(ctx, base);
	// frsp f10,f1
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f1.f64));
	// fctiwz f9,f10
	ctx.f9.s64 = (ctx.f10.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f9,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.f9.u64);
	// lwz r10,156(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// subf r29,r10,r29
	ctx.r29.s64 = ctx.r29.s64 - ctx.r10.s64;
loc_82126C34:
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82126b54
	if (ctx.cr6.lt) goto loc_82126B54;
loc_82126C44:
	// lwz r28,444(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 444);
	// addic. r22,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r22.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// lfs f0,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,12(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f0,176(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stfs f13,180(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stfs f12,184(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stfs f11,188(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// blt 0x82126d40
	if (ctx.cr0.lt) goto loc_82126D40;
	// lwz r26,468(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 468);
	// lwz r25,452(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 452);
	// lwz r24,436(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 436);
loc_82126C7C:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// add r8,r11,r22
	ctx.r8.u64 = ctx.r11.u64 + ctx.r22.u64;
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// divw r6,r8,r9
	ctx.r6.s32 = ctx.r8.s32 / ctx.r9.s32;
	// mullw r5,r6,r9
	ctx.r5.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r9.s32);
	// subf r30,r5,r8
	ctx.r30.s64 = ctx.r8.s64 - ctx.r5.s64;
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// add r4,r30,r11
	ctx.r4.u64 = ctx.r30.u64 + ctx.r11.u64;
	// rlwinm r3,r4,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r11,r3,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r7.u32);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// beq cr6,0x82126cc4
	if (ctx.cr6.eq) goto loc_82126CC4;
	// subf r29,r23,r29
	ctx.r29.s64 = ctx.r29.s64 - ctx.r23.s64;
	// b 0x82126cc8
	goto loc_82126CC8;
loc_82126CC4:
	// add r29,r29,r23
	ctx.r29.u64 = ctx.r29.u64 + ctx.r23.u64;
loc_82126CC8:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// subf. r10,r11,r27
	ctx.r10.s64 = ctx.r27.s64 - ctx.r11.s64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge 0x82126d38
	if (!ctx.cr0.lt) goto loc_82126D38;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82125590
	ctx.lr = 0x82126CE4;
	sub_82125590(ctx, base);
	// lfs f0,12(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// stfs f13,188(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82141160
	ctx.lr = 0x82126CF8;
	sub_82141160(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r11,r1,176
	ctx.r11.s64 = ctx.r1.s64 + 176;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// stw r25,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r25.u32);
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f29.f64;
	// mr r8,r18
	ctx.r8.u64 = ctx.r18.u64;
	// stw r26,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r26.u32);
	// mr r9,r17
	ctx.r9.u64 = ctx.r17.u64;
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// bl 0x821266b8
	ctx.lr = 0x82126D38;
	sub_821266B8(ctx, base);
loc_82126D38:
	// addic. r22,r22,-1
	ctx.xer.ca = ctx.r22.u32 > 0;
	ctx.r22.s64 = ctx.r22.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// bge 0x82126c7c
	if (!ctx.cr0.lt) goto loc_82126C7C;
loc_82126D40:
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// lfd f29,-152(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -152);
	// lfd f30,-144(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// lfd f31,-136(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82126AD8) {
	__imp__sub_82126AD8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82126D54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82126D54) {
	__imp__sub_82126D54(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82126D58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf48
	ctx.lr = 0x82126D60;
	__savegprlr_16(ctx, base);
	// stfd f30,-152(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -152, ctx.f30.u64);
	// stfd f31,-144(r1)
	PPC_STORE_U64(ctx.r1.u32 + -144, ctx.f31.u64);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31822
	ctx.r11.s64 = -2085486592;
	// fmr f30,f1
	ctx.f30.f64 = ctx.f1.f64;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// lwz r29,-356(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + -356);
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// mr r21,r8
	ctx.r21.u64 = ctx.r8.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r20,r9
	ctx.r20.u64 = ctx.r9.u64;
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
	// bl 0x821254b0
	ctx.lr = 0x82126DA0;
	sub_821254B0(ctx, base);
	// clrlwi r24,r30,24
	ctx.r24.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x82126db0
	if (ctx.cr6.eq) goto loc_82126DB0;
	// subf r28,r26,r28
	ctx.r28.s64 = ctx.r28.s64 - ctx.r26.s64;
loc_82126DB0:
	// lwz r23,460(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 460);
	// li r16,0
	ctx.r16.s64 = 0;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lfs f0,0(r23)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r23)
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r23)
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,12(r23)
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f0,192(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// stfs f13,196(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// stfs f12,200(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// stfs f11,204(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// ble cr6,0x82126fa4
	if (!ctx.cr6.gt) goto loc_82126FA4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r19,484(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 484);
	// lwz r18,468(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + 468);
	// lwz r17,452(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 452);
	// lfs f31,2416(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2416);
	ctx.f31.f64 = double(temp.f32);
loc_82126DF8:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// add r8,r11,r16
	ctx.r8.u64 = ctx.r11.u64 + ctx.r16.u64;
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// divw r6,r8,r9
	ctx.r6.s32 = ctx.r8.s32 / ctx.r9.s32;
	// mullw r5,r6,r9
	ctx.r5.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r9.s32);
	// subf r30,r5,r8
	ctx.r30.s64 = ctx.r8.s64 - ctx.r5.s64;
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// add r4,r30,r11
	ctx.r4.u64 = ctx.r30.u64 + ctx.r11.u64;
	// rlwinm r3,r4,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r11,r3,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r7.u32);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r27,r11,r10
	ctx.r27.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x82126f94
	if (ctx.cr6.gt) goto loc_82126F94;
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cmpw cr6,r29,r9
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x82126f18
	if (!ctx.cr6.gt) goto loc_82126F18;
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// add. r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x82126f18
	if (!ctx.cr0.gt) goto loc_82126F18;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// extsw r9,r26
	ctx.r9.s64 = ctx.r26.s32;
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// beq cr6,0x82126ec4
	if (ctx.cr6.eq) goto loc_82126EC4;
	// std r8,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r8.u64);
	// lfd f12,144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// std r9,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r9.u64);
	// lfd f13,136(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// std r10,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r10.u64);
	// lfd f0,128(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f10,f0
	ctx.f10.f64 = double(ctx.f0.s64);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// fcfid f9,f13
	ctx.f9.f64 = double(ctx.f13.s64);
	// frsp f7,f10
	ctx.f7.f64 = double(float(ctx.f10.f64));
	// frsp f8,f11
	ctx.f8.f64 = double(float(ctx.f11.f64));
	// frsp f6,f9
	ctx.f6.f64 = double(float(ctx.f9.f64));
	// fdivs f5,f8,f7
	ctx.f5.f64 = double(float(ctx.f8.f64 / ctx.f7.f64));
	// fmuls f4,f5,f6
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f6.f64));
	// fadds f1,f4,f31
	ctx.f1.f64 = double(float(ctx.f4.f64 + ctx.f31.f64));
	// bl 0x823dde20
	ctx.lr = 0x82126EAC;
	sub_823DDE20(ctx, base);
	// frsp f3,f1
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = double(float(ctx.f1.f64));
	// fctiwz f2,f3
	ctx.f2.s64 = (ctx.f3.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f3.f64));
	// stfd f2,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.f2.u64);
	// lwz r11,156(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// add r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 + ctx.r28.u64;
	// b 0x82126f18
	goto loc_82126F18;
loc_82126EC4:
	// std r10,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r10.u64);
	// std r8,176(r1)
	PPC_STORE_U64(ctx.r1.u32 + 176, ctx.r8.u64);
	// std r9,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r9.u64);
	// lfd f0,160(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// lfd f12,176(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// fcfid f10,f0
	ctx.f10.f64 = double(ctx.f0.s64);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// lfd f13,168(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 168);
	// fcfid f9,f13
	ctx.f9.f64 = double(ctx.f13.s64);
	// frsp f7,f10
	ctx.f7.f64 = double(float(ctx.f10.f64));
	// frsp f8,f11
	ctx.f8.f64 = double(float(ctx.f11.f64));
	// frsp f6,f9
	ctx.f6.f64 = double(float(ctx.f9.f64));
	// fdivs f5,f8,f7
	ctx.f5.f64 = double(float(ctx.f8.f64 / ctx.f7.f64));
	// fmuls f4,f5,f6
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f6.f64));
	// fadds f1,f4,f31
	ctx.f1.f64 = double(float(ctx.f4.f64 + ctx.f31.f64));
	// bl 0x823dde20
	ctx.lr = 0x82126F04;
	sub_823DDE20(ctx, base);
	// frsp f3,f1
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = double(float(ctx.f1.f64));
	// fctiwz f2,f3
	ctx.f2.s64 = (ctx.f3.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f3.f64));
	// stfd f2,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.f2.u64);
	// lwz r7,156(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// subf r28,r7,r28
	ctx.r28.s64 = ctx.r28.s64 - ctx.r7.s64;
loc_82126F18:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82125590
	ctx.lr = 0x82126F2C;
	sub_82125590(ctx, base);
	// lfs f0,12(r23)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// stfs f13,204(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82141160
	ctx.lr = 0x82126F40;
	sub_82141160(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// stw r18,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r18.u32);
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// mr r8,r21
	ctx.r8.u64 = ctx.r21.u64;
	// stw r19,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r19.u32);
	// mr r9,r20
	ctx.r9.u64 = ctx.r20.u64;
	// mr r10,r17
	ctx.r10.u64 = ctx.r17.u64;
	// bl 0x821266b8
	ctx.lr = 0x82126F80;
	sub_821266B8(ctx, base);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x82126f90
	if (ctx.cr6.eq) goto loc_82126F90;
	// subf r28,r26,r28
	ctx.r28.s64 = ctx.r28.s64 - ctx.r26.s64;
	// b 0x82126f94
	goto loc_82126F94;
loc_82126F90:
	// add r28,r28,r26
	ctx.r28.u64 = ctx.r28.u64 + ctx.r26.u64;
loc_82126F94:
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// addi r16,r16,1
	ctx.r16.s64 = ctx.r16.s64 + 1;
	// cmpw cr6,r16,r11
	ctx.cr6.compare<int32_t>(ctx.r16.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82126df8
	if (ctx.cr6.lt) goto loc_82126DF8;
loc_82126FA4:
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// lfd f30,-152(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -152);
	// lfd f31,-144(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// b 0x823ddf98
	__restgprlr_16(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82126D58) {
	__imp__sub_82126D58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82126FB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82126FB4) {
	__imp__sub_82126FB4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82126FB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82126FC0;
	__savegprlr_29(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-32155
	ctx.r31.s64 = -2107310080;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// addi r31,r31,-30024
	ctx.r31.s64 = ctx.r31.s64 + -30024;
	// rlwinm r10,r3,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 5) & 0xFFFFFFE0;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// lwz r31,4(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r31,r31,0,27,27
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x10;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x82126ff8
	if (ctx.cr6.eq) goto loc_82126FF8;
	// lbz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// beq cr6,0x82126ffc
	if (ctx.cr6.eq) goto loc_82126FFC;
loc_82126FF8:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82126FFC:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82127088
	if (!ctx.cr6.eq) goto loc_82127088;
	// lwz r10,268(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 268);
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bgt cr6,0x82127088
	if (ctx.cr6.gt) goto loc_82127088;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8212705c
	if (ctx.cr6.eq) goto loc_8212705C;
	// bdz 0x82127028
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82127028;
	// bdnz 0x8212705c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8212705C;
loc_82127028:
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// lwz r31,276(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// lwz r30,252(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	// lwz r29,244(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// bl 0x82126ad8
	ctx.lr = 0x82127054;
	sub_82126AD8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_8212705C:
	// lwz r31,276(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// addi r10,r10,-3
	ctx.r10.s64 = ctx.r10.s64 + -3;
	// lwz r30,252(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	// lwz r29,244(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// bl 0x82126d58
	ctx.lr = 0x82127088;
	sub_82126D58(ctx, base);
loc_82127088:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82126FB8) {
	__imp__sub_82126FB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82127090) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf68
	ctx.lr = 0x82127098;
	__savegprlr_24(ctx, base);
	// stfd f30,-88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f30.u64);
	// stfd f31,-80(r1)
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// fmr f30,f1
	ctx.f30.f64 = ctx.f1.f64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// lwz r11,6964(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6964);
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// mr r24,r9
	ctx.r24.u64 = ctx.r9.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x821271b8
	if (!ctx.cr6.eq) goto loc_821271B8;
	// lis r11,-31936
	ctx.r11.s64 = -2092957696;
	// lwz r11,-9404(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9404);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82127104
	if (ctx.cr6.eq) goto loc_82127104;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,22888
	ctx.r3.s64 = ctx.r11.s64 + 22888;
	// bl 0x822e0338
	ctx.lr = 0x821270F8;
	sub_822E0338(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821271b8
	if (!ctx.cr6.eq) goto loc_821271B8;
loc_82127104:
	// bl 0x82141ca8
	ctx.lr = 0x82127108;
	sub_82141CA8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// lis r11,-32167
	ctx.r11.s64 = -2108096512;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// addi r29,r11,-8976
	ctx.r29.s64 = ctx.r11.s64 + -8976;
	// beq cr6,0x82127130
	if (ctx.cr6.eq) goto loc_82127130;
	// addi r11,r29,-1764
	ctx.r11.s64 = ctx.r29.s64 + -1764;
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lfs f31,12(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f31.f64 = double(temp.f32);
	// b 0x82127138
	goto loc_82127138;
loc_82127130:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,12168(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f31.f64 = double(temp.f32);
loc_82127138:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,14004(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14004);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,2416(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2416);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f1,f30,f0,f13
	ctx.f1.f64 = double(float(ctx.f30.f64 * ctx.f0.f64 + ctx.f13.f64));
	// bl 0x823dde20
	ctx.lr = 0x82127150;
	sub_823DDE20(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// lwz r7,316(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// lwz r9,324(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	// mulli r10,r31,18520
	ctx.r10.s64 = ctx.r31.s64 * 18520;
	// lwz r8,332(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 332);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// lwz r6,308(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// stw r9,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// mulli r11,r30,52
	ctx.r11.s64 = ctx.r30.s64 * 52;
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.f13.u64);
	// lwz r7,132(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// addis r9,r29,1
	ctx.r9.s64 = ctx.r29.s64 + 65536;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r9,8800
	ctx.r11.s64 = ctx.r9.s64 + 8800;
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// add r4,r4,r11
	ctx.r4.u64 = ctx.r4.u64 + ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82126fb8
	ctx.lr = 0x821271B8;
	sub_82126FB8(ctx, base);
loc_821271B8:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f30,-88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f31,-80(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82127090) {
	__imp__sub_82127090(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821271C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x821271D0;
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// fmr f29,f1
	ctx.f29.f64 = ctx.f1.f64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// bl 0x82141ca8
	ctx.lr = 0x821271F4;
	sub_82141CA8(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// lis r11,-32167
	ctx.r11.s64 = -2108096512;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// addi r31,r11,-8976
	ctx.r31.s64 = ctx.r11.s64 + -8976;
	// lfs f31,12168(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f31.f64 = double(temp.f32);
	// beq cr6,0x8212721c
	if (ctx.cr6.eq) goto loc_8212721C;
	// lwz r11,-2112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -2112);
	// lfs f30,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f30.f64 = double(temp.f32);
	// b 0x82127220
	goto loc_82127220;
loc_8212721C:
	// fmr f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f31.f64;
loc_82127220:
	// lis r29,-32166
	ctx.r29.s64 = -2108030976;
	// lwz r11,28836(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28836);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82127330
	if (ctx.cr6.eq) goto loc_82127330;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82141160
	ctx.lr = 0x8212723C;
	sub_82141160(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x822c2068
	ctx.lr = 0x82127248;
	sub_822C2068(ctx, base);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lwz r11,28836(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28836);
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r8,r10,14656
	ctx.r8.u64 = ctx.r10.u64 | 14656;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwzx r11,r31,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x82127294
	if (ctx.cr6.eq) goto loc_82127294;
	// addis r8,r31,1
	ctx.r8.s64 = ctx.r31.s64 + 65536;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// mulli r11,r30,18520
	ctx.r11.s64 = ctx.r30.s64 * 18520;
	// addi r8,r8,14640
	ctx.r8.s64 = ctx.r8.s64 + 14640;
	// ori r6,r7,14656
	ctx.r6.u64 = ctx.r7.u64 | 14656;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stwx r10,r31,r6
	PPC_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r10.u32);
	// stw r9,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r9.u32);
	// stw r9,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r9.u32);
	// stw r9,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r9.u32);
	// stw r9,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r9.u32);
loc_82127294:
	// lis r10,-32155
	ctx.r10.s64 = -2107310080;
	// stfs f31,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// rlwinm r11,r30,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 5) & 0xFFFFFFE0;
	// stfs f31,132(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// addi r10,r10,-30024
	ctx.r10.s64 = ctx.r10.s64 + -30024;
	// stfs f31,136(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// addis r8,r31,1
	ctx.r8.s64 = ctx.r31.s64 + 65536;
	// stfs f29,140(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mulli r10,r30,18520
	ctx.r10.s64 = ctx.r30.s64 * 18520;
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r6,r7,0,27,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x10;
	// addi r8,r8,14640
	ctx.r8.s64 = ctx.r8.s64 + 14640;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// add r4,r10,r8
	ctx.r4.u64 = ctx.r10.u64 + ctx.r8.u64;
	// beq cr6,0x821272e4
	if (ctx.cr6.eq) goto loc_821272E4;
	// lbz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821272e4
	if (!ctx.cr6.eq) goto loc_821272E4;
	// li r9,1
	ctx.r9.s64 = 1;
loc_821272E4:
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82127330
	if (!ctx.cr6.eq) goto loc_82127330;
	// li r9,3
	ctx.r9.s64 = 3;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,12
	ctx.r7.s64 = 12;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82126d58
	ctx.lr = 0x82127330;
	sub_82126D58(ctx, base);
loc_82127330:
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

PPC_WEAK_FUNC(sub_821271C8) {
	__imp__sub_821271C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82127344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82127344) {
	__imp__sub_82127344(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82127348) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82127350;
	__savegprlr_29(ctx, base);
	// stfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f30.u64);
	// stfd f31,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f30,f1
	ctx.f30.f64 = ctx.f1.f64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82141160
	ctx.lr = 0x82127370;
	sub_82141160(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r4,0
	ctx.r4.s64 = 0;
	// lfs f31,12168(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x822c2068
	ctx.lr = 0x82127384;
	sub_822C2068(ctx, base);
	// lis r9,-32155
	ctx.r9.s64 = -2107310080;
	// stfs f31,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// rlwinm r10,r31,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 5) & 0xFFFFFFE0;
	// stfs f31,132(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// addi r11,r9,-30024
	ctx.r11.s64 = ctx.r9.s64 + -30024;
	// stfs f31,136(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// lis r8,-32167
	ctx.r8.s64 = -2108096512;
	// stfs f30,140(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r7,r8,-8976
	ctx.r7.s64 = ctx.r8.s64 + -8976;
	// mulli r10,r31,18520
	ctx.r10.s64 = ctx.r31.s64 * 18520;
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addis r9,r7,1
	ctx.r9.s64 = ctx.r7.s64 + 65536;
	// rlwinm r5,r6,0,27,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x10;
	// addi r9,r9,18916
	ctx.r9.s64 = ctx.r9.s64 + 18916;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// beq cr6,0x821273dc
	if (ctx.cr6.eq) goto loc_821273DC;
	// lbz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x821273e0
	if (ctx.cr6.eq) goto loc_821273E0;
loc_821273DC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_821273E0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8212742c
	if (!ctx.cr6.eq) goto loc_8212742C;
	// li r9,3
	ctx.r9.s64 = 3;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,20
	ctx.r7.s64 = 20;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82126d58
	ctx.lr = 0x8212742C;
	sub_82126D58(ctx, base);
loc_8212742C:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82127348) {
	__imp__sub_82127348(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8212743C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8212743C) {
	__imp__sub_8212743C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82127440) {
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
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822ec4e8
	ctx.lr = 0x82127460;
	sub_822EC4E8(ctx, base);
	// lis r11,-32167
	ctx.r11.s64 = -2108096512;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// addi r31,r11,-8976
	ctx.r31.s64 = ctx.r11.s64 + -8976;
	// ori r9,r10,564
	ctx.r9.u64 = ctx.r10.u64 | 564;
	// lwzx r11,r31,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82127494
	if (ctx.cr6.eq) goto loc_82127494;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r10,r11,572
	ctx.r10.u64 = ctx.r11.u64 | 572;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwzx r4,r31,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// bl 0x82122b38
	ctx.lr = 0x82127494;
	sub_82122B38(ctx, base);
loc_82127494:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822ec500
	ctx.lr = 0x8212749C;
	sub_822EC500(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8212fa08
	ctx.lr = 0x821274A8;
	sub_8212FA08(ctx, base);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// ori r9,r11,576
	ctx.r9.u64 = ctx.r11.u64 | 576;
	// subfic r8,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r8.s64 = 0 - ctx.r10.s64;
	// lis r6,1
	ctx.r6.s64 = 65536;
	// subfe r5,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r5.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// ori r4,r6,576
	ctx.r4.u64 = ctx.r6.u64 | 576;
	// lbzx r11,r31,r9
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r9.u32);
	// and r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 & ctx.r11.u64;
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// stbx r11,r31,r4
	PPC_STORE_U8(ctx.r31.u32 + ctx.r4.u32, ctx.r11.u8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821274e0
	if (ctx.cr6.eq) goto loc_821274E0;
	// bl 0x82125af8
	ctx.lr = 0x821274E0;
	sub_82125AF8(ctx, base);
loc_821274E0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82126070
	ctx.lr = 0x821274E8;
	sub_82126070(ctx, base);
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

PPC_WEAK_FUNC(sub_82127440) {
	__imp__sub_82127440(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82127500) {
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
	// bl 0x82141160
	ctx.lr = 0x82127518;
	sub_82141160(ctx, base);
	// bl 0x82121980
	ctx.lr = 0x8212751C;
	sub_82121980(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8212fa08
	ctx.lr = 0x82127528;
	sub_8212FA08(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8212753c
	if (ctx.cr6.eq) goto loc_8212753C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82127440
	ctx.lr = 0x8212753C;
	sub_82127440(ctx, base);
loc_8212753C:
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

PPC_WEAK_FUNC(sub_82127500) {
	__imp__sub_82127500(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82127550) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// rlwinm r10,r3,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r11,r11,-30024
	ctx.r11.s64 = ctx.r11.s64 + -30024;
	// addi r9,r11,12
	ctx.r9.s64 = ctx.r11.s64 + 12;
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmpwi cr6,r8,3
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 3, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// mulli r10,r3,12824
	ctx.r10.s64 = ctx.r3.s64 * 12824;
	// addi r11,r11,-16408
	ctx.r11.s64 = ctx.r11.s64 + -16408;
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// stwx r4,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r4.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82127550) {
	__imp__sub_82127550(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82127584) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82127584) {
	__imp__sub_82127584(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82127588) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lis r10,9
	ctx.r10.s64 = 589824;
	// addi r9,r11,28832
	ctx.r9.s64 = ctx.r11.s64 + 28832;
	// ori r8,r10,6648
	ctx.r8.u64 = ctx.r10.u64 | 6648;
	// stwx r3,r9,r8
	PPC_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r3.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82127588) {
	__imp__sub_82127588(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821275A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf5c
	ctx.lr = 0x821275A8;
	__savegprlr_21(ctx, base);
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// stwu r1,-4384(r1)
	ea = -4384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// rlwinm r8,r3,5,0,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r11,r11,-30024
	ctx.r11.s64 = ctx.r11.s64 + -30024;
	// lis r7,-32165
	ctx.r7.s64 = -2107965440;
	// addi r6,r11,12
	ctx.r6.s64 = ctx.r11.s64 + 12;
	// addi r10,r7,-16408
	ctx.r10.s64 = ctx.r7.s64 + -16408;
	// mulli r9,r3,12824
	ctx.r9.s64 = ctx.r3.s64 * 12824;
	// lwzx r11,r8,r6
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r6.u32);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// add r27,r9,r10
	ctx.r27.u64 = ctx.r9.u64 + ctx.r10.u64;
	// beq cr6,0x82127954
	if (ctx.cr6.eq) goto loc_82127954;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82127954
	if (ctx.cr6.eq) goto loc_82127954;
	// lis r11,-31936
	ctx.r11.s64 = -2092957696;
	// lwz r11,-9404(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9404);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82127954
	if (!ctx.cr6.eq) goto loc_82127954;
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x822ec4e8
	ctx.lr = 0x82127604;
	sub_822EC4E8(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32155
	ctx.r10.s64 = -2107310080;
	// ori r9,r11,48796
	ctx.r9.u64 = ctx.r11.u64 | 48796;
	// addi r11,r10,-29944
	ctx.r11.s64 = ctx.r10.s64 + -29944;
	// mullw r10,r21,r9
	ctx.r10.s64 = int64_t(ctx.r21.s32) * int64_t(ctx.r9.s32);
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r31,4216
	ctx.r3.s64 = ctx.r31.s64 + 4216;
	// bl 0x822886b8
	ctx.lr = 0x82127628;
	sub_822886B8(ctx, base);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r5,4096
	ctx.r5.s64 = 4096;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// std r30,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r30.u64);
	// addi r28,r1,128
	ctx.r28.s64 = ctx.r1.s64 + 128;
	// std r30,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r30.u64);
	// std r30,16(r8)
	PPC_STORE_U64(ctx.r8.u32 + 16, ctx.r30.u64);
	// std r30,24(r8)
	PPC_STORE_U64(ctx.r8.u32 + 24, ctx.r30.u64);
	// std r30,32(r8)
	PPC_STORE_U64(ctx.r8.u32 + 32, ctx.r30.u64);
	// bl 0x82287b40
	ctx.lr = 0x82127658;
	sub_82287B40(ctx, base);
	// li r4,27
	ctx.r4.s64 = 27;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82287e08
	ctx.lr = 0x82127664;
	sub_82287E08(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82287e08
	ctx.lr = 0x82127670;
	sub_82287E08(ctx, base);
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lis r7,9
	ctx.r7.s64 = 589824;
	// addi r23,r11,28832
	ctx.r23.s64 = ctx.r11.s64 + 28832;
	// ori r6,r7,6648
	ctx.r6.u64 = ctx.r7.u64 | 6648;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwzx r4,r23,r6
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r23.u32 + ctx.r6.u32);
	// bl 0x82287ed0
	ctx.lr = 0x8212768C;
	sub_82287ED0(ctx, base);
	// bl 0x82133040
	ctx.lr = 0x82127690;
	sub_82133040(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82287ed0
	ctx.lr = 0x8212769C;
	sub_82287ED0(ctx, base);
	// bl 0x8233ad40
	ctx.lr = 0x821276A0;
	sub_8233AD40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82287e08
	ctx.lr = 0x821276AC;
	sub_82287E08(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r22,100(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x82287e08
	ctx.lr = 0x821276BC;
	sub_82287E08(ctx, base);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// lwz r5,4(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// addi r29,r11,1
	ctx.r29.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r29,r5
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r5.s32, ctx.xer);
	// bgt cr6,0x8212771c
	if (ctx.cr6.gt) goto loc_8212771C;
loc_821276D0:
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82287d60
	ctx.lr = 0x821276E0;
	sub_82287D60(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82287ed0
	ctx.lr = 0x821276EC;
	sub_82287ED0(ctx, base);
	// rlwinm r11,r29,6,19,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 6) & 0x1FC0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// addi r4,r11,12
	ctx.r4.s64 = ctx.r11.s64 + 12;
	// bl 0x82288048
	ctx.lr = 0x82127700;
	sub_82288048(ctx, base);
	// li r4,91
	ctx.r4.s64 = 91;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82287e08
	ctx.lr = 0x8212770C;
	sub_82287E08(ctx, base);
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x821276d0
	if (!ctx.cr6.gt) goto loc_821276D0;
loc_8212771C:
	// lis r10,-32155
	ctx.r10.s64 = -2107310080;
	// lwz r8,4192(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4192);
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lis r7,0
	ctx.r7.s64 = 0;
	// addi r27,r11,9240
	ctx.r27.s64 = ctx.r11.s64 + 9240;
	// ori r25,r7,48412
	ctx.r25.u64 = ctx.r7.u64 | 48412;
	// lwz r11,-30036(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30036);
	// lis r26,-31834
	ctx.r26.s64 = -2086273024;
	// lis r24,-32165
	ctx.r24.s64 = -2107965440;
	// lwz r7,0(r27)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r6,12(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r10,640(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 640);
	// subf r11,r6,r7
	ctx.r11.s64 = ctx.r7.s64 - ctx.r6.s64;
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// clrlwi r11,r4,27
	ctx.r11.u64 = ctx.r4.u32 & 0x1F;
	// lwz r5,12(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwzx r9,r11,r25
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r25.u32);
	// subf r29,r9,r8
	ctx.r29.s64 = ctx.r8.s64 - ctx.r9.s64;
	// cmpw cr6,r29,r5
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r5.s32, ctx.xer);
	// ble cr6,0x821277a8
	if (!ctx.cr6.gt) goto loc_821277A8;
	// lwz r11,-16412(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + -16412);
	// lbz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821277a4
	if (ctx.cr6.eq) goto loc_821277A4;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r4,r11,-10448
	ctx.r4.s64 = ctx.r11.s64 + -10448;
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x82280c30
	ctx.lr = 0x821277A0;
	sub_82280C30(ctx, base);
	// lwz r10,640(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 640);
loc_821277A4:
	// lwz r29,12(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
loc_821277A8:
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1, ctx.xer);
	// blt cr6,0x82127848
	if (ctx.cr6.lt) goto loc_82127848;
	// lwz r11,-16412(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + -16412);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821277d4
	if (ctx.cr6.eq) goto loc_821277D4;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,-10460
	ctx.r4.s64 = ctx.r11.s64 + -10460;
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x82280900
	ctx.lr = 0x821277D4;
	sub_82280900(ctx, base);
loc_821277D4:
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82287d60
	ctx.lr = 0x821277E4;
	sub_82287D60(ctx, base);
	// li r4,81
	ctx.r4.s64 = 81;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82287e08
	ctx.lr = 0x821277F0;
	sub_82287E08(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82287e08
	ctx.lr = 0x821277FC;
	sub_82287E08(ctx, base);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x8212783c
	if (!ctx.cr6.gt) goto loc_8212783C;
loc_82127804:
	// lwz r10,4192(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4192);
	// subf r11,r29,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r29.s64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r11,6,20,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFC0;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r28,r11,96
	ctx.r28.s64 = ctx.r11.s64 + 96;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x82288948
	ctx.lr = 0x82127830;
	sub_82288948(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r29
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r29.s32, ctx.xer);
	// blt cr6,0x82127804
	if (ctx.cr6.lt) goto loc_82127804;
loc_8212783C:
	// li r4,71
	ctx.r4.s64 = 71;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82287e08
	ctx.lr = 0x82127848;
	sub_82287E08(ctx, base);
loc_82127848:
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82287d60
	ctx.lr = 0x82127858;
	sub_82287D60(ctx, base);
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x822ec500
	ctx.lr = 0x82127860;
	sub_822EC500(ctx, base);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// srawi r10,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 3;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x82127880
	if (!ctx.cr6.eq) goto loc_82127880;
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// clrlwi r9,r11,29
	ctx.r9.u64 = ctx.r11.u32 & 0x7;
	// stbx r9,r10,r22
	PPC_STORE_U8(ctx.r10.u32 + ctx.r22.u32, ctx.r9.u8);
loc_82127880:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8212789c
	if (ctx.cr6.eq) goto loc_8212789C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,-10488
	ctx.r4.s64 = ctx.r11.s64 + -10488;
	// bl 0x822830e8
	ctx.lr = 0x8212789C;
	sub_822830E8(ctx, base);
loc_8212789C:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lis r6,0
	ctx.r6.s64 = 0;
	// lwz r10,352(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 352);
	// clrlwi r9,r11,27
	ctx.r9.u64 = ctx.r11.u32 & 0x1F;
	// lwz r8,-16412(r24)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r24.u32 + -16412);
	// rlwinm r7,r11,1,26,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x3E;
	// addi r11,r9,4035
	ctx.r11.s64 = ctx.r9.s64 + 4035;
	// add r5,r9,r7
	ctx.r5.u64 = ctx.r9.u64 + ctx.r7.u64;
	// rlwinm r7,r11,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r5,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r11,r7
	ctx.r4.u64 = ctx.r11.u64 + ctx.r7.u64;
	// add r11,r9,r31
	ctx.r11.u64 = ctx.r9.u64 + ctx.r31.u64;
	// rlwinm r3,r4,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// ori r9,r6,48416
	ctx.r9.u64 = ctx.r6.u64 | 48416;
	// stwx r10,r3,r31
	PPC_STORE_U32(ctx.r3.u32 + ctx.r31.u32, ctx.r10.u32);
	// lwz r7,0(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// stwx r7,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r7.u32);
	// lwz r6,4192(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4192);
	// stw r10,9760(r27)
	PPC_STORE_U32(ctx.r27.u32 + 9760, ctx.r10.u32);
	// stwx r6,r11,r25
	PPC_STORE_U32(ctx.r11.u32 + ctx.r25.u32, ctx.r6.u32);
	// lbz r5,12(r8)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r8.u32 + 12);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82127924
	if (ctx.cr6.eq) goto loc_82127924;
	// lwz r11,24(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 24);
	// ld r3,16(r27)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r27.u32 + 16);
	// rldicr r4,r11,32,63
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x82289670
	ctx.lr = 0x82127908;
	sub_82289670(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// lwz r6,100(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r4,r10,-10512
	ctx.r4.s64 = ctx.r10.s64 + -10512;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x82280900
	ctx.lr = 0x82127924;
	sub_82280900(ctx, base);
loc_82127924:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x82289a70
	ctx.lr = 0x82127934;
	sub_82289A70(ctx, base);
	// lwz r11,44(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 44);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82127954
	if (ctx.cr6.eq) goto loc_82127954;
loc_82127940:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82289900
	ctx.lr = 0x82127948;
	sub_82289900(ctx, base);
	// lwz r11,44(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 44);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82127940
	if (!ctx.cr6.eq) goto loc_82127940;
loc_82127954:
	// addi r1,r1,4384
	ctx.r1.s64 = ctx.r1.s64 + 4384;
	// b 0x823ddfac
	__restgprlr_21(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821275A0) {
	__imp__sub_821275A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8212795C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8212795C) {
	__imp__sub_8212795C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82127960) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lbz r10,29088(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 29088);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82127a34
	if (ctx.cr6.eq) goto loc_82127A34;
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// rlwinm r10,r3,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r11,r11,-30024
	ctx.r11.s64 = ctx.r11.s64 + -30024;
	// addi r9,r11,12
	ctx.r9.s64 = ctx.r11.s64 + 12;
	// lwzx r11,r10,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82127a34
	if (ctx.cr6.eq) goto loc_82127A34;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82127a34
	if (ctx.cr6.eq) goto loc_82127A34;
	// lis r9,-32165
	ctx.r9.s64 = -2107965440;
	// lis r10,-32165
	ctx.r10.s64 = -2107965440;
	// addi r8,r9,28832
	ctx.r8.s64 = ctx.r9.s64 + 28832;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// addi r11,r10,9240
	ctx.r11.s64 = ctx.r10.s64 + 9240;
	// lwz r8,352(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 352);
	// beq cr6,0x821279c0
	if (ctx.cr6.eq) goto loc_821279C0;
	// lwz r10,9760(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9760);
	// subf r10,r10,r8
	ctx.r10.s64 = ctx.r8.s64 - ctx.r10.s64;
	// cmpwi cr6,r10,1000
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1000, ctx.xer);
	// blt cr6,0x82127a34
	if (ctx.cr6.lt) goto loc_82127A34;
loc_821279C0:
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x821279d4
	if (!ctx.cr6.eq) goto loc_821279D4;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_821279D4:
	// lis r10,-32155
	ctx.r10.s64 = -2107310080;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lis r9,-32155
	ctx.r9.s64 = -2107310080;
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// lis r6,0
	ctx.r6.s64 = 0;
	// addi r5,r9,-29944
	ctx.r5.s64 = ctx.r9.s64 + -29944;
	// lwz r11,-30028(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30028);
	// clrlwi r9,r7,27
	ctx.r9.u64 = ctx.r7.u32 & 0x1F;
	// ori r4,r6,48796
	ctx.r4.u64 = ctx.r6.u64 | 48796;
	// mullw r10,r3,r4
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r4.s32);
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mulli r11,r9,12
	ctx.r11.s64 = ctx.r9.s64 * 12;
	// addis r9,r5,1
	ctx.r9.s64 = ctx.r5.s64 + 65536;
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r5,r9,-17116
	ctx.r5.s64 = ctx.r9.s64 + -17116;
	// li r4,1000
	ctx.r4.s64 = 1000;
	// divw r3,r4,r7
	ctx.r3.s32 = ctx.r4.s32 / ctx.r7.s32;
	// lwzx r11,r6,r5
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r5.u32);
	// rlwinm r10,r3,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	// subf r9,r11,r8
	ctx.r9.s64 = ctx.r8.s64 - ctx.r11.s64;
	// srawi r8,r9,31
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 31;
	// subfc r7,r3,r9
	ctx.xer.ca = ctx.r9.u32 >= ctx.r3.u32;
	ctx.r7.s64 = ctx.r9.s64 - ctx.r3.s64;
	// adde r3,r10,r8
	temp.u8 = (ctx.r10.u32 + ctx.r8.u32 < ctx.r10.u32) | (ctx.r10.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ctx.r10.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// blr 
	return;
loc_82127A34:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82127960) {
	__imp__sub_82127960(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82127A3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82127A3C) {
	__imp__sub_82127A3C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82127A40) {
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
	// bl 0x82127960
	ctx.lr = 0x82127A58;
	sub_82127960(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82127a68
	if (ctx.cr6.eq) goto loc_82127A68;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821275a0
	ctx.lr = 0x82127A68;
	sub_821275A0(ctx, base);
loc_82127A68:
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

PPC_WEAK_FUNC(sub_82127A40) {
	__imp__sub_82127A40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82127A7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82127A7C) {
	__imp__sub_82127A7C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82127A80) {
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
	// addi r31,r11,28832
	ctx.r31.s64 = ctx.r11.s64 + 28832;
	// lwz r11,464(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 464);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82127b60
	if (!ctx.cr6.eq) goto loc_82127B60;
	// li r11,128
	ctx.r11.s64 = 128;
	// li r10,128
	ctx.r10.s64 = 128;
	// li r9,128
	ctx.r9.s64 = 128;
	// stw r11,456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 456, ctx.r11.u32);
	// stw r10,488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 488, ctx.r10.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r9,472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 472, ctx.r9.u32);
	// li r4,16384
	ctx.r4.s64 = 16384;
	// addi r30,r11,-10368
	ctx.r30.s64 = ctx.r11.s64 + -10368;
	// addi r3,r31,464
	ctx.r3.s64 = ctx.r31.s64 + 464;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x823a21b0
	ctx.lr = 0x82127AD8;
	sub_823A21B0(ctx, base);
	// lwz r11,456(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 456);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r3,r31,468
	ctx.r3.s64 = ctx.r31.s64 + 468;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x823a21b0
	ctx.lr = 0x82127AEC;
	sub_823A21B0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stw r11,460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 460, ctx.r11.u32);
	// addi r3,r31,496
	ctx.r3.s64 = ctx.r31.s64 + 496;
	// lwz r11,488(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 488);
	// rlwinm r4,r11,7,0,24
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0xFFFFFF80;
	// bl 0x823a21b0
	ctx.lr = 0x82127B08;
	sub_823A21B0(ctx, base);
	// lwz r11,488(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 488);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r3,r31,500
	ctx.r3.s64 = ctx.r31.s64 + 500;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x823a21b0
	ctx.lr = 0x82127B1C;
	sub_823A21B0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stw r11,492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 492, ctx.r11.u32);
	// addi r3,r31,480
	ctx.r3.s64 = ctx.r31.s64 + 480;
	// lwz r11,488(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 488);
	// rlwinm r4,r11,7,0,24
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0xFFFFFF80;
	// bl 0x823a21b0
	ctx.lr = 0x82127B38;
	sub_823A21B0(ctx, base);
	// lwz r11,488(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 488);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r3,r31,484
	ctx.r3.s64 = ctx.r31.s64 + 484;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x823a21b0
	ctx.lr = 0x82127B4C;
	sub_823A21B0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 476, ctx.r11.u32);
	// lwz r11,464(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 464);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82127b94
	if (ctx.cr6.eq) goto loc_82127B94;
loc_82127B60:
	// lwz r11,468(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 468);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82127b94
	if (ctx.cr6.eq) goto loc_82127B94;
	// lwz r11,496(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 496);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82127b94
	if (ctx.cr6.eq) goto loc_82127B94;
	// lwz r11,500(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 500);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82127b94
	if (ctx.cr6.eq) goto loc_82127B94;
	// lwz r11,480(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 480);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82127b98
	if (!ctx.cr6.eq) goto loc_82127B98;
loc_82127B94:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82127B98:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
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

PPC_WEAK_FUNC(sub_82127A80) {
	__imp__sub_82127A80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82127BB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82127BB4) {
	__imp__sub_82127BB4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82127BB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82127BC0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r9,4(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// lwz r8,0(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// addi r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 1;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmpw cr6,r7,r8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r8.s32, ctx.xer);
	// bgt cr6,0x82127c64
	if (ctx.cr6.gt) goto loc_82127C64;
	// lwz r8,8(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r9,r9,7,0,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 7) & 0xFFFFFF80;
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// li r5,95
	ctx.r5.s64 = 95;
	// add r31,r9,r8
	ctx.r31.u64 = ctx.r9.u64 + ctx.r8.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// stfsx f0,r9,r8
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r8.u32, temp.u32);
	// lfs f13,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// lfs f12,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// lfs f11,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,12(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// lfs f10,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,16(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// lfs f9,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,20(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// lfs f8,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,24(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// stfs f1,28(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// bl 0x823dfa38
	ctx.lr = 0x82127C40;
	sub_823DFA38(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,127(r31)
	PPC_STORE_U8(ctx.r31.u32 + 127, ctx.r11.u8);
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r29,r10,r8
	PPC_STORE_U32(ctx.r10.u32 + ctx.r8.u32, ctx.r29.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stw r7,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r7.u32);
loc_82127C64:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82127BB8) {
	__imp__sub_82127BB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82127C6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82127C6C) {
	__imp__sub_82127C6C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82127C70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x82127C78;
	__savegprlr_26(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r11,28832
	ctx.r31.s64 = ctx.r11.s64 + 28832;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// lwz r11,324(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 324);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82127cf4
	if (ctx.cr6.eq) goto loc_82127CF4;
	// bl 0x82127a80
	ctx.lr = 0x82127CB0;
	sub_82127A80(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82127cf4
	if (ctx.cr6.eq) goto loc_82127CF4;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r8,r31,488
	ctx.r8.s64 = ctx.r31.s64 + 488;
	// bne cr6,0x82127ccc
	if (!ctx.cr6.eq) goto loc_82127CCC;
	// addi r8,r31,456
	ctx.r8.s64 = ctx.r31.s64 + 456;
loc_82127CCC:
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82127bb8
	ctx.lr = 0x82127CE4;
	sub_82127BB8(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x82127cf4
	if (ctx.cr6.eq) goto loc_82127CF4;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 452, ctx.r11.u32);
loc_82127CF4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82127C70) {
	__imp__sub_82127C70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82127D00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82127D08;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// addi r31,r11,28832
	ctx.r31.s64 = ctx.r11.s64 + 28832;
	// lwz r11,512(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 512);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82127dcc
	if (!ctx.cr6.eq) goto loc_82127DCC;
	// li r11,2048
	ctx.r11.s64 = 2048;
	// li r10,2048
	ctx.r10.s64 = 2048;
	// li r9,2048
	ctx.r9.s64 = 2048;
	// stw r11,504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 504, ctx.r11.u32);
	// stw r10,536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 536, ctx.r10.u32);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// stw r9,520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 520, ctx.r9.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// ori r30,r11,24576
	ctx.r30.u64 = ctx.r11.u64 | 24576;
	// addi r29,r10,-10344
	ctx.r29.s64 = ctx.r10.s64 + -10344;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r3,r31,512
	ctx.r3.s64 = ctx.r31.s64 + 512;
	// bl 0x823a21b0
	ctx.lr = 0x82127D58;
	sub_823A21B0(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,8192
	ctx.r4.s64 = 8192;
	// addi r3,r31,516
	ctx.r3.s64 = ctx.r31.s64 + 516;
	// bl 0x823a21b0
	ctx.lr = 0x82127D68;
	sub_823A21B0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// stw r11,508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 508, ctx.r11.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,544
	ctx.r3.s64 = ctx.r31.s64 + 544;
	// bl 0x823a21b0
	ctx.lr = 0x82127D80;
	sub_823A21B0(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,8192
	ctx.r4.s64 = 8192;
	// addi r3,r31,548
	ctx.r3.s64 = ctx.r31.s64 + 548;
	// bl 0x823a21b0
	ctx.lr = 0x82127D90;
	sub_823A21B0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// stw r11,540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 540, ctx.r11.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,528
	ctx.r3.s64 = ctx.r31.s64 + 528;
	// bl 0x823a21b0
	ctx.lr = 0x82127DA8;
	sub_823A21B0(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,8192
	ctx.r4.s64 = 8192;
	// addi r3,r31,532
	ctx.r3.s64 = ctx.r31.s64 + 532;
	// bl 0x823a21b0
	ctx.lr = 0x82127DB8;
	sub_823A21B0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,524(r31)
	PPC_STORE_U32(ctx.r31.u32 + 524, ctx.r11.u32);
	// lwz r11,512(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 512);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82127e00
	if (ctx.cr6.eq) goto loc_82127E00;
loc_82127DCC:
	// lwz r11,516(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 516);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82127e00
	if (ctx.cr6.eq) goto loc_82127E00;
	// lwz r11,544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 544);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82127e00
	if (ctx.cr6.eq) goto loc_82127E00;
	// lwz r11,548(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 548);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82127e00
	if (ctx.cr6.eq) goto loc_82127E00;
	// lwz r11,528(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 528);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82127e04
	if (!ctx.cr6.eq) goto loc_82127E04;
loc_82127E00:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82127E04:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82127D00) {
	__imp__sub_82127D00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82127E10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// lwz r10,8(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// mulli r11,r11,44
	ctx.r11.s64 = ctx.r11.s64 * 44;
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f12,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lfs f11,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,12(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// lfs f10,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,16(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// lfs f9,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,20(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// lfs f8,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,24(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// lfs f7,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,28(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// lfs f6,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,32(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// lfs f5,12(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,36(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// stw r6,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r6.u32);
	// lwz r11,12(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// lwz r10,4(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r7,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r7.u32);
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stw r7,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r7.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82127E10) {
	__imp__sub_82127E10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82127EA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82127EA4) {
	__imp__sub_82127EA4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82127EA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x82127EB0;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r11,28832
	ctx.r31.s64 = ctx.r11.s64 + 28832;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// lwz r11,324(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 324);
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82127f28
	if (ctx.cr6.eq) goto loc_82127F28;
	// bl 0x82127d00
	ctx.lr = 0x82127EE4;
	sub_82127D00(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82127f28
	if (ctx.cr6.eq) goto loc_82127F28;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r8,r31,536
	ctx.r8.s64 = ctx.r31.s64 + 536;
	// bne cr6,0x82127f00
	if (!ctx.cr6.eq) goto loc_82127F00;
	// addi r8,r31,504
	ctx.r8.s64 = ctx.r31.s64 + 504;
loc_82127F00:
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82127e10
	ctx.lr = 0x82127F18;
	sub_82127E10(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x82127f28
	if (ctx.cr6.eq) goto loc_82127F28;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 452, ctx.r11.u32);
loc_82127F28:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82127EA8) {
	__imp__sub_82127EA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82127F30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x82127F38;
	__savegprlr_26(ctx, base);
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x823de018
	ctx.lr = 0x82127F40;
	__savefpr_24(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fmr f28,f0
	ctx.f28.f64 = ctx.f0.f64;
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmr f30,f0
	ctx.f30.f64 = ctx.f0.f64;
	// lfs f12,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// lfs f0,7324(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7324);
	ctx.f0.f64 = double(temp.f32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmuls f24,f1,f0
	ctx.f24.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// stfs f28,84(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// fmr f29,f13
	ctx.f29.f64 = ctx.f13.f64;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// fmr f27,f13
	ctx.f27.f64 = ctx.f13.f64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r29,r9
	ctx.r29.u64 = ctx.r9.u64;
	// fadds f26,f12,f24
	ctx.f26.f64 = double(float(ctx.f12.f64 + ctx.f24.f64));
	// stfs f26,96(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fsubs f25,f12,f24
	ctx.f25.f64 = double(float(ctx.f12.f64 - ctx.f24.f64));
	// stfs f25,80(r1)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// bl 0x82127ea8
	ctx.lr = 0x82127FC4;
	sub_82127EA8(ctx, base);
	// fsubs f11,f26,f24
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f26.f64 - ctx.f24.f64));
	// fadds f10,f25,f24
	ctx.f10.f64 = double(float(ctx.f25.f64 + ctx.f24.f64));
	// stfs f11,96(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fadds f30,f30,f24
	ctx.f30.f64 = double(float(ctx.f30.f64 + ctx.f24.f64));
	// stfs f30,100(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fsubs f28,f28,f24
	ctx.f28.f64 = double(float(ctx.f28.f64 - ctx.f24.f64));
	// stfs f28,84(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f10,80(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82127ea8
	ctx.lr = 0x82128000;
	sub_82127EA8(ctx, base);
	// fsubs f9,f30,f24
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = double(float(ctx.f30.f64 - ctx.f24.f64));
	// fadds f8,f28,f24
	ctx.f8.f64 = double(float(ctx.f28.f64 + ctx.f24.f64));
	// stfs f9,100(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fadds f7,f27,f24
	ctx.f7.f64 = double(float(ctx.f27.f64 + ctx.f24.f64));
	// stfs f8,84(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fsubs f6,f27,f24
	ctx.f6.f64 = double(float(ctx.f27.f64 - ctx.f24.f64));
	// stfs f7,104(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f6,88(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82127ea8
	ctx.lr = 0x8212803C;
	sub_82127EA8(ctx, base);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8212806c
	if (ctx.cr6.eq) goto loc_8212806C;
	// lbz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8212806c
	if (ctx.cr6.eq) goto loc_8212806C;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82127c70
	ctx.lr = 0x8212806C;
	sub_82127C70(ctx, base);
loc_8212806C:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x823de064
	ctx.lr = 0x82128078;
	__restfpr_24(ctx, base);
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82127F30) {
	__imp__sub_82127F30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8212807C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8212807C) {
	__imp__sub_8212807C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82128080) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// addi r5,r10,-10324
	ctx.r5.s64 = ctx.r10.s64 + -10324;
	// lfs f1,12168(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f1.f64 = double(temp.f32);
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x82127f30
	sub_82127F30(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82128080) {
	__imp__sub_82128080(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821280A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x821280A8;
	__savegprlr_28(ctx, base);
	// stfd f29,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f29.u64);
	// stfd f30,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f30.u64);
	// stfd f31,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f10,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f9,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f8,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f13,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lfs f12,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// li r6,0
	ctx.r6.s64 = 0;
	// lfs f0,13220(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 13220);
	ctx.f0.f64 = double(temp.f32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// fmuls f29,f1,f0
	ctx.f29.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// lfs f11,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f31,5484(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5484);
	ctx.f31.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f30,12168(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f30.f64 = double(temp.f32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stfs f30,96(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// stfs f31,100(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// stfs f31,104(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f31,108(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// fmadds f7,f10,f29,f13
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f29.f64 + ctx.f13.f64));
	// stfs f7,80(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmadds f6,f9,f29,f12
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f29.f64 + ctx.f12.f64));
	// stfs f6,84(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmadds f5,f8,f29,f11
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f29.f64 + ctx.f11.f64));
	// stfs f5,88(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x82127ea8
	ctx.lr = 0x82128134;
	sub_82127EA8(ctx, base);
	// lfs f4,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// lfs f2,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// lfs f1,12(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,16(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f13,f1,f29,f4
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f29.f64 + ctx.f4.f64));
	// lfs f12,20(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f11,f0,f29,f3
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f29.f64 + ctx.f3.f64));
	// fmadds f10,f12,f29,f2
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f29.f64 + ctx.f2.f64));
	// stfs f31,96(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f30,100(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stfs f31,104(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stfs f31,108(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f11,84(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f10,88(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x82127ea8
	ctx.lr = 0x82128190;
	sub_82127EA8(ctx, base);
	// lfs f9,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// lfs f7,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// lfs f6,24(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	ctx.f6.f64 = double(temp.f32);
	// li r6,0
	ctx.r6.s64 = 0;
	// lfs f5,28(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	ctx.f5.f64 = double(temp.f32);
	// fmadds f4,f6,f29,f9
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f29.f64 + ctx.f9.f64));
	// lfs f3,32(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	ctx.f3.f64 = double(temp.f32);
	// fmadds f2,f5,f29,f8
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f29.f64 + ctx.f8.f64));
	// fmadds f1,f3,f29,f7
	ctx.f1.f64 = double(float(ctx.f3.f64 * ctx.f29.f64 + ctx.f7.f64));
	// stfs f31,96(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f31,100(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stfs f30,104(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stfs f31,108(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f4,80(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f2,84(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f1,88(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x82127ea8
	ctx.lr = 0x821281EC;
	sub_82127EA8(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f29,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f30,-56(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821280A0) {
	__imp__sub_821280A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82128200) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x82128208;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r27,r9
	ctx.r27.u64 = ctx.r9.u64;
	// bl 0x821280a0
	ctx.lr = 0x82128234;
	sub_821280A0(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82128264
	if (ctx.cr6.eq) goto loc_82128264;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82128264
	if (ctx.cr6.eq) goto loc_82128264;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82127c70
	ctx.lr = 0x82128264;
	sub_82127C70(ctx, base);
loc_82128264:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82128200) {
	__imp__sub_82128200(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82128270) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,28832
	ctx.r9.s64 = ctx.r11.s64 + 28832;
	// lwz r11,452(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 452);
	// stw r10,452(r9)
	PPC_STORE_U32(ctx.r9.u32 + 452, ctx.r10.u32);
	// stw r11,448(r9)
	PPC_STORE_U32(ctx.r9.u32 + 448, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82128270) {
	__imp__sub_82128270(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8212828C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8212828C) {
	__imp__sub_8212828C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82128290) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x82128298;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82128350
	if (ctx.cr6.eq) goto loc_82128350;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82128350
	if (!ctx.cr6.gt) goto loc_82128350;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r27,r11,28832
	ctx.r27.s64 = ctx.r11.s64 + 28832;
loc_821282D0:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwzx r10,r11,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stwx r10,r11,r30
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r10.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwzx r9,r30,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bgt cr6,0x82128328
	if (ctx.cr6.gt) goto loc_82128328;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r5,128
	ctx.r5.s64 = 128;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// lwzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// stwx r8,r30,r11
	PPC_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r8.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r10,r7,7,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 7) & 0xFFFFFF80;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r3,r29,r11
	ctx.r3.u64 = ctx.r29.u64 + ctx.r11.u64;
	// bl 0x823de1f0
	ctx.lr = 0x82128324;
	sub_823DE1F0(ctx, base);
	// b 0x82128344
	goto loc_82128344;
loc_82128328:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x82128338
	if (ctx.cr6.eq) goto loc_82128338;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,452(r27)
	PPC_STORE_U32(ctx.r27.u32 + 452, ctx.r11.u32);
loc_82128338:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// addi r29,r29,128
	ctx.r29.s64 = ctx.r29.s64 + 128;
loc_82128344:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821282d0
	if (ctx.cr6.lt) goto loc_821282D0;
loc_82128350:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82128290) {
	__imp__sub_82128290(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82128358) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x82128360;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82128418
	if (ctx.cr6.eq) goto loc_82128418;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82128418
	if (!ctx.cr6.gt) goto loc_82128418;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r27,r11,28832
	ctx.r27.s64 = ctx.r11.s64 + 28832;
loc_82128398:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwzx r10,r11,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stwx r10,r11,r30
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r10.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwzx r9,r30,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bgt cr6,0x821283f0
	if (ctx.cr6.gt) goto loc_821283F0;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r5,44
	ctx.r5.s64 = 44;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// lwzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// stwx r8,r30,r11
	PPC_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r8.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mulli r10,r7,44
	ctx.r10.s64 = ctx.r7.s64 * 44;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r3,r29,r11
	ctx.r3.u64 = ctx.r29.u64 + ctx.r11.u64;
	// bl 0x823de1f0
	ctx.lr = 0x821283EC;
	sub_823DE1F0(ctx, base);
	// b 0x8212840c
	goto loc_8212840C;
loc_821283F0:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x82128400
	if (ctx.cr6.eq) goto loc_82128400;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,452(r27)
	PPC_STORE_U32(ctx.r27.u32 + 452, ctx.r11.u32);
loc_82128400:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// addi r29,r29,44
	ctx.r29.s64 = ctx.r29.s64 + 44;
loc_8212840C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82128398
	if (ctx.cr6.lt) goto loc_82128398;
loc_82128418:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82128358) {
	__imp__sub_82128358(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82128420) {
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
	// addi r31,r11,28832
	ctx.r31.s64 = ctx.r11.s64 + 28832;
	// lwz r11,324(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 324);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8212845c
	if (ctx.cr6.eq) goto loc_8212845C;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,456
	ctx.r3.s64 = ctx.r31.s64 + 456;
	// bl 0x82128290
	ctx.lr = 0x82128450;
	sub_82128290(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,504
	ctx.r3.s64 = ctx.r31.s64 + 504;
	// bl 0x82128358
	ctx.lr = 0x8212845C;
	sub_82128358(ctx, base);
loc_8212845C:
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

PPC_WEAK_FUNC(sub_82128420) {
	__imp__sub_82128420(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82128470) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82128470) {
	__imp__sub_82128470(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82128474) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82128474) {
	__imp__sub_82128474(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82128478) {
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
	// addi r31,r11,28832
	ctx.r31.s64 = ctx.r11.s64 + 28832;
	// lwz r11,324(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 324);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821284b4
	if (ctx.cr6.eq) goto loc_821284B4;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,488
	ctx.r3.s64 = ctx.r31.s64 + 488;
	// bl 0x82128290
	ctx.lr = 0x821284A8;
	sub_82128290(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,536
	ctx.r3.s64 = ctx.r31.s64 + 536;
	// bl 0x82128358
	ctx.lr = 0x821284B4;
	sub_82128358(ctx, base);
loc_821284B4:
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

PPC_WEAK_FUNC(sub_82128478) {
	__imp__sub_82128478(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821284C8) {
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
	// addi r31,r11,28832
	ctx.r31.s64 = ctx.r11.s64 + 28832;
	// lwz r11,324(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 324);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8212851c
	if (ctx.cr6.eq) goto loc_8212851C;
	// lwz r11,492(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// lwz r4,496(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 496);
	// rlwinm r5,r11,7,0,24
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0xFFFFFF80;
	// lwz r3,480(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 480);
	// stw r11,476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 476, ctx.r11.u32);
	// bl 0x823de1f0
	ctx.lr = 0x82128504;
	sub_823DE1F0(ctx, base);
	// lwz r11,540(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 540);
	// lwz r4,544(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 544);
	// mulli r5,r11,44
	ctx.r5.s64 = ctx.r11.s64 * 44;
	// lwz r3,528(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 528);
	// stw r11,524(r31)
	PPC_STORE_U32(ctx.r31.u32 + 524, ctx.r11.u32);
	// bl 0x823de1f0
	ctx.lr = 0x8212851C;
	sub_823DE1F0(ctx, base);
loc_8212851C:
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

PPC_WEAK_FUNC(sub_821284C8) {
	__imp__sub_821284C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82128530) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// addi r10,r11,28832
	ctx.r10.s64 = ctx.r11.s64 + 28832;
	// lwz r3,448(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 448);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82128530) {
	__imp__sub_82128530(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82128540) {
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
	// addi r31,r11,28832
	ctx.r31.s64 = ctx.r11.s64 + 28832;
	// addi r3,r31,512
	ctx.r3.s64 = ctx.r31.s64 + 512;
	// bl 0x823a2208
	ctx.lr = 0x82128560;
	sub_823A2208(ctx, base);
	// addi r3,r31,516
	ctx.r3.s64 = ctx.r31.s64 + 516;
	// bl 0x823a2208
	ctx.lr = 0x82128568;
	sub_823A2208(ctx, base);
	// addi r3,r31,544
	ctx.r3.s64 = ctx.r31.s64 + 544;
	// bl 0x823a2208
	ctx.lr = 0x82128570;
	sub_823A2208(ctx, base);
	// addi r3,r31,548
	ctx.r3.s64 = ctx.r31.s64 + 548;
	// bl 0x823a2208
	ctx.lr = 0x82128578;
	sub_823A2208(ctx, base);
	// addi r3,r31,528
	ctx.r3.s64 = ctx.r31.s64 + 528;
	// bl 0x823a2208
	ctx.lr = 0x82128580;
	sub_823A2208(ctx, base);
	// addi r3,r31,532
	ctx.r3.s64 = ctx.r31.s64 + 532;
	// bl 0x823a2208
	ctx.lr = 0x82128588;
	sub_823A2208(ctx, base);
	// addi r3,r31,464
	ctx.r3.s64 = ctx.r31.s64 + 464;
	// bl 0x823a2208
	ctx.lr = 0x82128590;
	sub_823A2208(ctx, base);
	// addi r3,r31,468
	ctx.r3.s64 = ctx.r31.s64 + 468;
	// bl 0x823a2208
	ctx.lr = 0x82128598;
	sub_823A2208(ctx, base);
	// addi r3,r31,496
	ctx.r3.s64 = ctx.r31.s64 + 496;
	// bl 0x823a2208
	ctx.lr = 0x821285A0;
	sub_823A2208(ctx, base);
	// addi r3,r31,500
	ctx.r3.s64 = ctx.r31.s64 + 500;
	// bl 0x823a2208
	ctx.lr = 0x821285A8;
	sub_823A2208(ctx, base);
	// addi r3,r31,480
	ctx.r3.s64 = ctx.r31.s64 + 480;
	// bl 0x823a2208
	ctx.lr = 0x821285B0;
	sub_823A2208(ctx, base);
	// addi r3,r31,484
	ctx.r3.s64 = ctx.r31.s64 + 484;
	// bl 0x823a2208
	ctx.lr = 0x821285B8;
	sub_823A2208(ctx, base);
	// li r5,104
	ctx.r5.s64 = 104;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,448
	ctx.r3.s64 = ctx.r31.s64 + 448;
	// bl 0x823de090
	ctx.lr = 0x821285C8;
	sub_823DE090(ctx, base);
	// bl 0x823a2248
	ctx.lr = 0x821285CC;
	sub_823A2248(ctx, base);
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

PPC_WEAK_FUNC(sub_82128540) {
	__imp__sub_82128540(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821285E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lwz r3,29256(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 29256);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821285E0) {
	__imp__sub_821285E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821285EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821285EC) {
	__imp__sub_821285EC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821285F0) {
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
	ctx.lr = 0x82128600;
	sub_82310110(ctx, base);
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// stw r3,29256(r11)
	PPC_STORE_U32(ctx.r11.u32 + 29256, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821285F0) {
	__imp__sub_821285F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82128618) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,29112
	ctx.r4.s64 = ctx.r11.s64 + 29112;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r8,r4,28
	ctx.r8.s64 = ctx.r4.s64 + 28;
	// li r7,0
	ctx.r7.s64 = 0;
loc_82128630:
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r10,r8,-32
	ctx.r10.s64 = ctx.r8.s64 + -32;
	// addi r11,r8,-8
	ctx.r11.s64 = ctx.r8.s64 + -8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82128640:
	// stw r5,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r5.u32);
	// stwu r6,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	ctx.r11.u32 = ea;
	// stwu r7,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82128640
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82128640;
	// addi r8,r8,72
	ctx.r8.s64 = ctx.r8.s64 + 72;
	// addi r11,r4,172
	ctx.r11.s64 = ctx.r4.s64 + 172;
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82128630
	if (ctx.cr6.lt) goto loc_82128630;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82128618) {
	__imp__sub_82128618(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82128664) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82128664) {
	__imp__sub_82128664(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82128668) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82128670;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r11,1380
	ctx.r31.s64 = ctx.r11.s64 + 1380;
loc_82128684:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x822e8058
	ctx.lr = 0x82128690;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821286b4
	if (ctx.cr6.eq) goto loc_821286B4;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplwi cr6,r30,6
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 6, ctx.xer);
	// blt cr6,0x82128684
	if (ctx.cr6.lt) goto loc_82128684;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_821286B4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82128668) {
	__imp__sub_82128668(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821286C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x821286C8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r11,1428
	ctx.r31.s64 = ctx.r11.s64 + 1428;
loc_821286DC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x822e8058
	ctx.lr = 0x821286E8;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8212870c
	if (ctx.cr6.eq) goto loc_8212870C;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplwi cr6,r30,6
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 6, ctx.xer);
	// blt cr6,0x821286dc
	if (ctx.cr6.lt) goto loc_821286DC;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_8212870C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821286C0) {
	__imp__sub_821286C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82128718) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,1380
	ctx.r9.s64 = ctx.r11.s64 + 1380;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82128718) {
	__imp__sub_82128718(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8212872C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8212872C) {
	__imp__sub_8212872C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82128730) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,1428
	ctx.r9.s64 = ctx.r11.s64 + 1428;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82128730) {
	__imp__sub_82128730(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82128744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82128744) {
	__imp__sub_82128744(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82128748) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82128750;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r11,1452
	ctx.r31.s64 = ctx.r11.s64 + 1452;
loc_82128764:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x822e8058
	ctx.lr = 0x82128770;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82128794
	if (ctx.cr6.eq) goto loc_82128794;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplwi cr6,r30,2
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 2, ctx.xer);
	// blt cr6,0x82128764
	if (ctx.cr6.lt) goto loc_82128764;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_82128794:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82128748) {
	__imp__sub_82128748(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821287A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,1452
	ctx.r9.s64 = ctx.r11.s64 + 1452;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821287A0) {
	__imp__sub_821287A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821287B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821287B4) {
	__imp__sub_821287B4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821287B8) {
	PPC_FUNC_PROLOGUE();
	// addi r10,r5,3
	ctx.r10.s64 = ctx.r5.s64 + 3;
	// rlwinm r11,r5,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r8,r11,r3
	ctx.r8.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stwx r4,r9,r3
	PPC_STORE_U32(ctx.r9.u32 + ctx.r3.u32, ctx.r4.u32);
	// stw r6,28(r8)
	PPC_STORE_U32(ctx.r8.u32 + 28, ctx.r6.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821287B8) {
	__imp__sub_821287B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821287D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821287D4) {
	__imp__sub_821287D4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821287D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x821287E0;
	__savegprlr_27(ctx, base);
	// stwu r1,-1152(r1)
	ea = -1152 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31937
	ctx.r11.s64 = -2093023232;
	// addi r31,r11,-17592
	ctx.r31.s64 = ctx.r11.s64 + -17592;
	// addi r10,r31,68
	ctx.r10.s64 = ctx.r31.s64 + 68;
	// lwz r11,-17592(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17592);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r29,r11,r10
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r29,2
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 2, ctx.xer);
	// bge cr6,0x8212881c
	if (!ctx.cr6.lt) goto loc_8212881C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r3,14
	ctx.r3.s64 = 14;
	// addi r4,r11,-10092
	ctx.r4.s64 = ctx.r11.s64 + -10092;
	// bl 0x82280900
	ctx.lr = 0x82128814;
	sub_82280900(ctx, base);
	// addi r1,r1,1152
	ctx.r1.s64 = ctx.r1.s64 + 1152;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_8212881C:
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1, ctx.xer);
	// addi r27,r10,-28736
	ctx.r27.s64 = ctx.r10.s64 + -28736;
	// ble cr6,0x8212883c
	if (!ctx.cr6.gt) goto loc_8212883C;
	// addi r10,r31,100
	ctx.r10.s64 = ctx.r31.s64 + 100;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r4,4(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x82128840
	goto loc_82128840;
loc_8212883C:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
loc_82128840:
	// li r5,1024
	ctx.r5.s64 = 1024;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822e7e98
	ctx.lr = 0x8212884C;
	sub_822E7E98(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822e81e0
	ctx.lr = 0x82128854;
	sub_822E81E0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82128668
	ctx.lr = 0x8212885C;
	sub_82128668(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x821288c0
	if (!ctx.cr6.eq) goto loc_821288C0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r31,68
	ctx.r10.s64 = ctx.r31.s64 + 68;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// ble cr6,0x821288a4
	if (!ctx.cr6.gt) goto loc_821288A4;
	// addi r10,r31,100
	ctx.r10.s64 = ctx.r31.s64 + 100;
	// li r3,14
	ctx.r3.s64 = 14;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r4,r11,-10120
	ctx.r4.s64 = ctx.r11.s64 + -10120;
	// lwz r5,4(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// bl 0x82280900
	ctx.lr = 0x8212889C;
	sub_82280900(ctx, base);
	// addi r1,r1,1152
	ctx.r1.s64 = ctx.r1.s64 + 1152;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_821288A4:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
loc_821288A8:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r3,14
	ctx.r3.s64 = 14;
	// addi r4,r11,-10120
	ctx.r4.s64 = ctx.r11.s64 + -10120;
	// bl 0x82280900
	ctx.lr = 0x821288B8;
	sub_82280900(ctx, base);
	// addi r1,r1,1152
	ctx.r1.s64 = ctx.r1.s64 + 1152;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_821288C0:
	// cmpwi cr6,r29,2
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 2, ctx.xer);
	// ble cr6,0x82128944
	if (!ctx.cr6.gt) goto loc_82128944;
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
	// ble cr6,0x821288f0
	if (!ctx.cr6.gt) goto loc_821288F0;
	// addi r10,r31,100
	ctx.r10.s64 = ctx.r31.s64 + 100;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r4,8(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// b 0x821288f4
	goto loc_821288F4;
loc_821288F0:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
loc_821288F4:
	// li r5,1024
	ctx.r5.s64 = 1024;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822e7e98
	ctx.lr = 0x82128900;
	sub_822E7E98(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822e81e0
	ctx.lr = 0x82128908;
	sub_822E81E0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821286c0
	ctx.lr = 0x82128910;
	sub_821286C0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x82128948
	if (!ctx.cr6.eq) goto loc_82128948;
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
	// ble cr6,0x821288a4
	if (!ctx.cr6.gt) goto loc_821288A4;
	// addi r10,r31,100
	ctx.r10.s64 = ctx.r31.s64 + 100;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r5,8(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// b 0x821288a8
	goto loc_821288A8;
loc_82128944:
	// li r30,-1
	ctx.r30.s64 = -1;
loc_82128948:
	// cmpwi cr6,r29,3
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 3, ctx.xer);
	// ble cr6,0x821289f8
	if (!ctx.cr6.gt) goto loc_821289F8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r31,68
	ctx.r10.s64 = ctx.r31.s64 + 68;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// ble cr6,0x82128978
	if (!ctx.cr6.gt) goto loc_82128978;
	// addi r10,r31,100
	ctx.r10.s64 = ctx.r31.s64 + 100;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r4,12(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// b 0x8212897c
	goto loc_8212897C;
loc_82128978:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
loc_8212897C:
	// li r5,1024
	ctx.r5.s64 = 1024;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822e7e98
	ctx.lr = 0x82128988;
	sub_822E7E98(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822e81e0
	ctx.lr = 0x82128990;
	sub_822E81E0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82128748
	ctx.lr = 0x82128998;
	sub_82128748(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x821289fc
	if (!ctx.cr6.eq) goto loc_821289FC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r31,68
	ctx.r10.s64 = ctx.r31.s64 + 68;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// ble cr6,0x821289dc
	if (!ctx.cr6.gt) goto loc_821289DC;
	// addi r10,r31,100
	ctx.r10.s64 = ctx.r31.s64 + 100;
	// li r3,14
	ctx.r3.s64 = 14;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r4,r11,-10152
	ctx.r4.s64 = ctx.r11.s64 + -10152;
	// lwz r5,12(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// bl 0x82280900
	ctx.lr = 0x821289D4;
	sub_82280900(ctx, base);
	// addi r1,r1,1152
	ctx.r1.s64 = ctx.r1.s64 + 1152;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_821289DC:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r11,-10152
	ctx.r4.s64 = ctx.r11.s64 + -10152;
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x82280900
	ctx.lr = 0x821289F0;
	sub_82280900(ctx, base);
	// addi r1,r1,1152
	ctx.r1.s64 = ctx.r1.s64 + 1152;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_821289F8:
	// li r3,1
	ctx.r3.s64 = 1;
loc_821289FC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r9,r31,4
	ctx.r9.s64 = ctx.r31.s64 + 4;
	// lis r8,-32166
	ctx.r8.s64 = -2108030976;
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r8,29112
	ctx.r8.s64 = ctx.r8.s64 + 29112;
	// addi r6,r30,3
	ctx.r6.s64 = ctx.r30.s64 + 3;
	// rlwinm r10,r30,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r5,r6,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r11,r7,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stwx r28,r5,r11
	PPC_STORE_U32(ctx.r5.u32 + ctx.r11.u32, ctx.r28.u32);
	// stw r3,28(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28, ctx.r3.u32);
	// addi r1,r1,1152
	ctx.r1.s64 = ctx.r1.s64 + 1152;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821287D8) {
	__imp__sub_821287D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82128A44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82128A44) {
	__imp__sub_82128A44(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82128A48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r9,-31937
	ctx.r9.s64 = -2093023232;
	// li r10,6
	ctx.r10.s64 = 6;
	// addi r11,r9,-17592
	ctx.r11.s64 = ctx.r9.s64 + -17592;
	// lis r8,-32166
	ctx.r8.s64 = -2108030976;
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
	// lwz r11,-17592(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17592);
	// addi r9,r8,29112
	ctx.r9.s64 = ctx.r8.s64 + 29112;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// lwzx r11,r6,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r10,-1
	ctx.r10.s64 = -1;
	// rlwinm r11,r5,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
loc_82128A88:
	// stwu r10,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82128a88
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82128A88;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82128A48) {
	__imp__sub_82128A48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82128A94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82128A94) {
	__imp__sub_82128A94(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82128A98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x82128AA0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r3,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// lis r9,-32166
	ctx.r9.s64 = -2108030976;
	// add r10,r3,r11
	ctx.r10.u64 = ctx.r3.u64 + ctx.r11.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r11,r9,29112
	ctx.r11.s64 = ctx.r9.s64 + 29112;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r4,r8,-10016
	ctx.r4.s64 = ctx.r8.s64 + -10016;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x822d3ad0
	ctx.lr = 0x82128AD0;
	sub_822D3AD0(ctx, base);
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// addi r29,r31,24
	ctx.r29.s64 = ctx.r31.s64 + 24;
	// addi r31,r11,1380
	ctx.r31.s64 = ctx.r11.s64 + 1380;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r30,r31,48
	ctx.r30.s64 = ctx.r31.s64 + 48;
	// addi r27,r11,-10036
	ctx.r27.s64 = ctx.r11.s64 + -10036;
loc_82128AE8:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82128b1c
	if (ctx.cr6.eq) goto loc_82128B1C;
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r31,72
	ctx.r8.s64 = ctx.r31.s64 + 72;
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwzx r5,r9,r31
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// lwzx r7,r7,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// bl 0x822d3ad0
	ctx.lr = 0x82128B1C;
	sub_822D3AD0(ctx, base);
loc_82128B1C:
	// addi r11,r31,48
	ctx.r11.s64 = ctx.r31.s64 + 48;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82128ae8
	if (ctx.cr6.lt) goto loc_82128AE8;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82128A98) {
	__imp__sub_82128A98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82128B3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82128B3C) {
	__imp__sub_82128B3C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82128B40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// rlwinm r11,r3,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// lis r9,-32166
	ctx.r9.s64 = -2108030976;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// addi r8,r4,3
	ctx.r8.s64 = ctx.r4.s64 + 3;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r9,29112
	ctx.r11.s64 = ctx.r9.s64 + 29112;
	// rlwinm r7,r8,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r10,r7,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x82128b78
	if (!ctx.cr6.eq) goto loc_82128B78;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_82128B78:
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r4,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// add r7,r9,r11
	ctx.r7.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwzx r6,r10,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// extsw r5,r6
	ctx.r5.s64 = ctx.r6.s32;
	// lfs f0,-29224(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -29224);
	ctx.f0.f64 = double(temp.f32);
	// lwz r4,28(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 28);
	// std r5,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r5.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f1,f11,f0
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lis r9,-32191
	ctx.r9.s64 = -2109669376;
	// addi r8,r9,1404
	ctx.r8.s64 = ctx.r9.s64 + 1404;
	// lwzx r10,r10,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x82128bfc
	if (ctx.cr6.eq) goto loc_82128BFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// std r8,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r8.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f13,f1,f1
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f1.f64));
	// fmuls f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmadds f12,f0,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fsqrts f11,f12
	ctx.f11.f64 = double(float(sqrt(ctx.f12.f64)));
	// fmuls f1,f11,f1
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f1.f64));
	// blr 
	return;
loc_82128BFC:
	// fmuls f13,f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f1.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f12,f0,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fsqrts f11,f12
	ctx.f11.f64 = double(float(sqrt(ctx.f12.f64)));
	// fmuls f1,f11,f1
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f1.f64));
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82128B40) {
	__imp__sub_82128B40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82128C18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x82128C20;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// rlwinm r10,r3,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r11,r11,-30024
	ctx.r11.s64 = ctx.r11.s64 + -30024;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82128cf8
	if (ctx.cr6.eq) goto loc_82128CF8;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-9972
	ctx.r3.s64 = ctx.r11.s64 + -9972;
	// bl 0x822e03a0
	ctx.lr = 0x82128C5C;
	sub_822E03A0(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r3,r10,-10000
	ctx.r3.s64 = ctx.r10.s64 + -10000;
	// bl 0x822e03a0
	ctx.lr = 0x82128C6C;
	sub_822E03A0(ctx, base);
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// addi r10,r11,1460
	ctx.r10.s64 = ctx.r11.s64 + 1460;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82128C78:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r30,r9
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x82128cb0
	if (ctx.cr6.eq) goto loc_82128CB0;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r9,r10,32
	ctx.r9.s64 = ctx.r10.s64 + 32;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82128c78
	if (ctx.cr6.lt) goto loc_82128C78;
loc_82128C94:
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// lwz r11,4688(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4688);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82128d04
	if (ctx.cr6.eq) goto loc_82128D04;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_82128CB0:
	// cmpwi cr6,r27,1
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 1, ctx.xer);
	// bne cr6,0x82128ccc
	if (!ctx.cr6.eq) goto loc_82128CCC;
	// add r11,r28,r29
	ctx.r11.u64 = ctx.r28.u64 + ctx.r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_82128CCC:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x82128cec
	if (!ctx.cr6.gt) goto loc_82128CEC;
	// add r11,r3,r29
	ctx.r11.u64 = ctx.r3.u64 + ctx.r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_82128CEC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_82128CF8:
	// rlwinm r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82128c94
	if (!ctx.cr6.eq) goto loc_82128C94;
loc_82128D04:
	// li r11,1
	ctx.r11.s64 = 1;
	// subfc r10,r27,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r27.u32;
	ctx.r10.s64 = ctx.r11.s64 - ctx.r27.s64;
	// eqv r9,r27,r11
	ctx.r9.u64 = ~(ctx.r27.u64 ^ ctx.r11.u64);
	// rlwinm r8,r9,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// addze r7,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r7.s64 = temp.s64;
	// clrlwi r3,r7,31
	ctx.r3.u64 = ctx.r7.u32 & 0x1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82128C18) {
	__imp__sub_82128C18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82128D24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82128D24) {
	__imp__sub_82128D24(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82128D28) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r3,20
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 20, ctx.xer);
	// beq cr6,0x82128d4c
	if (ctx.cr6.eq) goto loc_82128D4C;
	// cmpwi cr6,r3,21
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 21, ctx.xer);
	// beq cr6,0x82128d4c
	if (ctx.cr6.eq) goto loc_82128D4C;
	// cmpwi cr6,r3,22
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 22, ctx.xer);
	// beq cr6,0x82128d4c
	if (ctx.cr6.eq) goto loc_82128D4C;
	// cmpwi cr6,r3,23
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 23, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_82128D4C:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82128D28) {
	__imp__sub_82128D28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82128D54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82128D54) {
	__imp__sub_82128D54(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82128D58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82128D60;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x82128dcc
	if (ctx.cr6.eq) goto loc_82128DCC;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-9972
	ctx.r3.s64 = ctx.r11.s64 + -9972;
	// bl 0x822e03a0
	ctx.lr = 0x82128D84;
	sub_822E03A0(ctx, base);
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// addi r10,r11,1460
	ctx.r10.s64 = ctx.r11.s64 + 1460;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82128D90:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r31,r9
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x82128db4
	if (ctx.cr6.eq) goto loc_82128DB4;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r9,r10,32
	ctx.r9.s64 = ctx.r10.s64 + 32;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82128d90
	if (ctx.cr6.lt) goto loc_82128D90;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_82128DB4:
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// rlwinm r10,r30,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r11,r11,-30024
	ctx.r11.s64 = ctx.r11.s64 + -30024;
	// add r9,r3,r29
	ctx.r9.u64 = ctx.r3.u64 + ctx.r29.u64;
	// addi r8,r11,20
	ctx.r8.s64 = ctx.r11.s64 + 20;
	// stwx r9,r10,r8
	PPC_STORE_U32(ctx.r10.u32 + ctx.r8.u32, ctx.r9.u32);
loc_82128DCC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82128D58) {
	__imp__sub_82128D58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82128DD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82128DD4) {
	__imp__sub_82128DD4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82128DD8) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r3,20
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 20, ctx.xer);
	// beq cr6,0x82128de8
	if (ctx.cr6.eq) goto loc_82128DE8;
	// cmpwi cr6,r3,21
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 21, ctx.xer);
	// bne cr6,0x82128df8
	if (!ctx.cr6.eq) goto loc_82128DF8;
loc_82128DE8:
	// cmpwi cr6,r4,22
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 22, ctx.xer);
	// beq cr6,0x82128e20
	if (ctx.cr6.eq) goto loc_82128E20;
	// cmpwi cr6,r4,23
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 23, ctx.xer);
	// beq cr6,0x82128e20
	if (ctx.cr6.eq) goto loc_82128E20;
loc_82128DF8:
	// cmpwi cr6,r3,22
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 22, ctx.xer);
	// beq cr6,0x82128e08
	if (ctx.cr6.eq) goto loc_82128E08;
	// cmpwi cr6,r3,23
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 23, ctx.xer);
	// bne cr6,0x82128e18
	if (!ctx.cr6.eq) goto loc_82128E18;
loc_82128E08:
	// cmpwi cr6,r4,20
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 20, ctx.xer);
	// beq cr6,0x82128e20
	if (ctx.cr6.eq) goto loc_82128E20;
	// cmpwi cr6,r4,21
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 21, ctx.xer);
	// beq cr6,0x82128e20
	if (ctx.cr6.eq) goto loc_82128E20;
loc_82128E18:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82128E20:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82128DD8) {
	__imp__sub_82128DD8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82128E28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf54
	ctx.lr = 0x82128E30;
	__savegprlr_19(ctx, base);
	// stwu r1,-1216(r1)
	ea = -1216 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// rlwinm r30,r3,5,0,26
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r31,r11,-30024
	ctx.r31.s64 = ctx.r11.s64 + -30024;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// add r24,r30,r31
	ctx.r24.u64 = ctx.r30.u64 + ctx.r31.u64;
	// addi r27,r11,-32200
	ctx.r27.s64 = ctx.r11.s64 + -32200;
	// mulli r26,r3,3368
	ctx.r26.s64 = ctx.r3.s64 * 3368;
	// lwz r10,4(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// addi r11,r27,292
	ctx.r11.s64 = ctx.r27.s64 + 292;
	// rlwinm r9,r10,0,27,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r20,r4
	ctx.r20.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// mr r22,r7
	ctx.r22.u64 = ctx.r7.u64;
	// li r21,0
	ctx.r21.s64 = 0;
	// add r28,r26,r11
	ctx.r28.u64 = ctx.r26.u64 + ctx.r11.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82128e8c
	if (ctx.cr6.eq) goto loc_82128E8C;
	// bl 0x822c3cc8
	ctx.lr = 0x82128E84;
	sub_822C3CC8(ctx, base);
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// b 0x82128e90
	goto loc_82128E90;
loc_82128E8C:
	// mr r19,r21
	ctx.r19.u64 = ctx.r21.u64;
loc_82128E90:
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq cr6,0x82128f20
	if (ctx.cr6.eq) goto loc_82128F20;
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// bne cr6,0x82128f20
	if (!ctx.cr6.eq) goto loc_82128F20;
	// cmpwi cr6,r29,20
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 20, ctx.xer);
	// beq cr6,0x82128ec4
	if (ctx.cr6.eq) goto loc_82128EC4;
	// cmpwi cr6,r29,21
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 21, ctx.xer);
	// beq cr6,0x82128ec4
	if (ctx.cr6.eq) goto loc_82128EC4;
	// cmpwi cr6,r29,22
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 22, ctx.xer);
	// beq cr6,0x82128ec4
	if (ctx.cr6.eq) goto loc_82128EC4;
	// cmpwi cr6,r29,23
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 23, ctx.xer);
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
	// bne cr6,0x82128ec8
	if (!ctx.cr6.eq) goto loc_82128EC8;
loc_82128EC4:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82128EC8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82128f20
	if (ctx.cr6.eq) goto loc_82128F20;
	// lwz r3,28(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 28);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82128f04
	if (ctx.cr6.eq) goto loc_82128F04;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82128dd8
	ctx.lr = 0x82128EE8;
	sub_82128DD8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82128f04
	if (ctx.cr6.eq) goto loc_82128F04;
	// bl 0x82310110
	ctx.lr = 0x82128EF8;
	sub_82310110(ctx, base);
	// lwz r11,24(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 24);
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// bgt cr6,0x8212931c
	if (ctx.cr6.gt) goto loc_8212931C;
loc_82128F04:
	// bl 0x82310110
	ctx.lr = 0x82128F08;
	sub_82310110(ctx, base);
	// lis r11,-31835
	ctx.r11.s64 = -2086338560;
	// lwz r11,6120(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6120);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r29,28(r24)
	PPC_STORE_U32(ctx.r24.u32 + 28, ctx.r29.u32);
	// add r9,r3,r10
	ctx.r9.u64 = ctx.r3.u64 + ctx.r10.u64;
	// stw r9,24(r24)
	PPC_STORE_U32(ctx.r24.u32 + 24, ctx.r9.u32);
loc_82128F20:
	// rlwinm r11,r29,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r31,12
	ctx.r10.s64 = ctx.r31.s64 + 12;
	// add r9,r29,r11
	ctx.r9.u64 = ctx.r29.u64 + ctx.r11.u64;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r30,r10
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// add r31,r11,r28
	ctx.r31.u64 = ctx.r11.u64 + ctx.r28.u64;
	// stwx r23,r11,r28
	PPC_STORE_U32(ctx.r11.u32 + ctx.r28.u32, ctx.r23.u32);
	// beq cr6,0x82128f68
	if (ctx.cr6.eq) goto loc_82128F68;
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// beq cr6,0x82128f5c
	if (ctx.cr6.eq) goto loc_82128F5C;
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// beq cr6,0x82128f5c
	if (ctx.cr6.eq) goto loc_82128F5C;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x82128f68
	if (!ctx.cr6.eq) goto loc_82128F68;
loc_82128F5C:
	// bl 0x82310110
	ctx.lr = 0x82128F60;
	sub_82310110(ctx, base);
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// stw r3,29256(r11)
	PPC_STORE_U32(ctx.r11.u32 + 29256, ctx.r3.u32);
loc_82128F68:
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq cr6,0x82128ffc
	if (ctx.cr6.eq) goto loc_82128FFC;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82128f94
	if (!ctx.cr6.eq) goto loc_82128F94;
	// addi r11,r27,288
	ctx.r11.s64 = ctx.r27.s64 + 288;
	// lwzx r10,r26,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r11.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwx r10,r26,r11
	PPC_STORE_U32(ctx.r26.u32 + ctx.r11.u32, ctx.r10.u32);
loc_82128F94:
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82128c18
	ctx.lr = 0x82128FA8;
	sub_82128C18(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8212931c
	if (!ctx.cr6.eq) goto loc_8212931C;
loc_82128FB4:
	// bl 0x82141b20
	ctx.lr = 0x82128FB8;
	sub_82141B20(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82128fd0
	if (!ctx.cr6.eq) goto loc_82128FD0;
	// lbz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8212931c
	if (ctx.cr6.eq) goto loc_8212931C;
loc_82128FD0:
	// lwz r11,4(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8212901c
	if (ctx.cr6.eq) goto loc_8212901C;
	// neg r11,r23
	ctx.r11.s64 = -ctx.r23.s64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// andc r10,r11,r23
	ctx.r10.u64 = ctx.r11.u64 & ~ctx.r23.u64;
	// rlwinm r4,r10,1,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// bl 0x82141a48
	ctx.lr = 0x82128FF4;
	sub_82141A48(ctx, base);
	// addi r1,r1,1216
	ctx.r1.s64 = ctx.r1.s64 + 1216;
	// b 0x823ddfa4
	__restgprlr_19(ctx, base);
	return;
loc_82128FFC:
	// addi r11,r27,288
	ctx.r11.s64 = ctx.r27.s64 + 288;
	// stw r21,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r21.u32);
	// lwzx r10,r26,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r11.u32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stwx r10,r26,r11
	PPC_STORE_U32(ctx.r26.u32 + ctx.r11.u32, ctx.r10.u32);
	// bge 0x82128fb4
	if (!ctx.cr0.lt) goto loc_82128FB4;
	// stwx r21,r26,r11
	PPC_STORE_U32(ctx.r26.u32 + ctx.r11.u32, ctx.r21.u32);
	// b 0x82128fb4
	goto loc_82128FB4;
loc_8212901C:
	// lis r11,-32021
	ctx.r11.s64 = -2098528256;
	// lwz r11,-14904(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14904);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82129074
	if (ctx.cr6.eq) goto loc_82129074;
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// lwz r11,4688(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4688);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82129074
	if (ctx.cr6.eq) goto loc_82129074;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82141198
	ctx.lr = 0x82129048;
	sub_82141198(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82129074
	if (!ctx.cr6.eq) goto loc_82129074;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// addi r4,r11,-9848
	ctx.r4.s64 = ctx.r11.s64 + -9848;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x82280900
	ctx.lr = 0x8212906C;
	sub_82280900(ctx, base);
	// addi r1,r1,1216
	ctx.r1.s64 = ctx.r1.s64 + 1216;
	// b 0x823ddfa4
	__restgprlr_19(ctx, base);
	return;
loc_82129074:
	// lwz r11,4(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// addi r8,r27,3364
	ctx.r8.s64 = ctx.r27.s64 + 3364;
	// rlwinm r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82129108
	if (ctx.cr6.eq) goto loc_82129108;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// ble cr6,0x82129108
	if (!ctx.cr6.gt) goto loc_82129108;
	// cmpwi cr6,r29,3
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 3, ctx.xer);
	// beq cr6,0x821290f8
	if (ctx.cr6.eq) goto loc_821290F8;
	// cmpwi cr6,r29,2
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 2, ctx.xer);
	// beq cr6,0x821290f8
	if (ctx.cr6.eq) goto loc_821290F8;
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1, ctx.xer);
	// beq cr6,0x821290e8
	if (ctx.cr6.eq) goto loc_821290E8;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8212931c
	if (ctx.cr6.eq) goto loc_8212931C;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r10,r10,-9860
	ctx.r10.s64 = ctx.r10.s64 + -9860;
loc_821290BC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	// beq cr6,0x821290e0
	if (ctx.cr6.eq) goto loc_821290E0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x821290bc
	if (ctx.cr6.eq) goto loc_821290BC;
loc_821290E0:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8212931c
	if (!ctx.cr6.eq) goto loc_8212931C;
loc_821290E8:
	// li r11,1
	ctx.r11.s64 = 1;
	// stwx r11,r26,r8
	PPC_STORE_U32(ctx.r26.u32 + ctx.r8.u32, ctx.r11.u32);
	// addi r1,r1,1216
	ctx.r1.s64 = ctx.r1.s64 + 1216;
	// b 0x823ddfa4
	__restgprlr_19(ctx, base);
	return;
loc_821290F8:
	// li r11,2
	ctx.r11.s64 = 2;
	// stwx r11,r26,r8
	PPC_STORE_U32(ctx.r26.u32 + ctx.r8.u32, ctx.r11.u32);
	// addi r1,r1,1216
	ctx.r1.s64 = ctx.r1.s64 + 1216;
	// b 0x823ddfa4
	__restgprlr_19(ctx, base);
	return;
loc_82129108:
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// stwx r21,r26,r8
	PPC_STORE_U32(ctx.r26.u32 + ctx.r8.u32, ctx.r21.u32);
	// beq cr6,0x82129150
	if (ctx.cr6.eq) goto loc_82129150;
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1, ctx.xer);
	// beq cr6,0x82129124
	if (ctx.cr6.eq) goto loc_82129124;
	// cmpwi cr6,r29,14
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 14, ctx.xer);
	// bne cr6,0x82129150
	if (!ctx.cr6.eq) goto loc_82129150;
loc_82129124:
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// beq cr6,0x82129134
	if (ctx.cr6.eq) goto loc_82129134;
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// bne cr6,0x82129150
	if (!ctx.cr6.eq) goto loc_82129150;
loc_82129134:
	// rlwinm r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82129150
	if (!ctx.cr6.eq) goto loc_82129150;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x821327c8
	ctx.lr = 0x82129148;
	sub_821327C8(ctx, base);
	// addi r1,r1,1216
	ctx.r1.s64 = ctx.r1.s64 + 1216;
	// b 0x823ddfa4
	__restgprlr_19(ctx, base);
	return;
loc_82129150:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821291b0
	if (ctx.cr6.eq) goto loc_821291B0;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r4,r11,-9872
	ctx.r4.s64 = ctx.r11.s64 + -9872;
	// bl 0x822e8058
	ctx.lr = 0x82129168;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821291b0
	if (!ctx.cr6.eq) goto loc_821291B0;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq cr6,0x821291b8
	if (ctx.cr6.eq) goto loc_821291B8;
	// lwz r11,4(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// rlwinm r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82129190
	if (!ctx.cr6.eq) goto loc_82129190;
	// cmpwi cr6,r30,6
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 6, ctx.xer);
	// beq cr6,0x8212931c
	if (ctx.cr6.eq) goto loc_8212931C;
loc_82129190:
	// cmpwi cr6,r19,3
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 3, ctx.xer);
	// beq cr6,0x8212931c
	if (ctx.cr6.eq) goto loc_8212931C;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// li r4,15
	ctx.r4.s64 = 15;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x822c3bc0
	ctx.lr = 0x821291A8;
	sub_822C3BC0(ctx, base);
	// addi r1,r1,1216
	ctx.r1.s64 = ctx.r1.s64 + 1216;
	// b 0x823ddfa4
	__restgprlr_19(ctx, base);
	return;
loc_821291B0:
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// bne cr6,0x82129238
	if (!ctx.cr6.eq) goto loc_82129238;
loc_821291B8:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821291fc
	if (ctx.cr6.eq) goto loc_821291FC;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,43
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 43, ctx.xer);
	// bne cr6,0x821291fc
	if (!ctx.cr6.eq) goto loc_821291FC;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r8,r22
	ctx.r8.u64 = ctx.r22.u64;
	// addi r5,r10,-9884
	ctx.r5.s64 = ctx.r10.s64 + -9884;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// li r4,1024
	ctx.r4.s64 = 1024;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822e8368
	ctx.lr = 0x821291F0;
	sub_822E8368(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8227cf18
	ctx.lr = 0x821291FC;
	sub_8227CF18(ctx, base);
loc_821291FC:
	// lwz r11,4(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// rlwinm r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8212931c
	if (ctx.cr6.eq) goto loc_8212931C;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// addi r10,r11,28832
	ctx.r10.s64 = ctx.r11.s64 + 28832;
	// lwz r11,332(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 332);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8212931c
	if (ctx.cr6.eq) goto loc_8212931C;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x822c3bc0
	ctx.lr = 0x82129230;
	sub_822C3BC0(ctx, base);
	// addi r1,r1,1216
	ctx.r1.s64 = ctx.r1.s64 + 1216;
	// b 0x823ddfa4
	__restgprlr_19(ctx, base);
	return;
loc_82129238:
	// lwz r11,4(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// rlwinm r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82129280
	if (ctx.cr6.eq) goto loc_82129280;
	// cmpwi cr6,r19,5
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 5, ctx.xer);
	// bne cr6,0x82129254
	if (!ctx.cr6.eq) goto loc_82129254;
	// li r29,15
	ctx.r29.s64 = 15;
loc_82129254:
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// addi r10,r11,28832
	ctx.r10.s64 = ctx.r11.s64 + 28832;
	// lwz r11,332(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 332);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8212931c
	if (ctx.cr6.eq) goto loc_8212931C;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x822c3bc0
	ctx.lr = 0x82129278;
	sub_822C3BC0(ctx, base);
	// addi r1,r1,1216
	ctx.r1.s64 = ctx.r1.s64 + 1216;
	// b 0x823ddfa4
	__restgprlr_19(ctx, base);
	return;
loc_82129280:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x8212931c
	if (ctx.cr6.eq) goto loc_8212931C;
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x821292c4
	if (!ctx.cr6.eq) goto loc_821292C4;
	// cmpwi cr6,r29,200
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 200, ctx.xer);
	// blt cr6,0x8212931c
	if (ctx.cr6.lt) goto loc_8212931C;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8212ea80
	ctx.lr = 0x821292A8;
	sub_8212EA80(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-9928
	ctx.r4.s64 = ctx.r11.s64 + -9928;
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x82280900
	ctx.lr = 0x821292BC;
	sub_82280900(ctx, base);
	// addi r1,r1,1216
	ctx.r1.s64 = ctx.r1.s64 + 1216;
	// b 0x823ddfa4
	__restgprlr_19(ctx, base);
	return;
loc_821292C4:
	// lbz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r6.u32 + 0);
	// cmplwi cr6,r11,43
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 43, ctx.xer);
	// bne cr6,0x82129300
	if (!ctx.cr6.eq) goto loc_82129300;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r8,r22
	ctx.r8.u64 = ctx.r22.u64;
	// addi r5,r11,-9940
	ctx.r5.s64 = ctx.r11.s64 + -9940;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// li r4,1024
	ctx.r4.s64 = 1024;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822e8368
	ctx.lr = 0x821292EC;
	sub_822E8368(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8227cf18
	ctx.lr = 0x821292F8;
	sub_8227CF18(ctx, base);
	// addi r1,r1,1216
	ctx.r1.s64 = ctx.r1.s64 + 1216;
	// b 0x823ddfa4
	__restgprlr_19(ctx, base);
	return;
loc_82129300:
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8227cf18
	ctx.lr = 0x8212930C;
	sub_8227CF18(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r4,r11,-27364
	ctx.r4.s64 = ctx.r11.s64 + -27364;
	// bl 0x8227cf18
	ctx.lr = 0x8212931C;
	sub_8227CF18(ctx, base);
loc_8212931C:
	// addi r1,r1,1216
	ctx.r1.s64 = ctx.r1.s64 + 1216;
	// b 0x823ddfa4
	__restgprlr_19(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82128E28) {
	__imp__sub_82128E28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82129324) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82129324) {
	__imp__sub_82129324(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82129328) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x82129330;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// lis r10,-32153
	ctx.r10.s64 = -2107179008;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lwz r11,4688(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4688);
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// stw r3,-16764(r10)
	PPC_STORE_U32(ctx.r10.u32 + -16764, ctx.r3.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8212936c
	if (!ctx.cr6.eq) goto loc_8212936C;
	// lis r11,-32153
	ctx.r11.s64 = -2107179008;
	// lwz r11,-16768(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16768);
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x821293b8
	if (!ctx.cr6.eq) goto loc_821293B8;
loc_8212936C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822815e0
	ctx.lr = 0x82129374;
	sub_822815E0(ctx, base);
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8212fa08
	ctx.lr = 0x82129380;
	sub_8212FA08(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821293a0
	if (ctx.cr6.eq) goto loc_821293A0;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82128d58
	ctx.lr = 0x821293A0;
	sub_82128D58(ctx, base);
loc_821293A0:
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
	// bl 0x82128e28
	ctx.lr = 0x821293B8;
	sub_82128E28(ctx, base);
loc_821293B8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82129328) {
	__imp__sub_82129328(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821293C0) {
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
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r5,r11,29280
	ctx.r5.s64 = ctx.r11.s64 + 29280;
	// addi r3,r9,-9752
	ctx.r3.s64 = ctx.r9.s64 + -9752;
	// addi r4,r10,-30760
	ctx.r4.s64 = ctx.r10.s64 + -30760;
	// bl 0x8227da10
	ctx.lr = 0x821293E8;
	sub_8227DA10(ctx, base);
	// lis r8,-32166
	ctx.r8.s64 = -2108030976;
	// lis r7,-32237
	ctx.r7.s64 = -2112684032;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// addi r5,r8,29260
	ctx.r5.s64 = ctx.r8.s64 + 29260;
	// addi r3,r6,-9768
	ctx.r3.s64 = ctx.r6.s64 + -9768;
	// addi r4,r7,-30136
	ctx.r4.s64 = ctx.r7.s64 + -30136;
	// bl 0x8227da10
	ctx.lr = 0x82129404;
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

PPC_WEAK_FUNC(sub_821293C0) {
	__imp__sub_821293C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82129414) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82129414) {
	__imp__sub_82129414(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82129418) {
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
	// lis r10,-32191
	ctx.r10.s64 = -2109669376;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// addi r10,r10,1492
	ctx.r10.s64 = ctx.r10.s64 + 1492;
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
loc_82129440:
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpw cr6,r8,r5
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r5.s32, ctx.xer);
	// beq cr6,0x82129474
	if (ctx.cr6.eq) goto loc_82129474;
	// addi r9,r9,12
	ctx.r9.s64 = ctx.r9.s64 + 12;
	// addi r8,r10,48
	ctx.r8.s64 = ctx.r10.s64 + 48;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82129440
	if (ctx.cr6.lt) goto loc_82129440;
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
loc_82129474:
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// beq cr6,0x82129494
	if (ctx.cr6.eq) goto loc_82129494;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// b 0x82129498
	goto loc_82129498;
loc_82129494:
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
loc_82129498:
	// lwzx r5,r8,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// bl 0x82128e28
	ctx.lr = 0x821294A0;
	sub_82128E28(ctx, base);
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

PPC_WEAK_FUNC(sub_82129418) {
	__imp__sub_82129418(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821294B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821294B4) {
	__imp__sub_821294B4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821294B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x821294C0;
	__savegprlr_25(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,16384
	ctx.r10.s64 = 1073741824;
	// lis r9,16384
	ctx.r9.s64 = 1073741824;
	// lis r8,16384
	ctx.r8.s64 = 1073741824;
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// ori r6,r10,2
	ctx.r6.u64 = ctx.r10.u64 | 2;
	// ori r5,r9,3
	ctx.r5.u64 = ctx.r9.u64 | 3;
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// lis r4,16384
	ctx.r4.s64 = 1073741824;
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// ori r3,r8,1
	ctx.r3.u64 = ctx.r8.u64 | 1;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// stw r4,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// lwzx r29,r11,r7
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x821296b0
	if (ctx.cr6.eq) goto loc_821296B0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823082c0
	ctx.lr = 0x82129530;
	sub_823082C0(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// addi r31,r11,1492
	ctx.r31.s64 = ctx.r11.s64 + 1492;
	// beq cr6,0x82129578
	if (ctx.cr6.eq) goto loc_82129578;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
loc_8212954C:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r9,r27
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r27.s32, ctx.xer);
	// beq cr6,0x82129570
	if (ctx.cr6.eq) goto loc_82129570;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// addi r9,r31,48
	ctx.r9.s64 = ctx.r31.s64 + 48;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8212954c
	if (ctx.cr6.lt) goto loc_8212954C;
	// b 0x821295e8
	goto loc_821295E8;
loc_82129570:
	// addi r9,r31,4
	ctx.r9.s64 = ctx.r31.s64 + 4;
	// b 0x821295c4
	goto loc_821295C4;
loc_82129578:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823082c0
	ctx.lr = 0x82129588;
	sub_823082C0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821295e8
	if (ctx.cr6.eq) goto loc_821295E8;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
loc_8212959C:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r9,r27
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r27.s32, ctx.xer);
	// beq cr6,0x821295c0
	if (ctx.cr6.eq) goto loc_821295C0;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// addi r9,r31,48
	ctx.r9.s64 = ctx.r31.s64 + 48;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8212959c
	if (ctx.cr6.lt) goto loc_8212959C;
	// b 0x821295e8
	goto loc_821295E8;
loc_821295C0:
	// addi r9,r31,8
	ctx.r9.s64 = ctx.r31.s64 + 8;
loc_821295C4:
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rlwinm r5,r8,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwzx r5,r5,r9
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r9.u32);
	// bl 0x82128e28
	ctx.lr = 0x821295E8;
	sub_82128E28(ctx, base);
loc_821295E8:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82308318
	ctx.lr = 0x821295F8;
	sub_82308318(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8212963c
	if (ctx.cr6.eq) goto loc_8212963C;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
loc_8212960C:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r9,r27
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r27.s32, ctx.xer);
	// beq cr6,0x82129634
	if (ctx.cr6.eq) goto loc_82129634;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// addi r9,r31,48
	ctx.r9.s64 = ctx.r31.s64 + 48;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8212960c
	if (ctx.cr6.lt) goto loc_8212960C;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_82129634:
	// addi r9,r31,4
	ctx.r9.s64 = ctx.r31.s64 + 4;
	// b 0x8212968c
	goto loc_8212968C;
loc_8212963C:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82308318
	ctx.lr = 0x8212964C;
	sub_82308318(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821296b0
	if (ctx.cr6.eq) goto loc_821296B0;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
loc_82129660:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r9,r27
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r27.s32, ctx.xer);
	// beq cr6,0x82129688
	if (ctx.cr6.eq) goto loc_82129688;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// addi r9,r31,48
	ctx.r9.s64 = ctx.r31.s64 + 48;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82129660
	if (ctx.cr6.lt) goto loc_82129660;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_82129688:
	// addi r9,r31,8
	ctx.r9.s64 = ctx.r31.s64 + 8;
loc_8212968C:
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// rlwinm r5,r8,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwzx r5,r5,r9
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r9.u32);
	// bl 0x82128e28
	ctx.lr = 0x821296B0;
	sub_82128E28(ctx, base);
loc_821296B0:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821294B8) {
	__imp__sub_821294B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821296B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x821296C0;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// lwz r11,4688(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4688);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821296f4
	if (!ctx.cr6.eq) goto loc_821296F4;
	// lis r10,-32153
	ctx.r10.s64 = -2107179008;
	// lwz r10,-16768(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -16768);
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x821297d0
	if (!ctx.cr6.eq) goto loc_821297D0;
loc_821296F4:
	// lis r10,-32021
	ctx.r10.s64 = -2098528256;
	// lwz r10,-14904(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -14904);
	// lbz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 12);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82129724
	if (ctx.cr6.eq) goto loc_82129724;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82129724
	if (ctx.cr6.eq) goto loc_82129724;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82141198
	ctx.lr = 0x82129718;
	sub_82141198(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821297d0
	if (ctx.cr6.eq) goto loc_821297D0;
loc_82129724:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822815e0
	ctx.lr = 0x8212972C;
	sub_822815E0(ctx, base);
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// rlwinm r10,r3,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r29,r11,29256
	ctx.r29.s64 = ctx.r11.s64 + 29256;
	// add r10,r3,r10
	ctx.r10.u64 = ctx.r3.u64 + ctx.r10.u64;
	// addi r11,r29,-144
	ctx.r11.s64 = ctx.r29.s64 + -144;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// add r28,r10,r11
	ctx.r28.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blt cr6,0x8212975c
	if (ctx.cr6.lt) goto loc_8212975C;
	// cmpwi cr6,r30,6
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 6, ctx.xer);
	// blt cr6,0x82129770
	if (ctx.cr6.lt) goto loc_82129770;
loc_8212975C:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,-9740
	ctx.r4.s64 = ctx.r11.s64 + -9740;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822830e8
	ctx.lr = 0x82129770;
	sub_822830E8(ctx, base);
loc_82129770:
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// rlwinm r10,r31,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r11,r11,-30024
	ctx.r11.s64 = ctx.r11.s64 + -30024;
	// addi r9,r11,12
	ctx.r9.s64 = ctx.r11.s64 + 12;
	// lwzx r11,r10,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8212979c
	if (ctx.cr6.eq) goto loc_8212979C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8212979c
	if (ctx.cr6.eq) goto loc_8212979C;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821297b4
	if (!ctx.cr6.eq) goto loc_821297B4;
loc_8212979C:
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r28
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// cmpw cr6,r10,r26
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r26.s32, ctx.xer);
	// beq cr6,0x821297b4
	if (ctx.cr6.eq) goto loc_821297B4;
	// bl 0x82310110
	ctx.lr = 0x821297B0;
	sub_82310110(ctx, base);
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
loc_821297B4:
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821294b8
	ctx.lr = 0x821297C8;
	sub_821294B8(ctx, base);
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r26,r11,r28
	PPC_STORE_U32(ctx.r11.u32 + ctx.r28.u32, ctx.r26.u32);
loc_821297D0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821296B8) {
	__imp__sub_821296B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821297D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x821297E0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r29,r11,1460
	ctx.r29.s64 = ctx.r11.s64 + 1460;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
loc_821297F8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8212e8a8
	ctx.lr = 0x82129804;
	sub_8212E8A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82129828
	if (ctx.cr6.eq) goto loc_82129828;
	// bl 0x82310110
	ctx.lr = 0x82129810;
	sub_82310110(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82128e28
	ctx.lr = 0x82129828;
	sub_82128E28(ctx, base);
loc_82129828:
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r11,r29,32
	ctx.r11.s64 = ctx.r29.s64 + 32;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821297f8
	if (ctx.cr6.lt) goto loc_821297F8;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821297D8) {
	__imp__sub_821297D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82129840) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// mulli r10,r3,580
	ctx.r10.s64 = ctx.r3.s64 * 580;
	// addi r11,r11,29336
	ctx.r11.s64 = ctx.r11.s64 + 29336;
	// addi r9,r11,496
	ctx.r9.s64 = ctx.r11.s64 + 496;
	// lbzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82129840) {
	__imp__sub_82129840(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82129858) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// mulli r10,r3,580
	ctx.r10.s64 = ctx.r3.s64 * 580;
	// addi r11,r11,29336
	ctx.r11.s64 = ctx.r11.s64 + 29336;
	// addi r9,r11,496
	ctx.r9.s64 = ctx.r11.s64 + 496;
	// lbzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82129888
	if (!ctx.cr6.eq) goto loc_82129888;
	// addi r11,r11,236
	ctx.r11.s64 = ctx.r11.s64 + 236;
	// lbzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8212988c
	if (ctx.cr6.eq) goto loc_8212988C;
loc_82129888:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8212988C:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82129858) {
	__imp__sub_82129858(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82129894) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82129894) {
	__imp__sub_82129894(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82129898) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-31937
	ctx.r9.s64 = -2093023232;
	// lis r8,-32166
	ctx.r8.s64 = -2108030976;
	// addi r11,r9,-17592
	ctx.r11.s64 = ctx.r9.s64 + -17592;
	// addi r10,r8,29336
	ctx.r10.s64 = ctx.r8.s64 + 29336;
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
	// lwz r11,-17592(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17592);
	// addi r6,r10,276
	ctx.r6.s64 = ctx.r10.s64 + 276;
	// li r5,1
	ctx.r5.s64 = 1;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r4,r7
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r7.u32);
	// mulli r11,r3,580
	ctx.r11.s64 = ctx.r3.s64 * 580;
	// stbx r5,r11,r6
	PPC_STORE_U8(ctx.r11.u32 + ctx.r6.u32, ctx.r5.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82129898) {
	__imp__sub_82129898(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821298CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821298CC) {
	__imp__sub_821298CC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821298D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x821298D8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31937
	ctx.r10.s64 = -2093023232;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r31,r10,-17592
	ctx.r31.s64 = ctx.r10.s64 + -17592;
	// addi r29,r11,-28736
	ctx.r29.s64 = ctx.r11.s64 + -28736;
	// addi r9,r31,68
	ctx.r9.s64 = ctx.r31.s64 + 68;
	// lwz r11,-17592(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -17592);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r11,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// ble cr6,0x82129918
	if (!ctx.cr6.gt) goto loc_82129918;
	// addi r10,r31,100
	ctx.r10.s64 = ctx.r31.s64 + 100;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r3,4(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x8212991c
	goto loc_8212991C;
loc_82129918:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_8212991C:
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82129930
	if (ctx.cr6.eq) goto loc_82129930;
	// bl 0x823deaf8
	ctx.lr = 0x8212992C;
	sub_823DEAF8(ctx, base);
	// b 0x82129934
	goto loc_82129934;
loc_82129930:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82129934:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x821299cc
	if (ctx.cr6.eq) goto loc_821299CC;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x821299cc
	if (ctx.cr6.eq) goto loc_821299CC;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8212995c
	if (!ctx.cr6.eq) goto loc_8212995C;
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// b 0x82129968
	goto loc_82129968;
loc_8212995C:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821299bc
	if (!ctx.cr6.eq) goto loc_821299BC;
	// stw r3,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r3.u32);
loc_82129968:
	// lbz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821299cc
	if (!ctx.cr6.eq) goto loc_821299CC;
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
	// ble cr6,0x8212999c
	if (!ctx.cr6.gt) goto loc_8212999C;
	// addi r10,r31,100
	ctx.r10.s64 = ctx.r31.s64 + 100;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r3,8(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// b 0x821299a0
	goto loc_821299A0;
loc_8212999C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_821299A0:
	// bl 0x823deaf8
	ctx.lr = 0x821299A4;
	sub_823DEAF8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r3,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r3.u32);
	// stb r11,16(r30)
	PPC_STORE_U8(ctx.r30.u32 + 16, ctx.r11.u8);
	// stb r11,17(r30)
	PPC_STORE_U8(ctx.r30.u32 + 17, ctx.r11.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_821299BC:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r3,14
	ctx.r3.s64 = 14;
	// addi r4,r11,-9708
	ctx.r4.s64 = ctx.r11.s64 + -9708;
	// bl 0x82280900
	ctx.lr = 0x821299CC;
	sub_82280900(ctx, base);
loc_821299CC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821298D0) {
	__imp__sub_821298D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821299D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821299D4) {
	__imp__sub_821299D4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821299D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x821299E0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31937
	ctx.r10.s64 = -2093023232;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r30,r10,-17592
	ctx.r30.s64 = ctx.r10.s64 + -17592;
	// addi r28,r11,-28736
	ctx.r28.s64 = ctx.r11.s64 + -28736;
	// addi r9,r30,68
	ctx.r9.s64 = ctx.r30.s64 + 68;
	// lwz r11,-17592(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -17592);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r11,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// ble cr6,0x82129a20
	if (!ctx.cr6.gt) goto loc_82129A20;
	// addi r10,r30,100
	ctx.r10.s64 = ctx.r30.s64 + 100;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r3,4(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x82129a24
	goto loc_82129A24;
loc_82129A20:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_82129A24:
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82129af4
	if (ctx.cr6.eq) goto loc_82129AF4;
	// bl 0x823deaf8
	ctx.lr = 0x82129A34;
	sub_823DEAF8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// bne cr6,0x82129a4c
	if (!ctx.cr6.eq) goto loc_82129A4C;
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// b 0x82129a68
	goto loc_82129A68;
loc_82129A4C:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpw cr6,r10,r3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r3.s32, ctx.xer);
	// bne cr6,0x82129b04
	if (!ctx.cr6.eq) goto loc_82129B04;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// bne cr6,0x82129b04
	if (!ctx.cr6.eq) goto loc_82129B04;
loc_82129A68:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82129b04
	if (!ctx.cr6.eq) goto loc_82129B04;
	// stb r29,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r29.u8);
	// addi r10,r30,68
	ctx.r10.s64 = ctx.r30.s64 + 68;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// ble cr6,0x82129aa0
	if (!ctx.cr6.gt) goto loc_82129AA0;
	// addi r10,r30,100
	ctx.r10.s64 = ctx.r30.s64 + 100;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r3,8(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// b 0x82129aa4
	goto loc_82129AA4;
loc_82129AA0:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_82129AA4:
	// bl 0x823deaf8
	ctx.lr = 0x82129AA8;
	sub_823DEAF8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82129ad0
	if (ctx.cr6.eq) goto loc_82129AD0;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stb r29,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r29.u8);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// add r9,r11,r3
	ctx.r9.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_82129AD0:
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,29324(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 29324);
	// stb r29,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r29.u8);
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_82129AF4:
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// stb r29,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r29.u8);
loc_82129B04:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821299D8) {
	__imp__sub_821299D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82129B0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82129B0C) {
	__imp__sub_82129B0C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82129B10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lbz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 16);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stw r9,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82129b54
	if (ctx.cr6.eq) goto loc_82129B54;
	// lis r11,-31936
	ctx.r11.s64 = -2092957696;
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r11,r11,-4812
	ctx.r11.s64 = ctx.r11.s64 + -4812;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bne cr6,0x82129b48
	if (!ctx.cr6.eq) goto loc_82129B48;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x82129b50
	goto loc_82129B50;
loc_82129B48:
	// subf r9,r9,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r9.s64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_82129B50:
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
loc_82129B54:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82129b68
	if (!ctx.cr6.eq) goto loc_82129B68;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_82129B68:
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lwz r11,29324(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 29324);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82129b84
	if (ctx.cr6.lt) goto loc_82129B84;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,12168(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_82129B84:
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
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
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82129B10) {
	__imp__sub_82129B10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82129BB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82129BB4) {
	__imp__sub_82129BB4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82129BB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// mulli r10,r3,580
	ctx.r10.s64 = ctx.r3.s64 * 580;
	// addi r11,r11,29336
	ctx.r11.s64 = ctx.r11.s64 + 29336;
	// addi r9,r11,496
	ctx.r9.s64 = ctx.r11.s64 + 496;
	// lbzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82129be8
	if (!ctx.cr6.eq) goto loc_82129BE8;
	// addi r11,r11,236
	ctx.r11.s64 = ctx.r11.s64 + 236;
	// lbzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82129bec
	if (ctx.cr6.eq) goto loc_82129BEC;
loc_82129BE8:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82129BEC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// lis r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-29944
	ctx.r11.s64 = ctx.r11.s64 + -29944;
	// ori r9,r10,48796
	ctx.r9.u64 = ctx.r10.u64 | 48796;
	// addi r8,r11,28
	ctx.r8.s64 = ctx.r11.s64 + 28;
	// mullw r7,r3,r9
	ctx.r7.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r9.s32);
	// stwx r4,r7,r8
	PPC_STORE_U32(ctx.r7.u32 + ctx.r8.u32, ctx.r4.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82129BB8) {
	__imp__sub_82129BB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82129C18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// mulli r10,r3,580
	ctx.r10.s64 = ctx.r3.s64 * 580;
	// addi r11,r11,29336
	ctx.r11.s64 = ctx.r11.s64 + 29336;
	// addi r9,r11,496
	ctx.r9.s64 = ctx.r11.s64 + 496;
	// lbzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82129c48
	if (!ctx.cr6.eq) goto loc_82129C48;
	// addi r11,r11,236
	ctx.r11.s64 = ctx.r11.s64 + 236;
	// lbzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82129c4c
	if (ctx.cr6.eq) goto loc_82129C4C;
loc_82129C48:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82129C4C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
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
	// lwz r8,28(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// subf r7,r8,r4
	ctx.r7.s64 = ctx.r4.s64 - ctx.r8.s64;
	// subfic r6,r7,0
	ctx.xer.ca = ctx.r7.u32 <= 0;
	ctx.r6.s64 = 0 - ctx.r7.s64;
	// subfe r3,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r5.u64 + ctx.r5.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r10,r3,r4
	ctx.r10.u64 = ctx.r3.u64 & ctx.r4.u64;
	// stw r10,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82129C18) {
	__imp__sub_82129C18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82129C8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82129C8C) {
	__imp__sub_82129C8C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82129C90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82129C98;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-31937
	ctx.r9.s64 = -2093023232;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r10,r9,-17592
	ctx.r10.s64 = ctx.r9.s64 + -17592;
	// addi r31,r11,29336
	ctx.r31.s64 = ctx.r11.s64 + 29336;
	// addi r8,r10,4
	ctx.r8.s64 = ctx.r10.s64 + 4;
	// lwz r11,-17592(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17592);
	// addi r10,r31,240
	ctx.r10.s64 = ctx.r31.s64 + 240;
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r29,r7,r8
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// mulli r30,r29,580
	ctx.r30.s64 = ctx.r29.s64 * 580;
	// add r3,r30,r10
	ctx.r3.u64 = ctx.r30.u64 + ctx.r10.u64;
	// bl 0x821298d0
	ctx.lr = 0x82129CCC;
	sub_821298D0(ctx, base);
	// addi r6,r31,496
	ctx.r6.s64 = ctx.r31.s64 + 496;
	// lbzx r5,r30,r6
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r6.u32);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82129cf0
	if (!ctx.cr6.eq) goto loc_82129CF0;
	// addi r11,r31,236
	ctx.r11.s64 = ctx.r31.s64 + 236;
	// lbzx r10,r30,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82129cf4
	if (ctx.cr6.eq) goto loc_82129CF4;
loc_82129CF0:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82129CF4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82129d58
	if (!ctx.cr6.eq) goto loc_82129D58;
	// lis r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32155
	ctx.r10.s64 = -2107310080;
	// ori r9,r11,48796
	ctx.r9.u64 = ctx.r11.u64 | 48796;
	// addi r10,r10,-29944
	ctx.r10.s64 = ctx.r10.s64 + -29944;
	// mullw r11,r29,r9
	ctx.r11.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r9.s32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x82129d50
	if (ctx.cr6.eq) goto loc_82129D50;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x82129d40
	if (ctx.cr6.eq) goto loc_82129D40;
	// addi r11,r31,200
	ctx.r11.s64 = ctx.r31.s64 + 200;
	// add r3,r30,r11
	ctx.r3.u64 = ctx.r30.u64 + ctx.r11.u64;
	// bl 0x821298d0
	ctx.lr = 0x82129D38;
	sub_821298D0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_82129D40:
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_82129D50:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
loc_82129D58:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82129C90) {
	__imp__sub_82129C90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82129D60) {
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
	// lis r10,-31937
	ctx.r10.s64 = -2093023232;
	// lis r9,-32166
	ctx.r9.s64 = -2108030976;
	// addi r11,r10,-17592
	ctx.r11.s64 = ctx.r10.s64 + -17592;
	// addi r31,r9,29336
	ctx.r31.s64 = ctx.r9.s64 + 29336;
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// lwz r11,-17592(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -17592);
	// addi r10,r31,240
	ctx.r10.s64 = ctx.r31.s64 + 240;
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r7,r8
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// mulli r30,r6,580
	ctx.r30.s64 = ctx.r6.s64 * 580;
	// add r3,r30,r10
	ctx.r3.u64 = ctx.r30.u64 + ctx.r10.u64;
	// bl 0x821299d8
	ctx.lr = 0x82129DA4;
	sub_821299D8(ctx, base);
	// addi r11,r31,200
	ctx.r11.s64 = ctx.r31.s64 + 200;
	// add r3,r30,r11
	ctx.r3.u64 = ctx.r30.u64 + ctx.r11.u64;
	// bl 0x821299d8
	ctx.lr = 0x82129DB0;
	sub_821299D8(ctx, base);
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

PPC_WEAK_FUNC(sub_82129D60) {
	__imp__sub_82129D60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82129DC8) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-31937
	ctx.r9.s64 = -2093023232;
	// lis r8,-32166
	ctx.r8.s64 = -2108030976;
	// addi r11,r9,-17592
	ctx.r11.s64 = ctx.r9.s64 + -17592;
	// addi r10,r8,29336
	ctx.r10.s64 = ctx.r8.s64 + 29336;
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
	// lwz r11,-17592(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17592);
	// addi r10,r10,220
	ctx.r10.s64 = ctx.r10.s64 + 220;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r6,r7
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// mulli r11,r5,580
	ctx.r11.s64 = ctx.r5.s64 * 580;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x821298d0
	sub_821298D0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82129DC8) {
	__imp__sub_82129DC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82129DF8) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-31937
	ctx.r9.s64 = -2093023232;
	// lis r8,-32166
	ctx.r8.s64 = -2108030976;
	// addi r11,r9,-17592
	ctx.r11.s64 = ctx.r9.s64 + -17592;
	// addi r10,r8,29336
	ctx.r10.s64 = ctx.r8.s64 + 29336;
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
	// lwz r11,-17592(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17592);
	// addi r10,r10,220
	ctx.r10.s64 = ctx.r10.s64 + 220;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r6,r7
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// mulli r11,r5,580
	ctx.r11.s64 = ctx.r5.s64 * 580;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x821299d8
	sub_821299D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82129DF8) {
	__imp__sub_82129DF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82129E28) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-31937
	ctx.r9.s64 = -2093023232;
	// lis r8,-32166
	ctx.r8.s64 = -2108030976;
	// addi r11,r9,-17592
	ctx.r11.s64 = ctx.r9.s64 + -17592;
	// addi r10,r8,29336
	ctx.r10.s64 = ctx.r8.s64 + 29336;
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
	// lwz r11,-17592(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17592);
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r6,r7
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// mulli r11,r5,580
	ctx.r11.s64 = ctx.r5.s64 * 580;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x821298d0
	sub_821298D0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82129E28) {
	__imp__sub_82129E28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82129E54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82129E54) {
	__imp__sub_82129E54(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82129E58) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-31937
	ctx.r9.s64 = -2093023232;
	// lis r8,-32166
	ctx.r8.s64 = -2108030976;
	// addi r11,r9,-17592
	ctx.r11.s64 = ctx.r9.s64 + -17592;
	// addi r10,r8,29336
	ctx.r10.s64 = ctx.r8.s64 + 29336;
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
	// lwz r11,-17592(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17592);
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r6,r7
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// mulli r11,r5,580
	ctx.r11.s64 = ctx.r5.s64 * 580;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x821299d8
	sub_821299D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82129E58) {
	__imp__sub_82129E58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82129E84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82129E84) {
	__imp__sub_82129E84(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82129E88) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-31937
	ctx.r9.s64 = -2093023232;
	// lis r8,-32166
	ctx.r8.s64 = -2108030976;
	// addi r11,r9,-17592
	ctx.r11.s64 = ctx.r9.s64 + -17592;
	// addi r10,r8,29336
	ctx.r10.s64 = ctx.r8.s64 + 29336;
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
	// lwz r11,-17592(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17592);
	// addi r10,r10,20
	ctx.r10.s64 = ctx.r10.s64 + 20;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r6,r7
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// mulli r11,r5,580
	ctx.r11.s64 = ctx.r5.s64 * 580;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x821298d0
	sub_821298D0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82129E88) {
	__imp__sub_82129E88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82129EB8) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-31937
	ctx.r9.s64 = -2093023232;
	// lis r8,-32166
	ctx.r8.s64 = -2108030976;
	// addi r11,r9,-17592
	ctx.r11.s64 = ctx.r9.s64 + -17592;
	// addi r10,r8,29336
	ctx.r10.s64 = ctx.r8.s64 + 29336;
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
	// lwz r11,-17592(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17592);
	// addi r10,r10,20
	ctx.r10.s64 = ctx.r10.s64 + 20;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r6,r7
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// mulli r11,r5,580
	ctx.r11.s64 = ctx.r5.s64 * 580;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x821299d8
	sub_821299D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82129EB8) {
	__imp__sub_82129EB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82129EE8) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-31937
	ctx.r9.s64 = -2093023232;
	// lis r8,-32166
	ctx.r8.s64 = -2108030976;
	// addi r11,r9,-17592
	ctx.r11.s64 = ctx.r9.s64 + -17592;
	// addi r10,r8,29336
	ctx.r10.s64 = ctx.r8.s64 + 29336;
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
	// lwz r11,-17592(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17592);
	// addi r10,r10,40
	ctx.r10.s64 = ctx.r10.s64 + 40;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r6,r7
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// mulli r11,r5,580
	ctx.r11.s64 = ctx.r5.s64 * 580;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x821298d0
	sub_821298D0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82129EE8) {
	__imp__sub_82129EE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82129F18) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-31937
	ctx.r9.s64 = -2093023232;
	// lis r8,-32166
	ctx.r8.s64 = -2108030976;
	// addi r11,r9,-17592
	ctx.r11.s64 = ctx.r9.s64 + -17592;
	// addi r10,r8,29336
	ctx.r10.s64 = ctx.r8.s64 + 29336;
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
	// lwz r11,-17592(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17592);
	// addi r10,r10,40
	ctx.r10.s64 = ctx.r10.s64 + 40;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r6,r7
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// mulli r11,r5,580
	ctx.r11.s64 = ctx.r5.s64 * 580;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x821299d8
	sub_821299D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82129F18) {
	__imp__sub_82129F18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82129F48) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-31937
	ctx.r9.s64 = -2093023232;
	// lis r8,-32166
	ctx.r8.s64 = -2108030976;
	// addi r11,r9,-17592
	ctx.r11.s64 = ctx.r9.s64 + -17592;
	// addi r10,r8,29336
	ctx.r10.s64 = ctx.r8.s64 + 29336;
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
	// lwz r11,-17592(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17592);
	// addi r10,r10,60
	ctx.r10.s64 = ctx.r10.s64 + 60;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r6,r7
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// mulli r11,r5,580
	ctx.r11.s64 = ctx.r5.s64 * 580;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x821298d0
	sub_821298D0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82129F48) {
	__imp__sub_82129F48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82129F78) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-31937
	ctx.r9.s64 = -2093023232;
	// lis r8,-32166
	ctx.r8.s64 = -2108030976;
	// addi r11,r9,-17592
	ctx.r11.s64 = ctx.r9.s64 + -17592;
	// addi r10,r8,29336
	ctx.r10.s64 = ctx.r8.s64 + 29336;
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
	// lwz r11,-17592(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17592);
	// addi r10,r10,60
	ctx.r10.s64 = ctx.r10.s64 + 60;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r6,r7
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// mulli r11,r5,580
	ctx.r11.s64 = ctx.r5.s64 * 580;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x821299d8
	sub_821299D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82129F78) {
	__imp__sub_82129F78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82129FA8) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-31937
	ctx.r9.s64 = -2093023232;
	// lis r8,-32166
	ctx.r8.s64 = -2108030976;
	// addi r11,r9,-17592
	ctx.r11.s64 = ctx.r9.s64 + -17592;
	// addi r10,r8,29336
	ctx.r10.s64 = ctx.r8.s64 + 29336;
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
	// lwz r11,-17592(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17592);
	// addi r10,r10,80
	ctx.r10.s64 = ctx.r10.s64 + 80;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r6,r7
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// mulli r11,r5,580
	ctx.r11.s64 = ctx.r5.s64 * 580;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x821298d0
	sub_821298D0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82129FA8) {
	__imp__sub_82129FA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82129FD8) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-31937
	ctx.r9.s64 = -2093023232;
	// lis r8,-32166
	ctx.r8.s64 = -2108030976;
	// addi r11,r9,-17592
	ctx.r11.s64 = ctx.r9.s64 + -17592;
	// addi r10,r8,29336
	ctx.r10.s64 = ctx.r8.s64 + 29336;
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
	// lwz r11,-17592(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17592);
	// addi r10,r10,80
	ctx.r10.s64 = ctx.r10.s64 + 80;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r6,r7
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// mulli r11,r5,580
	ctx.r11.s64 = ctx.r5.s64 * 580;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x821299d8
	sub_821299D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82129FD8) {
	__imp__sub_82129FD8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8212A008) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-31937
	ctx.r9.s64 = -2093023232;
	// lis r8,-32166
	ctx.r8.s64 = -2108030976;
	// addi r11,r9,-17592
	ctx.r11.s64 = ctx.r9.s64 + -17592;
	// addi r10,r8,29336
	ctx.r10.s64 = ctx.r8.s64 + 29336;
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
	// lwz r11,-17592(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17592);
	// addi r10,r10,100
	ctx.r10.s64 = ctx.r10.s64 + 100;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r6,r7
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// mulli r11,r5,580
	ctx.r11.s64 = ctx.r5.s64 * 580;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x821298d0
	sub_821298D0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8212A008) {
	__imp__sub_8212A008(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8212A038) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-31937
	ctx.r9.s64 = -2093023232;
	// lis r8,-32166
	ctx.r8.s64 = -2108030976;
	// addi r11,r9,-17592
	ctx.r11.s64 = ctx.r9.s64 + -17592;
	// addi r10,r8,29336
	ctx.r10.s64 = ctx.r8.s64 + 29336;
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
	// lwz r11,-17592(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17592);
	// addi r10,r10,100
	ctx.r10.s64 = ctx.r10.s64 + 100;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r6,r7
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// mulli r11,r5,580
	ctx.r11.s64 = ctx.r5.s64 * 580;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x821299d8
	sub_821299D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8212A038) {
	__imp__sub_8212A038(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8212A068) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-31937
	ctx.r9.s64 = -2093023232;
	// lis r8,-32166
	ctx.r8.s64 = -2108030976;
	// addi r11,r9,-17592
	ctx.r11.s64 = ctx.r9.s64 + -17592;
	// addi r10,r8,29336
	ctx.r10.s64 = ctx.r8.s64 + 29336;
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
	// lwz r11,-17592(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17592);
	// addi r10,r10,120
	ctx.r10.s64 = ctx.r10.s64 + 120;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r6,r7
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// mulli r11,r5,580
	ctx.r11.s64 = ctx.r5.s64 * 580;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x821298d0
	sub_821298D0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8212A068) {
	__imp__sub_8212A068(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8212A098) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-31937
	ctx.r9.s64 = -2093023232;
	// lis r8,-32166
	ctx.r8.s64 = -2108030976;
	// addi r11,r9,-17592
	ctx.r11.s64 = ctx.r9.s64 + -17592;
	// addi r10,r8,29336
	ctx.r10.s64 = ctx.r8.s64 + 29336;
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
	// lwz r11,-17592(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17592);
	// addi r10,r10,120
	ctx.r10.s64 = ctx.r10.s64 + 120;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r6,r7
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// mulli r11,r5,580
	ctx.r11.s64 = ctx.r5.s64 * 580;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x821299d8
	sub_821299D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8212A098) {
	__imp__sub_8212A098(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8212A0C8) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-31937
	ctx.r9.s64 = -2093023232;
	// lis r8,-32166
	ctx.r8.s64 = -2108030976;
	// addi r11,r9,-17592
	ctx.r11.s64 = ctx.r9.s64 + -17592;
	// addi r10,r8,29336
	ctx.r10.s64 = ctx.r8.s64 + 29336;
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
	// lwz r11,-17592(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17592);
	// addi r10,r10,140
	ctx.r10.s64 = ctx.r10.s64 + 140;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r6,r7
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// mulli r11,r5,580
	ctx.r11.s64 = ctx.r5.s64 * 580;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x821298d0
	sub_821298D0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8212A0C8) {
	__imp__sub_8212A0C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8212A0F8) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-31937
	ctx.r9.s64 = -2093023232;
	// lis r8,-32166
	ctx.r8.s64 = -2108030976;
	// addi r11,r9,-17592
	ctx.r11.s64 = ctx.r9.s64 + -17592;
	// addi r10,r8,29336
	ctx.r10.s64 = ctx.r8.s64 + 29336;
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
	// lwz r11,-17592(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17592);
	// addi r10,r10,140
	ctx.r10.s64 = ctx.r10.s64 + 140;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r6,r7
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// mulli r11,r5,580
	ctx.r11.s64 = ctx.r5.s64 * 580;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x821299d8
	sub_821299D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8212A0F8) {
	__imp__sub_8212A0F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8212A128) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31937
	ctx.r10.s64 = -2093023232;
	// lis r9,0
	ctx.r9.s64 = 0;
	// addi r11,r10,-17592
	ctx.r11.s64 = ctx.r10.s64 + -17592;
	// ori r8,r9,48796
	ctx.r8.u64 = ctx.r9.u64 | 48796;
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
	// lwz r11,-17592(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -17592);
	// lis r6,-32155
	ctx.r6.s64 = -2107310080;
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r3,r6,-29944
	ctx.r3.s64 = ctx.r6.s64 + -29944;
	// addi r11,r11,29336
	ctx.r11.s64 = ctx.r11.s64 + 29336;
	// lwzx r10,r4,r7
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r7.u32);
	// addi r11,r11,180
	ctx.r11.s64 = ctx.r11.s64 + 180;
	// mullw r9,r10,r8
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r8.s32);
	// stbx r5,r9,r3
	PPC_STORE_U8(ctx.r9.u32 + ctx.r3.u32, ctx.r5.u8);
	// mulli r10,r10,580
	ctx.r10.s64 = ctx.r10.s64 * 580;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x821298d0
	sub_821298D0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8212A128) {
	__imp__sub_8212A128(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8212A174) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8212A174) {
	__imp__sub_8212A174(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8212A178) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31937
	ctx.r10.s64 = -2093023232;
	// lis r9,0
	ctx.r9.s64 = 0;
	// addi r11,r10,-17592
	ctx.r11.s64 = ctx.r10.s64 + -17592;
	// ori r8,r9,48796
	ctx.r8.u64 = ctx.r9.u64 | 48796;
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
	// lwz r11,-17592(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -17592);
	// lis r6,-32155
	ctx.r6.s64 = -2107310080;
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r3,r6,-29944
	ctx.r3.s64 = ctx.r6.s64 + -29944;
	// addi r11,r11,29336
	ctx.r11.s64 = ctx.r11.s64 + 29336;
	// lwzx r10,r4,r7
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r7.u32);
	// addi r11,r11,180
	ctx.r11.s64 = ctx.r11.s64 + 180;
	// mullw r9,r10,r8
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r8.s32);
	// stbx r5,r9,r3
	PPC_STORE_U8(ctx.r9.u32 + ctx.r3.u32, ctx.r5.u8);
	// mulli r10,r10,580
	ctx.r10.s64 = ctx.r10.s64 * 580;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x821299d8
	sub_821299D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8212A178) {
	__imp__sub_8212A178(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8212A1C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8212A1C4) {
	__imp__sub_8212A1C4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8212A1C8) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-31937
	ctx.r9.s64 = -2093023232;
	// lis r8,-32166
	ctx.r8.s64 = -2108030976;
	// addi r11,r9,-17592
	ctx.r11.s64 = ctx.r9.s64 + -17592;
	// addi r10,r8,29336
	ctx.r10.s64 = ctx.r8.s64 + 29336;
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
	// lwz r11,-17592(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17592);
	// addi r10,r10,160
	ctx.r10.s64 = ctx.r10.s64 + 160;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r6,r7
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// mulli r11,r5,580
	ctx.r11.s64 = ctx.r5.s64 * 580;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x821298d0
	sub_821298D0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8212A1C8) {
	__imp__sub_8212A1C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8212A1F8) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-31937
	ctx.r9.s64 = -2093023232;
	// lis r8,-32166
	ctx.r8.s64 = -2108030976;
	// addi r11,r9,-17592
	ctx.r11.s64 = ctx.r9.s64 + -17592;
	// addi r10,r8,29336
	ctx.r10.s64 = ctx.r8.s64 + 29336;
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
	// lwz r11,-17592(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17592);
	// addi r10,r10,160
	ctx.r10.s64 = ctx.r10.s64 + 160;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r6,r7
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// mulli r11,r5,580
	ctx.r11.s64 = ctx.r5.s64 * 580;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x821299d8
	sub_821299D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8212A1F8) {
	__imp__sub_8212A1F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8212A228) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-31937
	ctx.r9.s64 = -2093023232;
	// lis r8,-32166
	ctx.r8.s64 = -2108030976;
	// addi r11,r9,-17592
	ctx.r11.s64 = ctx.r9.s64 + -17592;
	// addi r10,r8,29336
	ctx.r10.s64 = ctx.r8.s64 + 29336;
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
	// lwz r11,-17592(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17592);
	// addi r10,r10,280
	ctx.r10.s64 = ctx.r10.s64 + 280;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r6,r7
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// mulli r11,r5,580
	ctx.r11.s64 = ctx.r5.s64 * 580;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x821298d0
	sub_821298D0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8212A228) {
	__imp__sub_8212A228(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8212A258) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-31937
	ctx.r9.s64 = -2093023232;
	// lis r8,-32166
	ctx.r8.s64 = -2108030976;
	// addi r11,r9,-17592
	ctx.r11.s64 = ctx.r9.s64 + -17592;
	// addi r10,r8,29336
	ctx.r10.s64 = ctx.r8.s64 + 29336;
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
	// lwz r11,-17592(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17592);
	// addi r10,r10,280
	ctx.r10.s64 = ctx.r10.s64 + 280;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r6,r7
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// mulli r11,r5,580
	ctx.r11.s64 = ctx.r5.s64 * 580;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x821299d8
	sub_821299D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8212A258) {
	__imp__sub_8212A258(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8212A288) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-31937
	ctx.r9.s64 = -2093023232;
	// lis r8,-32166
	ctx.r8.s64 = -2108030976;
	// addi r11,r9,-17592
	ctx.r11.s64 = ctx.r9.s64 + -17592;
	// addi r10,r8,29336
	ctx.r10.s64 = ctx.r8.s64 + 29336;
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
	// lwz r11,-17592(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17592);
	// addi r10,r10,300
	ctx.r10.s64 = ctx.r10.s64 + 300;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r6,r7
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// mulli r11,r5,580
	ctx.r11.s64 = ctx.r5.s64 * 580;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x821298d0
	sub_821298D0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8212A288) {
	__imp__sub_8212A288(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8212A2B8) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-31937
	ctx.r9.s64 = -2093023232;
	// lis r8,-32166
	ctx.r8.s64 = -2108030976;
	// addi r11,r9,-17592
	ctx.r11.s64 = ctx.r9.s64 + -17592;
	// addi r10,r8,29336
	ctx.r10.s64 = ctx.r8.s64 + 29336;
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
	// lwz r11,-17592(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17592);
	// addi r10,r10,300
	ctx.r10.s64 = ctx.r10.s64 + 300;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r6,r7
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// mulli r11,r5,580
	ctx.r11.s64 = ctx.r5.s64 * 580;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x821299d8
	sub_821299D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8212A2B8) {
	__imp__sub_8212A2B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8212A2E8) {
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
	// lis r10,-31937
	ctx.r10.s64 = -2093023232;
	// lis r9,-32166
	ctx.r9.s64 = -2108030976;
	// addi r11,r10,-17592
	ctx.r11.s64 = ctx.r10.s64 + -17592;
	// addi r31,r9,29336
	ctx.r31.s64 = ctx.r9.s64 + 29336;
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// lwz r11,-17592(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -17592);
	// addi r10,r31,360
	ctx.r10.s64 = ctx.r31.s64 + 360;
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r7,r8
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// mulli r30,r6,580
	ctx.r30.s64 = ctx.r6.s64 * 580;
	// add r3,r30,r10
	ctx.r3.u64 = ctx.r30.u64 + ctx.r10.u64;
	// bl 0x821298d0
	ctx.lr = 0x8212A32C;
	sub_821298D0(ctx, base);
	// addi r11,r31,300
	ctx.r11.s64 = ctx.r31.s64 + 300;
	// add r3,r30,r11
	ctx.r3.u64 = ctx.r30.u64 + ctx.r11.u64;
	// bl 0x821298d0
	ctx.lr = 0x8212A338;
	sub_821298D0(ctx, base);
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

PPC_WEAK_FUNC(sub_8212A2E8) {
	__imp__sub_8212A2E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8212A350) {
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
	// lis r10,-31937
	ctx.r10.s64 = -2093023232;
	// lis r9,-32166
	ctx.r9.s64 = -2108030976;
	// addi r11,r10,-17592
	ctx.r11.s64 = ctx.r10.s64 + -17592;
	// addi r31,r9,29336
	ctx.r31.s64 = ctx.r9.s64 + 29336;
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// lwz r11,-17592(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -17592);
	// addi r10,r31,360
	ctx.r10.s64 = ctx.r31.s64 + 360;
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r7,r8
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// mulli r30,r6,580
	ctx.r30.s64 = ctx.r6.s64 * 580;
	// add r3,r30,r10
	ctx.r3.u64 = ctx.r30.u64 + ctx.r10.u64;
	// bl 0x821299d8
	ctx.lr = 0x8212A394;
	sub_821299D8(ctx, base);
	// addi r11,r31,300
	ctx.r11.s64 = ctx.r31.s64 + 300;
	// add r3,r30,r11
	ctx.r3.u64 = ctx.r30.u64 + ctx.r11.u64;
	// bl 0x821299d8
	ctx.lr = 0x8212A3A0;
	sub_821299D8(ctx, base);
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

PPC_WEAK_FUNC(sub_8212A350) {
	__imp__sub_8212A350(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8212A3B8) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-31937
	ctx.r9.s64 = -2093023232;
	// lis r8,-32166
	ctx.r8.s64 = -2108030976;
	// addi r11,r9,-17592
	ctx.r11.s64 = ctx.r9.s64 + -17592;
	// addi r10,r8,29336
	ctx.r10.s64 = ctx.r8.s64 + 29336;
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
	// lwz r11,-17592(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17592);
	// addi r10,r10,320
	ctx.r10.s64 = ctx.r10.s64 + 320;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r6,r7
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// mulli r11,r5,580
	ctx.r11.s64 = ctx.r5.s64 * 580;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x821298d0
	sub_821298D0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8212A3B8) {
	__imp__sub_8212A3B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8212A3E8) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-31937
	ctx.r9.s64 = -2093023232;
	// lis r8,-32166
	ctx.r8.s64 = -2108030976;
	// addi r11,r9,-17592
	ctx.r11.s64 = ctx.r9.s64 + -17592;
	// addi r10,r8,29336
	ctx.r10.s64 = ctx.r8.s64 + 29336;
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
	// lwz r11,-17592(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17592);
	// addi r10,r10,320
	ctx.r10.s64 = ctx.r10.s64 + 320;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r6,r7
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// mulli r11,r5,580
	ctx.r11.s64 = ctx.r5.s64 * 580;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x821299d8
	sub_821299D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8212A3E8) {
	__imp__sub_8212A3E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8212A418) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-31937
	ctx.r9.s64 = -2093023232;
	// lis r8,-32166
	ctx.r8.s64 = -2108030976;
	// addi r11,r9,-17592
	ctx.r11.s64 = ctx.r9.s64 + -17592;
	// addi r10,r8,29336
	ctx.r10.s64 = ctx.r8.s64 + 29336;
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
	// lwz r11,-17592(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17592);
	// addi r10,r10,340
	ctx.r10.s64 = ctx.r10.s64 + 340;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r6,r7
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// mulli r11,r5,580
	ctx.r11.s64 = ctx.r5.s64 * 580;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x821298d0
	sub_821298D0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8212A418) {
	__imp__sub_8212A418(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8212A448) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-31937
	ctx.r9.s64 = -2093023232;
	// lis r8,-32166
	ctx.r8.s64 = -2108030976;
	// addi r11,r9,-17592
	ctx.r11.s64 = ctx.r9.s64 + -17592;
	// addi r10,r8,29336
	ctx.r10.s64 = ctx.r8.s64 + 29336;
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
	// lwz r11,-17592(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17592);
	// addi r10,r10,340
	ctx.r10.s64 = ctx.r10.s64 + 340;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r6,r7
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// mulli r11,r5,580
	ctx.r11.s64 = ctx.r5.s64 * 580;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x821299d8
	sub_821299D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8212A448) {
	__imp__sub_8212A448(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8212A478) {
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
	// lis r10,-31937
	ctx.r10.s64 = -2093023232;
	// lis r9,-32166
	ctx.r9.s64 = -2108030976;
	// addi r11,r10,-17592
	ctx.r11.s64 = ctx.r10.s64 + -17592;
	// addi r31,r9,29336
	ctx.r31.s64 = ctx.r9.s64 + 29336;
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// lwz r11,-17592(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -17592);
	// addi r10,r31,300
	ctx.r10.s64 = ctx.r31.s64 + 300;
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r7,r8
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// mulli r30,r6,580
	ctx.r30.s64 = ctx.r6.s64 * 580;
	// add r3,r30,r10
	ctx.r3.u64 = ctx.r30.u64 + ctx.r10.u64;
	// bl 0x821298d0
	ctx.lr = 0x8212A4BC;
	sub_821298D0(ctx, base);
	// addi r11,r31,540
	ctx.r11.s64 = ctx.r31.s64 + 540;
	// add r3,r30,r11
	ctx.r3.u64 = ctx.r30.u64 + ctx.r11.u64;
	// bl 0x821298d0
	ctx.lr = 0x8212A4C8;
	sub_821298D0(ctx, base);
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

PPC_WEAK_FUNC(sub_8212A478) {
	__imp__sub_8212A478(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8212A4E0) {
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
	// lis r10,-31937
	ctx.r10.s64 = -2093023232;
	// lis r9,-32166
	ctx.r9.s64 = -2108030976;
	// addi r11,r10,-17592
	ctx.r11.s64 = ctx.r10.s64 + -17592;
	// addi r31,r9,29336
	ctx.r31.s64 = ctx.r9.s64 + 29336;
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// lwz r11,-17592(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -17592);
	// addi r10,r31,300
	ctx.r10.s64 = ctx.r31.s64 + 300;
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r7,r8
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// mulli r30,r6,580
	ctx.r30.s64 = ctx.r6.s64 * 580;
	// add r3,r30,r10
	ctx.r3.u64 = ctx.r30.u64 + ctx.r10.u64;
	// bl 0x821299d8
	ctx.lr = 0x8212A524;
	sub_821299D8(ctx, base);
	// addi r11,r31,540
	ctx.r11.s64 = ctx.r31.s64 + 540;
	// add r3,r30,r11
	ctx.r3.u64 = ctx.r30.u64 + ctx.r11.u64;
	// bl 0x821299d8
	ctx.lr = 0x8212A530;
	sub_821299D8(ctx, base);
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

PPC_WEAK_FUNC(sub_8212A4E0) {
	__imp__sub_8212A4E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8212A548) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-31937
	ctx.r9.s64 = -2093023232;
	// lis r8,-32166
	ctx.r8.s64 = -2108030976;
	// addi r11,r9,-17592
	ctx.r11.s64 = ctx.r9.s64 + -17592;
	// addi r10,r8,29336
	ctx.r10.s64 = ctx.r8.s64 + 29336;
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
	// lwz r11,-17592(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17592);
	// addi r10,r10,360
	ctx.r10.s64 = ctx.r10.s64 + 360;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r6,r7
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// mulli r11,r5,580
	ctx.r11.s64 = ctx.r5.s64 * 580;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x821298d0
	sub_821298D0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8212A548) {
	__imp__sub_8212A548(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8212A578) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-31937
	ctx.r9.s64 = -2093023232;
	// lis r8,-32166
	ctx.r8.s64 = -2108030976;
	// addi r11,r9,-17592
	ctx.r11.s64 = ctx.r9.s64 + -17592;
	// addi r10,r8,29336
	ctx.r10.s64 = ctx.r8.s64 + 29336;
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
	// lwz r11,-17592(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17592);
	// addi r10,r10,360
	ctx.r10.s64 = ctx.r10.s64 + 360;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r6,r7
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// mulli r11,r5,580
	ctx.r11.s64 = ctx.r5.s64 * 580;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x821299d8
	sub_821299D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8212A578) {
	__imp__sub_8212A578(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8212A5A8) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-31937
	ctx.r9.s64 = -2093023232;
	// lis r8,-32166
	ctx.r8.s64 = -2108030976;
	// addi r11,r9,-17592
	ctx.r11.s64 = ctx.r9.s64 + -17592;
	// addi r10,r8,29336
	ctx.r10.s64 = ctx.r8.s64 + 29336;
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
	// lwz r11,-17592(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17592);
	// addi r10,r10,380
	ctx.r10.s64 = ctx.r10.s64 + 380;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r6,r7
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// mulli r11,r5,580
	ctx.r11.s64 = ctx.r5.s64 * 580;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x821298d0
	sub_821298D0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8212A5A8) {
	__imp__sub_8212A5A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8212A5D8) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-31937
	ctx.r9.s64 = -2093023232;
	// lis r8,-32166
	ctx.r8.s64 = -2108030976;
	// addi r11,r9,-17592
	ctx.r11.s64 = ctx.r9.s64 + -17592;
	// addi r10,r8,29336
	ctx.r10.s64 = ctx.r8.s64 + 29336;
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
	// lwz r11,-17592(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17592);
	// addi r10,r10,380
	ctx.r10.s64 = ctx.r10.s64 + 380;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r6,r7
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// mulli r11,r5,580
	ctx.r11.s64 = ctx.r5.s64 * 580;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x821299d8
	sub_821299D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8212A5D8) {
	__imp__sub_8212A5D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8212A608) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-31937
	ctx.r9.s64 = -2093023232;
	// lis r8,-32166
	ctx.r8.s64 = -2108030976;
	// addi r11,r9,-17592
	ctx.r11.s64 = ctx.r9.s64 + -17592;
	// addi r10,r8,29336
	ctx.r10.s64 = ctx.r8.s64 + 29336;
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
	// lwz r11,-17592(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17592);
	// addi r10,r10,400
	ctx.r10.s64 = ctx.r10.s64 + 400;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r6,r7
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// mulli r11,r5,580
	ctx.r11.s64 = ctx.r5.s64 * 580;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x821298d0
	sub_821298D0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8212A608) {
	__imp__sub_8212A608(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8212A638) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-31937
	ctx.r9.s64 = -2093023232;
	// lis r8,-32166
	ctx.r8.s64 = -2108030976;
	// addi r11,r9,-17592
	ctx.r11.s64 = ctx.r9.s64 + -17592;
	// addi r10,r8,29336
	ctx.r10.s64 = ctx.r8.s64 + 29336;
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
	// lwz r11,-17592(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17592);
	// addi r10,r10,400
	ctx.r10.s64 = ctx.r10.s64 + 400;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r6,r7
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// mulli r11,r5,580
	ctx.r11.s64 = ctx.r5.s64 * 580;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x821299d8
	sub_821299D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8212A638) {
	__imp__sub_8212A638(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8212A668) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-31937
	ctx.r9.s64 = -2093023232;
	// lis r8,-32166
	ctx.r8.s64 = -2108030976;
	// addi r11,r9,-17592
	ctx.r11.s64 = ctx.r9.s64 + -17592;
	// addi r10,r8,29336
	ctx.r10.s64 = ctx.r8.s64 + 29336;
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
	// lwz r11,-17592(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17592);
	// addi r10,r10,420
	ctx.r10.s64 = ctx.r10.s64 + 420;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r6,r7
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// mulli r11,r5,580
	ctx.r11.s64 = ctx.r5.s64 * 580;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x821298d0
	sub_821298D0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8212A668) {
	__imp__sub_8212A668(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8212A698) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-31937
	ctx.r9.s64 = -2093023232;
	// lis r8,-32166
	ctx.r8.s64 = -2108030976;
	// addi r11,r9,-17592
	ctx.r11.s64 = ctx.r9.s64 + -17592;
	// addi r10,r8,29336
	ctx.r10.s64 = ctx.r8.s64 + 29336;
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
	// lwz r11,-17592(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17592);
	// addi r10,r10,420
	ctx.r10.s64 = ctx.r10.s64 + 420;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r6,r7
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// mulli r11,r5,580
	ctx.r11.s64 = ctx.r5.s64 * 580;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x821299d8
	sub_821299D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8212A698) {
	__imp__sub_8212A698(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8212A6C8) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-31937
	ctx.r9.s64 = -2093023232;
	// lis r8,-32166
	ctx.r8.s64 = -2108030976;
	// addi r11,r9,-17592
	ctx.r11.s64 = ctx.r9.s64 + -17592;
	// addi r10,r8,29336
	ctx.r10.s64 = ctx.r8.s64 + 29336;
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
	// lwz r11,-17592(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17592);
	// addi r10,r10,440
	ctx.r10.s64 = ctx.r10.s64 + 440;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r6,r7
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// mulli r11,r5,580
	ctx.r11.s64 = ctx.r5.s64 * 580;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x821298d0
	sub_821298D0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8212A6C8) {
	__imp__sub_8212A6C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8212A6F8) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-31937
	ctx.r9.s64 = -2093023232;
	// lis r8,-32166
	ctx.r8.s64 = -2108030976;
	// addi r11,r9,-17592
	ctx.r11.s64 = ctx.r9.s64 + -17592;
	// addi r10,r8,29336
	ctx.r10.s64 = ctx.r8.s64 + 29336;
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
	// lwz r11,-17592(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17592);
	// addi r10,r10,440
	ctx.r10.s64 = ctx.r10.s64 + 440;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r6,r7
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// mulli r11,r5,580
	ctx.r11.s64 = ctx.r5.s64 * 580;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x821299d8
	sub_821299D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8212A6F8) {
	__imp__sub_8212A6F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8212A728) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-31937
	ctx.r9.s64 = -2093023232;
	// lis r8,-32166
	ctx.r8.s64 = -2108030976;
	// addi r11,r9,-17592
	ctx.r11.s64 = ctx.r9.s64 + -17592;
	// addi r10,r8,29336
	ctx.r10.s64 = ctx.r8.s64 + 29336;
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
	// lwz r11,-17592(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17592);
	// addi r10,r10,460
	ctx.r10.s64 = ctx.r10.s64 + 460;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r6,r7
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// mulli r11,r5,580
	ctx.r11.s64 = ctx.r5.s64 * 580;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x821298d0
	sub_821298D0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8212A728) {
	__imp__sub_8212A728(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8212A758) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-31937
	ctx.r9.s64 = -2093023232;
	// lis r8,-32166
	ctx.r8.s64 = -2108030976;
	// addi r11,r9,-17592
	ctx.r11.s64 = ctx.r9.s64 + -17592;
	// addi r10,r8,29336
	ctx.r10.s64 = ctx.r8.s64 + 29336;
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
	// lwz r11,-17592(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17592);
	// addi r10,r10,460
	ctx.r10.s64 = ctx.r10.s64 + 460;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r6,r7
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// mulli r11,r5,580
	ctx.r11.s64 = ctx.r5.s64 * 580;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x821299d8
	sub_821299D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8212A758) {
	__imp__sub_8212A758(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8212A788) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-31937
	ctx.r9.s64 = -2093023232;
	// lis r8,-32166
	ctx.r8.s64 = -2108030976;
	// addi r11,r9,-17592
	ctx.r11.s64 = ctx.r9.s64 + -17592;
	// addi r10,r8,29336
	ctx.r10.s64 = ctx.r8.s64 + 29336;
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
	// lwz r11,-17592(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17592);
	// addi r10,r10,480
	ctx.r10.s64 = ctx.r10.s64 + 480;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r6,r7
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// mulli r11,r5,580
	ctx.r11.s64 = ctx.r5.s64 * 580;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x821298d0
	sub_821298D0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8212A788) {
	__imp__sub_8212A788(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8212A7B8) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-31937
	ctx.r9.s64 = -2093023232;
	// lis r8,-32166
	ctx.r8.s64 = -2108030976;
	// addi r11,r9,-17592
	ctx.r11.s64 = ctx.r9.s64 + -17592;
	// addi r10,r8,29336
	ctx.r10.s64 = ctx.r8.s64 + 29336;
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
	// lwz r11,-17592(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17592);
	// addi r10,r10,480
	ctx.r10.s64 = ctx.r10.s64 + 480;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r6,r7
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// mulli r11,r5,580
	ctx.r11.s64 = ctx.r5.s64 * 580;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x821299d8
	sub_821299D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8212A7B8) {
	__imp__sub_8212A7B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8212A7E8) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-31937
	ctx.r9.s64 = -2093023232;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r10,r9,-17592
	ctx.r10.s64 = ctx.r9.s64 + -17592;
	// addi r11,r11,29336
	ctx.r11.s64 = ctx.r11.s64 + 29336;
	// addi r7,r10,4
	ctx.r7.s64 = ctx.r10.s64 + 4;
	// lwz r10,-17592(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17592);
	// addi r6,r11,496
	ctx.r6.s64 = ctx.r11.s64 + 496;
	// li r8,1
	ctx.r8.s64 = 1;
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r5,r7
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r7.u32);
	// mulli r10,r9,580
	ctx.r10.s64 = ctx.r9.s64 * 580;
	// lbzx r4,r10,r6
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r6.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8212a834
	if (!ctx.cr6.eq) goto loc_8212A834;
	// addi r11,r11,236
	ctx.r11.s64 = ctx.r11.s64 + 236;
	// lbzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8212a838
	if (ctx.cr6.eq) goto loc_8212A838;
loc_8212A834:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_8212A838:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lis r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32155
	ctx.r10.s64 = -2107310080;
	// ori r7,r11,48796
	ctx.r7.u64 = ctx.r11.u64 | 48796;
	// addi r11,r10,-29944
	ctx.r11.s64 = ctx.r10.s64 + -29944;
	// mullw r10,r9,r7
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r7.s32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lis r6,-31936
	ctx.r6.s64 = -2092957696;
	// lwz r5,28(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r10,-4812(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + -4812);
	// stb r8,24(r11)
	PPC_STORE_U8(ctx.r11.u32 + 24, ctx.r8.u8);
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// stw r5,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r5.u32);
	// stw r10,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r10.u32);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// stw r8,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r8.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8212A7E8) {
	__imp__sub_8212A7E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8212A884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8212A884) {
	__imp__sub_8212A884(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8212A888) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-31937
	ctx.r9.s64 = -2093023232;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r10,r9,-17592
	ctx.r10.s64 = ctx.r9.s64 + -17592;
	// addi r11,r11,29336
	ctx.r11.s64 = ctx.r11.s64 + 29336;
	// addi r7,r10,4
	ctx.r7.s64 = ctx.r10.s64 + 4;
	// lwz r10,-17592(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17592);
	// addi r6,r11,496
	ctx.r6.s64 = ctx.r11.s64 + 496;
	// li r8,0
	ctx.r8.s64 = 0;
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r5,r7
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r7.u32);
	// mulli r10,r9,580
	ctx.r10.s64 = ctx.r9.s64 * 580;
	// lbzx r4,r10,r6
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r6.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8212a8d4
	if (!ctx.cr6.eq) goto loc_8212A8D4;
	// addi r11,r11,236
	ctx.r11.s64 = ctx.r11.s64 + 236;
	// lbzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8212a8d8
	if (ctx.cr6.eq) goto loc_8212A8D8;
loc_8212A8D4:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8212A8D8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lis r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32155
	ctx.r10.s64 = -2107310080;
	// ori r7,r11,48796
	ctx.r7.u64 = ctx.r11.u64 | 48796;
	// addi r10,r10,-29944
	ctx.r10.s64 = ctx.r10.s64 + -29944;
	// mullw r11,r9,r7
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r6,24(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 24);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8212a918
	if (ctx.cr6.eq) goto loc_8212A918;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x8212a918
	if (!ctx.cr6.eq) goto loc_8212A918;
	// stw r8,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r8.u32);
loc_8212A918:
	// stb r8,24(r11)
	PPC_STORE_U8(ctx.r11.u32 + 24, ctx.r8.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8212A888) {
	__imp__sub_8212A888(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8212A920) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-31937
	ctx.r10.s64 = -2093023232;
	// lis r9,0
	ctx.r9.s64 = 0;
	// addi r11,r10,-17592
	ctx.r11.s64 = ctx.r10.s64 + -17592;
	// ori r8,r9,48796
	ctx.r8.u64 = ctx.r9.u64 | 48796;
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
	// lwz r11,-17592(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -17592);
	// lis r6,-32155
	ctx.r6.s64 = -2107310080;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r6,-29944
	ctx.r10.s64 = ctx.r6.s64 + -29944;
	// lwzx r4,r5,r7
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r7.u32);
	// mullw r11,r4,r8
	ctx.r11.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r8.s32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lfs f0,4312(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4312);
	ctx.f0.f64 = double(temp.f32);
	// fneg f13,f0
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f13,84(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 84, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8212A920) {
	__imp__sub_8212A920(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8212A960) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31937
	ctx.r10.s64 = -2093023232;
	// lis r9,0
	ctx.r9.s64 = 0;
	// addi r11,r10,-17592
	ctx.r11.s64 = ctx.r10.s64 + -17592;
	// ori r8,r9,48796
	ctx.r8.u64 = ctx.r9.u64 | 48796;
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
	// lwz r11,-17592(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -17592);
	// lis r6,-32155
	ctx.r6.s64 = -2107310080;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r6,-29944
	ctx.r10.s64 = ctx.r6.s64 + -29944;
	// lwzx r4,r5,r7
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r7.u32);
	// mullw r11,r4,r8
	ctx.r11.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r8.s32);
	// lbzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// cntlzw r9,r3
	ctx.r9.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// stbx r8,r11,r10
	PPC_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r8.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8212A960) {
	__imp__sub_8212A960(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8212A9A0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31937
	ctx.r10.s64 = -2093023232;
	// lis r9,0
	ctx.r9.s64 = 0;
	// addi r11,r10,-17592
	ctx.r11.s64 = ctx.r10.s64 + -17592;
	// ori r8,r9,48796
	ctx.r8.u64 = ctx.r9.u64 | 48796;
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
	// lwz r11,-17592(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -17592);
	// lis r6,-32155
	ctx.r6.s64 = -2107310080;
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r6,-29944
	ctx.r3.s64 = ctx.r6.s64 + -29944;
	// lwzx r11,r4,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r7.u32);
	// mullw r10,r11,r8
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r8.s32);
	// stbx r5,r10,r3
	PPC_STORE_U8(ctx.r10.u32 + ctx.r3.u32, ctx.r5.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8212A9A0) {
	__imp__sub_8212A9A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8212A9D8) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-31937
	ctx.r9.s64 = -2093023232;
	// lis r8,-32166
	ctx.r8.s64 = -2108030976;
	// addi r11,r9,-17592
	ctx.r11.s64 = ctx.r9.s64 + -17592;
	// addi r10,r8,29336
	ctx.r10.s64 = ctx.r8.s64 + 29336;
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
	// lwz r11,-17592(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17592);
	// addi r10,r10,520
	ctx.r10.s64 = ctx.r10.s64 + 520;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r6,r7
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// mulli r11,r5,580
	ctx.r11.s64 = ctx.r5.s64 * 580;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x821298d0
	sub_821298D0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8212A9D8) {
	__imp__sub_8212A9D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8212AA08) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-31937
	ctx.r9.s64 = -2093023232;
	// lis r8,-32166
	ctx.r8.s64 = -2108030976;
	// addi r11,r9,-17592
	ctx.r11.s64 = ctx.r9.s64 + -17592;
	// addi r10,r8,29336
	ctx.r10.s64 = ctx.r8.s64 + 29336;
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
	// lwz r11,-17592(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17592);
	// addi r10,r10,520
	ctx.r10.s64 = ctx.r10.s64 + 520;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r6,r7
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// mulli r11,r5,580
	ctx.r11.s64 = ctx.r5.s64 * 580;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x821299d8
	sub_821299D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8212AA08) {
	__imp__sub_8212AA08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8212AA38) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31937
	ctx.r10.s64 = -2093023232;
	// lis r9,-32166
	ctx.r9.s64 = -2108030976;
	// addi r11,r10,-17592
	ctx.r11.s64 = ctx.r10.s64 + -17592;
	// lis r8,0
	ctx.r8.s64 = 0;
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
	// lwz r10,-17592(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -17592);
	// ori r6,r8,48796
	ctx.r6.u64 = ctx.r8.u64 | 48796;
	// lis r5,-32155
	ctx.r5.s64 = -2107310080;
	// rlwinm r4,r10,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r9,29336
	ctx.r10.s64 = ctx.r9.s64 + 29336;
	// addi r11,r5,-29944
	ctx.r11.s64 = ctx.r5.s64 + -29944;
	// addi r8,r10,520
	ctx.r8.s64 = ctx.r10.s64 + 520;
	// lwzx r3,r4,r7
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r7.u32);
	// mullw r10,r3,r6
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r6.s32);
	// lbzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// cntlzw r7,r9
	ctx.r7.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// mulli r9,r3,580
	ctx.r9.s64 = ctx.r3.s64 * 580;
	// rlwinm r6,r7,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// add r3,r9,r8
	ctx.r3.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stbx r6,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r6.u8);
	// b 0x821298d0
	sub_821298D0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8212AA38) {
	__imp__sub_8212AA38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8212AA8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8212AA8C) {
	__imp__sub_8212AA8C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8212AA90) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-31937
	ctx.r9.s64 = -2093023232;
	// lis r8,-32166
	ctx.r8.s64 = -2108030976;
	// addi r11,r9,-17592
	ctx.r11.s64 = ctx.r9.s64 + -17592;
	// addi r10,r8,29336
	ctx.r10.s64 = ctx.r8.s64 + 29336;
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
	// lwz r11,-17592(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17592);
	// addi r10,r10,520
	ctx.r10.s64 = ctx.r10.s64 + 520;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r6,r7
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// mulli r11,r5,580
	ctx.r11.s64 = ctx.r5.s64 * 580;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x821299d8
	sub_821299D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8212AA90) {
	__imp__sub_8212AA90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8212AAC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8212AAC8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-31937
	ctx.r29.s64 = -2093023232;
	// lis r11,0
	ctx.r11.s64 = 0;
	// addi r31,r29,-17592
	ctx.r31.s64 = ctx.r29.s64 + -17592;
	// ori r10,r11,48796
	ctx.r10.u64 = ctx.r11.u64 | 48796;
	// addi r9,r31,4
	ctx.r9.s64 = ctx.r31.s64 + 4;
	// lwz r11,-17592(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -17592);
	// lis r8,-32155
	ctx.r8.s64 = -2107310080;
	// li r7,0
	ctx.r7.s64 = 0;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r8,-29944
	ctx.r5.s64 = ctx.r8.s64 + -29944;
	// lis r4,-32166
	ctx.r4.s64 = -2108030976;
	// addi r30,r4,29336
	ctx.r30.s64 = ctx.r4.s64 + 29336;
	// lwzx r3,r6,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r9.u32);
	// addi r11,r30,180
	ctx.r11.s64 = ctx.r30.s64 + 180;
	// mullw r10,r3,r10
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r10.s32);
	// stbx r7,r10,r5
	PPC_STORE_U8(ctx.r10.u32 + ctx.r5.u32, ctx.r7.u8);
	// mulli r10,r3,580
	ctx.r10.s64 = ctx.r3.s64 * 580;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x821298d0
	ctx.lr = 0x8212AB18;
	sub_821298D0(ctx, base);
	// lwz r11,-17592(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -17592);
	// addi r9,r31,4
	ctx.r9.s64 = ctx.r31.s64 + 4;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r30,520
	ctx.r10.s64 = ctx.r30.s64 + 520;
	// lwzx r7,r8,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// mulli r11,r7,580
	ctx.r11.s64 = ctx.r7.s64 * 580;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x821298d0
	ctx.lr = 0x8212AB38;
	sub_821298D0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8212AAC0) {
	__imp__sub_8212AAC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8212AB40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8212AB48;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-31937
	ctx.r29.s64 = -2093023232;
	// lis r11,0
	ctx.r11.s64 = 0;
	// addi r31,r29,-17592
	ctx.r31.s64 = ctx.r29.s64 + -17592;
	// ori r10,r11,48796
	ctx.r10.u64 = ctx.r11.u64 | 48796;
	// addi r9,r31,4
	ctx.r9.s64 = ctx.r31.s64 + 4;
	// lwz r11,-17592(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -17592);
	// lis r8,-32155
	ctx.r8.s64 = -2107310080;
	// li r7,0
	ctx.r7.s64 = 0;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r8,-29944
	ctx.r5.s64 = ctx.r8.s64 + -29944;
	// lis r4,-32166
	ctx.r4.s64 = -2108030976;
	// addi r30,r4,29336
	ctx.r30.s64 = ctx.r4.s64 + 29336;
	// lwzx r3,r6,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r9.u32);
	// addi r11,r30,180
	ctx.r11.s64 = ctx.r30.s64 + 180;
	// mullw r10,r3,r10
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r10.s32);
	// stbx r7,r10,r5
	PPC_STORE_U8(ctx.r10.u32 + ctx.r5.u32, ctx.r7.u8);
	// mulli r10,r3,580
	ctx.r10.s64 = ctx.r3.s64 * 580;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x821299d8
	ctx.lr = 0x8212AB98;
	sub_821299D8(ctx, base);
	// lwz r11,-17592(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -17592);
	// addi r9,r31,4
	ctx.r9.s64 = ctx.r31.s64 + 4;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r30,520
	ctx.r10.s64 = ctx.r30.s64 + 520;
	// lwzx r7,r8,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// mulli r11,r7,580
	ctx.r11.s64 = ctx.r7.s64 * 580;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x821299d8
	ctx.lr = 0x8212ABB8;
	sub_821299D8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8212AB40) {
	__imp__sub_8212AB40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8212ABC0) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-31937
	ctx.r9.s64 = -2093023232;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r10,r9,-17592
	ctx.r10.s64 = ctx.r9.s64 + -17592;
	// addi r11,r11,29336
	ctx.r11.s64 = ctx.r11.s64 + 29336;
	// addi r8,r10,4
	ctx.r8.s64 = ctx.r10.s64 + 4;
	// lwz r10,-17592(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17592);
	// addi r7,r11,496
	ctx.r7.s64 = ctx.r11.s64 + 496;
	// rlwinm r6,r10,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r6,r8
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r8.u32);
	// mulli r10,r9,580
	ctx.r10.s64 = ctx.r9.s64 * 580;
	// lbzx r5,r10,r7
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r7.u32);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x8212ac08
	if (!ctx.cr6.eq) goto loc_8212AC08;
	// addi r11,r11,236
	ctx.r11.s64 = ctx.r11.s64 + 236;
	// lbzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8212ac0c
	if (ctx.cr6.eq) goto loc_8212AC0C;
loc_8212AC08:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8212AC0C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lis r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32155
	ctx.r10.s64 = -2107310080;
	// ori r8,r11,48796
	ctx.r8.u64 = ctx.r11.u64 | 48796;
	// addi r10,r10,-29944
	ctx.r10.s64 = ctx.r10.s64 + -29944;
	// mullw r11,r9,r8
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x8212ac4c
	if (ctx.cr6.lt) goto loc_8212AC4C;
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r10,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// blr 
	return;
loc_8212AC4C:
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8212ABC0) {
	__imp__sub_8212ABC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8212AC58) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-31937
	ctx.r9.s64 = -2093023232;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r10,r9,-17592
	ctx.r10.s64 = ctx.r9.s64 + -17592;
	// addi r11,r11,29336
	ctx.r11.s64 = ctx.r11.s64 + 29336;
	// addi r8,r10,4
	ctx.r8.s64 = ctx.r10.s64 + 4;
	// lwz r10,-17592(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17592);
	// addi r7,r11,496
	ctx.r7.s64 = ctx.r11.s64 + 496;
	// rlwinm r6,r10,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r6,r8
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r8.u32);
	// mulli r10,r9,580
	ctx.r10.s64 = ctx.r9.s64 * 580;
	// lbzx r5,r10,r7
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r7.u32);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x8212aca0
	if (!ctx.cr6.eq) goto loc_8212ACA0;
	// addi r11,r11,236
	ctx.r11.s64 = ctx.r11.s64 + 236;
	// lbzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8212aca4
	if (ctx.cr6.eq) goto loc_8212ACA4;
loc_8212ACA0:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8212ACA4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lis r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32155
	ctx.r10.s64 = -2107310080;
	// ori r8,r11,48796
	ctx.r8.u64 = ctx.r11.u64 | 48796;
	// addi r10,r10,-29944
	ctx.r10.s64 = ctx.r10.s64 + -29944;
	// mullw r11,r9,r8
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x8212ace8
	if (ctx.cr6.eq) goto loc_8212ACE8;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// blr 
	return;
loc_8212ACE8:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8212AC58) {
	__imp__sub_8212AC58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8212ACF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8212ACF4) {
	__imp__sub_8212ACF4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8212ACF8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31937
	ctx.r10.s64 = -2093023232;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r11,r10,-17592
	ctx.r11.s64 = ctx.r10.s64 + -17592;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// lwz r11,-17592(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -17592);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r8,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// b 0x82129c18
	sub_82129C18(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8212ACF8) {
	__imp__sub_8212ACF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8212AD18) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31937
	ctx.r10.s64 = -2093023232;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r11,r10,-17592
	ctx.r11.s64 = ctx.r10.s64 + -17592;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// lwz r11,-17592(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -17592);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r8,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// b 0x82129c18
	sub_82129C18(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8212AD18) {
	__imp__sub_8212AD18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8212AD38) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-31937
	ctx.r9.s64 = -2093023232;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r10,r9,-17592
	ctx.r10.s64 = ctx.r9.s64 + -17592;
	// addi r11,r11,29336
	ctx.r11.s64 = ctx.r11.s64 + 29336;
	// addi r8,r10,4
	ctx.r8.s64 = ctx.r10.s64 + 4;
	// lwz r10,-17592(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17592);
	// addi r7,r11,496
	ctx.r7.s64 = ctx.r11.s64 + 496;
	// rlwinm r6,r10,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r6,r8
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r8.u32);
	// mulli r10,r9,580
	ctx.r10.s64 = ctx.r9.s64 * 580;
	// lbzx r5,r10,r7
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r7.u32);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x8212ad80
	if (!ctx.cr6.eq) goto loc_8212AD80;
	// addi r11,r11,236
	ctx.r11.s64 = ctx.r11.s64 + 236;
	// lbzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8212ad84
	if (ctx.cr6.eq) goto loc_8212AD84;
loc_8212AD80:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8212AD84:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// lis r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-29944
	ctx.r11.s64 = ctx.r11.s64 + -29944;
	// ori r8,r10,48796
	ctx.r8.u64 = ctx.r10.u64 | 48796;
	// addi r7,r11,28
	ctx.r7.s64 = ctx.r11.s64 + 28;
	// mullw r6,r9,r8
	ctx.r6.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// li r5,2
	ctx.r5.s64 = 2;
	// stwx r5,r6,r7
	PPC_STORE_U32(ctx.r6.u32 + ctx.r7.u32, ctx.r5.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8212AD38) {
	__imp__sub_8212AD38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8212ADB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8212ADB4) {
	__imp__sub_8212ADB4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8212ADB8) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-31937
	ctx.r9.s64 = -2093023232;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r10,r9,-17592
	ctx.r10.s64 = ctx.r9.s64 + -17592;
	// addi r11,r11,29336
	ctx.r11.s64 = ctx.r11.s64 + 29336;
	// addi r8,r10,4
	ctx.r8.s64 = ctx.r10.s64 + 4;
	// lwz r10,-17592(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17592);
	// addi r7,r11,496
	ctx.r7.s64 = ctx.r11.s64 + 496;
	// rlwinm r6,r10,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r6,r8
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r8.u32);
	// mulli r10,r9,580
	ctx.r10.s64 = ctx.r9.s64 * 580;
	// lbzx r5,r10,r7
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r7.u32);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x8212ae00
	if (!ctx.cr6.eq) goto loc_8212AE00;
	// addi r11,r11,236
	ctx.r11.s64 = ctx.r11.s64 + 236;
	// lbzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8212ae04
	if (ctx.cr6.eq) goto loc_8212AE04;
loc_8212AE00:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8212AE04:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// lis r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-29944
	ctx.r11.s64 = ctx.r11.s64 + -29944;
	// ori r8,r10,48796
	ctx.r8.u64 = ctx.r10.u64 | 48796;
	// addi r7,r11,28
	ctx.r7.s64 = ctx.r11.s64 + 28;
	// mullw r6,r9,r8
	ctx.r6.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stwx r5,r6,r7
	PPC_STORE_U32(ctx.r6.u32 + ctx.r7.u32, ctx.r5.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8212ADB8) {
	__imp__sub_8212ADB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8212AE34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8212AE34) {
	__imp__sub_8212AE34(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8212AE38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8212AE40;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-31937
	ctx.r9.s64 = -2093023232;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r10,r9,-17592
	ctx.r10.s64 = ctx.r9.s64 + -17592;
	// addi r31,r11,29336
	ctx.r31.s64 = ctx.r11.s64 + 29336;
	// addi r8,r10,4
	ctx.r8.s64 = ctx.r10.s64 + 4;
	// lwz r11,-17592(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17592);
	// addi r10,r31,240
	ctx.r10.s64 = ctx.r31.s64 + 240;
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r29,r7,r8
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// mulli r30,r29,580
	ctx.r30.s64 = ctx.r29.s64 * 580;
	// add r3,r30,r10
	ctx.r3.u64 = ctx.r30.u64 + ctx.r10.u64;
	// bl 0x821298d0
	ctx.lr = 0x8212AE74;
	sub_821298D0(ctx, base);
	// lis r6,-32155
	ctx.r6.s64 = -2107310080;
	// lis r5,0
	ctx.r5.s64 = 0;
	// addi r11,r6,-29944
	ctx.r11.s64 = ctx.r6.s64 + -29944;
	// ori r4,r5,48796
	ctx.r4.u64 = ctx.r5.u64 | 48796;
	// addi r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 + 28;
	// mullw r10,r29,r4
	ctx.r10.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r4.s32);
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8212aed8
	if (ctx.cr6.eq) goto loc_8212AED8;
	// addi r9,r31,496
	ctx.r9.s64 = ctx.r31.s64 + 496;
	// lbzx r8,r30,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r9.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8212aebc
	if (!ctx.cr6.eq) goto loc_8212AEBC;
	// addi r9,r31,236
	ctx.r9.s64 = ctx.r31.s64 + 236;
	// lbzx r8,r30,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r9.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8212aec0
	if (ctx.cr6.eq) goto loc_8212AEC0;
loc_8212AEBC:
	// li r9,1
	ctx.r9.s64 = 1;
loc_8212AEC0:
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8212aee4
	if (!ctx.cr6.eq) goto loc_8212AEE4;
	// stwx r9,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_8212AED8:
	// addi r11,r31,200
	ctx.r11.s64 = ctx.r31.s64 + 200;
	// add r3,r30,r11
	ctx.r3.u64 = ctx.r30.u64 + ctx.r11.u64;
	// bl 0x821298d0
	ctx.lr = 0x8212AEE4;
	sub_821298D0(ctx, base);
loc_8212AEE4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8212AE38) {
	__imp__sub_8212AE38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8212AEEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8212AEEC) {
	__imp__sub_8212AEEC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8212AEF0) {
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
	// lis r10,-31937
	ctx.r10.s64 = -2093023232;
	// lis r9,-32166
	ctx.r9.s64 = -2108030976;
	// addi r11,r10,-17592
	ctx.r11.s64 = ctx.r10.s64 + -17592;
	// addi r31,r9,29336
	ctx.r31.s64 = ctx.r9.s64 + 29336;
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// lwz r11,-17592(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -17592);
	// addi r10,r31,240
	ctx.r10.s64 = ctx.r31.s64 + 240;
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r7,r8
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// mulli r30,r6,580
	ctx.r30.s64 = ctx.r6.s64 * 580;
	// add r3,r30,r10
	ctx.r3.u64 = ctx.r30.u64 + ctx.r10.u64;
	// bl 0x821299d8
	ctx.lr = 0x8212AF34;
	sub_821299D8(ctx, base);
	// addi r11,r31,200
	ctx.r11.s64 = ctx.r31.s64 + 200;
	// add r3,r30,r11
	ctx.r3.u64 = ctx.r30.u64 + ctx.r11.u64;
	// bl 0x821299d8
	ctx.lr = 0x8212AF40;
	sub_821299D8(ctx, base);
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

PPC_WEAK_FUNC(sub_8212AEF0) {
	__imp__sub_8212AEF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8212AF58) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-31937
	ctx.r9.s64 = -2093023232;
	// lis r8,-32166
	ctx.r8.s64 = -2108030976;
	// addi r11,r9,-17592
	ctx.r11.s64 = ctx.r9.s64 + -17592;
	// addi r10,r8,29336
	ctx.r10.s64 = ctx.r8.s64 + 29336;
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
	// lwz r11,-17592(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17592);
	// addi r10,r10,540
	ctx.r10.s64 = ctx.r10.s64 + 540;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r6,r7
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// mulli r11,r5,580
	ctx.r11.s64 = ctx.r5.s64 * 580;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x821298d0
	sub_821298D0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8212AF58) {
	__imp__sub_8212AF58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8212AF88) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-31937
	ctx.r9.s64 = -2093023232;
	// lis r8,-32166
	ctx.r8.s64 = -2108030976;
	// addi r11,r9,-17592
	ctx.r11.s64 = ctx.r9.s64 + -17592;
	// addi r10,r8,29336
	ctx.r10.s64 = ctx.r8.s64 + 29336;
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
	// lwz r11,-17592(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17592);
	// addi r10,r10,540
	ctx.r10.s64 = ctx.r10.s64 + 540;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r6,r7
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// mulli r11,r5,580
	ctx.r11.s64 = ctx.r5.s64 * 580;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x821299d8
	sub_821299D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8212AF88) {
	__imp__sub_8212AF88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8212AFB8) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-31937
	ctx.r9.s64 = -2093023232;
	// lis r8,-32166
	ctx.r8.s64 = -2108030976;
	// addi r11,r9,-17592
	ctx.r11.s64 = ctx.r9.s64 + -17592;
	// addi r10,r8,29336
	ctx.r10.s64 = ctx.r8.s64 + 29336;
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
	// lwz r11,-17592(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17592);
	// addi r10,r10,560
	ctx.r10.s64 = ctx.r10.s64 + 560;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r6,r7
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// mulli r11,r5,580
	ctx.r11.s64 = ctx.r5.s64 * 580;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x821298d0
	sub_821298D0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8212AFB8) {
	__imp__sub_8212AFB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8212AFE8) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-31937
	ctx.r9.s64 = -2093023232;
	// lis r8,-32166
	ctx.r8.s64 = -2108030976;
	// addi r11,r9,-17592
	ctx.r11.s64 = ctx.r9.s64 + -17592;
	// addi r10,r8,29336
	ctx.r10.s64 = ctx.r8.s64 + 29336;
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
	// lwz r11,-17592(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17592);
	// addi r10,r10,560
	ctx.r10.s64 = ctx.r10.s64 + 560;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r6,r7
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// mulli r11,r5,580
	ctx.r11.s64 = ctx.r5.s64 * 580;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x821299d8
	sub_821299D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8212AFE8) {
	__imp__sub_8212AFE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8212B018) {
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
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// mulli r10,r3,580
	ctx.r10.s64 = ctx.r3.s64 * 580;
	// addi r11,r11,29336
	ctx.r11.s64 = ctx.r11.s64 + 29336;
	// lis r9,-32165
	ctx.r9.s64 = -2107965440;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lis r8,0
	ctx.r8.s64 = 0;
	// addi r6,r9,28832
	ctx.r6.s64 = ctx.r9.s64 + 28832;
	// ori r5,r8,48796
	ctx.r5.u64 = ctx.r8.u64 | 48796;
	// lis r4,-32155
	ctx.r4.s64 = -2107310080;
	// lbz r8,196(r7)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r7.u32 + 196);
	// mullw r10,r3,r5
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r5.s32);
	// lwz r9,340(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 340);
	// addi r11,r4,-29944
	ctx.r11.s64 = ctx.r4.s64 + -29944;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// extsw r11,r9
	ctx.r11.s64 = ctx.r9.s32;
	// beq cr6,0x8212b098
	if (ctx.cr6.eq) goto loc_8212B098;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lis r10,-32166
	ctx.r10.s64 = -2108030976;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lwz r11,30496(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 30496);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f11,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,5804(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5804);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f10,f11,f12
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// fmuls f8,f10,f0
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// b 0x8212b0b4
	goto loc_8212B0B4;
loc_8212B098:
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
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
	// fmuls f8,f12,f0
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
loc_8212B0B4:
	// lbz r11,176(r7)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r7.u32 + 176);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8212b100
	if (!ctx.cr6.eq) goto loc_8212B100;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r3,r7,20
	ctx.r3.s64 = ctx.r7.s64 + 20;
	// lwz r6,29312(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 29312);
	// bl 0x82129b10
	ctx.lr = 0x8212B0D0;
	sub_82129B10(ctx, base);
	// lfs f0,12(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// fmuls f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// lfs f12,88(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// fnmsubs f11,f13,f8,f12
	ctx.f11.f64 = double(float(-(ctx.f13.f64 * ctx.f8.f64 - ctx.f12.f64)));
	// stfs f11,88(r8)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r8.u32 + 88, temp.u32);
	// bl 0x82129b10
	ctx.lr = 0x8212B0EC;
	sub_82129B10(ctx, base);
	// lfs f10,12(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f1,f10
	ctx.f9.f64 = double(float(ctx.f1.f64 * ctx.f10.f64));
	// lfs f7,88(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 88);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f6,f9,f8,f7
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f8.f64 + ctx.f7.f64));
	// stfs f6,88(r8)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r8.u32 + 88, temp.u32);
loc_8212B100:
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r3,r7,80
	ctx.r3.s64 = ctx.r7.s64 + 80;
	// lwz r6,29332(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 29332);
	// bl 0x82129b10
	ctx.lr = 0x8212B110;
	sub_82129B10(ctx, base);
	// fmuls f0,f1,f8
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f8.f64));
	// lfs f13,12(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,84(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r7,100
	ctx.r3.s64 = ctx.r7.s64 + 100;
	// fnmsubs f11,f0,f13,f12
	ctx.f11.f64 = double(float(-(ctx.f0.f64 * ctx.f13.f64 - ctx.f12.f64)));
	// stfs f11,84(r8)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r8.u32 + 84, temp.u32);
	// bl 0x82129b10
	ctx.lr = 0x8212B12C;
	sub_82129B10(ctx, base);
	// fmuls f10,f1,f8
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f1.f64 * ctx.f8.f64));
	// lfs f9,12(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,84(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 84);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f7,f10,f9,f8
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f9.f64 + ctx.f8.f64));
	// stfs f7,84(r8)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r8.u32 + 84, temp.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8212B018) {
	__imp__sub_8212B018(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8212B150) {
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
	// lbz r8,24(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 24);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r10,-32166
	ctx.r10.s64 = -2108030976;
	// lwz r8,36(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// lis r7,-31936
	ctx.r7.s64 = -2092957696;
	// lwz r10,29304(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 29304);
	// lwz r9,-4812(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + -4812);
	// subf r6,r8,r9
	ctx.r6.s64 = ctx.r9.s64 - ctx.r8.s64;
	// lwz r5,12(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmpw cr6,r6,r5
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r5.s32, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// lwz r9,32(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// bne cr6,0x8212b1b4
	if (!ctx.cr6.eq) goto loc_8212B1B4;
	// stw r10,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// stb r10,24(r11)
	PPC_STORE_U8(ctx.r11.u32 + 24, ctx.r10.u8);
	// blr 
	return;
loc_8212B1B4:
	// li r9,2
	ctx.r9.s64 = 2;
	// stb r10,24(r11)
	PPC_STORE_U8(ctx.r11.u32 + 24, ctx.r10.u8);
	// stw r9,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r9.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8212B150) {
	__imp__sub_8212B150(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8212B1C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8212B1C4) {
	__imp__sub_8212B1C4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8212B1C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// lis r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-29944
	ctx.r11.s64 = ctx.r11.s64 + -29944;
	// ori r9,r10,48796
	ctx.r9.u64 = ctx.r10.u64 | 48796;
	// addi r8,r11,28
	ctx.r8.s64 = ctx.r11.s64 + 28;
	// mullw r7,r3,r9
	ctx.r7.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r9.s32);
	// lwzx r11,r7,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8212b22c
	if (ctx.cr6.eq) goto loc_8212B22C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// beq cr6,0x8212b210
	if (ctx.cr6.eq) goto loc_8212B210;
	// rlwinm r10,r11,0,24,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFCFF;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r10,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r10.u32);
	// rlwinm r10,r11,0,20,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFEFFF;
	// stw r10,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r10.u32);
	// blr 
	return;
loc_8212B210:
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwimi r11,r10,8,22,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 8) & 0x300) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFCFF);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// rlwinm r10,r11,0,20,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFEFFF;
	// stw r10,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r10.u32);
	// blr 
	return;
loc_8212B22C:
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwimi r11,r10,9,22,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 9) & 0x300) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFCFF);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// rlwinm r10,r11,0,20,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFEFFF;
	// stw r10,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r10.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8212B1C8) {
	__imp__sub_8212B1C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8212B24C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8212B24C) {
	__imp__sub_8212B24C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8212B250) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x8212B258;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// mulli r29,r3,580
	ctx.r29.s64 = ctx.r3.s64 * 580;
	// addi r30,r11,29336
	ctx.r30.s64 = ctx.r11.s64 + 29336;
	// lis r11,0
	ctx.r11.s64 = 0;
	// addi r10,r30,496
	ctx.r10.s64 = ctx.r30.s64 + 496;
	// ori r8,r11,48796
	ctx.r8.u64 = ctx.r11.u64 | 48796;
	// lis r7,-32155
	ctx.r7.s64 = -2107310080;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r9,1
	ctx.r9.s64 = 1;
	// lbzx r11,r29,r10
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r10.u32);
	// mullw r27,r3,r8
	ctx.r27.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r8.s32);
	// addi r28,r7,-29944
	ctx.r28.s64 = ctx.r7.s64 + -29944;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8212b2a8
	if (!ctx.cr6.eq) goto loc_8212B2A8;
	// addi r10,r30,236
	ctx.r10.s64 = ctx.r30.s64 + 236;
	// lbzx r8,r29,r10
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r10.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8212b2ac
	if (ctx.cr6.eq) goto loc_8212B2AC;
loc_8212B2A8:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_8212B2AC:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8212b2f4
	if (ctx.cr6.eq) goto loc_8212B2F4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// beq cr6,0x8212b2dc
	if (ctx.cr6.eq) goto loc_8212B2DC;
	// rlwimi r11,r9,8,22,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r9.u32, 8) & 0x300) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFCFF);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// ori r10,r11,4096
	ctx.r10.u64 = ctx.r11.u64 | 4096;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// b 0x8212b300
	goto loc_8212B300;
loc_8212B2DC:
	// rlwimi r11,r9,9,22,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r9.u32, 9) & 0x300) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFCFF);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// ori r10,r11,4096
	ctx.r10.u64 = ctx.r11.u64 | 4096;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// b 0x8212b300
	goto loc_8212B300;
loc_8212B2F4:
	// bl 0x8212b150
	ctx.lr = 0x8212B2F8;
	sub_8212B150(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8212b1c8
	ctx.lr = 0x8212B300;
	sub_8212B1C8(ctx, base);
loc_8212B300:
	// lbzx r11,r27,r28
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + ctx.r28.u32);
	// add r8,r29,r30
	ctx.r8.u64 = ctx.r29.u64 + ctx.r30.u64;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// lbz r7,196(r8)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + 196);
	// rlwinm r10,r11,0,21,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFF7FF;
	// cmpw cr6,r7,r9
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x8212b328
	if (!ctx.cr6.eq) goto loc_8212B328;
	// ori r10,r11,2048
	ctx.r10.u64 = ctx.r11.u64 | 2048;
loc_8212B328:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// lbz r10,176(r8)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r8.u32 + 176);
	// li r7,0
	ctx.r7.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lfs f8,-9672(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -9672);
	ctx.f8.f64 = double(temp.f32);
	// beq cr6,0x8212b378
	if (ctx.cr6.eq) goto loc_8212B378;
	// addi r3,r8,20
	ctx.r3.s64 = ctx.r8.s64 + 20;
	// bl 0x82129b10
	ctx.lr = 0x8212B34C;
	sub_82129B10(ctx, base);
	// fmuls f0,f1,f8
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f8.f64));
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82129b10
	ctx.lr = 0x8212B364;
	sub_82129B10(ctx, base);
	// fmuls f12,f1,f8
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64 * ctx.f8.f64));
	// fctiwz f11,f12
	ctx.f11.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f11.u64);
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// subf r7,r6,r7
	ctx.r7.s64 = ctx.r7.s64 - ctx.r6.s64;
loc_8212B378:
	// addi r3,r8,140
	ctx.r3.s64 = ctx.r8.s64 + 140;
	// bl 0x82129b10
	ctx.lr = 0x8212B380;
	sub_82129B10(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r8,120
	ctx.r3.s64 = ctx.r8.s64 + 120;
	// lfs f7,-9676(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -9676);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f0,f1,f7
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f7.f64));
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// subf r7,r10,r7
	ctx.r7.s64 = ctx.r7.s64 - ctx.r10.s64;
	// bl 0x82129b10
	ctx.lr = 0x8212B3A4;
	sub_82129B10(ctx, base);
	// fmuls f12,f1,f8
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64 * ctx.f8.f64));
	// addi r3,r8,40
	ctx.r3.s64 = ctx.r8.s64 + 40;
	// fctiwz f11,f12
	ctx.f11.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f11.u64);
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// subf r30,r6,r7
	ctx.r30.s64 = ctx.r7.s64 - ctx.r6.s64;
	// bl 0x82129b10
	ctx.lr = 0x8212B3C0;
	sub_82129B10(ctx, base);
	// fmuls f10,f1,f8
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f1.f64 * ctx.f8.f64));
	// addi r3,r8,60
	ctx.r3.s64 = ctx.r8.s64 + 60;
	// fctiwz f9,f10
	ctx.f9.s64 = (ctx.f10.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f9.u64);
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82129b10
	ctx.lr = 0x8212B3D8;
	sub_82129B10(ctx, base);
	// fmuls f6,f1,f8
	ctx.fpscr.disableFlushMode();
	ctx.f6.f64 = double(float(ctx.f1.f64 * ctx.f8.f64));
	// addi r3,r8,460
	ctx.r3.s64 = ctx.r8.s64 + 460;
	// fctiwz f5,f6
	ctx.f5.s64 = (ctx.f6.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f6.f64));
	// stfd f5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f5.u64);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// subf r7,r4,r5
	ctx.r7.s64 = ctx.r5.s64 - ctx.r4.s64;
	// bl 0x82129b10
	ctx.lr = 0x8212B3F4;
	sub_82129B10(ctx, base);
	// fmuls f4,f1,f8
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = double(float(ctx.f1.f64 * ctx.f8.f64));
	// addi r3,r8,440
	ctx.r3.s64 = ctx.r8.s64 + 440;
	// fctiwz f3,f4
	ctx.f3.s64 = (ctx.f4.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f4.f64));
	// stfd f3,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f3.u64);
	// lwz r29,84(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82129b10
	ctx.lr = 0x8212B40C;
	sub_82129B10(ctx, base);
	// fmuls f2,f1,f8
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = double(float(ctx.f1.f64 * ctx.f8.f64));
	// lbz r3,176(r8)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r8.u32 + 176);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// fctiwz f1,f2
	ctx.f1.s64 = (ctx.f2.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f2.f64));
	// stfd f1,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f1.u64);
	// lwz r28,84(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// beq cr6,0x8212b470
	if (ctx.cr6.eq) goto loc_8212B470;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8212b470
	if (!ctx.cr6.eq) goto loc_8212B470;
	// addi r3,r8,20
	ctx.r3.s64 = ctx.r8.s64 + 20;
	// bl 0x82129b10
	ctx.lr = 0x8212B440;
	sub_82129B10(ctx, base);
	// fmuls f0,f1,f7
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f7.f64));
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// subf r8,r11,r30
	ctx.r8.s64 = ctx.r30.s64 - ctx.r11.s64;
	// bl 0x82129b10
	ctx.lr = 0x8212B45C;
	sub_82129B10(ctx, base);
	// fmuls f12,f1,f8
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64 * ctx.f8.f64));
	// fctiwz f11,f12
	ctx.f11.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f11.u64);
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// subf r30,r6,r8
	ctx.r30.s64 = ctx.r8.s64 - ctx.r6.s64;
loc_8212B470:
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// bl 0x822d46b0
	ctx.lr = 0x8212B478;
	sub_822D46B0(ctx, base);
	// stb r3,26(r31)
	PPC_STORE_U8(ctx.r31.u32 + 26, ctx.r3.u8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822d46b0
	ctx.lr = 0x8212B484;
	sub_822D46B0(ctx, base);
	// stb r3,27(r31)
	PPC_STORE_U8(ctx.r31.u32 + 27, ctx.r3.u8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822d46b0
	ctx.lr = 0x8212B490;
	sub_822D46B0(ctx, base);
	// stb r3,28(r31)
	PPC_STORE_U8(ctx.r31.u32 + 28, ctx.r3.u8);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822d46b0
	ctx.lr = 0x8212B49C;
	sub_822D46B0(ctx, base);
	// stb r3,29(r31)
	PPC_STORE_U8(ctx.r31.u32 + 29, ctx.r3.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8212B250) {
	__imp__sub_8212B250(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8212B4A8) {
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
	// lis r11,-31936
	ctx.r11.s64 = -2092957696;
	// lwz r11,-9384(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9384);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8212b51c
	if (ctx.cr6.eq) goto loc_8212B51C;
	// lis r11,-31936
	ctx.r11.s64 = -2092957696;
	// lwz r11,-9404(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9404);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8212b4f0
	if (!ctx.cr6.eq) goto loc_8212B4F0;
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
loc_8212B4F0:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8212b51c
	if (!ctx.cr6.eq) goto loc_8212B51C;
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// lwz r11,-30052(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -30052);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8212b51c
	if (!ctx.cr6.eq) goto loc_8212B51C;
	// bl 0x821fc6c8
	ctx.lr = 0x8212B510;
	sub_821FC6C8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bne cr6,0x8212b520
	if (!ctx.cr6.eq) goto loc_8212B520;
loc_8212B51C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8212B520:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8212B4A8) {
	__imp__sub_8212B4A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8212B530) {
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
	// bl 0x82141340
	ctx.lr = 0x8212B540;
	sub_82141340(ctx, base);
	// bl 0x8213af78
	ctx.lr = 0x8212B544;
	sub_8213AF78(ctx, base);
	// lbz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8212b568
	if (ctx.cr6.eq) goto loc_8212B568;
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
loc_8212B568:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,2424(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2424);
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

PPC_WEAK_FUNC(sub_8212B530) {
	__imp__sub_8212B530(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8212B580) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x8212B588;
	__savegprlr_27(ctx, base);
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x823de00c
	ctx.lr = 0x8212B590;
	__savefpr_21(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,0
	ctx.r11.s64 = 0;
	// fmr f21,f1
	ctx.fpscr.disableFlushMode();
	ctx.f21.f64 = ctx.f1.f64;
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
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lis r28,-32155
	ctx.r28.s64 = -2107310080;
	// lwz r8,4228(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4228);
	// rlwinm r7,r8,0,20,20
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x800;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x8212b5dc
	if (ctx.cr6.eq) goto loc_8212B5DC;
	// lwz r11,-30052(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -30052);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8212b950
	if (!ctx.cr6.eq) goto loc_8212B950;
loc_8212B5DC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82141340
	ctx.lr = 0x8212B5E4;
	sub_82141340(ctx, base);
	// lwz r11,4236(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4236);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// clrlwi r8,r11,31
	ctx.r8.u64 = ctx.r11.u32 & 0x1;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// lfs f23,5484(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f23.f64 = double(temp.f32);
	// lfs f24,12168(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12168);
	ctx.f24.f64 = double(temp.f32);
	// beq cr6,0x8212b624
	if (ctx.cr6.eq) goto loc_8212B624;
	// lwz r11,-30052(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -30052);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8212b624
	if (ctx.cr6.eq) goto loc_8212B624;
	// fmr f26,f23
	ctx.f26.f64 = ctx.f23.f64;
	// fmr f25,f23
	ctx.f25.f64 = ctx.f23.f64;
	// b 0x8212b670
	goto loc_8212B670;
loc_8212B624:
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82128b40
	ctx.lr = 0x8212B630;
	sub_82128B40(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x82141340
	ctx.lr = 0x8212B63C;
	sub_82141340(ctx, base);
	// bl 0x8213af78
	ctx.lr = 0x8212B640;
	sub_8213AF78(ctx, base);
	// lbz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8212b654
	if (ctx.cr6.eq) goto loc_8212B654;
	// fmr f0,f24
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f24.f64;
	// b 0x8212b65c
	goto loc_8212B65C;
loc_8212B654:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2424(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2424);
	ctx.f0.f64 = double(temp.f32);
loc_8212B65C:
	// li r4,3
	ctx.r4.s64 = 3;
	// fmuls f26,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f26.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82128b40
	ctx.lr = 0x8212B66C;
	sub_82128B40(ctx, base);
	// fneg f25,f1
	ctx.fpscr.disableFlushMode();
	ctx.f25.u64 = ctx.f1.u64 ^ 0x8000000000000000;
loc_8212B670:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82128b40
	ctx.lr = 0x8212B67C;
	sub_82128B40(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f1.f64;
	// bl 0x82128b40
	ctx.lr = 0x8212B68C;
	sub_82128B40(ctx, base);
	// lis r4,8192
	ctx.r4.s64 = 536870912;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// bl 0x82307ff8
	ctx.lr = 0x8212B6A0;
	sub_82307FF8(ctx, base);
	// lis r4,8192
	ctx.r4.s64 = 536870912;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// fmr f28,f1
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = ctx.f1.f64;
	// bl 0x82307ff8
	ctx.lr = 0x8212B6B0;
	sub_82307FF8(ctx, base);
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// fmr f27,f1
	ctx.fpscr.disableFlushMode();
	ctx.f27.f64 = ctx.f1.f64;
	// bl 0x82128b40
	ctx.lr = 0x8212B6C0;
	sub_82128B40(ctx, base);
	// fabs f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f30.u64 & ~0x8000000000000000;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fmr f22,f1
	ctx.f22.f64 = ctx.f1.f64;
	// lfs f31,-9672(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -9672);
	ctx.f31.f64 = double(temp.f32);
	// fcmpu cr6,f0,f23
	ctx.cr6.compare(ctx.f0.f64, ctx.f23.f64);
	// bgt cr6,0x8212b6e4
	if (ctx.cr6.gt) goto loc_8212B6E4;
	// fabs f0,f29
	ctx.f0.u64 = ctx.f29.u64 & ~0x8000000000000000;
	// fcmpu cr6,f0,f23
	ctx.cr6.compare(ctx.f0.f64, ctx.f23.f64);
	// ble cr6,0x8212b70c
	if (!ctx.cr6.gt) goto loc_8212B70C;
loc_8212B6E4:
	// fabs f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f30.u64 & ~0x8000000000000000;
	// fabs f13,f29
	ctx.f13.u64 = ctx.f29.u64 & ~0x8000000000000000;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x8212b6fc
	if (!ctx.cr6.gt) goto loc_8212B6FC;
	// fdivs f0,f29,f30
	ctx.f0.f64 = double(float(ctx.f29.f64 / ctx.f30.f64));
	// b 0x8212b700
	goto loc_8212B700;
loc_8212B6FC:
	// fdivs f0,f30,f29
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f30.f64 / ctx.f29.f64));
loc_8212B700:
	// fmadds f13,f0,f0,f24
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f24.f64));
	// fsqrts f12,f13
	ctx.f12.f64 = double(float(sqrt(ctx.f13.f64)));
	// fmuls f31,f12,f31
	ctx.f31.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
loc_8212B70C:
	// fmuls f0,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f31.f64 * ctx.f30.f64));
	// lbz r11,27(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 27);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x822d46b0
	ctx.lr = 0x8212B72C;
	sub_822D46B0(ctx, base);
	// stb r3,27(r31)
	PPC_STORE_U8(ctx.r31.u32 + 27, ctx.r3.u8);
	// fmuls f12,f31,f29
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f31.f64 * ctx.f29.f64));
	// lbz r10,26(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 26);
	// extsb r11,r10
	ctx.r11.s64 = ctx.r10.s8;
	// fctiwz f11,f12
	ctx.f11.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f11.u64);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x822d46b0
	ctx.lr = 0x8212B750;
	sub_822D46B0(ctx, base);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// stb r3,26(r31)
	PPC_STORE_U8(ctx.r31.u32 + 26, ctx.r3.u8);
	// lbz r8,28(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 28);
	// lfs f31,-9676(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -9676);
	ctx.f31.f64 = double(temp.f32);
	// fmuls f10,f28,f31
	ctx.f10.f64 = double(float(ctx.f28.f64 * ctx.f31.f64));
	// fctiwz f9,f10
	ctx.f9.s64 = (ctx.f10.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f9.u64);
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// subf r3,r7,r8
	ctx.r3.s64 = ctx.r8.s64 - ctx.r7.s64;
	// bl 0x822d46b0
	ctx.lr = 0x8212B778;
	sub_822D46B0(ctx, base);
	// stb r3,28(r31)
	PPC_STORE_U8(ctx.r31.u32 + 28, ctx.r3.u8);
	// fmuls f8,f27,f31
	ctx.fpscr.disableFlushMode();
	ctx.f8.f64 = double(float(ctx.f27.f64 * ctx.f31.f64));
	// lbz r6,29(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 29);
	// fctiwz f7,f8
	ctx.f7.s64 = (ctx.f8.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f8.f64));
	// stfd f7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f7.u64);
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// subf r3,r5,r6
	ctx.r3.s64 = ctx.r6.s64 - ctx.r5.s64;
	// bl 0x822d46b0
	ctx.lr = 0x8212B798;
	sub_822D46B0(ctx, base);
	// stb r3,29(r31)
	PPC_STORE_U8(ctx.r31.u32 + 29, ctx.r3.u8);
	// fmuls f6,f26,f31
	ctx.fpscr.disableFlushMode();
	ctx.f6.f64 = double(float(ctx.f26.f64 * ctx.f31.f64));
	// lbz r4,30(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 30);
	// extsb r3,r4
	ctx.r3.s64 = ctx.r4.s8;
	// fctiwz f5,f6
	ctx.f5.s64 = (ctx.f6.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f6.f64));
	// stfd f5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f5.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
	// bl 0x822d46b0
	ctx.lr = 0x8212B7BC;
	sub_822D46B0(ctx, base);
	// stb r3,30(r31)
	PPC_STORE_U8(ctx.r31.u32 + 30, ctx.r3.u8);
	// fmuls f4,f25,f31
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = double(float(ctx.f25.f64 * ctx.f31.f64));
	// lbz r10,31(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 31);
	// extsb r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	// fctiwz f3,f4
	ctx.f3.s64 = (ctx.f4.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f4.f64));
	// stfd f3,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f3.u64);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// subf r3,r8,r9
	ctx.r3.s64 = ctx.r9.s64 - ctx.r8.s64;
	// bl 0x822d46b0
	ctx.lr = 0x8212B7E0;
	sub_822D46B0(ctx, base);
	// lis r7,-32166
	ctx.r7.s64 = -2108030976;
	// mulli r10,r29,580
	ctx.r10.s64 = ctx.r29.s64 * 580;
	// stb r3,31(r31)
	PPC_STORE_U8(ctx.r31.u32 + 31, ctx.r3.u8);
	// lbz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// addi r11,r7,29336
	ctx.r11.s64 = ctx.r7.s64 + 29336;
	// cntlzw r5,r6
	ctx.r5.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r4,r5,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// lbz r3,196(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 196);
	// cmpw cr6,r3,r4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r4.s32, ctx.xer);
	// bne cr6,0x8212b818
	if (!ctx.cr6.eq) goto loc_8212B818;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// ori r9,r10,2048
	ctx.r9.u64 = ctx.r10.u64 | 2048;
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
loc_8212B818:
	// lbz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 76);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8212b860
	if (!ctx.cr6.eq) goto loc_8212B860;
	// lbz r10,556(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 556);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8212b84c
	if (!ctx.cr6.eq) goto loc_8212B84C;
	// lbz r10,557(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 557);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8212b84c
	if (!ctx.cr6.eq) goto loc_8212B84C;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r10,r11,0,31,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// b 0x8212b860
	goto loc_8212B860;
loc_8212B84C:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r8,r10,2
	ctx.r8.u64 = ctx.r10.u64 | 2;
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
	// stb r9,557(r11)
	PPC_STORE_U8(ctx.r11.u32 + 557, ctx.r9.u8);
loc_8212B860:
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lwz r11,29308(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 29308);
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f22,f0
	ctx.cr6.compare(ctx.f22.f64, ctx.f0.f64);
	// blt cr6,0x8212b880
	if (ctx.cr6.lt) goto loc_8212B880;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
loc_8212B880:
	// lwz r11,4388(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4388);
	// rlwinm r10,r11,0,11,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8212b8b4
	if (ctx.cr6.eq) goto loc_8212B8B4;
	// lis r4,4096
	ctx.r4.s64 = 268435456;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// ori r4,r4,8192
	ctx.r4.u64 = ctx.r4.u64 | 8192;
	// bl 0x82307ff8
	ctx.lr = 0x8212B8A0;
	sub_82307FF8(ctx, base);
	// fcmpu cr6,f1,f23
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f23.f64);
	// beq cr6,0x8212b8b4
	if (ctx.cr6.eq) goto loc_8212B8B4;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// oris r10,r11,64
	ctx.r10.u64 = ctx.r11.u64 | 4194304;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
loc_8212B8B4:
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f0,84(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// addi r8,r11,28832
	ctx.r8.s64 = ctx.r11.s64 + 28832;
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lfs f13,72(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	ctx.f13.f64 = double(temp.f32);
	// stw r29,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r29.u32);
	// lfs f12,88(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lfs f11,76(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	ctx.f11.f64 = double(temp.f32);
	// stw r10,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r10.u32);
	// lfs f0,5804(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5804);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r11,340(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 340);
	// stfs f13,128(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f12,132(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// extsw r7,r11
	ctx.r7.s64 = ctx.r11.s32;
	// stfs f11,140(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stfs f21,112(r1)
	temp.f32 = float(ctx.f21.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f10,80(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// stfs f26,124(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// stfs f25,136(r1)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f29,144(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f30,148(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// fmuls f7,f8,f0
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// stfs f7,116(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// bl 0x820d7a68
	ctx.lr = 0x8212B930;
	sub_820D7A68(ctx, base);
	// lbz r6,108(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 108);
	// lfs f6,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f4.f64 = double(temp.f32);
	// stfs f6,84(r30)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r30.u32 + 84, temp.u32);
	// stfs f5,88(r30)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r30.u32 + 88, temp.u32);
	// stb r6,56(r31)
	PPC_STORE_U8(ctx.r31.u32 + 56, ctx.r6.u8);
	// stfs f4,52(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
loc_8212B950:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x823de058
	ctx.lr = 0x8212B95C;
	__restfpr_21(ctx, base);
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8212B580) {
	__imp__sub_8212B580(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8212B960) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// lwz r11,-29948(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29948);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8212b9d0
	if (ctx.cr6.eq) goto loc_8212B9D0;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// extsw r7,r8
	ctx.r7.s64 = ctx.r8.s32;
	// lfs f0,2416(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2416);
	ctx.f0.f64 = double(temp.f32);
	// std r7,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r7.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f10,0(r4)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// extsw r4,r6
	ctx.r4.s64 = ctx.r6.s32;
	// std r4,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r4.u64);
	// lfd f9,-16(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// frsp f7,f8
	ctx.f7.f64 = double(float(ctx.f8.f64));
	// fmuls f6,f7,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// stfs f6,0(r5)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// b 0x8212ba20
	goto loc_8212BA20;
loc_8212B9D0:
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r3
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// std r8,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r8.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// stfs f12,0(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r7,r11,3
	ctx.r7.s64 = ctx.r11.s64 + 3;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r6,r3
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r3.u32);
	// extsw r11,r4
	ctx.r11.s64 = ctx.r4.s32;
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f11,-16(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// stfs f9,0(r5)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
loc_8212BA20:
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// li r10,0
	ctx.r10.s64 = 0;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r8,r3
	PPC_STORE_U32(ctx.r8.u32 + ctx.r3.u32, ctx.r10.u32);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r7,r11,3
	ctx.r7.s64 = ctx.r11.s64 + 3;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r6,r3
	PPC_STORE_U32(ctx.r6.u32 + ctx.r3.u32, ctx.r10.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8212B960) {
	__imp__sub_8212B960(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8212BA50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8212BA58;
	__savegprlr_29(ctx, base);
	// stfd f29,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f29.u64);
	// stfd f30,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f30.u64);
	// stfd f31,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x8212b960
	ctx.lr = 0x8212BA80;
	sub_8212B960(ctx, base);
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lis r10,-32155
	ctx.r10.s64 = -2107310080;
	// lfs f10,68(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	ctx.f10.f64 = double(temp.f32);
	// lis r9,-32165
	ctx.r9.s64 = -2107965440;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lwz r7,29324(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 29324);
	// lfs f0,5484(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// std r7,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r7.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// lfs f30,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f30.f64 = double(temp.f32);
	// lwz r10,-30032(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30032);
	// fmuls f12,f30,f30
	ctx.f12.f64 = double(float(ctx.f30.f64 * ctx.f30.f64));
	// lfs f29,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f29.f64 = double(temp.f32);
	// lwz r11,28816(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28816);
	// lfs f11,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f8,f29,f29,f12
	ctx.f8.f64 = double(float(ctx.f29.f64 * ctx.f29.f64 + ctx.f12.f64));
	// fsqrts f7,f8
	ctx.f7.f64 = double(float(sqrt(ctx.f8.f64)));
	// fcfid f6,f13
	ctx.f6.f64 = double(ctx.f13.s64);
	// frsp f5,f6
	ctx.f5.f64 = double(float(ctx.f6.f64));
	// fdivs f1,f7,f5
	ctx.f1.f64 = double(float(ctx.f7.f64 / ctx.f5.f64));
	// fmadds f4,f11,f1,f9
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f1.f64 + ctx.f9.f64));
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// fmuls f31,f4,f10
	ctx.f31.f64 = double(float(ctx.f4.f64 * ctx.f10.f64));
	// beq cr6,0x8212bb1c
	if (ctx.cr6.eq) goto loc_8212BB1C;
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// lwz r11,-30048(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -30048);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8212bb1c
	if (ctx.cr6.eq) goto loc_8212BB1C;
	// stfd f31,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f31.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// stfd f1,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// li r3,14
	ctx.r3.s64 = 14;
	// addi r4,r11,-9668
	ctx.r4.s64 = ctx.r11.s64 + -9668;
	// bl 0x82280900
	ctx.lr = 0x8212BB1C;
	sub_82280900(ctx, base);
loc_8212BB1C:
	// fmuls f0,f31,f29
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f31.f64 * ctx.f29.f64));
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// fmuls f13,f31,f30
	ctx.f13.f64 = double(float(ctx.f31.f64 * ctx.f30.f64));
	// stfs f13,0(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
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

PPC_WEAK_FUNC(sub_8212BA50) {
	__imp__sub_8212BA50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8212BB40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x8212BB48;
	__savegprlr_28(ctx, base);
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x823de028
	ctx.lr = 0x8212BB50;
	__savefpr_28(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-32166
	ctx.r31.s64 = -2108030976;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r11,29324(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 29324);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8212bd48
	if (ctx.cr6.eq) goto loc_8212BD48;
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r28,r11,-29944
	ctx.r28.s64 = ctx.r11.s64 + -29944;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8212ba50
	ctx.lr = 0x8212BB80;
	sub_8212BA50(ctx, base);
	// lwz r11,4228(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4228);
	// rlwinm r11,r11,0,20,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8212bd48
	if (!ctx.cr6.eq) goto loc_8212BD48;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f28,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f28.f64 = double(temp.f32);
	// lfs f31,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f31.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bne cr6,0x8212bbb0
	if (!ctx.cr6.eq) goto loc_8212BBB0;
	// fcmpu cr6,f28,f31
	ctx.cr6.compare(ctx.f28.f64, ctx.f31.f64);
	// beq cr6,0x8212bd3c
	if (ctx.cr6.eq) goto loc_8212BD3C;
loc_8212BBB0:
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r30,r11,29336
	ctx.r30.s64 = ctx.r11.s64 + 29336;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f30,2416(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2416);
	ctx.f30.f64 = double(temp.f32);
	// lbz r9,176(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 176);
	// lfs f29,5804(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 5804);
	ctx.f29.f64 = double(temp.f32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8212bc1c
	if (ctx.cr6.eq) goto loc_8212BC1C;
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// lwz r11,-29952(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29952);
	// lfs f13,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fadds f1,f12,f30
	ctx.f1.f64 = double(float(ctx.f12.f64 + ctx.f30.f64));
	// bl 0x823dde20
	ctx.lr = 0x8212BBEC;
	sub_823DDE20(ctx, base);
	// frsp f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64));
	// lbz r10,27(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 27);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// fctiwz f10,f11
	ctx.f10.s64 = (ctx.f11.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f10.u64);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x822d46b0
	ctx.lr = 0x8212BC0C;
	sub_822D46B0(ctx, base);
	// stb r3,27(r29)
	PPC_STORE_U8(ctx.r29.u32 + 27, ctx.r3.u8);
	// lwz r10,29324(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 29324);
	// lbz r9,176(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 176);
	// b 0x8212bc78
	goto loc_8212BC78;
loc_8212BC1C:
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lfs f13,76(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 76);
	ctx.f13.f64 = double(temp.f32);
	// lwz r10,29324(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 29324);
	// fcmpu cr6,f13,f31
	ctx.cr6.compare(ctx.f13.f64, ctx.f31.f64);
	// lwz r11,28820(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28820);
	// lfs f12,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// beq cr6,0x8212bc6c
	if (ctx.cr6.eq) goto loc_8212BC6C;
	// clrldi r11,r10,32
	ctx.r11.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f12,88(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fmuls f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fmuls f8,f9,f29
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f29.f64));
	// fsubs f7,f0,f8
	ctx.f7.f64 = double(float(ctx.f0.f64 - ctx.f8.f64));
	// fneg f6,f8
	ctx.f6.u64 = ctx.f8.u64 ^ 0x8000000000000000;
	// fsel f5,f7,f8,f0
	ctx.f5.f64 = ctx.f7.f64 >= 0.0 ? ctx.f8.f64 : ctx.f0.f64;
	// fsubs f4,f6,f5
	ctx.f4.f64 = double(float(ctx.f6.f64 - ctx.f5.f64));
	// fsel f0,f4,f6,f5
	ctx.f0.f64 = ctx.f4.f64 >= 0.0 ? ctx.f6.f64 : ctx.f5.f64;
loc_8212BC6C:
	// lfs f13,88(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfs f0,88(r28)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r28.u32 + 88, temp.u32);
loc_8212BC78:
	// lbz r11,276(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 276);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8212bc98
	if (!ctx.cr6.eq) goto loc_8212BC98;
	// lis r11,-32154
	ctx.r11.s64 = -2107244544;
	// lwz r11,2116(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2116);
	// lbz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8212bd00
	if (ctx.cr6.eq) goto loc_8212BD00;
loc_8212BC98:
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8212bd00
	if (!ctx.cr6.eq) goto loc_8212BD00;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lfs f13,72(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 72);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f31
	ctx.cr6.compare(ctx.f13.f64, ctx.f31.f64);
	// lwz r11,28824(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28824);
	// lfs f0,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f28
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f28.f64));
	// beq cr6,0x8212bcf0
	if (ctx.cr6.eq) goto loc_8212BCF0;
	// clrldi r11,r10,32
	ctx.r11.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f12,88(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fmuls f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fmuls f8,f9,f29
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f29.f64));
	// fsubs f7,f0,f8
	ctx.f7.f64 = double(float(ctx.f0.f64 - ctx.f8.f64));
	// fneg f6,f8
	ctx.f6.u64 = ctx.f8.u64 ^ 0x8000000000000000;
	// fsel f5,f7,f8,f0
	ctx.f5.f64 = ctx.f7.f64 >= 0.0 ? ctx.f8.f64 : ctx.f0.f64;
	// fsubs f4,f6,f5
	ctx.f4.f64 = double(float(ctx.f6.f64 - ctx.f5.f64));
	// fsel f0,f4,f6,f5
	ctx.f0.f64 = ctx.f4.f64 >= 0.0 ? ctx.f6.f64 : ctx.f5.f64;
loc_8212BCF0:
	// lfs f13,84(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f0,84(r28)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r28.u32 + 84, temp.u32);
	// b 0x8212bd3c
	goto loc_8212BD3C;
loc_8212BD00:
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// lwz r11,-30040(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -30040);
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f28
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f28.f64));
	// fadds f1,f13,f30
	ctx.f1.f64 = double(float(ctx.f13.f64 + ctx.f30.f64));
	// bl 0x823dde20
	ctx.lr = 0x8212BD18;
	sub_823DDE20(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// lbz r10,26(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 26);
	// extsb r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	// fctiwz f11,f12
	ctx.f11.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f11.u64);
	// lwz r8,92(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// subf r3,r8,r9
	ctx.r3.s64 = ctx.r9.s64 - ctx.r8.s64;
	// bl 0x822d46b0
	ctx.lr = 0x8212BD38;
	sub_822D46B0(ctx, base);
	// stb r3,26(r29)
	PPC_STORE_U8(ctx.r29.u32 + 26, ctx.r3.u8);
loc_8212BD3C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f31,52(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 52, temp.u32);
	// stb r11,56(r29)
	PPC_STORE_U8(ctx.r29.u32 + 56, ctx.r11.u8);
loc_8212BD48:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x823de074
	ctx.lr = 0x8212BD54;
	__restfpr_28(ctx, base);
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8212BB40) {
	__imp__sub_8212BB40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8212BD58) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r9,-32166
	ctx.r9.s64 = -2108030976;
	// mulli r11,r3,580
	ctx.r11.s64 = ctx.r3.s64 * 580;
	// addi r9,r9,29336
	ctx.r9.s64 = ctx.r9.s64 + 29336;
	// add r8,r5,r10
	ctx.r8.u64 = ctx.r5.u64 + ctx.r10.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 16);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x8212bd90
	if (!ctx.cr6.eq) goto loc_8212BD90;
	// lbz r10,17(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 17);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8212bda8
	if (ctx.cr6.eq) goto loc_8212BDA8;
loc_8212BD90:
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// or r8,r10,r6
	ctx.r8.u64 = ctx.r10.u64 | ctx.r6.u64;
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// stb r9,17(r11)
	PPC_STORE_U8(ctx.r11.u32 + 17, ctx.r9.u8);
	// blr 
	return;
loc_8212BDA8:
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,17(r11)
	PPC_STORE_U8(ctx.r11.u32 + 17, ctx.r10.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8212BD58) {
	__imp__sub_8212BD58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8212BDB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8212BDB4) {
	__imp__sub_8212BDB4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8212BDB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// mulli r10,r3,580
	ctx.r10.s64 = ctx.r3.s64 * 580;
	// addi r11,r11,29336
	ctx.r11.s64 = ctx.r11.s64 + 29336;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r10,296(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 296);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8212bde0
	if (!ctx.cr6.eq) goto loc_8212BDE0;
	// lbz r10,297(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 297);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8212bdec
	if (ctx.cr6.eq) goto loc_8212BDEC;
loc_8212BDE0:
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// ori r9,r10,1
	ctx.r9.u64 = ctx.r10.u64 | 1;
	// stw r9,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r9.u32);
loc_8212BDEC:
	// li r8,0
	ctx.r8.s64 = 0;
	// stb r8,297(r11)
	PPC_STORE_U8(ctx.r11.u32 + 297, ctx.r8.u8);
	// lbz r10,316(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 316);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8212be0c
	if (!ctx.cr6.eq) goto loc_8212BE0C;
	// lbz r10,317(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 317);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8212be18
	if (ctx.cr6.eq) goto loc_8212BE18;
loc_8212BE0C:
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// ori r9,r10,8192
	ctx.r9.u64 = ctx.r10.u64 | 8192;
	// stw r9,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r9.u32);
loc_8212BE18:
	// stb r8,317(r11)
	PPC_STORE_U8(ctx.r11.u32 + 317, ctx.r8.u8);
	// lbz r10,336(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 336);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8212be34
	if (!ctx.cr6.eq) goto loc_8212BE34;
	// lbz r10,337(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 337);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8212be40
	if (ctx.cr6.eq) goto loc_8212BE40;
loc_8212BE34:
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// ori r9,r10,16384
	ctx.r9.u64 = ctx.r10.u64 | 16384;
	// stw r9,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r9.u32);
loc_8212BE40:
	// stb r8,337(r11)
	PPC_STORE_U8(ctx.r11.u32 + 337, ctx.r8.u8);
	// lbz r10,356(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 356);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8212be5c
	if (!ctx.cr6.eq) goto loc_8212BE5C;
	// lbz r10,357(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 357);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8212be68
	if (ctx.cr6.eq) goto loc_8212BE68;
loc_8212BE5C:
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// ori r9,r10,32768
	ctx.r9.u64 = ctx.r10.u64 | 32768;
	// stw r9,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r9.u32);
loc_8212BE68:
	// stb r8,357(r11)
	PPC_STORE_U8(ctx.r11.u32 + 357, ctx.r8.u8);
	// lbz r10,376(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 376);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8212be84
	if (!ctx.cr6.eq) goto loc_8212BE84;
	// lbz r10,377(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 377);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8212be90
	if (ctx.cr6.eq) goto loc_8212BE90;
loc_8212BE84:
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// ori r9,r10,4
	ctx.r9.u64 = ctx.r10.u64 | 4;
	// stw r9,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r9.u32);
loc_8212BE90:
	// stb r8,377(r11)
	PPC_STORE_U8(ctx.r11.u32 + 377, ctx.r8.u8);
	// lbz r10,396(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 396);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8212beac
	if (!ctx.cr6.eq) goto loc_8212BEAC;
	// lbz r10,397(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 397);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8212beb8
	if (ctx.cr6.eq) goto loc_8212BEB8;
loc_8212BEAC:
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// ori r9,r10,8
	ctx.r9.u64 = ctx.r10.u64 | 8;
	// stw r9,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r9.u32);
loc_8212BEB8:
	// stb r8,397(r11)
	PPC_STORE_U8(ctx.r11.u32 + 397, ctx.r8.u8);
	// lbz r10,416(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 416);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8212bed4
	if (!ctx.cr6.eq) goto loc_8212BED4;
	// lbz r10,417(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 417);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8212bee0
	if (ctx.cr6.eq) goto loc_8212BEE0;
loc_8212BED4:
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// ori r9,r10,16
	ctx.r9.u64 = ctx.r10.u64 | 16;
	// stw r9,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r9.u32);
loc_8212BEE0:
	// stb r8,417(r11)
	PPC_STORE_U8(ctx.r11.u32 + 417, ctx.r8.u8);
	// lbz r10,436(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 436);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8212befc
	if (!ctx.cr6.eq) goto loc_8212BEFC;
	// lbz r10,437(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 437);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8212bf08
	if (ctx.cr6.eq) goto loc_8212BF08;
loc_8212BEFC:
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// ori r9,r10,32
	ctx.r9.u64 = ctx.r10.u64 | 32;
	// stw r9,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r9.u32);
loc_8212BF08:
	// stb r8,437(r11)
	PPC_STORE_U8(ctx.r11.u32 + 437, ctx.r8.u8);
	// lbz r10,456(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 456);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8212bf24
	if (!ctx.cr6.eq) goto loc_8212BF24;
	// lbz r10,457(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 457);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8212bf30
	if (ctx.cr6.eq) goto loc_8212BF30;
loc_8212BF24:
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// ori r9,r10,64
	ctx.r9.u64 = ctx.r10.u64 | 64;
	// stw r9,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r9.u32);
loc_8212BF30:
	// stb r8,457(r11)
	PPC_STORE_U8(ctx.r11.u32 + 457, ctx.r8.u8);
	// lbz r10,476(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 476);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8212bf4c
	if (!ctx.cr6.eq) goto loc_8212BF4C;
	// lbz r10,477(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 477);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8212bf58
	if (ctx.cr6.eq) goto loc_8212BF58;
loc_8212BF4C:
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// ori r9,r10,128
	ctx.r9.u64 = ctx.r10.u64 | 128;
	// stw r9,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r9.u32);
loc_8212BF58:
	// stb r8,477(r11)
	PPC_STORE_U8(ctx.r11.u32 + 477, ctx.r8.u8);
	// lbz r10,496(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 496);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8212bf74
	if (!ctx.cr6.eq) goto loc_8212BF74;
	// lbz r10,497(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 497);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8212bf80
	if (ctx.cr6.eq) goto loc_8212BF80;
loc_8212BF74:
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// ori r9,r10,256
	ctx.r9.u64 = ctx.r10.u64 | 256;
	// stw r9,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r9.u32);
loc_8212BF80:
	// stb r8,497(r11)
	PPC_STORE_U8(ctx.r11.u32 + 497, ctx.r8.u8);
	// lbz r10,516(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 516);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8212bf9c
	if (!ctx.cr6.eq) goto loc_8212BF9C;
	// lbz r10,517(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 517);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8212bfa8
	if (ctx.cr6.eq) goto loc_8212BFA8;
loc_8212BF9C:
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// ori r9,r10,512
	ctx.r9.u64 = ctx.r10.u64 | 512;
	// stw r9,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r9.u32);
loc_8212BFA8:
	// stb r8,517(r11)
	PPC_STORE_U8(ctx.r11.u32 + 517, ctx.r8.u8);
	// lbz r10,216(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 216);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8212bfc4
	if (!ctx.cr6.eq) goto loc_8212BFC4;
	// lbz r10,217(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 217);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8212bfd0
	if (ctx.cr6.eq) goto loc_8212BFD0;
loc_8212BFC4:
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// ori r9,r10,1024
	ctx.r9.u64 = ctx.r10.u64 | 1024;
	// stw r9,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r9.u32);
loc_8212BFD0:
	// stb r8,217(r11)
	PPC_STORE_U8(ctx.r11.u32 + 217, ctx.r8.u8);
	// lbz r10,576(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 576);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8212bfec
	if (!ctx.cr6.eq) goto loc_8212BFEC;
	// lbz r10,577(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 577);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8212bff8
	if (ctx.cr6.eq) goto loc_8212BFF8;
loc_8212BFEC:
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// oris r9,r10,4
	ctx.r9.u64 = ctx.r10.u64 | 262144;
	// stw r9,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r9.u32);
loc_8212BFF8:
	// stb r8,577(r11)
	PPC_STORE_U8(ctx.r11.u32 + 577, ctx.r8.u8);
	// lbz r10,536(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 536);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8212c014
	if (!ctx.cr6.eq) goto loc_8212C014;
	// lbz r10,537(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 537);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8212c020
	if (ctx.cr6.eq) goto loc_8212C020;
loc_8212C014:
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// oris r9,r10,8
	ctx.r9.u64 = ctx.r10.u64 | 524288;
	// stw r9,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r9.u32);
loc_8212C020:
	// lis r10,0
	ctx.r10.s64 = 0;
	// stb r8,537(r11)
	PPC_STORE_U8(ctx.r11.u32 + 537, ctx.r8.u8);
	// lis r9,-32155
	ctx.r9.s64 = -2107310080;
	// ori r7,r10,48796
	ctx.r7.u64 = ctx.r10.u64 | 48796;
	// addi r9,r9,-29944
	ctx.r9.s64 = ctx.r9.s64 + -29944;
	// mullw r10,r3,r7
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r7.s32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r9,4220(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4220);
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// beq cr6,0x8212c06c
	if (ctx.cr6.eq) goto loc_8212C06C;
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// beq cr6,0x8212c06c
	if (ctx.cr6.eq) goto loc_8212C06C;
	// lwz r10,4388(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4388);
	// rlwinm r9,r10,0,11,11
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x100000;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rlwinm r10,r10,0,7,7
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_8212C06C:
	// lbz r10,256(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 256);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8212c084
	if (!ctx.cr6.eq) goto loc_8212C084;
	// lbz r10,257(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 257);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8212c090
	if (ctx.cr6.eq) goto loc_8212C090;
loc_8212C084:
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// ori r9,r10,1024
	ctx.r9.u64 = ctx.r10.u64 | 1024;
	// stw r9,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r9.u32);
loc_8212C090:
	// stb r8,257(r11)
	PPC_STORE_U8(ctx.r11.u32 + 257, ctx.r8.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8212BDB8) {
	__imp__sub_8212BDB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8212C098) {
	PPC_FUNC_PROLOGUE();
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
	// beqlr cr6
	if (ctx.cr6.eq) return;
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
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r8,4200(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4200, ctx.r8.u32);
	// stw r4,4204(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4204, ctx.r4.u32);
	// stw r5,4208(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4208, ctx.r5.u32);
	// stw r6,4212(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4212, ctx.r6.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8212C098) {
	__imp__sub_8212C098(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8212C0E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8212C0E4) {
	__imp__sub_8212C0E4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8212C0E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x8212C0F0;
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
	// lis r8,1
	ctx.r8.s64 = 65536;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// ori r6,r8,30962
	ctx.r6.u64 = ctx.r8.u64 | 30962;
	// lis r7,-32187
	ctx.r7.s64 = -2109407232;
	// lwz r4,40(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// mullw r10,r3,r6
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r6.s32);
	// clrlwi r11,r4,16
	ctx.r11.u64 = ctx.r4.u32 & 0xFFFF;
	// addi r5,r7,-15680
	ctx.r5.s64 = ctx.r7.s64 + -15680;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// sth r11,20(r31)
	PPC_STORE_U16(ctx.r31.u32 + 20, ctx.r11.u16);
	// addis r10,r5,2
	ctx.r10.s64 = ctx.r5.s64 + 131072;
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r10,18648
	ctx.r10.s64 = ctx.r10.s64 + 18648;
	// lhzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// sth r9,22(r31)
	PPC_STORE_U16(ctx.r31.u32 + 22, ctx.r9.u16);
	// lwz r8,44(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// clrlwi r3,r8,16
	ctx.r3.u64 = ctx.r8.u32 & 0xFFFF;
	// sth r3,24(r31)
	PPC_STORE_U16(ctx.r31.u32 + 24, ctx.r3.u16);
	// bl 0x82333f60
	ctx.lr = 0x8212C160;
	sub_82333F60(ctx, base);
	// lis r7,-31822
	ctx.r7.s64 = -2085486592;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r27,r31,4
	ctx.r27.s64 = ctx.r31.s64 + 4;
	// addi r28,r30,80
	ctx.r28.s64 = ctx.r30.s64 + 80;
	// li r29,3
	ctx.r29.s64 = 3;
	// lwz r11,-356(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + -356);
	// lfs f31,-9656(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -9656);
	ctx.f31.f64 = double(temp.f32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f30,2416(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2416);
	ctx.f30.f64 = double(temp.f32);
loc_8212C188:
	// lfsu f0,4(r28)
	ctx.fpscr.disableFlushMode();
	ea = 4 + ctx.r28.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r28.u32 = ea;
	// fmadds f1,f0,f31,f30
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f31.f64 + ctx.f30.f64));
	// bl 0x823dde20
	ctx.lr = 0x8212C194;
	sub_823DDE20(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// stwu r10,4(r27)
	ea = 4 + ctx.r27.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r27.u32 = ea;
	// bne 0x8212c188
	if (!ctx.cr0.eq) goto loc_8212C188;
	// lfs f0,48(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stfs f0,32(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// li r29,0
	ctx.r29.s64 = 0;
	// lfs f13,52(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,36(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// lfs f12,56(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,40(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// lfs f11,60(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,44(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// lfs f10,64(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,48(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// lwz r10,80(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// or r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// lwz r8,4200(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4200);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stw r29,80(r30)
	PPC_STORE_U32(ctx.r30.u32 + 80, ctx.r29.u32);
	// beq cr6,0x8212c224
	if (ctx.cr6.eq) goto loc_8212C224;
	// lwz r11,4204(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4204);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lwz r10,4208(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4208);
	// sth r10,20(r31)
	PPC_STORE_U16(ctx.r31.u32 + 20, ctx.r10.u16);
	// lwz r8,4212(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4212);
	// clrlwi r3,r8,16
	ctx.r3.u64 = ctx.r8.u32 & 0xFFFF;
	// sth r3,24(r31)
	PPC_STORE_U16(ctx.r31.u32 + 24, ctx.r3.u16);
	// bl 0x82333f60
	ctx.lr = 0x8212C220;
	sub_82333F60(ctx, base);
	// stw r29,4200(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4200, ctx.r29.u32);
loc_8212C224:
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

PPC_WEAK_FUNC(sub_8212C0E8) {
	__imp__sub_8212C0E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8212C234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8212C234) {
	__imp__sub_8212C234(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8212C238) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x8212C240;
	__savegprlr_25(ctx, base);
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x823de020
	ctx.lr = 0x8212C248;
	__savefpr_26(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
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
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addis r6,r31,1
	ctx.r6.s64 = ctx.r31.s64 + 65536;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// addi r6,r6,23360
	ctx.r6.s64 = ctx.r6.s64 + 23360;
	// lwz r8,0(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x8212c29c
	if (!ctx.cr6.eq) goto loc_8212C29C;
	// li r4,-9
	ctx.r4.s64 = -9;
	// bl 0x8212fa50
	ctx.lr = 0x8212C288;
	sub_8212FA50(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x823de06c
	ctx.lr = 0x8212C298;
	__restfpr_26(ctx, base);
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_8212C29C:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x8212b1c8
	ctx.lr = 0x8212C2A4;
	sub_8212B1C8(ctx, base);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// ori r9,r11,22908
	ctx.r9.u64 = ctx.r11.u64 | 22908;
	// ori r7,r10,20052
	ctx.r7.u64 = ctx.r10.u64 | 20052;
	// lis r8,2
	ctx.r8.s64 = 131072;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// ori r5,r8,20056
	ctx.r5.u64 = ctx.r8.u64 | 20056;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lfs f0,5804(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5804);
	ctx.f0.f64 = double(temp.f32);
	// lwzx r10,r31,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// lfsx f13,r31,r7
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	ctx.f13.f64 = double(temp.f32);
	// lwz r9,0(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// lfsx f12,r31,r5
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r5.u32);
	ctx.f12.f64 = double(temp.f32);
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// fdivs f30,f13,f12
	ctx.f30.f64 = double(float(ctx.f13.f64 / ctx.f12.f64));
	// srawi r7,r9,7
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7F) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 7;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// clrlwi r26,r7,31
	ctx.r26.u64 = ctx.r7.u32 & 0x1;
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// fmuls f31,f9,f0
	ctx.f31.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// bl 0x82128b40
	ctx.lr = 0x8212C304;
	sub_82128B40(ctx, base);
	// stfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82128b40
	ctx.lr = 0x8212C314;
	sub_82128B40(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f8,f0,f0
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// stfs f1,84(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f29,12168(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 12168);
	ctx.f29.f64 = double(temp.f32);
	// fmadds f13,f1,f1,f8
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f1.f64 + ctx.f8.f64));
	// fcmpu cr6,f13,f29
	ctx.cr6.compare(ctx.f13.f64, ctx.f29.f64);
	// ble cr6,0x8212c34c
	if (!ctx.cr6.gt) goto loc_8212C34C;
	// fsqrts f13,f13
	ctx.f13.f64 = double(float(sqrt(ctx.f13.f64)));
	// fdivs f12,f29,f13
	ctx.f12.f64 = double(float(ctx.f29.f64 / ctx.f13.f64));
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f1,f12,f1
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f1.f64));
	// stfs f1,84(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
loc_8212C34C:
	// lis r11,-32188
	ctx.r11.s64 = -2109472768;
	// addis r29,r31,2
	ctx.r29.s64 = ctx.r31.s64 + 131072;
	// addis r30,r31,2
	ctx.r30.s64 = ctx.r31.s64 + 131072;
	// addi r29,r29,20016
	ctx.r29.s64 = ctx.r29.s64 + 20016;
	// addi r30,r30,20020
	ctx.r30.s64 = ctx.r30.s64 + 20020;
	// lwz r11,21492(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21492);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,2
	ctx.r8.s64 = 131072;
	// lfs f13,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// clrlwi r26,r26,24
	ctx.r26.u64 = ctx.r26.u32 & 0xFF;
	// lfs f12,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// ori r25,r8,20024
	ctx.r25.u64 = ctx.r8.u64 | 20024;
	// lfs f11,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f28,2412(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2412);
	ctx.f28.f64 = double(temp.f32);
	// lfs f27,2416(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2416);
	ctx.f27.f64 = double(temp.f32);
	// fmadds f9,f10,f31,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f31.f64 + ctx.f13.f64));
	// stfs f9,0(r29)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// lfs f8,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f8,f1
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f1.f64));
	// fmuls f6,f7,f30
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f30.f64));
	// fnmsubs f5,f6,f31,f12
	ctx.f5.f64 = double(float(-(ctx.f6.f64 * ctx.f31.f64 - ctx.f12.f64)));
	// stfs f5,0(r30)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// beq cr6,0x8212c43c
	if (ctx.cr6.eq) goto loc_8212C43C;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82128b40
	ctx.lr = 0x8212C3C0;
	sub_82128B40(ctx, base);
	// stfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82128b40
	ctx.lr = 0x8212C3D0;
	sub_82128B40(ctx, base);
	// fneg f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f1.u64 ^ 0x8000000000000000;
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822d4ac8
	ctx.lr = 0x8212C3E0;
	sub_822D4AC8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,6040(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6040);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x8212c43c
	if (!ctx.cr6.gt) goto loc_8212C43C;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,29328(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 29328);
	// lfs f0,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f31,f31,f0
	ctx.f31.f64 = double(float(ctx.f31.f64 / ctx.f0.f64));
	// bl 0x822d4ed0
	ctx.lr = 0x8212C408;
	sub_822D4ED0(ctx, base);
	// lfsx f30,r31,r25
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r25.u32);
	ctx.f30.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fsubs f13,f1,f30
	ctx.f13.f64 = double(float(ctx.f1.f64 - ctx.f30.f64));
	// lfs f0,2420(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2420);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f26,f13,f0
	ctx.f26.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fadds f1,f26,f27
	ctx.f1.f64 = double(float(ctx.f26.f64 + ctx.f27.f64));
	// bl 0x823dde20
	ctx.lr = 0x8212C424;
	sub_823DDE20(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// fsubs f11,f26,f12
	ctx.f11.f64 = double(float(ctx.f26.f64 - ctx.f12.f64));
	// fmuls f10,f11,f31
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// fmadds f1,f10,f28,f30
	ctx.f1.f64 = double(float(ctx.f10.f64 * ctx.f28.f64 + ctx.f30.f64));
	// bl 0x822d77c0
	ctx.lr = 0x8212C438;
	sub_822D77C0(ctx, base);
	// stfsx f1,r31,r25
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r25.u32, temp.u32);
loc_8212C43C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bge cr6,0x8212c458
	if (!ctx.cr6.lt) goto loc_8212C458;
	// fmr f13,f12
	ctx.f13.f64 = ctx.f12.f64;
	// b 0x8212c464
	goto loc_8212C464;
loc_8212C458:
	// fcmpu cr6,f13,f29
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f29.f64);
	// ble cr6,0x8212c464
	if (!ctx.cr6.gt) goto loc_8212C464;
	// fmr f13,f29
	ctx.f13.f64 = ctx.f29.f64;
loc_8212C464:
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,0(r29)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x8212c47c
	if (!ctx.cr6.lt) goto loc_8212C47C;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
	// b 0x8212c488
	goto loc_8212C488;
loc_8212C47C:
	// fcmpu cr6,f0,f29
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// ble cr6,0x8212c488
	if (!ctx.cr6.gt) goto loc_8212C488;
	// fmr f0,f29
	ctx.f0.f64 = ctx.f29.f64;
loc_8212C488:
	// add r31,r31,r25
	ctx.r31.u64 = ctx.r31.u64 + ctx.r25.u64;
	// stfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// lfs f0,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x8212c4a4
	if (!ctx.cr6.lt) goto loc_8212C4A4;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
	// b 0x8212c4b0
	goto loc_8212C4B0;
loc_8212C4A4:
	// fcmpu cr6,f0,f28
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f28.f64);
	// ble cr6,0x8212c4b0
	if (!ctx.cr6.gt) goto loc_8212C4B0;
	// fmr f0,f28
	ctx.f0.f64 = ctx.f28.f64;
loc_8212C4B0:
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// stfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// mulli r10,r28,3368
	ctx.r10.s64 = ctx.r28.s64 * 3368;
	// addi r11,r11,-32200
	ctx.r11.s64 = ctx.r11.s64 + -32200;
	// addi r9,r11,3364
	ctx.r9.s64 = ctx.r11.s64 + 3364;
	// lwzx r11,r10,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8212c598
	if (!ctx.cr6.eq) goto loc_8212C598;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// oris r9,r11,1
	ctx.r9.u64 = ctx.r11.u64 | 65536;
	// stw r9,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r9.u32);
	// lfs f0,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f31,3100(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3100);
	ctx.f31.f64 = double(temp.f32);
	// fmuls f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// fadds f1,f13,f27
	ctx.f1.f64 = double(float(ctx.f13.f64 + ctx.f27.f64));
	// bl 0x823dde20
	ctx.lr = 0x8212C4F4;
	sub_823DDE20(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// fctiwz f11,f12
	ctx.f11.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f11.u64);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r8,r11,-128
	ctx.r8.s64 = ctx.r11.s64 + -128;
	// stb r8,57(r27)
	PPC_STORE_U8(ctx.r27.u32 + 57, ctx.r8.u8);
	// lfs f10,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f10,f31
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f31.f64));
	// fadds f1,f9,f27
	ctx.f1.f64 = double(float(ctx.f9.f64 + ctx.f27.f64));
	// bl 0x823dde20
	ctx.lr = 0x8212C51C;
	sub_823DDE20(ctx, base);
	// frsp f8,f1
	ctx.fpscr.disableFlushMode();
	ctx.f8.f64 = double(float(ctx.f1.f64));
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// fctiwz f7,f8
	ctx.f7.s64 = (ctx.f8.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f8.f64));
	// stfd f7,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f7.u64);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r6,r11,-128
	ctx.r6.s64 = ctx.r11.s64 + -128;
	// stb r6,58(r27)
	PPC_STORE_U8(ctx.r27.u32 + 58, ctx.r6.u8);
	// beq cr6,0x8212c57c
	if (ctx.cr6.eq) goto loc_8212C57C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-9652(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -9652);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fadds f1,f12,f27
	ctx.f1.f64 = double(float(ctx.f12.f64 + ctx.f27.f64));
	// bl 0x823dde20
	ctx.lr = 0x8212C554;
	sub_823DDE20(ctx, base);
	// frsp f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64));
	// li r3,1
	ctx.r3.s64 = 1;
	// fctiwz f10,f11
	ctx.f10.s64 = (ctx.f11.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f10.u64);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stb r10,59(r27)
	PPC_STORE_U8(ctx.r27.u32 + 59, ctx.r10.u8);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x823de06c
	ctx.lr = 0x8212C578;
	__restfpr_26(ctx, base);
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_8212C57C:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,59(r27)
	PPC_STORE_U8(ctx.r27.u32 + 59, ctx.r11.u8);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x823de06c
	ctx.lr = 0x8212C594;
	__restfpr_26(ctx, base);
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_8212C598:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8212c5ac
	if (!ctx.cr6.eq) goto loc_8212C5AC;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// oris r10,r11,2
	ctx.r10.u64 = ctx.r11.u64 | 131072;
	// stw r10,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r10.u32);
loc_8212C5AC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x823de06c
	ctx.lr = 0x8212C5BC;
	__restfpr_26(ctx, base);
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8212C238) {
	__imp__sub_8212C238(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8212C5C0) {
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
	// lfs f0,2424(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2424);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x8212c5ec
	if (ctx.cr6.lt) goto loc_8212C5EC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x8212c5f0
	if (!ctx.cr6.gt) goto loc_8212C5F0;
loc_8212C5EC:
	// fmr f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f0.f64;
loc_8212C5F0:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,-9672(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -9672);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,2416(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2416);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f1,f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f0.f64 + ctx.f13.f64));
	// bl 0x823dde20
	ctx.lr = 0x8212C608;
	sub_823DDE20(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// extsb r3,r9
	ctx.r3.s64 = ctx.r9.s8;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8212C5C0) {
	__imp__sub_8212C5C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8212C62C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8212C62C) {
	__imp__sub_8212C62C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8212C630) {
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
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x8212fa08
	ctx.lr = 0x8212C644;
	sub_8212FA08(ctx, base);
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

PPC_WEAK_FUNC(sub_8212C630) {
	__imp__sub_8212C630(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8212C660) {
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
	ctx.lr = 0x8212C678;
	__savefpr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// mulli r10,r3,580
	ctx.r10.s64 = ctx.r3.s64 * 580;
	// addi r11,r11,29336
	ctx.r11.s64 = ctx.r11.s64 + 29336;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lbz r10,296(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 296);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8212c6ac
	if (!ctx.cr6.eq) goto loc_8212C6AC;
	// lbz r10,297(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 297);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8212c6b8
	if (ctx.cr6.eq) goto loc_8212C6B8;
loc_8212C6AC:
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// ori r9,r10,1
	ctx.r9.u64 = ctx.r10.u64 | 1;
	// stw r9,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r9.u32);
loc_8212C6B8:
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,297(r11)
	PPC_STORE_U8(ctx.r11.u32 + 297, ctx.r10.u8);
	// lbz r9,396(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 396);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8212c6d8
	if (!ctx.cr6.eq) goto loc_8212C6D8;
	// lbz r9,397(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 397);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8212c6e4
	if (ctx.cr6.eq) goto loc_8212C6E4;
loc_8212C6D8:
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// ori r8,r9,8
	ctx.r8.u64 = ctx.r9.u64 | 8;
	// stw r8,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r8.u32);
loc_8212C6E4:
	// stb r10,397(r11)
	PPC_STORE_U8(ctx.r11.u32 + 397, ctx.r10.u8);
	// lbz r9,436(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 436);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8212c700
	if (!ctx.cr6.eq) goto loc_8212C700;
	// lbz r9,437(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 437);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8212c70c
	if (ctx.cr6.eq) goto loc_8212C70C;
loc_8212C700:
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// ori r8,r9,32
	ctx.r8.u64 = ctx.r9.u64 | 32;
	// stw r8,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r8.u32);
loc_8212C70C:
	// stb r10,437(r11)
	PPC_STORE_U8(ctx.r11.u32 + 437, ctx.r10.u8);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8212b1c8
	ctx.lr = 0x8212C71C;
	sub_8212B1C8(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r4,4
	ctx.r4.s64 = 4;
	// oris r10,r11,16
	ctx.r10.u64 = ctx.r11.u64 | 1048576;
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
	// bl 0x82128b40
	ctx.lr = 0x8212C730;
	sub_82128B40(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x82128b40
	ctx.lr = 0x8212C740;
	sub_82128B40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fadds f29,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = double(float(ctx.f1.f64 + ctx.f31.f64));
	// bl 0x82141340
	ctx.lr = 0x8212C74C;
	sub_82141340(ctx, base);
	// bl 0x8213af78
	ctx.lr = 0x8212C750;
	sub_8213AF78(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lbz r7,64(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 64);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// lfs f30,12168(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12168);
	ctx.f30.f64 = double(temp.f32);
	// lfs f31,2424(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2424);
	ctx.f31.f64 = double(temp.f32);
	// beq cr6,0x8212c774
	if (ctx.cr6.eq) goto loc_8212C774;
	// fmr f0,f30
	ctx.f0.f64 = ctx.f30.f64;
	// b 0x8212c778
	goto loc_8212C778;
loc_8212C774:
	// fmr f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f31.f64;
loc_8212C778:
	// li r4,3
	ctx.r4.s64 = 3;
	// fmuls f28,f0,f29
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = double(float(ctx.f0.f64 * ctx.f29.f64));
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82128b40
	ctx.lr = 0x8212C788;
	sub_82128B40(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fneg f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = ctx.f1.u64 ^ 0x8000000000000000;
	// bl 0x82128b40
	ctx.lr = 0x8212C798;
	sub_82128B40(ctx, base);
	// fsubs f0,f28,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f28.f64 - ctx.f30.f64));
	// fsubs f13,f31,f28
	ctx.f13.f64 = double(float(ctx.f31.f64 - ctx.f28.f64));
	// fsubs f29,f29,f1
	ctx.f29.f64 = double(float(ctx.f29.f64 - ctx.f1.f64));
	// fsel f12,f0,f30,f28
	ctx.f12.f64 = ctx.f0.f64 >= 0.0 ? ctx.f30.f64 : ctx.f28.f64;
	// fsel f0,f13,f31,f12
	ctx.f0.f64 = ctx.f13.f64 >= 0.0 ? ctx.f31.f64 : ctx.f12.f64;
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x8212c7bc
	if (!ctx.cr6.lt) goto loc_8212C7BC;
	// fmr f0,f31
	ctx.f0.f64 = ctx.f31.f64;
	// b 0x8212c7c8
	goto loc_8212C7C8;
loc_8212C7BC:
	// fcmpu cr6,f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// ble cr6,0x8212c7c8
	if (!ctx.cr6.gt) goto loc_8212C7C8;
	// fmr f0,f30
	ctx.f0.f64 = ctx.f30.f64;
loc_8212C7C8:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f28,-9672(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -9672);
	ctx.f28.f64 = double(temp.f32);
	// lfs f27,2416(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2416);
	ctx.f27.f64 = double(temp.f32);
	// fmadds f1,f0,f28,f27
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f28.f64 + ctx.f27.f64));
	// bl 0x823dde20
	ctx.lr = 0x8212C7E0;
	sub_823DDE20(ctx, base);
	// fsubs f0,f29,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f29.f64 - ctx.f30.f64));
	// fsubs f13,f31,f29
	ctx.f13.f64 = double(float(ctx.f31.f64 - ctx.f29.f64));
	// frsp f12,f1
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// fsel f11,f0,f30,f29
	ctx.f11.f64 = ctx.f0.f64 >= 0.0 ? ctx.f30.f64 : ctx.f29.f64;
	// fctiwz f10,f12
	ctx.f10.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f10.u64);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stb r9,60(r30)
	PPC_STORE_U8(ctx.r30.u32 + 60, ctx.r9.u8);
	// fsel f0,f13,f31,f11
	ctx.f0.f64 = ctx.f13.f64 >= 0.0 ? ctx.f31.f64 : ctx.f11.f64;
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x8212c814
	if (!ctx.cr6.lt) goto loc_8212C814;
	// fmr f0,f31
	ctx.f0.f64 = ctx.f31.f64;
	// b 0x8212c820
	goto loc_8212C820;
loc_8212C814:
	// fcmpu cr6,f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// ble cr6,0x8212c820
	if (!ctx.cr6.gt) goto loc_8212C820;
	// fmr f0,f30
	ctx.f0.f64 = ctx.f30.f64;
loc_8212C820:
	// fmadds f1,f0,f28,f27
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f28.f64 + ctx.f27.f64));
	// bl 0x823dde20
	ctx.lr = 0x8212C828;
	sub_823DDE20(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stb r11,61(r30)
	PPC_STORE_U8(ctx.r30.u32 + 61, ctx.r11.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x823de070
	ctx.lr = 0x8212C848;
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

PPC_WEAK_FUNC(sub_8212C660) {
	__imp__sub_8212C660(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8212C85C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8212C85C) {
	__imp__sub_8212C85C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8212C860) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8212C868;
	__savegprlr_29(ctx, base);
	// stfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f30.u64);
	// stfd f31,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x823de090
	ctx.lr = 0x8212C888;
	sub_823DE090(ctx, base);
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8212fa08
	ctx.lr = 0x8212C894;
	sub_8212FA08(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8212c8b0
	if (ctx.cr6.eq) goto loc_8212C8B0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8212b1c8
	ctx.lr = 0x8212C8AC;
	sub_8212B1C8(ctx, base);
	// b 0x8212c9a4
	goto loc_8212C9A4;
loc_8212C8B0:
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
	// add r29,r10,r11
	ctx.r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f31,84(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 84);
	ctx.f31.f64 = double(temp.f32);
	// bl 0x8212b018
	ctx.lr = 0x8212C8D0;
	sub_8212B018(ctx, base);
	// lwz r8,4228(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4228);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r7,r8,0,12,12
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x80000;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x8212c8f0
	if (ctx.cr6.eq) goto loc_8212C8F0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8212c660
	ctx.lr = 0x8212C8EC;
	sub_8212C660(ctx, base);
	// b 0x8212c9a4
	goto loc_8212C9A4;
loc_8212C8F0:
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x8212fa08
	ctx.lr = 0x8212C8F8;
	sub_8212FA08(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8212c91c
	if (ctx.cr6.eq) goto loc_8212C91C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8212c238
	ctx.lr = 0x8212C910;
	sub_8212C238(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8212c9a4
	if (!ctx.cr6.eq) goto loc_8212C9A4;
loc_8212C91C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8212bdb8
	ctx.lr = 0x8212C928;
	sub_8212BDB8(ctx, base);
	// bl 0x8212b250
	ctx.lr = 0x8212C92C;
	sub_8212B250(ctx, base);
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// addi r10,r11,28832
	ctx.r10.s64 = ctx.r11.s64 + 28832;
	// lfs f1,344(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 344);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82282608
	ctx.lr = 0x8212C93C;
	sub_82282608(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// bl 0x8212bb40
	ctx.lr = 0x8212C948;
	sub_8212BB40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82141340
	ctx.lr = 0x8212C950;
	sub_82141340(ctx, base);
	// bl 0x82307fa8
	ctx.lr = 0x8212C954;
	sub_82307FA8(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8212c970
	if (ctx.cr6.eq) goto loc_8212C970;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8212b580
	ctx.lr = 0x8212C970;
	sub_8212B580(ctx, base);
loc_8212C970:
	// lfs f13,84(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fsubs f12,f13,f31
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f31.f64));
	// lfs f0,5188(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5188);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// ble cr6,0x8212c990
	if (!ctx.cr6.gt) goto loc_8212C990;
	// fadds f0,f31,f0
	ctx.f0.f64 = double(float(ctx.f31.f64 + ctx.f0.f64));
	// b 0x8212c9a0
	goto loc_8212C9A0;
loc_8212C990:
	// fsubs f13,f31,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f31.f64 - ctx.f13.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x8212c9a4
	if (!ctx.cr6.gt) goto loc_8212C9A4;
	// fsubs f0,f31,f0
	ctx.f0.f64 = double(float(ctx.f31.f64 - ctx.f0.f64));
loc_8212C9A0:
	// stfs f0,84(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 84, temp.u32);
loc_8212C9A4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8212c0e8
	ctx.lr = 0x8212C9B0;
	sub_8212C0E8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8212C860) {
	__imp__sub_8212C860(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8212C9C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8212C9C4) {
	__imp__sub_8212C9C4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8212C9C8) {
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
	// lis r10,-32166
	ctx.r10.s64 = -2108030976;
	// lis r11,-31936
	ctx.r11.s64 = -2092957696;
	// lis r8,-32166
	ctx.r8.s64 = -2108030976;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r9,29320(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 29320);
	// lwz r11,-4812(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4812);
	// subf r9,r9,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r9.s64;
	// stw r9,29324(r8)
	PPC_STORE_U32(ctx.r8.u32 + 29324, ctx.r9.u32);
	// cmplwi cr6,r9,200
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 200, ctx.xer);
	// ble cr6,0x8212ca08
	if (!ctx.cr6.gt) goto loc_8212CA08;
	// li r9,200
	ctx.r9.s64 = 200;
	// stw r9,29324(r8)
	PPC_STORE_U32(ctx.r8.u32 + 29324, ctx.r9.u32);
loc_8212CA08:
	// stw r11,29320(r10)
	PPC_STORE_U32(ctx.r10.u32 + 29320, ctx.r11.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8212c860
	ctx.lr = 0x8212CA18;
	sub_8212C860(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,64
	ctx.r5.s64 = 64;
	// bl 0x823de1f0
	ctx.lr = 0x8212CA28;
	sub_823DE1F0(ctx, base);
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x822ec4e8
	ctx.lr = 0x8212CA30;
	sub_822EC4E8(ctx, base);
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
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r5,64
	ctx.r5.s64 = 64;
	// lwz r10,4192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4192);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r9,r10,6,20,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFC0;
	// stw r10,4192(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4192, ctx.r10.u32);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r3,r11,96
	ctx.r3.s64 = ctx.r11.s64 + 96;
	// bl 0x823de1f0
	ctx.lr = 0x8212CA6C;
	sub_823DE1F0(ctx, base);
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x822ec500
	ctx.lr = 0x8212CA74;
	sub_822EC500(ctx, base);
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

PPC_WEAK_FUNC(sub_8212C9C8) {
	__imp__sub_8212C9C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8212CA88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x8212CA90;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lbz r10,29088(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 29088);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8212cab4
	if (ctx.cr6.eq) goto loc_8212CAB4;
	// bl 0x82127a40
	ctx.lr = 0x8212CAAC;
	sub_82127A40(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_8212CAB4:
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x822ec4e8
	ctx.lr = 0x8212CABC;
	sub_822EC4E8(ctx, base);
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// mulli r10,r29,12824
	ctx.r10.s64 = ctx.r29.s64 * 12824;
	// addi r11,r11,-16408
	ctx.r11.s64 = ctx.r11.s64 + -16408;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x8212cb20
	if (ctx.cr6.eq) goto loc_8212CB20;
loc_8212CADC:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r3,10
	ctx.r3.s64 = 10;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x822ec500
	ctx.lr = 0x8212CAF0;
	sub_822EC500(ctx, base);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// rlwinm r11,r10,6,19,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0x1FC0;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r4,r11,12
	ctx.r4.s64 = ctx.r11.s64 + 12;
	// bl 0x82338230
	ctx.lr = 0x8212CB08;
	sub_82338230(ctx, base);
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x822ec4e8
	ctx.lr = 0x8212CB10;
	sub_822EC4E8(ctx, base);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x8212cadc
	if (!ctx.cr6.eq) goto loc_8212CADC;
loc_8212CB20:
	// lis r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32155
	ctx.r10.s64 = -2107310080;
	// ori r9,r11,48796
	ctx.r9.u64 = ctx.r11.u64 | 48796;
	// addi r10,r10,-29944
	ctx.r10.s64 = ctx.r10.s64 + -29944;
	// mullw r11,r29,r9
	ctx.r11.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r9.s32);
	// add r28,r11,r10
	ctx.r28.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r27,4192(r28)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4192);
	// lwz r8,4196(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4196);
	// subf r31,r8,r27
	ctx.r31.s64 = ctx.r27.s64 - ctx.r8.s64;
	// cmpwi cr6,r31,32
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 32, ctx.xer);
	// ble cr6,0x8212cb60
	if (!ctx.cr6.gt) goto loc_8212CB60;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r3,14
	ctx.r3.s64 = 14;
	// addi r4,r11,-9648
	ctx.r4.s64 = ctx.r11.s64 + -9648;
	// li r31,32
	ctx.r31.s64 = 32;
	// bl 0x82280900
	ctx.lr = 0x8212CB60;
	sub_82280900(ctx, base);
loc_8212CB60:
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x822ec500
	ctx.lr = 0x8212CB68;
	sub_822EC500(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x8212cbac
	if (!ctx.cr6.gt) goto loc_8212CBAC;
	// subf r11,r31,r27
	ctx.r11.s64 = ctx.r27.s64 - ctx.r31.s64;
	// lis r26,-32155
	ctx.r26.s64 = -2107310080;
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
loc_8212CB7C:
	// lwz r11,-30052(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -30052);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8212cba0
	if (!ctx.cr6.eq) goto loc_8212CBA0;
	// rlwinm r11,r30,6,20,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 6) & 0xFC0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// addi r4,r11,96
	ctx.r4.s64 = ctx.r11.s64 + 96;
	// bl 0x82338238
	ctx.lr = 0x8212CBA0;
	sub_82338238(ctx, base);
loc_8212CBA0:
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// bne 0x8212cb7c
	if (!ctx.cr0.eq) goto loc_8212CB7C;
loc_8212CBAC:
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x822ec4e8
	ctx.lr = 0x8212CBB4;
	sub_822EC4E8(ctx, base);
	// stw r27,4196(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4196, ctx.r27.u32);
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x822ec500
	ctx.lr = 0x8212CBC0;
	sub_822EC500(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8212CA88) {
	__imp__sub_8212CA88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8212CBC8) {
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
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x822ec4e8
	ctx.lr = 0x8212CBE4;
	sub_822EC4E8(ctx, base);
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// mulli r10,r31,12824
	ctx.r10.s64 = ctx.r31.s64 * 12824;
	// addi r11,r11,-16408
	ctx.r11.s64 = ctx.r11.s64 + -16408;
	// li r3,10
	ctx.r3.s64 = 10;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// bl 0x822ec500
	ctx.lr = 0x8212CC04;
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

PPC_WEAK_FUNC(sub_8212CBC8) {
	__imp__sub_8212CBC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8212CC18) {
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
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x822ec4e8
	ctx.lr = 0x8212CC34;
	sub_822EC4E8(ctx, base);
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
	// li r3,10
	ctx.r3.s64 = 10;
	// lwz r8,4192(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4192);
	// stw r8,4196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4196, ctx.r8.u32);
	// bl 0x822ec500
	ctx.lr = 0x8212CC5C;
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

PPC_WEAK_FUNC(sub_8212CC18) {
	__imp__sub_8212CC18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8212CC70) {
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
	// bl 0x8212b4a8
	ctx.lr = 0x8212CC84;
	sub_8212B4A8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8212ccdc
	if (ctx.cr6.eq) goto loc_8212CCDC;
	// lis r10,-32165
	ctx.r10.s64 = -2107965440;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r9,r10,28832
	ctx.r9.s64 = ctx.r10.s64 + 28832;
	// stb r11,357(r9)
	PPC_STORE_U8(ctx.r9.u32 + 357, ctx.r11.u8);
	// bl 0x82308a18
	ctx.lr = 0x8212CCA4;
	sub_82308A18(ctx, base);
	// bl 0x8212b4a8
	ctx.lr = 0x8212CCA8;
	sub_8212B4A8(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8212ccdc
	if (ctx.cr6.eq) goto loc_8212CCDC;
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x82141398
	ctx.lr = 0x8212CCBC;
	sub_82141398(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x8212ccdc
	if (!ctx.cr6.gt) goto loc_8212CCDC;
loc_8212CCC4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8212c9c8
	ctx.lr = 0x8212CCCC;
	sub_8212C9C8(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// bl 0x82141398
	ctx.lr = 0x8212CCD4;
	sub_82141398(ctx, base);
	// cmpw cr6,r31,r3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x8212ccc4
	if (ctx.cr6.lt) goto loc_8212CCC4;
loc_8212CCDC:
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

PPC_WEAK_FUNC(sub_8212CC70) {
	__imp__sub_8212CC70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8212CCF0) {
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-8988
	ctx.r3.s64 = ctx.r11.s64 + -8988;
	// bl 0x8227da80
	ctx.lr = 0x8212CD08;
	sub_8227DA80(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r3,r10,-29488
	ctx.r3.s64 = ctx.r10.s64 + -29488;
	// bl 0x8227da80
	ctx.lr = 0x8212CD14;
	sub_8227DA80(ctx, base);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r3,r9,-8996
	ctx.r3.s64 = ctx.r9.s64 + -8996;
	// bl 0x8227da80
	ctx.lr = 0x8212CD20;
	sub_8227DA80(ctx, base);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r3,r8,-9008
	ctx.r3.s64 = ctx.r8.s64 + -9008;
	// bl 0x8227da80
	ctx.lr = 0x8212CD2C;
	sub_8227DA80(ctx, base);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// addi r3,r7,-9020
	ctx.r3.s64 = ctx.r7.s64 + -9020;
	// bl 0x8227da80
	ctx.lr = 0x8212CD38;
	sub_8227DA80(ctx, base);
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// addi r3,r6,-9028
	ctx.r3.s64 = ctx.r6.s64 + -9028;
	// bl 0x8227da80
	ctx.lr = 0x8212CD44;
	sub_8227DA80(ctx, base);
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// addi r3,r5,-9036
	ctx.r3.s64 = ctx.r5.s64 + -9036;
	// bl 0x8227da80
	ctx.lr = 0x8212CD50;
	sub_8227DA80(ctx, base);
	// lis r4,-32255
	ctx.r4.s64 = -2113863680;
	// addi r3,r4,-9044
	ctx.r3.s64 = ctx.r4.s64 + -9044;
	// bl 0x8227da80
	ctx.lr = 0x8212CD5C;
	sub_8227DA80(ctx, base);
	// lis r3,-32255
	ctx.r3.s64 = -2113863680;
	// addi r3,r3,-9052
	ctx.r3.s64 = ctx.r3.s64 + -9052;
	// bl 0x8227da80
	ctx.lr = 0x8212CD68;
	sub_8227DA80(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-9064
	ctx.r3.s64 = ctx.r11.s64 + -9064;
	// bl 0x8227da80
	ctx.lr = 0x8212CD74;
	sub_8227DA80(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r3,r10,-9076
	ctx.r3.s64 = ctx.r10.s64 + -9076;
	// bl 0x8227da80
	ctx.lr = 0x8212CD80;
	sub_8227DA80(ctx, base);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r3,r9,-9084
	ctx.r3.s64 = ctx.r9.s64 + -9084;
	// bl 0x8227da80
	ctx.lr = 0x8212CD8C;
	sub_8227DA80(ctx, base);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r3,r8,-9092
	ctx.r3.s64 = ctx.r8.s64 + -9092;
	// bl 0x8227da80
	ctx.lr = 0x8212CD98;
	sub_8227DA80(ctx, base);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// addi r3,r7,-9100
	ctx.r3.s64 = ctx.r7.s64 + -9100;
	// bl 0x8227da80
	ctx.lr = 0x8212CDA4;
	sub_8227DA80(ctx, base);
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// addi r3,r6,-9108
	ctx.r3.s64 = ctx.r6.s64 + -9108;
	// bl 0x8227da80
	ctx.lr = 0x8212CDB0;
	sub_8227DA80(ctx, base);
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// addi r3,r5,-9120
	ctx.r3.s64 = ctx.r5.s64 + -9120;
	// bl 0x8227da80
	ctx.lr = 0x8212CDBC;
	sub_8227DA80(ctx, base);
	// lis r4,-32255
	ctx.r4.s64 = -2113863680;
	// addi r3,r4,-9132
	ctx.r3.s64 = ctx.r4.s64 + -9132;
	// bl 0x8227da80
	ctx.lr = 0x8212CDC8;
	sub_8227DA80(ctx, base);
	// lis r3,-32255
	ctx.r3.s64 = -2113863680;
	// addi r3,r3,-9140
	ctx.r3.s64 = ctx.r3.s64 + -9140;
	// bl 0x8227da80
	ctx.lr = 0x8212CDD4;
	sub_8227DA80(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-9148
	ctx.r3.s64 = ctx.r11.s64 + -9148;
	// bl 0x8227da80
	ctx.lr = 0x8212CDE0;
	sub_8227DA80(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r3,r10,-9160
	ctx.r3.s64 = ctx.r10.s64 + -9160;
	// bl 0x8227da80
	ctx.lr = 0x8212CDEC;
	sub_8227DA80(ctx, base);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r3,r9,-9172
	ctx.r3.s64 = ctx.r9.s64 + -9172;
	// bl 0x8227da80
	ctx.lr = 0x8212CDF8;
	sub_8227DA80(ctx, base);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r3,r8,-9184
	ctx.r3.s64 = ctx.r8.s64 + -9184;
	// bl 0x8227da80
	ctx.lr = 0x8212CE04;
	sub_8227DA80(ctx, base);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// addi r3,r7,-9196
	ctx.r3.s64 = ctx.r7.s64 + -9196;
	// bl 0x8227da80
	ctx.lr = 0x8212CE10;
	sub_8227DA80(ctx, base);
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// addi r3,r6,-9204
	ctx.r3.s64 = ctx.r6.s64 + -9204;
	// bl 0x8227da80
	ctx.lr = 0x8212CE1C;
	sub_8227DA80(ctx, base);
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// addi r3,r5,-9212
	ctx.r3.s64 = ctx.r5.s64 + -9212;
	// bl 0x8227da80
	ctx.lr = 0x8212CE28;
	sub_8227DA80(ctx, base);
	// lis r4,-32255
	ctx.r4.s64 = -2113863680;
	// addi r3,r4,-9860
	ctx.r3.s64 = ctx.r4.s64 + -9860;
	// bl 0x8227da80
	ctx.lr = 0x8212CE34;
	sub_8227DA80(ctx, base);
	// lis r3,-32255
	ctx.r3.s64 = -2113863680;
	// addi r3,r3,-9220
	ctx.r3.s64 = ctx.r3.s64 + -9220;
	// bl 0x8227da80
	ctx.lr = 0x8212CE40;
	sub_8227DA80(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-9228
	ctx.r3.s64 = ctx.r11.s64 + -9228;
	// bl 0x8227da80
	ctx.lr = 0x8212CE4C;
	sub_8227DA80(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r3,r10,-9236
	ctx.r3.s64 = ctx.r10.s64 + -9236;
	// bl 0x8227da80
	ctx.lr = 0x8212CE58;
	sub_8227DA80(ctx, base);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r3,r9,-29516
	ctx.r3.s64 = ctx.r9.s64 + -29516;
	// bl 0x8227da80
	ctx.lr = 0x8212CE64;
	sub_8227DA80(ctx, base);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r3,r8,-9248
	ctx.r3.s64 = ctx.r8.s64 + -9248;
	// bl 0x8227da80
	ctx.lr = 0x8212CE70;
	sub_8227DA80(ctx, base);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// addi r3,r7,-29532
	ctx.r3.s64 = ctx.r7.s64 + -29532;
	// bl 0x8227da80
	ctx.lr = 0x8212CE7C;
	sub_8227DA80(ctx, base);
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// addi r3,r6,-9264
	ctx.r3.s64 = ctx.r6.s64 + -9264;
	// bl 0x8227da80
	ctx.lr = 0x8212CE88;
	sub_8227DA80(ctx, base);
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// addi r3,r5,-29724
	ctx.r3.s64 = ctx.r5.s64 + -29724;
	// bl 0x8227da80
	ctx.lr = 0x8212CE94;
	sub_8227DA80(ctx, base);
	// lis r4,-32255
	ctx.r4.s64 = -2113863680;
	// addi r3,r4,-9272
	ctx.r3.s64 = ctx.r4.s64 + -9272;
	// bl 0x8227da80
	ctx.lr = 0x8212CEA0;
	sub_8227DA80(ctx, base);
	// lis r3,-32255
	ctx.r3.s64 = -2113863680;
	// addi r3,r3,-9280
	ctx.r3.s64 = ctx.r3.s64 + -9280;
	// bl 0x8227da80
	ctx.lr = 0x8212CEAC;
	sub_8227DA80(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-9288
	ctx.r3.s64 = ctx.r11.s64 + -9288;
	// bl 0x8227da80
	ctx.lr = 0x8212CEB8;
	sub_8227DA80(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r3,r10,-29548
	ctx.r3.s64 = ctx.r10.s64 + -29548;
	// bl 0x8227da80
	ctx.lr = 0x8212CEC4;
	sub_8227DA80(ctx, base);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r3,r9,-9304
	ctx.r3.s64 = ctx.r9.s64 + -9304;
	// bl 0x8227da80
	ctx.lr = 0x8212CED0;
	sub_8227DA80(ctx, base);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r3,r8,-29636
	ctx.r3.s64 = ctx.r8.s64 + -29636;
	// bl 0x8227da80
	ctx.lr = 0x8212CEDC;
	sub_8227DA80(ctx, base);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// addi r3,r7,-9316
	ctx.r3.s64 = ctx.r7.s64 + -9316;
	// bl 0x8227da80
	ctx.lr = 0x8212CEE8;
	sub_8227DA80(ctx, base);
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// addi r3,r6,-9324
	ctx.r3.s64 = ctx.r6.s64 + -9324;
	// bl 0x8227da80
	ctx.lr = 0x8212CEF4;
	sub_8227DA80(ctx, base);
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// addi r3,r5,-9332
	ctx.r3.s64 = ctx.r5.s64 + -9332;
	// bl 0x8227da80
	ctx.lr = 0x8212CF00;
	sub_8227DA80(ctx, base);
	// lis r4,-32255
	ctx.r4.s64 = -2113863680;
	// addi r3,r4,-9344
	ctx.r3.s64 = ctx.r4.s64 + -9344;
	// bl 0x8227da80
	ctx.lr = 0x8212CF0C;
	sub_8227DA80(ctx, base);
	// lis r3,-32255
	ctx.r3.s64 = -2113863680;
	// addi r3,r3,-9356
	ctx.r3.s64 = ctx.r3.s64 + -9356;
	// bl 0x8227da80
	ctx.lr = 0x8212CF18;
	sub_8227DA80(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-9368
	ctx.r3.s64 = ctx.r11.s64 + -9368;
	// bl 0x8227da80
	ctx.lr = 0x8212CF24;
	sub_8227DA80(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r3,r10,-9380
	ctx.r3.s64 = ctx.r10.s64 + -9380;
	// bl 0x8227da80
	ctx.lr = 0x8212CF30;
	sub_8227DA80(ctx, base);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r3,r9,-9392
	ctx.r3.s64 = ctx.r9.s64 + -9392;
	// bl 0x8227da80
	ctx.lr = 0x8212CF3C;
	sub_8227DA80(ctx, base);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r3,r8,-9404
	ctx.r3.s64 = ctx.r8.s64 + -9404;
	// bl 0x8227da80
	ctx.lr = 0x8212CF48;
	sub_8227DA80(ctx, base);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// addi r3,r7,-9412
	ctx.r3.s64 = ctx.r7.s64 + -9412;
	// bl 0x8227da80
	ctx.lr = 0x8212CF54;
	sub_8227DA80(ctx, base);
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// addi r3,r6,-9420
	ctx.r3.s64 = ctx.r6.s64 + -9420;
	// bl 0x8227da80
	ctx.lr = 0x8212CF60;
	sub_8227DA80(ctx, base);
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// addi r3,r5,-9428
	ctx.r3.s64 = ctx.r5.s64 + -9428;
	// bl 0x8227da80
	ctx.lr = 0x8212CF6C;
	sub_8227DA80(ctx, base);
	// lis r4,-32255
	ctx.r4.s64 = -2113863680;
	// addi r3,r4,-9436
	ctx.r3.s64 = ctx.r4.s64 + -9436;
	// bl 0x8227da80
	ctx.lr = 0x8212CF78;
	sub_8227DA80(ctx, base);
	// lis r3,-32255
	ctx.r3.s64 = -2113863680;
	// addi r3,r3,-9444
	ctx.r3.s64 = ctx.r3.s64 + -9444;
	// bl 0x8227da80
	ctx.lr = 0x8212CF84;
	sub_8227DA80(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-9452
	ctx.r3.s64 = ctx.r11.s64 + -9452;
	// bl 0x8227da80
	ctx.lr = 0x8212CF90;
	sub_8227DA80(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r3,r10,-9464
	ctx.r3.s64 = ctx.r10.s64 + -9464;
	// bl 0x8227da80
	ctx.lr = 0x8212CF9C;
	sub_8227DA80(ctx, base);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r3,r9,-9476
	ctx.r3.s64 = ctx.r9.s64 + -9476;
	// bl 0x8227da80
	ctx.lr = 0x8212CFA8;
	sub_8227DA80(ctx, base);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r3,r8,-9484
	ctx.r3.s64 = ctx.r8.s64 + -9484;
	// bl 0x8227da80
	ctx.lr = 0x8212CFB4;
	sub_8227DA80(ctx, base);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// addi r3,r7,-9492
	ctx.r3.s64 = ctx.r7.s64 + -9492;
	// bl 0x8227da80
	ctx.lr = 0x8212CFC0;
	sub_8227DA80(ctx, base);
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// addi r3,r6,-9508
	ctx.r3.s64 = ctx.r6.s64 + -9508;
	// bl 0x8227da80
	ctx.lr = 0x8212CFCC;
	sub_8227DA80(ctx, base);
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// addi r3,r5,-9524
	ctx.r3.s64 = ctx.r5.s64 + -9524;
	// bl 0x8227da80
	ctx.lr = 0x8212CFD8;
	sub_8227DA80(ctx, base);
	// lis r4,-32255
	ctx.r4.s64 = -2113863680;
	// addi r3,r4,-9544
	ctx.r3.s64 = ctx.r4.s64 + -9544;
	// bl 0x8227da80
	ctx.lr = 0x8212CFE4;
	sub_8227DA80(ctx, base);
	// lis r3,-32255
	ctx.r3.s64 = -2113863680;
	// addi r3,r3,-9564
	ctx.r3.s64 = ctx.r3.s64 + -9564;
	// bl 0x8227da80
	ctx.lr = 0x8212CFF0;
	sub_8227DA80(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-29748
	ctx.r3.s64 = ctx.r11.s64 + -29748;
	// bl 0x8227da80
	ctx.lr = 0x8212CFFC;
	sub_8227DA80(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r3,r10,-29736
	ctx.r3.s64 = ctx.r10.s64 + -29736;
	// bl 0x8227da80
	ctx.lr = 0x8212D008;
	sub_8227DA80(ctx, base);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r3,r9,-9580
	ctx.r3.s64 = ctx.r9.s64 + -9580;
	// bl 0x8227da80
	ctx.lr = 0x8212D014;
	sub_8227DA80(ctx, base);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r3,r8,-9592
	ctx.r3.s64 = ctx.r8.s64 + -9592;
	// bl 0x8227da80
	ctx.lr = 0x8212D020;
	sub_8227DA80(ctx, base);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// addi r3,r7,-9600
	ctx.r3.s64 = ctx.r7.s64 + -9600;
	// bl 0x8227da80
	ctx.lr = 0x8212D02C;
	sub_8227DA80(ctx, base);
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// addi r3,r6,-9612
	ctx.r3.s64 = ctx.r6.s64 + -9612;
	// bl 0x8227da80
	ctx.lr = 0x8212D038;
	sub_8227DA80(ctx, base);
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// addi r3,r5,-29480
	ctx.r3.s64 = ctx.r5.s64 + -29480;
	// bl 0x8227da80
	ctx.lr = 0x8212D044;
	sub_8227DA80(ctx, base);
	// lis r4,-32255
	ctx.r4.s64 = -2113863680;
	// addi r3,r4,-9624
	ctx.r3.s64 = ctx.r4.s64 + -9624;
	// bl 0x8227da80
	ctx.lr = 0x8212D050;
	sub_8227DA80(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8212CCF0) {
	__imp__sub_8212CCF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8212D060) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// mulli r9,r3,580
	ctx.r9.s64 = ctx.r3.s64 * 580;
	// addi r11,r11,29336
	ctx.r11.s64 = ctx.r11.s64 + 29336;
	// li r10,0
	ctx.r10.s64 = 0;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8212D060) {
	__imp__sub_8212D060(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8212D08C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8212D08C) {
	__imp__sub_8212D08C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8212D090) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-31937
	ctx.r10.s64 = -2093023232;
	// lis r9,-32166
	ctx.r9.s64 = -2108030976;
	// addi r11,r10,-17592
	ctx.r11.s64 = ctx.r10.s64 + -17592;
	// lis r8,-32154
	ctx.r8.s64 = -2107244544;
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
	// lwz r11,-17592(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -17592);
	// addi r10,r9,29336
	ctx.r10.s64 = ctx.r9.s64 + 29336;
	// li r6,0
	ctx.r6.s64 = 0;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r10,276
	ctx.r4.s64 = ctx.r10.s64 + 276;
	// lwz r10,2116(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 2116);
	// lwzx r11,r5,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r7.u32);
	// mulli r3,r11,580
	ctx.r3.s64 = ctx.r11.s64 * 580;
	// stbx r6,r3,r4
	PPC_STORE_U8(ctx.r3.u32 + ctx.r4.u32, ctx.r6.u8);
	// lbz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lis r10,0
	ctx.r10.s64 = 0;
	// lis r9,-32155
	ctx.r9.s64 = -2107310080;
	// ori r8,r10,48796
	ctx.r8.u64 = ctx.r10.u64 | 48796;
	// mullw r10,r11,r8
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r8.s32);
	// addi r11,r9,-29944
	ctx.r11.s64 = ctx.r9.s64 + -29944;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f0,4312(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4312);
	ctx.f0.f64 = double(temp.f32);
	// fneg f13,f0
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f13,84(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 84, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8212D090) {
	__imp__sub_8212D090(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8212D0FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8212D0FC) {
	__imp__sub_8212D0FC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8212D100) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stfd f31,-16(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r5,r11,31980
	ctx.r5.s64 = ctx.r11.s64 + 31980;
	// addi r3,r9,-8988
	ctx.r3.s64 = ctx.r9.s64 + -8988;
	// addi r4,r10,-22240
	ctx.r4.s64 = ctx.r10.s64 + -22240;
	// bl 0x8227da10
	ctx.lr = 0x8212D12C;
	sub_8227DA10(ctx, base);
	// lis r8,-32166
	ctx.r8.s64 = -2108030976;
	// lis r7,-32237
	ctx.r7.s64 = -2112684032;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// addi r5,r8,31960
	ctx.r5.s64 = ctx.r8.s64 + 31960;
	// addi r3,r6,-29488
	ctx.r3.s64 = ctx.r6.s64 + -29488;
	// addi r4,r7,-25456
	ctx.r4.s64 = ctx.r7.s64 + -25456;
	// bl 0x8227da10
	ctx.lr = 0x8212D148;
	sub_8227DA10(ctx, base);
	// lis r5,-32166
	ctx.r5.s64 = -2108030976;
	// lis r4,-32237
	ctx.r4.s64 = -2112684032;
	// lis r3,-32255
	ctx.r3.s64 = -2113863680;
	// addi r5,r5,31940
	ctx.r5.s64 = ctx.r5.s64 + 31940;
	// addi r3,r3,-8996
	ctx.r3.s64 = ctx.r3.s64 + -8996;
	// addi r4,r4,-25248
	ctx.r4.s64 = ctx.r4.s64 + -25248;
	// bl 0x8227da10
	ctx.lr = 0x8212D164;
	sub_8227DA10(ctx, base);
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r5,r11,31920
	ctx.r5.s64 = ctx.r11.s64 + 31920;
	// addi r3,r9,-9008
	ctx.r3.s64 = ctx.r9.s64 + -9008;
	// addi r4,r10,-25144
	ctx.r4.s64 = ctx.r10.s64 + -25144;
	// bl 0x8227da10
	ctx.lr = 0x8212D180;
	sub_8227DA10(ctx, base);
	// lis r8,-32166
	ctx.r8.s64 = -2108030976;
	// lis r7,-32237
	ctx.r7.s64 = -2112684032;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// addi r5,r8,31900
	ctx.r5.s64 = ctx.r8.s64 + 31900;
	// addi r3,r6,-9020
	ctx.r3.s64 = ctx.r6.s64 + -9020;
	// addi r4,r7,-25096
	ctx.r4.s64 = ctx.r7.s64 + -25096;
	// bl 0x8227da10
	ctx.lr = 0x8212D19C;
	sub_8227DA10(ctx, base);
	// lis r5,-32166
	ctx.r5.s64 = -2108030976;
	// lis r4,-32237
	ctx.r4.s64 = -2112684032;
	// lis r3,-32255
	ctx.r3.s64 = -2113863680;
	// addi r5,r5,31880
	ctx.r5.s64 = ctx.r5.s64 + 31880;
	// addi r3,r3,-9028
	ctx.r3.s64 = ctx.r3.s64 + -9028;
	// addi r4,r4,-25048
	ctx.r4.s64 = ctx.r4.s64 + -25048;
	// bl 0x8227da10
	ctx.lr = 0x8212D1B8;
	sub_8227DA10(ctx, base);
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r5,r11,31860
	ctx.r5.s64 = ctx.r11.s64 + 31860;
	// addi r3,r9,-9036
	ctx.r3.s64 = ctx.r9.s64 + -9036;
	// addi r4,r10,-25000
	ctx.r4.s64 = ctx.r10.s64 + -25000;
	// bl 0x8227da10
	ctx.lr = 0x8212D1D4;
	sub_8227DA10(ctx, base);
	// lis r8,-32166
	ctx.r8.s64 = -2108030976;
	// lis r7,-32237
	ctx.r7.s64 = -2112684032;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// addi r5,r8,31840
	ctx.r5.s64 = ctx.r8.s64 + 31840;
	// addi r3,r6,-9044
	ctx.r3.s64 = ctx.r6.s64 + -9044;
	// addi r4,r7,-24952
	ctx.r4.s64 = ctx.r7.s64 + -24952;
	// bl 0x8227da10
	ctx.lr = 0x8212D1F0;
	sub_8227DA10(ctx, base);
	// lis r5,-32166
	ctx.r5.s64 = -2108030976;
	// lis r4,-32237
	ctx.r4.s64 = -2112684032;
	// lis r3,-32255
	ctx.r3.s64 = -2113863680;
	// addi r5,r5,31820
	ctx.r5.s64 = ctx.r5.s64 + 31820;
	// addi r3,r3,-9052
	ctx.r3.s64 = ctx.r3.s64 + -9052;
	// addi r4,r4,-24904
	ctx.r4.s64 = ctx.r4.s64 + -24904;
	// bl 0x8227da10
	ctx.lr = 0x8212D20C;
	sub_8227DA10(ctx, base);
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r5,r11,31800
	ctx.r5.s64 = ctx.r11.s64 + 31800;
	// addi r3,r9,-9064
	ctx.r3.s64 = ctx.r9.s64 + -9064;
	// addi r4,r10,-24856
	ctx.r4.s64 = ctx.r10.s64 + -24856;
	// bl 0x8227da10
	ctx.lr = 0x8212D228;
	sub_8227DA10(ctx, base);
	// lis r8,-32166
	ctx.r8.s64 = -2108030976;
	// lis r7,-32237
	ctx.r7.s64 = -2112684032;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// addi r5,r8,31780
	ctx.r5.s64 = ctx.r8.s64 + 31780;
	// addi r3,r6,-9076
	ctx.r3.s64 = ctx.r6.s64 + -9076;
	// addi r4,r7,-24808
	ctx.r4.s64 = ctx.r7.s64 + -24808;
	// bl 0x8227da10
	ctx.lr = 0x8212D244;
	sub_8227DA10(ctx, base);
	// lis r5,-32166
	ctx.r5.s64 = -2108030976;
	// lis r4,-32237
	ctx.r4.s64 = -2112684032;
	// addi r5,r5,31760
	ctx.r5.s64 = ctx.r5.s64 + 31760;
	// addi r4,r4,-24760
	ctx.r4.s64 = ctx.r4.s64 + -24760;
	// lis r3,-32255
	ctx.r3.s64 = -2113863680;
	// addi r3,r3,-9084
	ctx.r3.s64 = ctx.r3.s64 + -9084;
	// bl 0x8227da10
	ctx.lr = 0x8212D260;
	sub_8227DA10(ctx, base);
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r5,r11,31740
	ctx.r5.s64 = ctx.r11.s64 + 31740;
	// addi r3,r9,-9092
	ctx.r3.s64 = ctx.r9.s64 + -9092;
	// addi r4,r10,-24712
	ctx.r4.s64 = ctx.r10.s64 + -24712;
	// bl 0x8227da10
	ctx.lr = 0x8212D27C;
	sub_8227DA10(ctx, base);
	// lis r8,-32166
	ctx.r8.s64 = -2108030976;
	// lis r7,-32237
	ctx.r7.s64 = -2112684032;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// addi r5,r8,31720
	ctx.r5.s64 = ctx.r8.s64 + 31720;
	// addi r3,r6,-9100
	ctx.r3.s64 = ctx.r6.s64 + -9100;
	// addi r4,r7,-24664
	ctx.r4.s64 = ctx.r7.s64 + -24664;
	// bl 0x8227da10
	ctx.lr = 0x8212D298;
	sub_8227DA10(ctx, base);
	// lis r5,-32166
	ctx.r5.s64 = -2108030976;
	// lis r4,-32237
	ctx.r4.s64 = -2112684032;
	// lis r3,-32255
	ctx.r3.s64 = -2113863680;
	// addi r5,r5,31700
	ctx.r5.s64 = ctx.r5.s64 + 31700;
	// addi r3,r3,-9108
	ctx.r3.s64 = ctx.r3.s64 + -9108;
	// addi r4,r4,-24616
	ctx.r4.s64 = ctx.r4.s64 + -24616;
	// bl 0x8227da10
	ctx.lr = 0x8212D2B4;
	sub_8227DA10(ctx, base);
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r5,r11,31680
	ctx.r5.s64 = ctx.r11.s64 + 31680;
	// addi r3,r9,-9120
	ctx.r3.s64 = ctx.r9.s64 + -9120;
	// addi r4,r10,-24568
	ctx.r4.s64 = ctx.r10.s64 + -24568;
	// bl 0x8227da10
	ctx.lr = 0x8212D2D0;
	sub_8227DA10(ctx, base);
	// lis r8,-32166
	ctx.r8.s64 = -2108030976;
	// lis r7,-32237
	ctx.r7.s64 = -2112684032;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// addi r5,r8,31660
	ctx.r5.s64 = ctx.r8.s64 + 31660;
	// addi r3,r6,-9132
	ctx.r3.s64 = ctx.r6.s64 + -9132;
	// addi r4,r7,-24520
	ctx.r4.s64 = ctx.r7.s64 + -24520;
	// bl 0x8227da10
	ctx.lr = 0x8212D2EC;
	sub_8227DA10(ctx, base);
	// lis r5,-32166
	ctx.r5.s64 = -2108030976;
	// lis r4,-32237
	ctx.r4.s64 = -2112684032;
	// lis r3,-32255
	ctx.r3.s64 = -2113863680;
	// addi r5,r5,31640
	ctx.r5.s64 = ctx.r5.s64 + 31640;
	// addi r3,r3,-9140
	ctx.r3.s64 = ctx.r3.s64 + -9140;
	// addi r4,r4,-24120
	ctx.r4.s64 = ctx.r4.s64 + -24120;
	// bl 0x8227da10
	ctx.lr = 0x8212D308;
	sub_8227DA10(ctx, base);
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r5,r11,31620
	ctx.r5.s64 = ctx.r11.s64 + 31620;
	// addi r3,r9,-9148
	ctx.r3.s64 = ctx.r9.s64 + -9148;
	// addi r4,r10,-24072
	ctx.r4.s64 = ctx.r10.s64 + -24072;
	// bl 0x8227da10
	ctx.lr = 0x8212D324;
	sub_8227DA10(ctx, base);
	// lis r8,-32166
	ctx.r8.s64 = -2108030976;
	// lis r7,-32237
	ctx.r7.s64 = -2112684032;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// addi r5,r8,31600
	ctx.r5.s64 = ctx.r8.s64 + 31600;
	// addi r3,r6,-9160
	ctx.r3.s64 = ctx.r6.s64 + -9160;
	// addi r4,r7,-24472
	ctx.r4.s64 = ctx.r7.s64 + -24472;
	// bl 0x8227da10
	ctx.lr = 0x8212D340;
	sub_8227DA10(ctx, base);
	// lis r5,-32166
	ctx.r5.s64 = -2108030976;
	// lis r4,-32237
	ctx.r4.s64 = -2112684032;
	// lis r3,-32255
	ctx.r3.s64 = -2113863680;
	// addi r5,r5,31580
	ctx.r5.s64 = ctx.r5.s64 + 31580;
	// addi r3,r3,-9172
	ctx.r3.s64 = ctx.r3.s64 + -9172;
	// addi r4,r4,-24424
	ctx.r4.s64 = ctx.r4.s64 + -24424;
	// bl 0x8227da10
	ctx.lr = 0x8212D35C;
	sub_8227DA10(ctx, base);
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r5,r11,31560
	ctx.r5.s64 = ctx.r11.s64 + 31560;
	// addi r3,r9,-9184
	ctx.r3.s64 = ctx.r9.s64 + -9184;
	// addi r4,r10,-24376
	ctx.r4.s64 = ctx.r10.s64 + -24376;
	// bl 0x8227da10
	ctx.lr = 0x8212D378;
	sub_8227DA10(ctx, base);
	// lis r8,-32166
	ctx.r8.s64 = -2108030976;
	// lis r7,-32237
	ctx.r7.s64 = -2112684032;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// addi r5,r8,31540
	ctx.r5.s64 = ctx.r8.s64 + 31540;
	// addi r3,r6,-9196
	ctx.r3.s64 = ctx.r6.s64 + -9196;
	// addi r4,r7,-24328
	ctx.r4.s64 = ctx.r7.s64 + -24328;
	// bl 0x8227da10
	ctx.lr = 0x8212D394;
	sub_8227DA10(ctx, base);
	// lis r5,-32166
	ctx.r5.s64 = -2108030976;
	// lis r4,-32237
	ctx.r4.s64 = -2112684032;
	// lis r3,-32255
	ctx.r3.s64 = -2113863680;
	// addi r5,r5,31520
	ctx.r5.s64 = ctx.r5.s64 + 31520;
	// addi r3,r3,-9204
	ctx.r3.s64 = ctx.r3.s64 + -9204;
	// addi r4,r4,-24280
	ctx.r4.s64 = ctx.r4.s64 + -24280;
	// bl 0x8227da10
	ctx.lr = 0x8212D3B0;
	sub_8227DA10(ctx, base);
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r5,r11,31500
	ctx.r5.s64 = ctx.r11.s64 + 31500;
	// addi r3,r9,-9212
	ctx.r3.s64 = ctx.r9.s64 + -9212;
	// addi r4,r10,-24200
	ctx.r4.s64 = ctx.r10.s64 + -24200;
	// bl 0x8227da10
	ctx.lr = 0x8212D3CC;
	sub_8227DA10(ctx, base);
	// lis r8,-32166
	ctx.r8.s64 = -2108030976;
	// lis r7,-32237
	ctx.r7.s64 = -2112684032;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// addi r5,r8,31480
	ctx.r5.s64 = ctx.r8.s64 + 31480;
	// addi r3,r6,-9860
	ctx.r3.s64 = ctx.r6.s64 + -9860;
	// addi r4,r7,-24024
	ctx.r4.s64 = ctx.r7.s64 + -24024;
	// bl 0x8227da10
	ctx.lr = 0x8212D3E8;
	sub_8227DA10(ctx, base);
	// lis r5,-32166
	ctx.r5.s64 = -2108030976;
	// lis r4,-32237
	ctx.r4.s64 = -2112684032;
	// lis r3,-32255
	ctx.r3.s64 = -2113863680;
	// addi r5,r5,31460
	ctx.r5.s64 = ctx.r5.s64 + 31460;
	// addi r3,r3,-9220
	ctx.r3.s64 = ctx.r3.s64 + -9220;
	// addi r4,r4,-23976
	ctx.r4.s64 = ctx.r4.s64 + -23976;
	// bl 0x8227da10
	ctx.lr = 0x8212D404;
	sub_8227DA10(ctx, base);
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r5,r11,31440
	ctx.r5.s64 = ctx.r11.s64 + 31440;
	// addi r3,r9,-9228
	ctx.r3.s64 = ctx.r9.s64 + -9228;
	// addi r4,r10,-23224
	ctx.r4.s64 = ctx.r10.s64 + -23224;
	// bl 0x8227da10
	ctx.lr = 0x8212D420;
	sub_8227DA10(ctx, base);
	// lis r8,-32166
	ctx.r8.s64 = -2108030976;
	// lis r7,-32237
	ctx.r7.s64 = -2112684032;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// addi r5,r8,31420
	ctx.r5.s64 = ctx.r8.s64 + 31420;
	// addi r3,r6,-9236
	ctx.r3.s64 = ctx.r6.s64 + -9236;
	// addi r4,r7,-23176
	ctx.r4.s64 = ctx.r7.s64 + -23176;
	// bl 0x8227da10
	ctx.lr = 0x8212D43C;
	sub_8227DA10(ctx, base);
	// lis r5,-32166
	ctx.r5.s64 = -2108030976;
	// lis r4,-32237
	ctx.r4.s64 = -2112684032;
	// lis r3,-32255
	ctx.r3.s64 = -2113863680;
	// addi r5,r5,31400
	ctx.r5.s64 = ctx.r5.s64 + 31400;
	// addi r3,r3,-29516
	ctx.r3.s64 = ctx.r3.s64 + -29516;
	// addi r4,r4,-23928
	ctx.r4.s64 = ctx.r4.s64 + -23928;
	// bl 0x8227da10
	ctx.lr = 0x8212D458;
	sub_8227DA10(ctx, base);
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r5,r11,31380
	ctx.r5.s64 = ctx.r11.s64 + 31380;
	// addi r3,r9,-9248
	ctx.r3.s64 = ctx.r9.s64 + -9248;
	// addi r4,r10,-23880
	ctx.r4.s64 = ctx.r10.s64 + -23880;
	// bl 0x8227da10
	ctx.lr = 0x8212D474;
	sub_8227DA10(ctx, base);
	// lis r8,-32166
	ctx.r8.s64 = -2108030976;
	// lis r7,-32237
	ctx.r7.s64 = -2112684032;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// addi r5,r8,31360
	ctx.r5.s64 = ctx.r8.s64 + 31360;
	// addi r3,r6,-29532
	ctx.r3.s64 = ctx.r6.s64 + -29532;
	// addi r4,r7,-23832
	ctx.r4.s64 = ctx.r7.s64 + -23832;
	// bl 0x8227da10
	ctx.lr = 0x8212D490;
	sub_8227DA10(ctx, base);
	// lis r5,-32166
	ctx.r5.s64 = -2108030976;
	// lis r4,-32237
	ctx.r4.s64 = -2112684032;
	// lis r3,-32255
	ctx.r3.s64 = -2113863680;
	// addi r5,r5,31340
	ctx.r5.s64 = ctx.r5.s64 + 31340;
	// addi r3,r3,-9264
	ctx.r3.s64 = ctx.r3.s64 + -9264;
	// addi r4,r4,-23728
	ctx.r4.s64 = ctx.r4.s64 + -23728;
	// bl 0x8227da10
	ctx.lr = 0x8212D4AC;
	sub_8227DA10(ctx, base);
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r5,r11,31320
	ctx.r5.s64 = ctx.r11.s64 + 31320;
	// addi r3,r9,-29724
	ctx.r3.s64 = ctx.r9.s64 + -29724;
	// addi r4,r10,-23624
	ctx.r4.s64 = ctx.r10.s64 + -23624;
	// bl 0x8227da10
	ctx.lr = 0x8212D4C8;
	sub_8227DA10(ctx, base);
	// lis r8,-32166
	ctx.r8.s64 = -2108030976;
	// lis r7,-32237
	ctx.r7.s64 = -2112684032;
	// addi r5,r8,31300
	ctx.r5.s64 = ctx.r8.s64 + 31300;
	// addi r4,r7,-23576
	ctx.r4.s64 = ctx.r7.s64 + -23576;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// addi r3,r6,-9272
	ctx.r3.s64 = ctx.r6.s64 + -9272;
	// bl 0x8227da10
	ctx.lr = 0x8212D4E4;
	sub_8227DA10(ctx, base);
	// lis r5,-32166
	ctx.r5.s64 = -2108030976;
	// lis r4,-32237
	ctx.r4.s64 = -2112684032;
	// lis r3,-32255
	ctx.r3.s64 = -2113863680;
	// addi r5,r5,31280
	ctx.r5.s64 = ctx.r5.s64 + 31280;
	// addi r3,r3,-9280
	ctx.r3.s64 = ctx.r3.s64 + -9280;
	// addi r4,r4,-23528
	ctx.r4.s64 = ctx.r4.s64 + -23528;
	// bl 0x8227da10
	ctx.lr = 0x8212D500;
	sub_8227DA10(ctx, base);
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r5,r11,31260
	ctx.r5.s64 = ctx.r11.s64 + 31260;
	// addi r3,r9,-9288
	ctx.r3.s64 = ctx.r9.s64 + -9288;
	// addi r4,r10,-23480
	ctx.r4.s64 = ctx.r10.s64 + -23480;
	// bl 0x8227da10
	ctx.lr = 0x8212D51C;
	sub_8227DA10(ctx, base);
	// lis r8,-32166
	ctx.r8.s64 = -2108030976;
	// lis r7,-32237
	ctx.r7.s64 = -2112684032;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// addi r5,r8,31240
	ctx.r5.s64 = ctx.r8.s64 + 31240;
	// addi r3,r6,-29548
	ctx.r3.s64 = ctx.r6.s64 + -29548;
	// addi r4,r7,-23432
	ctx.r4.s64 = ctx.r7.s64 + -23432;
	// bl 0x8227da10
	ctx.lr = 0x8212D538;
	sub_8227DA10(ctx, base);
	// lis r5,-32166
	ctx.r5.s64 = -2108030976;
	// lis r4,-32237
	ctx.r4.s64 = -2112684032;
	// lis r3,-32255
	ctx.r3.s64 = -2113863680;
	// addi r5,r5,31220
	ctx.r5.s64 = ctx.r5.s64 + 31220;
	// addi r3,r3,-9304
	ctx.r3.s64 = ctx.r3.s64 + -9304;
	// addi r4,r4,-23328
	ctx.r4.s64 = ctx.r4.s64 + -23328;
	// bl 0x8227da10
	ctx.lr = 0x8212D554;
	sub_8227DA10(ctx, base);
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r5,r11,31200
	ctx.r5.s64 = ctx.r11.s64 + 31200;
	// addi r3,r9,-29636
	ctx.r3.s64 = ctx.r9.s64 + -29636;
	// addi r4,r10,-23128
	ctx.r4.s64 = ctx.r10.s64 + -23128;
	// bl 0x8227da10
	ctx.lr = 0x8212D570;
	sub_8227DA10(ctx, base);
	// lis r8,-32166
	ctx.r8.s64 = -2108030976;
	// lis r7,-32237
	ctx.r7.s64 = -2112684032;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// addi r5,r8,31180
	ctx.r5.s64 = ctx.r8.s64 + 31180;
	// addi r3,r6,-9316
	ctx.r3.s64 = ctx.r6.s64 + -9316;
	// addi r4,r7,-23080
	ctx.r4.s64 = ctx.r7.s64 + -23080;
	// bl 0x8227da10
	ctx.lr = 0x8212D58C;
	sub_8227DA10(ctx, base);
	// lis r5,-32166
	ctx.r5.s64 = -2108030976;
	// lis r4,-32237
	ctx.r4.s64 = -2112684032;
	// lis r3,-32255
	ctx.r3.s64 = -2113863680;
	// addi r5,r5,31160
	ctx.r5.s64 = ctx.r5.s64 + 31160;
	// addi r3,r3,-9324
	ctx.r3.s64 = ctx.r3.s64 + -9324;
	// addi r4,r4,-23032
	ctx.r4.s64 = ctx.r4.s64 + -23032;
	// bl 0x8227da10
	ctx.lr = 0x8212D5A8;
	sub_8227DA10(ctx, base);
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r5,r11,31140
	ctx.r5.s64 = ctx.r11.s64 + 31140;
	// addi r3,r9,-9332
	ctx.r3.s64 = ctx.r9.s64 + -9332;
	// addi r4,r10,-22984
	ctx.r4.s64 = ctx.r10.s64 + -22984;
	// bl 0x8227da10
	ctx.lr = 0x8212D5C4;
	sub_8227DA10(ctx, base);
	// lis r8,-32166
	ctx.r8.s64 = -2108030976;
	// lis r7,-32237
	ctx.r7.s64 = -2112684032;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// addi r5,r8,31120
	ctx.r5.s64 = ctx.r8.s64 + 31120;
	// addi r3,r6,-9344
	ctx.r3.s64 = ctx.r6.s64 + -9344;
	// addi r4,r7,-22936
	ctx.r4.s64 = ctx.r7.s64 + -22936;
	// bl 0x8227da10
	ctx.lr = 0x8212D5E0;
	sub_8227DA10(ctx, base);
	// lis r5,-32166
	ctx.r5.s64 = -2108030976;
	// lis r4,-32237
	ctx.r4.s64 = -2112684032;
	// lis r3,-32255
	ctx.r3.s64 = -2113863680;
	// addi r5,r5,31100
	ctx.r5.s64 = ctx.r5.s64 + 31100;
	// addi r3,r3,-9356
	ctx.r3.s64 = ctx.r3.s64 + -9356;
	// addi r4,r4,-22888
	ctx.r4.s64 = ctx.r4.s64 + -22888;
	// bl 0x8227da10
	ctx.lr = 0x8212D5FC;
	sub_8227DA10(ctx, base);
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r5,r11,31080
	ctx.r5.s64 = ctx.r11.s64 + 31080;
	// addi r3,r9,-9368
	ctx.r3.s64 = ctx.r9.s64 + -9368;
	// addi r4,r10,-22840
	ctx.r4.s64 = ctx.r10.s64 + -22840;
	// bl 0x8227da10
	ctx.lr = 0x8212D618;
	sub_8227DA10(ctx, base);
	// lis r8,-32166
	ctx.r8.s64 = -2108030976;
	// addi r5,r8,31060
	ctx.r5.s64 = ctx.r8.s64 + 31060;
	// lis r7,-32237
	ctx.r7.s64 = -2112684032;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// addi r4,r7,-22792
	ctx.r4.s64 = ctx.r7.s64 + -22792;
	// addi r3,r6,-9380
	ctx.r3.s64 = ctx.r6.s64 + -9380;
	// bl 0x8227da10
	ctx.lr = 0x8212D634;
	sub_8227DA10(ctx, base);
	// lis r5,-32166
	ctx.r5.s64 = -2108030976;
	// lis r4,-32237
	ctx.r4.s64 = -2112684032;
	// lis r3,-32255
	ctx.r3.s64 = -2113863680;
	// addi r5,r5,31040
	ctx.r5.s64 = ctx.r5.s64 + 31040;
	// addi r3,r3,-9392
	ctx.r3.s64 = ctx.r3.s64 + -9392;
	// addi r4,r4,-22744
	ctx.r4.s64 = ctx.r4.s64 + -22744;
	// bl 0x8227da10
	ctx.lr = 0x8212D650;
	sub_8227DA10(ctx, base);
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r5,r11,31020
	ctx.r5.s64 = ctx.r11.s64 + 31020;
	// addi r3,r9,-9404
	ctx.r3.s64 = ctx.r9.s64 + -9404;
	// addi r4,r10,-22696
	ctx.r4.s64 = ctx.r10.s64 + -22696;
	// bl 0x8227da10
	ctx.lr = 0x8212D66C;
	sub_8227DA10(ctx, base);
	// lis r8,-32166
	ctx.r8.s64 = -2108030976;
	// lis r7,-32237
	ctx.r7.s64 = -2112684032;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// addi r5,r8,31000
	ctx.r5.s64 = ctx.r8.s64 + 31000;
	// addi r3,r6,-9412
	ctx.r3.s64 = ctx.r6.s64 + -9412;
	// addi r4,r7,-22648
	ctx.r4.s64 = ctx.r7.s64 + -22648;
	// bl 0x8227da10
	ctx.lr = 0x8212D688;
	sub_8227DA10(ctx, base);
	// lis r5,-32166
	ctx.r5.s64 = -2108030976;
	// lis r4,-32237
	ctx.r4.s64 = -2112684032;
	// lis r3,-32255
	ctx.r3.s64 = -2113863680;
	// addi r5,r5,30980
	ctx.r5.s64 = ctx.r5.s64 + 30980;
	// addi r3,r3,-9420
	ctx.r3.s64 = ctx.r3.s64 + -9420;
	// addi r4,r4,-22600
	ctx.r4.s64 = ctx.r4.s64 + -22600;
	// bl 0x8227da10
	ctx.lr = 0x8212D6A4;
	sub_8227DA10(ctx, base);
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r5,r11,30960
	ctx.r5.s64 = ctx.r11.s64 + 30960;
	// addi r3,r9,-9428
	ctx.r3.s64 = ctx.r9.s64 + -9428;
	// addi r4,r10,-22552
	ctx.r4.s64 = ctx.r10.s64 + -22552;
	// bl 0x8227da10
	ctx.lr = 0x8212D6C0;
	sub_8227DA10(ctx, base);
	// lis r8,-32166
	ctx.r8.s64 = -2108030976;
	// lis r7,-32237
	ctx.r7.s64 = -2112684032;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// addi r5,r8,30940
	ctx.r5.s64 = ctx.r8.s64 + 30940;
	// addi r3,r6,-9436
	ctx.r3.s64 = ctx.r6.s64 + -9436;
	// addi r4,r7,-22392
	ctx.r4.s64 = ctx.r7.s64 + -22392;
	// bl 0x8227da10
	ctx.lr = 0x8212D6DC;
	sub_8227DA10(ctx, base);
	// lis r5,-32166
	ctx.r5.s64 = -2108030976;
	// lis r4,-32237
	ctx.r4.s64 = -2112684032;
	// lis r3,-32255
	ctx.r3.s64 = -2113863680;
	// addi r5,r5,30920
	ctx.r5.s64 = ctx.r5.s64 + 30920;
	// addi r3,r3,-9444
	ctx.r3.s64 = ctx.r3.s64 + -9444;
	// addi r4,r4,-26472
	ctx.r4.s64 = ctx.r4.s64 + -26472;
	// bl 0x8227da10
	ctx.lr = 0x8212D6F8;
	sub_8227DA10(ctx, base);
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r5,r11,30900
	ctx.r5.s64 = ctx.r11.s64 + 30900;
	// addi r3,r9,-9452
	ctx.r3.s64 = ctx.r9.s64 + -9452;
	// addi r4,r10,-12144
	ctx.r4.s64 = ctx.r10.s64 + -12144;
	// bl 0x8227da10
	ctx.lr = 0x8212D714;
	sub_8227DA10(ctx, base);
	// lis r8,-32166
	ctx.r8.s64 = -2108030976;
	// lis r7,-32237
	ctx.r7.s64 = -2112684032;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// addi r5,r8,30880
	ctx.r5.s64 = ctx.r8.s64 + 30880;
	// addi r3,r6,-9464
	ctx.r3.s64 = ctx.r6.s64 + -9464;
	// addi r4,r7,-22176
	ctx.r4.s64 = ctx.r7.s64 + -22176;
	// bl 0x8227da10
	ctx.lr = 0x8212D730;
	sub_8227DA10(ctx, base);
	// lis r5,-32166
	ctx.r5.s64 = -2108030976;
	// lis r4,-32237
	ctx.r4.s64 = -2112684032;
	// lis r3,-32255
	ctx.r3.s64 = -2113863680;
	// addi r5,r5,30860
	ctx.r5.s64 = ctx.r5.s64 + 30860;
	// addi r3,r3,-9476
	ctx.r3.s64 = ctx.r3.s64 + -9476;
	// addi r4,r4,-22112
	ctx.r4.s64 = ctx.r4.s64 + -22112;
	// bl 0x8227da10
	ctx.lr = 0x8212D74C;
	sub_8227DA10(ctx, base);
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r5,r11,30840
	ctx.r5.s64 = ctx.r11.s64 + 30840;
	// addi r3,r9,-9484
	ctx.r3.s64 = ctx.r9.s64 + -9484;
	// addi r4,r10,-22056
	ctx.r4.s64 = ctx.r10.s64 + -22056;
	// bl 0x8227da10
	ctx.lr = 0x8212D768;
	sub_8227DA10(ctx, base);
	// lis r8,-32166
	ctx.r8.s64 = -2108030976;
	// lis r7,-32237
	ctx.r7.s64 = -2112684032;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// addi r5,r8,30820
	ctx.r5.s64 = ctx.r8.s64 + 30820;
	// addi r3,r6,-9492
	ctx.r3.s64 = ctx.r6.s64 + -9492;
	// addi r4,r7,-22008
	ctx.r4.s64 = ctx.r7.s64 + -22008;
	// bl 0x8227da10
	ctx.lr = 0x8212D784;
	sub_8227DA10(ctx, base);
	// lis r5,-32166
	ctx.r5.s64 = -2108030976;
	// lis r4,-32237
	ctx.r4.s64 = -2112684032;
	// lis r3,-32255
	ctx.r3.s64 = -2113863680;
	// addi r5,r5,30800
	ctx.r5.s64 = ctx.r5.s64 + 30800;
	// addi r3,r3,-9508
	ctx.r3.s64 = ctx.r3.s64 + -9508;
	// addi r4,r4,-21824
	ctx.r4.s64 = ctx.r4.s64 + -21824;
	// bl 0x8227da10
	ctx.lr = 0x8212D7A0;
	sub_8227DA10(ctx, base);
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r5,r11,30780
	ctx.r5.s64 = ctx.r11.s64 + 30780;
	// addi r3,r9,-9524
	ctx.r3.s64 = ctx.r9.s64 + -9524;
	// addi r4,r10,-21696
	ctx.r4.s64 = ctx.r10.s64 + -21696;
	// bl 0x8227da10
	ctx.lr = 0x8212D7BC;
	sub_8227DA10(ctx, base);
	// lis r8,-32166
	ctx.r8.s64 = -2108030976;
	// lis r7,-32237
	ctx.r7.s64 = -2112684032;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// addi r5,r8,30760
	ctx.r5.s64 = ctx.r8.s64 + 30760;
	// addi r3,r6,-9544
	ctx.r3.s64 = ctx.r6.s64 + -9544;
	// addi r4,r7,-21960
	ctx.r4.s64 = ctx.r7.s64 + -21960;
	// bl 0x8227da10
	ctx.lr = 0x8212D7D8;
	sub_8227DA10(ctx, base);
	// lis r5,-32166
	ctx.r5.s64 = -2108030976;
	// lis r4,-32237
	ctx.r4.s64 = -2112684032;
	// lis r3,-32255
	ctx.r3.s64 = -2113863680;
	// addi r5,r5,30740
	ctx.r5.s64 = ctx.r5.s64 + 30740;
	// addi r3,r3,-9564
	ctx.r3.s64 = ctx.r3.s64 + -9564;
	// addi r4,r4,-21872
	ctx.r4.s64 = ctx.r4.s64 + -21872;
	// bl 0x8227da10
	ctx.lr = 0x8212D7F4;
	sub_8227DA10(ctx, base);
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r5,r11,30720
	ctx.r5.s64 = ctx.r11.s64 + 30720;
	// addi r3,r9,-29748
	ctx.r3.s64 = ctx.r9.s64 + -29748;
	// addi r4,r10,-21568
	ctx.r4.s64 = ctx.r10.s64 + -21568;
	// bl 0x8227da10
	ctx.lr = 0x8212D810;
	sub_8227DA10(ctx, base);
	// lis r8,-32166
	ctx.r8.s64 = -2108030976;
	// lis r7,-32237
	ctx.r7.s64 = -2112684032;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// addi r5,r8,30700
	ctx.r5.s64 = ctx.r8.s64 + 30700;
	// addi r3,r6,-29736
	ctx.r3.s64 = ctx.r6.s64 + -29736;
	// addi r4,r7,-21416
	ctx.r4.s64 = ctx.r7.s64 + -21416;
	// bl 0x8227da10
	ctx.lr = 0x8212D82C;
	sub_8227DA10(ctx, base);
	// lis r5,-32166
	ctx.r5.s64 = -2108030976;
	// lis r4,-32237
	ctx.r4.s64 = -2112684032;
	// lis r3,-32255
	ctx.r3.s64 = -2113863680;
	// addi r5,r5,30680
	ctx.r5.s64 = ctx.r5.s64 + 30680;
	// addi r3,r3,-9580
	ctx.r3.s64 = ctx.r3.s64 + -9580;
	// addi r4,r4,-21256
	ctx.r4.s64 = ctx.r4.s64 + -21256;
	// bl 0x8227da10
	ctx.lr = 0x8212D848;
	sub_8227DA10(ctx, base);
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r5,r11,30660
	ctx.r5.s64 = ctx.r11.s64 + 30660;
	// addi r3,r9,-9592
	ctx.r3.s64 = ctx.r9.s64 + -9592;
	// addi r4,r10,-21224
	ctx.r4.s64 = ctx.r10.s64 + -21224;
	// bl 0x8227da10
	ctx.lr = 0x8212D864;
	sub_8227DA10(ctx, base);
	// lis r8,-32166
	ctx.r8.s64 = -2108030976;
	// lis r7,-32237
	ctx.r7.s64 = -2112684032;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// addi r5,r8,30640
	ctx.r5.s64 = ctx.r8.s64 + 30640;
	// addi r3,r6,-9600
	ctx.r3.s64 = ctx.r6.s64 + -9600;
	// addi r4,r7,-21192
	ctx.r4.s64 = ctx.r7.s64 + -21192;
	// bl 0x8227da10
	ctx.lr = 0x8212D880;
	sub_8227DA10(ctx, base);
	// lis r5,-32166
	ctx.r5.s64 = -2108030976;
	// lis r4,-32237
	ctx.r4.s64 = -2112684032;
	// lis r3,-32255
	ctx.r3.s64 = -2113863680;
	// addi r5,r5,30620
	ctx.r5.s64 = ctx.r5.s64 + 30620;
	// addi r3,r3,-9612
	ctx.r3.s64 = ctx.r3.s64 + -9612;
	// addi r4,r4,-21064
	ctx.r4.s64 = ctx.r4.s64 + -21064;
	// bl 0x8227da10
	ctx.lr = 0x8212D89C;
	sub_8227DA10(ctx, base);
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// addi r5,r11,30600
	ctx.r5.s64 = ctx.r11.s64 + 30600;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r4,r10,-20936
	ctx.r4.s64 = ctx.r10.s64 + -20936;
	// addi r3,r9,-29480
	ctx.r3.s64 = ctx.r9.s64 + -29480;
	// bl 0x8227da10
	ctx.lr = 0x8212D8B8;
	sub_8227DA10(ctx, base);
	// lis r8,-32166
	ctx.r8.s64 = -2108030976;
	// lis r7,-32237
	ctx.r7.s64 = -2112684032;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// addi r5,r8,30580
	ctx.r5.s64 = ctx.r8.s64 + 30580;
	// addi r3,r6,-9624
	ctx.r3.s64 = ctx.r6.s64 + -9624;
	// addi r4,r7,-20752
	ctx.r4.s64 = ctx.r7.s64 + -20752;
	// bl 0x8227da10
	ctx.lr = 0x8212D8D4;
	sub_8227DA10(ctx, base);
	// lis r5,-32166
	ctx.r5.s64 = -2108030976;
	// lis r4,-32237
	ctx.r4.s64 = -2112684032;
	// lis r3,-32255
	ctx.r3.s64 = -2113863680;
	// addi r5,r5,30560
	ctx.r5.s64 = ctx.r5.s64 + 30560;
	// addi r3,r3,-8696
	ctx.r3.s64 = ctx.r3.s64 + -8696;
	// addi r4,r4,-20648
	ctx.r4.s64 = ctx.r4.s64 + -20648;
	// bl 0x8227da10
	ctx.lr = 0x8212D8F0;
	sub_8227DA10(ctx, base);
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r5,r11,30540
	ctx.r5.s64 = ctx.r11.s64 + 30540;
	// addi r3,r9,-8704
	ctx.r3.s64 = ctx.r9.s64 + -8704;
	// addi r4,r10,-20600
	ctx.r4.s64 = ctx.r10.s64 + -20600;
	// bl 0x8227da10
	ctx.lr = 0x8212D90C;
	sub_8227DA10(ctx, base);
	// lis r8,-32166
	ctx.r8.s64 = -2108030976;
	// lis r7,-32237
	ctx.r7.s64 = -2112684032;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// addi r5,r8,30520
	ctx.r5.s64 = ctx.r8.s64 + 30520;
	// addi r3,r6,-8720
	ctx.r3.s64 = ctx.r6.s64 + -8720;
	// addi r4,r7,-20552
	ctx.r4.s64 = ctx.r7.s64 + -20552;
	// bl 0x8227da10
	ctx.lr = 0x8212D928;
	sub_8227DA10(ctx, base);
	// lis r5,-32166
	ctx.r5.s64 = -2108030976;
	// lis r4,-32237
	ctx.r4.s64 = -2112684032;
	// lis r3,-32255
	ctx.r3.s64 = -2113863680;
	// addi r5,r5,30500
	ctx.r5.s64 = ctx.r5.s64 + 30500;
	// addi r3,r3,-8736
	ctx.r3.s64 = ctx.r3.s64 + -8736;
	// addi r4,r4,-20504
	ctx.r4.s64 = ctx.r4.s64 + -20504;
	// bl 0x8227da10
	ctx.lr = 0x8212D944;
	sub_8227DA10(ctx, base);
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
	// addi r3,r7,-8764
	ctx.r3.s64 = ctx.r7.s64 + -8764;
	// lfs f31,12168(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f31.f64 = double(temp.f32);
	// addi r8,r8,-8792
	ctx.r8.s64 = ctx.r8.s64 + -8792;
	// lfs f2,5992(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5992);
	ctx.f2.f64 = double(temp.f32);
	// li r7,0
	ctx.r7.s64 = 0;
	// lfs f1,6048(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 6048);
	ctx.f1.f64 = double(temp.f32);
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// bl 0x822e1660
	ctx.lr = 0x8212D978;
	sub_822E1660(ctx, base);
	// lis r6,-32166
	ctx.r6.s64 = -2108030976;
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// lis r4,-32255
	ctx.r4.s64 = -2113863680;
	// addi r8,r5,-8856
	ctx.r8.s64 = ctx.r5.s64 + -8856;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r3,29308(r6)
	PPC_STORE_U32(ctx.r6.u32 + 29308, ctx.r3.u32);
	// addi r3,r4,-8880
	ctx.r3.s64 = ctx.r4.s64 + -8880;
	// li r6,1000
	ctx.r6.s64 = 1000;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,300
	ctx.r4.s64 = 300;
	// bl 0x822e1618
	ctx.lr = 0x8212D9A4;
	sub_822E1618(ctx, base);
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r8,r10,-8900
	ctx.r8.s64 = ctx.r10.s64 + -8900;
	// li r7,4
	ctx.r7.s64 = 4;
	// stw r3,29304(r11)
	PPC_STORE_U32(ctx.r11.u32 + 29304, ctx.r3.u32);
	// addi r3,r9,-8912
	ctx.r3.s64 = ctx.r9.s64 + -8912;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822e1618
	ctx.lr = 0x8212D9D0;
	sub_822E1618(ctx, base);
	// lis r8,-32155
	ctx.r8.s64 = -2107310080;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// lis r4,-32255
	ctx.r4.s64 = -2113863680;
	// stw r3,-30052(r8)
	PPC_STORE_U32(ctx.r8.u32 + -30052, ctx.r3.u32);
	// lfs f3,7324(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 7324);
	ctx.f3.f64 = double(temp.f32);
	// addi r8,r5,-8956
	ctx.r8.s64 = ctx.r5.s64 + -8956;
	// addi r3,r4,-8976
	ctx.r3.s64 = ctx.r4.s64 + -8976;
	// lfs f2,5484(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 5484);
	ctx.f2.f64 = double(temp.f32);
	// li r7,4
	ctx.r7.s64 = 4;
	// bl 0x822e1660
	ctx.lr = 0x8212DA04;
	sub_822E1660(ctx, base);
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// stw r3,28804(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28804, ctx.r3.u32);
	// bl 0x8227dd68
	ctx.lr = 0x8212DA10;
	sub_8227DD68(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8212D100) {
	__imp__sub_8212D100(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8212DA24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8212DA24) {
	__imp__sub_8212DA24(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8212DA28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8212DA30;
	__savegprlr_29(ctx, base);
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x823de028
	ctx.lr = 0x8212DA38;
	__savefpr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r9,20(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// lfs f13,16(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// lfs f0,14276(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 14276);
	ctx.f0.f64 = double(temp.f32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// fmuls f30,f13,f0
	ctx.f30.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// frsp f31,f11
	ctx.f31.f64 = double(float(ctx.f11.f64));
	// beq cr6,0x8212dab0
	if (ctx.cr6.eq) goto loc_8212DAB0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32153
	ctx.r10.s64 = -2107179008;
	// lfs f11,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// lis r9,-32165
	ctx.r9.s64 = -2107965440;
	// addi r8,r9,28832
	ctx.r8.s64 = ctx.r9.s64 + 28832;
	// lfs f0,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-16788(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -16788);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f10,f0,f13
	ctx.f10.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// lwz r30,384(r8)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r8.u32 + 384);
	// fmuls f9,f10,f30
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f30.f64));
	// fmuls f8,f10,f31
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f31.f64));
	// fmuls f30,f9,f12
	ctx.f30.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// fmuls f31,f8,f11
	ctx.f31.f64 = double(float(ctx.f8.f64 * ctx.f11.f64));
	// b 0x8212dac0
	goto loc_8212DAC0;
loc_8212DAB0:
	// li r4,0
	ctx.r4.s64 = 0;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x822c2068
	ctx.lr = 0x8212DABC;
	sub_822C2068(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_8212DAC0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x8238b548
	ctx.lr = 0x8212DACC;
	sub_8238B548(ctx, base);
	// addi r29,r31,24
	ctx.r29.s64 = ctx.r31.s64 + 24;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f1.f64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8238b5a8
	ctx.lr = 0x8212DAE4;
	sub_8238B5A8(ctx, base);
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f11,f12,f29
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f29.f64));
	// fcmpu cr6,f11,f31
	ctx.cr6.compare(ctx.f11.f64, ctx.f31.f64);
	// bge cr6,0x8212db28
	if (!ctx.cr6.lt) goto loc_8212DB28;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bl 0x822b7e60
	ctx.lr = 0x8212DB14;
	sub_822B7E60(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
loc_8212DB18:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x823de074
	ctx.lr = 0x8212DB24;
	__restfpr_28(ctx, base);
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_8212DB28:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f30,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f30.f64 = double(temp.f32);
	// fcmpu cr6,f31,f30
	ctx.cr6.compare(ctx.f31.f64, ctx.f30.f64);
	// ble cr6,0x8212db8c
	if (!ctx.cr6.gt) goto loc_8212DB8C;
loc_8212DB38:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8212db8c
	if (!ctx.cr6.gt) goto loc_8212DB8C;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,23
	ctx.r3.s64 = ctx.r11.s64 + 23;
	// bl 0x8238b5a8
	ctx.lr = 0x8212DB58;
	sub_8238B5A8(ctx, base);
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f0,f12,f29
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f29.f64));
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x8212db8c
	if (!ctx.cr6.lt) goto loc_8212DB8C;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// blt cr6,0x8212db38
	if (ctx.cr6.lt) goto loc_8212DB38;
loc_8212DB8C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// addi r3,r11,24
	ctx.r3.s64 = ctx.r11.s64 + 24;
	// bl 0x8238b5a8
	ctx.lr = 0x8212DBA4;
	sub_8238B5A8(ctx, base);
	// extsw r10,r3
	ctx.r10.s64 = ctx.r3.s32;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,24
	ctx.r3.s64 = ctx.r11.s64 + 24;
	// fmuls f28,f12,f29
	ctx.f28.f64 = double(float(ctx.f12.f64 * ctx.f29.f64));
	// bl 0x8238b5a8
	ctx.lr = 0x8212DBD4;
	sub_8238B5A8(ctx, base);
	// extsw r9,r3
	ctx.r9.s64 = ctx.r3.s32;
	// std r9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// lfd f11,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// fnmsubs f0,f9,f29,f28
	ctx.f0.f64 = double(float(-(ctx.f9.f64 * ctx.f29.f64 - ctx.f28.f64)));
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// blt cr6,0x8212dc04
	if (ctx.cr6.lt) goto loc_8212DC04;
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// blt cr6,0x8212dc2c
	if (ctx.cr6.lt) goto loc_8212DC2C;
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bge cr6,0x8212dc20
	if (!ctx.cr6.lt) goto loc_8212DC20;
loc_8212DC04:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8212dc18
	if (!ctx.cr6.eq) goto loc_8212DC18;
	// fmr f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f30.f64;
	// b 0x8212dc34
	goto loc_8212DC34;
loc_8212DC18:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x8212dc28
	goto loc_8212DC28;
loc_8212DC20:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_8212DC28:
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_8212DC2C:
	// fcmpu cr6,f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// blt cr6,0x8212db8c
	if (ctx.cr6.lt) goto loc_8212DB8C;
loc_8212DC34:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x8212db8c
	if (!ctx.cr6.lt) goto loc_8212DB8C;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r11,r10,r31
	ctx.r11.u64 = ctx.r10.u64 + ctx.r31.u64;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
loc_8212DC4C:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8212dc4c
	if (!ctx.cr6.eq) goto loc_8212DC4C;
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// fcmpu cr6,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f30.f64);
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// subf r6,r10,r8
	ctx.r6.s64 = ctx.r8.s64 - ctx.r10.s64;
	// rotlwi r29,r7,0
	ctx.r29.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// stw r6,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// ble cr6,0x8212db18
	if (!ctx.cr6.gt) goto loc_8212DB18;
loc_8212DC7C:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, ctx.xer);
	// bge cr6,0x8212db18
	if (!ctx.cr6.lt) goto loc_8212DB18;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// add r11,r31,r10
	ctx.r11.u64 = ctx.r31.u64 + ctx.r10.u64;
	// addi r3,r11,24
	ctx.r3.s64 = ctx.r11.s64 + 24;
	// bl 0x8238b5a8
	ctx.lr = 0x8212DCA0;
	sub_8238B5A8(ctx, base);
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f11,f12,f29
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f29.f64));
	// fcmpu cr6,f11,f31
	ctx.cr6.compare(ctx.f11.f64, ctx.f31.f64);
	// bge cr6,0x8212db18
	if (!ctx.cr6.lt) goto loc_8212DB18;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x8212dc7c
	goto loc_8212DC7C;
}

PPC_WEAK_FUNC(sub_8212DA28) {
	__imp__sub_8212DA28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8212DCD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x8212DCD8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// bl 0x8230d840
	ctx.lr = 0x8212DCEC;
	sub_8230D840(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8212dd00
	if (!ctx.cr6.eq) goto loc_8212DD00;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_8212DD00:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_8212DD04:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8212dd04
	if (!ctx.cr6.eq) goto loc_8212DD04;
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r29,r11,0
	ctx.r29.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x8212dd50
	if (!ctx.cr6.gt) goto loc_8212DD50;
loc_8212DD2C:
	// lbzx r11,r31,r30
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r30.u32);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// extsb r6,r11
	ctx.r6.s64 = ctx.r11.s8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8212ff90
	ctx.lr = 0x8212DD44;
	sub_8212FF90(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r29
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r29.s32, ctx.xer);
	// blt cr6,0x8212dd2c
	if (ctx.cr6.lt) goto loc_8212DD2C;
loc_8212DD50:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8230d848
	ctx.lr = 0x8212DD58;
	sub_8230D848(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8212DCD0) {
	__imp__sub_8212DCD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8212DD64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8212DD64) {
	__imp__sub_8212DD64(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8212DD68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x8212DD70;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r30,r11,32013
	ctx.r30.s64 = ctx.r11.s64 + 32013;
	// lwz r4,-9(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -9);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_8212DD88:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8212dd88
	if (!ctx.cr6.eq) goto loc_8212DD88;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r31,r11,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82124690
	ctx.lr = 0x8212DDB0;
	sub_82124690(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8212df38
	if (ctx.cr6.eq) goto loc_8212DF38;
	// lis r11,-32167
	ctx.r11.s64 = -2108096512;
	// lbz r10,-9536(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -9536);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8212dde0
	if (!ctx.cr6.eq) goto loc_8212DDE0;
	// lis r11,-32167
	ctx.r11.s64 = -2108096512;
	// lwz r11,-10004(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -10004);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8212ddfc
	if (!ctx.cr6.eq) goto loc_8212DDFC;
loc_8212DDE0:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r4,-9(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -9);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822e7ee0
	ctx.lr = 0x8212DDF0;
	sub_822E7EE0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x8212de00
	if (!ctx.cr6.eq) goto loc_8212DE00;
loc_8212DDFC:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8212DE00:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8212de20
	if (ctx.cr6.eq) goto loc_8212DE20;
	// lwz r11,-5(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,-5(r30)
	PPC_STORE_U32(ctx.r30.u32 + -5, ctx.r10.u32);
	// b 0x8212de24
	goto loc_8212DE24;
loc_8212DE20:
	// lwz r10,-5(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5);
loc_8212DE24:
	// lwz r11,1315(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1315);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,1315(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1315, ctx.r11.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8212df20
	if (ctx.cr6.eq) goto loc_8212DF20;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8212de48
	if (ctx.cr6.eq) goto loc_8212DE48;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x8212df20
	if (ctx.cr6.eq) goto loc_8212DF20;
loc_8212DE48:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8212de68
	if (!ctx.cr6.eq) goto loc_8212DE68;
	// addi r3,r30,3
	ctx.r3.s64 = ctx.r30.s64 + 3;
	// lwz r4,-9(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -9);
	// li r5,1024
	ctx.r5.s64 = 1024;
	// bl 0x822e7e98
	ctx.lr = 0x8212DE60;
	sub_822E7E98(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_8212DE68:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8212df38
	if (ctx.cr6.eq) goto loc_8212DF38;
	// lbz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 0);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8212dec0
	if (ctx.cr6.eq) goto loc_8212DEC0;
	// addi r11,r30,3
	ctx.r11.s64 = ctx.r30.s64 + 3;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// subf r28,r27,r11
	ctx.r28.s64 = ctx.r11.s64 - ctx.r27.s64;
loc_8212DE8C:
	// lbzx r11,r28,r31
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + ctx.r31.u32);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x823dfa20
	ctx.lr = 0x8212DE98;
	sub_823DFA20(ctx, base);
	// lbz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// extsb r3,r10
	ctx.r3.s64 = ctx.r10.s8;
	// bl 0x823dfa20
	ctx.lr = 0x8212DEA8;
	sub_823DFA20(ctx, base);
	// cmpw cr6,r26,r3
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r3.s32, ctx.xer);
	// bne cr6,0x8212dec0
	if (!ctx.cr6.eq) goto loc_8212DEC0;
	// lbzu r11,1(r31)
	ea = 1 + ctx.r31.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r31.u32 = ea;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8212de8c
	if (!ctx.cr6.eq) goto loc_8212DE8C;
loc_8212DEC0:
	// lbzx r11,r29,r27
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r27.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8212df04
	if (ctx.cr6.eq) goto loc_8212DF04;
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8212dee8
	if (ctx.cr6.eq) goto loc_8212DEE8;
	// addi r11,r30,3
	ctx.r11.s64 = ctx.r30.s64 + 3;
	// lbzx r10,r29,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8212df04
	if (ctx.cr6.eq) goto loc_8212DF04;
loc_8212DEE8:
	// addi r10,r30,3
	ctx.r10.s64 = ctx.r30.s64 + 3;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
	// stbx r9,r29,r10
	PPC_STORE_U8(ctx.r29.u32 + ctx.r10.u32, ctx.r9.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_8212DF04:
	// addi r10,r30,3
	ctx.r10.s64 = ctx.r30.s64 + 3;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
	// stbx r9,r29,r10
	PPC_STORE_U8(ctx.r29.u32 + ctx.r10.u32, ctx.r9.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_8212DF20:
	// addi r3,r30,3
	ctx.r3.s64 = ctx.r30.s64 + 3;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x822e7e98
	ctx.lr = 0x8212DF30;
	sub_822E7E98(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
loc_8212DF38:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8212DD68) {
	__imp__sub_8212DD68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8212DF40) {
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
	// lis r10,-32167
	ctx.r10.s64 = -2108096512;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,32016
	ctx.r31.s64 = ctx.r11.s64 + 32016;
	// lbz r9,-9536(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + -9536);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8212df84
	if (ctx.cr6.eq) goto loc_8212DF84;
	// lis r11,-32167
	ctx.r11.s64 = -2108096512;
	// lwz r11,-10004(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -10004);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8212dfbc
	if (!ctx.cr6.eq) goto loc_8212DFBC;
loc_8212DF84:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
loc_8212DF8C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8212df8c
	if (!ctx.cr6.eq) goto loc_8212DF8C;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x822e7ee0
	ctx.lr = 0x8212DFB4;
	sub_822E7EE0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8212dfe4
	if (!ctx.cr6.eq) goto loc_8212DFE4;
loc_8212DFBC:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822e7fd0
	ctx.lr = 0x8212DFC8;
	sub_822E7FD0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8212dfe4
	if (ctx.cr6.eq) goto loc_8212DFE4;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,-6380
	ctx.r4.s64 = ctx.r11.s64 + -6380;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82280900
	ctx.lr = 0x8212DFE4;
	sub_82280900(ctx, base);
loc_8212DFE4:
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

PPC_WEAK_FUNC(sub_8212DF40) {
	__imp__sub_8212DF40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8212DFFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8212DFFC) {
	__imp__sub_8212DFFC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8212E000) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf68
	ctx.lr = 0x8212E008;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31937
	ctx.r11.s64 = -2093023232;
	// li r28,1
	ctx.r28.s64 = 1;
	// addi r31,r11,-17592
	ctx.r31.s64 = ctx.r11.s64 + -17592;
	// addi r10,r31,68
	ctx.r10.s64 = ctx.r31.s64 + 68;
	// lwz r11,-17592(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17592);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// ble cr6,0x8212e140
	if (!ctx.cr6.gt) goto loc_8212E140;
	// lis r8,-32249
	ctx.r8.s64 = -2113470464;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r10,-32165
	ctx.r10.s64 = -2107965440;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r27,4
	ctx.r27.s64 = 4;
	// addi r24,r8,-28736
	ctx.r24.s64 = ctx.r8.s64 + -28736;
	// addi r26,r9,-8672
	ctx.r26.s64 = ctx.r9.s64 + -8672;
	// addi r29,r10,-32488
	ctx.r29.s64 = ctx.r10.s64 + -32488;
	// addi r25,r11,-6372
	ctx.r25.s64 = ctx.r11.s64 + -6372;
loc_8212E054:
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r29,24
	ctx.r3.s64 = ctx.r29.s64 + 24;
	// bl 0x822e8280
	ctx.lr = 0x8212E064;
	sub_822E8280(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r9,r31,68
	ctx.r9.s64 = ctx.r31.s64 + 68;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r11,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmpw cr6,r28,r8
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x8212e08c
	if (!ctx.cr6.lt) goto loc_8212E08C;
	// addi r9,r31,100
	ctx.r9.s64 = ctx.r31.s64 + 100;
	// lwzx r8,r11,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwzx r30,r8,r27
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r27.u32);
	// b 0x8212e090
	goto loc_8212E090;
loc_8212E08C:
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
loc_8212E090:
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8212e0d0
	if (ctx.cr6.eq) goto loc_8212E0D0;
loc_8212E0A0:
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// beq cr6,0x8212e0bc
	if (ctx.cr6.eq) goto loc_8212E0BC;
	// lbzu r11,1(r30)
	ea = 1 + ctx.r30.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r30.u32 = ea;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8212e0a0
	if (!ctx.cr6.eq) goto loc_8212E0A0;
	// b 0x8212e0d0
	goto loc_8212E0D0;
loc_8212E0BC:
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r29,24
	ctx.r3.s64 = ctx.r29.s64 + 24;
	// bl 0x822e8280
	ctx.lr = 0x8212E0CC;
	sub_822E8280(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_8212E0D0:
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r31,68
	ctx.r10.s64 = ctx.r31.s64 + 68;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpw cr6,r28,r9
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x8212e0f4
	if (!ctx.cr6.lt) goto loc_8212E0F4;
	// addi r10,r31,100
	ctx.r10.s64 = ctx.r31.s64 + 100;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwzx r5,r9,r27
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r27.u32);
	// b 0x8212e0f8
	goto loc_8212E0F8;
loc_8212E0F4:
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
loc_8212E0F8:
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r29,24
	ctx.r3.s64 = ctx.r29.s64 + 24;
	// bl 0x822e8280
	ctx.lr = 0x8212E104;
	sub_822E8280(ctx, base);
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// bne cr6,0x8212e120
	if (!ctx.cr6.eq) goto loc_8212E120;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r29,24
	ctx.r3.s64 = ctx.r29.s64 + 24;
	// bl 0x822e8280
	ctx.lr = 0x8212E120;
	sub_822E8280(ctx, base);
loc_8212E120:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r31,68
	ctx.r10.s64 = ctx.r31.s64 + 68;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// lwzx r8,r9,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmpw cr6,r28,r8
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x8212e054
	if (ctx.cr6.lt) goto loc_8212E054;
loc_8212E140:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8212E000) {
	__imp__sub_8212E000(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8212E148) {
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
	// bl 0x823dfa98
	ctx.lr = 0x8212E160;
	sub_823DFA98(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8212e180
	if (!ctx.cr6.eq) goto loc_8212E180;
	// bl 0x8212e000
	ctx.lr = 0x8212E16C;
	sub_8212E000(ctx, base);
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
loc_8212E180:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_8212E184:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8212e184
	if (!ctx.cr6.eq) goto loc_8212E184;
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// lis r10,-32165
	ctx.r10.s64 = -2107965440;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,-32488
	ctx.r10.s64 = ctx.r10.s64 + -32488;
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// li r4,256
	ctx.r4.s64 = 256;
	// add r5,r11,r3
	ctx.r5.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r10,24
	ctx.r3.s64 = ctx.r10.s64 + 24;
	// bl 0x822e8280
	ctx.lr = 0x8212E1B8;
	sub_822E8280(ctx, base);
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

PPC_WEAK_FUNC(sub_8212E148) {
	__imp__sub_8212E148(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8212E1CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8212E1CC) {
	__imp__sub_8212E1CC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8212E1D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x8212E1D8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8212e264
	if (ctx.cr6.eq) goto loc_8212E264;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// addi r29,r11,-32488
	ctx.r29.s64 = ctx.r11.s64 + -32488;
	// addi r11,r29,24
	ctx.r11.s64 = ctx.r29.s64 + 24;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_8212E200:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8212e200
	if (!ctx.cr6.eq) goto loc_8212E200;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r31,r11,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x8212e24c
	if (ctx.cr6.eq) goto loc_8212E24C;
	// addi r11,r29,23
	ctx.r11.s64 = ctx.r29.s64 + 23;
	// add r30,r31,r11
	ctx.r30.u64 = ctx.r31.u64 + ctx.r11.u64;
loc_8212E22C:
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x823df9e0
	ctx.lr = 0x8212E238;
	sub_823DF9E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8212e24c
	if (ctx.cr6.eq) goto loc_8212E24C;
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// bne 0x8212e22c
	if (!ctx.cr0.eq) goto loc_8212E22C;
loc_8212E24C:
	// subf r11,r27,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r27.s64;
	// addi r10,r29,24
	ctx.r10.s64 = ctx.r29.s64 + 24;
	// subfic r5,r11,256
	ctx.xer.ca = ctx.r11.u32 <= 256;
	ctx.r5.s64 = 256 - ctx.r11.s64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x822e7e98
	ctx.lr = 0x8212E264;
	sub_822E7E98(ctx, base);
loc_8212E264:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8212E1D0) {
	__imp__sub_8212E1D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8212E26C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8212E26C) {
	__imp__sub_8212E26C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8212E270) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8212E270) {
	__imp__sub_8212E270(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8212E274) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8212E274) {
	__imp__sub_8212E274(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8212E278) {
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
	// bl 0x82123e48
	ctx.lr = 0x8212E28C;
	sub_82123E48(ctx, base);
	// bl 0x822e0220
	ctx.lr = 0x8212E290;
	sub_822E0220(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8212e328
	if (ctx.cr6.eq) goto loc_8212E328;
	// lbz r11,10(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10);
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// bne cr6,0x8212e328
	if (!ctx.cr6.eq) goto loc_8212E328;
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
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// ble cr6,0x8212e2d4
	if (!ctx.cr6.gt) goto loc_8212E2D4;
	// addi r11,r11,100
	ctx.r11.s64 = ctx.r11.s64 + 100;
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r31,4(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x8212e2dc
	goto loc_8212E2DC;
loc_8212E2D4:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r31,r11,-28736
	ctx.r31.s64 = ctx.r11.s64 + -28736;
loc_8212E2DC:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8212e328
	if (ctx.cr6.eq) goto loc_8212E328;
	// li r7,256
	ctx.r7.s64 = 256;
	// lwz r4,60(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,64(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82123d60
	ctx.lr = 0x8212E300;
	sub_82123D60(ctx, base);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_8212E304:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8212e304
	if (!ctx.cr6.eq) goto loc_8212E304;
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8212e1d0
	ctx.lr = 0x8212E328;
	sub_8212E1D0(ctx, base);
loc_8212E328:
	// bl 0x8227d8f0
	ctx.lr = 0x8212E32C;
	sub_8227D8F0(ctx, base);
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

PPC_WEAK_FUNC(sub_8212E278) {
	__imp__sub_8212E278(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8212E340) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8212E348;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32166
	ctx.r10.s64 = -2108030976;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r31,r10,32016
	ctx.r31.s64 = ctx.r10.s64 + 32016;
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// stw r9,1312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1312, ctx.r9.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,-8(r31)
	PPC_STORE_U32(ctx.r31.u32 + -8, ctx.r9.u32);
	// stb r9,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r9.u8);
	// beq cr6,0x8212e3b4
	if (ctx.cr6.eq) goto loc_8212E3B4;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r3,r11,-8856
	ctx.r3.s64 = ctx.r11.s64 + -8856;
	// bl 0x8227db30
	ctx.lr = 0x8212E38C;
	sub_8227DB30(ctx, base);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
loc_8212E394:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8212e394
	if (!ctx.cr6.eq) goto loc_8212E394;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// b 0x8212e3b8
	goto loc_8212E3B8;
loc_8212E3B4:
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
loc_8212E3B8:
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r3,r11,-8856
	ctx.r3.s64 = ctx.r11.s64 + -8856;
	// bl 0x822e33f0
	ctx.lr = 0x8212E3C4;
	sub_822E33F0(ctx, base);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_8212E3C8:
	// lbz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8212e3c8
	if (!ctx.cr6.eq) goto loc_8212E3C8;
	// subf r11,r11,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r11.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8212E340) {
	__imp__sub_8212E340(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8212E3EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8212E3EC) {
	__imp__sub_8212E3EC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8212E3F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf68
	ctx.lr = 0x8212E3F8;
	__savegprlr_24(ctx, base);
	// stwu r1,-448(r1)
	ea = -448 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// bl 0x82123e48
	ctx.lr = 0x8212E404;
	sub_82123E48(ctx, base);
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r31,r11,32013
	ctx.r31.s64 = ctx.r11.s64 + 32013;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// stb r27,3(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3, ctx.r27.u8);
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r3,-9(r31)
	PPC_STORE_U32(ctx.r31.u32 + -9, ctx.r3.u32);
	// stw r27,1315(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1315, ctx.r27.u32);
	// stw r27,-5(r31)
	PPC_STORE_U32(ctx.r31.u32 + -5, ctx.r27.u32);
	// bne cr6,0x8212e444
	if (!ctx.cr6.eq) goto loc_8212E444;
loc_8212E438:
	// bl 0x8227d8f0
	ctx.lr = 0x8212E43C;
	sub_8227D8F0(ctx, base);
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
loc_8212E444:
	// lis r11,-31937
	ctx.r11.s64 = -2093023232;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// addi r26,r11,-17592
	ctx.r26.s64 = ctx.r11.s64 + -17592;
	// addi r10,r26,68
	ctx.r10.s64 = ctx.r26.s64 + 68;
	// lwz r9,-17592(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17592);
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r8,r10
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// cmpwi cr6,r7,1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1, ctx.xer);
	// ble cr6,0x8212e47c
	if (!ctx.cr6.gt) goto loc_8212E47C;
	// bl 0x82125260
	ctx.lr = 0x8212E46C;
	sub_82125260(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x8212e480
	if (!ctx.cr6.eq) goto loc_8212E480;
loc_8212E47C:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_8212E480:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8212e4c4
	if (ctx.cr6.eq) goto loc_8212E4C4;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r10,r26,68
	ctx.r10.s64 = ctx.r26.s64 + 68;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// ble cr6,0x8212e4b8
	if (!ctx.cr6.gt) goto loc_8212E4B8;
	// addi r10,r26,100
	ctx.r10.s64 = ctx.r26.s64 + 100;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x8212e4c0
	goto loc_8212E4C0;
loc_8212E4B8:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r11,r11,-28736
	ctx.r11.s64 = ctx.r11.s64 + -28736;
loc_8212E4C0:
	// stw r11,-9(r31)
	PPC_STORE_U32(ctx.r31.u32 + -9, ctx.r11.u32);
loc_8212E4C4:
	// lis r11,-32167
	ctx.r11.s64 = -2108096512;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r11,-10004(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -10004);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8212e500
	if (!ctx.cr6.eq) goto loc_8212E500;
	// lis r10,-32167
	ctx.r10.s64 = -2108096512;
	// cntlzw r9,r28
	ctx.r9.u64 = ctx.r28.u32 == 0 ? 32 : __builtin_clz(ctx.r28.u32);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// rlwinm r3,r9,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// stb r27,-9536(r10)
	PPC_STORE_U8(ctx.r10.u32 + -9536, ctx.r27.u8);
	// b 0x8212e568
	goto loc_8212E568;
loc_8212E500:
	// lis r29,-32167
	ctx.r29.s64 = -2108096512;
	// li r11,1
	ctx.r11.s64 = 1;
	// cntlzw r10,r28
	ctx.r10.u64 = ctx.r28.u32 == 0 ? 32 : __builtin_clz(ctx.r28.u32);
	// rlwinm r30,r10,27,31,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// stb r11,-9536(r29)
	PPC_STORE_U8(ctx.r29.u32 + -9536, ctx.r11.u8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8212e340
	ctx.lr = 0x8212E51C;
	sub_8212E340(ctx, base);
	// lis r9,-32191
	ctx.r9.s64 = -2109669376;
	// lwz r8,1315(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1315);
	// lwz r11,1352(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1352);
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x8212e56c
	if (!ctx.cr6.gt) goto loc_8212E56C;
	// stb r27,-9536(r29)
	PPC_STORE_U8(ctx.r29.u32 + -9536, ctx.r27.u8);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// bl 0x8212e340
	ctx.lr = 0x8212E548;
	sub_8212E340(ctx, base);
	// lwz r11,1315(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1315);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8212e56c
	if (!ctx.cr6.eq) goto loc_8212E56C;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stb r11,-9536(r29)
	PPC_STORE_U8(ctx.r29.u32 + -9536, ctx.r11.u8);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_8212E568:
	// bl 0x8212e340
	ctx.lr = 0x8212E56C;
	sub_8212E340(ctx, base);
loc_8212E56C:
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r30,r11,-32488
	ctx.r30.s64 = ctx.r11.s64 + -32488;
	// li r5,280
	ctx.r5.s64 = 280;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x823de1f0
	ctx.lr = 0x8212E584;
	sub_823DE1F0(ctx, base);
	// lwz r10,1315(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1315);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8212e5a8
	if (!ctx.cr6.eq) goto loc_8212E5A8;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8212e438
	if (ctx.cr6.eq) goto loc_8212E438;
	// addi r3,r31,3
	ctx.r3.s64 = ctx.r31.s64 + 3;
	// lwz r4,-9(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + -9);
	// li r5,1024
	ctx.r5.s64 = 1024;
	// bl 0x822e7e98
	ctx.lr = 0x8212E5A8;
	sub_822E7E98(ctx, base);
loc_8212E5A8:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x8212e5e0
	if (!ctx.cr6.eq) goto loc_8212E5E0;
	// lwz r11,1315(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1315);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8212e5e0
	if (ctx.cr6.eq) goto loc_8212E5E0;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8212e5d8
	if (ctx.cr6.eq) goto loc_8212E5D8;
	// bl 0x82123f00
	ctx.lr = 0x8212E5CC;
	sub_82123F00(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8212e5e0
	if (!ctx.cr6.eq) goto loc_8212E5E0;
loc_8212E5D8:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// b 0x8212e5e4
	goto loc_8212E5E4;
loc_8212E5E0:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8212E5E4:
	// clrlwi r29,r11,24
	ctx.r29.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r30,24
	ctx.r3.s64 = ctx.r30.s64 + 24;
	// beq cr6,0x8212e610
	if (ctx.cr6.eq) goto loc_8212E610;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r7,r31,3
	ctx.r7.s64 = ctx.r31.s64 + 3;
	// addi r5,r11,-6356
	ctx.r5.s64 = ctx.r11.s64 + -6356;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// bl 0x822e8368
	ctx.lr = 0x8212E60C;
	sub_822E8368(ctx, base);
	// b 0x8212e620
	goto loc_8212E620;
loc_8212E610:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r6,r31,3
	ctx.r6.s64 = ctx.r31.s64 + 3;
	// addi r5,r11,-6360
	ctx.r5.s64 = ctx.r11.s64 + -6360;
	// bl 0x822e8368
	ctx.lr = 0x8212E620;
	sub_822E8368(ctx, base);
loc_8212E620:
	// addi r11,r30,24
	ctx.r11.s64 = ctx.r30.s64 + 24;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_8212E628:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8212e628
	if (!ctx.cr6.eq) goto loc_8212E628;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// lwz r4,-9(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + -9);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x8212e148
	ctx.lr = 0x8212E650;
	sub_8212E148(ctx, base);
	// lwz r11,1315(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1315);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8212e684
	if (!ctx.cr6.eq) goto loc_8212E684;
	// addi r11,r30,24
	ctx.r11.s64 = ctx.r30.s64 + 24;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_8212E664:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8212e664
	if (!ctx.cr6.eq) goto loc_8212E664;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// b 0x8212e784
	goto loc_8212E784;
loc_8212E684:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8212e748
	if (ctx.cr6.eq) goto loc_8212E748;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x8212e720
	if (!ctx.cr6.eq) goto loc_8212E720;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r10,r26,68
	ctx.r10.s64 = ctx.r26.s64 + 68;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8212e704
	if (!ctx.cr6.eq) goto loc_8212E704;
	// addi r11,r30,24
	ctx.r11.s64 = ctx.r30.s64 + 24;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_8212E6B8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8212e6b8
	if (!ctx.cr6.eq) goto loc_8212E6B8;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8212e6ec
	if (ctx.cr6.eq) goto loc_8212E6EC;
	// addi r10,r30,23
	ctx.r10.s64 = ctx.r30.s64 + 23;
	// lbzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,32
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 32, ctx.xer);
	// beq cr6,0x8212e720
	if (ctx.cr6.eq) goto loc_8212E720;
loc_8212E6EC:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r5,r11,-6372
	ctx.r5.s64 = ctx.r11.s64 + -6372;
	// addi r3,r30,24
	ctx.r3.s64 = ctx.r30.s64 + 24;
	// bl 0x822e8280
	ctx.lr = 0x8212E700;
	sub_822E8280(ctx, base);
	// b 0x8212e720
	goto loc_8212E720;
loc_8212E704:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8212e720
	if (!ctx.cr6.eq) goto loc_8212E720;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x8212e720
	if (ctx.cr6.eq) goto loc_8212E720;
	// bl 0x8212e278
	ctx.lr = 0x8212E720;
	sub_8212E278(ctx, base);
loc_8212E720:
	// addi r11,r30,24
	ctx.r11.s64 = ctx.r30.s64 + 24;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_8212E728:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8212e728
	if (!ctx.cr6.eq) goto loc_8212E728;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// b 0x8212e784
	goto loc_8212E784;
loc_8212E748:
	// bl 0x82125230
	ctx.lr = 0x8212E74C;
	sub_82125230(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8212e784
	if (ctx.cr6.eq) goto loc_8212E784;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r5,r30,24
	ctx.r5.s64 = ctx.r30.s64 + 24;
	// addi r4,r11,-6368
	ctx.r4.s64 = ctx.r11.s64 + -6368;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82280900
	ctx.lr = 0x8212E76C;
	sub_82280900(ctx, base);
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// addi r3,r10,-8384
	ctx.r3.s64 = ctx.r10.s64 + -8384;
	// bl 0x8227db30
	ctx.lr = 0x8212E778;
	sub_8227DB30(ctx, base);
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r3,r9,-8384
	ctx.r3.s64 = ctx.r9.s64 + -8384;
	// bl 0x822e33f0
	ctx.lr = 0x8212E784;
	sub_822E33F0(ctx, base);
loc_8212E784:
	// bl 0x8227d8f0
	ctx.lr = 0x8212E788;
	sub_8227D8F0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8212da28
	ctx.lr = 0x8212E794;
	sub_8212DA28(ctx, base);
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8212E3F0) {
	__imp__sub_8212E3F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8212E79C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8212E79C) {
	__imp__sub_8212E79C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8212E7A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// addi r10,r11,-30024
	ctx.r10.s64 = ctx.r11.s64 + -30024;
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cntlzw r9,r11
	ctx.r9.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r9,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8212E7A0) {
	__imp__sub_8212E7A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8212E7B8) {
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
	// cmpwi cr6,r3,154
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 154, ctx.xer);
	// beq cr6,0x8212e7f8
	if (ctx.cr6.eq) goto loc_8212E7F8;
	// cmpwi cr6,r3,183
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 183, ctx.xer);
	// beq cr6,0x8212e7f8
	if (ctx.cr6.eq) goto loc_8212E7F8;
	// bl 0x823dfa20
	ctx.lr = 0x8212E7E0;
	sub_823DFA20(ctx, base);
	// cmpwi cr6,r3,112
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 112, ctx.xer);
	// bne cr6,0x8212e7f0
	if (!ctx.cr6.eq) goto loc_8212E7F0;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne cr6,0x8212e7f8
	if (!ctx.cr6.eq) goto loc_8212E7F8;
loc_8212E7F0:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8212e7fc
	goto loc_8212E7FC;
loc_8212E7F8:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8212E7FC:
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
}

PPC_WEAK_FUNC(sub_8212E7B8) {
	__imp__sub_8212E7B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8212E814) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8212E814) {
	__imp__sub_8212E814(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8212E818) {
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
	// cmpwi cr6,r3,155
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 155, ctx.xer);
	// beq cr6,0x8212e858
	if (ctx.cr6.eq) goto loc_8212E858;
	// cmpwi cr6,r3,189
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 189, ctx.xer);
	// beq cr6,0x8212e858
	if (ctx.cr6.eq) goto loc_8212E858;
	// bl 0x823dfa20
	ctx.lr = 0x8212E840;
	sub_823DFA20(ctx, base);
	// cmpwi cr6,r3,110
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 110, ctx.xer);
	// bne cr6,0x8212e850
	if (!ctx.cr6.eq) goto loc_8212E850;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne cr6,0x8212e858
	if (!ctx.cr6.eq) goto loc_8212E858;
loc_8212E850:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8212e85c
	goto loc_8212E85C;
loc_8212E858:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8212E85C:
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
}

PPC_WEAK_FUNC(sub_8212E818) {
	__imp__sub_8212E818(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8212E874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8212E874) {
	__imp__sub_8212E874(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8212E878) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// mulli r10,r3,3368
	ctx.r10.s64 = ctx.r3.s64 * 3368;
	// addi r11,r11,-32200
	ctx.r11.s64 = ctx.r11.s64 + -32200;
	// addi r9,r11,284
	ctx.r9.s64 = ctx.r11.s64 + 284;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8212E878) {
	__imp__sub_8212E878(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8212E890) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// mulli r10,r3,3368
	ctx.r10.s64 = ctx.r3.s64 * 3368;
	// addi r11,r11,-32200
	ctx.r11.s64 = ctx.r11.s64 + -32200;
	// addi r9,r11,284
	ctx.r9.s64 = ctx.r11.s64 + 284;
	// stwx r4,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r4.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8212E890) {
	__imp__sub_8212E890(ctx, base);
}

