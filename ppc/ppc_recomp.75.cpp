#include "ppc_recomp_shared.h"

PPC_FUNC_IMPL(__imp__sub_822DF530) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r4,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r4.u64);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lfs f1,120(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f1.f64 = double(temp.f32);
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// lfs f0,6688(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6688);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// lfs f0,6912(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6912);
	ctx.f0.f64 = double(temp.f32);
	// beq cr6,0x822df5c8
	if (ctx.cr6.eq) goto loc_822DF5C8;
	// lfs f2,124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f2.f64 = double(temp.f32);
	// fcmpu cr6,f2,f0
	ctx.cr6.compare(ctx.f2.f64, ctx.f0.f64);
	// beq cr6,0x822df5a4
	if (ctx.cr6.eq) goto loc_822DF5A4;
	// stfd f2,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.f2.u64);
	// ld r8,56(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 56);
	// stfd f1,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.f1.u64);
	// ld r7,48(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 48);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r5,r10,-4176
	ctx.r5.s64 = ctx.r10.s64 + -4176;
	// bl 0x823dfb70
	ctx.lr = 0x822DF594;
	sub_823DFB70(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_822DF5A4:
	// stfd f1,48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.f1.u64);
	// ld r7,48(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 48);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r5,r10,-4232
	ctx.r5.s64 = ctx.r10.s64 + -4232;
	// bl 0x823dfb70
	ctx.lr = 0x822DF5B8;
	sub_823DFB70(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_822DF5C8:
	// lfs f1,124(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f1.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// beq cr6,0x822df5f8
	if (ctx.cr6.eq) goto loc_822DF5F8;
	// stfd f1,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.f1.u64);
	// ld r7,48(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 48);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r5,r10,-4288
	ctx.r5.s64 = ctx.r10.s64 + -4288;
	// bl 0x823dfb70
	ctx.lr = 0x822DF5E8;
	sub_823DFB70(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_822DF5F8:
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r5,r10,-4316
	ctx.r5.s64 = ctx.r10.s64 + -4316;
	// bl 0x823dfb70
	ctx.lr = 0x822DF604;
	sub_823DFB70(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822DF530) {
	__imp__sub_822DF530(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DF614) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822DF614) {
	__imp__sub_822DF614(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DF618) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf64
	ctx.lr = 0x822DF620;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// std r4,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.r4.u64);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// li r23,0
	ctx.r23.s64 = 0;
	// add r24,r5,r6
	ctx.r24.u64 = ctx.r5.u64 + ctx.r6.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x822df64c
	if (ctx.cr6.eq) goto loc_822DF64C;
	// stw r23,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r23.u32);
loc_822DF64C:
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 9, ctx.xer);
	// bgt cr6,0x822df964
	if (ctx.cr6.gt) goto loc_822DF964;
	// lis r12,-32210
	ctx.r12.s64 = -2110914560;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-2448
	ctx.r12.s64 = ctx.r12.s64 + -2448;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r10.u32) {
	case 0:
		goto loc_822DF698;
	case 1:
		goto loc_822DF75C;
	case 2:
		goto loc_822DF824;
	case 3:
		goto loc_822DF848;
	case 4:
		goto loc_822DF86C;
	case 5:
		goto loc_822DF6B8;
	case 6:
		goto loc_822DF8B0;
	case 7:
		goto loc_822DF890;
	case 8:
		goto loc_822DF944;
	case 9:
		goto loc_822DF848;
	default:
		return;
	}
	// lwz r17,-2408(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + -2408);
	// lwz r17,-2212(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + -2212);
	// lwz r17,-2012(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + -2012);
	// lwz r17,-1976(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + -1976);
	// lwz r17,-1940(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + -1940);
	// lwz r17,-2376(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + -2376);
	// lwz r17,-1872(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + -1872);
	// lwz r17,-1904(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + -1904);
	// lwz r17,-1724(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + -1724);
	// lwz r17,-1976(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + -1976);
loc_822DF698:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r5,r11,-3744
	ctx.r5.s64 = ctx.r11.s64 + -3744;
	// bl 0x823dfb70
	ctx.lr = 0x822DF6A8;
	sub_823DFB70(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stb r23,-1(r24)
	PPC_STORE_U8(ctx.r24.u32 + -1, ctx.r23.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
loc_822DF6B8:
	// lwz r6,184(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// cmpw cr6,r6,r11
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r11.s32, ctx.xer);
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// ori r10,r11,65535
	ctx.r10.u64 = ctx.r11.u64 | 65535;
	// beq cr6,0x822df718
	if (ctx.cr6.eq) goto loc_822DF718;
	// lwz r7,188(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// cmpw cr6,r7,r10
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x822df6fc
	if (ctx.cr6.eq) goto loc_822DF6FC;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r5,r11,-3780
	ctx.r5.s64 = ctx.r11.s64 + -3780;
	// bl 0x823dfb70
	ctx.lr = 0x822DF6EC;
	sub_823DFB70(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stb r23,-1(r24)
	PPC_STORE_U8(ctx.r24.u32 + -1, ctx.r23.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
loc_822DF6FC:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r5,r11,-3816
	ctx.r5.s64 = ctx.r11.s64 + -3816;
	// bl 0x823dfb70
	ctx.lr = 0x822DF708;
	sub_823DFB70(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stb r23,-1(r24)
	PPC_STORE_U8(ctx.r24.u32 + -1, ctx.r23.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
loc_822DF718:
	// lwz r6,188(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// cmpw cr6,r6,r10
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x822df740
	if (ctx.cr6.eq) goto loc_822DF740;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r5,r11,-3852
	ctx.r5.s64 = ctx.r11.s64 + -3852;
	// bl 0x823dfb70
	ctx.lr = 0x822DF730;
	sub_823DFB70(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stb r23,-1(r24)
	PPC_STORE_U8(ctx.r24.u32 + -1, ctx.r23.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
loc_822DF740:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r5,r11,-3876
	ctx.r5.s64 = ctx.r11.s64 + -3876;
	// bl 0x823dfb70
	ctx.lr = 0x822DF74C;
	sub_823DFB70(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stb r23,-1(r24)
	PPC_STORE_U8(ctx.r24.u32 + -1, ctx.r23.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
loc_822DF75C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,184(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	ctx.f1.f64 = double(temp.f32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f0,6688(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6688);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// lfs f0,6912(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6912);
	ctx.f0.f64 = double(temp.f32);
	// beq cr6,0x822df7d8
	if (ctx.cr6.eq) goto loc_822DF7D8;
	// lfs f2,188(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	ctx.f2.f64 = double(temp.f32);
	// fcmpu cr6,f2,f0
	ctx.cr6.compare(ctx.f2.f64, ctx.f0.f64);
	// beq cr6,0x822df7b4
	if (ctx.cr6.eq) goto loc_822DF7B4;
	// stfd f2,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.f2.u64);
	// ld r7,48(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 48);
	// stfd f1,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f1.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r5,r11,-3912
	ctx.r5.s64 = ctx.r11.s64 + -3912;
	// bl 0x823dfb70
	ctx.lr = 0x822DF7A4;
	sub_823DFB70(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stb r23,-1(r24)
	PPC_STORE_U8(ctx.r24.u32 + -1, ctx.r23.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
loc_822DF7B4:
	// stfd f1,40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f1.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r5,r11,-3948
	ctx.r5.s64 = ctx.r11.s64 + -3948;
	// bl 0x823dfb70
	ctx.lr = 0x822DF7C8;
	sub_823DFB70(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stb r23,-1(r24)
	PPC_STORE_U8(ctx.r24.u32 + -1, ctx.r23.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
loc_822DF7D8:
	// lfs f1,188(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	ctx.f1.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// beq cr6,0x822df808
	if (ctx.cr6.eq) goto loc_822DF808;
	// stfd f1,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f1.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r5,r11,-3984
	ctx.r5.s64 = ctx.r11.s64 + -3984;
	// bl 0x823dfb70
	ctx.lr = 0x822DF7F8;
	sub_823DFB70(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stb r23,-1(r24)
	PPC_STORE_U8(ctx.r24.u32 + -1, ctx.r23.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
loc_822DF808:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r5,r11,-4008
	ctx.r5.s64 = ctx.r11.s64 + -4008;
	// bl 0x823dfb70
	ctx.lr = 0x822DF814;
	sub_823DFB70(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stb r23,-1(r24)
	PPC_STORE_U8(ctx.r24.u32 + -1, ctx.r23.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
loc_822DF824:
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x822df530
	ctx.lr = 0x822DF838;
	sub_822DF530(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stb r23,-1(r24)
	PPC_STORE_U8(ctx.r24.u32 + -1, ctx.r23.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
loc_822DF848:
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x822df530
	ctx.lr = 0x822DF85C;
	sub_822DF530(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stb r23,-1(r24)
	PPC_STORE_U8(ctx.r24.u32 + -1, ctx.r23.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
loc_822DF86C:
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x822df530
	ctx.lr = 0x822DF880;
	sub_822DF530(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stb r23,-1(r24)
	PPC_STORE_U8(ctx.r24.u32 + -1, ctx.r23.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
loc_822DF890:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r5,r11,-4028
	ctx.r5.s64 = ctx.r11.s64 + -4028;
	// bl 0x823dfb70
	ctx.lr = 0x822DF8A0;
	sub_823DFB70(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stb r23,-1(r24)
	PPC_STORE_U8(ctx.r24.u32 + -1, ctx.r23.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
loc_822DF8B0:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// subf r4,r29,r24
	ctx.r4.s64 = ctx.r24.s64 - ctx.r29.s64;
	// addi r5,r11,-4060
	ctx.r5.s64 = ctx.r11.s64 + -4060;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823dfb70
	ctx.lr = 0x822DF8C4;
	sub_823DFB70(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x822df968
	if (ctx.cr6.lt) goto loc_822DF968;
	// lwz r26,184(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// add r31,r3,r29
	ctx.r31.u64 = ctx.r3.u64 + ctx.r29.u64;
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// ble cr6,0x822df968
	if (!ctx.cr6.gt) goto loc_822DF968;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r28,188(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// addi r27,r11,-4072
	ctx.r27.s64 = ctx.r11.s64 + -4072;
loc_822DF8EC:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r7,0(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// subf r4,r31,r24
	ctx.r4.s64 = ctx.r24.s64 - ctx.r31.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823dfb70
	ctx.lr = 0x822DF904;
	sub_823DFB70(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x822df968
	if (ctx.cr6.lt) goto loc_822DF968;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x822df920
	if (ctx.cr6.eq) goto loc_822DF920;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
loc_822DF920:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// add r31,r31,r3
	ctx.r31.u64 = ctx.r31.u64 + ctx.r3.u64;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmpw cr6,r30,r26
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r26.s32, ctx.xer);
	// blt cr6,0x822df8ec
	if (ctx.cr6.lt) goto loc_822DF8EC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stb r23,-1(r24)
	PPC_STORE_U8(ctx.r24.u32 + -1, ctx.r23.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
loc_822DF944:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r5,r11,-4120
	ctx.r5.s64 = ctx.r11.s64 + -4120;
	// bl 0x823dfb70
	ctx.lr = 0x822DF954;
	sub_823DFB70(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stb r23,-1(r24)
	PPC_STORE_U8(ctx.r24.u32 + -1, ctx.r23.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
loc_822DF964:
	// stb r23,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r23.u8);
loc_822DF968:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stb r23,-1(r24)
	PPC_STORE_U8(ctx.r24.u32 + -1, ctx.r23.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822DF618) {
	__imp__sub_822DF618(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DF978) {
	PPC_FUNC_PROLOGUE();
	// li r7,0
	ctx.r7.s64 = 0;
	// b 0x822df618
	sub_822DF618(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822DF978) {
	__imp__sub_822DF978(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DF980) {
	PPC_FUNC_PROLOGUE();
	// b 0x822df618
	sub_822DF618(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822DF980) {
	__imp__sub_822DF980(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DF984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822DF984) {
	__imp__sub_822DF984(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DF988) {
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
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1024
	ctx.r6.s64 = 1024;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x822df618
	ctx.lr = 0x822DF9A4;
	sub_822DF618(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-3724
	ctx.r4.s64 = ctx.r11.s64 + -3724;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82280900
	ctx.lr = 0x822DF9B8;
	sub_82280900(ctx, base);
	// addi r1,r1,1120
	ctx.r1.s64 = ctx.r1.s64 + 1120;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822DF988) {
	__imp__sub_822DF988(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DF9C8) {
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
	// std r4,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r4.u64);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// std r5,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r5.u64);
	// std r6,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r6.u64);
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// std r7,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r7.u64);
	// bgt cr6,0x822dfa8c
	if (ctx.cr6.gt) goto loc_822DFA8C;
	// lis r12,-32210
	ctx.r12.s64 = -2110914560;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-1528
	ctx.r12.s64 = ctx.r12.s64 + -1528;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_822DFA30;
	case 1:
		goto loc_822DFA78;
	case 2:
		goto loc_822DFAA0;
	case 3:
		goto loc_822DFABC;
	case 4:
		goto loc_822DFAE8;
	case 5:
		goto loc_822DFA54;
	case 6:
		goto loc_822DFA54;
	case 7:
		goto loc_822DFB04;
	case 8:
		goto loc_822DFA54;
	case 9:
		goto loc_822DFABC;
	default:
		return;
	}
	// lwz r17,-1488(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + -1488);
	// lwz r17,-1416(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + -1416);
	// lwz r17,-1376(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + -1376);
	// lwz r17,-1348(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + -1348);
	// lwz r17,-1304(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + -1304);
	// lwz r17,-1452(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + -1452);
	// lwz r17,-1452(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + -1452);
	// lwz r17,-1276(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + -1276);
	// lwz r17,-1452(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + -1452);
	// lwz r17,-1348(r13)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + -1348);
loc_822DFA30:
	// lbz r9,144(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 144);
	// lbz r8,128(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 128);
	// subf r7,r8,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r8.s64;
	// cntlzw r6,r7
	ctx.r6.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm r3,r6,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_822DFA54:
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r10,128(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r3,r8,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_822DFA78:
	// lfs f0,144(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f13.f64 = double(temp.f32);
loc_822DFA80:
	// li r3,1
	ctx.r3.s64 = 1;
	// fcmpu cr6,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x822dfa90
	if (ctx.cr6.eq) goto loc_822DFA90;
loc_822DFA8C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822DFA90:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_822DFAA0:
	// lfs f0,144(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x822dfa8c
	if (!ctx.cr6.eq) goto loc_822DFA8C;
	// lfs f0,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f13.f64 = double(temp.f32);
	// b 0x822dfa80
	goto loc_822DFA80;
loc_822DFABC:
	// lfs f0,144(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x822dfa8c
	if (!ctx.cr6.eq) goto loc_822DFA8C;
	// lfs f0,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x822dfa8c
	if (!ctx.cr6.eq) goto loc_822DFA8C;
	// lfs f0,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f13.f64 = double(temp.f32);
	// b 0x822dfa80
	goto loc_822DFA80;
loc_822DFAE8:
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x822de1c8
	ctx.lr = 0x822DFAF4;
	sub_822DE1C8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_822DFB04:
	// lwz r10,144(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
loc_822DFB0C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x822dfb30
	if (ctx.cr6.eq) goto loc_822DFB30;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822dfb0c
	if (ctx.cr6.eq) goto loc_822DFB0C;
loc_822DFB30:
	// cntlzw r11,r9
	ctx.r11.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
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

PPC_WEAK_FUNC(sub_822DF9C8) {
	__imp__sub_822DF9C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DFB48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x822DFB50;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,10(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// std r4,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r4.u64);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// std r5,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r5.u64);
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bgt cr6,0x822dfc74
	if (ctx.cr6.gt) goto loc_822DFC74;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822dfc14
	if (ctx.cr6.eq) goto loc_822DFC14;
	// bdz 0x822dfc2c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_822DFC2C;
	// bdz 0x822dfc4c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_822DFC4C;
	// bdz 0x822dfc74
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_822DFC74;
	// bdz 0x822dfc74
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_822DFC74;
	// bdz 0x822dfb98
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_822DFB98;
	// bdz 0x822dfc74
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_822DFC74;
	// b 0x822dfc2c
	goto loc_822DFC2C;
loc_822DFB98:
	// lwz r5,160(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplw cr6,r10,r5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x822dfc9c
	if (ctx.cr6.eq) goto loc_822DFC9C;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822dfbcc
	if (ctx.cr6.eq) goto loc_822DFBCC;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x822dfbcc
	if (ctx.cr6.eq) goto loc_822DFBCC;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x822dfbd0
	if (!ctx.cr6.eq) goto loc_822DFBD0;
loc_822DFBCC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822DFBD0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822dfbe8
	if (!ctx.cr6.eq) goto loc_822DFBE8;
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_822DFBE8:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822de638
	ctx.lr = 0x822DFBF4;
	sub_822DE638(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// beq cr6,0x822dfc9c
	if (ctx.cr6.eq) goto loc_822DFC9C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822dad58
	ctx.lr = 0x822DFC0C;
	sub_822DAD58(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_822DFC14:
	// lfs f0,160(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,164(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,28(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// stfs f13,32(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_822DFC2C:
	// lfs f0,160(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,164(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,168(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,28(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// stfs f13,32(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// stfs f12,36(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_822DFC4C:
	// lfs f0,160(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,164(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,168(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,172(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	ctx.f11.f64 = double(temp.f32);
	// stfs f0,28(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// stfs f13,32(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// stfs f12,36(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// stfs f11,40(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_822DFC74:
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// addi r10,r31,28
	ctx.r10.s64 = ctx.r31.s64 + 28;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r6,12(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r9,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r9.u32);
	// stw r8,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r8.u32);
	// stw r7,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r7.u32);
	// stw r6,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r6.u32);
loc_822DFC9C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822DFB48) {
	__imp__sub_822DFB48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DFCA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822DFCA4) {
	__imp__sub_822DFCA4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DFCA8) {
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
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lbz r3,10(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10);
	// ld r6,28(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 28);
	// ld r7,36(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 36);
	// ld r4,12(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 12);
	// ld r5,20(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 20);
	// bl 0x822df9c8
	ctx.lr = 0x822DFCD0;
	sub_822DF9C8(ctx, base);
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
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822DFCA8) {
	__imp__sub_822DFCA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822DFCE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x822DFCF0;
	__savegprlr_27(ctx, base);
	// stwu r1,-1168(r1)
	ea = -1168 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// ld r6,60(r3)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r3.u32 + 60);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// std r4,1200(r1)
	PPC_STORE_U64(ctx.r1.u32 + 1200, ctx.r4.u64);
	// lbz r3,10(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// std r5,1208(r1)
	PPC_STORE_U64(ctx.r1.u32 + 1208, ctx.r5.u64);
	// bl 0x822df350
	ctx.lr = 0x822DFD18;
	sub_822DF350(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822dfdb0
	if (!ctx.cr6.eq) goto loc_822DFDB0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x822de8d8
	ctx.lr = 0x822DFD30;
	sub_822DE8D8(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-3560
	ctx.r4.s64 = ctx.r11.s64 + -3560;
	// li r3,16
	ctx.r3.s64 = 16;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// bl 0x82280900
	ctx.lr = 0x822DFD48;
	sub_82280900(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1024
	ctx.r6.s64 = 1024;
	// ld r4,60(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 60);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lbz r3,10(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 10);
	// bl 0x822df618
	ctx.lr = 0x822DFD60;
	sub_822DF618(ctx, base);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r10,-3724
	ctx.r4.s64 = ctx.r10.s64 + -3724;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82280900
	ctx.lr = 0x822DFD74;
	sub_82280900(ctx, base);
	// lbz r9,10(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 10);
	// cmplwi cr6,r9,6
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 6, ctx.xer);
	// bne cr6,0x822e0164
	if (!ctx.cr6.eq) goto loc_822E0164;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// addi r10,r1,1200
	ctx.r10.s64 = ctx.r1.s64 + 1200;
	// lwz r9,48(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// addi r8,r31,44
	ctx.r8.s64 = ctx.r31.s64 + 44;
	// lwz r7,52(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r6,56(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// stw r7,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r7.u32);
	// stw r6,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r6.u32);
	// ld r28,1208(r1)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1208);
	// ld r27,1200(r1)
	ctx.r27.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1200);
loc_822DFDB0:
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// bne cr6,0x822dfdf0
	if (!ctx.cr6.eq) goto loc_822DFDF0;
	// lhz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// rlwinm r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822dfdf8
	if (ctx.cr6.eq) goto loc_822DFDF8;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lbz r10,29088(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 29088);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822dfdf8
	if (ctx.cr6.eq) goto loc_822DFDF8;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r3,16
	ctx.r3.s64 = 16;
	// addi r4,r11,-3608
	ctx.r4.s64 = ctx.r11.s64 + -3608;
	// bl 0x82280b08
	ctx.lr = 0x822DFDEC;
	sub_82280B08(ctx, base);
	// b 0x822dfdf8
	goto loc_822DFDF8;
loc_822DFDF0:
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// bne cr6,0x822dfee8
	if (!ctx.cr6.eq) goto loc_822DFEE8;
loc_822DFDF8:
	// lhz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// rlwinm r10,r11,0,18,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822dfe24
	if (ctx.cr6.eq) goto loc_822DFE24;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r3,16
	ctx.r3.s64 = 16;
	// addi r4,r11,-3628
	ctx.r4.s64 = ctx.r11.s64 + -3628;
	// bl 0x82280900
	ctx.lr = 0x822DFE1C;
	sub_82280900(ctx, base);
	// addi r1,r1,1168
	ctx.r1.s64 = ctx.r1.s64 + 1168;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_822DFE24:
	// rlwinm r10,r11,0,20,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822dfe4c
	if (ctx.cr6.eq) goto loc_822DFE4C;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r3,16
	ctx.r3.s64 = 16;
	// addi r4,r11,-3652
	ctx.r4.s64 = ctx.r11.s64 + -3652;
	// bl 0x82280900
	ctx.lr = 0x822DFE44;
	sub_82280900(ctx, base);
	// addi r1,r1,1168
	ctx.r1.s64 = ctx.r1.s64 + 1168;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_822DFE4C:
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// bne cr6,0x822dfe90
	if (!ctx.cr6.eq) goto loc_822DFE90;
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822dfe90
	if (ctx.cr6.eq) goto loc_822DFE90;
	// lis r10,-31852
	ctx.r10.s64 = -2087452672;
	// lwz r10,-30036(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30036);
	// lbz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 12);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822dfe90
	if (!ctx.cr6.eq) goto loc_822DFE90;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r3,16
	ctx.r3.s64 = 16;
	// addi r4,r11,12488
	ctx.r4.s64 = ctx.r11.s64 + 12488;
	// bl 0x82280900
	ctx.lr = 0x822DFE88;
	sub_82280900(ctx, base);
	// addi r1,r1,1168
	ctx.r1.s64 = ctx.r1.s64 + 1168;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_822DFE90:
	// rlwinm r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822dfee8
	if (ctx.cr6.eq) goto loc_822DFEE8;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822dfb48
	ctx.lr = 0x822DFEAC;
	sub_822DFB48(ctx, base);
	// lbz r3,10(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 10);
	// ld r6,12(r31)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r31.u32 + 12);
	// ld r7,20(r31)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r31.u32 + 20);
	// ld r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 28);
	// ld r5,36(r31)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r31.u32 + 36);
	// bl 0x822df9c8
	ctx.lr = 0x822DFEC4;
	sub_822DF9C8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822e0164
	if (!ctx.cr6.eq) goto loc_822E0164;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r3,16
	ctx.r3.s64 = 16;
	// addi r4,r11,-3692
	ctx.r4.s64 = ctx.r11.s64 + -3692;
	// bl 0x82280900
	ctx.lr = 0x822DFEE0;
	sub_82280900(ctx, base);
	// addi r1,r1,1168
	ctx.r1.s64 = ctx.r1.s64 + 1168;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_822DFEE8:
	// lwz r11,0(r13)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,12
	ctx.r10.s64 = 12;
	// lhz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// lwzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// andc r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 & ~ctx.r8.u64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x822dff18
	if (ctx.cr6.eq) goto loc_822DFF18;
	// bl 0x8228bcc0
	ctx.lr = 0x822DFF08;
	sub_8228BCC0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822dff58
	if (ctx.cr6.eq) goto loc_822DFF58;
	// bl 0x8233fb68
	ctx.lr = 0x822DFF18;
	sub_8233FB68(ctx, base);
loc_822DFF18:
	// lbz r29,10(r31)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r31.u32 + 10);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// ld r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 12);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// ld r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r31.u32 + 20);
	// addi r30,r31,12
	ctx.r30.s64 = ctx.r31.s64 + 12;
	// bl 0x822df9c8
	ctx.lr = 0x822DFF38;
	sub_822DF9C8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822dff74
	if (ctx.cr6.eq) goto loc_822DFF74;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// ld r5,8(r30)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r30.u32 + 8);
	// bl 0x822dfb48
	ctx.lr = 0x822DFF50;
	sub_822DFB48(ctx, base);
	// addi r1,r1,1168
	ctx.r1.s64 = ctx.r1.s64 + 1168;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_822DFF58:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r3,16
	ctx.r3.s64 = 16;
	// addi r4,r11,-3716
	ctx.r4.s64 = ctx.r11.s64 + -3716;
	// bl 0x82280900
	ctx.lr = 0x822DFF6C;
	sub_82280900(ctx, base);
	// addi r1,r1,1168
	ctx.r1.s64 = ctx.r1.s64 + 1168;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_822DFF74:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bgt cr6,0x822e0110
	if (ctx.cr6.gt) goto loc_822E0110;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822e0074
	if (ctx.cr6.eq) goto loc_822E0074;
	// bdz 0x822e009c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_822E009C;
	// bdz 0x822e00d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_822E00D0;
	// bdz 0x822e0110
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_822E0110;
	// bdz 0x822e0110
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_822E0110;
	// bdz 0x822dffac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_822DFFAC;
	// bdz 0x822e0110
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_822E0110;
	// b 0x822e009c
	goto loc_822E009C;
loc_822DFFAC:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822dffd4
	if (ctx.cr6.eq) goto loc_822DFFD4;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x822dffd4
	if (ctx.cr6.eq) goto loc_822DFFD4;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x822dffd8
	if (!ctx.cr6.eq) goto loc_822DFFD8;
loc_822DFFD4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822DFFD8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mr r28,r10
	ctx.r28.u64 = ctx.r10.u64;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822dfff0
	if (!ctx.cr6.eq) goto loc_822DFFF0;
	// lwz r28,80(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_822DFFF0:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r5,1200(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1200);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822de558
	ctx.lr = 0x822E0000;
	sub_822DE558(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// beq cr6,0x822e002c
	if (ctx.cr6.eq) goto loc_822E002C;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x822e002c
	if (ctx.cr6.eq) goto loc_822E002C;
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x822e0030
	if (!ctx.cr6.eq) goto loc_822E0030;
loc_822E002C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822E0030:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822e004c
	if (ctx.cr6.eq) goto loc_822E004C;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x822dad58
	ctx.lr = 0x822E0044;
	sub_822DAD58(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
loc_822E004C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// beq cr6,0x822e015c
	if (ctx.cr6.eq) goto loc_822E015C;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822dad58
	ctx.lr = 0x822E0064;
	sub_822DAD58(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,11(r31)
	PPC_STORE_U8(ctx.r31.u32 + 11, ctx.r11.u8);
	// addi r1,r1,1168
	ctx.r1.s64 = ctx.r1.s64 + 1168;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_822E0074:
	// lfs f0,1200(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 1200);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f13,1204(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 1204);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// stfs f13,4(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// stfs f0,28(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// stfs f13,32(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// stb r11,11(r31)
	PPC_STORE_U8(ctx.r31.u32 + 11, ctx.r11.u8);
	// addi r1,r1,1168
	ctx.r1.s64 = ctx.r1.s64 + 1168;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_822E009C:
	// lfs f0,1200(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 1200);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f13,1204(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 1204);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,1208(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 1208);
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
	// stfs f0,28(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// stfs f13,32(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// stfs f12,36(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// stb r11,11(r31)
	PPC_STORE_U8(ctx.r31.u32 + 11, ctx.r11.u8);
	// addi r1,r1,1168
	ctx.r1.s64 = ctx.r1.s64 + 1168;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_822E00D0:
	// lfs f0,1200(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 1200);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f13,1204(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 1204);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,1208(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 1208);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,1212(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 1212);
	ctx.f11.f64 = double(temp.f32);
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// stfs f13,4(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// stfs f12,8(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// stfs f11,12(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// stfs f0,28(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// stfs f13,32(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// stfs f12,36(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// stfs f11,40(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// stb r11,11(r31)
	PPC_STORE_U8(ctx.r31.u32 + 11, ctx.r11.u8);
	// addi r1,r1,1168
	ctx.r1.s64 = ctx.r1.s64 + 1168;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_822E0110:
	// addi r11,r1,1200
	ctx.r11.s64 = ctx.r1.s64 + 1200;
	// addi r10,r1,1200
	ctx.r10.s64 = ctx.r1.s64 + 1200;
	// addi r9,r31,28
	ctx.r9.s64 = ctx.r31.s64 + 28;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r5,12(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stw r8,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r8.u32);
	// stw r7,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r7.u32);
	// stw r6,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r6.u32);
	// stw r5,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r5.u32);
	// stw r4,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r4.u32);
	// stw r3,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r3.u32);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// stw r10,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
loc_822E015C:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,11(r31)
	PPC_STORE_U8(ctx.r31.u32 + 11, ctx.r11.u8);
loc_822E0164:
	// addi r1,r1,1168
	ctx.r1.s64 = ctx.r1.s64 + 1168;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822DFCE8) {
	__imp__sub_822DFCE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E016C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822E016C) {
	__imp__sub_822E016C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E0170) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x822E0178;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31852
	ctx.r11.s64 = -2087452672;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r29,r11,-13648
	ctx.r29.s64 = ctx.r11.s64 + -13648;
	// addi r3,r29,-16396
	ctx.r3.s64 = ctx.r29.s64 + -16396;
	// bl 0x82171b90
	ctx.lr = 0x822E0190;
	sub_82171B90(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822de340
	ctx.lr = 0x822E0198;
	sub_822DE340(ctx, base);
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r11,r29
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x822e01c8
	if (ctx.cr6.eq) goto loc_822E01C8;
loc_822E01A8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x822e8058
	ctx.lr = 0x822E01B4;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822e01f4
	if (ctx.cr6.eq) goto loc_822E01F4;
	// lwz r31,68(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x822e01a8
	if (!ctx.cr6.eq) goto loc_822E01A8;
loc_822E01C8:
	// addi r11,r29,-16396
	ctx.r11.s64 = ctx.r29.s64 + -16396;
loc_822E01CC:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stwcx. r10,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x822e01cc
	if (!ctx.cr0.eq) goto loc_822E01CC;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_822E01F4:
	// addi r11,r29,-16396
	ctx.r11.s64 = ctx.r29.s64 + -16396;
loc_822E01F8:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stwcx. r10,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x822e01f8
	if (!ctx.cr0.eq) goto loc_822E01F8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822E0170) {
	__imp__sub_822E0170(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E0220) {
	PPC_FUNC_PROLOGUE();
	// b 0x822e0170
	sub_822E0170(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822E0220) {
	__imp__sub_822E0220(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E0224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822E0224) {
	__imp__sub_822E0224(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E0228) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,11(r3)
	PPC_STORE_U8(ctx.r3.u32 + 11, ctx.r11.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822E0228) {
	__imp__sub_822E0228(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E0234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822E0234) {
	__imp__sub_822E0234(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E0238) {
	PPC_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,11(r3)
	PPC_STORE_U8(ctx.r3.u32 + 11, ctx.r11.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822E0238) {
	__imp__sub_822E0238(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E0244) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822E0244) {
	__imp__sub_822E0244(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E0248) {
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
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822e0284
	if (ctx.cr6.eq) goto loc_822E0284;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
loc_822E0274:
	// lwzu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822e0274
	if (!ctx.cr6.eq) goto loc_822E0274;
loc_822E0284:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// stw r4,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r4.u32);
	// addi r30,r31,12
	ctx.r30.s64 = ctx.r31.s64 + 12;
	// ld r9,60(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 60);
	// ld r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r31.u32 + 12);
	// ld r6,20(r31)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r31.u32 + 20);
	// ld r7,44(r31)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r31.u32 + 44);
	// ld r8,52(r31)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r31.u32 + 52);
	// lbz r4,10(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 10);
	// bl 0x822df140
	ctx.lr = 0x822E02B0;
	sub_822DF140(ctx, base);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwz r6,8(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// stw r7,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// stw r6,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r6.u32);
	// stw r5,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r5.u32);
	// lwz r4,12(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r5,4(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r3,0(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r7,12(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r4,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r4.u32);
	// stw r6,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r6.u32);
	// stw r5,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r5.u32);
	// stw r3,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// stw r8,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r8.u32);
	// stw r7,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r7.u32);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
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

PPC_WEAK_FUNC(sub_822E0248) {
	__imp__sub_822E0248(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E0334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822E0334) {
	__imp__sub_822E0334(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E0338) {
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
	// bl 0x822e0170
	ctx.lr = 0x822E0348;
	sub_822E0170(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822e0360
	if (!ctx.cr6.eq) goto loc_822E0360;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_822E0360:
	// lbz r11,10(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822e0380
	if (!ctx.cr6.eq) goto loc_822E0380;
	// lbz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 12);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_822E0380:
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// bl 0x823deaf8
	ctx.lr = 0x822E0388;
	sub_823DEAF8(ctx, base);
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

PPC_WEAK_FUNC(sub_822E0338) {
	__imp__sub_822E0338(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E03A0) {
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
	// bl 0x822e0170
	ctx.lr = 0x822E03B0;
	sub_822E0170(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822e03c8
	if (!ctx.cr6.eq) goto loc_822E03C8;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_822E03C8:
	// lbz r11,10(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10);
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// beq cr6,0x822e03f4
	if (ctx.cr6.eq) goto loc_822E03F4;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// beq cr6,0x822e03f4
	if (ctx.cr6.eq) goto loc_822E03F4;
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// bl 0x823deaf8
	ctx.lr = 0x822E03E4;
	sub_823DEAF8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_822E03F4:
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822E03A0) {
	__imp__sub_822E03A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E0408) {
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
	// bl 0x822e0170
	ctx.lr = 0x822E0418;
	sub_822E0170(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822e0438
	if (!ctx.cr6.eq) goto loc_822E0438;
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
loc_822E0438:
	// lbz r11,10(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x822e0458
	if (!ctx.cr6.eq) goto loc_822E0458;
	// lfs f1,12(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_822E0458:
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// bl 0x823dec00
	ctx.lr = 0x822E0460;
	sub_823DEC00(ctx, base);
	// frsp f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64));
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822E0408) {
	__imp__sub_822E0408(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E0474) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822E0474) {
	__imp__sub_822E0474(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E0478) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x822e0170
	ctx.lr = 0x822E0490;
	sub_822E0170(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822e04cc
	if (!ctx.cr6.eq) goto loc_822E04CC;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r10,r11,-5928
	ctx.r10.s64 = ctx.r11.s64 + -5928;
	// lfs f0,-5928(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -5928);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// lfs f0,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// lfs f0,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
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
loc_822E04CC:
	// lfs f0,12(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// lfs f13,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// lfs f12,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r31)
	temp.f32 = float(ctx.f12.f64);
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
}

PPC_WEAK_FUNC(sub_822E0478) {
	__imp__sub_822E0478(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E04F8) {
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
	// bl 0x822e0170
	ctx.lr = 0x822E0508;
	sub_822E0170(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822e0528
	if (!ctx.cr6.eq) goto loc_822E0528;
loc_822E0510:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-28736
	ctx.r3.s64 = ctx.r11.s64 + -28736;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_822E0528:
	// lbz r11,10(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10);
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// bne cr6,0x822e0560
	if (!ctx.cr6.eq) goto loc_822E0560;
	// lwz r11,60(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822e0510
	if (ctx.cr6.eq) goto loc_822E0510;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r10,64(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_822E0560:
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822E04F8) {
	__imp__sub_822E04F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E0574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822E0574) {
	__imp__sub_822E0574(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E0578) {
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
	// bl 0x822e0170
	ctx.lr = 0x822E0588;
	sub_822E0170(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822e05a8
	if (!ctx.cr6.eq) goto loc_822E05A8;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-28736
	ctx.r3.s64 = ctx.r11.s64 + -28736;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_822E05A8:
	// ld r4,12(r3)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r3.u32 + 12);
	// ld r5,20(r3)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r3.u32 + 20);
	// bl 0x822de8d8
	ctx.lr = 0x822E05B4;
	sub_822DE8D8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822E0578) {
	__imp__sub_822E0578(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E05C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822E05C4) {
	__imp__sub_822E05C4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E05C8) {
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
	// bl 0x822e0170
	ctx.lr = 0x822E05E0;
	sub_822E0170(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822e0600
	if (!ctx.cr6.eq) goto loc_822E0600;
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
loc_822E0600:
	// ld r4,12(r3)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r3.u32 + 12);
	// ld r5,20(r3)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r3.u32 + 20);
	// bl 0x822de8d8
	ctx.lr = 0x822E060C;
	sub_822DE8D8(ctx, base);
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

PPC_WEAK_FUNC(sub_822E05C8) {
	__imp__sub_822E05C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E0620) {
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
	// lbz r11,10(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bne cr6,0x822e064c
	if (!ctx.cr6.eq) goto loc_822E064C;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x822e0658
	goto loc_822E0658;
loc_822E064C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// bl 0x822dedb8
	ctx.lr = 0x822E0658;
	sub_822DEDB8(ctx, base);
loc_822E0658:
	// lbz r3,83(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 83);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lbz r4,81(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r8,82(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// std r3,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r3.u64);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f12,88(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r8,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r8.u64);
	// lfd f10,88(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f8,f11
	ctx.f8.f64 = double(ctx.f11.s64);
	// lfs f0,6232(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6232);
	ctx.f0.f64 = double(temp.f32);
	// fcfid f7,f12
	ctx.f7.f64 = double(ctx.f12.s64);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// fcfid f6,f13
	ctx.f6.f64 = double(ctx.f13.s64);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f5,f9
	ctx.f5.f64 = double(float(ctx.f9.f64));
	// frsp f4,f8
	ctx.f4.f64 = double(float(ctx.f8.f64));
	// frsp f3,f7
	ctx.f3.f64 = double(float(ctx.f7.f64));
	// frsp f2,f6
	ctx.f2.f64 = double(float(ctx.f6.f64));
	// fmuls f1,f5,f0
	ctx.f1.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// stfs f1,8(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// fmuls f13,f4,f0
	ctx.f13.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// stfs f13,4(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// fmuls f12,f3,f0
	ctx.f12.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// stfs f12,0(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// fmuls f11,f2,f0
	ctx.f11.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// stfs f11,12(r31)
	temp.f32 = float(ctx.f11.f64);
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

PPC_WEAK_FUNC(sub_822E0620) {
	__imp__sub_822E0620(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E06E8) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x822e0170
	ctx.lr = 0x822E0700;
	sub_822E0170(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822e0724
	if (ctx.cr6.eq) goto loc_822E0724;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822e0620
	ctx.lr = 0x822E0710;
	sub_822E0620(ctx, base);
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
loc_822E0724:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r10,r11,-2072
	ctx.r10.s64 = ctx.r11.s64 + -2072;
	// lfs f0,-2072(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -2072);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// lfs f0,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// lfs f0,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// lfs f0,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
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

PPC_WEAK_FUNC(sub_822E06E8) {
	__imp__sub_822E06E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E0760) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x822E0768;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31852
	ctx.r11.s64 = -2087452672;
	// addi r27,r11,-9552
	ctx.r27.s64 = ctx.r11.s64 + -9552;
	// addi r3,r27,-20492
	ctx.r3.s64 = ctx.r27.s64 + -20492;
	// bl 0x82171bf8
	ctx.lr = 0x822E077C;
	sub_82171BF8(ctx, base);
	// lis r28,-31852
	ctx.r28.s64 = -2087452672;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// lwz r11,-30064(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -30064);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822e0890
	if (!ctx.cr6.gt) goto loc_822E0890;
	// addi r31,r27,12
	ctx.r31.s64 = ctx.r27.s64 + 12;
loc_822E0798:
	// lbz r10,-2(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + -2);
	// cmplwi cr6,r10,7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 7, ctx.xer);
	// bne cr6,0x822e0864
	if (!ctx.cr6.eq) goto loc_822E0864;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822e07cc
	if (ctx.cr6.eq) goto loc_822E07CC;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x822e07cc
	if (ctx.cr6.eq) goto loc_822E07CC;
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x822e07d0
	if (!ctx.cr6.eq) goto loc_822E07D0;
loc_822E07CC:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_822E07D0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822e07e8
	if (ctx.cr6.eq) goto loc_822E07E8;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x822dad58
	ctx.lr = 0x822E07E4;
	sub_822DAD58(ctx, base);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
loc_822E07E8:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822e0808
	if (ctx.cr6.eq) goto loc_822E0808;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x822e080c
	if (!ctx.cr6.eq) goto loc_822E080C;
loc_822E0808:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_822E080C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822e0824
	if (ctx.cr6.eq) goto loc_822E0824;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x822dad58
	ctx.lr = 0x822E0820;
	sub_822DAD58(ctx, base);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
loc_822E0824:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822e0844
	if (ctx.cr6.eq) goto loc_822E0844;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x822e0848
	if (!ctx.cr6.eq) goto loc_822E0848;
loc_822E0844:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_822E0848:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822e0860
	if (ctx.cr6.eq) goto loc_822E0860;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x822dad58
	ctx.lr = 0x822E085C;
	sub_822DAD58(ctx, base);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
loc_822E0860:
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
loc_822E0864:
	// lhz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + -4);
	// rlwinm r10,r11,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822e087c
	if (ctx.cr6.eq) goto loc_822E087C;
	// lwz r3,-12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	// bl 0x822dad58
	ctx.lr = 0x822E087C;
	sub_822DAD58(ctx, base);
loc_822E087C:
	// lwz r11,-30064(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -30064);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,72
	ctx.r31.s64 = ctx.r31.s64 + 72;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822e0798
	if (ctx.cr6.lt) goto loc_822E0798;
loc_822E0890:
	// lis r10,-31852
	ctx.r10.s64 = -2087452672;
	// stw r30,-30064(r28)
	PPC_STORE_U32(ctx.r28.u32 + -30064, ctx.r30.u32);
	// li r5,4096
	ctx.r5.s64 = 4096;
	// addi r9,r10,-13648
	ctx.r9.s64 = ctx.r10.s64 + -13648;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// stw r30,-16388(r9)
	PPC_STORE_U32(ctx.r9.u32 + -16388, ctx.r30.u32);
	// stb r30,-16399(r9)
	PPC_STORE_U8(ctx.r9.u32 + -16399, ctx.r30.u8);
	// bl 0x823de090
	ctx.lr = 0x822E08BC;
	sub_823DE090(ctx, base);
	// lwsync 
	// addi r11,r27,-20492
	ctx.r11.s64 = ctx.r27.s64 + -20492;
	// addi r6,r11,4
	ctx.r6.s64 = ctx.r11.s64 + 4;
loc_822E08C8:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r8,0,r6
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r6.u32);
	ctx.r8.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// stwcx. r8,0,r6
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r6.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r8.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x822e08c8
	if (!ctx.cr0.eq) goto loc_822E08C8;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822E0760) {
	__imp__sub_822E0760(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E08EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822E08EC) {
	__imp__sub_822E08EC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E08F0) {
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
	// lhz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r10,r11,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822e0930
	if (!ctx.cr6.eq) goto loc_822E0930;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// ori r10,r11,256
	ctx.r10.u64 = ctx.r11.u64 | 256;
	// sth r10,8(r31)
	PPC_STORE_U16(ctx.r31.u32 + 8, ctx.r10.u16);
	// bl 0x822dad28
	ctx.lr = 0x822E092C;
	sub_822DAD28(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
loc_822E0930:
	// lbz r11,10(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 10);
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// beq cr6,0x822e0a08
	if (ctx.cr6.eq) goto loc_822E0A08;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 28);
	// ld r5,36(r31)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r31.u32 + 36);
	// bl 0x822de8d8
	ctx.lr = 0x822E094C;
	sub_822DE8D8(ctx, base);
	// bl 0x822dad28
	ctx.lr = 0x822E0950;
	sub_822DAD28(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822e097c
	if (ctx.cr6.eq) goto loc_822E097C;
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x822e097c
	if (ctx.cr6.eq) goto loc_822E097C;
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x822e0980
	if (!ctx.cr6.eq) goto loc_822E0980;
loc_822E097C:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_822E0980:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822e0998
	if (ctx.cr6.eq) goto loc_822E0998;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x822dad58
	ctx.lr = 0x822E0994;
	sub_822DAD58(ctx, base);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
loc_822E0998:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// beq cr6,0x822e09b8
	if (ctx.cr6.eq) goto loc_822E09B8;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x822e09bc
	if (!ctx.cr6.eq) goto loc_822E09BC;
loc_822E09B8:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_822E09BC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822e09d4
	if (ctx.cr6.eq) goto loc_822E09D4;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// bl 0x822dad58
	ctx.lr = 0x822E09D0;
	sub_822DAD58(ctx, base);
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
loc_822E09D4:
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r5,52(r31)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r31.u32 + 52);
	// ld r4,44(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 44);
	// bl 0x822de8d8
	ctx.lr = 0x822E09E8;
	sub_822DE8D8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822de718
	ctx.lr = 0x822E09F8;
	sub_822DE718(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r11,7
	ctx.r11.s64 = 7;
	// stb r11,10(r31)
	PPC_STORE_U8(ctx.r31.u32 + 10, ctx.r11.u8);
	// stw r10,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r10.u32);
loc_822E0A08:
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

PPC_WEAK_FUNC(sub_822E08F0) {
	__imp__sub_822E08F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E0A20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x822E0A28;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,10(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// std r4,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r4.u64);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// std r5,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r5.u64);
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bgt cr6,0x822e0b4c
	if (ctx.cr6.gt) goto loc_822E0B4C;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822e0aec
	if (ctx.cr6.eq) goto loc_822E0AEC;
	// bdz 0x822e0b04
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_822E0B04;
	// bdz 0x822e0b24
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_822E0B24;
	// bdz 0x822e0b4c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_822E0B4C;
	// bdz 0x822e0b4c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_822E0B4C;
	// bdz 0x822e0a70
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_822E0A70;
	// bdz 0x822e0b4c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_822E0B4C;
	// b 0x822e0b04
	goto loc_822E0B04;
loc_822E0A70:
	// lwz r5,160(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplw cr6,r10,r5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x822e0b74
	if (ctx.cr6.eq) goto loc_822E0B74;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822e0aa4
	if (ctx.cr6.eq) goto loc_822E0AA4;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x822e0aa4
	if (ctx.cr6.eq) goto loc_822E0AA4;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x822e0aa8
	if (!ctx.cr6.eq) goto loc_822E0AA8;
loc_822E0AA4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822E0AA8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822e0ac0
	if (!ctx.cr6.eq) goto loc_822E0AC0;
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_822E0AC0:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822de718
	ctx.lr = 0x822E0ACC;
	sub_822DE718(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// beq cr6,0x822e0b74
	if (ctx.cr6.eq) goto loc_822E0B74;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822dad58
	ctx.lr = 0x822E0AE4;
	sub_822DAD58(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_822E0AEC:
	// lfs f0,160(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,164(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,44(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// stfs f13,48(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_822E0B04:
	// lfs f0,160(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,164(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,168(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,44(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// stfs f13,48(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// stfs f12,52(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_822E0B24:
	// lfs f0,160(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,164(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,168(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,172(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	ctx.f11.f64 = double(temp.f32);
	// stfs f0,44(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// stfs f13,48(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// stfs f12,52(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// stfs f11,56(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_822E0B4C:
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// addi r10,r31,44
	ctx.r10.s64 = ctx.r31.s64 + 44;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r6,12(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r9,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r9.u32);
	// stw r8,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r8.u32);
	// stw r7,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r7.u32);
	// stw r6,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r6.u32);
loc_822E0B74:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822E0A20) {
	__imp__sub_822E0A20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E0B7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822E0B7C) {
	__imp__sub_822E0B7C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E0B80) {
	PPC_FUNC_PROLOGUE();
	// b 0x822e0a20
	sub_822E0A20(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822E0B80) {
	__imp__sub_822E0B80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E0B84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822E0B84) {
	__imp__sub_822E0B84(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E0B88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x822E0B90;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,10(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// std r4,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r4.u64);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// std r5,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r5.u64);
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bgt cr6,0x822e0d24
	if (ctx.cr6.gt) goto loc_822E0D24;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822e0ca0
	if (ctx.cr6.eq) goto loc_822E0CA0;
	// bdz 0x822e0cc0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_822E0CC0;
	// bdz 0x822e0cec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_822E0CEC;
	// bdz 0x822e0d24
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_822E0D24;
	// bdz 0x822e0d24
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_822E0D24;
	// bdz 0x822e0bd8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_822E0BD8;
	// bdz 0x822e0d24
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_822E0D24;
	// b 0x822e0cc0
	goto loc_822E0CC0;
loc_822E0BD8:
	// lwz r5,160(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplw cr6,r5,r10
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x822e0d70
	if (ctx.cr6.eq) goto loc_822E0D70;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822e0c0c
	if (ctx.cr6.eq) goto loc_822E0C0C;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x822e0c0c
	if (ctx.cr6.eq) goto loc_822E0C0C;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x822e0c10
	if (!ctx.cr6.eq) goto loc_822E0C10;
loc_822E0C0C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822E0C10:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822e0c28
	if (!ctx.cr6.eq) goto loc_822E0C28;
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_822E0C28:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822de558
	ctx.lr = 0x822E0C34;
	sub_822DE558(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// beq cr6,0x822e0c60
	if (ctx.cr6.eq) goto loc_822E0C60;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x822e0c60
	if (ctx.cr6.eq) goto loc_822E0C60;
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x822e0c64
	if (!ctx.cr6.eq) goto loc_822E0C64;
loc_822E0C60:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822E0C64:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822e0c80
	if (ctx.cr6.eq) goto loc_822E0C80;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x822dad58
	ctx.lr = 0x822E0C78;
	sub_822DAD58(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
loc_822E0C80:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// beq cr6,0x822e0d70
	if (ctx.cr6.eq) goto loc_822E0D70;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822dad58
	ctx.lr = 0x822E0C98;
	sub_822DAD58(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_822E0CA0:
	// lfs f0,160(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,164(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// stfs f13,16(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// stfs f0,28(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// stfs f13,32(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_822E0CC0:
	// lfs f0,160(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,164(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,168(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// stfs f13,16(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// stfs f12,20(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// stfs f0,28(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// stfs f13,32(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// stfs f12,36(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_822E0CEC:
	// lfs f0,160(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,164(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,168(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,172(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	ctx.f11.f64 = double(temp.f32);
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// stfs f13,16(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// stfs f12,20(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// stfs f11,24(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// stfs f0,28(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// stfs f13,32(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// stfs f12,36(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// stfs f11,40(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_822E0D24:
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// addi r9,r31,12
	ctx.r9.s64 = ctx.r31.s64 + 12;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r5,12(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stw r8,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r8.u32);
	// stw r7,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r7.u32);
	// stw r6,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r6.u32);
	// stw r5,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r5.u32);
	// stw r4,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r4.u32);
	// stw r3,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r3.u32);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// stw r10,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
loc_822E0D70:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822E0B88) {
	__imp__sub_822E0B88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E0D78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x822E0D80;
	__savegprlr_26(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r10,r5,0,18,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x2000;
	// std r6,224(r1)
	PPC_STORE_U64(ctx.r1.u32 + 224, ctx.r6.u64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// std r8,60(r3)
	PPC_STORE_U64(ctx.r3.u32 + 60, ctx.r8.u64);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stb r4,10(r3)
	PPC_STORE_U8(ctx.r3.u32 + 10, ctx.r4.u8);
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// std r7,232(r1)
	PPC_STORE_U64(ctx.r1.u32 + 232, ctx.r7.u64);
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// clrlwi r11,r5,16
	ctx.r11.u64 = ctx.r5.u32 & 0xFFFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822e0e2c
	if (!ctx.cr6.eq) goto loc_822E0E2C;
	// rlwinm r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822e0de0
	if (ctx.cr6.eq) goto loc_822E0DE0;
	// lis r11,-31852
	ctx.r11.s64 = -2087452672;
	// lwz r11,-30036(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -30036);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822e0de0
	if (ctx.cr6.eq) goto loc_822E0DE0;
	// lbz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822e0e2c
	if (ctx.cr6.eq) goto loc_822E0E2C;
loc_822E0DE0:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r6,12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822def00
	ctx.lr = 0x822E0DF4;
	sub_822DEF00(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// ld r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// bl 0x822df140
	ctx.lr = 0x822E0E18;
	sub_822DF140(ctx, base);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r7,8(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r6,12(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// b 0x822e0e40
	goto loc_822E0E40;
loc_822E0E2C:
	// addi r11,r1,224
	ctx.r11.s64 = ctx.r1.s64 + 224;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r6,12(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
loc_822E0E40:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lbz r11,10(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 10);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// stw r6,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r6.u32);
	// stw r7,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r7.u32);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r26,80(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bne cr6,0x822e0e74
	if (!ctx.cr6.eq) goto loc_822E0E74;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x822e0e78
	if (!ctx.cr6.eq) goto loc_822E0E78;
loc_822E0E74:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_822E0E78:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822e0e98
	if (ctx.cr6.eq) goto loc_822E0E98;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x822dad28
	ctx.lr = 0x822E0E90;
	sub_822DAD28(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
loc_822E0E98:
	// lbz r11,10(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 10);
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// beq cr6,0x822e0ee8
	if (ctx.cr6.eq) goto loc_822E0EE8;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822e0ecc
	if (ctx.cr6.eq) goto loc_822E0ECC;
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x822e0ecc
	if (ctx.cr6.eq) goto loc_822E0ECC;
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x822e0ed0
	if (!ctx.cr6.eq) goto loc_822E0ED0;
loc_822E0ECC:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_822E0ED0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822e0ee8
	if (ctx.cr6.eq) goto loc_822E0EE8;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x822dad58
	ctx.lr = 0x822E0EE4;
	sub_822DAD58(ctx, base);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
loc_822E0EE8:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822e0f08
	if (ctx.cr6.eq) goto loc_822E0F08;
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x822e0f0c
	if (!ctx.cr6.eq) goto loc_822E0F0C;
loc_822E0F08:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_822E0F0C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822e0f24
	if (ctx.cr6.eq) goto loc_822E0F24;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x822dad58
	ctx.lr = 0x822E0F20;
	sub_822DAD58(ctx, base);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
loc_822E0F24:
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822e0f44
	if (ctx.cr6.eq) goto loc_822E0F44;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x822e0f48
	if (!ctx.cr6.eq) goto loc_822E0F48;
loc_822E0F44:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_822E0F48:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822e0f60
	if (ctx.cr6.eq) goto loc_822E0F60;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// bl 0x822dad58
	ctx.lr = 0x822E0F5C;
	sub_822DAD58(ctx, base);
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
loc_822E0F60:
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e0a20
	ctx.lr = 0x822E0F74;
	sub_822E0A20(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x822e0b88
	ctx.lr = 0x822E0F84;
	sub_822E0B88(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x822e0f94
	if (ctx.cr6.eq) goto loc_822E0F94;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x822dad58
	ctx.lr = 0x822E0F94;
	sub_822DAD58(ctx, base);
loc_822E0F94:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822E0D78) {
	__imp__sub_822E0D78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E0F9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822E0F9C) {
	__imp__sub_822E0F9C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E0FA0) {
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
	// lhz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// std r5,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r5.u64);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// std r6,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r6.u64);
	// rlwinm r6,r10,0,0,16
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFF8000;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x822e1008
	if (ctx.cr6.eq) goto loc_822E1008;
	// rlwinm r8,r8,0,25,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x822e1008
	if (ctx.cr6.eq) goto loc_822E1008;
	// li r12,10244
	ctx.r12.s64 = 10244;
	// and r10,r10,r12
	ctx.r10.u64 = ctx.r10.u64 & ctx.r12.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822e1008
	if (!ctx.cr6.eq) goto loc_822E1008;
	// lwz r6,44(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822def00
	ctx.lr = 0x822E1000;
	sub_822DEF00(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x822e100c
	goto loc_822E100C;
loc_822E1008:
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
loc_822E100C:
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r7,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r7.u32);
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
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

PPC_WEAK_FUNC(sub_822E0FA0) {
	__imp__sub_822E0FA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E1044) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822E1044) {
	__imp__sub_822E1044(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E1048) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x822E1050;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// rlwinm r10,r11,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// mr r28,r9
	ctx.r28.u64 = ctx.r9.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822e1108
	if (ctx.cr6.eq) goto loc_822E1108;
	// rlwinm r11,r30,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x100;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822e1108
	if (!ctx.cr6.eq) goto loc_822E1108;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822e0fa0
	ctx.lr = 0x822E10A0;
	sub_822E0FA0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r6,12(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// stw r7,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r7.u32);
	// stw r6,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r6.u32);
	// bl 0x822e08f0
	ctx.lr = 0x822E10D0;
	sub_822E08F0(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x822dad58
	ctx.lr = 0x822E10D8;
	sub_822DAD58(ctx, base);
	// lhz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// ld r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// ld r7,88(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// rlwinm r10,r10,0,24,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// sth r10,8(r31)
	PPC_STORE_U16(ctx.r31.u32 + 8, ctx.r10.u16);
	// bl 0x822e0d78
	ctx.lr = 0x822E1108;
	sub_822E0D78(ctx, base);
loc_822E1108:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822E1048) {
	__imp__sub_822E1048(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E1110) {
	PPC_FUNC_PROLOGUE();
	// ld r4,28(r3)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r3.u32 + 28);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// ld r5,36(r3)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r3.u32 + 36);
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x822dfce8
	sub_822DFCE8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822E1110) {
	__imp__sub_822E1110(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E1124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822E1124) {
	__imp__sub_822E1124(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E1128) {
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
	// lbz r3,10(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10);
	// ld r6,28(r31)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r31.u32 + 28);
	// ld r7,36(r31)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r31.u32 + 36);
	// ld r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 12);
	// ld r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r31.u32 + 20);
	// bl 0x822df9c8
	ctx.lr = 0x822E1154;
	sub_822DF9C8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822e116c
	if (!ctx.cr6.eq) goto loc_822E116C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 12);
	// ld r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r31.u32 + 20);
	// bl 0x822dfb48
	ctx.lr = 0x822E116C;
	sub_822DFB48(ctx, base);
loc_822E116C:
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

PPC_WEAK_FUNC(sub_822E1128) {
	__imp__sub_822E1128(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E1180) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf68
	ctx.lr = 0x822E1188;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// clrlwi r25,r6,16
	ctx.r25.u64 = ctx.r6.u32 & 0xFFFF;
	// mr r24,r10
	ctx.r24.u64 = ctx.r10.u64;
	// xor r10,r11,r25
	ctx.r10.u64 = ctx.r11.u64 ^ ctx.r25.u64;
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// rlwinm r9,r10,0,23,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x100;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822e11c8
	if (ctx.cr6.eq) goto loc_822E11C8;
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// bl 0x822e1048
	ctx.lr = 0x822E11C8;
	sub_822E1048(ctx, base);
loc_822E11C8:
	// lhz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// rlwinm r10,r11,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822e1204
	if (ctx.cr6.eq) goto loc_822E1204;
	// lbz r11,10(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 10);
	// clrlwi r10,r29,24
	ctx.r10.u64 = ctx.r29.u32 & 0xFF;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x822e1204
	if (ctx.cr6.eq) goto loc_822E1204;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e0d78
	ctx.lr = 0x822E1204;
	sub_822E0D78(ctx, base);
loc_822E1204:
	// lhz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// or r10,r11,r25
	ctx.r10.u64 = ctx.r11.u64 | ctx.r25.u64;
	// clrlwi r11,r10,16
	ctx.r11.u64 = ctx.r10.u32 & 0xFFFF;
	// sth r11,8(r31)
	PPC_STORE_U16(ctx.r31.u32 + 8, ctx.r11.u16);
	// beq cr6,0x822e1220
	if (ctx.cr6.eq) goto loc_822E1220;
	// stw r24,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r24.u32);
loc_822E1220:
	// rlwinm r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822e126c
	if (ctx.cr6.eq) goto loc_822E126C;
	// lis r11,-31852
	ctx.r11.s64 = -2087452672;
	// lwz r11,-30036(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -30036);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822e126c
	if (ctx.cr6.eq) goto loc_822E126C;
	// lbz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822e126c
	if (!ctx.cr6.eq) goto loc_822E126C;
	// li r6,0
	ctx.r6.s64 = 0;
	// ld r4,44(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 44);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r5,52(r31)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r31.u32 + 52);
	// bl 0x822dfce8
	ctx.lr = 0x822E125C;
	sub_822DFCE8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,44(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 44);
	// ld r5,52(r31)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r31.u32 + 52);
	// bl 0x822dfb48
	ctx.lr = 0x822E126C;
	sub_822DFB48(ctx, base);
loc_822E126C:
	// lhz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822e1290
	if (ctx.cr6.eq) goto loc_822E1290;
	// li r6,0
	ctx.r6.s64 = 0;
	// ld r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 28);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r5,36(r31)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r31.u32 + 36);
	// bl 0x822dfce8
	ctx.lr = 0x822E1290;
	sub_822DFCE8(ctx, base);
loc_822E1290:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822E1180) {
	__imp__sub_822E1180(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E1298) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf60
	ctx.lr = 0x822E12A0;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31852
	ctx.r11.s64 = -2087452672;
	// std r6,224(r1)
	PPC_STORE_U64(ctx.r1.u32 + 224, ctx.r6.u64);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// std r7,232(r1)
	PPC_STORE_U64(ctx.r1.u32 + 232, ctx.r7.u64);
	// addi r28,r11,-9552
	ctx.r28.s64 = ctx.r11.s64 + -9552;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// addi r3,r28,-20492
	ctx.r3.s64 = ctx.r28.s64 + -20492;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r24,r8
	ctx.r24.u64 = ctx.r8.u64;
	// mr r23,r9
	ctx.r23.u64 = ctx.r9.u64;
	// bl 0x82171bf8
	ctx.lr = 0x822E12D0;
	sub_82171BF8(ctx, base);
	// lis r30,-31852
	ctx.r30.s64 = -2087452672;
	// lwz r11,-30064(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -30064);
	// cmpwi cr6,r11,4096
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4096, ctx.xer);
	// blt cr6,0x822e1324
	if (ctx.cr6.lt) goto loc_822E1324;
	// lwsync 
	// addi r11,r28,-20492
	ctx.r11.s64 = ctx.r28.s64 + -20492;
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
loc_822E12EC:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r8
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r8.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stwcx. r10,0,r8
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r8.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x822e12ec
	if (!ctx.cr0.eq) goto loc_822E12EC;
	// lis r7,-32252
	ctx.r7.s64 = -2113667072;
	// li r6,4096
	ctx.r6.s64 = 4096;
	// addi r4,r7,-3516
	ctx.r4.s64 = ctx.r7.s64 + -3516;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822830e8
	ctx.lr = 0x822E1320;
	sub_822830E8(ctx, base);
	// lwz r11,-30064(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -30064);
loc_822E1324:
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lis r9,-31852
	ctx.r9.s64 = -2087452672;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r29,r9,-13648
	ctx.r29.s64 = ctx.r9.s64 + -13648;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r31,r10,r28
	ctx.r31.u64 = ctx.r10.u64 + ctx.r28.u64;
	// addi r8,r29,-16384
	ctx.r8.s64 = ctx.r29.s64 + -16384;
	// lis r7,-31848
	ctx.r7.s64 = -2087190528;
	// rlwinm r6,r26,0,23,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0x100;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r27,10(r31)
	PPC_STORE_U8(ctx.r31.u32 + 10, ctx.r27.u8);
	// stwx r31,r9,r8
	PPC_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r31.u32);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// stb r10,23216(r7)
	PPC_STORE_U8(ctx.r7.u32 + 23216, ctx.r10.u8);
	// stw r11,-30064(r30)
	PPC_STORE_U32(ctx.r30.u32 + -30064, ctx.r11.u32);
	// beq cr6,0x822e137c
	if (ctx.cr6.eq) goto loc_822E137C;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x822dad28
	ctx.lr = 0x822E1374;
	sub_822DAD28(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// b 0x822e1380
	goto loc_822E1380;
loc_822E137C:
	// stw r25,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r25.u32);
loc_822E1380:
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bgt cr6,0x822e1468
	if (ctx.cr6.gt) goto loc_822E1468;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822e13cc
	if (ctx.cr6.eq) goto loc_822E13CC;
	// bdz 0x822e13f0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_822E13F0;
	// bdz 0x822e1424
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_822E1424;
	// bdz 0x822e1468
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_822E1468;
	// bdz 0x822e1468
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_822E1468;
	// bdz 0x822e13b8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_822E13B8;
	// bdz 0x822e1468
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_822E1468;
	// b 0x822e13f0
	goto loc_822E13F0;
loc_822E13B8:
	// lwz r3,224(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// bl 0x822dad28
	ctx.lr = 0x822E13C0;
	sub_822DAD28(ctx, base);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// stw r3,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
	// b 0x822e14d4
	goto loc_822E14D4;
loc_822E13CC:
	// lfs f0,224(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,228(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// stfs f13,16(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// stfs f0,28(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// stfs f13,32(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// stfs f0,44(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// stfs f13,48(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// b 0x822e14d8
	goto loc_822E14D8;
loc_822E13F0:
	// lfs f0,224(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,228(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,232(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// stfs f13,16(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// stfs f12,20(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// stfs f0,28(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// stfs f13,32(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// stfs f12,36(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// stfs f0,44(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// stfs f13,48(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// stfs f12,52(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// b 0x822e14d8
	goto loc_822E14D8;
loc_822E1424:
	// lfs f0,224(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,228(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,232(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,236(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	ctx.f11.f64 = double(temp.f32);
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// stfs f13,16(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// stfs f12,20(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// stfs f11,24(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// stfs f0,28(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// stfs f13,32(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// stfs f12,36(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// stfs f11,40(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// stfs f0,44(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// stfs f13,48(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// stfs f12,52(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// stfs f11,56(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// b 0x822e14d8
	goto loc_822E14D8;
loc_822E1468:
	// addi r11,r1,224
	ctx.r11.s64 = ctx.r1.s64 + 224;
	// addi r10,r1,224
	ctx.r10.s64 = ctx.r1.s64 + 224;
	// addi r9,r1,224
	ctx.r9.s64 = ctx.r1.s64 + 224;
	// addi r8,r31,12
	ctx.r8.s64 = ctx.r31.s64 + 12;
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r4,12(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r30,0(r9)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r27,4(r9)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r22,8(r9)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r9,12(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// stw r7,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r7.u32);
	// stw r6,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r6.u32);
	// stw r5,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r5.u32);
	// stw r4,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r4.u32);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// stw r8,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r8.u32);
	// stw r10,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
	// stw r27,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r27.u32);
	// stw r22,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r22.u32);
	// stw r9,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r9.u32);
loc_822E14D4:
	// stw r3,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
loc_822E14D8:
	// li r11,0
	ctx.r11.s64 = 0;
	// std r24,60(r31)
	PPC_STORE_U64(ctx.r31.u32 + 60, ctx.r24.u64);
	// sth r26,8(r31)
	PPC_STORE_U16(ctx.r31.u32 + 8, ctx.r26.u16);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stb r11,11(r31)
	PPC_STORE_U8(ctx.r31.u32 + 11, ctx.r11.u8);
	// stw r23,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r23.u32);
	// bl 0x822de340
	ctx.lr = 0x822E14F4;
	sub_822DE340(ctx, base);
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r29
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// stwx r31,r11,r29
	PPC_STORE_U32(ctx.r11.u32 + ctx.r29.u32, ctx.r31.u32);
	// stw r10,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r10.u32);
	// lwsync 
	// addi r11,r28,-20492
	ctx.r11.s64 = ctx.r28.s64 + -20492;
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
loc_822E1510:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r9,0,r7
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r7.u32);
	ctx.r9.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stwcx. r9,0,r7
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r7.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x822e1510
	if (!ctx.cr0.eq) goto loc_822E1510;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823ddfb0
	__restgprlr_22(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822E1298) {
	__imp__sub_822E1298(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E1538) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822E1538) {
	__imp__sub_822E1538(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E153C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822E153C) {
	__imp__sub_822E153C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E1540) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf68
	ctx.lr = 0x822E1548;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// mr r24,r9
	ctx.r24.u64 = ctx.r9.u64;
	// bl 0x822e0170
	ctx.lr = 0x822E156C;
	sub_822E0170(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822e15a4
	if (ctx.cr6.eq) goto loc_822E15A4;
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822e1180
	ctx.lr = 0x822E1598;
	sub_822E1180(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
loc_822E15A4:
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822e1298
	ctx.lr = 0x822E15C4;
	sub_822E1298(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822E1540) {
	__imp__sub_822E1540(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E15CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822E15CC) {
	__imp__sub_822E15CC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E15D0) {
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
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// ld r7,104(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stb r4,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r4.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// ld r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// ld r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x822e1540
	ctx.lr = 0x822E1608;
	sub_822E1540(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822E15D0) {
	__imp__sub_822E15D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E1618) {
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
	// stw r4,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r4.u32);
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// li r4,5
	ctx.r4.s64 = 5;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// ld r7,104(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// ld r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// ld r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x822e1540
	ctx.lr = 0x822E164C;
	sub_822E1540(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822E1618) {
	__imp__sub_822E1618(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E165C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822E165C) {
	__imp__sub_822E165C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E1660) {
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
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// stfs f1,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// stfs f2,80(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stfs f3,84(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// ld r7,104(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// ld r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// ld r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x822e1540
	ctx.lr = 0x822E1694;
	sub_822E1540(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822E1660) {
	__imp__sub_822E1660(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E16A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822E16A4) {
	__imp__sub_822E16A4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E16A8) {
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
	// mr r5,r8
	ctx.r5.u64 = ctx.r8.u64;
	// stfs f1,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// stfs f2,100(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f3,80(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// ld r7,104(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// stfs f4,84(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// ld r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// ld r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x822e1540
	ctx.lr = 0x822E16DC;
	sub_822E1540(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822E16A8) {
	__imp__sub_822E16A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E16EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822E16EC) {
	__imp__sub_822E16EC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E16F0) {
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
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
	// stfs f1,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// stfs f2,100(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// li r4,3
	ctx.r4.s64 = 3;
	// stfs f3,104(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f4,80(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// ld r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// stfs f5,84(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// ld r7,104(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// ld r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x822e1540
	ctx.lr = 0x822E172C;
	sub_822E1540(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822E16F0) {
	__imp__sub_822E16F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E173C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822E173C) {
	__imp__sub_822E173C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E1740) {
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
	// stfs f1,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// mr r5,r8
	ctx.r5.u64 = ctx.r8.u64;
	// stfs f2,100(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// li r4,9
	ctx.r4.s64 = 9;
	// stfs f3,104(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f4,84(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// ld r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// ld r7,104(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// lfs f0,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// ld r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x822e1540
	ctx.lr = 0x822E1780;
	sub_822E1540(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822E1740) {
	__imp__sub_822E1740(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E1790) {
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
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// stfs f1,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// li r4,4
	ctx.r4.s64 = 4;
	// stfs f2,100(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f3,104(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lwz r9,212(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// stfs f4,108(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// ld r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// stfs f5,80(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// ld r7,104(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// stfs f6,84(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// ld r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x822e1540
	ctx.lr = 0x822E17D0;
	sub_822E1540(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822E1790) {
	__imp__sub_822E1790(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E17E0) {
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
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// ld r7,88(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// ld r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// li r4,7
	ctx.r4.s64 = 7;
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// ld r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x822e1540
	ctx.lr = 0x822E1814;
	sub_822E1540(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822E17E0) {
	__imp__sub_822E17E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E1824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822E1824) {
	__imp__sub_822E1824(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E1828) {
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
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// stw r5,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r5.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// beq cr6,0x822e1868
	if (ctx.cr6.eq) goto loc_822E1868;
loc_822E1854:
	// lwzu r10,4(r4)
	ea = 4 + ctx.r4.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	ctx.r4.u32 = ea;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822e1854
	if (!ctx.cr6.eq) goto loc_822E1854;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_822E1868:
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// ld r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// li r4,6
	ctx.r4.s64 = 6;
	// ld r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// ld r7,104(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// bl 0x822e1540
	ctx.lr = 0x822E1880;
	sub_822E1540(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822E1828) {
	__imp__sub_822E1828(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E1890) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x822E1898;
	__savegprlr_29(ctx, base);
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x823de01c
	ctx.lr = 0x822E18A0;
	__savefpr_25(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f27,f2
	ctx.fpscr.disableFlushMode();
	ctx.f27.f64 = ctx.f2.f64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmr f26,f3
	ctx.f26.f64 = ctx.f3.f64;
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// fmr f25,f4
	ctx.f25.f64 = ctx.f4.f64;
	// mr r29,r9
	ctx.r29.u64 = ctx.r9.u64;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f31,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f31.f64 = double(temp.f32);
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// fsubs f0,f1,f31
	ctx.f0.f64 = double(float(ctx.f1.f64 - ctx.f31.f64));
	// lfs f30,5484(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f30.f64 = double(temp.f32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f29,3100(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3100);
	ctx.f29.f64 = double(temp.f32);
	// lfs f28,-3468(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -3468);
	ctx.f28.f64 = double(temp.f32);
	// fsel f13,f0,f31,f1
	ctx.f13.f64 = ctx.f0.f64 >= 0.0 ? ctx.f31.f64 : ctx.f1.f64;
	// fneg f12,f13
	ctx.f12.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fsel f11,f12,f30,f13
	ctx.f11.f64 = ctx.f12.f64 >= 0.0 ? ctx.f30.f64 : ctx.f13.f64;
	// fmadds f1,f11,f29,f28
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f29.f64 + ctx.f28.f64));
	// bl 0x823dde20
	ctx.lr = 0x822E18F4;
	sub_823DDE20(ctx, base);
	// fsubs f10,f27,f31
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f27.f64 - ctx.f31.f64));
	// frsp f9,f1
	ctx.f9.f64 = double(float(ctx.f1.f64));
	// fsel f8,f10,f31,f27
	ctx.f8.f64 = ctx.f10.f64 >= 0.0 ? ctx.f31.f64 : ctx.f27.f64;
	// fctiwz f7,f9
	ctx.f7.s64 = (ctx.f9.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f9.f64));
	// stfd f7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f7.u64);
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stb r7,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r7.u8);
	// fneg f6,f8
	ctx.f6.u64 = ctx.f8.u64 ^ 0x8000000000000000;
	// fsel f5,f6,f30,f8
	ctx.f5.f64 = ctx.f6.f64 >= 0.0 ? ctx.f30.f64 : ctx.f8.f64;
	// fmadds f1,f5,f29,f28
	ctx.f1.f64 = double(float(ctx.f5.f64 * ctx.f29.f64 + ctx.f28.f64));
	// bl 0x823dde20
	ctx.lr = 0x822E1920;
	sub_823DDE20(ctx, base);
	// fsubs f4,f26,f31
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = double(float(ctx.f26.f64 - ctx.f31.f64));
	// frsp f3,f1
	ctx.f3.f64 = double(float(ctx.f1.f64));
	// fsel f2,f4,f31,f26
	ctx.f2.f64 = ctx.f4.f64 >= 0.0 ? ctx.f31.f64 : ctx.f26.f64;
	// fctiwz f1,f3
	ctx.f1.s64 = (ctx.f3.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f3.f64));
	// stfd f1,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f1.u64);
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stb r5,97(r1)
	PPC_STORE_U8(ctx.r1.u32 + 97, ctx.r5.u8);
	// fneg f0,f2
	ctx.f0.u64 = ctx.f2.u64 ^ 0x8000000000000000;
	// fsel f13,f0,f30,f2
	ctx.f13.f64 = ctx.f0.f64 >= 0.0 ? ctx.f30.f64 : ctx.f2.f64;
	// fmadds f1,f13,f29,f28
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f29.f64 + ctx.f28.f64));
	// bl 0x823dde20
	ctx.lr = 0x822E194C;
	sub_823DDE20(ctx, base);
	// fsubs f12,f25,f31
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f25.f64 - ctx.f31.f64));
	// frsp f11,f1
	ctx.f11.f64 = double(float(ctx.f1.f64));
	// fsel f10,f12,f31,f25
	ctx.f10.f64 = ctx.f12.f64 >= 0.0 ? ctx.f31.f64 : ctx.f25.f64;
	// fctiwz f9,f11
	ctx.f9.s64 = (ctx.f11.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f9.u64);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stb r3,98(r1)
	PPC_STORE_U8(ctx.r1.u32 + 98, ctx.r3.u8);
	// fneg f8,f10
	ctx.f8.u64 = ctx.f10.u64 ^ 0x8000000000000000;
	// fsel f7,f8,f30,f10
	ctx.f7.f64 = ctx.f8.f64 >= 0.0 ? ctx.f30.f64 : ctx.f10.f64;
	// fmadds f1,f7,f29,f28
	ctx.f1.f64 = double(float(ctx.f7.f64 * ctx.f29.f64 + ctx.f28.f64));
	// bl 0x823dde20
	ctx.lr = 0x822E1978;
	sub_823DDE20(ctx, base);
	// frsp f6,f1
	ctx.fpscr.disableFlushMode();
	ctx.f6.f64 = double(float(ctx.f1.f64));
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// li r8,0
	ctx.r8.s64 = 0;
	// std r8,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r8.u64);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// ld r7,104(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fctiwz f5,f6
	ctx.f5.s64 = (ctx.f6.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f6.f64));
	// stfd f5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f5.u64);
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stb r6,99(r1)
	PPC_STORE_U8(ctx.r1.u32 + 99, ctx.r6.u8);
	// ld r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// ld r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// bl 0x822e1540
	ctx.lr = 0x822E19B8;
	sub_822E1540(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x823de068
	ctx.lr = 0x822E19C4;
	__restfpr_25(ctx, base);
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822E1890) {
	__imp__sub_822E1890(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E19C8) {
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
	// lbz r11,10(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10);
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822e19ec
	if (!ctx.cr6.eq) goto loc_822E19EC;
	// stb r4,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r4.u8);
	// b 0x822e1a10
	goto loc_822E1A10;
loc_822E19EC:
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822e1a04
	if (ctx.cr6.eq) goto loc_822E1A04;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r10,r11,-17076
	ctx.r10.s64 = ctx.r11.s64 + -17076;
	// b 0x822e1a0c
	goto loc_822E1A0C;
loc_822E1A04:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r10,r11,8244
	ctx.r10.s64 = ctx.r11.s64 + 8244;
loc_822E1A0C:
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
loc_822E1A10:
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x822dfce8
	ctx.lr = 0x822E1A1C;
	sub_822DFCE8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822E19C8) {
	__imp__sub_822E19C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E1A2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822E1A2C) {
	__imp__sub_822E1A2C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E1A30) {
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
	// lbz r11,10(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// beq cr6,0x822e1a84
	if (ctx.cr6.eq) goto loc_822E1A84;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// beq cr6,0x822e1a84
	if (ctx.cr6.eq) goto loc_822E1A84;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r5,r11,13712
	ctx.r5.s64 = ctx.r11.s64 + 13712;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822e8368
	ctx.lr = 0x822E1A78;
	sub_822E8368(ctx, base);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// b 0x822e1a88
	goto loc_822E1A88;
loc_822E1A84:
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
loc_822E1A88:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x822dfce8
	ctx.lr = 0x822E1A9C;
	sub_822DFCE8(ctx, base);
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

PPC_WEAK_FUNC(sub_822E1A30) {
	__imp__sub_822E1A30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E1AB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822E1AB4) {
	__imp__sub_822E1AB4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E1AB8) {
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
	// lbz r11,10(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x822e1ae8
	if (!ctx.cr6.eq) goto loc_822E1AE8;
	// stfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// b 0x822e1b0c
	goto loc_822E1B0C;
loc_822E1AE8:
	// stfd f1,40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f1.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r5,r11,17796
	ctx.r5.s64 = ctx.r11.s64 + 17796;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822e8368
	ctx.lr = 0x822E1B04;
	sub_822E8368(ctx, base);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
loc_822E1B0C:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x822dfce8
	ctx.lr = 0x822E1B20;
	sub_822DFCE8(ctx, base);
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

PPC_WEAK_FUNC(sub_822E1AB8) {
	__imp__sub_822E1AB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E1B38) {
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
	// lbz r11,10(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bne cr6,0x822e1b6c
	if (!ctx.cr6.eq) goto loc_822E1B6C;
	// stfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f2,84(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// b 0x822e1b98
	goto loc_822E1B98;
loc_822E1B6C:
	// stfd f2,48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.f2.u64);
	// ld r7,48(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 48);
	// stfd f1,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f1.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r5,r11,-4340
	ctx.r5.s64 = ctx.r11.s64 + -4340;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822e8368
	ctx.lr = 0x822E1B90;
	sub_822E8368(ctx, base);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
loc_822E1B98:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x822dfce8
	ctx.lr = 0x822E1BAC;
	sub_822DFCE8(ctx, base);
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

PPC_WEAK_FUNC(sub_822E1B38) {
	__imp__sub_822E1B38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E1BC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822E1BC4) {
	__imp__sub_822E1BC4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E1BC8) {
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
	// lbz r11,10(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x822e1c30
	if (ctx.cr6.eq) goto loc_822E1C30;
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// beq cr6,0x822e1c30
	if (ctx.cr6.eq) goto loc_822E1C30;
	// stfd f3,56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.f3.u64);
	// ld r8,56(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 56);
	// stfd f2,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.f2.u64);
	// ld r7,48(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 48);
	// stfd f1,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f1.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r4,96
	ctx.r4.s64 = 96;
	// addi r5,r11,-27904
	ctx.r5.s64 = ctx.r11.s64 + -27904;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822e8368
	ctx.lr = 0x822E1C24;
	sub_822E8368(ctx, base);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// b 0x822e1c3c
	goto loc_822E1C3C;
loc_822E1C30:
	// stfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f2,84(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f3,88(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
loc_822E1C3C:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x822dfce8
	ctx.lr = 0x822E1C50;
	sub_822DFCE8(ctx, base);
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

PPC_WEAK_FUNC(sub_822E1BC8) {
	__imp__sub_822E1BC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E1C68) {
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
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,10(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bne cr6,0x822e1ca4
	if (!ctx.cr6.eq) goto loc_822E1CA4;
	// stfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f2,84(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f3,88(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f4,92(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// b 0x822e1ce0
	goto loc_822E1CE0;
loc_822E1CA4:
	// stfd f4,64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 64, ctx.f4.u64);
	// ld r9,64(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 64);
	// stfd f3,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.f3.u64);
	// ld r8,56(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 56);
	// stfd f2,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.f2.u64);
	// ld r7,48(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 48);
	// stfd f1,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f1.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r5,r11,-4352
	ctx.r5.s64 = ctx.r11.s64 + -4352;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822e8368
	ctx.lr = 0x822E1CD8;
	sub_822E8368(ctx, base);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
loc_822E1CE0:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x822dfce8
	ctx.lr = 0x822E1CF4;
	sub_822DFCE8(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
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

PPC_WEAK_FUNC(sub_822E1C68) {
	__imp__sub_822E1C68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E1D0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822E1D0C) {
	__imp__sub_822E1D0C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E1D10) {
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
	// stwu r1,-1152(r1)
	ea = -1152 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,10(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bne cr6,0x822e1d50
	if (!ctx.cr6.eq) goto loc_822E1D50;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822e7e98
	ctx.lr = 0x822E1D44;
	sub_822E7E98(ctx, base);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x822e1d5c
	goto loc_822E1D5C;
loc_822E1D50:
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// bl 0x822dec90
	ctx.lr = 0x822E1D58;
	sub_822DEC90(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
loc_822E1D5C:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x822dfce8
	ctx.lr = 0x822E1D70;
	sub_822DFCE8(ctx, base);
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

PPC_WEAK_FUNC(sub_822E1D10) {
	__imp__sub_822E1D10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E1D88) {
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
	ctx.lr = 0x822E1DA0;
	__savefpr_25(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,10(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f27,f2
	ctx.fpscr.disableFlushMode();
	ctx.f27.f64 = ctx.f2.f64;
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// fmr f26,f3
	ctx.f26.f64 = ctx.f3.f64;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// fmr f25,f4
	ctx.f25.f64 = ctx.f4.f64;
	// bne cr6,0x822e1e98
	if (!ctx.cr6.eq) goto loc_822E1E98;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f31,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f31.f64 = double(temp.f32);
	// fsubs f0,f1,f31
	ctx.f0.f64 = double(float(ctx.f1.f64 - ctx.f31.f64));
	// lfs f30,5484(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f30.f64 = double(temp.f32);
	// lfs f29,3100(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3100);
	ctx.f29.f64 = double(temp.f32);
	// lfs f28,2416(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2416);
	ctx.f28.f64 = double(temp.f32);
	// fsel f13,f0,f31,f1
	ctx.f13.f64 = ctx.f0.f64 >= 0.0 ? ctx.f31.f64 : ctx.f1.f64;
	// fneg f12,f13
	ctx.f12.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fsel f11,f12,f30,f13
	ctx.f11.f64 = ctx.f12.f64 >= 0.0 ? ctx.f30.f64 : ctx.f13.f64;
	// fmadds f1,f11,f29,f28
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f29.f64 + ctx.f28.f64));
	// bl 0x823dde20
	ctx.lr = 0x822E1DFC;
	sub_823DDE20(ctx, base);
	// fsubs f10,f27,f31
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f27.f64 - ctx.f31.f64));
	// frsp f9,f1
	ctx.f9.f64 = double(float(ctx.f1.f64));
	// fsel f8,f10,f31,f27
	ctx.f8.f64 = ctx.f10.f64 >= 0.0 ? ctx.f31.f64 : ctx.f27.f64;
	// fctiwz f7,f9
	ctx.f7.s64 = (ctx.f9.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f9.f64));
	// stfd f7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f7.u64);
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stb r7,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r7.u8);
	// fneg f6,f8
	ctx.f6.u64 = ctx.f8.u64 ^ 0x8000000000000000;
	// fsel f5,f6,f30,f8
	ctx.f5.f64 = ctx.f6.f64 >= 0.0 ? ctx.f30.f64 : ctx.f8.f64;
	// fmadds f1,f5,f29,f28
	ctx.f1.f64 = double(float(ctx.f5.f64 * ctx.f29.f64 + ctx.f28.f64));
	// bl 0x823dde20
	ctx.lr = 0x822E1E28;
	sub_823DDE20(ctx, base);
	// fsubs f4,f26,f31
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = double(float(ctx.f26.f64 - ctx.f31.f64));
	// frsp f3,f1
	ctx.f3.f64 = double(float(ctx.f1.f64));
	// fsel f2,f4,f31,f26
	ctx.f2.f64 = ctx.f4.f64 >= 0.0 ? ctx.f31.f64 : ctx.f26.f64;
	// fctiwz f1,f3
	ctx.f1.s64 = (ctx.f3.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f3.f64));
	// stfd f1,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f1.u64);
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stb r5,97(r1)
	PPC_STORE_U8(ctx.r1.u32 + 97, ctx.r5.u8);
	// fneg f0,f2
	ctx.f0.u64 = ctx.f2.u64 ^ 0x8000000000000000;
	// fsel f13,f0,f30,f2
	ctx.f13.f64 = ctx.f0.f64 >= 0.0 ? ctx.f30.f64 : ctx.f2.f64;
	// fmadds f1,f13,f29,f28
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f29.f64 + ctx.f28.f64));
	// bl 0x823dde20
	ctx.lr = 0x822E1E54;
	sub_823DDE20(ctx, base);
	// fsubs f12,f25,f31
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f25.f64 - ctx.f31.f64));
	// frsp f11,f1
	ctx.f11.f64 = double(float(ctx.f1.f64));
	// fsel f10,f12,f31,f25
	ctx.f10.f64 = ctx.f12.f64 >= 0.0 ? ctx.f31.f64 : ctx.f25.f64;
	// fctiwz f9,f11
	ctx.f9.s64 = (ctx.f11.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f9.u64);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stb r3,98(r1)
	PPC_STORE_U8(ctx.r1.u32 + 98, ctx.r3.u8);
	// fneg f8,f10
	ctx.f8.u64 = ctx.f10.u64 ^ 0x8000000000000000;
	// fsel f7,f8,f30,f10
	ctx.f7.f64 = ctx.f8.f64 >= 0.0 ? ctx.f30.f64 : ctx.f10.f64;
	// fmadds f1,f7,f29,f28
	ctx.f1.f64 = double(float(ctx.f7.f64 * ctx.f29.f64 + ctx.f28.f64));
	// bl 0x823dde20
	ctx.lr = 0x822E1E80;
	sub_823DDE20(ctx, base);
	// frsp f6,f1
	ctx.fpscr.disableFlushMode();
	ctx.f6.f64 = double(float(ctx.f1.f64));
	// fctiwz f5,f6
	ctx.f5.s64 = (ctx.f6.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f6.f64));
	// stfd f5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f5.u64);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stb r10,99(r1)
	PPC_STORE_U8(ctx.r1.u32 + 99, ctx.r10.u8);
	// b 0x822e1ee0
	goto loc_822E1EE0;
loc_822E1E98:
	// stfd f25,64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 64, ctx.f25.u64);
	// ld r9,64(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 64);
	// stfd f26,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.f26.u64);
	// ld r8,56(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 56);
	// stfd f27,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.f27.u64);
	// ld r7,48(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 48);
	// stfd f1,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f1.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// fmr f4,f25
	ctx.f4.f64 = ctx.f25.f64;
	// li r4,128
	ctx.r4.s64 = 128;
	// fmr f3,f26
	ctx.f3.f64 = ctx.f26.f64;
	// addi r5,r11,-4352
	ctx.r5.s64 = ctx.r11.s64 + -4352;
	// fmr f2,f27
	ctx.f2.f64 = ctx.f27.f64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822e8368
	ctx.lr = 0x822E1ED8;
	sub_822E8368(ctx, base);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
loc_822E1EE0:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// ld r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// bl 0x822dfce8
	ctx.lr = 0x822E1EF4;
	sub_822DFCE8(ctx, base);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x823de068
	ctx.lr = 0x822E1F00;
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

PPC_WEAK_FUNC(sub_822E1D88) {
	__imp__sub_822E1D88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E1F14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822E1F14) {
	__imp__sub_822E1F14(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E1F18) {
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
	// lbz r11,10(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822e1f38
	if (!ctx.cr6.eq) goto loc_822E1F38;
	// stb r4,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r4.u8);
	// b 0x822e1f5c
	goto loc_822E1F5C;
loc_822E1F38:
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822e1f50
	if (ctx.cr6.eq) goto loc_822E1F50;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r10,r11,-17076
	ctx.r10.s64 = ctx.r11.s64 + -17076;
	// b 0x822e1f58
	goto loc_822E1F58;
loc_822E1F50:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r10,r11,8244
	ctx.r10.s64 = ctx.r11.s64 + 8244;
loc_822E1F58:
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
loc_822E1F5C:
	// li r6,0
	ctx.r6.s64 = 0;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x822dfce8
	ctx.lr = 0x822E1F6C;
	sub_822DFCE8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822E1F18) {
	__imp__sub_822E1F18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E1F7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822E1F7C) {
	__imp__sub_822E1F7C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E1F80) {
	PPC_FUNC_PROLOGUE();
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x822e1a30
	sub_822E1A30(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822E1F80) {
	__imp__sub_822E1F80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E1F88) {
	PPC_FUNC_PROLOGUE();
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x822e1ab8
	sub_822E1AB8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822E1F88) {
	__imp__sub_822E1F88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E1F90) {
	PPC_FUNC_PROLOGUE();
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x822e1b38
	sub_822E1B38(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822E1F90) {
	__imp__sub_822E1F90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E1F98) {
	PPC_FUNC_PROLOGUE();
	// li r7,0
	ctx.r7.s64 = 0;
	// b 0x822e1bc8
	sub_822E1BC8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822E1F98) {
	__imp__sub_822E1F98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E1FA0) {
	PPC_FUNC_PROLOGUE();
	// li r8,0
	ctx.r8.s64 = 0;
	// b 0x822e1c68
	sub_822E1C68(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822E1FA0) {
	__imp__sub_822E1FA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E1FA8) {
	PPC_FUNC_PROLOGUE();
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x822e1d10
	sub_822E1D10(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822E1FA8) {
	__imp__sub_822E1FA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E1FB0) {
	PPC_FUNC_PROLOGUE();
	// li r8,0
	ctx.r8.s64 = 0;
	// b 0x822e1d88
	sub_822E1D88(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822E1FB0) {
	__imp__sub_822E1FB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E1FB8) {
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
	// stwu r1,-2192(r1)
	ea = -2192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822e7e98
	ctx.lr = 0x822E1FE0;
	sub_822E7E98(ctx, base);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// ld r5,60(r31)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r31.u32 + 60);
	// lbz r4,10(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 10);
	// bl 0x822def00
	ctx.lr = 0x822E1FF4;
	sub_822DEF00(ctx, base);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lwz r7,8(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r6,12(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lbz r10,10(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 10);
	// cmplwi cr6,r10,6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 6, ctx.xer);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// stw r7,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r7.u32);
	// stw r6,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r6.u32);
	// bne cr6,0x822e2098
	if (!ctx.cr6.eq) goto loc_822E2098;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,-1337
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1337, ctx.xer);
	// bne cr6,0x822e2098
	if (!ctx.cr6.eq) goto loc_822E2098;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,-3560
	ctx.r4.s64 = ctx.r11.s64 + -3560;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82280900
	ctx.lr = 0x822E2048;
	sub_82280900(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1024
	ctx.r6.s64 = 1024;
	// ld r4,60(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 60);
	// addi r5,r1,1136
	ctx.r5.s64 = ctx.r1.s64 + 1136;
	// lbz r3,10(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 10);
	// bl 0x822df618
	ctx.lr = 0x822E2060;
	sub_822DF618(ctx, base);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r10,-3724
	ctx.r4.s64 = ctx.r10.s64 + -3724;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82280900
	ctx.lr = 0x822E2074;
	sub_82280900(ctx, base);
	// lwz r8,44(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r7,48(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lwz r6,52(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r5,56(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// stw r7,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r7.u32);
	// stw r6,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r6.u32);
	// stw r5,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r5.u32);
loc_822E2098:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x822dfce8
	ctx.lr = 0x822E20AC;
	sub_822DFCE8(ctx, base);
	// addi r1,r1,2192
	ctx.r1.s64 = ctx.r1.s64 + 2192;
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

PPC_WEAK_FUNC(sub_822E1FB8) {
	__imp__sub_822E1FB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E20C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822E20C4) {
	__imp__sub_822E20C4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E20C8) {
	PPC_FUNC_PROLOGUE();
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x822e1fb8
	sub_822E1FB8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822E20C8) {
	__imp__sub_822E20C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E20D0) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x822e0170
	ctx.lr = 0x822E20F0;
	sub_822E0170(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822e2104
	if (ctx.cr6.eq) goto loc_822E2104;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822e1f18
	ctx.lr = 0x822E2100;
	sub_822E1F18(ctx, base);
	// b 0x822e2158
	goto loc_822E2158;
loc_822E2104:
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822e211c
	if (ctx.cr6.eq) goto loc_822E211C;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,-17076
	ctx.r11.s64 = ctx.r11.s64 + -17076;
	// b 0x822e2124
	goto loc_822E2124;
loc_822E211C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r11,r11,8244
	ctx.r11.s64 = ctx.r11.s64 + 8244;
loc_822E2124:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// ld r7,88(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// ld r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lis r4,-32253
	ctx.r4.s64 = -2113732608;
	// li r5,256
	ctx.r5.s64 = 256;
	// addi r9,r4,14468
	ctx.r9.s64 = ctx.r4.s64 + 14468;
	// std r8,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r8.u64);
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ld r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x822e1540
	ctx.lr = 0x822E2158;
	sub_822E1540(ctx, base);
loc_822E2158:
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

PPC_WEAK_FUNC(sub_822E20D0) {
	__imp__sub_822E20D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E2170) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x822e0170
	ctx.lr = 0x822E2190;
	sub_822E0170(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822e21a8
	if (ctx.cr6.eq) goto loc_822E21A8;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822e1a30
	ctx.lr = 0x822E21A4;
	sub_822E1A30(ctx, base);
	// b 0x822e21f8
	goto loc_822E21F8;
loc_822E21A8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r11,13712
	ctx.r5.s64 = ctx.r11.s64 + 13712;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822e8368
	ctx.lr = 0x822E21C0;
	sub_822E8368(ctx, base);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r8,0
	ctx.r8.s64 = 0;
	// ld r7,104(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lis r6,-32253
	ctx.r6.s64 = -2113732608;
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// li r5,256
	ctx.r5.s64 = 256;
	// std r8,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r8.u64);
	// addi r9,r6,14468
	ctx.r9.s64 = ctx.r6.s64 + 14468;
	// ld r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x822e1540
	ctx.lr = 0x822E21F8;
	sub_822E1540(ctx, base);
loc_822E21F8:
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

PPC_WEAK_FUNC(sub_822E2170) {
	__imp__sub_822E2170(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E2210) {
	PPC_FUNC_PROLOGUE();
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x822e0170
	ctx.lr = 0x822E2230;
	sub_822E0170(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822e2248
	if (ctx.cr6.eq) goto loc_822E2248;
	// li r5,0
	ctx.r5.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x822e1ab8
	ctx.lr = 0x822E2244;
	sub_822E1AB8(ctx, base);
	// b 0x822e2294
	goto loc_822E2294;
loc_822E2248:
	// stfd f31,24(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 24, ctx.f31.u64);
	// ld r4,24(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 24);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// addi r3,r11,17796
	ctx.r3.s64 = ctx.r11.s64 + 17796;
	// bl 0x822e84f0
	ctx.lr = 0x822E2260;
	sub_822E84F0(ctx, base);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r9,0
	ctx.r9.s64 = 0;
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// ld r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// li r5,256
	ctx.r5.s64 = 256;
	// ld r7,104(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// addi r9,r8,14468
	ctx.r9.s64 = ctx.r8.s64 + 14468;
	// ld r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e1540
	ctx.lr = 0x822E2294;
	sub_822E1540(ctx, base);
loc_822E2294:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
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

PPC_WEAK_FUNC(sub_822E2210) {
	__imp__sub_822E2210(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E22AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822E22AC) {
	__imp__sub_822E22AC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E22B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stfd f30,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f30.u64);
	// stfd f31,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// bl 0x822e0170
	ctx.lr = 0x822E22D8;
	sub_822E0170(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822e22f4
	if (ctx.cr6.eq) goto loc_822E22F4;
	// li r6,0
	ctx.r6.s64 = 0;
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x822e1b38
	ctx.lr = 0x822E22F0;
	sub_822E1B38(ctx, base);
	// b 0x822e234c
	goto loc_822E234C;
loc_822E22F4:
	// stfd f30,32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f30.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// stfd f31,24(r1)
	PPC_STORE_U64(ctx.r1.u32 + 24, ctx.f31.u64);
	// ld r4,24(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 24);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// addi r3,r11,-4340
	ctx.r3.s64 = ctx.r11.s64 + -4340;
	// bl 0x822e84f0
	ctx.lr = 0x822E2318;
	sub_822E84F0(ctx, base);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r9,0
	ctx.r9.s64 = 0;
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// ld r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// li r5,256
	ctx.r5.s64 = 256;
	// ld r7,104(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// addi r9,r8,14468
	ctx.r9.s64 = ctx.r8.s64 + 14468;
	// ld r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e1540
	ctx.lr = 0x822E234C;
	sub_822E1540(ctx, base);
loc_822E234C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f30,-32(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// lfd f31,-24(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822E22B0) {
	__imp__sub_822E22B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E2368) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// fmr f29,f3
	ctx.f29.f64 = ctx.f3.f64;
	// bl 0x822e0170
	ctx.lr = 0x822E2398;
	sub_822E0170(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822e23b8
	if (ctx.cr6.eq) goto loc_822E23B8;
	// li r7,0
	ctx.r7.s64 = 0;
	// fmr f3,f29
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f29.f64;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x822e1bc8
	ctx.lr = 0x822E23B4;
	sub_822E1BC8(ctx, base);
	// b 0x822e241c
	goto loc_822E241C;
loc_822E23B8:
	// stfd f29,40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f29.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// stfd f30,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f30.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// stfd f31,24(r1)
	PPC_STORE_U64(ctx.r1.u32 + 24, ctx.f31.u64);
	// ld r4,24(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 24);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fmr f3,f29
	ctx.f3.f64 = ctx.f29.f64;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// addi r3,r11,-27904
	ctx.r3.s64 = ctx.r11.s64 + -27904;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x822e84f0
	ctx.lr = 0x822E23E8;
	sub_822E84F0(ctx, base);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r9,0
	ctx.r9.s64 = 0;
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// ld r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// li r5,256
	ctx.r5.s64 = 256;
	// ld r7,104(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// addi r9,r8,14468
	ctx.r9.s64 = ctx.r8.s64 + 14468;
	// ld r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e1540
	ctx.lr = 0x822E241C;
	sub_822E1540(ctx, base);
loc_822E241C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
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

PPC_WEAK_FUNC(sub_822E2368) {
	__imp__sub_822E2368(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E243C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822E243C) {
	__imp__sub_822E243C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E2440) {
	PPC_FUNC_PROLOGUE();
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
	ctx.lr = 0x822E2454;
	__savefpr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// fmr f29,f3
	ctx.f29.f64 = ctx.f3.f64;
	// fmr f28,f4
	ctx.f28.f64 = ctx.f4.f64;
	// bl 0x822e0170
	ctx.lr = 0x822E2470;
	sub_822E0170(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822e2494
	if (ctx.cr6.eq) goto loc_822E2494;
	// li r8,0
	ctx.r8.s64 = 0;
	// fmr f4,f28
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f28.f64;
	// fmr f3,f29
	ctx.f3.f64 = ctx.f29.f64;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x822e1c68
	ctx.lr = 0x822E2490;
	sub_822E1C68(ctx, base);
	// b 0x822e2504
	goto loc_822E2504;
loc_822E2494:
	// stfd f28,48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.f28.u64);
	// ld r7,48(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 48);
	// stfd f29,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f29.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// stfd f30,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f30.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// stfd f31,24(r1)
	PPC_STORE_U64(ctx.r1.u32 + 24, ctx.f31.u64);
	// ld r4,24(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 24);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// fmr f4,f28
	ctx.f4.f64 = ctx.f28.f64;
	// fmr f3,f29
	ctx.f3.f64 = ctx.f29.f64;
	// addi r3,r11,-4352
	ctx.r3.s64 = ctx.r11.s64 + -4352;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x822e84f0
	ctx.lr = 0x822E24D0;
	sub_822E84F0(ctx, base);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r9,0
	ctx.r9.s64 = 0;
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// ld r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// li r5,256
	ctx.r5.s64 = 256;
	// ld r7,104(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// addi r9,r8,14468
	ctx.r9.s64 = ctx.r8.s64 + 14468;
	// ld r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e1540
	ctx.lr = 0x822E2504;
	sub_822E1540(ctx, base);
loc_822E2504:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// addi r12,r1,-16
	ctx.r12.s64 = ctx.r1.s64 + -16;
	// bl 0x823de074
	ctx.lr = 0x822E2510;
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

PPC_WEAK_FUNC(sub_822E2440) {
	__imp__sub_822E2440(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E2520) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x822e0170
	ctx.lr = 0x822E2540;
	sub_822E0170(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822e2558
	if (ctx.cr6.eq) goto loc_822E2558;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822e1d10
	ctx.lr = 0x822E2554;
	sub_822E1D10(ctx, base);
	// b 0x822e258c
	goto loc_822E258C;
loc_822E2558:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// ld r7,88(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// ld r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// li r5,256
	ctx.r5.s64 = 256;
	// addi r9,r9,14468
	ctx.r9.s64 = ctx.r9.s64 + 14468;
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x822e1540
	ctx.lr = 0x822E258C;
	sub_822E1540(ctx, base);
loc_822E258C:
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

PPC_WEAK_FUNC(sub_822E2520) {
	__imp__sub_822E2520(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E25A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822E25A4) {
	__imp__sub_822E25A4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E25A8) {
	PPC_FUNC_PROLOGUE();
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
	ctx.lr = 0x822E25BC;
	__savefpr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// fmr f29,f3
	ctx.f29.f64 = ctx.f3.f64;
	// fmr f28,f4
	ctx.f28.f64 = ctx.f4.f64;
	// bl 0x822e0170
	ctx.lr = 0x822E25D8;
	sub_822E0170(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822e25fc
	if (ctx.cr6.eq) goto loc_822E25FC;
	// li r8,0
	ctx.r8.s64 = 0;
	// fmr f4,f28
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f28.f64;
	// fmr f3,f29
	ctx.f3.f64 = ctx.f29.f64;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x822e1d88
	ctx.lr = 0x822E25F8;
	sub_822E1D88(ctx, base);
	// b 0x822e266c
	goto loc_822E266C;
loc_822E25FC:
	// stfd f28,48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.f28.u64);
	// ld r7,48(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 48);
	// stfd f29,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f29.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// stfd f30,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f30.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// stfd f31,24(r1)
	PPC_STORE_U64(ctx.r1.u32 + 24, ctx.f31.u64);
	// ld r4,24(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 24);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// fmr f4,f28
	ctx.f4.f64 = ctx.f28.f64;
	// fmr f3,f29
	ctx.f3.f64 = ctx.f29.f64;
	// addi r3,r11,-4352
	ctx.r3.s64 = ctx.r11.s64 + -4352;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x822e84f0
	ctx.lr = 0x822E2638;
	sub_822E84F0(ctx, base);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r9,0
	ctx.r9.s64 = 0;
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// ld r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// li r5,256
	ctx.r5.s64 = 256;
	// ld r7,104(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// addi r9,r8,14468
	ctx.r9.s64 = ctx.r8.s64 + 14468;
	// ld r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e1540
	ctx.lr = 0x822E266C;
	sub_822E1540(ctx, base);
loc_822E266C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// addi r12,r1,-16
	ctx.r12.s64 = ctx.r1.s64 + -16;
	// bl 0x823de074
	ctx.lr = 0x822E2678;
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

PPC_WEAK_FUNC(sub_822E25A8) {
	__imp__sub_822E25A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E2688) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x822E2690;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x822e0170
	ctx.lr = 0x822E26A4;
	sub_822E0170(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822e26ec
	if (!ctx.cr6.eq) goto loc_822E26EC;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// ld r7,88(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// ld r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// li r5,256
	ctx.r5.s64 = 256;
	// addi r9,r9,14468
	ctx.r9.s64 = ctx.r9.s64 + 14468;
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ld r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x822e1540
	ctx.lr = 0x822E26E4;
	sub_822E1540(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_822E26EC:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e1fb8
	ctx.lr = 0x822E26FC;
	sub_822E1FB8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822E2688) {
	__imp__sub_822E2688(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E2708) {
	PPC_FUNC_PROLOGUE();
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x822e2688
	sub_822E2688(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822E2708) {
	__imp__sub_822E2708(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E2710) {
	PPC_FUNC_PROLOGUE();
	// lhz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// or r10,r11,r4
	ctx.r10.u64 = ctx.r11.u64 | ctx.r4.u64;
	// sth r10,8(r3)
	PPC_STORE_U16(ctx.r3.u32 + 8, ctx.r10.u16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822E2710) {
	__imp__sub_822E2710(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E2720) {
	PPC_FUNC_PROLOGUE();
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// ld r4,44(r3)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r3.u32 + 44);
	// ld r5,52(r3)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r3.u32 + 52);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x822dfce8
	sub_822DFCE8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822E2720) {
	__imp__sub_822E2720(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E2734) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822E2734) {
	__imp__sub_822E2734(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E2738) {
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
loc_822E2750:
	// mulli r8,r3,3617
	ctx.r8.s64 = ctx.r3.s64 * 3617;
	// lbzu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// add r3,r8,r11
	ctx.r3.u64 = ctx.r8.u64 + ctx.r11.u64;
	// extsb r11,r9
	ctx.r11.s64 = ctx.r9.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822e2750
	if (!ctx.cr6.eq) goto loc_822E2750;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822E2738) {
	__imp__sub_822E2738(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E276C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822E276C) {
	__imp__sub_822E276C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E2770) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lbz r11,10(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10);
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// bgt cr6,0x822e2918
	if (ctx.cr6.gt) goto loc_822E2918;
	// lis r12,-32210
	ctx.r12.s64 = -2110914560;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,10132
	ctx.r12.s64 = ctx.r12.s64 + 10132;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_822E28D4;
	case 1:
		goto loc_822E28EC;
	case 2:
		goto loc_822E27F0;
	case 3:
		goto loc_822E282C;
	case 4:
		goto loc_822E2878;
	case 5:
		goto loc_822E28E0;
	case 6:
		goto loc_822E290C;
	case 7:
		goto loc_822E27BC;
	case 8:
		goto loc_822E2878;
	case 9:
		goto loc_822E282C;
	default:
		return;
	}
	// lwz r17,10452(r14)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r14.u32 + 10452);
	// lwz r17,10476(r14)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r14.u32 + 10476);
	// lwz r17,10224(r14)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r14.u32 + 10224);
	// lwz r17,10284(r14)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r14.u32 + 10284);
	// lwz r17,10360(r14)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r14.u32 + 10360);
	// lwz r17,10464(r14)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r14.u32 + 10464);
	// lwz r17,10508(r14)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r14.u32 + 10508);
	// lwz r17,10172(r14)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r14.u32 + 10172);
	// lwz r17,10360(r14)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r14.u32 + 10360);
	// lwz r17,10284(r14)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r14.u32 + 10284);
loc_822E27BC:
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r3,0
	ctx.r3.s64 = 0;
	// lbz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_822E27D4:
	// mulli r8,r3,3617
	ctx.r8.s64 = ctx.r3.s64 * 3617;
	// lbzu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// add r3,r8,r11
	ctx.r3.u64 = ctx.r8.u64 + ctx.r11.u64;
	// extsb r11,r9
	ctx.r11.s64 = ctx.r9.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822e27d4
	if (!ctx.cr6.eq) goto loc_822E27D4;
	// blr 
	return;
loc_822E27F0:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f13,12(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lfs f12,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// lfs f0,-3416(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -3416);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f0,-3420(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -3420);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-3424(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -3424);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f10,f12,f0,f11
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f11.f64));
	// fmuls f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fctiwz f8,f9
	ctx.f8.s64 = (ctx.f9.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f9.f64));
	// stfd f8,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f8.u64);
	// lwz r3,-12(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// blr 
	return;
loc_822E282C:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f13,16(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lfs f11,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// lfs f10,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// lfs f0,-3428(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -3428);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f9,f13,f0
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f0,-3432(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -3432);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-3436(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -3436);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,-3440(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -3440);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f8,f11,f0,f9
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f0.f64 + ctx.f9.f64));
	// fmadds f7,f10,f13,f8
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f13.f64 + ctx.f8.f64));
	// fmuls f6,f7,f12
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f12.f64));
	// fctiwz f5,f6
	ctx.f5.s64 = (ctx.f6.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f6.f64));
	// stfd f5,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f5.u64);
	// lwz r3,-12(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// blr 
	return;
loc_822E2878:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f13,20(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lfs f10,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f10.f64 = double(temp.f32);
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// lfs f9,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f9.f64 = double(temp.f32);
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// lfs f8,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// lis r7,-32252
	ctx.r7.s64 = -2113667072;
	// lfs f0,-3444(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -3444);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f7,f13,f0
	ctx.f7.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f0,-3448(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -3448);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-3452(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -3452);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,-3456(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -3456);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,-3460(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -3460);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f6,f10,f0,f7
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f0.f64 + ctx.f7.f64));
	// fmadds f5,f9,f13,f6
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f13.f64 + ctx.f6.f64));
	// fmadds f4,f8,f12,f5
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f12.f64 + ctx.f5.f64));
	// fmuls f3,f4,f11
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f11.f64));
	// fctiwz f2,f3
	ctx.f2.s64 = (ctx.f3.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f3.f64));
	// stfd f2,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f2.u64);
	// lwz r3,-12(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// blr 
	return;
loc_822E28D4:
	// lbz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 12);
	// mulli r3,r11,4013
	ctx.r3.s64 = ctx.r11.s64 * 4013;
	// blr 
	return;
loc_822E28E0:
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mulli r3,r11,4973
	ctx.r3.s64 = ctx.r11.s64 * 4973;
	// blr 
	return;
loc_822E28EC:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f13,12(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-3464(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -3464);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fctiwz f11,f12
	ctx.f11.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f11.u64);
	// lwz r3,-12(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// blr 
	return;
loc_822E290C:
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mulli r3,r11,4019
	ctx.r3.s64 = ctx.r11.s64 * 4019;
	// blr 
	return;
loc_822E2918:
	// li r3,5059
	ctx.r3.s64 = 5059;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822E2770) {
	__imp__sub_822E2770(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E2920) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x822E2928;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31852
	ctx.r11.s64 = -2087452672;
	// addi r28,r11,-9552
	ctx.r28.s64 = ctx.r11.s64 + -9552;
	// addi r3,r28,-20492
	ctx.r3.s64 = ctx.r28.s64 + -20492;
	// bl 0x82171b90
	ctx.lr = 0x822E293C;
	sub_82171B90(ctx, base);
	// lis r29,-31852
	ctx.r29.s64 = -2087452672;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,-30064(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -30064);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822e298c
	if (!ctx.cr6.gt) goto loc_822E298C;
	// addi r31,r28,44
	ctx.r31.s64 = ctx.r28.s64 + 44;
loc_822E2954:
	// lhz r10,-36(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + -36);
	// rlwinm r9,r10,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822e297c
	if (ctx.cr6.eq) goto loc_822E297C;
	// li r6,0
	ctx.r6.s64 = 0;
	// ld r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// addi r3,r31,-44
	ctx.r3.s64 = ctx.r31.s64 + -44;
	// ld r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// bl 0x822dfce8
	ctx.lr = 0x822E2978;
	sub_822DFCE8(ctx, base);
	// lwz r11,-30064(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -30064);
loc_822E297C:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,72
	ctx.r31.s64 = ctx.r31.s64 + 72;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822e2954
	if (ctx.cr6.lt) goto loc_822E2954;
loc_822E298C:
	// addi r11,r28,-20492
	ctx.r11.s64 = ctx.r28.s64 + -20492;
loc_822E2990:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stwcx. r10,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x822e2990
	if (!ctx.cr0.eq) goto loc_822E2990;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822E2920) {
	__imp__sub_822E2920(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E29B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822E29B4) {
	__imp__sub_822E29B4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E29B8) {
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
	// lis r31,-31852
	ctx.r31.s64 = -2087452672;
	// lwz r9,0(r13)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// ld r7,104(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// li r6,12
	ctx.r6.s64 = 12;
	// addi r5,r31,-30036
	ctx.r5.s64 = ctx.r31.s64 + -30036;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r4,-1
	ctx.r4.s64 = -1;
	// std r10,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r10.u64);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// stwx r4,r6,r9
	PPC_STORE_U32(ctx.r6.u32 + ctx.r9.u32, ctx.r4.u32);
	// lis r3,-32253
	ctx.r3.s64 = -2113732608;
	// stb r11,-11(r5)
	PPC_STORE_U8(ctx.r5.u32 + -11, ctx.r11.u8);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r9,r3,14468
	ctx.r9.s64 = ctx.r3.s64 + 14468;
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
	// addi r3,r10,7348
	ctx.r3.s64 = ctx.r10.s64 + 7348;
	// ld r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// li r5,2048
	ctx.r5.s64 = 2048;
	// li r4,0
	ctx.r4.s64 = 0;
	// ld r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x822e1540
	ctx.lr = 0x822E2A24;
	sub_822E1540(ctx, base);
	// stw r3,-30036(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30036, ctx.r3.u32);
	// bl 0x82286700
	ctx.lr = 0x822E2A2C;
	sub_82286700(ctx, base);
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

PPC_WEAK_FUNC(sub_822E29B8) {
	__imp__sub_822E29B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E2A40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x822E2A48;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31852
	ctx.r11.s64 = -2087452672;
	// addi r28,r11,-9552
	ctx.r28.s64 = ctx.r11.s64 + -9552;
	// addi r3,r28,-20492
	ctx.r3.s64 = ctx.r28.s64 + -20492;
	// bl 0x82171b90
	ctx.lr = 0x822E2A5C;
	sub_82171B90(ctx, base);
	// lis r11,-31852
	ctx.r11.s64 = -2087452672;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r29,-30064(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + -30064);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x822e2aa4
	if (!ctx.cr6.gt) goto loc_822E2AA4;
	// addi r31,r28,12
	ctx.r31.s64 = ctx.r28.s64 + 12;
loc_822E2A74:
	// ld r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// ld r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// lbz r3,-2(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + -2);
	// ld r6,16(r31)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// ld r7,24(r31)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r31.u32 + 24);
	// bl 0x822df9c8
	ctx.lr = 0x822E2A8C;
	sub_822DF9C8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822e2ad0
	if (ctx.cr6.eq) goto loc_822E2AD0;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,72
	ctx.r31.s64 = ctx.r31.s64 + 72;
	// cmpw cr6,r30,r29
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r29.s32, ctx.xer);
	// blt cr6,0x822e2a74
	if (ctx.cr6.lt) goto loc_822E2A74;
loc_822E2AA4:
	// addi r11,r28,-20492
	ctx.r11.s64 = ctx.r28.s64 + -20492;
loc_822E2AA8:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stwcx. r10,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x822e2aa8
	if (!ctx.cr0.eq) goto loc_822E2AA8;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_822E2AD0:
	// addi r11,r28,-20492
	ctx.r11.s64 = ctx.r28.s64 + -20492;
loc_822E2AD4:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stwcx. r10,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x822e2ad4
	if (!ctx.cr0.eq) goto loc_822E2AD4;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822E2A40) {
	__imp__sub_822E2A40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E2AFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822E2AFC) {
	__imp__sub_822E2AFC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E2B00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf60
	ctx.lr = 0x822E2B08;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31852
	ctx.r11.s64 = -2087452672;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r22,r11,-13648
	ctx.r22.s64 = ctx.r11.s64 + -13648;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// addi r3,r22,-16396
	ctx.r3.s64 = ctx.r22.s64 + -16396;
	// bl 0x82171b90
	ctx.lr = 0x822E2B24;
	sub_82171B90(ctx, base);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r25,r22
	ctx.r25.u64 = ctx.r22.u64;
	// li r24,1024
	ctx.r24.s64 = 1024;
	// addi r27,r10,-3364
	ctx.r27.s64 = ctx.r10.s64 + -3364;
	// addi r26,r11,-3412
	ctx.r26.s64 = ctx.r11.s64 + -3412;
loc_822E2B3C:
	// lwz r29,0(r25)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x822e2c3c
	if (ctx.cr6.eq) goto loc_822E2C3C;
loc_822E2B48:
	// lhz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 8);
	// and r10,r11,r23
	ctx.r10.u64 = ctx.r11.u64 & ctx.r23.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822e2c30
	if (ctx.cr6.eq) goto loc_822E2C30;
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
loc_822E2B60:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822e2b60
	if (!ctx.cr6.eq) goto loc_822E2B60;
	// subf r11,r5,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r5.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r31,r11,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmpwi cr6,r31,1024
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1024, ctx.xer);
	// blt cr6,0x822e2b94
	if (ctx.cr6.lt) goto loc_822E2B94;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82280b08
	ctx.lr = 0x822E2B90;
	sub_82280B08(ctx, base);
	// li r31,1023
	ctx.r31.s64 = 1023;
loc_822E2B94:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822e40f0
	ctx.lr = 0x822E2BA8;
	sub_822E40F0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x822e40f0
	ctx.lr = 0x822E2BB8;
	sub_822E40F0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// ld r4,12(r29)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r29.u32 + 12);
	// ld r5,20(r29)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r29.u32 + 20);
	// bl 0x822de8d8
	ctx.lr = 0x822E2BC8;
	sub_822DE8D8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_822E2BD0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822e2bd0
	if (!ctx.cr6.eq) goto loc_822E2BD0;
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r30,r11,0
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmpwi cr6,r30,1024
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1024, ctx.xer);
	// blt cr6,0x822e2c0c
	if (ctx.cr6.lt) goto loc_822E2C0C;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r6,0(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82280b08
	ctx.lr = 0x822E2C08;
	sub_82280B08(ctx, base);
	// li r30,1023
	ctx.r30.s64 = 1023;
loc_822E2C0C:
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822e40f0
	ctx.lr = 0x822E2C20;
	sub_822E40F0(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822e40f0
	ctx.lr = 0x822E2C30;
	sub_822E40F0(ctx, base);
loc_822E2C30:
	// lwz r29,68(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 68);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x822e2b48
	if (!ctx.cr6.eq) goto loc_822E2B48;
loc_822E2C3C:
	// addic. r24,r24,-1
	ctx.xer.ca = ctx.r24.u32 > 0;
	ctx.r24.s64 = ctx.r24.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
	// bne 0x822e2b3c
	if (!ctx.cr0.eq) goto loc_822E2B3C;
	// li r11,-1
	ctx.r11.s64 = -1;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822e40f0
	ctx.lr = 0x822E2C60;
	sub_822E40F0(ctx, base);
	// addi r10,r22,-16396
	ctx.r10.s64 = ctx.r22.s64 + -16396;
loc_822E2C64:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r9,0,r10
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r10.u32);
	ctx.r9.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stwcx. r9,0,r10
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r10.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x822e2c64
	if (!ctx.cr0.eq) goto loc_822E2C64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823ddfb0
	__restgprlr_22(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822E2B00) {
	__imp__sub_822E2B00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E2C88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x822E2C90;
	__savegprlr_25(ctx, base);
	// stwu r1,-2240(r1)
	ea = -2240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x822e4480
	ctx.lr = 0x822E2CA8;
	sub_822E4480(ctx, base);
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x822e2e14
	if (ctx.cr6.lt) goto loc_822E2E14;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// ld r27,104(r1)
	ctx.r27.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// clrlwi r26,r30,16
	ctx.r26.u64 = ctx.r30.u32 & 0xFFFF;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r28,r11,14468
	ctx.r28.s64 = ctx.r11.s64 + 14468;
	// addi r25,r10,-3300
	ctx.r25.s64 = ctx.r10.s64 + -3300;
loc_822E2CD0:
	// cmpwi cr6,r31,1024
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1024, ctx.xer);
	// blt cr6,0x822e2ce4
	if (ctx.cr6.lt) goto loc_822E2CE4;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822830e8
	ctx.lr = 0x822E2CE4;
	sub_822830E8(ctx, base);
loc_822E2CE4:
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822e4480
	ctx.lr = 0x822E2CF4;
	sub_822E4480(ctx, base);
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stbx r30,r31,r11
	PPC_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r30.u8);
	// bl 0x822e4480
	ctx.lr = 0x822E2D0C;
	sub_822E4480(ctx, base);
	// lwz r31,84(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r31,1024
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1024, ctx.xer);
	// blt cr6,0x822e2d24
	if (ctx.cr6.lt) goto loc_822E2D24;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822830e8
	ctx.lr = 0x822E2D24;
	sub_822830E8(ctx, base);
loc_822E2D24:
	// addi r5,r1,1152
	ctx.r5.s64 = ctx.r1.s64 + 1152;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822e4480
	ctx.lr = 0x822E2D34;
	sub_822E4480(ctx, base);
	// addi r11,r1,1152
	ctx.r11.s64 = ctx.r1.s64 + 1152;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stbx r30,r31,r11
	PPC_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r30.u8);
	// bl 0x822e0170
	ctx.lr = 0x822E2D44;
	sub_822E0170(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822e2d8c
	if (ctx.cr6.eq) goto loc_822E2D8C;
	// ld r5,60(r3)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r3.u32 + 60);
	// addi r6,r1,1152
	ctx.r6.s64 = ctx.r1.s64 + 1152;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lbz r4,10(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 10);
	// bl 0x822def00
	ctx.lr = 0x822E2D64;
	sub_822DEF00(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// bl 0x822dfce8
	ctx.lr = 0x822E2D7C;
	sub_822DFCE8(ctx, base);
	// lhz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// or r9,r10,r26
	ctx.r9.u64 = ctx.r10.u64 | ctx.r26.u64;
	// sth r9,8(r31)
	PPC_STORE_U16(ctx.r31.u32 + 8, ctx.r9.u16);
	// b 0x822e2df8
	goto loc_822E2DF8;
loc_822E2D8C:
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// clrlwi r10,r26,16
	ctx.r10.u64 = ctx.r26.u32 & 0xFFFF;
	// addi r9,r1,1152
	ctx.r9.s64 = ctx.r1.s64 + 1152;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// ori r31,r10,256
	ctx.r31.u64 = ctx.r10.u64 | 256;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// std r30,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r30.u64);
	// bl 0x822e0170
	ctx.lr = 0x822E2DAC;
	sub_822E0170(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822e2dd8
	if (ctx.cr6.eq) goto loc_822E2DD8;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// ld r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// ld r7,96(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r5,7
	ctx.r5.s64 = 7;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// bl 0x822e1180
	ctx.lr = 0x822E2DD4;
	sub_822E1180(ctx, base);
	// b 0x822e2df8
	goto loc_822E2DF8;
loc_822E2DD8:
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// ld r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// ld r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,7
	ctx.r4.s64 = 7;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x822e1298
	ctx.lr = 0x822E2DF8;
	sub_822E1298(ctx, base);
loc_822E2DF8:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822e4480
	ctx.lr = 0x822E2E08;
	sub_822E4480(ctx, base);
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge cr6,0x822e2cd0
	if (!ctx.cr6.lt) goto loc_822E2CD0;
loc_822E2E14:
	// addi r1,r1,2240
	ctx.r1.s64 = ctx.r1.s64 + 2240;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822E2C88) {
	__imp__sub_822E2C88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E2E1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822E2E1C) {
	__imp__sub_822E2E1C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E2E20) {
	PPC_FUNC_PROLOGUE();
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x822e2c88
	sub_822E2C88(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822E2E20) {
	__imp__sub_822E2E20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E2E28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x822E2E30;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31852
	ctx.r11.s64 = -2087452672;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r27,r11,-9552
	ctx.r27.s64 = ctx.r11.s64 + -9552;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// addi r3,r27,-20492
	ctx.r3.s64 = ctx.r27.s64 + -20492;
	// bl 0x82171b90
	ctx.lr = 0x822E2E4C;
	sub_82171B90(ctx, base);
	// lis r29,-31852
	ctx.r29.s64 = -2087452672;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,-30064(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -30064);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822e2e9c
	if (!ctx.cr6.gt) goto loc_822E2E9C;
	// addi r31,r27,44
	ctx.r31.s64 = ctx.r27.s64 + 44;
loc_822E2E64:
	// lhz r10,-36(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + -36);
	// and r9,r10,r26
	ctx.r9.u64 = ctx.r10.u64 & ctx.r26.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822e2e8c
	if (ctx.cr6.eq) goto loc_822E2E8C;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// ld r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// addi r3,r31,-44
	ctx.r3.s64 = ctx.r31.s64 + -44;
	// ld r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// bl 0x822dfce8
	ctx.lr = 0x822E2E88;
	sub_822DFCE8(ctx, base);
	// lwz r11,-30064(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -30064);
loc_822E2E8C:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,72
	ctx.r31.s64 = ctx.r31.s64 + 72;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822e2e64
	if (ctx.cr6.lt) goto loc_822E2E64;
loc_822E2E9C:
	// addi r11,r27,-20492
	ctx.r11.s64 = ctx.r27.s64 + -20492;
loc_822E2EA0:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stwcx. r10,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x822e2ea0
	if (!ctx.cr0.eq) goto loc_822E2EA0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822E2E28) {
	__imp__sub_822E2E28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E2EC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822E2EC4) {
	__imp__sub_822E2EC4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E2EC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x822E2ED0;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822e2f48
	if (ctx.cr6.eq) goto loc_822E2F48;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r26,r11,-6148
	ctx.r26.s64 = ctx.r11.s64 + -6148;
loc_822E2EF8:
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x822e0170
	ctx.lr = 0x822E2F00;
	sub_822E0170(ctx, base);
	// ld r4,12(r3)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r3.u32 + 12);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// ld r5,20(r3)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r3.u32 + 20);
	// bl 0x822de8d8
	ctx.lr = 0x822E2F10;
	sub_822DE8D8(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// lwz r6,0(r25)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823dfb70
	ctx.lr = 0x822E2F28;
	sub_823DFB70(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x822e2f54
	if (ctx.cr6.lt) goto loc_822E2F54;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// add r31,r3,r31
	ctx.r31.u64 = ctx.r3.u64 + ctx.r31.u64;
	// subf r30,r3,r30
	ctx.r30.s64 = ctx.r30.s64 - ctx.r3.s64;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r28,r27
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r27.u32, ctx.xer);
	// blt cr6,0x822e2ef8
	if (ctx.cr6.lt) goto loc_822E2EF8;
loc_822E2F48:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_822E2F54:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822E2EC8) {
	__imp__sub_822E2EC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E2F60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf64
	ctx.lr = 0x822E2F68;
	__savegprlr_23(ctx, base);
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// ld r12,-8192(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8192);
	// ld r12,-12288(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -12288);
	// ld r12,-16384(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16384);
	// stwu r1,-16544(r1)
	ea = -16544 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r5,16580(r1)
	PPC_STORE_U32(ctx.r1.u32 + 16580, ctx.r5.u32);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// bl 0x823de090
	ctx.lr = 0x822E2F9C;
	sub_823DE090(ctx, base);
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x822e2fd4
	if (ctx.cr6.eq) goto loc_822E2FD4;
	// addi r30,r24,-4
	ctx.r30.s64 = ctx.r24.s64 + -4;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
loc_822E2FB0:
	// lwzu r3,4(r30)
	ea = 4 + ctx.r30.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// bl 0x822e0170
	ctx.lr = 0x822E2FB8;
	sub_822E0170(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// ld r4,44(r3)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r3.u32 + 44);
	// ld r5,52(r3)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r3.u32 + 52);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// bl 0x822dfce8
	ctx.lr = 0x822E2FCC;
	sub_822DFCE8(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x822e2fb0
	if (!ctx.cr0.eq) goto loc_822E2FB0;
loc_822E2FD4:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x822e5ed0
	ctx.lr = 0x822E2FDC;
	sub_822E5ED0(ctx, base);
	// addi r3,r1,16580
	ctx.r3.s64 = ctx.r1.s64 + 16580;
	// bl 0x822e6d10
	ctx.lr = 0x822E2FE4;
	sub_822E6D10(ctx, base);
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822e3068
	if (ctx.cr6.eq) goto loc_822E3068;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r26,1
	ctx.r26.s64 = 1;
	// addi r25,r11,-18268
	ctx.r25.s64 = ctx.r11.s64 + -18268;
loc_822E3000:
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x822e3034
	if (ctx.cr6.eq) goto loc_822E3034;
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
loc_822E3010:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x822e8058
	ctx.lr = 0x822E301C;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822e3080
	if (ctx.cr6.eq) goto loc_822E3080;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x822e3010
	if (ctx.cr6.lt) goto loc_822E3010;
loc_822E3034:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82280c30
	ctx.lr = 0x822E3048;
	sub_82280C30(ctx, base);
loc_822E3048:
	// addi r3,r1,16580
	ctx.r3.s64 = ctx.r1.s64 + 16580;
	// bl 0x822e6fd0
	ctx.lr = 0x822E3050;
	sub_822E6FD0(ctx, base);
	// addi r3,r1,16580
	ctx.r3.s64 = ctx.r1.s64 + 16580;
	// bl 0x822e6d10
	ctx.lr = 0x822E3058;
	sub_822E6D10(ctx, base);
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822e3000
	if (!ctx.cr6.eq) goto loc_822E3000;
loc_822E3068:
	// bl 0x822e5fb0
	ctx.lr = 0x822E306C;
	sub_822E5FB0(ctx, base);
	// cmplw cr6,r27,r28
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x822e30c4
	if (!ctx.cr6.eq) goto loc_822E30C4;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,16544
	ctx.r1.s64 = ctx.r1.s64 + 16544;
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
loc_822E3080:
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r24
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r24.u32);
	// bl 0x822e0170
	ctx.lr = 0x822E308C;
	sub_822E0170(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,16580
	ctx.r3.s64 = ctx.r1.s64 + 16580;
	// bl 0x822e6d78
	ctx.lr = 0x822E3098;
	sub_822E6D78(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822e1fb8
	ctx.lr = 0x822E30A8;
	sub_822E1FB8(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lbzx r10,r31,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822e3048
	if (!ctx.cr6.eq) goto loc_822E3048;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// stbx r26,r31,r11
	PPC_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r26.u8);
	// b 0x822e3048
	goto loc_822E3048;
loc_822E30C4:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// addi r4,r11,-3256
	ctx.r4.s64 = ctx.r11.s64 + -3256;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82280b08
	ctx.lr = 0x822E30D8;
	sub_82280B08(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x822e3124
	if (ctx.cr6.eq) goto loc_822E3124;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r29,r10,-3724
	ctx.r29.s64 = ctx.r10.s64 + -3724;
loc_822E30F4:
	// lbzx r11,r31,r11
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822e3110
	if (!ctx.cr6.eq) goto loc_822E3110;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82280b08
	ctx.lr = 0x822E3110;
	sub_82280B08(ctx, base);
loc_822E3110:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// blt cr6,0x822e30f4
	if (ctx.cr6.lt) goto loc_822E30F4;
loc_822E3124:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,16544
	ctx.r1.s64 = ctx.r1.s64 + 16544;
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822E2F60) {
	__imp__sub_822E2F60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E3130) {
	PPC_FUNC_PROLOGUE();
	// lhz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// rlwinm r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r10,-31852
	ctx.r10.s64 = -2087452672;
	// lwz r11,-30052(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30052);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,-30052(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30052, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822E3130) {
	__imp__sub_822E3130(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E3154) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822E3154) {
	__imp__sub_822E3154(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E3158) {
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
	// lhz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// rlwinm r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822e3188
	if (ctx.cr6.eq) goto loc_822E3188;
	// bl 0x822e2770
	ctx.lr = 0x822E3178;
	sub_822E2770(ctx, base);
	// lis r10,-31852
	ctx.r10.s64 = -2087452672;
	// lwz r11,-30060(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30060);
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// stw r11,-30060(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30060, ctx.r11.u32);
loc_822E3188:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822E3158) {
	__imp__sub_822E3158(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E3198) {
	PPC_FUNC_PROLOGUE();
	// lhz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// rlwinm r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r10,-31852
	ctx.r10.s64 = -2087452672;
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// li r3,16
	ctx.r3.s64 = 16;
	// addi r4,r9,-3196
	ctx.r4.s64 = ctx.r9.s64 + -3196;
	// lwz r11,-30052(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30052);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// stw r5,-30052(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30052, ctx.r5.u32);
	// b 0x82280900
	sub_82280900(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822E3198) {
	__imp__sub_822E3198(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E31CC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822E31CC) {
	__imp__sub_822E31CC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E31D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x822E31D8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x822e0170
	ctx.lr = 0x822E31E8;
	sub_822E0170(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822e3230
	if (!ctx.cr6.eq) goto loc_822E3230;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// ld r7,88(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// ld r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// li r5,256
	ctx.r5.s64 = 256;
	// addi r9,r9,14468
	ctx.r9.s64 = ctx.r9.s64 + 14468;
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ld r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x822e1540
	ctx.lr = 0x822E3228;
	sub_822E1540(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x822e3240
	goto loc_822E3240;
loc_822E3230:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e1fb8
	ctx.lr = 0x822E3240;
	sub_822E1FB8(ctx, base);
loc_822E3240:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x822e3274
	if (ctx.cr6.eq) goto loc_822E3274;
	// lis r11,-31852
	ctx.r11.s64 = -2087452672;
	// lbz r10,-30048(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -30048);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822e3274
	if (ctx.cr6.eq) goto loc_822E3274;
	// lhz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 12);
	// ori r10,r11,32768
	ctx.r10.u64 = ctx.r11.u64 | 32768;
	// ld r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r31.u32 + 20);
	// sth r10,8(r31)
	PPC_STORE_U16(ctx.r31.u32 + 8, ctx.r10.u16);
	// bl 0x822e0a20
	ctx.lr = 0x822E3274;
	sub_822E0A20(ctx, base);
loc_822E3274:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822E31D0) {
	__imp__sub_822E31D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E327C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822E327C) {
	__imp__sub_822E327C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E3280) {
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
	// lis r11,-31848
	ctx.r11.s64 = -2087190528;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r11,23220
	ctx.r31.s64 = ctx.r11.s64 + 23220;
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
loc_822E32A8:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r7
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r7.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// cmpw cr6,r10,r30
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r30.s32, ctx.xer);
	// bne cr6,0x822e32cc
	if (!ctx.cr6.eq) goto loc_822E32CC;
	// stwcx. r8,0,r7
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r7.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r8.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x822e32a8
	if (!ctx.cr0.eq) goto loc_822E32A8;
	// b 0x822e32d4
	goto loc_822E32D4;
loc_822E32CC:
	// stwcx. r10,0,r7
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r7.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
loc_822E32D4:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x822e331c
	if (!ctx.cr6.eq) goto loc_822E331C;
	// lis r11,-31852
	ctx.r11.s64 = -2087452672;
	// lis r10,-31852
	ctx.r10.s64 = -2087452672;
	// lis r9,-32210
	ctx.r9.s64 = -2110914560;
	// addi r3,r10,-30032
	ctx.r3.s64 = ctx.r10.s64 + -30032;
	// addi r6,r9,-7544
	ctx.r6.s64 = ctx.r9.s64 + -7544;
	// lwz r11,-30064(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -30064);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r11,r3
	ctx.r4.u64 = ctx.r11.u64 + ctx.r3.u64;
	// subf r8,r3,r4
	ctx.r8.s64 = ctx.r4.s64 - ctx.r3.s64;
	// srawi r5,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r8.s32 >> 2;
	// bl 0x822e36b8
	ctx.lr = 0x822E330C;
	sub_822E36B8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// stb r11,-4(r31)
	PPC_STORE_U8(ctx.r31.u32 + -4, ctx.r11.u8);
	// b 0x822e333c
	goto loc_822E333C;
loc_822E331C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822e333c
	if (ctx.cr6.eq) goto loc_822E333C;
loc_822E3328:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8228b0d8
	ctx.lr = 0x822E3330;
	sub_8228B0D8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822e3328
	if (!ctx.cr6.eq) goto loc_822E3328;
loc_822E333C:
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

PPC_WEAK_FUNC(sub_822E3280) {
	__imp__sub_822E3280(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E3354) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822E3354) {
	__imp__sub_822E3354(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E3358) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x822E3360;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31852
	ctx.r11.s64 = -2087452672;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r26,r11,-30032
	ctx.r26.s64 = ctx.r11.s64 + -30032;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// addi r3,r26,-12
	ctx.r3.s64 = ctx.r26.s64 + -12;
	// bl 0x82171b90
	ctx.lr = 0x822E337C;
	sub_82171B90(ctx, base);
	// lis r11,-31848
	ctx.r11.s64 = -2087190528;
	// lbz r10,23216(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 23216);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822e3390
	if (!ctx.cr6.eq) goto loc_822E3390;
	// bl 0x822e3280
	ctx.lr = 0x822E3390;
	sub_822E3280(ctx, base);
loc_822E3390:
	// lis r29,-31852
	ctx.r29.s64 = -2087452672;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r11,-30064(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -30064);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822e33c8
	if (!ctx.cr6.gt) goto loc_822E33C8;
	// addi r30,r26,-4
	ctx.r30.s64 = ctx.r26.s64 + -4;
loc_822E33A8:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwzu r3,4(r30)
	ea = 4 + ctx.r30.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x822E33B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,-30064(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -30064);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822e33a8
	if (ctx.cr6.lt) goto loc_822E33A8;
loc_822E33C8:
	// addi r11,r26,-12
	ctx.r11.s64 = ctx.r26.s64 + -12;
loc_822E33CC:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stwcx. r10,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x822e33cc
	if (!ctx.cr0.eq) goto loc_822E33CC;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822E3358) {
	__imp__sub_822E3358(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E33F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x822E33F8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31852
	ctx.r11.s64 = -2087452672;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r27,r11,-30032
	ctx.r27.s64 = ctx.r11.s64 + -30032;
	// addi r3,r27,-12
	ctx.r3.s64 = ctx.r27.s64 + -12;
	// bl 0x82171b90
	ctx.lr = 0x822E3410;
	sub_82171B90(ctx, base);
	// lis r11,-31848
	ctx.r11.s64 = -2087190528;
	// lbz r10,23216(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 23216);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822e3424
	if (!ctx.cr6.eq) goto loc_822E3424;
	// bl 0x822e3280
	ctx.lr = 0x822E3424;
	sub_822E3280(ctx, base);
loc_822E3424:
	// lis r29,-31852
	ctx.r29.s64 = -2087452672;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r11,-30064(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -30064);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822e345c
	if (!ctx.cr6.gt) goto loc_822E345C;
	// addi r30,r27,-4
	ctx.r30.s64 = ctx.r27.s64 + -4;
loc_822E343C:
	// lwzu r11,4(r30)
	ea = 4 + ctx.r30.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bctrl 
	ctx.lr = 0x822E344C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,-30064(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -30064);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822e343c
	if (ctx.cr6.lt) goto loc_822E343C;
loc_822E345C:
	// addi r11,r27,-12
	ctx.r11.s64 = ctx.r27.s64 + -12;
loc_822E3460:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stwcx. r10,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x822e3460
	if (!ctx.cr0.eq) goto loc_822E3460;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822E33F0) {
	__imp__sub_822E33F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E3484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822E3484) {
	__imp__sub_822E3484(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E3488) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x822E3490;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31848
	ctx.r11.s64 = -2087190528;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lbz r10,23216(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 23216);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822e34ac
	if (!ctx.cr6.eq) goto loc_822E34AC;
	// bl 0x822e3280
	ctx.lr = 0x822E34AC;
	sub_822E3280(ctx, base);
loc_822E34AC:
	// lis r29,-31852
	ctx.r29.s64 = -2087452672;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r11,-30064(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -30064);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822e34ec
	if (!ctx.cr6.gt) goto loc_822E34EC;
	// lis r11,-31852
	ctx.r11.s64 = -2087452672;
	// addi r11,r11,-30032
	ctx.r11.s64 = ctx.r11.s64 + -30032;
	// addi r30,r11,-4
	ctx.r30.s64 = ctx.r11.s64 + -4;
loc_822E34CC:
	// lwzu r11,4(r30)
	ea = 4 + ctx.r30.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bctrl 
	ctx.lr = 0x822E34DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,-30064(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -30064);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822e34cc
	if (ctx.cr6.lt) goto loc_822E34CC;
loc_822E34EC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822E3488) {
	__imp__sub_822E3488(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E34F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822E34F4) {
	__imp__sub_822E34F4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E34F8) {
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
	// lis r31,-31852
	ctx.r31.s64 = -2087452672;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r10,12592
	ctx.r3.s64 = ctx.r10.s64 + 12592;
	// stw r11,-30052(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30052, ctx.r11.u32);
	// bl 0x822e3358
	ctx.lr = 0x822E3524;
	sub_822E3358(ctx, base);
	// lwz r3,-30052(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30052);
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

PPC_WEAK_FUNC(sub_822E34F8) {
	__imp__sub_822E34F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E353C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822E353C) {
	__imp__sub_822E353C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E3540) {
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
	// lis r31,-31852
	ctx.r31.s64 = -2087452672;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r10,12632
	ctx.r3.s64 = ctx.r10.s64 + 12632;
	// stw r11,-30060(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30060, ctx.r11.u32);
	// bl 0x822e3358
	ctx.lr = 0x822E356C;
	sub_822E3358(ctx, base);
	// lwz r3,-30060(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30060);
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

PPC_WEAK_FUNC(sub_822E3540) {
	__imp__sub_822E3540(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E3584) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822E3584) {
	__imp__sub_822E3584(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E3588) {
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
	// lis r10,-31852
	ctx.r10.s64 = -2087452672;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// li r3,16
	ctx.r3.s64 = 16;
	// addi r4,r9,-3184
	ctx.r4.s64 = ctx.r9.s64 + -3184;
	// stw r11,-30052(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30052, ctx.r11.u32);
	// bl 0x82280900
	ctx.lr = 0x822E35B0;
	sub_82280900(ctx, base);
	// lis r8,-32210
	ctx.r8.s64 = -2110914560;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r8,12696
	ctx.r3.s64 = ctx.r8.s64 + 12696;
	// bl 0x822e3358
	ctx.lr = 0x822E35C0;
	sub_822E3358(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822E3588) {
	__imp__sub_822E3588(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E35D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf68
	ctx.lr = 0x822E35D8;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// cmplw cr6,r3,r4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x822e36ac
	if (ctx.cr6.eq) goto loc_822E36AC;
	// addi r30,r3,4
	ctx.r30.s64 = ctx.r3.s64 + 4;
	// cmplw cr6,r30,r4
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x822e36ac
	if (ctx.cr6.eq) goto loc_822E36AC;
	// subfic r25,r3,4
	ctx.xer.ca = ctx.r3.u32 <= 4;
	ctx.r25.s64 = 4 - ctx.r3.s64;
loc_822E3600:
	// lwz r29,0(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// lwz r4,0(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mtctr r27
	ctx.ctr.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x822E3618;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822e3654
	if (ctx.cr6.eq) goto loc_822E3654;
	// add r11,r25,r30
	ctx.r11.u64 = ctx.r25.u64 + ctx.r30.u64;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// srawi. r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x822e364c
	if (!ctx.cr0.gt) goto loc_822E364C;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// subf r11,r4,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r4.s64;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x823e0230
	ctx.lr = 0x822E364C;
	sub_823E0230(ctx, base);
loc_822E364C:
	// stw r29,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r29.u32);
	// b 0x822e36a0
	goto loc_822E36A0;
loc_822E3654:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,-4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// addi r31,r30,-4
	ctx.r31.s64 = ctx.r30.s64 + -4;
	// mtctr r27
	ctx.ctr.u64 = ctx.r27.u64;
	// bctrl 
	ctx.lr = 0x822E3668;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822e369c
	if (ctx.cr6.eq) goto loc_822E369C;
loc_822E3674:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r27
	ctx.ctr.u64 = ctx.r27.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// lwzu r4,-4(r31)
	ea = -4 + ctx.r31.u32;
	ctx.r4.u64 = PPC_LOAD_U32(ea);
	ctx.r31.u32 = ea;
	// bctrl 
	ctx.lr = 0x822E3690;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822e3674
	if (!ctx.cr6.eq) goto loc_822E3674;
loc_822E369C:
	// stw r29,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r29.u32);
loc_822E36A0:
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r30,r24
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r24.u32, ctx.xer);
	// bne cr6,0x822e3600
	if (!ctx.cr6.eq) goto loc_822E3600;
loc_822E36AC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822E35D0) {
	__imp__sub_822E35D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E36B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822E36B4) {
	__imp__sub_822E36B4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E36B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x822E36C0;
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
	// ble cr6,0x822e3770
	if (!ctx.cr6.gt) goto loc_822E3770;
loc_822E36E4:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x822e3794
	if (!ctx.cr6.gt) goto loc_822E3794;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82193170
	ctx.lr = 0x822E3700;
	sub_82193170(ctx, base);
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
	// bge cr6,0x822e3750
	if (!ctx.cr6.lt) goto loc_822E3750;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822e36b8
	ctx.lr = 0x822E3748;
	sub_822E36B8(ctx, base);
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// b 0x822e3760
	goto loc_822E3760;
loc_822E3750:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822e36b8
	ctx.lr = 0x822E375C;
	sub_822E36B8(ctx, base);
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
loc_822E3760:
	// subf r11,r30,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r30.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// bgt cr6,0x822e36e4
	if (ctx.cr6.gt) goto loc_822E36E4;
loc_822E3770:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x822e378c
	if (!ctx.cr6.gt) goto loc_822E378C;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822e35d0
	ctx.lr = 0x822E378C;
	sub_822E35D0(ctx, base);
loc_822E378C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_822E3794:
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// ble cr6,0x822e3770
	if (!ctx.cr6.gt) goto loc_822E3770;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x822e37bc
	if (!ctx.cr6.gt) goto loc_822E37BC;
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
	// bl 0x82189ee0
	ctx.lr = 0x822E37BC;
	sub_82189EE0(ctx, base);
loc_822E37BC:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82189f40
	ctx.lr = 0x822E37CC;
	sub_82189F40(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822E36B8) {
	__imp__sub_822E36B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E37D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822E37D4) {
	__imp__sub_822E37D4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E37D8) {
	PPC_FUNC_PROLOGUE();
	// lvx128 v1,r3,r4
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822E37D8) {
	__imp__sub_822E37D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E37E0) {
	PPC_FUNC_PROLOGUE();
	// stvx128 v1,r3,r4
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r4.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822E37E0) {
	__imp__sub_822E37E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E37E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x822E37F0;
	__savegprlr_28(ctx, base);
	// stfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f30.u64);
	// stfd f31,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r29,r4,-8
	ctx.r29.s64 = ctx.r4.s64 + -8;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// lfs f31,-3156(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -3156);
	ctx.f31.f64 = double(temp.f32);
loc_822E3814:
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822e3830
	if (ctx.cr6.eq) goto loc_822E3830;
	// rotlwi r11,r28,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r28.u32, 0);
	// ori r10,r11,128
	ctx.r10.u64 = ctx.r11.u64 | 128;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
loc_822E3830:
	// rlwinm r11,r30,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822e3848
	if (ctx.cr6.eq) goto loc_822E3848;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// ori r10,r11,64
	ctx.r10.u64 = ctx.r11.u64 | 64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
loc_822E3848:
	// rlwinm r11,r30,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822e3860
	if (ctx.cr6.eq) goto loc_822E3860;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// ori r10,r11,32
	ctx.r10.u64 = ctx.r11.u64 | 32;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
loc_822E3860:
	// rlwinm r11,r30,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822e3878
	if (ctx.cr6.eq) goto loc_822E3878;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// ori r10,r11,16
	ctx.r10.u64 = ctx.r11.u64 | 16;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
loc_822E3878:
	// rlwinm r11,r30,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x10;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822e3890
	if (ctx.cr6.eq) goto loc_822E3890;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// ori r10,r11,8
	ctx.r10.u64 = ctx.r11.u64 | 8;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
loc_822E3890:
	// rlwinm r11,r30,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x20;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822e38a8
	if (ctx.cr6.eq) goto loc_822E38A8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// ori r10,r11,4
	ctx.r10.u64 = ctx.r11.u64 | 4;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
loc_822E38A8:
	// rlwinm r11,r30,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x40;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822e38c0
	if (ctx.cr6.eq) goto loc_822E38C0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// ori r10,r11,2
	ctx.r10.u64 = ctx.r11.u64 | 2;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
loc_822E38C0:
	// rlwinm r11,r30,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x80;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822e38d8
	if (ctx.cr6.eq) goto loc_822E38D8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
loc_822E38D8:
	// extsw r11,r30
	ctx.r11.s64 = ctx.r30.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f30,f12,f31
	ctx.f30.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x823de720
	ctx.lr = 0x822E38F8;
	sub_823DE720(ctx, base);
	// frsp f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64));
	// stfs f11,12(r29)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r29.u32 + 12, temp.u32);
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x823de800
	ctx.lr = 0x822E3908;
	sub_823DE800(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// frsp f10,f1
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f1.f64));
	// stfsu f10,8(r29)
	ea = 8 + ctx.r29.u32;
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r29.u32 = ea;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpwi cr6,r30,256
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 256, ctx.xer);
	// blt cr6,0x822e3814
	if (ctx.cr6.lt) goto loc_822E3814;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f30,-56(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822E37E8) {
	__imp__sub_822E37E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E3930) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf64
	ctx.lr = 0x822E3938;
	__savegprlr_23(ctx, base);
	// stwu r1,-2176(r1)
	ea = -2176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,1
	ctx.r11.s64 = 1;
	// subfic r9,r5,8
	ctx.xer.ca = ctx.r5.u32 <= 8;
	ctx.r9.s64 = 8 - ctx.r5.s64;
	// slw. r30,r11,r5
	ctx.r30.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r5.u8 & 0x3F));
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x822e3a10
	if (ctx.cr0.eq) goto loc_822E3A10;
	// addi r11,r30,-1
	ctx.r11.s64 = ctx.r30.s64 + -1;
	// addi r8,r4,-12
	ctx.r8.s64 = ctx.r4.s64 + -12;
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r10,r3,12
	ctx.r10.s64 = ctx.r3.s64 + 12;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// addi r11,r6,8
	ctx.r11.s64 = ctx.r6.s64 + 8;
	// subf r29,r6,r3
	ctx.r29.s64 = ctx.r3.s64 - ctx.r6.s64;
	// subf r28,r6,r4
	ctx.r28.s64 = ctx.r4.s64 - ctx.r6.s64;
	// subf r27,r3,r4
	ctx.r27.s64 = ctx.r4.s64 - ctx.r3.s64;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
loc_822E3974:
	// lwz r6,-8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// addi r26,r1,1072
	ctx.r26.s64 = ctx.r1.s64 + 1072;
	// lwz r5,-4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// lfs f13,-12(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -12);
	ctx.f13.f64 = double(temp.f32);
	// sraw r6,r6,r9
	temp.u32 = ctx.r9.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r6.s32 < 0) & (((ctx.r6.s32 >> temp.u32) << temp.u32) != ctx.r6.s32);
	ctx.r6.s64 = ctx.r6.s32 >> temp.u32;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r23,r6,2,0,29
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r24,4(r11)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// sraw r5,r5,r9
	temp.u32 = ctx.r9.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r5.s32 < 0) & (((ctx.r5.s32 >> temp.u32) << temp.u32) != ctx.r5.s32);
	ctx.r5.s64 = ctx.r5.s32 >> temp.u32;
	// lfs f12,12(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// sraw r31,r31,r9
	temp.u32 = ctx.r9.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r31.s32 < 0) & (((ctx.r31.s32 >> temp.u32) << temp.u32) != ctx.r31.s32);
	ctx.r31.s64 = ctx.r31.s32 >> temp.u32;
	// stfsx f13,r23,r26
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r23.u32 + ctx.r26.u32, temp.u32);
	// sraw r6,r24,r9
	temp.u32 = ctx.r9.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r24.s32 < 0) & (((ctx.r24.s32 >> temp.u32) << temp.u32) != ctx.r24.s32);
	ctx.r6.s64 = ctx.r24.s32 >> temp.u32;
	// lfs f11,-8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -8);
	ctx.f11.f64 = double(temp.f32);
	// addi r25,r1,48
	ctx.r25.s64 = ctx.r1.s64 + 48;
	// lfsu f0,16(r8)
	ea = 16 + ctx.r8.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r8.u32 = ea;
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f10,r29,r11
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	ctx.f10.f64 = double(temp.f32);
	// addi r24,r1,1072
	ctx.r24.s64 = ctx.r1.s64 + 1072;
	// lfsx f9,r28,r11
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	ctx.f9.f64 = double(temp.f32);
	// addi r26,r1,48
	ctx.r26.s64 = ctx.r1.s64 + 48;
	// lfs f8,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f7,r27,r10
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r10.u32);
	ctx.f7.f64 = double(temp.f32);
	// stfsx f12,r23,r25
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r23.u32 + ctx.r25.u32, temp.u32);
	// addi r25,r1,1072
	ctx.r25.s64 = ctx.r1.s64 + 1072;
	// addi r23,r1,48
	ctx.r23.s64 = ctx.r1.s64 + 48;
	// stfsx f11,r5,r24
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r5.u32 + ctx.r24.u32, temp.u32);
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f0,r5,r26
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + ctx.r26.u32, temp.u32);
	// addi r24,r1,1072
	ctx.r24.s64 = ctx.r1.s64 + 1072;
	// addi r5,r1,48
	ctx.r5.s64 = ctx.r1.s64 + 48;
	// stfsx f10,r31,r25
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r25.u32, temp.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stfsx f9,r31,r23
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r23.u32, temp.u32);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// stfsx f8,r6,r24
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r6.u32 + ctx.r24.u32, temp.u32);
	// stfsx f7,r6,r5
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r6.u32 + ctx.r5.u32, temp.u32);
	// bdnz 0x822e3974
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822E3974;
loc_822E3A10:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x822e3af4
	if (ctx.cr6.eq) goto loc_822E3AF4;
	// addi r11,r30,-1
	ctx.r11.s64 = ctx.r30.s64 + -1;
	// addi r8,r1,1072
	ctx.r8.s64 = ctx.r1.s64 + 1072;
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r31,r1,1076
	ctx.r31.s64 = ctx.r1.s64 + 1076;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// addi r29,r1,48
	ctx.r29.s64 = ctx.r1.s64 + 48;
	// addi r28,r1,52
	ctx.r28.s64 = ctx.r1.s64 + 52;
	// addi r9,r4,-4
	ctx.r9.s64 = ctx.r4.s64 + -4;
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// subf r6,r3,r4
	ctx.r6.s64 = ctx.r4.s64 - ctx.r3.s64;
	// subf r5,r3,r8
	ctx.r5.s64 = ctx.r8.s64 - ctx.r3.s64;
	// subf r31,r3,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r3.s64;
	// subf r29,r3,r29
	ctx.r29.s64 = ctx.r29.s64 - ctx.r3.s64;
	// subf r28,r3,r28
	ctx.r28.s64 = ctx.r28.s64 - ctx.r3.s64;
	// li r10,0
	ctx.r10.s64 = 0;
loc_822E3A58:
	// addi r8,r1,1076
	ctx.r8.s64 = ctx.r1.s64 + 1076;
	// lfsx f0,r31,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// addi r27,r1,52
	ctx.r27.s64 = ctx.r1.s64 + 52;
	// lfsx f13,r5,r11
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lfsx f12,r28,r11
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	ctx.f12.f64 = double(temp.f32);
	// addi r26,r1,48
	ctx.r26.s64 = ctx.r1.s64 + 48;
	// lfsx f11,r29,r11
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	ctx.f11.f64 = double(temp.f32);
	// fadds f10,f0,f13
	ctx.f10.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// fsubs f9,f13,f0
	ctx.f9.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfsx f8,r10,r27
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r27.u32);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f5,f11,f12
	ctx.f5.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// lfs f6,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// fadds f7,f12,f11
	ctx.f7.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// lfs f3,-4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -4);
	ctx.f3.f64 = double(temp.f32);
	// lfsx f4,r10,r26
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r26.u32);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f0,f3,f6
	ctx.f0.f64 = double(float(ctx.f3.f64 - ctx.f6.f64));
	// fadds f2,f4,f8
	ctx.f2.f64 = double(float(ctx.f4.f64 + ctx.f8.f64));
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// fadds f1,f3,f6
	ctx.f1.f64 = double(float(ctx.f3.f64 + ctx.f6.f64));
	// fsubs f13,f4,f8
	ctx.f13.f64 = double(float(ctx.f4.f64 - ctx.f8.f64));
	// fsubs f8,f0,f5
	ctx.f8.f64 = double(float(ctx.f0.f64 - ctx.f5.f64));
	// stfs f8,-4(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// fadds f12,f7,f2
	ctx.f12.f64 = double(float(ctx.f7.f64 + ctx.f2.f64));
	// stfs f12,4(r9)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// fsubs f3,f2,f7
	ctx.f3.f64 = double(float(ctx.f2.f64 - ctx.f7.f64));
	// stfsx f3,r11,r6
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r6.u32, temp.u32);
	// fadds f11,f10,f1
	ctx.f11.f64 = double(float(ctx.f10.f64 + ctx.f1.f64));
	// stfs f11,-8(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + -8, temp.u32);
	// fsubs f6,f1,f10
	ctx.f6.f64 = double(float(ctx.f1.f64 - ctx.f10.f64));
	// stfs f6,0(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// fadds f5,f5,f0
	ctx.f5.f64 = double(float(ctx.f5.f64 + ctx.f0.f64));
	// stfs f5,4(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// fadds f4,f13,f9
	ctx.f4.f64 = double(float(ctx.f13.f64 + ctx.f9.f64));
	// stfs f4,8(r9)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// fsubs f2,f13,f9
	ctx.f2.f64 = double(float(ctx.f13.f64 - ctx.f9.f64));
	// stfsu f2,16(r9)
	ea = 16 + ctx.r9.u32;
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r9.u32 = ea;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bdnz 0x822e3a58
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822E3A58;
loc_822E3AF4:
	// li r26,4
	ctx.r26.s64 = 4;
	// li r31,5
	ctx.r31.s64 = 5;
	// cmplwi cr6,r30,4
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 4, ctx.xer);
	// ble cr6,0x822e3c48
	if (!ctx.cr6.gt) goto loc_822E3C48;
loc_822E3B04:
	// rlwinm r29,r26,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x822e3c38
	if (ctx.cr6.eq) goto loc_822E3C38;
	// rlwinm r11,r26,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// li r8,2
	ctx.r8.s64 = 2;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// add r27,r11,r4
	ctx.r27.u64 = ctx.r11.u64 + ctx.r4.u64;
loc_822E3B20:
	// addi r9,r8,1
	ctx.r9.s64 = ctx.r8.s64 + 1;
	// addi r11,r8,-2
	ctx.r11.s64 = ctx.r8.s64 + -2;
	// addi r10,r8,-1
	ctx.r10.s64 = ctx.r8.s64 + -1;
	// slw r9,r9,r31
	ctx.r9.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r31.u8 & 0x3F));
	// slw r5,r11,r31
	ctx.r5.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r31.u8 & 0x3F));
	// slw r10,r10,r31
	ctx.r10.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r31.u8 & 0x3F));
	// slw r25,r8,r31
	ctx.r25.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r31.u8 & 0x3F));
	// rlwinm r6,r9,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r11,r5,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r9,r25,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 3) & 0xFFFFFFF8;
	// add r5,r6,r7
	ctx.r5.u64 = ctx.r6.u64 + ctx.r7.u64;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// addi r6,r8,-2
	ctx.r6.s64 = ctx.r8.s64 + -2;
	// lfs f0,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// cmplw cr6,r6,r30
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r30.u32, ctx.xer);
	// lfs f12,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// stfs f13,16(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 16, temp.u32);
	// stfs f12,20(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 20, temp.u32);
	// stfs f11,24(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 24, temp.u32);
	// stfs f0,28(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 28, temp.u32);
	// stfs f10,32(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 32, temp.u32);
	// stfs f9,36(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 36, temp.u32);
	// stfs f8,40(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 40, temp.u32);
	// stfs f7,44(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 44, temp.u32);
	// bge cr6,0x822e3c20
	if (!ctx.cr6.lt) goto loc_822E3C20;
	// addi r25,r1,32
	ctx.r25.s64 = ctx.r1.s64 + 32;
	// addi r24,r1,16
	ctx.r24.s64 = ctx.r1.s64 + 16;
	// rlwinm r5,r29,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// lvx128 v63,r0,r25
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r25.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// subf r9,r4,r3
	ctx.r9.s64 = ctx.r3.s64 - ctx.r4.s64;
	// lvx128 v13,r0,r24
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r24.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_822E3BC8:
	// lvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r6,r29,r6
	ctx.r6.u64 = ctx.r29.u64 + ctx.r6.u64;
	// lvx128 v62,r9,r10
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32 + ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v61,v63,v0
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v61.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v12,v63,v62
	simde_mm_store_ps(ctx.v12.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v62.f32)));
	// lvx128 v60,r9,r11
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32 + ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v59,v13,v62
	simde_mm_store_ps(ctx.v59.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v62.f32)));
	// lvx128 v58,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// cmplw cr6,r6,r30
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r30.u32, ctx.xer);
	// vmaddfp v0,v13,v0,v12
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// vsubfp128 v57,v59,v61
	simde_mm_store_ps(ctx.v57.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v59.f32), simde_mm_load_ps(ctx.v61.f32)));
	// vsubfp128 v56,v58,v0
	simde_mm_store_ps(ctx.v56.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v58.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vsubfp128 v55,v60,v57
	simde_mm_store_ps(ctx.v55.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v60.f32), simde_mm_load_ps(ctx.v57.f32)));
	// vaddfp128 v54,v58,v0
	simde_mm_store_ps(ctx.v54.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v58.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vaddfp128 v53,v60,v57
	simde_mm_store_ps(ctx.v53.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v60.f32), simde_mm_load_ps(ctx.v57.f32)));
	// stvx128 v56,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v55,r9,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32 + ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// stvx128 v54,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v53,r9,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32 + ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// blt cr6,0x822e3bc8
	if (ctx.cr6.lt) goto loc_822E3BC8;
loc_822E3C20:
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// addi r28,r28,16
	ctx.r28.s64 = ctx.r28.s64 + 16;
	// addi r11,r8,-2
	ctx.r11.s64 = ctx.r8.s64 + -2;
	// addi r27,r27,16
	ctx.r27.s64 = ctx.r27.s64 + 16;
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// blt cr6,0x822e3b20
	if (ctx.cr6.lt) goto loc_822E3B20;
loc_822E3C38:
	// mr r26,r29
	ctx.r26.u64 = ctx.r29.u64;
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// cmplw cr6,r29,r30
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r30.u32, ctx.xer);
	// blt cr6,0x822e3b04
	if (ctx.cr6.lt) goto loc_822E3B04;
loc_822E3C48:
	// addi r1,r1,2176
	ctx.r1.s64 = ctx.r1.s64 + 2176;
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822E3930) {
	__imp__sub_822E3930(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E3C50) {
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
	// lis r11,-31848
	ctx.r11.s64 = -2087190528;
	// lis r5,2
	ctx.r5.s64 = 131072;
	// addi r3,r11,23232
	ctx.r3.s64 = ctx.r11.s64 + 23232;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823de090
	ctx.lr = 0x822E3C70;
	sub_823DE090(ctx, base);
	// lis r10,-31848
	ctx.r10.s64 = -2087190528;
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,23224(r10)
	PPC_STORE_U32(ctx.r10.u32 + 23224, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822E3C50) {
	__imp__sub_822E3C50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E3C8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822E3C8C) {
	__imp__sub_822E3C8C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E3C90) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r5,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r5.u32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// stw r4,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r4.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stb r6,28(r3)
	PPC_STORE_U8(ctx.r3.u32 + 28, ctx.r6.u8);
	// stb r11,29(r3)
	PPC_STORE_U8(ctx.r3.u32 + 29, ctx.r11.u8);
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stb r7,30(r3)
	PPC_STORE_U8(ctx.r3.u32 + 30, ctx.r7.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822E3C90) {
	__imp__sub_822E3C90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E3CC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822E3CC4) {
	__imp__sub_822E3CC4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E3CC8) {
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
	// bl 0x8228bcc0
	ctx.lr = 0x822E3CD8;
	sub_8228BCC0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822e3cf8
	if (ctx.cr6.eq) goto loc_822E3CF8;
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
loc_822E3CF8:
	// bl 0x8228b728
	ctx.lr = 0x822E3CFC;
	sub_8228B728(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822e3d1c
	if (ctx.cr6.eq) goto loc_822E3D1C;
	// li r3,3
	ctx.r3.s64 = 3;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_822E3D1C:
	// bl 0x8228bc50
	ctx.lr = 0x822E3D20;
	sub_8228BC50(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822e3d40
	if (ctx.cr6.eq) goto loc_822E3D40;
	// li r3,4
	ctx.r3.s64 = 4;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_822E3D40:
	// bl 0x8228bc88
	ctx.lr = 0x822E3D44;
	sub_8228BC88(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822e3d64
	if (ctx.cr6.eq) goto loc_822E3D64;
	// li r3,5
	ctx.r3.s64 = 5;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_822E3D64:
	// bl 0x8228c180
	ctx.lr = 0x822E3D68;
	sub_8228C180(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r10,6
	ctx.r10.s64 = 6;
	// subfic r9,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r11.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r7,r10
	ctx.r3.u64 = ctx.r7.u64 & ctx.r10.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822E3CC8) {
	__imp__sub_822E3CC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E3D8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822E3D8C) {
	__imp__sub_822E3D8C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E3D90) {
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
	// lis r11,-31848
	ctx.r11.s64 = -2087190528;
	// stw r3,23228(r11)
	PPC_STORE_U32(ctx.r11.u32 + 23228, ctx.r3.u32);
	// bl 0x822e3cc8
	ctx.lr = 0x822E3DA8;
	sub_822E3CC8(ctx, base);
	// lis r10,-31846
	ctx.r10.s64 = -2087059456;
	// stw r3,31444(r10)
	PPC_STORE_U32(ctx.r10.u32 + 31444, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822E3D90) {
	__imp__sub_822E3D90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E3DC0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822E3DC0) {
	__imp__sub_822E3DC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E3DC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822E3DC4) {
	__imp__sub_822E3DC4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E3DC8) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822E3DC8) {
	__imp__sub_822E3DC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E3DD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822E3DD4) {
	__imp__sub_822E3DD4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E3DD8) {
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
	// lis r10,-31848
	ctx.r10.s64 = -2087190528;
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,23228(r10)
	PPC_STORE_U32(ctx.r10.u32 + 23228, ctx.r11.u32);
	// bl 0x822e3cc8
	ctx.lr = 0x822E3DFC;
	sub_822E3CC8(ctx, base);
	// lis r9,-31846
	ctx.r9.s64 = -2087059456;
	// addi r8,r9,31444
	ctx.r8.s64 = ctx.r9.s64 + 31444;
	// stw r3,31444(r9)
	PPC_STORE_U32(ctx.r9.u32 + 31444, ctx.r3.u32);
	// stb r31,-8204(r8)
	PPC_STORE_U8(ctx.r8.u32 + -8204, ctx.r31.u8);
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

PPC_WEAK_FUNC(sub_822E3DD8) {
	__imp__sub_822E3DD8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E3E20) {
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
	// lis r10,-31848
	ctx.r10.s64 = -2087190528;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,23228(r10)
	PPC_STORE_U32(ctx.r10.u32 + 23228, ctx.r11.u32);
	// bl 0x822e3cc8
	ctx.lr = 0x822E3E3C;
	sub_822E3CC8(ctx, base);
	// lis r9,-31846
	ctx.r9.s64 = -2087059456;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,31444(r9)
	PPC_STORE_U32(ctx.r9.u32 + 31444, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822E3E20) {
	__imp__sub_822E3E20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E3E5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822E3E5C) {
	__imp__sub_822E3E5C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E3E60) {
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
	// lis r10,-31848
	ctx.r10.s64 = -2087190528;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,23228(r10)
	PPC_STORE_U32(ctx.r10.u32 + 23228, ctx.r11.u32);
	// bl 0x822e3cc8
	ctx.lr = 0x822E3E84;
	sub_822E3CC8(ctx, base);
	// lis r9,-31846
	ctx.r9.s64 = -2087059456;
	// addi r8,r9,31444
	ctx.r8.s64 = ctx.r9.s64 + 31444;
	// stw r3,31444(r9)
	PPC_STORE_U32(ctx.r9.u32 + 31444, ctx.r3.u32);
	// stb r31,-8204(r8)
	PPC_STORE_U8(ctx.r8.u32 + -8204, ctx.r31.u8);
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

PPC_WEAK_FUNC(sub_822E3E60) {
	__imp__sub_822E3E60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E3EA8) {
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
	// lis r10,-31848
	ctx.r10.s64 = -2087190528;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,23228(r10)
	PPC_STORE_U32(ctx.r10.u32 + 23228, ctx.r11.u32);
	// bl 0x822e3cc8
	ctx.lr = 0x822E3EC4;
	sub_822E3CC8(ctx, base);
	// lis r9,-31846
	ctx.r9.s64 = -2087059456;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,31444(r9)
	PPC_STORE_U32(ctx.r9.u32 + 31444, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822E3EA8) {
	__imp__sub_822E3EA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E3EE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822E3EE4) {
	__imp__sub_822E3EE4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E3EE8) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x822e3f08
	if (ctx.cr6.eq) goto loc_822E3F08;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
loc_822E3EFC:
	// lwzx r10,r9,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bdnz 0x822e3efc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822E3EFC;
loc_822E3F08:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822E3EE8) {
	__imp__sub_822E3EE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E3F14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822E3F14) {
	__imp__sub_822E3F14(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E3F18) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r3,r8,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822E3F18) {
	__imp__sub_822E3F18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E3F30) {
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
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x822e3f68
	if (ctx.cr6.eq) goto loc_822E3F68;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
loc_822E3F5C:
	// lwzx r10,r8,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bdnz 0x822e3f5c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822E3F5C;
loc_822E3F68:
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// subf r11,r4,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r4.s64;
	// add r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// beq cr6,0x822e3f8c
	if (ctx.cr6.eq) goto loc_822E3F8C;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x823de1f0
	ctx.lr = 0x822E3F8C;
	sub_823DE1F0(ctx, base);
loc_822E3F8C:
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

PPC_WEAK_FUNC(sub_822E3F30) {
	__imp__sub_822E3F30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E3FA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822E3FA4) {
	__imp__sub_822E3FA4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E3FA8) {
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
	// lis r11,-31848
	ctx.r11.s64 = -2087190528;
	// lwz r10,23228(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23228);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x822e3ff0
	if (ctx.cr6.eq) goto loc_822E3FF0;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x822e4010
	if (!ctx.cr6.eq) goto loc_822E4010;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,23228(r11)
	PPC_STORE_U32(ctx.r11.u32 + 23228, ctx.r10.u32);
	// bl 0x822e3cc8
	ctx.lr = 0x822E3FD8;
	sub_822E3CC8(ctx, base);
	// lis r11,-31846
	ctx.r11.s64 = -2087059456;
	// stw r3,31444(r11)
	PPC_STORE_U32(ctx.r11.u32 + 31444, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_822E3FF0:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,23228(r11)
	PPC_STORE_U32(ctx.r11.u32 + 23228, ctx.r10.u32);
	// bl 0x822e3cc8
	ctx.lr = 0x822E3FFC;
	sub_822E3CC8(ctx, base);
	// lis r10,-31846
	ctx.r10.s64 = -2087059456;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// stw r11,31444(r10)
	PPC_STORE_U32(ctx.r10.u32 + 31444, ctx.r11.u32);
	// bl 0x822a25e0
	ctx.lr = 0x822E4010;
	sub_822A25E0(ctx, base);
loc_822E4010:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822E3FA8) {
	__imp__sub_822E3FA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E4020) {
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
	// lis r10,-31848
	ctx.r10.s64 = -2087190528;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,23228(r10)
	PPC_STORE_U32(ctx.r10.u32 + 23228, ctx.r11.u32);
	// bl 0x822e3cc8
	ctx.lr = 0x822E4048;
	sub_822E3CC8(ctx, base);
	// lis r9,-31846
	ctx.r9.s64 = -2087059456;
	// lbz r8,28(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 28);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// addi r30,r11,-3040
	ctx.r30.s64 = ctx.r11.s64 + -3040;
	// stw r3,31444(r9)
	PPC_STORE_U32(ctx.r9.u32 + 31444, ctx.r3.u32);
	// beq cr6,0x822e4070
	if (ctx.cr6.eq) goto loc_822E4070;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822830e8
	ctx.lr = 0x822E4070;
	sub_822830E8(ctx, base);
loc_822E4070:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x82280900
	ctx.lr = 0x822E407C;
	sub_82280900(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,29(r31)
	PPC_STORE_U8(ctx.r31.u32 + 29, ctx.r11.u8);
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

PPC_WEAK_FUNC(sub_822E4020) {
	__imp__sub_822E4020(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E409C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822E409C) {
	__imp__sub_822E409C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E40A0) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// rlwinm r11,r5,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 6) & 0xFFFFFFC0;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// add r9,r11,r6
	ctx.r9.u64 = ctx.r11.u64 + ctx.r6.u64;
	// stbx r9,r8,r10
	PPC_STORE_U8(ctx.r8.u32 + ctx.r10.u32, ctx.r9.u8);
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// addi r4,r11,65
	ctx.r4.s64 = ctx.r11.s64 + 65;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// cmpw cr6,r4,r5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r5.s32, ctx.xer);
	// bgt cr6,0x822e40e4
	if (ctx.cr6.gt) goto loc_822E40E4;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stb r7,1(r8)
	PPC_STORE_U8(ctx.r8.u32 + 1, ctx.r7.u8);
	// blr 
	return;
loc_822E40E4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822E40A0) {
	__imp__sub_822E40A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E40EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822E40EC) {
	__imp__sub_822E40EC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E40F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x822E40F8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,29(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 29);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822e416c
	if (!ctx.cr6.eq) goto loc_822E416C;
	// lis r10,-31846
	ctx.r10.s64 = -2087059456;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// addi r30,r10,23232
	ctx.r30.s64 = ctx.r10.s64 + 23232;
	// lwz r10,23232(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 23232);
	// lwz r9,8216(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8216);
	// lwz r31,4(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r6,8208(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8208);
	// ble cr6,0x822e415c
	if (!ctx.cr6.gt) goto loc_822E415C;
	// li r29,63
	ctx.r29.s64 = 63;
loc_822E412C:
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x822e41c8
	if (ctx.cr6.eq) goto loc_822E41C8;
loc_822E4134:
	// lbzx r7,r11,r5
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r5.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x822e417c
	if (!ctx.cr6.eq) goto loc_822E417C;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r10,63
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 63, ctx.xer);
	// beq cr6,0x822e4174
	if (ctx.cr6.eq) goto loc_822E4174;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// blt cr6,0x822e4134
	if (ctx.cr6.lt) goto loc_822E4134;
loc_822E415C:
	// stw r9,8216(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8216, ctx.r9.u32);
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
	// stw r6,8208(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8208, ctx.r6.u32);
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
loc_822E416C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_822E4174:
	// li r31,1
	ctx.r31.s64 = 1;
	// b 0x822e4180
	goto loc_822E4180;
loc_822E417C:
	// li r31,0
	ctx.r31.s64 = 0;
loc_822E4180:
	// rlwinm r8,r6,6,0,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 6) & 0xFFFFFFC0;
	// lwz r6,12(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r28,0(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// stbx r10,r28,r6
	PPC_STORE_U8(ctx.r28.u32 + ctx.r6.u32, ctx.r10.u8);
	// lwz r6,4(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r10,r9,65
	ctx.r10.s64 = ctx.r9.s64 + 65;
	// stw r9,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// cmpw cr6,r10,r6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, ctx.xer);
	// bgt cr6,0x822e42e8
	if (ctx.cr6.gt) goto loc_822E42E8;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// li r9,2
	ctx.r9.s64 = 2;
	// stb r7,1(r8)
	PPC_STORE_U8(ctx.r8.u32 + 1, ctx.r7.u8);
	// b 0x822e42a4
	goto loc_822E42A4;
loc_822E41C8:
	// lbzx r8,r11,r5
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r5.u32);
	// cmpwi cr6,r10,63
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 63, ctx.xer);
	// bne cr6,0x822e4224
	if (!ctx.cr6.eq) goto loc_822E4224;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stbx r29,r7,r10
	PPC_STORE_U8(ctx.r7.u32 + ctx.r10.u32, ctx.r29.u8);
	// lwz r6,4(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r9,r10,65
	ctx.r9.s64 = ctx.r10.s64 + 65;
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// cmpw cr6,r9,r6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r6.s32, ctx.xer);
	// bgt cr6,0x822e42e8
	if (ctx.cr6.gt) goto loc_822E42E8;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// cntlzw r8,r8
	ctx.r8.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// add r28,r9,r10
	ctx.r28.u64 = ctx.r9.u64 + ctx.r10.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r9,2
	ctx.r9.s64 = 2;
	// rlwinm r31,r8,27,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// stb r7,1(r28)
	PPC_STORE_U8(ctx.r28.u32 + 1, ctx.r7.u8);
	// b 0x822e42d8
	goto loc_822E42D8;
loc_822E4224:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x822e42b8
	if (!ctx.cr6.eq) goto loc_822E42B8;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// ble cr6,0x822e4298
	if (!ctx.cr6.gt) goto loc_822E4298;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// blt cr6,0x822e42bc
	if (ctx.cr6.lt) goto loc_822E42BC;
	// addi r6,r10,253
	ctx.r6.s64 = ctx.r10.s64 + 253;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r9,r9,-3
	ctx.r9.s64 = ctx.r9.s64 + -3;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lbzx r7,r10,r9
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// stb r6,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r6.u8);
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r6,r9,65
	ctx.r6.s64 = ctx.r9.s64 + 65;
	// stw r9,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// cmpw cr6,r6,r8
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r8.s32, ctx.xer);
	// bgt cr6,0x822e42e8
	if (ctx.cr6.gt) goto loc_822E42E8;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,2
	ctx.r10.s64 = 2;
	// li r6,1
	ctx.r6.s64 = 1;
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// li r9,2
	ctx.r9.s64 = 2;
	// li r31,0
	ctx.r31.s64 = 0;
	// stb r7,1(r8)
	PPC_STORE_U8(ctx.r8.u32 + 1, ctx.r7.u8);
	// b 0x822e42a8
	goto loc_822E42A8;
loc_822E4298:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x822e42bc
	if (ctx.cr6.lt) goto loc_822E42BC;
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
loc_822E42A4:
	// li r10,0
	ctx.r10.s64 = 0;
loc_822E42A8:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// blt cr6,0x822e412c
	if (ctx.cr6.lt) goto loc_822E412C;
	// b 0x822e415c
	goto loc_822E415C;
loc_822E42B8:
	// li r31,0
	ctx.r31.s64 = 0;
loc_822E42BC:
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// lwz r7,12(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// stbx r28,r8,r9
	PPC_STORE_U8(ctx.r8.u32 + ctx.r9.u32, ctx.r28.u8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
loc_822E42D8:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// blt cr6,0x822e41c8
	if (ctx.cr6.lt) goto loc_822E41C8;
	// b 0x822e415c
	goto loc_822E415C;
loc_822E42E8:
	// bl 0x822e4020
	ctx.lr = 0x822E42EC;
	sub_822E4020(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822E40F0) {
	__imp__sub_822E40F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E42F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822E42F4) {
	__imp__sub_822E42F4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E42F8) {
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x822e4330
	if (!ctx.cr6.eq) goto loc_822E4330;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// li r4,2
	ctx.r4.s64 = 2;
	// b 0x822e43f4
	goto loc_822E43F4;
loc_822E4330:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822e4350
	if (!ctx.cr6.eq) goto loc_822E4350;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// li r4,2
	ctx.r4.s64 = 2;
	// b 0x822e43f4
	goto loc_822E43F4;
loc_822E4350:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822a1360
	ctx.lr = 0x822E4358;
	sub_822A1360(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822e43b4
	if (ctx.cr6.eq) goto loc_822E43B4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822a1490
	ctx.lr = 0x822E4368;
	sub_822A1490(ctx, base);
	// lis r11,-31848
	ctx.r11.s64 = -2087190528;
	// rlwinm r9,r3,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r11,23232
	ctx.r10.s64 = ctx.r11.s64 + 23232;
	// lhzx r11,r9,r10
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// beq cr6,0x822e4390
	if (ctx.cr6.eq) goto loc_822E4390;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,2
	ctx.r4.s64 = 2;
	// b 0x822e43f4
	goto loc_822E43F4;
loc_822E4390:
	// lis r8,-31848
	ctx.r8.s64 = -2087190528;
	// li r7,2
	ctx.r7.s64 = 2;
	// sth r7,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r7.u16);
	// lwz r11,23224(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 23224);
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sthx r6,r9,r10
	PPC_STORE_U16(ctx.r9.u32 + ctx.r10.u32, ctx.r6.u16);
	// stw r11,23224(r8)
	PPC_STORE_U32(ctx.r8.u32 + 23224, ctx.r11.u32);
	// b 0x822e43bc
	goto loc_822E43BC;
loc_822E43B4:
	// li r11,3
	ctx.r11.s64 = 3;
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
loc_822E43BC:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822e40f0
	ctx.lr = 0x822E43CC;
	sub_822E40F0(ctx, base);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_822E43D0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822e43d0
	if (!ctx.cr6.eq) goto loc_822E43D0;
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
loc_822E43F4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822e40f0
	ctx.lr = 0x822E43FC;
	sub_822E40F0(ctx, base);
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

PPC_WEAK_FUNC(sub_822E42F8) {
	__imp__sub_822E42F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E4414) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822E4414) {
	__imp__sub_822E4414(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E4418) {
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
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x822e4458
	if (!ctx.cr6.lt) goto loc_822E4458;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// lbzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_822E4458:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,-3004
	ctx.r4.s64 = ctx.r11.s64 + -3004;
	// bl 0x822830e8
	ctx.lr = 0x822E4468;
	sub_822830E8(ctx, base);
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

PPC_WEAK_FUNC(sub_822E4418) {
	__imp__sub_822E4418(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E447C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822E447C) {
	__imp__sub_822E447C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E4480) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x822E4488;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x822e45c8
	if (ctx.cr6.eq) goto loc_822E45C8;
	// lbz r11,29(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 29);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822e45c8
	if (!ctx.cr6.eq) goto loc_822E45C8;
	// lis r11,-31846
	ctx.r11.s64 = -2087059456;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r31,r11,23236
	ctx.r31.s64 = ctx.r11.s64 + 23236;
	// addi r26,r10,-3004
	ctx.r26.s64 = ctx.r10.s64 + -3004;
	// addi r28,r5,-1
	ctx.r28.s64 = ctx.r5.s64 + -1;
	// lwz r11,23236(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23236);
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r10,8204(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8204);
loc_822E44C8:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822e4530
	if (ctx.cr6.eq) goto loc_822E4530;
loc_822E44D0:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// stw r10,8204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8204, ctx.r10.u32);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x822e4500
	if (!ctx.cr6.lt) goto loc_822E4500;
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// lbzx r11,r9,r11
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// stw r8,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r8.u32);
	// b 0x822e4514
	goto loc_822E4514;
loc_822E4500:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822830e8
	ctx.lr = 0x822E450C;
	sub_822830E8(ctx, base);
	// lwz r10,8204(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8204);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_822E4514:
	// stb r11,1(r28)
	PPC_STORE_U8(ctx.r28.u32 + 1, ctx.r11.u8);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x822e45c8
	if (ctx.cr6.eq) goto loc_822E45C8;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x822e44d0
	if (!ctx.cr6.eq) goto loc_822E44D0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_822E4530:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822e4554
	if (ctx.cr6.eq) goto loc_822E4554;
loc_822E4538:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stbu r27,1(r28)
	ea = 1 + ctx.r28.u32;
	PPC_STORE_U8(ea, ctx.r27.u8);
	ctx.r28.u32 = ea;
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq 0x822e45c8
	if (ctx.cr0.eq) goto loc_822E45C8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822e4538
	if (!ctx.cr6.eq) goto loc_822E4538;
loc_822E4554:
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x822e4578
	if (!ctx.cr6.lt) goto loc_822E4578;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// lbzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// stw r9,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r9.u32);
	// b 0x822e4588
	goto loc_822E4588;
loc_822E4578:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822830e8
	ctx.lr = 0x822E4584;
	sub_822830E8(ctx, base);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_822E4588:
	// rlwinm r10,r11,0,24,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC0;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822e45b0
	if (ctx.cr6.eq) goto loc_822E45B0;
	// clrlwi r9,r11,26
	ctx.r9.u64 = ctx.r11.u32 & 0x3F;
	// rlwinm r10,r11,26,6,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x3FFFFFF;
	// addi r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 1;
	// stw r10,8204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8204, ctx.r10.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x822e44c8
	goto loc_822E44C8;
loc_822E45B0:
	// clrlwi r10,r11,26
	ctx.r10.u64 = ctx.r11.u32 & 0x3F;
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,8204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8204, ctx.r10.u32);
	// b 0x822e44c8
	goto loc_822E44C8;
loc_822E45C8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822E4480) {
	__imp__sub_822E4480(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E45D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x822E45D8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,88
	ctx.r31.s64 = 88;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stb r31,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r31.u8);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x822e40f0
	ctx.lr = 0x822E45F8;
	sub_822E40F0(ctx, base);
	// stb r31,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r31.u8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x822e40f0
	ctx.lr = 0x822E460C;
	sub_822E40F0(ctx, base);
	// stb r29,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r29.u8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x822e40f0
	ctx.lr = 0x822E4620;
	sub_822E40F0(ctx, base);
	// stb r31,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r31.u8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x822e40f0
	ctx.lr = 0x822E4634;
	sub_822E40F0(ctx, base);
	// stb r31,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r31.u8);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822e40f0
	ctx.lr = 0x822E4648;
	sub_822E40F0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822E45D0) {
	__imp__sub_822E45D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E4650) {
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
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822e4480
	ctx.lr = 0x822E4670;
	sub_822E4480(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r1,81
	ctx.r5.s64 = ctx.r1.s64 + 81;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x822e4480
	ctx.lr = 0x822E4680;
	sub_822E4480(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x822e4480
	ctx.lr = 0x822E4690;
	sub_822E4480(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r1,82
	ctx.r5.s64 = ctx.r1.s64 + 82;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x822e4480
	ctx.lr = 0x822E46A0;
	sub_822E4480(ctx, base);
	// addi r5,r1,83
	ctx.r5.s64 = ctx.r1.s64 + 83;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e4480
	ctx.lr = 0x822E46B0;
	sub_822E4480(ctx, base);
	// lbz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lbz r11,81(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r10,82(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// cmplwi cr6,r5,88
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 88, ctx.xer);
	// lbz r9,83(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 83);
	// bne cr6,0x822e46ec
	if (!ctx.cr6.eq) goto loc_822E46EC;
	// clrlwi r8,r11,24
	ctx.r8.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r8,88
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 88, ctx.xer);
	// bne cr6,0x822e46ec
	if (!ctx.cr6.eq) goto loc_822E46EC;
	// clrlwi r8,r10,24
	ctx.r8.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r8,88
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 88, ctx.xer);
	// bne cr6,0x822e46ec
	if (!ctx.cr6.eq) goto loc_822E46EC;
	// clrlwi r8,r9,24
	ctx.r8.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r8,88
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 88, ctx.xer);
	// beq cr6,0x822e470c
	if (ctx.cr6.eq) goto loc_822E470C;
loc_822E46EC:
	// lis r6,-32252
	ctx.r6.s64 = -2113667072;
	// lbz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// addi r4,r6,-2968
	ctx.r4.s64 = ctx.r6.s64 + -2968;
	// clrlwi r8,r10,24
	ctx.r8.u64 = ctx.r10.u32 & 0xFF;
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822830e8
	ctx.lr = 0x822E470C;
	sub_822830E8(ctx, base);
loc_822E470C:
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

PPC_WEAK_FUNC(sub_822E4650) {
	__imp__sub_822E4650(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E4720) {
	PPC_FUNC_PROLOGUE();
	// b 0x822e40f0
	sub_822E40F0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822E4720) {
	__imp__sub_822E4720(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E4724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822E4724) {
	__imp__sub_822E4724(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E4728) {
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
	// lbz r11,29(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 29);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822e47e0
	if (!ctx.cr6.eq) goto loc_822E47E0;
	// lis r11,-31846
	ctx.r11.s64 = -2087059456;
	// addi r30,r11,31444
	ctx.r30.s64 = ctx.r11.s64 + 31444;
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// ble cr6,0x822e47b0
	if (!ctx.cr6.gt) goto loc_822E47B0;
	// lwz r11,-4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// lwz r8,12(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// lwz r10,-8212(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8212);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stbx r6,r8,r7
	PPC_STORE_U8(ctx.r8.u32 + ctx.r7.u32, ctx.r6.u8);
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r3,r11,65
	ctx.r3.s64 = ctx.r11.s64 + 65;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// cmpw cr6,r3,r4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r4.s32, ctx.xer);
	// bgt cr6,0x822e47f8
	if (ctx.cr6.gt) goto loc_822E47F8;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// stb r9,1(r8)
	PPC_STORE_U8(ctx.r8.u32 + 1, ctx.r9.u8);
loc_822E47B0:
	// lis r10,-31848
	ctx.r10.s64 = -2087190528;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,23228(r10)
	PPC_STORE_U32(ctx.r10.u32 + 23228, ctx.r11.u32);
	// bl 0x822e3cc8
	ctx.lr = 0x822E47C0;
	sub_822E3CC8(ctx, base);
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r7,-1
	ctx.r7.s64 = -1;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subf r5,r9,r8
	ctx.r5.s64 = ctx.r8.s64 - ctx.r9.s64;
	// stw r7,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r7.u32);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// stwx r5,r9,r6
	PPC_STORE_U32(ctx.r9.u32 + ctx.r6.u32, ctx.r5.u32);
loc_822E47E0:
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
loc_822E47F8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e4020
	ctx.lr = 0x822E4800;
	sub_822E4020(ctx, base);
	// b 0x822e47e0
	goto loc_822E47E0;
}

PPC_WEAK_FUNC(sub_822E4728) {
	__imp__sub_822E4728(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E4804) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822E4804) {
	__imp__sub_822E4804(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E4808) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x822E4810;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,29(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 29);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822e48fc
	if (!ctx.cr6.eq) goto loc_822E48FC;
	// lwz r9,16(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lis r11,-31848
	ctx.r11.s64 = -2087190528;
	// lis r10,-31846
	ctx.r10.s64 = -2087059456;
	// addi r28,r11,23232
	ctx.r28.s64 = ctx.r11.s64 + 23232;
	// addi r30,r10,23240
	ctx.r30.s64 = ctx.r10.s64 + 23240;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// blt cr6,0x822e4854
	if (ctx.cr6.lt) goto loc_822E4854;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-4(r28)
	PPC_STORE_U32(ctx.r28.u32 + -4, ctx.r11.u32);
	// bl 0x822e3cc8
	ctx.lr = 0x822E4850;
	sub_822E3CC8(ctx, base);
	// stw r3,8204(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8204, ctx.r3.u32);
loc_822E4854:
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bge cr6,0x822e4870
	if (!ctx.cr6.lt) goto loc_822E4870;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x822a25e0
	ctx.lr = 0x822E4868;
	sub_822A25E0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_822E4870:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lis r5,2
	ctx.r5.s64 = 131072;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823de090
	ctx.lr = 0x822E4880;
	sub_823DE090(ctx, base);
	// lis r9,-31848
	ctx.r9.s64 = -2087190528;
	// li r11,4
	ctx.r11.s64 = 4;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stw r11,23224(r9)
	PPC_STORE_U32(ctx.r9.u32 + 23224, ctx.r11.u32);
	// beq cr6,0x822e48ac
	if (ctx.cr6.eq) goto loc_822E48AC;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
loc_822E48A0:
	// lwzx r11,r9,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bdnz 0x822e48a0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822E48A0;
loc_822E48AC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r9,1
	ctx.r9.s64 = 1;
	// lbz r29,30(r31)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r31.u32 + 30);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r9,-4(r28)
	PPC_STORE_U32(ctx.r28.u32 + -4, ctx.r9.u32);
	// subf r9,r11,r8
	ctx.r9.s64 = ctx.r8.s64 - ctx.r11.s64;
	// addi r8,r9,4
	ctx.r8.s64 = ctx.r9.s64 + 4;
	// stw r9,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// lwzx r7,r11,r10
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stw r7,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r7.u32);
	// stw r8,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r8.u32);
	// bl 0x822e3cc8
	ctx.lr = 0x822E48DC;
	sub_822E3CC8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r3,8204(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8204, ctx.r3.u32);
	// stb r29,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r29.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,8200(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8200, ctx.r11.u32);
	// stw r10,-4(r30)
	PPC_STORE_U32(ctx.r30.u32 + -4, ctx.r10.u32);
	// bl 0x822e4650
	ctx.lr = 0x822E48FC;
	sub_822E4650(ctx, base);
loc_822E48FC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822E4808) {
	__imp__sub_822E4808(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E4904) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822E4904) {
	__imp__sub_822E4904(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E4908) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r9,r11,17536
	ctx.r9.s64 = ctx.r11.s64 + 17536;
	// subf r8,r10,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r3,r7,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822E4908) {
	__imp__sub_822E4908(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E4924) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822E4924) {
	__imp__sub_822E4924(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E4928) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r9,r11,18208
	ctx.r9.s64 = ctx.r11.s64 + 18208;
	// subf r8,r10,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r3,r7,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822E4928) {
	__imp__sub_822E4928(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E4944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822E4944) {
	__imp__sub_822E4944(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E4948) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r9,r11,18208
	ctx.r9.s64 = ctx.r11.s64 + 18208;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x822e498c
	if (!ctx.cr6.eq) goto loc_822E498C;
	// lis r11,-31846
	ctx.r11.s64 = -2087059456;
	// addi r11,r11,31448
	ctx.r11.s64 = ctx.r11.s64 + 31448;
	// lwz r10,-8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// beq cr6,0x822e4984
	if (ctx.cr6.eq) goto loc_822E4984;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// blr 
	return;
loc_822E4984:
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blr 
	return;
loc_822E498C:
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822E4948) {
	__imp__sub_822E4948(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E4994) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822E4994) {
	__imp__sub_822E4994(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E4998) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x822E49A0;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x822e4480
	ctx.lr = 0x822E49B4;
	sub_822E4480(ctx, base);
	// lhz r27,80(r1)
	ctx.r27.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// cmplwi cr6,r27,3
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 3, ctx.xer);
	// bgt cr6,0x822e4a98
	if (ctx.cr6.gt) goto loc_822E4A98;
	// mtctr r27
	ctx.ctr.u64 = ctx.r27.u64;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x822e49e0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_822E49E0;
	// bdzf 4*cr6+eq,0x822e49f0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_822E49F0;
	// bne cr6,0x822e49f0
	if (!ctx.cr6.eq) goto loc_822E49F0;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_822E49E0:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-28736
	ctx.r3.s64 = ctx.r11.s64 + -28736;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_822E49F0:
	// lis r11,-31846
	ctx.r11.s64 = -2087059456;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r30,r11,23248
	ctx.r30.s64 = ctx.r11.s64 + 23248;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// bl 0x822e4480
	ctx.lr = 0x822E4A0C;
	sub_822E4480(ctx, base);
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822e4a58
	if (ctx.cr6.eq) goto loc_822E4A58;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r28,r11,-3004
	ctx.r28.s64 = ctx.r11.s64 + -3004;
loc_822E4A20:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r11,r30,8192
	ctx.r11.s64 = ctx.r30.s64 + 8192;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x822e4a3c
	if (ctx.cr6.lt) goto loc_822E4A3C;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822830e8
	ctx.lr = 0x822E4A3C;
	sub_822830E8(ctx, base);
loc_822E4A3C:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822e4480
	ctx.lr = 0x822E4A4C;
	sub_822E4480(ctx, base);
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822e4a20
	if (!ctx.cr6.eq) goto loc_822E4A20;
loc_822E4A58:
	// cmplwi cr6,r27,2
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 2, ctx.xer);
	// bne cr6,0x822e4a8c
	if (!ctx.cr6.eq) goto loc_822E4A8C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x822a1d50
	ctx.lr = 0x822E4A6C;
	sub_822A1D50(ctx, base);
	// lis r10,-31848
	ctx.r10.s64 = -2087190528;
	// lis r9,-31848
	ctx.r9.s64 = -2087190528;
	// addi r7,r9,23232
	ctx.r7.s64 = ctx.r9.s64 + 23232;
	// lwz r11,23224(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 23224);
	// rlwinm r6,r11,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,23224(r10)
	PPC_STORE_U32(ctx.r10.u32 + 23224, ctx.r11.u32);
	// sthx r3,r6,r7
	PPC_STORE_U16(ctx.r6.u32 + ctx.r7.u32, ctx.r3.u16);
loc_822E4A8C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_822E4A98:
	// lis r11,-31848
	ctx.r11.s64 = -2087190528;
	// rlwinm r10,r27,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r11,23232
	ctx.r9.s64 = ctx.r11.s64 + 23232;
	// lhzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// bl 0x822a13a0
	ctx.lr = 0x822E4AAC;
	sub_822A13A0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822E4998) {
	__imp__sub_822E4998(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E4AB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822E4AB4) {
	__imp__sub_822E4AB4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E4AB8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r4,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r4.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r5,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r5.u32);
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// addi r7,r10,17536
	ctx.r7.s64 = ctx.r10.s64 + 17536;
	// stb r9,28(r3)
	PPC_STORE_U8(ctx.r3.u32 + 28, ctx.r9.u8);
	// stb r11,29(r3)
	PPC_STORE_U8(ctx.r3.u32 + 29, ctx.r11.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r8,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r8.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stb r6,30(r3)
	PPC_STORE_U8(ctx.r3.u32 + 30, ctx.r6.u8);
	// stw r7,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r7.u32);
	// b 0x822e4808
	sub_822E4808(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822E4AB8) {
	__imp__sub_822E4AB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E4B00) {
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
	// lbz r11,29(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 29);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822e4c10
	if (!ctx.cr6.eq) goto loc_822E4C10;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x822e4b44
	if (ctx.cr6.eq) goto loc_822E4B44;
	// bl 0x822e4728
	ctx.lr = 0x822E4B38;
	sub_822E4728(ctx, base);
	// lbz r11,29(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 29);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822e4c10
	if (!ctx.cr6.eq) goto loc_822E4C10;
loc_822E4B44:
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// bne cr6,0x822e4b5c
	if (!ctx.cr6.eq) goto loc_822E4B5C;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// b 0x822e4c10
	goto loc_822E4C10;
loc_822E4B5C:
	// lis r11,-31848
	ctx.r11.s64 = -2087190528;
	// lis r5,2
	ctx.r5.s64 = 131072;
	// addi r3,r11,23232
	ctx.r3.s64 = ctx.r11.s64 + 23232;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823de090
	ctx.lr = 0x822E4B70;
	sub_823DE090(ctx, base);
	// lis r10,-31848
	ctx.r10.s64 = -2087190528;
	// li r11,4
	ctx.r11.s64 = 4;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,23224(r10)
	PPC_STORE_U32(ctx.r10.u32 + 23224, ctx.r11.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r8,r11,69
	ctx.r8.s64 = ctx.r11.s64 + 69;
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// ble cr6,0x822e4bcc
	if (!ctx.cr6.gt) goto loc_822E4BCC;
	// lbz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822e4bb0
	if (ctx.cr6.eq) goto loc_822E4BB0;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,-2836
	ctx.r4.s64 = ctx.r11.s64 + -2836;
	// bl 0x822830e8
	ctx.lr = 0x822E4BB0;
	sub_822830E8(ctx, base);
loc_822E4BB0:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r3,10
	ctx.r3.s64 = 10;
	// addi r4,r11,-2876
	ctx.r4.s64 = ctx.r11.s64 + -2876;
	// bl 0x82280900
	ctx.lr = 0x822E4BC0;
	sub_82280900(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,29(r31)
	PPC_STORE_U8(ctx.r31.u32 + 29, ctx.r10.u8);
	// b 0x822e4c10
	goto loc_822E4C10;
loc_822E4BCC:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lbz r3,30(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 30);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// bl 0x822e3dd8
	ctx.lr = 0x822E4BDC;
	sub_822E3DD8(ctx, base);
	// lis r7,-31846
	ctx.r7.s64 = -2087059456;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r6,r7,23232
	ctx.r6.s64 = ctx.r7.s64 + 23232;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,-1
	ctx.r8.s64 = -1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r11,8216(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8216, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,8208(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8208, ctx.r10.u32);
	// stw r9,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r9.u32);
	// stw r8,23232(r7)
	PPC_STORE_U32(ctx.r7.u32 + 23232, ctx.r8.u32);
	// bl 0x822e45d0
	ctx.lr = 0x822E4C10;
	sub_822E45D0(ctx, base);
loc_822E4C10:
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

PPC_WEAK_FUNC(sub_822E4B00) {
	__imp__sub_822E4B00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E4C28) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32210
	ctx.r10.s64 = -2110914560;
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r4,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r4.u32);
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r5,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r5.u32);
	// addi r8,r10,18208
	ctx.r8.s64 = ctx.r10.s64 + 18208;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stb r6,28(r3)
	PPC_STORE_U8(ctx.r3.u32 + 28, ctx.r6.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r11,29(r3)
	PPC_STORE_U8(ctx.r3.u32 + 29, ctx.r11.u8);
	// stw r9,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r9.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stb r7,30(r3)
	PPC_STORE_U8(ctx.r3.u32 + 30, ctx.r7.u8);
	// stw r8,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r8.u32);
	// b 0x822e4b00
	sub_822E4B00(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822E4C28) {
	__imp__sub_822E4C28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E4C6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822E4C6C) {
	__imp__sub_822E4C6C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E4C70) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r13)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,16
	ctx.r10.s64 = 16;
	// li r9,1
	ctx.r9.s64 = 1;
	// stwx r9,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822E4C70) {
	__imp__sub_822E4C70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E4C84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822E4C84) {
	__imp__sub_822E4C84(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E4C88) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r13)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,16
	ctx.r10.s64 = 16;
	// li r9,0
	ctx.r9.s64 = 0;
	// stwx r9,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822E4C88) {
	__imp__sub_822E4C88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E4C9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822E4C9C) {
	__imp__sub_822E4C9C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E4CA0) {
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
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x822ec4e8
	ctx.lr = 0x822E4CBC;
	sub_822EC4E8(ctx, base);
	// cmplwi cr6,r31,8448
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 8448, ctx.xer);
	// ble cr6,0x822e4ccc
	if (!ctx.cr6.gt) goto loc_822E4CCC;
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x822e4ce8
	goto loc_822E4CE8;
loc_822E4CCC:
	// lis r11,-31846
	ctx.r11.s64 = -2087059456;
	// addi r10,r11,31680
	ctx.r10.s64 = ctx.r11.s64 + 31680;
	// lwz r11,-16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -16);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,-16(r10)
	PPC_STORE_U32(ctx.r10.u32 + -16, ctx.r11.u32);
	// lwzx r31,r9,r10
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
loc_822E4CE8:
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x822ec500
	ctx.lr = 0x822E4CF0;
	sub_822EC500(ctx, base);
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

PPC_WEAK_FUNC(sub_822E4CA0) {
	__imp__sub_822E4CA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E4D08) {
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
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x822ec4e8
	ctx.lr = 0x822E4D24;
	sub_822EC4E8(ctx, base);
	// lis r10,-31846
	ctx.r10.s64 = -2087059456;
	// li r3,4
	ctx.r3.s64 = 4;
	// addi r11,r10,31664
	ctx.r11.s64 = ctx.r10.s64 + 31664;
	// addi r9,r11,16
	ctx.r9.s64 = ctx.r11.s64 + 16;
	// lwz r11,31664(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 31664);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,31664(r10)
	PPC_STORE_U32(ctx.r10.u32 + 31664, ctx.r11.u32);
	// stwx r31,r8,r9
	PPC_STORE_U32(ctx.r8.u32 + ctx.r9.u32, ctx.r31.u32);
	// bl 0x822ec500
	ctx.lr = 0x822E4D4C;
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

PPC_WEAK_FUNC(sub_822E4D08) {
	__imp__sub_822E4D08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E4D60) {
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
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x822ec4e8
	ctx.lr = 0x822E4D7C;
	sub_822EC4E8(ctx, base);
	// lis r11,-31846
	ctx.r11.s64 = -2087059456;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r10,r11,31456
	ctx.r10.s64 = ctx.r11.s64 + 31456;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,220(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 220);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,220(r10)
	PPC_STORE_U32(ctx.r10.u32 + 220, ctx.r11.u32);
	// lwzx r31,r9,r10
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823de090
	ctx.lr = 0x822E4DA8;
	sub_823DE090(ctx, base);
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x822ec500
	ctx.lr = 0x822E4DB0;
	sub_822EC500(ctx, base);
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

PPC_WEAK_FUNC(sub_822E4D60) {
	__imp__sub_822E4D60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E4DC8) {
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
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x822ec4e8
	ctx.lr = 0x822E4DE4;
	sub_822EC4E8(ctx, base);
	// lis r11,-31846
	ctx.r11.s64 = -2087059456;
	// li r3,4
	ctx.r3.s64 = 4;
	// addi r10,r11,31456
	ctx.r10.s64 = ctx.r11.s64 + 31456;
	// lwz r11,220(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 220);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,220(r10)
	PPC_STORE_U32(ctx.r10.u32 + 220, ctx.r11.u32);
	// stwx r31,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r31.u32);
	// bl 0x822ec500
	ctx.lr = 0x822E4E08;
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

PPC_WEAK_FUNC(sub_822E4DC8) {
	__imp__sub_822E4DC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E4E1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822E4E1C) {
	__imp__sub_822E4E1C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E4E20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31846
	ctx.r11.s64 = -2087059456;
	// li r10,52
	ctx.r10.s64 = 52;
	// addi r11,r11,32432
	ctx.r11.s64 = ctx.r11.s64 + 32432;
	// addi r9,r11,-752
	ctx.r9.s64 = ctx.r11.s64 + -752;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// lwz r10,-760(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -760);
loc_822E4E3C:
	// stwu r10,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r9.u32 = ea;
	// addi r10,r10,8448
	ctx.r10.s64 = ctx.r10.s64 + 8448;
	// bdnz 0x822e4e3c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822E4E3C;
	// lis r10,-31846
	ctx.r10.s64 = -2087059456;
	// li r9,52
	ctx.r9.s64 = 52;
	// addi r8,r10,31456
	ctx.r8.s64 = ctx.r10.s64 + 31456;
	// li r10,52
	ctx.r10.s64 = 52;
	// stw r10,-768(r11)
	PPC_STORE_U32(ctx.r11.u32 + -768, ctx.r10.u32);
	// addi r10,r8,-4
	ctx.r10.s64 = ctx.r8.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_822E4E64:
	// stwu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// addi r11,r11,2400
	ctx.r11.s64 = ctx.r11.s64 + 2400;
	// bdnz 0x822e4e64
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822E4E64;
	// li r11,52
	ctx.r11.s64 = 52;
	// stw r11,220(r8)
	PPC_STORE_U32(ctx.r8.u32 + 220, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822E4E20) {
	__imp__sub_822E4E20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E4E7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822E4E7C) {
	__imp__sub_822E4E7C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E4E80) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822E4E80) {
	__imp__sub_822E4E80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E4E88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x822E4E90;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r5,540
	ctx.r5.s64 = 540;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x823de090
	ctx.lr = 0x822E4EAC;
	sub_823DE090(ctx, base);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// stw r29,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822E4E88) {
	__imp__sub_822E4E88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E4EBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822E4EBC) {
	__imp__sub_822E4EBC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E4EC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x822E4EC8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,-1
	ctx.r29.s64 = -1;
	// lis r6,8192
	ctx.r6.s64 = 536870912;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// ori r6,r6,1028
	ctx.r6.u64 = ctx.r6.u64 | 1028;
	// li r5,0
	ctx.r5.s64 = 0;
	// lis r3,7108
	ctx.r3.s64 = 465829888;
	// bl 0x8236fdb0
	ctx.lr = 0x822E4EE8;
	sub_8236FDB0(ctx, base);
	// lis r28,-31846
	ctx.r28.s64 = -2087059456;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r28,32428
	ctx.r30.s64 = ctx.r28.s64 + 32428;
	// li r5,540
	ctx.r5.s64 = 540;
	// addi r3,r30,-540
	ctx.r3.s64 = ctx.r30.s64 + -540;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823de090
	ctx.lr = 0x822E4F04;
	sub_823DE090(ctx, base);
	// lis r11,7108
	ctx.r11.s64 = 465829888;
	// stw r31,-540(r30)
	PPC_STORE_U32(ctx.r30.u32 + -540, ctx.r31.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,-260(r30)
	PPC_STORE_U32(ctx.r30.u32 + -260, ctx.r11.u32);
	// add r4,r31,r11
	ctx.r4.u64 = ctx.r31.u64 + ctx.r11.u64;
	// bl 0x823a4b38
	ctx.lr = 0x822E4F1C;
	sub_823A4B38(ctx, base);
	// li r6,516
	ctx.r6.s64 = 516;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,4096
	ctx.r3.s64 = 4096;
	// bl 0x8236fdb0
	ctx.lr = 0x822E4F30;
	sub_8236FDB0(ctx, base);
	// stw r3,32428(r28)
	PPC_STORE_U32(ctx.r28.u32 + 32428, ctx.r3.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822E4EC0) {
	__imp__sub_822E4EC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E4F3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822E4F3C) {
	__imp__sub_822E4F3C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E4F40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x822E4F48;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822e4f90
	if (ctx.cr6.eq) goto loc_822E4F90;
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// li r29,-1
	ctx.r29.s64 = -1;
	// rlwinm r11,r11,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// lis r30,1
	ctx.r30.s64 = 65536;
	// addi r31,r11,1
	ctx.r31.s64 = ctx.r11.s64 + 1;
loc_822E4F68:
	// lis r6,8192
	ctx.r6.s64 = 536870912;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r6,r6,1028
	ctx.r6.u64 = ctx.r6.u64 | 1028;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lis r3,1
	ctx.r3.s64 = 65536;
	// bl 0x8236fdb0
	ctx.lr = 0x822E4F80;
	sub_8236FDB0(ctx, base);
	// add r4,r3,r30
	ctx.r4.u64 = ctx.r3.u64 + ctx.r30.u64;
	// bl 0x823a4b38
	ctx.lr = 0x822E4F88;
	sub_823A4B38(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x822e4f68
	if (!ctx.cr0.eq) goto loc_822E4F68;
loc_822E4F90:
	// bl 0x8230dc80
	ctx.lr = 0x822E4F94;
	sub_8230DC80(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822E4F40) {
	__imp__sub_822E4F40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E4F9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822E4F9C) {
	__imp__sub_822E4F9C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E4FA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x822E4FA8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,40
	ctx.r31.s64 = 40;
	// li r29,-1
	ctx.r29.s64 = -1;
	// lis r30,1
	ctx.r30.s64 = 65536;
loc_822E4FB8:
	// lis r6,8192
	ctx.r6.s64 = 536870912;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r6,r6,1028
	ctx.r6.u64 = ctx.r6.u64 | 1028;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lis r3,1
	ctx.r3.s64 = 65536;
	// bl 0x8236fdb0
	ctx.lr = 0x822E4FD0;
	sub_8236FDB0(ctx, base);
	// add r4,r3,r30
	ctx.r4.u64 = ctx.r3.u64 + ctx.r30.u64;
	// bl 0x823a4b38
	ctx.lr = 0x822E4FD8;
	sub_823A4B38(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x822e4fb8
	if (!ctx.cr0.eq) goto loc_822E4FB8;
	// bl 0x8230dc80
	ctx.lr = 0x822E4FE4;
	sub_8230DC80(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822E4FA0) {
	__imp__sub_822E4FA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E4FEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822E4FEC) {
	__imp__sub_822E4FEC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E4FF0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// add r11,r10,r3
	ctx.r11.u64 = ctx.r10.u64 + ctx.r3.u64;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// addi r10,r11,12
	ctx.r10.s64 = ctx.r11.s64 + 12;
	// stw r4,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r4.u32);
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r8,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r8.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822E4FF0) {
	__imp__sub_822E4FF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E501C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822E501C) {
	__imp__sub_822E501C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E5020) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31846
	ctx.r11.s64 = -2087059456;
	// mulli r10,r4,268
	ctx.r10.s64 = ctx.r4.s64 * 268;
	// addi r11,r11,31888
	ctx.r11.s64 = ctx.r11.s64 + 31888;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// add r10,r9,r11
	ctx.r10.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// addi r9,r10,12
	ctx.r9.s64 = ctx.r10.s64 + 12;
	// stw r3,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r3.u32);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r7,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r7.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822E5020) {
	__imp__sub_822E5020(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E5060) {
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x822e50ac
	if (!ctx.cr6.eq) goto loc_822E50AC;
	// addis r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 65536;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rlwinm r31,r10,0,0,15
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFF0000;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x822e50cc
	if (ctx.cr6.eq) goto loc_822E50CC;
	// lis r10,-31846
	ctx.r10.s64 = -2087059456;
	// lwz r10,31888(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 31888);
	// add r4,r10,r31
	ctx.r4.u64 = ctx.r10.u64 + ctx.r31.u64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x822e50c8
	goto loc_822E50C8;
loc_822E50AC:
	// rlwinm r31,r11,0,0,15
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x822e50cc
	if (ctx.cr6.eq) goto loc_822E50CC;
	// lis r10,-31846
	ctx.r10.s64 = -2087059456;
	// lwz r10,31888(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 31888);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r3,r10,r31
	ctx.r3.u64 = ctx.r10.u64 + ctx.r31.u64;
loc_822E50C8:
	// bl 0x823a62b8
	ctx.lr = 0x822E50CC;
	sub_823A62B8(ctx, base);
loc_822E50CC:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r31,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r31.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
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

PPC_WEAK_FUNC(sub_822E5060) {
	__imp__sub_822E5060(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E50F0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31846
	ctx.r10.s64 = -2087059456;
	// mulli r11,r4,268
	ctx.r11.s64 = ctx.r4.s64 * 268;
	// addi r10,r10,31888
	ctx.r10.s64 = ctx.r10.s64 + 31888;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x822e5060
	sub_822E5060(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822E50F0) {
	__imp__sub_822E50F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E5108) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x822E5110;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mulli r11,r5,268
	ctx.r11.s64 = ctx.r5.s64 * 268;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// rlwinm r10,r4,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// add r11,r10,r31
	ctx.r11.u64 = ctx.r10.u64 + ctx.r31.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r27,r11,12
	ctx.r27.s64 = ctx.r11.s64 + 12;
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x822e5188
	if (ctx.cr6.eq) goto loc_822E5188;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x822e515c
	if (!ctx.cr6.eq) goto loc_822E515C;
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// b 0x822e5164
	goto loc_822E5164;
loc_822E515C:
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// mr r28,r10
	ctx.r28.u64 = ctx.r10.u64;
loc_822E5164:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r5,1028
	ctx.r5.s64 = 1028;
	// subf r4,r30,r28
	ctx.r4.s64 = ctx.r28.s64 - ctx.r30.s64;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x8236fe38
	ctx.lr = 0x822E5178;
	sub_8236FE38(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// add r4,r11,r28
	ctx.r4.u64 = ctx.r11.u64 + ctx.r28.u64;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x823a4cb0
	ctx.lr = 0x822E5188;
	sub_823A4CB0(ctx, base);
loc_822E5188:
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822E5108) {
	__imp__sub_822E5108(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E51A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822E51A4) {
	__imp__sub_822E51A4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E51A8) {
	PPC_FUNC_PROLOGUE();
	// mulli r11,r5,268
	ctx.r11.s64 = ctx.r5.s64 * 268;
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
loc_822E51C8:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r8,r4
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x822e51e8
	if (ctx.cr6.eq) goto loc_822E51E8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x822e51c8
	if (ctx.cr6.lt) goto loc_822E51C8;
	// blr 
	return;
loc_822E51E8:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// b 0x822e5108
	sub_822E5108(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822E51A8) {
	__imp__sub_822E51A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E51F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31846
	ctx.r11.s64 = -2087059456;
	// mulli r10,r4,268
	ctx.r10.s64 = ctx.r4.s64 * 268;
	// addi r8,r11,31888
	ctx.r8.s64 = ctx.r11.s64 + 31888;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r9,r8,4
	ctx.r9.s64 = ctx.r8.s64 + 4;
	// li r11,0
	ctx.r11.s64 = 0;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
loc_822E521C:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r7,r3
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x822e523c
	if (ctx.cr6.eq) goto loc_822E523C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x822e521c
	if (ctx.cr6.lt) goto loc_822E521C;
	// blr 
	return;
loc_822E523C:
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// b 0x822e5108
	sub_822E5108(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822E51F0) {
	__imp__sub_822E51F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E5248) {
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
	// subf. r5,r4,r3
	ctx.r5.s64 = ctx.r3.s64 - ctx.r4.s64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble 0x822e527c
	if (!ctx.cr0.gt) goto loc_822E527C;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r3,16
	ctx.r3.s64 = 16;
	// addi r4,r11,-2728
	ctx.r4.s64 = ctx.r11.s64 + -2728;
	// bl 0x82280b08
	ctx.lr = 0x822E526C;
	sub_82280B08(ctx, base);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// li r4,637
	ctx.r4.s64 = 637;
	// addi r3,r10,-2800
	ctx.r3.s64 = ctx.r10.s64 + -2800;
	// bl 0x8230dec8
	ctx.lr = 0x822E527C;
	sub_8230DEC8(ctx, base);
loc_822E527C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822E5248) {
	__imp__sub_822E5248(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E528C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822E528C) {
	__imp__sub_822E528C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E5290) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf5c
	ctx.lr = 0x822E5298;
	__savegprlr_21(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r21,r5
	ctx.r21.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// cmpwi cr6,r6,2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 2, ctx.xer);
	// bne cr6,0x822e52bc
	if (!ctx.cr6.eq) goto loc_822E52BC;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822e52fc
	goto loc_822E52FC;
loc_822E52BC:
	// bl 0x82173770
	ctx.lr = 0x822E52C0;
	sub_82173770(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822e52f0
	if (ctx.cr6.eq) goto loc_822E52F0;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x822e52e8
	if (!ctx.cr6.eq) goto loc_822E52E8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82171b40
	ctx.lr = 0x822E52E0;
	sub_82171B40(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823ddfac
	__restgprlr_21(ctx, base);
	return;
loc_822E52E8:
	// bl 0x821737e0
	ctx.lr = 0x822E52EC;
	sub_821737E0(ctx, base);
	// b 0x822e52fc
	goto loc_822E52FC;
loc_822E52F0:
	// addi r11,r21,-4
	ctx.r11.s64 = ctx.r21.s64 + -4;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_822E52FC:
	// lis r11,-31846
	ctx.r11.s64 = -2087059456;
	// mulli r10,r3,268
	ctx.r10.s64 = ctx.r3.s64 * 268;
	// addi r30,r11,31888
	ctx.r30.s64 = ctx.r11.s64 + 31888;
	// lis r11,0
	ctx.r11.s64 = 0;
	// addi r9,r30,4
	ctx.r9.s64 = ctx.r30.s64 + 4;
	// ori r22,r11,65535
	ctx.r22.u64 = ctx.r11.u64 | 65535;
	// add r24,r10,r9
	ctx.r24.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r11,r31,-1
	ctx.r11.s64 = ctx.r31.s64 + -1;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// lwz r10,8(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// clrlwi r23,r10,16
	ctx.r23.u64 = ctx.r10.u32 & 0xFFFF;
	// bne cr6,0x822e53ec
	if (!ctx.cr6.eq) goto loc_822E53EC;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,280(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 280);
	// addi r28,r9,-2800
	ctx.r28.s64 = ctx.r9.s64 + -2800;
	// andc r31,r8,r11
	ctx.r31.u64 = ctx.r8.u64 & ~ctx.r11.u64;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// add r29,r31,r25
	ctx.r29.u64 = ctx.r31.u64 + ctx.r25.u64;
	// addi r27,r11,-2728
	ctx.r27.s64 = ctx.r11.s64 + -2728;
	// subf. r5,r10,r29
	ctx.r5.s64 = ctx.r29.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble 0x822e536c
	if (!ctx.cr0.gt) goto loc_822E536C;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82280b08
	ctx.lr = 0x822E5360;
	sub_82280B08(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r4,637
	ctx.r4.s64 = 637;
	// bl 0x8230dec8
	ctx.lr = 0x822E536C;
	sub_8230DEC8(ctx, base);
loc_822E536C:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x822e53cc
	if (ctx.cr6.eq) goto loc_822E53CC;
	// lwz r11,8(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// xor r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 ^ ctx.r31.u64;
	// rlwinm r9,r10,0,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFF0000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822e53cc
	if (!ctx.cr6.eq) goto loc_822E53CC;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x8236fe48
	ctx.lr = 0x822E5394;
	sub_8236FE48(ctx, base);
	// cmplw cr6,r3,r21
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r21.u32, ctx.xer);
	// beq cr6,0x822e53cc
	if (ctx.cr6.eq) goto loc_822E53CC;
	// add r10,r31,r22
	ctx.r10.u64 = ctx.r31.u64 + ctx.r22.u64;
	// lwz r11,280(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 280);
	// rlwinm r31,r10,0,0,15
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFF0000;
	// add r29,r31,r25
	ctx.r29.u64 = ctx.r31.u64 + ctx.r25.u64;
	// subf. r5,r11,r29
	ctx.r5.s64 = ctx.r29.s64 - ctx.r11.s64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble 0x822e53cc
	if (!ctx.cr0.gt) goto loc_822E53CC;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82280b08
	ctx.lr = 0x822E53C0;
	sub_82280B08(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r4,637
	ctx.r4.s64 = 637;
	// bl 0x8230dec8
	ctx.lr = 0x822E53CC;
	sub_8230DEC8(ctx, base);
loc_822E53CC:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,8(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + ctx.r29.u64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r28,r11,r31
	ctx.r28.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x823a62b8
	ctx.lr = 0x822E53E4;
	sub_823A62B8(ctx, base);
	// stw r29,8(r24)
	PPC_STORE_U32(ctx.r24.u32 + 8, ctx.r29.u32);
	// b 0x822e54b0
	goto loc_822E54B0;
loc_822E53EC:
	// not r28,r11
	ctx.r28.u64 = ~ctx.r11.u64;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// subf r10,r25,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r25.s64;
	// addi r27,r9,-2800
	ctx.r27.s64 = ctx.r9.s64 + -2800;
	// and r31,r10,r28
	ctx.r31.u64 = ctx.r10.u64 & ctx.r28.u64;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// subf. r5,r31,r11
	ctx.r5.s64 = ctx.r11.s64 - ctx.r31.s64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// addi r26,r10,-2728
	ctx.r26.s64 = ctx.r10.s64 + -2728;
	// ble 0x822e5428
	if (!ctx.cr0.gt) goto loc_822E5428;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82280b08
	ctx.lr = 0x822E541C;
	sub_82280B08(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// li r4,637
	ctx.r4.s64 = 637;
	// bl 0x8230dec8
	ctx.lr = 0x822E5428;
	sub_8230DEC8(ctx, base);
loc_822E5428:
	// add r29,r31,r25
	ctx.r29.u64 = ctx.r31.u64 + ctx.r25.u64;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x822e5494
	if (ctx.cr6.eq) goto loc_822E5494;
	// lwz r11,8(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// addi r10,r29,-1
	ctx.r10.s64 = ctx.r29.s64 + -1;
	// xor r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// rlwinm r8,r9,0,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFF0000;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x822e5494
	if (!ctx.cr6.eq) goto loc_822E5494;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x8236fe48
	ctx.lr = 0x822E5458;
	sub_8236FE48(ctx, base);
	// cmplw cr6,r3,r21
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r21.u32, ctx.xer);
	// beq cr6,0x822e5494
	if (ctx.cr6.eq) goto loc_822E5494;
	// clrlwi r10,r29,16
	ctx.r10.u64 = ctx.r29.u32 & 0xFFFF;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// subf r9,r10,r31
	ctx.r9.s64 = ctx.r31.s64 - ctx.r10.s64;
	// and r31,r9,r28
	ctx.r31.u64 = ctx.r9.u64 & ctx.r28.u64;
	// subf. r5,r31,r11
	ctx.r5.s64 = ctx.r11.s64 - ctx.r31.s64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble 0x822e5490
	if (!ctx.cr0.gt) goto loc_822E5490;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82280b08
	ctx.lr = 0x822E5484;
	sub_82280B08(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// li r4,637
	ctx.r4.s64 = 637;
	// bl 0x8230dec8
	ctx.lr = 0x822E5490;
	sub_8230DEC8(ctx, base);
loc_822E5490:
	// add r29,r31,r25
	ctx.r29.u64 = ctx.r31.u64 + ctx.r25.u64;
loc_822E5494:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,8(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x823a62b8
	ctx.lr = 0x822E54AC;
	sub_823A62B8(ctx, base);
	// stw r31,8(r24)
	PPC_STORE_U32(ctx.r24.u32 + 8, ctx.r31.u32);
loc_822E54B0:
	// add r9,r29,r22
	ctx.r9.u64 = ctx.r29.u64 + ctx.r22.u64;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r11,r31,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFF0000;
	// rlwinm r8,r9,0,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFF0000;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// subf r4,r11,r8
	ctx.r4.s64 = ctx.r8.s64 - ctx.r11.s64;
	// bl 0x8236fe38
	ctx.lr = 0x822E54D0;
	sub_8236FE38(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823ddfac
	__restgprlr_21(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822E5290) {
	__imp__sub_822E5290(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E54DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822E54DC) {
	__imp__sub_822E54DC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E54E0) {
	PPC_FUNC_PROLOGUE();
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x822e5290
	sub_822E5290(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822E54E0) {
	__imp__sub_822E54E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E54E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x822E54F0;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r25,0
	ctx.r25.s64 = 0;
	// lis r11,-31846
	ctx.r11.s64 = -2087059456;
	// mr r27,r25
	ctx.r27.u64 = ctx.r25.u64;
	// addi r26,r11,31888
	ctx.r26.s64 = ctx.r11.s64 + 31888;
loc_822E5504:
	// mulli r11,r27,268
	ctx.r11.s64 = ctx.r27.s64 * 268;
	// addi r10,r26,4
	ctx.r10.s64 = ctx.r26.s64 + 4;
	// add r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwzx r30,r11,r10
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x822e55d0
	if (ctx.cr6.eq) goto loc_822E55D0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e5060
	ctx.lr = 0x822E5528;
	sub_822E5060(ctx, base);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822e55d0
	if (ctx.cr6.eq) goto loc_822E55D0;
	// addi r10,r31,12
	ctx.r10.s64 = ctx.r31.s64 + 12;
loc_822E553C:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r8,r30
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x822e555c
	if (ctx.cr6.eq) goto loc_822E555C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x822e553c
	if (ctx.cr6.lt) goto loc_822E553C;
	// b 0x822e55d0
	goto loc_822E55D0;
loc_822E555C:
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r28,r11,12
	ctx.r28.s64 = ctx.r11.s64 + 12;
	// stw r25,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r25.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x822e55bc
	if (ctx.cr6.eq) goto loc_822E55BC;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x822e5590
	if (!ctx.cr6.eq) goto loc_822E5590;
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// b 0x822e5598
	goto loc_822E5598;
loc_822E5590:
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
loc_822E5598:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// li r5,1028
	ctx.r5.s64 = 1028;
	// subf r4,r30,r29
	ctx.r4.s64 = ctx.r29.s64 - ctx.r30.s64;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x8236fe38
	ctx.lr = 0x822E55AC;
	sub_8236FE38(ctx, base);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + ctx.r29.u64;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x823a4cb0
	ctx.lr = 0x822E55BC;
	sub_823A4CB0(ctx, base);
loc_822E55BC:
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
loc_822E55D0:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmplwi cr6,r27,2
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 2, ctx.xer);
	// blt cr6,0x822e5504
	if (ctx.cr6.lt) goto loc_822E5504;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822E54E8) {
	__imp__sub_822E54E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E55E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822E55E4) {
	__imp__sub_822E55E4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E55E8) {
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
	// lis r11,-31846
	ctx.r11.s64 = -2087059456;
	// addi r10,r11,31888
	ctx.r10.s64 = ctx.r11.s64 + 31888;
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r10,280(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 280);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addis r31,r9,40
	ctx.r31.s64 = ctx.r9.s64 + 2621440;
	// bl 0x822dc098
	ctx.lr = 0x822E5614;
	sub_822DC098(ctx, base);
	// add r3,r3,r31
	ctx.r3.u64 = ctx.r3.u64 + ctx.r31.u64;
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

PPC_WEAK_FUNC(sub_822E55E8) {
	__imp__sub_822E55E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E562C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822E562C) {
	__imp__sub_822E562C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E5630) {
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
	// lis r11,-31846
	ctx.r11.s64 = -2087059456;
	// addi r10,r11,31888
	ctx.r10.s64 = ctx.r11.s64 + 31888;
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r10,280(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 280);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addis r31,r9,40
	ctx.r31.s64 = ctx.r9.s64 + 2621440;
	// bl 0x822dc098
	ctx.lr = 0x822E565C;
	sub_822DC098(ctx, base);
	// addis r8,r31,-320
	ctx.r8.s64 = ctx.r31.s64 + -20971520;
	// add r3,r3,r8
	ctx.r3.u64 = ctx.r3.u64 + ctx.r8.u64;
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

PPC_WEAK_FUNC(sub_822E5630) {
	__imp__sub_822E5630(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E5678) {
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
	// lis r11,-31846
	ctx.r11.s64 = -2087059456;
	// addi r10,r11,31888
	ctx.r10.s64 = ctx.r11.s64 + 31888;
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r10,280(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 280);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addis r31,r9,40
	ctx.r31.s64 = ctx.r9.s64 + 2621440;
	// bl 0x822dc098
	ctx.lr = 0x822E56A4;
	sub_822DC098(ctx, base);
	// add r31,r3,r31
	ctx.r31.u64 = ctx.r3.u64 + ctx.r31.u64;
	// bl 0x82179e78
	ctx.lr = 0x822E56AC;
	sub_82179E78(ctx, base);
	// subf r3,r3,r31
	ctx.r3.s64 = ctx.r31.s64 - ctx.r3.s64;
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

PPC_WEAK_FUNC(sub_822E5678) {
	__imp__sub_822E5678(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E56C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822E56C4) {
	__imp__sub_822E56C4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E56C8) {
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
	// lis r11,-31846
	ctx.r11.s64 = -2087059456;
	// addi r10,r11,31888
	ctx.r10.s64 = ctx.r11.s64 + 31888;
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r10,280(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 280);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addis r31,r9,40
	ctx.r31.s64 = ctx.r9.s64 + 2621440;
	// bl 0x822dc098
	ctx.lr = 0x822E56F4;
	sub_822DC098(ctx, base);
	// add r31,r3,r31
	ctx.r31.u64 = ctx.r3.u64 + ctx.r31.u64;
	// bl 0x82179e78
	ctx.lr = 0x822E56FC;
	sub_82179E78(ctx, base);
	// subf r3,r3,r31
	ctx.r3.s64 = ctx.r31.s64 - ctx.r3.s64;
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

PPC_WEAK_FUNC(sub_822E56C8) {
	__imp__sub_822E56C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E5714) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822E5714) {
	__imp__sub_822E5714(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E5718) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfs f0,-2680(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -2680);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f12,f0
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_822E5718) {
	__imp__sub_822E5718(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E573C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_822E573C) {
	__imp__sub_822E573C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E5740) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x822E5748;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31846
	ctx.r11.s64 = -2087059456;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r31,r11,31888
	ctx.r31.s64 = ctx.r11.s64 + 31888;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r28,r11,-2620
	ctx.r28.s64 = ctx.r11.s64 + -2620;
	// lfs f31,-2680(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -2680);
	ctx.f31.f64 = double(temp.f32);
	// lwz r11,276(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822e57dc
	if (ctx.cr6.eq) goto loc_822E57DC;
	// addi r29,r31,280
	ctx.r29.s64 = ctx.r31.s64 + 280;
loc_822E577C:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x822e5790
	if (!ctx.cr6.eq) goto loc_822E5790;
	// lwz r10,280(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// b 0x822e5794
	goto loc_822E5794;
loc_822E5790:
	// lwz r10,16(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
loc_822E5794:
	// lwz r5,4(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwzu r11,8(r29)
	ea = 8 + ctx.r29.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r29.u32 = ea;
	// li r3,16
	ctx.r3.s64 = 16;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f1,f12,f31
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// stfd f1,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f1.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// bl 0x82280900
	ctx.lr = 0x822E57CC;
	sub_82280900(ctx, base);
	// lwz r11,276(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x822e577c
	if (ctx.cr6.lt) goto loc_822E577C;
loc_822E57DC:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,280(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addis r30,r11,40
	ctx.r30.s64 = ctx.r11.s64 + 2621440;
	// bl 0x822dc098
	ctx.lr = 0x822E57F0;
	sub_822DC098(ctx, base);
	// add r30,r3,r30
	ctx.r30.u64 = ctx.r3.u64 + ctx.r30.u64;
	// bl 0x82179e78
	ctx.lr = 0x822E57F8;
	sub_82179E78(ctx, base);
	// subf r10,r3,r30
	ctx.r10.s64 = ctx.r30.s64 - ctx.r3.s64;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// addi r4,r9,-2648
	ctx.r4.s64 = ctx.r9.s64 + -2648;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// li r3,16
	ctx.r3.s64 = 16;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f1,f12,f31
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// stfd f1,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x82280900
	ctx.lr = 0x822E582C;
	sub_82280900(ctx, base);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addic. r30,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r30.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x822e588c
	if (ctx.cr0.lt) goto loc_822E588C;
	// rlwinm r9,r30,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r31,28
	ctx.r10.s64 = ctx.r31.s64 + 28;
	// add r31,r9,r10
	ctx.r31.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_822E5848:
	// lwz r10,-8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// lwz r5,-12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f1,f12,f31
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// stfd f1,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f1.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// bl 0x82280900
	ctx.lr = 0x822E5880;
	sub_82280900(ctx, base);
	// lwzu r11,-8(r31)
	ea = -8 + ctx.r31.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r31.u32 = ea;
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x822e5848
	if (!ctx.cr0.lt) goto loc_822E5848;
loc_822E588C:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r3,16
	ctx.r3.s64 = 16;
	// addi r4,r11,-2676
	ctx.r4.s64 = ctx.r11.s64 + -2676;
	// bl 0x82280900
	ctx.lr = 0x822E589C;
	sub_82280900(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822E5740) {
	__imp__sub_822E5740(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_822E58A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x822E58B0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r4,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x80000000;
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// rlwinm r11,r4,8,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xF;
	// bne cr6,0x822e5994
	if (!ctx.cr6.eq) goto loc_822E5994;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822e58e0
	if (!ctx.cr6.eq) goto loc_822E58E0;
	// li r4,4096
	ctx.r4.s64 = 4096;
	// b 0x822e58e8
	goto loc_822E58E8;
loc_822E58E0:
	// li r10,1
	ctx.r10.s64 = 1;
	// slw r4,r10,r11
	ctx.r4.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
loc_822E58E8:
	// rlwinm r11,r31,4,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 4) & 0x3;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822e5928
	if (ctx.cr6.eq) goto loc_822E5928;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x822e5920
	if (ctx.cr6.eq) goto loc_822E5920;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x822e5928
	if (ctx.cr6.eq) goto loc_822E5928;
	// lis r10,-31846
	ctx.r10.s64 = -2087059456;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r9,r10,32428
	ctx.r9.s64 = ctx.r10.s64 + 32428;
	// lwz r3,32428(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32428);
	// stw r11,-760(r9)
	PPC_STORE_U32(ctx.r9.u32 + -760, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_822E5920:
	// li r5,4
	ctx.r5.s64 = 4;
	// b 0x822e592c
	goto loc_822E592C;
loc_822E5928:
	// li r5,1028
	ctx.r5.s64 = 1028;
loc_822E592C:
	// rlwinm r11,r31,0,8,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFF0000;
	// lis r10,130
	ctx.r10.s64 = 8519680;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x822e5968
	if (ctx.cr6.eq) goto loc_822E5968;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x822e5290
	ctx.lr = 0x822E5948;
	sub_822E5290(ctx, base);
	// rlwinm r11,r31,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x40000000;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822e5970
	if (ctx.cr6.eq) goto loc_822E5970;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823de090
	ctx.lr = 0x822E5964;
	sub_823DE090(ctx, base);
	// b 0x822e5970
	goto loc_822E5970;
loc_822E5968:
	// bl 0x822e4ca0
	ctx.lr = 0x822E596C;
	sub_822E4CA0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_822E5970:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x822e5b0c
	if (!ctx.cr6.eq) goto loc_822E5B0C;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r4,1044
	ctx.r4.s64 = 1044;
	// addi r3,r11,-2800
	ctx.r3.s64 = ctx.r11.s64 + -2800;
	// bl 0x8230dec8
	ctx.lr = 0x822E5988;
	sub_8230DEC8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_822E5994:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r29,16
	ctx.r29.s64 = 16;
	// beq cr6,0x822e59a4
	if (ctx.cr6.eq) goto loc_822E59A4;
	// rlwinm r29,r11,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_822E59A4:
	// rlwinm r11,r31,16,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 16) & 0xFF;
	// addi r11,r11,-128
	ctx.r11.s64 = ctx.r11.s64 + -128;
	// cmplwi cr6,r11,13
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 13, ctx.xer);
	// bgt cr6,0x822e5aa4
	if (ctx.cr6.gt) goto loc_822E5AA4;
	// lis r12,-32210
	ctx.r12.s64 = -2110914560;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,22988
	ctx.r12.s64 = ctx.r12.s64 + 22988;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_822E5A04;
	case 1:
		goto loc_822E5AA4;
	case 2:
		goto loc_822E5A3C;
	case 3:
		goto loc_822E5AA4;
	case 4:
		goto loc_822E5AA4;
	case 5:
		goto loc_822E5AA4;
	case 6:
		goto loc_822E5AA4;
	case 7:
		goto loc_822E5AA4;
	case 8:
		goto loc_822E5AA4;
	case 9:
		goto loc_822E5AA4;
	case 10:
		goto loc_822E5AA4;
	case 11:
		goto loc_822E5AA4;
	case 12:
		goto loc_822E5AA4;
	case 13:
		goto loc_822E5AA4;
	default:
		return;
	}
	// lwz r17,23044(r14)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r14.u32 + 23044);
	// lwz r17,23204(r14)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r14.u32 + 23204);
	// lwz r17,23100(r14)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r14.u32 + 23100);
	// lwz r17,23204(r14)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r14.u32 + 23204);
	// lwz r17,23204(r14)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r14.u32 + 23204);
	// lwz r17,23204(r14)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r14.u32 + 23204);
	// lwz r17,23204(r14)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r14.u32 + 23204);
	// lwz r17,23204(r14)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r14.u32 + 23204);
	// lwz r17,23204(r14)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r14.u32 + 23204);
	// lwz r17,23204(r14)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r14.u32 + 23204);
	// lwz r17,23204(r14)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r14.u32 + 23204);
	// lwz r17,23204(r14)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r14.u32 + 23204);
	// lwz r17,23204(r14)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r14.u32 + 23204);
	// lwz r17,23204(r14)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r14.u32 + 23204);
loc_822E5A04:
	// bl 0x8228bc50
	ctx.lr = 0x822E5A08;
	sub_8228BC50(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822e5a30
	if (!ctx.cr6.eq) goto loc_822E5A30;
	// bl 0x8228bc88
	ctx.lr = 0x822E5A18;
	sub_8228BC88(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822e5ab0
	if (ctx.cr6.eq) goto loc_822E5AB0;
	// bl 0x823ad840
	ctx.lr = 0x822E5A28;
	sub_823AD840(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822e5ab0
	if (ctx.cr6.eq) goto loc_822E5AB0;
loc_822E5A30:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_822E5A3C:
	// lwz r11,0(r13)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,16
	ctx.r10.s64 = 16;
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822e5a60
	if (ctx.cr6.eq) goto loc_822E5A60;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822e4d60
	ctx.lr = 0x822E5A58;
	sub_822E4D60(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x822e5ae0
	goto loc_822E5AE0;
loc_822E5A60:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// add r3,r29,r30
	ctx.r3.u64 = ctx.r29.u64 + ctx.r30.u64;
	// bl 0x822e5290
	ctx.lr = 0x822E5A74;
	sub_822E5290(ctx, base);
	// rlwinm r11,r31,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x40000000;
	// add r31,r3,r29
	ctx.r31.u64 = ctx.r3.u64 + ctx.r29.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822e5a94
	if (ctx.cr6.eq) goto loc_822E5A94;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823de090
	ctx.lr = 0x822E5A94;
	sub_823DE090(ctx, base);
loc_822E5A94:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x822e5ae8
	if (ctx.cr6.eq) goto loc_822E5AE8;
	// stw r30,-4(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4, ctx.r30.u32);
	// b 0x822e5ae0
	goto loc_822E5AE0;
loc_822E5AA4:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x822e5ab0
	if (!ctx.cr6.eq) goto loc_822E5AB0;
	// li r30,1
	ctx.r30.s64 = 1;
loc_822E5AB0:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822e5290
	ctx.lr = 0x822E5AC4;
	sub_822E5290(ctx, base);
	// rlwinm r11,r31,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x40000000;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822e5ae0
	if (ctx.cr6.eq) goto loc_822E5AE0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823de090
	ctx.lr = 0x822E5AE0;
	sub_823DE090(ctx, base);
loc_822E5AE0:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x822e5b0c
	if (!ctx.cr6.eq) goto loc_822E5B0C;
loc_822E5AE8:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,-2604
	ctx.r4.s64 = ctx.r11.s64 + -2604;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82280900
	ctx.lr = 0x822E5AFC;
	sub_82280900(ctx, base);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// li r4,1133
	ctx.r4.s64 = 1133;
	// addi r3,r10,-2800
	ctx.r3.s64 = ctx.r10.s64 + -2800;
	// bl 0x8230dec8
	ctx.lr = 0x822E5B0C;
	sub_8230DEC8(ctx, base);
loc_822E5B0C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_822E58A8) {
	__imp__sub_822E58A8(ctx, base);
}

