#include "ppc_recomp_shared.h"

PPC_FUNC_IMPL(__imp__sub_82212700) {
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
	// stw r3,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r3.u32);
	// lhz r10,134(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 134);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82212738
	if (!ctx.cr6.eq) goto loc_82212738;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// lhz r9,132(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 132);
	// addi r11,r10,26552
	ctx.r11.s64 = ctx.r10.s64 + 26552;
	// mulli r10,r9,624
	ctx.r10.s64 = ctx.r9.s64 * 624;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x82212748
	goto loc_82212748;
loc_82212738:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x82212744;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_82212748:
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82212760
	if (!ctx.cr6.eq) goto loc_82212760;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,29040
	ctx.r3.s64 = ctx.r11.s64 + 29040;
	// bl 0x822ad350
	ctx.lr = 0x82212760;
	sub_822AD350(ctx, base);
loc_82212760:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822125b8
	ctx.lr = 0x8221276C;
	sub_822125B8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221279c
	if (ctx.cr6.eq) goto loc_8221279C;
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// ori r9,r10,256
	ctx.r9.u64 = ctx.r10.u64 | 256;
	// stw r9,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r9.u32);
	// lwz r8,264(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// addis r3,r8,1
	ctx.r3.s64 = ctx.r8.s64 + 65536;
	// addi r3,r3,-20536
	ctx.r3.s64 = ctx.r3.s64 + -20536;
	// bl 0x822a24e0
	ctx.lr = 0x8221279C;
	sub_822A24E0(ctx, base);
loc_8221279C:
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

PPC_WEAK_FUNC(sub_82212700) {
	__imp__sub_82212700(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822127B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x822127B8;
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
	// bne cr6,0x822127e4
	if (!ctx.cr6.eq) goto loc_822127E4;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// lhz r9,148(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 148);
	// addi r11,r10,26552
	ctx.r11.s64 = ctx.r10.s64 + 26552;
	// mulli r10,r9,624
	ctx.r10.s64 = ctx.r9.s64 * 624;
	// add r29,r10,r11
	ctx.r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x822127f4
	goto loc_822127F4;
loc_822127E4:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x822127F0;
	sub_822AD548(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
loc_822127F4:
	// lwz r11,264(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 264);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8221280c
	if (!ctx.cr6.eq) goto loc_8221280C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,29040
	ctx.r3.s64 = ctx.r11.s64 + 29040;
	// bl 0x822ad350
	ctx.lr = 0x8221280C;
	sub_822AD350(ctx, base);
loc_8221280C:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b2288
	ctx.lr = 0x82212814;
	sub_822B2288(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822b2168
	ctx.lr = 0x82212820;
	sub_822B2168(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x822b2168
	ctx.lr = 0x8221282C;
	sub_822B2168(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82230358
	ctx.lr = 0x82212844;
	sub_82230358(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8221286c
	if (!ctx.cr6.eq) goto loc_8221286C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822a13a0
	ctx.lr = 0x82212854;
	sub_822A13A0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r11,29088
	ctx.r3.s64 = ctx.r11.s64 + 29088;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822e84f0
	ctx.lr = 0x82212868;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x8221286C;
	sub_822AD350(ctx, base);
loc_8221286C:
	// lwz r11,264(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 264);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addis r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 65536;
	// addi r3,r3,-20536
	ctx.r3.s64 = ctx.r3.s64 + -20536;
	// bl 0x822a24e0
	ctx.lr = 0x82212880;
	sub_822A24E0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822127B0) {
	__imp__sub_822127B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82212888) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x82212890;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b2288
	ctx.lr = 0x822128A0;
	sub_822B2288(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x822acb68
	ctx.lr = 0x822128A8;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,2
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// blt cr6,0x822128c0
	if (ctx.cr6.lt) goto loc_822128C0;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822b2168
	ctx.lr = 0x822128B8;
	sub_822B2168(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// b 0x822128c8
	goto loc_822128C8;
loc_822128C0:
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// lhz r28,-25976(r11)
	ctx.r28.u64 = PPC_LOAD_U16(ctx.r11.u32 + -25976);
loc_822128C8:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822300e0
	ctx.lr = 0x822128D8;
	sub_822300E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82212970
	if (!ctx.cr6.eq) goto loc_82212970;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r3,23
	ctx.r3.s64 = 23;
	// addi r4,r11,29192
	ctx.r4.s64 = ctx.r11.s64 + 29192;
	// bl 0x82280900
	ctx.lr = 0x822128F0;
	sub_82280900(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r31,r31,480
	ctx.r31.s64 = ctx.r31.s64 + 480;
	// li r30,31
	ctx.r30.s64 = 31;
	// addi r29,r11,29168
	ctx.r29.s64 = ctx.r11.s64 + 29168;
loc_82212900:
	// lhz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82212944
	if (ctx.cr6.eq) goto loc_82212944;
	// lhz r3,62(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 62);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82212944
	if (ctx.cr6.eq) goto loc_82212944;
	// clrlwi r26,r10,16
	ctx.r26.u64 = ctx.r10.u32 & 0xFFFF;
	// bl 0x822a13a0
	ctx.lr = 0x82212920;
	sub_822A13A0(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8222e3b0
	ctx.lr = 0x8221292C;
	sub_8222E3B0(ctx, base);
	// bl 0x822a13a0
	ctx.lr = 0x82212930;
	sub_822A13A0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,23
	ctx.r3.s64 = 23;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// bl 0x82280900
	ctx.lr = 0x82212944;
	sub_82280900(ctx, base);
loc_82212944:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// bne 0x82212900
	if (!ctx.cr0.eq) goto loc_82212900;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822a13a0
	ctx.lr = 0x82212958;
	sub_822A13A0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r11,29124
	ctx.r3.s64 = ctx.r11.s64 + 29124;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x822e84f0
	ctx.lr = 0x8221296C;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x82212970;
	sub_822AD350(ctx, base);
loc_82212970:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82212888) {
	__imp__sub_82212888(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82212978) {
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
	// lhz r10,118(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 118);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822129bc
	if (!ctx.cr6.eq) goto loc_822129BC;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// lhz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 116);
	// addi r11,r10,26552
	ctx.r11.s64 = ctx.r10.s64 + 26552;
	// mulli r10,r9,624
	ctx.r10.s64 = ctx.r9.s64 * 624;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82212888
	ctx.lr = 0x822129AC;
	sub_82212888(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_822129BC:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x822129C8;
	sub_822AD548(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82212888
	ctx.lr = 0x822129D0;
	sub_82212888(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82212978) {
	__imp__sub_82212978(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822129E0) {
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
	// bne cr6,0x82212a18
	if (!ctx.cr6.eq) goto loc_82212A18;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// lhz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 116);
	// addi r11,r10,26552
	ctx.r11.s64 = ctx.r10.s64 + 26552;
	// mulli r10,r9,624
	ctx.r10.s64 = ctx.r9.s64 * 624;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x82212a28
	goto loc_82212A28;
loc_82212A18:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x82212A24;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_82212A28:
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82212a40
	if (!ctx.cr6.eq) goto loc_82212A40;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,29040
	ctx.r3.s64 = ctx.r11.s64 + 29040;
	// bl 0x822ad350
	ctx.lr = 0x82212A40;
	sub_822AD350(ctx, base);
loc_82212A40:
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// rlwinm r9,r10,0,24,22
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// stw r9,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r9.u32);
	// lwz r8,264(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// addis r3,r8,1
	ctx.r3.s64 = ctx.r8.s64 + 65536;
	// addi r3,r3,-20536
	ctx.r3.s64 = ctx.r3.s64 + -20536;
	// bl 0x822a24e0
	ctx.lr = 0x82212A64;
	sub_822A24E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82212888
	ctx.lr = 0x82212A6C;
	sub_82212888(ctx, base);
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

PPC_WEAK_FUNC(sub_822129E0) {
	__imp__sub_822129E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82212A80) {
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
	// bne cr6,0x82212ab8
	if (!ctx.cr6.eq) goto loc_82212AB8;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// lhz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 116);
	// addi r11,r10,26552
	ctx.r11.s64 = ctx.r10.s64 + 26552;
	// mulli r10,r9,624
	ctx.r10.s64 = ctx.r9.s64 * 624;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x82212ac8
	goto loc_82212AC8;
loc_82212AB8:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x82212AC4;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_82212AC8:
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82212af4
	if (ctx.cr6.eq) goto loc_82212AF4;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r9,r10,0,24,22
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// stw r9,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r9.u32);
	// lwz r8,264(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// addis r3,r8,1
	ctx.r3.s64 = ctx.r8.s64 + 65536;
	// addi r3,r3,-20536
	ctx.r3.s64 = ctx.r3.s64 + -20536;
	// bl 0x822a24e0
	ctx.lr = 0x82212AF4;
	sub_822A24E0(ctx, base);
loc_82212AF4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82230408
	ctx.lr = 0x82212AFC;
	sub_82230408(ctx, base);
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

PPC_WEAK_FUNC(sub_82212A80) {
	__imp__sub_82212A80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82212B10) {
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
	// lhz r10,118(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 118);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82212b44
	if (!ctx.cr6.eq) goto loc_82212B44;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// lhz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 116);
	// addi r11,r10,26552
	ctx.r11.s64 = ctx.r10.s64 + 26552;
	// mulli r10,r9,624
	ctx.r10.s64 = ctx.r9.s64 * 624;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x82212b54
	goto loc_82212B54;
loc_82212B44:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x82212B50;
	sub_822AD548(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
loc_82212B54:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,480
	ctx.r11.s64 = ctx.r11.s64 + 480;
loc_82212B5C:
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82212b78
	if (ctx.cr6.eq) goto loc_82212B78;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// cmpwi cr6,r3,31
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 31, ctx.xer);
	// blt cr6,0x82212b5c
	if (ctx.cr6.lt) goto loc_82212B5C;
loc_82212B78:
	// bl 0x822acbf8
	ctx.lr = 0x82212B7C;
	sub_822ACBF8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82212B10) {
	__imp__sub_82212B10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82212B8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82212B8C) {
	__imp__sub_82212B8C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82212B90) {
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
	// bne cr6,0x82212bcc
	if (!ctx.cr6.eq) goto loc_82212BCC;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// lhz r9,132(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 132);
	// addi r11,r10,26552
	ctx.r11.s64 = ctx.r10.s64 + 26552;
	// mulli r10,r9,624
	ctx.r10.s64 = ctx.r9.s64 * 624;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x82212bdc
	goto loc_82212BDC;
loc_82212BCC:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x82212BD8;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_82212BDC:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b1c50
	ctx.lr = 0x82212BE4;
	sub_822B1C50(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 31, ctx.xer);
	// bge cr6,0x82212c04
	if (!ctx.cr6.lt) goto loc_82212C04;
	// addi r11,r3,240
	ctx.r11.s64 = ctx.r3.s64 + 240;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r9,r10,r31
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r31.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82212c14
	if (!ctx.cr6.eq) goto loc_82212C14;
loc_82212C04:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,29216
	ctx.r4.s64 = ctx.r11.s64 + 29216;
	// bl 0x822ad4e0
	ctx.lr = 0x82212C14;
	sub_822AD4E0(ctx, base);
loc_82212C14:
	// addi r11,r30,240
	ctx.r11.s64 = ctx.r30.s64 + 240;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r3,r10,r31
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r31.u32);
	// bl 0x8222e3b0
	ctx.lr = 0x82212C24;
	sub_8222E3B0(ctx, base);
	// bl 0x822acff0
	ctx.lr = 0x82212C28;
	sub_822ACFF0(ctx, base);
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

PPC_WEAK_FUNC(sub_82212B90) {
	__imp__sub_82212B90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82212C40) {
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
	// bne cr6,0x82212c7c
	if (!ctx.cr6.eq) goto loc_82212C7C;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// lhz r9,132(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 132);
	// addi r11,r10,26552
	ctx.r11.s64 = ctx.r10.s64 + 26552;
	// mulli r10,r9,624
	ctx.r10.s64 = ctx.r9.s64 * 624;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x82212c8c
	goto loc_82212C8C;
loc_82212C7C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x82212C88;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_82212C8C:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b1c50
	ctx.lr = 0x82212C94;
	sub_822B1C50(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 31, ctx.xer);
	// bge cr6,0x82212cb4
	if (!ctx.cr6.lt) goto loc_82212CB4;
	// addi r11,r3,240
	ctx.r11.s64 = ctx.r3.s64 + 240;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r9,r10,r31
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r31.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82212cc4
	if (!ctx.cr6.eq) goto loc_82212CC4;
loc_82212CB4:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,29216
	ctx.r4.s64 = ctx.r11.s64 + 29216;
	// bl 0x822ad4e0
	ctx.lr = 0x82212CC4;
	sub_822AD4E0(ctx, base);
loc_82212CC4:
	// addi r11,r30,271
	ctx.r11.s64 = ctx.r30.s64 + 271;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r3,r10,r31
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r31.u32);
	// bl 0x822acff0
	ctx.lr = 0x82212CD4;
	sub_822ACFF0(ctx, base);
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

PPC_WEAK_FUNC(sub_82212C40) {
	__imp__sub_82212C40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82212CEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82212CEC) {
	__imp__sub_82212CEC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82212CF0) {
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
	// bne cr6,0x82212d2c
	if (!ctx.cr6.eq) goto loc_82212D2C;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// lhz r9,132(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 132);
	// addi r11,r10,26552
	ctx.r11.s64 = ctx.r10.s64 + 26552;
	// mulli r10,r9,624
	ctx.r10.s64 = ctx.r9.s64 * 624;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x82212d3c
	goto loc_82212D3C;
loc_82212D2C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x82212D38;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_82212D3C:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b1c50
	ctx.lr = 0x82212D44;
	sub_822B1C50(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 31, ctx.xer);
	// bge cr6,0x82212d64
	if (!ctx.cr6.lt) goto loc_82212D64;
	// addi r11,r3,240
	ctx.r11.s64 = ctx.r3.s64 + 240;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r9,r10,r31
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r31.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82212d74
	if (!ctx.cr6.eq) goto loc_82212D74;
loc_82212D64:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,29216
	ctx.r4.s64 = ctx.r11.s64 + 29216;
	// bl 0x822ad4e0
	ctx.lr = 0x82212D74;
	sub_822AD4E0(ctx, base);
loc_82212D74:
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r10,304(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	// slw r9,r11,r30
	ctx.r9.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r30.u8 & 0x3F));
	// and r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 & ctx.r9.u64;
	// addic r7,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r7.s64 = ctx.r8.s64 + -1;
	// subfe r3,r7,r8
	temp.u8 = (~ctx.r7.u32 + ctx.r8.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r7.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// bl 0x822acb78
	ctx.lr = 0x82212D90;
	sub_822ACB78(ctx, base);
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

PPC_WEAK_FUNC(sub_82212CF0) {
	__imp__sub_82212CF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82212DA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82212DB0;
	__savegprlr_28(ctx, base);
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
	// bne cr6,0x82212ddc
	if (!ctx.cr6.eq) goto loc_82212DDC;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// lhz r9,164(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 164);
	// addi r11,r10,26552
	ctx.r11.s64 = ctx.r10.s64 + 26552;
	// mulli r10,r9,624
	ctx.r10.s64 = ctx.r9.s64 * 624;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x82212dec
	goto loc_82212DEC;
loc_82212DDC:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x82212DE8;
	sub_822AD548(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82212DEC:
	// bl 0x822846c0
	ctx.lr = 0x82212DF0;
	sub_822846C0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82212e08
	if (!ctx.cr6.eq) goto loc_82212E08;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,29312
	ctx.r3.s64 = ctx.r11.s64 + 29312;
	// bl 0x822ad350
	ctx.lr = 0x82212E08;
	sub_822AD350(ctx, base);
loc_82212E08:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b2168
	ctx.lr = 0x82212E10;
	sub_822B2168(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x822acb68
	ctx.lr = 0x82212E18;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x82212e54
	if (!ctx.cr6.eq) goto loc_82212E54;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822efea0
	ctx.lr = 0x82212E2C;
	sub_822EFEA0(ctx, base);
	// clrlwi r31,r3,24
	ctx.r31.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r31,255
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 255, ctx.xer);
	// bne cr6,0x82212e9c
	if (!ctx.cr6.eq) goto loc_82212E9C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822a13a0
	ctx.lr = 0x82212E40;
	sub_822A13A0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,29272
	ctx.r3.s64 = ctx.r11.s64 + 29272;
	// bl 0x822e84f0
	ctx.lr = 0x82212E50;
	sub_822E84F0(ctx, base);
	// b 0x82212e98
	goto loc_82212E98;
loc_82212E54:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822b2288
	ctx.lr = 0x82212E5C;
	sub_822B2288(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822f0170
	ctx.lr = 0x82212E70;
	sub_822F0170(ctx, base);
	// clrlwi r31,r3,24
	ctx.r31.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r31,255
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 255, ctx.xer);
	// bne cr6,0x82212e9c
	if (!ctx.cr6.eq) goto loc_82212E9C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822a13a0
	ctx.lr = 0x82212E84;
	sub_822A13A0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,29228
	ctx.r3.s64 = ctx.r11.s64 + 29228;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x822e84f0
	ctx.lr = 0x82212E98;
	sub_822E84F0(ctx, base);
loc_82212E98:
	// bl 0x822ad350
	ctx.lr = 0x82212E9C;
	sub_822AD350(ctx, base);
loc_82212E9C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822f2368
	ctx.lr = 0x82212EA8;
	sub_822F2368(ctx, base);
	// srawi r10,r31,5
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r31.s32 >> 5;
	// lis r9,-32191
	ctx.r9.s64 = -2109669376;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r9,17280
	ctx.r8.s64 = ctx.r9.s64 + 17280;
	// rlwinm r7,r31,2,25,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0x7C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwzx r6,r10,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwzx r5,r7,r8
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// or r9,r5,r6
	ctx.r9.u64 = ctx.r5.u64 | ctx.r6.u64;
	// stwx r9,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
	// bl 0x822f0330
	ctx.lr = 0x82212EDC;
	sub_822F0330(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82212DA8) {
	__imp__sub_82212DA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82212EE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82212EE4) {
	__imp__sub_82212EE4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82212EE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x82212EF0;
	__savegprlr_27(ctx, base);
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
	// bne cr6,0x82212f1c
	if (!ctx.cr6.eq) goto loc_82212F1C;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// lhz r9,180(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 180);
	// addi r11,r10,26552
	ctx.r11.s64 = ctx.r10.s64 + 26552;
	// mulli r10,r9,624
	ctx.r10.s64 = ctx.r9.s64 * 624;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x82212f2c
	goto loc_82212F2C;
loc_82212F1C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x82212F28;
	sub_822AD548(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82212F2C:
	// bl 0x822846c0
	ctx.lr = 0x82212F30;
	sub_822846C0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82212f48
	if (!ctx.cr6.eq) goto loc_82212F48;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,29312
	ctx.r3.s64 = ctx.r11.s64 + 29312;
	// bl 0x822ad350
	ctx.lr = 0x82212F48;
	sub_822AD350(ctx, base);
loc_82212F48:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b2168
	ctx.lr = 0x82212F50;
	sub_822B2168(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x822acb68
	ctx.lr = 0x82212F58;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,2
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// bne cr6,0x82212f70
	if (!ctx.cr6.eq) goto loc_82212F70;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822b2288
	ctx.lr = 0x82212F68;
	sub_822B2288(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// b 0x82212f74
	goto loc_82212F74;
loc_82212F70:
	// li r27,0
	ctx.r27.s64 = 0;
loc_82212F74:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822f2368
	ctx.lr = 0x82212F80;
	sub_822F2368(ctx, base);
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r3,254
	ctx.r3.s64 = 254;
	// addi r29,r11,17280
	ctx.r29.s64 = ctx.r11.s64 + 17280;
loc_82212F90:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82212fb0
	if (ctx.cr6.eq) goto loc_82212FB0;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822effb0
	ctx.lr = 0x82212FAC;
	sub_822EFFB0(ctx, base);
	// b 0x82212fc0
	goto loc_82212FC0;
loc_82212FB0:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822eff18
	ctx.lr = 0x82212FC0;
	sub_822EFF18(ctx, base);
loc_82212FC0:
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,255
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 255, ctx.xer);
	// beq cr6,0x82212ff4
	if (ctx.cr6.eq) goto loc_82212FF4;
	// srawi r10,r9,5
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 5;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r9,2,25,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0x7C;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lwzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwzx r7,r9,r29
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r29.u32);
	// or r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 | ctx.r8.u64;
	// stwx r6,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r6.u32);
	// b 0x82212f90
	goto loc_82212F90;
loc_82212FF4:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8221303c
	if (!ctx.cr6.eq) goto loc_8221303C;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// beq cr6,0x82213024
	if (ctx.cr6.eq) goto loc_82213024;
	// bl 0x822a13a0
	ctx.lr = 0x8221300C;
	sub_822A13A0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,29228
	ctx.r3.s64 = ctx.r11.s64 + 29228;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x822e84f0
	ctx.lr = 0x82213020;
	sub_822E84F0(ctx, base);
	// b 0x82213038
	goto loc_82213038;
loc_82213024:
	// bl 0x822a13a0
	ctx.lr = 0x82213028;
	sub_822A13A0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,29272
	ctx.r3.s64 = ctx.r11.s64 + 29272;
	// bl 0x822e84f0
	ctx.lr = 0x82213038;
	sub_822E84F0(ctx, base);
loc_82213038:
	// bl 0x822ad350
	ctx.lr = 0x8221303C;
	sub_822AD350(ctx, base);
loc_8221303C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822f0330
	ctx.lr = 0x82213048;
	sub_822F0330(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82212EE8) {
	__imp__sub_82212EE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82213050) {
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
	// bne cr6,0x82213088
	if (!ctx.cr6.eq) goto loc_82213088;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// lhz r9,148(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 148);
	// addi r11,r10,26552
	ctx.r11.s64 = ctx.r10.s64 + 26552;
	// mulli r10,r9,624
	ctx.r10.s64 = ctx.r9.s64 * 624;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x82213098
	goto loc_82213098;
loc_82213088:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x82213094;
	sub_822AD548(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82213098:
	// bl 0x822846c0
	ctx.lr = 0x8221309C;
	sub_822846C0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822130b4
	if (!ctx.cr6.eq) goto loc_822130B4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,29312
	ctx.r3.s64 = ctx.r11.s64 + 29312;
	// bl 0x822ad350
	ctx.lr = 0x822130B4;
	sub_822AD350(ctx, base);
loc_822130B4:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r11,-1
	ctx.r11.s64 = -1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r11,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// std r11,16(r10)
	PPC_STORE_U64(ctx.r10.u32 + 16, ctx.r11.u64);
	// bl 0x822f0330
	ctx.lr = 0x822130D4;
	sub_822F0330(ctx, base);
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

PPC_WEAK_FUNC(sub_82213050) {
	__imp__sub_82213050(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822130E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x822130F0;
	__savegprlr_28(ctx, base);
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
	// bne cr6,0x8221311c
	if (!ctx.cr6.eq) goto loc_8221311C;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// lhz r9,164(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 164);
	// addi r11,r10,26552
	ctx.r11.s64 = ctx.r10.s64 + 26552;
	// mulli r10,r9,624
	ctx.r10.s64 = ctx.r9.s64 * 624;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x8221312c
	goto loc_8221312C;
loc_8221311C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x82213128;
	sub_822AD548(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_8221312C:
	// bl 0x822846c0
	ctx.lr = 0x82213130;
	sub_822846C0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82213148
	if (!ctx.cr6.eq) goto loc_82213148;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,29312
	ctx.r3.s64 = ctx.r11.s64 + 29312;
	// bl 0x822ad350
	ctx.lr = 0x82213148;
	sub_822AD350(ctx, base);
loc_82213148:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b2168
	ctx.lr = 0x82213150;
	sub_822B2168(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x822acb68
	ctx.lr = 0x82213158;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x82213194
	if (!ctx.cr6.eq) goto loc_82213194;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822efea0
	ctx.lr = 0x8221316C;
	sub_822EFEA0(ctx, base);
	// clrlwi r31,r3,24
	ctx.r31.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r31,255
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 255, ctx.xer);
	// bne cr6,0x822131dc
	if (!ctx.cr6.eq) goto loc_822131DC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822a13a0
	ctx.lr = 0x82213180;
	sub_822A13A0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,29272
	ctx.r3.s64 = ctx.r11.s64 + 29272;
	// bl 0x822e84f0
	ctx.lr = 0x82213190;
	sub_822E84F0(ctx, base);
	// b 0x822131d8
	goto loc_822131D8;
loc_82213194:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822b2288
	ctx.lr = 0x8221319C;
	sub_822B2288(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822f0170
	ctx.lr = 0x822131B0;
	sub_822F0170(ctx, base);
	// clrlwi r31,r3,24
	ctx.r31.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r31,255
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 255, ctx.xer);
	// bne cr6,0x822131dc
	if (!ctx.cr6.eq) goto loc_822131DC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822a13a0
	ctx.lr = 0x822131C4;
	sub_822A13A0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,29228
	ctx.r3.s64 = ctx.r11.s64 + 29228;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x822e84f0
	ctx.lr = 0x822131D8;
	sub_822E84F0(ctx, base);
loc_822131D8:
	// bl 0x822ad350
	ctx.lr = 0x822131DC;
	sub_822AD350(ctx, base);
loc_822131DC:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822f2368
	ctx.lr = 0x822131E8;
	sub_822F2368(ctx, base);
	// srawi r10,r31,5
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r31.s32 >> 5;
	// lis r9,-32191
	ctx.r9.s64 = -2109669376;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r9,17280
	ctx.r8.s64 = ctx.r9.s64 + 17280;
	// rlwinm r7,r31,2,25,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0x7C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwzx r6,r10,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwzx r5,r7,r8
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// andc r9,r6,r5
	ctx.r9.u64 = ctx.r6.u64 & ~ctx.r5.u64;
	// stwx r9,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
	// bl 0x822f0330
	ctx.lr = 0x8221321C;
	sub_822F0330(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822130E8) {
	__imp__sub_822130E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82213224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82213224) {
	__imp__sub_82213224(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82213228) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r3.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// lhz r10,150(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 150);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82213268
	if (!ctx.cr6.eq) goto loc_82213268;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// lhz r9,148(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 148);
	// addi r11,r10,26552
	ctx.r11.s64 = ctx.r10.s64 + 26552;
	// mulli r10,r9,624
	ctx.r10.s64 = ctx.r9.s64 * 624;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x82213278
	goto loc_82213278;
loc_82213268:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x82213274;
	sub_822AD548(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82213278:
	// bl 0x822846c0
	ctx.lr = 0x8221327C;
	sub_822846C0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82213294
	if (!ctx.cr6.eq) goto loc_82213294;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,29312
	ctx.r3.s64 = ctx.r11.s64 + 29312;
	// bl 0x822ad350
	ctx.lr = 0x82213294;
	sub_822AD350(ctx, base);
loc_82213294:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// std r30,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r30.u64);
	// std r30,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r30.u64);
	// std r30,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r30.u64);
	// bl 0x822f0330
	ctx.lr = 0x822132B0;
	sub_822F0330(ctx, base);
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

PPC_WEAK_FUNC(sub_82213228) {
	__imp__sub_82213228(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822132C8) {
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
	// bl 0x8220ed70
	ctx.lr = 0x822132DC;
	sub_8220ED70(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b1fb0
	ctx.lr = 0x822132E8;
	sub_822B1FB0(ctx, base);
	// lis r10,0
	ctx.r10.s64 = 0;
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// ori r10,r10,44332
	ctx.r10.u64 = ctx.r10.u64 | 44332;
	// stfsx f1,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, temp.u32);
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

PPC_WEAK_FUNC(sub_822132C8) {
	__imp__sub_822132C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221330C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8221330C) {
	__imp__sub_8221330C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82213310) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x82213318;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r3,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r3.u32);
	// lhz r9,182(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 182);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// addi r30,r11,-17496
	ctx.r30.s64 = ctx.r11.s64 + -17496;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82213350
	if (!ctx.cr6.eq) goto loc_82213350;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// lhz r9,180(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 180);
	// addi r11,r10,26552
	ctx.r11.s64 = ctx.r10.s64 + 26552;
	// mulli r10,r9,624
	ctx.r10.s64 = ctx.r9.s64 * 624;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x8221335c
	goto loc_8221335C;
loc_82213350:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822ad548
	ctx.lr = 0x82213358;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_8221335C:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b28d0
	ctx.lr = 0x82213364;
	sub_822B28D0(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x8221337c
	if (!ctx.cr6.eq) goto loc_8221337C;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b29b0
	ctx.lr = 0x82213374;
	sub_822B29B0(ctx, base);
	// cmpwi cr6,r3,22
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 22, ctx.xer);
	// beq cr6,0x82213388
	if (ctx.cr6.eq) goto loc_82213388;
loc_8221337C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822ad4e0
	ctx.lr = 0x82213388;
	sub_822AD4E0(ctx, base);
loc_82213388:
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822133a4
	if (ctx.cr6.eq) goto loc_822133A4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,29616
	ctx.r4.s64 = ctx.r11.s64 + 29616;
	// bl 0x822ad4e0
	ctx.lr = 0x822133A4;
	sub_822AD4E0(ctx, base);
loc_822133A4:
	// lwz r11,312(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// rlwinm r10,r11,0,20,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x822133e0
	if (!ctx.cr6.eq) goto loc_822133E0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222fc90
	ctx.lr = 0x822133BC;
	sub_8222FC90(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lhz r3,292(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 292);
	// bl 0x822a13a0
	ctx.lr = 0x822133C8;
	sub_822A13A0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,29544
	ctx.r3.s64 = ctx.r11.s64 + 29544;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x822e84f0
	ctx.lr = 0x822133DC;
	sub_822E84F0(ctx, base);
	// bl 0x822ad548
	ctx.lr = 0x822133E0;
	sub_822AD548(ctx, base);
loc_822133E0:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82229bf0
	ctx.lr = 0x822133E8;
	sub_82229BF0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x822acb68
	ctx.lr = 0x822133F0;
	sub_822ACB68(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// blt cr6,0x8221351c
	if (ctx.cr6.lt) goto loc_8221351C;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822b2168
	ctx.lr = 0x82213408;
	sub_822B2168(ctx, base);
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// cmpwi cr6,r28,2
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 2, ctx.xer);
	// lhz r10,-25976(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + -25976);
	// subf r9,r3,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r3.s64;
	// subfic r8,r9,0
	ctx.xer.ca = ctx.r9.u32 <= 0;
	ctx.r8.s64 = 0 - ctx.r9.s64;
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r29,r6,r3
	ctx.r29.u64 = ctx.r6.u64 & ctx.r3.u64;
	// ble cr6,0x8221351c
	if (!ctx.cr6.gt) goto loc_8221351C;
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8221351c
	if (!ctx.cr6.eq) goto loc_8221351C;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x822b2498
	ctx.lr = 0x82213440;
	sub_822B2498(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x822b2498
	ctx.lr = 0x8221344C;
	sub_822B2498(ctx, base);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82234080
	ctx.lr = 0x82213464;
	sub_82234080(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82213514
	if (!ctx.cr6.eq) goto loc_82213514;
loc_8221346C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8233d878
	ctx.lr = 0x82213474;
	sub_8233D878(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822134b4
	if (!ctx.cr6.eq) goto loc_822134B4;
	// lhz r11,604(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 604);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82213494
	if (!ctx.cr6.eq) goto loc_82213494;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,29496
	ctx.r3.s64 = ctx.r11.s64 + 29496;
	// bl 0x822ad350
	ctx.lr = 0x82213494;
	sub_822AD350(ctx, base);
loc_82213494:
	// lhz r3,604(r30)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r30.u32 + 604);
	// bl 0x8222e3b0
	ctx.lr = 0x8221349C;
	sub_8222E3B0(ctx, base);
	// bl 0x822a13a0
	ctx.lr = 0x822134A0;
	sub_822A13A0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,29436
	ctx.r3.s64 = ctx.r11.s64 + 29436;
	// bl 0x822e84f0
	ctx.lr = 0x822134B0;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x822134B4;
	sub_822AD350(ctx, base);
loc_822134B4:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82213508
	if (ctx.cr6.eq) goto loc_82213508;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8233d278
	ctx.lr = 0x822134C8;
	sub_8233D278(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x82213508
	if (!ctx.cr6.lt) goto loc_82213508;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8233cf18
	ctx.lr = 0x822134D8;
	sub_8233CF18(ctx, base);
	// lhz r3,604(r30)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r30.u32 + 604);
	// bl 0x8222e3b0
	ctx.lr = 0x822134E0;
	sub_8222E3B0(ctx, base);
	// bl 0x822a13a0
	ctx.lr = 0x822134E4;
	sub_822A13A0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822a13a0
	ctx.lr = 0x822134F0;
	sub_822A13A0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,29360
	ctx.r3.s64 = ctx.r11.s64 + 29360;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x822e84f0
	ctx.lr = 0x82213504;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x82213508;
	sub_822AD350(ctx, base);
loc_82213508:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,29332
	ctx.r3.s64 = ctx.r11.s64 + 29332;
	// bl 0x822ad350
	ctx.lr = 0x82213514;
	sub_822AD350(ctx, base);
loc_82213514:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_8221351C:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82233ff0
	ctx.lr = 0x8221352C;
	sub_82233FF0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8221346c
	if (ctx.cr6.eq) goto loc_8221346C;
	// lwz r11,468(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 468);
	// li r10,1
	ctx.r10.s64 = 1;
	// clrlwi r30,r27,24
	ctx.r30.u64 = ctx.r27.u32 & 0xFF;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stb r27,10(r11)
	PPC_STORE_U8(ctx.r11.u32 + 10, ctx.r27.u8);
	// lwz r8,468(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 468);
	// stb r10,11(r8)
	PPC_STORE_U8(ctx.r8.u32 + 11, ctx.r10.u8);
	// lwz r7,468(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 468);
	// stb r9,12(r7)
	PPC_STORE_U8(ctx.r7.u32 + 12, ctx.r9.u8);
	// beq cr6,0x82213514
	if (ctx.cr6.eq) goto loc_82213514;
	// cmpwi cr6,r28,2
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 2, ctx.xer);
	// ble cr6,0x82213580
	if (!ctx.cr6.gt) goto loc_82213580;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x822b1c50
	ctx.lr = 0x82213570;
	sub_822B1C50(ctx, base);
	// lwz r11,468(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 468);
	// addic r10,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r10.s64 = ctx.r3.s64 + -1;
	// subfe r9,r10,r3
	temp.u8 = (~ctx.r10.u32 + ctx.r3.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stb r9,11(r11)
	PPC_STORE_U8(ctx.r11.u32 + 11, ctx.r9.u8);
loc_82213580:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82213514
	if (ctx.cr6.eq) goto loc_82213514;
	// lwz r11,268(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221359c
	if (ctx.cr6.eq) goto loc_8221359C;
	// li r10,9
	ctx.r10.s64 = 9;
	// stw r10,3416(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3416, ctx.r10.u32);
loc_8221359C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82213514
	if (ctx.cr6.eq) goto loc_82213514;
	// cmpwi cr6,r28,3
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 3, ctx.xer);
	// ble cr6,0x82213514
	if (!ctx.cr6.gt) goto loc_82213514;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x822b1c50
	ctx.lr = 0x822135B4;
	sub_822B1C50(ctx, base);
	// lwz r11,468(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 468);
	// addic r10,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r10.s64 = ctx.r3.s64 + -1;
	// subfe r9,r10,r3
	temp.u8 = (~ctx.r10.u32 + ctx.r3.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stb r9,12(r11)
	PPC_STORE_U8(ctx.r11.u32 + 12, ctx.r9.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82213310) {
	__imp__sub_82213310(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822135CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822135CC) {
	__imp__sub_822135CC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822135D0) {
	PPC_FUNC_PROLOGUE();
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82213310
	sub_82213310(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822135D0) {
	__imp__sub_822135D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822135D8) {
	PPC_FUNC_PROLOGUE();
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x82213310
	sub_82213310(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822135D8) {
	__imp__sub_822135D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822135E0) {
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
	// bne cr6,0x82213618
	if (!ctx.cr6.eq) goto loc_82213618;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// lhz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 116);
	// addi r11,r10,26552
	ctx.r11.s64 = ctx.r10.s64 + 26552;
	// mulli r10,r9,624
	ctx.r10.s64 = ctx.r9.s64 * 624;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x82213628
	goto loc_82213628;
loc_82213618:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x82213624;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_82213628:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822340e0
	ctx.lr = 0x82213630;
	sub_822340E0(ctx, base);
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82213678
	if (ctx.cr6.eq) goto loc_82213678;
	// lis r10,0
	ctx.r10.s64 = 0;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// ori r8,r10,44468
	ctx.r8.u64 = ctx.r10.u64 | 44468;
	// lfs f0,5484(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r11,r8
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, temp.u32);
	// lwz r7,264(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// addis r6,r7,1
	ctx.r6.s64 = ctx.r7.s64 + 65536;
	// addi r6,r6,-21164
	ctx.r6.s64 = ctx.r6.s64 + -21164;
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// rlwinm r4,r5,0,30,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// stw r4,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r4.u32);
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// lwz r3,20(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// rlwinm r10,r3,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
loc_82213678:
	// lwz r11,268(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82213698
	if (ctx.cr6.eq) goto loc_82213698;
	// lwz r10,3416(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3416);
	// cmpwi cr6,r10,9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 9, ctx.xer);
	// bne cr6,0x82213698
	if (!ctx.cr6.eq) goto loc_82213698;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,3416(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3416, ctx.r10.u32);
loc_82213698:
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

PPC_WEAK_FUNC(sub_822135E0) {
	__imp__sub_822135E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822136AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822136AC) {
	__imp__sub_822136AC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822136B0) {
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
	// lhz r10,118(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 118);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822136e4
	if (!ctx.cr6.eq) goto loc_822136E4;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// lhz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 116);
	// addi r11,r10,26552
	ctx.r11.s64 = ctx.r10.s64 + 26552;
	// mulli r10,r9,624
	ctx.r10.s64 = ctx.r9.s64 * 624;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x822136f4
	goto loc_822136F4;
loc_822136E4:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x822136F0;
	sub_822AD548(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_822136F4:
	// bl 0x82232b28
	ctx.lr = 0x822136F8;
	sub_82232B28(ctx, base);
	// bl 0x822acb78
	ctx.lr = 0x822136FC;
	sub_822ACB78(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822136B0) {
	__imp__sub_822136B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221370C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8221370C) {
	__imp__sub_8221370C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82213710) {
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
	// bne cr6,0x8221374c
	if (!ctx.cr6.eq) goto loc_8221374C;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// lhz r9,132(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 132);
	// addi r11,r10,26552
	ctx.r11.s64 = ctx.r10.s64 + 26552;
	// mulli r10,r9,624
	ctx.r10.s64 = ctx.r9.s64 * 624;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x8221375c
	goto loc_8221375C;
loc_8221374C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x82213758;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_8221375C:
	// lwz r11,312(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// rlwinm r10,r11,0,20,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82213778
	if (ctx.cr6.eq) goto loc_82213778;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,29744
	ctx.r3.s64 = ctx.r11.s64 + 29744;
	// bl 0x822ad548
	ctx.lr = 0x82213778;
	sub_822AD548(ctx, base);
loc_82213778:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82213790
	if (!ctx.cr6.eq) goto loc_82213790;
	// lbz r11,288(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 288);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822137bc
	if (ctx.cr6.eq) goto loc_822137BC;
loc_82213790:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222fc90
	ctx.lr = 0x82213798;
	sub_8222FC90(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lhz r3,292(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 292);
	// bl 0x822a13a0
	ctx.lr = 0x822137A4;
	sub_822A13A0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,29664
	ctx.r3.s64 = ctx.r11.s64 + 29664;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x822e84f0
	ctx.lr = 0x822137B8;
	sub_822E84F0(ctx, base);
	// bl 0x822ad548
	ctx.lr = 0x822137BC;
	sub_822AD548(ctx, base);
loc_822137BC:
	// lwz r11,312(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// ori r10,r11,2048
	ctx.r10.u64 = ctx.r11.u64 | 2048;
	// stw r10,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r10.u32);
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

PPC_WEAK_FUNC(sub_82213710) {
	__imp__sub_82213710(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822137E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf68
	ctx.lr = 0x822137E8;
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
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r3,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r3.u32);
	// lhz r9,198(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 198);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r31,r11,-17496
	ctx.r31.s64 = ctx.r11.s64 + -17496;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8221382c
	if (!ctx.cr6.eq) goto loc_8221382C;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// lhz r9,196(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 196);
	// addi r11,r10,26552
	ctx.r11.s64 = ctx.r10.s64 + 26552;
	// mulli r10,r9,624
	ctx.r10.s64 = ctx.r9.s64 * 624;
	// add r24,r10,r11
	ctx.r24.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x82213838
	goto loc_82213838;
loc_8221382C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822ad548
	ctx.lr = 0x82213834;
	sub_822AD548(ctx, base);
	// mr r24,r27
	ctx.r24.u64 = ctx.r27.u64;
loc_82213838:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b28d0
	ctx.lr = 0x82213840;
	sub_822B28D0(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x82213858
	if (!ctx.cr6.eq) goto loc_82213858;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b29b0
	ctx.lr = 0x82213850;
	sub_822B29B0(ctx, base);
	// cmpwi cr6,r3,22
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 22, ctx.xer);
	// beq cr6,0x82213864
	if (ctx.cr6.eq) goto loc_82213864;
loc_82213858:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822ad4e0
	ctx.lr = 0x82213864;
	sub_822AD4E0(ctx, base);
loc_82213864:
	// lwz r11,264(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 264);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8221387c
	if (!ctx.cr6.eq) goto loc_8221387C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,29848
	ctx.r3.s64 = ctx.r11.s64 + 29848;
	// bl 0x822ad548
	ctx.lr = 0x8221387C;
	sub_822AD548(ctx, base);
loc_8221387C:
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r31,264(r24)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r24.u32 + 264);
	// bl 0x82229bf0
	ctx.lr = 0x82213888;
	sub_82229BF0(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// bl 0x822acb68
	ctx.lr = 0x82213890;
	sub_822ACB68(ctx, base);
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r25,r27
	ctx.r25.u64 = ctx.r27.u64;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// addi r30,r11,-25976
	ctx.r30.s64 = ctx.r11.s64 + -25976;
	// ble cr6,0x822138d4
	if (!ctx.cr6.gt) goto loc_822138D4;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822b28d0
	ctx.lr = 0x822138B0;
	sub_822B28D0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822138d4
	if (ctx.cr6.eq) goto loc_822138D4;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822b2168
	ctx.lr = 0x822138C0;
	sub_822B2168(ctx, base);
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// subf r10,r3,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r3.s64;
	// subfic r9,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r25,r7,r3
	ctx.r25.u64 = ctx.r7.u64 & ctx.r3.u64;
loc_822138D4:
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 1, ctx.xer);
	// bne cr6,0x82213930
	if (!ctx.cr6.eq) goto loc_82213930;
	// lis r11,0
	ctx.r11.s64 = 0;
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r9,1
	ctx.r9.s64 = 1;
	// ori r8,r11,44465
	ctx.r8.u64 = ctx.r11.u64 | 44465;
	// rlwinm r7,r10,0,30,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// cmpwi cr6,r29,7
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 7, ctx.xer);
	// stw r7,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r7.u32);
	// stbx r9,r31,r8
	PPC_STORE_U8(ctx.r31.u32 + ctx.r8.u32, ctx.r9.u8);
	// ble cr6,0x82213914
	if (!ctx.cr6.gt) goto loc_82213914;
	// li r3,7
	ctx.r3.s64 = 7;
	// bl 0x822b1c50
	ctx.lr = 0x82213908;
	sub_822B1C50(ctx, base);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// subfe r11,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// b 0x82213918
	goto loc_82213918;
loc_82213914:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_82213918:
	// lis r9,0
	ctx.r9.s64 = 0;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r7,r9,44466
	ctx.r7.u64 = ctx.r9.u64 | 44466;
	// ori r8,r10,44467
	ctx.r8.u64 = ctx.r10.u64 | 44467;
	// stbx r27,r31,r7
	PPC_STORE_U8(ctx.r31.u32 + ctx.r7.u32, ctx.r27.u8);
	// b 0x82213a14
	goto loc_82213A14;
loc_82213930:
	// cmpwi cr6,r28,2
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 2, ctx.xer);
	// bne cr6,0x822139c4
	if (!ctx.cr6.eq) goto loc_822139C4;
	// lhz r11,222(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 222);
	// cmplw cr6,r25,r11
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82213950
	if (ctx.cr6.eq) goto loc_82213950;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,29784
	ctx.r3.s64 = ctx.r11.s64 + 29784;
	// bl 0x822ad350
	ctx.lr = 0x82213950;
	sub_822AD350(ctx, base);
loc_82213950:
	// lfs f0,264(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,0
	ctx.r11.s64 = 0;
	// stfs f0,380(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 380, temp.u32);
	// cmpwi cr6,r29,7
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 7, ctx.xer);
	// lfs f13,268(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	ctx.f13.f64 = double(temp.f32);
	// ori r10,r11,44465
	ctx.r10.u64 = ctx.r11.u64 | 44465;
	// stfs f13,384(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 384, temp.u32);
	// lfs f12,272(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,388(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 388, temp.u32);
	// stbx r27,r31,r10
	PPC_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r27.u8);
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// ori r8,r9,4
	ctx.r8.u64 = ctx.r9.u64 | 4;
	// stw r8,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r8.u32);
	// ble cr6,0x8221399c
	if (!ctx.cr6.gt) goto loc_8221399C;
	// li r3,7
	ctx.r3.s64 = 7;
	// bl 0x822b1c50
	ctx.lr = 0x82213990;
	sub_822B1C50(ctx, base);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// subfe r11,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// b 0x822139a0
	goto loc_822139A0;
loc_8221399C:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_822139A0:
	// lis r10,0
	ctx.r10.s64 = 0;
	// lis r9,0
	ctx.r9.s64 = 0;
	// ori r8,r10,44466
	ctx.r8.u64 = ctx.r10.u64 | 44466;
	// ori r7,r9,44467
	ctx.r7.u64 = ctx.r9.u64 | 44467;
	// stbx r27,r31,r8
	PPC_STORE_U8(ctx.r31.u32 + ctx.r8.u32, ctx.r27.u8);
	// stbx r11,r31,r7
	PPC_STORE_U8(ctx.r31.u32 + ctx.r7.u32, ctx.r11.u8);
	// lhz r5,126(r26)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r26.u32 + 126);
	// stw r5,392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 392, ctx.r5.u32);
	// b 0x82213a18
	goto loc_82213A18;
loc_822139C4:
	// lis r11,0
	ctx.r11.s64 = 0;
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lis r9,0
	ctx.r9.s64 = 0;
	// ori r8,r11,44465
	ctx.r8.u64 = ctx.r11.u64 | 44465;
	// ori r7,r9,44467
	ctx.r7.u64 = ctx.r9.u64 | 44467;
	// li r6,1
	ctx.r6.s64 = 1;
	// rlwinm r5,r10,0,30,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// cmpwi cr6,r29,7
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 7, ctx.xer);
	// stbx r27,r31,r8
	PPC_STORE_U8(ctx.r31.u32 + ctx.r8.u32, ctx.r27.u8);
	// stbx r6,r31,r7
	PPC_STORE_U8(ctx.r31.u32 + ctx.r7.u32, ctx.r6.u8);
	// stw r5,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r5.u32);
	// ble cr6,0x82213a08
	if (!ctx.cr6.gt) goto loc_82213A08;
	// li r3,7
	ctx.r3.s64 = 7;
	// bl 0x822b1c50
	ctx.lr = 0x822139FC;
	sub_822B1C50(ctx, base);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// subfe r11,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// b 0x82213a0c
	goto loc_82213A0C;
loc_82213A08:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_82213A0C:
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r8,r10,44466
	ctx.r8.u64 = ctx.r10.u64 | 44466;
loc_82213A14:
	// stbx r11,r31,r8
	PPC_STORE_U8(ctx.r31.u32 + ctx.r8.u32, ctx.r11.u8);
loc_82213A18:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// cmpwi cr6,r29,2
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 2, ctx.xer);
	// lfs f30,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f30.f64 = double(temp.f32);
	// ble cr6,0x82213a34
	if (!ctx.cr6.gt) goto loc_82213A34;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x822b1fb0
	ctx.lr = 0x82213A30;
	sub_822B1FB0(ctx, base);
	// b 0x82213a38
	goto loc_82213A38;
loc_82213A34:
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
loc_82213A38:
	// addis r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 65536;
	// lis r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-21164
	ctx.r11.s64 = ctx.r11.s64 + -21164;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// ori r8,r10,44468
	ctx.r8.u64 = ctx.r10.u64 | 44468;
	// cmpwi cr6,r29,3
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 3, ctx.xer);
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lfs f31,5812(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5812);
	ctx.f31.f64 = double(temp.f32);
	// rlwinm r6,r7,0,30,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// stfsx f1,r31,r8
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r8.u32, temp.u32);
	// stw r6,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// ble cr6,0x82213a74
	if (!ctx.cr6.gt) goto loc_82213A74;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x822b1fb0
	ctx.lr = 0x82213A70;
	sub_822B1FB0(ctx, base);
	// b 0x82213a78
	goto loc_82213A78;
loc_82213A74:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
loc_82213A78:
	// fsubs f0,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 - ctx.f31.f64));
	// lis r11,0
	ctx.r11.s64 = 0;
	// fneg f13,f1
	ctx.f13.u64 = ctx.f1.u64 ^ 0x8000000000000000;
	// cmpwi cr6,r29,4
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 4, ctx.xer);
	// ori r10,r11,44492
	ctx.r10.u64 = ctx.r11.u64 | 44492;
	// fsel f12,f0,f31,f1
	ctx.f12.f64 = ctx.f0.f64 >= 0.0 ? ctx.f31.f64 : ctx.f1.f64;
	// fsel f11,f13,f30,f12
	ctx.f11.f64 = ctx.f13.f64 >= 0.0 ? ctx.f30.f64 : ctx.f12.f64;
	// fneg f10,f11
	ctx.f10.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// stfsx f10,r31,r10
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, temp.u32);
	// ble cr6,0x82213aac
	if (!ctx.cr6.gt) goto loc_82213AAC;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x822b1fb0
	ctx.lr = 0x82213AA8;
	sub_822B1FB0(ctx, base);
	// b 0x82213ab0
	goto loc_82213AB0;
loc_82213AAC:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
loc_82213AB0:
	// fsubs f0,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 - ctx.f31.f64));
	// lis r11,0
	ctx.r11.s64 = 0;
	// fneg f13,f1
	ctx.f13.u64 = ctx.f1.u64 ^ 0x8000000000000000;
	// cmpwi cr6,r29,5
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 5, ctx.xer);
	// ori r10,r11,44516
	ctx.r10.u64 = ctx.r11.u64 | 44516;
	// fsel f12,f0,f31,f1
	ctx.f12.f64 = ctx.f0.f64 >= 0.0 ? ctx.f31.f64 : ctx.f1.f64;
	// fsel f11,f13,f30,f12
	ctx.f11.f64 = ctx.f13.f64 >= 0.0 ? ctx.f30.f64 : ctx.f12.f64;
	// stfsx f11,r31,r10
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, temp.u32);
	// ble cr6,0x82213ae0
	if (!ctx.cr6.gt) goto loc_82213AE0;
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x822b1fb0
	ctx.lr = 0x82213ADC;
	sub_822B1FB0(ctx, base);
	// b 0x82213ae4
	goto loc_82213AE4;
loc_82213AE0:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
loc_82213AE4:
	// fsubs f0,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 - ctx.f31.f64));
	// lis r11,0
	ctx.r11.s64 = 0;
	// fneg f13,f1
	ctx.f13.u64 = ctx.f1.u64 ^ 0x8000000000000000;
	// cmpwi cr6,r29,6
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 6, ctx.xer);
	// ori r10,r11,44488
	ctx.r10.u64 = ctx.r11.u64 | 44488;
	// fsel f12,f0,f31,f1
	ctx.f12.f64 = ctx.f0.f64 >= 0.0 ? ctx.f31.f64 : ctx.f1.f64;
	// fsel f11,f13,f30,f12
	ctx.f11.f64 = ctx.f13.f64 >= 0.0 ? ctx.f30.f64 : ctx.f12.f64;
	// fneg f10,f11
	ctx.f10.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// stfsx f10,r31,r10
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, temp.u32);
	// ble cr6,0x82213b18
	if (!ctx.cr6.gt) goto loc_82213B18;
	// li r3,6
	ctx.r3.s64 = 6;
	// bl 0x822b1fb0
	ctx.lr = 0x82213B14;
	sub_822B1FB0(ctx, base);
	// b 0x82213b1c
	goto loc_82213B1C;
loc_82213B18:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
loc_82213B1C:
	// fsubs f0,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 - ctx.f31.f64));
	// lis r11,0
	ctx.r11.s64 = 0;
	// fneg f13,f1
	ctx.f13.u64 = ctx.f1.u64 ^ 0x8000000000000000;
	// addis r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 65536;
	// ori r10,r11,44512
	ctx.r10.u64 = ctx.r11.u64 | 44512;
	// addi r3,r3,-21064
	ctx.r3.s64 = ctx.r3.s64 + -21064;
	// fsel f12,f0,f31,f1
	ctx.f12.f64 = ctx.f0.f64 >= 0.0 ? ctx.f31.f64 : ctx.f1.f64;
	// fsel f11,f13,f30,f12
	ctx.f11.f64 = ctx.f13.f64 >= 0.0 ? ctx.f30.f64 : ctx.f12.f64;
	// stfsx f11,r31,r10
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, temp.u32);
	// bl 0x82232fd8
	ctx.lr = 0x82213B44;
	sub_82232FD8(ctx, base);
	// lis r9,0
	ctx.r9.s64 = 0;
	// lwz r7,20(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// ori r8,r9,44464
	ctx.r8.u64 = ctx.r9.u64 | 44464;
	// rlwinm r6,r7,0,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r6,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r6.u32);
	// stbx r27,r31,r8
	PPC_STORE_U8(ctx.r31.u32 + ctx.r8.u32, ctx.r27.u8);
	// lwz r5,312(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 312);
	// rlwinm r4,r5,0,0,0
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x82213b78
	if (ctx.cr6.eq) goto loc_82213B78;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r10,r11,0,30,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
loc_82213B78:
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82233ff0
	ctx.lr = 0x82213B88;
	sub_82233FF0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82213ba8
	if (ctx.cr6.eq) goto loc_82213BA8;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82233420
	ctx.lr = 0x82213B98;
	sub_82233420(ctx, base);
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
loc_82213BA8:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,29332
	ctx.r3.s64 = ctx.r11.s64 + 29332;
	// bl 0x822ad350
	ctx.lr = 0x82213BB4;
	sub_822AD350(ctx, base);
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

PPC_WEAK_FUNC(sub_822137E0) {
	__imp__sub_822137E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82213BC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82213BC4) {
	__imp__sub_82213BC4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82213BC8) {
	PPC_FUNC_PROLOGUE();
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x822137e0
	sub_822137E0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82213BC8) {
	__imp__sub_82213BC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82213BD0) {
	PPC_FUNC_PROLOGUE();
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x822137e0
	sub_822137E0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82213BD0) {
	__imp__sub_82213BD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82213BD8) {
	PPC_FUNC_PROLOGUE();
	// li r4,2
	ctx.r4.s64 = 2;
	// b 0x822137e0
	sub_822137E0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82213BD8) {
	__imp__sub_82213BD8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82213BE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82213BE8;
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
	// bne cr6,0x82213c14
	if (!ctx.cr6.eq) goto loc_82213C14;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// lhz r9,132(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 132);
	// addi r11,r10,26552
	ctx.r11.s64 = ctx.r10.s64 + 26552;
	// mulli r10,r9,624
	ctx.r10.s64 = ctx.r9.s64 * 624;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x82213c24
	goto loc_82213C24;
loc_82213C14:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x82213C20;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_82213C24:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b28d0
	ctx.lr = 0x82213C2C;
	sub_822B28D0(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x82213c44
	if (!ctx.cr6.eq) goto loc_82213C44;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b29b0
	ctx.lr = 0x82213C3C;
	sub_822B29B0(ctx, base);
	// cmpwi cr6,r3,22
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 22, ctx.xer);
	// beq cr6,0x82213c54
	if (ctx.cr6.eq) goto loc_82213C54;
loc_82213C44:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,29912
	ctx.r4.s64 = ctx.r11.s64 + 29912;
	// bl 0x822ad4e0
	ctx.lr = 0x82213C54;
	sub_822AD4E0(ctx, base);
loc_82213C54:
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82213c6c
	if (!ctx.cr6.eq) goto loc_82213C6C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,29892
	ctx.r3.s64 = ctx.r11.s64 + 29892;
	// bl 0x822ad548
	ctx.lr = 0x82213C6C;
	sub_822AD548(ctx, base);
loc_82213C6C:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82229bf0
	ctx.lr = 0x82213C74;
	sub_82229BF0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x822acb68
	ctx.lr = 0x82213C80;
	sub_822ACB68(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// ble cr6,0x82213cb8
	if (!ctx.cr6.gt) goto loc_82213CB8;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822b28d0
	ctx.lr = 0x82213C90;
	sub_822B28D0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82213cb8
	if (ctx.cr6.eq) goto loc_82213CB8;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822b2168
	ctx.lr = 0x82213CA0;
	sub_822B2168(ctx, base);
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// lhz r10,-25976(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + -25976);
	// subf r9,r3,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r3.s64;
	// subfic r8,r9,0
	ctx.xer.ca = ctx.r9.u32 <= 0;
	ctx.r8.s64 = 0 - ctx.r9.s64;
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r30,r6,r3
	ctx.r30.u64 = ctx.r6.u64 & ctx.r3.u64;
loc_82213CB8:
	// lis r11,0
	ctx.r11.s64 = 0;
	// lwz r10,264(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// ori r8,r11,44468
	ctx.r8.u64 = ctx.r11.u64 | 44468;
	// lis r7,0
	ctx.r7.s64 = 0;
	// lis r6,0
	ctx.r6.s64 = 0;
	// ori r7,r7,44465
	ctx.r7.u64 = ctx.r7.u64 | 44465;
	// lfs f0,12168(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// ori r6,r6,44467
	ctx.r6.u64 = ctx.r6.u64 | 44467;
	// stfsx f0,r10,r8
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r8.u32, temp.u32);
	// lwz r5,264(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// addis r4,r5,1
	ctx.r4.s64 = ctx.r5.s64 + 65536;
	// addi r4,r4,-21164
	ctx.r4.s64 = ctx.r4.s64 + -21164;
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// ori r11,r3,4
	ctx.r11.u64 = ctx.r3.u64 | 4;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,20(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// ori r8,r9,1
	ctx.r8.u64 = ctx.r9.u64 | 1;
	// stw r8,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r8.u32);
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// lwz r9,20(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// rlwinm r8,r9,0,30,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// stw r8,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r8.u32);
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// stbx r10,r11,r7
	PPC_STORE_U8(ctx.r11.u32 + ctx.r7.u32, ctx.r10.u8);
	// lwz r9,264(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// stbx r10,r9,r6
	PPC_STORE_U8(ctx.r9.u32 + ctx.r6.u32, ctx.r10.u8);
	// bl 0x82233ff0
	ctx.lr = 0x82213D3C;
	sub_82233FF0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82213d54
	if (ctx.cr6.eq) goto loc_82213D54;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82233420
	ctx.lr = 0x82213D4C;
	sub_82233420(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_82213D54:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,29868
	ctx.r3.s64 = ctx.r11.s64 + 29868;
	// bl 0x822ad350
	ctx.lr = 0x82213D60;
	sub_822AD350(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82213BE0) {
	__imp__sub_82213BE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82213D68) {
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
	// bne cr6,0x82213dbc
	if (!ctx.cr6.eq) goto loc_82213DBC;
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
	// bne cr6,0x82213dcc
	if (!ctx.cr6.eq) goto loc_82213DCC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17480
	ctx.r3.s64 = ctx.r11.s64 + -17480;
	// bl 0x822e84f0
	ctx.lr = 0x82213DB4;
	sub_822E84F0(ctx, base);
	// bl 0x822ad548
	ctx.lr = 0x82213DB8;
	sub_822AD548(ctx, base);
	// b 0x82213dcc
	goto loc_82213DCC;
loc_82213DBC:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x82213DC8;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_82213DCC:
	// lwz r11,468(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 468);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82213de4
	if (!ctx.cr6.eq) goto loc_82213DE4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,29928
	ctx.r3.s64 = ctx.r11.s64 + 29928;
	// bl 0x822ad350
	ctx.lr = 0x82213DE4;
	sub_822AD350(ctx, base);
loc_82213DE4:
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// ori r9,r10,2
	ctx.r9.u64 = ctx.r10.u64 | 2;
	// stw r9,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r9.u32);
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

PPC_WEAK_FUNC(sub_82213D68) {
	__imp__sub_82213D68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82213E08) {
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
	// bne cr6,0x82213e5c
	if (!ctx.cr6.eq) goto loc_82213E5C;
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
	// bne cr6,0x82213e6c
	if (!ctx.cr6.eq) goto loc_82213E6C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17480
	ctx.r3.s64 = ctx.r11.s64 + -17480;
	// bl 0x822e84f0
	ctx.lr = 0x82213E54;
	sub_822E84F0(ctx, base);
	// bl 0x822ad548
	ctx.lr = 0x82213E58;
	sub_822AD548(ctx, base);
	// b 0x82213e6c
	goto loc_82213E6C;
loc_82213E5C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x82213E68;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_82213E6C:
	// lwz r11,468(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 468);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82213e84
	if (!ctx.cr6.eq) goto loc_82213E84;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,29928
	ctx.r3.s64 = ctx.r11.s64 + 29928;
	// bl 0x822ad350
	ctx.lr = 0x82213E84;
	sub_822AD350(ctx, base);
loc_82213E84:
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// rlwinm r9,r10,0,31,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// stw r9,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r9.u32);
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

PPC_WEAK_FUNC(sub_82213E08) {
	__imp__sub_82213E08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82213EA8) {
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
	// bne cr6,0x82213f00
	if (!ctx.cr6.eq) goto loc_82213F00;
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
	// bne cr6,0x82213f10
	if (!ctx.cr6.eq) goto loc_82213F10;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17480
	ctx.r3.s64 = ctx.r11.s64 + -17480;
	// bl 0x822e84f0
	ctx.lr = 0x82213EF8;
	sub_822E84F0(ctx, base);
	// bl 0x822ad548
	ctx.lr = 0x82213EFC;
	sub_822AD548(ctx, base);
	// b 0x82213f10
	goto loc_82213F10;
loc_82213F00:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x82213F0C;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_82213F10:
	// lhz r11,126(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 126);
	// lis r9,-32076
	ctx.r9.s64 = -2102132736;
	// li r3,0
	ctx.r3.s64 = 0;
	// rotlwi r10,r11,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// addi r30,r9,30208
	ctx.r30.s64 = ctx.r9.s64 + 30208;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r30,8
	ctx.r10.s64 = ctx.r30.s64 + 8;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x822b2498
	ctx.lr = 0x82213F38;
	sub_822B2498(ctx, base);
	// lwsync 
	// lhz r7,126(r31)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r31.u32 + 126);
	// li r6,1
	ctx.r6.s64 = 1;
	// stbx r6,r7,r30
	PPC_STORE_U8(ctx.r7.u32 + ctx.r30.u32, ctx.r6.u8);
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

PPC_WEAK_FUNC(sub_82213EA8) {
	__imp__sub_82213EA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82213F60) {
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
	// bne cr6,0x82213fb4
	if (!ctx.cr6.eq) goto loc_82213FB4;
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
	// bne cr6,0x82213fc4
	if (!ctx.cr6.eq) goto loc_82213FC4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17480
	ctx.r3.s64 = ctx.r11.s64 + -17480;
	// bl 0x822e84f0
	ctx.lr = 0x82213FAC;
	sub_822E84F0(ctx, base);
	// bl 0x822ad548
	ctx.lr = 0x82213FB0;
	sub_822AD548(ctx, base);
	// b 0x82213fc4
	goto loc_82213FC4;
loc_82213FB4:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x82213FC0;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_82213FC4:
	// lis r11,-32076
	ctx.r11.s64 = -2102132736;
	// lhz r10,126(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 126);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r11,30208
	ctx.r8.s64 = ctx.r11.s64 + 30208;
	// stbx r9,r10,r8
	PPC_STORE_U8(ctx.r10.u32 + ctx.r8.u32, ctx.r9.u8);
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

PPC_WEAK_FUNC(sub_82213F60) {
	__imp__sub_82213F60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82213FEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82213FEC) {
	__imp__sub_82213FEC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82213FF0) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f30,f1
	ctx.f30.f64 = ctx.f1.f64;
	// fmr f29,f2
	ctx.f29.f64 = ctx.f2.f64;
	// lfs f31,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f31.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x82214038
	if (!ctx.cr6.lt) goto loc_82214038;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,30092
	ctx.r3.s64 = ctx.r11.s64 + 30092;
	// bl 0x822ad350
	ctx.lr = 0x82214038;
	sub_822AD350(ctx, base);
loc_82214038:
	// fcmpu cr6,f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f30.f64, ctx.f31.f64);
	// bge cr6,0x8221404c
	if (!ctx.cr6.lt) goto loc_8221404C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,30052
	ctx.r3.s64 = ctx.r11.s64 + 30052;
	// bl 0x822ad350
	ctx.lr = 0x8221404C;
	sub_822AD350(ctx, base);
loc_8221404C:
	// fcmpu cr6,f29,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f29.f64, ctx.f31.f64);
	// bge cr6,0x82214060
	if (!ctx.cr6.lt) goto loc_82214060;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,30012
	ctx.r3.s64 = ctx.r11.s64 + 30012;
	// bl 0x822ad350
	ctx.lr = 0x82214060;
	sub_822AD350(ctx, base);
loc_82214060:
	// fadds f0,f30,f29
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f30.f64 + ctx.f29.f64));
	// lfs f13,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82214098
	if (!ctx.cr6.gt) goto loc_82214098;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f12,30008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 30008);
	ctx.f12.f64 = double(temp.f32);
	// fadds f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82214094
	if (!ctx.cr6.gt) goto loc_82214094;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,29952
	ctx.r3.s64 = ctx.r11.s64 + 29952;
	// bl 0x822ad350
	ctx.lr = 0x82214090;
	sub_822AD350(ctx, base);
	// b 0x82214098
	goto loc_82214098;
loc_82214094:
	// stfs f13,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
loc_82214098:
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

PPC_WEAK_FUNC(sub_82213FF0) {
	__imp__sub_82213FF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822140B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x822140C0;
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
	// stw r3,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r3.u32);
	// lhz r10,198(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 198);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82214114
	if (!ctx.cr6.eq) goto loc_82214114;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// lhz r4,196(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 196);
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
	// bne cr6,0x82214124
	if (!ctx.cr6.eq) goto loc_82214124;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17480
	ctx.r3.s64 = ctx.r11.s64 + -17480;
	// bl 0x822e84f0
	ctx.lr = 0x8221410C;
	sub_822E84F0(ctx, base);
	// bl 0x822ad548
	ctx.lr = 0x82214110;
	sub_822AD548(ctx, base);
	// b 0x82214124
	goto loc_82214124;
loc_82214114:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x82214120;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_82214124:
	// bl 0x822acb68
	ctx.lr = 0x82214128;
	sub_822ACB68(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bge cr6,0x82214140
	if (!ctx.cr6.lt) goto loc_82214140;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,30124
	ctx.r3.s64 = ctx.r11.s64 + 30124;
	// bl 0x822ad350
	ctx.lr = 0x82214140;
	sub_822AD350(ctx, base);
loc_82214140:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82229bf0
	ctx.lr = 0x82214148;
	sub_82229BF0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// ble cr6,0x82214188
	if (!ctx.cr6.gt) goto loc_82214188;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822b28d0
	ctx.lr = 0x82214160;
	sub_822B28D0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82214188
	if (ctx.cr6.eq) goto loc_82214188;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822b2168
	ctx.lr = 0x82214170;
	sub_822B2168(ctx, base);
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// lhz r10,-25976(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + -25976);
	// subf r9,r3,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r3.s64;
	// subfic r8,r9,0
	ctx.xer.ca = ctx.r9.u32 <= 0;
	ctx.r8.s64 = 0 - ctx.r9.s64;
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r29,r6,r3
	ctx.r29.u64 = ctx.r6.u64 & ctx.r3.u64;
loc_82214188:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// lfs f29,12168(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f29.f64 = double(temp.f32);
	// ble cr6,0x822141a8
	if (!ctx.cr6.gt) goto loc_822141A8;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x822b1fb0
	ctx.lr = 0x822141A0;
	sub_822B1FB0(ctx, base);
	// stfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// b 0x822141ac
	goto loc_822141AC;
loc_822141A8:
	// stfs f29,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
loc_822141AC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// cmpwi cr6,r30,3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 3, ctx.xer);
	// lfs f31,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f31.f64 = double(temp.f32);
	// ble cr6,0x822141cc
	if (!ctx.cr6.gt) goto loc_822141CC;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x822b1fb0
	ctx.lr = 0x822141C4;
	sub_822B1FB0(ctx, base);
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// b 0x822141d0
	goto loc_822141D0;
loc_822141CC:
	// fmr f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f31.f64;
loc_822141D0:
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 4, ctx.xer);
	// ble cr6,0x822141e4
	if (!ctx.cr6.gt) goto loc_822141E4;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x822b1fb0
	ctx.lr = 0x822141E0;
	sub_822B1FB0(ctx, base);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
loc_822141E4:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x82213ff0
	ctx.lr = 0x822141F4;
	sub_82213FF0(ctx, base);
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// lwz r10,468(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 468);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lfs f0,264(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 264);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lfs f13,268(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 268);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,92(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lfs f12,272(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 272);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// beq cr6,0x82214228
	if (ctx.cr6.eq) goto loc_82214228;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r11,368
	ctx.r3.s64 = ctx.r11.s64 + 368;
	// bl 0x82321140
	ctx.lr = 0x82214228;
	sub_82321140(ctx, base);
loc_82214228:
	// addi r4,r31,376
	ctx.r4.s64 = ctx.r31.s64 + 376;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x822daa18
	ctx.lr = 0x82214234;
	sub_822DAA18(ctx, base);
	// lfs f12,232(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,352(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 352, temp.u32);
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// lfs f11,236(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	ctx.f11.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f11,356(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 356, temp.u32);
	// addi r9,r11,9624
	ctx.r9.s64 = ctx.r11.s64 + 9624;
	// lfs f10,240(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	ctx.f10.f64 = double(temp.f32);
	// lwz r11,52(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 52);
	// stfs f10,360(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 360, temp.u32);
	// lis r8,0
	ctx.r8.s64 = 0;
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// lfs f9,40(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f9.f64 = double(temp.f32);
	// li r30,1
	ctx.r30.s64 = 1;
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// stfs f9,364(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 364, temp.u32);
	// ori r7,r8,44468
	ctx.r7.u64 = ctx.r8.u64 | 44468;
	// lfd f7,80(r1)
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lis r6,0
	ctx.r6.s64 = 0;
	// lfs f8,44(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	ctx.f8.f64 = double(temp.f32);
	// lis r5,0
	ctx.r5.s64 = 0;
	// stfs f8,368(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 368, temp.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// fcfid f6,f7
	ctx.f6.f64 = double(ctx.f7.s64);
	// lfs f5,48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,372(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 372, temp.u32);
	// stb r30,392(r31)
	PPC_STORE_U8(ctx.r31.u32 + 392, ctx.r30.u8);
	// frsp f4,f6
	ctx.f4.f64 = double(float(ctx.f6.f64));
	// lfs f0,5804(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5804);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// stfs f30,396(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 396, temp.u32);
	// stfs f31,400(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 400, temp.u32);
	// ori r10,r6,44465
	ctx.r10.u64 = ctx.r6.u64 | 44465;
	// stfs f13,408(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 408, temp.u32);
	// ori r8,r5,44467
	ctx.r8.u64 = ctx.r5.u64 | 44467;
	// lis r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// ori r6,r6,44464
	ctx.r6.u64 = ctx.r6.u64 | 44464;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmuls f3,f4,f0
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// stfs f3,404(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 404, temp.u32);
	// stfsx f29,r11,r7
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r7.u32, temp.u32);
	// lwz r7,264(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// stbx r30,r7,r10
	PPC_STORE_U8(ctx.r7.u32 + ctx.r10.u32, ctx.r30.u8);
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// stbx r30,r11,r8
	PPC_STORE_U8(ctx.r11.u32 + ctx.r8.u32, ctx.r30.u8);
	// lwz r10,264(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// stbx r9,r10,r6
	PPC_STORE_U8(ctx.r10.u32 + ctx.r6.u32, ctx.r9.u8);
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// lwz r9,20(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// ori r8,r9,1
	ctx.r8.u64 = ctx.r9.u64 | 1;
	// stw r8,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r8.u32);
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// lwz r7,20(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// rlwinm r6,r7,0,30,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// stw r6,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r6.u32);
	// bl 0x82233ff0
	ctx.lr = 0x82214324;
	sub_82233FF0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82214350
	if (ctx.cr6.eq) goto loc_82214350;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82233420
	ctx.lr = 0x82214334;
	sub_82233420(ctx, base);
	// lwz r11,468(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 468);
	// stb r30,10(r11)
	PPC_STORE_U8(ctx.r11.u32 + 10, ctx.r30.u8);
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
loc_82214350:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,29868
	ctx.r3.s64 = ctx.r11.s64 + 29868;
	// bl 0x822ad350
	ctx.lr = 0x8221435C;
	sub_822AD350(ctx, base);
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

PPC_WEAK_FUNC(sub_822140B8) {
	__imp__sub_822140B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82214370) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// stfs f1,56(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// stfs f2,48(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r11,9624
	ctx.r9.s64 = ctx.r11.s64 + 9624;
	// stfs f3,52(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// lfs f0,5804(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5804);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,52(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 52);
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// std r8,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r8.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f10,60(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// stfs f7,40(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// stfs f5,44(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// stfs f6,16(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stfs f4,20(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// lfs f9,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,0(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lfs f8,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,4(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lfs f7,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,24(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// lfs f6,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,28(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82214370) {
	__imp__sub_82214370(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822143E0) {
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
	ctx.lr = 0x822143F4;
	__savefpr_27(ctx, base);
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
	// bne cr6,0x8221443c
	if (!ctx.cr6.eq) goto loc_8221443C;
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
	// bne cr6,0x8221444c
	if (!ctx.cr6.eq) goto loc_8221444C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17480
	ctx.r3.s64 = ctx.r11.s64 + -17480;
	// bl 0x822e84f0
	ctx.lr = 0x82214434;
	sub_822E84F0(ctx, base);
	// bl 0x822ad548
	ctx.lr = 0x82214438;
	sub_822AD548(ctx, base);
	// b 0x8221444c
	goto loc_8221444C;
loc_8221443C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x82214448;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_8221444C:
	// bl 0x822acb68
	ctx.lr = 0x82214450;
	sub_822ACB68(ctx, base);
	// cmpwi cr6,r3,7
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 7, ctx.xer);
	// beq cr6,0x82214464
	if (ctx.cr6.eq) goto loc_82214464;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,30232
	ctx.r3.s64 = ctx.r11.s64 + 30232;
	// bl 0x822ad350
	ctx.lr = 0x82214464;
	sub_822AD350(ctx, base);
loc_82214464:
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x82214480
	if (ctx.cr6.eq) goto loc_82214480;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,30200
	ctx.r3.s64 = ctx.r11.s64 + 30200;
	// bl 0x822ad350
	ctx.lr = 0x82214480;
	sub_822AD350(ctx, base);
loc_82214480:
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822144a0
	if (ctx.cr6.eq) goto loc_822144A0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,30148
	ctx.r3.s64 = ctx.r11.s64 + 30148;
	// bl 0x822ad350
	ctx.lr = 0x822144A0;
	sub_822AD350(ctx, base);
loc_822144A0:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b1fb0
	ctx.lr = 0x822144A8;
	sub_822B1FB0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// stfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// bl 0x822b1fb0
	ctx.lr = 0x822144B4;
	sub_822B1FB0(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x822b1fb0
	ctx.lr = 0x822144C0;
	sub_822B1FB0(ctx, base);
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// bl 0x82213ff0
	ctx.lr = 0x822144D4;
	sub_82213FF0(ctx, base);
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x822b1fb0
	ctx.lr = 0x822144DC;
	sub_822B1FB0(ctx, base);
	// li r3,4
	ctx.r3.s64 = 4;
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f1.f64;
	// bl 0x822b1fb0
	ctx.lr = 0x822144E8;
	sub_822B1FB0(ctx, base);
	// li r3,5
	ctx.r3.s64 = 5;
	// fmr f28,f1
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = ctx.f1.f64;
	// bl 0x822b1fb0
	ctx.lr = 0x822144F4;
	sub_822B1FB0(ctx, base);
	// li r3,6
	ctx.r3.s64 = 6;
	// fmr f27,f1
	ctx.fpscr.disableFlushMode();
	ctx.f27.f64 = ctx.f1.f64;
	// bl 0x822b1fb0
	ctx.lr = 0x82214500;
	sub_822B1FB0(ctx, base);
	// lwz r10,264(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// addis r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 65536;
	// fneg f11,f27
	ctx.f11.u64 = ctx.f27.u64 ^ 0x8000000000000000;
	// lis r9,-32020
	ctx.r9.s64 = -2098462720;
	// fneg f10,f29
	ctx.f10.u64 = ctx.f29.u64 ^ 0x8000000000000000;
	// addi r8,r8,-21064
	ctx.r8.s64 = ctx.r8.s64 + -21064;
	// fneg f6,f28
	ctx.f6.u64 = ctx.f28.u64 ^ 0x8000000000000000;
	// addi r7,r9,9624
	ctx.r7.s64 = ctx.r9.s64 + 9624;
	// lfs f0,5812(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5812);
	ctx.f0.f64 = double(temp.f32);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// fsubs f9,f27,f0
	ctx.f9.f64 = double(float(ctx.f27.f64 - ctx.f0.f64));
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// fsubs f8,f29,f0
	ctx.f8.f64 = double(float(ctx.f29.f64 - ctx.f0.f64));
	// stfs f13,56(r8)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r8.u32 + 56, temp.u32);
	// fsubs f7,f28,f0
	ctx.f7.f64 = double(float(ctx.f28.f64 - ctx.f0.f64));
	// stfs f31,48(r8)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r8.u32 + 48, temp.u32);
	// fsubs f3,f1,f0
	ctx.f3.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// stfs f30,52(r8)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r8.u32 + 52, temp.u32);
	// lwz r11,52(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 52);
	// extsw r4,r11
	ctx.r4.s64 = ctx.r11.s32;
	// lfs f13,5484(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 5484);
	ctx.f13.f64 = double(temp.f32);
	// std r4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// lfd f5,80(r1)
	ctx.f5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f4,f5
	ctx.f4.f64 = double(ctx.f5.s64);
	// lfs f12,5804(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 5804);
	ctx.f12.f64 = double(temp.f32);
	// fsel f2,f9,f0,f27
	ctx.f2.f64 = ctx.f9.f64 >= 0.0 ? ctx.f0.f64 : ctx.f27.f64;
	// fsel f9,f8,f0,f29
	ctx.f9.f64 = ctx.f8.f64 >= 0.0 ? ctx.f0.f64 : ctx.f29.f64;
	// frsp f8,f4
	ctx.f8.f64 = double(float(ctx.f4.f64));
	// fneg f5,f1
	ctx.f5.u64 = ctx.f1.u64 ^ 0x8000000000000000;
	// fsel f4,f7,f0,f28
	ctx.f4.f64 = ctx.f7.f64 >= 0.0 ? ctx.f0.f64 : ctx.f28.f64;
	// fsel f3,f3,f0,f1
	ctx.f3.f64 = ctx.f3.f64 >= 0.0 ? ctx.f0.f64 : ctx.f1.f64;
	// fsel f2,f11,f13,f2
	ctx.f2.f64 = ctx.f11.f64 >= 0.0 ? ctx.f13.f64 : ctx.f2.f64;
	// fsel f1,f10,f13,f9
	ctx.f1.f64 = ctx.f10.f64 >= 0.0 ? ctx.f13.f64 : ctx.f9.f64;
	// fmuls f0,f8,f12
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f12.f64));
	// stfs f0,60(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 60, temp.u32);
	// fsel f12,f6,f13,f4
	ctx.f12.f64 = ctx.f6.f64 >= 0.0 ? ctx.f13.f64 : ctx.f4.f64;
	// stfs f12,44(r8)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r8.u32 + 44, temp.u32);
	// fsel f11,f5,f13,f3
	ctx.f11.f64 = ctx.f5.f64 >= 0.0 ? ctx.f13.f64 : ctx.f3.f64;
	// stfs f11,40(r8)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r8.u32 + 40, temp.u32);
	// fneg f10,f2
	ctx.f10.u64 = ctx.f2.u64 ^ 0x8000000000000000;
	// stfs f10,16(r8)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r8.u32 + 16, temp.u32);
	// fneg f9,f1
	ctx.f9.u64 = ctx.f1.u64 ^ 0x8000000000000000;
	// stfs f9,20(r8)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r8.u32 + 20, temp.u32);
	// lfs f8,8(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,0(r8)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// lfs f7,12(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,4(r8)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// lfs f6,32(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 32);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,24(r8)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r8.u32 + 24, temp.u32);
	// lfs f5,36(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 36);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,28(r8)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r8.u32 + 28, temp.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// addi r12,r1,-16
	ctx.r12.s64 = ctx.r1.s64 + -16;
	// bl 0x823de070
	ctx.lr = 0x822145E0;
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

PPC_WEAK_FUNC(sub_822143E0) {
	__imp__sub_822143E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822145F0) {
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
	// bne cr6,0x8221462c
	if (!ctx.cr6.eq) goto loc_8221462C;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// lhz r9,132(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 132);
	// addi r11,r10,26552
	ctx.r11.s64 = ctx.r10.s64 + 26552;
	// mulli r10,r9,624
	ctx.r10.s64 = ctx.r9.s64 * 624;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x8221463c
	goto loc_8221463C;
loc_8221462C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x82214638;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_8221463C:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b1c50
	ctx.lr = 0x82214644;
	sub_822B1C50(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,204(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// bl 0x822acbf8
	ctx.lr = 0x82214650;
	sub_822ACBF8(ctx, base);
	// stw r30,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82340d30
	ctx.lr = 0x8221465C;
	sub_82340D30(ctx, base);
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

PPC_WEAK_FUNC(sub_822145F0) {
	__imp__sub_822145F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82214674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82214674) {
	__imp__sub_82214674(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82214678) {
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
	// lhz r10,118(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 118);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822146ac
	if (!ctx.cr6.eq) goto loc_822146AC;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// lhz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 116);
	// addi r11,r10,26552
	ctx.r11.s64 = ctx.r10.s64 + 26552;
	// mulli r10,r9,624
	ctx.r10.s64 = ctx.r9.s64 * 624;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x822146bc
	goto loc_822146BC;
loc_822146AC:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x822146B8;
	sub_822AD548(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_822146BC:
	// lwz r11,276(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822146d4
	if (ctx.cr6.eq) goto loc_822146D4;
	// lwz r11,308(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 308);
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// stw r10,308(r3)
	PPC_STORE_U32(ctx.r3.u32 + 308, ctx.r10.u32);
loc_822146D4:
	// lwz r11,204(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 204);
	// lwz r10,168(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 168);
	// oris r9,r11,32
	ctx.r9.u64 = ctx.r11.u64 | 2097152;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r9,204(r3)
	PPC_STORE_U32(ctx.r3.u32 + 204, ctx.r9.u32);
	// bne cr6,0x822146f4
	if (!ctx.cr6.eq) goto loc_822146F4;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,168(r3)
	PPC_STORE_U32(ctx.r3.u32 + 168, ctx.r11.u32);
loc_822146F4:
	// bl 0x82340d30
	ctx.lr = 0x822146F8;
	sub_82340D30(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82214678) {
	__imp__sub_82214678(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82214708) {
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
	// lhz r10,118(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 118);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8221473c
	if (!ctx.cr6.eq) goto loc_8221473C;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// lhz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 116);
	// addi r11,r10,26552
	ctx.r11.s64 = ctx.r10.s64 + 26552;
	// mulli r10,r9,624
	ctx.r10.s64 = ctx.r9.s64 * 624;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x8221474c
	goto loc_8221474C;
loc_8221473C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x82214748;
	sub_822AD548(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_8221474C:
	// lwz r11,276(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82214764
	if (ctx.cr6.eq) goto loc_82214764;
	// lwz r11,308(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 308);
	// rlwinm r10,r11,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r10,308(r3)
	PPC_STORE_U32(ctx.r3.u32 + 308, ctx.r10.u32);
loc_82214764:
	// lwz r11,204(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 204);
	// rlwinm r10,r11,0,11,9
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFDFFFFF;
	// stw r10,204(r3)
	PPC_STORE_U32(ctx.r3.u32 + 204, ctx.r10.u32);
	// bl 0x82340d30
	ctx.lr = 0x82214774;
	sub_82340D30(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82214708) {
	__imp__sub_82214708(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82214784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82214784) {
	__imp__sub_82214784(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82214788) {
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
	// lhz r10,118(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 118);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822147bc
	if (!ctx.cr6.eq) goto loc_822147BC;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// lhz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 116);
	// addi r11,r10,26552
	ctx.r11.s64 = ctx.r10.s64 + 26552;
	// mulli r10,r9,624
	ctx.r10.s64 = ctx.r9.s64 * 624;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x822147cc
	goto loc_822147CC;
loc_822147BC:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x822147C8;
	sub_822AD548(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
loc_822147CC:
	// lwz r10,264(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 264);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822147f4
	if (ctx.cr6.eq) goto loc_822147F4;
	// lwz r11,172(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 172);
	// oris r9,r11,8192
	ctx.r9.u64 = ctx.r11.u64 | 536870912;
	// stw r9,172(r10)
	PPC_STORE_U32(ctx.r10.u32 + 172, ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_822147F4:
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// oris r9,r10,8192
	ctx.r9.u64 = ctx.r10.u64 | 536870912;
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82214788) {
	__imp__sub_82214788(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82214810) {
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
	// lhz r10,118(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 118);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82214844
	if (!ctx.cr6.eq) goto loc_82214844;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// lhz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 116);
	// addi r11,r10,26552
	ctx.r11.s64 = ctx.r10.s64 + 26552;
	// mulli r10,r9,624
	ctx.r10.s64 = ctx.r9.s64 * 624;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x82214854
	goto loc_82214854;
loc_82214844:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x82214850;
	sub_822AD548(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
loc_82214854:
	// lwz r10,264(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 264);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8221487c
	if (ctx.cr6.eq) goto loc_8221487C;
	// lwz r11,172(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 172);
	// rlwinm r9,r11,0,3,1
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFDFFFFFFF;
	// stw r9,172(r10)
	PPC_STORE_U32(ctx.r10.u32 + 172, ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8221487C:
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r9,r10,0,3,1
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFDFFFFFFF;
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82214810) {
	__imp__sub_82214810(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82214898) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82214898) {
	__imp__sub_82214898(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221489C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8221489C) {
	__imp__sub_8221489C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822148A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x822148A8;
	__savegprlr_26(ctx, base);
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
	// bne cr6,0x822148d4
	if (!ctx.cr6.eq) goto loc_822148D4;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// lhz r9,164(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 164);
	// addi r11,r10,26552
	ctx.r11.s64 = ctx.r10.s64 + 26552;
	// mulli r10,r9,624
	ctx.r10.s64 = ctx.r9.s64 * 624;
	// add r27,r10,r11
	ctx.r27.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x822148e4
	goto loc_822148E4;
loc_822148D4:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x822148E0;
	sub_822AD548(ctx, base);
	// li r27,0
	ctx.r27.s64 = 0;
loc_822148E4:
	// lbz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 0);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x822148fc
	if (!ctx.cr6.eq) goto loc_822148FC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,30480
	ctx.r3.s64 = ctx.r11.s64 + 30480;
	// bl 0x822ad350
	ctx.lr = 0x822148FC;
	sub_822AD350(ctx, base);
loc_822148FC:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b2288
	ctx.lr = 0x82214904;
	sub_822B2288(ctx, base);
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r28,r11,-25976
	ctx.r28.s64 = ctx.r11.s64 + -25976;
	// lhz r11,292(r27)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r27.u32 + 292);
	// lhz r10,268(r28)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r28.u32 + 268);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8221492c
	if (ctx.cr6.eq) goto loc_8221492C;
	// lhz r10,270(r28)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r28.u32 + 270);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82214954
	if (!ctx.cr6.eq) goto loc_82214954;
loc_8221492C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r4,r11,30464
	ctx.r4.s64 = ctx.r11.s64 + 30464;
	// bl 0x822e8058
	ctx.lr = 0x8221493C;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82214954
	if (!ctx.cr6.eq) goto loc_82214954;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,168(r27)
	PPC_STORE_U32(ctx.r27.u32 + 168, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_82214954:
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r29,r11,13460
	ctx.r29.s64 = ctx.r11.s64 + 13460;
	// addi r31,r29,4
	ctx.r31.s64 = ctx.r29.s64 + 4;
loc_82214964:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x822e8058
	ctx.lr = 0x82214970;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82214a10
	if (ctx.cr6.eq) goto loc_82214A10;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r11,r29,20
	ctx.r11.s64 = ctx.r29.s64 + 20;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82214964
	if (ctx.cr6.lt) goto loc_82214964;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r3,23
	ctx.r3.s64 = 23;
	// addi r4,r11,30428
	ctx.r4.s64 = ctx.r11.s64 + 30428;
	// bl 0x82280900
	ctx.lr = 0x8221499C;
	sub_82280900(ctx, base);
	// lhz r10,268(r28)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r28.u32 + 268);
	// lhz r11,292(r27)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r27.u32 + 292);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x822149b8
	if (ctx.cr6.eq) goto loc_822149B8;
	// lhz r10,270(r28)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r28.u32 + 270);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x822149c8
	if (!ctx.cr6.eq) goto loc_822149C8;
loc_822149B8:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r3,23
	ctx.r3.s64 = 23;
	// addi r4,r11,30360
	ctx.r4.s64 = ctx.r11.s64 + 30360;
	// bl 0x82280900
	ctx.lr = 0x822149C8;
	sub_82280900(ctx, base);
loc_822149C8:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r31,r29,4
	ctx.r31.s64 = ctx.r29.s64 + 4;
	// addi r30,r11,-27340
	ctx.r30.s64 = ctx.r11.s64 + -27340;
loc_822149D4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r3,23
	ctx.r3.s64 = 23;
	// bl 0x82280900
	ctx.lr = 0x822149E4;
	sub_82280900(ctx, base);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r11,r29,20
	ctx.r11.s64 = ctx.r29.s64 + 20;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822149d4
	if (ctx.cr6.lt) goto loc_822149D4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r11,30288
	ctx.r3.s64 = ctx.r11.s64 + 30288;
	// bl 0x822e84f0
	ctx.lr = 0x82214A04;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x82214A08;
	sub_822AD350(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_82214A10:
	// stw r30,168(r27)
	PPC_STORE_U32(ctx.r27.u32 + 168, ctx.r30.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822148A0) {
	__imp__sub_822148A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82214A1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82214A1C) {
	__imp__sub_82214A1C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82214A20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82214A28;
	__savegprlr_28(ctx, base);
	// stwu r1,-1152(r1)
	ea = -1152 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82214A38:
	// addi r31,r30,112
	ctx.r31.s64 = ctx.r30.s64 + 112;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8233dd38
	ctx.lr = 0x82214A4C;
	sub_8233DD38(ctx, base);
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82214aac
	if (ctx.cr6.eq) goto loc_82214AAC;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82214A60:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x82214a84
	if (ctx.cr6.eq) goto loc_82214A84;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82214a60
	if (ctx.cr6.eq) goto loc_82214A60;
loc_82214A84:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82214ab8
	if (ctx.cr6.eq) goto loc_82214AB8;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,32
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 32, ctx.xer);
	// blt cr6,0x82214a38
	if (ctx.cr6.lt) goto loc_82214A38;
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,1152
	ctx.r1.s64 = ctx.r1.s64 + 1152;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_82214AAC:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8233e7d8
	ctx.lr = 0x82214AB8;
	sub_8233E7D8(ctx, base);
loc_82214AB8:
	// stw r30,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r30.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,1152
	ctx.r1.s64 = ctx.r1.s64 + 1152;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82214A20) {
	__imp__sub_82214A20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82214AC8) {
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
	// bne cr6,0x82214b1c
	if (!ctx.cr6.eq) goto loc_82214B1C;
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
	// bne cr6,0x82214b2c
	if (!ctx.cr6.eq) goto loc_82214B2C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17480
	ctx.r3.s64 = ctx.r11.s64 + -17480;
	// bl 0x822e84f0
	ctx.lr = 0x82214B14;
	sub_822E84F0(ctx, base);
	// bl 0x822ad548
	ctx.lr = 0x82214B18;
	sub_822AD548(ctx, base);
	// b 0x82214b2c
	goto loc_82214B2C;
loc_82214B1C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x82214B28;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_82214B2C:
	// lis r11,0
	ctx.r11.s64 = 0;
	// lwz r10,264(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r8,r11,45004
	ctx.r8.u64 = ctx.r11.u64 | 45004;
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

PPC_WEAK_FUNC(sub_82214AC8) {
	__imp__sub_82214AC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82214B54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82214B54) {
	__imp__sub_82214B54(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82214B58) {
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
	// lhz r10,118(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 118);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82214b8c
	if (!ctx.cr6.eq) goto loc_82214B8C;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// lhz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 116);
	// addi r11,r10,26552
	ctx.r11.s64 = ctx.r10.s64 + 26552;
	// mulli r10,r9,624
	ctx.r10.s64 = ctx.r9.s64 * 624;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x82214b9c
	goto loc_82214B9C;
loc_82214B8C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x82214B98;
	sub_822AD548(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
loc_82214B9C:
	// lwz r10,264(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 264);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82214bb8
	if (ctx.cr6.eq) goto loc_82214BB8;
	// lwz r9,172(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 172);
	// ori r8,r9,32768
	ctx.r8.u64 = ctx.r9.u64 | 32768;
	// stw r8,172(r10)
	PPC_STORE_U32(ctx.r10.u32 + 172, ctx.r8.u32);
	// b 0x82214bc4
	goto loc_82214BC4;
loc_82214BB8:
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// ori r9,r10,32768
	ctx.r9.u64 = ctx.r10.u64 | 32768;
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
loc_82214BC4:
	// lwz r10,264(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 264);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82214bec
	if (ctx.cr6.eq) goto loc_82214BEC;
	// lwz r11,172(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 172);
	// rlwinm r9,r11,0,5,2
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFE7FFFFFF;
	// stw r9,172(r10)
	PPC_STORE_U32(ctx.r10.u32 + 172, ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82214BEC:
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r9,r10,0,5,2
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFE7FFFFFF;
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82214B58) {
	__imp__sub_82214B58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82214C08) {
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
	// lhz r10,118(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 118);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82214c3c
	if (!ctx.cr6.eq) goto loc_82214C3C;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// lhz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 116);
	// addi r11,r10,26552
	ctx.r11.s64 = ctx.r10.s64 + 26552;
	// mulli r10,r9,624
	ctx.r10.s64 = ctx.r9.s64 * 624;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x82214c4c
	goto loc_82214C4C;
loc_82214C3C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x82214C48;
	sub_822AD548(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
loc_82214C4C:
	// lwz r10,264(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 264);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82214c74
	if (ctx.cr6.eq) goto loc_82214C74;
	// lwz r11,172(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 172);
	// rlwinm r9,r11,0,17,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFF7FFF;
	// stw r9,172(r10)
	PPC_STORE_U32(ctx.r10.u32 + 172, ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82214C74:
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r9,r10,0,17,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFF7FFF;
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82214C08) {
	__imp__sub_82214C08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82214C90) {
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
	// bne cr6,0x82214ce4
	if (!ctx.cr6.eq) goto loc_82214CE4;
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
	// bne cr6,0x82214cf4
	if (!ctx.cr6.eq) goto loc_82214CF4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17480
	ctx.r3.s64 = ctx.r11.s64 + -17480;
	// bl 0x822e84f0
	ctx.lr = 0x82214CDC;
	sub_822E84F0(ctx, base);
	// bl 0x822ad548
	ctx.lr = 0x82214CE0;
	sub_822AD548(ctx, base);
	// b 0x82214cf4
	goto loc_82214CF4;
loc_82214CE4:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x82214CF0;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_82214CF4:
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// ori r9,r10,4
	ctx.r9.u64 = ctx.r10.u64 | 4;
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

PPC_WEAK_FUNC(sub_82214C90) {
	__imp__sub_82214C90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82214D18) {
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
	// bne cr6,0x82214d6c
	if (!ctx.cr6.eq) goto loc_82214D6C;
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
	// bne cr6,0x82214d7c
	if (!ctx.cr6.eq) goto loc_82214D7C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17480
	ctx.r3.s64 = ctx.r11.s64 + -17480;
	// bl 0x822e84f0
	ctx.lr = 0x82214D64;
	sub_822E84F0(ctx, base);
	// bl 0x822ad548
	ctx.lr = 0x82214D68;
	sub_822AD548(ctx, base);
	// b 0x82214d7c
	goto loc_82214D7C;
loc_82214D6C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x82214D78;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_82214D7C:
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// rlwinm r9,r10,0,30,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
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

PPC_WEAK_FUNC(sub_82214D18) {
	__imp__sub_82214D18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82214DA0) {
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
	// bne cr6,0x82214df4
	if (!ctx.cr6.eq) goto loc_82214DF4;
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
	// bne cr6,0x82214e04
	if (!ctx.cr6.eq) goto loc_82214E04;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17480
	ctx.r3.s64 = ctx.r11.s64 + -17480;
	// bl 0x822e84f0
	ctx.lr = 0x82214DEC;
	sub_822E84F0(ctx, base);
	// bl 0x822ad548
	ctx.lr = 0x82214DF0;
	sub_822AD548(ctx, base);
	// b 0x82214e04
	goto loc_82214E04;
loc_82214DF4:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x82214E00;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_82214E04:
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// ori r9,r10,8
	ctx.r9.u64 = ctx.r10.u64 | 8;
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

PPC_WEAK_FUNC(sub_82214DA0) {
	__imp__sub_82214DA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82214E28) {
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
	// bne cr6,0x82214e7c
	if (!ctx.cr6.eq) goto loc_82214E7C;
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
	// bne cr6,0x82214e8c
	if (!ctx.cr6.eq) goto loc_82214E8C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17480
	ctx.r3.s64 = ctx.r11.s64 + -17480;
	// bl 0x822e84f0
	ctx.lr = 0x82214E74;
	sub_822E84F0(ctx, base);
	// bl 0x822ad548
	ctx.lr = 0x82214E78;
	sub_822AD548(ctx, base);
	// b 0x82214e8c
	goto loc_82214E8C;
loc_82214E7C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x82214E88;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_82214E8C:
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// rlwinm r9,r10,0,29,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
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

PPC_WEAK_FUNC(sub_82214E28) {
	__imp__sub_82214E28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82214EB0) {
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
	// bne cr6,0x82214f04
	if (!ctx.cr6.eq) goto loc_82214F04;
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
	// bne cr6,0x82214f14
	if (!ctx.cr6.eq) goto loc_82214F14;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17480
	ctx.r3.s64 = ctx.r11.s64 + -17480;
	// bl 0x822e84f0
	ctx.lr = 0x82214EFC;
	sub_822E84F0(ctx, base);
	// bl 0x822ad548
	ctx.lr = 0x82214F00;
	sub_822AD548(ctx, base);
	// b 0x82214f14
	goto loc_82214F14;
loc_82214F04:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x82214F10;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_82214F14:
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// ori r9,r10,16
	ctx.r9.u64 = ctx.r10.u64 | 16;
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

PPC_WEAK_FUNC(sub_82214EB0) {
	__imp__sub_82214EB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82214F38) {
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
	// bne cr6,0x82214f8c
	if (!ctx.cr6.eq) goto loc_82214F8C;
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
	// bne cr6,0x82214f9c
	if (!ctx.cr6.eq) goto loc_82214F9C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17480
	ctx.r3.s64 = ctx.r11.s64 + -17480;
	// bl 0x822e84f0
	ctx.lr = 0x82214F84;
	sub_822E84F0(ctx, base);
	// bl 0x822ad548
	ctx.lr = 0x82214F88;
	sub_822AD548(ctx, base);
	// b 0x82214f9c
	goto loc_82214F9C;
loc_82214F8C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x82214F98;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_82214F9C:
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// rlwinm r9,r10,0,28,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
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

PPC_WEAK_FUNC(sub_82214F38) {
	__imp__sub_82214F38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82214FC0) {
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
	// bne cr6,0x82215014
	if (!ctx.cr6.eq) goto loc_82215014;
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
	// bne cr6,0x82215024
	if (!ctx.cr6.eq) goto loc_82215024;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17480
	ctx.r3.s64 = ctx.r11.s64 + -17480;
	// bl 0x822e84f0
	ctx.lr = 0x8221500C;
	sub_822E84F0(ctx, base);
	// bl 0x822ad548
	ctx.lr = 0x82215010;
	sub_822AD548(ctx, base);
	// b 0x82215024
	goto loc_82215024;
loc_82215014:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x82215020;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_82215024:
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// ori r9,r10,2048
	ctx.r9.u64 = ctx.r10.u64 | 2048;
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

PPC_WEAK_FUNC(sub_82214FC0) {
	__imp__sub_82214FC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82215048) {
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
	// bne cr6,0x8221509c
	if (!ctx.cr6.eq) goto loc_8221509C;
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
	// bne cr6,0x822150ac
	if (!ctx.cr6.eq) goto loc_822150AC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17480
	ctx.r3.s64 = ctx.r11.s64 + -17480;
	// bl 0x822e84f0
	ctx.lr = 0x82215094;
	sub_822E84F0(ctx, base);
	// bl 0x822ad548
	ctx.lr = 0x82215098;
	sub_822AD548(ctx, base);
	// b 0x822150ac
	goto loc_822150AC;
loc_8221509C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x822150A8;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_822150AC:
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// rlwinm r9,r10,0,21,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFF7FF;
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

PPC_WEAK_FUNC(sub_82215048) {
	__imp__sub_82215048(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822150D0) {
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
	// lhz r10,118(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 118);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82215104
	if (!ctx.cr6.eq) goto loc_82215104;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// lhz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 116);
	// addi r11,r10,26552
	ctx.r11.s64 = ctx.r10.s64 + 26552;
	// mulli r10,r9,624
	ctx.r10.s64 = ctx.r9.s64 * 624;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x82215114
	goto loc_82215114;
loc_82215104:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x82215110;
	sub_822AD548(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
loc_82215114:
	// lwz r11,264(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 264);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82215194
	if (ctx.cr6.eq) goto loc_82215194;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82215150
	if (ctx.cr6.eq) goto loc_82215150;
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// addi r10,r11,-25976
	ctx.r10.s64 = ctx.r11.s64 + -25976;
	// lhz r3,138(r10)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r10.u32 + 138);
	// bl 0x822acff0
	ctx.lr = 0x82215140;
	sub_822ACFF0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82215150:
	// rlwinm r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// addi r10,r11,-25976
	ctx.r10.s64 = ctx.r11.s64 + -25976;
	// beq cr6,0x8221517c
	if (ctx.cr6.eq) goto loc_8221517C;
	// lhz r3,38(r10)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r10.u32 + 38);
	// bl 0x822acff0
	ctx.lr = 0x8221516C;
	sub_822ACFF0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8221517C:
	// lhz r3,176(r10)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r10.u32 + 176);
	// bl 0x822acff0
	ctx.lr = 0x82215184;
	sub_822ACFF0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82215194:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,30548
	ctx.r3.s64 = ctx.r11.s64 + 30548;
	// bl 0x822ad350
	ctx.lr = 0x822151A0;
	sub_822AD350(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822150D0) {
	__imp__sub_822150D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822151B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x822151B8;
	__savegprlr_26(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r3.u32);
	// lhz r10,246(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 246);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822151e4
	if (!ctx.cr6.eq) goto loc_822151E4;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// lhz r9,244(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 244);
	// addi r11,r10,26552
	ctx.r11.s64 = ctx.r10.s64 + 26552;
	// mulli r10,r9,624
	ctx.r10.s64 = ctx.r9.s64 * 624;
	// add r26,r10,r11
	ctx.r26.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x822151f4
	goto loc_822151F4;
loc_822151E4:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x822151F0;
	sub_822AD548(ctx, base);
	// li r26,0
	ctx.r26.s64 = 0;
loc_822151F4:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b20b8
	ctx.lr = 0x822151FC;
	sub_822B20B8(ctx, base);
	// lwz r31,264(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 264);
	// clrlwi r27,r3,16
	ctx.r27.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82215440
	if (ctx.cr6.eq) goto loc_82215440;
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-31961
	ctx.r10.s64 = -2094596096;
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// addi r30,r11,-27184
	ctx.r30.s64 = ctx.r11.s64 + -27184;
	// addi r28,r10,-25976
	ctx.r28.s64 = ctx.r10.s64 + -25976;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x822152c4
	if (ctx.cr6.eq) goto loc_822152C4;
	// lhz r10,38(r28)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r28.u32 + 38);
	// clrlwi r29,r27,16
	ctx.r29.u64 = ctx.r27.u32 & 0xFFFF;
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82215248
	if (ctx.cr6.eq) goto loc_82215248;
	// lhz r10,176(r28)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r28.u32 + 176);
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x822152c4
	if (!ctx.cr6.eq) goto loc_822152C4;
loc_82215248:
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r10,r1,76
	ctx.r10.s64 = ctx.r1.s64 + 76;
	// addi r11,r30,-4
	ctx.r11.s64 = ctx.r30.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82215258:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82215258
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82215258;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r5,r31,28
	ctx.r5.s64 = ctx.r31.s64 + 28;
	// lis r8,129
	ctx.r8.s64 = 8454144;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// ori r8,r8,17
	ctx.r8.u64 = ctx.r8.u64 | 17;
	// lfs f0,13220(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 13220);
	ctx.f0.f64 = double(temp.f32);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lwz r7,256(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// bl 0x821fe618
	ctx.lr = 0x82215294;
	sub_821FE618(ctx, base);
	// lbz r9,152(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 152);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822152c4
	if (ctx.cr6.eq) goto loc_822152C4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822a13a0
	ctx.lr = 0x822152A8;
	sub_822A13A0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,30632
	ctx.r4.s64 = ctx.r11.s64 + 30632;
	// li r3,23
	ctx.r3.s64 = 23;
	// bl 0x82280c30
	ctx.lr = 0x822152BC;
	sub_82280C30(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_822152C4:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x822152e0
	if (!ctx.cr6.eq) goto loc_822152E0;
	// rlwinm r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82215378
	if (ctx.cr6.eq) goto loc_82215378;
loc_822152E0:
	// lhz r10,176(r28)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r28.u32 + 176);
	// clrlwi r29,r27,16
	ctx.r29.u64 = ctx.r27.u32 & 0xFFFF;
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82215378
	if (!ctx.cr6.eq) goto loc_82215378;
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r10,r1,76
	ctx.r10.s64 = ctx.r1.s64 + 76;
	// addi r11,r30,-4
	ctx.r11.s64 = ctx.r30.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82215300:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82215300
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82215300;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r5,r31,28
	ctx.r5.s64 = ctx.r31.s64 + 28;
	// lis r8,129
	ctx.r8.s64 = 8454144;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// ori r8,r8,17
	ctx.r8.u64 = ctx.r8.u64 | 17;
	// lfs f0,-20412(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -20412);
	ctx.f0.f64 = double(temp.f32);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r7,256(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// bl 0x821fe618
	ctx.lr = 0x8221533C;
	sub_821FE618(ctx, base);
	// lbz r9,152(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 152);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82215378
	if (ctx.cr6.eq) goto loc_82215378;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822a13a0
	ctx.lr = 0x82215350;
	sub_822A13A0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,30632
	ctx.r4.s64 = ctx.r11.s64 + 30632;
	// li r3,23
	ctx.r3.s64 = 23;
	// bl 0x82280c30
	ctx.lr = 0x82215364;
	sub_82280C30(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8221544c
	if (ctx.cr6.eq) goto loc_8221544C;
	// lhz r27,38(r28)
	ctx.r27.u64 = PPC_LOAD_U16(ctx.r28.u32 + 38);
loc_82215378:
	// lhz r9,176(r28)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r28.u32 + 176);
	// clrlwi r11,r27,16
	ctx.r11.u64 = ctx.r27.u32 & 0xFFFF;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x822153b4
	if (!ctx.cr6.eq) goto loc_822153B4;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r10,60
	ctx.r10.s64 = 60;
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwinm r9,r11,0,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// stw r10,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r10.u32);
	// li r4,6
	ctx.r4.s64 = 6;
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8222f978
	ctx.lr = 0x822153AC;
	sub_8222F978(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_822153B4:
	// lhz r9,38(r28)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r28.u32 + 38);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x822153f0
	if (!ctx.cr6.eq) goto loc_822153F0;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,40
	ctx.r9.s64 = 40;
	// rlwimi r11,r10,1,30,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 1) & 0x3) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFFC);
	// stw r9,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r9.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8222f978
	ctx.lr = 0x822153E8;
	sub_8222F978(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_822153F0:
	// lhz r10,138(r28)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r28.u32 + 138);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8221544c
	if (!ctx.cr6.eq) goto loc_8221544C;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82215414
	if (!ctx.cr6.eq) goto loc_82215414;
	// lfs f0,268(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,348(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 348, temp.u32);
loc_82215414:
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,11
	ctx.r9.s64 = 11;
	// rlwimi r11,r10,0,30,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x3) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFFC);
	// stw r9,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r9.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8222f978
	ctx.lr = 0x82215438;
	sub_8222F978(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_82215440:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,30588
	ctx.r3.s64 = ctx.r11.s64 + 30588;
	// bl 0x822ad350
	ctx.lr = 0x8221544C;
	sub_822AD350(ctx, base);
loc_8221544C:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822151B0) {
	__imp__sub_822151B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82215454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82215454) {
	__imp__sub_82215454(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82215458) {
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
	// cmplwi cr6,r10,5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 5, ctx.xer);
	// bne cr6,0x82215490
	if (!ctx.cr6.eq) goto loc_82215490;
	// bl 0x8235f690
	ctx.lr = 0x8221547C;
	sub_8235F690(ctx, base);
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
loc_82215490:
	// bl 0x8220ed10
	ctx.lr = 0x82215494;
	sub_8220ED10(ctx, base);
	// lwz r11,264(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 264);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822154b0
	if (ctx.cr6.eq) goto loc_822154B0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,30752
	ctx.r3.s64 = ctx.r11.s64 + 30752;
	// bl 0x822ad350
	ctx.lr = 0x822154B0;
	sub_822AD350(ctx, base);
loc_822154B0:
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// lhz r10,126(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 126);
	// addi r9,r11,9624
	ctx.r9.s64 = ctx.r11.s64 + 9624;
	// lwz r11,2912(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 2912);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x822154d4
	if (!ctx.cr6.eq) goto loc_822154D4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,30712
	ctx.r3.s64 = ctx.r11.s64 + 30712;
	// bl 0x822ad350
	ctx.lr = 0x822154D4;
	sub_822AD350(ctx, base);
loc_822154D4:
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r10,r11,-25976
	ctx.r10.s64 = ctx.r11.s64 + -25976;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lhz r4,46(r10)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r10.u32 + 46);
	// bl 0x82229da8
	ctx.lr = 0x822154EC;
	sub_82229DA8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222f680
	ctx.lr = 0x822154F4;
	sub_8222F680(ctx, base);
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

PPC_WEAK_FUNC(sub_82215458) {
	__imp__sub_82215458(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82215508) {
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
	// stw r3,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r3.u32);
	// lhz r10,134(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 134);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82215540
	if (!ctx.cr6.eq) goto loc_82215540;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// lhz r9,132(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 132);
	// addi r11,r10,26552
	ctx.r11.s64 = ctx.r10.s64 + 26552;
	// mulli r10,r9,624
	ctx.r10.s64 = ctx.r9.s64 * 624;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x82215550
	goto loc_82215550;
loc_82215540:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x8221554C;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_82215550:
	// lwz r11,272(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82215578
	if (!ctx.cr6.eq) goto loc_82215578;
	// lhz r3,292(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 292);
	// bl 0x822a13a0
	ctx.lr = 0x82215564;
	sub_822A13A0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,30784
	ctx.r3.s64 = ctx.r11.s64 + 30784;
	// bl 0x822e84f0
	ctx.lr = 0x82215574;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x82215578;
	sub_822AD350(ctx, base);
loc_82215578:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,272(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// bl 0x8223fae0
	ctx.lr = 0x82215584;
	sub_8223FAE0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822ad078
	ctx.lr = 0x8221558C;
	sub_822AD078(ctx, base);
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

PPC_WEAK_FUNC(sub_82215508) {
	__imp__sub_82215508(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822155A0) {
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
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,640
	ctx.r31.s64 = 41943040;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r30,2047
	ctx.r30.s64 = 2047;
	// ori r31,r31,59441
	ctx.r31.u64 = ctx.r31.u64 | 59441;
	// bl 0x822b2498
	ctx.lr = 0x822155CC;
	sub_822B2498(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822b2498
	ctx.lr = 0x822155D8;
	sub_822B2498(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x822b1c50
	ctx.lr = 0x822155E0;
	sub_822B1C50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822155f0
	if (!ctx.cr6.eq) goto loc_822155F0;
	// lis r31,128
	ctx.r31.s64 = 8388608;
	// ori r31,r31,10289
	ctx.r31.u64 = ctx.r31.u64 | 10289;
loc_822155F0:
	// bl 0x822acb68
	ctx.lr = 0x822155F4;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// ble cr6,0x82215628
	if (!ctx.cr6.gt) goto loc_82215628;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x822b28d0
	ctx.lr = 0x82215604;
	sub_822B28D0(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x82215628
	if (!ctx.cr6.eq) goto loc_82215628;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x822b29b0
	ctx.lr = 0x82215614;
	sub_822B29B0(ctx, base);
	// cmpwi cr6,r3,22
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 22, ctx.xer);
	// bne cr6,0x82215628
	if (!ctx.cr6.eq) goto loc_82215628;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82229bf0
	ctx.lr = 0x82215624;
	sub_82229BF0(ctx, base);
	// lhz r30,126(r3)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r3.u32 + 126);
loc_82215628:
	// bl 0x822acb68
	ctx.lr = 0x8221562C;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4, ctx.xer);
	// ble cr6,0x82215648
	if (!ctx.cr6.gt) goto loc_82215648;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x822b1c50
	ctx.lr = 0x8221563C;
	sub_822B1C50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82215648
	if (ctx.cr6.eq) goto loc_82215648;
	// ori r31,r31,1024
	ctx.r31.u64 = ctx.r31.u64 | 1024;
loc_82215648:
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x821fe6a8
	ctx.lr = 0x82215664;
	sub_821FE6A8(ctx, base);
	// bl 0x822ad190
	ctx.lr = 0x82215668;
	sub_822AD190(ctx, base);
	// lfs f1,144(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822acc78
	ctx.lr = 0x82215670;
	sub_822ACC78(ctx, base);
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// addi r31,r11,-25976
	ctx.r31.s64 = ctx.r11.s64 + -25976;
	// lhz r3,78(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 78);
	// bl 0x822ad280
	ctx.lr = 0x82215680;
	sub_822AD280(ctx, base);
	// lfs f13,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
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
	// lfs f0,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f0.f64 = double(temp.f32);
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
	// bl 0x822ad078
	ctx.lr = 0x822156C8;
	sub_822AD078(ctx, base);
	// lhz r3,134(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 134);
	// bl 0x822ad280
	ctx.lr = 0x822156D0;
	sub_822AD280(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82276090
	ctx.lr = 0x822156D8;
	sub_82276090(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r11,2047
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2047, ctx.xer);
	// beq cr6,0x82215704
	if (ctx.cr6.eq) goto loc_82215704;
	// cmplwi cr6,r11,2046
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2046, ctx.xer);
	// beq cr6,0x82215704
	if (ctx.cr6.eq) goto loc_82215704;
	// lis r9,-32052
	ctx.r9.s64 = -2100559872;
	// mulli r10,r11,624
	ctx.r10.s64 = ctx.r11.s64 * 624;
	// addi r11,r9,26552
	ctx.r11.s64 = ctx.r9.s64 + 26552;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82229b60
	ctx.lr = 0x82215700;
	sub_82229B60(ctx, base);
	// b 0x82215708
	goto loc_82215708;
loc_82215704:
	// bl 0x822acd78
	ctx.lr = 0x82215708;
	sub_822ACD78(ctx, base);
loc_82215708:
	// lhz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 68);
	// bl 0x822ad280
	ctx.lr = 0x82215710;
	sub_822AD280(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,144(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x8221574c
	if (!ctx.cr6.lt) goto loc_8221574C;
	// addi r3,r1,148
	ctx.r3.s64 = ctx.r1.s64 + 148;
	// bl 0x822ad078
	ctx.lr = 0x8221572C;
	sub_822AD078(ctx, base);
	// lhz r3,124(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 124);
	// bl 0x822ad280
	ctx.lr = 0x82215734;
	sub_822AD280(ctx, base);
	// lwz r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// srawi r10,r11,20
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFFFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 20;
	// clrlwi r3,r10,27
	ctx.r3.u64 = ctx.r10.u32 & 0x1F;
	// bl 0x822ec0a0
	ctx.lr = 0x82215744;
	sub_822EC0A0(ctx, base);
	// bl 0x822aced0
	ctx.lr = 0x82215748;
	sub_822ACED0(ctx, base);
	// b 0x822157bc
	goto loc_822157BC;
loc_8221574C:
	// lfs f13,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lfs f12,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// lfs f10,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f9,f10
	ctx.f8.f64 = double(float(ctx.f9.f64 - ctx.f10.f64));
	// lfs f7,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f5,f6,f7
	ctx.f5.f64 = double(float(ctx.f6.f64 - ctx.f7.f64));
	// fmuls f4,f11,f11
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// fmadds f3,f8,f8,f4
	ctx.f3.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 + ctx.f4.f64));
	// fmadds f2,f5,f5,f3
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f5.f64 + ctx.f3.f64));
	// fsqrts f1,f2
	ctx.f1.f64 = double(float(sqrt(ctx.f2.f64)));
	// fneg f13,f1
	ctx.f13.u64 = ctx.f1.u64 ^ 0x8000000000000000;
	// fsel f12,f13,f0,f1
	ctx.f12.f64 = ctx.f13.f64 >= 0.0 ? ctx.f0.f64 : ctx.f1.f64;
	// fdivs f10,f0,f12
	ctx.f10.f64 = double(float(ctx.f0.f64 / ctx.f12.f64));
	// fmuls f9,f10,f5
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f5.f64));
	// stfs f9,128(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fmuls f7,f11,f10
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f10.f64));
	// stfs f7,132(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// fmuls f6,f8,f10
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f10.f64));
	// stfs f6,136(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// bl 0x822ad078
	ctx.lr = 0x822157AC;
	sub_822AD078(ctx, base);
	// lhz r3,124(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 124);
	// bl 0x822ad280
	ctx.lr = 0x822157B4;
	sub_822AD280(ctx, base);
	// lhz r3,122(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 122);
	// bl 0x822acff0
	ctx.lr = 0x822157BC;
	sub_822ACFF0(ctx, base);
loc_822157BC:
	// lhz r3,182(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 182);
	// bl 0x822ad280
	ctx.lr = 0x822157C4;
	sub_822AD280(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
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

PPC_WEAK_FUNC(sub_822155A0) {
	__imp__sub_822155A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822157DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822157DC) {
	__imp__sub_822157DC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822157E0) {
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
	// lis r30,640
	ctx.r30.s64 = 41943040;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r31,2047
	ctx.r31.s64 = 2047;
	// ori r30,r30,59441
	ctx.r30.u64 = ctx.r30.u64 | 59441;
	// bl 0x822b2498
	ctx.lr = 0x8221580C;
	sub_822B2498(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822b2498
	ctx.lr = 0x82215818;
	sub_822B2498(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x822b1c50
	ctx.lr = 0x82215820;
	sub_822B1C50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82215830
	if (!ctx.cr6.eq) goto loc_82215830;
	// lis r30,128
	ctx.r30.s64 = 8388608;
	// ori r30,r30,10289
	ctx.r30.u64 = ctx.r30.u64 | 10289;
loc_82215830:
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x822b28d0
	ctx.lr = 0x82215838;
	sub_822B28D0(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x8221585c
	if (!ctx.cr6.eq) goto loc_8221585C;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x822b29b0
	ctx.lr = 0x82215848;
	sub_822B29B0(ctx, base);
	// cmpwi cr6,r3,22
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 22, ctx.xer);
	// bne cr6,0x8221585c
	if (!ctx.cr6.eq) goto loc_8221585C;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82229bf0
	ctx.lr = 0x82215858;
	sub_82229BF0(ctx, base);
	// lhz r31,126(r3)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r3.u32 + 126);
loc_8221585C:
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r6,2047
	ctx.r6.s64 = 2047;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x821fe770
	ctx.lr = 0x82215878;
	sub_821FE770(ctx, base);
	// bl 0x822acb78
	ctx.lr = 0x8221587C;
	sub_822ACB78(ctx, base);
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

PPC_WEAK_FUNC(sub_822157E0) {
	__imp__sub_822157E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82215894) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82215894) {
	__imp__sub_82215894(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82215898) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,640
	ctx.r30.s64 = 41943040;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r31,2047
	ctx.r31.s64 = 2047;
	// ori r30,r30,55299
	ctx.r30.u64 = ctx.r30.u64 | 55299;
	// bl 0x822b2498
	ctx.lr = 0x822158C4;
	sub_822B2498(ctx, base);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822b2498
	ctx.lr = 0x822158D0;
	sub_822B2498(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x822b1c50
	ctx.lr = 0x822158D8;
	sub_822B1C50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822158e8
	if (!ctx.cr6.eq) goto loc_822158E8;
	// lis r30,128
	ctx.r30.s64 = 8388608;
	// ori r30,r30,6147
	ctx.r30.u64 = ctx.r30.u64 | 6147;
loc_822158E8:
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x822b28d0
	ctx.lr = 0x822158F0;
	sub_822B28D0(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x82215914
	if (!ctx.cr6.eq) goto loc_82215914;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x822b29b0
	ctx.lr = 0x82215900;
	sub_822B29B0(ctx, base);
	// cmpwi cr6,r3,22
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 22, ctx.xer);
	// bne cr6,0x82215914
	if (!ctx.cr6.eq) goto loc_82215914;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82229bf0
	ctx.lr = 0x82215910;
	sub_82229BF0(ctx, base);
	// lhz r31,126(r3)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r3.u32 + 126);
loc_82215914:
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821fe7b8
	ctx.lr = 0x8221592C;
	sub_821FE7B8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8221595c
	if (!ctx.cr6.eq) goto loc_8221595C;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82338210
	ctx.lr = 0x82215944;
	sub_82338210(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f0,24264(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24264);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x8221595c
	if (!ctx.cr6.lt) goto loc_8221595C;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_8221595C:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// bl 0x822acb78
	ctx.lr = 0x8221596C;
	sub_822ACB78(ctx, base);
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

PPC_WEAK_FUNC(sub_82215898) {
	__imp__sub_82215898(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82215984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82215984) {
	__imp__sub_82215984(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82215988) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b2498
	ctx.lr = 0x822159A0;
	sub_822B2498(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822b2498
	ctx.lr = 0x822159AC;
	sub_822B2498(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r8,130
	ctx.r8.s64 = 8519680;
	// addi r6,r11,-9672
	ctx.r6.s64 = ctx.r11.s64 + -9672;
	// ori r8,r8,21
	ctx.r8.u64 = ctx.r8.u64 | 21;
	// li r7,2047
	ctx.r7.s64 = 2047;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x821fe618
	ctx.lr = 0x822159D0;
	sub_821FE618(ctx, base);
	// lfs f13,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
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
	// lfs f0,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
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
	// bl 0x822ad078
	ctx.lr = 0x82215A18;
	sub_822AD078(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82215988) {
	__imp__sub_82215988(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82215A28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b2498
	ctx.lr = 0x82215A40;
	sub_822B2498(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822b2498
	ctx.lr = 0x82215A4C;
	sub_822B2498(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r8,130
	ctx.r8.s64 = 8519680;
	// addi r6,r11,-27184
	ctx.r6.s64 = ctx.r11.s64 + -27184;
	// ori r8,r8,21
	ctx.r8.u64 = ctx.r8.u64 | 21;
	// li r7,2047
	ctx.r7.s64 = 2047;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x821fe618
	ctx.lr = 0x82215A70;
	sub_821FE618(ctx, base);
	// lfs f13,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
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
	// lfs f0,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
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
	// bl 0x822ad078
	ctx.lr = 0x82215AB8;
	sub_822AD078(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82215A28) {
	__imp__sub_82215A28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82215AC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stfd f30,-24(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f30.u64);
	// stfd f31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f31.u64);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b2498
	ctx.lr = 0x82215AE8;
	sub_822B2498(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822b1fb0
	ctx.lr = 0x82215AF0;
	sub_822B1FB0(ctx, base);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x822acb68
	ctx.lr = 0x82215AF8;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,2
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// ble cr6,0x82215b10
	if (!ctx.cr6.gt) goto loc_82215B10;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x822b1fb0
	ctx.lr = 0x82215B08;
	sub_822B1FB0(ctx, base);
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// b 0x82215b18
	goto loc_82215B18;
loc_82215B10:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f30,12240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12240);
	ctx.f30.f64 = double(temp.f32);
loc_82215B18:
	// bl 0x822acb68
	ctx.lr = 0x82215B1C;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// ble cr6,0x82215b30
	if (!ctx.cr6.gt) goto loc_82215B30;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x822b1fb0
	ctx.lr = 0x82215B2C;
	sub_822B1FB0(ctx, base);
	// b 0x82215b40
	goto loc_82215B40;
loc_82215B30:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,27440(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 27440);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f31,f0
	ctx.f13.f64 = double(float(ctx.f31.f64 - ctx.f0.f64));
	// fsel f1,f13,f31,f0
	ctx.f1.f64 = ctx.f13.f64 >= 0.0 ? ctx.f31.f64 : ctx.f0.f64;
loc_82215B40:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f0,f30
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f30.f64));
	// lfs f12,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f0,f1
	ctx.f11.f64 = double(float(ctx.f0.f64 + ctx.f1.f64));
	// lfs f10,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f10.f64 = double(temp.f32);
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lis r8,130
	ctx.r8.s64 = 8519680;
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// li r7,2047
	ctx.r7.s64 = 2047;
	// lfs f0,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// ori r8,r8,21
	ctx.r8.u64 = ctx.r8.u64 | 21;
	// stfs f10,100(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stfs f11,88(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// stfs f31,136(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f31,140(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stfs f31,144(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f31,148(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// bl 0x821fe618
	ctx.lr = 0x82215BA4;
	sub_821FE618(ctx, base);
	// lbz r9,201(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 201);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82215bbc
	if (ctx.cr6.eq) goto loc_82215BBC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,30840
	ctx.r3.s64 = ctx.r11.s64 + 30840;
	// bl 0x822ad350
	ctx.lr = 0x82215BBC;
	sub_822AD350(ctx, base);
loc_82215BBC:
	// lfs f13,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lfs f12,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// lfs f10,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f0,f13
	ctx.f9.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f8,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f10,f12
	ctx.f7.f64 = double(float(ctx.f10.f64 - ctx.f12.f64));
	// fsubs f6,f8,f11
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f11.f64));
	// lfs f0,160(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f5,f9,f0,f13
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f0.f64 + ctx.f13.f64));
	// stfs f5,112(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmadds f4,f7,f0,f12
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f0.f64 + ctx.f12.f64));
	// stfs f4,116(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fmadds f3,f6,f0,f11
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f0.f64 + ctx.f11.f64));
	// stfs f3,120(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// bl 0x822ad078
	ctx.lr = 0x82215C04;
	sub_822AD078(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f30,-24(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// lfd f31,-16(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82215AC8) {
	__imp__sub_82215AC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82215C1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82215C1C) {
	__imp__sub_82215C1C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82215C20) {
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
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b1c50
	ctx.lr = 0x82215C38;
	sub_822B1C50(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822acb68
	ctx.lr = 0x82215C40;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x82215c54
	if (ctx.cr6.eq) goto loc_82215C54;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,30952
	ctx.r3.s64 = ctx.r11.s64 + 30952;
	// bl 0x822ad350
	ctx.lr = 0x82215C54;
	sub_822AD350(ctx, base);
loc_82215C54:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bgt cr6,0x82215c90
	if (ctx.cr6.gt) goto loc_82215C90;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r11,30928
	ctx.r4.s64 = ctx.r11.s64 + 30928;
	// li r3,23
	ctx.r3.s64 = 23;
	// bl 0x82280900
	ctx.lr = 0x82215C70;
	sub_82280900(ctx, base);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r3,r10,30884
	ctx.r3.s64 = ctx.r10.s64 + 30884;
	// bl 0x822ad350
	ctx.lr = 0x82215C7C;
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
loc_82215C90:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8222fdd8
	ctx.lr = 0x82215C9C;
	sub_8222FDD8(ctx, base);
	// bl 0x822acbf8
	ctx.lr = 0x82215CA0;
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

PPC_WEAK_FUNC(sub_82215C20) {
	__imp__sub_82215C20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82215CB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82215CB4) {
	__imp__sub_82215CB4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82215CB8) {
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
	// bl 0x822acb68
	ctx.lr = 0x82215CC8;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x82215cdc
	if (ctx.cr6.eq) goto loc_82215CDC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,30980
	ctx.r3.s64 = ctx.r11.s64 + 30980;
	// bl 0x822ad350
	ctx.lr = 0x82215CDC;
	sub_822AD350(ctx, base);
loc_82215CDC:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b1fb0
	ctx.lr = 0x82215CE4;
	sub_822B1FB0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f2,f1
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f1.f64;
	// lfs f1,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8222fd88
	ctx.lr = 0x82215CF4;
	sub_8222FD88(ctx, base);
	// bl 0x822acc78
	ctx.lr = 0x82215CF8;
	sub_822ACC78(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82215CB8) {
	__imp__sub_82215CB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82215D08) {
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
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b1c50
	ctx.lr = 0x82215D24;
	sub_822B1C50(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822b1c50
	ctx.lr = 0x82215D30;
	sub_822B1C50(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpw cr6,r3,r31
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r31.s32, ctx.xer);
	// bgt cr6,0x82215d60
	if (ctx.cr6.gt) goto loc_82215D60;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,31084
	ctx.r4.s64 = ctx.r11.s64 + 31084;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r3,23
	ctx.r3.s64 = 23;
	// bl 0x82280900
	ctx.lr = 0x82215D54;
	sub_82280900(ctx, base);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r3,r10,31016
	ctx.r3.s64 = ctx.r10.s64 + 31016;
	// bl 0x822ad350
	ctx.lr = 0x82215D60;
	sub_822AD350(ctx, base);
loc_82215D60:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222fdd8
	ctx.lr = 0x82215D6C;
	sub_8222FDD8(ctx, base);
	// bl 0x822acbf8
	ctx.lr = 0x82215D70;
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

PPC_WEAK_FUNC(sub_82215D08) {
	__imp__sub_82215D08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82215D88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stfd f30,-24(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f30.u64);
	// stfd f31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b1fb0
	ctx.lr = 0x82215DA4;
	sub_822B1FB0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x822b1fb0
	ctx.lr = 0x82215DB0;
	sub_822B1FB0(ctx, base);
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// fcmpu cr6,f1,f31
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// bgt cr6,0x82215df0
	if (ctx.cr6.gt) goto loc_82215DF0;
	// stfd f1,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f1.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// stfd f31,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f31.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// fmr f2,f1
	ctx.f2.f64 = ctx.f1.f64;
	// li r3,23
	ctx.r3.s64 = 23;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// addi r4,r11,31196
	ctx.r4.s64 = ctx.r11.s64 + 31196;
	// bl 0x82280900
	ctx.lr = 0x82215DE4;
	sub_82280900(ctx, base);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r3,r10,31120
	ctx.r3.s64 = ctx.r10.s64 + 31120;
	// bl 0x822ad350
	ctx.lr = 0x82215DF0;
	sub_822AD350(ctx, base);
loc_82215DF0:
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8222fd88
	ctx.lr = 0x82215DFC;
	sub_8222FD88(ctx, base);
	// bl 0x822acc78
	ctx.lr = 0x82215E00;
	sub_822ACC78(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f30,-24(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// lfd f31,-16(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82215D88) {
	__imp__sub_82215D88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82215E18) {
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
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b1fb0
	ctx.lr = 0x82215E2C;
	sub_822B1FB0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,5524(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5524);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// bl 0x823de720
	ctx.lr = 0x82215E3C;
	sub_823DE720(ctx, base);
	// frsp f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64));
	// bl 0x822acc78
	ctx.lr = 0x82215E44;
	sub_822ACC78(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82215E18) {
	__imp__sub_82215E18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82215E54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82215E54) {
	__imp__sub_82215E54(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82215E58) {
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
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b1fb0
	ctx.lr = 0x82215E6C;
	sub_822B1FB0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,5524(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5524);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// bl 0x823de800
	ctx.lr = 0x82215E7C;
	sub_823DE800(ctx, base);
	// frsp f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64));
	// bl 0x822acc78
	ctx.lr = 0x82215E84;
	sub_822ACC78(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82215E58) {
	__imp__sub_82215E58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82215E94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82215E94) {
	__imp__sub_82215E94(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82215E98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stfd f30,-24(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f30.u64);
	// stfd f31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b1fb0
	ctx.lr = 0x82215EB4;
	sub_822B1FB0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,5524(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5524);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f31,f1,f0
	ctx.f31.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x823de720
	ctx.lr = 0x82215EC8;
	sub_823DE720(ctx, base);
	// frsp f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = double(float(ctx.f1.f64));
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x823de800
	ctx.lr = 0x82215ED4;
	sub_823DE800(ctx, base);
	// frsp f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f1.f64));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,5484(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bne cr6,0x82215ef4
	if (!ctx.cr6.eq) goto loc_82215EF4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,31232
	ctx.r3.s64 = ctx.r11.s64 + 31232;
	// bl 0x822ad350
	ctx.lr = 0x82215EF4;
	sub_822AD350(ctx, base);
loc_82215EF4:
	// fdivs f1,f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f30.f64 / ctx.f31.f64));
	// bl 0x822acc78
	ctx.lr = 0x82215EFC;
	sub_822ACC78(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f30,-24(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// lfd f31,-16(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82215E98) {
	__imp__sub_82215E98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82215F14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82215F14) {
	__imp__sub_82215F14(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82215F18) {
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
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b1fb0
	ctx.lr = 0x82215F30;
	sub_822B1FB0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// lfs f0,2424(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2424);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x82215f54
	if (ctx.cr6.lt) goto loc_82215F54;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x82215f70
	if (!ctx.cr6.gt) goto loc_82215F70;
loc_82215F54:
	// stfd f31,24(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 24, ctx.f31.u64);
	// ld r4,24(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 24);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// addi r3,r11,31244
	ctx.r3.s64 = ctx.r11.s64 + 31244;
	// bl 0x822e84f0
	ctx.lr = 0x82215F6C;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x82215F70;
	sub_822AD350(ctx, base);
loc_82215F70:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x823ded00
	ctx.lr = 0x82215F78;
	sub_823DED00(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,12336(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12336);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bl 0x822acc78
	ctx.lr = 0x82215F8C;
	sub_822ACC78(ctx, base);
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

PPC_WEAK_FUNC(sub_82215F18) {
	__imp__sub_82215F18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82215FA0) {
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
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b1fb0
	ctx.lr = 0x82215FB8;
	sub_822B1FB0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// lfs f0,2424(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2424);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x82215fdc
	if (ctx.cr6.lt) goto loc_82215FDC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x82215ff8
	if (!ctx.cr6.gt) goto loc_82215FF8;
loc_82215FDC:
	// stfd f31,24(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 24, ctx.f31.u64);
	// ld r4,24(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 24);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// addi r3,r11,31244
	ctx.r3.s64 = ctx.r11.s64 + 31244;
	// bl 0x822e84f0
	ctx.lr = 0x82215FF4;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x82215FF8;
	sub_822AD350(ctx, base);
loc_82215FF8:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x823dedc8
	ctx.lr = 0x82216000;
	sub_823DEDC8(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,12336(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12336);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bl 0x822acc78
	ctx.lr = 0x82216014;
	sub_822ACC78(ctx, base);
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

PPC_WEAK_FUNC(sub_82215FA0) {
	__imp__sub_82215FA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82216028) {
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
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b1fb0
	ctx.lr = 0x8221603C;
	sub_822B1FB0(ctx, base);
	// bl 0x823de8e0
	ctx.lr = 0x82216040;
	sub_823DE8E0(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,12336(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12336);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bl 0x822acc78
	ctx.lr = 0x82216054;
	sub_822ACC78(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82216028) {
	__imp__sub_82216028(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82216064) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82216064) {
	__imp__sub_82216064(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82216068) {
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
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b28d0
	ctx.lr = 0x8221607C;
	sub_822B28D0(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x82216108
	if (ctx.cr6.eq) goto loc_82216108;
	// cmpwi cr6,r3,5
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 5, ctx.xer);
	// beq cr6,0x822160e0
	if (ctx.cr6.eq) goto loc_822160E0;
	// cmpwi cr6,r3,6
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 6, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq cr6,0x822160c8
	if (ctx.cr6.eq) goto loc_822160C8;
	// bl 0x822b2938
	ctx.lr = 0x8221609C;
	sub_822B2938(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,31260
	ctx.r3.s64 = ctx.r11.s64 + 31260;
	// bl 0x822e84f0
	ctx.lr = 0x822160AC;
	sub_822E84F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822ad4e0
	ctx.lr = 0x822160B8;
	sub_822AD4E0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_822160C8:
	// bl 0x822b1c50
	ctx.lr = 0x822160CC;
	sub_822B1C50(ctx, base);
	// bl 0x822acbf8
	ctx.lr = 0x822160D0;
	sub_822ACBF8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_822160E0:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b1fb0
	ctx.lr = 0x822160E8;
	sub_822B1FB0(ctx, base);
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x822acbf8
	ctx.lr = 0x822160F8;
	sub_822ACBF8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82216108:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b2288
	ctx.lr = 0x82216110;
	sub_822B2288(ctx, base);
	// bl 0x823deaf8
	ctx.lr = 0x82216114;
	sub_823DEAF8(ctx, base);
	// bl 0x822acbf8
	ctx.lr = 0x82216118;
	sub_822ACBF8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82216068) {
	__imp__sub_82216068(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82216128) {
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
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b1fb0
	ctx.lr = 0x8221613C;
	sub_822B1FB0(ctx, base);
	// fabs f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// bl 0x822acc78
	ctx.lr = 0x82216144;
	sub_822ACC78(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82216128) {
	__imp__sub_82216128(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82216154) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82216154) {
	__imp__sub_82216154(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82216158) {
	PPC_FUNC_PROLOGUE();
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
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822b1fb0
	ctx.lr = 0x82216170;
	sub_822B1FB0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x822b1fb0
	ctx.lr = 0x8221617C;
	sub_822B1FB0(ctx, base);
	// fsubs f0,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f31.f64 - ctx.f1.f64));
	// fsel f1,f0,f1,f31
	ctx.f1.f64 = ctx.f0.f64 >= 0.0 ? ctx.f1.f64 : ctx.f31.f64;
	// bl 0x822acc78
	ctx.lr = 0x82216188;
	sub_822ACC78(ctx, base);
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

PPC_WEAK_FUNC(sub_82216158) {
	__imp__sub_82216158(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221619C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8221619C) {
	__imp__sub_8221619C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822161A0) {
	PPC_FUNC_PROLOGUE();
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
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822b1fb0
	ctx.lr = 0x822161B8;
	sub_822B1FB0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x822b1fb0
	ctx.lr = 0x822161C4;
	sub_822B1FB0(ctx, base);
	// fsubs f0,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 - ctx.f31.f64));
	// fsel f1,f0,f1,f31
	ctx.f1.f64 = ctx.f0.f64 >= 0.0 ? ctx.f1.f64 : ctx.f31.f64;
	// bl 0x822acc78
	ctx.lr = 0x822161D0;
	sub_822ACC78(ctx, base);
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

PPC_WEAK_FUNC(sub_822161A0) {
	__imp__sub_822161A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822161E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822161E4) {
	__imp__sub_822161E4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822161E8) {
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
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b1fb0
	ctx.lr = 0x822161FC;
	sub_822B1FB0(ctx, base);
	// bl 0x823dde20
	ctx.lr = 0x82216200;
	sub_823DDE20(ctx, base);
	// frsp f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64));
	// bl 0x822acc78
	ctx.lr = 0x82216208;
	sub_822ACC78(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822161E8) {
	__imp__sub_822161E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82216218) {
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
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b1fb0
	ctx.lr = 0x8221622C;
	sub_822B1FB0(ctx, base);
	// bl 0x823df940
	ctx.lr = 0x82216230;
	sub_823DF940(ctx, base);
	// frsp f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64));
	// bl 0x822acc78
	ctx.lr = 0x82216238;
	sub_822ACC78(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82216218) {
	__imp__sub_82216218(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82216248) {
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
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b1fb0
	ctx.lr = 0x8221625C;
	sub_822B1FB0(ctx, base);
	// bl 0x823e02f0
	ctx.lr = 0x82216260;
	sub_823E02F0(ctx, base);
	// frsp f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64));
	// bl 0x822acc78
	ctx.lr = 0x82216268;
	sub_822ACC78(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82216248) {
	__imp__sub_82216248(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82216278) {
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
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b1fb0
	ctx.lr = 0x8221628C;
	sub_822B1FB0(ctx, base);
	// bl 0x823e0420
	ctx.lr = 0x82216290;
	sub_823E0420(ctx, base);
	// frsp f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64));
	// bl 0x822acc78
	ctx.lr = 0x82216298;
	sub_822ACC78(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82216278) {
	__imp__sub_82216278(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822162A8) {
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
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b1fb0
	ctx.lr = 0x822162BC;
	sub_822B1FB0(ctx, base);
	// fsqrts f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(sqrt(ctx.f1.f64)));
	// bl 0x822acc78
	ctx.lr = 0x822162C4;
	sub_822ACC78(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822162A8) {
	__imp__sub_822162A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822162D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822162D4) {
	__imp__sub_822162D4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822162D8) {
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
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b1fb0
	ctx.lr = 0x822162EC;
	sub_822B1FB0(ctx, base);
	// fmuls f1,f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f1.f64));
	// bl 0x822acc78
	ctx.lr = 0x822162F4;
	sub_822ACC78(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822162D8) {
	__imp__sub_822162D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82216304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82216304) {
	__imp__sub_82216304(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82216308) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stfd f30,-24(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f30.u64);
	// stfd f31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x822b1fb0
	ctx.lr = 0x82216324;
	sub_822B1FB0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x822b1fb0
	ctx.lr = 0x82216330;
	sub_822B1FB0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// bl 0x822b1fb0
	ctx.lr = 0x8221633C;
	sub_822B1FB0(ctx, base);
	// fsubs f0,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 - ctx.f31.f64));
	// fsubs f13,f30,f1
	ctx.f13.f64 = double(float(ctx.f30.f64 - ctx.f1.f64));
	// fsel f12,f0,f31,f1
	ctx.f12.f64 = ctx.f0.f64 >= 0.0 ? ctx.f31.f64 : ctx.f1.f64;
	// fsel f1,f13,f30,f12
	ctx.f1.f64 = ctx.f13.f64 >= 0.0 ? ctx.f30.f64 : ctx.f12.f64;
	// bl 0x822acc78
	ctx.lr = 0x82216350;
	sub_822ACC78(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f30,-24(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// lfd f31,-16(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82216308) {
	__imp__sub_82216308(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82216368) {
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
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b1fb0
	ctx.lr = 0x8221637C;
	sub_822B1FB0(ctx, base);
	// bl 0x822d77c0
	ctx.lr = 0x82216380;
	sub_822D77C0(ctx, base);
	// bl 0x822acc78
	ctx.lr = 0x82216384;
	sub_822ACC78(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82216368) {
	__imp__sub_82216368(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82216394) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82216394) {
	__imp__sub_82216394(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82216398) {
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
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b1fb0
	ctx.lr = 0x822163B0;
	sub_822B1FB0(ctx, base);
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
	ctx.lr = 0x822163CC;
	sub_823DDE20(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f0,2412(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2412);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f12,f31,f13
	ctx.f12.f64 = double(float(ctx.f31.f64 - ctx.f13.f64));
	// fmuls f1,f12,f0
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// bl 0x822acc78
	ctx.lr = 0x822163E4;
	sub_822ACC78(ctx, base);
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

PPC_WEAK_FUNC(sub_82216398) {
	__imp__sub_82216398(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822163F8) {
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
	ctx.lr = 0x82216408;
	__savefpr_28(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b2498
	ctx.lr = 0x82216418;
	sub_822B2498(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822b2498
	ctx.lr = 0x82216424;
	sub_822B2498(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x822b2498
	ctx.lr = 0x82216430;
	sub_822B2498(ctx, base);
	// lfs f13,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fsubs f31,f13,f12
	ctx.f31.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// lfs f11,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f30,f11,f10
	ctx.f30.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lfs f9,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f29,f9,f8
	ctx.f29.f64 = double(float(ctx.f9.f64 - ctx.f8.f64));
	// lfs f0,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f7,f31,f31
	ctx.f7.f64 = double(float(ctx.f31.f64 * ctx.f31.f64));
	// fmadds f6,f30,f30,f7
	ctx.f6.f64 = double(float(ctx.f30.f64 * ctx.f30.f64 + ctx.f7.f64));
	// fmadds f28,f29,f29,f6
	ctx.f28.f64 = double(float(ctx.f29.f64 * ctx.f29.f64 + ctx.f6.f64));
	// fcmpu cr6,f28,f0
	ctx.cr6.compare(ctx.f28.f64, ctx.f0.f64);
	// bne cr6,0x82216480
	if (!ctx.cr6.eq) goto loc_82216480;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,31284
	ctx.r4.s64 = ctx.r11.s64 + 31284;
	// bl 0x822ad4e0
	ctx.lr = 0x82216480;
	sub_822AD4E0(ctx, base);
loc_82216480:
	// lfs f0,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lfs f8,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// fmuls f5,f12,f29
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f29.f64));
	// fmadds f4,f9,f31,f5
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f31.f64 + ctx.f5.f64));
	// fmadds f3,f6,f30,f4
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f30.f64 + ctx.f4.f64));
	// fdivs f2,f3,f28
	ctx.f2.f64 = double(float(ctx.f3.f64 / ctx.f28.f64));
	// fneg f1,f2
	ctx.f1.u64 = ctx.f2.u64 ^ 0x8000000000000000;
	// fmadds f0,f29,f1,f12
	ctx.f0.f64 = double(float(ctx.f29.f64 * ctx.f1.f64 + ctx.f12.f64));
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fmadds f13,f31,f1,f9
	ctx.f13.f64 = double(float(ctx.f31.f64 * ctx.f1.f64 + ctx.f9.f64));
	// stfs f13,132(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// fmadds f12,f30,f1,f6
	ctx.f12.f64 = double(float(ctx.f30.f64 * ctx.f1.f64 + ctx.f6.f64));
	// stfs f12,136(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// bl 0x822ad078
	ctx.lr = 0x822164D8;
	sub_822AD078(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x823de074
	ctx.lr = 0x822164E4;
	__restfpr_28(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822163F8) {
	__imp__sub_822163F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822164F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x823de024
	ctx.lr = 0x82216500;
	__savefpr_27(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b2498
	ctx.lr = 0x82216510;
	sub_822B2498(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822b2498
	ctx.lr = 0x8221651C;
	sub_822B2498(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x822b2498
	ctx.lr = 0x82216528;
	sub_822B2498(ctx, base);
	// lfs f11,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fsubs f31,f0,f11
	ctx.f31.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// lfs f13,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// lfs f10,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f30,f10,f13
	ctx.f30.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// lfs f12,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// lfs f9,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f29,f9,f12
	ctx.f29.f64 = double(float(ctx.f9.f64 - ctx.f12.f64));
	// lfs f27,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f27.f64 = double(temp.f32);
	// fmuls f8,f31,f31
	ctx.f8.f64 = double(float(ctx.f31.f64 * ctx.f31.f64));
	// fmadds f7,f30,f30,f8
	ctx.f7.f64 = double(float(ctx.f30.f64 * ctx.f30.f64 + ctx.f8.f64));
	// fmadds f28,f29,f29,f7
	ctx.f28.f64 = double(float(ctx.f29.f64 * ctx.f29.f64 + ctx.f7.f64));
	// fcmpu cr6,f28,f27
	ctx.cr6.compare(ctx.f28.f64, ctx.f27.f64);
	// bne cr6,0x82216584
	if (!ctx.cr6.eq) goto loc_82216584;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,31348
	ctx.r4.s64 = ctx.r11.s64 + 31348;
	// bl 0x822ad4e0
	ctx.lr = 0x82216578;
	sub_822AD4E0(ctx, base);
	// lfs f13,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
loc_82216584:
	// lfs f0,116(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f10,f0,f12
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// lfs f9,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f9,f11
	ctx.f8.f64 = double(float(ctx.f9.f64 - ctx.f11.f64));
	// lfs f7,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f7,f13
	ctx.f6.f64 = double(float(ctx.f7.f64 - ctx.f13.f64));
	// fmuls f5,f10,f29
	ctx.f5.f64 = double(float(ctx.f10.f64 * ctx.f29.f64));
	// fmadds f4,f8,f31,f5
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f31.f64 + ctx.f5.f64));
	// fmadds f3,f6,f30,f4
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f30.f64 + ctx.f4.f64));
	// fdivs f0,f3,f28
	ctx.f0.f64 = double(float(ctx.f3.f64 / ctx.f28.f64));
	// fcmpu cr6,f0,f27
	ctx.cr6.compare(ctx.f0.f64, ctx.f27.f64);
	// bge cr6,0x822165bc
	if (!ctx.cr6.lt) goto loc_822165BC;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// b 0x822165f0
	goto loc_822165F0;
loc_822165BC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f10,12168(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f10.f64 = double(temp.f32);
	// fcmpu cr6,f0,f10
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// ble cr6,0x822165d4
	if (!ctx.cr6.gt) goto loc_822165D4;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// b 0x822165f0
	goto loc_822165F0;
loc_822165D4:
	// fmadds f11,f31,f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f31.f64 * ctx.f0.f64 + ctx.f11.f64));
	// stfs f11,128(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fmadds f10,f29,f0,f12
	ctx.f10.f64 = double(float(ctx.f29.f64 * ctx.f0.f64 + ctx.f12.f64));
	// stfs f10,132(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// fmadds f9,f30,f0,f13
	ctx.f9.f64 = double(float(ctx.f30.f64 * ctx.f0.f64 + ctx.f13.f64));
	// stfs f9,136(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
loc_822165F0:
	// bl 0x822ad078
	ctx.lr = 0x822165F4;
	sub_822AD078(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x823de070
	ctx.lr = 0x82216600;
	__restfpr_27(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822164F0) {
	__imp__sub_822164F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221660C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8221660C) {
	__imp__sub_8221660C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82216610) {
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
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b2498
	ctx.lr = 0x82216628;
	sub_822B2498(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822b2498
	ctx.lr = 0x82216634;
	sub_822B2498(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f11,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f10,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 - ctx.f11.f64));
	// lfs f8,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f7,f8
	ctx.f6.f64 = double(float(ctx.f7.f64 - ctx.f8.f64));
	// fmuls f5,f12,f12
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f4,f9,f9,f5
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f5.f64));
	// fmadds f3,f6,f6,f4
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f4.f64));
	// fsqrts f1,f3
	ctx.f1.f64 = double(float(sqrt(ctx.f3.f64)));
	// bl 0x822acc78
	ctx.lr = 0x8221666C;
	sub_822ACC78(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82216610) {
	__imp__sub_82216610(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221667C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8221667C) {
	__imp__sub_8221667C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82216680) {
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
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b2498
	ctx.lr = 0x82216698;
	sub_822B2498(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822b2498
	ctx.lr = 0x822166A4;
	sub_822B2498(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822d48f0
	ctx.lr = 0x822166B0;
	sub_822D48F0(ctx, base);
	// bl 0x822acc78
	ctx.lr = 0x822166B4;
	sub_822ACC78(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82216680) {
	__imp__sub_82216680(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822166C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822166C4) {
	__imp__sub_822166C4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822166C8) {
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
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b2498
	ctx.lr = 0x822166E0;
	sub_822B2498(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822b2498
	ctx.lr = 0x822166EC;
	sub_822B2498(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f11,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f10,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 - ctx.f11.f64));
	// lfs f8,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f7,f8
	ctx.f6.f64 = double(float(ctx.f7.f64 - ctx.f8.f64));
	// fmuls f5,f12,f12
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f4,f9,f9,f5
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f5.f64));
	// fmadds f1,f6,f6,f4
	ctx.f1.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f4.f64));
	// bl 0x822acc78
	ctx.lr = 0x82216720;
	sub_822ACC78(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822166C8) {
	__imp__sub_822166C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82216730) {
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
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b2498
	ctx.lr = 0x82216748;
	sub_822B2498(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f0,f0
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f13,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f11,f0,f0,f12
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f12.f64));
	// fmadds f10,f13,f13,f11
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f11.f64));
	// fsqrts f1,f10
	ctx.f1.f64 = double(float(sqrt(ctx.f10.f64)));
	// bl 0x822acc78
	ctx.lr = 0x82216768;
	sub_822ACC78(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82216730) {
	__imp__sub_82216730(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82216778) {
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
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b2498
	ctx.lr = 0x82216790;
	sub_822B2498(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f0,f0
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f13,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f11,f0,f0,f12
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f12.f64));
	// fmadds f1,f13,f13,f11
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f11.f64));
	// bl 0x822acc78
	ctx.lr = 0x822167AC;
	sub_822ACC78(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82216778) {
	__imp__sub_82216778(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822167BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822167BC) {
	__imp__sub_822167BC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822167C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b2498
	ctx.lr = 0x822167D8;
	sub_822B2498(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822b2498
	ctx.lr = 0x822167E4;
	sub_822B2498(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x822b2498
	ctx.lr = 0x822167F0;
	sub_822B2498(ctx, base);
	// lfs f13,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f11,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f0,f11
	ctx.f9.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// fsubs f8,f13,f10
	ctx.f8.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// lfs f7,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f5,f12,f7
	ctx.f5.f64 = double(float(ctx.f12.f64 - ctx.f7.f64));
	// lfs f3,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f3.f64 = double(temp.f32);
	// fsubs f4,f12,f6
	ctx.f4.f64 = double(float(ctx.f12.f64 - ctx.f6.f64));
	// fsubs f1,f13,f3
	ctx.f1.f64 = double(float(ctx.f13.f64 - ctx.f3.f64));
	// lfs f2,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f2.f64 = double(temp.f32);
	// fsubs f0,f0,f2
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f2.f64));
	// fmuls f13,f9,f9
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f9.f64));
	// fmuls f12,f8,f8
	ctx.f12.f64 = double(float(ctx.f8.f64 * ctx.f8.f64));
	// fmadds f11,f5,f5,f13
	ctx.f11.f64 = double(float(ctx.f5.f64 * ctx.f5.f64 + ctx.f13.f64));
	// fmadds f10,f4,f4,f12
	ctx.f10.f64 = double(float(ctx.f4.f64 * ctx.f4.f64 + ctx.f12.f64));
	// fmadds f9,f1,f1,f11
	ctx.f9.f64 = double(float(ctx.f1.f64 * ctx.f1.f64 + ctx.f11.f64));
	// fmadds f8,f0,f0,f10
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f10.f64));
	// fcmpu cr6,f9,f8
	ctx.cr6.compare(ctx.f9.f64, ctx.f8.f64);
	// blt cr6,0x82216854
	if (ctx.cr6.lt) goto loc_82216854;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82216854:
	// bl 0x822acbf8
	ctx.lr = 0x82216858;
	sub_822ACBF8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822167C0) {
	__imp__sub_822167C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82216868) {
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
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b2498
	ctx.lr = 0x82216880;
	sub_822B2498(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822b2498
	ctx.lr = 0x8221688C;
	sub_822B2498(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f11,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f7,f11,f10,f12
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f10.f64 + ctx.f12.f64));
	// fmadds f1,f9,f8,f7
	ctx.f1.f64 = double(float(ctx.f9.f64 * ctx.f8.f64 + ctx.f7.f64));
	// bl 0x822acc78
	ctx.lr = 0x822168B4;
	sub_822ACC78(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82216868) {
	__imp__sub_82216868(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822168C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822168C4) {
	__imp__sub_822168C4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822168C8) {
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
	// bl 0x822acb68
	ctx.lr = 0x822168D8;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x822168ec
	if (ctx.cr6.eq) goto loc_822168EC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,31388
	ctx.r3.s64 = ctx.r11.s64 + 31388;
	// bl 0x822ad350
	ctx.lr = 0x822168EC;
	sub_822AD350(ctx, base);
loc_822168EC:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b2498
	ctx.lr = 0x822168F8;
	sub_822B2498(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f10,f0,f0
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f13,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f11,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f9,f13,f13,f10
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f10.f64));
	// fmadds f8,f12,f12,f9
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f9.f64));
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
	// stfs f3,96(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmuls f2,f4,f12
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f12.f64));
	// stfs f2,100(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmuls f1,f13,f4
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f4.f64));
	// stfs f1,104(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x822ad078
	ctx.lr = 0x82216948;
	sub_822AD078(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822168C8) {
	__imp__sub_822168C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82216958) {
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
	// bl 0x822acb68
	ctx.lr = 0x82216968;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x8221697c
	if (ctx.cr6.eq) goto loc_8221697C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,31436
	ctx.r3.s64 = ctx.r11.s64 + 31436;
	// bl 0x822ad350
	ctx.lr = 0x8221697C;
	sub_822AD350(ctx, base);
loc_8221697C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b2498
	ctx.lr = 0x82216988;
	sub_822B2498(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822d50f8
	ctx.lr = 0x82216994;
	sub_822D50F8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822ad078
	ctx.lr = 0x8221699C;
	sub_822AD078(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82216958) {
	__imp__sub_82216958(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822169AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822169AC) {
	__imp__sub_822169AC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822169B0) {
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
	// bl 0x822acb68
	ctx.lr = 0x822169C0;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x822169d4
	if (ctx.cr6.eq) goto loc_822169D4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,31480
	ctx.r3.s64 = ctx.r11.s64 + 31480;
	// bl 0x822ad350
	ctx.lr = 0x822169D4;
	sub_822AD350(ctx, base);
loc_822169D4:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b2498
	ctx.lr = 0x822169E0;
	sub_822B2498(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822d4ed0
	ctx.lr = 0x822169E8;
	sub_822D4ED0(ctx, base);
	// bl 0x822acc78
	ctx.lr = 0x822169EC;
	sub_822ACC78(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822169B0) {
	__imp__sub_822169B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822169FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822169FC) {
	__imp__sub_822169FC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82216A00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x822acb68
	ctx.lr = 0x82216A10;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// beq cr6,0x82216a24
	if (ctx.cr6.eq) goto loc_82216A24;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,31524
	ctx.r3.s64 = ctx.r11.s64 + 31524;
	// bl 0x822ad350
	ctx.lr = 0x82216A24;
	sub_822AD350(ctx, base);
loc_82216A24:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b2498
	ctx.lr = 0x82216A30;
	sub_822B2498(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822b2498
	ctx.lr = 0x82216A3C;
	sub_822B2498(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x822b1fb0
	ctx.lr = 0x82216A44;
	sub_822B1FB0(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f11,f0
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// lfs f8,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f10,f13
	ctx.f7.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// fsubs f6,f8,f12
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f12.f64));
	// fmadds f5,f9,f1,f0
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f1.f64 + ctx.f0.f64));
	// stfs f5,112(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmadds f4,f7,f1,f13
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f1.f64 + ctx.f13.f64));
	// stfs f4,116(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fmadds f3,f6,f1,f12
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f1.f64 + ctx.f12.f64));
	// stfs f3,120(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// bl 0x822ad078
	ctx.lr = 0x82216A88;
	sub_822AD078(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82216A00) {
	__imp__sub_82216A00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82216A98) {
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
	// bl 0x822acb68
	ctx.lr = 0x82216AA8;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x82216abc
	if (ctx.cr6.eq) goto loc_82216ABC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,31564
	ctx.r3.s64 = ctx.r11.s64 + 31564;
	// bl 0x822ad350
	ctx.lr = 0x82216ABC;
	sub_822AD350(ctx, base);
loc_82216ABC:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b2498
	ctx.lr = 0x82216AC8;
	sub_822B2498(ctx, base);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822da518
	ctx.lr = 0x82216ADC;
	sub_822DA518(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822ad078
	ctx.lr = 0x82216AE4;
	sub_822AD078(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82216A98) {
	__imp__sub_82216A98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82216AF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82216AF4) {
	__imp__sub_82216AF4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82216AF8) {
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
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b2498
	ctx.lr = 0x82216B10;
	sub_822B2498(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822da518
	ctx.lr = 0x82216B24;
	sub_822DA518(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822ad078
	ctx.lr = 0x82216B2C;
	sub_822AD078(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82216AF8) {
	__imp__sub_82216AF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82216B3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82216B3C) {
	__imp__sub_82216B3C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82216B40) {
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
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b2498
	ctx.lr = 0x82216B58;
	sub_822B2498(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822da518
	ctx.lr = 0x82216B6C;
	sub_822DA518(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822ad078
	ctx.lr = 0x82216B74;
	sub_822AD078(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82216B40) {
	__imp__sub_82216B40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82216B84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82216B84) {
	__imp__sub_82216B84(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82216B88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b2498
	ctx.lr = 0x82216BA0;
	sub_822B2498(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822b2498
	ctx.lr = 0x82216BAC;
	sub_822B2498(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822da650
	ctx.lr = 0x82216BB8;
	sub_822DA650(ctx, base);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822da650
	ctx.lr = 0x82216BC4;
	sub_822DA650(ctx, base);
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x822d5c30
	ctx.lr = 0x82216BD4;
	sub_822D5C30(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x822d7c78
	ctx.lr = 0x82216BE0;
	sub_822D7C78(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822ad078
	ctx.lr = 0x82216BE8;
	sub_822AD078(ctx, base);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82216B88) {
	__imp__sub_82216B88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82216BF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b2498
	ctx.lr = 0x82216C14;
	sub_822B2498(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822b2498
	ctx.lr = 0x82216C20;
	sub_822B2498(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822da650
	ctx.lr = 0x82216C2C;
	sub_822DA650(ctx, base);
	// addi r4,r1,276
	ctx.r4.s64 = ctx.r1.s64 + 276;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x822b2498
	ctx.lr = 0x82216C38;
	sub_822B2498(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x822b2498
	ctx.lr = 0x82216C44;
	sub_822B2498(ctx, base);
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822da650
	ctx.lr = 0x82216C50;
	sub_822DA650(ctx, base);
	// addi r4,r1,228
	ctx.r4.s64 = ctx.r1.s64 + 228;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x822b2498
	ctx.lr = 0x82216C5C;
	sub_822B2498(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x822b2498
	ctx.lr = 0x82216C68;
	sub_822B2498(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822da650
	ctx.lr = 0x82216C74;
	sub_822DA650(ctx, base);
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x822d6588
	ctx.lr = 0x82216C80;
	sub_822D6588(ctx, base);
	// addi r5,r1,336
	ctx.r5.s64 = ctx.r1.s64 + 336;
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x822d60b8
	ctx.lr = 0x82216C90;
	sub_822D60B8(ctx, base);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x822d60b8
	ctx.lr = 0x82216CA0;
	sub_822D60B8(ctx, base);
	// bl 0x822ad190
	ctx.lr = 0x82216CA4;
	sub_822AD190(ctx, base);
	// addi r3,r1,180
	ctx.r3.s64 = ctx.r1.s64 + 180;
	// bl 0x822ad078
	ctx.lr = 0x82216CAC;
	sub_822AD078(ctx, base);
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// addi r31,r11,-25976
	ctx.r31.s64 = ctx.r11.s64 + -25976;
	// lhz r3,126(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 126);
	// bl 0x822ad280
	ctx.lr = 0x82216CBC;
	sub_822AD280(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x822d7c78
	ctx.lr = 0x82216CC8;
	sub_822D7C78(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822ad078
	ctx.lr = 0x82216CD0;
	sub_822AD078(ctx, base);
	// lhz r3,14(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 14);
	// bl 0x822ad280
	ctx.lr = 0x82216CD8;
	sub_822AD280(ctx, base);
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82216BF8) {
	__imp__sub_82216BF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82216CEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82216CEC) {
	__imp__sub_82216CEC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82216CF0) {
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
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822b2288
	ctx.lr = 0x82216D08;
	sub_822B2288(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b2288
	ctx.lr = 0x82216D14;
	sub_822B2288(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x823dfa98
	ctx.lr = 0x82216D1C;
	sub_823DFA98(ctx, base);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// subfe r3,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r11.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// bl 0x822acb78
	ctx.lr = 0x82216D28;
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

PPC_WEAK_FUNC(sub_82216CF0) {
	__imp__sub_82216CF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82216D3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82216D3C) {
	__imp__sub_82216D3C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82216D40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x82216D48;
	__savegprlr_26(ctx, base);
	// stwu r1,-1168(r1)
	ea = -1168 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b2288
	ctx.lr = 0x82216D54;
	sub_822B2288(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822b1c50
	ctx.lr = 0x82216D60;
	sub_822B1C50(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822acb68
	ctx.lr = 0x82216D68;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// blt cr6,0x82216d80
	if (ctx.cr6.lt) goto loc_82216D80;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x822b1c50
	ctx.lr = 0x82216D78;
	sub_822B1C50(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// b 0x82216d88
	goto loc_82216D88;
loc_82216D80:
	// lis r28,32767
	ctx.r28.s64 = 2147418112;
	// ori r28,r28,65535
	ctx.r28.u64 = ctx.r28.u64 | 65535;
loc_82216D88:
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpw cr6,r31,r28
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r28.s32, ctx.xer);
	// bge cr6,0x82216dd4
	if (!ctx.cr6.lt) goto loc_82216DD4;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// subf r29,r31,r11
	ctx.r29.s64 = ctx.r11.s64 - ctx.r31.s64;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r27,r11,31608
	ctx.r27.s64 = ctx.r11.s64 + 31608;
loc_82216DA4:
	// cmpwi cr6,r30,1024
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1024, ctx.xer);
	// blt cr6,0x82216db4
	if (ctx.cr6.lt) goto loc_82216DB4;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822ad350
	ctx.lr = 0x82216DB4;
	sub_822AD350(ctx, base);
loc_82216DB4:
	// lbzx r11,r31,r26
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r26.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82216dd4
	if (ctx.cr6.eq) goto loc_82216DD4;
	// stbx r11,r29,r31
	PPC_STORE_U8(ctx.r29.u32 + ctx.r31.u32, ctx.r11.u8);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r31,r28
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r28.s32, ctx.xer);
	// blt cr6,0x82216da4
	if (ctx.cr6.lt) goto loc_82216DA4;
loc_82216DD4:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stbx r10,r30,r11
	PPC_STORE_U8(ctx.r30.u32 + ctx.r11.u32, ctx.r10.u8);
	// bl 0x822aced0
	ctx.lr = 0x82216DE8;
	sub_822ACED0(ctx, base);
	// addi r1,r1,1168
	ctx.r1.s64 = ctx.r1.s64 + 1168;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82216D40) {
	__imp__sub_82216D40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82216DF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x82216DF8;
	__savegprlr_27(ctx, base);
	// stwu r1,-1152(r1)
	ea = -1152 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b20b8
	ctx.lr = 0x82216E04;
	sub_822B20B8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x822a13a0
	ctx.lr = 0x82216E0C;
	sub_822A13A0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82216E18:
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// extsb r27,r11
	ctx.r27.s64 = ctx.r11.s8;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823dfa20
	ctx.lr = 0x82216E28;
	sub_823DFA20(ctx, base);
	// extsb r10,r3
	ctx.r10.s64 = ctx.r3.s8;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// subf r7,r10,r27
	ctx.r7.s64 = ctx.r27.s64 - ctx.r10.s64;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// addic r6,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r6.s64 = ctx.r7.s64 + -1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// subfe r5,r6,r7
	temp.u8 = (~ctx.r6.u32 + ctx.r7.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r5.u64 = ~ctx.r6.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stbx r10,r31,r9
	PPC_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r10.u8);
	// or r29,r5,r29
	ctx.r29.u64 = ctx.r5.u64 | ctx.r29.u64;
	// beq cr6,0x82216e74
	if (ctx.cr6.eq) goto loc_82216E74;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r31,1024
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1024, ctx.xer);
	// blt cr6,0x82216e18
	if (ctx.cr6.lt) goto loc_82216E18;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,31608
	ctx.r3.s64 = ctx.r11.s64 + 31608;
	// bl 0x822ad350
	ctx.lr = 0x82216E6C;
	sub_822AD350(ctx, base);
	// addi r1,r1,1152
	ctx.r1.s64 = ctx.r1.s64 + 1152;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_82216E74:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x82216e8c
	if (ctx.cr6.eq) goto loc_82216E8C;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822aced0
	ctx.lr = 0x82216E84;
	sub_822ACED0(ctx, base);
	// addi r1,r1,1152
	ctx.r1.s64 = ctx.r1.s64 + 1152;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_82216E8C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822a1ee8
	ctx.lr = 0x82216E94;
	sub_822A1EE8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822acff0
	ctx.lr = 0x82216E9C;
	sub_822ACFF0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822a2468
	ctx.lr = 0x82216EA4;
	sub_822A2468(ctx, base);
	// addi r1,r1,1152
	ctx.r1.s64 = ctx.r1.s64 + 1152;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82216DF0) {
	__imp__sub_82216DF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82216EAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82216EAC) {
	__imp__sub_82216EAC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82216EB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf68
	ctx.lr = 0x82216EB8;
	__savegprlr_24(ctx, base);
	// stwu r1,-1184(r1)
	ea = -1184 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b20b8
	ctx.lr = 0x82216EC4;
	sub_822B20B8(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822b20b8
	ctx.lr = 0x82216ED0;
	sub_822B20B8(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x822a13a0
	ctx.lr = 0x82216EDC;
	sub_822A13A0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x822a13a0
	ctx.lr = 0x82216EE8;
	sub_822A13A0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x822a1ee8
	ctx.lr = 0x82216EF4;
	sub_822A1EE8(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x822a1ee8
	ctx.lr = 0x82216EFC;
	sub_822A1EE8(ctx, base);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82216F00:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82216f00
	if (!ctx.cr6.eq) goto loc_82216F00;
	// subf r11,r29,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r29.s64;
	// li r24,0
	ctx.r24.s64 = 0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// rotlwi r28,r11,0
	ctx.r28.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x822ad190
	ctx.lr = 0x82216F28;
	sub_822AD190(ctx, base);
	// lbz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// extsb r10,r9
	ctx.r10.s64 = ctx.r9.s8;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82216fc0
	if (ctx.cr6.eq) goto loc_82216FC0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r27,r11,31608
	ctx.r27.s64 = ctx.r11.s64 + 31608;
loc_82216F40:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x82216f68
	if (!ctx.cr6.gt) goto loc_82216F68;
loc_82216F4C:
	// lbzx r8,r11,r29
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r29.u32);
	// extsb r7,r8
	ctx.r7.s64 = ctx.r8.s8;
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// beq cr6,0x82216fd8
	if (ctx.cr6.eq) goto loc_82216FD8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, ctx.xer);
	// blt cr6,0x82216f4c
	if (ctx.cr6.lt) goto loc_82216F4C;
loc_82216F68:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stbx r9,r30,r11
	PPC_STORE_U8(ctx.r30.u32 + ctx.r11.u32, ctx.r9.u8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,1024
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1024, ctx.xer);
	// blt cr6,0x82216f94
	if (ctx.cr6.lt) goto loc_82216F94;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x822a2468
	ctx.lr = 0x82216F84;
	sub_822A2468(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x822a2468
	ctx.lr = 0x82216F8C;
	sub_822A2468(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822ad350
	ctx.lr = 0x82216F94;
	sub_822AD350(ctx, base);
loc_82216F94:
	// lbzu r9,1(r31)
	ea = 1 + ctx.r31.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r31.u32 = ea;
	// extsb r10,r9
	ctx.r10.s64 = ctx.r9.s8;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82216f40
	if (!ctx.cr6.eq) goto loc_82216F40;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x82216fc0
	if (ctx.cr6.eq) goto loc_82216FC0;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stbx r24,r30,r11
	PPC_STORE_U8(ctx.r30.u32 + ctx.r11.u32, ctx.r24.u8);
	// bl 0x822aced0
	ctx.lr = 0x82216FBC;
	sub_822ACED0(ctx, base);
	// bl 0x822ad208
	ctx.lr = 0x82216FC0;
	sub_822AD208(ctx, base);
loc_82216FC0:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x822a2468
	ctx.lr = 0x82216FC8;
	sub_822A2468(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x822a2468
	ctx.lr = 0x82216FD0;
	sub_822A2468(ctx, base);
	// addi r1,r1,1184
	ctx.r1.s64 = ctx.r1.s64 + 1184;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
loc_82216FD8:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x82216f94
	if (ctx.cr6.eq) goto loc_82216F94;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stbx r24,r30,r11
	PPC_STORE_U8(ctx.r30.u32 + ctx.r11.u32, ctx.r24.u8);
	// bl 0x822aced0
	ctx.lr = 0x82216FF0;
	sub_822ACED0(ctx, base);
	// bl 0x822ad208
	ctx.lr = 0x82216FF4;
	sub_822AD208(ctx, base);
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// b 0x82216f94
	goto loc_82216F94;
}

PPC_WEAK_FUNC(sub_82216EB0) {
	__imp__sub_82216EB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82216FFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82216FFC) {
	__imp__sub_82216FFC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82217000) {
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
	// bne cr6,0x82217038
	if (!ctx.cr6.eq) goto loc_82217038;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// lhz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 116);
	// addi r11,r10,26552
	ctx.r11.s64 = ctx.r10.s64 + 26552;
	// mulli r10,r9,624
	ctx.r10.s64 = ctx.r9.s64 * 624;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x82217048
	goto loc_82217048;
loc_82217038:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x82217044;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_82217048:
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// lhz r10,292(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 292);
	// addi r9,r11,-25976
	ctx.r9.s64 = ctx.r11.s64 + -25976;
	// lhz r8,268(r9)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r9.u32 + 268);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82217088
	if (ctx.cr6.eq) goto loc_82217088;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,31624
	ctx.r3.s64 = ctx.r11.s64 + 31624;
	// bl 0x822ad350
	ctx.lr = 0x8221706C;
	sub_822AD350(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,364(r31)
	PPC_STORE_U8(ctx.r31.u32 + 364, ctx.r10.u8);
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
loc_82217088:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,364(r31)
	PPC_STORE_U8(ctx.r31.u32 + 364, ctx.r11.u8);
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

PPC_WEAK_FUNC(sub_82217000) {
	__imp__sub_82217000(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822170A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822170A4) {
	__imp__sub_822170A4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822170A8) {
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
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// addi r10,r11,9624
	ctx.r10.s64 = ctx.r11.s64 + 9624;
	// lwz r11,36(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822170d8
	if (!ctx.cr6.eq) goto loc_822170D8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,31728
	ctx.r3.s64 = ctx.r11.s64 + 31728;
	// bl 0x822ad350
	ctx.lr = 0x822170D8;
	sub_822AD350(ctx, base);
loc_822170D8:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b2288
	ctx.lr = 0x822170E0;
	sub_822B2288(ctx, base);
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82217100
	if (!ctx.cr6.eq) goto loc_82217100;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,31700
	ctx.r4.s64 = ctx.r11.s64 + 31700;
	// bl 0x822ad4e0
	ctx.lr = 0x82217100;
	sub_822AD4E0(ctx, base);
loc_82217100:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222e230
	ctx.lr = 0x82217108;
	sub_8222E230(ctx, base);
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

PPC_WEAK_FUNC(sub_822170A8) {
	__imp__sub_822170A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221711C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8221711C) {
	__imp__sub_8221711C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82217120) {
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
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b2288
	ctx.lr = 0x8221713C;
	sub_822B2288(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82217144:
	// li r5,1024
	ctx.r5.s64 = 1024;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,1205
	ctx.r3.s64 = ctx.r31.s64 + 1205;
	// bl 0x8233dd38
	ctx.lr = 0x82217154;
	sub_8233DD38(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822e8058
	ctx.lr = 0x82217160;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822171e0
	if (ctx.cr6.eq) goto loc_822171E0;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// blt cr6,0x82217144
	if (ctx.cr6.lt) goto loc_82217144;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82217178:
	// li r5,1024
	ctx.r5.s64 = 1024;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,1205
	ctx.r3.s64 = ctx.r31.s64 + 1205;
	// bl 0x8233dd38
	ctx.lr = 0x82217188;
	sub_8233DD38(ctx, base);
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822171a0
	if (ctx.cr6.eq) goto loc_822171A0;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// blt cr6,0x82217178
	if (ctx.cr6.lt) goto loc_82217178;
loc_822171A0:
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// bne cr6,0x822171bc
	if (!ctx.cr6.eq) goto loc_822171BC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r11,31876
	ctx.r3.s64 = ctx.r11.s64 + 31876;
	// bl 0x822e84f0
	ctx.lr = 0x822171B8;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x822171BC;
	sub_822AD350(ctx, base);
loc_822171BC:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,1205
	ctx.r3.s64 = ctx.r31.s64 + 1205;
	// bl 0x8233e7d8
	ctx.lr = 0x822171C8;
	sub_8233E7D8(ctx, base);
loc_822171C8:
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
loc_822171E0:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,31808
	ctx.r4.s64 = ctx.r11.s64 + 31808;
	// li r3,23
	ctx.r3.s64 = 23;
	// bl 0x82280a68
	ctx.lr = 0x822171F4;
	sub_82280A68(ctx, base);
	// b 0x822171c8
	goto loc_822171C8;
}

PPC_WEAK_FUNC(sub_82217120) {
	__imp__sub_82217120(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822171F8) {
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
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82217264
	if (ctx.cr6.eq) goto loc_82217264;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82217220:
	// li r5,1024
	ctx.r5.s64 = 1024;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,1205
	ctx.r3.s64 = ctx.r31.s64 + 1205;
	// bl 0x8233dd38
	ctx.lr = 0x82217230;
	sub_8233DD38(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822e8058
	ctx.lr = 0x8221723C;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82217280
	if (ctx.cr6.eq) goto loc_82217280;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// blt cr6,0x82217220
	if (ctx.cr6.lt) goto loc_82217220;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r11,31936
	ctx.r3.s64 = ctx.r11.s64 + 31936;
	// bl 0x822e84f0
	ctx.lr = 0x82217260;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x82217264;
	sub_822AD350(ctx, base);
loc_82217264:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82217268:
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
loc_82217280:
	// addi r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 1;
	// b 0x82217268
	goto loc_82217268;
}

PPC_WEAK_FUNC(sub_822171F8) {
	__imp__sub_822171F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82217288) {
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
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// addi r10,r11,9624
	ctx.r10.s64 = ctx.r11.s64 + 9624;
	// lwz r11,36(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822172bc
	if (!ctx.cr6.eq) goto loc_822172BC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,32032
	ctx.r3.s64 = ctx.r11.s64 + 32032;
	// bl 0x822ad350
	ctx.lr = 0x822172BC;
	sub_822AD350(ctx, base);
loc_822172BC:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b2288
	ctx.lr = 0x822172C4;
	sub_822B2288(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8222e720
	ctx.lr = 0x822172CC;
	sub_8222E720(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82321740
	ctx.lr = 0x822172D8;
	sub_82321740(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822172f4
	if (!ctx.cr6.eq) goto loc_822172F4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r11,31980
	ctx.r4.s64 = ctx.r11.s64 + 31980;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822830e8
	ctx.lr = 0x822172F4;
	sub_822830E8(ctx, base);
loc_822172F4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82321c38
	ctx.lr = 0x822172FC;
	sub_82321C38(ctx, base);
	// bl 0x82321888
	ctx.lr = 0x82217300;
	sub_82321888(ctx, base);
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

PPC_WEAK_FUNC(sub_82217288) {
	__imp__sub_82217288(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82217318) {
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
	// lhz r10,118(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 118);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8221734c
	if (!ctx.cr6.eq) goto loc_8221734C;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// lhz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 116);
	// addi r11,r10,26552
	ctx.r11.s64 = ctx.r10.s64 + 26552;
	// mulli r10,r9,624
	ctx.r10.s64 = ctx.r9.s64 * 624;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x8221735c
	goto loc_8221735C;
loc_8221734C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x82217358;
	sub_822AD548(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
loc_8221735C:
	// lbz r10,174(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 174);
	// li r9,0
	ctx.r9.s64 = 0;
	// rlwinm r8,r10,0,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// sth r9,4(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4, ctx.r9.u16);
	// stb r8,174(r11)
	PPC_STORE_U8(ctx.r11.u32 + 174, ctx.r8.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82217318) {
	__imp__sub_82217318(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82217380) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82217388;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r3.u32);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lhz r10,150(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 150);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822173b8
	if (!ctx.cr6.eq) goto loc_822173B8;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// lhz r9,148(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 148);
	// addi r11,r10,26552
	ctx.r11.s64 = ctx.r10.s64 + 26552;
	// mulli r10,r9,624
	ctx.r10.s64 = ctx.r9.s64 * 624;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x822173c8
	goto loc_822173C8;
loc_822173B8:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x822173C4;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_822173C8:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b2288
	ctx.lr = 0x822173D0;
	sub_822B2288(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8222e9c0
	ctx.lr = 0x822173D8;
	sub_8222E9C0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82217400
	if (!ctx.cr6.eq) goto loc_82217400;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r11,32116
	ctx.r3.s64 = ctx.r11.s64 + 32116;
	// bl 0x822e84f0
	ctx.lr = 0x822173F4;
	sub_822E84F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822ad4e0
	ctx.lr = 0x82217400;
	sub_822AD4E0(ctx, base);
loc_82217400:
	// lbz r11,174(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 174);
	// rlwinm r10,r11,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stb r10,174(r31)
	PPC_STORE_U8(ctx.r31.u32 + 174, ctx.r10.u8);
	// bl 0x822acb68
	ctx.lr = 0x82217410;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x8221742c
	if (ctx.cr6.eq) goto loc_8221742C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17348
	ctx.r3.s64 = ctx.r11.s64 + -17348;
	// bl 0x822ad350
	ctx.lr = 0x82217424;
	sub_822AD350(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_8221742C:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222f978
	ctx.lr = 0x8221743C;
	sub_8222F978(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82217380) {
	__imp__sub_82217380(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82217444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82217444) {
	__imp__sub_82217444(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82217448) {
	PPC_FUNC_PROLOGUE();
	// li r4,91
	ctx.r4.s64 = 91;
	// b 0x82217380
	sub_82217380(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82217448) {
	__imp__sub_82217448(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82217450) {
	PPC_FUNC_PROLOGUE();
	// li r4,93
	ctx.r4.s64 = 93;
	// b 0x82217380
	sub_82217380(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82217450) {
	__imp__sub_82217450(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82217458) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82217460;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b2288
	ctx.lr = 0x82217470;
	sub_822B2288(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8222e9c0
	ctx.lr = 0x82217478;
	sub_8222E9C0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822174a0
	if (!ctx.cr6.eq) goto loc_822174A0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,32116
	ctx.r3.s64 = ctx.r11.s64 + 32116;
	// bl 0x822e84f0
	ctx.lr = 0x82217494;
	sub_822E84F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822ad4e0
	ctx.lr = 0x822174A0;
	sub_822AD4E0(ctx, base);
loc_822174A0:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822b2498
	ctx.lr = 0x822174AC;
	sub_822B2498(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822304f8
	ctx.lr = 0x822174B8;
	sub_822304F8(ctx, base);
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82217458) {
	__imp__sub_82217458(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822174C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822174C4) {
	__imp__sub_822174C4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822174C8) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x822acb68
	ctx.lr = 0x822174E0;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,2
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// beq cr6,0x822174f8
	if (ctx.cr6.eq) goto loc_822174F8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,32144
	ctx.r4.s64 = ctx.r11.s64 + 32144;
	// bl 0x822ad4e0
	ctx.lr = 0x822174F8;
	sub_822AD4E0(ctx, base);
loc_822174F8:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b2288
	ctx.lr = 0x82217500;
	sub_822B2288(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8222e9c0
	ctx.lr = 0x82217508;
	sub_8222E9C0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82217530
	if (!ctx.cr6.eq) goto loc_82217530;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,32116
	ctx.r3.s64 = ctx.r11.s64 + 32116;
	// bl 0x822e84f0
	ctx.lr = 0x82217524;
	sub_822E84F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822ad4e0
	ctx.lr = 0x82217530;
	sub_822AD4E0(ctx, base);
loc_82217530:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822b2498
	ctx.lr = 0x8221753C;
	sub_822B2498(ctx, base);
	// li r4,92
	ctx.r4.s64 = 92;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822304f8
	ctx.lr = 0x82217548;
	sub_822304F8(ctx, base);
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
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

PPC_WEAK_FUNC(sub_822174C8) {
	__imp__sub_822174C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82217564) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82217564) {
	__imp__sub_82217564(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82217568) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x822acb68
	ctx.lr = 0x82217580;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,2
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// beq cr6,0x82217598
	if (ctx.cr6.eq) goto loc_82217598;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,32188
	ctx.r4.s64 = ctx.r11.s64 + 32188;
	// bl 0x822ad4e0
	ctx.lr = 0x82217598;
	sub_822AD4E0(ctx, base);
loc_82217598:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b2288
	ctx.lr = 0x822175A0;
	sub_822B2288(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8222e9c0
	ctx.lr = 0x822175A8;
	sub_8222E9C0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822175d0
	if (!ctx.cr6.eq) goto loc_822175D0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,32116
	ctx.r3.s64 = ctx.r11.s64 + 32116;
	// bl 0x822e84f0
	ctx.lr = 0x822175C4;
	sub_822E84F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822ad4e0
	ctx.lr = 0x822175D0;
	sub_822AD4E0(ctx, base);
loc_822175D0:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822b2498
	ctx.lr = 0x822175DC;
	sub_822B2498(ctx, base);
	// li r4,94
	ctx.r4.s64 = 94;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822304f8
	ctx.lr = 0x822175E8;
	sub_822304F8(ctx, base);
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
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

PPC_WEAK_FUNC(sub_82217568) {
	__imp__sub_82217568(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82217604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82217604) {
	__imp__sub_82217604(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82217608) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r4,96
	ctx.r4.s64 = 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f0,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x822304f8
	ctx.lr = 0x82217634;
	sub_822304F8(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82217608) {
	__imp__sub_82217608(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221764C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8221764C) {
	__imp__sub_8221764C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82217650) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82217658;
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
	// bne cr6,0x82217684
	if (!ctx.cr6.eq) goto loc_82217684;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// lhz r9,132(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 132);
	// addi r11,r10,26552
	ctx.r11.s64 = ctx.r10.s64 + 26552;
	// mulli r10,r9,624
	ctx.r10.s64 = ctx.r9.s64 * 624;
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x82217694
	goto loc_82217694;
loc_82217684:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x82217690;
	sub_822AD548(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
loc_82217694:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b2288
	ctx.lr = 0x8221769C;
	sub_822B2288(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8222e9c0
	ctx.lr = 0x822176A4;
	sub_8222E9C0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822176cc
	if (!ctx.cr6.eq) goto loc_822176CC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,32116
	ctx.r3.s64 = ctx.r11.s64 + 32116;
	// bl 0x822e84f0
	ctx.lr = 0x822176C0;
	sub_822E84F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822ad4e0
	ctx.lr = 0x822176CC;
	sub_822AD4E0(ctx, base);
loc_822176CC:
	// lbz r11,174(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 174);
	// rlwinm r10,r11,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stb r10,174(r30)
	PPC_STORE_U8(ctx.r30.u32 + 174, ctx.r10.u8);
	// bl 0x822acb68
	ctx.lr = 0x822176DC;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x822176f8
	if (ctx.cr6.eq) goto loc_822176F8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,32240
	ctx.r3.s64 = ctx.r11.s64 + 32240;
	// bl 0x822ad350
	ctx.lr = 0x822176F0;
	sub_822AD350(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_822176F8:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,95
	ctx.r4.s64 = 95;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8222f978
	ctx.lr = 0x82217708;
	sub_8222F978(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82217650) {
	__imp__sub_82217650(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82217710) {
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
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b2288
	ctx.lr = 0x8221772C;
	sub_822B2288(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82232100
	ctx.lr = 0x82217734;
	sub_82232100(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8220f168
	ctx.lr = 0x82217740;
	sub_8220F168(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823340b0
	ctx.lr = 0x8221774C;
	sub_823340B0(ctx, base);
	// bl 0x822acbf8
	ctx.lr = 0x82217750;
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

PPC_WEAK_FUNC(sub_82217710) {
	__imp__sub_82217710(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82217768) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x82217770;
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
	// bne cr6,0x8221779c
	if (!ctx.cr6.eq) goto loc_8221779C;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// lhz r9,164(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 164);
	// addi r11,r10,26552
	ctx.r11.s64 = ctx.r10.s64 + 26552;
	// mulli r10,r9,624
	ctx.r10.s64 = ctx.r9.s64 * 624;
	// add r26,r10,r11
	ctx.r26.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x822177ac
	goto loc_822177AC;
loc_8221779C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x822177A8;
	sub_822AD548(ctx, base);
	// li r26,0
	ctx.r26.s64 = 0;
loc_822177AC:
	// lbz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 0);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x822177c4
	if (ctx.cr6.eq) goto loc_822177C4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,32388
	ctx.r3.s64 = ctx.r11.s64 + 32388;
	// bl 0x822ad350
	ctx.lr = 0x822177C4;
	sub_822AD350(ctx, base);
loc_822177C4:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b1c50
	ctx.lr = 0x822177CC;
	sub_822B1C50(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r31,r11,32356
	ctx.r31.s64 = ctx.r11.s64 + 32356;
	// bge cr6,0x822177ec
	if (!ctx.cr6.lt) goto loc_822177EC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822ad4e0
	ctx.lr = 0x822177EC;
	sub_822AD4E0(ctx, base);
loc_822177EC:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822b1c50
	ctx.lr = 0x822177F4;
	sub_822B1C50(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x8221780c
	if (!ctx.cr6.lt) goto loc_8221780C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822ad4e0
	ctx.lr = 0x8221780C;
	sub_822AD4E0(ctx, base);
loc_8221780C:
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
	// bl 0x822acb68
	ctx.lr = 0x82217814;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,2
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// ble cr6,0x8221783c
	if (!ctx.cr6.gt) goto loc_8221783C;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x822b1c50
	ctx.lr = 0x82217824;
	sub_822B1C50(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x8221783c
	if (!ctx.cr6.lt) goto loc_8221783C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822ad4e0
	ctx.lr = 0x8221783C;
	sub_822AD4E0(ctx, base);
loc_8221783C:
	// li r29,0
	ctx.r29.s64 = 0;
	// bl 0x822acb68
	ctx.lr = 0x82217844;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// ble cr6,0x82217884
	if (!ctx.cr6.gt) goto loc_82217884;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x822b1c50
	ctx.lr = 0x82217854;
	sub_822B1C50(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82217868
	if (ctx.cr6.lt) goto loc_82217868;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// blt cr6,0x82217884
	if (ctx.cr6.lt) goto loc_82217884;
loc_82217868:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r11,32308
	ctx.r3.s64 = ctx.r11.s64 + 32308;
	// bl 0x822e84f0
	ctx.lr = 0x82217878;
	sub_822E84F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x822ad4e0
	ctx.lr = 0x82217884;
	sub_822AD4E0(ctx, base);
loc_82217884:
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r10,20971
	ctx.r10.s64 = 1374355456;
	// add r9,r29,r11
	ctx.r9.u64 = ctx.r29.u64 + ctx.r11.u64;
	// ori r8,r10,34079
	ctx.r8.u64 = ctx.r10.u64 | 34079;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r31,r11,r26
	ctx.r31.u64 = ctx.r11.u64 + ctx.r26.u64;
	// lwz r7,364(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 364);
	// mulhw r6,r7,r8
	ctx.r6.s64 = (int64_t(ctx.r7.s32) * int64_t(ctx.r8.s32)) >> 32;
	// srawi r11,r6,6
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3F) != 0);
	ctx.r11.s64 = ctx.r6.s32 >> 6;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mulli r4,r5,200
	ctx.r4.s64 = ctx.r5.s64 * 200;
	// subf. r30,r4,r7
	ctx.r30.s64 = ctx.r7.s64 - ctx.r4.s64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x8221791c
	if (ctx.cr0.eq) goto loc_8221791C;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x8221791c
	if (ctx.cr6.lt) goto loc_8221791C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823340b0
	ctx.lr = 0x822178D0;
	sub_823340B0(ctx, base);
	// cmpw cr6,r3,r28
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r28.s32, ctx.xer);
	// bge cr6,0x822178dc
	if (!ctx.cr6.lt) goto loc_822178DC;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
loc_822178DC:
	// lbz r11,368(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 368);
	// stw r25,352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 352, ctx.r25.u32);
	// stw r28,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r28.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221791c
	if (ctx.cr6.eq) goto loc_8221791C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823340b0
	ctx.lr = 0x822178FC;
	sub_823340B0(ctx, base);
	// cmpw cr6,r3,r27
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r27.s32, ctx.xer);
	// bge cr6,0x82217908
	if (!ctx.cr6.lt) goto loc_82217908;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
loc_82217908:
	// addi r11,r29,18
	ctx.r11.s64 = ctx.r29.s64 + 18;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r27,r10,r26
	PPC_STORE_U32(ctx.r10.u32 + ctx.r26.u32, ctx.r27.u32);
loc_8221791C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82217768) {
	__imp__sub_82217768(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82217924) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82217924) {
	__imp__sub_82217924(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82217928) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82217930;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x8220ed70
	ctx.lr = 0x82217938;
	sub_8220ED70(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b2288
	ctx.lr = 0x82217944;
	sub_822B2288(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82232100
	ctx.lr = 0x8221794C;
	sub_82232100(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x8220f168
	ctx.lr = 0x82217958;
	sub_8220F168(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,264(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// bl 0x82332008
	ctx.lr = 0x82217964;
	sub_82332008(ctx, base);
	// bl 0x822acbf8
	ctx.lr = 0x82217968;
	sub_822ACBF8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82217928) {
	__imp__sub_82217928(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82217970) {
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
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b2288
	ctx.lr = 0x8221798C;
	sub_822B2288(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82232100
	ctx.lr = 0x82217994;
	sub_82232100(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8220f168
	ctx.lr = 0x822179A0;
	sub_8220F168(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82332af8
	ctx.lr = 0x822179A8;
	sub_82332AF8(ctx, base);
	// lwz r11,60(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822179c4
	if (!ctx.cr6.eq) goto loc_822179C4;
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822179c8
	if (ctx.cr6.eq) goto loc_822179C8;
loc_822179C4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822179C8:
	// bl 0x822acbf8
	ctx.lr = 0x822179CC;
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

PPC_WEAK_FUNC(sub_82217970) {
	__imp__sub_82217970(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822179E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822179E4) {
	__imp__sub_822179E4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822179E8) {
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
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b2288
	ctx.lr = 0x82217A04;
	sub_822B2288(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82232100
	ctx.lr = 0x82217A0C;
	sub_82232100(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8220f168
	ctx.lr = 0x82217A18;
	sub_8220F168(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82332af8
	ctx.lr = 0x82217A20;
	sub_82332AF8(ctx, base);
	// lwz r11,60(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82217a34
	if (ctx.cr6.eq) goto loc_82217A34;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x82217a44
	if (!ctx.cr6.eq) goto loc_82217A44;
loc_82217A34:
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82217a48
	if (ctx.cr6.eq) goto loc_82217A48;
loc_82217A44:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82217A48:
	// bl 0x822acbf8
	ctx.lr = 0x82217A4C;
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

PPC_WEAK_FUNC(sub_822179E8) {
	__imp__sub_822179E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82217A64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82217A64) {
	__imp__sub_82217A64(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82217A68) {
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
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b2288
	ctx.lr = 0x82217A84;
	sub_822B2288(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82232100
	ctx.lr = 0x82217A8C;
	sub_82232100(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8220f168
	ctx.lr = 0x82217A98;
	sub_8220F168(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82332af8
	ctx.lr = 0x82217AA0;
	sub_82332AF8(ctx, base);
	// lwz r3,60(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// blt cr6,0x82217ab4
	if (ctx.cr6.lt) goto loc_82217AB4;
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// ble cr6,0x82217ab8
	if (!ctx.cr6.gt) goto loc_82217AB8;
loc_82217AB4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82217AB8:
	// bl 0x822acbf8
	ctx.lr = 0x82217ABC;
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

PPC_WEAK_FUNC(sub_82217A68) {
	__imp__sub_82217A68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82217AD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82217AD4) {
	__imp__sub_82217AD4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82217AD8) {
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
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b2288
	ctx.lr = 0x82217AF4;
	sub_822B2288(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82232100
	ctx.lr = 0x82217AFC;
	sub_82232100(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8220f168
	ctx.lr = 0x82217B08;
	sub_8220F168(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82332af8
	ctx.lr = 0x82217B10;
	sub_82332AF8(ctx, base);
	// lbz r3,1630(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1630);
	// bl 0x822acbf8
	ctx.lr = 0x82217B18;
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

PPC_WEAK_FUNC(sub_82217AD8) {
	__imp__sub_82217AD8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82217B30) {
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
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b2288
	ctx.lr = 0x82217B4C;
	sub_822B2288(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82232100
	ctx.lr = 0x82217B54;
	sub_82232100(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82217b68
	if (!ctx.cr6.eq) goto loc_82217B68;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82217b80
	goto loc_82217B80;
loc_82217B68:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8220f168
	ctx.lr = 0x82217B74;
	sub_8220F168(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332af8
	ctx.lr = 0x82217B7C;
	sub_82332AF8(ctx, base);
	// lbz r3,1626(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1626);
loc_82217B80:
	// bl 0x822acbf8
	ctx.lr = 0x82217B84;
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

PPC_WEAK_FUNC(sub_82217B30) {
	__imp__sub_82217B30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82217B9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82217B9C) {
	__imp__sub_82217B9C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82217BA0) {
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
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b2288
	ctx.lr = 0x82217BBC;
	sub_822B2288(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82232100
	ctx.lr = 0x82217BC4;
	sub_82232100(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8220f168
	ctx.lr = 0x82217BD0;
	sub_8220F168(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82332af8
	ctx.lr = 0x82217BD8;
	sub_82332AF8(ctx, base);
	// lwz r3,44(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// bl 0x823324e0
	ctx.lr = 0x82217BE0;
	sub_823324E0(ctx, base);
	// bl 0x822aced0
	ctx.lr = 0x82217BE4;
	sub_822ACED0(ctx, base);
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

PPC_WEAK_FUNC(sub_82217BA0) {
	__imp__sub_82217BA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82217BFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82217BFC) {
	__imp__sub_82217BFC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82217C00) {
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
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b2288
	ctx.lr = 0x82217C14;
	sub_822B2288(ctx, base);
	// bl 0x82232100
	ctx.lr = 0x82217C18;
	sub_82232100(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82217c3c
	if (!ctx.cr6.eq) goto loc_82217C3C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,13236
	ctx.r3.s64 = ctx.r11.s64 + 13236;
	// bl 0x822aced0
	ctx.lr = 0x82217C2C;
	sub_822ACED0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82217C3C:
	// bl 0x82332af8
	ctx.lr = 0x82217C40;
	sub_82332AF8(ctx, base);
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x823324f8
	ctx.lr = 0x82217C48;
	sub_823324F8(ctx, base);
	// bl 0x822aced0
	ctx.lr = 0x82217C4C;
	sub_822ACED0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82217C00) {
	__imp__sub_82217C00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82217C5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82217C5C) {
	__imp__sub_82217C5C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82217C60) {
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
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b2288
	ctx.lr = 0x82217C7C;
	sub_822B2288(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82232100
	ctx.lr = 0x82217C84;
	sub_82232100(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8220f168
	ctx.lr = 0x82217C90;
	sub_8220F168(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82332af8
	ctx.lr = 0x82217C98;
	sub_82332AF8(ctx, base);
	// lwz r3,56(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// bl 0x82332510
	ctx.lr = 0x82217CA0;
	sub_82332510(ctx, base);
	// bl 0x822aced0
	ctx.lr = 0x82217CA4;
	sub_822ACED0(ctx, base);
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

PPC_WEAK_FUNC(sub_82217C60) {
	__imp__sub_82217C60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82217CBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82217CBC) {
	__imp__sub_82217CBC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82217CC0) {
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
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b2288
	ctx.lr = 0x82217CDC;
	sub_822B2288(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82232100
	ctx.lr = 0x82217CE4;
	sub_82232100(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8220f168
	ctx.lr = 0x82217CF0;
	sub_8220F168(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82332af8
	ctx.lr = 0x82217CF8;
	sub_82332AF8(ctx, base);
	// lwz r3,520(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 520);
	// bl 0x822acbf8
	ctx.lr = 0x82217D00;
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

PPC_WEAK_FUNC(sub_82217CC0) {
	__imp__sub_82217CC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82217D18) {
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
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b2288
	ctx.lr = 0x82217D34;
	sub_822B2288(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82232100
	ctx.lr = 0x82217D3C;
	sub_82232100(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8220f168
	ctx.lr = 0x82217D48;
	sub_8220F168(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82332af8
	ctx.lr = 0x82217D50;
	sub_82332AF8(ctx, base);
	// lwz r3,540(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 540);
	// bl 0x822acbf8
	ctx.lr = 0x82217D58;
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

PPC_WEAK_FUNC(sub_82217D18) {
	__imp__sub_82217D18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82217D70) {
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
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b2288
	ctx.lr = 0x82217D8C;
	sub_822B2288(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82232100
	ctx.lr = 0x82217D94;
	sub_82232100(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8220f168
	ctx.lr = 0x82217DA0;
	sub_8220F168(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82332b10
	ctx.lr = 0x82217DA8;
	sub_82332B10(ctx, base);
	// lwz r3,64(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82217dc8
	if (!ctx.cr6.eq) goto loc_82217DC8;
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// addi r10,r11,-25976
	ctx.r10.s64 = ctx.r11.s64 + -25976;
	// lhz r3,122(r10)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r10.u32 + 122);
	// bl 0x822acff0
	ctx.lr = 0x82217DC4;
	sub_822ACFF0(ctx, base);
	// b 0x82217dd0
	goto loc_82217DD0;
loc_82217DC8:
	// bl 0x82332b28
	ctx.lr = 0x82217DCC;
	sub_82332B28(ctx, base);
	// bl 0x822aced0
	ctx.lr = 0x82217DD0;
	sub_822ACED0(ctx, base);
loc_82217DD0:
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

PPC_WEAK_FUNC(sub_82217D70) {
	__imp__sub_82217D70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82217DE8) {
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
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b2288
	ctx.lr = 0x82217E04;
	sub_822B2288(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82232100
	ctx.lr = 0x82217E0C;
	sub_82232100(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8220f168
	ctx.lr = 0x82217E18;
	sub_8220F168(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82332b10
	ctx.lr = 0x82217E20;
	sub_82332B10(ctx, base);
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfs f0,5804(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5804);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f12,f0
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// bl 0x822acc78
	ctx.lr = 0x82217E48;
	sub_822ACC78(ctx, base);
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

PPC_WEAK_FUNC(sub_82217DE8) {
	__imp__sub_82217DE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82217E60) {
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
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b2288
	ctx.lr = 0x82217E74;
	sub_822B2288(ctx, base);
	// bl 0x82232100
	ctx.lr = 0x82217E78;
	sub_82232100(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82217e94
	if (!ctx.cr6.eq) goto loc_82217E94;
	// bl 0x822acb78
	ctx.lr = 0x82217E84;
	sub_822ACB78(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82217E94:
	// bl 0x82331a00
	ctx.lr = 0x82217E98;
	sub_82331A00(ctx, base);
	// bl 0x822acb78
	ctx.lr = 0x82217E9C;
	sub_822ACB78(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82217E60) {
	__imp__sub_82217E60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82217EAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82217EAC) {
	__imp__sub_82217EAC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82217EB0) {
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
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b2288
	ctx.lr = 0x82217EC4;
	sub_822B2288(ctx, base);
	// bl 0x82232100
	ctx.lr = 0x82217EC8;
	sub_82232100(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82217ee4
	if (!ctx.cr6.eq) goto loc_82217EE4;
	// bl 0x822acb78
	ctx.lr = 0x82217ED4;
	sub_822ACB78(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82217EE4:
	// bl 0x82332af8
	ctx.lr = 0x82217EE8;
	sub_82332AF8(ctx, base);
	// lbz r3,1655(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1655);
	// bl 0x822acb78
	ctx.lr = 0x82217EF0;
	sub_822ACB78(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82217EB0) {
	__imp__sub_82217EB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82217F00) {
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
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b2288
	ctx.lr = 0x82217F1C;
	sub_822B2288(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82232100
	ctx.lr = 0x82217F24;
	sub_82232100(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8220f168
	ctx.lr = 0x82217F30;
	sub_8220F168(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82332af8
	ctx.lr = 0x82217F38;
	sub_82332AF8(ctx, base);
	// lbz r3,1659(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1659);
	// bl 0x822acbf8
	ctx.lr = 0x82217F40;
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

PPC_WEAK_FUNC(sub_82217F00) {
	__imp__sub_82217F00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82217F58) {
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
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// addi r10,r11,9624
	ctx.r10.s64 = ctx.r11.s64 + 9624;
	// lwz r11,36(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82217f88
	if (!ctx.cr6.eq) goto loc_82217F88;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,32432
	ctx.r3.s64 = ctx.r11.s64 + 32432;
	// bl 0x822ad350
	ctx.lr = 0x82217F88;
	sub_822AD350(ctx, base);
loc_82217F88:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b2288
	ctx.lr = 0x82217F90;
	sub_822B2288(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8231f488
	ctx.lr = 0x82217F9C;
	sub_8231F488(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82217fc0
	if (!ctx.cr6.eq) goto loc_82217FC0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,32412
	ctx.r3.s64 = ctx.r11.s64 + 32412;
	// bl 0x822e84f0
	ctx.lr = 0x82217FB4;
	sub_822E84F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822ad4e0
	ctx.lr = 0x82217FC0;
	sub_822AD4E0(ctx, base);
loc_82217FC0:
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

PPC_WEAK_FUNC(sub_82217F58) {
	__imp__sub_82217F58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82217FD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82217FD4) {
	__imp__sub_82217FD4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82217FD8) {
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
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// addi r10,r11,9624
	ctx.r10.s64 = ctx.r11.s64 + 9624;
	// lwz r11,36(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82218008
	if (!ctx.cr6.eq) goto loc_82218008;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,32536
	ctx.r3.s64 = ctx.r11.s64 + 32536;
	// bl 0x822ad350
	ctx.lr = 0x82218008;
	sub_822AD350(ctx, base);
loc_82218008:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b2288
	ctx.lr = 0x82218010;
	sub_822B2288(ctx, base);
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82218030
	if (!ctx.cr6.eq) goto loc_82218030;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,32508
	ctx.r4.s64 = ctx.r11.s64 + 32508;
	// bl 0x822ad4e0
	ctx.lr = 0x82218030;
	sub_822AD4E0(ctx, base);
loc_82218030:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222e138
	ctx.lr = 0x82218038;
	sub_8222E138(ctx, base);
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

PPC_WEAK_FUNC(sub_82217FD8) {
	__imp__sub_82217FD8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221804C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8221804C) {
	__imp__sub_8221804C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82218050) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-1120(r1)
	ea = -1120 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// addi r10,r11,9624
	ctx.r10.s64 = ctx.r11.s64 + 9624;
	// lwz r11,36(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8221807c
	if (!ctx.cr6.eq) goto loc_8221807C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,32648
	ctx.r3.s64 = ctx.r11.s64 + 32648;
	// bl 0x822ad350
	ctx.lr = 0x8221807C;
	sub_822AD350(ctx, base);
loc_8221807C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,1024
	ctx.r7.s64 = 1024;
	// addi r5,r11,32628
	ctx.r5.s64 = ctx.r11.s64 + 32628;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8221ee40
	ctx.lr = 0x82218098;
	sub_8221EE40(ctx, base);
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822180ac
	if (ctx.cr6.eq) goto loc_822180AC;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8222df38
	ctx.lr = 0x822180AC;
	sub_8222DF38(ctx, base);
loc_822180AC:
	// addi r1,r1,1120
	ctx.r1.s64 = ctx.r1.s64 + 1120;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82218050) {
	__imp__sub_82218050(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822180BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822180BC) {
	__imp__sub_822180BC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822180C0) {
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
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// addi r10,r11,9624
	ctx.r10.s64 = ctx.r11.s64 + 9624;
	// lwz r11,36(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822180ec
	if (!ctx.cr6.eq) goto loc_822180EC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,32744
	ctx.r3.s64 = ctx.r11.s64 + 32744;
	// bl 0x822ad350
	ctx.lr = 0x822180EC;
	sub_822AD350(ctx, base);
loc_822180EC:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b2288
	ctx.lr = 0x822180F4;
	sub_822B2288(ctx, base);
	// bl 0x8222e9c0
	ctx.lr = 0x822180F8;
	sub_8222E9C0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822180C0) {
	__imp__sub_822180C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82218108) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82218110;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r29,100
	ctx.r29.s64 = 100;
	// bl 0x822acb68
	ctx.lr = 0x82218124;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x822181d4
	if (ctx.cr6.eq) goto loc_822181D4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// cmplwi cr6,r3,2
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// lfs f31,2416(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2416);
	ctx.f31.f64 = double(temp.f32);
	// beq cr6,0x822181a8
	if (ctx.cr6.eq) goto loc_822181A8;
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// beq cr6,0x82218160
	if (ctx.cr6.eq) goto loc_82218160;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,-32576
	ctx.r3.s64 = ctx.r11.s64 + -32576;
	// bl 0x822e84f0
	ctx.lr = 0x82218150;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x82218154;
	sub_822AD350(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_82218160:
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x822b1fb0
	ctx.lr = 0x82218168;
	sub_822B1FB0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,-14540(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -14540);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fadds f1,f0,f31
	ctx.f1.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// bl 0x823dde20
	ctx.lr = 0x8221817C;
	sub_823DDE20(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// fctiwz f12,f13
	ctx.f12.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f12,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f12.u64);
	// lwz r29,84(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r29,100
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 100, ctx.xer);
	// blt cr6,0x8221819c
	if (ctx.cr6.lt) goto loc_8221819C;
	// li r29,100
	ctx.r29.s64 = 100;
	// b 0x822181a8
	goto loc_822181A8;
loc_8221819C:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bgt cr6,0x822181a8
	if (ctx.cr6.gt) goto loc_822181A8;
	// li r29,0
	ctx.r29.s64 = 0;
loc_822181A8:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822b1fb0
	ctx.lr = 0x822181B0;
	sub_822B1FB0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,12240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12240);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fadds f1,f0,f31
	ctx.f1.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// bl 0x823dde20
	ctx.lr = 0x822181C4;
	sub_823DDE20(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// fctiwz f12,f13
	ctx.f12.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f12,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f12.u64);
	// lwz r31,84(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_822181D4:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b2288
	ctx.lr = 0x822181DC;
	sub_822B2288(ctx, base);
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822181fc
	if (!ctx.cr6.eq) goto loc_822181FC;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,-32656
	ctx.r3.s64 = ctx.r11.s64 + -32656;
	// bl 0x822e84f0
	ctx.lr = 0x822181F8;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x822181FC;
	sub_822AD350(ctx, base);
loc_822181FC:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge cr6,0x82218214
	if (!ctx.cr6.lt) goto loc_82218214;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,-32696
	ctx.r3.s64 = ctx.r11.s64 + -32696;
	// bl 0x822e84f0
	ctx.lr = 0x82218210;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x82218214;
	sub_822AD350(ctx, base);
loc_82218214:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822dd930
	ctx.lr = 0x8221821C;
	sub_822DD930(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82218240
	if (!ctx.cr6.eq) goto loc_82218240;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r11,-15152
	ctx.r3.s64 = ctx.r11.s64 + -15152;
	// bl 0x822e84f0
	ctx.lr = 0x82218234;
	sub_822E84F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822ad4e0
	ctx.lr = 0x82218240;
	sub_822AD4E0(ctx, base);
loc_82218240:
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r9,r11,9624
	ctx.r9.s64 = ctx.r11.s64 + 9624;
	// addi r3,r10,-32712
	ctx.r3.s64 = ctx.r10.s64 + -32712;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,52(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 52);
	// add r5,r11,r31
	ctx.r5.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x822e84f0
	ctx.lr = 0x82218264;
	sub_822E84F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,1167
	ctx.r3.s64 = 1167;
	// bl 0x8233e7d8
	ctx.lr = 0x82218270;
	sub_8233E7D8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82218108) {
	__imp__sub_82218108(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221827C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8221827C) {
	__imp__sub_8221827C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82218280) {
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
	// bl 0x822acb68
	ctx.lr = 0x82218294;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// blt cr6,0x8221834c
	if (ctx.cr6.lt) goto loc_8221834C;
	// beq cr6,0x822182c4
	if (ctx.cr6.eq) goto loc_822182C4;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,-32480
	ctx.r3.s64 = ctx.r11.s64 + -32480;
	// bl 0x822e84f0
	ctx.lr = 0x822182AC;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x822182B0;
	sub_822AD350(ctx, base);
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
loc_822182C4:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b1fb0
	ctx.lr = 0x822182CC;
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
	ctx.lr = 0x822182E8;
	sub_823DDE20(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// fctiwz f11,f12
	ctx.f11.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f11.u64);
	// lwz r31,84(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge cr6,0x82218310
	if (!ctx.cr6.lt) goto loc_82218310;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,-32520
	ctx.r3.s64 = ctx.r11.s64 + -32520;
	// bl 0x822e84f0
	ctx.lr = 0x8221830C;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x82218310;
	sub_822AD350(ctx, base);
loc_82218310:
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r9,r11,9624
	ctx.r9.s64 = ctx.r11.s64 + 9624;
	// addi r3,r10,-32528
	ctx.r3.s64 = ctx.r10.s64 + -32528;
	// lwz r11,52(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 52);
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x822e84f0
	ctx.lr = 0x8221832C;
	sub_822E84F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,1167
	ctx.r3.s64 = 1167;
	// bl 0x8233e7d8
	ctx.lr = 0x82218338;
	sub_8233E7D8(ctx, base);
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
loc_8221834C:
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x82218310
	goto loc_82218310;
}

PPC_WEAK_FUNC(sub_82218280) {
	__imp__sub_82218280(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82218354) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82218354) {
	__imp__sub_82218354(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82218358) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82218360;
	__savegprlr_28(ctx, base);
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x823de024
	ctx.lr = 0x82218368;
	__savefpr_27(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b2498
	ctx.lr = 0x8221837C;
	sub_822B2498(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822b1fb0
	ctx.lr = 0x82218384;
	sub_822B1FB0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f27,f1
	ctx.fpscr.disableFlushMode();
	ctx.f27.f64 = ctx.f1.f64;
	// lfs f29,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f29.f64 = double(temp.f32);
	// fcmpu cr6,f1,f29
	ctx.cr6.compare(ctx.f1.f64, ctx.f29.f64);
	// bge cr6,0x822183a4
	if (!ctx.cr6.lt) goto loc_822183A4;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,-32280
	ctx.r3.s64 = ctx.r11.s64 + -32280;
	// bl 0x822ad350
	ctx.lr = 0x822183A4;
	sub_822AD350(ctx, base);
loc_822183A4:
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x822b1fb0
	ctx.lr = 0x822183AC;
	sub_822B1FB0(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// fcmpu cr6,f1,f29
	ctx.cr6.compare(ctx.f1.f64, ctx.f29.f64);
	// lfs f28,-32284(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -32284);
	ctx.f28.f64 = double(temp.f32);
	// blt cr6,0x822183c8
	if (ctx.cr6.lt) goto loc_822183C8;
	// fcmpu cr6,f1,f28
	ctx.cr6.compare(ctx.f1.f64, ctx.f28.f64);
	// blt cr6,0x822183d4
	if (ctx.cr6.lt) goto loc_822183D4;
loc_822183C8:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,-32360
	ctx.r3.s64 = ctx.r11.s64 + -32360;
	// bl 0x822ad350
	ctx.lr = 0x822183D4;
	sub_822AD350(ctx, base);
loc_822183D4:
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x822b1fb0
	ctx.lr = 0x822183DC;
	sub_822B1FB0(ctx, base);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// fcmpu cr6,f1,f29
	ctx.cr6.compare(ctx.f1.f64, ctx.f29.f64);
	// blt cr6,0x822183f0
	if (ctx.cr6.lt) goto loc_822183F0;
	// fcmpu cr6,f1,f28
	ctx.cr6.compare(ctx.f1.f64, ctx.f28.f64);
	// blt cr6,0x822183fc
	if (ctx.cr6.lt) goto loc_822183FC;
loc_822183F0:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,-32440
	ctx.r3.s64 = ctx.r11.s64 + -32440;
	// bl 0x822ad350
	ctx.lr = 0x822183FC;
	sub_822AD350(ctx, base);
loc_822183FC:
	// lis r11,-32052
	ctx.r11.s64 = -2100559872;
	// addi r10,r11,26552
	ctx.r10.s64 = ctx.r11.s64 + 26552;
	// addis r11,r10,19
	ctx.r11.s64 = ctx.r10.s64 + 1245184;
	// addi r28,r11,31520
	ctx.r28.s64 = ctx.r11.s64 + 31520;
	// bl 0x822acb68
	ctx.lr = 0x82218410;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4, ctx.xer);
	// ble cr6,0x82218434
	if (!ctx.cr6.gt) goto loc_82218434;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x822b28d0
	ctx.lr = 0x82218420;
	sub_822B28D0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82218434
	if (ctx.cr6.eq) goto loc_82218434;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x82229bf0
	ctx.lr = 0x82218430;
	sub_82229BF0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
loc_82218434:
	// li r30,14
	ctx.r30.s64 = 14;
	// bl 0x822acb68
	ctx.lr = 0x8221843C;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,5
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 5, ctx.xer);
	// ble cr6,0x82218460
	if (!ctx.cr6.gt) goto loc_82218460;
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x822b28d0
	ctx.lr = 0x8221844C;
	sub_822B28D0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82218460
	if (ctx.cr6.eq) goto loc_82218460;
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x821f05e8
	ctx.lr = 0x8221845C;
	sub_821F05E8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82218460:
	// li r31,-1
	ctx.r31.s64 = -1;
	// bl 0x822acb68
	ctx.lr = 0x82218468;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,6
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 6, ctx.xer);
	// ble cr6,0x82218490
	if (!ctx.cr6.gt) goto loc_82218490;
	// li r3,6
	ctx.r3.s64 = 6;
	// bl 0x822b28d0
	ctx.lr = 0x82218478;
	sub_822B28D0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82218490
	if (ctx.cr6.eq) goto loc_82218490;
	// li r3,6
	ctx.r3.s64 = 6;
	// bl 0x822b2288
	ctx.lr = 0x82218488;
	sub_822B2288(ctx, base);
	// bl 0x82232100
	ctx.lr = 0x8221848C;
	sub_82232100(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82218490:
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// addi r31,r11,9624
	ctx.r31.s64 = ctx.r11.s64 + 9624;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// fmr f3,f27
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f27.f64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lfs f4,12168(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12168);
	ctx.f4.f64 = double(temp.f32);
	// lwz r11,2904(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2904);
	// stw r11,2900(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2900, ctx.r11.u32);
	// bl 0x821f2970
	ctx.lr = 0x822184D4;
	sub_821F2970(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r4,83
	ctx.r4.s64 = 83;
	// stw r11,2900(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2900, ctx.r11.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822304f8
	ctx.lr = 0x822184E8;
	sub_822304F8(ctx, base);
	// li r8,96
	ctx.r8.s64 = 96;
	// li r7,92
	ctx.r7.s64 = 92;
	// fctiwz f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f30.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f30.f64));
	// fctiwz f13,f31
	ctx.f13.s64 = (ctx.f31.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f31.f64));
	// stfs f27,88(r3)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r3.u32 + 88, temp.u32);
	// stfiwx f0,r3,r8
	PPC_STORE_U32(ctx.r3.u32 + ctx.r8.u32, ctx.f0.u32);
	// stfiwx f13,r3,r7
	PPC_STORE_U32(ctx.r3.u32 + ctx.r7.u32, ctx.f13.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x823de070
	ctx.lr = 0x82218510;
	__restfpr_27(ctx, base);
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82218358) {
	__imp__sub_82218358(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82218514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82218514) {
	__imp__sub_82218514(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82218518) {
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
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b20b8
	ctx.lr = 0x8221852C;
	sub_822B20B8(ctx, base);
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,7880
	ctx.r9.s64 = ctx.r11.s64 + 7880;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_8221853C:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lhz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r8.u32 + 0);
	// cmplw cr6,r7,r3
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82218578
	if (ctx.cr6.eq) goto loc_82218578;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r8,r9,64
	ctx.r8.s64 = ctx.r9.s64 + 64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x8221853c
	if (ctx.cr6.lt) goto loc_8221853C;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822acb78
	ctx.lr = 0x82218568;
	sub_822ACB78(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82218578:
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// addi r9,r11,9452
	ctx.r9.s64 = ctx.r11.s64 + 9452;
	// lbzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// bl 0x822acb78
	ctx.lr = 0x82218588;
	sub_822ACB78(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82218518) {
	__imp__sub_82218518(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82218598) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82218358
	sub_82218358(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82218598) {
	__imp__sub_82218598(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822185A0) {
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
	// lhz r10,118(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 118);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822185e4
	if (!ctx.cr6.eq) goto loc_822185E4;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// lhz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 116);
	// addi r11,r10,26552
	ctx.r11.s64 = ctx.r10.s64 + 26552;
	// mulli r10,r9,624
	ctx.r10.s64 = ctx.r9.s64 * 624;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82218358
	ctx.lr = 0x822185D4;
	sub_82218358(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_822185E4:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x822185F0;
	sub_822AD548(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82218358
	ctx.lr = 0x822185F8;
	sub_82218358(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822185A0) {
	__imp__sub_822185A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82218608) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x823de024
	ctx.lr = 0x82218618;
	__savefpr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b2498
	ctx.lr = 0x82218628;
	sub_822B2498(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822b1fb0
	ctx.lr = 0x82218630;
	sub_822B1FB0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f27,f1
	ctx.fpscr.disableFlushMode();
	ctx.f27.f64 = ctx.f1.f64;
	// lfs f30,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f30.f64 = double(temp.f32);
	// fcmpu cr6,f1,f30
	ctx.cr6.compare(ctx.f1.f64, ctx.f30.f64);
	// bge cr6,0x82218650
	if (!ctx.cr6.lt) goto loc_82218650;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,-32280
	ctx.r3.s64 = ctx.r11.s64 + -32280;
	// bl 0x822ad350
	ctx.lr = 0x82218650;
	sub_822AD350(ctx, base);
loc_82218650:
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x822b1fb0
	ctx.lr = 0x82218658;
	sub_822B1FB0(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f1.f64;
	// fcmpu cr6,f1,f30
	ctx.cr6.compare(ctx.f1.f64, ctx.f30.f64);
	// lfs f28,-32284(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -32284);
	ctx.f28.f64 = double(temp.f32);
	// blt cr6,0x82218674
	if (ctx.cr6.lt) goto loc_82218674;
	// fcmpu cr6,f1,f28
	ctx.cr6.compare(ctx.f1.f64, ctx.f28.f64);
	// blt cr6,0x82218680
	if (ctx.cr6.lt) goto loc_82218680;
loc_82218674:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,-32360
	ctx.r3.s64 = ctx.r11.s64 + -32360;
	// bl 0x822ad350
	ctx.lr = 0x82218680;
	sub_822AD350(ctx, base);
loc_82218680:
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x822b1fb0
	ctx.lr = 0x82218688;
	sub_822B1FB0(ctx, base);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// fcmpu cr6,f1,f30
	ctx.cr6.compare(ctx.f1.f64, ctx.f30.f64);
	// blt cr6,0x8221869c
	if (ctx.cr6.lt) goto loc_8221869C;
	// fcmpu cr6,f1,f28
	ctx.cr6.compare(ctx.f1.f64, ctx.f28.f64);
	// blt cr6,0x822186a8
	if (ctx.cr6.lt) goto loc_822186A8;
loc_8221869C:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,-32440
	ctx.r3.s64 = ctx.r11.s64 + -32440;
	// bl 0x822ad350
	ctx.lr = 0x822186A8;
	sub_822AD350(ctx, base);
loc_822186A8:
	// li r6,0
	ctx.r6.s64 = 0;
	// fmr f4,f31
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f31.f64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// fmr f3,f29
	ctx.f3.f64 = ctx.f29.f64;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// fmr f1,f27
	ctx.f1.f64 = ctx.f27.f64;
	// bl 0x821f3eb0
	ctx.lr = 0x822186C4;
	sub_821F3EB0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x823de070
	ctx.lr = 0x822186D0;
	__restfpr_27(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82218608) {
	__imp__sub_82218608(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822186DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822186DC) {
	__imp__sub_822186DC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822186E0) {
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
	// addi r31,r11,26552
	ctx.r31.s64 = ctx.r11.s64 + 26552;
	// bne cr6,0x8221871c
	if (!ctx.cr6.eq) goto loc_8221871C;
	// lhz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 132);
	// mulli r11,r10,624
	ctx.r11.s64 = ctx.r10.s64 * 624;
	// add r30,r11,r31
	ctx.r30.u64 = ctx.r11.u64 + ctx.r31.u64;
	// b 0x8221872c
	goto loc_8221872C;
loc_8221871C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x82218728;
	sub_822AD548(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
loc_8221872C:
	// lhz r3,124(r30)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r30.u32 + 124);
	// bl 0x82332af8
	ctx.lr = 0x82218734;
	sub_82332AF8(ctx, base);
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x82218754
	if (!ctx.cr6.eq) goto loc_82218754;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82218754
	if (ctx.cr6.eq) goto loc_82218754;
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82218760
	if (ctx.cr6.eq) goto loc_82218760;
loc_82218754:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,-32188
	ctx.r3.s64 = ctx.r11.s64 + -32188;
	// bl 0x822ad548
	ctx.lr = 0x82218760;
	sub_822AD548(ctx, base);
loc_82218760:
	// bl 0x822acb68
	ctx.lr = 0x82218764;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// blt cr6,0x822187bc
	if (ctx.cr6.lt) goto loc_822187BC;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b28d0
	ctx.lr = 0x82218774;
	sub_822B28D0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82218788
	if (!ctx.cr6.eq) goto loc_82218788;
	// addis r11,r31,19
	ctx.r11.s64 = ctx.r31.s64 + 1245184;
	// addi r31,r11,31520
	ctx.r31.s64 = ctx.r11.s64 + 31520;
	// b 0x822187b0
	goto loc_822187B0;
loc_82218788:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82229bf0
	ctx.lr = 0x82218790;
	sub_82229BF0(ctx, base);
	// lwz r11,264(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 264);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822187b0
	if (!ctx.cr6.eq) goto loc_822187B0;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-32212
	ctx.r4.s64 = ctx.r11.s64 + -32212;
	// bl 0x822ad4e0
	ctx.lr = 0x822187B0;
	sub_822AD4E0(ctx, base);
loc_822187B0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r30,324
	ctx.r3.s64 = ctx.r30.s64 + 324;
	// bl 0x821e2e18
	ctx.lr = 0x822187BC;
	sub_821E2E18(ctx, base);
loc_822187BC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82202af8
	ctx.lr = 0x822187C4;
	sub_82202AF8(ctx, base);
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

PPC_WEAK_FUNC(sub_822186E0) {
	__imp__sub_822186E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822187DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822187DC) {
	__imp__sub_822187DC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822187E0) {
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
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b1c50
	ctx.lr = 0x822187F4;
	sub_822B1C50(ctx, base);
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// addi r10,r11,9624
	ctx.r10.s64 = ctx.r11.s64 + 9624;
	// stw r3,2904(r10)
	PPC_STORE_U32(ctx.r10.u32 + 2904, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822187E0) {
	__imp__sub_822187E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82218810) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82218818;
	__savegprlr_29(ctx, base);
	// stfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f30.u64);
	// stfd f31,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r3.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lhz r10,182(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 182);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82218850
	if (!ctx.cr6.eq) goto loc_82218850;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// lhz r9,180(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 180);
	// addi r11,r10,26552
	ctx.r11.s64 = ctx.r10.s64 + 26552;
	// mulli r10,r9,624
	ctx.r10.s64 = ctx.r9.s64 * 624;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x82218860
	goto loc_82218860;
loc_82218850:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x8221885C;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_82218860:
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x822acb68
	ctx.lr = 0x82218868;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// ble cr6,0x8221887c
	if (!ctx.cr6.gt) goto loc_8221887C;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82229bf0
	ctx.lr = 0x82218878;
	sub_82229BF0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_8221887C:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b2498
	ctx.lr = 0x82218888;
	sub_822B2498(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// lfs f31,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f31.f64 = double(temp.f32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lfs f30,12168(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f30.f64 = double(temp.f32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r31,232
	ctx.r4.s64 = ctx.r31.s64 + 232;
	// lfs f1,6912(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 6912);
	ctx.f1.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r7,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r7.u8);
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// bl 0x821f1868
	ctx.lr = 0x822188CC;
	sub_821F1868(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822188ec
	if (ctx.cr6.eq) goto loc_822188EC;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x822acc78
	ctx.lr = 0x822188DC;
	sub_822ACC78(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_822188EC:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x822acc78
	ctx.lr = 0x822188F4;
	sub_822ACC78(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82218810) {
	__imp__sub_82218810(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82218904) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82218904) {
	__imp__sub_82218904(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82218908) {
	PPC_FUNC_PROLOGUE();
	// lis r4,128
	ctx.r4.s64 = 8388608;
	// ori r4,r4,8209
	ctx.r4.u64 = ctx.r4.u64 | 8209;
	// b 0x82218810
	sub_82218810(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82218908) {
	__imp__sub_82218908(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82218914) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82218914) {
	__imp__sub_82218914(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82218918) {
	PPC_FUNC_PROLOGUE();
	// li r4,2049
	ctx.r4.s64 = 2049;
	// b 0x82218810
	sub_82218810(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82218918) {
	__imp__sub_82218918(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82218920) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82218928;
	__savegprlr_29(ctx, base);
	// stwu r1,-1152(r1)
	ea = -1152 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x8220ed70
	ctx.lr = 0x82218930;
	sub_8220ED70(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x822acb68
	ctx.lr = 0x82218938;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,2
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// bge cr6,0x8221894c
	if (!ctx.cr6.lt) goto loc_8221894C;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,-32100
	ctx.r3.s64 = ctx.r11.s64 + -32100;
	// bl 0x822ad350
	ctx.lr = 0x8221894C;
	sub_822AD350(ctx, base);
loc_8221894C:
	// lis r11,-32024
	ctx.r11.s64 = -2098724864;
	// lwz r11,11216(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11216);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8221897c
	if (ctx.cr6.eq) goto loc_8221897C;
	// bl 0x822acb68
	ctx.lr = 0x82218964;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// blt cr6,0x822189d0
	if (ctx.cr6.lt) goto loc_822189D0;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x822b1c50
	ctx.lr = 0x82218974;
	sub_822B1C50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822189d0
	if (ctx.cr6.eq) goto loc_822189D0;
loc_8221897C:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b2288
	ctx.lr = 0x82218984;
	sub_822B2288(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r31,1
	ctx.r31.s64 = 1;
loc_8221898C:
	// li r5,1024
	ctx.r5.s64 = 1024;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r31,2776
	ctx.r3.s64 = ctx.r31.s64 + 2776;
	// bl 0x8233dd38
	ctx.lr = 0x8221899C;
	sub_8233DD38(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822e8058
	ctx.lr = 0x822189A8;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822189d8
	if (ctx.cr6.eq) goto loc_822189D8;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,16
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 16, ctx.xer);
	// blt cr6,0x8221898c
	if (ctx.cr6.lt) goto loc_8221898C;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r11,-32136
	ctx.r3.s64 = ctx.r11.s64 + -32136;
	// bl 0x822e84f0
	ctx.lr = 0x822189CC;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x822189D0;
	sub_822AD350(ctx, base);
loc_822189D0:
	// addi r1,r1,1152
	ctx.r1.s64 = ctx.r1.s64 + 1152;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_822189D8:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822b1fb0
	ctx.lr = 0x822189E0;
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
	ctx.lr = 0x822189FC;
	sub_823DDE20(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// fctiwz f11,f12
	ctx.f11.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f11.u64);
	// lwz r29,84(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bge cr6,0x82218a54
	if (!ctx.cr6.lt) goto loc_82218A54;
	// extsw r11,r29
	ctx.r11.s64 = ctx.r29.s32;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfs f0,5804(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5804);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r9,-32164
	ctx.r3.s64 = ctx.r9.s64 + -32164;
	// fmuls f1,f12,f0
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfd f1,24(r1)
	PPC_STORE_U64(ctx.r1.u32 + 24, ctx.f1.u64);
	// ld r4,24(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 24);
	// bl 0x822e84f0
	ctx.lr = 0x82218A48;
	sub_822E84F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822ad4e0
	ctx.lr = 0x82218A54;
	sub_822AD4E0(ctx, base);
loc_82218A54:
	// lwz r11,264(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 264);
	// lis r10,-32020
	ctx.r10.s64 = -2098462720;
	// addi r9,r10,9624
	ctx.r9.s64 = ctx.r10.s64 + 9624;
	// stw r31,1132(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1132, ctx.r31.u32);
	// lwz r8,264(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 264);
	// lwz r11,52(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 52);
	// stw r11,1136(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1136, ctx.r11.u32);
	// lwz r7,264(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 264);
	// stw r29,1140(r7)
	PPC_STORE_U32(ctx.r7.u32 + 1140, ctx.r29.u32);
	// lwz r11,264(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 264);
	// lwz r6,12(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// ori r5,r6,32768
	ctx.r5.u64 = ctx.r6.u64 | 32768;
	// stw r5,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r5.u32);
	// addi r1,r1,1152
	ctx.r1.s64 = ctx.r1.s64 + 1152;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82218920) {
	__imp__sub_82218920(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82218A90) {
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
	// bl 0x8220ed70
	ctx.lr = 0x82218AA8;
	sub_8220ED70(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b1fb0
	ctx.lr = 0x82218AB4;
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
	ctx.lr = 0x82218AD0;
	sub_823DDE20(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// fctiwz f11,f12
	ctx.f11.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f11.u64);
	// lwz r31,84(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge cr6,0x82218b28
	if (!ctx.cr6.lt) goto loc_82218B28;
	// extsw r11,r31
	ctx.r11.s64 = ctx.r31.s32;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfs f0,5804(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5804);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r9,-32164
	ctx.r3.s64 = ctx.r9.s64 + -32164;
	// fmuls f1,f12,f0
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfd f1,24(r1)
	PPC_STORE_U64(ctx.r1.u32 + 24, ctx.f1.u64);
	// ld r4,24(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 24);
	// bl 0x822e84f0
	ctx.lr = 0x82218B1C;
	sub_822E84F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822ad4e0
	ctx.lr = 0x82218B28;
	sub_822AD4E0(ctx, base);
loc_82218B28:
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// lwz r10,264(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 264);
	// lis r9,0
	ctx.r9.s64 = 0;
	// addi r8,r11,9624
	ctx.r8.s64 = ctx.r11.s64 + 9624;
	// ori r7,r9,44192
	ctx.r7.u64 = ctx.r9.u64 | 44192;
	// lwz r11,52(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 52);
	// add r6,r11,r31
	ctx.r6.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stwx r6,r10,r7
	PPC_STORE_U32(ctx.r10.u32 + ctx.r7.u32, ctx.r6.u32);
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

PPC_WEAK_FUNC(sub_82218A90) {
	__imp__sub_82218A90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82218B60) {
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
	ctx.lr = 0x82218B70;
	__savefpr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f30,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f30.f64 = double(temp.f32);
	// lfs f28,12168(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f28.f64 = double(temp.f32);
	// fmr f31,f30
	ctx.f31.f64 = ctx.f30.f64;
	// fmr f29,f28
	ctx.f29.f64 = ctx.f28.f64;
	// bl 0x822acb68
	ctx.lr = 0x82218B90;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x82218bf8
	if (ctx.cr6.eq) goto loc_82218BF8;
	// cmplwi cr6,r3,2
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// beq cr6,0x82218bcc
	if (ctx.cr6.eq) goto loc_82218BCC;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x822b1fb0
	ctx.lr = 0x82218BA8;
	sub_822B1FB0(ctx, base);
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f1.f64;
	// fcmpu cr6,f1,f30
	ctx.cr6.compare(ctx.f1.f64, ctx.f30.f64);
	// blt cr6,0x82218bbc
	if (ctx.cr6.lt) goto loc_82218BBC;
	// fcmpu cr6,f1,f28
	ctx.cr6.compare(ctx.f1.f64, ctx.f28.f64);
	// ble cr6,0x82218bcc
	if (!ctx.cr6.gt) goto loc_82218BCC;
loc_82218BBC:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r4,r11,-32004
	ctx.r4.s64 = ctx.r11.s64 + -32004;
	// bl 0x822ad4e0
	ctx.lr = 0x82218BCC;
	sub_822AD4E0(ctx, base);
loc_82218BCC:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822b1fb0
	ctx.lr = 0x82218BD4;
	sub_822B1FB0(ctx, base);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// fcmpu cr6,f1,f30
	ctx.cr6.compare(ctx.f1.f64, ctx.f30.f64);
	// blt cr6,0x82218be8
	if (ctx.cr6.lt) goto loc_82218BE8;
	// fcmpu cr6,f1,f28
	ctx.cr6.compare(ctx.f1.f64, ctx.f28.f64);
	// ble cr6,0x82218bf8
	if (!ctx.cr6.gt) goto loc_82218BF8;
loc_82218BE8:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,-32040
	ctx.r4.s64 = ctx.r11.s64 + -32040;
	// bl 0x822ad4e0
	ctx.lr = 0x82218BF8;
	sub_822AD4E0(ctx, base);
loc_82218BF8:
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b1d30
	ctx.lr = 0x82218C04;
	sub_822B1D30(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lhz r3,82(r1)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r1.u32 + 82);
	// bl 0x82293548
	ctx.lr = 0x82218C10;
	sub_82293548(ctx, base);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lhz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// bl 0x822f45a8
	ctx.lr = 0x82218C28;
	sub_822F45A8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822ad078
	ctx.lr = 0x82218C30;
	sub_822AD078(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x823de074
	ctx.lr = 0x82218C3C;
	__restfpr_28(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82218B60) {
	__imp__sub_82218B60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82218C48) {
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
	ctx.lr = 0x82218C58;
	__savefpr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f30,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f30.f64 = double(temp.f32);
	// lfs f28,12168(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f28.f64 = double(temp.f32);
	// fmr f31,f30
	ctx.f31.f64 = ctx.f30.f64;
	// fmr f29,f28
	ctx.f29.f64 = ctx.f28.f64;
	// bl 0x822acb68
	ctx.lr = 0x82218C78;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x82218ce0
	if (ctx.cr6.eq) goto loc_82218CE0;
	// cmplwi cr6,r3,2
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// beq cr6,0x82218cb4
	if (ctx.cr6.eq) goto loc_82218CB4;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x822b1fb0
	ctx.lr = 0x82218C90;
	sub_822B1FB0(ctx, base);
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f1.f64;
	// fcmpu cr6,f1,f30
	ctx.cr6.compare(ctx.f1.f64, ctx.f30.f64);
	// blt cr6,0x82218ca4
	if (ctx.cr6.lt) goto loc_82218CA4;
	// fcmpu cr6,f1,f28
	ctx.cr6.compare(ctx.f1.f64, ctx.f28.f64);
	// ble cr6,0x82218cb4
	if (!ctx.cr6.gt) goto loc_82218CB4;
loc_82218CA4:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r4,r11,-32004
	ctx.r4.s64 = ctx.r11.s64 + -32004;
	// bl 0x822ad4e0
	ctx.lr = 0x82218CB4;
	sub_822AD4E0(ctx, base);
loc_82218CB4:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822b1fb0
	ctx.lr = 0x82218CBC;
	sub_822B1FB0(ctx, base);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// fcmpu cr6,f1,f30
	ctx.cr6.compare(ctx.f1.f64, ctx.f30.f64);
	// blt cr6,0x82218cd0
	if (ctx.cr6.lt) goto loc_82218CD0;
	// fcmpu cr6,f1,f28
	ctx.cr6.compare(ctx.f1.f64, ctx.f28.f64);
	// ble cr6,0x82218ce0
	if (!ctx.cr6.gt) goto loc_82218CE0;
loc_82218CD0:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,-32040
	ctx.r4.s64 = ctx.r11.s64 + -32040;
	// bl 0x822ad4e0
	ctx.lr = 0x82218CE0;
	sub_822AD4E0(ctx, base);
loc_82218CE0:
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b1d30
	ctx.lr = 0x82218CEC;
	sub_822B1D30(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lhz r3,82(r1)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r1.u32 + 82);
	// bl 0x82293548
	ctx.lr = 0x82218CF8;
	sub_82293548(ctx, base);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lhz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// bl 0x822f45a8
	ctx.lr = 0x82218D10;
	sub_822F45A8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x822d6f10
	ctx.lr = 0x82218D18;
	sub_822D6F10(ctx, base);
	// bl 0x822acc78
	ctx.lr = 0x82218D1C;
	sub_822ACC78(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x823de074
	ctx.lr = 0x82218D28;
	__restfpr_28(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82218C48) {
	__imp__sub_82218C48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82218D34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82218D34) {
	__imp__sub_82218D34(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82218D38) {
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
	// li r5,32
	ctx.r5.s64 = 32;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,1201
	ctx.r3.s64 = 1201;
	// bl 0x8233dd38
	ctx.lr = 0x82218D54;
	sub_8233DD38(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823dec00
	ctx.lr = 0x82218D5C;
	sub_823DEC00(ctx, base);
	// frsp f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64));
	// bl 0x822acc78
	ctx.lr = 0x82218D64;
	sub_822ACC78(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82218D38) {
	__imp__sub_82218D38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82218D74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82218D74) {
	__imp__sub_82218D74(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82218D78) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b1fb0
	ctx.lr = 0x82218D94;
	sub_822B1FB0(ctx, base);
	// stfd f1,40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f1.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r4,32
	ctx.r4.s64 = 32;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// addi r5,r11,17796
	ctx.r5.s64 = ctx.r11.s64 + 17796;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822e8368
	ctx.lr = 0x82218DB4;
	sub_822E8368(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,1201
	ctx.r3.s64 = 1201;
	// bl 0x8233e7d8
	ctx.lr = 0x82218DC0;
	sub_8233E7D8(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,5524(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5524);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f31,f31,f0
	ctx.f31.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x823de720
	ctx.lr = 0x82218DD4;
	sub_823DE720(ctx, base);
	// lis r9,-32020
	ctx.r9.s64 = -2098462720;
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// addi r31,r9,9624
	ctx.r31.s64 = ctx.r9.s64 + 9624;
	// stfs f0,16344(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16344, temp.u32);
	// bl 0x823de800
	ctx.lr = 0x82218DEC;
	sub_823DE800(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,16340(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16340, temp.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-24(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82218D78) {
	__imp__sub_82218D78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82218E0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82218E0C) {
	__imp__sub_82218E0C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82218E10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82218E18;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x82218f78
	if (ctx.cr6.eq) goto loc_82218F78;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// beq cr6,0x82218e58
	if (ctx.cr6.eq) goto loc_82218E58;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,5484(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// stfs f0,8(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 8, temp.u32);
	// lfs f13,14160(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14160);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,0(r5)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_82218E58:
	// lfs f11,24(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	ctx.f11.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fmr f5,f11
	ctx.f5.f64 = ctx.f11.f64;
	// fmuls f10,f11,f12
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// lfs f9,28(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// addi r31,r30,24
	ctx.r31.s64 = ctx.r30.s64 + 24;
	// lfs f7,32(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// lfs f0,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,5484(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f4,f9,f8,f10
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f8.f64 + ctx.f10.f64));
	// fnmadds f3,f7,f6,f4
	ctx.f3.f64 = double(float(-(ctx.f7.f64 * ctx.f6.f64 + ctx.f4.f64)));
	// fmadds f2,f12,f3,f11
	ctx.f2.f64 = double(float(ctx.f12.f64 * ctx.f3.f64 + ctx.f11.f64));
	// stfs f2,24(r30)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r30.u32 + 24, temp.u32);
	// lfs f1,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// lfs f12,28(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f11,f1,f3,f12
	ctx.f11.f64 = double(float(ctx.f1.f64 * ctx.f3.f64 + ctx.f12.f64));
	// fmuls f4,f11,f11
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// stfs f11,28(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + 28, temp.u32);
	// lfs f10,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fmr f7,f2
	ctx.f7.f64 = ctx.f2.f64;
	// lfs f9,32(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f8,f10,f3,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f3.f64 + ctx.f9.f64));
	// fmadds f3,f2,f2,f4
	ctx.f3.f64 = double(float(ctx.f2.f64 * ctx.f2.f64 + ctx.f4.f64));
	// stfs f8,32(r30)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r30.u32 + 32, temp.u32);
	// fmr f5,f11
	ctx.f5.f64 = ctx.f11.f64;
	// fmr f6,f8
	ctx.f6.f64 = ctx.f8.f64;
	// fmadds f2,f8,f8,f3
	ctx.f2.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 + ctx.f3.f64));
	// fsqrts f1,f2
	ctx.f1.f64 = double(float(sqrt(ctx.f2.f64)));
	// fneg f12,f1
	ctx.f12.u64 = ctx.f1.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f1,f13
	ctx.cr6.compare(ctx.f1.f64, ctx.f13.f64);
	// fsel f11,f12,f0,f1
	ctx.f11.f64 = ctx.f12.f64 >= 0.0 ? ctx.f0.f64 : ctx.f1.f64;
	// fdivs f10,f0,f11
	ctx.f10.f64 = double(float(ctx.f0.f64 / ctx.f11.f64));
	// fmuls f9,f7,f10
	ctx.f9.f64 = double(float(ctx.f7.f64 * ctx.f10.f64));
	// stfs f9,24(r30)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r30.u32 + 24, temp.u32);
	// fmuls f8,f5,f10
	ctx.f8.f64 = double(float(ctx.f5.f64 * ctx.f10.f64));
	// stfs f8,28(r30)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r30.u32 + 28, temp.u32);
	// fmuls f7,f6,f10
	ctx.f7.f64 = double(float(ctx.f6.f64 * ctx.f10.f64));
	// stfs f7,32(r30)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r30.u32 + 32, temp.u32);
	// bne cr6,0x82218f10
	if (!ctx.cr6.eq) goto loc_82218F10;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,-31968
	ctx.r3.s64 = ctx.r11.s64 + -31968;
	// bl 0x822e84f0
	ctx.lr = 0x82218F0C;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x82218F10;
	sub_822AD350(ctx, base);
loc_82218F10:
	// lfs f0,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lfs f13,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmuls f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f11,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fmsubs f9,f11,f10,f12
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f10.f64 - ctx.f12.f64));
	// stfs f9,12(r30)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// lfs f8,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f6,f5
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f5.f64));
	// fmsubs f3,f8,f7,f4
	ctx.f3.f64 = double(float(ctx.f8.f64 * ctx.f7.f64 - ctx.f4.f64));
	// stfs f3,16(r30)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// lfs f2,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fmsubs f11,f2,f1,f12
	ctx.f11.f64 = double(float(ctx.f2.f64 * ctx.f1.f64 - ctx.f12.f64));
	// stfs f11,20(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// bl 0x822d7c78
	ctx.lr = 0x82218F70;
	sub_822D7C78(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_82218F78:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822d50f8
	ctx.lr = 0x82218F84;
	sub_822D50F8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82218E10) {
	__imp__sub_82218E10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82218F8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82218F8C) {
	__imp__sub_82218F8C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82218F90) {
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
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b2288
	ctx.lr = 0x82218FA8;
	sub_822B2288(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r4,r11,-22000
	ctx.r4.s64 = ctx.r11.s64 + -22000;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822e7f80
	ctx.lr = 0x82218FBC;
	sub_822E7F80(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82218fd0
	if (!ctx.cr6.eq) goto loc_82218FD0;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-31784
	ctx.r4.s64 = ctx.r11.s64 + -31784;
	// bl 0x822ad4e0
	ctx.lr = 0x82218FD0;
	sub_822AD4E0(ctx, base);
loc_82218FD0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222e648
	ctx.lr = 0x82218FD8;
	sub_8222E648(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82219004
	if (!ctx.cr6.eq) goto loc_82219004;
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// addi r10,r11,9624
	ctx.r10.s64 = ctx.r11.s64 + 9624;
	// lwz r11,36(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82219004
	if (!ctx.cr6.eq) goto loc_82219004;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,-31888
	ctx.r3.s64 = ctx.r11.s64 + -31888;
	// bl 0x822ad350
	ctx.lr = 0x82219004;
	sub_822AD350(ctx, base);
loc_82219004:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822acbf8
	ctx.lr = 0x8221900C;
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

PPC_WEAK_FUNC(sub_82218F90) {
	__imp__sub_82218F90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82219020) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x8221905c
	if (ctx.cr6.eq) goto loc_8221905C;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,2264
	ctx.r3.s64 = ctx.r11.s64 + 2264;
	// bl 0x8233dd38
	ctx.lr = 0x82219058;
	sub_8233DD38(ctx, base);
	// b 0x82219070
	goto loc_82219070;
loc_8221905C:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-31716
	ctx.r4.s64 = ctx.r11.s64 + -31716;
	// li r5,24
	ctx.r5.s64 = 24;
	// bl 0x823de1f0
	ctx.lr = 0x82219070;
	sub_823DE1F0(ctx, base);
loc_82219070:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,-31736
	ctx.r3.s64 = ctx.r11.s64 + -31736;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822e84f0
	ctx.lr = 0x82219084;
	sub_822E84F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822ad4e0
	ctx.lr = 0x82219090;
	sub_822AD4E0(ctx, base);
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

PPC_WEAK_FUNC(sub_82219020) {
	__imp__sub_82219020(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822190A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x822190B0;
	__savegprlr_28(ctx, base);
	// stfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f30.u64);
	// stfd f31,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x822190dc
	if (!ctx.cr6.gt) goto loc_822190DC;
	// cmpwi cr6,r3,256
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 256, ctx.xer);
	// blt cr6,0x822190f0
	if (ctx.cr6.lt) goto loc_822190F0;
loc_822190DC:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,-31604
	ctx.r3.s64 = ctx.r11.s64 + -31604;
	// bl 0x822e84f0
	ctx.lr = 0x822190EC;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x822190F0;
	sub_822AD350(ctx, base);
loc_822190F0:
	// li r4,76
	ctx.r4.s64 = 76;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822304f8
	ctx.lr = 0x822190FC;
	sub_822304F8(ctx, base);
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// bne cr6,0x8221913c
	if (!ctx.cr6.eq) goto loc_8221913C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,5484(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,68(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// stfs f0,72(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// lfs f13,14160(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14160);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,64(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f30,-56(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_8221913C:
	// lfs f0,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmuls f13,f0,f0
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f12,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f30,5484(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f30.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f31,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f31.f64 = double(temp.f32);
	// stfs f11,80(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmadds f10,f12,f12,f13
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f13.f64));
	// fmadds f9,f11,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f10.f64));
	// fsqrts f8,f9
	ctx.f8.f64 = double(float(sqrt(ctx.f9.f64)));
	// fneg f7,f8
	ctx.f7.u64 = ctx.f8.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f8,f30
	ctx.cr6.compare(ctx.f8.f64, ctx.f30.f64);
	// fsel f6,f7,f31,f8
	ctx.f6.f64 = ctx.f7.f64 >= 0.0 ? ctx.f31.f64 : ctx.f8.f64;
	// fdivs f5,f31,f6
	ctx.f5.f64 = double(float(ctx.f31.f64 / ctx.f6.f64));
	// fmuls f4,f11,f5
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f5.f64));
	// stfs f4,0(r30)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// fmuls f3,f0,f5
	ctx.f3.f64 = double(float(ctx.f0.f64 * ctx.f5.f64));
	// stfs f3,4(r30)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// fmuls f2,f12,f5
	ctx.f2.f64 = double(float(ctx.f12.f64 * ctx.f5.f64));
	// stfs f2,8(r30)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// bne cr6,0x822191b0
	if (!ctx.cr6.eq) goto loc_822191B0;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r11,-31652
	ctx.r4.s64 = ctx.r11.s64 + -31652;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82219020
	ctx.lr = 0x822191B0;
	sub_82219020(ctx, base);
loc_822191B0:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x822191d8
	if (!ctx.cr6.eq) goto loc_822191D8;
	// addi r4,r29,64
	ctx.r4.s64 = ctx.r29.s64 + 64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822d50f8
	ctx.lr = 0x822191C4;
	sub_822D50F8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_822191D8:
	// lfs f0,4(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f0
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f12,8(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,0(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f10,f12,f12,f13
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f13.f64));
	// fmadds f9,f11,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f10.f64));
	// fsqrts f8,f9
	ctx.f8.f64 = double(float(sqrt(ctx.f9.f64)));
	// fneg f7,f8
	ctx.f7.u64 = ctx.f8.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f8,f30
	ctx.cr6.compare(ctx.f8.f64, ctx.f30.f64);
	// fsel f6,f7,f31,f8
	ctx.f6.f64 = ctx.f7.f64 >= 0.0 ? ctx.f31.f64 : ctx.f8.f64;
	// fdivs f5,f31,f6
	ctx.f5.f64 = double(float(ctx.f31.f64 / ctx.f6.f64));
	// fmuls f4,f11,f5
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f5.f64));
	// stfs f4,104(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fmuls f3,f0,f5
	ctx.f3.f64 = double(float(ctx.f0.f64 * ctx.f5.f64));
	// stfs f3,108(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// fmuls f2,f12,f5
	ctx.f2.f64 = double(float(ctx.f12.f64 * ctx.f5.f64));
	// stfs f2,112(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// bne cr6,0x82219234
	if (!ctx.cr6.eq) goto loc_82219234;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r11,-31692
	ctx.r4.s64 = ctx.r11.s64 + -31692;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82219020
	ctx.lr = 0x82219234;
	sub_82219020(ctx, base);
loc_82219234:
	// addi r5,r29,64
	ctx.r5.s64 = ctx.r29.s64 + 64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82218e10
	ctx.lr = 0x82219244;
	sub_82218E10(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822190A8) {
	__imp__sub_822190A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82219258) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x822acb68
	ctx.lr = 0x82219270;
	sub_822ACB68(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// blt cr6,0x82219284
	if (ctx.cr6.lt) goto loc_82219284;
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// ble cr6,0x82219290
	if (!ctx.cr6.gt) goto loc_82219290;
loc_82219284:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-14400
	ctx.r3.s64 = ctx.r11.s64 + -14400;
	// bl 0x822ad350
	ctx.lr = 0x82219290;
	sub_822AD350(ctx, base);
loc_82219290:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b1c50
	ctx.lr = 0x82219298;
	sub_822B1C50(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822b2498
	ctx.lr = 0x822192A8;
	sub_822B2498(ctx, base);
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// ble cr6,0x82219300
	if (!ctx.cr6.gt) goto loc_82219300;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x822b2498
	ctx.lr = 0x822192BC;
	sub_822B2498(ctx, base);
	// cmpwi cr6,r30,3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 3, ctx.xer);
	// ble cr6,0x822192e8
	if (!ctx.cr6.gt) goto loc_822192E8;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x822b2498
	ctx.lr = 0x822192D0;
	sub_822B2498(ctx, base);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822190a8
	ctx.lr = 0x822192E4;
	sub_822190A8(ctx, base);
	// b 0x82219354
	goto loc_82219354;
loc_822192E8:
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822190a8
	ctx.lr = 0x822192FC;
	sub_822190A8(ctx, base);
	// b 0x82219354
	goto loc_82219354;
loc_82219300:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x82219310
	if (!ctx.cr6.gt) goto loc_82219310;
	// cmpwi cr6,r31,256
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 256, ctx.xer);
	// blt cr6,0x82219324
	if (ctx.cr6.lt) goto loc_82219324;
loc_82219310:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,-31604
	ctx.r3.s64 = ctx.r11.s64 + -31604;
	// bl 0x822e84f0
	ctx.lr = 0x82219320;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x82219324;
	sub_822AD350(ctx, base);
loc_82219324:
	// li r4,76
	ctx.r4.s64 = 76;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822304f8
	ctx.lr = 0x82219330;
	sub_822304F8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// clrlwi r9,r31,24
	ctx.r9.u64 = ctx.r31.u32 & 0xFF;
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// lfs f13,14160(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14160);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,5484(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,64(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// stfs f0,68(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// stfs f0,72(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 72, temp.u32);
loc_82219354:
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,168(r3)
	PPC_STORE_U32(ctx.r3.u32 + 168, ctx.r11.u32);
	// bl 0x82229b60
	ctx.lr = 0x82219360;
	sub_82229B60(ctx, base);
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

PPC_WEAK_FUNC(sub_82219258) {
	__imp__sub_82219258(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82219378) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82219380;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x822193a0
	if (!ctx.cr6.gt) goto loc_822193A0;
	// cmpwi cr6,r4,256
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 256, ctx.xer);
	// blt cr6,0x822193bc
	if (ctx.cr6.lt) goto loc_822193BC;
loc_822193A0:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r11,-31468
	ctx.r3.s64 = ctx.r11.s64 + -31468;
	// bl 0x822e84f0
	ctx.lr = 0x822193B0;
	sub_822E84F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822ad4e0
	ctx.lr = 0x822193BC;
	sub_822AD4E0(ctx, base);
loc_822193BC:
	// lhz r11,604(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 604);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822193d8
	if (!ctx.cr6.eq) goto loc_822193D8;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,-31508
	ctx.r4.s64 = ctx.r11.s64 + -31508;
	// bl 0x822ad4e0
	ctx.lr = 0x822193D8;
	sub_822AD4E0(ctx, base);
loc_822193D8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8233d278
	ctx.lr = 0x822193E4;
	sub_8233D278(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x8221942c
	if (!ctx.cr6.lt) goto loc_8221942C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8233cf18
	ctx.lr = 0x822193F4;
	sub_8233CF18(ctx, base);
	// lhz r3,604(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 604);
	// bl 0x8222e3b0
	ctx.lr = 0x822193FC;
	sub_8222E3B0(ctx, base);
	// bl 0x822a13a0
	ctx.lr = 0x82219400;
	sub_822A13A0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822a13a0
	ctx.lr = 0x8221940C;
	sub_822A13A0(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-31560
	ctx.r3.s64 = ctx.r11.s64 + -31560;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x822e84f0
	ctx.lr = 0x82219420;
	sub_822E84F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x822ad4e0
	ctx.lr = 0x8221942C;
	sub_822AD4E0(ctx, base);
loc_8221942C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822a13a0
	ctx.lr = 0x82219434;
	sub_822A13A0(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r11,-31568
	ctx.r3.s64 = ctx.r11.s64 + -31568;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x822e84f0
	ctx.lr = 0x82219448;
	sub_822E84F0(ctx, base);
	// li r4,2520
	ctx.r4.s64 = 2520;
	// li r5,256
	ctx.r5.s64 = 256;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x8222de40
	ctx.lr = 0x8221945C;
	sub_8222DE40(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,77
	ctx.r4.s64 = 77;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222f978
	ctx.lr = 0x8221946C;
	sub_8222F978(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82219378) {
	__imp__sub_82219378(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82219474) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82219474) {
	__imp__sub_82219474(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82219478) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x82219480;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
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
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x822194a4
	if (!ctx.cr6.gt) goto loc_822194A4;
	// cmpwi cr6,r5,256
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 256, ctx.xer);
	// blt cr6,0x822194c0
	if (ctx.cr6.lt) goto loc_822194C0;
loc_822194A4:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r11,-31468
	ctx.r3.s64 = ctx.r11.s64 + -31468;
	// bl 0x822e84f0
	ctx.lr = 0x822194B4;
	sub_822E84F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822ad4e0
	ctx.lr = 0x822194C0;
	sub_822AD4E0(ctx, base);
loc_822194C0:
	// lhz r11,604(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 604);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822194dc
	if (!ctx.cr6.eq) goto loc_822194DC;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,-31508
	ctx.r4.s64 = ctx.r11.s64 + -31508;
	// bl 0x822ad4e0
	ctx.lr = 0x822194DC;
	sub_822AD4E0(ctx, base);
loc_822194DC:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8233d278
	ctx.lr = 0x822194E8;
	sub_8233D278(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x82219530
	if (!ctx.cr6.lt) goto loc_82219530;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8233cf18
	ctx.lr = 0x822194F8;
	sub_8233CF18(ctx, base);
	// lhz r3,604(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 604);
	// bl 0x8222e3b0
	ctx.lr = 0x82219500;
	sub_8222E3B0(ctx, base);
	// bl 0x822a13a0
	ctx.lr = 0x82219504;
	sub_822A13A0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822a13a0
	ctx.lr = 0x82219510;
	sub_822A13A0(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-31560
	ctx.r3.s64 = ctx.r11.s64 + -31560;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x822e84f0
	ctx.lr = 0x82219524;
	sub_822E84F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x822ad4e0
	ctx.lr = 0x82219530;
	sub_822AD4E0(ctx, base);
loc_82219530:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822a13a0
	ctx.lr = 0x82219538;
	sub_822A13A0(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r3,r11,-31440
	ctx.r3.s64 = ctx.r11.s64 + -31440;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x822e84f0
	ctx.lr = 0x82219550;
	sub_822E84F0(ctx, base);
	// li r4,2520
	ctx.r4.s64 = 2520;
	// li r5,256
	ctx.r5.s64 = 256;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x8222de40
	ctx.lr = 0x82219564;
	sub_8222DE40(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,79
	ctx.r4.s64 = 79;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222f978
	ctx.lr = 0x82219574;
	sub_8222F978(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82219478) {
	__imp__sub_82219478(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8221957C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8221957C) {
	__imp__sub_8221957C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82219580) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82219588;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x822acb68
	ctx.lr = 0x82219590;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// beq cr6,0x822195a4
	if (ctx.cr6.eq) goto loc_822195A4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-14400
	ctx.r3.s64 = ctx.r11.s64 + -14400;
	// bl 0x822ad350
	ctx.lr = 0x822195A4;
	sub_822AD350(ctx, base);
loc_822195A4:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b1c50
	ctx.lr = 0x822195AC;
	sub_822B1C50(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82229bf0
	ctx.lr = 0x822195B8;
	sub_82229BF0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x822b2168
	ctx.lr = 0x822195C4;
	sub_822B2168(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822a13a0
	ctx.lr = 0x822195CC;
	sub_822A13A0(ctx, base);
	// li r4,34
	ctx.r4.s64 = 34;
	// bl 0x823dfb30
	ctx.lr = 0x822195D4;
	sub_823DFB30(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822195ec
	if (ctx.cr6.eq) goto loc_822195EC;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r4,r11,-31428
	ctx.r4.s64 = ctx.r11.s64 + -31428;
	// bl 0x822ad4e0
	ctx.lr = 0x822195EC;
	sub_822AD4E0(ctx, base);
loc_822195EC:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82219378
	ctx.lr = 0x822195FC;
	sub_82219378(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82219580) {
	__imp__sub_82219580(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82219604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82219604) {
	__imp__sub_82219604(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82219608) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82219610;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x822acb68
	ctx.lr = 0x82219618;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// beq cr6,0x8221962c
	if (ctx.cr6.eq) goto loc_8221962C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-14400
	ctx.r3.s64 = ctx.r11.s64 + -14400;
	// bl 0x822ad350
	ctx.lr = 0x8221962C;
	sub_822AD350(ctx, base);
loc_8221962C:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b1c50
	ctx.lr = 0x82219634;
	sub_822B1C50(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x82219648
	if (!ctx.cr6.gt) goto loc_82219648;
	// cmpwi cr6,r3,256
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 256, ctx.xer);
	// blt cr6,0x82219664
	if (ctx.cr6.lt) goto loc_82219664;
loc_82219648:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r11,-31468
	ctx.r3.s64 = ctx.r11.s64 + -31468;
	// bl 0x822e84f0
	ctx.lr = 0x82219658;
	sub_822E84F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822ad4e0
	ctx.lr = 0x82219664;
	sub_822AD4E0(ctx, base);
loc_82219664:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82229bf0
	ctx.lr = 0x8221966C;
	sub_82229BF0(ctx, base);
	// lhz r11,604(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 604);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8221968c
	if (!ctx.cr6.eq) goto loc_8221968C;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,-31388
	ctx.r4.s64 = ctx.r11.s64 + -31388;
	// bl 0x822ad4e0
	ctx.lr = 0x8221968C;
	sub_822AD4E0(ctx, base);
loc_8221968C:
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x822b2168
	ctx.lr = 0x82219694;
	sub_822B2168(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x822a13a0
	ctx.lr = 0x8221969C;
	sub_822A13A0(ctx, base);
	// li r4,34
	ctx.r4.s64 = 34;
	// bl 0x823dfb30
	ctx.lr = 0x822196A4;
	sub_823DFB30(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822196bc
	if (ctx.cr6.eq) goto loc_822196BC;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r4,r11,-31428
	ctx.r4.s64 = ctx.r11.s64 + -31428;
	// bl 0x822ad4e0
	ctx.lr = 0x822196BC;
	sub_822AD4E0(ctx, base);
loc_822196BC:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8233d278
	ctx.lr = 0x822196C8;
	sub_8233D278(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x82219710
	if (!ctx.cr6.lt) goto loc_82219710;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8233cf18
	ctx.lr = 0x822196D8;
	sub_8233CF18(ctx, base);
	// lhz r3,604(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 604);
	// bl 0x8222e3b0
	ctx.lr = 0x822196E0;
	sub_8222E3B0(ctx, base);
	// bl 0x822a13a0
	ctx.lr = 0x822196E4;
	sub_822A13A0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822a13a0
	ctx.lr = 0x822196F0;
	sub_822A13A0(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-31560
	ctx.r3.s64 = ctx.r11.s64 + -31560;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x822e84f0
	ctx.lr = 0x82219704;
	sub_822E84F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x822ad4e0
	ctx.lr = 0x82219710;
	sub_822AD4E0(ctx, base);
loc_82219710:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822a13a0
	ctx.lr = 0x82219718;
	sub_822A13A0(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r11,-31568
	ctx.r3.s64 = ctx.r11.s64 + -31568;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x822e84f0
	ctx.lr = 0x8221972C;
	sub_822E84F0(ctx, base);
	// li r4,2520
	ctx.r4.s64 = 2520;
	// li r5,256
	ctx.r5.s64 = 256;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x8222de40
	ctx.lr = 0x82219740;
	sub_8222DE40(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,78
	ctx.r4.s64 = 78;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222f978
	ctx.lr = 0x82219750;
	sub_8222F978(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82219608) {
	__imp__sub_82219608(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82219758) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x822acb68
	ctx.lr = 0x82219774;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4, ctx.xer);
	// beq cr6,0x82219788
	if (ctx.cr6.eq) goto loc_82219788;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-14400
	ctx.r3.s64 = ctx.r11.s64 + -14400;
	// bl 0x822ad350
	ctx.lr = 0x82219788;
	sub_822AD350(ctx, base);
loc_82219788:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b2498
	ctx.lr = 0x82219794;
	sub_822B2498(ctx, base);
	// li r4,80
	ctx.r4.s64 = 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822304f8
	ctx.lr = 0x822197A0;
	sub_822304F8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822b1fb0
	ctx.lr = 0x822197AC;
	sub_822B1FB0(ctx, base);
	// stfs f1,92(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 92, temp.u32);
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x822b1fb0
	ctx.lr = 0x822197B8;
	sub_822B1FB0(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lfs f0,92(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// stfs f1,88(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 88, temp.u32);
	// addi r30,r11,-31296
	ctx.r30.s64 = ctx.r11.s64 + -31296;
	// lfs f31,5484(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f31.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x822197e4
	if (!ctx.cr6.lt) goto loc_822197E4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822ad4e0
	ctx.lr = 0x822197E4;
	sub_822AD4E0(ctx, base);
loc_822197E4:
	// lfs f0,88(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x822197fc
	if (!ctx.cr6.lt) goto loc_822197FC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x822ad4e0
	ctx.lr = 0x822197FC;
	sub_822AD4E0(ctx, base);
loc_822197FC:
	// lfs f0,88(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,92(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82219818
	if (!ctx.cr6.gt) goto loc_82219818;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,-31340
	ctx.r3.s64 = ctx.r11.s64 + -31340;
	// bl 0x822ad350
	ctx.lr = 0x82219818;
	sub_822AD350(ctx, base);
loc_82219818:
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x822b1fb0
	ctx.lr = 0x82219820;
	sub_822B1FB0(ctx, base);
	// stfs f1,96(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 96, temp.u32);
	// fmr f0,f1
	ctx.f0.f64 = ctx.f1.f64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// lfs f2,92(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	ctx.f2.f64 = double(temp.f32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f1,88(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	ctx.f1.f64 = double(temp.f32);
	// fmr f3,f0
	ctx.f3.f64 = ctx.f0.f64;
	// bl 0x8234aa58
	ctx.lr = 0x82219844;
	sub_8234AA58(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
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

PPC_WEAK_FUNC(sub_82219758) {
	__imp__sub_82219758(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82219860) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x822acb68
	ctx.lr = 0x82219880;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4, ctx.xer);
	// beq cr6,0x82219894
	if (ctx.cr6.eq) goto loc_82219894;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-14400
	ctx.r3.s64 = ctx.r11.s64 + -14400;
	// bl 0x822ad350
	ctx.lr = 0x82219894;
	sub_822AD350(ctx, base);
loc_82219894:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b2498
	ctx.lr = 0x822198A0;
	sub_822B2498(ctx, base);
	// li r4,82
	ctx.r4.s64 = 82;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822304f8
	ctx.lr = 0x822198AC;
	sub_822304F8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822b1fb0
	ctx.lr = 0x822198B8;
	sub_822B1FB0(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// bl 0x822b1fb0
	ctx.lr = 0x822198C4;
	sub_822B1FB0(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// stfs f30,92(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r30.u32 + 92, temp.u32);
	// stfs f1,88(r30)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + 88, temp.u32);
	// addi r31,r11,-31296
	ctx.r31.s64 = ctx.r11.s64 + -31296;
	// lfs f31,5484(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f31.f64 = double(temp.f32);
	// fcmpu cr6,f30,f31
	ctx.cr6.compare(ctx.f30.f64, ctx.f31.f64);
	// bge cr6,0x822198f0
	if (!ctx.cr6.lt) goto loc_822198F0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822ad4e0
	ctx.lr = 0x822198F0;
	sub_822AD4E0(ctx, base);
loc_822198F0:
	// lfs f0,88(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x82219908
	if (!ctx.cr6.lt) goto loc_82219908;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x822ad4e0
	ctx.lr = 0x82219908;
	sub_822AD4E0(ctx, base);
loc_82219908:
	// lfs f0,88(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,92(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82219924
	if (!ctx.cr6.gt) goto loc_82219924;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,-31340
	ctx.r3.s64 = ctx.r11.s64 + -31340;
	// bl 0x822ad350
	ctx.lr = 0x82219924;
	sub_822AD350(ctx, base);
loc_82219924:
	// addi r31,r30,96
	ctx.r31.s64 = ctx.r30.s64 + 96;
	// li r3,3
	ctx.r3.s64 = 3;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822b2498
	ctx.lr = 0x82219934;
	sub_822B2498(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f13,96(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r11,-5928
	ctx.r11.s64 = ctx.r11.s64 + -5928;
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x82219978
	if (!ctx.cr6.eq) goto loc_82219978;
	// lfs f13,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x82219978
	if (!ctx.cr6.eq) goto loc_82219978;
	// lfs f13,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x82219978
	if (!ctx.cr6.eq) goto loc_82219978;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,17672(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 17672);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
loc_82219978:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f2,92(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	ctx.f2.f64 = double(temp.f32);
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// lfs f1,88(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	ctx.f1.f64 = double(temp.f32);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f3,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f3.f64 = double(temp.f32);
	// bl 0x8234aa58
	ctx.lr = 0x82219998;
	sub_8234AA58(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
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

PPC_WEAK_FUNC(sub_82219860) {
	__imp__sub_82219860(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822199B8) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x822acb68
	ctx.lr = 0x822199D8;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,5
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 5, ctx.xer);
	// beq cr6,0x822199ec
	if (ctx.cr6.eq) goto loc_822199EC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-14400
	ctx.r3.s64 = ctx.r11.s64 + -14400;
	// bl 0x822ad350
	ctx.lr = 0x822199EC;
	sub_822AD350(ctx, base);
loc_822199EC:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b2498
	ctx.lr = 0x822199F8;
	sub_822B2498(ctx, base);
	// li r4,84
	ctx.r4.s64 = 84;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822304f8
	ctx.lr = 0x82219A04;
	sub_822304F8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822b1fb0
	ctx.lr = 0x82219A10;
	sub_822B1FB0(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// bl 0x822b1fb0
	ctx.lr = 0x82219A1C;
	sub_822B1FB0(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// stfs f30,92(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 92, temp.u32);
	// stfs f1,88(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 88, temp.u32);
	// addi r30,r11,-31296
	ctx.r30.s64 = ctx.r11.s64 + -31296;
	// lfs f31,5484(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f31.f64 = double(temp.f32);
	// fcmpu cr6,f30,f31
	ctx.cr6.compare(ctx.f30.f64, ctx.f31.f64);
	// bge cr6,0x82219a48
	if (!ctx.cr6.lt) goto loc_82219A48;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822ad4e0
	ctx.lr = 0x82219A48;
	sub_822AD4E0(ctx, base);
loc_82219A48:
	// lfs f0,88(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x82219a60
	if (!ctx.cr6.lt) goto loc_82219A60;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x822ad4e0
	ctx.lr = 0x82219A60;
	sub_822AD4E0(ctx, base);
loc_82219A60:
	// lfs f0,88(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,92(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82219a7c
	if (!ctx.cr6.gt) goto loc_82219A7C;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,-31340
	ctx.r3.s64 = ctx.r11.s64 + -31340;
	// bl 0x822ad350
	ctx.lr = 0x82219A7C;
	sub_822AD350(ctx, base);
loc_82219A7C:
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x822b1fb0
	ctx.lr = 0x82219A84;
	sub_822B1FB0(ctx, base);
	// stfs f1,96(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 96, temp.u32);
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x822b1fb0
	ctx.lr = 0x82219A90;
	sub_822B1FB0(ctx, base);
	// lfs f0,96(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// stfs f1,100(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 100, temp.u32);
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// ble cr6,0x82219aac
	if (!ctx.cr6.gt) goto loc_82219AAC;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,-31276
	ctx.r3.s64 = ctx.r11.s64 + -31276;
	// bl 0x822ad350
	ctx.lr = 0x82219AAC;
	sub_822AD350(ctx, base);
loc_82219AAC:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f4,100(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	ctx.f4.f64 = double(temp.f32);
	// li r3,3
	ctx.r3.s64 = 3;
	// lfs f3,96(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,92(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,88(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82258078
	ctx.lr = 0x82219AC8;
	sub_82258078(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
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

PPC_WEAK_FUNC(sub_822199B8) {
	__imp__sub_822199B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82219AE8) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x822acb68
	ctx.lr = 0x82219B04;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4, ctx.xer);
	// beq cr6,0x82219b18
	if (ctx.cr6.eq) goto loc_82219B18;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-14400
	ctx.r3.s64 = ctx.r11.s64 + -14400;
	// bl 0x822ad350
	ctx.lr = 0x82219B18;
	sub_822AD350(ctx, base);
loc_82219B18:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b2498
	ctx.lr = 0x82219B24;
	sub_822B2498(ctx, base);
	// li r4,81
	ctx.r4.s64 = 81;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822304f8
	ctx.lr = 0x82219B30;
	sub_822304F8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822b1fb0
	ctx.lr = 0x82219B3C;
	sub_822B1FB0(ctx, base);
	// stfs f1,92(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 92, temp.u32);
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x822b1fb0
	ctx.lr = 0x82219B48;
	sub_822B1FB0(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lfs f0,92(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// stfs f1,88(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 88, temp.u32);
	// addi r30,r11,-31296
	ctx.r30.s64 = ctx.r11.s64 + -31296;
	// lfs f31,5484(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f31.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x82219b74
	if (!ctx.cr6.lt) goto loc_82219B74;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822ad4e0
	ctx.lr = 0x82219B74;
	sub_822AD4E0(ctx, base);
loc_82219B74:
	// lfs f0,88(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x82219b8c
	if (!ctx.cr6.lt) goto loc_82219B8C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x822ad4e0
	ctx.lr = 0x82219B8C;
	sub_822AD4E0(ctx, base);
loc_82219B8C:
	// lfs f0,88(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,92(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82219ba8
	if (!ctx.cr6.gt) goto loc_82219BA8;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,-31340
	ctx.r3.s64 = ctx.r11.s64 + -31340;
	// bl 0x822ad350
	ctx.lr = 0x82219BA8;
	sub_822AD350(ctx, base);
loc_82219BA8:
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x822b1fb0
	ctx.lr = 0x82219BB0;
	sub_822B1FB0(ctx, base);
	// stfs f1,96(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 96, temp.u32);
	// fmr f0,f1
	ctx.f0.f64 = ctx.f1.f64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// lfs f2,92(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	ctx.f2.f64 = double(temp.f32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f1,88(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	ctx.f1.f64 = double(temp.f32);
	// fmr f3,f0
	ctx.f3.f64 = ctx.f0.f64;
	// bl 0x8234aa58
	ctx.lr = 0x82219BD4;
	sub_8234AA58(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
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

PPC_WEAK_FUNC(sub_82219AE8) {
	__imp__sub_82219AE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82219BF0) {
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
	// bl 0x823ddffc
	ctx.lr = 0x82219C08;
	__savefpr_17(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f22,f2
	ctx.f22.f64 = ctx.f2.f64;
	// fmr f29,f3
	ctx.f29.f64 = ctx.f3.f64;
	// fmr f28,f4
	ctx.f28.f64 = ctx.f4.f64;
	// fmr f27,f5
	ctx.f27.f64 = ctx.f5.f64;
	// lfs f31,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f31.f64 = double(temp.f32);
	// fmr f21,f6
	ctx.f21.f64 = ctx.f6.f64;
	// fmr f25,f7
	ctx.f25.f64 = ctx.f7.f64;
	// fmr f20,f8
	ctx.f20.f64 = ctx.f8.f64;
	// fmr f19,f9
	ctx.f19.f64 = ctx.f9.f64;
	// fmr f18,f10
	ctx.f18.f64 = ctx.f10.f64;
	// fmr f24,f11
	ctx.f24.f64 = ctx.f11.f64;
	// fmr f23,f12
	ctx.f23.f64 = ctx.f12.f64;
	// fmr f17,f13
	ctx.f17.f64 = ctx.f13.f64;
	// fcmpu cr6,f1,f31
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// bge cr6,0x82219c68
	if (!ctx.cr6.lt) goto loc_82219C68;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-30808
	ctx.r3.s64 = ctx.r11.s64 + -30808;
	// bl 0x822e84f0
	ctx.lr = 0x82219C64;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x82219C68;
	sub_822AD350(ctx, base);
loc_82219C68:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fcmpu cr6,f29,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f29.f64, ctx.f31.f64);
	// lfs f26,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f26.f64 = double(temp.f32);
	// blt cr6,0x82219ca0
	if (ctx.cr6.lt) goto loc_82219CA0;
	// fcmpu cr6,f29,f26
	ctx.cr6.compare(ctx.f29.f64, ctx.f26.f64);
	// bgt cr6,0x82219ca0
	if (ctx.cr6.gt) goto loc_82219CA0;
	// fcmpu cr6,f28,f31
	ctx.cr6.compare(ctx.f28.f64, ctx.f31.f64);
	// blt cr6,0x82219ca0
	if (ctx.cr6.lt) goto loc_82219CA0;
	// fcmpu cr6,f28,f26
	ctx.cr6.compare(ctx.f28.f64, ctx.f26.f64);
	// bgt cr6,0x82219ca0
	if (ctx.cr6.gt) goto loc_82219CA0;
	// fcmpu cr6,f27,f31
	ctx.cr6.compare(ctx.f27.f64, ctx.f31.f64);
	// blt cr6,0x82219ca0
	if (ctx.cr6.lt) goto loc_82219CA0;
	// fcmpu cr6,f27,f26
	ctx.cr6.compare(ctx.f27.f64, ctx.f26.f64);
	// ble cr6,0x82219cb4
	if (!ctx.cr6.gt) goto loc_82219CB4;
loc_82219CA0:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,-30872
	ctx.r3.s64 = ctx.r11.s64 + -30872;
	// bl 0x822e84f0
	ctx.lr = 0x82219CB0;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x82219CB4;
	sub_822AD350(ctx, base);
loc_82219CB4:
	// fcmpu cr6,f25,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f25.f64, ctx.f31.f64);
	// bge cr6,0x82219cd0
	if (!ctx.cr6.lt) goto loc_82219CD0;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,-30920
	ctx.r3.s64 = ctx.r11.s64 + -30920;
	// bl 0x822e84f0
	ctx.lr = 0x82219CCC;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x82219CD0;
	sub_822AD350(ctx, base);
loc_82219CD0:
	// lbz r30,391(r1)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r1.u32 + 391);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82219d94
	if (ctx.cr6.eq) goto loc_82219D94;
	// fcmpu cr6,f20,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f20.f64, ctx.f31.f64);
	// blt cr6,0x82219d0c
	if (ctx.cr6.lt) goto loc_82219D0C;
	// fcmpu cr6,f20,f26
	ctx.cr6.compare(ctx.f20.f64, ctx.f26.f64);
	// bgt cr6,0x82219d0c
	if (ctx.cr6.gt) goto loc_82219D0C;
	// fcmpu cr6,f19,f31
	ctx.cr6.compare(ctx.f19.f64, ctx.f31.f64);
	// blt cr6,0x82219d0c
	if (ctx.cr6.lt) goto loc_82219D0C;
	// fcmpu cr6,f19,f26
	ctx.cr6.compare(ctx.f19.f64, ctx.f26.f64);
	// bgt cr6,0x82219d0c
	if (ctx.cr6.gt) goto loc_82219D0C;
	// fcmpu cr6,f18,f31
	ctx.cr6.compare(ctx.f18.f64, ctx.f31.f64);
	// blt cr6,0x82219d0c
	if (ctx.cr6.lt) goto loc_82219D0C;
	// fcmpu cr6,f18,f26
	ctx.cr6.compare(ctx.f18.f64, ctx.f26.f64);
	// ble cr6,0x82219d20
	if (!ctx.cr6.gt) goto loc_82219D20;
loc_82219D0C:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,-30992
	ctx.r3.s64 = ctx.r11.s64 + -30992;
	// bl 0x822e84f0
	ctx.lr = 0x82219D1C;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x82219D20;
	sub_822AD350(ctx, base);
loc_82219D20:
	// fcmpu cr6,f24,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f24.f64, ctx.f31.f64);
	// blt cr6,0x82219d48
	if (ctx.cr6.lt) goto loc_82219D48;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,5812(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5812);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f24,f0
	ctx.cr6.compare(ctx.f24.f64, ctx.f0.f64);
	// bgt cr6,0x82219d48
	if (ctx.cr6.gt) goto loc_82219D48;
	// fcmpu cr6,f23,f31
	ctx.cr6.compare(ctx.f23.f64, ctx.f31.f64);
	// blt cr6,0x82219d48
	if (ctx.cr6.lt) goto loc_82219D48;
	// fcmpu cr6,f23,f0
	ctx.cr6.compare(ctx.f23.f64, ctx.f0.f64);
	// ble cr6,0x82219d5c
	if (!ctx.cr6.gt) goto loc_82219D5C;
loc_82219D48:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,-31044
	ctx.r3.s64 = ctx.r11.s64 + -31044;
	// bl 0x822e84f0
	ctx.lr = 0x82219D58;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x82219D5C;
	sub_822AD350(ctx, base);
loc_82219D5C:
	// fcmpu cr6,f24,f23
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f24.f64, ctx.f23.f64);
	// blt cr6,0x82219d78
	if (ctx.cr6.lt) goto loc_82219D78;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,-31096
	ctx.r3.s64 = ctx.r11.s64 + -31096;
	// bl 0x822e84f0
	ctx.lr = 0x82219D74;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x82219D78;
	sub_822AD350(ctx, base);
loc_82219D78:
	// fcmpu cr6,f17,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f17.f64, ctx.f31.f64);
	// bge cr6,0x82219d94
	if (!ctx.cr6.lt) goto loc_82219D94;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,-31152
	ctx.r3.s64 = ctx.r11.s64 + -31152;
	// bl 0x822e84f0
	ctx.lr = 0x82219D90;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x82219D94;
	sub_822AD350(ctx, base);
loc_82219D94:
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// addi r10,r11,9624
	ctx.r10.s64 = ctx.r11.s64 + 9624;
	// lwz r11,2892(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2892);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82219ea4
	if (ctx.cr6.eq) goto loc_82219EA4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f6,f21
	ctx.fpscr.disableFlushMode();
	ctx.f6.f64 = ctx.f21.f64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// fmr f5,f27
	ctx.f5.f64 = ctx.f27.f64;
	// fmr f4,f28
	ctx.f4.f64 = ctx.f28.f64;
	// fmr f3,f29
	ctx.f3.f64 = ctx.f29.f64;
	// fmr f2,f22
	ctx.f2.f64 = ctx.f22.f64;
	// lfs f0,12240(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12240);
	ctx.f0.f64 = double(temp.f32);
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// fmuls f7,f25,f0
	ctx.f7.f64 = double(float(ctx.f25.f64 * ctx.f0.f64));
	// beq cr6,0x82219e5c
	if (ctx.cr6.eq) goto loc_82219E5C;
	// lis r5,-32253
	ctx.r5.s64 = -2113732608;
	// stfd f21,64(r1)
	PPC_STORE_U64(ctx.r1.u32 + 64, ctx.f21.u64);
	// stfd f27,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.f27.u64);
	// ld r9,64(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 64);
	// stfd f28,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.f28.u64);
	// addi r3,r5,-31204
	ctx.r3.s64 = ctx.r5.s64 + -31204;
	// stfd f29,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f29.u64);
	// ld r8,56(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 56);
	// stfd f7,72(r1)
	PPC_STORE_U64(ctx.r1.u32 + 72, ctx.f7.u64);
	// ld r10,72(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 72);
	// stfd f22,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f22.u64);
	// ld r7,48(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 48);
	// stfd f30,24(r1)
	PPC_STORE_U64(ctx.r1.u32 + 24, ctx.f30.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// stfd f17,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.f17.u64);
	// ld r4,24(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 24);
	// stfd f23,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.f23.u64);
	// lwz r11,420(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 420);
	// stfd f24,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.f24.u64);
	// stfd f18,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f18.u64);
	// fmr f10,f18
	ctx.f10.f64 = ctx.f18.f64;
	// stfd f19,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f19.u64);
	// fmr f9,f19
	ctx.f9.f64 = ctx.f19.f64;
	// stfd f20,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f20.u64);
	// fmr f8,f20
	ctx.f8.f64 = ctx.f20.f64;
	// lfs f13,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// stfd f13,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.f13.u64);
	// stfd f12,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.f12.u64);
	// stfd f11,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.f11.u64);
	// bl 0x822e84f0
	ctx.lr = 0x82219E58;
	sub_822E84F0(ctx, base);
	// b 0x82219ea0
	goto loc_82219EA0;
loc_82219E5C:
	// lis r4,-32253
	ctx.r4.s64 = -2113732608;
	// stfd f6,64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 64, ctx.f6.u64);
	// stfd f5,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.f5.u64);
	// ld r9,64(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 64);
	// stfd f1,24(r1)
	PPC_STORE_U64(ctx.r1.u32 + 24, ctx.f1.u64);
	// addi r3,r4,-31232
	ctx.r3.s64 = ctx.r4.s64 + -31232;
	// ld r8,56(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 56);
	// stfd f3,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f3.u64);
	// ld r4,24(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 24);
	// stfd f2,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f2.u64);
	// stfd f7,72(r1)
	PPC_STORE_U64(ctx.r1.u32 + 72, ctx.f7.u64);
	// stfd f4,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.f4.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// ld r10,72(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 72);
	// ld r7,48(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 48);
	// bl 0x822e84f0
	ctx.lr = 0x82219EA0;
	sub_822E84F0(ctx, base);
loc_82219EA0:
	// bl 0x821eef18
	ctx.lr = 0x82219EA4;
	sub_821EEF18(ctx, base);
loc_82219EA4:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x823de048
	ctx.lr = 0x82219EB0;
	__restfpr_17(ctx, base);
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

PPC_WEAK_FUNC(sub_82219BF0) {
	__imp__sub_82219BF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82219EC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82219EC4) {
	__imp__sub_82219EC4(ctx, base);
}

