#include "ppc_recomp_shared.h"

PPC_FUNC_IMPL(__imp__sub_8233DF50) {
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
	// bl 0x82338390
	ctx.lr = 0x8233DF64;
	sub_82338390(ctx, base);
	// li r31,5
	ctx.r31.s64 = 5;
loc_8233DF68:
	// bl 0x8233f6f8
	ctx.lr = 0x8233DF6C;
	sub_8233F6F8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8233f720
	ctx.lr = 0x8233DF78;
	sub_8233F720(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x8233df68
	if (!ctx.cr0.eq) goto loc_8233DF68;
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

PPC_WEAK_FUNC(sub_8233DF50) {
	__imp__sub_8233DF50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233DF94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8233DF94) {
	__imp__sub_8233DF94(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233DF98) {
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
	// lis r11,-31822
	ctx.r11.s64 = -2085486592;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,-1600(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1600);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8233e044
	if (ctx.cr6.eq) goto loc_8233E044;
	// bl 0x82141340
	ctx.lr = 0x8233DFC8;
	sub_82141340(ctx, base);
	// bl 0x8230c290
	ctx.lr = 0x8233DFCC;
	sub_8230C290(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8233dff0
	if (!ctx.cr6.eq) goto loc_8233DFF0;
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
loc_8233DFF0:
	// bl 0x82393d48
	ctx.lr = 0x8233DFF4;
	sub_82393D48(ctx, base);
	// li r4,10
	ctx.r4.s64 = 10;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822c4c00
	ctx.lr = 0x8233E000;
	sub_822C4C00(ctx, base);
	// bl 0x82393cc8
	ctx.lr = 0x8233E004;
	sub_82393CC8(ctx, base);
	// bl 0x82393d48
	ctx.lr = 0x8233E008;
	sub_82393D48(ctx, base);
	// bl 0x82393cc8
	ctx.lr = 0x8233E00C;
	sub_82393CC8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82141340
	ctx.lr = 0x8233E014;
	sub_82141340(ctx, base);
	// bl 0x8213e638
	ctx.lr = 0x8233E018;
	sub_8213E638(ctx, base);
	// bl 0x8233ed30
	ctx.lr = 0x8233E01C;
	sub_8233ED30(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r5,r11,-28736
	ctx.r5.s64 = ctx.r11.s64 + -28736;
	// addi r4,r10,-25200
	ctx.r4.s64 = ctx.r10.s64 + -25200;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,6
	ctx.r7.s64 = 6;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8233eaf0
	ctx.lr = 0x8233E040;
	sub_8233EAF0(ctx, base);
	// bl 0x8233ec40
	ctx.lr = 0x8233E044;
	sub_8233EC40(ctx, base);
loc_8233E044:
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

PPC_WEAK_FUNC(sub_8233DF98) {
	__imp__sub_8233DF98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233E058) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf60
	ctx.lr = 0x8233E060;
	__savegprlr_22(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x82283000
	ctx.lr = 0x8233E074;
	sub_82283000(ctx, base);
	// lwz r25,0(r13)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r24,12
	ctx.r24.s64 = 12;
	// li r29,-1
	ctx.r29.s64 = -1;
	// stwx r29,r24,r25
	PPC_STORE_U32(ctx.r24.u32 + ctx.r25.u32, ctx.r29.u32);
	// bl 0x82173638
	ctx.lr = 0x8233E088;
	sub_82173638(ctx, base);
	// bl 0x82173668
	ctx.lr = 0x8233E08C;
	sub_82173668(ctx, base);
	// bl 0x82360830
	ctx.lr = 0x8233E090;
	sub_82360830(ctx, base);
	// bl 0x82310110
	ctx.lr = 0x8233E094;
	sub_82310110(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82144c10
	ctx.lr = 0x8233E0A4;
	sub_82144C10(ctx, base);
	// bl 0x8233c6c8
	ctx.lr = 0x8233E0A8;
	sub_8233C6C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82131c70
	ctx.lr = 0x8233E0B0;
	sub_82131C70(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,-19316
	ctx.r3.s64 = ctx.r11.s64 + -19316;
	// bl 0x822e84f0
	ctx.lr = 0x8233E0C0;
	sub_822E84F0(ctx, base);
	// lis r30,-32153
	ctx.r30.s64 = -2107179008;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,-16768(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -16768);
	// bl 0x82360768
	ctx.lr = 0x8233E0D0;
	sub_82360768(ctx, base);
	// bl 0x82128540
	ctx.lr = 0x8233E0D4;
	sub_82128540(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82133c58
	ctx.lr = 0x8233E0DC;
	sub_82133C58(ctx, base);
	// bl 0x82393cc8
	ctx.lr = 0x8233E0E0;
	sub_82393CC8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8230d678
	ctx.lr = 0x8233E0E8;
	sub_8230D678(ctx, base);
	// lis r11,-31810
	ctx.r11.s64 = -2084700160;
	// addi r4,r11,-360
	ctx.r4.s64 = ctx.r11.s64 + -360;
	// lwz r11,16(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8233e104
	if (ctx.cr6.eq) goto loc_8233E104;
	// lwz r3,-16768(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -16768);
	// bl 0x8235c6d0
	ctx.lr = 0x8233E104;
	sub_8235C6D0(ctx, base);
loc_8233E104:
	// bl 0x82336e78
	ctx.lr = 0x8233E108;
	sub_82336E78(ctx, base);
	// bl 0x82393d48
	ctx.lr = 0x8233E10C;
	sub_82393D48(ctx, base);
	// bl 0x82393cc8
	ctx.lr = 0x8233E110;
	sub_82393CC8(ctx, base);
	// bl 0x82393d48
	ctx.lr = 0x8233E114;
	sub_82393D48(ctx, base);
	// bl 0x822dbe08
	ctx.lr = 0x8233E118;
	sub_822DBE08(ctx, base);
	// bl 0x82133be0
	ctx.lr = 0x8233E11C;
	sub_82133BE0(ctx, base);
	// bl 0x8233dcf0
	ctx.lr = 0x8233E120;
	sub_8233DCF0(ctx, base);
	// bl 0x8223e4d8
	ctx.lr = 0x8233E124;
	sub_8223E4D8(ctx, base);
	// bl 0x8223def8
	ctx.lr = 0x8233E128;
	sub_8223DEF8(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r3,15
	ctx.r3.s64 = 15;
	// addi r4,r11,-19356
	ctx.r4.s64 = ctx.r11.s64 + -19356;
	// bl 0x82280900
	ctx.lr = 0x8233E138;
	sub_82280900(ctx, base);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r10,-19368
	ctx.r4.s64 = ctx.r10.s64 + -19368;
	// li r3,15
	ctx.r3.s64 = 15;
	// bl 0x82280900
	ctx.lr = 0x8233E14C;
	sub_82280900(ctx, base);
	// stwx r29,r24,r25
	PPC_STORE_U32(ctx.r24.u32 + ctx.r25.u32, ctx.r29.u32);
	// bl 0x8233de48
	ctx.lr = 0x8233E154;
	sub_8233DE48(ctx, base);
	// lis r23,-32166
	ctx.r23.s64 = -2108030976;
	// lbz r9,29088(r23)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r23.u32 + 29088);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8233e170
	if (ctx.cr6.eq) goto loc_8233E170;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lwz r26,-16416(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16416);
	// b 0x8233e178
	goto loc_8233E178;
loc_8233E170:
	// bl 0x82310170
	ctx.lr = 0x8233E174;
	sub_82310170(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
loc_8233E178:
	// bl 0x82282cf0
	ctx.lr = 0x8233E17C;
	sub_82282CF0(ctx, base);
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8233e190
	if (ctx.cr6.eq) goto loc_8233E190;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821768f0
	ctx.lr = 0x8233E190;
	sub_821768F0(ctx, base);
loc_8233E190:
	// lis r11,-31936
	ctx.r11.s64 = -2092957696;
	// lwz r11,-9384(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9384);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8233e1a8
	if (!ctx.cr6.eq) goto loc_8233E1A8;
	// bl 0x8233ddd0
	ctx.lr = 0x8233E1A8;
	sub_8233DDD0(ctx, base);
loc_8233E1A8:
	// bl 0x8233c6c8
	ctx.lr = 0x8233E1AC;
	sub_8233C6C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82120878
	ctx.lr = 0x8233E1B4;
	sub_82120878(ctx, base);
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8233e1cc
	if (ctx.cr6.eq) goto loc_8233E1CC;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82176930
	ctx.lr = 0x8233E1CC;
	sub_82176930(ctx, base);
loc_8233E1CC:
	// bl 0x82393cc8
	ctx.lr = 0x8233E1D0;
	sub_82393CC8(ctx, base);
	// lis r10,-31822
	ctx.r10.s64 = -2085486592;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-29824
	ctx.r9.s64 = ctx.r10.s64 + -29824;
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r8,-31936
	ctx.r8.s64 = -2092957696;
	// lis r7,-32251
	ctx.r7.s64 = -2113601536;
	// stw r11,11540(r9)
	PPC_STORE_U32(ctx.r9.u32 + 11540, ctx.r11.u32);
	// addi r4,r7,-25108
	ctx.r4.s64 = ctx.r7.s64 + -25108;
	// stw r10,28208(r9)
	PPC_STORE_U32(ctx.r9.u32 + 28208, ctx.r10.u32);
	// lwz r3,-9396(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + -9396);
	// bl 0x822e1fa8
	ctx.lr = 0x8233E1FC;
	sub_822E1FA8(ctx, base);
	// lis r6,-31822
	ctx.r6.s64 = -2085486592;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,-380(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + -380);
	// bl 0x822e1fa8
	ctx.lr = 0x8233E20C;
	sub_822E1FA8(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// li r5,20
	ctx.r5.s64 = 20;
	// addi r28,r11,-28736
	ctx.r28.s64 = ctx.r11.s64 + -28736;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822a1d20
	ctx.lr = 0x8233E224;
	sub_822A1D20(ctx, base);
	// lis r10,-31823
	ctx.r10.s64 = -2085552128;
	// addi r30,r10,-31440
	ctx.r30.s64 = ctx.r10.s64 + -31440;
	// addi r29,r30,2106
	ctx.r29.s64 = ctx.r30.s64 + 2106;
	// sth r3,2104(r30)
	PPC_STORE_U16(ctx.r30.u32 + 2104, ctx.r3.u16);
loc_8233E234:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r5,20
	ctx.r5.s64 = 20;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822a1d20
	ctx.lr = 0x8233E244;
	sub_822A1D20(ctx, base);
	// sth r3,0(r29)
	PPC_STORE_U16(ctx.r29.u32 + 0, ctx.r3.u16);
	// addi r10,r30,8140
	ctx.r10.s64 = ctx.r30.s64 + 8140;
	// addi r29,r29,2
	ctx.r29.s64 = ctx.r29.s64 + 2;
	// cmpw cr6,r29,r10
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8233e234
	if (ctx.cr6.lt) goto loc_8233E234;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822d3e08
	ctx.lr = 0x8233E268;
	sub_822D3E08(ctx, base);
	// addis r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 65536;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-8228
	ctx.r4.s64 = ctx.r11.s64 + -8228;
	// bl 0x82272cb8
	ctx.lr = 0x8233E278;
	sub_82272CB8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82272da8
	ctx.lr = 0x8233E280;
	sub_82272DA8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8227f800
	ctx.lr = 0x8233E288;
	sub_8227F800(ctx, base);
	// bl 0x8233c6c8
	ctx.lr = 0x8233E28C;
	sub_8233C6C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82310050
	ctx.lr = 0x8233E294;
	sub_82310050(ctx, base);
	// lis r10,-31823
	ctx.r10.s64 = -2085552128;
	// lwz r11,-31448(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -31448);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// rlwinm r9,r11,0,24,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF0;
	// stw r11,-31448(r10)
	PPC_STORE_U32(ctx.r10.u32 + -31448, ctx.r11.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8233e2bc
	if (!ctx.cr6.eq) goto loc_8233E2BC;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stw r11,-31448(r10)
	PPC_STORE_U32(ctx.r10.u32 + -31448, ctx.r11.u32);
loc_8233E2BC:
	// bl 0x8223dec0
	ctx.lr = 0x8233E2C0;
	sub_8223DEC0(ctx, base);
	// bl 0x820f6120
	ctx.lr = 0x8233E2C4;
	sub_820F6120(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8233daa0
	ctx.lr = 0x8233E2D4;
	sub_8233DAA0(ctx, base);
	// bl 0x822c2aa0
	ctx.lr = 0x8233E2D8;
	sub_822C2AA0(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r3,15
	ctx.r3.s64 = 15;
	// addi r4,r11,-19408
	ctx.r4.s64 = ctx.r11.s64 + -19408;
	// bl 0x82280900
	ctx.lr = 0x8233E2E8;
	sub_82280900(ctx, base);
	// bl 0x82338160
	ctx.lr = 0x8233E2EC;
	sub_82338160(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// bl 0x821208d8
	ctx.lr = 0x8233E2FC;
	sub_821208D8(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8233db28
	ctx.lr = 0x8233E304;
	sub_8233DB28(ctx, base);
	// bl 0x822834c0
	ctx.lr = 0x8233E308;
	sub_822834C0(ctx, base);
	// lis r9,-31936
	ctx.r9.s64 = -2092957696;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,-9404(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9404);
	// bl 0x822e1f80
	ctx.lr = 0x8233E318;
	sub_822E1F80(ctx, base);
	// bl 0x822dbf48
	ctx.lr = 0x8233E31C;
	sub_822DBF48(ctx, base);
	// bl 0x8233fc40
	ctx.lr = 0x8233E320;
	sub_8233FC40(ctx, base);
	// li r26,0
	ctx.r26.s64 = 0;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne cr6,0x8233e338
	if (!ctx.cr6.eq) goto loc_8233E338;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8233df98
	ctx.lr = 0x8233E334;
	sub_8233DF98(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
loc_8233E338:
	// bl 0x8210d488
	ctx.lr = 0x8233E33C;
	sub_8210D488(ctx, base);
	// bl 0x82393d48
	ctx.lr = 0x8233E340;
	sub_82393D48(ctx, base);
	// bl 0x82176638
	ctx.lr = 0x8233E344;
	sub_82176638(ctx, base);
	// bl 0x8217cc78
	ctx.lr = 0x8233E348;
	sub_8217CC78(ctx, base);
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lis r28,-32190
	ctx.r28.s64 = -2109603840;
	// addi r29,r11,9240
	ctx.r29.s64 = ctx.r11.s64 + 9240;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r29,24
	ctx.r31.s64 = ctx.r29.s64 + 24;
	// lwz r10,-32312(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + -32312);
loc_8233E360:
	// lbz r9,29088(r23)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r23.u32 + 29088);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8233e384
	if (!ctx.cr6.eq) goto loc_8233E384;
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
	// b 0x8233e394
	goto loc_8233E394;
loc_8233E384:
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cntlzw r8,r11
	ctx.r8.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r8,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
loc_8233E394:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8233e3b8
	if (ctx.cr6.eq) goto loc_8233E3B8;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8233e3b0
	if (ctx.cr6.eq) goto loc_8233E3B0;
	// lhz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
loc_8233E3B0:
	// bl 0x822c3f10
	ctx.lr = 0x8233E3B4;
	sub_822C3F10(ctx, base);
	// lwz r10,-32312(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + -32312);
loc_8233E3B8:
	// addi r31,r31,9780
	ctx.r31.s64 = ctx.r31.s64 + 9780;
	// addi r11,r29,19584
	ctx.r11.s64 = ctx.r29.s64 + 19584;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8233e360
	if (ctx.cr6.lt) goto loc_8233E360;
	// li r4,3
	ctx.r4.s64 = 3;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822c4c00
	ctx.lr = 0x8233E3D8;
	sub_822C4C00(ctx, base);
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x8233e3e4
	if (ctx.cr6.eq) goto loc_8233E3E4;
	// bl 0x8223c7a0
	ctx.lr = 0x8233E3E4;
	sub_8223C7A0(ctx, base);
loc_8233E3E4:
	// bl 0x82120af8
	ctx.lr = 0x8233E3E8;
	sub_82120AF8(ctx, base);
	// bl 0x82310110
	ctx.lr = 0x8233E3EC;
	sub_82310110(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// subf r5,r22,r3
	ctx.r5.s64 = ctx.r3.s64 - ctx.r22.s64;
	// addi r4,r11,-19428
	ctx.r4.s64 = ctx.r11.s64 + -19428;
	// li r3,15
	ctx.r3.s64 = 15;
	// bl 0x82280900
	ctx.lr = 0x8233E400;
	sub_82280900(ctx, base);
	// li r10,-129
	ctx.r10.s64 = -129;
	// stwx r10,r24,r25
	PPC_STORE_U32(ctx.r24.u32 + ctx.r25.u32, ctx.r10.u32);
	// bl 0x82282ae0
	ctx.lr = 0x8233E40C;
	sub_82282AE0(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x823ddfb0
	__restgprlr_22(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8233E058) {
	__imp__sub_8233E058(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233E414) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8233E414) {
	__imp__sub_8233E414(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233E418) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31823
	ctx.r11.s64 = -2085552128;
	// lwz r11,-31440(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -31440);
	// addi r10,r11,-2
	ctx.r10.s64 = ctx.r11.s64 + -2;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r3,r9,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8233E418) {
	__imp__sub_8233E418(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233E430) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf68
	ctx.lr = 0x8233E438;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82337a58
	ctx.lr = 0x8233E440;
	sub_82337A58(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r8,r11,-18804
	ctx.r8.s64 = ctx.r11.s64 + -18804;
	// addi r3,r10,4844
	ctx.r3.s64 = ctx.r10.s64 + 4844;
	// li r7,8194
	ctx.r7.s64 = 8194;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x822e1618
	ctx.lr = 0x8233E464;
	sub_822E1618(ctx, base);
	// lis r9,-31822
	ctx.r9.s64 = -2085486592;
	// lis r11,-31823
	ctx.r11.s64 = -2085552128;
	// addi r10,r9,-1612
	ctx.r10.s64 = ctx.r9.s64 + -1612;
	// lis r8,-31822
	ctx.r8.s64 = -2085486592;
	// addi r27,r11,-31496
	ctx.r27.s64 = ctx.r11.s64 + -31496;
	// addi r28,r10,-4
	ctx.r28.s64 = ctx.r10.s64 + -4;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// stw r3,-1596(r8)
	PPC_STORE_U32(ctx.r8.u32 + -1596, ctx.r3.u32);
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r26,r11,-18836
	ctx.r26.s64 = ctx.r11.s64 + -18836;
	// addi r25,r10,-4860
	ctx.r25.s64 = ctx.r10.s64 + -4860;
	// addi r24,r9,-18856
	ctx.r24.s64 = ctx.r9.s64 + -18856;
loc_8233E4A0:
	// addi r29,r30,1
	ctx.r29.s64 = ctx.r30.s64 + 1;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x822e84f0
	ctx.lr = 0x8233E4B4;
	sub_822E84F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,21
	ctx.r5.s64 = 21;
	// bl 0x822e7e98
	ctx.lr = 0x8233E4C4;
	sub_822E7E98(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822e84f0
	ctx.lr = 0x8233E4D0;
	sub_822E84F0(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e1618
	ctx.lr = 0x8233E4EC;
	sub_822E1618(ctx, base);
	// addi r31,r31,21
	ctx.r31.s64 = ctx.r31.s64 + 21;
	// addi r11,r27,42
	ctx.r11.s64 = ctx.r27.s64 + 42;
	// stwu r3,4(r28)
	ea = 4 + ctx.r28.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r28.u32 = ea;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8233e4a0
	if (ctx.cr6.lt) goto loc_8233E4A0;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r6,r11,-18868
	ctx.r6.s64 = ctx.r11.s64 + -18868;
	// addi r3,r10,-18880
	ctx.r3.s64 = ctx.r10.s64 + -18880;
	// li r5,128
	ctx.r5.s64 = 128;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822e15d0
	ctx.lr = 0x8233E520;
	sub_822E15D0(ctx, base);
	// lis r9,-31822
	ctx.r9.s64 = -2085486592;
	// stw r3,-376(r9)
	PPC_STORE_U32(ctx.r9.u32 + -376, ctx.r3.u32);
	// bl 0x8233dac0
	ctx.lr = 0x8233E52C;
	sub_8233DAC0(ctx, base);
	// bl 0x82339b18
	ctx.lr = 0x8233E530;
	sub_82339B18(ctx, base);
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// addi r3,r7,1916
	ctx.r3.s64 = ctx.r7.s64 + 1916;
	// addi r8,r8,-18904
	ctx.r8.s64 = ctx.r8.s64 + -18904;
	// li r7,8322
	ctx.r7.s64 = 8322;
	// li r6,2000
	ctx.r6.s64 = 2000;
	// li r5,10
	ctx.r5.s64 = 10;
	// li r4,100
	ctx.r4.s64 = 100;
	// bl 0x822e1618
	ctx.lr = 0x8233E554;
	sub_822E1618(ctx, base);
	// lis r6,-31822
	ctx.r6.s64 = -2085486592;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stw r3,-1604(r6)
	PPC_STORE_U32(ctx.r6.u32 + -1604, ctx.r3.u32);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r8,r10,1832
	ctx.r8.s64 = ctx.r10.s64 + 1832;
	// lfs f3,12240(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12240);
	ctx.f3.f64 = double(temp.f32);
	// addi r3,r9,1804
	ctx.r3.s64 = ctx.r9.s64 + 1804;
	// lfs f2,5484(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 5484);
	ctx.f2.f64 = double(temp.f32);
	// li r7,196
	ctx.r7.s64 = 196;
	// lfs f1,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822e1660
	ctx.lr = 0x8233E58C;
	sub_822E1660(ctx, base);
	// lis r8,-31822
	ctx.r8.s64 = -2085486592;
	// lis r7,-32249
	ctx.r7.s64 = -2113470464;
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// addi r31,r7,-28736
	ctx.r31.s64 = ctx.r7.s64 + -28736;
	// lis r6,-32251
	ctx.r6.s64 = -2113601536;
	// stw r3,-29828(r8)
	PPC_STORE_U32(ctx.r8.u32 + -29828, ctx.r3.u32);
	// addi r3,r5,-27912
	ctx.r3.s64 = ctx.r5.s64 + -27912;
	// addi r6,r6,-18924
	ctx.r6.s64 = ctx.r6.s64 + -18924;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r5,8320
	ctx.r5.s64 = 8320;
	// bl 0x822e17e0
	ctx.lr = 0x8233E5B8;
	sub_822E17E0(ctx, base);
	// lis r4,-31822
	ctx.r4.s64 = -2085486592;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r6,r11,-18956
	ctx.r6.s64 = ctx.r11.s64 + -18956;
	// li r5,64
	ctx.r5.s64 = 64;
	// stw r3,-380(r4)
	PPC_STORE_U32(ctx.r4.u32 + -380, ctx.r3.u32);
	// addi r3,r10,-18976
	ctx.r3.s64 = ctx.r10.s64 + -18976;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822e15d0
	ctx.lr = 0x8233E5DC;
	sub_822E15D0(ctx, base);
	// lis r9,-31822
	ctx.r9.s64 = -2085486592;
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// lis r7,-32251
	ctx.r7.s64 = -2113601536;
	// addi r6,r8,-19024
	ctx.r6.s64 = ctx.r8.s64 + -19024;
	// li r5,8192
	ctx.r5.s64 = 8192;
	// stw r3,-1600(r9)
	PPC_STORE_U32(ctx.r9.u32 + -1600, ctx.r3.u32);
	// addi r3,r7,-19048
	ctx.r3.s64 = ctx.r7.s64 + -19048;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822e15d0
	ctx.lr = 0x8233E600;
	sub_822E15D0(ctx, base);
	// lis r5,-31822
	ctx.r5.s64 = -2085486592;
	// lis r4,-32251
	ctx.r4.s64 = -2113601536;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r6,r4,-19088
	ctx.r6.s64 = ctx.r4.s64 + -19088;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,-348(r5)
	PPC_STORE_U32(ctx.r5.u32 + -348, ctx.r3.u32);
	// addi r3,r11,-19112
	ctx.r3.s64 = ctx.r11.s64 + -19112;
	// li r5,8192
	ctx.r5.s64 = 8192;
	// bl 0x822e15d0
	ctx.lr = 0x8233E624;
	sub_822E15D0(ctx, base);
	// lis r10,-31822
	ctx.r10.s64 = -2085486592;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// addi r6,r9,-19160
	ctx.r6.s64 = ctx.r9.s64 + -19160;
	// li r5,8192
	ctx.r5.s64 = 8192;
	// stw r3,-344(r10)
	PPC_STORE_U32(ctx.r10.u32 + -344, ctx.r3.u32);
	// addi r3,r8,-19184
	ctx.r3.s64 = ctx.r8.s64 + -19184;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822e15d0
	ctx.lr = 0x8233E648;
	sub_822E15D0(ctx, base);
	// lis r7,-31822
	ctx.r7.s64 = -2085486592;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r6,-32251
	ctx.r6.s64 = -2113601536;
	// lis r5,-32251
	ctx.r5.s64 = -2113601536;
	// addi r3,r6,-19200
	ctx.r3.s64 = ctx.r6.s64 + -19200;
	// stw r11,-372(r7)
	PPC_STORE_U32(ctx.r7.u32 + -372, ctx.r11.u32);
	// addi r8,r5,-19216
	ctx.r8.s64 = ctx.r5.s64 + -19216;
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,6
	ctx.r4.s64 = 6;
	// bl 0x822e1618
	ctx.lr = 0x8233E678;
	sub_822E1618(ctx, base);
	// lis r4,-31823
	ctx.r4.s64 = -2085552128;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r6,r11,-19240
	ctx.r6.s64 = ctx.r11.s64 + -19240;
	// li r5,8192
	ctx.r5.s64 = 8192;
	// stw r3,-31500(r4)
	PPC_STORE_U32(ctx.r4.u32 + -31500, ctx.r3.u32);
	// addi r3,r10,7348
	ctx.r3.s64 = ctx.r10.s64 + 7348;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x822e15d0
	ctx.lr = 0x8233E69C;
	sub_822E15D0(ctx, base);
	// lis r9,-31822
	ctx.r9.s64 = -2085486592;
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// addi r6,r8,-19260
	ctx.r6.s64 = ctx.r8.s64 + -19260;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r3,-368(r9)
	PPC_STORE_U32(ctx.r9.u32 + -368, ctx.r3.u32);
	// addi r3,r7,-3068
	ctx.r3.s64 = ctx.r7.s64 + -3068;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x822e17e0
	ctx.lr = 0x8233E6C0;
	sub_822E17E0(ctx, base);
	// lis r6,-31936
	ctx.r6.s64 = -2092957696;
	// lis r5,-32251
	ctx.r5.s64 = -2113601536;
	// lis r4,-32255
	ctx.r4.s64 = -2113863680;
	// addi r8,r5,-19300
	ctx.r8.s64 = ctx.r5.s64 + -19300;
	// li r7,8192
	ctx.r7.s64 = 8192;
	// stw r3,-9396(r6)
	PPC_STORE_U32(ctx.r6.u32 + -9396, ctx.r3.u32);
	// addi r3,r4,-3672
	ctx.r3.s64 = ctx.r4.s64 + -3672;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822e1618
	ctx.lr = 0x8233E6EC;
	sub_822E1618(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8233E430) {
	__imp__sub_8233E430(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233E6F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8233E6F4) {
	__imp__sub_8233E6F4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233E6F8) {
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
	// lis r31,-31936
	ctx.r31.s64 = -2092957696;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,-9384(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -9384);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8233e7bc
	if (ctx.cr6.eq) goto loc_8233E7BC;
	// lbz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8233e7bc
	if (ctx.cr6.eq) goto loc_8233E7BC;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,-18720
	ctx.r3.s64 = ctx.r11.s64 + -18720;
	// bl 0x823617c0
	ctx.lr = 0x8233E738;
	sub_823617C0(ctx, base);
	// bl 0x82360830
	ctx.lr = 0x8233E73C;
	sub_82360830(ctx, base);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// li r3,15
	ctx.r3.s64 = 15;
	// addi r4,r10,-18752
	ctx.r4.s64 = ctx.r10.s64 + -18752;
	// bl 0x82280900
	ctx.lr = 0x8233E74C;
	sub_82280900(ctx, base);
	// lwz r9,0(r13)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r8,12
	ctx.r8.s64 = 12;
	// li r7,-1
	ctx.r7.s64 = -1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stwx r7,r8,r9
	PPC_STORE_U32(ctx.r8.u32 + ctx.r9.u32, ctx.r7.u32);
	// bl 0x8233c610
	ctx.lr = 0x8233E764;
	sub_8233C610(ctx, base);
	// bl 0x82338030
	ctx.lr = 0x8233E768;
	sub_82338030(ctx, base);
	// bl 0x8233dcf0
	ctx.lr = 0x8233E76C;
	sub_8233DCF0(ctx, base);
	// bl 0x8223e4d8
	ctx.lr = 0x8233E770;
	sub_8223E4D8(ctx, base);
	// bl 0x8223def8
	ctx.lr = 0x8233E774;
	sub_8223DEF8(ctx, base);
	// bl 0x8233de48
	ctx.lr = 0x8233E778;
	sub_8233DE48(ctx, base);
	// lis r6,-31822
	ctx.r6.s64 = -2085486592;
	// li r5,28212
	ctx.r5.s64 = 28212;
	// addi r3,r6,-29824
	ctx.r3.s64 = ctx.r6.s64 + -29824;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823de090
	ctx.lr = 0x8233E78C;
	sub_823DE090(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-9384(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -9384);
	// bl 0x822e1f18
	ctx.lr = 0x8233E798;
	sub_822E1F18(ctx, base);
	// lis r5,-31936
	ctx.r5.s64 = -2092957696;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// lwz r3,-9400(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + -9400);
	// lfs f1,12168(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12168);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822e1f88
	ctx.lr = 0x8233E7AC;
	sub_822E1F88(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r3,15
	ctx.r3.s64 = 15;
	// addi r4,r11,-18784
	ctx.r4.s64 = ctx.r11.s64 + -18784;
	// bl 0x82280900
	ctx.lr = 0x8233E7BC;
	sub_82280900(ctx, base);
loc_8233E7BC:
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

PPC_WEAK_FUNC(sub_8233E6F8) {
	__imp__sub_8233E6F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233E7D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8233E7D4) {
	__imp__sub_8233E7D4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233E7D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x8233E7E0;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8233e7fc
	if (ctx.cr6.lt) goto loc_8233E7FC;
	// cmpwi cr6,r3,3017
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3017, ctx.xer);
	// blt cr6,0x8233e810
	if (ctx.cr6.lt) goto loc_8233E810;
loc_8233E7FC:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r4,r11,-18648
	ctx.r4.s64 = ctx.r11.s64 + -18648;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822830e8
	ctx.lr = 0x8233E810;
	sub_822830E8(ctx, base);
loc_8233E810:
	// lis r11,-31823
	ctx.r11.s64 = -2085552128;
	// rlwinm r27,r26,1,0,30
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r25,r11,-31440
	ctx.r25.s64 = ctx.r11.s64 + -31440;
	// addi r29,r25,2106
	ctx.r29.s64 = ctx.r25.s64 + 2106;
	// lhzx r3,r27,r29
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r27.u32 + ctx.r29.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8233e948
	if (ctx.cr6.eq) goto loc_8233E948;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x8233e83c
	if (!ctx.cr6.eq) goto loc_8233E83C;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r28,r11,-28736
	ctx.r28.s64 = ctx.r11.s64 + -28736;
loc_8233E83C:
	// bl 0x822a13a0
	ctx.lr = 0x8233E840;
	sub_822A13A0(ctx, base);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_8233E844:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// beq cr6,0x8233e868
	if (ctx.cr6.eq) goto loc_8233E868;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8233e844
	if (ctx.cr6.eq) goto loc_8233E844;
loc_8233E868:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8233e948
	if (ctx.cr6.eq) goto loc_8233E948;
	// lhzx r3,r27,r29
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r27.u32 + ctx.r29.u32);
	// bl 0x822a2468
	ctx.lr = 0x8233E878;
	sub_822A2468(ctx, base);
	// li r11,1167
	ctx.r11.s64 = 1167;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// subfc r9,r11,r26
	ctx.xer.ca = ctx.r26.u32 >= ctx.r11.u32;
	ctx.r9.s64 = ctx.r26.s64 - ctx.r11.s64;
	// eqv r8,r11,r26
	ctx.r8.u64 = ~(ctx.r11.u64 ^ ctx.r26.u64);
	// rlwinm r7,r8,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// addze r6,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r6.s64 = temp.s64;
	// clrlwi r30,r6,31
	ctx.r30.u64 = ctx.r6.u32 & 0x1;
loc_8233E894:
	// lbz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8233e894
	if (!ctx.cr6.eq) goto loc_8233E894;
	// subf r11,r28,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r28.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r31,r11,1
	ctx.r31.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r31,1016
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1016, ctx.xer);
	// ble cr6,0x8233e8d0
	if (!ctx.cr6.gt) goto loc_8233E8D0;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r11,-18692
	ctx.r4.s64 = ctx.r11.s64 + -18692;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822830e8
	ctx.lr = 0x8233E8D0;
	sub_822830E8(ctx, base);
loc_8233E8D0:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// li r6,20
	ctx.r6.s64 = 20;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bne cr6,0x8233e8f0
	if (!ctx.cr6.eq) goto loc_8233E8F0;
	// bl 0x822a1d80
	ctx.lr = 0x8233E8EC;
	sub_822A1D80(ctx, base);
	// b 0x8233e8f4
	goto loc_8233E8F4;
loc_8233E8F0:
	// bl 0x822a19a8
	ctx.lr = 0x8233E8F4;
	sub_822A19A8(ctx, base);
loc_8233E8F4:
	// sthx r3,r27,r29
	PPC_STORE_U16(ctx.r27.u32 + ctx.r29.u32, ctx.r3.u16);
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8233e948
	if (!ctx.cr6.eq) goto loc_8233E948;
	// lis r11,-31822
	ctx.r11.s64 = -2085486592;
	// li r29,2
	ctx.r29.s64 = 2;
	// addi r11,r11,-29824
	ctx.r11.s64 = ctx.r11.s64 + -29824;
	// addi r31,r11,8
	ctx.r31.s64 = ctx.r11.s64 + 8;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r30,r11,-18704
	ctx.r30.s64 = ctx.r11.s64 + -18704;
loc_8233E91C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x8233e93c
	if (!ctx.cr6.eq) goto loc_8233E93C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8233efc0
	ctx.lr = 0x8233E93C;
	sub_8233EFC0(ctx, base);
loc_8233E93C:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r31,r31,5764
	ctx.r31.s64 = ctx.r31.s64 + 5764;
	// bne 0x8233e91c
	if (!ctx.cr0.eq) goto loc_8233E91C;
loc_8233E948:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8233E7D8) {
	__imp__sub_8233E7D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233E950) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lbz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// lis r11,-31822
	ctx.r11.s64 = -2085486592;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// extsb r10,r9
	ctx.r10.s64 = ctx.r9.s8;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r11,-336
	ctx.r3.s64 = ctx.r11.s64 + -336;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8233e9cc
	if (ctx.cr6.eq) goto loc_8233E9CC;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r5,92
	ctx.r5.s64 = 92;
	// li r6,110
	ctx.r6.s64 = 110;
loc_8233E97C:
	// cmplwi cr6,r8,1021
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1021, ctx.xer);
	// bge cr6,0x8233e9cc
	if (!ctx.cr6.lt) goto loc_8233E9CC;
	// cmpwi cr6,r10,10
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 10, ctx.xer);
	// bne cr6,0x8233e99c
	if (!ctx.cr6.eq) goto loc_8233E99C;
	// stb r5,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r5.u8);
	// addi r8,r8,2
	ctx.r8.s64 = ctx.r8.s64 + 2;
	// stbu r6,1(r11)
	ea = 1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r6.u8);
	ctx.r11.u32 = ea;
	// b 0x8233e9b4
	goto loc_8233E9B4;
loc_8233E99C:
	// cmpwi cr6,r10,20
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 20, ctx.xer);
	// beq cr6,0x8233e9b8
	if (ctx.cr6.eq) goto loc_8233E9B8;
	// cmpwi cr6,r10,21
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 21, ctx.xer);
	// beq cr6,0x8233e9b8
	if (ctx.cr6.eq) goto loc_8233E9B8;
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
loc_8233E9B4:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_8233E9B8:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// lbz r9,0(r7)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// extsb r10,r9
	ctx.r10.s64 = ctx.r9.s8;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8233e97c
	if (!ctx.cr6.eq) goto loc_8233E97C;
loc_8233E9CC:
	// li r11,0
	ctx.r11.s64 = 0;
	// stbx r11,r8,r3
	PPC_STORE_U8(ctx.r8.u32 + ctx.r3.u32, ctx.r11.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8233E950) {
	__imp__sub_8233E950(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233E9D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8233E9E0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,15
	ctx.r3.s64 = 15;
	// addi r4,r11,-18596
	ctx.r4.s64 = ctx.r11.s64 + -18596;
	// bl 0x82280900
	ctx.lr = 0x8233E9F8;
	sub_82280900(ctx, base);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r31,r11,1
	ctx.r31.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r31,r10
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x8233ea4c
	if (ctx.cr6.gt) goto loc_8233EA4C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r29,r11,-18612
	ctx.r29.s64 = ctx.r11.s64 + -18612;
loc_8233EA14:
	// clrlwi r11,r31,25
	ctx.r11.u64 = ctx.r31.u32 & 0x7F;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r11,r11,1028
	ctx.r11.s64 = ctx.r11.s64 + 1028;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r3,15
	ctx.r3.s64 = 15;
	// lwzx r11,r10,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r6,r11,16
	ctx.r6.s64 = ctx.r11.s64 + 16;
	// bl 0x82280900
	ctx.lr = 0x8233EA3C;
	sub_82280900(ctx, base);
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r9
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x8233ea14
	if (!ctx.cr6.gt) goto loc_8233EA14;
loc_8233EA4C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8233E9D8) {
	__imp__sub_8233E9D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233EA54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8233EA54) {
	__imp__sub_8233EA54(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233EA58) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8233EA58) {
	__imp__sub_8233EA58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233EA5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8233EA5C) {
	__imp__sub_8233EA5C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233EA60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x8233EA68;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// mr r31,r8
	ctx.r31.u64 = ctx.r8.u64;
	// mr r30,r9
	ctx.r30.u64 = ctx.r9.u64;
	// bl 0x822e7e98
	ctx.lr = 0x8233EA94;
	sub_822E7E98(ctx, base);
	// li r5,256
	ctx.r5.s64 = 256;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// bl 0x822e7e98
	ctx.lr = 0x8233EAA4;
	sub_822E7E98(ctx, base);
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r31,320
	ctx.r3.s64 = ctx.r31.s64 + 320;
	// bl 0x822e7e98
	ctx.lr = 0x8233EAB4;
	sub_822E7E98(ctx, base);
	// stw r27,388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 388, ctx.r27.u32);
	// stw r26,392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 392, ctx.r26.u32);
	// cmpwi cr6,r27,1
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 1, ctx.xer);
	// bne cr6,0x8233ead8
	if (!ctx.cr6.eq) goto loc_8233EAD8;
	// bl 0x8223df20
	ctx.lr = 0x8233EAC8;
	sub_8223DF20(ctx, base);
	// stw r3,384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 384, ctx.r3.u32);
	// stb r30,396(r31)
	PPC_STORE_U8(ctx.r31.u32 + 396, ctx.r30.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_8233EAD8:
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r30,396(r31)
	PPC_STORE_U8(ctx.r31.u32 + 396, ctx.r30.u8);
	// stw r11,384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 384, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8233EA60) {
	__imp__sub_8233EA60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233EAEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8233EAEC) {
	__imp__sub_8233EAEC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233EAF0) {
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
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// lwz r11,13380(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13380);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8233eb40
	if (ctx.cr6.eq) goto loc_8233EB40;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r3,15
	ctx.r3.s64 = 15;
	// addi r4,r11,-24796
	ctx.r4.s64 = ctx.r11.s64 + -24796;
	// bl 0x82280900
	ctx.lr = 0x8233EB28;
	sub_82280900(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
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
loc_8233EB40:
	// lis r11,-31822
	ctx.r11.s64 = -2085486592;
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// addi r11,r11,-1592
	ctx.r11.s64 = ctx.r11.s64 + -1592;
	// bne cr6,0x8233eb90
	if (!ctx.cr6.eq) goto loc_8233EB90;
	// lbz r10,1204(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1204);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8233eb88
	if (ctx.cr6.eq) goto loc_8233EB88;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-18496
	ctx.r4.s64 = ctx.r11.s64 + -18496;
	// li r3,15
	ctx.r3.s64 = 15;
	// bl 0x82280c30
	ctx.lr = 0x8233EB70;
	sub_82280C30(ctx, base);
	// li r3,-2
	ctx.r3.s64 = -2;
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
loc_8233EB88:
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,1204(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1204, ctx.r10.u8);
loc_8233EB90:
	// lwz r10,1200(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1200);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// blt cr6,0x8233ebc8
	if (ctx.cr6.lt) goto loc_8233EBC8;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-18556
	ctx.r4.s64 = ctx.r11.s64 + -18556;
	// li r3,15
	ctx.r3.s64 = 15;
	// bl 0x82280c30
	ctx.lr = 0x8233EBB0;
	sub_82280C30(ctx, base);
	// li r3,-3
	ctx.r3.s64 = -3;
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
loc_8233EBC8:
	// lwz r8,1200(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1200);
	// lwz r10,1200(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1200);
	// mulli r8,r8,400
	ctx.r8.s64 = ctx.r8.s64 * 400;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r31,r8,r11
	ctx.r31.u64 = ctx.r8.u64 + ctx.r11.u64;
	// stw r10,1200(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1200, ctx.r10.u32);
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// bl 0x8233ea60
	ctx.lr = 0x8233EBE8;
	sub_8233EA60(ctx, base);
	// lwz r3,384(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 384);
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

PPC_WEAK_FUNC(sub_8233EAF0) {
	__imp__sub_8233EAF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233EC00) {
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
	// bl 0x8233dbf0
	ctx.lr = 0x8233EC18;
	sub_8233DBF0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8220aa80
	ctx.lr = 0x8233EC24;
	sub_8220AA80(ctx, base);
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
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8233EC00) {
	__imp__sub_8233EC00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233EC40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x8233EC48;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31822
	ctx.r11.s64 = -2085486592;
	// addi r31,r11,-1592
	ctx.r31.s64 = ctx.r11.s64 + -1592;
	// lwz r11,1200(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1200);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8233ec84
	if (ctx.cr6.eq) goto loc_8233EC84;
	// lis r11,-32024
	ctx.r11.s64 = -2098724864;
	// lwz r11,13380(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13380);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8233ec90
	if (ctx.cr6.eq) goto loc_8233EC90;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r3,15
	ctx.r3.s64 = 15;
	// addi r4,r11,-24796
	ctx.r4.s64 = ctx.r11.s64 + -24796;
	// bl 0x82280900
	ctx.lr = 0x8233EC84;
	sub_82280900(ctx, base);
loc_8233EC84:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_8233EC90:
	// lwz r11,1200(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1200);
	// li r28,0
	ctx.r28.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8233ecd8
	if (!ctx.cr6.gt) goto loc_8233ECD8;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
loc_8233ECA8:
	// bl 0x8233dbf0
	ctx.lr = 0x8233ECAC;
	sub_8233DBF0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8220aa80
	ctx.lr = 0x8233ECB8;
	sub_8220AA80(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8233ecc4
	if (ctx.cr6.eq) goto loc_8233ECC4;
	// li r28,1
	ctx.r28.s64 = 1;
loc_8233ECC4:
	// lwz r11,1200(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1200);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,400
	ctx.r29.s64 = ctx.r29.s64 + 400;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8233eca8
	if (ctx.cr6.lt) goto loc_8233ECA8;
loc_8233ECD8:
	// lbz r8,1205(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1205);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stb r11,1204(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1204, ctx.r11.u8);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,1200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1200, ctx.r9.u32);
	// beq cr6,0x8233ed08
	if (ctx.cr6.eq) goto loc_8233ED08;
	// stb r11,1205(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1205, ctx.r11.u8);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r10,-24380
	ctx.r4.s64 = ctx.r10.s64 + -24380;
	// bl 0x8227d040
	ctx.lr = 0x8233ED08;
	sub_8227D040(ctx, base);
loc_8233ED08:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8233EC40) {
	__imp__sub_8233EC40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233ED14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8233ED14) {
	__imp__sub_8233ED14(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233ED18) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31822
	ctx.r10.s64 = -2085486592;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r9,r10,-1592
	ctx.r9.s64 = ctx.r10.s64 + -1592;
	// stb r11,1205(r9)
	PPC_STORE_U8(ctx.r9.u32 + 1205, ctx.r11.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8233ED18) {
	__imp__sub_8233ED18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233ED2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8233ED2C) {
	__imp__sub_8233ED2C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233ED30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31822
	ctx.r11.s64 = -2085486592;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,-1592
	ctx.r9.s64 = ctx.r11.s64 + -1592;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// stw r10,1200(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1200, ctx.r10.u32);
	// stb r10,1204(r9)
	PPC_STORE_U8(ctx.r9.u32 + 1204, ctx.r10.u8);
	// stb r10,1205(r9)
	PPC_STORE_U8(ctx.r9.u32 + 1205, ctx.r10.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8233ED30) {
	__imp__sub_8233ED30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233ED50) {
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
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r11,-18424
	ctx.r30.s64 = ctx.r11.s64 + -18424;
loc_8233ED70:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e7ee0
	ctx.lr = 0x8233ED80;
	sub_822E7EE0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233ed94
	if (!ctx.cr6.eq) goto loc_8233ED94;
	// lbz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,45
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 45, ctx.xer);
	// beq cr6,0x8233edd0
	if (ctx.cr6.eq) goto loc_8233EDD0;
loc_8233ED94:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8233edd8
	if (ctx.cr6.eq) goto loc_8233EDD8;
	// cmpwi cr6,r11,47
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 47, ctx.xer);
	// beq cr6,0x8233edb8
	if (ctx.cr6.eq) goto loc_8233EDB8;
	// cmpwi cr6,r11,92
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 92, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x8233edbc
	if (!ctx.cr6.eq) goto loc_8233EDBC;
loc_8233EDB8:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8233EDBC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8233ed94
	if (ctx.cr6.eq) goto loc_8233ED94;
	// b 0x8233ed70
	goto loc_8233ED70;
loc_8233EDD0:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8233eddc
	goto loc_8233EDDC;
loc_8233EDD8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8233EDDC:
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

PPC_WEAK_FUNC(sub_8233ED50) {
	__imp__sub_8233ED50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233EDF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8233EDF4) {
	__imp__sub_8233EDF4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233EDF8) {
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
	// bl 0x8233ed50
	ctx.lr = 0x8233EE10;
	sub_8233ED50(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8233ee2c
	if (!ctx.cr6.eq) goto loc_8233EE2C;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82141340
	ctx.lr = 0x8233EE24;
	sub_82141340(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8213c310
	ctx.lr = 0x8233EE2C;
	sub_8213C310(ctx, base);
loc_8233EE2C:
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

PPC_WEAK_FUNC(sub_8233EDF8) {
	__imp__sub_8233EDF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233EE40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x8233EE48;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31822
	ctx.r11.s64 = -2085486592;
	// lis r10,-32166
	ctx.r10.s64 = -2108030976;
	// addi r11,r11,-29824
	ctx.r11.s64 = ctx.r11.s64 + -29824;
	// li r9,5764
	ctx.r9.s64 = 5764;
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lbz r6,29088(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 29088);
	// subf r7,r8,r3
	ctx.r7.s64 = ctx.r3.s64 - ctx.r8.s64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// divw r11,r7,r9
	ctx.r11.s32 = ctx.r7.s32 / ctx.r9.s32;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x8233ee9c
	if (!ctx.cr6.eq) goto loc_8233EE9C;
	// lis r10,-32190
	ctx.r10.s64 = -2109603840;
	// lwz r10,-32312(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -32312);
	// subfc r9,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// eqv r8,r10,r11
	ctx.r8.u64 = ~(ctx.r10.u64 ^ ctx.r11.u64);
	// rlwinm r7,r8,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// addze r6,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r6.s64 = temp.s64;
	// clrlwi r11,r6,31
	ctx.r11.u64 = ctx.r6.u32 & 0x1;
	// b 0x8233eebc
	goto loc_8233EEBC;
loc_8233EE9C:
	// lis r10,-32165
	ctx.r10.s64 = -2107965440;
	// mulli r9,r11,9780
	ctx.r9.s64 = ctx.r11.s64 * 9780;
	// addi r11,r10,9240
	ctx.r11.s64 = ctx.r10.s64 + 9240;
	// addi r8,r11,16
	ctx.r8.s64 = ctx.r11.s64 + 16;
	// lwzx r11,r9,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// addi r7,r11,-2
	ctx.r7.s64 = ctx.r11.s64 + -2;
	// cntlzw r6,r7
	ctx.r6.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm r11,r6,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
loc_8233EEBC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8233efb8
	if (ctx.cr6.eq) goto loc_8233EFB8;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cmpwi cr6,r9,128
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 128, ctx.xer);
	// bne cr6,0x8233eef4
	if (!ctx.cr6.eq) goto loc_8233EEF4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8233e9d8
	ctx.lr = 0x8233EEE4;
	sub_8233E9D8(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,-18376
	ctx.r4.s64 = ctx.r11.s64 + -18376;
	// bl 0x822830e8
	ctx.lr = 0x8233EEF4;
	sub_822830E8(ctx, base);
loc_8233EEF4:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// clrlwi r29,r10,25
	ctx.r29.u64 = ctx.r10.u32 & 0x7F;
loc_8233EF08:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8233ef08
	if (!ctx.cr6.eq) goto loc_8233EF08;
	// subf r11,r28,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r28.s64;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rotlwi r30,r10,0
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r9,4096
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4096, ctx.xer);
	// ble cr6,0x8233ef50
	if (!ctx.cr6.gt) goto loc_8233EF50;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8233e9d8
	ctx.lr = 0x8233EF40;
	sub_8233E9D8(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,-18412
	ctx.r4.s64 = ctx.r11.s64 + -18412;
	// bl 0x822830e8
	ctx.lr = 0x8233EF50;
	sub_822830E8(ctx, base);
loc_8233EF50:
	// addi r11,r29,1028
	ctx.r11.s64 = ctx.r29.s64 + 1028;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stwx r9,r8,r31
	PPC_STORE_U32(ctx.r8.u32 + ctx.r31.u32, ctx.r9.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// ble cr6,0x8233efa0
	if (!ctx.cr6.gt) goto loc_8233EFA0;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// li r9,46
	ctx.r9.s64 = 46;
loc_8233EF80:
	// lbzx r8,r10,r28
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r28.u32);
	// cmplwi cr6,r8,37
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 37, ctx.xer);
	// stb r8,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// bne cr6,0x8233ef94
	if (!ctx.cr6.eq) goto loc_8233EF94;
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
loc_8233EF94:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x8233ef80
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8233EF80;
loc_8233EFA0:
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
loc_8233EFB8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8233EE40) {
	__imp__sub_8233EE40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233EFC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8233EFC8;
	__savegprlr_29(ctx, base);
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
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// ld r12,-8192(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8192);
	// ld r12,-12288(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -12288);
	// ld r12,-16384(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16384);
	// stwu r1,-16512(r1)
	ea = -16512 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,16544
	ctx.r10.s64 = ctx.r1.s64 + 16544;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,16384
	ctx.r4.s64 = 16384;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x823e06d0
	ctx.lr = 0x8233F018;
	sub_823E06D0(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8233f034
	if (ctx.cr6.eq) goto loc_8233F034;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8233ee40
	ctx.lr = 0x8233F02C;
	sub_8233EE40(ctx, base);
	// addi r1,r1,16512
	ctx.r1.s64 = ctx.r1.s64 + 16512;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_8233F034:
	// lis r11,-31822
	ctx.r11.s64 = -2085486592;
	// lis r29,-32190
	ctx.r29.s64 = -2109603840;
	// addi r11,r11,-29824
	ctx.r11.s64 = ctx.r11.s64 + -29824;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r11,8
	ctx.r31.s64 = ctx.r11.s64 + 8;
	// lwz r11,-32312(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -32312);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8233f080
	if (!ctx.cr6.gt) goto loc_8233F080;
loc_8233F054:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// bne cr6,0x8233f070
	if (!ctx.cr6.eq) goto loc_8233F070;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8233ee40
	ctx.lr = 0x8233F06C;
	sub_8233EE40(ctx, base);
	// lwz r11,-32312(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -32312);
loc_8233F070:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,5764
	ctx.r31.s64 = ctx.r31.s64 + 5764;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8233f054
	if (ctx.cr6.lt) goto loc_8233F054;
loc_8233F080:
	// addi r1,r1,16512
	ctx.r1.s64 = ctx.r1.s64 + 16512;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8233EFC0) {
	__imp__sub_8233EFC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233F088) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf64
	ctx.lr = 0x8233F090;
	__savegprlr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31822
	ctx.r11.s64 = -2085486592;
	// lis r10,-32165
	ctx.r10.s64 = -2107965440;
	// lis r24,-32190
	ctx.r24.s64 = -2109603840;
	// addi r25,r11,-29824
	ctx.r25.s64 = ctx.r11.s64 + -29824;
	// addi r10,r10,9240
	ctx.r10.s64 = ctx.r10.s64 + 9240;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r11,-32312(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + -32312);
	// addi r26,r10,16
	ctx.r26.s64 = ctx.r10.s64 + 16;
	// addi r29,r25,12
	ctx.r29.s64 = ctx.r25.s64 + 12;
	// lis r23,-32166
	ctx.r23.s64 = -2108030976;
loc_8233F0C0:
	// lbz r9,29088(r23)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r23.u32 + 29088);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8233f0e4
	if (!ctx.cr6.eq) goto loc_8233F0E4;
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
	// b 0x8233f0f0
	goto loc_8233F0F0;
loc_8233F0E4:
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addic r8,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// subfe r10,r8,r10
	temp.u8 = (~ctx.r8.u32 + ctx.r10.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r8.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_8233F0F0:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8233f1f0
	if (ctx.cr6.eq) goto loc_8233F1F0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8233f11c
	if (!ctx.cr6.eq) goto loc_8233F11C;
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
	// clrlwi r11,r6,31
	ctx.r11.u64 = ctx.r6.u32 & 0x1;
	// b 0x8233f12c
	goto loc_8233F12C;
loc_8233F11C:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
loc_8233F12C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8233f170
	if (ctx.cr6.eq) goto loc_8233F170;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// beq cr6,0x8233f148
	if (ctx.cr6.eq) goto loc_8233F148;
	// lhz r3,8(r26)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r26.u32 + 8);
loc_8233F148:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8233f170
	if (!ctx.cr6.eq) goto loc_8233F170;
	// bl 0x821210b0
	ctx.lr = 0x8233F15C;
	sub_821210B0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// b 0x8233f180
	goto loc_8233F180;
loc_8233F170:
	// lwz r9,8(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
loc_8233F180:
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// li r4,12
	ctx.r4.s64 = 12;
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822e40f0
	ctx.lr = 0x8233F19C;
	sub_822E40F0(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r31,r11,1
	ctx.r31.s64 = ctx.r11.s64 + 1;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x8233f1dc
	if (ctx.cr6.gt) goto loc_8233F1DC;
loc_8233F1B0:
	// clrlwi r11,r31,25
	ctx.r11.u64 = ctx.r31.u32 & 0x7F;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r11,r11,1027
	ctx.r11.s64 = ctx.r11.s64 + 1027;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r11,r30
	ctx.r5.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x822e40f0
	ctx.lr = 0x8233F1CC;
	sub_822E40F0(ctx, base);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r10
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x8233f1b0
	if (!ctx.cr6.gt) goto loc_8233F1B0;
loc_8233F1DC:
	// addi r5,r30,12
	ctx.r5.s64 = ctx.r30.s64 + 12;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822e40f0
	ctx.lr = 0x8233F1EC;
	sub_822E40F0(ctx, base);
	// lwz r11,-32312(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + -32312);
loc_8233F1F0:
	// addi r29,r29,5764
	ctx.r29.s64 = ctx.r29.s64 + 5764;
	// addi r10,r25,11540
	ctx.r10.s64 = ctx.r25.s64 + 11540;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r26,r26,9780
	ctx.r26.s64 = ctx.r26.s64 + 9780;
	// cmpw cr6,r29,r10
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8233f0c0
	if (ctx.cr6.lt) goto loc_8233F0C0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8233F088) {
	__imp__sub_8233F088(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233F210) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf64
	ctx.lr = 0x8233F218;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31822
	ctx.r11.s64 = -2085486592;
	// lis r10,-32165
	ctx.r10.s64 = -2107965440;
	// lis r25,-32190
	ctx.r25.s64 = -2109603840;
	// addi r23,r11,-29824
	ctx.r23.s64 = ctx.r11.s64 + -29824;
	// addi r10,r10,9240
	ctx.r10.s64 = ctx.r10.s64 + 9240;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r11,-32312(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -32312);
	// addi r26,r10,16
	ctx.r26.s64 = ctx.r10.s64 + 16;
	// addi r29,r23,16
	ctx.r29.s64 = ctx.r23.s64 + 16;
	// lis r24,-32166
	ctx.r24.s64 = -2108030976;
loc_8233F248:
	// lbz r9,29088(r24)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r24.u32 + 29088);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8233f26c
	if (!ctx.cr6.eq) goto loc_8233F26C;
	// subfc r10,r11,r27
	ctx.xer.ca = ctx.r27.u32 >= ctx.r11.u32;
	ctx.r10.s64 = ctx.r27.s64 - ctx.r11.s64;
	// eqv r9,r11,r27
	ctx.r9.u64 = ~(ctx.r11.u64 ^ ctx.r27.u64);
	// rlwinm r8,r9,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// addze r7,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r7.s64 = temp.s64;
	// clrlwi r10,r7,31
	ctx.r10.u64 = ctx.r7.u32 & 0x1;
	// b 0x8233f278
	goto loc_8233F278;
loc_8233F26C:
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r10,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r9.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_8233F278:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8233f34c
	if (ctx.cr6.eq) goto loc_8233F34C;
	// addi r11,r29,4
	ctx.r11.s64 = ctx.r29.s64 + 4;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,12
	ctx.r4.s64 = 12;
	// addi r3,r11,-8
	ctx.r3.s64 = ctx.r11.s64 + -8;
	// addi r30,r29,-8
	ctx.r30.s64 = ctx.r29.s64 + -8;
	// bl 0x8223e078
	ctx.lr = 0x8233F29C;
	sub_8223E078(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r31,r11,1
	ctx.r31.s64 = ctx.r11.s64 + 1;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x8233f2dc
	if (ctx.cr6.gt) goto loc_8233F2DC;
loc_8233F2B0:
	// clrlwi r11,r31,25
	ctx.r11.u64 = ctx.r31.u32 & 0x7F;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r11,r11,1028
	ctx.r11.s64 = ctx.r11.s64 + 1028;
	// li r4,4
	ctx.r4.s64 = 4;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x8223e078
	ctx.lr = 0x8233F2CC;
	sub_8223E078(ctx, base);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r10
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x8233f2b0
	if (!ctx.cr6.gt) goto loc_8233F2B0;
loc_8233F2DC:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r3,r30,16
	ctx.r3.s64 = ctx.r30.s64 + 16;
	// bl 0x8223e078
	ctx.lr = 0x8233F2EC;
	sub_8223E078(ctx, base);
	// lbz r9,29088(r24)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r24.u32 + 29088);
	// lwz r11,-32312(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -32312);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8233f314
	if (!ctx.cr6.eq) goto loc_8233F314;
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
	// b 0x8233f324
	goto loc_8233F324;
loc_8233F314:
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
	// cntlzw r8,r10
	ctx.r8.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r8,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
loc_8233F324:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8233f34c
	if (ctx.cr6.eq) goto loc_8233F34C;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// beq cr6,0x8233f340
	if (ctx.cr6.eq) goto loc_8233F340;
	// lhz r3,8(r26)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r26.u32 + 8);
loc_8233F340:
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x820f7ec8
	ctx.lr = 0x8233F348;
	sub_820F7EC8(ctx, base);
	// lwz r11,-32312(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -32312);
loc_8233F34C:
	// addi r29,r29,5764
	ctx.r29.s64 = ctx.r29.s64 + 5764;
	// addi r10,r23,11544
	ctx.r10.s64 = ctx.r23.s64 + 11544;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r26,r26,9780
	ctx.r26.s64 = ctx.r26.s64 + 9780;
	// cmpw cr6,r29,r10
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8233f248
	if (ctx.cr6.lt) goto loc_8233F248;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8233F210) {
	__imp__sub_8233F210(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233F36C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8233F36C) {
	__imp__sub_8233F36C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233F370) {
	PPC_FUNC_PROLOGUE();
	// mftb r11
	ctx.r11.u64 = PPC_QUERY_TIMEBASE();
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8233F370) {
	__imp__sub_8233F370(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233F37C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8233F37C) {
	__imp__sub_8233F37C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233F380) {
	PPC_FUNC_PROLOGUE();
	// clrldi r11,r3,32
	ctx.r11.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// lis r10,-31841
	ctx.r10.s64 = -2086731776;
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfd f0,-24480(r10)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + -24480);
	// fmul f12,f13,f0
	ctx.f12.f64 = ctx.f13.f64 * ctx.f0.f64;
	// frsp f1,f12
	ctx.f1.f64 = double(float(ctx.f12.f64));
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8233F380) {
	__imp__sub_8233F380(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233F3A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8233F3A4) {
	__imp__sub_8233F3A4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233F3A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lis r11,-31822
	ctx.r11.s64 = -2085486592;
	// li r8,4
	ctx.r8.s64 = 4;
	// addi r9,r11,-29824
	ctx.r9.s64 = ctx.r11.s64 + -29824;
	// lis r10,26214
	ctx.r10.s64 = 1717960704;
	// lis r4,-32020
	ctx.r4.s64 = -2098462720;
	// ori r6,r10,26215
	ctx.r6.u64 = ctx.r10.u64 | 26215;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// addi r3,r4,9624
	ctx.r3.s64 = ctx.r4.s64 + 9624;
	// lwz r11,28208(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28208);
	// addi r5,r9,11568
	ctx.r5.s64 = ctx.r9.s64 + 11568;
	// lis r30,0
	ctx.r30.s64 = 0;
	// mulhw r8,r11,r6
	ctx.r8.s64 = (int64_t(ctx.r11.s32) * int64_t(ctx.r6.s32)) >> 32;
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// srawi r8,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 3;
	// li r7,0
	ctx.r7.s64 = 0;
	// rlwinm r6,r8,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r8,r6
	ctx.r6.u64 = ctx.r8.u64 + ctx.r6.u64;
	// rlwinm r4,r6,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r3,r4,r11
	ctx.r3.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mulli r8,r3,832
	ctx.r8.s64 = ctx.r3.s64 * 832;
	// stw r11,28208(r9)
	PPC_STORE_U32(ctx.r9.u32 + 28208, ctx.r11.u32);
	// add r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 + ctx.r5.u64;
	// lis r5,0
	ctx.r5.s64 = 0;
	// lis r4,0
	ctx.r4.s64 = 0;
	// lis r9,0
	ctx.r9.s64 = 0;
	// ori r3,r5,40935
	ctx.r3.u64 = ctx.r5.u64 | 40935;
	// ori r5,r4,35896
	ctx.r5.u64 = ctx.r4.u64 | 35896;
	// addi r6,r8,801
	ctx.r6.s64 = ctx.r8.s64 + 801;
	// addi r11,r8,392
	ctx.r11.s64 = ctx.r8.s64 + 392;
	// ori r31,r9,35807
	ctx.r31.u64 = ctx.r9.u64 | 35807;
	// ori r4,r30,41024
	ctx.r4.u64 = ctx.r30.u64 | 41024;
loc_8233F438:
	// lbz r9,5039(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 5039);
	// stb r9,-1(r6)
	PPC_STORE_U8(ctx.r6.u32 + -1, ctx.r9.u8);
	// lbz r9,5039(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 5039);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8233f48c
	if (ctx.cr6.eq) goto loc_8233F48C;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// add r30,r7,r8
	ctx.r30.u64 = ctx.r7.u64 + ctx.r8.u64;
	// lfs f0,232(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 232);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-392(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -392, temp.u32);
	// lfs f13,236(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 236);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,-388(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + -388, temp.u32);
	// lfs f12,240(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 240);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,-384(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + -384, temp.u32);
	// lfs f11,244(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 244);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,-8(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + -8, temp.u32);
	// lfs f10,248(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 248);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,-4(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// lfs f9,252(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 252);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,0(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lwz r9,120(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 120);
	// stb r9,768(r30)
	PPC_STORE_U8(ctx.r30.u32 + 768, ctx.r9.u8);
loc_8233F48C:
	// lbz r9,10167(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 10167);
	// stb r9,0(r6)
	PPC_STORE_U8(ctx.r6.u32 + 0, ctx.r9.u8);
	// lbz r9,10167(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 10167);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8233f4e0
	if (ctx.cr6.eq) goto loc_8233F4E0;
	// lwz r9,5128(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 5128);
	// add r30,r7,r8
	ctx.r30.u64 = ctx.r7.u64 + ctx.r8.u64;
	// lfs f0,232(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 232);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-380(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -380, temp.u32);
	// lfs f13,236(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 236);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,-376(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + -376, temp.u32);
	// lfs f12,240(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 240);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,-372(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + -372, temp.u32);
	// lfs f11,244(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 244);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,4(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f10,248(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 248);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,8(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lfs f9,252(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 252);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,12(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// lwz r9,120(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 120);
	// stb r9,769(r30)
	PPC_STORE_U8(ctx.r30.u32 + 769, ctx.r9.u8);
loc_8233F4E0:
	// lbz r9,15295(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 15295);
	// stb r9,1(r6)
	PPC_STORE_U8(ctx.r6.u32 + 1, ctx.r9.u8);
	// lbz r9,15295(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 15295);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8233f534
	if (ctx.cr6.eq) goto loc_8233F534;
	// lwz r9,10256(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 10256);
	// add r30,r7,r8
	ctx.r30.u64 = ctx.r7.u64 + ctx.r8.u64;
	// lfs f0,232(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 232);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-368(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -368, temp.u32);
	// lfs f13,236(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 236);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,-364(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + -364, temp.u32);
	// lfs f12,240(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 240);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,-360(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + -360, temp.u32);
	// lfs f11,244(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 244);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,16(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// lfs f10,248(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 248);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,20(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// lfs f9,252(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 252);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,24(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// lwz r9,120(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 120);
	// stb r9,770(r30)
	PPC_STORE_U8(ctx.r30.u32 + 770, ctx.r9.u8);
loc_8233F534:
	// lbz r9,20423(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 20423);
	// stb r9,2(r6)
	PPC_STORE_U8(ctx.r6.u32 + 2, ctx.r9.u8);
	// lbz r9,20423(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 20423);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8233f588
	if (ctx.cr6.eq) goto loc_8233F588;
	// lwz r9,15384(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 15384);
	// add r30,r7,r8
	ctx.r30.u64 = ctx.r7.u64 + ctx.r8.u64;
	// lfs f0,232(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 232);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-356(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -356, temp.u32);
	// lfs f13,236(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 236);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,-352(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + -352, temp.u32);
	// lfs f12,240(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 240);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,-348(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + -348, temp.u32);
	// lfs f11,244(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 244);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,28(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// lfs f10,248(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 248);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,32(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// lfs f9,252(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 252);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,36(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// lwz r9,120(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 120);
	// stb r9,771(r30)
	PPC_STORE_U8(ctx.r30.u32 + 771, ctx.r9.u8);
loc_8233F588:
	// lbz r9,25551(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 25551);
	// stb r9,3(r6)
	PPC_STORE_U8(ctx.r6.u32 + 3, ctx.r9.u8);
	// lbz r9,25551(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 25551);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8233f5dc
	if (ctx.cr6.eq) goto loc_8233F5DC;
	// lwz r9,20512(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20512);
	// add r30,r7,r8
	ctx.r30.u64 = ctx.r7.u64 + ctx.r8.u64;
	// lfs f0,232(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 232);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-344(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -344, temp.u32);
	// lfs f13,236(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 236);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,-340(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + -340, temp.u32);
	// lfs f12,240(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 240);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,-336(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + -336, temp.u32);
	// lfs f11,244(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 244);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,40(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// lfs f10,248(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 248);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,44(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 44, temp.u32);
	// lfs f9,252(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 252);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,48(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 48, temp.u32);
	// lwz r9,120(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 120);
	// stb r9,772(r30)
	PPC_STORE_U8(ctx.r30.u32 + 772, ctx.r9.u8);
loc_8233F5DC:
	// lbz r9,30679(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 30679);
	// stb r9,4(r6)
	PPC_STORE_U8(ctx.r6.u32 + 4, ctx.r9.u8);
	// lbz r9,30679(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 30679);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8233f630
	if (ctx.cr6.eq) goto loc_8233F630;
	// lwz r9,25640(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25640);
	// add r30,r7,r8
	ctx.r30.u64 = ctx.r7.u64 + ctx.r8.u64;
	// lfs f0,232(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 232);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-332(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -332, temp.u32);
	// lfs f13,236(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 236);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,-328(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + -328, temp.u32);
	// lfs f12,240(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 240);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,-324(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + -324, temp.u32);
	// lfs f11,244(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 244);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,52(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// lfs f10,248(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 248);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,56(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 56, temp.u32);
	// lfs f9,252(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 252);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,60(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 60, temp.u32);
	// lwz r9,120(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 120);
	// stb r9,773(r30)
	PPC_STORE_U8(ctx.r30.u32 + 773, ctx.r9.u8);
loc_8233F630:
	// lbzx r9,r10,r31
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r31.u32);
	// stb r9,5(r6)
	PPC_STORE_U8(ctx.r6.u32 + 5, ctx.r9.u8);
	// lbzx r9,r10,r31
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r31.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8233f684
	if (ctx.cr6.eq) goto loc_8233F684;
	// lwz r9,30768(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 30768);
	// add r30,r7,r8
	ctx.r30.u64 = ctx.r7.u64 + ctx.r8.u64;
	// lfs f0,232(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 232);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-320(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -320, temp.u32);
	// lfs f13,236(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 236);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,-316(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + -316, temp.u32);
	// lfs f12,240(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 240);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,-312(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + -312, temp.u32);
	// lfs f11,244(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 244);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,64(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 64, temp.u32);
	// lfs f10,248(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 248);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,68(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 68, temp.u32);
	// lfs f9,252(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 252);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,72(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 72, temp.u32);
	// lwz r9,120(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 120);
	// stb r9,774(r30)
	PPC_STORE_U8(ctx.r30.u32 + 774, ctx.r9.u8);
loc_8233F684:
	// lbzx r9,r10,r3
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r3.u32);
	// stb r9,6(r6)
	PPC_STORE_U8(ctx.r6.u32 + 6, ctx.r9.u8);
	// lbzx r9,r10,r3
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r3.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8233f6d8
	if (ctx.cr6.eq) goto loc_8233F6D8;
	// lwzx r9,r10,r5
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r5.u32);
	// add r30,r7,r8
	ctx.r30.u64 = ctx.r7.u64 + ctx.r8.u64;
	// lfs f0,232(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 232);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-308(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -308, temp.u32);
	// lfs f13,236(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 236);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,-304(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + -304, temp.u32);
	// lfs f12,240(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 240);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,-300(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + -300, temp.u32);
	// lfs f11,244(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 244);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,76(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 76, temp.u32);
	// lfs f10,248(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 248);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,80(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 80, temp.u32);
	// lfs f9,252(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 252);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,84(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 84, temp.u32);
	// lwz r9,120(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 120);
	// stb r9,775(r30)
	PPC_STORE_U8(ctx.r30.u32 + 775, ctx.r9.u8);
loc_8233F6D8:
	// addi r7,r7,8
	ctx.r7.s64 = ctx.r7.s64 + 8;
	// addi r6,r6,8
	ctx.r6.s64 = ctx.r6.s64 + 8;
	// addi r11,r11,96
	ctx.r11.s64 = ctx.r11.s64 + 96;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// bdnz 0x8233f438
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8233F438;
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8233F3A8) {
	__imp__sub_8233F3A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233F6F8) {
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
	// bl 0x82128270
	ctx.lr = 0x8233F708;
	sub_82128270(ctx, base);
	// bl 0x821fe140
	ctx.lr = 0x8233F70C;
	sub_821FE140(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8233F6F8) {
	__imp__sub_8233F6F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233F71C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8233F71C) {
	__imp__sub_8233F71C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233F720) {
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
	// bl 0x82128478
	ctx.lr = 0x8233F740;
	sub_82128478(ctx, base);
	// bl 0x821fc2b8
	ctx.lr = 0x8233F744;
	sub_821FC2B8(ctx, base);
	// cmpwi cr6,r3,250
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 250, ctx.xer);
	// ble cr6,0x8233f754
	if (!ctx.cr6.gt) goto loc_8233F754;
	// bl 0x82338380
	ctx.lr = 0x8233F750;
	sub_82338380(ctx, base);
	// bl 0x82338360
	ctx.lr = 0x8233F754;
	sub_82338360(ctx, base);
loc_8233F754:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821fea88
	ctx.lr = 0x8233F760;
	sub_821FEA88(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82338390
	ctx.lr = 0x8233F768;
	sub_82338390(ctx, base);
	// bl 0x82338370
	ctx.lr = 0x8233F76C;
	sub_82338370(ctx, base);
	// bl 0x8233f3a8
	ctx.lr = 0x8233F770;
	sub_8233F3A8(ctx, base);
	// bl 0x821284c8
	ctx.lr = 0x8233F774;
	sub_821284C8(ctx, base);
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

PPC_WEAK_FUNC(sub_8233F720) {
	__imp__sub_8233F720(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233F790) {
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
	// bl 0x8233ec40
	ctx.lr = 0x8233F7A0;
	sub_8233EC40(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8233f7bc
	if (ctx.cr6.eq) goto loc_8233F7BC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,22924
	ctx.r3.s64 = ctx.r11.s64 + 22924;
	// bl 0x822e2170
	ctx.lr = 0x8233F7B8;
	sub_822E2170(ctx, base);
	// bl 0x8223c7a0
	ctx.lr = 0x8233F7BC;
	sub_8223C7A0(ctx, base);
loc_8233F7BC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8233F790) {
	__imp__sub_8233F790(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233F7CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8233F7CC) {
	__imp__sub_8233F7CC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233F7D0) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8233F7D0) {
	__imp__sub_8233F7D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233F7D8) {
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
	// bl 0x8228b698
	ctx.lr = 0x8233F7EC;
	sub_8228B698(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233f808
	if (!ctx.cr6.eq) goto loc_8233F808;
	// lis r11,-31823
	ctx.r11.s64 = -2085552128;
	// addi r10,r11,-31440
	ctx.r10.s64 = ctx.r11.s64 + -31440;
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8233f80c
	if (ctx.cr6.eq) goto loc_8233F80C;
loc_8233F808:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8233F80C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8233F7D8) {
	__imp__sub_8233F7D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233F81C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8233F81C) {
	__imp__sub_8233F81C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233F820) {
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
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,-2088
	ctx.r3.s64 = ctx.r11.s64 + -2088;
	// bl 0x823b7840
	ctx.lr = 0x8233F83C;
	sub_823B7840(ctx, base);
	// lis r11,-31823
	ctx.r11.s64 = -2085552128;
	// addi r11,r11,-31440
	ctx.r11.s64 = ctx.r11.s64 + -31440;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8233f864
	if (!ctx.cr6.eq) goto loc_8233F864;
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
loc_8233F864:
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r10.u32);
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// stw r10,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8233F820) {
	__imp__sub_8233F820(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233F888) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x8233F890;
	__savegprlr_25(ctx, base);
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
loc_8233F898:
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x8228bd10
	ctx.lr = 0x8233F8A0;
	sub_8228BD10(ctx, base);
	// bl 0x823dff10
	ctx.lr = 0x8233F8A4;
	sub_823DFF10(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233f898
	if (!ctx.cr6.eq) goto loc_8233F898;
	// bl 0x8228b3b0
	ctx.lr = 0x8233F8B0;
	sub_8228B3B0(ctx, base);
	// lwz r11,0(r13)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,12
	ctx.r10.s64 = 12;
	// li r9,-1
	ctx.r9.s64 = -1;
	// li r27,0
	ctx.r27.s64 = 0;
	// lis r28,-31841
	ctx.r28.s64 = -2086731776;
	// li r26,36
	ctx.r26.s64 = 36;
	// stwx r9,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-31823
	ctx.r11.s64 = -2085552128;
	// addi r25,r10,22924
	ctx.r25.s64 = ctx.r10.s64 + 22924;
	// addi r31,r11,-31440
	ctx.r31.s64 = ctx.r11.s64 + -31440;
	// lfs f31,2416(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2416);
	ctx.f31.f64 = double(temp.f32);
loc_8233F8E4:
	// bl 0x8228b688
	ctx.lr = 0x8233F8E8;
	sub_8228B688(ctx, base);
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,-2088
	ctx.r3.s64 = ctx.r11.s64 + -2088;
	// bl 0x823b7840
	ctx.lr = 0x8233F8F8;
	sub_823B7840(ctx, base);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8233f918
	if (ctx.cr6.eq) goto loc_8233F918;
	// stw r27,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r27.u32);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// stw r27,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r27.u32);
	// stw r27,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r27.u32);
	// b 0x8233f8e4
	goto loc_8233F8E4;
loc_8233F918:
	// mftb r11
	ctx.r11.u64 = PPC_QUERY_TIMEBASE();
	// rotlwi r30,r11,0
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82128270
	ctx.lr = 0x8233F924;
	sub_82128270(ctx, base);
	// bl 0x821fe140
	ctx.lr = 0x8233F928;
	sub_821FE140(ctx, base);
	// bl 0x82128478
	ctx.lr = 0x8233F92C;
	sub_82128478(ctx, base);
	// bl 0x821fc2b8
	ctx.lr = 0x8233F930;
	sub_821FC2B8(ctx, base);
	// cmpwi cr6,r3,250
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 250, ctx.xer);
	// ble cr6,0x8233f940
	if (!ctx.cr6.gt) goto loc_8233F940;
	// bl 0x82338380
	ctx.lr = 0x8233F93C;
	sub_82338380(ctx, base);
	// bl 0x82338360
	ctx.lr = 0x8233F940;
	sub_82338360(ctx, base);
loc_8233F940:
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821fea88
	ctx.lr = 0x8233F94C;
	sub_821FEA88(ctx, base);
	// bl 0x82338390
	ctx.lr = 0x8233F950;
	sub_82338390(ctx, base);
	// bl 0x82338370
	ctx.lr = 0x8233F954;
	sub_82338370(ctx, base);
	// bl 0x8233f3a8
	ctx.lr = 0x8233F958;
	sub_8233F3A8(ctx, base);
	// bl 0x821284c8
	ctx.lr = 0x8233F95C;
	sub_821284C8(ctx, base);
	// bl 0x8228b688
	ctx.lr = 0x8233F960;
	sub_8228B688(ctx, base);
	// mftb r11
	ctx.r11.u64 = PPC_QUERY_TIMEBASE();
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// subf r29,r30,r10
	ctx.r29.s64 = ctx.r10.s64 - ctx.r30.s64;
	// bl 0x8228b968
	ctx.lr = 0x8233F970;
	sub_8228B968(ctx, base);
	// li r3,9
	ctx.r3.s64 = 9;
	// bl 0x822ec4e8
	ctx.lr = 0x8233F978;
	sub_822EC4E8(ctx, base);
	// bl 0x8228b7f8
	ctx.lr = 0x8233F97C;
	sub_8228B7F8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233f9a4
	if (!ctx.cr6.eq) goto loc_8233F9A4;
	// li r3,9
	ctx.r3.s64 = 9;
	// bl 0x822ec500
	ctx.lr = 0x8233F98C;
	sub_822EC500(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,-18440
	ctx.r3.s64 = ctx.r11.s64 + -18440;
	// bl 0x823b7840
	ctx.lr = 0x8233F99C;
	sub_823B7840(ctx, base);
	// li r3,9
	ctx.r3.s64 = 9;
	// bl 0x822ec4e8
	ctx.lr = 0x8233F9A4;
	sub_822EC4E8(ctx, base);
loc_8233F9A4:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,9
	ctx.r3.s64 = 9;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// bl 0x822ec500
	ctx.lr = 0x8233F9B4;
	sub_822EC500(ctx, base);
	// lis r11,-32215
	ctx.r11.s64 = -2111242240;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,-18232
	ctx.r3.s64 = ctx.r11.s64 + -18232;
	// bl 0x823b7840
	ctx.lr = 0x8233F9C4;
	sub_823B7840(ctx, base);
	// lis r10,-32204
	ctx.r10.s64 = -2110521344;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r10,-2088
	ctx.r3.s64 = ctx.r10.s64 + -2088;
	// bl 0x823b7840
	ctx.lr = 0x8233F9D4;
	sub_823B7840(ctx, base);
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8233f9f4
	if (ctx.cr6.eq) goto loc_8233F9F4;
	// stw r27,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r27.u32);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// stw r27,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r27.u32);
	// stw r27,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r27.u32);
	// b 0x8233f8e4
	goto loc_8233F8E4;
loc_8233F9F4:
	// mftb r11
	ctx.r11.u64 = PPC_QUERY_TIMEBASE();
	// rotlwi r30,r11,0
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8228b958
	ctx.lr = 0x8233FA00;
	sub_8228B958(ctx, base);
	// bl 0x82340c58
	ctx.lr = 0x8233FA04;
	sub_82340C58(ctx, base);
	// bl 0x82120be0
	ctx.lr = 0x8233FA08;
	sub_82120BE0(ctx, base);
	// bl 0x8228b938
	ctx.lr = 0x8233FA0C;
	sub_8228B938(ctx, base);
	// bl 0x8233ec40
	ctx.lr = 0x8233FA10;
	sub_8233EC40(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8233fa28
	if (ctx.cr6.eq) goto loc_8233FA28;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822e2170
	ctx.lr = 0x8233FA24;
	sub_822E2170(ctx, base);
	// bl 0x8223c7a0
	ctx.lr = 0x8233FA28;
	sub_8223C7A0(ctx, base);
loc_8233FA28:
	// mftb r11
	ctx.r11.u64 = PPC_QUERY_TIMEBASE();
	// subf r10,r30,r29
	ctx.r10.s64 = ctx.r29.s64 - ctx.r30.s64;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lfd f0,-24480(r28)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r28.u32 + -24480);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// clrldi r10,r11,32
	ctx.r10.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// fmul f11,f12,f0
	ctx.f11.f64 = ctx.f12.f64 * ctx.f0.f64;
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fadds f9,f10,f31
	ctx.f9.f64 = double(float(ctx.f10.f64 + ctx.f31.f64));
	// fctiwz f8,f9
	ctx.f8.s64 = (ctx.f9.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f9.f64));
	// stfiwx f8,r31,r26
	PPC_STORE_U32(ctx.r31.u32 + ctx.r26.u32, ctx.f8.u32);
	// b 0x8233f8e4
	goto loc_8233F8E4;
}

PPC_WEAK_FUNC(sub_8233F888) {
	__imp__sub_8233F888(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233FA64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8233FA64) {
	__imp__sub_8233FA64(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233FA68) {
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
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// addi r3,r11,-1912
	ctx.r3.s64 = ctx.r11.s64 + -1912;
	// bl 0x8228c738
	ctx.lr = 0x8233FA80;
	sub_8228C738(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8233fa98
	if (!ctx.cr6.eq) goto loc_8233FA98;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,-18352
	ctx.r3.s64 = ctx.r11.s64 + -18352;
	// bl 0x8230d720
	ctx.lr = 0x8233FA98;
	sub_8230D720(ctx, base);
loc_8233FA98:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8233FA68) {
	__imp__sub_8233FA68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233FAA8) {
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
	// lis r31,-31822
	ctx.r31.s64 = -2085486592;
	// lwz r3,-364(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -364);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8233faf4
	if (!ctx.cr6.eq) goto loc_8233FAF4;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r6,32767
	ctx.r6.s64 = 2147418112;
	// addi r8,r11,-18264
	ctx.r8.s64 = ctx.r11.s64 + -18264;
	// addi r3,r10,-18276
	ctx.r3.s64 = ctx.r10.s64 + -18276;
	// li r7,0
	ctx.r7.s64 = 0;
	// ori r6,r6,65535
	ctx.r6.u64 = ctx.r6.u64 | 65535;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822e1618
	ctx.lr = 0x8233FAF0;
	sub_822E1618(ctx, base);
	// stw r3,-364(r31)
	PPC_STORE_U32(ctx.r31.u32 + -364, ctx.r3.u32);
loc_8233FAF4:
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8233fb34
	if (ctx.cr6.eq) goto loc_8233FB34;
	// lis r10,-31823
	ctx.r10.s64 = -2085552128;
	// lis r9,0
	ctx.r9.s64 = 0;
	// addi r8,r10,-31440
	ctx.r8.s64 = ctx.r10.s64 + -31440;
	// ori r7,r9,57312
	ctx.r7.u64 = ctx.r9.u64 | 57312;
	// mulli r6,r11,1000
	ctx.r6.s64 = ctx.r11.s64 * 1000;
	// lwzx r5,r8,r7
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// cmpw cr6,r6,r5
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x8233fb34
	if (!ctx.cr6.lt) goto loc_8233FB34;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r3,15
	ctx.r3.s64 = 15;
	// addi r4,r11,-18320
	ctx.r4.s64 = ctx.r11.s64 + -18320;
	// bl 0x82280900
	ctx.lr = 0x8233FB30;
	sub_82280900(ctx, base);
	// bl 0x822833b8
	ctx.lr = 0x8233FB34;
	sub_822833B8(ctx, base);
loc_8233FB34:
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

PPC_WEAK_FUNC(sub_8233FAA8) {
	__imp__sub_8233FAA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233FB48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31822
	ctx.r11.s64 = -2085486592;
	// lwz r10,-352(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -352);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,-352(r11)
	PPC_STORE_U32(ctx.r11.u32 + -352, ctx.r10.u32);
	// b 0x8228b678
	sub_8228B678(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8233FB48) {
	__imp__sub_8233FB48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233FB64) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8233FB64) {
	__imp__sub_8233FB64(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233FB68) {
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
	// lis r10,-31822
	ctx.r10.s64 = -2085486592;
	// lwz r11,-352(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -352);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8233fc2c
	if (ctx.cr6.eq) goto loc_8233FC2C;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-352(r10)
	PPC_STORE_U32(ctx.r10.u32 + -352, ctx.r11.u32);
	// bl 0x8228b5e8
	ctx.lr = 0x8233FB94;
	sub_8228B5E8(ctx, base);
	// lis r11,-31823
	ctx.r11.s64 = -2085552128;
	// addi r31,r11,-31440
	ctx.r31.s64 = ctx.r11.s64 + -31440;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8233fbac
	if (!ctx.cr6.eq) goto loc_8233FBAC;
	// bl 0x8228b8b8
	ctx.lr = 0x8233FBAC;
	sub_8228B8B8(ctx, base);
loc_8233FBAC:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8233fc10
	if (!ctx.cr6.eq) goto loc_8233FC10;
	// li r3,9
	ctx.r3.s64 = 9;
	// bl 0x822ec4e8
	ctx.lr = 0x8233FBC0;
	sub_822EC4E8(ctx, base);
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8233fc08
	if (ctx.cr6.eq) goto loc_8233FC08;
	// lis r11,0
	ctx.r11.s64 = 0;
	// lis r9,0
	ctx.r9.s64 = 0;
	// ori r8,r11,57312
	ctx.r8.u64 = ctx.r11.u64 | 57312;
	// li r10,0
	ctx.r10.s64 = 0;
	// ori r6,r9,57312
	ctx.r6.u64 = ctx.r9.u64 | 57312;
	// lis r7,-31822
	ctx.r7.s64 = -2085486592;
	// stw r10,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r10.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwzx r11,r31,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// addi r10,r11,50
	ctx.r10.s64 = ctx.r11.s64 + 50;
	// stw r8,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r8.u32);
	// stwx r10,r31,r6
	PPC_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r10.u32);
	// stw r11,-356(r7)
	PPC_STORE_U32(ctx.r7.u32 + -356, ctx.r11.u32);
loc_8233FC08:
	// li r3,9
	ctx.r3.s64 = 9;
	// bl 0x822ec500
	ctx.lr = 0x8233FC10;
	sub_822EC500(ctx, base);
loc_8233FC10:
	// bl 0x8228b640
	ctx.lr = 0x8233FC14;
	sub_8228B640(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233fc2c
	if (!ctx.cr6.eq) goto loc_8233FC2C;
loc_8233FC1C:
	// bl 0x82282b30
	ctx.lr = 0x8233FC20;
	sub_82282B30(ctx, base);
	// bl 0x8228b640
	ctx.lr = 0x8233FC24;
	sub_8228B640(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8233fc1c
	if (ctx.cr6.eq) goto loc_8233FC1C;
loc_8233FC2C:
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

PPC_WEAK_FUNC(sub_8233FB68) {
	__imp__sub_8233FB68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233FC40) {
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
	// lis r31,-31823
	ctx.r31.s64 = -2085552128;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r30,r31,-31440
	ctx.r30.s64 = ctx.r31.s64 + -31440;
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// bl 0x8228b3b0
	ctx.lr = 0x8233FC68;
	sub_8228B3B0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,44(r30)
	PPC_STORE_U32(ctx.r30.u32 + 44, ctx.r11.u32);
	// stw r10,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r10.u32);
	// bl 0x82338160
	ctx.lr = 0x8233FC7C;
	sub_82338160(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,-31440(r31)
	PPC_STORE_U32(ctx.r31.u32 + -31440, ctx.r11.u32);
	// bl 0x821209a8
	ctx.lr = 0x8233FC88;
	sub_821209A8(ctx, base);
	// bl 0x821fc2b8
	ctx.lr = 0x8233FC8C;
	sub_821FC2B8(ctx, base);
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r9,r10,57312
	ctx.r9.u64 = ctx.r10.u64 | 57312;
	// stwx r3,r30,r9
	PPC_STORE_U32(ctx.r30.u32 + ctx.r9.u32, ctx.r3.u32);
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

PPC_WEAK_FUNC(sub_8233FC40) {
	__imp__sub_8233FC40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233FCB0) {
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
	// lis r11,-31823
	ctx.r11.s64 = -2085552128;
	// addi r31,r11,-31440
	ctx.r31.s64 = ctx.r11.s64 + -31440;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8233fd08
	if (ctx.cr6.eq) goto loc_8233FD08;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// lwsync 
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// lwz r9,28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8233fd08
	if (ctx.cr6.eq) goto loc_8233FD08;
loc_8233FCF4:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8228b0d8
	ctx.lr = 0x8233FCFC;
	sub_8228B0D8(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8233fcf4
	if (!ctx.cr6.eq) goto loc_8233FCF4;
loc_8233FD08:
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

PPC_WEAK_FUNC(sub_8233FCB0) {
	__imp__sub_8233FCB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233FD1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8233FD1C) {
	__imp__sub_8233FD1C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233FD20) {
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
	ctx.lr = 0x8233FD34;
	sub_8228BCC0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8233fd70
	if (!ctx.cr6.eq) goto loc_8233FD70;
	// lis r11,-31823
	ctx.r11.s64 = -2085552128;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r31,r11,-31440
	ctx.r31.s64 = ctx.r11.s64 + -31440;
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// lwz r9,28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8233fd70
	if (!ctx.cr6.eq) goto loc_8233FD70;
loc_8233FD5C:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8228b0d8
	ctx.lr = 0x8233FD64;
	sub_8228B0D8(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8233fd5c
	if (ctx.cr6.eq) goto loc_8233FD5C;
loc_8233FD70:
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

PPC_WEAK_FUNC(sub_8233FD20) {
	__imp__sub_8233FD20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233FD84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8233FD84) {
	__imp__sub_8233FD84(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233FD88) {
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
	ctx.lr = 0x8233FD98;
	sub_8228BCC0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8233fdb8
	if (!ctx.cr6.eq) goto loc_8233FDB8;
	// lwsync 
	// lis r11,-31823
	ctx.r11.s64 = -2085552128;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,-31440
	ctx.r9.s64 = ctx.r11.s64 + -31440;
	// stw r10,28(r9)
	PPC_STORE_U32(ctx.r9.u32 + 28, ctx.r10.u32);
loc_8233FDB8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8233FD88) {
	__imp__sub_8233FD88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233FDC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31823
	ctx.r11.s64 = -2085552128;
	// addi r10,r11,-31440
	ctx.r10.s64 = ctx.r11.s64 + -31440;
	// lwz r3,12(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8233FDC8) {
	__imp__sub_8233FDC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233FDD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8233FDE0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31823
	ctx.r10.s64 = -2085552128;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r31,r10,-31440
	ctx.r31.s64 = ctx.r10.s64 + -31440;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// mftb r11
	ctx.r11.u64 = PPC_QUERY_TIMEBASE();
	// rotlwi r29,r11,0
	ctx.r29.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8228b900
	ctx.lr = 0x8233FE00;
	sub_8228B900(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233fe6c
	if (!ctx.cr6.eq) goto loc_8233FE6C;
	// lis r30,-31822
	ctx.r30.s64 = -2085486592;
loc_8233FE0C:
	// bl 0x82283340
	ctx.lr = 0x8233FE10;
	sub_82283340(ctx, base);
	// lwz r11,-352(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -352);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8233fe28
	if (!ctx.cr6.eq) goto loc_8233FE28;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,-352(r30)
	PPC_STORE_U32(ctx.r30.u32 + -352, ctx.r11.u32);
	// bl 0x8228b678
	ctx.lr = 0x8233FE28;
	sub_8228B678(ctx, base);
loc_8233FE28:
	// bl 0x8228b8a8
	ctx.lr = 0x8233FE2C;
	sub_8228B8A8(ctx, base);
	// li r3,9
	ctx.r3.s64 = 9;
	// bl 0x822ec4e8
	ctx.lr = 0x8233FE34;
	sub_822EC4E8(ctx, base);
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8233fe4c
	if (ctx.cr6.eq) goto loc_8233FE4C;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8233fe54
	if (ctx.cr6.eq) goto loc_8233FE54;
loc_8233FE4C:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8228b760
	ctx.lr = 0x8233FE54;
	sub_8228B760(ctx, base);
loc_8233FE54:
	// li r3,9
	ctx.r3.s64 = 9;
	// bl 0x822ec500
	ctx.lr = 0x8233FE5C;
	sub_822EC500(ctx, base);
	// bl 0x82282b30
	ctx.lr = 0x8233FE60;
	sub_82282B30(ctx, base);
	// bl 0x8228b900
	ctx.lr = 0x8233FE64;
	sub_8228B900(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8233fe0c
	if (ctx.cr6.eq) goto loc_8233FE0C;
loc_8233FE6C:
	// mftb r11
	ctx.r11.u64 = PPC_QUERY_TIMEBASE();
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lis r9,-31841
	ctx.r9.s64 = -2086731776;
	// subf r8,r29,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r29.s64;
	// clrldi r7,r8,32
	ctx.r7.u64 = ctx.r8.u64 & 0xFFFFFFFF;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfd f0,-24480(r9)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r9.u32 + -24480);
	// fmul f12,f13,f0
	ctx.f12.f64 = ctx.f13.f64 * ctx.f0.f64;
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fctiwz f10,f11
	ctx.f10.s64 = (ctx.f11.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f10.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// bl 0x8228b8b8
	ctx.lr = 0x8233FEAC;
	sub_8228B8B8(ctx, base);
	// li r3,9
	ctx.r3.s64 = 9;
	// bl 0x822ec4e8
	ctx.lr = 0x8233FEB4;
	sub_822EC4E8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8233fed4
	if (!ctx.cr6.eq) goto loc_8233FED4;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// subfic r3,r11,50
	ctx.xer.ca = ctx.r11.u32 <= 50;
	ctx.r3.s64 = 50 - ctx.r11.s64;
	// b 0x8233fed8
	goto loc_8233FED8;
loc_8233FED4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8233FED8:
	// bl 0x8228b760
	ctx.lr = 0x8233FEDC;
	sub_8228B760(ctx, base);
	// li r3,9
	ctx.r3.s64 = 9;
	// bl 0x822ec500
	ctx.lr = 0x8233FEE4;
	sub_822EC500(ctx, base);
	// bl 0x8228b948
	ctx.lr = 0x8233FEE8;
	sub_8228B948(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8233FDD8) {
	__imp__sub_8233FDD8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233FEF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-31822
	ctx.r10.s64 = -2085486592;
	// li r11,32
	ctx.r11.s64 = 32;
	// addi r9,r10,-29824
	ctx.r9.s64 = ctx.r10.s64 + -29824;
	// rlwinm r8,r11,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// lwz r10,20(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// lwz r9,16(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// subf r7,r10,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r10.s64;
	// srawi r6,r7,31
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 31;
	// subfc r5,r11,r7
	ctx.xer.ca = ctx.r7.u32 >= ctx.r11.u32;
	ctx.r5.s64 = ctx.r7.s64 - ctx.r11.s64;
	// adde r3,r8,r6
	temp.u8 = (ctx.r8.u32 + ctx.r6.u32 < ctx.r8.u32) | (ctx.r8.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ctx.r8.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8233FEF0) {
	__imp__sub_8233FEF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233FF1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8233FF1C) {
	__imp__sub_8233FF1C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8233FF20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x8233FF28;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31822
	ctx.r11.s64 = -2085486592;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r10,-352(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -352);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8233ff4c
	if (!ctx.cr6.eq) goto loc_8233FF4C;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,-352(r11)
	PPC_STORE_U32(ctx.r11.u32 + -352, ctx.r10.u32);
	// bl 0x8228b678
	ctx.lr = 0x8233FF4C;
	sub_8228B678(ctx, base);
loc_8233FF4C:
	// lis r11,-31823
	ctx.r11.s64 = -2085552128;
	// addi r31,r11,-31440
	ctx.r31.s64 = ctx.r11.s64 + -31440;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8233ff70
	if (ctx.cr6.eq) goto loc_8233FF70;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82131d58
	ctx.lr = 0x8233FF68;
	sub_82131D58(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_8233FF70:
	// lis r10,0
	ctx.r10.s64 = 0;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r9,32512
	ctx.r9.s64 = 2130706432;
	// ori r8,r10,57312
	ctx.r8.u64 = ctx.r10.u64 | 57312;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lwzx r10,r31,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x8233ffa8
	if (!ctx.cr6.gt) goto loc_8233FFA8;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,-18204
	ctx.r3.s64 = ctx.r11.s64 + -18204;
	// bl 0x822830a8
	ctx.lr = 0x8233FFA0;
	sub_822830A8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_8233FFA8:
	// lis r10,-31822
	ctx.r10.s64 = -2085486592;
	// addi r27,r10,-29824
	ctx.r27.s64 = ctx.r10.s64 + -29824;
	// lwz r10,11540(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 11540);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8233ffd0
	if (ctx.cr6.lt) goto loc_8233FFD0;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,-18236
	ctx.r3.s64 = ctx.r11.s64 + -18236;
	// bl 0x822830a8
	ctx.lr = 0x8233FFC8;
	sub_822830A8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_8233FFD0:
	// li r3,9
	ctx.r3.s64 = 9;
	// subfic r30,r11,50
	ctx.xer.ca = ctx.r11.u32 <= 50;
	ctx.r30.s64 = 50 - ctx.r11.s64;
	// bl 0x822ec4e8
	ctx.lr = 0x8233FFDC;
	sub_822EC4E8(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// lis r26,-31822
	ctx.r26.s64 = -2085486592;
	// ori r10,r11,57312
	ctx.r10.u64 = ctx.r11.u64 | 57312;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// lwzx r10,r31,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// ble cr6,0x8234004c
	if (!ctx.cr6.gt) goto loc_8234004C;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82340044
	if (!ctx.cr6.eq) goto loc_82340044;
	// lwz r11,-356(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -356);
	// subf r29,r30,r10
	ctx.r29.s64 = ctx.r10.s64 - ctx.r30.s64;
	// subf. r11,r11,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r11.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x82340044
	if (ctx.cr0.lt) goto loc_82340044;
	// bl 0x8228b8b8
	ctx.lr = 0x82340014;
	sub_8228B8B8(ctx, base);
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// addic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r9,r30
	ctx.r3.u64 = ctx.r9.u64 & ctx.r30.u64;
	// bl 0x8228b760
	ctx.lr = 0x82340028;
	sub_8228B760(ctx, base);
	// li r3,9
	ctx.r3.s64 = 9;
	// bl 0x822ec500
	ctx.lr = 0x82340030;
	sub_822EC500(ctx, base);
	// stw r29,-356(r26)
	PPC_STORE_U32(ctx.r26.u32 + -356, ctx.r29.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82131d58
	ctx.lr = 0x8234003C;
	sub_82131D58(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_82340044:
	// li r9,50
	ctx.r9.s64 = 50;
	// b 0x82340050
	goto loc_82340050;
loc_8234004C:
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
loc_82340050:
	// lis r8,0
	ctx.r8.s64 = 0;
	// addi r10,r10,50
	ctx.r10.s64 = ctx.r10.s64 + 50;
	// ori r7,r8,57312
	ctx.r7.u64 = ctx.r8.u64 | 57312;
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r30,-31936
	ctx.r30.s64 = -2092957696;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// addi r11,r9,-50
	ctx.r11.s64 = ctx.r9.s64 + -50;
	// stwx r10,r31,r7
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r10.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r29,r10,22924
	ctx.r29.s64 = ctx.r10.s64 + 22924;
loc_82340078:
	// lbz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 8);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82340158
	if (!ctx.cr6.eq) goto loc_82340158;
	// lwz r10,-9404(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + -9404);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82340158
	if (!ctx.cr6.eq) goto loc_82340158;
	// lwz r10,20(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// lwz r9,16(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// subf r10,r10,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r10.s64;
	// cmpwi cr6,r10,32
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 32, ctx.xer);
	// bge cr6,0x82340158
	if (!ctx.cr6.lt) goto loc_82340158;
	// cmpwi cr6,r11,50
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 50, ctx.xer);
	// blt cr6,0x82340168
	if (ctx.cr6.lt) goto loc_82340168;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82340160
	if (ctx.cr6.eq) goto loc_82340160;
	// bl 0x8233fb68
	ctx.lr = 0x823400C4;
	sub_8233FB68(ctx, base);
	// bl 0x82128270
	ctx.lr = 0x823400C8;
	sub_82128270(ctx, base);
	// bl 0x821fe140
	ctx.lr = 0x823400CC;
	sub_821FE140(ctx, base);
	// bl 0x82128478
	ctx.lr = 0x823400D0;
	sub_82128478(ctx, base);
	// bl 0x821fc2b8
	ctx.lr = 0x823400D4;
	sub_821FC2B8(ctx, base);
	// cmpwi cr6,r3,250
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 250, ctx.xer);
	// ble cr6,0x823400e4
	if (!ctx.cr6.gt) goto loc_823400E4;
	// bl 0x82338380
	ctx.lr = 0x823400E0;
	sub_82338380(ctx, base);
	// bl 0x82338360
	ctx.lr = 0x823400E4;
	sub_82338360(ctx, base);
loc_823400E4:
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821fea88
	ctx.lr = 0x823400F0;
	sub_821FEA88(ctx, base);
	// bl 0x82338390
	ctx.lr = 0x823400F4;
	sub_82338390(ctx, base);
	// bl 0x82338370
	ctx.lr = 0x823400F8;
	sub_82338370(ctx, base);
	// bl 0x8233f3a8
	ctx.lr = 0x823400FC;
	sub_8233F3A8(ctx, base);
	// bl 0x821284c8
	ctx.lr = 0x82340100;
	sub_821284C8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// bl 0x8233ec40
	ctx.lr = 0x8234010C;
	sub_8233EC40(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82340124
	if (ctx.cr6.eq) goto loc_82340124;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822e2170
	ctx.lr = 0x82340120;
	sub_822E2170(ctx, base);
	// bl 0x8223c7a0
	ctx.lr = 0x82340124;
	sub_8223C7A0(ctx, base);
loc_82340124:
	// lis r9,0
	ctx.r9.s64 = 0;
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lis r8,0
	ctx.r8.s64 = 0;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// ori r7,r9,57312
	ctx.r7.u64 = ctx.r9.u64 | 57312;
	// addi r9,r10,50
	ctx.r9.s64 = ctx.r10.s64 + 50;
	// ori r6,r8,57312
	ctx.r6.u64 = ctx.r8.u64 | 57312;
	// addi r11,r11,-50
	ctx.r11.s64 = ctx.r11.s64 + -50;
	// stw r9,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r9.u32);
	// lwzx r10,r31,r7
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	// addi r10,r10,50
	ctx.r10.s64 = ctx.r10.s64 + 50;
	// stwx r10,r31,r6
	PPC_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r10.u32);
	// b 0x82340078
	goto loc_82340078;
loc_82340158:
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r10.u8);
loc_82340160:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_82340168:
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8234018c
	if (ctx.cr6.eq) goto loc_8234018C;
	// lwz r9,40(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// li r10,0
	ctx.r10.s64 = 0;
	// subfic r3,r11,50
	ctx.xer.ca = ctx.r11.u32 <= 50;
	ctx.r3.s64 = 50 - ctx.r11.s64;
	// stw r10,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r10.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82340190
	if (ctx.cr6.eq) goto loc_82340190;
loc_8234018C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82340190:
	// bl 0x8228b760
	ctx.lr = 0x82340194;
	sub_8228B760(ctx, base);
	// li r3,9
	ctx.r3.s64 = 9;
	// bl 0x822ec500
	ctx.lr = 0x8234019C;
	sub_822EC500(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// ori r10,r11,57312
	ctx.r10.u64 = ctx.r11.u64 | 57312;
	// lwzx r11,r31,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r11,r11,-50
	ctx.r11.s64 = ctx.r11.s64 + -50;
	// stw r11,-356(r26)
	PPC_STORE_U32(ctx.r26.u32 + -356, ctx.r11.u32);
	// bl 0x82131d58
	ctx.lr = 0x823401BC;
	sub_82131D58(ctx, base);
	// bl 0x8233faa8
	ctx.lr = 0x823401C0;
	sub_8233FAA8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8233FF20) {
	__imp__sub_8233FF20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823401C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31823
	ctx.r11.s64 = -2085552128;
	// addi r10,r11,-31440
	ctx.r10.s64 = ctx.r11.s64 + -31440;
	// lwz r3,48(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823401C8) {
	__imp__sub_823401C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823401D8) {
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
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// li r31,0
	ctx.r31.s64 = 0;
	// lbz r10,29088(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 29088);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82340244
	if (ctx.cr6.eq) goto loc_82340244;
	// lis r11,-31833
	ctx.r11.s64 = -2086207488;
	// lbz r10,17033(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 17033);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82340244
	if (!ctx.cr6.eq) goto loc_82340244;
	// lis r11,-31823
	ctx.r11.s64 = -2085552128;
	// lwz r3,-31448(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -31448);
	// bl 0x8233a398
	ctx.lr = 0x82340218;
	sub_8233A398(ctx, base);
	// lis r10,-31833
	ctx.r10.s64 = -2086207488;
	// lis r9,-31823
	ctx.r9.s64 = -2085552128;
	// lis r8,0
	ctx.r8.s64 = 0;
	// addi r7,r9,-31440
	ctx.r7.s64 = ctx.r9.s64 + -31440;
	// ori r6,r8,57312
	ctx.r6.u64 = ctx.r8.u64 | 57312;
	// lwz r11,17328(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 17328);
	// lwzx r10,r7,r6
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	// lwz r5,12(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// subf r4,r10,r3
	ctx.r4.s64 = ctx.r3.s64 - ctx.r10.s64;
	// cmpw cr6,r4,r5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r5.s32, ctx.xer);
	// bgt cr6,0x82340248
	if (ctx.cr6.gt) goto loc_82340248;
loc_82340244:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82340248:
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

PPC_WEAK_FUNC(sub_823401D8) {
	__imp__sub_823401D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8234025C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8234025C) {
	__imp__sub_8234025C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82340260) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x82340268;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x823401d8
	ctx.lr = 0x82340270;
	sub_823401D8(ctx, base);
	// lis r11,-31823
	ctx.r11.s64 = -2085552128;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r29,r11,-31440
	ctx.r29.s64 = ctx.r11.s64 + -31440;
	// stw r3,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r3.u32);
	// bne cr6,0x82340290
	if (!ctx.cr6.eq) goto loc_82340290;
loc_82340284:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_82340290:
	// bl 0x8233fb68
	ctx.lr = 0x82340294;
	sub_8233FB68(ctx, base);
	// bl 0x821fc2b8
	ctx.lr = 0x82340298;
	sub_821FC2B8(ctx, base);
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// subf. r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x82340284
	if (!ctx.cr0.gt) goto loc_82340284;
	// lis r27,-31936
	ctx.r27.s64 = -2092957696;
	// lwz r3,-9404(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + -9404);
	// lwz r26,12(r3)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x823402c4
	if (ctx.cr6.eq) goto loc_823402C4;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822e1f80
	ctx.lr = 0x823402C4;
	sub_822E1F80(ctx, base);
loc_823402C4:
	// lis r11,-31822
	ctx.r11.s64 = -2085486592;
	// lwz r10,-352(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -352);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x823402e0
	if (!ctx.cr6.eq) goto loc_823402E0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,-352(r11)
	PPC_STORE_U32(ctx.r11.u32 + -352, ctx.r10.u32);
	// bl 0x8228b678
	ctx.lr = 0x823402E0;
	sub_8228B678(ctx, base);
loc_823402E0:
	// bl 0x8233fb68
	ctx.lr = 0x823402E4;
	sub_8233FB68(ctx, base);
	// bl 0x821fc2b8
	ctx.lr = 0x823402E8;
	sub_821FC2B8(ctx, base);
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// subf. r3,r3,r11
	ctx.r3.s64 = ctx.r11.s64 - ctx.r3.s64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x82340310
	if (!ctx.cr0.gt) goto loc_82340310;
	// lwz r30,0(r13)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r31,12
	ctx.r31.s64 = 12;
	// li r11,-1
	ctx.r11.s64 = -1;
	// lwzx r25,r31,r30
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// stwx r11,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r11.u32);
	// bl 0x8233ff20
	ctx.lr = 0x8234030C;
	sub_8233FF20(ctx, base);
	// stwx r25,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r25.u32);
loc_82340310:
	// extsw r11,r28
	ctx.r11.s64 = ctx.r28.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// bl 0x821fc2b8
	ctx.lr = 0x8234031C;
	sub_821FC2B8(ctx, base);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// subf r5,r28,r3
	ctx.r5.s64 = ctx.r3.s64 - ctx.r28.s64;
	// addi r4,r9,-18176
	ctx.r4.s64 = ctx.r9.s64 + -18176;
	// li r3,15
	ctx.r3.s64 = 15;
	// lfs f0,5804(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5804);
	ctx.f0.f64 = double(temp.f32);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f1,f12,f0
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfd f1,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f1.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// bl 0x82280900
	ctx.lr = 0x82340350;
	sub_82280900(ctx, base);
	// lwz r3,-9404(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + -9404);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,48(r29)
	PPC_STORE_U32(ctx.r29.u32 + 48, ctx.r11.u32);
	// lwz r8,12(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x82340378
	if (!ctx.cr6.eq) goto loc_82340378;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x82340378
	if (ctx.cr6.eq) goto loc_82340378;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x822e1f80
	ctx.lr = 0x82340378;
	sub_822E1F80(ctx, base);
loc_82340378:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82340260) {
	__imp__sub_82340260(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82340384) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82340384) {
	__imp__sub_82340384(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82340388) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-31936
	ctx.r9.s64 = -2092957696;
	// lis r11,-31823
	ctx.r11.s64 = -2085552128;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-31440
	ctx.r11.s64 = ctx.r11.s64 + -31440;
	// lwz r9,-9404(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9404);
	// stw r10,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r10.u32);
	// lwz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x823403f8
	if (!ctx.cr6.eq) goto loc_823403F8;
	// lwz r9,36(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x823403f8
	if (ctx.cr6.eq) goto loc_823403F8;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// subf. r10,r10,r4
	ctx.r10.s64 = ctx.r4.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble 0x823403f8
	if (!ctx.cr0.gt) goto loc_823403F8;
	// cmpwi cr6,r9,200
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 200, ctx.xer);
	// ble cr6,0x823403d0
	if (!ctx.cr6.gt) goto loc_823403D0;
	// li r9,200
	ctx.r9.s64 = 200;
loc_823403D0:
	// mulli r10,r10,50
	ctx.r10.s64 = ctx.r10.s64 * 50;
	// divw r10,r10,r9
	ctx.r10.s32 = ctx.r10.s32 / ctx.r9.s32;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bge cr6,0x823403e4
	if (!ctx.cr6.lt) goto loc_823403E4;
	// li r10,1
	ctx.r10.s64 = 1;
loc_823403E4:
	// cmpw cr6,r10,r3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r3.s32, ctx.xer);
	// bge cr6,0x823403f8
	if (!ctx.cr6.lt) goto loc_823403F8;
	// li r9,1
	ctx.r9.s64 = 1;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// stw r9,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r9.u32);
loc_823403F8:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82340388) {
	__imp__sub_82340388(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82340404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82340404) {
	__imp__sub_82340404(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82340408) {
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
	// lis r11,-31936
	ctx.r11.s64 = -2092957696;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,-9384(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9384);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82340478
	if (ctx.cr6.eq) goto loc_82340478;
	// bl 0x821352f0
	ctx.lr = 0x82340434;
	sub_821352F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82340498
	if (!ctx.cr6.eq) goto loc_82340498;
	// bl 0x8233fb68
	ctx.lr = 0x82340440;
	sub_8233FB68(ctx, base);
	// bl 0x82283340
	ctx.lr = 0x82340444;
	sub_82283340(ctx, base);
	// lis r11,-31823
	ctx.r11.s64 = -2085552128;
	// addi r10,r11,-31440
	ctx.r10.s64 = ctx.r11.s64 + -31440;
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82340478
	if (!ctx.cr6.eq) goto loc_82340478;
	// bl 0x8233ec40
	ctx.lr = 0x8234045C;
	sub_8233EC40(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82340478
	if (ctx.cr6.eq) goto loc_82340478;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,22924
	ctx.r3.s64 = ctx.r11.s64 + 22924;
	// bl 0x822e2170
	ctx.lr = 0x82340474;
	sub_822E2170(ctx, base);
	// bl 0x8223c7a0
	ctx.lr = 0x82340478;
	sub_8223C7A0(ctx, base);
loc_82340478:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82131d58
	ctx.lr = 0x82340480;
	sub_82131D58(ctx, base);
	// bl 0x8233c6c8
	ctx.lr = 0x82340484;
	sub_8233C6C8(ctx, base);
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
loc_82340498:
	// bl 0x82337118
	ctx.lr = 0x8234049C;
	sub_82337118(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82340478
	if (!ctx.cr6.eq) goto loc_82340478;
	// bl 0x8233c738
	ctx.lr = 0x823404A8;
	sub_8233C738(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82340590
	if (!ctx.cr6.eq) goto loc_82340590;
	// bl 0x82340260
	ctx.lr = 0x823404B8;
	sub_82340260(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82340590
	if (!ctx.cr6.eq) goto loc_82340590;
	// bl 0x8233b7f0
	ctx.lr = 0x823404C8;
	sub_8233B7F0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82340560
	if (ctx.cr6.eq) goto loc_82340560;
	// bl 0x821fc2b8
	ctx.lr = 0x823404D8;
	sub_821FC2B8(ctx, base);
	// cmpwi cr6,r3,250
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 250, ctx.xer);
	// blt cr6,0x823404e4
	if (ctx.cr6.lt) goto loc_823404E4;
	// bl 0x8233c7f8
	ctx.lr = 0x823404E4;
	sub_8233C7F8(ctx, base);
loc_823404E4:
	// lis r11,-31936
	ctx.r11.s64 = -2092957696;
	// lwz r11,-9404(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9404);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82340508
	if (!ctx.cr6.eq) goto loc_82340508;
	// bl 0x8233b878
	ctx.lr = 0x823404FC;
	sub_8233B878(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82340560
	if (ctx.cr6.eq) goto loc_82340560;
loc_82340508:
	// lis r11,-31823
	ctx.r11.s64 = -2085552128;
	// addi r10,r11,-31440
	ctx.r10.s64 = ctx.r11.s64 + -31440;
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82340540
	if (!ctx.cr6.eq) goto loc_82340540;
	// bl 0x8233fb68
	ctx.lr = 0x82340520;
	sub_8233FB68(ctx, base);
	// bl 0x8233ec40
	ctx.lr = 0x82340524;
	sub_8233EC40(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82340540
	if (ctx.cr6.eq) goto loc_82340540;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,22924
	ctx.r3.s64 = ctx.r11.s64 + 22924;
	// bl 0x822e2170
	ctx.lr = 0x8234053C;
	sub_822E2170(ctx, base);
	// bl 0x8223c7a0
	ctx.lr = 0x82340540;
	sub_8223C7A0(ctx, base);
loc_82340540:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82131d58
	ctx.lr = 0x82340548;
	sub_82131D58(ctx, base);
	// bl 0x821fc2d8
	ctx.lr = 0x8234054C;
	sub_821FC2D8(ctx, base);
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
loc_82340560:
	// lis r11,-31823
	ctx.r11.s64 = -2085552128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r31,r11,-31440
	ctx.r31.s64 = ctx.r11.s64 + -31440;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// subfic r11,r11,50
	ctx.xer.ca = ctx.r11.u32 <= 50;
	ctx.r11.s64 = 50 - ctx.r11.s64;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// bl 0x8233ff20
	ctx.lr = 0x8234057C;
	sub_8233FF20(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82340590
	if (ctx.cr6.eq) goto loc_82340590;
	// subfic r11,r11,50
	ctx.xer.ca = ctx.r11.u32 <= 50;
	ctx.r11.s64 = 50 - ctx.r11.s64;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
loc_82340590:
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

PPC_WEAK_FUNC(sub_82340408) {
	__imp__sub_82340408(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823405A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823405A4) {
	__imp__sub_823405A4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823405A8) {
	PPC_FUNC_PROLOGUE();
	// b 0x8223e128
	sub_8223E128(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823405A8) {
	__imp__sub_823405A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823405AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823405AC) {
	__imp__sub_823405AC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823405B0) {
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
	// lis r11,-31823
	ctx.r11.s64 = -2085552128;
	// lis r10,0
	ctx.r10.s64 = 0;
	// addi r31,r11,-31440
	ctx.r31.s64 = ctx.r11.s64 + -31440;
	// ori r9,r10,57412
	ctx.r9.u64 = ctx.r10.u64 | 57412;
	// addis r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 65536;
	// addi r4,r11,-8120
	ctx.r4.s64 = ctx.r11.s64 + -8120;
	// lwzx r11,r31,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// rlwinm r5,r11,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x823de1f0
	ctx.lr = 0x823405E4;
	sub_823DE1F0(ctx, base);
	// lis r8,0
	ctx.r8.s64 = 0;
	// ori r7,r8,57412
	ctx.r7.u64 = ctx.r8.u64 | 57412;
	// lwzx r3,r31,r7
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
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

PPC_WEAK_FUNC(sub_823405B0) {
	__imp__sub_823405B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82340604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82340604) {
	__imp__sub_82340604(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82340608) {
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
	// lis r11,-31823
	ctx.r11.s64 = -2085552128;
	// lis r10,0
	ctx.r10.s64 = 0;
	// addi r31,r11,-31440
	ctx.r31.s64 = ctx.r11.s64 + -31440;
	// ori r9,r10,61512
	ctx.r9.u64 = ctx.r10.u64 | 61512;
	// addis r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 65536;
	// addi r4,r11,-4020
	ctx.r4.s64 = ctx.r11.s64 + -4020;
	// lwzx r11,r31,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// rlwinm r5,r11,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x823de1f0
	ctx.lr = 0x8234063C;
	sub_823DE1F0(ctx, base);
	// lis r8,0
	ctx.r8.s64 = 0;
	// ori r7,r8,61512
	ctx.r7.u64 = ctx.r8.u64 | 61512;
	// lwzx r3,r31,r7
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
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

PPC_WEAK_FUNC(sub_82340608) {
	__imp__sub_82340608(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8234065C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8234065C) {
	__imp__sub_8234065C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82340660) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x82340668;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// bl 0x82287e08
	ctx.lr = 0x82340678;
	sub_82287E08(ctx, base);
	// bl 0x821fc2b8
	ctx.lr = 0x8234067C;
	sub_821FC2B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82287ed0
	ctx.lr = 0x82340688;
	sub_82287ED0(ctx, base);
	// lis r11,-31822
	ctx.r11.s64 = -2085486592;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r10,r11,-29824
	ctx.r10.s64 = ctx.r11.s64 + -29824;
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// bl 0x82287e08
	ctx.lr = 0x8234069C;
	sub_82287E08(ctx, base);
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lis r25,-32190
	ctx.r25.s64 = -2109603840;
	// addi r29,r11,9240
	ctx.r29.s64 = ctx.r11.s64 + 9240;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r30,r29,16
	ctx.r30.s64 = ctx.r29.s64 + 16;
	// lis r28,-32166
	ctx.r28.s64 = -2108030976;
	// lwz r10,-32312(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + -32312);
loc_823406B8:
	// lbz r9,29088(r28)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r28.u32 + 29088);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x823406dc
	if (!ctx.cr6.eq) goto loc_823406DC;
	// subfc r11,r10,r31
	ctx.xer.ca = ctx.r31.u32 >= ctx.r10.u32;
	ctx.r11.s64 = ctx.r31.s64 - ctx.r10.s64;
	// eqv r9,r10,r31
	ctx.r9.u64 = ~(ctx.r10.u64 ^ ctx.r31.u64);
	// rlwinm r8,r9,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// addze r7,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r7.s64 = temp.s64;
	// clrlwi r11,r7,31
	ctx.r11.u64 = ctx.r7.u32 & 0x1;
	// b 0x823406ec
	goto loc_823406EC;
loc_823406DC:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cntlzw r9,r11
	ctx.r9.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r9,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
loc_823406EC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82340710
	if (ctx.cr6.eq) goto loc_82340710;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8233cab8
	ctx.lr = 0x82340700;
	sub_8233CAB8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82134c40
	ctx.lr = 0x8234070C;
	sub_82134C40(ctx, base);
	// lwz r10,-32312(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + -32312);
loc_82340710:
	// addi r30,r30,9780
	ctx.r30.s64 = ctx.r30.s64 + 9780;
	// addi r11,r29,19576
	ctx.r11.s64 = ctx.r29.s64 + 19576;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x823406b8
	if (ctx.cr6.lt) goto loc_823406B8;
	// lis r11,-31823
	ctx.r11.s64 = -2085552128;
	// lis r10,0
	ctx.r10.s64 = 0;
	// addi r27,r11,-31440
	ctx.r27.s64 = ctx.r11.s64 + -31440;
	// ori r9,r10,57412
	ctx.r9.u64 = ctx.r10.u64 | 57412;
	// lis r11,-31822
	ctx.r11.s64 = -2085486592;
	// addi r29,r11,696
	ctx.r29.s64 = ctx.r11.s64 + 696;
	// lwzx r31,r27,r9
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r9.u32);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x82340780
	if (!ctx.cr6.gt) goto loc_82340780;
	// addis r11,r27,1
	ctx.r11.s64 = ctx.r27.s64 + 65536;
	// addi r30,r11,-8122
	ctx.r30.s64 = ctx.r11.s64 + -8122;
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r10,r11,57292
	ctx.r10.u64 = ctx.r11.u64 | 57292;
	// lwzx r28,r27,r10
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r10.u32);
loc_8234075C:
	// lhzu r10,2(r30)
	ea = 2 + ctx.r30.u32;
	ctx.r10.u64 = PPC_LOAD_U16(ea);
	ctx.r30.u32 = ea;
	// li r5,172
	ctx.r5.s64 = 172;
	// mulli r11,r10,624
	ctx.r11.s64 = ctx.r10.s64 * 624;
	// mulli r10,r10,172
	ctx.r10.s64 = ctx.r10.s64 * 172;
	// add r4,r11,r28
	ctx.r4.u64 = ctx.r11.u64 + ctx.r28.u64;
	// add r3,r10,r29
	ctx.r3.u64 = ctx.r10.u64 + ctx.r29.u64;
	// bl 0x823de1f0
	ctx.lr = 0x82340778;
	sub_823DE1F0(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x8234075c
	if (!ctx.cr0.eq) goto loc_8234075C;
loc_82340780:
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r10,r11,61512
	ctx.r10.u64 = ctx.r11.u64 | 61512;
	// lwzx r10,r27,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r10.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x823407f0
	if (!ctx.cr6.gt) goto loc_823407F0;
	// addis r11,r27,1
	ctx.r11.s64 = ctx.r27.s64 + 65536;
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// addi r8,r11,-4022
	ctx.r8.s64 = ctx.r11.s64 + -4022;
	// lis r10,-31817
	ctx.r10.s64 = -2085158912;
	// lis r11,-31810
	ctx.r11.s64 = -2084700160;
	// addi r7,r10,25272
	ctx.r7.s64 = ctx.r10.s64 + 25272;
	// addi r6,r11,8536
	ctx.r6.s64 = ctx.r11.s64 + 8536;
loc_823407B0:
	// lhzu r11,2(r8)
	ea = 2 + ctx.r8.u32;
	ctx.r11.u64 = PPC_LOAD_U16(ea);
	ctx.r8.u32 = ea;
	// li r10,9
	ctx.r10.s64 = 9;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// rotlwi r11,r11,3
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 3);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r6
	ctx.r10.u64 = ctx.r11.u64 + ctx.r6.u64;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
loc_823407DC:
	// lwzu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x823407dc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823407DC;
	// addic. r5,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r5.s64 = ctx.r5.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne 0x823407b0
	if (!ctx.cr0.eq) goto loc_823407B0;
loc_823407F0:
	// bl 0x821fc2c8
	ctx.lr = 0x823407F4;
	sub_821FC2C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x821f4210
	ctx.lr = 0x82340800;
	sub_821F4210(ctx, base);
	// lwz r31,-32312(r25)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r25.u32 + -32312);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x82340838
	if (!ctx.cr6.gt) goto loc_82340838;
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r10,r11,57292
	ctx.r10.u64 = ctx.r11.u64 | 57292;
	// lwzx r30,r27,r10
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r10.u32);
loc_82340818:
	// li r5,172
	ctx.r5.s64 = 172;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823de1f0
	ctx.lr = 0x82340828;
	sub_823DE1F0(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,624
	ctx.r30.s64 = ctx.r30.s64 + 624;
	// addi r29,r29,172
	ctx.r29.s64 = ctx.r29.s64 + 172;
	// bne 0x82340818
	if (!ctx.cr0.eq) goto loc_82340818;
loc_82340838:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82340660) {
	__imp__sub_82340660(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82340840) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31822
	ctx.r11.s64 = -2085486592;
	// mulli r10,r3,172
	ctx.r10.s64 = ctx.r3.s64 * 172;
	// addi r11,r11,696
	ctx.r11.s64 = ctx.r11.s64 + 696;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82340840) {
	__imp__sub_82340840(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82340854) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82340854) {
	__imp__sub_82340854(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82340858) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r3,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// lis r10,-31817
	ctx.r10.s64 = -2085158912;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// addi r10,r10,25272
	ctx.r10.s64 = ctx.r10.s64 + 25272;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82340858) {
	__imp__sub_82340858(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82340874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82340874) {
	__imp__sub_82340874(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82340878) {
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
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lis r10,-31822
	ctx.r10.s64 = -2085486592;
	// mulli r9,r3,5764
	ctx.r9.s64 = ctx.r3.s64 * 5764;
	// lbz r8,29088(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 29088);
	// addi r10,r10,-29824
	ctx.r10.s64 = ctx.r10.s64 + -29824;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// add r31,r9,r10
	ctx.r31.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r11,r11,9240
	ctx.r11.s64 = ctx.r11.s64 + 9240;
	// bne cr6,0x823408d4
	if (!ctx.cr6.eq) goto loc_823408D4;
	// lis r10,-32190
	ctx.r10.s64 = -2109603840;
	// lwz r10,-32312(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -32312);
	// subfc r9,r10,r3
	ctx.xer.ca = ctx.r3.u32 >= ctx.r10.u32;
	ctx.r9.s64 = ctx.r3.s64 - ctx.r10.s64;
	// eqv r7,r10,r3
	ctx.r7.u64 = ~(ctx.r10.u64 ^ ctx.r3.u64);
	// rlwinm r6,r7,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x1;
	// addze r5,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r5.s64 = temp.s64;
	// clrlwi r10,r5,31
	ctx.r10.u64 = ctx.r5.u32 & 0x1;
	// b 0x823408ec
	goto loc_823408EC;
loc_823408D4:
	// mulli r10,r3,9780
	ctx.r10.s64 = ctx.r3.s64 * 9780;
	// addi r9,r11,16
	ctx.r9.s64 = ctx.r11.s64 + 16;
	// lwzx r10,r10,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// addi r7,r10,-2
	ctx.r7.s64 = ctx.r10.s64 + -2;
	// cntlzw r6,r7
	ctx.r6.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm r10,r6,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
loc_823408EC:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82340914
	if (ctx.cr6.eq) goto loc_82340914;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8234090c
	if (ctx.cr6.eq) goto loc_8234090C;
	// mulli r10,r3,9780
	ctx.r10.s64 = ctx.r3.s64 * 9780;
	// addi r9,r11,24
	ctx.r9.s64 = ctx.r11.s64 + 24;
	// lhzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
loc_8234090C:
	// addi r4,r31,4
	ctx.r4.s64 = ctx.r31.s64 + 4;
	// bl 0x82134e58
	ctx.lr = 0x82340914;
	sub_82134E58(ctx, base);
loc_82340914:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
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

PPC_WEAK_FUNC(sub_82340878) {
	__imp__sub_82340878(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82340938) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31823
	ctx.r11.s64 = -2085552128;
	// lis r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,-31440
	ctx.r9.s64 = ctx.r11.s64 + -31440;
	// ori r8,r10,57412
	ctx.r8.u64 = ctx.r10.u64 | 57412;
	// addis r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 65536;
	// lis r7,0
	ctx.r7.s64 = 0;
	// addi r6,r11,-8120
	ctx.r6.s64 = ctx.r11.s64 + -8120;
	// ori r5,r7,57412
	ctx.r5.u64 = ctx.r7.u64 | 57412;
	// lwzx r11,r9,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// lis r4,0
	ctx.r4.s64 = 0;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// ori r10,r4,57412
	ctx.r10.u64 = ctx.r4.u64 | 57412;
	// sthx r3,r11,r6
	PPC_STORE_U16(ctx.r11.u32 + ctx.r6.u32, ctx.r3.u16);
	// lwzx r11,r9,r5
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r5.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwx r11,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82340938) {
	__imp__sub_82340938(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8234097C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8234097C) {
	__imp__sub_8234097C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82340980) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31823
	ctx.r11.s64 = -2085552128;
	// lis r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,-31440
	ctx.r9.s64 = ctx.r11.s64 + -31440;
	// ori r8,r10,61512
	ctx.r8.u64 = ctx.r10.u64 | 61512;
	// addis r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 65536;
	// lis r7,0
	ctx.r7.s64 = 0;
	// addi r6,r11,-4020
	ctx.r6.s64 = ctx.r11.s64 + -4020;
	// ori r5,r7,61512
	ctx.r5.u64 = ctx.r7.u64 | 61512;
	// lwzx r11,r9,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// lis r4,0
	ctx.r4.s64 = 0;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// ori r10,r4,61512
	ctx.r10.u64 = ctx.r4.u64 | 61512;
	// sthx r3,r11,r6
	PPC_STORE_U16(ctx.r11.u32 + ctx.r6.u32, ctx.r3.u16);
	// lwzx r11,r9,r5
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r5.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwx r11,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82340980) {
	__imp__sub_82340980(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823409C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823409C4) {
	__imp__sub_823409C4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823409C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31823
	ctx.r11.s64 = -2085552128;
	// lis r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-31440
	ctx.r11.s64 = ctx.r11.s64 + -31440;
	// ori r8,r10,61512
	ctx.r8.u64 = ctx.r10.u64 | 61512;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stwx r10,r11,r8
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r10.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r9,-31810
	ctx.r9.s64 = -2084700160;
	// li r8,768
	ctx.r8.s64 = 768;
	// addi r7,r9,8536
	ctx.r7.s64 = ctx.r9.s64 + 8536;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r7,r7,33
	ctx.r7.s64 = ctx.r7.s64 + 33;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_82340A04:
	// lbz r8,0(r7)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// rlwinm r6,r8,0,27,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82340a40
	if (ctx.cr6.eq) goto loc_82340A40;
	// addis r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 65536;
	// lis r6,0
	ctx.r6.s64 = 0;
	// rlwinm r5,r10,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r4,r8,-4020
	ctx.r4.s64 = ctx.r8.s64 + -4020;
	// ori r3,r6,61512
	ctx.r3.u64 = ctx.r6.u64 | 61512;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r6,r10,61512
	ctx.r6.u64 = ctx.r10.u64 | 61512;
	// sthx r9,r5,r4
	PPC_STORE_U16(ctx.r5.u32 + ctx.r4.u32, ctx.r9.u16);
	// lwzx r10,r11,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwx r10,r11,r6
	PPC_STORE_U32(ctx.r11.u32 + ctx.r6.u32, ctx.r10.u32);
loc_82340A40:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r7,r7,36
	ctx.r7.s64 = ctx.r7.s64 + 36;
	// bdnz 0x82340a04
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82340A04;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823409C8) {
	__imp__sub_823409C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82340A50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82340A58;
	__savegprlr_29(ctx, base);
	// lis r11,-31823
	ctx.r11.s64 = -2085552128;
	// lis r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-31440
	ctx.r11.s64 = ctx.r11.s64 + -31440;
	// ori r9,r10,57412
	ctx.r9.u64 = ctx.r10.u64 | 57412;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stwx r8,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r8.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82340b74
	if (ctx.cr6.eq) goto loc_82340B74;
	// lis r9,0
	ctx.r9.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// ori r7,r9,57296
	ctx.r7.u64 = ctx.r9.u64 | 57296;
	// lwzx r6,r11,r7
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x82340b74
	if (!ctx.cr6.gt) goto loc_82340B74;
	// lis r9,-32165
	ctx.r9.s64 = -2107965440;
	// lis r3,-32166
	ctx.r3.s64 = -2108030976;
	// addi r9,r9,9240
	ctx.r9.s64 = ctx.r9.s64 + 9240;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r9,16
	ctx.r5.s64 = ctx.r9.s64 + 16;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lbz r3,29088(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 29088);
	// lwz r4,-32312(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + -32312);
loc_82340AB4:
	// lis r9,0
	ctx.r9.s64 = 0;
	// ori r9,r9,57292
	ctx.r9.u64 = ctx.r9.u64 | 57292;
	// lwzx r9,r11,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// add r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 + ctx.r9.u64;
	// lbz r31,172(r9)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r9.u32 + 172);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82340b60
	if (ctx.cr6.eq) goto loc_82340B60;
	// lbz r9,174(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 174);
	// clrlwi r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82340b60
	if (!ctx.cr6.eq) goto loc_82340B60;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bge cr6,0x82340b28
	if (!ctx.cr6.lt) goto loc_82340B28;
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82340b0c
	if (!ctx.cr6.eq) goto loc_82340B0C;
	// subfc r9,r4,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r4.u32;
	ctx.r9.s64 = ctx.r10.s64 - ctx.r4.s64;
	// eqv r31,r4,r10
	ctx.r31.u64 = ~(ctx.r4.u64 ^ ctx.r10.u64);
	// rlwinm r9,r31,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0x1;
	// addze r9,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r9.s64 = temp.s64;
	// clrlwi r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	// b 0x82340b1c
	goto loc_82340B1C;
loc_82340B0C:
	// lwz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// addi r9,r9,-2
	ctx.r9.s64 = ctx.r9.s64 + -2;
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
loc_82340B1C:
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82340b60
	if (!ctx.cr6.eq) goto loc_82340B60;
loc_82340B28:
	// addis r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 65536;
	// lis r6,0
	ctx.r6.s64 = 0;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r9,-8120
	ctx.r9.s64 = ctx.r9.s64 + -8120;
	// ori r6,r6,57412
	ctx.r6.u64 = ctx.r6.u64 | 57412;
	// lis r31,0
	ctx.r31.s64 = 0;
	// lis r30,0
	ctx.r30.s64 = 0;
	// ori r31,r31,57412
	ctx.r31.u64 = ctx.r31.u64 | 57412;
	// ori r30,r30,57296
	ctx.r30.u64 = ctx.r30.u64 | 57296;
	// sthx r10,r8,r9
	PPC_STORE_U16(ctx.r8.u32 + ctx.r9.u32, ctx.r10.u16);
	// lwzx r9,r11,r6
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// addi r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 1;
	// lwzx r6,r11,r30
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// stwx r8,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r8.u32);
loc_82340B60:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r7,r7,624
	ctx.r7.s64 = ctx.r7.s64 + 624;
	// addi r5,r5,9780
	ctx.r5.s64 = ctx.r5.s64 + 9780;
	// cmpw cr6,r10,r6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x82340ab4
	if (ctx.cr6.lt) goto loc_82340AB4;
loc_82340B74:
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82340A50) {
	__imp__sub_82340A50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82340B78) {
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
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82287e08
	ctx.lr = 0x82340B94;
	sub_82287E08(ctx, base);
	// lis r11,-31822
	ctx.r11.s64 = -2085486592;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,-29824
	ctx.r10.s64 = ctx.r11.s64 + -29824;
	// lwz r4,11564(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 11564);
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// stw r11,11564(r10)
	PPC_STORE_U32(ctx.r10.u32 + 11564, ctx.r11.u32);
	// bl 0x82131d00
	ctx.lr = 0x82340BB0;
	sub_82131D00(ctx, base);
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

PPC_WEAK_FUNC(sub_82340B78) {
	__imp__sub_82340B78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82340BC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82340BC4) {
	__imp__sub_82340BC4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82340BC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// ld r12,-8192(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8192);
	// ld r12,-12288(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -12288);
	// ld r12,-16384(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16384);
	// stwu r1,-16528(r1)
	ea = -16528 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82340a50
	ctx.lr = 0x82340BE8;
	sub_82340A50(ctx, base);
	// bl 0x823409c8
	ctx.lr = 0x82340BEC;
	sub_823409C8(ctx, base);
	// li r5,16384
	ctx.r5.s64 = 16384;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82287b40
	ctx.lr = 0x82340BFC;
	sub_82287B40(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82340660
	ctx.lr = 0x82340C04;
	sub_82340660(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82340c20
	if (ctx.cr6.eq) goto loc_82340C20;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,-18120
	ctx.r4.s64 = ctx.r11.s64 + -18120;
	// bl 0x822830e8
	ctx.lr = 0x82340C20;
	sub_822830E8(ctx, base);
loc_82340C20:
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82287e08
	ctx.lr = 0x82340C2C;
	sub_82287E08(ctx, base);
	// lis r11,-31822
	ctx.r11.s64 = -2085486592;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r10,r11,-29824
	ctx.r10.s64 = ctx.r11.s64 + -29824;
	// lwz r4,11564(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 11564);
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// stw r11,11564(r10)
	PPC_STORE_U32(ctx.r10.u32 + 11564, ctx.r11.u32);
	// bl 0x82131d00
	ctx.lr = 0x82340C48;
	sub_82131D00(ctx, base);
	// addi r1,r1,16528
	ctx.r1.s64 = ctx.r1.s64 + 16528;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82340BC8) {
	__imp__sub_82340BC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82340C58) {
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
	// bl 0x821fe528
	ctx.lr = 0x82340C70;
	sub_821FE528(ctx, base);
	// lis r30,-32190
	ctx.r30.s64 = -2109603840;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r11,-32312(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -32312);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82340c9c
	if (!ctx.cr6.gt) goto loc_82340C9C;
loc_82340C84:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82340878
	ctx.lr = 0x82340C8C;
	sub_82340878(ctx, base);
	// lwz r11,-32312(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -32312);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82340c84
	if (ctx.cr6.lt) goto loc_82340C84;
loc_82340C9C:
	// bl 0x82340bc8
	ctx.lr = 0x82340CA0;
	sub_82340BC8(ctx, base);
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

PPC_WEAK_FUNC(sub_82340C58) {
	__imp__sub_82340C58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82340CB8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82340CB8) {
	__imp__sub_82340CB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82340CBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82340CBC) {
	__imp__sub_82340CBC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82340CC0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82340CC0) {
	__imp__sub_82340CC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82340CC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82340CC4) {
	__imp__sub_82340CC4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82340CC8) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,173(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 173);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x82340ce8
	if (ctx.cr6.lt) goto loc_82340CE8;
	// lhz r3,132(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 132);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// beq cr6,0x82340ce4
	if (ctx.cr6.eq) goto loc_82340CE4;
	// b 0x82272f80
	sub_82272F80(ctx, base);
	return;
loc_82340CE4:
	// b 0x822761c0
	sub_822761C0(ctx, base);
	return;
loc_82340CE8:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82340CC8) {
	__imp__sub_82340CC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82340CF0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r10,26552
	ctx.r8.s64 = ctx.r10.s64 + 26552;
	// lis r9,-31823
	ctx.r9.s64 = -2085552128;
	// stb r11,172(r3)
	PPC_STORE_U8(ctx.r3.u32 + 172, ctx.r11.u8);
	// subf r6,r8,r3
	ctx.r6.s64 = ctx.r3.s64 - ctx.r8.s64;
	// li r7,624
	ctx.r7.s64 = 624;
	// addi r10,r9,-31440
	ctx.r10.s64 = ctx.r9.s64 + -31440;
	// divw r11,r6,r7
	ctx.r11.s32 = ctx.r6.s32 / ctx.r7.s32;
	// addi r9,r10,8140
	ctx.r9.s64 = ctx.r10.s64 + 8140;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r5,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// b 0x8227b8e0
	sub_8227B8E0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82340CF0) {
	__imp__sub_82340CF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82340D2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82340D2C) {
	__imp__sub_82340D2C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82340D30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x82340D38;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32052
	ctx.r11.s64 = -2100559872;
	// lbz r8,173(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 173);
	// li r9,624
	ctx.r9.s64 = 624;
	// addi r7,r11,26552
	ctx.r7.s64 = ctx.r11.s64 + 26552;
	// lis r6,-31823
	ctx.r6.s64 = -2085552128;
	// subf r5,r7,r3
	ctx.r5.s64 = ctx.r3.s64 - ctx.r7.s64;
	// addi r10,r6,-31440
	ctx.r10.s64 = ctx.r6.s64 + -31440;
	// divw r11,r5,r9
	ctx.r11.s32 = ctx.r5.s32 / ctx.r9.s32;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r11,r10,8140
	ctx.r11.s64 = ctx.r10.s64 + 8140;
	// rlwinm r10,r3,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// cmplwi cr6,r8,4
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 4, ctx.xer);
	// lfs f13,12168(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12168);
	ctx.f13.f64 = double(temp.f32);
	// add r27,r10,r11
	ctx.r27.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bne cr6,0x82340d94
	if (!ctx.cr6.eq) goto loc_82340D94;
	// lis r11,255
	ctx.r11.s64 = 16711680;
	// ori r10,r11,65535
	ctx.r10.u64 = ctx.r11.u64 | 65535;
	// stw r10,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r10.u32);
	// b 0x82340e74
	goto loc_82340E74;
loc_82340D94:
	// lis r12,512
	ctx.r12.s64 = 33554432;
	// lwz r11,204(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// ori r12,r12,49153
	ctx.r12.u64 = ctx.r12.u64 | 49153;
	// and r10,r11,r12
	ctx.r10.u64 = ctx.r11.u64 & ctx.r12.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82340e6c
	if (ctx.cr6.eq) goto loc_82340E6C;
	// lfs f0,192(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f12,f0
	ctx.f12.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f12,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f12.u64);
	// lwz r9,92(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bge cr6,0x82340dcc
	if (!ctx.cr6.lt) goto loc_82340DCC;
	// li r9,1
	ctx.r9.s64 = 1;
	// b 0x82340dd8
	goto loc_82340DD8;
loc_82340DCC:
	// cmpwi cr6,r9,255
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 255, ctx.xer);
	// ble cr6,0x82340dd8
	if (!ctx.cr6.gt) goto loc_82340DD8;
	// li r9,255
	ctx.r9.s64 = 255;
loc_82340DD8:
	// lfs f0,188(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r31,180
	ctx.r11.s64 = ctx.r31.s64 + 180;
	// lfs f12,200(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f0,f12
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// fadds f10,f11,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 + ctx.f13.f64));
	// fctiwz f9,f10
	ctx.f9.s64 = (ctx.f10.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f9.u64);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bge cr6,0x82340e08
	if (!ctx.cr6.lt) goto loc_82340E08;
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x82340e14
	goto loc_82340E14;
loc_82340E08:
	// cmpwi cr6,r10,255
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 255, ctx.xer);
	// ble cr6,0x82340e14
	if (!ctx.cr6.gt) goto loc_82340E14;
	// li r10,255
	ctx.r10.s64 = 255;
loc_82340E14:
	// lfs f0,20(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f0,f12
	ctx.f11.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// lfs f0,6044(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 6044);
	ctx.f0.f64 = double(temp.f32);
	// fadds f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// fctiwz f9,f10
	ctx.f9.s64 = (ctx.f10.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f9.u64);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bge cr6,0x82340e48
	if (!ctx.cr6.lt) goto loc_82340E48;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82340e54
	goto loc_82340E54;
loc_82340E48:
	// cmpwi cr6,r11,255
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 255, ctx.xer);
	// ble cr6,0x82340e54
	if (!ctx.cr6.gt) goto loc_82340E54;
	// li r11,255
	ctx.r11.s64 = 255;
loc_82340E54:
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 | ctx.r10.u64;
	// rlwinm r7,r10,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r6,r7,r9
	ctx.r6.u64 = ctx.r7.u64 | ctx.r9.u64;
	// stw r6,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r6.u32);
	// b 0x82340e74
	goto loc_82340E74;
loc_82340E6C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r11.u32);
loc_82340E74:
	// addi r29,r31,232
	ctx.r29.s64 = ctx.r31.s64 + 232;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82340ed0
	if (!ctx.cr6.eq) goto loc_82340ED0;
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r31,180
	ctx.r11.s64 = ctx.r31.s64 + 180;
	// lfs f12,180(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f0,f12
	ctx.f11.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// stfs f11,208(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 208, temp.u32);
	// lfs f10,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,184(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	ctx.f9.f64 = double(temp.f32);
	// fadds f8,f9,f10
	ctx.f8.f64 = double(float(ctx.f9.f64 + ctx.f10.f64));
	// stfs f8,212(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 212, temp.u32);
	// lfs f7,188(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// fadds f5,f7,f6
	ctx.f5.f64 = double(float(ctx.f7.f64 + ctx.f6.f64));
	// stfs f5,216(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 216, temp.u32);
	// lfs f4,192(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,220(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 220, temp.u32);
	// lfs f3,196(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,224(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 224, temp.u32);
	// lfs f2,200(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,228(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 228, temp.u32);
	// b 0x82341014
	goto loc_82341014;
loc_82340ED0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,244(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bne cr6,0x82340fb0
	if (!ctx.cr6.eq) goto loc_82340FB0;
	// lfs f12,252(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bne cr6,0x82340fb0
	if (!ctx.cr6.eq) goto loc_82340FB0;
	// lfs f12,248(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	ctx.f12.f64 = double(temp.f32);
	// addi r30,r31,208
	ctx.r30.s64 = ctx.r31.s64 + 208;
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// beq cr6,0x82340f60
	if (ctx.cr6.eq) goto loc_82340F60;
	// lfs f0,180(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	ctx.f0.f64 = double(temp.f32);
	// fabs f12,f0
	ctx.f12.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// lfs f11,192(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,184(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	ctx.f10.f64 = double(temp.f32);
	// fabs f9,f10
	ctx.f9.u64 = ctx.f10.u64 & ~0x8000000000000000;
	// lfs f8,196(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,188(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,200(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	ctx.f5.f64 = double(temp.f32);
	// fadds f4,f7,f6
	ctx.f4.f64 = double(float(ctx.f7.f64 + ctx.f6.f64));
	// lfs f3,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,208(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 208, temp.u32);
	// stfs f3,212(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 212, temp.u32);
	// fadds f1,f12,f11
	ctx.f1.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// stfs f4,216(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 216, temp.u32);
	// stfs f5,228(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 228, temp.u32);
	// fadds f0,f9,f8
	ctx.f0.f64 = double(float(ctx.f9.f64 + ctx.f8.f64));
	// fmuls f12,f1,f1
	ctx.f12.f64 = double(float(ctx.f1.f64 * ctx.f1.f64));
	// fmadds f11,f0,f0,f12
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f12.f64));
	// fsqrts f10,f11
	ctx.f10.f64 = double(float(sqrt(ctx.f11.f64)));
	// stfs f10,220(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 220, temp.u32);
	// stfs f10,224(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 224, temp.u32);
	// b 0x82341018
	goto loc_82341018;
loc_82340F60:
	// lfs f0,180(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r31,180
	ctx.r11.s64 = ctx.r31.s64 + 180;
	// lfs f12,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f0,f12
	ctx.f11.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// stfs f11,208(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 208, temp.u32);
	// lfs f9,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f10,184(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	ctx.f10.f64 = double(temp.f32);
	// fadds f8,f10,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 + ctx.f9.f64));
	// stfs f8,212(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 212, temp.u32);
	// lfs f7,188(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// fadds f5,f7,f6
	ctx.f5.f64 = double(float(ctx.f7.f64 + ctx.f6.f64));
	// stfs f5,216(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 216, temp.u32);
	// lfs f4,192(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,220(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 220, temp.u32);
	// lfs f3,196(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,224(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 224, temp.u32);
	// lfs f2,200(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,228(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 228, temp.u32);
	// b 0x82341018
	goto loc_82341018;
loc_82340FB0:
	// lfs f0,184(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	ctx.f0.f64 = double(temp.f32);
	// fabs f12,f0
	ctx.f12.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// lfs f11,196(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,188(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	ctx.f10.f64 = double(temp.f32);
	// fabs f9,f10
	ctx.f9.u64 = ctx.f10.u64 & ~0x8000000000000000;
	// lfs f8,180(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,200(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	ctx.f7.f64 = double(temp.f32);
	// fabs f6,f8
	ctx.f6.u64 = ctx.f8.u64 & ~0x8000000000000000;
	// lfs f5,192(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,208(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 208, temp.u32);
	// fadds f2,f12,f11
	ctx.f2.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// fadds f0,f9,f7
	ctx.f0.f64 = double(float(ctx.f9.f64 + ctx.f7.f64));
	// fadds f11,f6,f5
	ctx.f11.f64 = double(float(ctx.f6.f64 + ctx.f5.f64));
	// fmuls f12,f2,f2
	ctx.f12.f64 = double(float(ctx.f2.f64 * ctx.f2.f64));
	// lfs f3,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,212(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 212, temp.u32);
	// lfs f1,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,216(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 216, temp.u32);
	// fmadds f10,f0,f0,f12
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f12.f64));
	// fmadds f9,f11,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f10.f64));
	// fsqrts f8,f9
	ctx.f8.f64 = double(float(sqrt(ctx.f9.f64)));
	// stfs f8,220(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 220, temp.u32);
	// stfs f8,224(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 224, temp.u32);
	// stfs f8,228(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 228, temp.u32);
loc_82341014:
	// addi r30,r31,208
	ctx.r30.s64 = ctx.r31.s64 + 208;
loc_82341018:
	// lfs f0,12(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f12,16(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f10,20(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f12,f13
	ctx.f9.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// fadds f8,f10,f13
	ctx.f8.f64 = double(float(ctx.f10.f64 + ctx.f13.f64));
	// stfs f11,12(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// stfs f9,16(r30)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// stfs f8,20(r30)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// stb r11,172(r31)
	PPC_STORE_U8(ctx.r31.u32 + 172, ctx.r11.u8);
	// lwz r10,204(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82341060
	if (!ctx.cr6.eq) goto loc_82341060;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8227b8e0
	ctx.lr = 0x82341058;
	sub_8227B8E0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_82341060:
	// lbz r11,173(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 173);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x82341090
	if (ctx.cr6.lt) goto loc_82341090;
	// lhz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 132);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// beq cr6,0x82341084
	if (ctx.cr6.eq) goto loc_82341084;
	// bl 0x82272f80
	ctx.lr = 0x8234107C;
	sub_82272F80(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// b 0x82341094
	goto loc_82341094;
loc_82341084:
	// bl 0x822761c0
	ctx.lr = 0x82341088;
	sub_822761C0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// b 0x82341094
	goto loc_82341094;
loc_82341090:
	// li r28,-1
	ctx.r28.s64 = -1;
loc_82341094:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822846c0
	ctx.lr = 0x8234109C;
	sub_822846C0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82341128
	if (ctx.cr6.eq) goto loc_82341128;
	// lbz r11,174(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 174);
	// rlwinm r10,r11,0,29,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x6;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82341128
	if (ctx.cr6.eq) goto loc_82341128;
	// rlwinm r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823410f8
	if (ctx.cr6.eq) goto loc_823410F8;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lfs f13,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// addi r10,r11,-18104
	ctx.r10.s64 = ctx.r11.s64 + -18104;
	// lfs f0,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfs f11,80(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fsubs f10,f12,f0
	ctx.f10.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// stfs f10,84(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fadds f9,f13,f0
	ctx.f9.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f9,88(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fadds f8,f12,f0
	ctx.f8.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// stfs f8,92(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// b 0x82341164
	goto loc_82341164;
loc_823410F8:
	// bl 0x822ef018
	ctx.lr = 0x823410FC;
	sub_822EF018(ctx, base);
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f1
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f1.f64));
	// fsubs f11,f13,f1
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f1.f64));
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fadds f10,f0,f1
	ctx.f10.f64 = double(float(ctx.f0.f64 + ctx.f1.f64));
	// stfs f11,84(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fadds f9,f13,f1
	ctx.f9.f64 = double(float(ctx.f13.f64 + ctx.f1.f64));
	// stfs f10,88(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f9,92(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// b 0x82341164
	goto loc_82341164;
loc_82341128:
	// lfs f12,12(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// addi r11,r30,12
	ctx.r11.s64 = ctx.r30.s64 + 12;
	// lfs f11,16(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// fmr f9,f12
	ctx.f9.f64 = ctx.f12.f64;
	// lfs f0,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmr f7,f11
	ctx.f7.f64 = ctx.f11.f64;
	// lfs f13,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f10,f0,f12
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// fsubs f8,f13,f11
	ctx.f8.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// stfs f10,80(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fadds f6,f12,f0
	ctx.f6.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// stfs f8,84(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fadds f5,f11,f13
	ctx.f5.f64 = double(float(ctx.f11.f64 + ctx.f13.f64));
	// stfs f6,88(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f5,92(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
loc_82341164:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8227bb68
	ctx.lr = 0x82341178;
	sub_8227BB68(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82340D30) {
	__imp__sub_82340D30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82341180) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82341188;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31823
	ctx.r11.s64 = -2085552128;
	// lwz r8,152(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 152);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// addi r11,r11,-31440
	ctx.r11.s64 = ctx.r11.s64 + -31440;
	// lis r7,0
	ctx.r7.s64 = 0;
	// addi r5,r11,8140
	ctx.r5.s64 = ctx.r11.s64 + 8140;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r6,24
	ctx.r6.s64 = 24;
	// ori r3,r7,57292
	ctx.r3.u64 = ctx.r7.u64 | 57292;
	// subf r10,r5,r4
	ctx.r10.s64 = ctx.r4.s64 - ctx.r5.s64;
	// divw r10,r10,r6
	ctx.r10.s32 = ctx.r10.s32 / ctx.r6.s32;
	// lwzx r11,r11,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// mulli r9,r10,624
	ctx.r9.s64 = ctx.r10.s64 * 624;
	// add r30,r9,r11
	ctx.r30.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r9,204(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 204);
	// and r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 & ctx.r9.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82341338
	if (ctx.cr6.eq) goto loc_82341338;
	// lwz r9,144(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// cmpwi cr6,r9,2047
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2047, ctx.xer);
	// beq cr6,0x82341210
	if (ctx.cr6.eq) goto loc_82341210;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x82341338
	if (ctx.cr6.eq) goto loc_82341338;
	// lhz r11,256(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 256);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82341210
	if (ctx.cr6.eq) goto loc_82341210;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82341338
	if (ctx.cr6.eq) goto loc_82341338;
	// lwz r10,148(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82341338
	if (ctx.cr6.eq) goto loc_82341338;
loc_82341210:
	// lfs f0,208(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 208);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f13,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// fadds f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f11,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f10,212(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 212);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f10,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 + ctx.f11.f64));
	// lfs f8,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// stfs f9,84(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f7,216(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 216);
	ctx.f7.f64 = double(temp.f32);
	// fadds f6,f7,f8
	ctx.f6.f64 = double(float(ctx.f7.f64 + ctx.f8.f64));
	// lfs f5,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f5.f64 = double(temp.f32);
	// stfs f6,88(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lfs f4,220(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	ctx.f4.f64 = double(temp.f32);
	// fadds f3,f4,f5
	ctx.f3.f64 = double(float(ctx.f4.f64 + ctx.f5.f64));
	// lfs f2,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f2.f64 = double(temp.f32);
	// stfs f3,92(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lfs f1,224(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 224);
	ctx.f1.f64 = double(temp.f32);
	// fadds f0,f1,f2
	ctx.f0.f64 = double(float(ctx.f1.f64 + ctx.f2.f64));
	// lfs f13,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lfs f12,228(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 228);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// stfs f11,100(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lfs f1,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82279ee0
	ctx.lr = 0x82341280;
	sub_82279EE0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82341338
	if (!ctx.cr6.eq) goto loc_82341338;
	// lbz r11,173(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 173);
	// lfs f31,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f31.f64 = double(temp.f32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823412c8
	if (ctx.cr6.eq) goto loc_823412C8;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bne cr6,0x82341300
	if (!ctx.cr6.eq) goto loc_82341300;
	// addi r10,r30,244
	ctx.r10.s64 = ctx.r30.s64 + 244;
	// lwz r8,152(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// addi r9,r30,232
	ctx.r9.s64 = ctx.r30.s64 + 232;
	// lhz r7,132(r30)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r30.u32 + 132);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r31,128
	ctx.r5.s64 = ctx.r31.s64 + 128;
	// addi r4,r31,112
	ctx.r4.s64 = ctx.r31.s64 + 112;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822785b0
	ctx.lr = 0x823412C4;
	sub_822785B0(ctx, base);
	// b 0x82341300
	goto loc_82341300;
loc_823412C8:
	// lwz r8,204(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 204);
	// lwz r11,152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// and r10,r8,r11
	ctx.r10.u64 = ctx.r8.u64 & ctx.r11.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82341300
	if (ctx.cr6.eq) goto loc_82341300;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r9,r30,232
	ctx.r9.s64 = ctx.r30.s64 + 232;
	// addi r10,r11,-5928
	ctx.r10.s64 = ctx.r11.s64 + -5928;
	// addi r7,r30,180
	ctx.r7.s64 = ctx.r30.s64 + 180;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r31,128
	ctx.r5.s64 = ctx.r31.s64 + 128;
	// addi r4,r31,112
	ctx.r4.s64 = ctx.r31.s64 + 112;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822786b8
	ctx.lr = 0x82341300;
	sub_822786B8(ctx, base);
loc_82341300:
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x82341338
	if (!ctx.cr6.lt) goto loc_82341338;
	// lhz r10,126(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 126);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,28(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28, ctx.r11.u32);
	// sth r10,32(r29)
	PPC_STORE_U16(ctx.r29.u32 + 32, ctx.r10.u16);
	// lwz r8,12(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// rlwinm r7,r8,0,2,2
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x20000000;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x82341338
	if (ctx.cr6.eq) goto loc_82341338;
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// ori r10,r11,4096
	ctx.r10.u64 = ctx.r11.u64 | 4096;
	// stw r10,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r10.u32);
loc_82341338:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82341180) {
	__imp__sub_82341180(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82341344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82341344) {
	__imp__sub_82341344(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82341348) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8234135c
	if (!ctx.cr6.eq) goto loc_8234135C;
loc_82341354:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8234135C:
	// lbz r11,174(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 174);
	// rlwinm r10,r11,0,29,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x6;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82341354
	if (ctx.cr6.eq) goto loc_82341354;
	// rlwinm r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82341384
	if (ctx.cr6.eq) goto loc_82341384;
	// lwz r11,108(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82341354
	if (ctx.cr6.eq) goto loc_82341354;
loc_82341384:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// b 0x822846c0
	sub_822846C0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82341348) {
	__imp__sub_82341348(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8234138C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8234138C) {
	__imp__sub_8234138C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82341390) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823413a4
	if (!ctx.cr6.eq) goto loc_823413A4;
loc_8234139C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_823413A4:
	// lbz r11,174(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 174);
	// rlwinm r10,r11,0,29,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x6;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8234139c
	if (ctx.cr6.eq) goto loc_8234139C;
	// rlwinm r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823413cc
	if (ctx.cr6.eq) goto loc_823413CC;
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8234139c
	if (ctx.cr6.eq) goto loc_8234139C;
loc_823413CC:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// b 0x822846c0
	sub_822846C0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82341390) {
	__imp__sub_82341390(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823413D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823413D4) {
	__imp__sub_823413D4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823413D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x823413E0;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31823
	ctx.r11.s64 = -2085552128;
	// lwz r8,100(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// addi r11,r11,-31440
	ctx.r11.s64 = ctx.r11.s64 + -31440;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// addi r5,r11,8140
	ctx.r5.s64 = ctx.r11.s64 + 8140;
	// lis r7,0
	ctx.r7.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r6,24
	ctx.r6.s64 = 24;
	// ori r4,r7,57292
	ctx.r4.u64 = ctx.r7.u64 | 57292;
	// subf r3,r5,r27
	ctx.r3.s64 = ctx.r27.s64 - ctx.r5.s64;
	// divw r9,r3,r6
	ctx.r9.s32 = ctx.r3.s32 / ctx.r6.s32;
	// lwzx r11,r11,r4
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	// mulli r10,r9,624
	ctx.r10.s64 = ctx.r9.s64 * 624;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,204(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// and r10,r8,r11
	ctx.r10.u64 = ctx.r8.u64 & ctx.r11.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82341830
	if (ctx.cr6.eq) goto loc_82341830;
	// lwz r11,96(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823414c0
	if (ctx.cr6.eq) goto loc_823414C0;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r8,2047
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 2047, ctx.xer);
	// beq cr6,0x823414c0
	if (ctx.cr6.eq) goto loc_823414C0;
	// lbz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82341460
	if (ctx.cr6.eq) goto loc_82341460;
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// beq cr6,0x82341830
	if (ctx.cr6.eq) goto loc_82341830;
loc_82341460:
	// lbz r10,9(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 9);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82341478
	if (ctx.cr6.eq) goto loc_82341478;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x82341830
	if (ctx.cr6.eq) goto loc_82341830;
loc_82341478:
	// lhz r10,256(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 256);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823414c0
	if (ctx.cr6.eq) goto loc_823414C0;
	// lbz r7,10(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 10);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x823414a8
	if (ctx.cr6.eq) goto loc_823414A8;
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r6,r10,-1
	ctx.r6.s64 = ctx.r10.s64 + -1;
	// cmplw cr6,r6,r7
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x823414a8
	if (!ctx.cr6.eq) goto loc_823414A8;
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x82341830
	if (!ctx.cr6.eq) goto loc_82341830;
loc_823414A8:
	// lbz r11,11(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 11);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823414c0
	if (ctx.cr6.eq) goto loc_823414C0;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82341830
	if (ctx.cr6.eq) goto loc_82341830;
loc_823414C0:
	// lwz r11,104(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82341730
	if (ctx.cr6.eq) goto loc_82341730;
	// lbz r11,174(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 174);
	// rlwinm r10,r11,0,29,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x6;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82341730
	if (ctx.cr6.eq) goto loc_82341730;
	// rlwinm r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823414f4
	if (ctx.cr6.eq) goto loc_823414F4;
	// lwz r11,108(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82341730
	if (ctx.cr6.eq) goto loc_82341730;
loc_823414F4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822846c0
	ctx.lr = 0x823414FC;
	sub_822846C0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82341730
	if (ctx.cr6.eq) goto loc_82341730;
	// lbz r11,174(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 174);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8234156c
	if (ctx.cr6.eq) goto loc_8234156C;
	// lwz r4,100(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// bl 0x822efb88
	ctx.lr = 0x82341520;
	sub_822EFB88(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82341830
	if (ctx.cr6.eq) goto loc_82341830;
	// lfs f0,232(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stfs f0,148(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// lfs f13,236(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,152(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// lfs f12,240(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,156(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// bl 0x822ef018
	ctx.lr = 0x82341548;
	sub_822EF018(ctx, base);
	// lfs f11,148(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,156(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	ctx.f9.f64 = double(temp.f32);
	// stfs f11,80(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f10,84(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f1,92(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f1,96(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f1,100(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// b 0x823415b0
	goto loc_823415B0;
loc_8234156C:
	// lfs f13,232(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// stfs f13,148(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// lfs f12,236(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	ctx.f12.f64 = double(temp.f32);
	// addi r10,r11,-18104
	ctx.r10.s64 = ctx.r11.s64 + -18104;
	// stfs f12,152(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// lfs f9,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// lfs f11,240(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	ctx.f11.f64 = double(temp.f32);
	// fadds f9,f11,f9
	ctx.f9.f64 = double(float(ctx.f11.f64 + ctx.f9.f64));
	// lfs f0,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f10,20(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f10.f64 = double(temp.f32);
	// stfs f11,156(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f10,100(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
loc_823415B0:
	// stfs f9,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f1,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82279ee0
	ctx.lr = 0x823415C4;
	sub_82279EE0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82341830
	if (!ctx.cr6.eq) goto loc_82341830;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r31,244
	ctx.r3.s64 = ctx.r31.s64 + 244;
	// bl 0x822da650
	ctx.lr = 0x823415D8;
	sub_822DA650(ctx, base);
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r30,64
	ctx.r3.s64 = ctx.r30.s64 + 64;
	// bl 0x822d6888
	ctx.lr = 0x823415E8;
	sub_822D6888(ctx, base);
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r30,80
	ctx.r3.s64 = ctx.r30.s64 + 80;
	// bl 0x822d6888
	ctx.lr = 0x823415F8;
	sub_822D6888(ctx, base);
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,160(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// lbz r11,174(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 174);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// beq cr6,0x82341648
	if (ctx.cr6.eq) goto loc_82341648;
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// lwz r4,100(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// bl 0x822efaf8
	ctx.lr = 0x82341620;
	sub_822EFAF8(ctx, base);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222ec90
	ctx.lr = 0x8234162C;
	sub_8222EC90(ctx, base);
	// addi r7,r1,160
	ctx.r7.s64 = ctx.r1.s64 + 160;
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// lwz r6,100(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822ef9f0
	ctx.lr = 0x82341644;
	sub_822EF9F0(ctx, base);
	// b 0x82341674
	goto loc_82341674;
loc_82341648:
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// bl 0x822ef900
	ctx.lr = 0x82341650;
	sub_822EF900(ctx, base);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222ec90
	ctx.lr = 0x8234165C;
	sub_8222EC90(ctx, base);
	// addi r7,r1,160
	ctx.r7.s64 = ctx.r1.s64 + 160;
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// lwz r6,108(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822ef208
	ctx.lr = 0x82341674;
	sub_822EF208(ctx, base);
loc_82341674:
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,160(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f11,f0
	ctx.cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// bge cr6,0x82341830
	if (!ctx.cr6.lt) goto loc_82341830;
	// lfs f0,172(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	ctx.f0.f64 = double(temp.f32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfs f12,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f12.f64 = double(temp.f32);
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lfs f9,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f12,f0
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f7,f9,f0
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// lfs f13,124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f10,f13,f0
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f13,176(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	ctx.f13.f64 = double(temp.f32);
	// lfs f5,140(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	ctx.f5.f64 = double(temp.f32);
	// lhz r10,180(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 180);
	// lfs f4,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f4.f64 = double(temp.f32);
	// lhz r9,182(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 182);
	// lfs f6,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f6.f64 = double(temp.f32);
	// lhz r8,184(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 184);
	// lfs f12,168(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r11.u32);
	// lfs f1,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f1.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f3,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f3.f64 = double(temp.f32);
	// sth r10,34(r29)
	PPC_STORE_U16(ctx.r29.u32 + 34, ctx.r10.u16);
	// lfs f2,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f2.f64 = double(temp.f32);
	// sth r9,36(r29)
	PPC_STORE_U16(ctx.r29.u32 + 36, ctx.r9.u16);
	// fmadds f9,f5,f13,f8
	ctx.f9.f64 = double(float(ctx.f5.f64 * ctx.f13.f64 + ctx.f8.f64));
	// lfs f0,7036(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 7036);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f8,f4,f13,f7
	ctx.f8.f64 = double(float(ctx.f4.f64 * ctx.f13.f64 + ctx.f7.f64));
	// stfs f11,0(r29)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// fmadds f10,f6,f13,f10
	ctx.f10.f64 = double(float(ctx.f6.f64 * ctx.f13.f64 + ctx.f10.f64));
	// sth r8,38(r29)
	PPC_STORE_U16(ctx.r29.u32 + 38, ctx.r8.u16);
	// li r10,0
	ctx.r10.s64 = 0;
	// fmadds f6,f2,f12,f9
	ctx.f6.f64 = double(float(ctx.f2.f64 * ctx.f12.f64 + ctx.f9.f64));
	// stfs f6,8(r29)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r29.u32 + 8, temp.u32);
	// fmadds f5,f1,f12,f8
	ctx.f5.f64 = double(float(ctx.f1.f64 * ctx.f12.f64 + ctx.f8.f64));
	// stfs f5,12(r29)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r29.u32 + 12, temp.u32);
	// fmadds f7,f3,f12,f10
	ctx.f7.f64 = double(float(ctx.f3.f64 * ctx.f12.f64 + ctx.f10.f64));
	// stfs f7,4(r29)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r29.u32 + 4, temp.u32);
	// fmr f4,f5
	ctx.f4.f64 = ctx.f5.f64;
	// fcmpu cr6,f5,f0
	ctx.cr6.compare(ctx.f5.f64, ctx.f0.f64);
	// bge cr6,0x82341728
	if (!ctx.cr6.lt) goto loc_82341728;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82341728:
	// stb r11,42(r29)
	PPC_STORE_U8(ctx.r29.u32 + 42, ctx.r11.u8);
	// b 0x823417f8
	goto loc_823417F8;
loc_82341730:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r10,100(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// and r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 & ctx.r10.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82341830
	if (ctx.cr6.eq) goto loc_82341830;
	// addi r4,r31,208
	ctx.r4.s64 = ctx.r31.s64 + 208;
	// lfs f1,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82279ee0
	ctx.lr = 0x82341754;
	sub_82279EE0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82341830
	if (!ctx.cr6.eq) goto loc_82341830;
	// lbz r11,173(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 173);
	// lfs f31,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f31.f64 = double(temp.f32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823417a0
	if (ctx.cr6.eq) goto loc_823417A0;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bne cr6,0x823417dc
	if (!ctx.cr6.eq) goto loc_823417DC;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r8,100(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// addi r10,r31,244
	ctx.r10.s64 = ctx.r31.s64 + 244;
	// lhz r7,132(r31)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r31.u32 + 132);
	// addi r6,r11,-9672
	ctx.r6.s64 = ctx.r11.s64 + -9672;
	// addi r9,r31,232
	ctx.r9.s64 = ctx.r31.s64 + 232;
	// addi r5,r30,80
	ctx.r5.s64 = ctx.r30.s64 + 80;
	// addi r4,r30,64
	ctx.r4.s64 = ctx.r30.s64 + 64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822785b0
	ctx.lr = 0x8234179C;
	sub_822785B0(ctx, base);
	// b 0x823417dc
	goto loc_823417DC;
loc_823417A0:
	// lwz r8,204(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// lwz r11,100(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// and r10,r8,r11
	ctx.r10.u64 = ctx.r8.u64 & ctx.r11.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x823417dc
	if (ctx.cr6.eq) goto loc_823417DC;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r6,r9,-9672
	ctx.r6.s64 = ctx.r9.s64 + -9672;
	// addi r10,r11,-5928
	ctx.r10.s64 = ctx.r11.s64 + -5928;
	// addi r9,r31,232
	ctx.r9.s64 = ctx.r31.s64 + 232;
	// addi r7,r31,180
	ctx.r7.s64 = ctx.r31.s64 + 180;
	// addi r5,r30,80
	ctx.r5.s64 = ctx.r30.s64 + 80;
	// addi r4,r30,64
	ctx.r4.s64 = ctx.r30.s64 + 64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822786b8
	ctx.lr = 0x823417DC;
	sub_822786B8(ctx, base);
loc_823417DC:
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x82341830
	if (!ctx.cr6.lt) goto loc_82341830;
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r10,34(r29)
	PPC_STORE_U16(ctx.r29.u32 + 34, ctx.r10.u16);
	// sth r10,36(r29)
	PPC_STORE_U16(ctx.r29.u32 + 36, ctx.r10.u16);
	// sth r10,38(r29)
	PPC_STORE_U16(ctx.r29.u32 + 38, ctx.r10.u16);
loc_823417F8:
	// lhz r11,126(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 126);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r9,28(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28, ctx.r9.u32);
	// sth r11,32(r29)
	PPC_STORE_U16(ctx.r29.u32 + 32, ctx.r11.u16);
	// lwz r7,204(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// stw r10,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r10.u32);
	// stw r7,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r7.u32);
	// lwz r6,12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r5,r6,0,2,2
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x20000000;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x82341830
	if (ctx.cr6.eq) goto loc_82341830;
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// ori r10,r11,4096
	ctx.r10.u64 = ctx.r11.u64 | 4096;
	// stw r10,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r10.u32);
loc_82341830:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823413D8) {
	__imp__sub_823413D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8234183C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8234183C) {
	__imp__sub_8234183C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82341840) {
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
	// lbz r10,173(r7)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r7.u32 + 173);
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823418dc
	if (ctx.cr6.eq) goto loc_823418DC;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// beq cr6,0x823418b4
	if (ctx.cr6.eq) goto loc_823418B4;
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// bne cr6,0x823418ec
	if (!ctx.cr6.eq) goto loc_823418EC;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// lhz r7,132(r7)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r7.u32 + 132);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r10,r11,244
	ctx.r10.s64 = ctx.r11.s64 + 244;
	// addi r9,r11,232
	ctx.r9.s64 = ctx.r11.s64 + 232;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82279a00
	ctx.lr = 0x82341898;
	sub_82279A00(ctx, base);
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
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_823418B4:
	// addi r9,r11,244
	ctx.r9.s64 = ctx.r11.s64 + 244;
	// lhz r6,132(r11)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + 132);
	// addi r8,r11,232
	ctx.r8.s64 = ctx.r11.s64 + 232;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// bl 0x8227b1c8
	ctx.lr = 0x823418C8;
	sub_8227B1C8(ctx, base);
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
loc_823418DC:
	// lwz r10,204(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 204);
	// and r9,r10,r31
	ctx.r9.u64 = ctx.r10.u64 & ctx.r31.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82341904
	if (!ctx.cr6.eq) goto loc_82341904;
loc_823418EC:
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
loc_82341904:
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r7,r11,232
	ctx.r7.s64 = ctx.r11.s64 + 232;
	// addi r8,r10,-5928
	ctx.r8.s64 = ctx.r10.s64 + -5928;
	// addi r6,r11,180
	ctx.r6.s64 = ctx.r11.s64 + 180;
	// bl 0x82279bc0
	ctx.lr = 0x82341918;
	sub_82279BC0(ctx, base);
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

PPC_WEAK_FUNC(sub_82341840) {
	__imp__sub_82341840(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8234192C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8234192C) {
	__imp__sub_8234192C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82341930) {
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
	// lis r11,-31823
	ctx.r11.s64 = -2085552128;
	// lwz r6,68(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// lis r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-31440
	ctx.r11.s64 = ctx.r11.s64 + -31440;
	// ori r7,r10,57292
	ctx.r7.u64 = ctx.r10.u64 | 57292;
	// addi r8,r11,8140
	ctx.r8.s64 = ctx.r11.s64 + 8140;
	// li r9,24
	ctx.r9.s64 = 24;
	// subf r4,r8,r4
	ctx.r4.s64 = ctx.r4.s64 - ctx.r8.s64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// divw r9,r4,r9
	ctx.r9.s32 = ctx.r4.s32 / ctx.r9.s32;
	// lwzx r11,r11,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// mulli r10,r9,624
	ctx.r10.s64 = ctx.r9.s64 * 624;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r3,204(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 204);
	// and r11,r3,r6
	ctx.r11.u64 = ctx.r3.u64 & ctx.r6.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82341994
	if (!ctx.cr6.eq) goto loc_82341994;
loc_82341980:
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
loc_82341994:
	// lwz r10,60(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 60);
	// cmpwi cr6,r10,2047
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2047, ctx.xer);
	// beq cr6,0x823419c0
	if (ctx.cr6.eq) goto loc_823419C0;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x82341980
	if (ctx.cr6.eq) goto loc_82341980;
	// lhz r11,256(r7)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r7.u32 + 256);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823419c0
	if (ctx.cr6.eq) goto loc_823419C0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82341980
	if (ctx.cr6.eq) goto loc_82341980;
loc_823419C0:
	// lwz r10,64(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 64);
	// cmpwi cr6,r10,2047
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2047, ctx.xer);
	// beq cr6,0x823419ec
	if (ctx.cr6.eq) goto loc_823419EC;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x82341980
	if (ctx.cr6.eq) goto loc_82341980;
	// lhz r11,256(r7)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r7.u32 + 256);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823419ec
	if (ctx.cr6.eq) goto loc_823419EC;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82341980
	if (ctx.cr6.eq) goto loc_82341980;
loc_823419EC:
	// addi r4,r5,48
	ctx.r4.s64 = ctx.r5.s64 + 48;
	// addi r3,r5,36
	ctx.r3.s64 = ctx.r5.s64 + 36;
	// bl 0x82341840
	ctx.lr = 0x823419F8;
	sub_82341840(ctx, base);
	// subfic r11,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// subfe r3,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
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

PPC_WEAK_FUNC(sub_82341930) {
	__imp__sub_82341930(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82341A10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82341A18;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31823
	ctx.r11.s64 = -2085552128;
	// lwz r9,32(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r8,0
	ctx.r8.s64 = 0;
	// addi r11,r11,-31440
	ctx.r11.s64 = ctx.r11.s64 + -31440;
	// li r7,24
	ctx.r7.s64 = 24;
	// addi r6,r11,8140
	ctx.r6.s64 = ctx.r11.s64 + 8140;
	// ori r5,r8,57292
	ctx.r5.u64 = ctx.r8.u64 | 57292;
	// subf r4,r6,r4
	ctx.r4.s64 = ctx.r4.s64 - ctx.r6.s64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// divw r7,r4,r7
	ctx.r7.s32 = ctx.r4.s32 / ctx.r7.s32;
	// lwzx r11,r11,r5
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r5.u32);
	// mulli r10,r7,624
	ctx.r10.s64 = ctx.r7.s64 * 624;
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r3,204(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 204);
	// and r11,r3,r9
	ctx.r11.u64 = ctx.r3.u64 & ctx.r9.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82341cdc
	if (ctx.cr6.eq) goto loc_82341CDC;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r9,r29,24
	ctx.r9.s64 = ctx.r29.s64 + 24;
loc_82341A6C:
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r10,2047
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2047, ctx.xer);
	// beq cr6,0x82341a98
	if (ctx.cr6.eq) goto loc_82341A98;
	// cmpw cr6,r7,r10
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x82341cdc
	if (ctx.cr6.eq) goto loc_82341CDC;
	// lhz r11,256(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 256);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82341a98
	if (ctx.cr6.eq) goto loc_82341A98;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82341cdc
	if (ctx.cr6.eq) goto loc_82341CDC;
loc_82341A98:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpwi cr6,r8,2
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 2, ctx.xer);
	// blt cr6,0x82341a6c
	if (ctx.cr6.lt) goto loc_82341A6C;
	// lwz r11,36(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82341cb4
	if (ctx.cr6.eq) goto loc_82341CB4;
	// lbz r11,174(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 174);
	// rlwinm r10,r11,0,29,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x6;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82341cb4
	if (ctx.cr6.eq) goto loc_82341CB4;
	// rlwinm r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82341adc
	if (ctx.cr6.eq) goto loc_82341ADC;
	// lwz r11,40(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82341cb4
	if (ctx.cr6.eq) goto loc_82341CB4;
loc_82341ADC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822846c0
	ctx.lr = 0x82341AE4;
	sub_822846C0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82341cb4
	if (ctx.cr6.eq) goto loc_82341CB4;
	// lbz r11,174(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 174);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82341b54
	if (ctx.cr6.eq) goto loc_82341B54;
	// lwz r4,32(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// bl 0x822efb88
	ctx.lr = 0x82341B08;
	sub_822EFB88(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82341cdc
	if (ctx.cr6.eq) goto loc_82341CDC;
	// lfs f0,232(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 232);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f0,164(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// lfs f13,236(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 236);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,168(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// lfs f12,240(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 240);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,172(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// bl 0x822ef018
	ctx.lr = 0x82341B30;
	sub_822EF018(ctx, base);
	// lfs f11,164(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,168(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,172(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	ctx.f9.f64 = double(temp.f32);
	// stfs f11,80(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f10,84(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f1,92(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f1,96(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f1,100(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// b 0x82341b98
	goto loc_82341B98;
loc_82341B54:
	// lfs f13,232(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 232);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// stfs f13,164(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// addi r10,r11,-18104
	ctx.r10.s64 = ctx.r11.s64 + -18104;
	// lfs f9,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// lfs f0,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f10,20(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f10.f64 = double(temp.f32);
	// lfs f12,236(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 236);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,168(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// lfs f11,240(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 240);
	ctx.f11.f64 = double(temp.f32);
	// fadds f9,f11,f9
	ctx.f9.f64 = double(float(ctx.f11.f64 + ctx.f9.f64));
	// stfs f11,172(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f10,100(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
loc_82341B98:
	// stfs f9,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// lfs f0,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,12(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,16(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,20(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// stfs f0,320(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 320, temp.u32);
	// stfs f13,324(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 324, temp.u32);
	// stfs f12,328(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 328, temp.u32);
	// stfs f11,336(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 336, temp.u32);
	// stfs f10,340(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 340, temp.u32);
	// stfs f9,344(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 344, temp.u32);
	// bl 0x82279c28
	ctx.lr = 0x82341BD4;
	sub_82279C28(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// lfs f31,12168(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82279ee0
	ctx.lr = 0x82341BEC;
	sub_82279EE0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82341cdc
	if (!ctx.cr6.eq) goto loc_82341CDC;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r30,244
	ctx.r3.s64 = ctx.r30.s64 + 244;
	// bl 0x822da650
	ctx.lr = 0x82341C00;
	sub_822DA650(ctx, base);
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x822d6888
	ctx.lr = 0x82341C10;
	sub_822D6888(ctx, base);
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x822d6888
	ctx.lr = 0x82341C20;
	sub_822D6888(ctx, base);
	// stfs f31,224(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// lbz r11,174(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 174);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x82341c6c
	if (ctx.cr6.eq) goto loc_82341C6C;
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// lwz r4,32(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// bl 0x822efaf8
	ctx.lr = 0x82341C44;
	sub_822EFAF8(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8222ec90
	ctx.lr = 0x82341C50;
	sub_8222EC90(ctx, base);
	// addi r7,r1,224
	ctx.r7.s64 = ctx.r1.s64 + 224;
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// lwz r6,32(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822ef9f0
	ctx.lr = 0x82341C68;
	sub_822EF9F0(ctx, base);
	// b 0x82341c98
	goto loc_82341C98;
loc_82341C6C:
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// bl 0x822ef900
	ctx.lr = 0x82341C74;
	sub_822EF900(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8222ec90
	ctx.lr = 0x82341C80;
	sub_8222EC90(ctx, base);
	// addi r7,r1,224
	ctx.r7.s64 = ctx.r1.s64 + 224;
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// lwz r6,40(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822ef208
	ctx.lr = 0x82341C98;
	sub_822EF208(ctx, base);
loc_82341C98:
	// lfs f0,224(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x82341cdc
	if (!ctx.cr6.lt) goto loc_82341CDC;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_82341CB4:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r6,32(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// addi r5,r11,-9672
	ctx.r5.s64 = ctx.r11.s64 + -9672;
	// addi r4,r29,12
	ctx.r4.s64 = ctx.r29.s64 + 12;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82341840
	ctx.lr = 0x82341CD0;
	sub_82341840(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,-1
	ctx.r3.s64 = -1;
	// bne cr6,0x82341ce0
	if (!ctx.cr6.eq) goto loc_82341CE0;
loc_82341CDC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82341CE0:
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82341A10) {
	__imp__sub_82341A10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82341CEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82341CEC) {
	__imp__sub_82341CEC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82341CF0) {
	PPC_FUNC_PROLOGUE();
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// cmpwi cr6,r4,2047
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2047, ctx.xer);
	// beq cr6,0x82341d28
	if (ctx.cr6.eq) goto loc_82341D28;
	// lis r11,-31823
	ctx.r11.s64 = -2085552128;
	// lis r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,-31440
	ctx.r9.s64 = ctx.r11.s64 + -31440;
	// ori r8,r10,57292
	ctx.r8.u64 = ctx.r10.u64 | 57292;
	// mulli r10,r4,624
	ctx.r10.s64 = ctx.r4.s64 * 624;
	// lwzx r11,r9,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lhz r11,256(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 256);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// bne cr6,0x82341d2c
	if (!ctx.cr6.eq) goto loc_82341D2C;
loc_82341D28:
	// li r11,-1
	ctx.r11.s64 = -1;
loc_82341D2C:
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r11,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r11.u8);
	// stb r11,11(r3)
	PPC_STORE_U8(ctx.r3.u32 + 11, ctx.r11.u8);
	// stb r11,10(r3)
	PPC_STORE_U8(ctx.r3.u32 + 10, ctx.r11.u8);
	// stb r10,9(r3)
	PPC_STORE_U8(ctx.r3.u32 + 9, ctx.r10.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82341CF0) {
	__imp__sub_82341CF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82341D4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82341D4C) {
	__imp__sub_82341D4C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82341D50) {
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
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r10,r11,14752
	ctx.r10.s64 = ctx.r11.s64 + 14752;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x82278238
	ctx.lr = 0x82341D70;
	sub_82278238(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82341D50) {
	__imp__sub_82341D50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82341D80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf68
	ctx.lr = 0x82341D88;
	__savegprlr_24(ctx, base);
	// stfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f31.u64);
	// stwu r1,-448(r1)
	ea = -448 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// mr r24,r10
	ctx.r24.u64 = ctx.r10.u64;
	// addi r10,r11,14752
	ctx.r10.s64 = ctx.r11.s64 + 14752;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// bl 0x82278238
	ctx.lr = 0x82341DC8;
	sub_82278238(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f0,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f31,5484(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5484);
	ctx.f31.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x82341f44
	if (ctx.cr6.eq) goto loc_82341F44;
	// lfs f0,20(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,16(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f11,12(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// fadds f10,f12,f11
	ctx.f10.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// fcmpu cr6,f10,f31
	ctx.cr6.compare(ctx.f10.f64, ctx.f31.f64);
	// bne cr6,0x82341e84
	if (!ctx.cr6.eq) goto loc_82341E84;
	// lwz r11,532(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 532);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82341e24
	if (ctx.cr6.eq) goto loc_82341E24;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8227c158
	ctx.lr = 0x82341E18;
	sub_8227C158(ctx, base);
	// lfs f0,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x82341f44
	if (ctx.cr6.eq) goto loc_82341F44;
loc_82341E24:
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stw r27,356(r1)
	PPC_STORE_U32(ctx.r1.u32 + 356, ctx.r27.u32);
	// lfs f13,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// lfs f12,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// stfs f0,320(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 320, temp.u32);
	// stfs f13,324(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 324, temp.u32);
	// stfs f12,328(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 328, temp.u32);
	// stfs f11,336(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 336, temp.u32);
	// stfs f10,340(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 340, temp.u32);
	// stfs f9,344(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 344, temp.u32);
	// bl 0x82279c28
	ctx.lr = 0x82341E60;
	sub_82279C28(ctx, base);
	// stw r26,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, ctx.r26.u32);
	// stw r25,360(r1)
	PPC_STORE_U32(ctx.r1.u32 + 360, ctx.r25.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r24,364(r1)
	PPC_STORE_U32(ctx.r1.u32 + 364, ctx.r24.u32);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x8227cb88
	ctx.lr = 0x82341E78;
	sub_8227CB88(ctx, base);
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
loc_82341E84:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,12(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,16(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lfs f11,20(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// lwz r9,4(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// lfs f10,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// stw r27,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r27.u32);
	// lfs f5,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lfs f0,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// fadds f2,f10,f5
	ctx.f2.f64 = double(float(ctx.f10.f64 + ctx.f5.f64));
	// lfs f9,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fadds f8,f13,f0
	ctx.f8.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lfs f3,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// fadds f6,f12,f0
	ctx.f6.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// lfs f7,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fadds f4,f11,f0
	ctx.f4.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// lfs f1,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// fadds f0,f3,f9
	ctx.f0.f64 = double(float(ctx.f3.f64 + ctx.f9.f64));
	// lfs f5,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// fadds f3,f1,f7
	ctx.f3.f64 = double(float(ctx.f1.f64 + ctx.f7.f64));
	// lfs f1,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// fadds f10,f5,f10
	ctx.f10.f64 = double(float(ctx.f5.f64 + ctx.f10.f64));
	// lfs f5,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// fadds f1,f1,f9
	ctx.f1.f64 = double(float(ctx.f1.f64 + ctx.f9.f64));
	// fadds f9,f5,f7
	ctx.f9.f64 = double(float(ctx.f5.f64 + ctx.f7.f64));
	// stfs f31,96(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f31,100(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stw r10,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r10.u32);
	// stfs f31,104(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stw r9,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r9.u32);
	// stfs f2,208(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// stfs f0,212(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// stfs f3,216(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// stfs f10,224(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// stfs f1,228(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 228, temp.u32);
	// stfs f9,232(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 232, temp.u32);
	// stfs f13,108(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f12,112(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f11,116(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f8,120(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f6,124(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f4,128(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// bl 0x82279c28
	ctx.lr = 0x82341F38;
	sub_82279C28(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8227c650
	ctx.lr = 0x82341F44;
	sub_8227C650(ctx, base);
loc_82341F44:
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82341D80) {
	__imp__sub_82341D80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82341F50) {
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
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r10,r11,14752
	ctx.r10.s64 = ctx.r11.s64 + 14752;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x822796a8
	ctx.lr = 0x82341F70;
	sub_822796A8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82341F50) {
	__imp__sub_82341F50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82341F80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf68
	ctx.lr = 0x82341F88;
	__savegprlr_24(ctx, base);
	// stfd f30,-88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f30.u64);
	// stfd f31,-80(r1)
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f31.u64);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// mr r24,r10
	ctx.r24.u64 = ctx.r10.u64;
	// addi r10,r11,14752
	ctx.r10.s64 = ctx.r11.s64 + 14752;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// bl 0x822796a8
	ctx.lr = 0x82341FDC;
	sub_822796A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82342080
	if (!ctx.cr6.eq) goto loc_82342080;
	// lwz r11,388(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 388);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82342008
	if (ctx.cr6.eq) goto loc_82342008;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8227c328
	ctx.lr = 0x82342000;
	sub_8227C328(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82342080
	if (ctx.cr6.eq) goto loc_82342080;
loc_82342008:
	// lfs f13,16(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,20(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// fadds f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f11,12(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f13.f64 = double(temp.f32);
	// fadds f10,f12,f11
	ctx.f10.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// fcmpu cr6,f10,f13
	ctx.cr6.compare(ctx.f10.f64, ctx.f13.f64);
	// bne cr6,0x82342094
	if (!ctx.cr6.eq) goto loc_82342094;
	// lfs f0,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// lfs f13,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stw r27,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r27.u32);
	// lfs f12,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stw r26,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r26.u32);
	// lfs f11,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// stw r25,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r25.u32);
	// lfs f10,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// stw r24,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r24.u32);
	// lfs f9,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f11,108(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f10,112(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f9,116(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// bl 0x8227cdb8
	ctx.lr = 0x82342078;
	sub_8227CDB8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8234214c
	if (ctx.cr6.eq) goto loc_8234214C;
loc_82342080:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// lfd f30,-88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f31,-80(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
loc_82342094:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,12(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,16(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// stw r28,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r28.u32);
	// lfs f10,20(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	ctx.f10.f64 = double(temp.f32);
	// stw r27,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r27.u32);
	// lfs f9,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// stw r26,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r26.u32);
	// lfs f5,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lfs f0,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// fadds f6,f12,f0
	ctx.f6.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// lfs f8,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// fadds f4,f11,f0
	ctx.f4.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// lfs f7,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fadds f2,f10,f0
	ctx.f2.f64 = double(float(ctx.f10.f64 + ctx.f0.f64));
	// lfs f3,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// lfs f1,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// fadds f0,f9,f5
	ctx.f0.f64 = double(float(ctx.f9.f64 + ctx.f5.f64));
	// lfs f5,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// fadds f3,f3,f8
	ctx.f3.f64 = double(float(ctx.f3.f64 + ctx.f8.f64));
	// lfs f31,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f31.f64 = double(temp.f32);
	// fadds f1,f1,f7
	ctx.f1.f64 = double(float(ctx.f1.f64 + ctx.f7.f64));
	// lfs f30,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f30.f64 = double(temp.f32);
	// fadds f9,f9,f5
	ctx.f9.f64 = double(float(ctx.f9.f64 + ctx.f5.f64));
	// fadds f8,f31,f8
	ctx.f8.f64 = double(float(ctx.f31.f64 + ctx.f8.f64));
	// stfs f13,144(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// fadds f7,f30,f7
	ctx.f7.f64 = double(float(ctx.f30.f64 + ctx.f7.f64));
	// stfs f13,148(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f13,152(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f0,180(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stfs f3,184(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stfs f1,188(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// stfs f9,192(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// stfs f8,196(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// stfs f7,200(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// stfs f12,156(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// stfs f11,160(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f10,164(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f6,168(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f4,172(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// stfs f2,176(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// bl 0x8227c940
	ctx.lr = 0x82342140;
	sub_8227C940(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bne cr6,0x82342150
	if (!ctx.cr6.eq) goto loc_82342150;
loc_8234214C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82342150:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// lfd f30,-88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f31,-80(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82341F80) {
	__imp__sub_82341F80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82342160) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x82342168;
	__savegprlr_25(ctx, base);
	// stfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f30.u64);
	// stfd f31,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// mr r27,r9
	ctx.r27.u64 = ctx.r9.u64;
	// addi r10,r11,14752
	ctx.r10.s64 = ctx.r11.s64 + 14752;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// bl 0x822796a8
	ctx.lr = 0x823421B0;
	sub_822796A8(ctx, base);
	// stw r3,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r3.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823422f0
	if (!ctx.cr6.eq) goto loc_823422F0;
	// lfs f13,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// fadds f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f11,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f13.f64 = double(temp.f32);
	// fadds f10,f12,f11
	ctx.f10.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// fcmpu cr6,f10,f13
	ctx.cr6.compare(ctx.f10.f64, ctx.f13.f64);
	// beq cr6,0x82342240
	if (ctx.cr6.eq) goto loc_82342240;
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f0,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stw r27,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r27.u32);
	// lfs f12,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stw r26,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r26.u32);
	// lfs f11,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// stw r25,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r25.u32);
	// lfs f10,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// lfs f9,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f11,108(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f10,112(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f9,116(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// bl 0x8227cdb8
	ctx.lr = 0x8234222C;
	sub_8227CDB8(ctx, base);
	// stw r3,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r3.u32);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// lfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_82342240:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// stw r27,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r27.u32);
	// lfs f10,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f10.f64 = double(temp.f32);
	// stw r26,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r26.u32);
	// lfs f9,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// stw r25,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r25.u32);
	// lfs f5,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lfs f0,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// fadds f6,f12,f0
	ctx.f6.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// lfs f8,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// fadds f4,f11,f0
	ctx.f4.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// lfs f7,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fadds f2,f10,f0
	ctx.f2.f64 = double(float(ctx.f10.f64 + ctx.f0.f64));
	// lfs f3,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// lfs f1,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// fadds f0,f5,f9
	ctx.f0.f64 = double(float(ctx.f5.f64 + ctx.f9.f64));
	// lfs f5,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// fadds f3,f3,f8
	ctx.f3.f64 = double(float(ctx.f3.f64 + ctx.f8.f64));
	// lfs f31,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f31.f64 = double(temp.f32);
	// fadds f1,f1,f7
	ctx.f1.f64 = double(float(ctx.f1.f64 + ctx.f7.f64));
	// lfs f30,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f30.f64 = double(temp.f32);
	// fadds f9,f5,f9
	ctx.f9.f64 = double(float(ctx.f5.f64 + ctx.f9.f64));
	// fadds f8,f31,f8
	ctx.f8.f64 = double(float(ctx.f31.f64 + ctx.f8.f64));
	// stfs f13,144(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// fadds f7,f30,f7
	ctx.f7.f64 = double(float(ctx.f30.f64 + ctx.f7.f64));
	// stfs f13,148(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f13,152(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f0,180(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stfs f3,184(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stfs f1,188(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// stfs f9,192(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// stfs f8,196(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// stfs f7,200(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// stfs f12,156(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// stfs f11,160(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f10,164(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f6,168(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f4,172(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// stfs f2,176(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// bl 0x8227c940
	ctx.lr = 0x823422EC;
	sub_8227C940(ctx, base);
	// stw r3,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r3.u32);
loc_823422F0:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// lfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82342160) {
	__imp__sub_82342160(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82342300) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82342308;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31823
	ctx.r11.s64 = -2085552128;
	// lis r9,0
	ctx.r9.s64 = 0;
	// addi r8,r11,-31440
	ctx.r8.s64 = ctx.r11.s64 + -31440;
	// ori r7,r9,57292
	ctx.r7.u64 = ctx.r9.u64 | 57292;
	// mulli r10,r5,624
	ctx.r10.s64 = ctx.r5.s64 * 624;
	// lwzx r11,r8,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// add r29,r10,r11
	ctx.r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r6,204(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 204);
	// and r5,r6,r28
	ctx.r5.u64 = ctx.r6.u64 & ctx.r28.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x82342350
	if (!ctx.cr6.eq) goto loc_82342350;
loc_82342344:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_82342350:
	// lfs f10,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f8,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f9,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fadds f6,f8,f10
	ctx.f6.f64 = double(float(ctx.f8.f64 + ctx.f10.f64));
	// lfs f7,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f5,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// fadds f4,f7,f9
	ctx.f4.f64 = double(float(ctx.f7.f64 + ctx.f9.f64));
	// lfs f3,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// addi r3,r29,208
	ctx.r3.s64 = ctx.r29.s64 + 208;
	// fadds f2,f3,f5
	ctx.f2.f64 = double(float(ctx.f3.f64 + ctx.f5.f64));
	// lfs f0,2416(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2416);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12168(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f6,f0
	ctx.f12.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f11,f4,f0
	ctx.f11.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// stfs f11,84(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmuls f0,f2,f0
	ctx.f0.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fsubs f1,f10,f12
	ctx.f1.f64 = double(float(ctx.f10.f64 - ctx.f12.f64));
	// fsubs f12,f9,f11
	ctx.f12.f64 = double(float(ctx.f9.f64 - ctx.f11.f64));
	// fsubs f11,f5,f0
	ctx.f11.f64 = double(float(ctx.f5.f64 - ctx.f0.f64));
	// fabs f10,f1
	ctx.f10.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// fabs f9,f12
	ctx.f9.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// fabs f8,f11
	ctx.f8.u64 = ctx.f11.u64 & ~0x8000000000000000;
	// fadds f7,f10,f13
	ctx.f7.f64 = double(float(ctx.f10.f64 + ctx.f13.f64));
	// stfs f7,92(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// fadds f6,f9,f13
	ctx.f6.f64 = double(float(ctx.f9.f64 + ctx.f13.f64));
	// stfs f6,96(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fadds f5,f8,f13
	ctx.f5.f64 = double(float(ctx.f8.f64 + ctx.f13.f64));
	// stfs f5,100(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// bl 0x82239610
	ctx.lr = 0x823423D8;
	sub_82239610(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82342344
	if (ctx.cr6.eq) goto loc_82342344;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// addi r5,r11,-9672
	ctx.r5.s64 = ctx.r11.s64 + -9672;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82341840
	ctx.lr = 0x82342400;
	sub_82341840(ctx, base);
	// subfic r10,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r3.s64;
	// subfe r3,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82342300) {
	__imp__sub_82342300(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82342410) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x82342418;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31823
	ctx.r11.s64 = -2085552128;
	// lis r9,0
	ctx.r9.s64 = 0;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// addi r8,r11,-31440
	ctx.r8.s64 = ctx.r11.s64 + -31440;
	// ori r7,r9,57292
	ctx.r7.u64 = ctx.r9.u64 | 57292;
	// mulli r10,r6,624
	ctx.r10.s64 = ctx.r6.s64 * 624;
	// lwzx r11,r8,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// add r28,r10,r11
	ctx.r28.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r6,204(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 204);
	// and r5,r6,r27
	ctx.r5.u64 = ctx.r6.u64 & ctx.r27.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x82342464
	if (!ctx.cr6.eq) goto loc_82342464;
loc_82342458:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_82342464:
	// lfs f13,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r31,12
	ctx.r11.s64 = ctx.r31.s64 + 12;
	// lfs f7,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f7.f64 = double(temp.f32);
	// lfs f0,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f10,f13,f7
	ctx.f10.f64 = double(float(ctx.f13.f64 - ctx.f7.f64));
	// lfs f8,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// fmr f3,f7
	ctx.f3.f64 = ctx.f7.f64;
	// fsubs f12,f0,f8
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f8.f64));
	// lfs f6,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f6.f64 = double(temp.f32);
	// fadds f11,f0,f8
	ctx.f11.f64 = double(float(ctx.f0.f64 + ctx.f8.f64));
	// lfs f9,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fadds f7,f7,f13
	ctx.f7.f64 = double(float(ctx.f7.f64 + ctx.f13.f64));
	// lfs f0,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmr f4,f8
	ctx.f4.f64 = ctx.f8.f64;
	// fsubs f5,f9,f6
	ctx.f5.f64 = double(float(ctx.f9.f64 - ctx.f6.f64));
	// fmr f2,f6
	ctx.f2.f64 = ctx.f6.f64;
	// fadds f4,f6,f9
	ctx.f4.f64 = double(float(ctx.f6.f64 + ctx.f9.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x823424c0
	if (!ctx.cr6.gt) goto loc_823424C0;
	// fadds f8,f13,f12
	ctx.f8.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// fadds f6,f0,f11
	ctx.f6.f64 = double(float(ctx.f0.f64 + ctx.f11.f64));
	// b 0x823424c8
	goto loc_823424C8;
loc_823424C0:
	// fadds f8,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.f8.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// fadds f6,f13,f11
	ctx.f6.f64 = double(float(ctx.f13.f64 + ctx.f11.f64));
loc_823424C8:
	// lfs f0,4(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x823424e4
	if (!ctx.cr6.gt) goto loc_823424E4;
	// fadds f9,f13,f10
	ctx.f9.f64 = double(float(ctx.f13.f64 + ctx.f10.f64));
	// fadds f11,f0,f7
	ctx.f11.f64 = double(float(ctx.f0.f64 + ctx.f7.f64));
	// b 0x823424ec
	goto loc_823424EC;
loc_823424E4:
	// fadds f9,f0,f10
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = double(float(ctx.f0.f64 + ctx.f10.f64));
	// fadds f11,f13,f7
	ctx.f11.f64 = double(float(ctx.f13.f64 + ctx.f7.f64));
loc_823424EC:
	// lfs f0,8(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82342508
	if (!ctx.cr6.gt) goto loc_82342508;
	// fadds f12,f13,f5
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f5.f64));
	// fadds f0,f0,f4
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f4.f64));
	// b 0x82342510
	goto loc_82342510;
loc_82342508:
	// fadds f12,f0,f5
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f5.f64));
	// fadds f0,f13,f4
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f4.f64));
loc_82342510:
	// fadds f11,f11,f9
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f9.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fadds f7,f6,f8
	ctx.f7.f64 = double(float(ctx.f6.f64 + ctx.f8.f64));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fadds f6,f0,f12
	ctx.f6.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r28,208
	ctx.r3.s64 = ctx.r28.s64 + 208;
	// lfs f0,2416(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2416);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12168(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f10,84(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmuls f11,f7,f0
	ctx.f11.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// stfs f11,80(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f0,f6,f0
	ctx.f0.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fsubs f5,f10,f9
	ctx.f5.f64 = double(float(ctx.f10.f64 - ctx.f9.f64));
	// fsubs f4,f11,f8
	ctx.f4.f64 = double(float(ctx.f11.f64 - ctx.f8.f64));
	// fsubs f3,f0,f12
	ctx.f3.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// fadds f2,f5,f13
	ctx.f2.f64 = double(float(ctx.f5.f64 + ctx.f13.f64));
	// stfs f2,96(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fadds f1,f4,f13
	ctx.f1.f64 = double(float(ctx.f4.f64 + ctx.f13.f64));
	// stfs f1,92(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// fadds f0,f3,f13
	ctx.f0.f64 = double(float(ctx.f3.f64 + ctx.f13.f64));
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// bl 0x82239610
	ctx.lr = 0x82342574;
	sub_82239610(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82342458
	if (ctx.cr6.eq) goto loc_82342458;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82341840
	ctx.lr = 0x82342598;
	sub_82341840(ctx, base);
	// subfic r11,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// subfe r3,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82342410) {
	__imp__sub_82342410(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823425A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x823425B0;
	__savegprlr_26(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,0
	ctx.r10.s64 = 0;
	// lis r11,-31823
	ctx.r11.s64 = -2085552128;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// addi r11,r11,-31440
	ctx.r11.s64 = ctx.r11.s64 + -31440;
	// ori r8,r10,57292
	ctx.r8.u64 = ctx.r10.u64 | 57292;
	// lis r9,-32052
	ctx.r9.s64 = -2100559872;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mulli r7,r6,624
	ctx.r7.s64 = ctx.r6.s64 * 624;
	// lwzx r10,r11,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// addi r6,r9,26552
	ctx.r6.s64 = ctx.r9.s64 + 26552;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// subf r9,r6,r7
	ctx.r9.s64 = ctx.r7.s64 - ctx.r6.s64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// add r4,r9,r10
	ctx.r4.u64 = ctx.r9.u64 + ctx.r10.u64;
	// li r5,624
	ctx.r5.s64 = 624;
	// addi r8,r11,8140
	ctx.r8.s64 = ctx.r11.s64 + 8140;
	// divw r11,r4,r5
	ctx.r11.s32 = ctx.r4.s32 / ctx.r5.s32;
	// li r5,44
	ctx.r5.s64 = 44;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r31,r11,r8
	ctx.r31.u64 = ctx.r11.u64 + ctx.r8.u64;
	// bl 0x823de090
	ctx.lr = 0x82342618;
	sub_823DE090(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f0,12168(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// lfs f12,4(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,8(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f13,0(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,160(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// lfs f0,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f9,148(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f10,144(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f0,152(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f12,164(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f11,168(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// bl 0x82279c28
	ctx.lr = 0x8234265C;
	sub_82279C28(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r27,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r27.u32);
	// stw r9,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r9.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stw r8,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r8.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r26,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r26.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823413d8
	ctx.lr = 0x82342684;
	sub_823413D8(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823425A8) {
	__imp__sub_823425A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8234268C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8234268C) {
	__imp__sub_8234268C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82342690) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf68
	ctx.lr = 0x82342698;
	__savegprlr_24(ctx, base);
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// ld r12,-8192(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8192);
	// stwu r1,-8400(r1)
	ea = -8400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// bl 0x82275c28
	ctx.lr = 0x823426BC;
	sub_82275C28(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// lfs f13,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// li r5,2048
	ctx.r5.s64 = 2048;
	// lfs f12,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lfs f0,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// bl 0x8227bff0
	ctx.lr = 0x82342700;
	sub_8227BFF0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x823427a8
	if (!ctx.cr6.gt) goto loc_823427A8;
	// lis r11,-31823
	ctx.r11.s64 = -2085552128;
	// addi r27,r1,128
	ctx.r27.s64 = ctx.r1.s64 + 128;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r28,r11,-31440
	ctx.r28.s64 = ctx.r11.s64 + -31440;
loc_82342718:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmpw cr6,r11,r25
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r25.s32, ctx.xer);
	// beq cr6,0x8234279c
	if (ctx.cr6.eq) goto loc_8234279C;
	// lis r9,0
	ctx.r9.s64 = 0;
	// mulli r10,r11,624
	ctx.r10.s64 = ctx.r11.s64 * 624;
	// ori r8,r9,57292
	ctx.r8.u64 = ctx.r9.u64 | 57292;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwzx r11,r28,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r8.u32);
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r5,r31,244
	ctx.r5.s64 = ctx.r31.s64 + 244;
	// addi r4,r31,232
	ctx.r4.s64 = ctx.r31.s64 + 232;
	// bl 0x82275d28
	ctx.lr = 0x8234274C;
	sub_82275D28(ctx, base);
	// lbz r11,173(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 173);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82342788
	if (ctx.cr6.eq) goto loc_82342788;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x82342778
	if (ctx.cr6.eq) goto loc_82342778;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bne cr6,0x8234279c
	if (!ctx.cr6.eq) goto loc_8234279C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lhz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 132);
	// bl 0x82275c28
	ctx.lr = 0x82342774;
	sub_82275C28(ctx, base);
	// b 0x82342798
	goto loc_82342798;
loc_82342778:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lhz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 132);
	// bl 0x8227a6b8
	ctx.lr = 0x82342784;
	sub_8227A6B8(ctx, base);
	// b 0x82342798
	goto loc_82342798;
loc_82342788:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,204(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// addi r3,r31,208
	ctx.r3.s64 = ctx.r31.s64 + 208;
	// bl 0x82275bc0
	ctx.lr = 0x82342798;
	sub_82275BC0(ctx, base);
loc_82342798:
	// or r29,r3,r29
	ctx.r29.u64 = ctx.r3.u64 | ctx.r29.u64;
loc_8234279C:
	// addic. r26,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// bne 0x82342718
	if (!ctx.cr0.eq) goto loc_82342718;
loc_823427A8:
	// and r3,r29,r24
	ctx.r3.u64 = ctx.r29.u64 & ctx.r24.u64;
	// addi r1,r1,8400
	ctx.r1.s64 = ctx.r1.s64 + 8400;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82342690) {
	__imp__sub_82342690(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823427B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823427B4) {
	__imp__sub_823427B4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823427B8) {
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
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82350f50
	ctx.lr = 0x823427D4;
	sub_82350F50(ctx, base);
	// lwz r11,412(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 412);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823427ec
	if (ctx.cr6.eq) goto loc_823427EC;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82232100
	ctx.lr = 0x823427EC;
	sub_82232100(ctx, base);
loc_823427EC:
	// bl 0x821fc6d0
	ctx.lr = 0x823427F0;
	sub_821FC6D0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8234283c
	if (!ctx.cr6.eq) goto loc_8234283C;
	// lwz r11,168(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8234283c
	if (ctx.cr6.eq) goto loc_8234283C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lwz r5,180(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-17584
	ctx.r4.s64 = ctx.r11.s64 + -17584;
	// bl 0x823df2b0
	ctx.lr = 0x8234281C;
	sub_823DF2B0(ctx, base);
	// lis r10,-31816
	ctx.r10.s64 = -2085093376;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r11,r10,-11816
	ctx.r11.s64 = ctx.r10.s64 + -11816;
	// mulli r10,r30,328
	ctx.r10.s64 = ctx.r30.s64 * 328;
	// lfs f1,9868(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 9868);
	ctx.f1.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82287a68
	ctx.lr = 0x8234283C;
	sub_82287A68(ctx, base);
loc_8234283C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
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

PPC_WEAK_FUNC(sub_823427B8) {
	__imp__sub_823427B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82342858) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82342860;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r9,r11,9624
	ctx.r9.s64 = ctx.r11.s64 + 9624;
	// addi r7,r10,-17572
	ctx.r7.s64 = ctx.r10.s64 + -17572;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,1720
	ctx.r4.s64 = 1720;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r6,36(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 36);
	// bl 0x8222de40
	ctx.lr = 0x82342888;
	sub_8222DE40(ctx, base);
	// lis r8,-31816
	ctx.r8.s64 = -2085093376;
	// rlwinm r28,r3,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r29,r8,-12608
	ctx.r29.s64 = ctx.r8.s64 + -12608;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwzx r7,r28,r29
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r29.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x823428b4
	if (!ctx.cr6.eq) goto loc_823428B4;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823427b8
	ctx.lr = 0x823428B0;
	sub_823427B8(ctx, base);
	// stwx r3,r28,r29
	PPC_STORE_U32(ctx.r28.u32 + ctx.r29.u32, ctx.r3.u32);
loc_823428B4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82342858) {
	__imp__sub_82342858(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823428C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31816
	ctx.r11.s64 = -2085093376;
	// li r5,128
	ctx.r5.s64 = 128;
	// addi r3,r11,-12608
	ctx.r3.s64 = ctx.r11.s64 + -12608;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x822dd778
	sub_822DD778(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823428C0) {
	__imp__sub_823428C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823428D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823428D4) {
	__imp__sub_823428D4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823428D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x823428E0;
	__savegprlr_29(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31816
	ctx.r11.s64 = -2085093376;
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r29,r11,-12608
	ctx.r29.s64 = ctx.r11.s64 + -12608;
	// addi r31,r29,4
	ctx.r31.s64 = ctx.r29.s64 + 4;
loc_823428F4:
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r30,1720
	ctx.r3.s64 = ctx.r30.s64 + 1720;
	// bl 0x8233dd38
	ctx.lr = 0x82342904;
	sub_8233DD38(ctx, base);
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82342920
	if (ctx.cr6.eq) goto loc_82342920;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823427b8
	ctx.lr = 0x8234291C;
	sub_823427B8(ctx, base);
	// b 0x82342924
	goto loc_82342924;
loc_82342920:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82342924:
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r11,r29,128
	ctx.r11.s64 = ctx.r29.s64 + 128;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x823428f4
	if (ctx.cr6.lt) goto loc_823428F4;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823428D8) {
	__imp__sub_823428D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82342944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82342944) {
	__imp__sub_82342944(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82342948) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31816
	ctx.r11.s64 = -2085093376;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-12608
	ctx.r9.s64 = ctx.r11.s64 + -12608;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82342948) {
	__imp__sub_82342948(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8234295C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8234295C) {
	__imp__sub_8234295C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82342960) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31816
	ctx.r11.s64 = -2085093376;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-12608
	ctx.r9.s64 = ctx.r11.s64 + -12608;
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwz r3,0(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82342960) {
	__imp__sub_82342960(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82342978) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31816
	ctx.r11.s64 = -2085093376;
	// mulli r10,r3,328
	ctx.r10.s64 = ctx.r3.s64 * 328;
	// addi r11,r11,-11816
	ctx.r11.s64 = ctx.r11.s64 + -11816;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82342978) {
	__imp__sub_82342978(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8234298C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8234298C) {
	__imp__sub_8234298C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82342990) {
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
	ctx.lr = 0x823429A0;
	__savefpr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r6,r11,-14048
	ctx.r6.s64 = ctx.r11.s64 + -14048;
	// addi r3,r10,-14064
	ctx.r3.s64 = ctx.r10.s64 + -14064;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822e15d0
	ctx.lr = 0x823429C0;
	sub_822E15D0(ctx, base);
	// lis r9,-31816
	ctx.r9.s64 = -2085093376;
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// lis r7,-32251
	ctx.r7.s64 = -2113601536;
	// addi r6,r8,-14092
	ctx.r6.s64 = ctx.r8.s64 + -14092;
	// li r5,4
	ctx.r5.s64 = 4;
	// stw r3,-11880(r9)
	PPC_STORE_U32(ctx.r9.u32 + -11880, ctx.r3.u32);
	// addi r3,r7,-14112
	ctx.r3.s64 = ctx.r7.s64 + -14112;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822e15d0
	ctx.lr = 0x823429E4;
	sub_822E15D0(ctx, base);
	// lis r6,-31816
	ctx.r6.s64 = -2085093376;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// stw r3,-11884(r6)
	PPC_STORE_U32(ctx.r6.u32 + -11884, ctx.r3.u32);
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// lfs f31,6912(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 6912);
	ctx.f31.f64 = double(temp.f32);
	// addi r8,r10,-14160
	ctx.r8.s64 = ctx.r10.s64 + -14160;
	// lfs f29,5484(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 5484);
	ctx.f29.f64 = double(temp.f32);
	// addi r3,r9,-14184
	ctx.r3.s64 = ctx.r9.s64 + -14184;
	// lfs f28,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f28.f64 = double(temp.f32);
	// li r7,132
	ctx.r7.s64 = 132;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// bl 0x822e1660
	ctx.lr = 0x82342A28;
	sub_822E1660(ctx, base);
	// lis r8,-31815
	ctx.r8.s64 = -2085027840;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// lis r5,-32251
	ctx.r5.s64 = -2113601536;
	// lis r4,-32251
	ctx.r4.s64 = -2113601536;
	// stw r3,-4636(r8)
	PPC_STORE_U32(ctx.r8.u32 + -4636, ctx.r3.u32);
	// addi r8,r5,-14244
	ctx.r8.s64 = ctx.r5.s64 + -14244;
	// lfs f30,11804(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 11804);
	ctx.f30.f64 = double(temp.f32);
	// addi r3,r4,-14268
	ctx.r3.s64 = ctx.r4.s64 + -14268;
	// li r7,132
	ctx.r7.s64 = 132;
	// lfs f1,-21308(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -21308);
	ctx.f1.f64 = double(temp.f32);
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// bl 0x822e1660
	ctx.lr = 0x82342A60;
	sub_822E1660(ctx, base);
	// lis r11,-31816
	ctx.r11.s64 = -2085093376;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// lis r7,-32251
	ctx.r7.s64 = -2113601536;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// stw r3,-11820(r11)
	PPC_STORE_U32(ctx.r11.u32 + -11820, ctx.r3.u32);
	// addi r3,r7,-14300
	ctx.r3.s64 = ctx.r7.s64 + -14300;
	// addi r8,r9,-14360
	ctx.r8.s64 = ctx.r9.s64 + -14360;
	// lfs f1,30692(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 30692);
	ctx.f1.f64 = double(temp.f32);
	// li r7,132
	ctx.r7.s64 = 132;
	// bl 0x822e1660
	ctx.lr = 0x82342A90;
	sub_822E1660(ctx, base);
	// lis r6,-31816
	ctx.r6.s64 = -2085093376;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// lis r4,-32251
	ctx.r4.s64 = -2113601536;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r8,r4,-14440
	ctx.r8.s64 = ctx.r4.s64 + -14440;
	// stw r3,-11896(r6)
	PPC_STORE_U32(ctx.r6.u32 + -11896, ctx.r3.u32);
	// addi r3,r11,-14468
	ctx.r3.s64 = ctx.r11.s64 + -14468;
	// li r7,132
	ctx.r7.s64 = 132;
	// lfs f1,6028(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 6028);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822e1660
	ctx.lr = 0x82342AC0;
	sub_822E1660(ctx, base);
	// lis r10,-31816
	ctx.r10.s64 = -2085093376;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// lis r7,-32251
	ctx.r7.s64 = -2113601536;
	// addi r8,r8,-14544
	ctx.r8.s64 = ctx.r8.s64 + -14544;
	// stw r3,-11840(r10)
	PPC_STORE_U32(ctx.r10.u32 + -11840, ctx.r3.u32);
	// addi r3,r7,-14576
	ctx.r3.s64 = ctx.r7.s64 + -14576;
	// lfs f1,5808(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5808);
	ctx.f1.f64 = double(temp.f32);
	// li r7,132
	ctx.r7.s64 = 132;
	// bl 0x822e1660
	ctx.lr = 0x82342AF0;
	sub_822E1660(ctx, base);
	// lis r6,-31816
	ctx.r6.s64 = -2085093376;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// lis r4,-32251
	ctx.r4.s64 = -2113601536;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r8,r4,-14620
	ctx.r8.s64 = ctx.r4.s64 + -14620;
	// stw r3,-11864(r6)
	PPC_STORE_U32(ctx.r6.u32 + -11864, ctx.r3.u32);
	// addi r3,r11,-14644
	ctx.r3.s64 = ctx.r11.s64 + -14644;
	// li r7,132
	ctx.r7.s64 = 132;
	// lfs f1,3628(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 3628);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822e1660
	ctx.lr = 0x82342B20;
	sub_822E1660(ctx, base);
	// lis r10,-31816
	ctx.r10.s64 = -2085093376;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// lis r6,-32251
	ctx.r6.s64 = -2113601536;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// li r7,132
	ctx.r7.s64 = 132;
	// stw r3,-11844(r10)
	PPC_STORE_U32(ctx.r10.u32 + -11844, ctx.r3.u32);
	// addi r8,r8,-14724
	ctx.r8.s64 = ctx.r8.s64 + -14724;
	// addi r3,r6,-14672
	ctx.r3.s64 = ctx.r6.s64 + -14672;
	// lfs f1,5188(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5188);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822e1660
	ctx.lr = 0x82342B50;
	sub_822E1660(ctx, base);
	// lis r5,-31816
	ctx.r5.s64 = -2085093376;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r8,r11,-14764
	ctx.r8.s64 = ctx.r11.s64 + -14764;
	// stw r3,-11908(r5)
	PPC_STORE_U32(ctx.r5.u32 + -11908, ctx.r3.u32);
	// addi r3,r10,-14788
	ctx.r3.s64 = ctx.r10.s64 + -14788;
	// li r7,132
	ctx.r7.s64 = 132;
	// lfs f1,5876(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 5876);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822e1660
	ctx.lr = 0x82342B80;
	sub_822E1660(ctx, base);
	// lis r9,-31816
	ctx.r9.s64 = -2085093376;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// lis r6,-32251
	ctx.r6.s64 = -2113601536;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// lis r5,-32251
	ctx.r5.s64 = -2113601536;
	// addi r8,r6,-14828
	ctx.r8.s64 = ctx.r6.s64 + -14828;
	// stw r3,-11860(r9)
	PPC_STORE_U32(ctx.r9.u32 + -11860, ctx.r3.u32);
	// addi r3,r5,-14852
	ctx.r3.s64 = ctx.r5.s64 + -14852;
	// lfs f1,-20412(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -20412);
	ctx.f1.f64 = double(temp.f32);
	// li r7,132
	ctx.r7.s64 = 132;
	// bl 0x822e1660
	ctx.lr = 0x82342BB0;
	sub_822E1660(ctx, base);
	// lis r4,-31816
	ctx.r4.s64 = -2085093376;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// addi r8,r11,-15056
	ctx.r8.s64 = ctx.r11.s64 + -15056;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// li r7,132
	ctx.r7.s64 = 132;
	// stw r3,-11832(r4)
	PPC_STORE_U32(ctx.r4.u32 + -11832, ctx.r3.u32);
	// addi r3,r10,-15084
	ctx.r3.s64 = ctx.r10.s64 + -15084;
	// bl 0x822e1660
	ctx.lr = 0x82342BDC;
	sub_822E1660(ctx, base);
	// lis r9,-31816
	ctx.r9.s64 = -2085093376;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// lis r6,-32251
	ctx.r6.s64 = -2113601536;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// lis r5,-32251
	ctx.r5.s64 = -2113601536;
	// addi r8,r6,-15168
	ctx.r8.s64 = ctx.r6.s64 + -15168;
	// stw r3,-11904(r9)
	PPC_STORE_U32(ctx.r9.u32 + -11904, ctx.r3.u32);
	// addi r3,r5,-15208
	ctx.r3.s64 = ctx.r5.s64 + -15208;
	// lfs f1,11388(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 11388);
	ctx.f1.f64 = double(temp.f32);
	// li r7,132
	ctx.r7.s64 = 132;
	// bl 0x822e1660
	ctx.lr = 0x82342C0C;
	sub_822E1660(ctx, base);
	// lis r4,-31816
	ctx.r4.s64 = -2085093376;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// fmr f3,f28
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f28.f64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// addi r8,r10,-15312
	ctx.r8.s64 = ctx.r10.s64 + -15312;
	// stw r3,-11848(r4)
	PPC_STORE_U32(ctx.r4.u32 + -11848, ctx.r3.u32);
	// lfs f27,6032(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6032);
	ctx.f27.f64 = double(temp.f32);
	// addi r3,r9,-15344
	ctx.r3.s64 = ctx.r9.s64 + -15344;
	// li r7,132
	ctx.r7.s64 = 132;
	// fmr f1,f27
	ctx.f1.f64 = ctx.f27.f64;
	// bl 0x822e1660
	ctx.lr = 0x82342C40;
	sub_822E1660(ctx, base);
	// lis r7,-31816
	ctx.r7.s64 = -2085093376;
	// lis r6,-32251
	ctx.r6.s64 = -2113601536;
	// fmr f3,f28
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f28.f64;
	// lis r5,-32251
	ctx.r5.s64 = -2113601536;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// addi r8,r6,-15448
	ctx.r8.s64 = ctx.r6.s64 + -15448;
	// fmr f1,f27
	ctx.f1.f64 = ctx.f27.f64;
	// stw r3,-11888(r7)
	PPC_STORE_U32(ctx.r7.u32 + -11888, ctx.r3.u32);
	// addi r3,r5,-15480
	ctx.r3.s64 = ctx.r5.s64 + -15480;
	// li r7,132
	ctx.r7.s64 = 132;
	// bl 0x822e1660
	ctx.lr = 0x82342C6C;
	sub_822E1660(ctx, base);
	// lis r4,-31816
	ctx.r4.s64 = -2085093376;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r6,r11,-15528
	ctx.r6.s64 = ctx.r11.s64 + -15528;
	// li r5,132
	ctx.r5.s64 = 132;
	// stw r3,-11852(r4)
	PPC_STORE_U32(ctx.r4.u32 + -11852, ctx.r3.u32);
	// addi r3,r10,-15556
	ctx.r3.s64 = ctx.r10.s64 + -15556;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x822e15d0
	ctx.lr = 0x82342C90;
	sub_822E15D0(ctx, base);
	// lis r9,-31816
	ctx.r9.s64 = -2085093376;
	// lis r6,-32190
	ctx.r6.s64 = -2109603840;
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// lis r7,-32251
	ctx.r7.s64 = -2113601536;
	// addi r4,r6,-32036
	ctx.r4.s64 = ctx.r6.s64 + -32036;
	// stw r3,-11828(r9)
	PPC_STORE_U32(ctx.r9.u32 + -11828, ctx.r3.u32);
	// addi r3,r8,-15592
	ctx.r3.s64 = ctx.r8.s64 + -15592;
	// addi r7,r7,-15636
	ctx.r7.s64 = ctx.r7.s64 + -15636;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x822e1828
	ctx.lr = 0x82342CBC;
	sub_822E1828(ctx, base);
	// lis r5,-31816
	ctx.r5.s64 = -2085093376;
	// lis r4,-32251
	ctx.r4.s64 = -2113601536;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r6,r4,-15712
	ctx.r6.s64 = ctx.r4.s64 + -15712;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,-11836(r5)
	PPC_STORE_U32(ctx.r5.u32 + -11836, ctx.r3.u32);
	// addi r3,r11,-15740
	ctx.r3.s64 = ctx.r11.s64 + -15740;
	// li r5,132
	ctx.r5.s64 = 132;
	// bl 0x822e15d0
	ctx.lr = 0x82342CE0;
	sub_822E15D0(ctx, base);
	// lis r10,-31816
	ctx.r10.s64 = -2085093376;
	// lis r7,-32251
	ctx.r7.s64 = -2113601536;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// stw r3,-11876(r10)
	PPC_STORE_U32(ctx.r10.u32 + -11876, ctx.r3.u32);
	// addi r3,r7,-15772
	ctx.r3.s64 = ctx.r7.s64 + -15772;
	// addi r8,r9,-15936
	ctx.r8.s64 = ctx.r9.s64 + -15936;
	// li r7,132
	ctx.r7.s64 = 132;
	// lfs f1,2416(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 2416);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822e1660
	ctx.lr = 0x82342D10;
	sub_822E1660(ctx, base);
	// lis r5,-31816
	ctx.r5.s64 = -2085093376;
	// lis r4,-32251
	ctx.r4.s64 = -2113601536;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// addi r8,r4,-16072
	ctx.r8.s64 = ctx.r4.s64 + -16072;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// li r7,132
	ctx.r7.s64 = 132;
	// stw r3,-11868(r5)
	PPC_STORE_U32(ctx.r5.u32 + -11868, ctx.r3.u32);
	// addi r3,r11,-16104
	ctx.r3.s64 = ctx.r11.s64 + -16104;
	// bl 0x822e1660
	ctx.lr = 0x82342D3C;
	sub_822E1660(ctx, base);
	// lis r10,-31815
	ctx.r10.s64 = -2085027840;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// lis r7,-32251
	ctx.r7.s64 = -2113601536;
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// stw r3,-4628(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4628, ctx.r3.u32);
	// addi r3,r7,-16132
	ctx.r3.s64 = ctx.r7.s64 + -16132;
	// addi r8,r8,-16264
	ctx.r8.s64 = ctx.r8.s64 + -16264;
	// lfs f1,6820(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 6820);
	ctx.f1.f64 = double(temp.f32);
	// li r7,132
	ctx.r7.s64 = 132;
	// bl 0x822e1660
	ctx.lr = 0x82342D6C;
	sub_822E1660(ctx, base);
	// lis r5,-31816
	ctx.r5.s64 = -2085093376;
	// stw r3,-11900(r5)
	PPC_STORE_U32(ctx.r5.u32 + -11900, ctx.r3.u32);
	// lis r4,-32251
	ctx.r4.s64 = -2113601536;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r6,r4,-16320
	ctx.r6.s64 = ctx.r4.s64 + -16320;
	// addi r3,r11,-16348
	ctx.r3.s64 = ctx.r11.s64 + -16348;
	// li r5,132
	ctx.r5.s64 = 132;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822e15d0
	ctx.lr = 0x82342D90;
	sub_822E15D0(ctx, base);
	// lis r10,-31816
	ctx.r10.s64 = -2085093376;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// lis r7,-32251
	ctx.r7.s64 = -2113601536;
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// stw r3,-11912(r10)
	PPC_STORE_U32(ctx.r10.u32 + -11912, ctx.r3.u32);
	// addi r3,r7,-16376
	ctx.r3.s64 = ctx.r7.s64 + -16376;
	// addi r8,r8,-16496
	ctx.r8.s64 = ctx.r8.s64 + -16496;
	// lfs f1,7324(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 7324);
	ctx.f1.f64 = double(temp.f32);
	// li r7,132
	ctx.r7.s64 = 132;
	// bl 0x822e1660
	ctx.lr = 0x82342DC0;
	sub_822E1660(ctx, base);
	// lis r6,-31816
	ctx.r6.s64 = -2085093376;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// lis r4,-32251
	ctx.r4.s64 = -2113601536;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r8,r4,-16552
	ctx.r8.s64 = ctx.r4.s64 + -16552;
	// stw r3,-11872(r6)
	PPC_STORE_U32(ctx.r6.u32 + -11872, ctx.r3.u32);
	// addi r3,r11,-16576
	ctx.r3.s64 = ctx.r11.s64 + -16576;
	// li r7,132
	ctx.r7.s64 = 132;
	// lfs f1,14260(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 14260);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822e1660
	ctx.lr = 0x82342DF0;
	sub_822E1660(ctx, base);
	// lis r9,-31816
	ctx.r9.s64 = -2085093376;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f30.f64;
	// lis r7,-32251
	ctx.r7.s64 = -2113601536;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// stw r3,-11916(r9)
	PPC_STORE_U32(ctx.r9.u32 + -11916, ctx.r3.u32);
	// addi r3,r7,-16612
	ctx.r3.s64 = ctx.r7.s64 + -16612;
	// lfs f30,5488(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5488);
	ctx.f30.f64 = double(temp.f32);
	// addi r8,r8,-16656
	ctx.r8.s64 = ctx.r8.s64 + -16656;
	// li r7,132
	ctx.r7.s64 = 132;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x822e1660
	ctx.lr = 0x82342E24;
	sub_822E1660(ctx, base);
	// lis r6,-31816
	ctx.r6.s64 = -2085093376;
	// lis r5,-32251
	ctx.r5.s64 = -2113601536;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// lis r4,-32251
	ctx.r4.s64 = -2113601536;
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// addi r8,r5,-16700
	ctx.r8.s64 = ctx.r5.s64 + -16700;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// li r7,132
	ctx.r7.s64 = 132;
	// stw r3,-11856(r6)
	PPC_STORE_U32(ctx.r6.u32 + -11856, ctx.r3.u32);
	// addi r3,r4,-16736
	ctx.r3.s64 = ctx.r4.s64 + -16736;
	// bl 0x822e1660
	ctx.lr = 0x82342E50;
	sub_822E1660(ctx, base);
	// lis r11,-31816
	ctx.r11.s64 = -2085093376;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// addi r8,r10,-16788
	ctx.r8.s64 = ctx.r10.s64 + -16788;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// li r7,132
	ctx.r7.s64 = 132;
	// stw r3,-11892(r11)
	PPC_STORE_U32(ctx.r11.u32 + -11892, ctx.r3.u32);
	// addi r3,r9,-16820
	ctx.r3.s64 = ctx.r9.s64 + -16820;
	// bl 0x822e1660
	ctx.lr = 0x82342E7C;
	sub_822E1660(ctx, base);
	// lis r7,-31816
	ctx.r7.s64 = -2085093376;
	// lis r6,-32251
	ctx.r6.s64 = -2113601536;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// lis r5,-32251
	ctx.r5.s64 = -2113601536;
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// addi r8,r6,-16920
	ctx.r8.s64 = ctx.r6.s64 + -16920;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// stw r3,-1320(r7)
	PPC_STORE_U32(ctx.r7.u32 + -1320, ctx.r3.u32);
	// addi r3,r5,-16960
	ctx.r3.s64 = ctx.r5.s64 + -16960;
	// li r7,132
	ctx.r7.s64 = 132;
	// bl 0x822e1660
	ctx.lr = 0x82342EA8;
	sub_822E1660(ctx, base);
	// lis r4,-31816
	ctx.r4.s64 = -2085093376;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// stw r3,-12428(r4)
	PPC_STORE_U32(ctx.r4.u32 + -12428, ctx.r3.u32);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r8,r11,-17020
	ctx.r8.s64 = ctx.r11.s64 + -17020;
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// addi r3,r10,-17052
	ctx.r3.s64 = ctx.r10.s64 + -17052;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// li r7,132
	ctx.r7.s64 = 132;
	// bl 0x822e1660
	ctx.lr = 0x82342ED4;
	sub_822E1660(ctx, base);
	// lis r9,-31816
	ctx.r9.s64 = -2085093376;
	// lis r7,-32251
	ctx.r7.s64 = -2113601536;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// addi r8,r8,-17200
	ctx.r8.s64 = ctx.r8.s64 + -17200;
	// stw r3,-12424(r9)
	PPC_STORE_U32(ctx.r9.u32 + -12424, ctx.r3.u32);
	// addi r3,r7,-17096
	ctx.r3.s64 = ctx.r7.s64 + -17096;
	// li r7,132
	ctx.r7.s64 = 132;
	// bl 0x822e1660
	ctx.lr = 0x82342F00;
	sub_822E1660(ctx, base);
	// lis r6,-31815
	ctx.r6.s64 = -2085027840;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// lis r4,-32251
	ctx.r4.s64 = -2113601536;
	// fmr f1,f27
	ctx.f1.f64 = ctx.f27.f64;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r8,r4,-17248
	ctx.r8.s64 = ctx.r4.s64 + -17248;
	// stw r3,-4632(r6)
	PPC_STORE_U32(ctx.r6.u32 + -4632, ctx.r3.u32);
	// addi r3,r11,-17280
	ctx.r3.s64 = ctx.r11.s64 + -17280;
	// lfs f30,5992(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 5992);
	ctx.f30.f64 = double(temp.f32);
	// li r7,132
	ctx.r7.s64 = 132;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// bl 0x822e1660
	ctx.lr = 0x82342F34;
	sub_822E1660(ctx, base);
	// lis r10,-31816
	ctx.r10.s64 = -2085093376;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// addi r6,r9,-17408
	ctx.r6.s64 = ctx.r9.s64 + -17408;
	// li r5,132
	ctx.r5.s64 = 132;
	// stw r3,-12420(r10)
	PPC_STORE_U32(ctx.r10.u32 + -12420, ctx.r3.u32);
	// addi r3,r8,-17448
	ctx.r3.s64 = ctx.r8.s64 + -17448;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x822e15d0
	ctx.lr = 0x82342F58;
	sub_822E15D0(ctx, base);
	// lis r7,-31815
	ctx.r7.s64 = -2085027840;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// lis r5,-32251
	ctx.r5.s64 = -2113601536;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// lis r4,-32251
	ctx.r4.s64 = -2113601536;
	// addi r8,r5,-17528
	ctx.r8.s64 = ctx.r5.s64 + -17528;
	// stw r3,-4640(r7)
	PPC_STORE_U32(ctx.r7.u32 + -4640, ctx.r3.u32);
	// addi r3,r4,-17560
	ctx.r3.s64 = ctx.r4.s64 + -17560;
	// li r7,132
	ctx.r7.s64 = 132;
	// lfs f1,4292(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4292);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822e1660
	ctx.lr = 0x82342F88;
	sub_822E1660(ctx, base);
	// lis r11,-31816
	ctx.r11.s64 = -2085093376;
	// stw r3,-1316(r11)
	PPC_STORE_U32(ctx.r11.u32 + -1316, ctx.r3.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x823de070
	ctx.lr = 0x82342F9C;
	__restfpr_27(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82342990) {
	__imp__sub_82342990(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82342FA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82342FB0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,276(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	// lis r11,-31816
	ctx.r11.s64 = -2085093376;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r10,r11,-12608
	ctx.r10.s64 = ctx.r11.s64 + -12608;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r30,r31,216
	ctx.r30.s64 = ctx.r31.s64 + 216;
	// lwz r9,560(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 560);
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r29,r7,r10
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// lwz r6,552(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 552);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82343040
	if (ctx.cr6.eq) goto loc_82343040;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r30,264
	ctx.r11.s64 = ctx.r30.s64 + 264;
	// addi r9,r31,932
	ctx.r9.s64 = ctx.r31.s64 + 932;
loc_82342FF0:
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// blt cr6,0x82343014
	if (ctx.cr6.lt) goto loc_82343014;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f11,556(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 556);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f12,f11
	ctx.cr6.compare(ctx.f12.f64, ctx.f11.f64);
	// bge cr6,0x8234302c
	if (!ctx.cr6.lt) goto loc_8234302C;
loc_82343014:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// blt cr6,0x82342ff0
	if (ctx.cr6.lt) goto loc_82342FF0;
	// b 0x82343040
	goto loc_82343040;
loc_8234302C:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,104
	ctx.r4.s64 = 104;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8222f978
	ctx.lr = 0x8234303C;
	sub_8222F978(ctx, base);
	// li r8,1
	ctx.r8.s64 = 1;
loc_82343040:
	// lwz r11,544(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 544);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823430b4
	if (ctx.cr6.eq) goto loc_823430B4;
	// clrlwi r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823430b4
	if (!ctx.cr6.eq) goto loc_823430B4;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r30,264
	ctx.r11.s64 = ctx.r30.s64 + 264;
	// addi r9,r31,932
	ctx.r9.s64 = ctx.r31.s64 + 932;
loc_82343064:
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// blt cr6,0x82343088
	if (ctx.cr6.lt) goto loc_82343088;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f11,548(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 548);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f12,f11
	ctx.cr6.compare(ctx.f12.f64, ctx.f11.f64);
	// bge cr6,0x823430a4
	if (!ctx.cr6.lt) goto loc_823430A4;
loc_82343088:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// blt cr6,0x82343064
	if (ctx.cr6.lt) goto loc_82343064;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_823430A4:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,103
	ctx.r4.s64 = 103;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8222f978
	ctx.lr = 0x823430B4;
	sub_8222F978(ctx, base);
loc_823430B4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82342FA8) {
	__imp__sub_82342FA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823430BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823430BC) {
	__imp__sub_823430BC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823430C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x823430C8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32020
	ctx.r10.s64 = -2098462720;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r9,r10,9624
	ctx.r9.s64 = ctx.r10.s64 + 9624;
	// addi r31,r11,13372
	ctx.r31.s64 = ctx.r11.s64 + 13372;
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r7,r8,-17572
	ctx.r7.s64 = ctx.r8.s64 + -17572;
	// li r5,32
	ctx.r5.s64 = 32;
	// lwz r6,36(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 36);
	// li r4,1720
	ctx.r4.s64 = 1720;
	// bl 0x8222de40
	ctx.lr = 0x823430F8;
	sub_8222DE40(ctx, base);
	// lis r7,-31816
	ctx.r7.s64 = -2085093376;
	// rlwinm r29,r3,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r30,r7,-12608
	ctx.r30.s64 = ctx.r7.s64 + -12608;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwzx r6,r29,r30
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r30.u32);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x82343120
	if (!ctx.cr6.eq) goto loc_82343120;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823427b8
	ctx.lr = 0x8234311C;
	sub_823427B8(ctx, base);
	// stwx r3,r29,r30
	PPC_STORE_U32(ctx.r29.u32 + ctx.r30.u32, ctx.r3.u32);
loc_82343120:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222e230
	ctx.lr = 0x82343128;
	sub_8222E230(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823430C0) {
	__imp__sub_823430C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82343130) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82343138;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x823430c0
	ctx.lr = 0x82343140;
	sub_823430C0(ctx, base);
	// lis r11,-31816
	ctx.r11.s64 = -2085093376;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r30,r11,-1312
	ctx.r30.s64 = ctx.r11.s64 + -1312;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_82343150:
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x82352e08
	ctx.lr = 0x82343158;
	sub_82352E08(ctx, base);
	// addis r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 65536;
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// addi r31,r31,972
	ctx.r31.s64 = ctx.r31.s64 + 972;
	// addi r11,r11,-3328
	ctx.r11.s64 = ctx.r11.s64 + -3328;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82343150
	if (ctx.cr6.lt) goto loc_82343150;
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// addi r10,r11,9624
	ctx.r10.s64 = ctx.r11.s64 + 9624;
	// stw r30,28(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28, ctx.r30.u32);
	// bl 0x8225b1a0
	ctx.lr = 0x82343180;
	sub_8225B1A0(ctx, base);
	// bl 0x823528d0
	ctx.lr = 0x82343184;
	sub_823528D0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82343130) {
	__imp__sub_82343130(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8234318C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8234318C) {
	__imp__sub_8234318C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82343190) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x82343198;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// addi r26,r11,9624
	ctx.r26.s64 = ctx.r11.s64 + 9624;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r9,8(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82343220
	if (!ctx.cr6.gt) goto loc_82343220;
	// lis r11,-32052
	ctx.r11.s64 = -2100559872;
	// lis r10,-32024
	ctx.r10.s64 = -2098724864;
	// addi r11,r11,26552
	ctx.r11.s64 = ctx.r11.s64 + 26552;
	// addi r28,r10,11296
	ctx.r28.s64 = ctx.r10.s64 + 11296;
	// addi r31,r11,302
	ctx.r31.s64 = ctx.r11.s64 + 302;
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// addi r27,r11,-25976
	ctx.r27.s64 = ctx.r11.s64 + -25976;
loc_823431D4:
	// lbzx r11,r30,r28
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r28.u32);
	// addi r29,r31,-302
	ctx.r29.s64 = ctx.r31.s64 + -302;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82343210
	if (ctx.cr6.eq) goto loc_82343210;
	// lhz r8,338(r27)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r27.u32 + 338);
	// lhz r10,-10(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + -10);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82343210
	if (!ctx.cr6.eq) goto loc_82343210;
	// lhz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// bl 0x822a13a0
	ctx.lr = 0x823431FC;
	sub_822A13A0(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x822e8058
	ctx.lr = 0x82343204;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8234322c
	if (ctx.cr6.eq) goto loc_8234322C;
	// lwz r9,8(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
loc_82343210:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,624
	ctx.r31.s64 = ctx.r31.s64 + 624;
	// cmpw cr6,r30,r9
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x823431d4
	if (ctx.cr6.lt) goto loc_823431D4;
loc_82343220:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_8234322C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82343190) {
	__imp__sub_82343190(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82343238) {
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
	// lhz r3,604(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 604);
	// bl 0x8222e3b0
	ctx.lr = 0x82343258;
	sub_8222E3B0(ctx, base);
	// bl 0x822a13a0
	ctx.lr = 0x8234325C;
	sub_822A13A0(ctx, base);
	// bl 0x82343190
	ctx.lr = 0x82343260;
	sub_82343190(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823432e4
	if (ctx.cr6.eq) goto loc_823432E4;
	// lhz r11,132(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 132);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8234329c
	if (!ctx.cr6.eq) goto loc_8234329C;
	// lhz r3,604(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 604);
	// bl 0x8222e3b0
	ctx.lr = 0x82343280;
	sub_8222E3B0(ctx, base);
	// bl 0x822a13a0
	ctx.lr = 0x82343284;
	sub_822A13A0(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-13860
	ctx.r4.s64 = ctx.r11.s64 + -13860;
	// li r3,15
	ctx.r3.s64 = 15;
	// bl 0x82280c30
	ctx.lr = 0x82343298;
	sub_82280C30(ctx, base);
	// b 0x823432e4
	goto loc_823432E4;
loc_8234329C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82340cf0
	ctx.lr = 0x823432A4;
	sub_82340CF0(ctx, base);
	// lhz r10,132(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 132);
	// li r11,4
	ctx.r11.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,173(r31)
	PPC_STORE_U8(ctx.r31.u32 + 173, ctx.r11.u8);
	// sth r10,132(r31)
	PPC_STORE_U16(ctx.r31.u32 + 132, ctx.r10.u16);
	// bl 0x8233cb28
	ctx.lr = 0x823432BC;
	sub_8233CB28(ctx, base);
	// lwz r8,308(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 308);
	// lis r9,128
	ctx.r9.s64 = 8388608;
	// clrlwi r7,r8,31
	ctx.r7.u64 = ctx.r8.u32 & 0x1;
	// stw r9,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r9.u32);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x823432dc
	if (ctx.cr6.eq) goto loc_823432DC;
	// lis r11,160
	ctx.r11.s64 = 10485760;
	// stw r11,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r11.u32);
loc_823432DC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82340d30
	ctx.lr = 0x823432E4;
	sub_82340D30(ctx, base);
loc_823432E4:
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

PPC_WEAK_FUNC(sub_82343238) {
	__imp__sub_82343238(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823432FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823432FC) {
	__imp__sub_823432FC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82343300) {
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
	// bl 0x82352980
	ctx.lr = 0x82343318;
	sub_82352980(ctx, base);
	// lis r11,-31816
	ctx.r11.s64 = -2085093376;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r30,r11,-1312
	ctx.r30.s64 = ctx.r11.s64 + -1312;
loc_82343324:
	// mulli r11,r31,972
	ctx.r11.s64 = ctx.r31.s64 * 972;
	// lwzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82343338
	if (ctx.cr6.eq) goto loc_82343338;
	// bl 0x82343238
	ctx.lr = 0x82343338;
	sub_82343238(ctx, base);
loc_82343338:
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// extsh r31,r11
	ctx.r31.s64 = ctx.r11.s16;
	// cmpwi cr6,r31,64
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 64, ctx.xer);
	// blt cr6,0x82343324
	if (ctx.cr6.lt) goto loc_82343324;
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

PPC_WEAK_FUNC(sub_82343300) {
	__imp__sub_82343300(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82343360) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82343360) {
	__imp__sub_82343360(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82343364) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82343364) {
	__imp__sub_82343364(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82343368) {
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
	// lis r11,-31816
	ctx.r11.s64 = -2085093376;
	// addi r30,r11,-1312
	ctx.r30.s64 = ctx.r11.s64 + -1312;
	// addi r31,r30,16
	ctx.r31.s64 = ctx.r30.s64 + 16;
loc_82343388:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82352f30
	ctx.lr = 0x82343390;
	sub_82352F30(ctx, base);
	// addis r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 65536;
	// addi r31,r31,972
	ctx.r31.s64 = ctx.r31.s64 + 972;
	// addi r11,r11,-3312
	ctx.r11.s64 = ctx.r11.s64 + -3312;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82343388
	if (ctx.cr6.lt) goto loc_82343388;
	// bl 0x823528e0
	ctx.lr = 0x823433A8;
	sub_823528E0(ctx, base);
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

PPC_WEAK_FUNC(sub_82343368) {
	__imp__sub_82343368(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823433C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x823433C8;
	__savegprlr_27(ctx, base);
	// stwu r1,-1120(r1)
	ea = -1120 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31816
	ctx.r11.s64 = -2085093376;
	// lis r10,-31816
	ctx.r10.s64 = -2085093376;
	// addi r27,r11,-1312
	ctx.r27.s64 = ctx.r11.s64 + -1312;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// addi r29,r10,-12608
	ctx.r29.s64 = ctx.r10.s64 + -12608;
	// addi r28,r11,-18008
	ctx.r28.s64 = ctx.r11.s64 + -18008;
loc_823433EC:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// li r5,972
	ctx.r5.s64 = 972;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x823de1f0
	ctx.lr = 0x823433FC;
	sub_823DE1F0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// li r4,4
	ctx.r4.s64 = 4;
	// subfe r9,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// bl 0x822e40f0
	ctx.lr = 0x8234341C;
	sub_822E40F0(ctx, base);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82343494
	if (ctx.cr6.eq) goto loc_82343494;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r6,972
	ctx.r6.s64 = 972;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8223dc88
	ctx.lr = 0x82343440;
	sub_8223DC88(ctx, base);
	// lwz r11,560(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 560);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,256
	ctx.r4.s64 = 256;
	// lwzx r9,r10,r29
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r29.u32);
	// lwz r3,0(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// bl 0x8223cf38
	ctx.lr = 0x8234345C;
	sub_8223CF38(ctx, base);
	// lwz r8,528(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 528);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// addic r7,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r7.s64 = ctx.r8.s64 + -1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// subfe r6,r7,r8
	temp.u8 = (~ctx.r7.u32 + ctx.r8.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stb r6,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r6.u8);
	// bl 0x822e40f0
	ctx.lr = 0x8234347C;
	sub_822E40F0(ctx, base);
	// lbz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82343494
	if (ctx.cr6.eq) goto loc_82343494;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,528(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 528);
	// bl 0x8225b870
	ctx.lr = 0x82343494;
	sub_8225B870(ctx, base);
loc_82343494:
	// addis r11,r27,1
	ctx.r11.s64 = ctx.r27.s64 + 65536;
	// addi r31,r31,972
	ctx.r31.s64 = ctx.r31.s64 + 972;
	// addi r11,r11,-3328
	ctx.r11.s64 = ctx.r11.s64 + -3328;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x823433ec
	if (ctx.cr6.lt) goto loc_823433EC;
	// addi r1,r1,1120
	ctx.r1.s64 = ctx.r1.s64 + 1120;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823433C0) {
	__imp__sub_823433C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823434B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x823434B8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r29,276(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r30,332(r3)
	PPC_STORE_U32(ctx.r3.u32 + 332, ctx.r30.u32);
	// bl 0x82342fa8
	ctx.lr = 0x823434D0;
	sub_82342FA8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r29,716
	ctx.r3.s64 = ctx.r29.s64 + 716;
	// bl 0x822a24e0
	ctx.lr = 0x823434DC;
	sub_822A24E0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r29,718
	ctx.r3.s64 = ctx.r29.s64 + 718;
	// bl 0x822a24e0
	ctx.lr = 0x823434E8;
	sub_822A24E0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r29,784
	ctx.r3.s64 = ctx.r29.s64 + 784;
	// bl 0x821e2e18
	ctx.lr = 0x823434F4;
	sub_821E2E18(ctx, base);
	// li r11,10
	ctx.r11.s64 = 10;
	// stw r30,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r30.u32);
	// addi r3,r29,16
	ctx.r3.s64 = ctx.r29.s64 + 16;
	// stb r11,291(r31)
	PPC_STORE_U8(ctx.r31.u32 + 291, ctx.r11.u8);
	// stb r30,289(r31)
	PPC_STORE_U8(ctx.r31.u32 + 289, ctx.r30.u8);
	// stb r30,290(r31)
	PPC_STORE_U8(ctx.r31.u32 + 290, ctx.r30.u8);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// bl 0x82352f30
	ctx.lr = 0x8234351C;
	sub_82352F30(ctx, base);
	// lwz r3,528(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 528);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82343530
	if (ctx.cr6.eq) goto loc_82343530;
	// bl 0x8225b6c8
	ctx.lr = 0x8234352C;
	sub_8225B6C8(ctx, base);
	// stw r30,528(r29)
	PPC_STORE_U32(ctx.r29.u32 + 528, ctx.r30.u32);
loc_82343530:
	// stw r30,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r30.u32);
	// stw r30,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r30.u32);
	// stw r30,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823434B0) {
	__imp__sub_823434B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82343544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82343544) {
	__imp__sub_82343544(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82343548) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,312(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 312);
	// rlwinm r10,r11,0,7,7
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r10,16
	ctx.r10.s64 = 16;
	// lis r11,-31816
	ctx.r11.s64 = -2085093376;
	// li r9,2047
	ctx.r9.s64 = 2047;
	// addi r11,r11,-1312
	ctx.r11.s64 = ctx.r11.s64 + -1312;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// addi r11,r11,780
	ctx.r11.s64 = ctx.r11.s64 + 780;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82343574:
	// lwz r8,-780(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + -780);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82343598
	if (ctx.cr6.eq) goto loc_82343598;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lhz r7,126(r3)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r3.u32 + 126);
	// cmpw cr6,r8,r7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x82343598
	if (!ctx.cr6.eq) goto loc_82343598;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r10,-20(r11)
	PPC_STORE_U32(ctx.r11.u32 + -20, ctx.r10.u32);
loc_82343598:
	// lwz r8,192(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 192);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x823435bc
	if (ctx.cr6.eq) goto loc_823435BC;
	// lwz r8,972(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 972);
	// lhz r7,126(r3)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r3.u32 + 126);
	// cmpw cr6,r8,r7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x823435bc
	if (!ctx.cr6.eq) goto loc_823435BC;
	// stw r9,972(r11)
	PPC_STORE_U32(ctx.r11.u32 + 972, ctx.r9.u32);
	// stw r10,952(r11)
	PPC_STORE_U32(ctx.r11.u32 + 952, ctx.r10.u32);
loc_823435BC:
	// lwz r8,1164(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1164);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x823435e0
	if (ctx.cr6.eq) goto loc_823435E0;
	// lwz r8,1944(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1944);
	// lhz r7,126(r3)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r3.u32 + 126);
	// cmpw cr6,r8,r7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x823435e0
	if (!ctx.cr6.eq) goto loc_823435E0;
	// stw r9,1944(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1944, ctx.r9.u32);
	// stw r10,1924(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1924, ctx.r10.u32);
loc_823435E0:
	// lwz r8,2136(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2136);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82343604
	if (ctx.cr6.eq) goto loc_82343604;
	// lwz r8,2916(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2916);
	// lhz r7,126(r3)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r3.u32 + 126);
	// cmpw cr6,r8,r7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x82343604
	if (!ctx.cr6.eq) goto loc_82343604;
	// stw r9,2916(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2916, ctx.r9.u32);
	// stw r10,2896(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2896, ctx.r10.u32);
loc_82343604:
	// addi r11,r11,3888
	ctx.r11.s64 = ctx.r11.s64 + 3888;
	// bdnz 0x82343574
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82343574;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82343548) {
	__imp__sub_82343548(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82343610) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31816
	ctx.r11.s64 = -2085093376;
	// mulli r10,r3,972
	ctx.r10.s64 = ctx.r3.s64 * 972;
	// addi r11,r11,-1312
	ctx.r11.s64 = ctx.r11.s64 + -1312;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82343610) {
	__imp__sub_82343610(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82343624) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82343624) {
	__imp__sub_82343624(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82343628) {
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
	// stfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f2,84(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// stfs f3,88(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lfs f0,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// bl 0x821f2d08
	ctx.lr = 0x82343658;
	sub_821F2D08(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82343628) {
	__imp__sub_82343628(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82343668) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f2,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f3,84(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stfs f4,88(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// lfs f0,2416(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2416);
	ctx.f0.f64 = double(temp.f32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// fmuls f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// lfs f0,12168(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// lfs f1,5484(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5484);
	ctx.f1.f64 = double(temp.f32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stfs f1,96(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f1,100(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f1,104(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f13,108(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f13,112(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// bl 0x821f2d40
	ctx.lr = 0x823436CC;
	sub_821F2D40(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82343668) {
	__imp__sub_82343668(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823436DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823436DC) {
	__imp__sub_823436DC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823436E0) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fadds f12,f0,f2
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f2.f64));
	// lfs f13,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stfs f3,96(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// lfs f0,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stfs f4,100(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// stfs f11,84(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f5,104(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x821f35e0
	ctx.lr = 0x8234373C;
	sub_821F35E0(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821f35e0
	ctx.lr = 0x82343758;
	sub_821F35E0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
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

PPC_WEAK_FUNC(sub_823436E0) {
	__imp__sub_823436E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8234376C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8234376C) {
	__imp__sub_8234376C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82343770) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x82343778;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r27,276(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r31,-1
	ctx.r31.s64 = -1;
	// bl 0x822acb68
	ctx.lr = 0x82343790;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823437f8
	if (ctx.cr6.eq) goto loc_823437F8;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b2288
	ctx.lr = 0x823437A0;
	sub_822B2288(ctx, base);
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823437f4
	if (ctx.cr6.eq) goto loc_823437F4;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b2168
	ctx.lr = 0x823437B8;
	sub_822B2168(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8233d278
	ctx.lr = 0x823437C4;
	sub_8233D278(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x823437f8
	if (!ctx.cr6.lt) goto loc_823437F8;
	// lhz r3,302(r30)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r30.u32 + 302);
	// bl 0x822a13a0
	ctx.lr = 0x823437D8;
	sub_822A13A0(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r11,-13792
	ctx.r3.s64 = ctx.r11.s64 + -13792;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x822e84f0
	ctx.lr = 0x823437EC;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x823437F0;
	sub_822AD350(ctx, base);
	// b 0x823437f8
	goto loc_823437F8;
loc_823437F4:
	// li r31,-1
	ctx.r31.s64 = -1;
loc_823437F8:
	// bl 0x822acb68
	ctx.lr = 0x823437FC;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8234380c
	if (ctx.cr6.eq) goto loc_8234380C;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge cr6,0x8234385c
	if (!ctx.cr6.lt) goto loc_8234385C;
loc_8234380C:
	// addi r11,r29,228
	ctx.r11.s64 = ctx.r29.s64 + 228;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r27
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r27.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x82343860
	if (!ctx.cr6.lt) goto loc_82343860;
	// lhz r3,302(r30)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r30.u32 + 302);
	// bl 0x822a13a0
	ctx.lr = 0x82343828;
	sub_822A13A0(ctx, base);
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-32252
	ctx.r9.s64 = ctx.r11.s64 + -32252;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lhz r3,0(r8)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r8.u32 + 0);
	// bl 0x822a13a0
	ctx.lr = 0x82343844;
	sub_822A13A0(ctx, base);
	// lis r7,-32251
	ctx.r7.s64 = -2113601536;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r7,-13808
	ctx.r3.s64 = ctx.r7.s64 + -13808;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x822e84f0
	ctx.lr = 0x82343858;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x8234385C;
	sub_822AD350(ctx, base);
loc_8234385C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82343860:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82343770) {
	__imp__sub_82343770(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82343868) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x82343870;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,233
	ctx.r11.s64 = ctx.r4.s64 + 233;
	// lwz r29,276(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r28,r11,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwzx r10,r28,r29
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r29.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge cr6,0x823438d0
	if (!ctx.cr6.lt) goto loc_823438D0;
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-32276
	ctx.r9.s64 = ctx.r11.s64 + -32276;
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lhz r3,0(r8)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r8.u32 + 0);
	// bl 0x822a13a0
	ctx.lr = 0x823438AC;
	sub_822A13A0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lhz r3,302(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 302);
	// bl 0x822a13a0
	ctx.lr = 0x823438B8;
	sub_822A13A0(ctx, base);
	// lis r7,-32251
	ctx.r7.s64 = -2113601536;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r7,-13772
	ctx.r4.s64 = ctx.r7.s64 + -13772;
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// bl 0x822830e8
	ctx.lr = 0x823438D0;
	sub_822830E8(ctx, base);
loc_823438D0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r4,r28,r29
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r29.u32);
	// bl 0x8222ed80
	ctx.lr = 0x823438DC;
	sub_8222ED80(ctx, base);
	// addi r11,r3,16
	ctx.r11.s64 = ctx.r3.s64 + 16;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82343868) {
	__imp__sub_82343868(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82343900) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82343908;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,276(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r31,r4,192
	ctx.r31.s64 = ctx.r4.s64 + 192;
	// li r29,6
	ctx.r29.s64 = 6;
	// addi r30,r11,932
	ctx.r30.s64 = ctx.r11.s64 + 932;
loc_82343920:
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x82343940
	if (ctx.cr6.lt) goto loc_82343940;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8222eee0
	ctx.lr = 0x82343938;
	sub_8222EEE0(ctx, base);
	// lfs f0,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
loc_82343940:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x82343920
	if (!ctx.cr0.eq) goto loc_82343920;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82343900) {
	__imp__sub_82343900(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82343958) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82343960;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lfs f12,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f0,232(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 232);
	ctx.f0.f64 = double(temp.f32);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bne cr6,0x82343a18
	if (!ctx.cr6.eq) goto loc_82343A18;
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,236(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 236);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x82343a18
	if (!ctx.cr6.eq) goto loc_82343A18;
	// lfs f0,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,240(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 240);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f11,f0
	ctx.cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// bne cr6,0x82343a18
	if (!ctx.cr6.eq) goto loc_82343A18;
	// lfs f11,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f11,f12
	ctx.cr6.compare(ctx.f11.f64, ctx.f12.f64);
	// bne cr6,0x82343a18
	if (!ctx.cr6.eq) goto loc_82343A18;
	// lfs f12,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// bne cr6,0x82343a18
	if (!ctx.cr6.eq) goto loc_82343A18;
	// lfs f13,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x82343a18
	if (!ctx.cr6.eq) goto loc_82343A18;
	// lfs f12,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,244(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 244);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bne cr6,0x82343a18
	if (!ctx.cr6.eq) goto loc_82343A18;
	// lfs f13,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,248(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 248);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x82343a18
	if (!ctx.cr6.eq) goto loc_82343A18;
	// lfs f0,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,252(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 252);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f11,f0
	ctx.cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// bne cr6,0x82343a18
	if (!ctx.cr6.eq) goto loc_82343A18;
	// lfs f11,64(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f11,f12
	ctx.cr6.compare(ctx.f11.f64, ctx.f12.f64);
	// bne cr6,0x82343a18
	if (!ctx.cr6.eq) goto loc_82343A18;
	// lfs f12,68(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// bne cr6,0x82343a18
	if (!ctx.cr6.eq) goto loc_82343A18;
	// lfs f13,72(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x82343a58
	if (ctx.cr6.eq) goto loc_82343A58;
loc_82343A18:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222fb90
	ctx.lr = 0x82343A20;
	sub_8222FB90(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222fbe8
	ctx.lr = 0x82343A2C;
	sub_8222FBE8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,40(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// lfs f13,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,44(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// lfs f12,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,48(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// bl 0x82340d30
	ctx.lr = 0x82343A58;
	sub_82340D30(ctx, base);
loc_82343A58:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82343958) {
	__imp__sub_82343958(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82343A60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82343A68;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31816
	ctx.r11.s64 = -2085093376;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-12608
	ctx.r9.s64 = ctx.r11.s64 + -12608;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82343a94
	if (ctx.cr6.eq) goto loc_82343A94;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82343adc
	if (!ctx.cr6.eq) goto loc_82343ADC;
loc_82343A94:
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// li r30,0
	ctx.r30.s64 = 0;
	// subfe r10,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r9,r10,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// addic. r29,r9,4
	ctx.xer.ca = ctx.r9.u32 > 4294967291;
	ctx.r29.s64 = ctx.r9.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble 0x82343adc
	if (!ctx.cr0.gt) goto loc_82343ADC;
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r31,r11,-32276
	ctx.r31.s64 = ctx.r11.s64 + -32276;
loc_82343AB4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lhz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// bl 0x8233d278
	ctx.lr = 0x82343AC4;
	sub_8233D278(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82343ae8
	if (ctx.cr6.lt) goto loc_82343AE8;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r30,r29
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r29.s32, ctx.xer);
	// blt cr6,0x82343ab4
	if (ctx.cr6.lt) goto loc_82343AB4;
loc_82343ADC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_82343AE8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82343A60) {
	__imp__sub_82343A60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82343AF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82343AF4) {
	__imp__sub_82343AF4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82343AF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x82343B00;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32020
	ctx.r10.s64 = -2098462720;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r9,r10,9624
	ctx.r9.s64 = ctx.r10.s64 + 9624;
	// addi r27,r11,13372
	ctx.r27.s64 = ctx.r11.s64 + 13372;
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r6,36(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 36);
	// addi r7,r8,-17572
	ctx.r7.s64 = ctx.r8.s64 + -17572;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,1720
	ctx.r4.s64 = 1720;
	// bl 0x8222de40
	ctx.lr = 0x82343B38;
	sub_8222DE40(ctx, base);
	// lis r7,-31816
	ctx.r7.s64 = -2085093376;
	// rlwinm r28,r3,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r29,r7,-12608
	ctx.r29.s64 = ctx.r7.s64 + -12608;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwzx r6,r28,r29
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r29.u32);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x82343b64
	if (!ctx.cr6.eq) goto loc_82343B64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x823427b8
	ctx.lr = 0x82343B60;
	sub_823427B8(ctx, base);
	// stwx r3,r28,r29
	PPC_STORE_U32(ctx.r28.u32 + ctx.r29.u32, ctx.r3.u32);
loc_82343B64:
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpw cr6,r26,r31
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r31.s32, ctx.xer);
	// bne cr6,0x82343b84
	if (!ctx.cr6.eq) goto loc_82343B84;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r29,1
	ctx.r29.s64 = 1;
	// bl 0x8222eb90
	ctx.lr = 0x82343B80;
	sub_8222EB90(ctx, base);
	// b 0x82343bac
	goto loc_82343BAC;
loc_82343B84:
	// lhz r3,604(r30)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r30.u32 + 604);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82343bac
	if (ctx.cr6.eq) goto loc_82343BAC;
	// bl 0x8222e398
	ctx.lr = 0x82343B94;
	sub_8222E398(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82343bac
	if (ctx.cr6.eq) goto loc_82343BAC;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lhz r3,604(r30)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r30.u32 + 604);
	// li r29,1
	ctx.r29.s64 = 1;
	// bl 0x8222ebf0
	ctx.lr = 0x82343BAC;
	sub_8222EBF0(ctx, base);
loc_82343BAC:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8222feb8
	ctx.lr = 0x82343BB8;
	sub_8222FEB8(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82343a60
	ctx.lr = 0x82343BC4;
	sub_82343A60(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82343c4c
	if (!ctx.cr6.eq) goto loc_82343C4C;
	// clrlwi r10,r29,24
	ctx.r10.u64 = ctx.r29.u32 & 0xFF;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// addi r31,r11,-13648
	ctx.r31.s64 = ctx.r11.s64 + -13648;
	// beq cr6,0x82343bf0
	if (ctx.cr6.eq) goto loc_82343BF0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822830e8
	ctx.lr = 0x82343BF0;
	sub_822830E8(ctx, base);
loc_82343BF0:
	// lhz r3,604(r30)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r30.u32 + 604);
	// bl 0x8222e3b0
	ctx.lr = 0x82343BF8;
	sub_8222E3B0(ctx, base);
	// bl 0x822a13a0
	ctx.lr = 0x82343BFC;
	sub_822A13A0(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-13736
	ctx.r4.s64 = ctx.r11.s64 + -13736;
	// li r3,15
	ctx.r3.s64 = 15;
	// bl 0x82280c30
	ctx.lr = 0x82343C10;
	sub_82280C30(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8222eb90
	ctx.lr = 0x82343C1C;
	sub_8222EB90(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8222feb8
	ctx.lr = 0x82343C28;
	sub_8222FEB8(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82343a60
	ctx.lr = 0x82343C34;
	sub_82343A60(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82343c4c
	if (!ctx.cr6.eq) goto loc_82343C4C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822830e8
	ctx.lr = 0x82343C4C;
	sub_822830E8(ctx, base);
loc_82343C4C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82343AF8) {
	__imp__sub_82343AF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82343C54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82343C54) {
	__imp__sub_82343C54(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82343C58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x82343C60;
	__savegprlr_25(ctx, base);
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// lwz r11,-16044(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16044);
	// lfs f0,5624(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5624);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fcmpu cr6,f1,f12
	ctx.cr6.compare(ctx.f1.f64, ctx.f12.f64);
	// blt cr6,0x82343d84
	if (ctx.cr6.lt) goto loc_82343D84;
	// lis r11,-31816
	ctx.r11.s64 = -2085093376;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r29,r11,-1312
	ctx.r29.s64 = ctx.r11.s64 + -1312;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
loc_82343CA8:
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82343cd8
	if (ctx.cr6.eq) goto loc_82343CD8;
	// lwz r11,276(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 276);
	// lwz r3,528(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 528);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82343cd8
	if (ctx.cr6.eq) goto loc_82343CD8;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x8225ad20
	ctx.lr = 0x82343CCC;
	sub_8225AD20(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82343cf0
	if (!ctx.cr6.eq) goto loc_82343CF0;
loc_82343CD8:
	// addis r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 65536;
	// addi r31,r31,972
	ctx.r31.s64 = ctx.r31.s64 + 972;
	// addi r11,r11,-3328
	ctx.r11.s64 = ctx.r11.s64 + -3328;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82343ca8
	if (ctx.cr6.lt) goto loc_82343CA8;
	// b 0x82343cf4
	goto loc_82343CF4;
loc_82343CF0:
	// lwz r28,276(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 276);
loc_82343CF4:
	// lwz r11,560(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 560);
	// lis r10,-31816
	ctx.r10.s64 = -2085093376;
	// lfs f13,880(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 880);
	ctx.f13.f64 = double(temp.f32);
	// addi r9,r10,-12608
	ctx.r9.s64 = ctx.r10.s64 + -12608;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r8,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// lwz r7,176(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 176);
	// lfs f12,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fdivs f0,f31,f12
	ctx.f0.f64 = double(float(ctx.f31.f64 / ctx.f12.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82343d24
	if (!ctx.cr6.gt) goto loc_82343D24;
	// stfs f0,880(r28)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r28.u32 + 880, temp.u32);
loc_82343D24:
	// lfs f0,8(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fabs f13,f0
	ctx.f13.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// lfs f0,25188(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 25188);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x82343d84
	if (ctx.cr6.gt) goto loc_82343D84;
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82343d84
	if (ctx.cr6.eq) goto loc_82343D84;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82343d84
	if (ctx.cr6.eq) goto loc_82343D84;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82343d84
	if (ctx.cr6.eq) goto loc_82343D84;
	// clrlwi r9,r25,24
	ctx.r9.u64 = ctx.r25.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82343d6c
	if (ctx.cr6.eq) goto loc_82343D6C;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x82343d84
	if (ctx.cr6.eq) goto loc_82343D84;
loc_82343D6C:
	// lfs f0,300(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 300);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// blt cr6,0x82343d84
	if (ctx.cr6.lt) goto loc_82343D84;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r3,528(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 528);
	// bl 0x8225b0e8
	ctx.lr = 0x82343D84;
	sub_8225B0E8(ctx, base);
loc_82343D84:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82343C58) {
	__imp__sub_82343C58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82343D90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x82343D98;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,560(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 560);
	// lis r11,-31816
	ctx.r11.s64 = -2085093376;
	// lwz r29,0(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r11,-12608
	ctx.r30.s64 = ctx.r11.s64 + -12608;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r27,r9,r30
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r30.u32);
	// lwz r8,176(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 176);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82343dd8
	if (!ctx.cr6.eq) goto loc_82343DD8;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lwz r5,0(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,-13376
	ctx.r4.s64 = ctx.r11.s64 + -13376;
	// bl 0x822830e8
	ctx.lr = 0x82343DD8;
	sub_822830E8(ctx, base);
loc_82343DD8:
	// lhz r3,604(r29)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r29.u32 + 604);
	// bl 0x8222e380
	ctx.lr = 0x82343DE0;
	sub_8222E380(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82343e08
	if (!ctx.cr6.eq) goto loc_82343E08;
	// lhz r3,604(r29)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r29.u32 + 604);
	// bl 0x8222e3b0
	ctx.lr = 0x82343DF0;
	sub_8222E3B0(ctx, base);
	// bl 0x822a13a0
	ctx.lr = 0x82343DF4;
	sub_822A13A0(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-13464
	ctx.r4.s64 = ctx.r11.s64 + -13464;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822830e8
	ctx.lr = 0x82343E08;
	sub_822830E8(ctx, base);
loc_82343E08:
	// lwz r10,560(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 560);
	// addi r11,r30,792
	ctx.r11.s64 = ctx.r30.s64 + 792;
	// addi r7,r27,168
	ctx.r7.s64 = ctx.r27.s64 + 168;
	// lhz r5,604(r29)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r29.u32 + 604);
	// mulli r10,r10,328
	ctx.r10.s64 = ctx.r10.s64 * 328;
	// lhz r6,126(r29)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r29.u32 + 126);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r4,r29,244
	ctx.r4.s64 = ctx.r29.s64 + 244;
	// addi r3,r29,232
	ctx.r3.s64 = ctx.r29.s64 + 232;
	// bl 0x8225e130
	ctx.lr = 0x82343E30;
	sub_8225E130(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,528(r31)
	PPC_STORE_U32(ctx.r31.u32 + 528, ctx.r3.u32);
	// bne cr6,0x82343e4c
	if (!ctx.cr6.eq) goto loc_82343E4C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,-13500
	ctx.r4.s64 = ctx.r11.s64 + -13500;
	// bl 0x822830e8
	ctx.lr = 0x82343E4C;
	sub_822830E8(ctx, base);
loc_82343E4C:
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r28,r31,932
	ctx.r28.s64 = ctx.r31.s64 + 932;
loc_82343E54:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82343e80
	if (ctx.cr6.lt) goto loc_82343E80;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82343868
	ctx.lr = 0x82343E70;
	sub_82343868(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,528(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 528);
	// bl 0x8225b1c0
	ctx.lr = 0x82343E80;
	sub_8225B1C0(ctx, base);
loc_82343E80:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmplwi cr6,r30,6
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 6, ctx.xer);
	// blt cr6,0x82343e54
	if (ctx.cr6.lt) goto loc_82343E54;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82343eac
	if (!ctx.cr6.eq) goto loc_82343EAC;
	// lfs f2,36(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 36);
	ctx.f2.f64 = double(temp.f32);
	// lwz r3,528(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 528);
	// lfs f1,32(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 32);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8225de30
	ctx.lr = 0x82343EAC;
	sub_8225DE30(ctx, base);
loc_82343EAC:
	// lwz r3,528(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 528);
	// bl 0x8225b270
	ctx.lr = 0x82343EB4;
	sub_8225B270(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82343ed8
	if (!ctx.cr6.eq) goto loc_82343ED8;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lwz r6,0(r27)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lhz r5,126(r29)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r29.u32 + 126);
	// addi r4,r11,-13592
	ctx.r4.s64 = ctx.r11.s64 + -13592;
	// bl 0x822830e8
	ctx.lr = 0x82343ED8;
	sub_822830E8(ctx, base);
loc_82343ED8:
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// li r3,3
	ctx.r3.s64 = 3;
	// addi r4,r11,15448
	ctx.r4.s64 = ctx.r11.s64 + 15448;
	// bl 0x82257f90
	ctx.lr = 0x82343EE8;
	sub_82257F90(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82343D90) {
	__imp__sub_82343D90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82343EF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82343EF8;
	__savegprlr_29(ctx, base);
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x823de024
	ctx.lr = 0x82343F00;
	__savefpr_27(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r31,276(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	// fneg f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f1.u64 ^ 0x8000000000000000;
	// lis r10,-31816
	ctx.r10.s64 = -2085093376;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// fmr f29,f2
	ctx.f29.f64 = ctx.f2.f64;
	// addi r8,r10,-12608
	ctx.r8.s64 = ctx.r10.s64 + -12608;
	// fmr f28,f3
	ctx.f28.f64 = ctx.f3.f64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lfs f31,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f31.f64 = double(temp.f32);
	// lwz r7,560(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 560);
	// fsubs f13,f1,f31
	ctx.f13.f64 = double(float(ctx.f1.f64 - ctx.f31.f64));
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f30,5484(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5484);
	ctx.f30.f64 = double(temp.f32);
	// addi r3,r31,240
	ctx.r3.s64 = ctx.r31.s64 + 240;
	// lwzx r29,r6,r8
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r8.u32);
	// fsel f12,f13,f31,f1
	ctx.f12.f64 = ctx.f13.f64 >= 0.0 ? ctx.f31.f64 : ctx.f1.f64;
	// fsel f27,f0,f30,f12
	ctx.f27.f64 = ctx.f0.f64 >= 0.0 ? ctx.f30.f64 : ctx.f12.f64;
	// bl 0x822da650
	ctx.lr = 0x82343F54;
	sub_822DA650(ctx, base);
	// lfs f11,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// addi r3,r31,848
	ctx.r3.s64 = ctx.r31.s64 + 848;
	// lfs f10,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f10.f64));
	// lfs f8,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f5.f64 = double(temp.f32);
	// fmadds f4,f8,f7,f9
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f7.f64 + ctx.f9.f64));
	// fmadds f3,f5,f6,f4
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f6.f64 + ctx.f4.f64));
	// stfs f3,848(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 848, temp.u32);
	// lfs f2,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f12,f11
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// fmadds f9,f2,f1,f10
	ctx.f9.f64 = double(float(ctx.f2.f64 * ctx.f1.f64 + ctx.f10.f64));
	// stfs f31,856(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 856, temp.u32);
	// stfs f30,860(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 860, temp.u32);
	// fnmadds f8,f13,f0,f9
	ctx.f8.f64 = double(float(-(ctx.f13.f64 * ctx.f0.f64 + ctx.f9.f64)));
	// stfs f8,852(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 852, temp.u32);
	// bl 0x822d4ac8
	ctx.lr = 0x82343FB4;
	sub_822D4AC8(ctx, base);
	// lfs f7,40(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,848(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f7,f6
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f6.f64));
	// lfs f4,852(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 852);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,576(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 576);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f2,f3,f29
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f29.f64));
	// fmuls f1,f5,f27
	ctx.f1.f64 = double(float(ctx.f5.f64 * ctx.f27.f64));
	// stfs f1,848(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 848, temp.u32);
	// lfs f0,44(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f4
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f4.f64));
	// fmuls f12,f13,f27
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f27.f64));
	// stfs f12,852(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 852, temp.u32);
	// stfs f2,864(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 864, temp.u32);
	// stfs f28,868(r31)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r31.u32 + 868, temp.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x823de070
	ctx.lr = 0x82343FF8;
	__restfpr_27(ctx, base);
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82343EF0) {
	__imp__sub_82343EF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82343FFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82343FFC) {
	__imp__sub_82343FFC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82344000) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82344008;
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
	// lwz r31,276(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	// lis r11,-31816
	ctx.r11.s64 = -2085093376;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r11,-12608
	ctx.r9.s64 = ctx.r11.s64 + -12608;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// lwz r8,560(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 560);
	// lfs f0,856(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 856);
	ctx.f0.f64 = double(temp.f32);
	// lfs f9,5484(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f9.f64 = double(temp.f32);
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// fcmpu cr6,f0,f9
	ctx.cr6.compare(ctx.f0.f64, ctx.f9.f64);
	// lwzx r30,r7,r9
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// ble cr6,0x82344050
	if (!ctx.cr6.gt) goto loc_82344050;
	// lfs f12,864(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 864);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,868(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 868);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82344058
	goto loc_82344058;
loc_82344050:
	// lfs f12,24(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,28(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
loc_82344058:
	// lbz r7,1(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lbz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// extsb r6,r7
	ctx.r6.s64 = ctx.r7.s8;
	// extsb r11,r9
	ctx.r11.s64 = ctx.r9.s8;
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f11,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f10,80(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f7,f11
	ctx.f7.f64 = double(ctx.f11.s64);
	// lfs f13,17312(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 17312);
	ctx.f13.f64 = double(temp.f32);
	// fcfid f8,f10
	ctx.f8.f64 = double(ctx.f10.s64);
	// lfs f10,-23144(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -23144);
	ctx.f10.f64 = double(temp.f32);
	// frsp f5,f7
	ctx.f5.f64 = double(float(ctx.f7.f64));
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// frsp f6,f8
	ctx.f6.f64 = double(float(ctx.f8.f64));
	// fabs f3,f5
	ctx.f3.u64 = ctx.f5.u64 & ~0x8000000000000000;
	// fabs f4,f6
	ctx.f4.u64 = ctx.f6.u64 & ~0x8000000000000000;
	// fmuls f8,f3,f13
	ctx.f8.f64 = double(float(ctx.f3.f64 * ctx.f13.f64));
	// fmuls f11,f4,f13
	ctx.f11.f64 = double(float(ctx.f4.f64 * ctx.f13.f64));
	// ble cr6,0x823440c4
	if (!ctx.cr6.gt) goto loc_823440C4;
	// lfs f13,320(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 320);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f7,f0,f10,f13
	ctx.f7.f64 = double(float(ctx.f0.f64 * ctx.f10.f64 + ctx.f13.f64));
	// fmuls f13,f7,f11
	ctx.f13.f64 = double(float(ctx.f7.f64 * ctx.f11.f64));
	// b 0x823440dc
	goto loc_823440DC;
loc_823440C4:
	// bge cr6,0x823440d8
	if (!ctx.cr6.lt) goto loc_823440D8;
	// lfs f13,320(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 320);
	ctx.f13.f64 = double(temp.f32);
	// fnmsubs f7,f0,f10,f13
	ctx.f7.f64 = double(float(-(ctx.f0.f64 * ctx.f10.f64 - ctx.f13.f64)));
	// fmuls f13,f7,f11
	ctx.f13.f64 = double(float(ctx.f7.f64 * ctx.f11.f64));
	// b 0x823440dc
	goto loc_823440DC;
loc_823440D8:
	// fmr f13,f9
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f9.f64;
loc_823440DC:
	// fneg f11,f12
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// lfs f4,328(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f6,f13,f12
	ctx.f6.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// lfs f7,320(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 320);
	ctx.f7.f64 = double(temp.f32);
	// fneg f5,f12
	ctx.f5.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fsubs f2,f4,f12
	ctx.f2.f64 = double(float(ctx.f4.f64 - ctx.f12.f64));
	// fneg f3,f0
	ctx.f3.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// lfs f31,5996(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5996);
	ctx.f31.f64 = double(temp.f32);
	// fsubs f1,f11,f13
	ctx.f1.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// fsel f13,f6,f12,f13
	ctx.f13.f64 = ctx.f6.f64 >= 0.0 ? ctx.f12.f64 : ctx.f13.f64;
	// fsel f6,f5,f12,f9
	ctx.f6.f64 = ctx.f5.f64 >= 0.0 ? ctx.f12.f64 : ctx.f9.f64;
	// fsubs f5,f11,f4
	ctx.f5.f64 = double(float(ctx.f11.f64 - ctx.f4.f64));
	// fsel f4,f2,f12,f4
	ctx.f4.f64 = ctx.f2.f64 >= 0.0 ? ctx.f12.f64 : ctx.f4.f64;
	// fsel f2,f1,f11,f13
	ctx.f2.f64 = ctx.f1.f64 >= 0.0 ? ctx.f11.f64 : ctx.f13.f64;
	// fsel f1,f11,f11,f6
	ctx.f1.f64 = ctx.f11.f64 >= 0.0 ? ctx.f11.f64 : ctx.f6.f64;
	// fsel f13,f5,f11,f4
	ctx.f13.f64 = ctx.f5.f64 >= 0.0 ? ctx.f11.f64 : ctx.f4.f64;
	// fsubs f12,f2,f7
	ctx.f12.f64 = double(float(ctx.f2.f64 - ctx.f7.f64));
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// fsubs f7,f11,f0
	ctx.f7.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// fsubs f6,f3,f11
	ctx.f6.f64 = double(float(ctx.f3.f64 - ctx.f11.f64));
	// fsel f5,f7,f0,f11
	ctx.f5.f64 = ctx.f7.f64 >= 0.0 ? ctx.f0.f64 : ctx.f11.f64;
	// fsel f4,f6,f3,f5
	ctx.f4.f64 = ctx.f6.f64 >= 0.0 ? ctx.f3.f64 : ctx.f5.f64;
	// stfs f4,0(r5)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// lfs f2,324(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 324);
	ctx.f2.f64 = double(temp.f32);
	// fsubs f1,f1,f2
	ctx.f1.f64 = double(float(ctx.f1.f64 - ctx.f2.f64));
	// fmuls f12,f1,f31
	ctx.f12.f64 = double(float(ctx.f1.f64 * ctx.f31.f64));
	// fsubs f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// fsubs f7,f3,f12
	ctx.f7.f64 = double(float(ctx.f3.f64 - ctx.f12.f64));
	// fsel f6,f11,f0,f12
	ctx.f6.f64 = ctx.f11.f64 >= 0.0 ? ctx.f0.f64 : ctx.f12.f64;
	// fsel f5,f7,f3,f6
	ctx.f5.f64 = ctx.f7.f64 >= 0.0 ? ctx.f3.f64 : ctx.f6.f64;
	// stfs f5,4(r5)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// lfs f4,328(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f2,f13,f4
	ctx.f2.f64 = double(float(ctx.f13.f64 - ctx.f4.f64));
	// fmuls f1,f2,f31
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f31.f64));
	// fsubs f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// fsubs f12,f3,f1
	ctx.f12.f64 = double(float(ctx.f3.f64 - ctx.f1.f64));
	// fsel f11,f13,f0,f1
	ctx.f11.f64 = ctx.f13.f64 >= 0.0 ? ctx.f0.f64 : ctx.f1.f64;
	// fsel f7,f12,f3,f11
	ctx.f7.f64 = ctx.f12.f64 >= 0.0 ? ctx.f3.f64 : ctx.f11.f64;
	// stfs f7,8(r5)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r5.u32 + 8, temp.u32);
	// lbz r10,2(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 2);
	// extsb r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8234420c
	if (!ctx.cr6.gt) goto loc_8234420C;
	// lhz r10,256(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 256);
	// lis r9,-32052
	ctx.r9.s64 = -2100559872;
	// lfs f12,256(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	ctx.f12.f64 = double(temp.f32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// addi r11,r9,26552
	ctx.r11.s64 = ctx.r9.s64 + 26552;
	// mulli r10,r10,624
	ctx.r10.s64 = ctx.r10.s64 * 624;
	// lfs f0,2420(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2420);
	ctx.f0.f64 = double(temp.f32);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lwz r5,-360(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + -360);
	// lfs f13,2416(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 2416);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,268(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 268);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f11,f12
	ctx.f10.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// fmuls f30,f10,f0
	ctx.f30.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fadds f1,f30,f13
	ctx.f1.f64 = double(float(ctx.f30.f64 + ctx.f13.f64));
	// bl 0x823dde20
	ctx.lr = 0x823441CC;
	sub_823DDE20(ctx, base);
	// frsp f9,f1
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = double(float(ctx.f1.f64));
	// lis r4,-32251
	ctx.r4.s64 = -2113601536;
	// lfs f8,32(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	ctx.f8.f64 = double(temp.f32);
	// fneg f7,f8
	ctx.f7.u64 = ctx.f8.u64 ^ 0x8000000000000000;
	// lfs f6,360(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 360);
	ctx.f6.f64 = double(temp.f32);
	// lfs f0,-13292(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + -13292);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f5,f30,f9
	ctx.f5.f64 = double(float(ctx.f30.f64 - ctx.f9.f64));
	// fmuls f4,f5,f0
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// fsubs f3,f4,f8
	ctx.f3.f64 = double(float(ctx.f4.f64 - ctx.f8.f64));
	// fsubs f2,f7,f4
	ctx.f2.f64 = double(float(ctx.f7.f64 - ctx.f4.f64));
	// fsel f1,f3,f8,f4
	ctx.f1.f64 = ctx.f3.f64 >= 0.0 ? ctx.f8.f64 : ctx.f4.f64;
	// fsel f0,f2,f7,f1
	ctx.f0.f64 = ctx.f2.f64 >= 0.0 ? ctx.f7.f64 : ctx.f1.f64;
	// fsubs f13,f0,f6
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f6.f64));
	// fmuls f12,f13,f31
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// stfs f12,4(r29)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r29.u32 + 4, temp.u32);
	// b 0x82344290
	goto loc_82344290;
loc_8234420C:
	// lbz r11,1(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x82344230
	if (!ctx.cr6.lt) goto loc_82344230;
	// lfs f0,36(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,360(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 360);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f12,f0,f10,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f10.f64 + ctx.f13.f64));
	// fmuls f0,f12,f8
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f8.f64));
	// b 0x8234424c
	goto loc_8234424C;
loc_82344230:
	// ble cr6,0x82344248
	if (!ctx.cr6.gt) goto loc_82344248;
	// lfs f0,36(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,360(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 360);
	ctx.f13.f64 = double(temp.f32);
	// fnmsubs f12,f0,f10,f13
	ctx.f12.f64 = double(float(-(ctx.f0.f64 * ctx.f10.f64 - ctx.f13.f64)));
	// fmuls f0,f12,f8
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f8.f64));
	// b 0x8234424c
	goto loc_8234424C;
loc_82344248:
	// fmr f0,f9
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f9.f64;
loc_8234424C:
	// lfs f13,32(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// fneg f12,f13
	ctx.f12.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// lfs f11,360(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 360);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f0,f13
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fsubs f9,f12,f0
	ctx.f9.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// fsel f8,f10,f13,f0
	ctx.f8.f64 = ctx.f10.f64 >= 0.0 ? ctx.f13.f64 : ctx.f0.f64;
	// fsel f7,f9,f12,f8
	ctx.f7.f64 = ctx.f9.f64 >= 0.0 ? ctx.f12.f64 : ctx.f8.f64;
	// fsubs f6,f7,f11
	ctx.f6.f64 = double(float(ctx.f7.f64 - ctx.f11.f64));
	// fmuls f5,f6,f31
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f31.f64));
	// stfs f5,4(r29)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r29.u32 + 4, temp.u32);
	// lfs f4,36(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	ctx.f4.f64 = double(temp.f32);
	// fneg f3,f4
	ctx.f3.u64 = ctx.f4.u64 ^ 0x8000000000000000;
	// fsubs f2,f5,f4
	ctx.f2.f64 = double(float(ctx.f5.f64 - ctx.f4.f64));
	// fsubs f1,f3,f5
	ctx.f1.f64 = double(float(ctx.f3.f64 - ctx.f5.f64));
	// fsel f0,f2,f4,f5
	ctx.f0.f64 = ctx.f2.f64 >= 0.0 ? ctx.f4.f64 : ctx.f5.f64;
	// fsel f13,f1,f3,f0
	ctx.f13.f64 = ctx.f1.f64 >= 0.0 ? ctx.f3.f64 : ctx.f0.f64;
	// stfs f13,4(r29)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r29.u32 + 4, temp.u32);
loc_82344290:
	// lfs f0,356(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 356);
	ctx.f0.f64 = double(temp.f32);
	// fneg f13,f0
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fmuls f12,f13,f31
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// stfs f12,0(r29)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// lfs f11,36(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	ctx.f11.f64 = double(temp.f32);
	// fneg f10,f11
	ctx.f10.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// fsubs f9,f12,f11
	ctx.f9.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// fsubs f8,f10,f12
	ctx.f8.f64 = double(float(ctx.f10.f64 - ctx.f12.f64));
	// fsel f7,f9,f11,f12
	ctx.f7.f64 = ctx.f9.f64 >= 0.0 ? ctx.f11.f64 : ctx.f12.f64;
	// fsel f6,f8,f10,f7
	ctx.f6.f64 = ctx.f8.f64 >= 0.0 ? ctx.f10.f64 : ctx.f7.f64;
	// stfs f6,0(r29)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// lfs f5,364(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 364);
	ctx.f5.f64 = double(temp.f32);
	// fneg f4,f5
	ctx.f4.u64 = ctx.f5.u64 ^ 0x8000000000000000;
	// fmuls f3,f4,f31
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f31.f64));
	// stfs f3,8(r29)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r29.u32 + 8, temp.u32);
	// lfs f2,36(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	ctx.f2.f64 = double(temp.f32);
	// fneg f1,f2
	ctx.f1.u64 = ctx.f2.u64 ^ 0x8000000000000000;
	// fsubs f0,f3,f2
	ctx.f0.f64 = double(float(ctx.f3.f64 - ctx.f2.f64));
	// fsubs f13,f1,f3
	ctx.f13.f64 = double(float(ctx.f1.f64 - ctx.f3.f64));
	// fsel f12,f0,f2,f3
	ctx.f12.f64 = ctx.f0.f64 >= 0.0 ? ctx.f2.f64 : ctx.f3.f64;
	// fsel f11,f13,f1,f12
	ctx.f11.f64 = ctx.f13.f64 >= 0.0 ? ctx.f1.f64 : ctx.f12.f64;
	// stfs f11,8(r29)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r29.u32 + 8, temp.u32);
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

PPC_WEAK_FUNC(sub_82344000) {
	__imp__sub_82344000(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823442F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,8(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,7036(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7036);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x8234436c
	if (ctx.cr6.lt) goto loc_8234436C;
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f13
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// lfs f13,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f11,f11
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// fmadds f9,f13,f13,f12
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f12.f64));
	// fcmpu cr6,f9,f10
	ctx.cr6.compare(ctx.f9.f64, ctx.f10.f64);
	// blt cr6,0x8234436c
	if (ctx.cr6.lt) goto loc_8234436C;
	// lfs f0,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f12,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fneg f10,f13
	ctx.f10.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fnmsubs f9,f12,f11,f10
	ctx.f9.f64 = double(float(-(ctx.f12.f64 * ctx.f11.f64 - ctx.f10.f64)));
	// stfs f9,8(r5)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r5.u32 + 8, temp.u32);
	// lfs f8,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f7.f64));
	// stfs f6,0(r5)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// lfs f5,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f3,f5,f4
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f4.f64));
	// stfs f3,4(r5)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// blr 
	return;
loc_8234436C:
	// lfs f13,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f10,f12,f13
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// lfs f12,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// lfs f13,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f8,f11,f12,f10
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f12.f64 + ctx.f10.f64));
	// fmadds f0,f0,f9,f8
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f9.f64 + ctx.f8.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x823443a8
	if (!ctx.cr6.lt) goto loc_823443A8;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lfs f13,-13284(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -13284);
	ctx.f13.f64 = double(temp.f32);
	// b 0x823443b0
	goto loc_823443B0;
loc_823443A8:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lfs f13,-13288(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -13288);
	ctx.f13.f64 = double(temp.f32);
loc_823443B0:
	// fmuls f0,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fnmsubs f13,f11,f0,f12
	ctx.f13.f64 = double(float(-(ctx.f11.f64 * ctx.f0.f64 - ctx.f12.f64)));
	// stfs f13,0(r5)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// lfs f12,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fnmsubs f10,f12,f0,f11
	ctx.f10.f64 = double(float(-(ctx.f12.f64 * ctx.f0.f64 - ctx.f11.f64)));
	// stfs f10,4(r5)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// lfs f8,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f9,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fnmsubs f7,f0,f9,f8
	ctx.f7.f64 = double(float(-(ctx.f0.f64 * ctx.f9.f64 - ctx.f8.f64)));
	// stfs f7,8(r5)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r5.u32 + 8, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823442F8) {
	__imp__sub_823442F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823443E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x823443E8;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,276(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r11,216
	ctx.r31.s64 = ctx.r11.s64 + 216;
	// addi r11,r10,-17896
	ctx.r11.s64 = ctx.r10.s64 + -17896;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// addi r27,r31,68
	ctx.r27.s64 = ctx.r31.s64 + 68;
	// addi r30,r11,8
	ctx.r30.s64 = ctx.r11.s64 + 8;
loc_82344410:
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// lfs f13,-8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -8);
	ctx.f13.f64 = double(temp.f32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// fadds f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f11,-4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	ctx.f11.f64 = double(temp.f32);
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f10,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 + ctx.f10.f64));
	// lfs f8,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stfs f9,84(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r8,316(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 316);
	// lfs f7,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fadds f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 + ctx.f7.f64));
	// stfs f6,88(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lhz r7,126(r29)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r29.u32 + 126);
	// bl 0x821fe618
	ctx.lr = 0x8234445C;
	sub_821FE618(ctx, base);
	// lbz r11,41(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 41);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82344484
	if (ctx.cr6.eq) goto loc_82344484;
	// addi r26,r26,12
	ctx.r26.s64 = ctx.r26.s64 + 12;
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// cmplwi cr6,r26,312
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 312, ctx.xer);
	// blt cr6,0x82344410
	if (ctx.cr6.lt) goto loc_82344410;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_82344484:
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// fmr f12,f0
	ctx.f12.f64 = ctx.f0.f64;
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// stfs f13,4(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lfs f11,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f11.f64 = double(temp.f32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stfs f11,8(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r8,316(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 316);
	// lfs f10,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lhz r7,126(r29)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r29.u32 + 126);
	// stfs f10,84(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f0,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// lfs f9,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 - ctx.f0.f64));
	// stfs f8,88(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x821fe618
	ctx.lr = 0x823444DC;
	sub_821FE618(ctx, base);
	// lis r10,-31816
	ctx.r10.s64 = -2085093376;
	// li r5,44
	ctx.r5.s64 = 44;
	// addi r3,r10,-12480
	ctx.r3.s64 = ctx.r10.s64 + -12480;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x823de1f0
	ctx.lr = 0x823444F0;
	sub_823DE1F0(ctx, base);
	// lfs f7,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// fsubs f5,f7,f6
	ctx.f5.f64 = double(float(ctx.f7.f64 - ctx.f6.f64));
	// lfs f4,0(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// fmadds f1,f5,f4,f6
	ctx.f1.f64 = double(float(ctx.f5.f64 * ctx.f4.f64 + ctx.f6.f64));
	// stfs f1,0(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// lfs f0,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f0,f3
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f3.f64));
	// fmadds f12,f13,f4,f3
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f4.f64 + ctx.f3.f64));
	// stfs f12,4(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// lfs f11,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f11,f2
	ctx.f10.f64 = double(float(ctx.f11.f64 - ctx.f2.f64));
	// fmadds f9,f10,f4,f2
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f4.f64 + ctx.f2.f64));
	// stfs f9,8(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823443E0) {
	__imp__sub_823443E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8234453C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8234453C) {
	__imp__sub_8234453C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82344540) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31816
	ctx.r10.s64 = -2085093376;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-12480
	ctx.r9.s64 = ctx.r10.s64 + -12480;
	// stw r11,44(r9)
	PPC_STORE_U32(ctx.r9.u32 + 44, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82344540) {
	__imp__sub_82344540(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82344554) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82344554) {
	__imp__sub_82344554(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82344558) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82344560;
	__savegprlr_29(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,276(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r8,316(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 316);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r11,216
	ctx.r31.s64 = ctx.r11.s64 + 216;
	// lhz r7,126(r3)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r3.u32 + 126);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f0,216(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 216);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r6,r31,68
	ctx.r6.s64 = ctx.r31.s64 + 68;
	// lfs f13,220(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 220);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f0,5880(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5880);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,224(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 224);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// stfs f11,88(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lfs f10,216(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 216);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,96(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lfs f9,220(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 220);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,100(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lfs f8,224(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 224);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f8,f0
	ctx.f7.f64 = double(float(ctx.f8.f64 - ctx.f0.f64));
	// stfs f7,104(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x821fe618
	ctx.lr = 0x823445CC;
	sub_821FE618(ctx, base);
	// lis r11,-31816
	ctx.r11.s64 = -2085093376;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r30,r11,-12480
	ctx.r30.s64 = ctx.r11.s64 + -12480;
	// li r5,44
	ctx.r5.s64 = 44;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823de1f0
	ctx.lr = 0x823445E4;
	sub_823DE1F0(ctx, base);
	// lbz r7,152(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 152);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,44(r30)
	PPC_STORE_U32(ctx.r30.u32 + 44, ctx.r11.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// stw r10,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r10.u32);
	// beq cr6,0x82344614
	if (ctx.cr6.eq) goto loc_82344614;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823443e0
	ctx.lr = 0x8234460C;
	sub_823443E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82344690
	if (ctx.cr6.eq) goto loc_82344690;
loc_82344614:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x82344690
	if (ctx.cr6.eq) goto loc_82344690;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,100(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// ble cr6,0x82344670
	if (!ctx.cr6.gt) goto loc_82344670;
	// lfs f0,92(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f0,f12
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// lfs f10,96(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,100(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	ctx.f8.f64 = double(temp.f32);
	// lfs f0,5876(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5876);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f7,f10,f9,f11
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f9.f64 + ctx.f11.f64));
	// fmadds f6,f8,f13,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f13.f64 + ctx.f7.f64));
	// fcmpu cr6,f6,f0
	ctx.cr6.compare(ctx.f6.f64, ctx.f0.f64);
	// bgt cr6,0x82344690
	if (ctx.cr6.gt) goto loc_82344690;
loc_82344670:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,7036(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7036);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// stw r11,44(r30)
	PPC_STORE_U32(ctx.r30.u32 + 44, ctx.r11.u32);
	// blt cr6,0x82344690
	if (ctx.cr6.lt) goto loc_82344690;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r10.u32);
loc_82344690:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82344558) {
	__imp__sub_82344558(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82344698) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822ac8c0
	ctx.lr = 0x823446B4;
	sub_822AC8C0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823447b8
	if (ctx.cr6.eq) goto loc_823447B8;
	// lwz r11,276(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r5,r11,216
	ctx.r5.s64 = ctx.r11.s64 + 216;
	// addi r4,r5,12
	ctx.r4.s64 = ctx.r5.s64 + 12;
	// lfs f0,216(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 216);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,228(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 228);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,224(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 224);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,236(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 236);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lfs f8,220(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 220);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,232(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// lfs f11,5484(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f5,f12,f12
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f4,f9,f9,f5
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f5.f64));
	// fmadds f3,f6,f6,f4
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f4.f64));
	// fcmpu cr6,f3,f11
	ctx.cr6.compare(ctx.f3.f64, ctx.f11.f64);
	// beq cr6,0x823447b8
	if (ctx.cr6.eq) goto loc_823447B8;
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r10,r1,76
	ctx.r10.s64 = ctx.r1.s64 + 76;
	// addi r11,r31,176
	ctx.r11.s64 = ctx.r31.s64 + 176;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82344718:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82344718
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82344718;
	// lfs f0,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// li r8,8321
	ctx.r8.s64 = 8321;
	// lfs f13,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// fsubs f10,f0,f13
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f12,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f12.f64 = double(temp.f32);
	// lfs f9,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f9.f64 = double(temp.f32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lhz r7,126(r31)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r31.u32 + 126);
	// fsel f8,f10,f0,f13
	ctx.f8.f64 = ctx.f10.f64 >= 0.0 ? ctx.f0.f64 : ctx.f13.f64;
	// stfs f8,92(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f8,96(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fsubs f7,f8,f12
	ctx.f7.f64 = double(float(ctx.f8.f64 - ctx.f12.f64));
	// fsel f6,f7,f7,f11
	ctx.f6.f64 = ctx.f7.f64 >= 0.0 ? ctx.f7.f64 : ctx.f11.f64;
	// fadds f5,f12,f6
	ctx.f5.f64 = double(float(ctx.f12.f64 + ctx.f6.f64));
	// stfs f5,100(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fadds f4,f9,f6
	ctx.f4.f64 = double(float(ctx.f9.f64 + ctx.f6.f64));
	// stfs f4,88(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x821fe618
	ctx.lr = 0x82344770;
	sub_821FE618(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f3,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f3.f64 = double(temp.f32);
	// lfs f0,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f3,f0
	ctx.cr6.compare(ctx.f3.f64, ctx.f0.f64);
	// bge cr6,0x823447b8
	if (!ctx.cr6.lt) goto loc_823447B8;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82276090
	ctx.lr = 0x8234478C;
	sub_82276090(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r11,2046
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2046, ctx.xer);
	// bne cr6,0x823447b8
	if (!ctx.cr6.eq) goto loc_823447B8;
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// bl 0x822ad078
	ctx.lr = 0x823447A0;
	sub_822AD078(ctx, base);
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r10,r11,-25976
	ctx.r10.s64 = ctx.r11.s64 + -25976;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lhz r4,336(r10)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r10.u32 + 336);
	// bl 0x82229da8
	ctx.lr = 0x823447B8;
	sub_82229DA8(ctx, base);
loc_823447B8:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82344698) {
	__imp__sub_82344698(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823447CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823447CC) {
	__imp__sub_823447CC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823447D0) {
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
	// lis r10,-31816
	ctx.r10.s64 = -2085093376;
	// lwz r6,316(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 316);
	// addic r8,r4,-1
	ctx.xer.ca = ctx.r4.u32 > 0;
	ctx.r8.s64 = ctx.r4.s64 + -1;
	// lhz r7,126(r3)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r3.u32 + 126);
	// addi r9,r10,-12480
	ctx.r9.s64 = ctx.r10.s64 + -12480;
	// lwz r11,276(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	// subfe r5,r8,r4
	temp.u8 = (~ctx.r8.u32 + ctx.r4.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r4.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r5.u64 = ~ctx.r8.u64 + ctx.r4.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lis r4,-32204
	ctx.r4.s64 = -2110521344;
	// stw r6,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r6.u32);
	// addi r11,r11,216
	ctx.r11.s64 = ctx.r11.s64 + 216;
	// stb r5,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r5.u8);
	// addi r5,r4,17144
	ctx.r5.s64 = ctx.r4.s64 + 17144;
	// lwz r10,44(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 44);
	// addi r3,r11,92
	ctx.r3.s64 = ctx.r11.s64 + 92;
	// stw r7,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r7.u32);
	// addi r8,r11,68
	ctx.r8.s64 = ctx.r11.s64 + 68;
	// addic r6,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r6.s64 = ctx.r10.s64 + -1;
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// addi r7,r9,4
	ctx.r7.s64 = ctx.r9.s64 + 4;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// subfe r4,r6,r10
	temp.u8 = (~ctx.r6.u32 + ctx.r10.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r4.u64 = ~ctx.r6.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r5,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r5.u32);
	// stb r4,97(r1)
	PPC_STORE_U8(ctx.r1.u32 + 97, ctx.r4.u8);
	// bl 0x8222b200
	ctx.lr = 0x8234484C;
	sub_8222B200(ctx, base);
	// clrlwi r3,r3,24
	ctx.r3.u64 = ctx.r3.u32 & 0xFF;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823447D0) {
	__imp__sub_823447D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82344860) {
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
	// lis r10,-31816
	ctx.r10.s64 = -2085093376;
	// lwz r6,316(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 316);
	// addic r8,r4,-1
	ctx.xer.ca = ctx.r4.u32 > 0;
	ctx.r8.s64 = ctx.r4.s64 + -1;
	// lhz r7,126(r3)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r3.u32 + 126);
	// addi r9,r10,-12480
	ctx.r9.s64 = ctx.r10.s64 + -12480;
	// lwz r11,276(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	// subfe r5,r8,r4
	temp.u8 = (~ctx.r8.u32 + ctx.r4.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r4.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r5.u64 = ~ctx.r8.u64 + ctx.r4.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lis r4,-32204
	ctx.r4.s64 = -2110521344;
	// stw r6,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r6.u32);
	// addi r11,r11,216
	ctx.r11.s64 = ctx.r11.s64 + 216;
	// stb r5,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r5.u8);
	// addi r5,r4,17144
	ctx.r5.s64 = ctx.r4.s64 + 17144;
	// lwz r10,44(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 44);
	// addi r3,r11,92
	ctx.r3.s64 = ctx.r11.s64 + 92;
	// stw r7,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r7.u32);
	// addi r8,r11,68
	ctx.r8.s64 = ctx.r11.s64 + 68;
	// addic r6,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r6.s64 = ctx.r10.s64 + -1;
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// addi r7,r9,4
	ctx.r7.s64 = ctx.r9.s64 + 4;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// subfe r4,r6,r10
	temp.u8 = (~ctx.r6.u32 + ctx.r10.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r4.u64 = ~ctx.r6.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r5,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r5.u32);
	// stb r4,97(r1)
	PPC_STORE_U8(ctx.r1.u32 + 97, ctx.r4.u8);
	// bl 0x8222b7c8
	ctx.lr = 0x823448DC;
	sub_8222B7C8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82344860) {
	__imp__sub_82344860(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823448EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823448EC) {
	__imp__sub_823448EC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823448F0) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31816
	ctx.r11.s64 = -2085093376;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r9,r11,-12480
	ctx.r9.s64 = ctx.r11.s64 + -12480;
	// lwz r11,276(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	// addi r8,r11,216
	ctx.r8.s64 = ctx.r11.s64 + 216;
	// addi r4,r9,4
	ctx.r4.s64 = ctx.r9.s64 + 4;
	// addi r5,r8,92
	ctx.r5.s64 = ctx.r8.s64 + 92;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// lfs f0,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f0
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f12,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fmr f31,f12
	ctx.f31.f64 = ctx.f12.f64;
	// fmr f30,f0
	ctx.f30.f64 = ctx.f0.f64;
	// fmr f29,f11
	ctx.f29.f64 = ctx.f11.f64;
	// fmadds f10,f12,f12,f13
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f13.f64));
	// fmadds f9,f11,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f10.f64));
	// fsqrts f2,f9
	ctx.f2.f64 = double(float(sqrt(ctx.f9.f64)));
	// bl 0x823442f8
	ctx.lr = 0x82344954;
	sub_823442F8(ctx, base);
	// lfs f8,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f7,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// lfs f13,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f5,f8,f31
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// fmadds f4,f7,f30,f5
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f30.f64 + ctx.f5.f64));
	// fmadds f3,f6,f29,f4
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f29.f64 + ctx.f4.f64));
	// fcmpu cr6,f3,f13
	ctx.cr6.compare(ctx.f3.f64, ctx.f13.f64);
	// ble cr6,0x823449e8
	if (!ctx.cr6.gt) goto loc_823449E8;
	// fmuls f11,f7,f7
	ctx.f11.f64 = double(float(ctx.f7.f64 * ctx.f7.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f10,f8
	ctx.f10.f64 = ctx.f8.f64;
	// fmr f12,f7
	ctx.f12.f64 = ctx.f7.f64;
	// fmr f9,f6
	ctx.f9.f64 = ctx.f6.f64;
	// lfs f0,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f8,f8,f8,f11
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 + ctx.f11.f64));
	// fmadds f7,f6,f6,f8
	ctx.f7.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f8.f64));
	// fsqrts f6,f7
	ctx.f6.f64 = double(float(sqrt(ctx.f7.f64)));
	// fneg f5,f6
	ctx.f5.u64 = ctx.f6.u64 ^ 0x8000000000000000;
	// fsel f4,f5,f0,f6
	ctx.f4.f64 = ctx.f5.f64 >= 0.0 ? ctx.f0.f64 : ctx.f6.f64;
	// fdivs f3,f0,f4
	ctx.f3.f64 = double(float(ctx.f0.f64 / ctx.f4.f64));
	// fmuls f0,f10,f3
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f3.f64));
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// fmuls f11,f9,f3
	ctx.f11.f64 = double(float(ctx.f9.f64 * ctx.f3.f64));
	// stfs f11,8(r5)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r5.u32 + 8, temp.u32);
	// fmuls f12,f12,f3
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f3.f64));
	// stfs f12,4(r5)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// fmuls f9,f0,f2
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f2.f64));
	// stfs f9,0(r5)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// lfs f8,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f8,f2
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f2.f64));
	// stfs f7,4(r5)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// fmr f10,f0
	ctx.f10.f64 = ctx.f0.f64;
	// lfs f6,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f6,f2
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f2.f64));
	// stfs f5,8(r5)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r5.u32 + 8, temp.u32);
loc_823449E8:
	// lfs f0,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x82344a00
	if (!ctx.cr6.eq) goto loc_82344A00;
	// lfs f0,96(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x82344a64
	if (ctx.cr6.eq) goto loc_82344A64;
loc_82344A00:
	// lwz r8,44(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 44);
	// addi r6,r9,4
	ctx.r6.s64 = ctx.r9.s64 + 4;
	// lhz r5,126(r10)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r10.u32 + 126);
	// lis r7,-32204
	ctx.r7.s64 = -2110521344;
	// lwz r11,276(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 276);
	// addic r4,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r4.s64 = ctx.r8.s64 + -1;
	// lwz r3,316(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 316);
	// stfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r11,r11,216
	ctx.r11.s64 = ctx.r11.s64 + 216;
	// stw r6,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// subfe r10,r4,r8
	temp.u8 = (~ctx.r4.u32 + ctx.r8.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r4.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r5,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r5.u32);
	// addi r9,r11,92
	ctx.r9.s64 = ctx.r11.s64 + 92;
	// addi r8,r11,68
	ctx.r8.s64 = ctx.r11.s64 + 68;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r3,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r3.u32);
	// addi r5,r7,17144
	ctx.r5.s64 = ctx.r7.s64 + 17144;
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// stb r6,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r6.u8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// stw r5,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r5.u32);
	// stb r10,97(r1)
	PPC_STORE_U8(ctx.r1.u32 + 97, ctx.r10.u8);
	// bl 0x8222b7c8
	ctx.lr = 0x82344A64;
	sub_8222B7C8(ctx, base);
loc_82344A64:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
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

PPC_WEAK_FUNC(sub_823448F0) {
	__imp__sub_823448F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82344A80) {
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
	// lis r11,-31816
	ctx.r11.s64 = -2085093376;
	// lwz r10,276(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// addi r11,r11,-12480
	ctx.r11.s64 = ctx.r11.s64 + -12480;
	// addi r8,r10,216
	ctx.r8.s64 = ctx.r10.s64 + 216;
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82344ac0
	if (ctx.cr6.eq) goto loc_82344AC0;
	// addi r5,r8,92
	ctx.r5.s64 = ctx.r8.s64 + 92;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x823442f8
	ctx.lr = 0x82344AC0;
	sub_823442F8(ctx, base);
loc_82344AC0:
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// bl 0x82344860
	ctx.lr = 0x82344ACC;
	sub_82344860(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82344A80) {
	__imp__sub_82344A80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82344ADC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82344ADC) {
	__imp__sub_82344ADC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82344AE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf40
	ctx.lr = 0x82344AE8;
	__savegprlr_14(ctx, base);
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x823de018
	ctx.lr = 0x82344AF0;
	__savefpr_24(ctx, base);
	// stwu r1,-784(r1)
	ea = -784 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r14,276(r3)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	// lis r11,-31816
	ctx.r11.s64 = -2085093376;
	// mr r15,r5
	ctx.r15.u64 = ctx.r5.u64;
	// addi r10,r11,-12608
	ctx.r10.s64 = ctx.r11.s64 + -12608;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r9,560(r14)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r14.u32 + 560);
	// li r18,529
	ctx.r18.s64 = 529;
	// lwz r8,8(r14)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r14.u32 + 8);
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r14,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r14.u32);
	// cmpwi cr6,r8,6
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 6, ctx.xer);
	// lwzx r16,r7,r10
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// lwz r6,4(r16)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r16.u32 + 4);
	// subfic r5,r6,0
	ctx.xer.ca = ctx.r6.u32 <= 0;
	ctx.r5.s64 = 0 - ctx.r6.s64;
	// subfe r4,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r4.u64 = ~ctx.r5.u64 + ctx.r5.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r11,r4,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x2;
	// addi r22,r11,4
	ctx.r22.s64 = ctx.r11.s64 + 4;
	// bne cr6,0x82344b48
	if (!ctx.cr6.eq) goto loc_82344B48;
	// lis r18,1
	ctx.r18.s64 = 65536;
	// ori r18,r18,529
	ctx.r18.u64 = ctx.r18.u64 | 529;
loc_82344B48:
	// lfs f0,0(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r26,24
	ctx.r3.s64 = ctx.r26.s64 + 24;
	// lfs f13,20(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,384
	ctx.r4.s64 = ctx.r1.s64 + 384;
	// lfs f12,4(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,420(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 420, temp.u32);
	// stfs f13,428(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 428, temp.u32);
	// stfs f12,424(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 424, temp.u32);
	// bl 0x822da650
	ctx.lr = 0x82344B6C;
	sub_822DA650(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r17,-32032
	ctx.r17.s64 = -2099249152;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// lfs f24,-23144(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -23144);
	ctx.f24.f64 = double(temp.f32);
	// lfs f25,5484(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f25.f64 = double(temp.f32);
	// lfs f29,12168(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12168);
	ctx.f29.f64 = double(temp.f32);
	// ble cr6,0x82344e3c
	if (!ctx.cr6.gt) goto loc_82344E3C;
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// addi r25,r11,-32276
	ctx.r25.s64 = ctx.r11.s64 + -32276;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lfs f27,3844(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3844);
	ctx.f27.f64 = double(temp.f32);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lfs f28,20476(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 20476);
	ctx.f28.f64 = double(temp.f32);
	// lfs f30,27440(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 27440);
	ctx.f30.f64 = double(temp.f32);
	// addi r28,r1,192
	ctx.r28.s64 = ctx.r1.s64 + 192;
	// lfs f31,5488(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 5488);
	ctx.f31.f64 = double(temp.f32);
	// addi r31,r26,168
	ctx.r31.s64 = ctx.r26.s64 + 168;
	// subfic r23,r26,764
	ctx.xer.ca = ctx.r26.u32 <= 764;
	ctx.r23.s64 = 764 - ctx.r26.s64;
	// mr r24,r22
	ctx.r24.u64 = ctx.r22.u64;
	// li r19,0
	ctx.r19.s64 = 0;
	// addi r21,r11,-13772
	ctx.r21.s64 = ctx.r11.s64 + -13772;
	// addi r20,r10,-9672
	ctx.r20.s64 = ctx.r10.s64 + -9672;
loc_82344BDC:
	// lwz r30,276(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 276);
	// add r29,r23,r31
	ctx.r29.u64 = ctx.r23.u64 + ctx.r31.u64;
	// lwzx r11,r29,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r30.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x82344c20
	if (!ctx.cr6.lt) goto loc_82344C20;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lhz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// bl 0x822a13a0
	ctx.lr = 0x82344BFC;
	sub_822A13A0(ctx, base);
	// mr r14,r3
	ctx.r14.u64 = ctx.r3.u64;
	// lhz r3,302(r27)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r27.u32 + 302);
	// bl 0x822a13a0
	ctx.lr = 0x82344C08;
	sub_822A13A0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r6,r14
	ctx.r6.u64 = ctx.r14.u64;
	// bl 0x822830e8
	ctx.lr = 0x82344C1C;
	sub_822830E8(ctx, base);
	// lwz r14,124(r1)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
loc_82344C20:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwzx r4,r29,r30
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r30.u32);
	// bl 0x8222ed80
	ctx.lr = 0x82344C2C;
	sub_8222ED80(ctx, base);
	// addi r11,r3,16
	ctx.r11.s64 = ctx.r3.s64 + 16;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,384
	ctx.r4.s64 = ctx.r1.s64 + 384;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,176(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,180(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,184(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// bl 0x822d67f0
	ctx.lr = 0x82344C58;
	sub_822D67F0(ctx, base);
	// lwz r11,-5884(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + -5884);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82344cb0
	if (ctx.cr6.eq) goto loc_82344CB0;
	// stfs f29,352(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 352, temp.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stfs f25,356(r1)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 356, temp.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// stfs f25,360(r1)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 360, temp.u32);
	// addi r6,r1,352
	ctx.r6.s64 = ctx.r1.s64 + 352;
	// stfs f29,364(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 364, temp.u32);
	// addi r4,r1,432
	ctx.r4.s64 = ctx.r1.s64 + 432;
	// stfs f25,432(r1)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 432, temp.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stfs f25,436(r1)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 436, temp.u32);
	// fmr f1,f25
	ctx.f1.f64 = ctx.f25.f64;
	// stfs f25,440(r1)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 440, temp.u32);
	// stfs f31,444(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 444, temp.u32);
	// stfs f31,448(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 448, temp.u32);
	// stfs f31,452(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 452, temp.u32);
	// bl 0x821f2d40
	ctx.lr = 0x82344CAC;
	sub_821F2D40(ctx, base);
	// lwz r11,-5884(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + -5884);
loc_82344CB0:
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// fadds f11,f12,f30
	ctx.f11.f64 = double(float(ctx.f12.f64 + ctx.f30.f64));
	// fsubs f10,f12,f28
	ctx.f10.f64 = double(float(ctx.f12.f64 - ctx.f28.f64));
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f11,120(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f10,104(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lbz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82344d0c
	if (ctx.cr6.eq) goto loc_82344D0C;
	// stfs f25,304(r1)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 304, temp.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// stfs f25,308(r1)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 308, temp.u32);
	// addi r5,r1,304
	ctx.r5.s64 = ctx.r1.s64 + 304;
	// stfs f29,312(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 312, temp.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stfs f29,316(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 316, temp.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x821f2d08
	ctx.lr = 0x82344D0C;
	sub_821F2D08(ctx, base);
loc_82344D0C:
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// lhz r7,126(r27)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r27.u32 + 126);
	// mr r8,r18
	ctx.r8.u64 = ctx.r18.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,512
	ctx.r3.s64 = ctx.r1.s64 + 512;
	// bl 0x821fe618
	ctx.lr = 0x82344D28;
	sub_821FE618(ctx, base);
	// lfs f0,512(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 512);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// bge cr6,0x82344d78
	if (!ctx.cr6.lt) goto loc_82344D78;
	// lfs f13,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,528(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 528);
	// lfs f11,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f9,f11,f13
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// lfs f10,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f10.f64 = double(temp.f32);
	// srawi r10,r11,20
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFFFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 20;
	// lfs f11,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f8,f10,f12
	ctx.f8.f64 = double(float(ctx.f10.f64 - ctx.f12.f64));
	// lfs f7,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f7.f64 = double(temp.f32);
	// clrlwi r9,r10,27
	ctx.r9.u64 = ctx.r10.u32 & 0x1F;
	// fsubs f6,f7,f11
	ctx.f6.f64 = double(float(ctx.f7.f64 - ctx.f11.f64));
	// stw r9,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r9.u32);
	// fmadds f13,f9,f0,f13
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fmadds f12,f8,f0,f12
	ctx.f12.f64 = double(float(ctx.f8.f64 * ctx.f0.f64 + ctx.f12.f64));
	// fmadds f0,f6,f0,f11
	ctx.f0.f64 = double(float(ctx.f6.f64 * ctx.f0.f64 + ctx.f11.f64));
	// b 0x82344d88
	goto loc_82344D88;
loc_82344D78:
	// lfs f13,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// stw r19,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r19.u32);
	// lfs f12,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
loc_82344D88:
	// stfs f0,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// cmpwi cr6,r15,0
	ctx.cr6.compare<int32_t>(ctx.r15.s32, 0, ctx.xer);
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// beq cr6,0x82344dbc
	if (ctx.cr6.eq) goto loc_82344DBC;
	// lfs f11,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f11,f27
	ctx.f10.f64 = double(float(ctx.f11.f64 - ctx.f27.f64));
	// lfs f9,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f9.f64 = double(temp.f32);
	// stfs f10,0(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// fmadds f8,f10,f24,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f24.f64 + ctx.f9.f64));
	// stfs f8,24(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// fcmpu cr6,f8,f0
	ctx.cr6.compare(ctx.f8.f64, ctx.f0.f64);
	// bge cr6,0x82344dc4
	if (!ctx.cr6.lt) goto loc_82344DC4;
loc_82344DBC:
	// stfs f0,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// stfs f25,0(r31)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
loc_82344DC4:
	// stfs f13,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
	// lwz r11,-5884(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + -5884);
	// stfs f12,4(r28)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r28.u32 + 4, temp.u32);
	// lfs f0,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r28)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r28.u32 + 8, temp.u32);
	// lbz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82344e28
	if (ctx.cr6.eq) goto loc_82344E28;
	// stfs f25,320(r1)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 320, temp.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stfs f29,324(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 324, temp.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// stfs f25,328(r1)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 328, temp.u32);
	// addi r6,r1,320
	ctx.r6.s64 = ctx.r1.s64 + 320;
	// stfs f29,332(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 332, temp.u32);
	// addi r4,r1,464
	ctx.r4.s64 = ctx.r1.s64 + 464;
	// stfs f25,464(r1)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 464, temp.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stfs f25,468(r1)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 468, temp.u32);
	// fmr f1,f25
	ctx.f1.f64 = ctx.f25.f64;
	// stfs f25,472(r1)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 472, temp.u32);
	// stfs f31,476(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 476, temp.u32);
	// stfs f31,480(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 480, temp.u32);
	// stfs f31,484(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 484, temp.u32);
	// bl 0x821f2d40
	ctx.lr = 0x82344E28;
	sub_821F2D40(ctx, base);
loc_82344E28:
	// addic. r24,r24,-1
	ctx.xer.ca = ctx.r24.u32 > 0;
	ctx.r24.s64 = ctx.r24.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r28,r28,12
	ctx.r28.s64 = ctx.r28.s64 + 12;
	// bne 0x82344bdc
	if (!ctx.cr0.eq) goto loc_82344BDC;
loc_82344E3C:
	// lfs f13,200(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,236(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	ctx.f0.f64 = double(temp.f32);
	// li r9,1
	ctx.r9.s64 = 1;
	// lfs f10,212(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	ctx.f10.f64 = double(temp.f32);
	// cmpwi cr6,r22,1
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 1, ctx.xer);
	// lfs f9,224(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	ctx.f9.f64 = double(temp.f32);
	// fadds f2,f10,f13
	ctx.f2.f64 = double(float(ctx.f10.f64 + ctx.f13.f64));
	// fadds f1,f9,f0
	ctx.f1.f64 = double(float(ctx.f9.f64 + ctx.f0.f64));
	// lfs f8,228(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	ctx.f8.f64 = double(temp.f32);
	// fadds f3,f0,f10
	ctx.f3.f64 = double(float(ctx.f0.f64 + ctx.f10.f64));
	// lfs f7,204(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	ctx.f7.f64 = double(temp.f32);
	// fadds f9,f9,f13
	ctx.f9.f64 = double(float(ctx.f9.f64 + ctx.f13.f64));
	// lfs f12,192(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	ctx.f12.f64 = double(temp.f32);
	// lfs f6,216(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	ctx.f6.f64 = double(temp.f32);
	// fadds f31,f8,f7
	ctx.f31.f64 = double(float(ctx.f8.f64 + ctx.f7.f64));
	// lfs f0,2416(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2416);
	ctx.f0.f64 = double(temp.f32);
	// fadds f30,f6,f12
	ctx.f30.f64 = double(float(ctx.f6.f64 + ctx.f12.f64));
	// fadds f7,f7,f12
	ctx.f7.f64 = double(float(ctx.f7.f64 + ctx.f12.f64));
	// lfs f11,196(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	ctx.f11.f64 = double(temp.f32);
	// fadds f6,f6,f8
	ctx.f6.f64 = double(float(ctx.f6.f64 + ctx.f8.f64));
	// lfs f4,220(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	ctx.f4.f64 = double(temp.f32);
	// lfs f10,232(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	ctx.f10.f64 = double(temp.f32);
	// fadds f28,f4,f11
	ctx.f28.f64 = double(float(ctx.f4.f64 + ctx.f11.f64));
	// lfs f5,208(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	ctx.f5.f64 = double(temp.f32);
	// fadds f4,f4,f10
	ctx.f4.f64 = double(float(ctx.f4.f64 + ctx.f10.f64));
	// fmuls f2,f2,f0
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// fmuls f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fmuls f3,f3,f0
	ctx.f3.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// fmuls f9,f9,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fadds f8,f10,f5
	ctx.f8.f64 = double(float(ctx.f10.f64 + ctx.f5.f64));
	// fadds f5,f5,f11
	ctx.f5.f64 = double(float(ctx.f5.f64 + ctx.f11.f64));
	// fmuls f10,f7,f0
	ctx.f10.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// fmuls f7,f6,f0
	ctx.f7.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// fmuls f31,f31,f0
	ctx.f31.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
	// fmuls f30,f30,f0
	ctx.f30.f64 = double(float(ctx.f30.f64 * ctx.f0.f64));
	// fmuls f4,f4,f0
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// fsubs f2,f2,f1
	ctx.f2.f64 = double(float(ctx.f2.f64 - ctx.f1.f64));
	// fsubs f1,f3,f9
	ctx.f1.f64 = double(float(ctx.f3.f64 - ctx.f9.f64));
	// fmuls f6,f8,f0
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fmuls f5,f5,f0
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// fmuls f9,f28,f0
	ctx.f9.f64 = double(float(ctx.f28.f64 * ctx.f0.f64));
	// fsubs f3,f10,f7
	ctx.f3.f64 = double(float(ctx.f10.f64 - ctx.f7.f64));
	// fsubs f8,f31,f30
	ctx.f8.f64 = double(float(ctx.f31.f64 - ctx.f30.f64));
	// fmuls f0,f2,f2
	ctx.f0.f64 = double(float(ctx.f2.f64 * ctx.f2.f64));
	// fmuls f10,f1,f1
	ctx.f10.f64 = double(float(ctx.f1.f64 * ctx.f1.f64));
	// fsubs f7,f5,f4
	ctx.f7.f64 = double(float(ctx.f5.f64 - ctx.f4.f64));
	// fsubs f9,f6,f9
	ctx.f9.f64 = double(float(ctx.f6.f64 - ctx.f9.f64));
	// fmadds f6,f3,f3,f0
	ctx.f6.f64 = double(float(ctx.f3.f64 * ctx.f3.f64 + ctx.f0.f64));
	// fmadds f5,f8,f8,f10
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 + ctx.f10.f64));
	// fmadds f4,f7,f7,f6
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f7.f64 + ctx.f6.f64));
	// fmadds f0,f9,f9,f5
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f5.f64));
	// fsqrts f10,f4
	ctx.f10.f64 = double(float(sqrt(ctx.f4.f64)));
	// fsqrts f6,f0
	ctx.f6.f64 = double(float(sqrt(ctx.f0.f64)));
	// fneg f5,f6
	ctx.f5.u64 = ctx.f6.u64 ^ 0x8000000000000000;
	// fneg f4,f10
	ctx.f4.u64 = ctx.f10.u64 ^ 0x8000000000000000;
	// fsel f0,f5,f29,f6
	ctx.f0.f64 = ctx.f5.f64 >= 0.0 ? ctx.f29.f64 : ctx.f6.f64;
	// fsel f10,f4,f29,f10
	ctx.f10.f64 = ctx.f4.f64 >= 0.0 ? ctx.f29.f64 : ctx.f10.f64;
	// fdivs f6,f29,f0
	ctx.f6.f64 = double(float(ctx.f29.f64 / ctx.f0.f64));
	// fdivs f5,f29,f10
	ctx.f5.f64 = double(float(ctx.f29.f64 / ctx.f10.f64));
	// fmuls f4,f1,f6
	ctx.f4.f64 = double(float(ctx.f1.f64 * ctx.f6.f64));
	// fmuls f1,f7,f5
	ctx.f1.f64 = double(float(ctx.f7.f64 * ctx.f5.f64));
	// fmuls f10,f9,f6
	ctx.f10.f64 = double(float(ctx.f9.f64 * ctx.f6.f64));
	// fmuls f0,f6,f8
	ctx.f0.f64 = double(float(ctx.f6.f64 * ctx.f8.f64));
	// fmuls f9,f2,f5
	ctx.f9.f64 = double(float(ctx.f2.f64 * ctx.f5.f64));
	// fmuls f8,f5,f3
	ctx.f8.f64 = double(float(ctx.f5.f64 * ctx.f3.f64));
	// fmuls f7,f1,f4
	ctx.f7.f64 = double(float(ctx.f1.f64 * ctx.f4.f64));
	// fmuls f6,f9,f0
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmuls f5,f10,f8
	ctx.f5.f64 = double(float(ctx.f10.f64 * ctx.f8.f64));
	// fmsubs f31,f9,f10,f7
	ctx.f31.f64 = double(float(ctx.f9.f64 * ctx.f10.f64 - ctx.f7.f64));
	// fmsubs f30,f4,f8,f6
	ctx.f30.f64 = double(float(ctx.f4.f64 * ctx.f8.f64 - ctx.f6.f64));
	// fmsubs f27,f1,f0,f5
	ctx.f27.f64 = double(float(ctx.f1.f64 * ctx.f0.f64 - ctx.f5.f64));
	// fmuls f4,f12,f31
	ctx.f4.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// fmadds f3,f11,f30,f4
	ctx.f3.f64 = double(float(ctx.f11.f64 * ctx.f30.f64 + ctx.f4.f64));
	// fmadds f28,f13,f27,f3
	ctx.f28.f64 = double(float(ctx.f13.f64 * ctx.f27.f64 + ctx.f3.f64));
	// ble cr6,0x823450c0
	if (!ctx.cr6.gt) goto loc_823450C0;
	// addi r11,r22,-1
	ctx.r11.s64 = ctx.r22.s64 + -1;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x82345060
	if (ctx.cr6.lt) goto loc_82345060;
	// addi r10,r22,-5
	ctx.r10.s64 = ctx.r22.s64 + -5;
	// lfs f0,360(r16)
	temp.u32 = PPC_LOAD_U32(ctx.r16.u32 + 360);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r1,212
	ctx.r11.s64 = ctx.r1.s64 + 212;
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82344F98:
	// lfs f13,-4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f30,f13
	ctx.f12.f64 = double(float(ctx.f30.f64 * ctx.f13.f64));
	// lfs f11,-8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f13,f27,f10
	ctx.f13.f64 = double(float(ctx.f27.f64 * ctx.f10.f64));
	// fmadds f12,f31,f11,f12
	ctx.f12.f64 = double(float(ctx.f31.f64 * ctx.f11.f64 + ctx.f12.f64));
	// fadds f9,f12,f13
	ctx.f9.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// fsubs f8,f9,f28
	ctx.f8.f64 = double(float(ctx.f9.f64 - ctx.f28.f64));
	// fcmpu cr6,f8,f0
	ctx.cr6.compare(ctx.f8.f64, ctx.f0.f64);
	// ble cr6,0x82344fc8
	if (!ctx.cr6.gt) goto loc_82344FC8;
	// fadds f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// fsubs f28,f13,f0
	ctx.f28.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
loc_82344FC8:
	// lfs f13,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f30,f13
	ctx.f12.f64 = double(float(ctx.f30.f64 * ctx.f13.f64));
	// lfs f11,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f13,f27,f10
	ctx.f13.f64 = double(float(ctx.f27.f64 * ctx.f10.f64));
	// fmadds f12,f31,f11,f12
	ctx.f12.f64 = double(float(ctx.f31.f64 * ctx.f11.f64 + ctx.f12.f64));
	// fadds f9,f13,f12
	ctx.f9.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// fsubs f8,f9,f28
	ctx.f8.f64 = double(float(ctx.f9.f64 - ctx.f28.f64));
	// fcmpu cr6,f8,f0
	ctx.cr6.compare(ctx.f8.f64, ctx.f0.f64);
	// ble cr6,0x82344ff8
	if (!ctx.cr6.gt) goto loc_82344FF8;
	// fadds f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// fsubs f28,f13,f0
	ctx.f28.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
loc_82344FF8:
	// lfs f13,20(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f30,f13
	ctx.f12.f64 = double(float(ctx.f30.f64 * ctx.f13.f64));
	// lfs f11,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f13,f27,f10
	ctx.f13.f64 = double(float(ctx.f27.f64 * ctx.f10.f64));
	// fmadds f12,f31,f11,f12
	ctx.f12.f64 = double(float(ctx.f31.f64 * ctx.f11.f64 + ctx.f12.f64));
	// fadds f9,f13,f12
	ctx.f9.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// fsubs f8,f9,f28
	ctx.f8.f64 = double(float(ctx.f9.f64 - ctx.f28.f64));
	// fcmpu cr6,f8,f0
	ctx.cr6.compare(ctx.f8.f64, ctx.f0.f64);
	// ble cr6,0x82345028
	if (!ctx.cr6.gt) goto loc_82345028;
	// fadds f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// fsubs f28,f13,f0
	ctx.f28.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
loc_82345028:
	// lfs f13,32(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f30,f13
	ctx.f12.f64 = double(float(ctx.f30.f64 * ctx.f13.f64));
	// lfs f11,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f13,f27,f10
	ctx.f13.f64 = double(float(ctx.f27.f64 * ctx.f10.f64));
	// fmadds f12,f31,f11,f12
	ctx.f12.f64 = double(float(ctx.f31.f64 * ctx.f11.f64 + ctx.f12.f64));
	// fadds f9,f13,f12
	ctx.f9.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// fsubs f8,f9,f28
	ctx.f8.f64 = double(float(ctx.f9.f64 - ctx.f28.f64));
	// fcmpu cr6,f8,f0
	ctx.cr6.compare(ctx.f8.f64, ctx.f0.f64);
	// ble cr6,0x82345058
	if (!ctx.cr6.gt) goto loc_82345058;
	// fadds f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// fsubs f28,f13,f0
	ctx.f28.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
loc_82345058:
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// bdnz 0x82344f98
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82344F98;
loc_82345060:
	// cmpw cr6,r9,r22
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r22.s32, ctx.xer);
	// bge cr6,0x823450c0
	if (!ctx.cr6.lt) goto loc_823450C0;
	// rlwinm r11,r9,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lfs f12,360(r16)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r16.u32 + 360);
	ctx.f12.f64 = double(temp.f32);
	// subf r8,r9,r22
	ctx.r8.s64 = ctx.r22.s64 - ctx.r9.s64;
	// add r7,r9,r11
	ctx.r7.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r11,r1,200
	ctx.r11.s64 = ctx.r1.s64 + 200;
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_82345088:
	// lfs f0,-4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f30,f0
	ctx.f13.f64 = double(float(ctx.f30.f64 * ctx.f0.f64));
	// lfs f11,-8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f0,f27,f10
	ctx.f0.f64 = double(float(ctx.f27.f64 * ctx.f10.f64));
	// fmadds f13,f31,f11,f13
	ctx.f13.f64 = double(float(ctx.f31.f64 * ctx.f11.f64 + ctx.f13.f64));
	// fadds f9,f13,f0
	ctx.f9.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// fsubs f8,f9,f28
	ctx.f8.f64 = double(float(ctx.f9.f64 - ctx.f28.f64));
	// fcmpu cr6,f8,f12
	ctx.cr6.compare(ctx.f8.f64, ctx.f12.f64);
	// ble cr6,0x823450b8
	if (!ctx.cr6.gt) goto loc_823450B8;
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// fsubs f28,f0,f12
	ctx.f28.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
loc_823450B8:
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// bdnz 0x82345088
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82345088;
loc_823450C0:
	// lfs f0,392(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 392);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r1,488
	ctx.r4.s64 = ctx.r1.s64 + 488;
	// fmuls f11,f0,f31
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// lfs f13,384(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 384);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f10,f13,f30
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f30.f64));
	// lfs f12,388(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 388);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f9,f12,f27
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f27.f64));
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// fmsubs f8,f13,f27,f11
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f27.f64 - ctx.f11.f64));
	// fmsubs f7,f12,f31,f10
	ctx.f7.f64 = double(float(ctx.f12.f64 * ctx.f31.f64 - ctx.f10.f64));
	// fmsubs f6,f0,f30,f9
	ctx.f6.f64 = double(float(ctx.f0.f64 * ctx.f30.f64 - ctx.f9.f64));
	// fmuls f5,f8,f8
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f8.f64));
	// fmadds f4,f7,f7,f5
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f7.f64 + ctx.f5.f64));
	// fmadds f3,f6,f6,f4
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f4.f64));
	// fsqrts f2,f3
	ctx.f2.f64 = double(float(sqrt(ctx.f3.f64)));
	// fneg f1,f2
	ctx.f1.u64 = ctx.f2.u64 ^ 0x8000000000000000;
	// fsel f0,f1,f29,f2
	ctx.f0.f64 = ctx.f1.f64 >= 0.0 ? ctx.f29.f64 : ctx.f2.f64;
	// fdivs f12,f29,f0
	ctx.f12.f64 = double(float(ctx.f29.f64 / ctx.f0.f64));
	// fmuls f0,f6,f12
	ctx.f0.f64 = double(float(ctx.f6.f64 * ctx.f12.f64));
	// stfs f0,396(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 396, temp.u32);
	// fmuls f13,f7,f12
	ctx.f13.f64 = double(float(ctx.f7.f64 * ctx.f12.f64));
	// stfs f13,404(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 404, temp.u32);
	// fmuls f12,f8,f12
	ctx.f12.f64 = double(float(ctx.f8.f64 * ctx.f12.f64));
	// stfs f12,400(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 400, temp.u32);
	// fmuls f11,f0,f27
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f27.f64));
	// fmuls f10,f13,f30
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f30.f64));
	// fmuls f9,f12,f31
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// fmsubs f8,f13,f31,f11
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f31.f64 - ctx.f11.f64));
	// fmsubs f7,f12,f27,f10
	ctx.f7.f64 = double(float(ctx.f12.f64 * ctx.f27.f64 - ctx.f10.f64));
	// fmsubs f6,f0,f30,f9
	ctx.f6.f64 = double(float(ctx.f0.f64 * ctx.f30.f64 - ctx.f9.f64));
	// fmuls f5,f8,f8
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f8.f64));
	// fmadds f4,f7,f7,f5
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f7.f64 + ctx.f5.f64));
	// fmadds f3,f6,f6,f4
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f4.f64));
	// fsqrts f2,f3
	ctx.f2.f64 = double(float(sqrt(ctx.f3.f64)));
	// fneg f1,f2
	ctx.f1.u64 = ctx.f2.u64 ^ 0x8000000000000000;
	// fsel f0,f1,f29,f2
	ctx.f0.f64 = ctx.f1.f64 >= 0.0 ? ctx.f29.f64 : ctx.f2.f64;
	// fdivs f13,f29,f0
	ctx.f13.f64 = double(float(ctx.f29.f64 / ctx.f0.f64));
	// fmuls f12,f13,f7
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f7.f64));
	// stfs f12,384(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 384, temp.u32);
	// fmuls f11,f8,f13
	ctx.f11.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// stfs f11,388(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 388, temp.u32);
	// fmuls f10,f6,f13
	ctx.f10.f64 = double(float(ctx.f6.f64 * ctx.f13.f64));
	// stfs f10,392(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 392, temp.u32);
	// bl 0x822d7c78
	ctx.lr = 0x82345170;
	sub_822D7C78(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,488(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 488);
	ctx.f1.f64 = double(temp.f32);
	// addi r31,r26,36
	ctx.r31.s64 = ctx.r26.s64 + 36;
	// lfs f2,36(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 36);
	ctx.f2.f64 = double(temp.f32);
	// fmr f4,f24
	ctx.f4.f64 = ctx.f24.f64;
	// lfs f26,23112(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 23112);
	ctx.f26.f64 = double(temp.f32);
	// fmr f3,f26
	ctx.f3.f64 = ctx.f26.f64;
	// bl 0x822d4508
	ctx.lr = 0x82345190;
	sub_822D4508(ctx, base);
	// stfs f1,24(r26)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r26.u32 + 24, temp.u32);
	// addi r30,r26,24
	ctx.r30.s64 = ctx.r26.s64 + 24;
	// lfs f2,44(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 44);
	ctx.f2.f64 = double(temp.f32);
	// fmr f4,f24
	ctx.f4.f64 = ctx.f24.f64;
	// lfs f1,496(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 496);
	ctx.f1.f64 = double(temp.f32);
	// fmr f3,f26
	ctx.f3.f64 = ctx.f26.f64;
	// bl 0x822d4508
	ctx.lr = 0x823451AC;
	sub_822D4508(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f9,24(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 24);
	ctx.f9.f64 = double(temp.f32);
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f0,6024(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6024);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f6,f1,f0
	ctx.f6.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// lfs f13,-13280(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -13280);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 - ctx.f0.f64));
	// lfs f26,2424(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2424);
	ctx.f26.f64 = double(temp.f32);
	// fsubs f7,f13,f9
	ctx.f7.f64 = double(float(ctx.f13.f64 - ctx.f9.f64));
	// fsubs f5,f13,f1
	ctx.f5.f64 = double(float(ctx.f13.f64 - ctx.f1.f64));
	// fsel f3,f6,f0,f1
	ctx.f3.f64 = ctx.f6.f64 >= 0.0 ? ctx.f0.f64 : ctx.f1.f64;
	// fsel f4,f8,f0,f9
	ctx.f4.f64 = ctx.f8.f64 >= 0.0 ? ctx.f0.f64 : ctx.f9.f64;
	// fsel f1,f5,f13,f3
	ctx.f1.f64 = ctx.f5.f64 >= 0.0 ? ctx.f13.f64 : ctx.f3.f64;
	// stfs f1,32(r26)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r26.u32 + 32, temp.u32);
	// fsel f2,f7,f13,f4
	ctx.f2.f64 = ctx.f7.f64 >= 0.0 ? ctx.f13.f64 : ctx.f4.f64;
	// stfs f2,24(r26)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r26.u32 + 24, temp.u32);
	// lwz r7,8(r14)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r14.u32 + 8);
	// cmpwi cr6,r7,6
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 6, ctx.xer);
	// beq cr6,0x82345224
	if (ctx.cr6.eq) goto loc_82345224;
	// fcmpu cr6,f27,f25
	ctx.cr6.compare(ctx.f27.f64, ctx.f25.f64);
	// beq cr6,0x82345224
	if (ctx.cr6.eq) goto loc_82345224;
	// lfs f0,0(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f13,f26,f27
	ctx.f13.f64 = double(float(ctx.f26.f64 / ctx.f27.f64));
	// fmuls f12,f0,f31
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// lfs f11,4(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f10,f11,f30,f12
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f30.f64 + ctx.f12.f64));
	// fsubs f9,f10,f28
	ctx.f9.f64 = double(float(ctx.f10.f64 - ctx.f28.f64));
	// fmuls f8,f9,f13
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// stfs f8,8(r26)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r26.u32 + 8, temp.u32);
loc_82345224:
	// addi r5,r26,140
	ctx.r5.s64 = ctx.r26.s64 + 140;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822d7700
	ctx.lr = 0x82345234;
	sub_822D7700(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,140(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 140);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,-5884(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + -5884);
	// lfs f0,5996(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5996);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f12,140(r26)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r26.u32 + 140, temp.u32);
	// lfs f11,144(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 144);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f10,144(r26)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r26.u32 + 144, temp.u32);
	// lfs f9,148(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 148);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// stfs f8,148(r26)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r26.u32 + 148, temp.u32);
	// lbz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82345394
	if (ctx.cr6.eq) goto loc_82345394;
	// lfs f0,192(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f6,f26,f27
	ctx.f6.f64 = double(float(ctx.f26.f64 / ctx.f27.f64));
	// lfs f13,204(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f5,f0,f31
	ctx.f5.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// lfs f12,216(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f4,f13,f31
	ctx.f4.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// lfs f11,228(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f3,f12,f31
	ctx.f3.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// fmuls f2,f11,f31
	ctx.f2.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// lfs f10,196(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,208(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	ctx.f9.f64 = double(temp.f32);
	// li r6,1
	ctx.r6.s64 = 1;
	// lfs f8,220(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	ctx.f8.f64 = double(temp.f32);
	// addi r5,r1,272
	ctx.r5.s64 = ctx.r1.s64 + 272;
	// lfs f7,232(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	ctx.f7.f64 = double(temp.f32);
	// addi r4,r1,140
	ctx.r4.s64 = ctx.r1.s64 + 140;
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stfs f13,140(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stfs f12,152(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// fmadds f1,f10,f30,f5
	ctx.f1.f64 = double(float(ctx.f10.f64 * ctx.f30.f64 + ctx.f5.f64));
	// stfs f10,132(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// fmadds f0,f9,f30,f4
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f30.f64 + ctx.f4.f64));
	// stfs f9,144(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// fmadds f13,f8,f30,f3
	ctx.f13.f64 = double(float(ctx.f8.f64 * ctx.f30.f64 + ctx.f3.f64));
	// stfs f8,156(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// fmadds f12,f7,f30,f2
	ctx.f12.f64 = double(float(ctx.f7.f64 * ctx.f30.f64 + ctx.f2.f64));
	// stfs f11,164(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f7,168(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f29,272(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 272, temp.u32);
	// stfs f29,276(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 276, temp.u32);
	// stfs f25,280(r1)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 280, temp.u32);
	// stfs f29,284(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 284, temp.u32);
	// fsubs f11,f1,f28
	ctx.f11.f64 = double(float(ctx.f1.f64 - ctx.f28.f64));
	// fsubs f10,f0,f28
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f28.f64));
	// fsubs f9,f13,f28
	ctx.f9.f64 = double(float(ctx.f13.f64 - ctx.f28.f64));
	// fsubs f8,f12,f28
	ctx.f8.f64 = double(float(ctx.f12.f64 - ctx.f28.f64));
	// fmuls f7,f11,f6
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f6.f64));
	// stfs f7,136(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// fmuls f5,f10,f6
	ctx.f5.f64 = double(float(ctx.f10.f64 * ctx.f6.f64));
	// stfs f5,148(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// fmuls f4,f9,f6
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f6.f64));
	// stfs f4,160(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// fmuls f3,f8,f6
	ctx.f3.f64 = double(float(ctx.f8.f64 * ctx.f6.f64));
	// stfs f3,172(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// bl 0x821f2d08
	ctx.lr = 0x82345328;
	sub_821F2D08(ctx, base);
	// stfs f29,368(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 368, temp.u32);
	// stfs f29,372(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 372, temp.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// stfs f25,376(r1)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 376, temp.u32);
	// addi r5,r1,368
	ctx.r5.s64 = ctx.r1.s64 + 368;
	// stfs f29,380(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 380, temp.u32);
	// addi r4,r1,164
	ctx.r4.s64 = ctx.r1.s64 + 164;
	// addi r3,r1,140
	ctx.r3.s64 = ctx.r1.s64 + 140;
	// bl 0x821f2d08
	ctx.lr = 0x8234534C;
	sub_821F2D08(ctx, base);
	// stfs f29,336(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 336, temp.u32);
	// stfs f29,340(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 340, temp.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// stfs f25,344(r1)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 344, temp.u32);
	// addi r5,r1,336
	ctx.r5.s64 = ctx.r1.s64 + 336;
	// stfs f29,348(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 348, temp.u32);
	// addi r4,r1,152
	ctx.r4.s64 = ctx.r1.s64 + 152;
	// addi r3,r1,164
	ctx.r3.s64 = ctx.r1.s64 + 164;
	// bl 0x821f2d08
	ctx.lr = 0x82345370;
	sub_821F2D08(ctx, base);
	// stfs f29,288(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 288, temp.u32);
	// stfs f29,292(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 292, temp.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// stfs f25,296(r1)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 296, temp.u32);
	// addi r5,r1,288
	ctx.r5.s64 = ctx.r1.s64 + 288;
	// stfs f29,300(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 300, temp.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x821f2d08
	ctx.lr = 0x82345394;
	sub_821F2D08(ctx, base);
loc_82345394:
	// addi r1,r1,784
	ctx.r1.s64 = ctx.r1.s64 + 784;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x823de064
	ctx.lr = 0x823453A0;
	__restfpr_24(ctx, base);
	// b 0x823ddf90
	__restgprlr_14(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82344AE0) {
	__imp__sub_82344AE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823453A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823453A4) {
	__imp__sub_823453A4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823453A8) {
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
	// lwz r31,276(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lfs f0,232(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 232);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-31816
	ctx.r10.s64 = -2085093376;
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// addi r30,r10,-12416
	ctx.r30.s64 = ctx.r10.s64 + -12416;
	// li r5,188
	ctx.r5.s64 = 188;
	// stfs f0,228(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 228, temp.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f13,236(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 236);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,232(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 232, temp.u32);
	// lfs f12,240(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 240);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,236(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 236, temp.u32);
	// lfs f11,244(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 244);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,252(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 252, temp.u32);
	// lfs f10,248(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 248);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,256(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 256, temp.u32);
	// lfs f9,252(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 252);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,260(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 260, temp.u32);
	// bl 0x823de1f0
	ctx.lr = 0x8234540C;
	sub_823DE1F0(ctx, base);
	// addi r4,r31,216
	ctx.r4.s64 = ctx.r31.s64 + 216;
	// addi r3,r30,188
	ctx.r3.s64 = ctx.r30.s64 + 188;
	// li r5,312
	ctx.r5.s64 = 312;
	// bl 0x823de1f0
	ctx.lr = 0x8234541C;
	sub_823DE1F0(ctx, base);
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

PPC_WEAK_FUNC(sub_823453A8) {
	__imp__sub_823453A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82345434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82345434) {
	__imp__sub_82345434(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82345438) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82345440;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,173(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 173);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r29,276(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bne cr6,0x82345598
	if (!ctx.cr6.eq) goto loc_82345598;
	// lis r11,-31816
	ctx.r11.s64 = -2085093376;
	// addi r30,r11,-1312
	ctx.r30.s64 = ctx.r11.s64 + -1312;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// lfs f31,27440(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 27440);
	ctx.f31.f64 = double(temp.f32);
loc_82345470:
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82345528
	if (ctx.cr6.eq) goto loc_82345528;
	// cmplw cr6,r8,r28
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x82345528
	if (ctx.cr6.eq) goto loc_82345528;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x82345528
	if (!ctx.cr6.eq) goto loc_82345528;
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r10,r1,76
	ctx.r10.s64 = ctx.r1.s64 + 76;
	// addi r11,r31,280
	ctx.r11.s64 = ctx.r31.s64 + 280;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_823454A0:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x823454a0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823454A0;
	// lfs f0,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lfs f13,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// fadds f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f31.f64));
	// lfs f12,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f11,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lfs f10,232(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 232);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f10,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 + ctx.f11.f64));
	// fsubs f8,f0,f13
	ctx.f8.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f7,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f7.f64 = double(temp.f32);
	// stfs f9,80(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f6,236(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 236);
	ctx.f6.f64 = double(temp.f32);
	// fadds f5,f6,f7
	ctx.f5.f64 = double(float(ctx.f6.f64 + ctx.f7.f64));
	// fsel f4,f8,f0,f13
	ctx.f4.f64 = ctx.f8.f64 >= 0.0 ? ctx.f0.f64 : ctx.f13.f64;
	// lfs f3,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f3.f64 = double(temp.f32);
	// stfs f5,84(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f2,240(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 240);
	ctx.f2.f64 = double(temp.f32);
	// fadds f1,f2,f3
	ctx.f1.f64 = double(float(ctx.f2.f64 + ctx.f3.f64));
	// fsubs f0,f4,f12
	ctx.f0.f64 = double(float(ctx.f4.f64 - ctx.f12.f64));
	// stfs f4,92(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f1,88(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f4,96(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fsel f13,f0,f4,f12
	ctx.f13.f64 = ctx.f0.f64 >= 0.0 ? ctx.f4.f64 : ctx.f12.f64;
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// bl 0x8233cbf8
	ctx.lr = 0x82345520;
	sub_8233CBF8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82345548
	if (!ctx.cr6.eq) goto loc_82345548;
loc_82345528:
	// addis r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 65536;
	// addi r31,r31,972
	ctx.r31.s64 = ctx.r31.s64 + 972;
	// addi r11,r11,-3328
	ctx.r11.s64 = ctx.r11.s64 + -3328;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82345470
	if (ctx.cr6.lt) goto loc_82345470;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_82345548:
	// lis r11,-31816
	ctx.r11.s64 = -2085093376;
	// addi r3,r29,16
	ctx.r3.s64 = ctx.r29.s64 + 16;
	// addi r30,r11,-12416
	ctx.r30.s64 = ctx.r11.s64 + -12416;
	// li r5,188
	ctx.r5.s64 = 188;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x823de1f0
	ctx.lr = 0x82345560;
	sub_823DE1F0(ctx, base);
	// addi r31,r29,216
	ctx.r31.s64 = ctx.r29.s64 + 216;
	// addi r4,r30,188
	ctx.r4.s64 = ctx.r30.s64 + 188;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,312
	ctx.r5.s64 = 312;
	// bl 0x823de1f0
	ctx.lr = 0x82345574;
	sub_823DE1F0(ctx, base);
	// addi r6,r29,240
	ctx.r6.s64 = ctx.r29.s64 + 240;
	// addi r5,r29,308
	ctx.r5.s64 = ctx.r29.s64 + 308;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82343958
	ctx.lr = 0x82345588;
	sub_82343958(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f0,5484(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,576(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 576, temp.u32);
	// stfs f0,580(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 580, temp.u32);
loc_82345598:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82345438) {
	__imp__sub_82345438(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823455A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823455A4) {
	__imp__sub_823455A4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823455A8) {
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
	// lhz r11,126(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 126);
	// lhz r10,130(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 130);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x823455d8
	if (ctx.cr6.eq) goto loc_823455D8;
loc_823455C4:
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
loc_823455D8:
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x823455c4
	if (!ctx.cr6.eq) goto loc_823455C4;
	// lhz r3,124(r4)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r4.u32 + 124);
	// bl 0x82332af8
	ctx.lr = 0x823455EC;
	sub_82332AF8(ctx, base);
	// lwz r11,1080(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1080);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8234560c
	if (ctx.cr6.eq) goto loc_8234560C;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x8234560c
	if (ctx.cr6.eq) goto loc_8234560C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bne cr6,0x82345610
	if (!ctx.cr6.eq) goto loc_82345610;
loc_8234560C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82345610:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823455A8) {
	__imp__sub_823455A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82345620) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82345628;
	__savegprlr_29(ctx, base);
	// stfd f29,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f29.u64);
	// stfd f30,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f30.u64);
	// stfd f31,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,276(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lfs f0,232(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 232);
	ctx.f0.f64 = double(temp.f32);
	// addi r30,r11,216
	ctx.r30.s64 = ctx.r11.s64 + 216;
	// lfs f13,236(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 236);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r30,24
	ctx.r3.s64 = ctx.r30.s64 + 24;
	// lfs f12,240(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	ctx.f12.f64 = double(temp.f32);
	// addi r11,r31,232
	ctx.r11.s64 = ctx.r31.s64 + 232;
	// lfs f11,12(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,16(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f31,f0,f11
	ctx.f31.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// lfs f9,20(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f30,f13,f10
	ctx.f30.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// fsubs f29,f12,f9
	ctx.f29.f64 = double(float(ctx.f12.f64 - ctx.f9.f64));
	// bl 0x822da650
	ctx.lr = 0x82345678;
	sub_822DA650(ctx, base);
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// addi r3,r30,36
	ctx.r3.s64 = ctx.r30.s64 + 36;
	// bl 0x822da650
	ctx.lr = 0x82345684;
	sub_822DA650(ctx, base);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x822d6378
	ctx.lr = 0x82345690;
	sub_822D6378(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x822d5c30
	ctx.lr = 0x823456A0;
	sub_822D5C30(ctx, base);
	// lfs f8,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f8,f30
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f30.f64));
	// lfs f5,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f7,f30
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f30.f64));
	// fmuls f3,f5,f30
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f30.f64));
	// lfs f2,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f1.f64 = double(temp.f32);
	// addi r29,r31,244
	ctx.r29.s64 = ctx.r31.s64 + 244;
	// lfs f0,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f12,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f8,f2,f29,f6
	ctx.f8.f64 = double(float(ctx.f2.f64 * ctx.f29.f64 + ctx.f6.f64));
	// fmadds f6,f1,f29,f4
	ctx.f6.f64 = double(float(ctx.f1.f64 * ctx.f29.f64 + ctx.f4.f64));
	// fmadds f5,f0,f29,f3
	ctx.f5.f64 = double(float(ctx.f0.f64 * ctx.f29.f64 + ctx.f3.f64));
	// lfs f7,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f4,f13,f31,f8
	ctx.f4.f64 = double(float(ctx.f13.f64 * ctx.f31.f64 + ctx.f8.f64));
	// fmadds f3,f12,f31,f6
	ctx.f3.f64 = double(float(ctx.f12.f64 * ctx.f31.f64 + ctx.f6.f64));
	// fmadds f2,f11,f31,f5
	ctx.f2.f64 = double(float(ctx.f11.f64 * ctx.f31.f64 + ctx.f5.f64));
	// fadds f1,f10,f4
	ctx.f1.f64 = double(float(ctx.f10.f64 + ctx.f4.f64));
	// stfs f1,232(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 232, temp.u32);
	// fadds f0,f9,f3
	ctx.f0.f64 = double(float(ctx.f9.f64 + ctx.f3.f64));
	// stfs f0,236(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 236, temp.u32);
	// fadds f13,f7,f2
	ctx.f13.f64 = double(float(ctx.f7.f64 + ctx.f2.f64));
	// stfs f13,240(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 240, temp.u32);
	// stfs f1,28(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// stfs f0,32(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// stfs f13,36(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// bl 0x822da650
	ctx.lr = 0x82345728;
	sub_822DA650(ctx, base);
	// addi r5,r1,320
	ctx.r5.s64 = ctx.r1.s64 + 320;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x822d5c30
	ctx.lr = 0x82345738;
	sub_822D5C30(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x822d7c78
	ctx.lr = 0x82345744;
	sub_822D7C78(ctx, base);
	// lfs f12,244(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,64(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// lfs f11,248(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,68(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// lfs f10,252(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,72(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
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

PPC_WEAK_FUNC(sub_82345620) {
	__imp__sub_82345620(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82345770) {
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
	// lwz r11,316(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 316);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823457ac
	if (ctx.cr6.eq) goto loc_823457AC;
	// lwz r10,204(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 204);
	// rlwinm r9,r10,0,5,5
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4000000;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x823457b0
	if (ctx.cr6.eq) goto loc_823457B0;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_823457AC:
	// li r11,2065
	ctx.r11.s64 = 2065;
loc_823457B0:
	// lbz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bne cr6,0x823457d8
	if (!ctx.cr6.eq) goto loc_823457D8;
	// lhz r10,256(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 256);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823457d0
	if (ctx.cr6.eq) goto loc_823457D0;
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// b 0x823457dc
	goto loc_823457DC;
loc_823457D0:
	// li r7,2047
	ctx.r7.s64 = 2047;
	// b 0x823457dc
	goto loc_823457DC;
loc_823457D8:
	// lhz r7,126(r3)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r3.u32 + 126);
loc_823457DC:
	// addi r6,r3,180
	ctx.r6.s64 = ctx.r3.s64 + 180;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821fe618
	ctx.lr = 0x823457F0;
	sub_821FE618(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82276090
	ctx.lr = 0x823457F8;
	sub_82276090(ctx, base);
	// lbz r10,121(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 121);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82345814
	if (!ctx.cr6.eq) goto loc_82345814;
	// lbz r10,120(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 120);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82345818
	if (ctx.cr6.eq) goto loc_82345818;
loc_82345814:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82345818:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82345770) {
	__imp__sub_82345770(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82345828) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x82345830;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// addi r27,r3,244
	ctx.r27.s64 = ctx.r3.s64 + 244;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x822d7700
	ctx.lr = 0x82345858;
	sub_822D7700(ctx, base);
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,232(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 232, temp.u32);
	// lfs f13,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,236(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 236, temp.u32);
	// lfs f12,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,240(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 240, temp.u32);
	// lfs f11,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,28(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// lfs f10,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,32(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// lfs f9,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,36(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823458c8
	if (ctx.cr6.eq) goto loc_823458C8;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lfs f0,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stfs f0,28(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// lfs f13,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,32(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// lfs f12,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,36(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// lwz r3,264(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// bl 0x823224f0
	ctx.lr = 0x823458C4;
	sub_823224F0(ctx, base);
	// b 0x82345938
	goto loc_82345938;
loc_823458C8:
	// lwz r11,268(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82345908
	if (ctx.cr6.eq) goto loc_82345908;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r11,308
	ctx.r3.s64 = ctx.r11.s64 + 308;
	// lfs f13,320(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 320);
	ctx.f13.f64 = double(temp.f32);
	// fadds f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// bl 0x821ce288
	ctx.lr = 0x823458EC;
	sub_821CE288(ctx, base);
	// lwz r11,268(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	// lfs f12,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r11,324
	ctx.r3.s64 = ctx.r11.s64 + 324;
	// lfs f11,336(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 336);
	ctx.f11.f64 = double(temp.f32);
	// fadds f1,f11,f12
	ctx.f1.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// bl 0x821ce288
	ctx.lr = 0x82345904;
	sub_821CE288(ctx, base);
	// b 0x82345938
	goto loc_82345938;
loc_82345908:
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r27)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r27.u32 + 0, temp.u32);
	// lfs f13,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r27)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r27.u32 + 4, temp.u32);
	// lfs f12,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r27)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r27.u32 + 8, temp.u32);
	// lfs f11,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,64(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// lfs f10,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,68(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// lfs f9,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,72(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
loc_82345938:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x823459a8
	if (!ctx.cr6.eq) goto loc_823459A8;
	// lfs f0,372(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 372);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r31,368
	ctx.r11.s64 = ctx.r31.s64 + 368;
	// lfs f13,12(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f11,376(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 376);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,24(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,368(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 368);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,0(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f7,f10,f11,f12
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f11.f64 + ctx.f12.f64));
	// fmadds f6,f8,f9,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f9.f64 + ctx.f7.f64));
	// stfs f6,368(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 368, temp.u32);
	// lfs f5,28(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	ctx.f5.f64 = double(temp.f32);
	// lfs f1,4(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// lfs f4,16(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f3,f4,f0
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// fmadds f2,f5,f11,f3
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f11.f64 + ctx.f3.f64));
	// fmadds f13,f1,f9,f2
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f9.f64 + ctx.f2.f64));
	// stfs f13,372(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 372, temp.u32);
	// lfs f12,32(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,8(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f8,20(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f8,f0
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fmadds f6,f12,f11,f7
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f11.f64 + ctx.f7.f64));
	// fmadds f5,f10,f9,f6
	ctx.f5.f64 = double(float(ctx.f10.f64 * ctx.f9.f64 + ctx.f6.f64));
	// stfs f5,376(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 376, temp.u32);
loc_823459A8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82345828) {
	__imp__sub_82345828(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823459B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x823459B8;
	__savegprlr_26(ctx, base);
	// stfd f29,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f29.u64);
	// stfd f30,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f30.u64);
	// stfd f31,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-624(r1)
	ea = -624 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,276(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 276);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// addi r30,r11,216
	ctx.r30.s64 = ctx.r11.s64 + 216;
	// addi r4,r1,496
	ctx.r4.s64 = ctx.r1.s64 + 496;
	// addi r3,r30,24
	ctx.r3.s64 = ctx.r30.s64 + 24;
	// bl 0x822da650
	ctx.lr = 0x823459E4;
	sub_822DA650(ctx, base);
	// addi r4,r1,448
	ctx.r4.s64 = ctx.r1.s64 + 448;
	// addi r3,r30,36
	ctx.r3.s64 = ctx.r30.s64 + 36;
	// bl 0x822da650
	ctx.lr = 0x823459F0;
	sub_822DA650(ctx, base);
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// bl 0x822d6378
	ctx.lr = 0x823459FC;
	sub_822D6378(ctx, base);
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r4,r1,496
	ctx.r4.s64 = ctx.r1.s64 + 496;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x822d5c30
	ctx.lr = 0x82345A0C;
	sub_822D5C30(ctx, base);
	// lfs f0,16(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,236(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 236);
	ctx.f13.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// fsubs f30,f13,f0
	ctx.f30.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f12,12(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,232(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 232);
	ctx.f11.f64 = double(temp.f32);
	// lwz r10,268(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 268);
	// fsubs f31,f11,f12
	ctx.f31.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// lfs f10,20(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,240(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 240);
	ctx.f9.f64 = double(temp.f32);
	// addi r11,r30,12
	ctx.r11.s64 = ctx.r30.s64 + 12;
	// lfs f8,172(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f9,f10
	ctx.f7.f64 = double(float(ctx.f9.f64 - ctx.f10.f64));
	// lfs f6,164(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f6.f64 = double(temp.f32);
	// addi r31,r29,232
	ctx.r31.s64 = ctx.r29.s64 + 232;
	// lfs f5,168(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f5.f64 = double(temp.f32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lfs f4,184(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,188(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,192(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f1,f8,f30
	ctx.f1.f64 = double(float(ctx.f8.f64 * ctx.f30.f64));
	// lfs f29,5484(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5484);
	ctx.f29.f64 = double(temp.f32);
	// fmuls f11,f6,f31
	ctx.f11.f64 = double(float(ctx.f6.f64 * ctx.f31.f64));
	// fmuls f9,f5,f31
	ctx.f9.f64 = double(float(ctx.f5.f64 * ctx.f31.f64));
	// lfs f0,160(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,176(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f8,f4,f7,f1
	ctx.f8.f64 = double(float(ctx.f4.f64 * ctx.f7.f64 + ctx.f1.f64));
	// lfs f10,180(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f6,f3,f7,f11
	ctx.f6.f64 = double(float(ctx.f3.f64 * ctx.f7.f64 + ctx.f11.f64));
	// fmadds f5,f2,f7,f9
	ctx.f5.f64 = double(float(ctx.f2.f64 * ctx.f7.f64 + ctx.f9.f64));
	// fmadds f13,f0,f31,f8
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f31.f64 + ctx.f8.f64));
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmadds f0,f12,f30,f6
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f30.f64 + ctx.f6.f64));
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmadds f12,f10,f30,f5
	ctx.f12.f64 = double(float(ctx.f10.f64 * ctx.f30.f64 + ctx.f5.f64));
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lfs f4,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// fadds f3,f4,f13
	ctx.f3.f64 = double(float(ctx.f4.f64 + ctx.f13.f64));
	// stfs f3,96(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lfs f2,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// fadds f1,f2,f0
	ctx.f1.f64 = double(float(ctx.f2.f64 + ctx.f0.f64));
	// stfs f1,100(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lfs f0,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fadds f13,f0,f12
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// beq cr6,0x82345b4c
	if (ctx.cr6.eq) goto loc_82345B4C;
	// lbz r10,3164(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 3164);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82345b4c
	if (ctx.cr6.eq) goto loc_82345B4C;
	// lfs f0,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f12,152(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// lfs f11,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// stfs f9,156(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// bl 0x822d4ac8
	ctx.lr = 0x82345AF8;
	sub_822D4AC8(ctx, base);
	// lfs f0,156(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f8,f31,f0
	ctx.f8.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
	// lfs f13,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f13.f64 = double(temp.f32);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fmsubs f7,f30,f13,f8
	ctx.f7.f64 = double(float(ctx.f30.f64 * ctx.f13.f64 - ctx.f8.f64));
	// fcmpu cr6,f7,f29
	ctx.cr6.compare(ctx.f7.f64, ctx.f29.f64);
	// ble cr6,0x82345b30
	if (!ctx.cr6.gt) goto loc_82345B30;
	// lfs f12,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f10,f0,f1,f12
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f1.f64 + ctx.f12.f64));
	// fmadds f9,f13,f1,f11
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f1.f64 + ctx.f11.f64));
	// stfs f10,96(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f9,100(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// b 0x82345b4c
	goto loc_82345B4C;
loc_82345B30:
	// fneg f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = ctx.f1.u64 ^ 0x8000000000000000;
	// lfs f11,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f9,f12,f0,f11
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f11.f64));
	// stfs f9,96(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmadds f8,f12,f13,f10
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f13.f64 + ctx.f10.f64));
	// stfs f8,100(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
loc_82345B4C:
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
	// addi r3,r29,244
	ctx.r3.s64 = ctx.r29.s64 + 244;
	// bl 0x822da650
	ctx.lr = 0x82345B58;
	sub_822DA650(ctx, base);
	// addi r5,r1,400
	ctx.r5.s64 = ctx.r1.s64 + 400;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x822d5c30
	ctx.lr = 0x82345B68;
	sub_822D5C30(ctx, base);
	// addi r4,r1,232
	ctx.r4.s64 = ctx.r1.s64 + 232;
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// bl 0x822d7c78
	ctx.lr = 0x82345B74;
	sub_822D7C78(ctx, base);
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r10,r1,124
	ctx.r10.s64 = ctx.r1.s64 + 124;
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r29,176
	ctx.r11.s64 = ctx.r29.s64 + 176;
	// lfs f12,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// lfs f9,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f9.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,112(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f11,116(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f10,88(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f9,120(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
loc_82345BB4:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82345bb4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82345BB4;
	// lfs f0,140(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,316(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 316);
	// lfs f13,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f12,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f12.f64 = double(temp.f32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// fsel f10,f11,f0,f13
	ctx.f10.f64 = ctx.f11.f64 >= 0.0 ? ctx.f0.f64 : ctx.f13.f64;
	// stfs f10,140(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stfs f10,144(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// fsubs f9,f10,f12
	ctx.f9.f64 = double(float(ctx.f10.f64 - ctx.f12.f64));
	// fsel f8,f9,f10,f12
	ctx.f8.f64 = ctx.f9.f64 >= 0.0 ? ctx.f10.f64 : ctx.f12.f64;
	// stfs f8,148(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// bne cr6,0x82345bfc
	if (!ctx.cr6.eq) goto loc_82345BFC;
	// li r27,2065
	ctx.r27.s64 = 2065;
loc_82345BFC:
	// lbz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x82345c34
	if (!ctx.cr6.eq) goto loc_82345C34;
	// lhz r11,256(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 256);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82345c2c
	if (ctx.cr6.eq) goto loc_82345C2C;
	// lis r9,-32052
	ctx.r9.s64 = -2100559872;
	// mulli r10,r11,624
	ctx.r10.s64 = ctx.r11.s64 * 624;
	// addi r11,r9,26552
	ctx.r11.s64 = ctx.r9.s64 + 26552;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r28,r11,-624
	ctx.r28.s64 = ctx.r11.s64 + -624;
	// b 0x82345c38
	goto loc_82345C38;
loc_82345C2C:
	// li r28,0
	ctx.r28.s64 = 0;
	// b 0x82345c38
	goto loc_82345C38;
loc_82345C34:
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
loc_82345C38:
	// lbz r11,172(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 172);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82345c4c
	if (!ctx.cr6.eq) goto loc_82345C4C;
	// li r28,0
	ctx.r28.s64 = 0;
	// b 0x82345c54
	goto loc_82345C54;
loc_82345C4C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82340cf0
	ctx.lr = 0x82345C54;
	sub_82340CF0(ctx, base);
loc_82345C54:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
	// lfs f30,7640(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7640);
	ctx.f30.f64 = double(temp.f32);
	// lfs f31,12168(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f31.f64 = double(temp.f32);
loc_82345C6C:
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// lhz r7,126(r26)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r26.u32 + 126);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x821fe618
	ctx.lr = 0x82345C88;
	sub_821FE618(ctx, base);
	// lfs f13,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f10,f13
	ctx.f8.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// lfs f11,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f6,f9,f12
	ctx.f6.f64 = double(float(ctx.f9.f64 - ctx.f12.f64));
	// lfs f7,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f5,f7,f11
	ctx.f5.f64 = double(float(ctx.f7.f64 - ctx.f11.f64));
	// lfs f0,256(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
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
	// fmadds f0,f5,f0,f11
	ctx.f0.f64 = double(float(ctx.f5.f64 * ctx.f0.f64 + ctx.f11.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// beq cr6,0x82345dc0
	if (ctx.cr6.eq) goto loc_82345DC0;
	// lfs f11,140(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	ctx.f11.f64 = double(temp.f32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lfs f10,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f10.f64 = double(temp.f32);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// fsubs f8,f11,f10
	ctx.f8.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lfs f4,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f4.f64 = double(temp.f32);
	// lfs f9,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f9.f64 = double(temp.f32);
	// fadds f2,f4,f0
	ctx.f2.f64 = double(float(ctx.f4.f64 + ctx.f0.f64));
	// lfs f7,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f6.f64 = double(temp.f32);
	// fadds f5,f7,f13
	ctx.f5.f64 = double(float(ctx.f7.f64 + ctx.f13.f64));
	// fadds f3,f6,f12
	ctx.f3.f64 = double(float(ctx.f6.f64 + ctx.f12.f64));
	// stfs f5,208(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// stfs f3,212(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// stfs f2,216(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// fsel f1,f8,f11,f10
	ctx.f1.f64 = ctx.f8.f64 >= 0.0 ? ctx.f11.f64 : ctx.f10.f64;
	// stfs f1,220(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// stfs f1,224(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// fsubs f0,f1,f9
	ctx.f0.f64 = double(float(ctx.f1.f64 - ctx.f9.f64));
	// fsel f13,f0,f1,f9
	ctx.f13.f64 = ctx.f0.f64 >= 0.0 ? ctx.f1.f64 : ctx.f9.f64;
	// stfs f13,228(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 228, temp.u32);
	// bl 0x8233cbf8
	ctx.lr = 0x82345D28;
	sub_8233CBF8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82345dc0
	if (ctx.cr6.eq) goto loc_82345DC0;
	// lfs f0,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f0,f30
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f30.f64));
	// lfs f11,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f11.f64 = double(temp.f32);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stfs f13,112(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// stfs f11,116(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stfs f12,120(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// lhz r7,126(r26)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r26.u32 + 126);
	// bl 0x821fe618
	ctx.lr = 0x82345D68;
	sub_821FE618(ctx, base);
	// lfs f0,256(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// beq cr6,0x82345dc8
	if (ctx.cr6.eq) goto loc_82345DC8;
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lfs f12,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f11.f64 = double(temp.f32);
	// cmpwi cr6,r31,10
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 10, ctx.xer);
	// lfs f10,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f10,f13
	ctx.f8.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// lfs f7,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f9,f12
	ctx.f6.f64 = double(float(ctx.f9.f64 - ctx.f12.f64));
	// fsubs f5,f7,f11
	ctx.f5.f64 = double(float(ctx.f7.f64 - ctx.f11.f64));
	// fmadds f4,f8,f0,f13
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f0.f64 + ctx.f13.f64));
	// stfs f4,80(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmadds f3,f6,f0,f12
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f0.f64 + ctx.f12.f64));
	// stfs f3,84(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmadds f2,f5,f0,f11
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f0.f64 + ctx.f11.f64));
	// stfs f2,88(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// blt cr6,0x82345c6c
	if (ctx.cr6.lt) goto loc_82345C6C;
	// b 0x82345dcc
	goto loc_82345DCC;
loc_82345DC0:
	// li r30,1
	ctx.r30.s64 = 1;
	// b 0x82345dcc
	goto loc_82345DCC;
loc_82345DC8:
	// li r30,0
	ctx.r30.s64 = 0;
loc_82345DCC:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82345dec
	if (ctx.cr6.eq) goto loc_82345DEC;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// addi r5,r1,232
	ctx.r5.s64 = ctx.r1.s64 + 232;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82345828
	ctx.lr = 0x82345DEC;
	sub_82345828(ctx, base);
loc_82345DEC:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82345dfc
	if (ctx.cr6.eq) goto loc_82345DFC;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82340d30
	ctx.lr = 0x82345DFC;
	sub_82340D30(ctx, base);
loc_82345DFC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,624
	ctx.r1.s64 = ctx.r1.s64 + 624;
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

PPC_WEAK_FUNC(sub_823459B0) {
	__imp__sub_823459B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82345E14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82345E14) {
	__imp__sub_82345E14(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82345E18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x82345E20;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,468(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 468);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82345f38
	if (!ctx.cr6.eq) goto loc_82345F38;
	// lwz r3,268(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 268);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82345e60
	if (ctx.cr6.eq) goto loc_82345E60;
	// bl 0x821a9ff8
	ctx.lr = 0x82345E54;
	sub_821A9FF8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82345f38
	if (!ctx.cr6.eq) goto loc_82345F38;
loc_82345E60:
	// lfs f0,4(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmuls f13,f0,f0
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f12,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,5804(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5804);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f10,f12,f12,f13
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f13.f64));
	// fmadds f9,f11,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f10.f64));
	// fcmpu cr6,f9,f0
	ctx.cr6.compare(ctx.f9.f64, ctx.f0.f64);
	// bge cr6,0x82345ea8
	if (!ctx.cr6.lt) goto loc_82345EA8;
	// lfs f13,4(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f13
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// lfs f11,0(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f9,f11,f11,f12
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f12.f64));
	// fmadds f8,f10,f10,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f10.f64 + ctx.f9.f64));
	// fcmpu cr6,f8,f0
	ctx.cr6.compare(ctx.f8.f64, ctx.f0.f64);
	// blt cr6,0x82345f38
	if (ctx.cr6.lt) goto loc_82345F38;
loc_82345EA8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823455a8
	ctx.lr = 0x82345EB4;
	sub_823455A8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82345ed4
	if (ctx.cr6.eq) goto loc_82345ED4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82345620
	ctx.lr = 0x82345ECC;
	sub_82345620(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_82345ED4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823459b0
	ctx.lr = 0x82345EE0;
	sub_823459B0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82345f38
	if (!ctx.cr6.eq) goto loc_82345F38;
	// lbz r11,289(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 289);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82345f38
	if (ctx.cr6.eq) goto loc_82345F38;
	// li r6,-1
	ctx.r6.s64 = -1;
	// lis r8,15
	ctx.r8.s64 = 983040;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r10,10
	ctx.r10.s64 = 10;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// ori r8,r8,16959
	ctx.r8.u64 = ctx.r8.u64 | 16959;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// addi r7,r31,232
	ctx.r7.s64 = ctx.r31.s64 + 232;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f1080
	ctx.lr = 0x82345F38;
	sub_821F1080(ctx, base);
loc_82345F38:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82345E18) {
	__imp__sub_82345E18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82345F40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf64
	ctx.lr = 0x82345F48;
	__savegprlr_23(ctx, base);
	// stfd f29,-104(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.f29.u64);
	// stfd f30,-96(r1)
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.f30.u64);
	// stfd f31,-88(r1)
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f31.u64);
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// ld r12,-8192(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8192);
	// stwu r1,-8496(r1)
	ea = -8496 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,173(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 173);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bne cr6,0x823462a8
	if (!ctx.cr6.eq) goto loc_823462A8;
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// lwz r10,276(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	// lbz r9,291(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 291);
	// addi r5,r1,168
	ctx.r5.s64 = ctx.r1.s64 + 168;
	// addi r26,r11,8272
	ctx.r26.s64 = ctx.r11.s64 + 8272;
	// mulli r8,r9,44
	ctx.r8.s64 = ctx.r9.s64 * 44;
	// lfs f0,216(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 216);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,228(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 228);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,220(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 220);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f31,f0,f13
	ctx.f31.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,232(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 232);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,224(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 224);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f30,f12,f11
	ctx.f30.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// lfs f9,236(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 236);
	ctx.f9.f64 = double(temp.f32);
	// addi r7,r26,12
	ctx.r7.s64 = ctx.r26.s64 + 12;
	// fsubs f29,f10,f9
	ctx.f29.f64 = double(float(ctx.f10.f64 - ctx.f9.f64));
	// addi r31,r10,216
	ctx.r31.s64 = ctx.r10.s64 + 216;
	// stfs f31,104(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f30,108(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// addi r4,r31,36
	ctx.r4.s64 = ctx.r31.s64 + 36;
	// stfs f29,112(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// lwzx r24,r8,r7
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// addi r11,r31,12
	ctx.r11.s64 = ctx.r31.s64 + 12;
	// bl 0x822d7700
	ctx.lr = 0x82345FD4;
	sub_822D7700(ctx, base);
	// addi r4,r1,152
	ctx.r4.s64 = ctx.r1.s64 + 152;
	// addi r3,r31,92
	ctx.r3.s64 = ctx.r31.s64 + 92;
	// bl 0x822d4b08
	ctx.lr = 0x82345FE0;
	sub_822D4B08(ctx, base);
	// lis r3,-32256
	ctx.r3.s64 = -2113929216;
	// lfs f2,184(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 184);
	ctx.f2.f64 = double(temp.f32);
	// lis r6,512
	ctx.r6.s64 = 33554432;
	// fabs f1,f2
	ctx.f1.u64 = ctx.f2.u64 & ~0x8000000000000000;
	// lfs f11,188(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 188);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,180(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 180);
	ctx.f9.f64 = double(temp.f32);
	// fabs f10,f11
	ctx.f10.u64 = ctx.f11.u64 & ~0x8000000000000000;
	// fabs f11,f9
	ctx.f11.u64 = ctx.f9.u64 & ~0x8000000000000000;
	// lfs f12,196(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 196);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,2416(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 2416);
	ctx.f0.f64 = double(temp.f32);
	// li r5,2048
	ctx.r5.s64 = 2048;
	// fmuls f8,f31,f0
	ctx.f8.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
	// ori r6,r6,24705
	ctx.r6.u64 = ctx.r6.u64 | 24705;
	// fmuls f7,f30,f0
	ctx.f7.f64 = double(float(ctx.f30.f64 * ctx.f0.f64));
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// fmuls f6,f29,f0
	ctx.f6.f64 = double(float(ctx.f29.f64 * ctx.f0.f64));
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// fabs f5,f8
	ctx.f5.u64 = ctx.f8.u64 & ~0x8000000000000000;
	// fabs f4,f7
	ctx.f4.u64 = ctx.f7.u64 & ~0x8000000000000000;
	// fabs f3,f6
	ctx.f3.u64 = ctx.f6.u64 & ~0x8000000000000000;
	// lfs f0,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fadds f9,f0,f8
	ctx.f9.f64 = double(float(ctx.f0.f64 + ctx.f8.f64));
	// lfs f13,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// fadds f8,f13,f7
	ctx.f8.f64 = double(float(ctx.f13.f64 + ctx.f7.f64));
	// fadds f7,f1,f12
	ctx.f7.f64 = double(float(ctx.f1.f64 + ctx.f12.f64));
	// lfs f2,200(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 200);
	ctx.f2.f64 = double(temp.f32);
	// fadds f2,f10,f2
	ctx.f2.f64 = double(float(ctx.f10.f64 + ctx.f2.f64));
	// stfs f13,132(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// lfs f1,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,192(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 192);
	ctx.f0.f64 = double(temp.f32);
	// fadds f13,f11,f0
	ctx.f13.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// stfs f9,128(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f8,132(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// fmuls f12,f7,f7
	ctx.f12.f64 = double(float(ctx.f7.f64 * ctx.f7.f64));
	// fmadds f11,f2,f2,f12
	ctx.f11.f64 = double(float(ctx.f2.f64 * ctx.f2.f64 + ctx.f12.f64));
	// fmadds f10,f13,f13,f11
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f11.f64));
	// fsqrts f9,f10
	ctx.f9.f64 = double(float(sqrt(ctx.f10.f64)));
	// fadds f8,f1,f6
	ctx.f8.f64 = double(float(ctx.f1.f64 + ctx.f6.f64));
	// stfs f8,136(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// fadds f7,f5,f9
	ctx.f7.f64 = double(float(ctx.f5.f64 + ctx.f9.f64));
	// stfs f7,140(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// fadds f6,f4,f9
	ctx.f6.f64 = double(float(ctx.f4.f64 + ctx.f9.f64));
	// stfs f6,144(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// fadds f5,f3,f9
	ctx.f5.f64 = double(float(ctx.f3.f64 + ctx.f9.f64));
	// stfs f5,148(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// bl 0x8227bff0
	ctx.lr = 0x8234609C;
	sub_8227BFF0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x823462a8
	if (!ctx.cr6.gt) goto loc_823462A8;
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// addi r27,r1,192
	ctx.r27.s64 = ctx.r1.s64 + 192;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// addi r28,r11,-25976
	ctx.r28.s64 = ctx.r11.s64 + -25976;
	// addi r25,r10,26552
	ctx.r25.s64 = ctx.r10.s64 + 26552;
loc_823460BC:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r9,r26,12
	ctx.r9.s64 = ctx.r26.s64 + 12;
	// lhz r10,126(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 126);
	// mulli r11,r11,624
	ctx.r11.s64 = ctx.r11.s64 * 624;
	// add r31,r11,r25
	ctx.r31.u64 = ctx.r11.u64 + ctx.r25.u64;
	// lbz r8,291(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 291);
	// lhz r7,126(r31)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r31.u32 + 126);
	// mulli r6,r8,44
	ctx.r6.s64 = ctx.r8.s64 * 44;
	// lwzx r29,r6,r9
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r9.u32);
	// cmplw cr6,r7,r10
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8234629c
	if (ctx.cr6.eq) goto loc_8234629C;
	// lwz r11,468(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 468);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82346100
	if (ctx.cr6.eq) goto loc_82346100;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x8234629c
	if (ctx.cr6.eq) goto loc_8234629C;
loc_82346100:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x82346124
	if (ctx.cr6.eq) goto loc_82346124;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// beq cr6,0x82346124
	if (ctx.cr6.eq) goto loc_82346124;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x82346124
	if (ctx.cr6.eq) goto loc_82346124;
	// cmplwi cr6,r11,13
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 13, ctx.xer);
	// bne cr6,0x8234629c
	if (!ctx.cr6.eq) goto loc_8234629C;
loc_82346124:
	// lhz r11,130(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 130);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82346284
	if (ctx.cr6.eq) goto loc_82346284;
	// lhz r9,156(r28)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r28.u32 + 156);
	// lhz r10,292(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 292);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82346190
	if (!ctx.cr6.eq) goto loc_82346190;
	// lhz r11,604(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 604);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8234629c
	if (ctx.cr6.eq) goto loc_8234629C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822846c0
	ctx.lr = 0x82346154;
	sub_822846C0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x822eee00
	ctx.lr = 0x8234615C;
	sub_822EEE00(ctx, base);
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
	// lfs f11,232(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,236(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f11,f0
	ctx.f9.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// lfs f8,240(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	ctx.f8.f64 = double(temp.f32);
	// fadds f7,f10,f13
	ctx.f7.f64 = double(float(ctx.f10.f64 + ctx.f13.f64));
	// fadds f6,f8,f12
	ctx.f6.f64 = double(float(ctx.f8.f64 + ctx.f12.f64));
	// stfs f9,80(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f7,84(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f6,88(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// b 0x823461ac
	goto loc_823461AC;
loc_82346190:
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r10,r1,76
	ctx.r10.s64 = ctx.r1.s64 + 76;
	// addi r11,r31,204
	ctx.r11.s64 = ctx.r31.s64 + 204;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_823461A0:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x823461a0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823461A0;
loc_823461AC:
	// lfs f0,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lfs f13,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// fsubs f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f12,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f12.f64 = double(temp.f32);
	// fsel f10,f11,f0,f13
	ctx.f10.f64 = ctx.f11.f64 >= 0.0 ? ctx.f0.f64 : ctx.f13.f64;
	// stfs f10,92(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f10,96(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fsubs f9,f10,f12
	ctx.f9.f64 = double(float(ctx.f10.f64 - ctx.f12.f64));
	// fsel f8,f9,f10,f12
	ctx.f8.f64 = ctx.f9.f64 >= 0.0 ? ctx.f10.f64 : ctx.f12.f64;
	// stfs f8,100(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// bl 0x8233cbf8
	ctx.lr = 0x823461E0;
	sub_8233CBF8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8234629c
	if (ctx.cr6.eq) goto loc_8234629C;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822ac8c0
	ctx.lr = 0x823461F0;
	sub_822AC8C0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82346228
	if (ctx.cr6.eq) goto loc_82346228;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82229b60
	ctx.lr = 0x82346200;
	sub_82229B60(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lhz r4,264(r28)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r28.u32 + 264);
	// bl 0x82229da8
	ctx.lr = 0x82346210;
	sub_82229DA8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82229b60
	ctx.lr = 0x82346218;
	sub_82229B60(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lhz r4,264(r28)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r28.u32 + 264);
	// bl 0x82229da8
	ctx.lr = 0x82346228;
	sub_82229DA8(ctx, base);
loc_82346228:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82346244
	if (ctx.cr6.eq) goto loc_82346244;
	// li r5,1
	ctx.r5.s64 = 1;
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x82346244;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82346244:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x82346260
	if (ctx.cr6.eq) goto loc_82346260;
	// li r5,1
	ctx.r5.s64 = 1;
	// mtctr r24
	ctx.ctr.u64 = ctx.r24.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x82346260;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82346260:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x82346284
	if (ctx.cr6.eq) goto loc_82346284;
	// lwz r11,268(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8234629c
	if (ctx.cr6.eq) goto loc_8234629C;
	// lwz r11,3480(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3480);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8234629c
	if (ctx.cr6.eq) goto loc_8234629C;
loc_82346284:
	// addi r7,r1,168
	ctx.r7.s64 = ctx.r1.s64 + 168;
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// addi r5,r1,152
	ctx.r5.s64 = ctx.r1.s64 + 152;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82345e18
	ctx.lr = 0x8234629C;
	sub_82345E18(ctx, base);
loc_8234629C:
	// addic. r23,r23,-1
	ctx.xer.ca = ctx.r23.u32 > 0;
	ctx.r23.s64 = ctx.r23.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// bne 0x823460bc
	if (!ctx.cr0.eq) goto loc_823460BC;
loc_823462A8:
	// addi r1,r1,8496
	ctx.r1.s64 = ctx.r1.s64 + 8496;
	// lfd f29,-104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// lfd f30,-96(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f31,-88(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82345F40) {
	__imp__sub_82345F40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823462BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823462BC) {
	__imp__sub_823462BC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823462C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x823462C8;
	__savegprlr_27(ctx, base);
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x823de028
	ctx.lr = 0x823462D0;
	__savefpr_28(ctx, base);
	// stwu r1,-464(r1)
	ea = -464 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,276(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	// lis r11,-31816
	ctx.r11.s64 = -2085093376;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r10,r11,-12608
	ctx.r10.s64 = ctx.r11.s64 + -12608;
	// lwz r9,560(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 560);
	// lwz r8,760(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 760);
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// lwzx r28,r7,r10
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// beq cr6,0x823467a8
	if (ctx.cr6.eq) goto loc_823467A8;
	// lwz r11,332(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 332);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823467a8
	if (!ctx.cr6.gt) goto loc_823467A8;
	// lis r11,-32052
	ctx.r11.s64 = -2100559872;
	// addi r30,r11,26552
	ctx.r30.s64 = ctx.r11.s64 + 26552;
	// lwz r11,780(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 780);
	// cmpwi cr6,r11,2047
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2047, ctx.xer);
	// bne cr6,0x8234633c
	if (!ctx.cr6.eq) goto loc_8234633C;
	// lfs f0,788(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 788);
	ctx.f0.f64 = double(temp.f32);
	// li r27,0
	ctx.r27.s64 = 0;
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lfs f13,792(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 792);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lfs f12,796(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 796);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// b 0x82346374
	goto loc_82346374;
loc_8234633C:
	// mulli r11,r11,624
	ctx.r11.s64 = ctx.r11.s64 * 624;
	// lfs f0,800(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 800);
	ctx.f0.f64 = double(temp.f32);
	// add r27,r11,r30
	ctx.r27.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lfs f13,232(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 232);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lfs f11,236(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 236);
	ctx.f11.f64 = double(temp.f32);
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lfs f10,804(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 804);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 + ctx.f10.f64));
	// lfs f8,240(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 240);
	ctx.f8.f64 = double(temp.f32);
	// stfs f9,100(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lfs f7,808(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 808);
	ctx.f7.f64 = double(temp.f32);
	// fadds f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 + ctx.f7.f64));
	// stfs f6,104(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
loc_82346374:
	// lwz r4,908(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 908);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x823467b0
	if (ctx.cr6.lt) goto loc_823467B0;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8222eee0
	ctx.lr = 0x8234638C;
	sub_8222EEE0(ctx, base);
	// lwz r4,904(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 904);
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// beq cr6,0x823463b4
	if (ctx.cr6.eq) goto loc_823463B4;
	// addi r5,r1,336
	ctx.r5.s64 = ctx.r1.s64 + 336;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8222edc8
	ctx.lr = 0x823463A4;
	sub_8222EDC8(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x822d7c78
	ctx.lr = 0x823463B0;
	sub_822D7C78(ctx, base);
	// b 0x823463cc
	goto loc_823463CC;
loc_823463B4:
	// lfs f0,240(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,160(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// lfs f13,244(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,164(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// lfs f12,248(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,168(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
loc_823463CC:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lhz r11,256(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 256);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lfs f29,5484(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f29.f64 = double(temp.f32);
	// beq cr6,0x823464ac
	if (ctx.cr6.eq) goto loc_823464AC;
	// lwz r10,780(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 780);
	// cmpwi cr6,r10,2047
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2047, ctx.xer);
	// bne cr6,0x823464ac
	if (!ctx.cr6.eq) goto loc_823464AC;
	// mulli r11,r11,624
	ctx.r11.s64 = ctx.r11.s64 * 624;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r30,r11,-624
	ctx.r30.s64 = ctx.r11.s64 + -624;
	// lwz r11,-360(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -360);
	// lwz r10,172(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 172);
	// rlwinm r9,r10,0,8,8
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x800000;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82346420
	if (!ctx.cr6.eq) goto loc_82346420;
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmpwi cr6,r10,5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 5, ctx.xer);
	// beq cr6,0x82346420
	if (ctx.cr6.eq) goto loc_82346420;
	// lfs f0,268(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 268);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,164(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
loc_82346420:
	// lfs f0,788(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 788);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f12,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r11,r11,12168
	ctx.r11.s64 = ctx.r11.s64 + 12168;
	// lfs f11,792(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 792);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f13,f11,f12
	ctx.f13.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// lfs f10,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f13,f13
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f8,796(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 796);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f8,f10
	ctx.f7.f64 = double(float(ctx.f8.f64 - ctx.f10.f64));
	// fmadds f6,f7,f7,f9
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f7.f64 + ctx.f9.f64));
	// lfs f28,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f28.f64 = double(temp.f32);
	// fmadds f5,f0,f0,f6
	ctx.f5.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f6.f64));
	// fsqrts f4,f5
	ctx.f4.f64 = double(float(sqrt(ctx.f5.f64)));
	// fneg f3,f4
	ctx.f3.u64 = ctx.f4.u64 ^ 0x8000000000000000;
	// fsel f2,f3,f28,f4
	ctx.f2.f64 = ctx.f3.f64 >= 0.0 ? ctx.f28.f64 : ctx.f4.f64;
	// fdivs f1,f28,f2
	ctx.f1.f64 = double(float(ctx.f28.f64 / ctx.f2.f64));
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f13,f13,f1
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f1.f64));
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmuls f12,f7,f1
	ctx.f12.f64 = double(float(ctx.f7.f64 * ctx.f1.f64));
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x822d50f8
	ctx.lr = 0x82346498;
	sub_822D50F8(ctx, base);
	// lwz r11,264(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 264);
	// lfs f11,268(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 268);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,116(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f29,120(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// b 0x8234651c
	goto loc_8234651C;
loc_823464AC:
	// lfs f0,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f10.f64 = double(temp.f32);
	// addi r11,r11,12168
	ctx.r11.s64 = ctx.r11.s64 + 12168;
	// fsubs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lfs f8,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f7.f64 = double(temp.f32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// fsubs f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// lfs f28,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f28.f64 = double(temp.f32);
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
	// fsel f0,f1,f28,f2
	ctx.f0.f64 = ctx.f1.f64 >= 0.0 ? ctx.f28.f64 : ctx.f2.f64;
	// fdivs f13,f28,f0
	ctx.f13.f64 = double(float(ctx.f28.f64 / ctx.f0.f64));
	// fmuls f11,f13,f6
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f6.f64));
	// stfs f11,80(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f10,f12,f13
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// stfs f10,84(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmuls f9,f9,f13
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// stfs f9,88(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x822d50f8
	ctx.lr = 0x8234651C;
	sub_822D50F8(ctx, base);
loc_8234651C:
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822da650
	ctx.lr = 0x82346528;
	sub_822DA650(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x822da650
	ctx.lr = 0x82346534;
	sub_822DA650(ctx, base);
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x822d6378
	ctx.lr = 0x82346540;
	sub_822D6378(ctx, base);
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x822d5c30
	ctx.lr = 0x82346550;
	sub_822D5C30(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x822d7c78
	ctx.lr = 0x8234655C;
	sub_822D7C78(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lfs f0,20(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,176(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lfs f13,24(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,180(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stfs f29,184(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// bl 0x822d7700
	ctx.lr = 0x82346588;
	sub_822D7700(ctx, base);
	// lfs f12,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f11.f64 = double(temp.f32);
	// fabs f10,f12
	ctx.f10.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// fabs f9,f11
	ctx.f9.u64 = ctx.f11.u64 & ~0x8000000000000000;
	// stfs f10,128(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f9,132(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lfs f2,176(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f1.f64 = double(temp.f32);
	// lfs f3,432(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 432);
	ctx.f3.f64 = double(temp.f32);
	// lfs f31,-23144(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -23144);
	ctx.f31.f64 = double(temp.f32);
	// fmr f4,f31
	ctx.f4.f64 = ctx.f31.f64;
	// bl 0x822d43f0
	ctx.lr = 0x823465BC;
	sub_822D43F0(ctx, base);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stfs f1,20(r8)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r8.u32 + 20, temp.u32);
	// fmr f4,f31
	ctx.f4.f64 = ctx.f31.f64;
	// lfs f3,432(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 432);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,180(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822d43f0
	ctx.lr = 0x823465D8;
	sub_822D43F0(ctx, base);
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stfs f1,24(r7)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r7.u32 + 24, temp.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lfs f8,424(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 424);
	ctx.f8.f64 = double(temp.f32);
	// fneg f0,f8
	ctx.f0.u64 = ctx.f8.u64 ^ 0x8000000000000000;
	// lis r10,-31961
	ctx.r10.s64 = -2094596096;
	// lfs f31,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f30.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// addi r30,r10,-25976
	ctx.r30.s64 = ctx.r10.s64 + -25976;
	// blt cr6,0x82346614
	if (ctx.cr6.lt) goto loc_82346614;
	// lfs f0,428(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 428);
	ctx.f0.f64 = double(temp.f32);
	// fmr f13,f31
	ctx.f13.f64 = ctx.f31.f64;
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// ble cr6,0x82346628
	if (!ctx.cr6.gt) goto loc_82346628;
loc_82346614:
	// stfs f0,20(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lhz r4,354(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 354);
	// bl 0x82229da8
	ctx.lr = 0x82346628;
	sub_82229DA8(ctx, base);
loc_82346628:
	// lfs f0,420(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 420);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// fneg f13,f0
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// lfs f0,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x8234664c
	if (ctx.cr6.lt) goto loc_8234664C;
	// lfs f13,416(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 416);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82346660
	if (!ctx.cr6.gt) goto loc_82346660;
loc_8234664C:
	// stfs f13,24(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lhz r4,358(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 358);
	// bl 0x82229da8
	ctx.lr = 0x82346660;
	sub_82229DA8(ctx, base);
loc_82346660:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// lfs f2,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x820d52c0
	ctx.lr = 0x82346670;
	sub_820D52C0(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// lfs f2,24(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x820d52c0
	ctx.lr = 0x82346684;
	sub_820D52C0(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f13,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,5488(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5488);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x823466a0
	if (ctx.cr6.lt) goto loc_823466A0;
	// fcmpu cr6,f31,f29
	ctx.cr6.compare(ctx.f31.f64, ctx.f29.f64);
	// beq cr6,0x823466b4
	if (ctx.cr6.eq) goto loc_823466B4;
loc_823466A0:
	// lfs f13,132(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x823466bc
	if (ctx.cr6.lt) goto loc_823466BC;
	// fcmpu cr6,f1,f29
	ctx.cr6.compare(ctx.f1.f64, ctx.f29.f64);
	// bne cr6,0x823466bc
	if (!ctx.cr6.eq) goto loc_823466BC;
loc_823466B4:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x823466dc
	goto loc_823466DC;
loc_823466BC:
	// lbz r11,608(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 608);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823466e0
	if (ctx.cr6.eq) goto loc_823466E0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lhz r4,356(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 356);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82229da8
	ctx.lr = 0x823466D8;
	sub_82229DA8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
loc_823466DC:
	// stb r11,608(r31)
	PPC_STORE_U8(ctx.r31.u32 + 608, ctx.r11.u8);
loc_823466E0:
	// lfs f0,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f28
	ctx.cr6.compare(ctx.f0.f64, ctx.f28.f64);
	// bge cr6,0x82346778
	if (!ctx.cr6.lt) goto loc_82346778;
	// lfs f0,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f28
	ctx.cr6.compare(ctx.f0.f64, ctx.f28.f64);
	// bge cr6,0x82346778
	if (!ctx.cr6.lt) goto loc_82346778;
	// li r5,0
	ctx.r5.s64 = 0;
	// lhz r4,350(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 350);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82229da8
	ctx.lr = 0x82346708;
	sub_82229DA8(ctx, base);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82346788
	if (ctx.cr6.eq) goto loc_82346788;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lhz r8,126(r27)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r27.u32 + 126);
	// addi r3,r31,956
	ctx.r3.s64 = ctx.r31.s64 + 956;
	// lhz r7,126(r29)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r29.u32 + 126);
	// li r9,2049
	ctx.r9.s64 = 2049;
	// addi r6,r11,-9672
	ctx.r6.s64 = ctx.r11.s64 + -9672;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// bl 0x82342160
	ctx.lr = 0x82346734;
	sub_82342160(ctx, base);
	// lwz r10,956(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 956);
	// li r5,0
	ctx.r5.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bne cr6,0x82346760
	if (!ctx.cr6.eq) goto loc_82346760;
	// lhz r4,352(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 352);
	// bl 0x82229da8
	ctx.lr = 0x82346750;
	sub_82229DA8(ctx, base);
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x823de074
	ctx.lr = 0x8234675C;
	__restfpr_28(ctx, base);
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_82346760:
	// lhz r4,346(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 346);
	// bl 0x82229da8
	ctx.lr = 0x82346768;
	sub_82229DA8(ctx, base);
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x823de074
	ctx.lr = 0x82346774;
	__restfpr_28(ctx, base);
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_82346778:
	// li r5,0
	ctx.r5.s64 = 0;
	// lhz r4,348(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 348);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82229da8
	ctx.lr = 0x82346788;
	sub_82229DA8(ctx, base);
loc_82346788:
	// li r5,0
	ctx.r5.s64 = 0;
	// lhz r4,346(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 346);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82229da8
	ctx.lr = 0x82346798;
	sub_82229DA8(ctx, base);
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x823de074
	ctx.lr = 0x823467A4;
	__restfpr_28(ctx, base);
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_823467A8:
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,608(r31)
	PPC_STORE_U8(ctx.r31.u32 + 608, ctx.r11.u8);
loc_823467B0:
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x823de074
	ctx.lr = 0x823467BC;
	__restfpr_28(ctx, base);
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823462C0) {
	__imp__sub_823462C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823467C0) {
	PPC_FUNC_PROLOGUE();
	// fcmpu cr6,f1,f2
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f2.f64);
	// bge cr6,0x823467dc
	if (!ctx.cr6.lt) goto loc_823467DC;
	// fmadds f1,f3,f4,f1
	ctx.f1.f64 = double(float(ctx.f3.f64 * ctx.f4.f64 + ctx.f1.f64));
	// fcmpu cr6,f1,f2
	ctx.cr6.compare(ctx.f1.f64, ctx.f2.f64);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// blr 
	return;
loc_823467DC:
	// fnmsubs f1,f3,f4,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(-(ctx.f3.f64 * ctx.f4.f64 - ctx.f1.f64)));
	// fcmpu cr6,f1,f2
	ctx.cr6.compare(ctx.f1.f64, ctx.f2.f64);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823467C0) {
	__imp__sub_823467C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823467F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x823467F8;
	__savegprlr_28(ctx, base);
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x823de024
	ctx.lr = 0x82346800;
	__savefpr_27(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,560(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 560);
	// lis r10,-31816
	ctx.r10.s64 = -2085093376;
	// lfs f0,576(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 576);
	ctx.f0.f64 = double(temp.f32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r9,r10,-12608
	ctx.r9.s64 = ctx.r10.s64 + -12608;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lwzx r30,r8,r9
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// lfs f13,96(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82346854
	if (ctx.cr6.lt) goto loc_82346854;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x823de070
	ctx.lr = 0x82346850;
	__restfpr_27(ctx, base);
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_82346854:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fdivs f13,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// lfs f12,92(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f11,700(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	ctx.f11.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f10,84(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	ctx.f10.f64 = double(temp.f32);
	// lfs f0,7640(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7640);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f9,f0,f12
	ctx.f9.f64 = double(float(ctx.f0.f64 / ctx.f12.f64));
	// lfs f0,12168(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// lfs f31,2420(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2420);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,2416(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2416);
	ctx.f30.f64 = double(temp.f32);
	// fsubs f8,f0,f13
	ctx.f8.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fadds f7,f9,f11
	ctx.f7.f64 = double(float(ctx.f9.f64 + ctx.f11.f64));
	// fmuls f28,f8,f10
	ctx.f28.f64 = double(float(ctx.f8.f64 * ctx.f10.f64));
	// fmuls f27,f7,f31
	ctx.f27.f64 = double(float(ctx.f7.f64 * ctx.f31.f64));
	// fadds f1,f27,f30
	ctx.f1.f64 = double(float(ctx.f27.f64 + ctx.f30.f64));
	// bl 0x823dde20
	ctx.lr = 0x823468A0;
	sub_823DDE20(ctx, base);
	// frsp f6,f1
	ctx.fpscr.disableFlushMode();
	ctx.f6.f64 = double(float(ctx.f1.f64));
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfs f5,244(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	ctx.f5.f64 = double(temp.f32);
	// lfs f29,2412(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2412);
	ctx.f29.f64 = double(temp.f32);
	// fsubs f4,f27,f6
	ctx.f4.f64 = double(float(ctx.f27.f64 - ctx.f6.f64));
	// fmuls f3,f4,f29
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f29.f64));
	// stfs f3,700(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 700, temp.u32);
	// fsubs f2,f3,f5
	ctx.f2.f64 = double(float(ctx.f3.f64 - ctx.f5.f64));
	// fmuls f31,f2,f31
	ctx.f31.f64 = double(float(ctx.f2.f64 * ctx.f31.f64));
	// fadds f1,f31,f30
	ctx.f1.f64 = double(float(ctx.f31.f64 + ctx.f30.f64));
	// bl 0x823dde20
	ctx.lr = 0x823468CC;
	sub_823DDE20(ctx, base);
	// frsp f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64));
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lfs f0,5524(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 5524);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f31,f1
	ctx.f13.f64 = double(float(ctx.f31.f64 - ctx.f1.f64));
	// fmuls f12,f13,f29
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f29.f64));
	// fmuls f31,f12,f0
	ctx.f31.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x823de720
	ctx.lr = 0x823468EC;
	sub_823DE720(ctx, base);
	// frsp f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = double(float(ctx.f1.f64));
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x823de800
	ctx.lr = 0x823468F8;
	sub_823DE800(ctx, base);
	// lis r5,-32020
	ctx.r5.s64 = -2098462720;
	// lfs f11,88(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	ctx.f11.f64 = double(temp.f32);
	// lis r4,-32251
	ctx.r4.s64 = -2113601536;
	// frsp f31,f1
	ctx.f31.f64 = double(float(ctx.f1.f64));
	// addi r3,r5,9624
	ctx.r3.s64 = ctx.r5.s64 + 9624;
	// fneg f30,f30
	ctx.f30.u64 = ctx.f30.u64 ^ 0x8000000000000000;
	// lfs f0,-13276(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + -13276);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f10,80(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fdivs f7,f8,f11
	ctx.f7.f64 = double(float(ctx.f8.f64 / ctx.f11.f64));
	// fmuls f29,f7,f0
	ctx.f29.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x823de720
	ctx.lr = 0x8234693C;
	sub_823DE720(ctx, base);
	// frsp f27,f1
	ctx.fpscr.disableFlushMode();
	ctx.f27.f64 = double(float(ctx.f1.f64));
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x823de800
	ctx.lr = 0x82346948;
	sub_823DE800(ctx, base);
	// lis r10,-32190
	ctx.r10.s64 = -2109603840;
	// frsp f6,f1
	ctx.fpscr.disableFlushMode();
	ctx.f6.f64 = double(float(ctx.f1.f64));
	// lis r9,-32032
	ctx.r9.s64 = -2099249152;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// lfs f0,-32016(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -32016);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f5,f0,f27
	ctx.f5.f64 = double(float(ctx.f0.f64 * ctx.f27.f64));
	// lwz r11,-5884(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -5884);
	// lfs f0,-32020(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -32020);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f4,f6,f28
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f28.f64));
	// fmuls f3,f5,f28
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f28.f64));
	// fmuls f2,f3,f31
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f31.f64));
	// fmuls f1,f3,f30
	ctx.f1.f64 = double(float(ctx.f3.f64 * ctx.f30.f64));
	// fmadds f13,f4,f30,f2
	ctx.f13.f64 = double(float(ctx.f4.f64 * ctx.f30.f64 + ctx.f2.f64));
	// fmsubs f12,f4,f31,f1
	ctx.f12.f64 = double(float(ctx.f4.f64 * ctx.f31.f64 - ctx.f1.f64));
	// stfs f12,0(r29)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,0(r28)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
	// lbz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82346a48
	if (ctx.cr6.eq) goto loc_82346A48;
	// fneg f13,f0
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r31,240
	ctx.r3.s64 = ctx.r31.s64 + 240;
	// lfs f0,5876(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5876);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f31,f12,f0
	ctx.f31.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f30,f13,f0
	ctx.f30.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bl 0x822da650
	ctx.lr = 0x823469BC;
	sub_822DA650(ctx, base);
	// lfs f10,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f10.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f11,124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f7,f10,f30
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f30.f64));
	// lfs f8,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f9,f11,f30
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f30.f64));
	// fmuls f6,f8,f30
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f30.f64));
	// lfs f4,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f4.f64 = double(temp.f32);
	// lfs f5,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f5.f64 = double(temp.f32);
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// lfs f3,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f3.f64 = double(temp.f32);
	// addi r3,r31,216
	ctx.r3.s64 = ctx.r31.s64 + 216;
	// lfs f0,5484(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// li r6,0
	ctx.r6.s64 = 0;
	// lfs f2,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f2.f64 = double(temp.f32);
	// addi r5,r9,-2232
	ctx.r5.s64 = ctx.r9.s64 + -2232;
	// lfs f1,140(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	ctx.f1.f64 = double(temp.f32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lfs f13,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,216(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 216);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f8,f4,f31,f7
	ctx.f8.f64 = double(float(ctx.f4.f64 * ctx.f31.f64 + ctx.f7.f64));
	// fmadds f10,f5,f31,f9
	ctx.f10.f64 = double(float(ctx.f5.f64 * ctx.f31.f64 + ctx.f9.f64));
	// fmadds f7,f3,f31,f6
	ctx.f7.f64 = double(float(ctx.f3.f64 * ctx.f31.f64 + ctx.f6.f64));
	// lfs f11,220(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,224(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f5,f1,f0,f8
	ctx.f5.f64 = double(float(ctx.f1.f64 * ctx.f0.f64 + ctx.f8.f64));
	// fmadds f6,f2,f0,f10
	ctx.f6.f64 = double(float(ctx.f2.f64 * ctx.f0.f64 + ctx.f10.f64));
	// fmadds f4,f13,f0,f7
	ctx.f4.f64 = double(float(ctx.f13.f64 * ctx.f0.f64 + ctx.f7.f64));
	// fadds f2,f11,f5
	ctx.f2.f64 = double(float(ctx.f11.f64 + ctx.f5.f64));
	// stfs f2,92(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// fadds f3,f12,f6
	ctx.f3.f64 = double(float(ctx.f12.f64 + ctx.f6.f64));
	// stfs f3,88(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fadds f1,f9,f4
	ctx.f1.f64 = double(float(ctx.f9.f64 + ctx.f4.f64));
	// stfs f1,96(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// bl 0x821f2d08
	ctx.lr = 0x82346A48;
	sub_821F2D08(ctx, base);
loc_82346A48:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x823de070
	ctx.lr = 0x82346A54;
	__restfpr_27(ctx, base);
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823467F0) {
	__imp__sub_823467F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82346A58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82346A60;
	__savegprlr_29(ctx, base);
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x823de020
	ctx.lr = 0x82346A68;
	__savefpr_26(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,560(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 560);
	// lis r10,-31816
	ctx.r10.s64 = -2085093376;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f0,856(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 856);
	ctx.f0.f64 = double(temp.f32);
	// addi r8,r10,-12608
	ctx.r8.s64 = ctx.r10.s64 + -12608;
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lfs f27,5484(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5484);
	ctx.f27.f64 = double(temp.f32);
	// addi r31,r3,216
	ctx.r31.s64 = ctx.r3.s64 + 216;
	// fcmpu cr6,f0,f27
	ctx.cr6.compare(ctx.f0.f64, ctx.f27.f64);
	// lwzx r29,r7,r8
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// lfs f31,-23144(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -23144);
	ctx.f31.f64 = double(temp.f32);
	// ble cr6,0x82346b04
	if (!ctx.cr6.gt) goto loc_82346B04;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,860(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 860);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,5524(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5524);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bl 0x823de720
	ctx.lr = 0x82346AB8;
	sub_823DE720(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// lfs f11,856(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 856);
	ctx.f11.f64 = double(temp.f32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lfs f10,848(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 848);
	ctx.f10.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f0,6060(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 6060);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f9,f12,f11
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// fmuls f8,f10,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f9.f64));
	// stfs f8,8(r10)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// lwz r8,4(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lfs f7,852(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 852);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f7,f9
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f9.f64));
	// stfs f6,12(r8)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r8.u32 + 12, temp.u32);
	// lfs f4,856(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 856);
	ctx.f4.f64 = double(temp.f32);
	// lfs f5,860(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 860);
	ctx.f5.f64 = double(temp.f32);
	// fadds f2,f5,f0
	ctx.f2.f64 = double(float(ctx.f5.f64 + ctx.f0.f64));
	// fsubs f3,f4,f31
	ctx.f3.f64 = double(float(ctx.f4.f64 - ctx.f31.f64));
	// stfs f3,856(r30)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r30.u32 + 856, temp.u32);
	// stfs f2,860(r30)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r30.u32 + 860, temp.u32);
loc_82346B04:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82346b2c
	if (!ctx.cr6.eq) goto loc_82346B2C;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823467f0
	ctx.lr = 0x82346B20;
	sub_823467F0(ctx, base);
	// lfs f10,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f11.f64 = double(temp.f32);
	// b 0x82346b34
	goto loc_82346B34;
loc_82346B2C:
	// fmr f11,f27
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = ctx.f27.f64;
	// fmr f10,f27
	ctx.f10.f64 = ctx.f27.f64;
loc_82346B34:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x82346cd4
	if (ctx.cr6.eq) goto loc_82346CD4;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82346cd4
	if (ctx.cr6.eq) goto loc_82346CD4;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lfs f13,104(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// fmr f0,f27
	ctx.f0.f64 = ctx.f27.f64;
	// lfs f12,-13272(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -13272);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// ble cr6,0x82346b98
	if (!ctx.cr6.gt) goto loc_82346B98;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82346b74
	if (!ctx.cr6.eq) goto loc_82346B74;
	// lfs f12,128(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f27
	ctx.cr6.compare(ctx.f12.f64, ctx.f27.f64);
	// ble cr6,0x82346b80
	if (!ctx.cr6.gt) goto loc_82346B80;
loc_82346B74:
	// lfs f0,128(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,48(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
loc_82346B80:
	// lfs f12,108(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	ctx.f12.f64 = double(temp.f32);
	// lfs f9,56(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 56);
	ctx.f9.f64 = double(temp.f32);
	// fabs f8,f12
	ctx.f8.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// fmadds f7,f9,f13,f0
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f13.f64 + ctx.f0.f64));
	// lfs f6,64(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 64);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f0,f8,f6,f7
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f6.f64 + ctx.f7.f64));
loc_82346B98:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lfs f9,60(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 60);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,108(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	ctx.f8.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmuls f7,f8,f9
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f9.f64));
	// lfs f6,52(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 52);
	ctx.f6.f64 = double(temp.f32);
	// lfs f8,132(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	ctx.f8.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f13,72(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 72);
	ctx.f13.f64 = double(temp.f32);
	// lfs f5,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f3,f5,f10
	ctx.f3.f64 = double(float(ctx.f5.f64 - ctx.f10.f64));
	// fsubs f2,f4,f11
	ctx.f2.f64 = double(float(ctx.f4.f64 - ctx.f11.f64));
	// lfs f12,68(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 68);
	ctx.f12.f64 = double(temp.f32);
	// lfs f1,80(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// lfs f10,156(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,76(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 76);
	ctx.f9.f64 = double(temp.f32);
	// lfs f11,152(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f7,f8,f6,f7
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f6.f64 + ctx.f7.f64));
	// lfs f30,2420(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2420);
	ctx.f30.f64 = double(temp.f32);
	// lfs f29,2416(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2416);
	ctx.f29.f64 = double(temp.f32);
	// fmuls f6,f3,f13
	ctx.f6.f64 = double(float(ctx.f3.f64 * ctx.f13.f64));
	// fmuls f5,f2,f12
	ctx.f5.f64 = double(float(ctx.f2.f64 * ctx.f12.f64));
	// fneg f4,f6
	ctx.f4.u64 = ctx.f6.u64 ^ 0x8000000000000000;
	// fneg f3,f5
	ctx.f3.u64 = ctx.f5.u64 ^ 0x8000000000000000;
	// fnmsubs f2,f1,f10,f4
	ctx.f2.f64 = double(float(-(ctx.f1.f64 * ctx.f10.f64 - ctx.f4.f64)));
	// fnmsubs f1,f9,f11,f3
	ctx.f1.f64 = double(float(-(ctx.f9.f64 * ctx.f11.f64 - ctx.f3.f64)));
	// fadds f13,f7,f2
	ctx.f13.f64 = double(float(ctx.f7.f64 + ctx.f2.f64));
	// fsubs f12,f1,f0
	ctx.f12.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// fmadds f10,f13,f31,f10
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f31.f64 + ctx.f10.f64));
	// stfs f10,156(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 156, temp.u32);
	// fmadds f9,f12,f31,f11
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f31.f64 + ctx.f11.f64));
	// stfs f9,152(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 152, temp.u32);
	// lwz r8,4(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// fmr f8,f9
	ctx.f8.f64 = ctx.f9.f64;
	// lfs f7,8(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f6,f9,f31,f7
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f31.f64 + ctx.f7.f64));
	// fmuls f26,f6,f30
	ctx.f26.f64 = double(float(ctx.f6.f64 * ctx.f30.f64));
	// fadds f1,f26,f29
	ctx.f1.f64 = double(float(ctx.f26.f64 + ctx.f29.f64));
	// bl 0x823dde20
	ctx.lr = 0x82346C38;
	sub_823DDE20(ctx, base);
	// frsp f5,f1
	ctx.fpscr.disableFlushMode();
	ctx.f5.f64 = double(float(ctx.f1.f64));
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lwz r6,4(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lfs f28,2412(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2412);
	ctx.f28.f64 = double(temp.f32);
	// fsubs f4,f26,f5
	ctx.f4.f64 = double(float(ctx.f26.f64 - ctx.f5.f64));
	// fmuls f3,f4,f28
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f28.f64));
	// stfs f3,8(r6)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r6.u32 + 8, temp.u32);
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lfs f2,156(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,12(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// fmadds f0,f2,f31,f1
	ctx.f0.f64 = double(float(ctx.f2.f64 * ctx.f31.f64 + ctx.f1.f64));
	// fmuls f31,f0,f30
	ctx.f31.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// fadds f1,f31,f29
	ctx.f1.f64 = double(float(ctx.f31.f64 + ctx.f29.f64));
	// bl 0x823dde20
	ctx.lr = 0x82346C70;
	sub_823DDE20(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// fsubs f12,f31,f13
	ctx.f12.f64 = double(float(ctx.f31.f64 - ctx.f13.f64));
	// fmuls f11,f12,f28
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f28.f64));
	// stfs f11,12(r4)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r4.u32 + 12, temp.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lfs f0,40(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x82346ca4
	if (ctx.cr6.gt) goto loc_82346CA4;
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82346cac
	if (!ctx.cr6.lt) goto loc_82346CAC;
loc_82346CA4:
	// stfs f0,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f27,152(r31)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r31.u32 + 152, temp.u32);
loc_82346CAC:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lfs f0,44(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x82346ccc
	if (ctx.cr6.gt) goto loc_82346CCC;
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82346cd4
	if (!ctx.cr6.lt) goto loc_82346CD4;
loc_82346CCC:
	// stfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stfs f27,156(r31)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r31.u32 + 156, temp.u32);
loc_82346CD4:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x823de06c
	ctx.lr = 0x82346CE0;
	__restfpr_26(ctx, base);
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82346A58) {
	__imp__sub_82346A58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82346CE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82346CE4) {
	__imp__sub_82346CE4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82346CE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x82346CF0;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,276(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	// lis r11,-31816
	ctx.r11.s64 = -2085093376;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r11,-12608
	ctx.r9.s64 = ctx.r11.s64 + -12608;
	// addi r28,r29,216
	ctx.r28.s64 = ctx.r29.s64 + 216;
	// lwz r8,560(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 560);
	// lfs f31,5484(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f31.f64 = double(temp.f32);
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r27,r7,r9
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// lfs f0,364(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 364);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bne cr6,0x82346d3c
	if (!ctx.cr6.eq) goto loc_82346D3C;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
loc_82346D2C:
	// stfs f31,16(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-56(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_82346D3C:
	// lwz r11,528(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 528);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82346dac
	if (ctx.cr6.eq) goto loc_82346DAC;
	// lwz r11,476(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 476);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82346dac
	if (!ctx.cr6.eq) goto loc_82346DAC;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// beq cr6,0x82346d2c
	if (ctx.cr6.eq) goto loc_82346D2C;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lfs f13,532(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 532);
	ctx.f13.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f10,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f8,f10,f13
	ctx.f8.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// lfs f12,16(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,7324(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 7324);
	ctx.f0.f64 = double(temp.f32);
	// fadds f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// fsubs f9,f12,f0
	ctx.f9.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// fsubs f7,f13,f11
	ctx.f7.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// fsubs f6,f9,f13
	ctx.f6.f64 = double(float(ctx.f9.f64 - ctx.f13.f64));
	// fsel f5,f7,f11,f13
	ctx.f5.f64 = ctx.f7.f64 >= 0.0 ? ctx.f11.f64 : ctx.f13.f64;
	// fsel f4,f6,f9,f13
	ctx.f4.f64 = ctx.f6.f64 >= 0.0 ? ctx.f9.f64 : ctx.f13.f64;
	// fsel f3,f8,f4,f5
	ctx.f3.f64 = ctx.f8.f64 >= 0.0 ? ctx.f4.f64 : ctx.f5.f64;
	// stfs f3,16(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-56(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_82346DAC:
	// lfs f0,96(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// addi r31,r28,92
	ctx.r31.s64 = ctx.r28.s64 + 92;
	// fmuls f13,f0,f0
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f12,92(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 92);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,100(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 100);
	ctx.f11.f64 = double(temp.f32);
	// li r30,0
	ctx.r30.s64 = 0;
	// fmadds f10,f12,f12,f13
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f13.f64));
	// fmadds f9,f11,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f10.f64));
	// fcmpu cr6,f9,f31
	ctx.cr6.compare(ctx.f9.f64, ctx.f31.f64);
	// beq cr6,0x82346e20
	if (ctx.cr6.eq) goto loc_82346E20;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r28,24
	ctx.r3.s64 = ctx.r28.s64 + 24;
	// bl 0x822da518
	ctx.lr = 0x82346DE8;
	sub_822DA518(ctx, base);
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fmuls f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f11,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f7,f11,f10,f12
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f10.f64 + ctx.f12.f64));
	// fmadds f6,f9,f8,f7
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f8.f64 + ctx.f7.f64));
	// fcmpu cr6,f6,f31
	ctx.cr6.compare(ctx.f6.f64, ctx.f31.f64);
	// blt cr6,0x82346e1c
	if (ctx.cr6.lt) goto loc_82346E1C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82346E1C:
	// clrlwi r30,r11,24
	ctx.r30.u64 = ctx.r11.u32 & 0xFF;
loc_82346E20:
	// lfs f0,28(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,40(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f0,2420(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2420);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,2416(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2416);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f31,f12,f0
	ctx.f31.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fadds f1,f31,f13
	ctx.f1.f64 = double(float(ctx.f31.f64 + ctx.f13.f64));
	// bl 0x823dde20
	ctx.lr = 0x82346E48;
	sub_823DDE20(ctx, base);
	// frsp f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64));
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// clrlwi r8,r30,24
	ctx.r8.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// lfs f0,2412(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2412);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f10,f31,f11
	ctx.f10.f64 = double(float(ctx.f31.f64 - ctx.f11.f64));
	// fmuls f13,f10,f0
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// beq cr6,0x82346e74
	if (ctx.cr6.eq) goto loc_82346E74;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,-21320(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -21320);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82346e7c
	goto loc_82346E7C;
loc_82346E74:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,5876(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5876);
	ctx.f0.f64 = double(temp.f32);
loc_82346E7C:
	// fmuls f0,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f13,364(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 364);
	ctx.f13.f64 = double(temp.f32);
	// fneg f12,f13
	ctx.f12.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// fsubs f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fsubs f10,f12,f0
	ctx.f10.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// fsel f9,f11,f13,f0
	ctx.f9.f64 = ctx.f11.f64 >= 0.0 ? ctx.f13.f64 : ctx.f0.f64;
	// fsel f8,f10,f12,f9
	ctx.f8.f64 = ctx.f10.f64 >= 0.0 ? ctx.f12.f64 : ctx.f9.f64;
	// stfs f8,16(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-56(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82346CE8) {
	__imp__sub_82346CE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82346EAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82346EAC) {
	__imp__sub_82346EAC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82346EB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x82346EB8;
	__savegprlr_26(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,256(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 256);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82347144
	if (ctx.cr6.eq) goto loc_82347144;
	// lhz r10,124(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 124);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82347144
	if (ctx.cr6.eq) goto loc_82347144;
	// lis r9,-32052
	ctx.r9.s64 = -2100559872;
	// lwz r31,276(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	// mulli r10,r11,624
	ctx.r10.s64 = ctx.r11.s64 * 624;
	// lwz r8,560(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 560);
	// addi r11,r9,26552
	ctx.r11.s64 = ctx.r9.s64 + 26552;
	// lis r7,-31816
	ctx.r7.s64 = -2085093376;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r6,r7,-12608
	ctx.r6.s64 = ctx.r7.s64 + -12608;
	// rlwinm r5,r8,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r28,r11,-624
	ctx.r28.s64 = ctx.r11.s64 + -624;
	// lwz r30,-360(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + -360);
	// lwzx r27,r5,r6
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r6.u32);
	// lwz r4,172(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 172);
	// rlwinm r3,r4,0,7,7
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x1000000;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82347144
	if (!ctx.cr6.eq) goto loc_82347144;
	// lwz r11,592(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 592);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x82346f68
	if (ctx.cr6.gt) goto loc_82346F68;
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r10,r11,44204
	ctx.r10.u64 = ctx.r11.u64 | 44204;
	// lwzx r9,r30,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82346f70
	if (ctx.cr6.eq) goto loc_82346F70;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// rlwinm r10,r11,0,20,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC00;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82346f70
	if (!ctx.cr6.eq) goto loc_82346F70;
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r10,r11,-25976
	ctx.r10.s64 = ctx.r11.s64 + -25976;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lhz r4,344(r10)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r10.u32 + 344);
	// bl 0x82229da8
	ctx.lr = 0x82346F64;
	sub_82229DA8(ctx, base);
	// b 0x82346f70
	goto loc_82346F70;
loc_82346F68:
	// addi r11,r11,-50
	ctx.r11.s64 = ctx.r11.s64 + -50;
	// stw r11,592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 592, ctx.r11.u32);
loc_82346F70:
	// lwz r11,912(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 912);
	// li r26,1
	ctx.r26.s64 = 1;
	// stw r26,760(r31)
	PPC_STORE_U32(ctx.r31.u32 + 760, ctx.r26.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x82346fa8
	if (!ctx.cr6.lt) goto loc_82346FA8;
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// lwz r11,-32252(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -32252);
	// lhz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// bl 0x822a13a0
	ctx.lr = 0x82346F94;
	sub_822A13A0(ctx, base);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r10,-13228
	ctx.r4.s64 = ctx.r10.s64 + -13228;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822830e8
	ctx.lr = 0x82346FA8;
	sub_822830E8(ctx, base);
loc_82346FA8:
	// lwz r11,908(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 908);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x82346fc4
	if (!ctx.cr6.lt) goto loc_82346FC4;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,-13264
	ctx.r4.s64 = ctx.r11.s64 + -13264;
	// bl 0x822830e8
	ctx.lr = 0x82346FC4;
	sub_822830E8(ctx, base);
loc_82346FC4:
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// lwz r4,912(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 912);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8222eee0
	ctx.lr = 0x82346FD4;
	sub_8222EEE0(ctx, base);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,908(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 908);
	// bl 0x8222eee0
	ctx.lr = 0x82346FE4;
	sub_8222EEE0(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821e6bc0
	ctx.lr = 0x82346FF0;
	sub_821E6BC0(ctx, base);
	// lis r11,-31815
	ctx.r11.s64 = -2085027840;
	// lwz r11,-4640(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4640);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8234703c
	if (ctx.cr6.eq) goto loc_8234703C;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x8234703c
	if (!ctx.cr6.eq) goto loc_8234703C;
	// lwz r11,264(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 264);
	// lwz r10,172(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 172);
	// rlwinm r9,r10,0,8,8
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x800000;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8234703c
	if (ctx.cr6.eq) goto loc_8234703C;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r29,244
	ctx.r3.s64 = ctx.r29.s64 + 244;
	// bl 0x822da518
	ctx.lr = 0x82347038;
	sub_822DA518(ctx, base);
	// b 0x82347050
	goto loc_82347050;
loc_8234703C:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821e6c48
	ctx.lr = 0x82347050;
	sub_821E6C48(ctx, base);
loc_82347050:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lfs f13,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f12.f64 = double(temp.f32);
	// lis r7,640
	ctx.r7.s64 = 41943040;
	// lfs f11,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f11.f64 = double(temp.f32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lfs f10,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f10.f64 = double(temp.f32);
	// ori r7,r7,57489
	ctx.r7.u64 = ctx.r7.u64 | 57489;
	// lfs f9,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f9.f64 = double(temp.f32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lfs f8,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f8.f64 = double(temp.f32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lfs f0,-13268(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -13268);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// fmadds f13,f12,f0,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f13.f64));
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmadds f7,f10,f0,f11
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f0.f64 + ctx.f11.f64));
	// stfs f7,84(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmadds f6,f8,f0,f9
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f0.f64 + ctx.f9.f64));
	// stfs f6,88(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f13,788(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 788, temp.u32);
	// addi r30,r31,788
	ctx.r30.s64 = ctx.r31.s64 + 788;
	// lfs f5,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,792(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 792, temp.u32);
	// lfs f4,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,796(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 796, temp.u32);
	// lhz r11,256(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 256);
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// bl 0x821fe6a8
	ctx.lr = 0x823470C4;
	sub_821FE6A8(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,160(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12168(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82347118
	if (!ctx.cr6.lt) goto loc_82347118;
	// lfs f13,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// fmr f12,f0
	ctx.f12.f64 = ctx.f0.f64;
	// lfs f11,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f11,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// fmadds f9,f10,f0,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f0.f64 + ctx.f13.f64));
	// stfs f9,0(r30)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// lfs f0,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// lfs f8,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f8,f0
	ctx.f7.f64 = double(float(ctx.f8.f64 - ctx.f0.f64));
	// fmadds f6,f7,f12,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f12.f64 + ctx.f0.f64));
	// stfs f6,4(r30)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// lfs f0,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// lfs f5,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f4,f5,f0
	ctx.f4.f64 = double(float(ctx.f5.f64 - ctx.f0.f64));
	// fmadds f3,f4,f12,f0
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f12.f64 + ctx.f0.f64));
	// stfs f3,8(r30)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
loc_82347118:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r8,316(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 316);
	// li r7,2047
	ctx.r7.s64 = 2047;
	// lhz r6,126(r29)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r29.u32 + 126);
	// addi r5,r11,-9672
	ctx.r5.s64 = ctx.r11.s64 + -9672;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x821fe678
	ctx.lr = 0x82347138;
	sub_821FE678(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82347144
	if (!ctx.cr6.eq) goto loc_82347144;
	// stw r26,604(r31)
	PPC_STORE_U32(ctx.r31.u32 + 604, ctx.r26.u32);
loc_82347144:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82346EB0) {
	__imp__sub_82346EB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8234714C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8234714C) {
	__imp__sub_8234714C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82347150) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x82347158;
	__savegprlr_26(ctx, base);
	// stfd f29,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f29.u64);
	// stfd f30,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f30.u64);
	// stfd f31,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r9,560(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 560);
	// lis r10,-31816
	ctx.r10.s64 = -2085093376;
	// lwz r29,0(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r27,r10,-12608
	ctx.r27.s64 = ctx.r10.s64 + -12608;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stb r11,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r11.u8);
	// addi r31,r3,216
	ctx.r31.s64 = ctx.r3.s64 + 216;
	// stb r11,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r11.u8);
	// lhz r10,256(r29)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r29.u32 + 256);
	// lwzx r26,r8,r27
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r27.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82347238
	if (ctx.cr6.eq) goto loc_82347238;
	// lis r11,-32052
	ctx.r11.s64 = -2100559872;
	// mulli r10,r10,624
	ctx.r10.s64 = ctx.r10.s64 * 624;
	// addi r11,r11,26552
	ctx.r11.s64 = ctx.r11.s64 + 26552;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r10,r11,-624
	ctx.r10.s64 = ctx.r11.s64 + -624;
	// lwz r10,-360(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -360);
	// lwz r9,172(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 172);
	// oris r8,r9,128
	ctx.r8.u64 = ctx.r9.u64 | 8388608;
	// stw r8,172(r10)
	PPC_STORE_U32(ctx.r10.u32 + 172, ctx.r8.u32);
	// lwz r11,-360(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -360);
	// lwz r7,172(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 172);
	// rlwinm r6,r7,0,7,7
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x1000000;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x82347238
	if (!ctx.cr6.eq) goto loc_82347238;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r9,r10,0,20,21
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xC00;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82347238
	if (!ctx.cr6.eq) goto loc_82347238;
	// addis r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 65536;
	// li r9,127
	ctx.r9.s64 = 127;
	// addi r10,r10,-21336
	ctx.r10.s64 = ctx.r10.s64 + -21336;
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lbz r7,26(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 26);
	// rlwinm r6,r8,0,20,20
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x800;
	// lbz r5,27(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 27);
	// subfic r4,r6,0
	ctx.xer.ca = ctx.r6.u32 <= 0;
	ctx.r4.s64 = 0 - ctx.r6.s64;
	// subfe r10,r3,r3
	temp.u8 = (~ctx.r3.u32 + ctx.r3.u32 < ~ctx.r3.u32) | (~ctx.r3.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r3.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stb r7,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r7.u8);
	// stb r5,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r5.u8);
	// and r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 & ctx.r9.u64;
	// extsb r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	// stb r10,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r10.u8);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82347238
	if (!ctx.cr6.gt) goto loc_82347238;
	// lwz r10,172(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 172);
	// rlwinm r9,r10,0,9,7
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFF7FFFFF;
	// stw r9,172(r11)
	PPC_STORE_U32(ctx.r11.u32 + 172, ctx.r9.u32);
loc_82347238:
	// addi r5,r31,128
	ctx.r5.s64 = ctx.r31.s64 + 128;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82344000
	ctx.lr = 0x8234724C;
	sub_82344000(ctx, base);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lfs f12,140(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	ctx.f12.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f11,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f11.f64 = double(temp.f32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f9,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f9.f64 = double(temp.f32);
	// addi r11,r31,140
	ctx.r11.s64 = ctx.r31.s64 + 140;
	// lfs f6,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f6.f64 = double(temp.f32);
	// lfs f31,-23144(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -23144);
	ctx.f31.f64 = double(temp.f32);
	// fmadds f10,f11,f31,f12
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f31.f64 + ctx.f12.f64));
	// stfs f10,140(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 140, temp.u32);
	// lfs f8,144(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f7,f9,f31,f8
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f31.f64 + ctx.f8.f64));
	// stfs f7,144(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 144, temp.u32);
	// fmr f3,f7
	ctx.f3.f64 = ctx.f7.f64;
	// lfs f5,148(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	ctx.f5.f64 = double(temp.f32);
	// fmadds f4,f6,f31,f5
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f31.f64 + ctx.f5.f64));
	// stfs f4,148(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 148, temp.u32);
	// lfs f2,40(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f2.f64 = double(temp.f32);
	// fmadds f1,f7,f31,f2
	ctx.f1.f64 = double(float(ctx.f7.f64 * ctx.f31.f64 + ctx.f2.f64));
	// lfs f0,2420(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2420);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f29,f1,f0
	ctx.f29.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// lfs f13,2416(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2416);
	ctx.f13.f64 = double(temp.f32);
	// fadds f1,f29,f13
	ctx.f1.f64 = double(float(ctx.f29.f64 + ctx.f13.f64));
	// bl 0x823dde20
	ctx.lr = 0x823472B0;
	sub_823DDE20(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lfs f0,2412(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2412);
	ctx.f0.f64 = double(temp.f32);
	// lfs f30,5484(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 5484);
	ctx.f30.f64 = double(temp.f32);
	// stfs f30,24(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// stfs f30,32(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// fsubs f12,f29,f13
	ctx.f12.f64 = double(float(ctx.f29.f64 - ctx.f13.f64));
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f11,28(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// bl 0x822da650
	ctx.lr = 0x823472E4;
	sub_822DA650(ctx, base);
	// lfs f10,132(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f9.f64 = double(temp.f32);
	// addi r11,r31,116
	ctx.r11.s64 = ctx.r31.s64 + 116;
	// fmuls f8,f10,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f9.f64));
	// lfs f7,136(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f6.f64 = double(temp.f32);
	// addi r30,r31,92
	ctx.r30.s64 = ctx.r31.s64 + 92;
	// lfs f5,128(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	ctx.f5.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f4,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,140(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f11,f7,f6,f8
	ctx.f11.f64 = double(float(ctx.f7.f64 * ctx.f6.f64 + ctx.f8.f64));
	// stfs f30,148(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f30,152(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f30,156(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// fmadds f10,f4,f5,f11
	ctx.f10.f64 = double(float(ctx.f4.f64 * ctx.f5.f64 + ctx.f11.f64));
	// stfs f10,116(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 116, temp.u32);
	// lfs f9,128(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,132(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,136(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f7,f3
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f3.f64));
	// fmadds f5,f2,f9,f6
	ctx.f5.f64 = double(float(ctx.f2.f64 * ctx.f9.f64 + ctx.f6.f64));
	// fmr f11,f10
	ctx.f11.f64 = ctx.f10.f64;
	// fmadds f4,f8,f1,f5
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f1.f64 + ctx.f5.f64));
	// stfs f4,120(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 120, temp.u32);
	// lfs f3,128(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,136(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f1,f2,f0
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// fmadds f13,f13,f3,f1
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f3.f64 + ctx.f1.f64));
	// lfs f0,132(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f12,f0,f12,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f12.f64 + ctx.f13.f64));
	// stfs f12,124(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 124, temp.u32);
	// lfs f10,92(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f9,f11,f31,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f31.f64 + ctx.f10.f64));
	// stfs f9,92(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 92, temp.u32);
	// lfs f8,120(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	ctx.f8.f64 = double(temp.f32);
	// addi r11,r11,-5928
	ctx.r11.s64 = ctx.r11.s64 + -5928;
	// lfs f7,96(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f6,f8,f31,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f31.f64 + ctx.f7.f64));
	// stfs f6,96(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 96, temp.u32);
	// fmr f2,f9
	ctx.f2.f64 = ctx.f9.f64;
	// lfs f5,100(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,124(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	ctx.f4.f64 = double(temp.f32);
	// fmadds f3,f4,f31,f5
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f31.f64 + ctx.f5.f64));
	// stfs f3,100(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 100, temp.u32);
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f9,f0
	ctx.cr6.compare(ctx.f9.f64, ctx.f0.f64);
	// bne cr6,0x823473d8
	if (!ctx.cr6.eq) goto loc_823473D8;
	// lfs f13,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x823473d8
	if (!ctx.cr6.eq) goto loc_823473D8;
	// lfs f13,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x82347404
	if (ctx.cr6.eq) goto loc_82347404;
loc_823473D8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82344558
	ctx.lr = 0x823473E0;
	sub_82344558(ctx, base);
	// lwz r11,176(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 176);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823473fc
	if (ctx.cr6.eq) goto loc_823473FC;
	// bl 0x823448f0
	ctx.lr = 0x823473F8;
	sub_823448F0(ctx, base);
	// b 0x82347404
	goto loc_82347404;
loc_823473FC:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82344a80
	ctx.lr = 0x82347404;
	sub_82344A80(ctx, base);
loc_82347404:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82347418
	if (ctx.cr6.eq) goto loc_82347418;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82347428
	if (!ctx.cr6.eq) goto loc_82347428;
loc_82347418:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82344ae0
	ctx.lr = 0x82347428;
	sub_82344AE0(ctx, base);
loc_82347428:
	// addi r5,r31,104
	ctx.r5.s64 = ctx.r31.s64 + 104;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822d6888
	ctx.lr = 0x82347438;
	sub_822D6888(ctx, base);
	// lfs f0,104(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// fabs f13,f0
	ctx.f13.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// stfs f13,576(r28)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r28.u32 + 576, temp.u32);
	// lis r11,-32032
	ctx.r11.s64 = -2099249152;
	// lwz r11,-5884(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5884);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82347484
	if (ctx.cr6.eq) goto loc_82347484;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,88(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f1,80(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f5,f30
	ctx.f5.f64 = ctx.f30.f64;
	// lfs f4,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f4.f64 = double(temp.f32);
	// lfs f0,5488(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5488);
	ctx.f0.f64 = double(temp.f32);
	// fmr f3,f4
	ctx.f3.f64 = ctx.f4.f64;
	// fmuls f2,f13,f0
	ctx.f2.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bl 0x823436e0
	ctx.lr = 0x82347484;
	sub_823436E0(ctx, base);
loc_82347484:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
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

PPC_WEAK_FUNC(sub_82347150) {
	__imp__sub_82347150(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82347498) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,528(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 528);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823474a8
	if (ctx.cr6.eq) goto loc_823474A8;
	// b 0x82354988
	sub_82354988(ctx, base);
	return;
loc_823474A8:
	// b 0x82347150
	sub_82347150(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82347498) {
	__imp__sub_82347498(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823474AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823474AC) {
	__imp__sub_823474AC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823474B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x823474B8;
	__savegprlr_29(ctx, base);
	// stfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f30.u64);
	// stfd f31,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r30,r3,216
	ctx.r30.s64 = ctx.r3.s64 + 216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r29,r30,24
	ctx.r29.s64 = ctx.r30.s64 + 24;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822da650
	ctx.lr = 0x823474DC;
	sub_822DA650(ctx, base);
	// lfs f5,228(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,216(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 216);
	ctx.f4.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fsubs f2,f4,f5
	ctx.f2.f64 = double(float(ctx.f4.f64 - ctx.f5.f64));
	// lfs f3,308(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 308);
	ctx.f3.f64 = double(temp.f32);
	// lfs f1,312(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	ctx.f1.f64 = double(temp.f32);
	// addi r11,r30,92
	ctx.r11.s64 = ctx.r30.s64 + 92;
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r30,116
	ctx.r11.s64 = ctx.r30.s64 + 116;
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// lfs f31,5996(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5996);
	ctx.f31.f64 = double(temp.f32);
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,316(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	ctx.f5.f64 = double(temp.f32);
	// stfs f2,308(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 308, temp.u32);
	// lfs f4,232(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	ctx.f4.f64 = double(temp.f32);
	// lfs f2,220(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	ctx.f2.f64 = double(temp.f32);
	// fsubs f4,f2,f4
	ctx.f4.f64 = double(float(ctx.f2.f64 - ctx.f4.f64));
	// stfs f4,312(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 312, temp.u32);
	// lfs f2,236(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	ctx.f2.f64 = double(temp.f32);
	// lfs f4,224(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f2,f4,f2
	ctx.f2.f64 = double(float(ctx.f4.f64 - ctx.f2.f64));
	// stfs f2,316(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 316, temp.u32);
	// lfs f4,308(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 308);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f2,f4,f31
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f31.f64));
	// stfs f2,308(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 308, temp.u32);
	// lfs f4,312(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f2,f4,f31
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f31.f64));
	// stfs f2,312(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 312, temp.u32);
	// lfs f4,316(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f2,f4,f31
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f31.f64));
	// stfs f2,316(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 316, temp.u32);
	// lfs f4,312(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	ctx.f4.f64 = double(temp.f32);
	// lfs f30,308(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 308);
	ctx.f30.f64 = double(temp.f32);
	// fmuls f30,f30,f0
	ctx.f30.f64 = double(float(ctx.f30.f64 * ctx.f0.f64));
	// fmadds f4,f4,f13,f30
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f13.f64 + ctx.f30.f64));
	// fmadds f2,f2,f12,f4
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f12.f64 + ctx.f4.f64));
	// stfs f2,320(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 320, temp.u32);
	// lfs f4,312(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	ctx.f4.f64 = double(temp.f32);
	// lfs f2,316(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	ctx.f2.f64 = double(temp.f32);
	// lfs f30,308(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 308);
	ctx.f30.f64 = double(temp.f32);
	// fmuls f30,f30,f11
	ctx.f30.f64 = double(float(ctx.f30.f64 * ctx.f11.f64));
	// fmadds f4,f4,f10,f30
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f10.f64 + ctx.f30.f64));
	// fmadds f2,f2,f9,f4
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f9.f64 + ctx.f4.f64));
	// stfs f2,324(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 324, temp.u32);
	// lfs f4,312(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	ctx.f4.f64 = double(temp.f32);
	// lfs f2,316(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	ctx.f2.f64 = double(temp.f32);
	// lfs f30,308(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 308);
	ctx.f30.f64 = double(temp.f32);
	// fmuls f30,f30,f8
	ctx.f30.f64 = double(float(ctx.f30.f64 * ctx.f8.f64));
	// fmadds f4,f4,f7,f30
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f7.f64 + ctx.f30.f64));
	// fmadds f2,f2,f6,f4
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f6.f64 + ctx.f4.f64));
	// stfs f2,328(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 328, temp.u32);
	// lfs f4,308(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 308);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f3,f4,f3
	ctx.f3.f64 = double(float(ctx.f4.f64 - ctx.f3.f64));
	// stfs f3,332(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 332, temp.u32);
	// lfs f2,312(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	ctx.f2.f64 = double(temp.f32);
	// fsubs f1,f2,f1
	ctx.f1.f64 = double(float(ctx.f2.f64 - ctx.f1.f64));
	// stfs f1,336(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 336, temp.u32);
	// lfs f4,316(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f3,f4,f5
	ctx.f3.f64 = double(float(ctx.f4.f64 - ctx.f5.f64));
	// stfs f3,340(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 340, temp.u32);
	// lfs f2,332(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 332);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f1,f2,f31
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f31.f64));
	// stfs f1,332(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 332, temp.u32);
	// lfs f5,336(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 336);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f5,f31
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f31.f64));
	// stfs f4,336(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 336, temp.u32);
	// lfs f3,340(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 340);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f2,f3,f31
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f31.f64));
	// stfs f2,340(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 340, temp.u32);
	// fmr f1,f4
	ctx.f1.f64 = ctx.f4.f64;
	// lfs f4,332(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 332);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f3,f4,f0
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// addi r5,r30,140
	ctx.r5.s64 = ctx.r30.s64 + 140;
	// fmr f5,f2
	ctx.f5.f64 = ctx.f2.f64;
	// addi r4,r30,36
	ctx.r4.s64 = ctx.r30.s64 + 36;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// fmadds f2,f1,f13,f3
	ctx.f2.f64 = double(float(ctx.f1.f64 * ctx.f13.f64 + ctx.f3.f64));
	// fmadds f1,f5,f12,f2
	ctx.f1.f64 = double(float(ctx.f5.f64 * ctx.f12.f64 + ctx.f2.f64));
	// stfs f1,344(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 344, temp.u32);
	// lfs f0,336(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 336);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,340(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 340);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,332(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 332);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f12,f11
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// fmadds f10,f0,f10,f11
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f10.f64 + ctx.f11.f64));
	// fmadds f9,f13,f9,f10
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f9.f64 + ctx.f10.f64));
	// stfs f9,348(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 348, temp.u32);
	// lfs f5,336(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 336);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,340(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 340);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,332(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 332);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f2,f8,f3
	ctx.f2.f64 = double(float(ctx.f8.f64 * ctx.f3.f64));
	// fmadds f1,f5,f7,f2
	ctx.f1.f64 = double(float(ctx.f5.f64 * ctx.f7.f64 + ctx.f2.f64));
	// fmadds f0,f4,f6,f1
	ctx.f0.f64 = double(float(ctx.f4.f64 * ctx.f6.f64 + ctx.f1.f64));
	// stfs f0,352(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 352, temp.u32);
	// bl 0x822d7700
	ctx.lr = 0x8234766C;
	sub_822D7700(ctx, base);
	// lfs f13,356(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 356);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f31
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// stfs f12,356(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 356, temp.u32);
	// lfs f11,360(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 360);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f11,f31
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// stfs f10,360(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 360, temp.u32);
	// lfs f9,364(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 364);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f9,f31
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f31.f64));
	// stfs f8,364(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 364, temp.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f30,-48(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823474B0) {
	__imp__sub_823474B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823476A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x823476A8;
	__savegprlr_29(ctx, base);
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x823de024
	ctx.lr = 0x823476B0;
	__savefpr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lfs f0,744(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 744);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,244(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 244);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r30,r3,216
	ctx.r30.s64 = ctx.r3.s64 + 216;
	// lfs f29,2420(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2420);
	ctx.f29.f64 = double(temp.f32);
	// lfs f31,2416(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2416);
	ctx.f31.f64 = double(temp.f32);
	// fmuls f27,f12,f29
	ctx.f27.f64 = double(float(ctx.f12.f64 * ctx.f29.f64));
	// fadds f1,f27,f31
	ctx.f1.f64 = double(float(ctx.f27.f64 + ctx.f31.f64));
	// bl 0x823dde20
	ctx.lr = 0x823476E8;
	sub_823DDE20(ctx, base);
	// frsp f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64));
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f28,2412(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2412);
	ctx.f28.f64 = double(temp.f32);
	// lfs f30,5484(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 5484);
	ctx.f30.f64 = double(temp.f32);
	// fsubs f10,f27,f11
	ctx.f10.f64 = double(float(ctx.f27.f64 - ctx.f11.f64));
	// fmuls f0,f10,f28
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f28.f64));
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// beq cr6,0x8234782c
	if (ctx.cr6.eq) goto loc_8234782C;
	// lfs f3,748(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 748);
	ctx.f3.f64 = double(temp.f32);
	// fcmpu cr6,f3,f30
	ctx.cr6.compare(ctx.f3.f64, ctx.f30.f64);
	// bne cr6,0x82347750
	if (!ctx.cr6.eq) goto loc_82347750;
	// lfs f13,32(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// fneg f12,f13
	ctx.f12.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// lfs f2,28(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	ctx.f2.f64 = double(temp.f32);
	// lfs f4,-23144(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -23144);
	ctx.f4.f64 = double(temp.f32);
	// fsel f11,f0,f13,f12
	ctx.f11.f64 = ctx.f0.f64 >= 0.0 ? ctx.f13.f64 : ctx.f12.f64;
	// stfs f11,144(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + 144, temp.u32);
	// lfs f3,32(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	ctx.f3.f64 = double(temp.f32);
	// lfs f1,744(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 744);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822d43f0
	ctx.lr = 0x82347740;
	sub_822D43F0(ctx, base);
	// stfs f1,28(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + 28, temp.u32);
	// lfs f10,744(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 744);
	ctx.f10.f64 = double(temp.f32);
	// fcmpu cr6,f1,f10
	ctx.cr6.compare(ctx.f1.f64, ctx.f10.f64);
	// b 0x82347828
	goto loc_82347828;
loc_82347750:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f2,144(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 144);
	ctx.f2.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f12,f13,f3
	ctx.f12.f64 = double(float(ctx.f13.f64 / ctx.f3.f64));
	// lfs f11,2424(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2424);
	ctx.f11.f64 = double(temp.f32);
	// fsel f13,f0,f13,f11
	ctx.f13.f64 = ctx.f0.f64 >= 0.0 ? ctx.f13.f64 : ctx.f11.f64;
	// fabs f0,f0
	ctx.f0.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fmuls f11,f2,f12
	ctx.f11.f64 = double(float(ctx.f2.f64 * ctx.f12.f64));
	// fmuls f10,f3,f11
	ctx.f10.f64 = double(float(ctx.f3.f64 * ctx.f11.f64));
	// fmuls f9,f10,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
	// fmuls f8,f9,f31
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f31.f64));
	// fcmpu cr6,f8,f0
	ctx.cr6.compare(ctx.f8.f64, ctx.f0.f64);
	// bge cr6,0x823477d8
	if (!ctx.cr6.lt) goto loc_823477D8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f0,32(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f30,-23144(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -23144);
	ctx.f30.f64 = double(temp.f32);
	// fmr f4,f30
	ctx.f4.f64 = ctx.f30.f64;
	// bl 0x822d43a8
	ctx.lr = 0x823477A0;
	sub_822D43A8(ctx, base);
	// lfs f13,28(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f12,f1,f30,f13
	ctx.f12.f64 = double(float(ctx.f1.f64 * ctx.f30.f64 + ctx.f13.f64));
	// stfs f1,144(r30)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + 144, temp.u32);
	// fmuls f30,f12,f29
	ctx.f30.f64 = double(float(ctx.f12.f64 * ctx.f29.f64));
	// fadds f1,f30,f31
	ctx.f1.f64 = double(float(ctx.f30.f64 + ctx.f31.f64));
	// bl 0x823dde20
	ctx.lr = 0x823477B8;
	sub_823DDE20(ctx, base);
	// frsp f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64));
	// fsubs f10,f30,f11
	ctx.f10.f64 = double(float(ctx.f30.f64 - ctx.f11.f64));
	// fmuls f9,f10,f28
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f28.f64));
	// stfs f9,28(r30)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r30.u32 + 28, temp.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x823de070
	ctx.lr = 0x823477D4;
	__restfpr_27(ctx, base);
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_823477D8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f2,28(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	ctx.f2.f64 = double(temp.f32);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lfs f11,5488(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5488);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// lfs f4,-23144(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -23144);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f12,f0,f12
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// fsqrts f11,f12
	ctx.f11.f64 = double(float(sqrt(ctx.f12.f64)));
	// fmuls f10,f11,f3
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f3.f64));
	// fmuls f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// stfs f9,144(r30)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r30.u32 + 144, temp.u32);
	// lfs f1,744(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 744);
	ctx.f1.f64 = double(temp.f32);
	// fabs f3,f9
	ctx.f3.u64 = ctx.f9.u64 & ~0x8000000000000000;
	// bl 0x822d43f0
	ctx.lr = 0x82347810;
	sub_822D43F0(ctx, base);
	// stfs f1,28(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + 28, temp.u32);
	// lfs f8,744(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 744);
	ctx.f8.f64 = double(temp.f32);
	// fcmpu cr6,f1,f8
	ctx.cr6.compare(ctx.f1.f64, ctx.f8.f64);
	// beq cr6,0x8234782c
	if (ctx.cr6.eq) goto loc_8234782C;
	// lfs f0,144(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 144);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
loc_82347828:
	// bne cr6,0x8234784c
	if (!ctx.cr6.eq) goto loc_8234784C;
loc_8234782C:
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-31961
	ctx.r10.s64 = -2094596096;
	// stw r11,740(r31)
	PPC_STORE_U32(ctx.r31.u32 + 740, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r9,r10,-25976
	ctx.r9.s64 = ctx.r10.s64 + -25976;
	// lhz r4,152(r9)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r9.u32 + 152);
	// bl 0x82229da8
	ctx.lr = 0x8234784C;
	sub_82229DA8(ctx, base);
loc_8234784C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x823de070
	ctx.lr = 0x82347858;
	__restfpr_27(ctx, base);
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823476A0) {
	__imp__sub_823476A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8234785C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8234785C) {
	__imp__sub_8234785C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82347860) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x82347868;
	__savegprlr_26(ctx, base);
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x823de010
	ctx.lr = 0x82347870;
	__savefpr_22(ctx, base);
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,560(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 560);
	// lis r10,-31816
	ctx.r10.s64 = -2085093376;
	// addi r28,r3,16
	ctx.r28.s64 = ctx.r3.s64 + 16;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r9,r10,-12608
	ctx.r9.s64 = ctx.r10.s64 + -12608;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,188
	ctx.r5.s64 = 188;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwzx r26,r8,r9
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// addi r29,r31,216
	ctx.r29.s64 = ctx.r31.s64 + 216;
	// bl 0x823de1f0
	ctx.lr = 0x823478A8;
	sub_823DE1F0(ctx, base);
	// lhz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// lfs f25,580(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 580);
	ctx.f25.f64 = double(temp.f32);
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// blt cr6,0x82347d60
	if (ctx.cr6.lt) goto loc_82347D60;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lwz r11,720(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 720);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lfs f26,-23144(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -23144);
	ctx.f26.f64 = double(temp.f32);
	// beq cr6,0x82347930
	if (ctx.cr6.eq) goto loc_82347930;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x823478e0
	if (!ctx.cr6.eq) goto loc_823478E0;
	// lfs f13,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// b 0x823478e4
	goto loc_823478E4;
loc_823478E0:
	// lfs f13,724(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 724);
	ctx.f13.f64 = double(temp.f32);
loc_823478E4:
	// lfs f0,728(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 728);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f25,f13
	ctx.cr6.compare(ctx.f25.f64, ctx.f13.f64);
	// bge cr6,0x82347900
	if (!ctx.cr6.lt) goto loc_82347900;
	// fmadds f0,f0,f26,f25
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f26.f64 + ctx.f25.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82347910
	if (!ctx.cr6.gt) goto loc_82347910;
	// b 0x8234790c
	goto loc_8234790C;
loc_82347900:
	// fnmsubs f0,f0,f26,f25
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(-(ctx.f0.f64 * ctx.f26.f64 - ctx.f25.f64)));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82347910
	if (!ctx.cr6.lt) goto loc_82347910;
loc_8234790C:
	// fmr f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f13.f64;
loc_82347910:
	// stfs f0,580(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 580, temp.u32);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82347938
	if (!ctx.cr6.eq) goto loc_82347938;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x82347938
	if (!ctx.cr6.eq) goto loc_82347938;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,720(r31)
	PPC_STORE_U32(ctx.r31.u32 + 720, ctx.r11.u32);
	// b 0x82347938
	goto loc_82347938;
loc_82347930:
	// lfs f0,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,580(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 580, temp.u32);
loc_82347938:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,476(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 476);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lfs f27,12168(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f27.f64 = double(temp.f32);
	// beq cr6,0x823479f0
	if (ctx.cr6.eq) goto loc_823479F0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821e5e70
	ctx.lr = 0x82347954;
	sub_821E5E70(ctx, base);
	// lfs f0,232(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 232);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// addi r5,r29,24
	ctx.r5.s64 = ctx.r29.s64 + 24;
	// lfs f13,236(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 236);
	ctx.f13.f64 = double(temp.f32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stfs f13,4(r29)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r29.u32 + 4, temp.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f12,240(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 240);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r29)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r29.u32 + 8, temp.u32);
	// lfs f11,244(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 244);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,24(r29)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r29.u32 + 24, temp.u32);
	// lfs f10,248(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 248);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,28(r29)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r29.u32 + 28, temp.u32);
	// lfs f9,252(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 252);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,32(r29)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r29.u32 + 32, temp.u32);
	// bl 0x82353360
	ctx.lr = 0x82347994;
	sub_82353360(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// lhz r5,126(r30)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r30.u32 + 126);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lhz r6,584(r31)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r31.u32 + 584);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82353620
	ctx.lr = 0x823479B0;
	sub_82353620(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r5,188
	ctx.r5.s64 = 188;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823de1f0
	ctx.lr = 0x823479C4;
	sub_823DE1F0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r11,r11,5484
	ctx.r11.s64 = ctx.r11.s64 + 5484;
	// lfs f28,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f28.f64 = double(temp.f32);
	// stfs f28,736(r31)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r31.u32 + 736, temp.u32);
	// bl 0x82353168
	ctx.lr = 0x823479DC;
	sub_82353168(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82347c70
	if (ctx.cr6.eq) goto loc_82347C70;
	// stfs f28,580(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r31.u32 + 580, temp.u32);
	// b 0x82347c70
	goto loc_82347C70;
loc_823479F0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r11,5484
	ctx.r11.s64 = ctx.r11.s64 + 5484;
	// lfs f28,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f28.f64 = double(temp.f32);
	// fcmpu cr6,f0,f28
	ctx.cr6.compare(ctx.f0.f64, ctx.f28.f64);
	// ble cr6,0x82347a20
	if (!ctx.cr6.gt) goto loc_82347A20;
	// lfs f13,580(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 580);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// lfs f11,736(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 736);
	ctx.f11.f64 = double(temp.f32);
	// fadds f10,f12,f11
	ctx.f10.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// stfs f10,736(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 736, temp.u32);
	// b 0x82347a24
	goto loc_82347A24;
loc_82347A20:
	// stfs f28,736(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r31.u32 + 736, temp.u32);
loc_82347A24:
	// lfs f0,736(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 736);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f27
	ctx.cr6.compare(ctx.f0.f64, ctx.f27.f64);
	// blt cr6,0x82347a54
	if (ctx.cr6.lt) goto loc_82347A54;
loc_82347A30:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,204(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// bl 0x82353178
	ctx.lr = 0x82347A3C;
	sub_82353178(ctx, base);
	// lfs f0,736(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 736);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f0,f27
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f27.f64));
	// stfs f13,736(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 736, temp.u32);
	// fmr f12,f13
	ctx.f12.f64 = ctx.f13.f64;
	// fcmpu cr6,f13,f27
	ctx.cr6.compare(ctx.f13.f64, ctx.f27.f64);
	// bge cr6,0x82347a30
	if (!ctx.cr6.lt) goto loc_82347A30;
loc_82347A54:
	// li r7,0
	ctx.r7.s64 = 0;
	// lhz r5,126(r30)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r30.u32 + 126);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r8,204(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lhz r6,584(r31)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r31.u32 + 584);
	// bl 0x82353620
	ctx.lr = 0x82347A70;
	sub_82353620(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r5,188
	ctx.r5.s64 = 188;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823de1f0
	ctx.lr = 0x82347A84;
	sub_823DE1F0(ctx, base);
	// lfs f0,736(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 736);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f28
	ctx.cr6.compare(ctx.f0.f64, ctx.f28.f64);
	// ble cr6,0x82347a9c
	if (!ctx.cr6.gt) goto loc_82347A9C;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,204(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// bl 0x82353178
	ctx.lr = 0x82347A9C;
	sub_82353178(ctx, base);
loc_82347A9C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82353168
	ctx.lr = 0x82347AA4;
	sub_82353168(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82347ab4
	if (ctx.cr6.eq) goto loc_82347AB4;
	// stfs f28,580(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r31.u32 + 580, temp.u32);
loc_82347AB4:
	// lfs f0,32(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f11,736(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 736);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f8,f12,f11,f0
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f11.f64 + ctx.f0.f64));
	// stfs f8,0(r29)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// lfs f7,736(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 736);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f5,f10,f6
	ctx.f5.f64 = double(float(ctx.f10.f64 - ctx.f6.f64));
	// fmadds f4,f5,f7,f6
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f7.f64 + ctx.f6.f64));
	// stfs f4,4(r29)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r29.u32 + 4, temp.u32);
	// lfs f3,736(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 736);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,40(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f2.f64 = double(temp.f32);
	// fsubs f1,f9,f2
	ctx.f1.f64 = double(float(ctx.f9.f64 - ctx.f2.f64));
	// fmadds f0,f1,f3,f2
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f3.f64 + ctx.f2.f64));
	// stfs f0,8(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 8, temp.u32);
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82347b24
	if (!ctx.cr6.eq) goto loc_82347B24;
	// lwz r11,740(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 740);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82347b24
	if (ctx.cr6.eq) goto loc_82347B24;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823476a0
	ctx.lr = 0x82347B20;
	sub_823476A0(ctx, base);
	// b 0x82347c40
	goto loc_82347C40;
loc_82347B24:
	// lfs f24,44(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	ctx.f24.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fsubs f13,f0,f24
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f24.f64));
	// lfs f23,736(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 736);
	ctx.f23.f64 = double(temp.f32);
	// lfs f31,2420(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2420);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,2416(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2416);
	ctx.f30.f64 = double(temp.f32);
	// fmuls f22,f13,f31
	ctx.f22.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// fadds f1,f22,f30
	ctx.f1.f64 = double(float(ctx.f22.f64 + ctx.f30.f64));
	// bl 0x823dde20
	ctx.lr = 0x82347B50;
	sub_823DDE20(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f11,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f11.f64 = double(temp.f32);
	// lfs f29,2412(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2412);
	ctx.f29.f64 = double(temp.f32);
	// fsubs f10,f22,f12
	ctx.f10.f64 = double(float(ctx.f22.f64 - ctx.f12.f64));
	// fmuls f9,f10,f23
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f23.f64));
	// fmadds f8,f9,f29,f24
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f29.f64 + ctx.f24.f64));
	// stfs f8,24(r29)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r29.u32 + 24, temp.u32);
	// lfs f23,48(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f23.f64 = double(temp.f32);
	// fsubs f7,f11,f23
	ctx.f7.f64 = double(float(ctx.f11.f64 - ctx.f23.f64));
	// fmuls f22,f7,f31
	ctx.f22.f64 = double(float(ctx.f7.f64 * ctx.f31.f64));
	// lfs f24,736(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 736);
	ctx.f24.f64 = double(temp.f32);
	// fadds f1,f22,f30
	ctx.f1.f64 = double(float(ctx.f22.f64 + ctx.f30.f64));
	// bl 0x823dde20
	ctx.lr = 0x82347B88;
	sub_823DDE20(ctx, base);
	// frsp f6,f1
	ctx.fpscr.disableFlushMode();
	ctx.f6.f64 = double(float(ctx.f1.f64));
	// lfs f5,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f4,f22,f6
	ctx.f4.f64 = double(float(ctx.f22.f64 - ctx.f6.f64));
	// fmuls f3,f4,f24
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f24.f64));
	// fmadds f2,f3,f29,f23
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f29.f64 + ctx.f23.f64));
	// stfs f2,28(r29)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r29.u32 + 28, temp.u32);
	// lfs f24,52(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	ctx.f24.f64 = double(temp.f32);
	// fsubs f1,f5,f24
	ctx.f1.f64 = double(float(ctx.f5.f64 - ctx.f24.f64));
	// fmuls f31,f1,f31
	ctx.f31.f64 = double(float(ctx.f1.f64 * ctx.f31.f64));
	// lfs f23,736(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 736);
	ctx.f23.f64 = double(temp.f32);
	// fadds f1,f31,f30
	ctx.f1.f64 = double(float(ctx.f31.f64 + ctx.f30.f64));
	// bl 0x823dde20
	ctx.lr = 0x82347BB8;
	sub_823DDE20(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fsubs f13,f31,f0
	ctx.f13.f64 = double(float(ctx.f31.f64 - ctx.f0.f64));
	// fmuls f12,f13,f23
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f23.f64));
	// fmadds f11,f12,f29,f24
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f29.f64 + ctx.f24.f64));
	// stfs f11,32(r29)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r29.u32 + 32, temp.u32);
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// bne cr6,0x82347bec
	if (!ctx.cr6.eq) goto loc_82347BEC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,28(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,5812(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5812);
	ctx.f0.f64 = double(temp.f32);
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f12,28(r29)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r29.u32 + 28, temp.u32);
loc_82347BEC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f2,36(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,24(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	ctx.f1.f64 = double(temp.f32);
	// fmr f4,f26
	ctx.f4.f64 = ctx.f26.f64;
	// lfs f31,23112(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 23112);
	ctx.f31.f64 = double(temp.f32);
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// bl 0x822d4508
	ctx.lr = 0x82347C08;
	sub_822D4508(ctx, base);
	// stfs f1,24(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 24, temp.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f2,40(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	ctx.f2.f64 = double(temp.f32);
	// fmr f4,f26
	ctx.f4.f64 = ctx.f26.f64;
	// lfs f1,28(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	ctx.f1.f64 = double(temp.f32);
	// lfs f3,7540(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 7540);
	ctx.f3.f64 = double(temp.f32);
	// bl 0x822d4508
	ctx.lr = 0x82347C24;
	sub_822D4508(ctx, base);
	// stfs f1,28(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 28, temp.u32);
	// lfs f2,44(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 44);
	ctx.f2.f64 = double(temp.f32);
	// fmr f4,f26
	ctx.f4.f64 = ctx.f26.f64;
	// lfs f1,32(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	ctx.f1.f64 = double(temp.f32);
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// bl 0x822d4508
	ctx.lr = 0x82347C3C;
	sub_822D4508(ctx, base);
	// stfs f1,32(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 32, temp.u32);
loc_82347C40:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82347c54
	if (ctx.cr6.eq) goto loc_82347C54;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82347c70
	if (!ctx.cr6.eq) goto loc_82347C70;
loc_82347C54:
	// lwz r11,528(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 528);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82347c70
	if (!ctx.cr6.eq) goto loc_82347C70;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82344ae0
	ctx.lr = 0x82347C70;
	sub_82344AE0(ctx, base);
loc_82347C70:
	// lis r11,-32032
	ctx.r11.s64 = -2099249152;
	// lwz r11,-5884(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5884);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82347cbc
	if (ctx.cr6.eq) goto loc_82347CBC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f4,f27
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f27.f64;
	// addi r3,r31,56
	ctx.r3.s64 = ctx.r31.s64 + 56;
	// fmr f3,f27
	ctx.f3.f64 = ctx.f27.f64;
	// fmr f2,f28
	ctx.f2.f64 = ctx.f28.f64;
	// lfs f31,6016(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6016);
	ctx.f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82343668
	ctx.lr = 0x82347CA4;
	sub_82343668(ctx, base);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// fmr f4,f27
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f27.f64;
	// fmr f3,f28
	ctx.f3.f64 = ctx.f28.f64;
	// fmr f2,f27
	ctx.f2.f64 = ctx.f27.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82343668
	ctx.lr = 0x82347CBC;
	sub_82343668(ctx, base);
loc_82347CBC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823474b0
	ctx.lr = 0x82347CC4;
	sub_823474B0(ctx, base);
	// clrlwi r10,r27,24
	ctx.r10.u64 = ctx.r27.u32 & 0xFF;
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// addi r29,r11,-25976
	ctx.r29.s64 = ctx.r11.s64 + -25976;
	// beq cr6,0x82347cf8
	if (ctx.cr6.eq) goto loc_82347CF8;
	// lhz r11,584(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 584);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// ble cr6,0x82347cf8
	if (!ctx.cr6.gt) goto loc_82347CF8;
	// li r5,0
	ctx.r5.s64 = 0;
	// lhz r4,366(r29)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r29.u32 + 366);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82229da8
	ctx.lr = 0x82347CF8;
	sub_82229DA8(ctx, base);
loc_82347CF8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82353168
	ctx.lr = 0x82347D00;
	sub_82353168(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82347d1c
	if (ctx.cr6.eq) goto loc_82347D1C;
	// li r5,0
	ctx.r5.s64 = 0;
	// lhz r4,364(r29)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r29.u32 + 364);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82229da8
	ctx.lr = 0x82347D1C;
	sub_82229DA8(ctx, base);
loc_82347D1C:
	// lfs f0,588(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 588);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f28
	ctx.cr6.compare(ctx.f0.f64, ctx.f28.f64);
	// blt cr6,0x82347d60
	if (ctx.cr6.lt) goto loc_82347D60;
	// fcmpu cr6,f25,f0
	ctx.cr6.compare(ctx.f25.f64, ctx.f0.f64);
	// bgt cr6,0x82347d3c
	if (ctx.cr6.gt) goto loc_82347D3C;
	// lfs f13,580(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 580);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82347d50
	if (!ctx.cr6.lt) goto loc_82347D50;
loc_82347D3C:
	// fcmpu cr6,f25,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f25.f64, ctx.f0.f64);
	// blt cr6,0x82347d60
	if (ctx.cr6.lt) goto loc_82347D60;
	// lfs f13,580(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 580);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x82347d60
	if (ctx.cr6.gt) goto loc_82347D60;
loc_82347D50:
	// li r5,0
	ctx.r5.s64 = 0;
	// lhz r4,368(r29)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r29.u32 + 368);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82229da8
	ctx.lr = 0x82347D60;
	sub_82229DA8(ctx, base);
loc_82347D60:
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x823de05c
	ctx.lr = 0x82347D6C;
	__restfpr_22(ctx, base);
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82347860) {
	__imp__sub_82347860(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82347D70) {
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
	// bl 0x82347860
	ctx.lr = 0x82347D88;
	sub_82347860(ctx, base);
	// lwz r3,528(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 528);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82347da8
	if (ctx.cr6.eq) goto loc_82347DA8;
	// addi r5,r31,308
	ctx.r5.s64 = ctx.r31.s64 + 308;
	// lfs f2,360(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 360);
	ctx.f2.f64 = double(temp.f32);
	// addi r4,r31,216
	ctx.r4.s64 = ctx.r31.s64 + 216;
	// lfs f1,244(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8225de58
	ctx.lr = 0x82347DA8;
	sub_8225DE58(ctx, base);
loc_82347DA8:
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

PPC_WEAK_FUNC(sub_82347D70) {
	__imp__sub_82347D70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82347DBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82347DBC) {
	__imp__sub_82347DBC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82347DC0) {
	PPC_FUNC_PROLOGUE();
	// b 0x82354c78
	sub_82354C78(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82347DC0) {
	__imp__sub_82347DC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82347DC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82347DC4) {
	__imp__sub_82347DC4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82347DC8) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r31,r3,216
	ctx.r31.s64 = ctx.r3.s64 + 216;
	// lfs f0,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,576(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 576, temp.u32);
	// stfs f0,580(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 580, temp.u32);
	// stfs f0,308(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 308, temp.u32);
	// stfs f0,312(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 312, temp.u32);
	// stfs f0,316(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 316, temp.u32);
	// stfs f0,320(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 320, temp.u32);
	// stfs f0,324(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 324, temp.u32);
	// stfs f0,328(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 328, temp.u32);
	// stfs f0,332(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 332, temp.u32);
	// stfs f0,336(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 336, temp.u32);
	// stfs f0,340(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 340, temp.u32);
	// stfs f0,344(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 344, temp.u32);
	// stfs f0,348(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 348, temp.u32);
	// stfs f0,352(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 352, temp.u32);
	// stfs f0,356(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 356, temp.u32);
	// stfs f0,360(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 360, temp.u32);
	// stfs f0,364(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 364, temp.u32);
	// lwz r10,476(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 476);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82347e74
	if (ctx.cr6.eq) goto loc_82347E74;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821e5e70
	ctx.lr = 0x82347E44;
	sub_821E5E70(ctx, base);
	// lfs f0,232(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 232);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// lfs f13,236(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 236);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// lfs f12,240(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 240);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// lfs f11,244(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 244);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,24(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// lfs f10,248(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 248);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,28(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// lfs f9,252(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 252);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,32(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
loc_82347E74:
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

PPC_WEAK_FUNC(sub_82347DC8) {
	__imp__sub_82347DC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82347E8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82347E8C) {
	__imp__sub_82347E8C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82347E90) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,528(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 528);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82347ea0
	if (ctx.cr6.eq) goto loc_82347EA0;
	// b 0x82354bd8
	sub_82354BD8(ctx, base);
	return;
loc_82347EA0:
	// b 0x82347dc8
	sub_82347DC8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82347E90) {
	__imp__sub_82347E90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82347EA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82347EA4) {
	__imp__sub_82347EA4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82347EA8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,276(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	// lis r10,-31816
	ctx.r10.s64 = -2085093376;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r10,-12608
	ctx.r8.s64 = ctx.r10.s64 + -12608;
	// lwz r7,560(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 560);
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r6,r8
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r8.u32);
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// lwz r4,4(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// cmpwi cr6,r4,5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 5, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// b 0x8234e168
	sub_8234E168(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82347EA8) {
	__imp__sub_82347EA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82347ED8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82347ED8) {
	__imp__sub_82347ED8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82347EDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82347EDC) {
	__imp__sub_82347EDC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82347EE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82347EE8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,264(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 264);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r28,276(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r11,172(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 172);
	// rlwinm r10,r11,0,11,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82347f1c
	if (ctx.cr6.eq) goto loc_82347F1C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,-13016
	ctx.r4.s64 = ctx.r11.s64 + -13016;
	// bl 0x822830e8
	ctx.lr = 0x82347F1C;
	sub_822830E8(ctx, base);
loc_82347F1C:
	// lhz r11,256(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 256);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82347f38
	if (ctx.cr6.eq) goto loc_82347F38;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,-13068
	ctx.r4.s64 = ctx.r11.s64 + -13068;
	// bl 0x822830e8
	ctx.lr = 0x82347F38;
	sub_822830E8(ctx, base);
loc_82347F38:
	// lhz r11,256(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 256);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82347f54
	if (ctx.cr6.eq) goto loc_82347F54;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,-13124
	ctx.r4.s64 = ctx.r11.s64 + -13124;
	// bl 0x822830e8
	ctx.lr = 0x82347F54;
	sub_822830E8(ctx, base);
loc_82347F54:
	// lwz r11,884(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 884);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x82347f70
	if (!ctx.cr6.lt) goto loc_82347F70;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,-13200
	ctx.r4.s64 = ctx.r11.s64 + -13200;
	// bl 0x822830e8
	ctx.lr = 0x82347F70;
	sub_822830E8(ctx, base);
loc_82347F70:
	// lwz r11,172(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 172);
	// rlwinm r10,r11,0,20,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC00;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82347f9c
	if (ctx.cr6.eq) goto loc_82347F9C;
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// lwz r10,364(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 364);
	// addi r9,r11,9624
	ctx.r9.s64 = ctx.r11.s64 + 9624;
	// mulli r10,r10,624
	ctx.r10.s64 = ctx.r10.s64 * 624;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82247108
	ctx.lr = 0x82347F9C;
	sub_82247108(ctx, base);
loc_82347F9C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82347EE0) {
	__imp__sub_82347EE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82347FA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82347FA4) {
	__imp__sub_82347FA4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82347FA8) {
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
	// bl 0x82347ee0
	ctx.lr = 0x82347FC8;
	sub_82347EE0(ctx, base);
	// lwz r11,276(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// oris r8,r9,512
	ctx.r8.u64 = ctx.r9.u64 | 33554432;
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// lhz r7,126(r30)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r30.u32 + 126);
	// lwz r6,780(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 780);
	// cmpw cr6,r6,r7
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x82348008
	if (!ctx.cr6.eq) goto loc_82348008;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,2047
	ctx.r9.s64 = 2047;
	// stw r10,760(r11)
	PPC_STORE_U32(ctx.r11.u32 + 760, ctx.r10.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r9,780(r11)
	PPC_STORE_U32(ctx.r11.u32 + 780, ctx.r9.u32);
	// addi r3,r11,784
	ctx.r3.s64 = ctx.r11.s64 + 784;
	// bl 0x821e2e18
	ctx.lr = 0x82348008;
	sub_821E2E18(ctx, base);
loc_82348008:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,256
	ctx.r3.s64 = ctx.r31.s64 + 256;
	// oris r10,r11,16
	ctx.r10.u64 = ctx.r11.u64 | 1048576;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// bl 0x821e2e18
	ctx.lr = 0x82348020;
	sub_821E2E18(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r30,256
	ctx.r3.s64 = ctx.r30.s64 + 256;
	// bl 0x821e2e18
	ctx.lr = 0x8234802C;
	sub_821E2E18(ctx, base);
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

PPC_WEAK_FUNC(sub_82347FA8) {
	__imp__sub_82347FA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82348044) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82348044) {
	__imp__sub_82348044(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82348048) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x82348050;
	__savegprlr_25(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r28,276(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	// lis r11,-31816
	ctx.r11.s64 = -2085093376;
	// lwz r30,264(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 264);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-12608
	ctx.r10.s64 = ctx.r11.s64 + -12608;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r9,560(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 560);
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r25,r8,r10
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// bl 0x82347ee0
	ctx.lr = 0x8234807C;
	sub_82347EE0(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r4,884(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 884);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222edc8
	ctx.lr = 0x8234808C;
	sub_8222EDC8(ctx, base);
	// lwz r4,908(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 908);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x823480ac
	if (ctx.cr6.lt) goto loc_823480AC;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222edc8
	ctx.lr = 0x823480A4;
	sub_8222EDC8(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// b 0x823480b0
	goto loc_823480B0;
loc_823480AC:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
loc_823480B0:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x822d7c78
	ctx.lr = 0x823480B8;
	sub_822D7C78(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r27,r11,-5928
	ctx.r27.s64 = ctx.r11.s64 + -5928;
	// lfs f0,5484(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x823480f0
	if (ctx.cr6.eq) goto loc_823480F0;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x823480f0
	if (ctx.cr6.eq) goto loc_823480F0;
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821e6828
	ctx.lr = 0x823480EC;
	sub_821E6828(ctx, base);
	// b 0x823480fc
	goto loc_823480FC;
loc_823480F0:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821e6960
	ctx.lr = 0x823480FC;
	sub_821E6960(ctx, base);
loc_823480FC:
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// addi r26,r11,-25976
	ctx.r26.s64 = ctx.r11.s64 + -25976;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lhz r5,222(r26)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r26.u32 + 222);
	// bl 0x82234080
	ctx.lr = 0x8234811C;
	sub_82234080(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82348134
	if (!ctx.cr6.eq) goto loc_82348134;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,-12956
	ctx.r4.s64 = ctx.r11.s64 + -12956;
	// bl 0x822830e8
	ctx.lr = 0x82348134;
	sub_822830E8(ctx, base);
loc_82348134:
	// lhz r11,126(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 126);
	// lwz r10,780(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 780);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82348160
	if (!ctx.cr6.eq) goto loc_82348160;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,2047
	ctx.r10.s64 = 2047;
	// stw r11,760(r28)
	PPC_STORE_U32(ctx.r28.u32 + 760, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r10,780(r28)
	PPC_STORE_U32(ctx.r28.u32 + 780, ctx.r10.u32);
	// addi r3,r28,784
	ctx.r3.s64 = ctx.r28.s64 + 784;
	// bl 0x821e2e18
	ctx.lr = 0x82348160;
	sub_821E2E18(ctx, base);
loc_82348160:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82348174
	if (!ctx.cr6.eq) goto loc_82348174;
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r11,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r11.u32);
loc_82348174:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r31,256
	ctx.r3.s64 = ctx.r31.s64 + 256;
	// oris r10,r11,16
	ctx.r10.u64 = ctx.r11.u64 | 1048576;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// bl 0x821e2e18
	ctx.lr = 0x8234818C;
	sub_821E2E18(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r29,256
	ctx.r3.s64 = ctx.r29.s64 + 256;
	// bl 0x821e2e18
	ctx.lr = 0x82348198;
	sub_821E2E18(ctx, base);
	// lwz r5,172(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 172);
	// li r9,9
	ctx.r9.s64 = 9;
	// lis r8,0
	ctx.r8.s64 = 0;
	// rlwimi r5,r9,20,11,11
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r9.u32, 20) & 0x100000) | (ctx.r5.u64 & 0xFFFFFFFFFFEFFFFF);
	// ori r6,r8,44465
	ctx.r6.u64 = ctx.r8.u64 | 44465;
	// rlwimi r5,r9,20,7,8
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r9.u32, 20) & 0x1800000) | (ctx.r5.u64 & 0xFFFFFFFFFE7FFFFF);
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r5,172(r30)
	PPC_STORE_U32(ctx.r30.u32 + 172, ctx.r5.u32);
	// addis r27,r30,1
	ctx.r27.s64 = ctx.r30.s64 + 65536;
	// lhz r4,126(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 126);
	// stw r4,364(r30)
	PPC_STORE_U32(ctx.r30.u32 + 364, ctx.r4.u32);
	// addi r27,r27,-21064
	ctx.r27.s64 = ctx.r27.s64 + -21064;
	// stbx r7,r30,r6
	PPC_STORE_U8(ctx.r30.u32 + ctx.r6.u32, ctx.r7.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// stw r11,400(r30)
	PPC_STORE_U32(ctx.r30.u32 + 400, ctx.r11.u32);
	// bl 0x82232fb0
	ctx.lr = 0x823481DC;
	sub_82232FB0(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82232fd8
	ctx.lr = 0x823481E4;
	sub_82232FD8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822331b0
	ctx.lr = 0x823481F0;
	sub_822331B0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82229b60
	ctx.lr = 0x823481F8;
	sub_82229B60(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// lhz r4,420(r26)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r26.u32 + 420);
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x82229da8
	ctx.lr = 0x82348208;
	sub_82229DA8(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82348048) {
	__imp__sub_82348048(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82348210) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x82348218;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r28,276(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r29,264(r4)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r4.u32 + 264);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r9,r10,0,6,6
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2000000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82348274
	if (ctx.cr6.eq) goto loc_82348274;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r9,r10,0,7,5
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFDFFFFFF;
	// addi r3,r3,256
	ctx.r3.s64 = ctx.r3.s64 + 256;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bl 0x821e2e18
	ctx.lr = 0x8234825C;
	sub_821E2E18(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r30,256
	ctx.r3.s64 = ctx.r30.s64 + 256;
	// bl 0x821e2e18
	ctx.lr = 0x82348268;
	sub_821E2E18(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_82348274:
	// lwz r11,172(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 172);
	// rlwinm r10,r11,0,11,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82348294
	if (!ctx.cr6.eq) goto loc_82348294;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,-12740
	ctx.r4.s64 = ctx.r11.s64 + -12740;
	// bl 0x822830e8
	ctx.lr = 0x82348294;
	sub_822830E8(ctx, base);
loc_82348294:
	// lhz r11,256(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 256);
	// addi r27,r30,256
	ctx.r27.s64 = ctx.r30.s64 + 256;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823482b4
	if (!ctx.cr6.eq) goto loc_823482B4;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,-12788
	ctx.r4.s64 = ctx.r11.s64 + -12788;
	// bl 0x822830e8
	ctx.lr = 0x823482B4;
	sub_822830E8(ctx, base);
loc_823482B4:
	// lhz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r27.u32 + 0);
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,26552
	ctx.r10.s64 = ctx.r10.s64 + 26552;
	// mulli r11,r9,624
	ctx.r11.s64 = ctx.r9.s64 * 624;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r8,r31
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x823482e4
	if (ctx.cr6.eq) goto loc_823482E4;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,-12840
	ctx.r4.s64 = ctx.r11.s64 + -12840;
	// bl 0x822830e8
	ctx.lr = 0x823482E4;
	sub_822830E8(ctx, base);
loc_823482E4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822340e0
	ctx.lr = 0x823482EC;
	sub_822340E0(ctx, base);
	// lwz r4,888(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 888);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bge cr6,0x82348338
	if (!ctx.cr6.lt) goto loc_82348338;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r3,15
	ctx.r3.s64 = 15;
	// addi r4,r11,-12896
	ctx.r4.s64 = ctx.r11.s64 + -12896;
	// bl 0x82280c30
	ctx.lr = 0x82348308;
	sub_82280C30(ctx, base);
	// lfs f0,240(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,232(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,236(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f11,304(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 304);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,292(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 292);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 + ctx.f10.f64));
	// fadds f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 + ctx.f0.f64));
	// stfs f8,88(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// b 0x82348344
	goto loc_82348344;
loc_82348338:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222eee0
	ctx.lr = 0x82348344;
	sub_8222EEE0(ctx, base);
loc_82348344:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x82348358
	if (!ctx.cr6.eq) goto loc_82348358;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r11.u32);
loc_82348358:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,264(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 264);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f13,268(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 268);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lfs f31,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f31.f64 = double(temp.f32);
	// stfs f31,104(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x821e6828
	ctx.lr = 0x82348380;
	sub_821E6828(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821e6960
	ctx.lr = 0x8234838C;
	sub_821E6960(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stfs f31,244(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 244, temp.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r9,r10,0,12,10
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFEFFFFF;
	// addi r3,r31,256
	ctx.r3.s64 = ctx.r31.s64 + 256;
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
	// bl 0x821e2e18
	ctx.lr = 0x823483A8;
	sub_821E2E18(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821e2e18
	ctx.lr = 0x823483B4;
	sub_821E2E18(ctx, base);
	// lwz r5,172(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 172);
	// lis r8,0
	ctx.r8.s64 = 0;
	// rlwinm r4,r5,0,12,10
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFFFFFEFFFFF;
	// ori r6,r8,44468
	ctx.r6.u64 = ctx.r8.u64 | 44468;
	// rlwinm r4,r4,0,9,6
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFFFE7FFFFF;
	// li r7,2047
	ctx.r7.s64 = 2047;
	// stw r4,172(r29)
	PPC_STORE_U32(ctx.r29.u32 + 172, ctx.r4.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,264(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 264);
	// stfsx f31,r11,r6
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r6.u32, temp.u32);
	// stw r7,364(r29)
	PPC_STORE_U32(ctx.r29.u32 + 364, ctx.r7.u32);
	// bl 0x82229b60
	ctx.lr = 0x823483E4;
	sub_82229B60(ctx, base);
	// lis r10,-31961
	ctx.r10.s64 = -2094596096;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r9,r10,-25976
	ctx.r9.s64 = ctx.r10.s64 + -25976;
	// lhz r4,422(r9)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r9.u32 + 422);
	// bl 0x82229da8
	ctx.lr = 0x823483FC;
	sub_82229DA8(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82348210) {
	__imp__sub_82348210(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82348408) {
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
	// lis r11,-31816
	ctx.r11.s64 = -2085093376;
	// addi r30,r11,-1312
	ctx.r30.s64 = ctx.r11.s64 + -1312;
	// addi r31,r30,528
	ctx.r31.s64 = ctx.r30.s64 + 528;
loc_82348428:
	// lwz r11,-528(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -528);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8234844c
	if (ctx.cr6.eq) goto loc_8234844C;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8234844c
	if (ctx.cr6.eq) goto loc_8234844C;
	// bl 0x8225b730
	ctx.lr = 0x82348444;
	sub_8225B730(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8225b270
	ctx.lr = 0x8234844C;
	sub_8225B270(ctx, base);
loc_8234844C:
	// addis r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 65536;
	// addi r31,r31,972
	ctx.r31.s64 = ctx.r31.s64 + 972;
	// addi r11,r11,-2800
	ctx.r11.s64 = ctx.r11.s64 + -2800;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82348428
	if (ctx.cr6.lt) goto loc_82348428;
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

PPC_WEAK_FUNC(sub_82348408) {
	__imp__sub_82348408(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82348478) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82348480;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r30,r11,-25976
	ctx.r30.s64 = ctx.r11.s64 + -25976;
	// lhz r4,222(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 222);
	// bl 0x8233d278
	ctx.lr = 0x8234849C;
	sub_8233D278(ctx, base);
	// stw r3,884(r31)
	PPC_STORE_U32(ctx.r31.u32 + 884, ctx.r3.u32);
	// lhz r4,384(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 384);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8233d278
	ctx.lr = 0x823484AC;
	sub_8233D278(ctx, base);
	// stw r3,888(r31)
	PPC_STORE_U32(ctx.r31.u32 + 888, ctx.r3.u32);
	// lhz r4,386(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 386);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8233d278
	ctx.lr = 0x823484BC;
	sub_8233D278(ctx, base);
	// stw r3,892(r31)
	PPC_STORE_U32(ctx.r31.u32 + 892, ctx.r3.u32);
	// lhz r4,388(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 388);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8233d278
	ctx.lr = 0x823484CC;
	sub_8233D278(ctx, base);
	// stw r3,896(r31)
	PPC_STORE_U32(ctx.r31.u32 + 896, ctx.r3.u32);
	// lhz r4,390(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 390);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8233d278
	ctx.lr = 0x823484DC;
	sub_8233D278(ctx, base);
	// stw r3,900(r31)
	PPC_STORE_U32(ctx.r31.u32 + 900, ctx.r3.u32);
	// lhz r4,394(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 394);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8233d278
	ctx.lr = 0x823484EC;
	sub_8233D278(ctx, base);
	// stw r3,908(r31)
	PPC_STORE_U32(ctx.r31.u32 + 908, ctx.r3.u32);
	// lhz r4,392(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 392);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8233d278
	ctx.lr = 0x823484FC;
	sub_8233D278(ctx, base);
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// stw r3,904(r31)
	PPC_STORE_U32(ctx.r31.u32 + 904, ctx.r3.u32);
	// addi r28,r31,908
	ctx.r28.s64 = ctx.r31.s64 + 908;
	// addi r29,r11,-32252
	ctx.r29.s64 = ctx.r11.s64 + -32252;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_82348510:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lhz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// bl 0x8233d278
	ctx.lr = 0x82348520;
	sub_8233D278(ctx, base);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// stwu r3,4(r28)
	ea = 4 + ctx.r28.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r28.u32 = ea;
	// addi r10,r29,20
	ctx.r10.s64 = ctx.r29.s64 + 20;
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82348510
	if (ctx.cr6.lt) goto loc_82348510;
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r29,r31,928
	ctx.r29.s64 = ctx.r31.s64 + 928;
	// addi r28,r11,-32276
	ctx.r28.s64 = ctx.r11.s64 + -32276;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_82348544:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lhz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// bl 0x8233d278
	ctx.lr = 0x82348554;
	sub_8233D278(ctx, base);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// stwu r3,4(r29)
	ea = 4 + ctx.r29.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r29.u32 = ea;
	// addi r10,r28,24
	ctx.r10.s64 = ctx.r28.s64 + 24;
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82348544
	if (ctx.cr6.lt) goto loc_82348544;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82348478) {
	__imp__sub_82348478(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82348570) {
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
	// addi r30,r3,216
	ctx.r30.s64 = ctx.r3.s64 + 216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r5,312
	ctx.r5.s64 = 312;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822dd778
	ctx.lr = 0x8234859C;
	sub_822DD778(ctx, base);
	// li r11,6
	ctx.r11.s64 = 6;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r10,r30,216
	ctx.r10.s64 = ctx.r30.s64 + 216;
	// lfs f13,6028(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 6028);
	ctx.f13.f64 = double(temp.f32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lfs f12,5188(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 5188);
	ctx.f12.f64 = double(temp.f32);
	// addi r9,r10,-4
	ctx.r9.s64 = ctx.r10.s64 + -4;
	// lfs f0,13220(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 13220);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,7932(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 7932);
	ctx.f11.f64 = double(temp.f32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lfs f10,232(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,216(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 216, temp.u32);
	// lfs f9,236(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 236);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,220(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 220, temp.u32);
	// lfs f8,240(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 240);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,224(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 224, temp.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lfs f7,232(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	ctx.f7.f64 = double(temp.f32);
	// addi r10,r11,244
	ctx.r10.s64 = ctx.r11.s64 + 244;
	// stfs f7,228(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 228, temp.u32);
	// lfs f6,236(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 236);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,232(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 232, temp.u32);
	// lfs f5,240(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 240);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,236(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 236, temp.u32);
	// lfs f4,244(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 244);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,240(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 240, temp.u32);
	// lfs f3,248(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 248);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,244(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 244, temp.u32);
	// lfs f2,252(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 252);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,248(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 248, temp.u32);
	// lfs f1,244(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 244);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,252(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 252, temp.u32);
	// lfs f10,248(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 248);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,256(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 256, temp.u32);
	// lfs f9,252(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 252);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,260(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 260, temp.u32);
	// stfs f13,264(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 264, temp.u32);
	// stfs f12,268(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 268, temp.u32);
	// stfs f13,272(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 272, temp.u32);
	// stfs f0,276(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 276, temp.u32);
	// stfs f11,280(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 280, temp.u32);
	// stfs f0,376(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 376, temp.u32);
	// stfs f0,380(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 380, temp.u32);
loc_82348658:
	// stwu r8,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x82348658
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82348658;
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

PPC_WEAK_FUNC(sub_82348570) {
	__imp__sub_82348570(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82348678) {
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
	// lis r11,-31816
	ctx.r11.s64 = -2085093376;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r11,-1312
	ctx.r8.s64 = ctx.r11.s64 + -1312;
	// addi r11,r8,972
	ctx.r11.s64 = ctx.r8.s64 + 972;
loc_82348698:
	// lwz r10,-972(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -972);
	// addi r31,r11,-972
	ctx.r31.s64 = ctx.r11.s64 + -972;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82348708
	if (ctx.cr6.eq) goto loc_82348708;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823486f4
	if (ctx.cr6.eq) goto loc_823486F4;
	// lwz r7,972(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 972);
	// addi r31,r11,972
	ctx.r31.s64 = ctx.r11.s64 + 972;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x823486fc
	if (ctx.cr6.eq) goto loc_823486FC;
	// lwz r7,1944(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1944);
	// addi r31,r11,1944
	ctx.r31.s64 = ctx.r11.s64 + 1944;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82348704
	if (ctx.cr6.eq) goto loc_82348704;
	// addis r10,r8,1
	ctx.r10.s64 = ctx.r8.s64 + 65536;
	// addi r11,r11,3888
	ctx.r11.s64 = ctx.r11.s64 + 3888;
	// addi r10,r10,-2356
	ctx.r10.s64 = ctx.r10.s64 + -2356;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82348698
	if (ctx.cr6.lt) goto loc_82348698;
	// b 0x82348708
	goto loc_82348708;
loc_823486F4:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// b 0x82348708
	goto loc_82348708;
loc_823486FC:
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// b 0x82348708
	goto loc_82348708;
loc_82348704:
	// addi r9,r9,3
	ctx.r9.s64 = ctx.r9.s64 + 3;
loc_82348708:
	// cmpwi cr6,r9,64
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 64, ctx.xer);
	// bne cr6,0x82348724
	if (!ctx.cr6.eq) goto loc_82348724;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r4,r11,-12688
	ctx.r4.s64 = ctx.r11.s64 + -12688;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822830e8
	ctx.lr = 0x82348724;
	sub_822830E8(ctx, base);
loc_82348724:
	// li r5,972
	ctx.r5.s64 = 972;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822dd778
	ctx.lr = 0x82348734;
	sub_822DD778(ctx, base);
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

PPC_WEAK_FUNC(sub_82348678) {
	__imp__sub_82348678(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8234874C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8234874C) {
	__imp__sub_8234874C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82348750) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf68
	ctx.lr = 0x82348758;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// addi r25,r11,9624
	ctx.r25.s64 = ctx.r11.s64 + 9624;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r7,r10,-17572
	ctx.r7.s64 = ctx.r10.s64 + -17572;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,1720
	ctx.r4.s64 = 1720;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// lwz r6,36(r25)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r25.u32 + 36);
	// bl 0x8222de40
	ctx.lr = 0x8234878C;
	sub_8222DE40(ctx, base);
	// lis r9,-31816
	ctx.r9.s64 = -2085093376;
	// rlwinm r29,r3,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r30,r9,-12608
	ctx.r30.s64 = ctx.r9.s64 + -12608;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwzx r8,r29,r30
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r30.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x823487b8
	if (!ctx.cr6.eq) goto loc_823487B8;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823427b8
	ctx.lr = 0x823487B4;
	sub_823427B8(ctx, base);
	// stwx r3,r29,r30
	PPC_STORE_U32(ctx.r29.u32 + ctx.r30.u32, ctx.r3.u32);
loc_823487B8:
	// li r11,9
	ctx.r11.s64 = 9;
	// lwzx r28,r29,r30
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r30.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82343af8
	ctx.lr = 0x823487D0;
	sub_82343AF8(ctx, base);
	// bl 0x82348678
	ctx.lr = 0x823487D4;
	sub_82348678(ctx, base);
	// stw r3,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r3.u32);
	// lwz r7,12(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// lis r10,-31816
	ctx.r10.s64 = -2085093376;
	// stw r7,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r7.u32);
	// lis r8,129
	ctx.r8.s64 = 8454144;
	// addi r6,r10,-1312
	ctx.r6.s64 = ctx.r10.s64 + -1312;
	// lwz r10,52(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 52);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,289(r31)
	PPC_STORE_U8(ctx.r31.u32 + 289, ctx.r11.u8);
	// ori r5,r8,529
	ctx.r5.u64 = ctx.r8.u64 | 529;
	// stb r11,290(r31)
	PPC_STORE_U8(ctx.r31.u32 + 290, ctx.r11.u8);
	// stw r5,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r5.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r9,312(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// addi r3,r10,50
	ctx.r3.s64 = ctx.r10.s64 + 50;
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r3,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r3.u32);
	// ori r4,r9,8448
	ctx.r4.u64 = ctx.r9.u64 | 8448;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r29,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
	// li r9,972
	ctx.r9.s64 = 972;
	// stw r4,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r4.u32);
	// subf r8,r6,r30
	ctx.r8.s64 = ctx.r30.s64 - ctx.r6.s64;
	// stb r10,291(r31)
	PPC_STORE_U8(ctx.r31.u32 + 291, ctx.r10.u8);
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// stw r29,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r29.u32);
	// divw r26,r8,r9
	ctx.r26.s32 = ctx.r8.s32 / ctx.r9.s32;
	// stb r29,168(r31)
	PPC_STORE_U8(ctx.r31.u32 + 168, ctx.r29.u8);
	// lwz r11,412(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 412);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82348864
	if (ctx.cr6.eq) goto loc_82348864;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82232100
	ctx.lr = 0x8234885C;
	sub_82232100(ctx, base);
	// sth r3,124(r31)
	PPC_STORE_U16(ctx.r31.u32 + 124, ctx.r3.u16);
	// b 0x82348868
	goto loc_82348868;
loc_82348864:
	// sth r29,124(r31)
	PPC_STORE_U16(ctx.r31.u32 + 124, ctx.r29.u16);
loc_82348868:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82348880
	if (!ctx.cr6.eq) goto loc_82348880;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// oris r10,r11,64
	ctx.r10.u64 = ctx.r11.u64 | 4194304;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
loc_82348880:
	// lwz r11,308(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 308);
	// li r10,4
	ctx.r10.s64 = 4;
	// li r9,8320
	ctx.r9.s64 = 8320;
	// clrlwi r8,r11,31
	ctx.r8.u64 = ctx.r11.u32 & 0x1;
	// stb r10,174(r31)
	PPC_STORE_U8(ctx.r31.u32 + 174, ctx.r10.u8);
	// stw r9,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r9.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x823488ac
	if (ctx.cr6.eq) goto loc_823488AC;
	// lis r11,32
	ctx.r11.s64 = 2097152;
	// ori r10,r11,8320
	ctx.r10.u64 = ctx.r11.u64 | 8320;
	// stw r10,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r10.u32);
loc_823488AC:
	// addi r4,r31,180
	ctx.r4.s64 = ctx.r31.s64 + 180;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8233d408
	ctx.lr = 0x823488B8;
	sub_8233D408(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82340d30
	ctx.lr = 0x823488C0;
	sub_82340D30(ctx, base);
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// stw r27,560(r30)
	PPC_STORE_U32(ctx.r30.u32 + 560, ctx.r27.u32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// stw r29,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r29.u32);
	// stw r29,572(r30)
	PPC_STORE_U32(ctx.r30.u32 + 572, ctx.r29.u32);
	// lis r6,-32251
	ctx.r6.s64 = -2113601536;
	// lfs f13,-12556(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -12556);
	ctx.f13.f64 = double(temp.f32);
	// li r9,2047
	ctx.r9.s64 = 2047;
	// stw r9,780(r30)
	PPC_STORE_U32(ctx.r30.u32 + 780, ctx.r9.u32);
	// lis r5,-32251
	ctx.r5.s64 = -2113601536;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// lfs f0,2424(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2424);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r3,r27,6,0,25
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 6) & 0xFFFFFFC0;
	// lfs f12,2416(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2416);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,5808(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 5808);
	ctx.f11.f64 = double(temp.f32);
	// addi r11,r31,88
	ctx.r11.s64 = ctx.r31.s64 + 88;
	// li r10,-1
	ctx.r10.s64 = -1;
	// lfs f10,-12560(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -12560);
	ctx.f10.f64 = double(temp.f32);
	// or r8,r3,r26
	ctx.r8.u64 = ctx.r3.u64 | ctx.r26.u64;
	// lfs f9,-12564(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -12564);
	ctx.f9.f64 = double(temp.f32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfs f8,6020(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 6020);
	ctx.f8.f64 = double(temp.f32);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// stfs f0,588(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 588, temp.u32);
	// stfs f0,832(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 832, temp.u32);
	// sth r10,584(r30)
	PPC_STORE_U16(ctx.r30.u32 + 584, ctx.r10.u16);
	// stfs f13,752(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 752, temp.u32);
	// stfs f12,756(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 756, temp.u32);
	// stfs f11,672(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + 672, temp.u32);
	// stfs f10,676(r30)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r30.u32 + 676, temp.u32);
	// stfs f9,680(r30)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r30.u32 + 680, temp.u32);
	// stfs f8,836(r30)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r30.u32 + 836, temp.u32);
	// stw r8,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r8.u32);
	// lwz r6,4(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lfs f0,5484(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// stw r29,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r29.u32);
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stfs f0,8(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 8, temp.u32);
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stfs f0,12(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 12, temp.u32);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stfs f0,20(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stfs f0,24(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 24, temp.u32);
	// lwz r4,8(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823489c8
	if (ctx.cr6.eq) goto loc_823489C8;
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823489c8
	if (ctx.cr6.eq) goto loc_823489C8;
	// addi r3,r30,568
	ctx.r3.s64 = ctx.r30.s64 + 568;
	// bl 0x82214a20
	ctx.lr = 0x823489A4;
	sub_82214A20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823489cc
	if (!ctx.cr6.eq) goto loc_823489CC;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lwz r5,8(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// li r6,32
	ctx.r6.s64 = 32;
	// addi r4,r11,-12656
	ctx.r4.s64 = ctx.r11.s64 + -12656;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822830e8
	ctx.lr = 0x823489C4;
	sub_822830E8(ctx, base);
	// b 0x823489cc
	goto loc_823489CC;
loc_823489C8:
	// stw r10,568(r30)
	PPC_STORE_U32(ctx.r30.u32 + 568, ctx.r10.u32);
loc_823489CC:
	// lwz r11,456(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 456);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,960(r30)
	PPC_STORE_U32(ctx.r30.u32 + 960, ctx.r11.u32);
	// lwz r11,52(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 52);
	// stw r11,964(r30)
	PPC_STORE_U32(ctx.r30.u32 + 964, ctx.r11.u32);
	// bl 0x82348478
	ctx.lr = 0x823489E4;
	sub_82348478(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82348570
	ctx.lr = 0x823489EC;
	sub_82348570(ctx, base);
	// addi r3,r30,16
	ctx.r3.s64 = ctx.r30.s64 + 16;
	// bl 0x82352e08
	ctx.lr = 0x823489F4;
	sub_82352E08(ctx, base);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r6,r31,244
	ctx.r6.s64 = ctx.r31.s64 + 244;
	// addi r5,r10,-5928
	ctx.r5.s64 = ctx.r10.s64 + -5928;
	// addi r4,r31,232
	ctx.r4.s64 = ctx.r31.s64 + 232;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82343958
	ctx.lr = 0x82348A0C;
	sub_82343958(ctx, base);
	// lwz r9,168(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 168);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82348a30
	if (ctx.cr6.eq) goto loc_82348A30;
	// bl 0x821fc6d0
	ctx.lr = 0x82348A1C;
	sub_821FC6D0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82348a30
	if (!ctx.cr6.eq) goto loc_82348A30;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82343d90
	ctx.lr = 0x82348A30;
	sub_82343D90(ctx, base);
loc_82348A30:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// bne cr6,0x82348a40
	if (!ctx.cr6.eq) goto loc_82348A40;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82343238
	ctx.lr = 0x82348A40;
	sub_82343238(ctx, base);
loc_82348A40:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82348750) {
	__imp__sub_82348750(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82348A48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,264(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 264);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82348ab8
	if (ctx.cr6.eq) goto loc_82348AB8;
	// lwz r10,172(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 172);
	// rlwinm r9,r10,0,11,11
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x100000;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82348ab8
	if (!ctx.cr6.eq) goto loc_82348AB8;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x82348ab8
	if (ctx.cr6.eq) goto loc_82348AB8;
	// lhz r11,256(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 256);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82348ab8
	if (!ctx.cr6.eq) goto loc_82348AB8;
	// lhz r11,256(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 256);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82348ab8
	if (!ctx.cr6.eq) goto loc_82348AB8;
	// lwz r11,276(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,576(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 576);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,12168(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x82348ab8
	if (ctx.cr6.gt) goto loc_82348AB8;
	// lwz r11,332(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 332);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82348ab8
	if (!ctx.cr6.gt) goto loc_82348AB8;
	// lwz r11,204(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 204);
	// rlwinm r3,r11,11,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 11) & 0x1;
	// blr 
	return;
loc_82348AB8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82348A48) {
	__imp__sub_82348A48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82348AC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,264(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 264);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82348ad4
	if (!ctx.cr6.eq) goto loc_82348AD4;
loc_82348ACC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82348AD4:
	// lwz r11,172(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 172);
	// rlwinm r10,r11,0,11,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82348acc
	if (ctx.cr6.eq) goto loc_82348ACC;
	// lhz r11,256(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 256);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82348acc
	if (ctx.cr6.eq) goto loc_82348ACC;
	// lis r9,-32052
	ctx.r9.s64 = -2100559872;
	// mulli r10,r11,624
	ctx.r10.s64 = ctx.r11.s64 * 624;
	// addi r11,r9,26552
	ctx.r11.s64 = ctx.r9.s64 + 26552;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r10,r11,-624
	ctx.r10.s64 = ctx.r11.s64 + -624;
	// lwz r8,-420(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + -420);
	// rlwinm r7,r8,0,10,10
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x200000;
	// subfic r6,r7,0
	ctx.xer.ca = ctx.r7.u32 <= 0;
	ctx.r6.s64 = 0 - ctx.r7.s64;
	// subfe r4,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r4.u64 = ~ctx.r5.u64 + ctx.r5.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r4,r10
	ctx.r3.u64 = ctx.r4.u64 & ctx.r10.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82348AC0) {
	__imp__sub_82348AC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82348B1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82348B1C) {
	__imp__sub_82348B1C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82348B20) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,264(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 264);
	// lwz r10,172(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 172);
	// rlwinm r9,r10,0,11,11
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x100000;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82348b3c
	if (!ctx.cr6.eq) goto loc_82348B3C;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82348B3C:
	// lhz r11,256(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 256);
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// addi r10,r10,26552
	ctx.r10.s64 = ctx.r10.s64 + 26552;
	// mulli r11,r11,624
	ctx.r11.s64 = ctx.r11.s64 * 624;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r11,-624
	ctx.r3.s64 = ctx.r11.s64 + -624;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82348B20) {
	__imp__sub_82348B20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82348B58) {
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
	// lwz r10,276(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	// lis r9,-31816
	ctx.r9.s64 = -2085093376;
	// addi r11,r4,-1
	ctx.r11.s64 = ctx.r4.s64 + -1;
	// addi r8,r9,-12608
	ctx.r8.s64 = ctx.r9.s64 + -12608;
	// cmplwi cr6,r11,13
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 13, ctx.xer);
	// lwz r7,560(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 560);
	// rlwinm r4,r7,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r4,r8
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r8.u32);
	// bgt cr6,0x82348cac
	if (ctx.cr6.gt) goto loc_82348CAC;
	// lis r12,-32203
	ctx.r12.s64 = -2110455808;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-29788
	ctx.r12.s64 = ctx.r12.s64 + -29788;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_82348BDC;
	case 1:
		goto loc_82348BDC;
	case 2:
		goto loc_82348CAC;
	case 3:
		goto loc_82348C18;
	case 4:
		goto loc_82348C18;
	case 5:
		goto loc_82348C6C;
	case 6:
		goto loc_82348C8C;
	case 7:
		goto loc_82348CAC;
	case 8:
		goto loc_82348CAC;
	case 9:
		goto loc_82348CAC;
	case 10:
		goto loc_82348CAC;
	case 11:
		goto loc_82348CAC;
	case 12:
		goto loc_82348CAC;
	case 13:
		goto loc_82348CAC;
	default:
		return;
	}
	// lwz r17,-29732(r20)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r20.u32 + -29732);
	// lwz r17,-29732(r20)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r20.u32 + -29732);
	// lwz r17,-29524(r20)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r20.u32 + -29524);
	// lwz r17,-29672(r20)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r20.u32 + -29672);
	// lwz r17,-29672(r20)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r20.u32 + -29672);
	// lwz r17,-29588(r20)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r20.u32 + -29588);
	// lwz r17,-29556(r20)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r20.u32 + -29556);
	// lwz r17,-29524(r20)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r20.u32 + -29524);
	// lwz r17,-29524(r20)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r20.u32 + -29524);
	// lwz r17,-29524(r20)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r20.u32 + -29524);
	// lwz r17,-29524(r20)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r20.u32 + -29524);
	// lwz r17,-29524(r20)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r20.u32 + -29524);
	// lwz r17,-29524(r20)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r20.u32 + -29524);
	// lwz r17,-29524(r20)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r20.u32 + -29524);
loc_82348BDC:
	// lwz r11,144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82348cac
	if (!ctx.cr6.eq) goto loc_82348CAC;
	// rlwinm r11,r5,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82348c00
	if (ctx.cr6.eq) goto loc_82348C00;
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82348cac
	if (!ctx.cr6.eq) goto loc_82348CAC;
loc_82348C00:
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
loc_82348C18:
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x82332af8
	ctx.lr = 0x82348C20;
	sub_82332AF8(ctx, base);
	// lwz r11,1060(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1060);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x82348c4c
	if (!ctx.cr6.eq) goto loc_82348C4C;
	// lwz r11,164(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
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
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82348C4C:
	// lwz r11,152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
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
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82348C6C:
	// lwz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
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
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82348C8C:
	// lwz r11,160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
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
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82348CAC:
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

PPC_WEAK_FUNC(sub_82348B58) {
	__imp__sub_82348B58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82348CC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82348CC4) {
	__imp__sub_82348CC4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82348CC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf64
	ctx.lr = 0x82348CD0;
	__savegprlr_23(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// lwz r24,276(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// lwz r8,332(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 332);
	// addi r26,r11,-25976
	ctx.r26.s64 = ctx.r11.s64 + -25976;
	// lwz r11,292(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// subf r4,r28,r8
	ctx.r4.s64 = ctx.r8.s64 - ctx.r28.s64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r24,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r24.u32);
	// stw r4,332(r3)
	PPC_STORE_U32(ctx.r3.u32 + 332, ctx.r4.u32);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lhz r3,42(r26)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r26.u32 + 42);
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
	// lwz r5,300(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 300);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// bl 0x821f0bd8
	ctx.lr = 0x82348D38;
	sub_821F0BD8(ctx, base);
	// lwz r11,332(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 332);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x82348ddc
	if (ctx.cr6.gt) goto loc_82348DDC;
	// cmpwi cr6,r11,-999
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -999, ctx.xer);
	// bge cr6,0x82348d54
	if (!ctx.cr6.lt) goto loc_82348D54;
	// li r11,-999
	ctx.r11.s64 = -999;
	// stw r11,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r11.u32);
loc_82348D54:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// bne cr6,0x82348d64
	if (!ctx.cr6.eq) goto loc_82348D64;
	// bl 0x822acd78
	ctx.lr = 0x82348D60;
	sub_822ACD78(ctx, base);
	// b 0x82348d70
	goto loc_82348D70;
loc_82348D64:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82332b28
	ctx.lr = 0x82348D6C;
	sub_82332B28(ctx, base);
	// bl 0x822aced0
	ctx.lr = 0x82348D70;
	sub_822ACED0(ctx, base);
loc_82348D70:
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,7880
	ctx.r9.s64 = ctx.r11.s64 + 7880;
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lhz r3,0(r8)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r8.u32 + 0);
	// bl 0x822acff0
	ctx.lr = 0x82348D88;
	sub_822ACFF0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82229b60
	ctx.lr = 0x82348D90;
	sub_82229B60(ctx, base);
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lhz r4,46(r26)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r26.u32 + 46);
	// bl 0x82229da8
	ctx.lr = 0x82348DA0;
	sub_82229DA8(ctx, base);
	// lis r7,-32191
	ctx.r7.s64 = -2109669376;
	// lbz r5,291(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 291);
	// addi r11,r7,8272
	ctx.r11.s64 = ctx.r7.s64 + 8272;
	// mulli r4,r5,44
	ctx.r4.s64 = ctx.r5.s64 * 44;
	// addi r6,r11,24
	ctx.r6.s64 = ctx.r11.s64 + 24;
	// lwzx r11,r4,r6
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r6.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82348e24
	if (ctx.cr6.eq) goto loc_82348E24;
	// lwz r10,284(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 284);
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// b 0x82348e14
	goto loc_82348E14;
loc_82348DDC:
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
	// beq cr6,0x82348e24
	if (ctx.cr6.eq) goto loc_82348E24;
	// lwz r9,284(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 284);
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_82348E14:
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x82348E24;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82348E24:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82348CC8) {
	__imp__sub_82348CC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82348E2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82348E2C) {
	__imp__sub_82348E2C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82348E30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,264(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 264);
	// lwz r11,172(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 172);
	// rlwinm r10,r11,0,11,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82348e98
	if (ctx.cr6.eq) goto loc_82348E98;
	// rlwinm r11,r11,0,7,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000000;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82348e98
	if (!ctx.cr6.eq) goto loc_82348E98;
	// lhz r10,256(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 256);
	// lis r9,-32052
	ctx.r9.s64 = -2100559872;
	// addi r11,r9,26552
	ctx.r11.s64 = ctx.r9.s64 + 26552;
	// mulli r10,r10,624
	ctx.r10.s64 = ctx.r10.s64 * 624;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,-348(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -348);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r7,6
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 6, ctx.xer);
	// bne cr6,0x82348e98
	if (!ctx.cr6.eq) goto loc_82348E98;
	// lwz r11,560(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 560);
	// lis r10,-31816
	ctx.r10.s64 = -2085093376;
	// addi r9,r10,-12608
	ctx.r9.s64 = ctx.r10.s64 + -12608;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r8,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// lwz r6,140(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 140);
	// addic r5,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r5.s64 = ctx.r6.s64 + -1;
	// subfe r3,r5,r6
	temp.u8 = (~ctx.r5.u32 + ctx.r6.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r5.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// blr 
	return;
loc_82348E98:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82348E30) {
	__imp__sub_82348E30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82348EA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82348EA8;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lwz r30,264(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 264);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,-12436
	ctx.r4.s64 = ctx.r11.s64 + -12436;
	// bl 0x822830e8
	ctx.lr = 0x82348EC4;
	sub_822830E8(ctx, base);
	// lwz r11,172(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 172);
	// rlwinm r10,r11,0,11,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82348fc8
	if (ctx.cr6.eq) goto loc_82348FC8;
	// lhz r10,256(r28)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r28.u32 + 256);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82348fc8
	if (ctx.cr6.eq) goto loc_82348FC8;
	// lis r8,-32052
	ctx.r8.s64 = -2100559872;
	// mulli r9,r10,624
	ctx.r9.s64 = ctx.r10.s64 * 624;
	// addi r10,r8,26552
	ctx.r10.s64 = ctx.r8.s64 + 26552;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r31,r10,-624
	ctx.r31.s64 = ctx.r10.s64 + -624;
	// lhz r7,-368(r10)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r10.u32 + -368);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82348fc8
	if (ctx.cr6.eq) goto loc_82348FC8;
	// lwz r10,204(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// rlwinm r9,r10,0,10,10
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x200000;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82348fc8
	if (!ctx.cr6.eq) goto loc_82348FC8;
	// rlwinm r10,r11,0,7,7
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31961
	ctx.r10.s64 = -2094596096;
	// addi r8,r10,-25976
	ctx.r8.s64 = ctx.r10.s64 + -25976;
	// beq cr6,0x82348f3c
	if (ctx.cr6.eq) goto loc_82348F3C;
	// rlwinm r11,r11,0,8,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFEFFFFFF;
	// stw r11,172(r30)
	PPC_STORE_U32(ctx.r30.u32 + 172, ctx.r11.u32);
	// lwz r9,276(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// lhz r29,222(r8)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r8.u32 + 222);
	// lwz r30,884(r9)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + 884);
	// b 0x82348f50
	goto loc_82348F50;
loc_82348F3C:
	// oris r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 16777216;
	// stw r11,172(r30)
	PPC_STORE_U32(ctx.r30.u32 + 172, ctx.r11.u32);
	// lwz r9,276(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// lhz r29,386(r8)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r8.u32 + 386);
	// lwz r30,892(r9)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + 892);
loc_82348F50:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822340e0
	ctx.lr = 0x82348F58;
	sub_822340E0(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge cr6,0x82348f74
	if (!ctx.cr6.lt) goto loc_82348F74;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,-12500
	ctx.r4.s64 = ctx.r11.s64 + -12500;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822830e8
	ctx.lr = 0x82348F74;
	sub_822830E8(ctx, base);
loc_82348F74:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222eee0
	ctx.lr = 0x82348F84;
	sub_8222EEE0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821e6828
	ctx.lr = 0x82348F90;
	sub_821E6828(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r6,r11,-5928
	ctx.r6.s64 = ctx.r11.s64 + -5928;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82234080
	ctx.lr = 0x82348FAC;
	sub_82234080(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82348fc8
	if (!ctx.cr6.eq) goto loc_82348FC8;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,-12552
	ctx.r4.s64 = ctx.r11.s64 + -12552;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822830e8
	ctx.lr = 0x82348FC8;
	sub_822830E8(ctx, base);
loc_82348FC8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82348EA0) {
	__imp__sub_82348EA0(ctx, base);
}

