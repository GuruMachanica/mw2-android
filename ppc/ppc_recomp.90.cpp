#include "ppc_recomp_shared.h"

PPC_FUNC_IMPL(__imp__sub_82362054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82362054) {
	__imp__sub_82362054(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82362058) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82362060;
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
	// lis r11,-31937
	ctx.r11.s64 = -2093023232;
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
	// cmpwi cr6,r8,8
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 8, ctx.xer);
	// beq cr6,0x823620b8
	if (ctx.cr6.eq) goto loc_823620B8;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r3,9
	ctx.r3.s64 = 9;
	// addi r4,r11,1808
	ctx.r4.s64 = ctx.r11.s64 + 1808;
	// bl 0x82280900
	ctx.lr = 0x823620A0;
	sub_82280900(ctx, base);
	// bl 0x82303ee0
	ctx.lr = 0x823620A4;
	sub_82303EE0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
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
loc_823620B8:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82361ef0
	ctx.lr = 0x823620C8;
	sub_82361EF0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8236225c
	if (ctx.cr6.eq) goto loc_8236225C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r9,r31,68
	ctx.r9.s64 = ctx.r31.s64 + 68;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r30,r10,-28736
	ctx.r30.s64 = ctx.r10.s64 + -28736;
	// lwzx r8,r11,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmpwi cr6,r8,4
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 4, ctx.xer);
	// ble cr6,0x82362104
	if (!ctx.cr6.gt) goto loc_82362104;
	// addi r10,r31,100
	ctx.r10.s64 = ctx.r31.s64 + 100;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r3,16(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// b 0x82362108
	goto loc_82362108;
loc_82362104:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82362108:
	// bl 0x82361e18
	ctx.lr = 0x8236210C;
	sub_82361E18(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,5
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 5, ctx.xer);
	// beq cr6,0x8236225c
	if (ctx.cr6.eq) goto loc_8236225C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r31,68
	ctx.r10.s64 = ctx.r31.s64 + 68;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,5
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 5, ctx.xer);
	// ble cr6,0x82362140
	if (!ctx.cr6.gt) goto loc_82362140;
	// addi r10,r31,100
	ctx.r10.s64 = ctx.r31.s64 + 100;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r3,20(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// b 0x82362144
	goto loc_82362144;
loc_82362140:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82362144:
	// bl 0x823dec00
	ctx.lr = 0x82362148;
	sub_823DEC00(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r31,68
	ctx.r10.s64 = ctx.r31.s64 + 68;
	// frsp f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = double(float(ctx.f1.f64));
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 6, ctx.xer);
	// ble cr6,0x82362174
	if (!ctx.cr6.gt) goto loc_82362174;
	// addi r10,r31,100
	ctx.r10.s64 = ctx.r31.s64 + 100;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r3,24(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// b 0x82362178
	goto loc_82362178;
loc_82362174:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82362178:
	// bl 0x823dec00
	ctx.lr = 0x8236217C;
	sub_823DEC00(ctx, base);
	// frsp f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f1.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f30,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f30.f64 = double(temp.f32);
	// fcmpu cr6,f31,f30
	ctx.cr6.compare(ctx.f31.f64, ctx.f30.f64);
	// blt cr6,0x8236223c
	if (ctx.cr6.lt) goto loc_8236223C;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f0,2772(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2772);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bgt cr6,0x8236223c
	if (ctx.cr6.gt) goto loc_8236223C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r31,68
	ctx.r10.s64 = ctx.r31.s64 + 68;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 7, ctx.xer);
	// ble cr6,0x823621c8
	if (!ctx.cr6.gt) goto loc_823621C8;
	// addi r10,r31,100
	ctx.r10.s64 = ctx.r31.s64 + 100;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r3,28(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	// b 0x823621cc
	goto loc_823621CC;
loc_823621C8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_823621CC:
	// bl 0x823dec00
	ctx.lr = 0x823621D0;
	sub_823DEC00(ctx, base);
	// frsp f3,f1
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = double(float(ctx.f1.f64));
	// fcmpu cr6,f3,f30
	ctx.cr6.compare(ctx.f3.f64, ctx.f30.f64);
	// bgt cr6,0x8236220c
	if (ctx.cr6.gt) goto loc_8236220C;
	// stfd f3,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f3.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// fmr f1,f3
	ctx.f1.f64 = ctx.f3.f64;
	// li r3,9
	ctx.r3.s64 = 9;
	// addi r4,r11,1776
	ctx.r4.s64 = ctx.r11.s64 + 1776;
	// bl 0x82280900
	ctx.lr = 0x823621F8;
	sub_82280900(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
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
loc_8236220C:
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x82303c70
	ctx.lr = 0x82362228;
	sub_82303C70(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
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
loc_8236223C:
	// stfd f31,32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f31.u64);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r6,20000
	ctx.r6.s64 = 20000;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// addi r4,r11,1732
	ctx.r4.s64 = ctx.r11.s64 + 1732;
	// li r3,9
	ctx.r3.s64 = 9;
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x82280900
	ctx.lr = 0x8236225C;
	sub_82280900(ctx, base);
loc_8236225C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
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

PPC_WEAK_FUNC(sub_82362058) {
	__imp__sub_82362058(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82362270) {
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
	// lis r11,-31937
	ctx.r11.s64 = -2093023232;
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
	// cmpwi cr6,r8,5
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 5, ctx.xer);
	// beq cr6,0x823622c4
	if (ctx.cr6.eq) goto loc_823622C4;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r3,9
	ctx.r3.s64 = 9;
	// addi r4,r11,1976
	ctx.r4.s64 = ctx.r11.s64 + 1976;
	// bl 0x82280900
	ctx.lr = 0x823622B0;
	sub_82280900(ctx, base);
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
loc_823622C4:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82361ef0
	ctx.lr = 0x823622D4;
	sub_82361EF0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82362378
	if (ctx.cr6.eq) goto loc_82362378;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r31,68
	ctx.r10.s64 = ctx.r31.s64 + 68;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4, ctx.xer);
	// ble cr6,0x82362308
	if (!ctx.cr6.gt) goto loc_82362308;
	// addi r10,r31,100
	ctx.r10.s64 = ctx.r31.s64 + 100;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r3,16(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// b 0x82362310
	goto loc_82362310;
loc_82362308:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-28736
	ctx.r3.s64 = ctx.r11.s64 + -28736;
loc_82362310:
	// bl 0x823dec00
	ctx.lr = 0x82362314;
	sub_823DEC00(ctx, base);
	// frsp f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x8236235c
	if (ctx.cr6.lt) goto loc_8236235C;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f0,2772(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2772);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgt cr6,0x8236235c
	if (ctx.cr6.gt) goto loc_8236235C;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x82303d08
	ctx.lr = 0x82362348;
	sub_82303D08(ctx, base);
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
loc_8236235C:
	// stfd f1,32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r6,20000
	ctx.r6.s64 = 20000;
	// addi r4,r11,1932
	ctx.r4.s64 = ctx.r11.s64 + 1932;
	// li r3,9
	ctx.r3.s64 = 9;
	// bl 0x82280900
	ctx.lr = 0x82362378;
	sub_82280900(ctx, base);
loc_82362378:
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

PPC_WEAK_FUNC(sub_82362270) {
	__imp__sub_82362270(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236238C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8236238C) {
	__imp__sub_8236238C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82362390) {
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
	// lis r11,-31937
	ctx.r11.s64 = -2093023232;
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
	// cmpwi cr6,r8,5
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 5, ctx.xer);
	// beq cr6,0x823623e4
	if (ctx.cr6.eq) goto loc_823623E4;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r3,9
	ctx.r3.s64 = 9;
	// addi r4,r11,2064
	ctx.r4.s64 = ctx.r11.s64 + 2064;
	// bl 0x82280900
	ctx.lr = 0x823623D0;
	sub_82280900(ctx, base);
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
loc_823623E4:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82361ef0
	ctx.lr = 0x823623F4;
	sub_82361EF0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82362450
	if (ctx.cr6.eq) goto loc_82362450;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r31,68
	ctx.r10.s64 = ctx.r31.s64 + 68;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4, ctx.xer);
	// ble cr6,0x82362428
	if (!ctx.cr6.gt) goto loc_82362428;
	// addi r10,r31,100
	ctx.r10.s64 = ctx.r31.s64 + 100;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r3,16(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// b 0x82362430
	goto loc_82362430;
loc_82362428:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-28736
	ctx.r3.s64 = ctx.r11.s64 + -28736;
loc_82362430:
	// bl 0x82361e18
	ctx.lr = 0x82362434;
	sub_82361E18(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,5
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 5, ctx.xer);
	// beq cr6,0x82362450
	if (ctx.cr6.eq) goto loc_82362450;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x82303cc8
	ctx.lr = 0x82362450;
	sub_82303CC8(ctx, base);
loc_82362450:
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

PPC_WEAK_FUNC(sub_82362390) {
	__imp__sub_82362390(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82362464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82362464) {
	__imp__sub_82362464(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82362468) {
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
	// lis r11,-31937
	ctx.r11.s64 = -2093023232;
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
	// cmpwi cr6,r8,5
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 5, ctx.xer);
	// beq cr6,0x823624bc
	if (ctx.cr6.eq) goto loc_823624BC;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r3,9
	ctx.r3.s64 = 9;
	// addi r4,r11,2160
	ctx.r4.s64 = ctx.r11.s64 + 2160;
	// bl 0x82280900
	ctx.lr = 0x823624A8;
	sub_82280900(ctx, base);
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
loc_823624BC:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82361ef0
	ctx.lr = 0x823624CC;
	sub_82361EF0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82362520
	if (ctx.cr6.eq) goto loc_82362520;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r31,68
	ctx.r10.s64 = ctx.r31.s64 + 68;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4, ctx.xer);
	// ble cr6,0x82362500
	if (!ctx.cr6.gt) goto loc_82362500;
	// addi r10,r31,100
	ctx.r10.s64 = ctx.r31.s64 + 100;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r3,16(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// b 0x82362508
	goto loc_82362508;
loc_82362500:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-28736
	ctx.r3.s64 = ctx.r11.s64 + -28736;
loc_82362508:
	// bl 0x823dec00
	ctx.lr = 0x8236250C;
	sub_823DEC00(ctx, base);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// frsp f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64));
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x82303d48
	ctx.lr = 0x82362520;
	sub_82303D48(ctx, base);
loc_82362520:
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

PPC_WEAK_FUNC(sub_82362468) {
	__imp__sub_82362468(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82362534) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82362534) {
	__imp__sub_82362534(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82362538) {
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
	// lis r11,-31937
	ctx.r11.s64 = -2093023232;
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
	// cmpwi cr6,r8,5
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 5, ctx.xer);
	// beq cr6,0x8236258c
	if (ctx.cr6.eq) goto loc_8236258C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r3,9
	ctx.r3.s64 = 9;
	// addi r4,r11,2248
	ctx.r4.s64 = ctx.r11.s64 + 2248;
	// bl 0x82280900
	ctx.lr = 0x82362578;
	sub_82280900(ctx, base);
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
loc_8236258C:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82361ef0
	ctx.lr = 0x8236259C;
	sub_82361EF0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8236262c
	if (ctx.cr6.eq) goto loc_8236262C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r31,68
	ctx.r10.s64 = ctx.r31.s64 + 68;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4, ctx.xer);
	// ble cr6,0x823625d0
	if (!ctx.cr6.gt) goto loc_823625D0;
	// addi r10,r31,100
	ctx.r10.s64 = ctx.r31.s64 + 100;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r3,16(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// b 0x823625d8
	goto loc_823625D8;
loc_823625D0:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-28736
	ctx.r3.s64 = ctx.r11.s64 + -28736;
loc_823625D8:
	// bl 0x823dec00
	ctx.lr = 0x823625DC;
	sub_823DEC00(ctx, base);
	// frsp f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgt cr6,0x8236261c
	if (ctx.cr6.gt) goto loc_8236261C;
	// stfd f1,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r3,9
	ctx.r3.s64 = 9;
	// addi r4,r11,1776
	ctx.r4.s64 = ctx.r11.s64 + 1776;
	// bl 0x82280900
	ctx.lr = 0x82362608;
	sub_82280900(ctx, base);
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
loc_8236261C:
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x82303d88
	ctx.lr = 0x8236262C;
	sub_82303D88(ctx, base);
loc_8236262C:
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

PPC_WEAK_FUNC(sub_82362538) {
	__imp__sub_82362538(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82362640) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31809
	ctx.r11.s64 = -2084634624;
	// addi r10,r11,-12528
	ctx.r10.s64 = ctx.r11.s64 + -12528;
	// addi r11,r10,20532
	ctx.r11.s64 = ctx.r10.s64 + 20532;
loc_8236264C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82362670
	if (!ctx.cr6.eq) goto loc_82362670;
	// addi r11,r11,60
	ctx.r11.s64 = ctx.r11.s64 + 60;
	// addi r9,r10,20712
	ctx.r9.s64 = ctx.r10.s64 + 20712;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8236264c
	if (ctx.cr6.lt) goto loc_8236264C;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82362670:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82362640) {
	__imp__sub_82362640(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82362678) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31809
	ctx.r11.s64 = -2084634624;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r11,-12528
	ctx.r11.s64 = ctx.r11.s64 + -12528;
	// lfs f13,6912(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6912);
	ctx.f13.f64 = double(temp.f32);
	// lbz r9,20532(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 20532);
	// fmr f1,f13
	ctx.f1.f64 = ctx.f13.f64;
	// lwz r8,20672(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20672);
	// lwz r10,20664(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20664);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82362704
	if (ctx.cr6.eq) goto loc_82362704;
	// lfs f0,20484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20484);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r11,20476
	ctx.r9.s64 = ctx.r11.s64 + 20476;
	// lfs f12,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f0,f12
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// lfs f0,20476(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20476);
	ctx.f0.f64 = double(temp.f32);
	// lfs f10,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// fsubs f9,f0,f10
	ctx.f9.f64 = double(float(ctx.f0.f64 - ctx.f10.f64));
	// lfs f0,20480(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20480);
	ctx.f0.f64 = double(temp.f32);
	// lfs f8,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f0,f8
	ctx.f7.f64 = double(float(ctx.f0.f64 - ctx.f8.f64));
	// fmuls f6,f11,f11
	ctx.f6.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// fmadds f5,f9,f9,f6
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f6.f64));
	// fmadds f0,f7,f7,f5
	ctx.f0.f64 = double(float(ctx.f7.f64 * ctx.f7.f64 + ctx.f5.f64));
	// bne cr6,0x823626fc
	if (!ctx.cr6.eq) goto loc_823626FC;
	// mullw r9,r8,r8
	ctx.r9.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r8.s32);
	// extsw r7,r9
	ctx.r7.s64 = ctx.r9.s32;
	// std r7,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r7.u64);
	// lfd f12,-16(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fcmpu cr6,f0,f10
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// bgt cr6,0x82362704
	if (ctx.cr6.gt) goto loc_82362704;
loc_823626FC:
	// fsubs f12,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fsel f1,f12,f13,f0
	ctx.f1.f64 = ctx.f12.f64 >= 0.0 ? ctx.f13.f64 : ctx.f0.f64;
loc_82362704:
	// lbz r9,20592(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 20592);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82362774
	if (ctx.cr6.eq) goto loc_82362774;
	// lfs f0,20544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20544);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r11,20536
	ctx.r9.s64 = ctx.r11.s64 + 20536;
	// lfs f13,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f0,20536(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20536);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// fsubs f10,f0,f11
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// lfs f0,20540(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20540);
	ctx.f0.f64 = double(temp.f32);
	// lfs f9,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f0,f9
	ctx.f8.f64 = double(float(ctx.f0.f64 - ctx.f9.f64));
	// fmuls f7,f12,f12
	ctx.f7.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f6,f10,f10,f7
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f10.f64 + ctx.f7.f64));
	// fmadds f0,f8,f8,f6
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 + ctx.f6.f64));
	// bne cr6,0x8236276c
	if (!ctx.cr6.eq) goto loc_8236276C;
	// mullw r9,r8,r8
	ctx.r9.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r8.s32);
	// extsw r7,r9
	ctx.r7.s64 = ctx.r9.s32;
	// std r7,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r7.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// bgt cr6,0x82362774
	if (ctx.cr6.gt) goto loc_82362774;
loc_8236276C:
	// fsubs f13,f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f1.f64));
	// fsel f1,f13,f1,f0
	ctx.f1.f64 = ctx.f13.f64 >= 0.0 ? ctx.f1.f64 : ctx.f0.f64;
loc_82362774:
	// lbz r9,20652(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 20652);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lfs f0,20604(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20604);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r11,20596
	ctx.r9.s64 = ctx.r11.s64 + 20596;
	// lfs f13,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f0,20596(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20596);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// fsubs f10,f0,f11
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// lfs f0,20600(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20600);
	ctx.f0.f64 = double(temp.f32);
	// lfs f9,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f0,f9
	ctx.f8.f64 = double(float(ctx.f0.f64 - ctx.f9.f64));
	// fmuls f7,f12,f12
	ctx.f7.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f6,f10,f10,f7
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f10.f64 + ctx.f7.f64));
	// fmadds f0,f8,f8,f6
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 + ctx.f6.f64));
	// bne cr6,0x823627dc
	if (!ctx.cr6.eq) goto loc_823627DC;
	// mullw r11,r8,r8
	ctx.r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r8.s32);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
loc_823627DC:
	// fsubs f13,f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f1.f64));
	// fsel f1,f13,f1,f0
	ctx.f1.f64 = ctx.f13.f64 >= 0.0 ? ctx.f1.f64 : ctx.f0.f64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82362678) {
	__imp__sub_82362678(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823627E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31809
	ctx.r11.s64 = -2084634624;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r11,r11,-12528
	ctx.r11.s64 = ctx.r11.s64 + -12528;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lfs f13,6912(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 6912);
	ctx.f13.f64 = double(temp.f32);
	// lbz r8,20532(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 20532);
	// lwz r7,20672(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20672);
	// lwz r9,20664(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20664);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82362880
	if (ctx.cr6.eq) goto loc_82362880;
	// lfs f0,20484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20484);
	ctx.f0.f64 = double(temp.f32);
	// addi r8,r11,20476
	ctx.r8.s64 = ctx.r11.s64 + 20476;
	// lfs f12,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f0,f12
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// lfs f0,20476(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20476);
	ctx.f0.f64 = double(temp.f32);
	// lfs f10,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// fsubs f9,f0,f10
	ctx.f9.f64 = double(float(ctx.f0.f64 - ctx.f10.f64));
	// lfs f0,20480(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20480);
	ctx.f0.f64 = double(temp.f32);
	// lfs f8,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f0,f8
	ctx.f7.f64 = double(float(ctx.f0.f64 - ctx.f8.f64));
	// fmuls f6,f11,f11
	ctx.f6.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// fmadds f5,f9,f9,f6
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f6.f64));
	// fmadds f0,f7,f7,f5
	ctx.f0.f64 = double(float(ctx.f7.f64 * ctx.f7.f64 + ctx.f5.f64));
	// bne cr6,0x82362870
	if (!ctx.cr6.eq) goto loc_82362870;
	// mullw r8,r7,r7
	ctx.r8.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r7.s32);
	// extsw r6,r8
	ctx.r6.s64 = ctx.r8.s32;
	// std r6,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r6.u64);
	// lfd f12,-16(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fcmpu cr6,f0,f10
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// bgt cr6,0x82362880
	if (ctx.cr6.gt) goto loc_82362880;
loc_82362870:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82362880
	if (!ctx.cr6.lt) goto loc_82362880;
	// li r3,0
	ctx.r3.s64 = 0;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
loc_82362880:
	// lbz r8,20592(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 20592);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x823628f8
	if (ctx.cr6.eq) goto loc_823628F8;
	// lfs f0,20544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20544);
	ctx.f0.f64 = double(temp.f32);
	// addi r8,r11,20536
	ctx.r8.s64 = ctx.r11.s64 + 20536;
	// lfs f12,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f0,f12
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// lfs f0,20536(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20536);
	ctx.f0.f64 = double(temp.f32);
	// lfs f10,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// fsubs f9,f0,f10
	ctx.f9.f64 = double(float(ctx.f0.f64 - ctx.f10.f64));
	// lfs f0,20540(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20540);
	ctx.f0.f64 = double(temp.f32);
	// lfs f8,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f0,f8
	ctx.f7.f64 = double(float(ctx.f0.f64 - ctx.f8.f64));
	// fmuls f6,f11,f11
	ctx.f6.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// fmadds f5,f9,f9,f6
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f6.f64));
	// fmadds f0,f7,f7,f5
	ctx.f0.f64 = double(float(ctx.f7.f64 * ctx.f7.f64 + ctx.f5.f64));
	// bne cr6,0x823628e8
	if (!ctx.cr6.eq) goto loc_823628E8;
	// mullw r8,r7,r7
	ctx.r8.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r7.s32);
	// extsw r6,r8
	ctx.r6.s64 = ctx.r8.s32;
	// std r6,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r6.u64);
	// lfd f12,-16(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fcmpu cr6,f0,f10
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// bgt cr6,0x823628f8
	if (ctx.cr6.gt) goto loc_823628F8;
loc_823628E8:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x823628f8
	if (!ctx.cr6.lt) goto loc_823628F8;
	// li r3,1
	ctx.r3.s64 = 1;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
loc_823628F8:
	// lbz r8,20652(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 20652);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lfs f0,20604(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20604);
	ctx.f0.f64 = double(temp.f32);
	// addi r8,r11,20596
	ctx.r8.s64 = ctx.r11.s64 + 20596;
	// lfs f12,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f0,f12
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// lfs f0,20596(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20596);
	ctx.f0.f64 = double(temp.f32);
	// lfs f10,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// fsubs f9,f0,f10
	ctx.f9.f64 = double(float(ctx.f0.f64 - ctx.f10.f64));
	// lfs f0,20600(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20600);
	ctx.f0.f64 = double(temp.f32);
	// lfs f8,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f0,f8
	ctx.f7.f64 = double(float(ctx.f0.f64 - ctx.f8.f64));
	// fmuls f6,f11,f11
	ctx.f6.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// fmadds f5,f9,f9,f6
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f6.f64));
	// fmadds f0,f7,f7,f5
	ctx.f0.f64 = double(float(ctx.f7.f64 * ctx.f7.f64 + ctx.f5.f64));
	// bne cr6,0x82362960
	if (!ctx.cr6.eq) goto loc_82362960;
	// mullw r11,r7,r7
	ctx.r11.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r7.s32);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// lfd f12,-16(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fcmpu cr6,f0,f10
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
loc_82362960:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823627E8) {
	__imp__sub_823627E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82362970) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x82362978;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31809
	ctx.r11.s64 = -2084634624;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// addi r31,r11,-12528
	ctx.r31.s64 = ctx.r11.s64 + -12528;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// lbz r11,-12528(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + -12528);
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82362a28
	if (ctx.cr6.eq) goto loc_82362A28;
	// mulli r30,r3,60
	ctx.r30.s64 = ctx.r3.s64 * 60;
	// addi r11,r31,20488
	ctx.r11.s64 = ctx.r31.s64 + 20488;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// add r4,r30,r11
	ctx.r4.u64 = ctx.r30.u64 + ctx.r11.u64;
	// bl 0x822d7a78
	ctx.lr = 0x823629B4;
	sub_822D7A78(ctx, base);
	// addi r11,r31,20476
	ctx.r11.s64 = ctx.r31.s64 + 20476;
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r31,20524
	ctx.r10.s64 = ctx.r31.s64 + 20524;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// addi r9,r31,20528
	ctx.r9.s64 = ctx.r31.s64 + 20528;
	// addi r8,r31,20532
	ctx.r8.s64 = ctx.r31.s64 + 20532;
	// li r7,1
	ctx.r7.s64 = 1;
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f13,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f12,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lfs f11,0(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,4(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f9,f9
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f9.f64));
	// fmadds f7,f11,f11,f8
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f8.f64));
	// stwx r26,r30,r9
	PPC_STORE_U32(ctx.r30.u32 + ctx.r9.u32, ctx.r26.u32);
	// stbx r7,r30,r8
	PPC_STORE_U8(ctx.r30.u32 + ctx.r8.u32, ctx.r7.u8);
	// fmadds f6,f10,f10,f7
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f10.f64 + ctx.f7.f64));
	// fsqrts f5,f6
	ctx.f5.f64 = double(float(sqrt(ctx.f6.f64)));
	// stfsx f5,r30,r10
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r30.u32 + ctx.r10.u32, temp.u32);
	// lwz r11,20664(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20664);
	// lbz r6,56(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 56);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82362a28
	if (ctx.cr6.eq) goto loc_82362A28;
	// addi r4,r11,12
	ctx.r4.s64 = ctx.r11.s64 + 12;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822d7a78
	ctx.lr = 0x82362A28;
	sub_822D7A78(ctx, base);
loc_82362A28:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82362970) {
	__imp__sub_82362970(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82362A30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31809
	ctx.r11.s64 = -2084634624;
	// li r5,180
	ctx.r5.s64 = 180;
	// addi r11,r11,-12528
	ctx.r11.s64 = ctx.r11.s64 + -12528;
	// addi r4,r11,20476
	ctx.r4.s64 = ctx.r11.s64 + 20476;
	// b 0x823de1f0
	sub_823DE1F0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82362A30) {
	__imp__sub_82362A30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82362A44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82362A44) {
	__imp__sub_82362A44(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82362A48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31809
	ctx.r11.s64 = -2084634624;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r11,r11,-12528
	ctx.r11.s64 = ctx.r11.s64 + -12528;
	// li r5,180
	ctx.r5.s64 = 180;
	// addi r3,r11,20476
	ctx.r3.s64 = ctx.r11.s64 + 20476;
	// b 0x823de1f0
	sub_823DE1F0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82362A48) {
	__imp__sub_82362A48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82362A60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31809
	ctx.r11.s64 = -2084634624;
	// mulli r10,r3,176
	ctx.r10.s64 = ctx.r3.s64 * 176;
	// addi r11,r11,-12528
	ctx.r11.s64 = ctx.r11.s64 + -12528;
	// li r9,-1
	ctx.r9.s64 = -1;
	// addi r8,r11,26108
	ctx.r8.s64 = ctx.r11.s64 + 26108;
	// li r3,-1
	ctx.r3.s64 = -1;
	// stwx r9,r10,r8
	PPC_STORE_U32(ctx.r10.u32 + ctx.r8.u32, ctx.r9.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82362A60) {
	__imp__sub_82362A60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82362A80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31809
	ctx.r11.s64 = -2084634624;
	// mulli r10,r3,176
	ctx.r10.s64 = ctx.r3.s64 * 176;
	// addi r11,r11,-12528
	ctx.r11.s64 = ctx.r11.s64 + -12528;
	// addi r9,r11,26076
	ctx.r9.s64 = ctx.r11.s64 + 26076;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r9,120(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 120);
	// lwz r8,56(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 56);
	// clrlwi r7,r8,31
	ctx.r7.u64 = ctx.r8.u32 & 0x1;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x82362abc
	if (ctx.cr6.eq) goto loc_82362ABC;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,28(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28, ctx.r9.u32);
	// stw r9,32(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32, ctx.r9.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x82362ad4
	goto loc_82362AD4;
loc_82362ABC:
	// stw r4,28(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28, ctx.r4.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,32(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32, ctx.r9.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
loc_82362AD4:
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bge cr6,0x82362ae4
	if (!ctx.cr6.lt) goto loc_82362AE4;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
loc_82362AE4:
	// lwz r3,32(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82362A80) {
	__imp__sub_82362A80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82362AEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82362AEC) {
	__imp__sub_82362AEC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82362AF0) {
	PPC_FUNC_PROLOGUE();
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// cmplwi cr6,r5,1
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1, ctx.xer);
	// blt cr6,0x82362b20
	if (ctx.cr6.lt) goto loc_82362B20;
	// beq cr6,0x82362b18
	if (ctx.cr6.eq) goto loc_82362B18;
	// cmplwi cr6,r5,3
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 3, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// b 0x820f8a78
	sub_820F8A78(ctx, base);
	return;
loc_82362B18:
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// b 0x820f89f0
	sub_820F89F0(ctx, base);
	return;
loc_82362B20:
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// b 0x820f89f8
	sub_820F89F8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82362AF0) {
	__imp__sub_82362AF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82362B30) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82362B30) {
	__imp__sub_82362B30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82362B34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82362B34) {
	__imp__sub_82362B34(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82362B38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82362B40;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// beq cr6,0x82362d00
	if (ctx.cr6.eq) goto loc_82362D00;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82362d00
	if (ctx.cr6.eq) goto loc_82362D00;
	// lis r11,-31809
	ctx.r11.s64 = -2084634624;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r30,r11,-12528
	ctx.r30.s64 = ctx.r11.s64 + -12528;
	// addi r11,r30,26284
	ctx.r11.s64 = ctx.r30.s64 + 26284;
loc_82362B7C:
	// lwz r8,-176(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + -176);
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x82362bdc
	if (ctx.cr6.eq) goto loc_82362BDC;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x82362bc8
	if (ctx.cr6.eq) goto loc_82362BC8;
	// lwz r8,176(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x82362bd0
	if (ctx.cr6.eq) goto loc_82362BD0;
	// lwz r8,352(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 352);
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x82362bd8
	if (ctx.cr6.eq) goto loc_82362BD8;
	// addis r31,r30,1
	ctx.r31.s64 = ctx.r30.s64 + 65536;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// addi r8,r31,-30100
	ctx.r8.s64 = ctx.r31.s64 + -30100;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82362b7c
	if (ctx.cr6.lt) goto loc_82362B7C;
	// b 0x82362bdc
	goto loc_82362BDC;
loc_82362BC8:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// b 0x82362bdc
	goto loc_82362BDC;
loc_82362BD0:
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// b 0x82362bdc
	goto loc_82362BDC;
loc_82362BD8:
	// addi r10,r10,3
	ctx.r10.s64 = ctx.r10.s64 + 3;
loc_82362BDC:
	// cmpwi cr6,r10,52
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 52, ctx.xer);
	// bne cr6,0x82362bf8
	if (!ctx.cr6.eq) goto loc_82362BF8;
	// cmplwi cr6,r29,1
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 1, ctx.xer);
	// bge cr6,0x82362d0c
	if (!ctx.cr6.lt) goto loc_82362D0C;
loc_82362BEC:
	// bl 0x820f89f8
	ctx.lr = 0x82362BF0;
	sub_820F89F8(ctx, base);
loc_82362BF0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_82362BF8:
	// mulli r10,r10,176
	ctx.r10.s64 = ctx.r10.s64 * 176;
	// addi r11,r30,26076
	ctx.r11.s64 = ctx.r30.s64 + 26076;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x82362c5c
	if (ctx.cr6.lt) goto loc_82362C5C;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x82362c20
	if (!ctx.cr6.eq) goto loc_82362C20;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82362c5c
	if (!ctx.cr6.eq) goto loc_82362C5C;
loc_82362C20:
	// cmplwi cr6,r29,1
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 1, ctx.xer);
	// blt cr6,0x82362bec
	if (ctx.cr6.lt) goto loc_82362BEC;
	// beq cr6,0x82362c48
	if (ctx.cr6.eq) goto loc_82362C48;
	// cmplwi cr6,r29,3
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 3, ctx.xer);
	// bge cr6,0x82362bf0
	if (!ctx.cr6.lt) goto loc_82362BF0;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x820f8a78
	ctx.lr = 0x82362C40;
	sub_820F8A78(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_82362C48:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x820f89f0
	ctx.lr = 0x82362C54;
	sub_820F89F0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_82362C5C:
	// lwz r30,108(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x82362cb4
	if (!ctx.cr6.gt) goto loc_82362CB4;
	// addi r31,r11,68
	ctx.r31.s64 = ctx.r11.s64 + 68;
	// addi r9,r11,52
	ctx.r9.s64 = ctx.r11.s64 + 52;
loc_82362C74:
	// lwz r8,-16(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + -16);
	// cmpw cr6,r8,r29
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r29.s32, ctx.xer);
	// bne cr6,0x82362c9c
	if (!ctx.cr6.eq) goto loc_82362C9C;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r8,r3
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82362c9c
	if (!ctx.cr6.eq) goto loc_82362C9C;
	// lhz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// clrlwi r7,r4,16
	ctx.r7.u64 = ctx.r4.u32 & 0xFFFF;
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x82362bf0
	if (ctx.cr6.eq) goto loc_82362BF0;
loc_82362C9C:
	// lwz r8,108(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82362c74
	if (ctx.cr6.lt) goto loc_82362C74;
loc_82362CB4:
	// addi r9,r10,9
	ctx.r9.s64 = ctx.r10.s64 + 9;
	// addi r8,r10,13
	ctx.r8.s64 = ctx.r10.s64 + 13;
	// addi r7,r10,34
	ctx.r7.s64 = ctx.r10.s64 + 34;
	// addi r31,r10,19
	ctx.r31.s64 = ctx.r10.s64 + 19;
	// addi r10,r10,23
	ctx.r10.s64 = ctx.r10.s64 + 23;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r7,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r30,108(r11)
	PPC_STORE_U32(ctx.r11.u32 + 108, ctx.r30.u32);
	// stwx r29,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r29.u32);
	// stwx r3,r8,r11
	PPC_STORE_U32(ctx.r8.u32 + ctx.r11.u32, ctx.r3.u32);
	// sthx r4,r7,r11
	PPC_STORE_U16(ctx.r7.u32 + ctx.r11.u32, ctx.r4.u16);
	// stwx r5,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r5.u32);
	// stwx r6,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r6.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_82362D00:
	// cmplwi cr6,r29,1
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 1, ctx.xer);
	// blt cr6,0x82362bec
	if (ctx.cr6.lt) goto loc_82362BEC;
	// cmplwi cr6,r29,1
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 1, ctx.xer);
loc_82362D0C:
	// beq cr6,0x82362d2c
	if (ctx.cr6.eq) goto loc_82362D2C;
	// cmplwi cr6,r29,3
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 3, ctx.xer);
	// bge cr6,0x82362bf0
	if (!ctx.cr6.lt) goto loc_82362BF0;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x820f8a78
	ctx.lr = 0x82362D24;
	sub_820F8A78(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_82362D2C:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x820f89f0
	ctx.lr = 0x82362D38;
	sub_820F89F0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82362B38) {
	__imp__sub_82362B38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82362D40) {
	PPC_FUNC_PROLOGUE();
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// b 0x82362b38
	sub_82362B38(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82362D40) {
	__imp__sub_82362D40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82362D4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82362D4C) {
	__imp__sub_82362D4C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82362D50) {
	PPC_FUNC_PROLOGUE();
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// b 0x82362b38
	sub_82362B38(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82362D50) {
	__imp__sub_82362D50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82362D5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82362D5C) {
	__imp__sub_82362D5C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82362D60) {
	PPC_FUNC_PROLOGUE();
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// b 0x82362b38
	sub_82362B38(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82362D60) {
	__imp__sub_82362D60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82362D6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82362D6C) {
	__imp__sub_82362D6C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82362D70) {
	PPC_FUNC_PROLOGUE();
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// stw r9,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
	// beq cr6,0x82362e1c
	if (ctx.cr6.eq) goto loc_82362E1C;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82362e1c
	if (ctx.cr6.eq) goto loc_82362E1C;
	// lis r11,-31809
	ctx.r11.s64 = -2084634624;
	// addi r8,r11,-12528
	ctx.r8.s64 = ctx.r11.s64 + -12528;
	// addi r11,r8,26284
	ctx.r11.s64 = ctx.r8.s64 + 26284;
loc_82362D94:
	// lwz r10,-176(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -176);
	// cmpw cr6,r10,r3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r3.s32, ctx.xer);
	// beq cr6,0x82362df4
	if (ctx.cr6.eq) goto loc_82362DF4;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r10,r3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r3.s32, ctx.xer);
	// beq cr6,0x82362de0
	if (ctx.cr6.eq) goto loc_82362DE0;
	// lwz r10,176(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	// cmpw cr6,r10,r3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r3.s32, ctx.xer);
	// beq cr6,0x82362de8
	if (ctx.cr6.eq) goto loc_82362DE8;
	// lwz r10,352(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 352);
	// cmpw cr6,r10,r3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r3.s32, ctx.xer);
	// beq cr6,0x82362df0
	if (ctx.cr6.eq) goto loc_82362DF0;
	// addis r10,r8,1
	ctx.r10.s64 = ctx.r8.s64 + 65536;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// addi r10,r10,-30100
	ctx.r10.s64 = ctx.r10.s64 + -30100;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82362d94
	if (ctx.cr6.lt) goto loc_82362D94;
	// b 0x82362df4
	goto loc_82362DF4;
loc_82362DE0:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// b 0x82362df4
	goto loc_82362DF4;
loc_82362DE8:
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// b 0x82362df4
	goto loc_82362DF4;
loc_82362DF0:
	// addi r9,r9,3
	ctx.r9.s64 = ctx.r9.s64 + 3;
loc_82362DF4:
	// cmpwi cr6,r9,52
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 52, ctx.xer);
	// bne cr6,0x82362e04
	if (!ctx.cr6.eq) goto loc_82362E04;
loc_82362DFC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82362E04:
	// mulli r11,r9,176
	ctx.r11.s64 = ctx.r9.s64 * 176;
	// addi r10,r8,26104
	ctx.r10.s64 = ctx.r8.s64 + 26104;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82362dfc
	if (ctx.cr6.lt) goto loc_82362DFC;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
loc_82362E1C:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82362D70) {
	__imp__sub_82362D70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82362E24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82362E24) {
	__imp__sub_82362E24(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82362E28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf64
	ctx.lr = 0x82362E30;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31809
	ctx.r11.s64 = -2084634624;
	// mulli r10,r3,176
	ctx.r10.s64 = ctx.r3.s64 * 176;
	// addi r11,r11,-12528
	ctx.r11.s64 = ctx.r11.s64 + -12528;
	// li r23,0
	ctx.r23.s64 = 0;
	// addi r11,r11,26076
	ctx.r11.s64 = ctx.r11.s64 + 26076;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// add r28,r10,r11
	ctx.r28.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r27,r23
	ctx.r27.u64 = ctx.r23.u64;
	// mr r25,r23
	ctx.r25.u64 = ctx.r23.u64;
	// lwz r10,108(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 108);
	// stw r4,28(r28)
	PPC_STORE_U32(ctx.r28.u32 + 28, ctx.r4.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82362f18
	if (!ctx.cr6.gt) goto loc_82362F18;
	// addi r30,r28,68
	ctx.r30.s64 = ctx.r28.s64 + 68;
	// addi r31,r28,92
	ctx.r31.s64 = ctx.r28.s64 + 92;
	// addi r29,r28,88
	ctx.r29.s64 = ctx.r28.s64 + 88;
	// addi r26,r30,-2
	ctx.r26.s64 = ctx.r30.s64 + -2;
loc_82362E78:
	// lwz r11,-56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -56);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82362eb8
	if (!ctx.cr6.eq) goto loc_82362EB8;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// beq cr6,0x82362eb8
	if (ctx.cr6.eq) goto loc_82362EB8;
	// stw r23,-52(r29)
	PPC_STORE_U32(ctx.r29.u32 + -52, ctx.r23.u32);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// lwz r11,-40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -40);
	// stw r11,-36(r29)
	PPC_STORE_U32(ctx.r29.u32 + -36, ctx.r11.u32);
	// lhz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// sthu r10,2(r26)
	ea = 2 + ctx.r26.u32;
	PPC_STORE_U16(ea, ctx.r10.u16);
	ctx.r26.u32 = ea;
	// lwz r9,-16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + -16);
	// stw r9,-12(r29)
	PPC_STORE_U32(ctx.r29.u32 + -12, ctx.r9.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stwu r8,4(r29)
	ea = 4 + ctx.r29.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r29.u32 = ea;
	// b 0x82362f00
	goto loc_82362F00;
loc_82362EB8:
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// lwz r5,-16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -16);
	// lhz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// lwz r3,-40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -40);
	// blt cr6,0x82362efc
	if (ctx.cr6.lt) goto loc_82362EFC;
	// beq cr6,0x82362eec
	if (ctx.cr6.eq) goto loc_82362EEC;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x82362f00
	if (!ctx.cr6.lt) goto loc_82362F00;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x820f8a78
	ctx.lr = 0x82362EE8;
	sub_820F8A78(ctx, base);
	// b 0x82362f00
	goto loc_82362F00;
loc_82362EEC:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x820f89f0
	ctx.lr = 0x82362EF8;
	sub_820F89F0(ctx, base);
	// b 0x82362f00
	goto loc_82362F00;
loc_82362EFC:
	// bl 0x820f89f8
	ctx.lr = 0x82362F00;
	sub_820F89F8(ctx, base);
loc_82362F00:
	// lwz r11,108(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 108);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82362e78
	if (ctx.cr6.lt) goto loc_82362E78;
loc_82362F18:
	// stw r27,108(r28)
	PPC_STORE_U32(ctx.r28.u32 + 108, ctx.r27.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82362E28) {
	__imp__sub_82362E28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82362F24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82362F24) {
	__imp__sub_82362F24(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82362F28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31809
	ctx.r11.s64 = -2084634624;
	// lfs f12,60(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r11,-12528
	ctx.r9.s64 = ctx.r11.s64 + -12528;
	// lfs f0,12168(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,20340(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 20340);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f13,20336(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 20336);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f10,f0,f13
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fmuls f9,f11,f12
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// fmadds f1,f9,f13,f10
	ctx.f1.f64 = double(float(ctx.f9.f64 * ctx.f13.f64 + ctx.f10.f64));
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82362F28) {
	__imp__sub_82362F28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82362F58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,112(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82362F58) {
	__imp__sub_82362F58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82362F60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// fsubs f0,f1,f2
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 - ctx.f2.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f1.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// bgt cr6,0x82362f80
	if (ctx.cr6.gt) goto loc_82362F80;
	// lfs f1,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_82362F80:
	// fsubs f12,f3,f2
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f3.f64 - ctx.f2.f64));
	// lfs f13,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f12.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
	// b 0x822dd780
	sub_822DD780(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82362F60) {
	__imp__sub_82362F60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82362F9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82362F9C) {
	__imp__sub_82362F9C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82362FA0) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x820f7d40
	ctx.lr = 0x82362FC8;
	sub_820F7D40(ctx, base);
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f9,f13,f0,f11
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f0.f64 + ctx.f11.f64));
	// lfs f10,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f10.f64 = double(temp.f32);
	// lfs f8,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f6,f12,f0,f8
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f8.f64));
	// fmadds f5,f10,f0,f7
	ctx.f5.f64 = double(float(ctx.f10.f64 * ctx.f0.f64 + ctx.f7.f64));
	// lfs f4,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f1.f64 = double(temp.f32);
	// fmadds f11,f3,f4,f9
	ctx.f11.f64 = double(float(ctx.f3.f64 * ctx.f4.f64 + ctx.f9.f64));
	// fmadds f9,f2,f4,f6
	ctx.f9.f64 = double(float(ctx.f2.f64 * ctx.f4.f64 + ctx.f6.f64));
	// fmadds f8,f1,f4,f5
	ctx.f8.f64 = double(float(ctx.f1.f64 * ctx.f4.f64 + ctx.f5.f64));
	// lfs f0,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f7,f13,f0,f11
	ctx.f7.f64 = double(float(ctx.f13.f64 * ctx.f0.f64 + ctx.f11.f64));
	// stfs f7,0(r30)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// fmadds f6,f12,f0,f9
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f9.f64));
	// stfs f6,4(r30)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// fmadds f5,f10,f0,f8
	ctx.f5.f64 = double(float(ctx.f10.f64 * ctx.f0.f64 + ctx.f8.f64));
	// stfs f5,8(r30)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
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

PPC_WEAK_FUNC(sub_82362FA0) {
	__imp__sub_82362FA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236304C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8236304C) {
	__imp__sub_8236304C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82363050) {
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
	// lis r11,-31809
	ctx.r11.s64 = -2084634624;
	// mulli r30,r3,176
	ctx.r30.s64 = ctx.r3.s64 * 176;
	// addi r31,r11,-12528
	ctx.r31.s64 = ctx.r11.s64 + -12528;
	// addi r11,r31,26104
	ctx.r11.s64 = ctx.r31.s64 + 26104;
	// lwzx r10,r30,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82363088
	if (ctx.cr6.eq) goto loc_82363088;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82362e28
	ctx.lr = 0x82363088;
	sub_82362E28(ctx, base);
loc_82363088:
	// addi r10,r31,26240
	ctx.r10.s64 = ctx.r31.s64 + 26240;
	// addi r9,r31,26096
	ctx.r9.s64 = ctx.r31.s64 + 26096;
	// addi r8,r31,26076
	ctx.r8.s64 = ctx.r31.s64 + 26076;
	// addi r7,r31,26196
	ctx.r7.s64 = ctx.r31.s64 + 26196;
	// li r11,0
	ctx.r11.s64 = 0;
	// stbx r11,r30,r10
	PPC_STORE_U8(ctx.r30.u32 + ctx.r10.u32, ctx.r11.u8);
	// stwx r11,r30,r9
	PPC_STORE_U32(ctx.r30.u32 + ctx.r9.u32, ctx.r11.u32);
	// stwx r11,r30,r8
	PPC_STORE_U32(ctx.r30.u32 + ctx.r8.u32, ctx.r11.u32);
	// stwx r11,r30,r7
	PPC_STORE_U32(ctx.r30.u32 + ctx.r7.u32, ctx.r11.u32);
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

PPC_WEAK_FUNC(sub_82363050) {
	__imp__sub_82363050(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823630C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823630C4) {
	__imp__sub_823630C4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823630C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x823630D0;
	__savegprlr_29(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31809
	ctx.r11.s64 = -2084634624;
	// lwz r9,12(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mulli r10,r3,176
	ctx.r10.s64 = ctx.r3.s64 * 176;
	// addi r29,r11,-12528
	ctx.r29.s64 = ctx.r11.s64 + -12528;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r11,r29,26076
	ctx.r11.s64 = ctx.r29.s64 + 26076;
	// cmplwi cr6,r9,65535
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 65535, ctx.xer);
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// beq cr6,0x823631ac
	if (ctx.cr6.eq) goto loc_823631AC;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r9,r29,20756
	ctx.r9.s64 = ctx.r29.s64 + 20756;
	// lwz r8,56(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// srawi r7,r8,9
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1FF) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 9;
	// clrlwi r11,r7,26
	ctx.r11.u64 = ctx.r7.u32 & 0x3F;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r5,r6,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// lbzx r4,r5,r9
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r5.u32 + ctx.r9.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823631ac
	if (ctx.cr6.eq) goto loc_823631AC;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x820f7d40
	ctx.lr = 0x82363134;
	sub_820F7D40(ctx, base);
	// lfs f0,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f11,f10
	ctx.f8.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lfs f7,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f3.f64 = double(temp.f32);
	// fsubs f2,f5,f4
	ctx.f2.f64 = double(float(ctx.f5.f64 - ctx.f4.f64));
	// lfs f1,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f13,f9,f12
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// fmuls f10,f7,f12
	ctx.f10.f64 = double(float(ctx.f7.f64 * ctx.f12.f64));
	// fmuls f7,f6,f12
	ctx.f7.f64 = double(float(ctx.f6.f64 * ctx.f12.f64));
	// lfs f0,124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f5,f3,f8,f13
	ctx.f5.f64 = double(float(ctx.f3.f64 * ctx.f8.f64 + ctx.f13.f64));
	// lfs f6,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f4,f1,f8,f10
	ctx.f4.f64 = double(float(ctx.f1.f64 * ctx.f8.f64 + ctx.f10.f64));
	// lfs f9,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f3,f0,f8,f7
	ctx.f3.f64 = double(float(ctx.f0.f64 * ctx.f8.f64 + ctx.f7.f64));
	// fmadds f1,f11,f2,f5
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f2.f64 + ctx.f5.f64));
	// stfs f1,152(r30)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + 152, temp.u32);
	// fmadds f0,f9,f2,f4
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f2.f64 + ctx.f4.f64));
	// fmadds f13,f6,f2,f3
	ctx.f13.f64 = double(float(ctx.f6.f64 * ctx.f2.f64 + ctx.f3.f64));
	// stfs f13,160(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 160, temp.u32);
	// b 0x823631bc
	goto loc_823631BC;
loc_823631AC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,152(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 152, temp.u32);
	// stfs f0,160(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 160, temp.u32);
loc_823631BC:
	// stfs f0,156(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 156, temp.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,56(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// srawi r8,r9,9
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1FF) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 9;
	// clrlwi r7,r8,26
	ctx.r7.u64 = ctx.r8.u32 & 0x3F;
	// stw r7,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r7.u32);
	// lfs f0,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,112(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 112, temp.u32);
	// lfs f13,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,116(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 116, temp.u32);
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r6,120(r30)
	PPC_STORE_U32(ctx.r30.u32 + 120, ctx.r6.u32);
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r5,124(r30)
	PPC_STORE_U32(ctx.r30.u32 + 124, ctx.r5.u32);
	// lfs f12,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,136(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 136, temp.u32);
	// lwz r4,44(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// stw r4,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r4.u32);
	// lwz r11,20660(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20660);
	// stw r11,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r11.u32);
	// lbz r3,2(r29)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r29.u32 + 2);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82363258
	if (ctx.cr6.eq) goto loc_82363258;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r9,r29,25808
	ctx.r9.s64 = ctx.r29.s64 + 25808;
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r8,56(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// srawi r7,r8,9
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1FF) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 9;
	// clrlwi r6,r7,26
	ctx.r6.u64 = ctx.r7.u32 & 0x3F;
	// srawi r5,r6,5
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1F) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 5;
	// clrlwi r4,r6,27
	ctx.r4.u64 = ctx.r6.u32 & 0x1F;
	// rlwinm r3,r5,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// slw r10,r11,r4
	ctx.r10.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r4.u8 & 0x3F));
	// lwzx r9,r3,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r9.u32);
	// and r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 & ctx.r9.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8236325c
	if (!ctx.cr6.eq) goto loc_8236325C;
loc_82363258:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8236325C:
	// stb r11,164(r30)
	PPC_STORE_U8(ctx.r30.u32 + 164, ctx.r11.u8);
	// li r5,76
	ctx.r5.s64 = 76;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r30,36
	ctx.r3.s64 = ctx.r30.s64 + 36;
	// lbz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 48);
	// stb r10,165(r30)
	PPC_STORE_U8(ctx.r30.u32 + 165, ctx.r10.u8);
	// lwz r9,56(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// stw r9,172(r30)
	PPC_STORE_U32(ctx.r30.u32 + 172, ctx.r9.u32);
	// lfs f0,52(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,168(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 168, temp.u32);
	// bl 0x823de090
	ctx.lr = 0x82363288;
	sub_823DE090(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823630C8) {
	__imp__sub_823630C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82363290) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31809
	ctx.r11.s64 = -2084634624;
	// mulli r10,r3,176
	ctx.r10.s64 = ctx.r3.s64 * 176;
	// addi r11,r11,-12528
	ctx.r11.s64 = ctx.r11.s64 + -12528;
	// addi r9,r11,26076
	ctx.r9.s64 = ctx.r11.s64 + 26076;
	// addi r8,r11,26080
	ctx.r8.s64 = ctx.r11.s64 + 26080;
	// addi r7,r11,26084
	ctx.r7.s64 = ctx.r11.s64 + 26084;
	// stwx r6,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r6.u32);
	// stwx r4,r10,r8
	PPC_STORE_U32(ctx.r10.u32 + ctx.r8.u32, ctx.r4.u32);
	// stwx r5,r10,r7
	PPC_STORE_U32(ctx.r10.u32 + ctx.r7.u32, ctx.r5.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82363290) {
	__imp__sub_82363290(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823632B8) {
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
	// clrlwi r10,r4,24
	ctx.r10.u64 = ctx.r4.u32 & 0xFF;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823632fc
	if (ctx.cr6.eq) goto loc_823632FC;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r4,r11,152
	ctx.r4.s64 = ctx.r11.s64 + 152;
	// bl 0x82362fa0
	ctx.lr = 0x823632E4;
	sub_82362FA0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82362678
	ctx.lr = 0x823632EC;
	sub_82362678(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_823632FC:
	// lfs f0,112(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// fneg f1,f0
	ctx.f1.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823632B8) {
	__imp__sub_823632B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82363314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82363314) {
	__imp__sub_82363314(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82363318) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf64
	ctx.lr = 0x82363320;
	__savegprlr_23(ctx, base);
	// stfd f30,-96(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.f30.u64);
	// stfd f31,-88(r1)
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r11,-31809
	ctx.r11.s64 = -2084634624;
	// add r10,r4,r10
	ctx.r10.u64 = ctx.r4.u64 + ctx.r10.u64;
	// addi r27,r11,-12528
	ctx.r27.s64 = ctx.r11.s64 + -12528;
	// rlwinm r9,r10,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r8,r27,20756
	ctx.r8.s64 = ctx.r27.s64 + 20756;
	// addi r7,r27,20752
	ctx.r7.s64 = ctx.r27.s64 + 20752;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lbzx r25,r9,r8
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r8.u32);
	// lwzx r28,r9,r7
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x8236336c
	if (ctx.cr6.eq) goto loc_8236336C;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// bl 0x82362678
	ctx.lr = 0x82363364;
	sub_82362678(ctx, base);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// b 0x82363374
	goto loc_82363374;
loc_8236336C:
	// lfs f0,28(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// fneg f31,f0
	ctx.f31.u64 = ctx.f0.u64 ^ 0x8000000000000000;
loc_82363374:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r24,r5,r6
	ctx.r24.u64 = ctx.r5.u64 + ctx.r6.u64;
	// li r26,-1
	ctx.r26.s64 = -1;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmpw cr6,r5,r24
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r24.s32, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r23,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r23.u64 = ~ctx.r9.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// bge cr6,0x8236349c
	if (!ctx.cr6.lt) goto loc_8236349C;
	// addi r11,r27,26228
	ctx.r11.s64 = ctx.r27.s64 + 26228;
	// mulli r10,r5,176
	ctx.r10.s64 = ctx.r5.s64 * 176;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f30,12168(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f30.f64 = double(temp.f32);
loc_823633AC:
	// lwz r11,-152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -152);
	// lwz r30,-32(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + -32);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x823633e0
	if (!ctx.cr6.eq) goto loc_823633E0;
	// lwz r11,56(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x823633e0
	if (!ctx.cr6.eq) goto loc_823633E0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823050c8
	ctx.lr = 0x823633D8;
	sub_823050C8(ctx, base);
	// fcmpu cr6,f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f30.f64);
	// bge cr6,0x823634b0
	if (!ctx.cr6.lt) goto loc_823634B0;
loc_823633E0:
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// bne cr6,0x823633f4
	if (!ctx.cr6.eq) goto loc_823633F4;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8236348c
	if (!ctx.cr6.eq) goto loc_8236348C;
loc_823633F4:
	// lwz r11,-136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -136);
	// addi r9,r27,20752
	ctx.r9.s64 = ctx.r27.s64 + 20752;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r7,r8,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r11,r7,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, ctx.xer);
	// bge cr6,0x8236344c
	if (!ctx.cr6.lt) goto loc_8236344C;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// mr r26,r29
	ctx.r26.u64 = ctx.r29.u64;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82363440
	if (ctx.cr6.eq) goto loc_82363440;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,-140(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -140);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82362fa0
	ctx.lr = 0x82363434;
	sub_82362FA0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82362678
	ctx.lr = 0x8236343C;
	sub_82362678(ctx, base);
	// b 0x82363488
	goto loc_82363488;
loc_82363440:
	// lfs f0,-40(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -40);
	ctx.f0.f64 = double(temp.f32);
	// fneg f31,f0
	ctx.f31.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// b 0x8236348c
	goto loc_8236348C;
loc_8236344C:
	// bne cr6,0x8236348c
	if (!ctx.cr6.eq) goto loc_8236348C;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82363474
	if (ctx.cr6.eq) goto loc_82363474;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r3,-140(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -140);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82362fa0
	ctx.lr = 0x82363468;
	sub_82362FA0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82362678
	ctx.lr = 0x82363470;
	sub_82362678(ctx, base);
	// b 0x8236347c
	goto loc_8236347C;
loc_82363474:
	// lfs f0,-40(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -40);
	ctx.f0.f64 = double(temp.f32);
	// fneg f1,f0
	ctx.f1.u64 = ctx.f0.u64 ^ 0x8000000000000000;
loc_8236347C:
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// ble cr6,0x8236348c
	if (!ctx.cr6.gt) goto loc_8236348C;
	// mr r26,r29
	ctx.r26.u64 = ctx.r29.u64;
loc_82363488:
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
loc_8236348C:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,176
	ctx.r31.s64 = ctx.r31.s64 + 176;
	// cmpw cr6,r29,r24
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r24.s32, ctx.xer);
	// blt cr6,0x823633ac
	if (ctx.cr6.lt) goto loc_823633AC;
loc_8236349C:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f30,-96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f31,-88(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
loc_823634B0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f30,-96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f31,-88(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82363318) {
	__imp__sub_82363318(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823634C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823634C4) {
	__imp__sub_823634C4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823634C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x823634D0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x823619e0
	ctx.lr = 0x823634E4;
	sub_823619E0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823634fc
	if (!ctx.cr6.eq) goto loc_823634FC;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_823634FC:
	// lis r11,-31809
	ctx.r11.s64 = -2084634624;
	// lis r10,0
	ctx.r10.s64 = 0;
	// addi r30,r11,-12528
	ctx.r30.s64 = ctx.r11.s64 + -12528;
	// ori r9,r10,35228
	ctx.r9.u64 = ctx.r10.u64 | 35228;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwzx r6,r30,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x82363548
	if (!ctx.cr6.gt) goto loc_82363548;
loc_8236351C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823043a8
	ctx.lr = 0x82363524;
	sub_823043A8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82363568
	if (!ctx.cr6.eq) goto loc_82363568;
	// lis r11,0
	ctx.r11.s64 = 0;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// ori r10,r11,35228
	ctx.r10.u64 = ctx.r11.u64 | 35228;
	// lwzx r6,r30,r10
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// cmpw cr6,r31,r6
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x8236351c
	if (ctx.cr6.lt) goto loc_8236351C;
loc_82363548:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82363318
	ctx.lr = 0x82363558;
	sub_82363318(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82363568
	if (ctx.cr6.lt) goto loc_82363568;
	// bl 0x823042d8
	ctx.lr = 0x82363568;
	sub_823042D8(ctx, base);
loc_82363568:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823634C8) {
	__imp__sub_823634C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82363574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82363574) {
	__imp__sub_82363574(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82363578) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x82363580;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x823619e0
	ctx.lr = 0x82363594;
	sub_823619E0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823635ac
	if (!ctx.cr6.eq) goto loc_823635AC;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_823635AC:
	// lis r11,-31809
	ctx.r11.s64 = -2084634624;
	// lis r10,0
	ctx.r10.s64 = 0;
	// addi r30,r11,-12528
	ctx.r30.s64 = ctx.r11.s64 + -12528;
	// ori r9,r10,35232
	ctx.r9.u64 = ctx.r10.u64 | 35232;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwzx r6,r30,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x823635fc
	if (!ctx.cr6.gt) goto loc_823635FC;
loc_823635CC:
	// addi r29,r31,8
	ctx.r29.s64 = ctx.r31.s64 + 8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82304498
	ctx.lr = 0x823635D8;
	sub_82304498(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82363628
	if (!ctx.cr6.eq) goto loc_82363628;
	// lis r11,0
	ctx.r11.s64 = 0;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// ori r10,r11,35232
	ctx.r10.u64 = ctx.r11.u64 | 35232;
	// lwzx r6,r30,r10
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// cmpw cr6,r31,r6
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x823635cc
	if (ctx.cr6.lt) goto loc_823635CC;
loc_823635FC:
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82363318
	ctx.lr = 0x8236360C;
	sub_82363318(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8236361c
	if (ctx.cr6.lt) goto loc_8236361C;
	// bl 0x823043c8
	ctx.lr = 0x8236361C;
	sub_823043C8(ctx, base);
loc_8236361C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_82363628:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82363578) {
	__imp__sub_82363578(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82363634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82363634) {
	__imp__sub_82363634(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82363638) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x82363640;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// bl 0x823619e0
	ctx.lr = 0x82363654;
	sub_823619E0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8236366c
	if (!ctx.cr6.eq) goto loc_8236366C;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_8236366C:
	// lis r11,-31809
	ctx.r11.s64 = -2084634624;
	// lis r10,0
	ctx.r10.s64 = 0;
	// addi r30,r11,-12528
	ctx.r30.s64 = ctx.r11.s64 + -12528;
	// ori r9,r10,35236
	ctx.r9.u64 = ctx.r10.u64 | 35236;
	// li r31,4
	ctx.r31.s64 = 4;
	// lwzx r11,r30,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// ble cr6,0x823636bc
	if (!ctx.cr6.gt) goto loc_823636BC;
loc_8236368C:
	// addi r28,r31,40
	ctx.r28.s64 = ctx.r31.s64 + 40;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823045f8
	ctx.lr = 0x82363698;
	sub_823045F8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82363780
	if (!ctx.cr6.eq) goto loc_82363780;
	// lis r11,0
	ctx.r11.s64 = 0;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// ori r10,r11,35236
	ctx.r10.u64 = ctx.r11.u64 | 35236;
	// lwzx r11,r30,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8236368c
	if (ctx.cr6.lt) goto loc_8236368C;
loc_823636BC:
	// addi r6,r11,-4
	ctx.r6.s64 = ctx.r11.s64 + -4;
	// li r5,44
	ctx.r5.s64 = 44;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82363318
	ctx.lr = 0x823636D0;
	sub_82363318(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82363790
	if (ctx.cr6.lt) goto loc_82363790;
	// mulli r11,r3,176
	ctx.r11.s64 = ctx.r3.s64 * 176;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r9,r30,26196
	ctx.r9.s64 = ctx.r30.s64 + 26196;
	// lwzx r8,r11,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8236376c
	if (!ctx.cr6.eq) goto loc_8236376C;
	// addi r10,r30,26216
	ctx.r10.s64 = ctx.r30.s64 + 26216;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x823627e8
	ctx.lr = 0x82363704;
	sub_823627E8(ctx, base);
	// mulli r10,r3,60
	ctx.r10.s64 = ctx.r3.s64 * 60;
	// lfs f0,24(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,16(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,20(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// addi r11,r30,20476
	ctx.r11.s64 = ctx.r30.s64 + 20476;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f8,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f8,f0
	ctx.f7.f64 = double(float(ctx.f8.f64 - ctx.f0.f64));
	// lfs f6,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f5,f8,f13
	ctx.f5.f64 = double(float(ctx.f8.f64 - ctx.f13.f64));
	// lfs f4,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f3,f6,f12
	ctx.f3.f64 = double(float(ctx.f6.f64 - ctx.f12.f64));
	// fsubs f2,f6,f11
	ctx.f2.f64 = double(float(ctx.f6.f64 - ctx.f11.f64));
	// fsubs f1,f4,f10
	ctx.f1.f64 = double(float(ctx.f4.f64 - ctx.f10.f64));
	// fsubs f0,f4,f9
	ctx.f0.f64 = double(float(ctx.f4.f64 - ctx.f9.f64));
	// fmuls f13,f7,f7
	ctx.f13.f64 = double(float(ctx.f7.f64 * ctx.f7.f64));
	// fmuls f12,f5,f5
	ctx.f12.f64 = double(float(ctx.f5.f64 * ctx.f5.f64));
	// fmadds f11,f3,f3,f13
	ctx.f11.f64 = double(float(ctx.f3.f64 * ctx.f3.f64 + ctx.f13.f64));
	// fmadds f10,f2,f2,f12
	ctx.f10.f64 = double(float(ctx.f2.f64 * ctx.f2.f64 + ctx.f12.f64));
	// fmadds f9,f1,f1,f11
	ctx.f9.f64 = double(float(ctx.f1.f64 * ctx.f1.f64 + ctx.f11.f64));
	// fmadds f8,f0,f0,f10
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f10.f64));
	// fcmpu cr6,f9,f8
	ctx.cr6.compare(ctx.f9.f64, ctx.f8.f64);
	// bge cr6,0x8236378c
	if (!ctx.cr6.lt) goto loc_8236378C;
loc_8236376C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823044b8
	ctx.lr = 0x82363774;
	sub_823044B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_82363780:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_8236378C:
	// li r31,-1
	ctx.r31.s64 = -1;
loc_82363790:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82363638) {
	__imp__sub_82363638(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236379C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8236379C) {
	__imp__sub_8236379C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823637A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x823637A8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31809
	ctx.r11.s64 = -2084634624;
	// lis r10,0
	ctx.r10.s64 = 0;
	// addi r29,r11,-12528
	ctx.r29.s64 = ctx.r11.s64 + -12528;
	// ori r9,r10,35232
	ctx.r9.u64 = ctx.r10.u64 | 35232;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// li r31,8
	ctx.r31.s64 = 8;
	// lwzx r11,r29,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r9.u32);
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// cmpwi cr6,r8,8
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 8, ctx.xer);
	// ble cr6,0x82363830
	if (!ctx.cr6.gt) goto loc_82363830;
	// addi r30,r29,27500
	ctx.r30.s64 = ctx.r29.s64 + 27500;
loc_823637DC:
	// lwz r11,-4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, ctx.xer);
	// bne cr6,0x82363810
	if (!ctx.cr6.eq) goto loc_82363810;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpw cr6,r11,r27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r27.s32, ctx.xer);
	// bne cr6,0x82363810
	if (!ctx.cr6.eq) goto loc_82363810;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82304498
	ctx.lr = 0x823637FC;
	sub_82304498(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82363810
	if (!ctx.cr6.eq) goto loc_82363810;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823043c8
	ctx.lr = 0x82363810;
	sub_823043C8(ctx, base);
loc_82363810:
	// lis r11,0
	ctx.r11.s64 = 0;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// ori r10,r11,35232
	ctx.r10.u64 = ctx.r11.u64 | 35232;
	// addi r30,r30,176
	ctx.r30.s64 = ctx.r30.s64 + 176;
	// lwzx r11,r29,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r10.u32);
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// cmpw cr6,r31,r9
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x823637dc
	if (ctx.cr6.lt) goto loc_823637DC;
loc_82363830:
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r30,40
	ctx.r30.s64 = 40;
	// ori r10,r11,35236
	ctx.r10.u64 = ctx.r11.u64 | 35236;
	// lwzx r11,r29,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r10.u32);
	// addi r9,r11,40
	ctx.r9.s64 = ctx.r11.s64 + 40;
	// cmpwi cr6,r9,40
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 40, ctx.xer);
	// ble cr6,0x823638a8
	if (!ctx.cr6.gt) goto loc_823638A8;
	// addis r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 65536;
	// addi r31,r11,-32404
	ctx.r31.s64 = ctx.r11.s64 + -32404;
loc_82363854:
	// lwz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, ctx.xer);
	// bne cr6,0x82363888
	if (!ctx.cr6.eq) goto loc_82363888;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpw cr6,r11,r27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r27.s32, ctx.xer);
	// bne cr6,0x82363888
	if (!ctx.cr6.eq) goto loc_82363888;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823045f8
	ctx.lr = 0x82363874;
	sub_823045F8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82363888
	if (!ctx.cr6.eq) goto loc_82363888;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823044b8
	ctx.lr = 0x82363888;
	sub_823044B8(ctx, base);
loc_82363888:
	// lis r11,0
	ctx.r11.s64 = 0;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// ori r10,r11,35236
	ctx.r10.u64 = ctx.r11.u64 | 35236;
	// addi r31,r31,176
	ctx.r31.s64 = ctx.r31.s64 + 176;
	// lwzx r11,r29,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r10.u32);
	// addi r9,r11,40
	ctx.r9.s64 = ctx.r11.s64 + 40;
	// cmpw cr6,r30,r9
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82363854
	if (ctx.cr6.lt) goto loc_82363854;
loc_823638A8:
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
	// ori r10,r11,35228
	ctx.r10.u64 = ctx.r11.u64 | 35228;
	// lwzx r9,r29,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82363914
	if (!ctx.cr6.gt) goto loc_82363914;
	// addi r31,r29,26092
	ctx.r31.s64 = ctx.r29.s64 + 26092;
loc_823638C4:
	// lwz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, ctx.xer);
	// bne cr6,0x823638f8
	if (!ctx.cr6.eq) goto loc_823638F8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpw cr6,r11,r27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r27.s32, ctx.xer);
	// bne cr6,0x823638f8
	if (!ctx.cr6.eq) goto loc_823638F8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823043a8
	ctx.lr = 0x823638E4;
	sub_823043A8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823638f8
	if (!ctx.cr6.eq) goto loc_823638F8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823042d8
	ctx.lr = 0x823638F8;
	sub_823042D8(ctx, base);
loc_823638F8:
	// lis r11,0
	ctx.r11.s64 = 0;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// ori r10,r11,35228
	ctx.r10.u64 = ctx.r11.u64 | 35228;
	// addi r31,r31,176
	ctx.r31.s64 = ctx.r31.s64 + 176;
	// lwzx r9,r29,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r10.u32);
	// cmpw cr6,r30,r9
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x823638c4
	if (ctx.cr6.lt) goto loc_823638C4;
loc_82363914:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823637A0) {
	__imp__sub_823637A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236391C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8236391C) {
	__imp__sub_8236391C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82363920) {
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
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lbz r10,1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82363990
	if (!ctx.cr6.eq) goto loc_82363990;
	// li r5,128
	ctx.r5.s64 = 128;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x822ddaa8
	ctx.lr = 0x8236395C;
	sub_822DDAA8(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,2488
	ctx.r4.s64 = ctx.r11.s64 + 2488;
	// li r3,9
	ctx.r3.s64 = 9;
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// bl 0x82280a68
	ctx.lr = 0x82363978;
	sub_82280A68(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82363988
	if (ctx.cr6.eq) goto loc_82363988;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_82363988:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82363a58
	goto loc_82363A58;
loc_82363990:
	// lwz r10,56(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// lis r11,-31809
	ctx.r11.s64 = -2084634624;
	// srawi r9,r10,9
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1FF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 9;
	// addi r10,r11,-12528
	ctx.r10.s64 = ctx.r11.s64 + -12528;
	// clrlwi r11,r9,26
	ctx.r11.u64 = ctx.r9.u32 & 0x3F;
	// addi r8,r10,20756
	ctx.r8.s64 = ctx.r10.s64 + 20756;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r6,r7,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// lbzx r5,r6,r8
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r6.u32 + ctx.r8.u32);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82363a38
	if (ctx.cr6.eq) goto loc_82363A38;
	// lis r11,-31809
	ctx.r11.s64 = -2084634624;
	// lwz r11,-12556(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -12556);
	// lbz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82363988
	if (ctx.cr6.eq) goto loc_82363988;
	// addi r11,r10,20532
	ctx.r11.s64 = ctx.r10.s64 + 20532;
loc_823639D8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82363a20
	if (!ctx.cr6.eq) goto loc_82363A20;
	// addi r11,r11,60
	ctx.r11.s64 = ctx.r11.s64 + 60;
	// addi r9,r10,20712
	ctx.r9.s64 = ctx.r10.s64 + 20712;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x823639d8
	if (ctx.cr6.lt) goto loc_823639D8;
	// li r11,0
	ctx.r11.s64 = 0;
loc_823639F8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82363a28
	if (!ctx.cr6.eq) goto loc_82363A28;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,2328
	ctx.r4.s64 = ctx.r11.s64 + 2328;
	// bl 0x822830e8
	ctx.lr = 0x82363A18;
	sub_822830E8(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82363a58
	goto loc_82363A58;
loc_82363A20:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x823639f8
	goto loc_823639F8;
loc_82363A28:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82305ef8
	ctx.lr = 0x82363A34;
	sub_82305EF8(ctx, base);
	// b 0x82363a58
	goto loc_82363A58;
loc_82363A38:
	// lis r11,-31809
	ctx.r11.s64 = -2084634624;
	// lwz r11,-12548(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -12548);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82363988
	if (ctx.cr6.eq) goto loc_82363988;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82305df0
	ctx.lr = 0x82363A58;
	sub_82305DF0(ctx, base);
loc_82363A58:
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

PPC_WEAK_FUNC(sub_82363920) {
	__imp__sub_82363920(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82363A70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82363A78;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// srawi r9,r10,9
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1FF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 9;
	// clrlwi r4,r9,26
	ctx.r4.u64 = ctx.r9.u32 & 0x3F;
	// bl 0x82363638
	ctx.lr = 0x82363A98;
	sub_82363638(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82363aa8
	if (ctx.cr6.eq) goto loc_82363AA8;
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
loc_82363AA8:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bge cr6,0x82363abc
	if (!ctx.cr6.lt) goto loc_82363ABC;
loc_82363AB0:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_82363ABC:
	// lis r11,-31809
	ctx.r11.s64 = -2084634624;
	// lwz r11,23884(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23884);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82363ab0
	if (ctx.cr6.eq) goto loc_82363AB0;
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r11,-31809
	ctx.r11.s64 = -2084634624;
	// addi r10,r11,-12528
	ctx.r10.s64 = ctx.r11.s64 + -12528;
	// addi r7,r10,20756
	ctx.r7.s64 = ctx.r10.s64 + 20756;
	// lwz r6,56(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 56);
	// srawi r5,r6,9
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1FF) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 9;
	// clrlwi r11,r5,26
	ctx.r11.u64 = ctx.r5.u32 & 0x3F;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r3,r4,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// lbzx r11,r3,r7
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r7.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82363b48
	if (ctx.cr6.eq) goto loc_82363B48;
	// addi r11,r10,20532
	ctx.r11.s64 = ctx.r10.s64 + 20532;
loc_82363B08:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82363b5c
	if (!ctx.cr6.eq) goto loc_82363B5C;
	// addi r11,r11,60
	ctx.r11.s64 = ctx.r11.s64 + 60;
	// addi r9,r10,20712
	ctx.r9.s64 = ctx.r10.s64 + 20712;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82363b08
	if (ctx.cr6.lt) goto loc_82363B08;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82363B28:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82363b48
	if (!ctx.cr6.eq) goto loc_82363B48;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lwz r5,0(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,2328
	ctx.r4.s64 = ctx.r11.s64 + 2328;
	// bl 0x822830e8
	ctx.lr = 0x82363B48;
	sub_822830E8(ctx, base);
loc_82363B48:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82306428
	ctx.lr = 0x82363B54;
	sub_82306428(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_82363B5C:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82363b28
	goto loc_82363B28;
}

PPC_WEAK_FUNC(sub_82363A70) {
	__imp__sub_82363A70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82363B64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82363B64) {
	__imp__sub_82363B64(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82363B68) {
	PPC_FUNC_PROLOGUE();
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82363B68) {
	__imp__sub_82363B68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82363B70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82363B78;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,120(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82363bac
	if (ctx.cr6.eq) goto loc_82363BAC;
	// li r3,9
	ctx.r3.s64 = 9;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82177148
	ctx.lr = 0x82363B98;
	sub_82177148(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822dd9a0
	ctx.lr = 0x82363BA4;
	sub_822DD9A0(ctx, base);
	// stw r3,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r3.u32);
	// stw r29,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r29.u32);
loc_82363BAC:
	// lwz r30,124(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82363bd8
	if (ctx.cr6.eq) goto loc_82363BD8;
	// li r3,9
	ctx.r3.s64 = 9;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82177148
	ctx.lr = 0x82363BC4;
	sub_82177148(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822dd9a0
	ctx.lr = 0x82363BD0;
	sub_822DD9A0(ctx, base);
	// stw r3,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r3.u32);
	// stw r29,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r29.u32);
loc_82363BD8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82363B70) {
	__imp__sub_82363B70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82363BE0) {
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
	// lwz r11,120(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82363c10
	if (ctx.cr6.eq) goto loc_82363C10;
	// lwz r4,128(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x822dda08
	ctx.lr = 0x82363C0C;
	sub_822DDA08(ctx, base);
	// stw r3,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r3.u32);
loc_82363C10:
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82363c2c
	if (ctx.cr6.eq) goto loc_82363C2C;
	// lwz r4,132(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x822dda08
	ctx.lr = 0x82363C28;
	sub_822DDA08(ctx, base);
	// stw r3,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r3.u32);
loc_82363C2C:
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

PPC_WEAK_FUNC(sub_82363BE0) {
	__imp__sub_82363BE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82363C40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82363C48;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31809
	ctx.r11.s64 = -2084634624;
	// addi r29,r11,-12528
	ctx.r29.s64 = ctx.r11.s64 + -12528;
	// addi r31,r29,26196
	ctx.r31.s64 = ctx.r29.s64 + 26196;
loc_82363C58:
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82363c84
	if (ctx.cr6.eq) goto loc_82363C84;
	// li r3,9
	ctx.r3.s64 = 9;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82177148
	ctx.lr = 0x82363C70;
	sub_82177148(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822dd9a0
	ctx.lr = 0x82363C7C;
	sub_822DD9A0(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
loc_82363C84:
	// lwz r30,4(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82363cb0
	if (ctx.cr6.eq) goto loc_82363CB0;
	// li r3,9
	ctx.r3.s64 = 9;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82177148
	ctx.lr = 0x82363C9C;
	sub_82177148(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822dd9a0
	ctx.lr = 0x82363CA8;
	sub_822DD9A0(ctx, base);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// stw r28,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
loc_82363CB0:
	// addis r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 65536;
	// addi r31,r31,176
	ctx.r31.s64 = ctx.r31.s64 + 176;
	// addi r11,r11,-30188
	ctx.r11.s64 = ctx.r11.s64 + -30188;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82363c58
	if (ctx.cr6.lt) goto loc_82363C58;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82363C40) {
	__imp__sub_82363C40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82363CCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82363CCC) {
	__imp__sub_82363CCC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82363CD0) {
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
	// lis r11,-31809
	ctx.r11.s64 = -2084634624;
	// addi r30,r11,-12528
	ctx.r30.s64 = ctx.r11.s64 + -12528;
	// addi r31,r30,26196
	ctx.r31.s64 = ctx.r30.s64 + 26196;
loc_82363CF0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82363d0c
	if (ctx.cr6.eq) goto loc_82363D0C;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x822dda08
	ctx.lr = 0x82363D08;
	sub_822DDA08(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
loc_82363D0C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82363d28
	if (ctx.cr6.eq) goto loc_82363D28;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x822dda08
	ctx.lr = 0x82363D24;
	sub_822DDA08(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
loc_82363D28:
	// addis r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 65536;
	// addi r31,r31,176
	ctx.r31.s64 = ctx.r31.s64 + 176;
	// addi r11,r11,-30188
	ctx.r11.s64 = ctx.r11.s64 + -30188;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82363cf0
	if (ctx.cr6.lt) goto loc_82363CF0;
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

PPC_WEAK_FUNC(sub_82363CD0) {
	__imp__sub_82363CD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82363D54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82363D54) {
	__imp__sub_82363D54(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82363D58) {
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
	ctx.lr = 0x82363D70;
	__savefpr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,28(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,32(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f1
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// lfs f11,36(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f13,f1
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f1.f64));
	// lfs f9,40(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f11,f1
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f1.f64));
	// fmuls f7,f9,f1
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f1.f64));
	// lfs f6,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f6.f64 = double(temp.f32);
	// lfs f31,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f31.f64 = double(temp.f32);
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// fsubs f5,f31,f1
	ctx.f5.f64 = double(float(ctx.f31.f64 - ctx.f1.f64));
	// lfs f4,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f3.f64 = double(temp.f32);
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// lfs f2,40(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f2.f64 = double(temp.f32);
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// fmadds f29,f6,f5,f12
	ctx.f29.f64 = double(float(ctx.f6.f64 * ctx.f5.f64 + ctx.f12.f64));
	// fmadds f28,f4,f5,f10
	ctx.f28.f64 = double(float(ctx.f4.f64 * ctx.f5.f64 + ctx.f10.f64));
	// fmadds f27,f3,f5,f8
	ctx.f27.f64 = double(float(ctx.f3.f64 * ctx.f5.f64 + ctx.f8.f64));
	// fmadds f26,f2,f5,f7
	ctx.f26.f64 = double(float(ctx.f2.f64 * ctx.f5.f64 + ctx.f7.f64));
	// bl 0x822d3ea0
	ctx.lr = 0x82363DD0;
	sub_822D3EA0(ctx, base);
	// fsubs f13,f28,f29
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f28.f64 - ctx.f29.f64));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,5484(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f12,f1,f13,f29
	ctx.f12.f64 = double(float(ctx.f1.f64 * ctx.f13.f64 + ctx.f29.f64));
	// fmuls f11,f12,f30
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f30.f64));
	// fsubs f10,f11,f31
	ctx.f10.f64 = double(float(ctx.f11.f64 - ctx.f31.f64));
	// fneg f9,f11
	ctx.f9.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// fsel f8,f10,f31,f11
	ctx.f8.f64 = ctx.f10.f64 >= 0.0 ? ctx.f31.f64 : ctx.f11.f64;
	// fsel f7,f9,f0,f8
	ctx.f7.f64 = ctx.f9.f64 >= 0.0 ? ctx.f0.f64 : ctx.f8.f64;
	// stfs f7,0(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// bl 0x822d3ea0
	ctx.lr = 0x82363DFC;
	sub_822D3EA0(ctx, base);
	// fsubs f6,f26,f27
	ctx.fpscr.disableFlushMode();
	ctx.f6.f64 = double(float(ctx.f26.f64 - ctx.f27.f64));
	// fmadds f5,f1,f6,f27
	ctx.f5.f64 = double(float(ctx.f1.f64 * ctx.f6.f64 + ctx.f27.f64));
	// stfs f5,0(r30)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x823de06c
	ctx.lr = 0x82363E14;
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

PPC_WEAK_FUNC(sub_82363D58) {
	__imp__sub_82363D58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82363E28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x82363E30;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31809
	ctx.r11.s64 = -2084634624;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mulli r10,r3,176
	ctx.r10.s64 = ctx.r3.s64 * 176;
	// addi r30,r11,-12528
	ctx.r30.s64 = ctx.r11.s64 + -12528;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r11,r30,26076
	ctx.r11.s64 = ctx.r30.s64 + 26076;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// lfs f0,12168(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// fsubs f11,f0,f1
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f1.f64));
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lwz r6,124(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// lfs f10,168(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	ctx.f10.f64 = double(temp.f32);
	// lwz r5,120(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// fsubs f9,f0,f10
	ctx.f9.f64 = double(float(ctx.f0.f64 - ctx.f10.f64));
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lfs f13,5484(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 5484);
	ctx.f13.f64 = double(temp.f32);
	// extsw r3,r4
	ctx.r3.s64 = ctx.r4.s32;
	// lfs f12,2416(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2416);
	ctx.f12.f64 = double(temp.f32);
	// lfs f8,28(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 28);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f8,f1
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f1.f64));
	// lfs f6,28(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 28);
	ctx.f6.f64 = double(temp.f32);
	// std r3,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r3.u64);
	// lfd f5,80(r1)
	ctx.f5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f4,f5
	ctx.f4.f64 = double(ctx.f5.s64);
	// fmadds f1,f6,f11,f7
	ctx.f1.f64 = double(float(ctx.f6.f64 * ctx.f11.f64 + ctx.f7.f64));
	// frsp f8,f4
	ctx.f8.f64 = double(float(ctx.f4.f64));
	// fmuls f7,f1,f2
	ctx.f7.f64 = double(float(ctx.f1.f64 * ctx.f2.f64));
	// fsubs f6,f7,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 - ctx.f0.f64));
	// fneg f5,f7
	ctx.f5.u64 = ctx.f7.u64 ^ 0x8000000000000000;
	// fsel f4,f6,f0,f7
	ctx.f4.f64 = ctx.f6.f64 >= 0.0 ? ctx.f0.f64 : ctx.f7.f64;
	// fsel f2,f5,f13,f4
	ctx.f2.f64 = ctx.f5.f64 >= 0.0 ? ctx.f13.f64 : ctx.f4.f64;
	// stfs f2,112(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 112, temp.u32);
	// lfs f1,36(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 36);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,36(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// fmadds f11,f1,f11,f13
	ctx.f11.f64 = double(float(ctx.f1.f64 * ctx.f11.f64 + ctx.f13.f64));
	// fmuls f7,f11,f3
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f3.f64));
	// stfs f7,116(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 116, temp.u32);
	// lfs f0,16(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f6,f0,f10,f9
	ctx.f6.f64 = double(float(ctx.f0.f64 * ctx.f10.f64 + ctx.f9.f64));
	// fmuls f5,f6,f8
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f8.f64));
	// fmuls f4,f5,f7
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f7.f64));
	// fadds f1,f4,f12
	ctx.f1.f64 = double(float(ctx.f4.f64 + ctx.f12.f64));
	// bl 0x823dde20
	ctx.lr = 0x82363EF8;
	sub_823DDE20(ctx, base);
	// frsp f3,f1
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = double(float(ctx.f1.f64));
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r27
	ctx.ctr.u64 = ctx.r27.u64;
	// fctiwz f2,f3
	ctx.f2.s64 = (ctx.f3.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f3.f64));
	// stfd f2,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f2.u64);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bctrl 
	ctx.lr = 0x82363F14;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,20660(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20660);
	// stfs f31,136(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 136, temp.u32);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// beq cr6,0x82363f2c
	if (ctx.cr6.eq) goto loc_82363F2C;
	// stw r29,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r29.u32);
loc_82363F2C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82363E28) {
	__imp__sub_82363E28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82363F38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf68
	ctx.lr = 0x82363F40;
	__savegprlr_24(ctx, base);
	// stfd f29,-96(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.f29.u64);
	// stfd f30,-88(r1)
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f30.u64);
	// stfd f31,-80(r1)
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r10
	ctx.r24.u64 = ctx.r10.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lis r11,-31809
	ctx.r11.s64 = -2084634624;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// lis r10,0
	ctx.r10.s64 = 0;
	// fmr f29,f3
	ctx.f29.f64 = ctx.f3.f64;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// addi r29,r11,-12528
	ctx.r29.s64 = ctx.r11.s64 + -12528;
	// ori r9,r10,35232
	ctx.r9.u64 = ctx.r10.u64 | 35232;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// li r30,8
	ctx.r30.s64 = 8;
	// lwzx r11,r29,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r9.u32);
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// cmpwi cr6,r8,8
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 8, ctx.xer);
	// ble cr6,0x82364010
	if (!ctx.cr6.gt) goto loc_82364010;
	// addi r31,r29,27604
	ctx.r31.s64 = ctx.r29.s64 + 27604;
loc_82363F98:
	// lwz r10,-108(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -108);
	// cmpw cr6,r10,r26
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r26.s32, ctx.xer);
	// bne cr6,0x82363ffc
	if (!ctx.cr6.eq) goto loc_82363FFC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82304498
	ctx.lr = 0x82363FAC;
	sub_82304498(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82363ff0
	if (!ctx.cr6.eq) goto loc_82363FF0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82363ff0
	if (ctx.cr6.eq) goto loc_82363FF0;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82363ff0
	if (!ctx.cr6.eq) goto loc_82363FF0;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82364154
	if (ctx.cr6.eq) goto loc_82364154;
loc_82363FF0:
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r10,r11,35232
	ctx.r10.u64 = ctx.r11.u64 | 35232;
	// lwzx r11,r29,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r10.u32);
loc_82363FFC:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// addi r31,r31,176
	ctx.r31.s64 = ctx.r31.s64 + 176;
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82363f98
	if (ctx.cr6.lt) goto loc_82363F98;
loc_82364010:
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
	// ori r10,r11,35228
	ctx.r10.u64 = ctx.r11.u64 | 35228;
	// lwzx r11,r29,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r10.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823640a0
	if (!ctx.cr6.gt) goto loc_823640A0;
	// addi r31,r29,26196
	ctx.r31.s64 = ctx.r29.s64 + 26196;
loc_8236402C:
	// lwz r10,-108(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -108);
	// cmpw cr6,r10,r26
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r26.s32, ctx.xer);
	// bne cr6,0x82364090
	if (!ctx.cr6.eq) goto loc_82364090;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823043a8
	ctx.lr = 0x82364040;
	sub_823043A8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82364084
	if (!ctx.cr6.eq) goto loc_82364084;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82364084
	if (ctx.cr6.eq) goto loc_82364084;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82364084
	if (!ctx.cr6.eq) goto loc_82364084;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82364198
	if (ctx.cr6.eq) goto loc_82364198;
loc_82364084:
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r10,r11,35228
	ctx.r10.u64 = ctx.r11.u64 | 35228;
	// lwzx r11,r29,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r10.u32);
loc_82364090:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,176
	ctx.r31.s64 = ctx.r31.s64 + 176;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8236402c
	if (ctx.cr6.lt) goto loc_8236402C;
loc_823640A0:
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r30,40
	ctx.r30.s64 = 40;
	// ori r10,r11,35236
	ctx.r10.u64 = ctx.r11.u64 | 35236;
	// lwzx r11,r29,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r10.u32);
	// addi r9,r11,40
	ctx.r9.s64 = ctx.r11.s64 + 40;
	// cmpwi cr6,r9,40
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 40, ctx.xer);
	// ble cr6,0x8236413c
	if (!ctx.cr6.gt) goto loc_8236413C;
	// addis r10,r29,1
	ctx.r10.s64 = ctx.r29.s64 + 65536;
	// addi r31,r10,-32300
	ctx.r31.s64 = ctx.r10.s64 + -32300;
loc_823640C4:
	// lwz r10,-108(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -108);
	// cmpw cr6,r10,r26
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r26.s32, ctx.xer);
	// bne cr6,0x82364128
	if (!ctx.cr6.eq) goto loc_82364128;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823045f8
	ctx.lr = 0x823640D8;
	sub_823045F8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8236411c
	if (!ctx.cr6.eq) goto loc_8236411C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8236411c
	if (ctx.cr6.eq) goto loc_8236411C;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8236411c
	if (!ctx.cr6.eq) goto loc_8236411C;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x823641d0
	if (ctx.cr6.eq) goto loc_823641D0;
loc_8236411C:
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r10,r11,35236
	ctx.r10.u64 = ctx.r11.u64 | 35236;
	// lwzx r11,r29,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r10.u32);
loc_82364128:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r10,r11,40
	ctx.r10.s64 = ctx.r11.s64 + 40;
	// addi r31,r31,176
	ctx.r31.s64 = ctx.r31.s64 + 176;
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x823640c4
	if (ctx.cr6.lt) goto loc_823640C4;
loc_8236413C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f29,-96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f30,-88(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f31,-80(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
loc_82364154:
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// fmr f3,f29
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f29.f64;
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// addi r8,r11,19472
	ctx.r8.s64 = ctx.r11.s64 + 19472;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82363e28
	ctx.lr = 0x82364174;
	sub_82363E28(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823042a8
	ctx.lr = 0x82364180;
	sub_823042A8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f29,-96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f30,-88(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f31,-80(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
loc_82364198:
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// fmr f3,f29
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f29.f64;
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// addi r8,r11,19344
	ctx.r8.s64 = ctx.r11.s64 + 19344;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82363e28
	ctx.lr = 0x823641B8;
	sub_82363E28(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f29,-96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f30,-88(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f31,-80(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
loc_823641D0:
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// fmr f3,f29
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f29.f64;
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// addi r8,r11,19600
	ctx.r8.s64 = ctx.r11.s64 + 19600;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82363e28
	ctx.lr = 0x823641F0;
	sub_82363E28(ctx, base);
	// mulli r10,r30,176
	ctx.r10.s64 = ctx.r30.s64 * 176;
	// lfs f0,0(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r29,26216
	ctx.r11.s64 = ctx.r29.s64 + 26216;
	// li r3,1
	ctx.r3.s64 = 1;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f13,4(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f12,8(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f29,-96(r1)
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f30,-88(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f31,-80(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82363F38) {
	__imp__sub_82363F38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236422C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8236422C) {
	__imp__sub_8236422C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82364230) {
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
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x8236425c
	if (!ctx.cr6.eq) goto loc_8236425C;
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
loc_8236425C:
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x8236427c
	if (!ctx.cr6.eq) goto loc_8236427C;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// bl 0x822ebcb0
	ctx.lr = 0x8236426C;
	sub_822EBCB0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8236427C:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r3,r10,13600
	ctx.r3.s64 = ctx.r10.s64 + 13600;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x822e8058
	ctx.lr = 0x82364290;
	sub_822E8058(ctx, base);
	// cntlzw r9,r3
	ctx.r9.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r3,r9,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82364230) {
	__imp__sub_82364230(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823642A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x823642B0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,56(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// lis r11,-31809
	ctx.r11.s64 = -2084634624;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// srawi r10,r29,9
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x1FF) != 0);
	ctx.r10.s64 = ctx.r29.s32 >> 9;
	// addi r30,r11,-12528
	ctx.r30.s64 = ctx.r11.s64 + -12528;
	// clrlwi r11,r10,26
	ctx.r11.u64 = ctx.r10.u32 & 0x3F;
	// addi r9,r30,20756
	ctx.r9.s64 = ctx.r30.s64 + 20756;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r7,r8,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// lbzx r6,r7,r9
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r9.u32);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x82364304
	if (!ctx.cr6.eq) goto loc_82364304;
	// rlwinm r11,r29,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x40;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82364304
	if (!ctx.cr6.eq) goto loc_82364304;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_82364304:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,48(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f0,f1
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// lfs f13,44(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f11,f13,f1
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f1.f64));
	// lfs f10,48(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,44(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	ctx.f9.f64 = double(temp.f32);
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// lfs f0,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f8,f0,f1
	ctx.f8.f64 = double(float(ctx.f0.f64 - ctx.f1.f64));
	// fmadds f3,f10,f8,f12
	ctx.f3.f64 = double(float(ctx.f10.f64 * ctx.f8.f64 + ctx.f12.f64));
	// fmadds f4,f9,f8,f11
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f8.f64 + ctx.f11.f64));
	// bl 0x823627e8
	ctx.lr = 0x82364338;
	sub_823627E8(ctx, base);
	// mulli r10,r3,60
	ctx.r10.s64 = ctx.r3.s64 * 60;
	// lfs f7,8(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// addi r11,r30,20476
	ctx.r11.s64 = ctx.r30.s64 + 20476;
	// rlwinm r9,r29,0,25,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x40;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lfs f2,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// fsubs f1,f2,f7
	ctx.f1.f64 = double(float(ctx.f2.f64 - ctx.f7.f64));
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f0,f6
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f6.f64));
	// lfs f12,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f12,f5
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f5.f64));
	// fmuls f10,f1,f1
	ctx.f10.f64 = double(float(ctx.f1.f64 * ctx.f1.f64));
	// fmadds f9,f13,f13,f10
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f10.f64));
	// fmadds f0,f11,f11,f9
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f9.f64));
	// beq cr6,0x8236438c
	if (ctx.cr6.eq) goto loc_8236438C;
	// fmuls f13,f4,f4
	ctx.f13.f64 = double(float(ctx.f4.f64 * ctx.f4.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x823643b0
	if (ctx.cr6.lt) goto loc_823643B0;
loc_8236438C:
	// fmuls f13,f3,f3
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f3.f64 * ctx.f3.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x823643b0
	if (ctx.cr6.gt) goto loc_823643B0;
	// addi r11,r30,20524
	ctx.r11.s64 = ctx.r30.s64 + 20524;
	// lfs f0,52(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// lfsx f13,r10,r11
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x823643b4
	if (!ctx.cr6.lt) goto loc_823643B4;
loc_823643B0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_823643B4:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823642A8) {
	__imp__sub_823642A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823643C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x823643C8;
	__savegprlr_26(ctx, base);
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x823de028
	ctx.lr = 0x823643D0;
	__savefpr_28(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// fmr f29,f3
	ctx.f29.f64 = ctx.f3.f64;
	// mr r27,r9
	ctx.r27.u64 = ctx.r9.u64;
	// mr r26,r10
	ctx.r26.u64 = ctx.r10.u64;
	// fmr f28,f4
	ctx.f28.f64 = ctx.f4.f64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82364548
	if (ctx.cr6.eq) goto loc_82364548;
	// bl 0x822ddd08
	ctx.lr = 0x82364408;
	sub_822DDD08(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82364438
	if (!ctx.cr6.eq) goto loc_82364438;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r3,9
	ctx.r3.s64 = 9;
	// addi r4,r11,2904
	ctx.r4.s64 = ctx.r11.s64 + 2904;
	// bl 0x82280b08
	ctx.lr = 0x82364428;
	sub_82280B08(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x823de074
	ctx.lr = 0x82364434;
	__restfpr_28(ctx, base);
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_82364438:
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82364488
	if (!ctx.cr6.eq) goto loc_82364488;
	// lwz r10,56(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82364480
	if (ctx.cr6.eq) goto loc_82364480;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r3,9
	ctx.r3.s64 = 9;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r11,2808
	ctx.r4.s64 = ctx.r11.s64 + 2808;
	// bl 0x82280b08
	ctx.lr = 0x82364470;
	sub_82280B08(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x823de074
	ctx.lr = 0x8236447C;
	__restfpr_28(ctx, base);
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_82364480:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823644d4
	if (ctx.cr6.eq) goto loc_823644D4;
loc_82364488:
	// lwz r11,56(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x823644d4
	if (ctx.cr6.eq) goto loc_823644D4;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x822ddd30
	ctx.lr = 0x823644A0;
	sub_822DDD30(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823644d4
	if (!ctx.cr6.eq) goto loc_823644D4;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r3,9
	ctx.r3.s64 = 9;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r11,2680
	ctx.r4.s64 = ctx.r11.s64 + 2680;
	// bl 0x82280b08
	ctx.lr = 0x823644C4;
	sub_82280B08(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x823de074
	ctx.lr = 0x823644D0;
	__restfpr_28(ctx, base);
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_823644D4:
	// lwz r11,308(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// ble cr6,0x8236450c
	if (!ctx.cr6.gt) goto loc_8236450C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r5,10
	ctx.r5.s64 = 10;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r11,2568
	ctx.r4.s64 = ctx.r11.s64 + 2568;
	// li r3,9
	ctx.r3.s64 = 9;
	// bl 0x82280b08
	ctx.lr = 0x823644FC;
	sub_82280B08(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x823de074
	ctx.lr = 0x82364508;
	__restfpr_28(ctx, base);
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_8236450C:
	// lwz r7,300(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 300);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// fmr f4,f28
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f28.f64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stb r26,95(r1)
	PPC_STORE_U8(ctx.r1.u32 + 95, ctx.r26.u8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// stw r7,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r7.u32);
	// fmr f3,f29
	ctx.f3.f64 = ctx.f29.f64;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82364558
	ctx.lr = 0x82364548;
	sub_82364558(ctx, base);
loc_82364548:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x823de074
	ctx.lr = 0x82364554;
	__restfpr_28(ctx, base);
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823643C0) {
	__imp__sub_823643C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82364558) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf60
	ctx.lr = 0x82364560;
	__savegprlr_22(ctx, base);
	// addi r12,r1,-88
	ctx.r12.s64 = ctx.r1.s64 + -88;
	// bl 0x823de028
	ctx.lr = 0x82364568;
	__savefpr_28(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31809
	ctx.r11.s64 = -2084634624;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// addi r26,r11,-12528
	ctx.r26.s64 = ctx.r11.s64 + -12528;
	// fmr f29,f3
	ctx.f29.f64 = ctx.f3.f64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// fmr f28,f4
	ctx.f28.f64 = ctx.f4.f64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// lbz r11,-12528(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + -12528);
	// mr r30,r9
	ctx.r30.u64 = ctx.r9.u64;
	// mr r25,r10
	ctx.r25.u64 = ctx.r10.u64;
	// li r28,-1
	ctx.r28.s64 = -1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823645bc
	if (!ctx.cr6.eq) goto loc_823645BC;
loc_823645A8:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// addi r12,r1,-88
	ctx.r12.s64 = ctx.r1.s64 + -88;
	// bl 0x823de074
	ctx.lr = 0x823645B8;
	__restfpr_28(ctx, base);
	// b 0x823ddfb0
	__restgprlr_22(ctx, base);
	return;
loc_823645BC:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x823645cc
	if (ctx.cr6.eq) goto loc_823645CC;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
loc_823645CC:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823642a8
	ctx.lr = 0x823645E0;
	sub_823642A8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// lwz r24,412(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 412);
	// lbz r23,399(r1)
	ctx.r23.u64 = PPC_LOAD_U8(ctx.r1.u32 + 399);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r22,388(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 388);
	// beq cr6,0x823647a8
	if (ctx.cr6.eq) goto loc_823647A8;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// fmr f3,f29
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f29.f64;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82363f38
	ctx.lr = 0x82364618;
	sub_82363F38(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82364674
	if (ctx.cr6.eq) goto loc_82364674;
	// lwz r9,420(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 420);
	// rotlwi r11,r24,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r24.u32, 0);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// fmr f4,f28
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f28.f64;
	// addi r6,r9,1
	ctx.r6.s64 = ctx.r9.s64 + 1;
	// fmr f3,f29
	ctx.f3.f64 = ctx.f29.f64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r6,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// clrlwi r10,r23,24
	ctx.r10.u64 = ctx.r23.u32 & 0xFF;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// rotlwi r9,r22,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r22.u32, 0);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x823643c0
	ctx.lr = 0x82364660;
	sub_823643C0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// addi r12,r1,-88
	ctx.r12.s64 = ctx.r1.s64 + -88;
	// bl 0x823de074
	ctx.lr = 0x82364670;
	__restfpr_28(ctx, base);
	// b 0x823ddfb0
	__restgprlr_22(ctx, base);
	return;
loc_82364674:
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r10,r26,20757
	ctx.r10.s64 = ctx.r26.s64 + 20757;
	// srawi r9,r11,9
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1FF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 9;
	// clrlwi r28,r9,26
	ctx.r28.u64 = ctx.r9.u32 & 0x3F;
	// rlwinm r11,r28,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r28,r11
	ctx.r8.u64 = ctx.r28.u64 + ctx.r11.u64;
	// rlwinm r7,r8,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// lbzx r6,r7,r10
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r10.u32);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x823646a8
	if (ctx.cr6.eq) goto loc_823646A8;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823637a0
	ctx.lr = 0x823646A8;
	sub_823637A0(ctx, base);
loc_823646A8:
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x82364230
	ctx.lr = 0x823646B0;
	sub_82364230(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823645a8
	if (!ctx.cr6.eq) goto loc_823645A8;
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f30.f64;
	// addi r7,r1,140
	ctx.r7.s64 = ctx.r1.s64 + 140;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82363d58
	ctx.lr = 0x823646D4;
	sub_82363D58(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r9,76(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// clrlwi r10,r23,24
	ctx.r10.u64 = ctx.r23.u32 & 0xFF;
	// lfs f13,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// lfs f11,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// lfs f10,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lfs f0,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// stw r27,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r27.u32);
	// stfs f0,152(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stw r22,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r22.u32);
	// stfs f31,120(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stw r9,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r9.u32);
	// stfs f13,128(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f11,132(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f10,136(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// lfs f0,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f0,f29
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f29.f64));
	// stfs f12,144(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// bne cr6,0x82364740
	if (!ctx.cr6.eq) goto loc_82364740;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82364744
	if (ctx.cr6.eq) goto loc_82364744;
loc_82364740:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82364744:
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// rlwinm r9,r28,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r26,25816
	ctx.r8.s64 = ctx.r26.s64 + 25816;
	// stw r24,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r24.u32);
	// srawi r7,r10,7
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7F) != 0);
	ctx.r7.s64 = ctx.r10.s32 >> 7;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// clrlwi r11,r7,30
	ctx.r11.u64 = ctx.r7.u32 & 0x3;
	// stb r6,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r6.u8);
	// lfsx f0,r9,r8
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	ctx.f0.f64 = double(temp.f32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// fmuls f13,f0,f28
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f28.f64));
	// stfs f13,164(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// beq cr6,0x82364798
	if (ctx.cr6.eq) goto loc_82364798;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82364788
	if (ctx.cr6.eq) goto loc_82364788;
	// li r28,-1
	ctx.r28.s64 = -1;
	// b 0x823647a8
	goto loc_823647A8;
loc_82364788:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82363a70
	ctx.lr = 0x82364794;
	sub_82363A70(ctx, base);
	// b 0x823647a4
	goto loc_823647A4;
loc_82364798:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82363920
	ctx.lr = 0x823647A4;
	sub_82363920(ctx, base);
loc_823647A4:
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
loc_823647A8:
	// lwz r11,420(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 420);
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// mr r9,r22
	ctx.r9.u64 = ctx.r22.u64;
	// stw r24,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r24.u32);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// fmr f4,f28
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f28.f64;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// fmr f3,f29
	ctx.f3.f64 = ctx.f29.f64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// stw r6,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x823643c0
	ctx.lr = 0x823647E0;
	sub_823643C0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// addi r12,r1,-88
	ctx.r12.s64 = ctx.r1.s64 + -88;
	// bl 0x823de074
	ctx.lr = 0x823647F0;
	__restfpr_28(ctx, base);
	// b 0x823ddfb0
	__restgprlr_22(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82364558) {
	__imp__sub_82364558(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823647F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823647F4) {
	__imp__sub_823647F4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823647F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x82364800;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31809
	ctx.r11.s64 = -2084634624;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r29,r11,-12528
	ctx.r29.s64 = ctx.r11.s64 + -12528;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r30,r29,26144
	ctx.r30.s64 = ctx.r29.s64 + 26144;
loc_8236481C:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x82364844
	if (ctx.cr6.lt) goto loc_82364844;
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r10,r11,35228
	ctx.r10.u64 = ctx.r11.u64 | 35228;
	// lwzx r9,r29,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r10.u32);
	// cmpw cr6,r31,r9
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x82364844
	if (!ctx.cr6.lt) goto loc_82364844;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823043a8
	ctx.lr = 0x82364840;
	sub_823043A8(ctx, base);
	// b 0x82364898
	goto loc_82364898;
loc_82364844:
	// cmpwi cr6,r31,8
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 8, ctx.xer);
	// blt cr6,0x82364870
	if (ctx.cr6.lt) goto loc_82364870;
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r10,r11,35232
	ctx.r10.u64 = ctx.r11.u64 | 35232;
	// lwzx r11,r29,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r10.u32);
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// cmpw cr6,r31,r9
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x82364870
	if (!ctx.cr6.lt) goto loc_82364870;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82304498
	ctx.lr = 0x8236486C;
	sub_82304498(ctx, base);
	// b 0x82364898
	goto loc_82364898;
loc_82364870:
	// cmpwi cr6,r31,40
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 40, ctx.xer);
	// blt cr6,0x823648f8
	if (ctx.cr6.lt) goto loc_823648F8;
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r10,r11,35236
	ctx.r10.u64 = ctx.r11.u64 | 35236;
	// lwzx r11,r29,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r10.u32);
	// addi r9,r11,40
	ctx.r9.s64 = ctx.r11.s64 + 40;
	// cmpw cr6,r31,r9
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x823648f8
	if (!ctx.cr6.lt) goto loc_823648F8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823045f8
	ctx.lr = 0x82364898;
	sub_823045F8(ctx, base);
loc_82364898:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823648f8
	if (!ctx.cr6.eq) goto loc_823648F8;
	// lwz r8,40(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x823648f8
	if (!ctx.cr6.gt) goto loc_823648F8;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// addi r11,r30,-16
	ctx.r11.s64 = ctx.r30.s64 + -16;
loc_823648BC:
	// lwz r7,-16(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x823648e4
	if (!ctx.cr6.eq) goto loc_823648E4;
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r7,r28
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x823648e4
	if (!ctx.cr6.eq) goto loc_823648E4;
	// lhz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// clrlwi r6,r27,16
	ctx.r6.u64 = ctx.r27.u32 & 0xFFFF;
	// cmplw cr6,r5,r6
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x8236491c
	if (ctx.cr6.eq) goto loc_8236491C;
loc_823648E4:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x823648bc
	if (ctx.cr6.lt) goto loc_823648BC;
loc_823648F8:
	// addis r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 65536;
	// addi r30,r30,176
	ctx.r30.s64 = ctx.r30.s64 + 176;
	// addi r11,r11,-30240
	ctx.r11.s64 = ctx.r11.s64 + -30240;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8236481c
	if (ctx.cr6.lt) goto loc_8236481C;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_8236491C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823647F8) {
	__imp__sub_823647F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82364928) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x82364930;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31809
	ctx.r11.s64 = -2084634624;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// addi r29,r11,-12528
	ctx.r29.s64 = ctx.r11.s64 + -12528;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// lbz r11,-12528(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + -12528);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82364aa4
	if (ctx.cr6.eq) goto loc_82364AA4;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r30,r29,26196
	ctx.r30.s64 = ctx.r29.s64 + 26196;
loc_82364960:
	// lwz r11,-108(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -108);
	// cmpw cr6,r11,r25
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r25.s32, ctx.xer);
	// bne cr6,0x82364a8c
	if (!ctx.cr6.eq) goto loc_82364A8C;
	// cmpwi cr6,r26,-1
	ctx.cr6.compare<int32_t>(ctx.r26.s32, -1, ctx.xer);
	// beq cr6,0x82364980
	if (ctx.cr6.eq) goto loc_82364980;
	// lwz r11,-104(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -104);
	// cmpw cr6,r11,r26
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r26.s32, ctx.xer);
	// bne cr6,0x82364a8c
	if (!ctx.cr6.eq) goto loc_82364A8C;
loc_82364980:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x823649bc
	if (ctx.cr6.lt) goto loc_823649BC;
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r10,r11,35228
	ctx.r10.u64 = ctx.r11.u64 | 35228;
	// lwzx r9,r29,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r10.u32);
	// cmpw cr6,r31,r9
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x823649bc
	if (!ctx.cr6.lt) goto loc_823649BC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823043a8
	ctx.lr = 0x823649A4;
	sub_823043A8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82364a8c
	if (!ctx.cr6.eq) goto loc_82364A8C;
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// addi r28,r11,17112
	ctx.r28.s64 = ctx.r11.s64 + 17112;
	// b 0x82364a38
	goto loc_82364A38;
loc_823649BC:
	// cmpwi cr6,r31,8
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 8, ctx.xer);
	// blt cr6,0x823649fc
	if (ctx.cr6.lt) goto loc_823649FC;
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r10,r11,35232
	ctx.r10.u64 = ctx.r11.u64 | 35232;
	// lwzx r11,r29,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r10.u32);
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// cmpw cr6,r31,r9
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x823649fc
	if (!ctx.cr6.lt) goto loc_823649FC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82304498
	ctx.lr = 0x823649E4;
	sub_82304498(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82364a8c
	if (!ctx.cr6.eq) goto loc_82364A8C;
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// addi r28,r11,17352
	ctx.r28.s64 = ctx.r11.s64 + 17352;
	// b 0x82364a38
	goto loc_82364A38;
loc_823649FC:
	// cmpwi cr6,r31,40
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 40, ctx.xer);
	// blt cr6,0x82364a38
	if (ctx.cr6.lt) goto loc_82364A38;
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r10,r11,35236
	ctx.r10.u64 = ctx.r11.u64 | 35236;
	// lwzx r11,r29,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r10.u32);
	// addi r9,r11,40
	ctx.r9.s64 = ctx.r11.s64 + 40;
	// cmpw cr6,r31,r9
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x82364a38
	if (!ctx.cr6.lt) goto loc_82364A38;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823045f8
	ctx.lr = 0x82364A24;
	sub_823045F8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82364a8c
	if (!ctx.cr6.eq) goto loc_82364A8C;
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// addi r28,r11,17592
	ctx.r28.s64 = ctx.r11.s64 + 17592;
loc_82364A38:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82364a80
	if (ctx.cr6.eq) goto loc_82364A80;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82364a60
	if (ctx.cr6.eq) goto loc_82364A60;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x822e8058
	ctx.lr = 0x82364A58;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82364a80
	if (ctx.cr6.eq) goto loc_82364A80;
loc_82364A60:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82364a8c
	if (ctx.cr6.eq) goto loc_82364A8C;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x822e8058
	ctx.lr = 0x82364A78;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82364a8c
	if (!ctx.cr6.eq) goto loc_82364A8C;
loc_82364A80:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x82364A8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82364A8C:
	// addis r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 65536;
	// addi r30,r30,176
	ctx.r30.s64 = ctx.r30.s64 + 176;
	// addi r11,r11,-30188
	ctx.r11.s64 = ctx.r11.s64 + -30188;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82364960
	if (ctx.cr6.lt) goto loc_82364960;
loc_82364AA4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82364928) {
	__imp__sub_82364928(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82364AAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82364AAC) {
	__imp__sub_82364AAC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82364AB0) {
	PPC_FUNC_PROLOGUE();
	// li r5,-1
	ctx.r5.s64 = -1;
	// b 0x82364928
	sub_82364928(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82364AB0) {
	__imp__sub_82364AB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82364AB8) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82364928
	sub_82364928(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82364AB8) {
	__imp__sub_82364AB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82364AC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82364AC4) {
	__imp__sub_82364AC4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82364AC8) {
	PPC_FUNC_PROLOGUE();
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82364928
	sub_82364928(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82364AC8) {
	__imp__sub_82364AC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82364AD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82364AD4) {
	__imp__sub_82364AD4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82364AD8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31809
	ctx.r10.s64 = -2084634624;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,23876(r10)
	PPC_STORE_U32(ctx.r10.u32 + 23876, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82364AD8) {
	__imp__sub_82364AD8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82364AE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31809
	ctx.r11.s64 = -2084634624;
	// addi r10,r11,23232
	ctx.r10.s64 = ctx.r11.s64 + 23232;
	// lwz r11,644(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 644);
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// bne cr6,0x82364b10
	if (!ctx.cr6.eq) goto loc_82364B10;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r5,32
	ctx.r5.s64 = 32;
	// addi r4,r11,2940
	ctx.r4.s64 = ctx.r11.s64 + 2940;
	// li r3,20
	ctx.r3.s64 = 20;
	// b 0x82280b08
	sub_82280B08(ctx, base);
	return;
loc_82364B10:
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,644(r10)
	PPC_STORE_U32(ctx.r10.u32 + 644, ctx.r11.u32);
	// add r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stwx r3,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r3.u32);
	// stw r4,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r4.u32);
	// lwz r8,0(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// stw r8,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// lwz r7,4(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// stw r7,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r7.u32);
	// lwz r6,8(r5)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// stw r6,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r6.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82364AE8) {
	__imp__sub_82364AE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82364B4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82364B4C) {
	__imp__sub_82364B4C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82364B50) {
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
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82364b80
	if (!ctx.cr6.eq) goto loc_82364B80;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82364B80:
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// stw r7,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r7.u32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// lfs f4,12168(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12168);
	ctx.f4.f64 = double(temp.f32);
	// stb r11,95(r1)
	PPC_STORE_U8(ctx.r1.u32 + 95, ctx.r11.u8);
	// lfs f1,5484(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 5484);
	ctx.f1.f64 = double(temp.f32);
	// fmr f3,f4
	ctx.f3.f64 = ctx.f4.f64;
	// fmr f2,f4
	ctx.f2.f64 = ctx.f4.f64;
	// bl 0x82364558
	ctx.lr = 0x82364BB8;
	sub_82364558(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82364B50) {
	__imp__sub_82364B50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82364BC8) {
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
	// fmr f3,f2
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f2.f64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82364bfc
	if (!ctx.cr6.eq) goto loc_82364BFC;
	// li r3,-1
	ctx.r3.s64 = -1;
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
loc_82364BFC:
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// lis r31,-32256
	ctx.r31.s64 = -2113929216;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// fmr f2,f1
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f1.f64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// lfs f4,12168(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12168);
	ctx.f4.f64 = double(temp.f32);
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// lfs f1,5484(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 5484);
	ctx.f1.f64 = double(temp.f32);
	// stb r11,95(r1)
	PPC_STORE_U8(ctx.r1.u32 + 95, ctx.r11.u8);
	// bl 0x82364558
	ctx.lr = 0x82364C38;
	sub_82364558(ctx, base);
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

PPC_WEAK_FUNC(sub_82364BC8) {
	__imp__sub_82364BC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82364C4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82364C4C) {
	__imp__sub_82364C4C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82364C50) {
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
	// fmr f3,f1
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f1.f64;
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82364c80
	if (!ctx.cr6.eq) goto loc_82364C80;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82364C80:
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// lfs f1,5484(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 5484);
	ctx.f1.f64 = double(temp.f32);
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// lfs f4,12168(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 12168);
	ctx.f4.f64 = double(temp.f32);
	// stb r11,95(r1)
	PPC_STORE_U8(ctx.r1.u32 + 95, ctx.r11.u8);
	// fmr f2,f4
	ctx.f2.f64 = ctx.f4.f64;
	// bl 0x82364558
	ctx.lr = 0x82364CB8;
	sub_82364558(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82364C50) {
	__imp__sub_82364C50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82364CC8) {
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
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82364cf8
	if (!ctx.cr6.eq) goto loc_82364CF8;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82364CF8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r7,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r7.u32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r6,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r6.u32);
	// lfs f4,12168(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f4.f64 = double(temp.f32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lfs f1,5484(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 5484);
	ctx.f1.f64 = double(temp.f32);
	// stb r5,95(r1)
	PPC_STORE_U8(ctx.r1.u32 + 95, ctx.r5.u8);
	// fmr f3,f4
	ctx.f3.f64 = ctx.f4.f64;
	// fmr f2,f4
	ctx.f2.f64 = ctx.f4.f64;
	// bl 0x82364558
	ctx.lr = 0x82364D34;
	sub_82364558(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82364CC8) {
	__imp__sub_82364CC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82364D44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82364D44) {
	__imp__sub_82364D44(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82364D48) {
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
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x82364d74
	if (!ctx.cr6.eq) goto loc_82364D74;
loc_82364D60:
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
loc_82364D74:
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r9,20(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82364da0
	if (ctx.cr6.eq) goto loc_82364DA0;
	// clrlwi r10,r5,24
	ctx.r10.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8236507c
	if (ctx.cr6.eq) goto loc_8236507C;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lwz r6,0(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r4,r10,4536
	ctx.r4.s64 = ctx.r10.s64 + 4536;
	// b 0x82365070
	goto loc_82365070;
loc_82364DA0:
	// lfs f0,52(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,52(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x82364dcc
	if (ctx.cr6.eq) goto loc_82364DCC;
	// clrlwi r10,r5,24
	ctx.r10.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8236507c
	if (ctx.cr6.eq) goto loc_8236507C;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lwz r6,0(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r4,r10,4432
	ctx.r4.s64 = ctx.r10.s64 + 4432;
	// b 0x82365070
	goto loc_82365070;
loc_82364DCC:
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// lwz r9,80(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 80);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82364df8
	if (ctx.cr6.eq) goto loc_82364DF8;
	// clrlwi r10,r5,24
	ctx.r10.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8236507c
	if (ctx.cr6.eq) goto loc_8236507C;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lwz r6,0(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r4,r10,4320
	ctx.r4.s64 = ctx.r10.s64 + 4320;
	// b 0x82365070
	goto loc_82365070;
loc_82364DF8:
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// lwz r9,96(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 96);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82364e24
	if (ctx.cr6.eq) goto loc_82364E24;
	// clrlwi r10,r5,24
	ctx.r10.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8236507c
	if (ctx.cr6.eq) goto loc_8236507C;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lwz r6,0(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r4,r10,4224
	ctx.r4.s64 = ctx.r10.s64 + 4224;
	// b 0x82365070
	goto loc_82365070;
loc_82364E24:
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// lwz r9,56(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 56);
	// clrlwi r8,r10,31
	ctx.r8.u64 = ctx.r10.u32 & 0x1;
	// clrlwi r7,r9,31
	ctx.r7.u64 = ctx.r9.u32 & 0x1;
	// cmpw cr6,r8,r7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, ctx.xer);
	// beq cr6,0x82364e58
	if (ctx.cr6.eq) goto loc_82364E58;
	// clrlwi r10,r5,24
	ctx.r10.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8236507c
	if (ctx.cr6.eq) goto loc_8236507C;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lwz r6,0(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r4,r10,4120
	ctx.r4.s64 = ctx.r10.s64 + 4120;
	// b 0x82365070
	goto loc_82365070;
loc_82364E58:
	// xor r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// rlwinm r6,r7,0,23,24
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x180;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x82364e84
	if (ctx.cr6.eq) goto loc_82364E84;
	// clrlwi r10,r5,24
	ctx.r10.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8236507c
	if (ctx.cr6.eq) goto loc_8236507C;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lwz r6,0(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r4,r10,4016
	ctx.r4.s64 = ctx.r10.s64 + 4016;
	// b 0x82365070
	goto loc_82365070;
loc_82364E84:
	// xor r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// rlwinm r6,r7,0,17,22
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x7E00;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x82364eb0
	if (ctx.cr6.eq) goto loc_82364EB0;
	// clrlwi r10,r5,24
	ctx.r10.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8236507c
	if (ctx.cr6.eq) goto loc_8236507C;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lwz r6,0(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r4,r10,3920
	ctx.r4.s64 = ctx.r10.s64 + 3920;
	// b 0x82365070
	goto loc_82365070;
loc_82364EB0:
	// xor r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// rlwinm r6,r7,0,30,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x82364edc
	if (ctx.cr6.eq) goto loc_82364EDC;
	// clrlwi r10,r5,24
	ctx.r10.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8236507c
	if (ctx.cr6.eq) goto loc_8236507C;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lwz r6,0(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r4,r10,3824
	ctx.r4.s64 = ctx.r10.s64 + 3824;
	// b 0x82365070
	goto loc_82365070;
loc_82364EDC:
	// xor r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// rlwinm r6,r7,0,29,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x82364f08
	if (ctx.cr6.eq) goto loc_82364F08;
	// clrlwi r10,r5,24
	ctx.r10.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8236507c
	if (ctx.cr6.eq) goto loc_8236507C;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lwz r6,0(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r4,r10,3728
	ctx.r4.s64 = ctx.r10.s64 + 3728;
	// b 0x82365070
	goto loc_82365070;
loc_82364F08:
	// xor r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// rlwinm r6,r7,0,28,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x8;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x82364f34
	if (ctx.cr6.eq) goto loc_82364F34;
	// clrlwi r10,r5,24
	ctx.r10.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8236507c
	if (ctx.cr6.eq) goto loc_8236507C;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lwz r6,0(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r4,r10,3624
	ctx.r4.s64 = ctx.r10.s64 + 3624;
	// b 0x82365070
	goto loc_82365070;
loc_82364F34:
	// xor r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// rlwinm r9,r10,0,27,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82364f60
	if (ctx.cr6.eq) goto loc_82364F60;
	// clrlwi r10,r5,24
	ctx.r10.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8236507c
	if (ctx.cr6.eq) goto loc_8236507C;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lwz r6,0(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r4,r10,3520
	ctx.r4.s64 = ctx.r10.s64 + 3520;
	// b 0x82365070
	goto loc_82365070;
loc_82364F60:
	// lfs f0,60(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,60(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 60);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x82364f8c
	if (ctx.cr6.eq) goto loc_82364F8C;
	// clrlwi r10,r5,24
	ctx.r10.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8236507c
	if (ctx.cr6.eq) goto loc_8236507C;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lwz r6,0(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r4,r10,3416
	ctx.r4.s64 = ctx.r10.s64 + 3416;
	// b 0x82365070
	goto loc_82365070;
loc_82364F8C:
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// lwz r9,76(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 76);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x82364fb8
	if (ctx.cr6.eq) goto loc_82364FB8;
	// clrlwi r10,r5,24
	ctx.r10.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8236507c
	if (ctx.cr6.eq) goto loc_8236507C;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lwz r6,0(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r4,r10,3312
	ctx.r4.s64 = ctx.r10.s64 + 3312;
	// b 0x82365070
	goto loc_82365070;
loc_82364FB8:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82365040
	if (ctx.cr6.eq) goto loc_82365040;
	// lfs f0,36(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,40(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x82364fe0
	if (!ctx.cr6.eq) goto loc_82364FE0;
	// lfs f0,36(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,40(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x82364ffc
	if (ctx.cr6.eq) goto loc_82364FFC;
loc_82364FE0:
	// clrlwi r10,r5,24
	ctx.r10.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8236507c
	if (ctx.cr6.eq) goto loc_8236507C;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lwz r6,0(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r4,r10,3192
	ctx.r4.s64 = ctx.r10.s64 + 3192;
	// b 0x82365070
	goto loc_82365070;
loc_82364FFC:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82365040
	if (ctx.cr6.eq) goto loc_82365040;
	// lfs f0,28(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x82365024
	if (!ctx.cr6.eq) goto loc_82365024;
	// lfs f0,28(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,32(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x82365040
	if (ctx.cr6.eq) goto loc_82365040;
loc_82365024:
	// clrlwi r10,r5,24
	ctx.r10.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8236507c
	if (ctx.cr6.eq) goto loc_8236507C;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lwz r6,0(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r4,r10,3072
	ctx.r4.s64 = ctx.r10.s64 + 3072;
	// b 0x82365070
	goto loc_82365070;
loc_82365040:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82365058
	if (!ctx.cr6.eq) goto loc_82365058;
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82364d60
	if (ctx.cr6.eq) goto loc_82364D60;
loc_82365058:
	// clrlwi r10,r5,24
	ctx.r10.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8236507c
	if (ctx.cr6.eq) goto loc_8236507C;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lwz r6,0(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r4,r10,2976
	ctx.r4.s64 = ctx.r10.s64 + 2976;
loc_82365070:
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x822830e8
	ctx.lr = 0x8236507C;
	sub_822830E8(ctx, base);
loc_8236507C:
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

PPC_WEAK_FUNC(sub_82364D48) {
	__imp__sub_82364D48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82365090) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x82365098;
	__savegprlr_26(ctx, base);
	// stfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f30.u64);
	// stfd f31,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// mr r27,r9
	ctx.r27.u64 = ctx.r9.u64;
	// mr r26,r10
	ctx.r26.u64 = ctx.r10.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8236512c
	if (ctx.cr6.eq) goto loc_8236512C;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8236512c
	if (ctx.cr6.eq) goto loc_8236512C;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82364d48
	ctx.lr = 0x823650DC;
	sub_82364D48(ctx, base);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r26,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r26.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// stb r11,95(r1)
	PPC_STORE_U8(ctx.r1.u32 + 95, ctx.r11.u8);
	// lfs f4,12168(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 12168);
	ctx.f4.f64 = double(temp.f32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// fmr f3,f4
	ctx.f3.f64 = ctx.f4.f64;
	// bl 0x82364558
	ctx.lr = 0x8236511C;
	sub_82364558(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_8236512C:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82365090) {
	__imp__sub_82365090(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82365140) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x82365148;
	__savegprlr_27(ctx, base);
	// stfd f29,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f29.u64);
	// stfd f30,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f30.u64);
	// stfd f31,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// fmr f29,f3
	ctx.f29.f64 = ctx.f3.f64;
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// mr r28,r9
	ctx.r28.u64 = ctx.r9.u64;
	// mr r27,r10
	ctx.r27.u64 = ctx.r10.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823651e8
	if (ctx.cr6.eq) goto loc_823651E8;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823651e8
	if (ctx.cr6.eq) goto loc_823651E8;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82364d48
	ctx.lr = 0x82365190;
	sub_82364D48(ctx, base);
	// lwz r6,276(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// fmr f3,f29
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f29.f64;
	// li r10,0
	ctx.r10.s64 = 0;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// stb r11,95(r1)
	PPC_STORE_U8(ctx.r1.u32 + 95, ctx.r11.u8);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lfs f4,12168(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 12168);
	ctx.f4.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r6,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r6.u32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82364558
	ctx.lr = 0x823651D4;
	sub_82364558(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
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
loc_823651E8:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
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

PPC_WEAK_FUNC(sub_82365140) {
	__imp__sub_82365140(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82365200) {
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
	// lis r6,-31809
	ctx.r6.s64 = -2084634624;
	// stw r5,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r5.u32);
	// mulli r9,r3,60
	ctx.r9.s64 = ctx.r3.s64 * 60;
	// addi r10,r6,-12528
	ctx.r10.s64 = ctx.r6.s64 + -12528;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// addi r10,r10,20476
	ctx.r10.s64 = ctx.r10.s64 + 20476;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f4,12168(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 12168);
	ctx.f4.f64 = double(temp.f32);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// lfs f1,5484(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 5484);
	ctx.f1.f64 = double(temp.f32);
	// lwz r8,52(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 52);
	// fmr f3,f4
	ctx.f3.f64 = ctx.f4.f64;
	// fmr f2,f4
	ctx.f2.f64 = ctx.f4.f64;
	// stb r11,95(r1)
	PPC_STORE_U8(ctx.r1.u32 + 95, ctx.r11.u8);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x82364558
	ctx.lr = 0x82365260;
	sub_82364558(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82365200) {
	__imp__sub_82365200(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82365270) {
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
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823652b8
	if (ctx.cr6.eq) goto loc_823652B8;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x822ddcf8
	ctx.lr = 0x8236529C;
	sub_822DDCF8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823652b8
	if (ctx.cr6.eq) goto loc_823652B8;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82365200
	ctx.lr = 0x823652B4;
	sub_82365200(ctx, base);
	// b 0x823652bc
	goto loc_823652BC;
loc_823652B8:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_823652BC:
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

PPC_WEAK_FUNC(sub_82365270) {
	__imp__sub_82365270(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823652D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823652D4) {
	__imp__sub_823652D4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823652D8) {
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
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82365320
	if (ctx.cr6.eq) goto loc_82365320;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x822ddd08
	ctx.lr = 0x82365304;
	sub_822DDD08(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82365320
	if (ctx.cr6.eq) goto loc_82365320;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82365200
	ctx.lr = 0x8236531C;
	sub_82365200(ctx, base);
	// b 0x82365324
	goto loc_82365324;
loc_82365320:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82365324:
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

PPC_WEAK_FUNC(sub_823652D8) {
	__imp__sub_823652D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236533C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8236533C) {
	__imp__sub_8236533C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82365340) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31809
	ctx.r10.s64 = -2084634624;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r9,r10,-12528
	ctx.r9.s64 = ctx.r10.s64 + -12528;
	// stw r11,25808(r9)
	PPC_STORE_U32(ctx.r9.u32 + 25808, ctx.r11.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,25812(r9)
	PPC_STORE_U32(ctx.r9.u32 + 25812, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82365340) {
	__imp__sub_82365340(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236535C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8236535C) {
	__imp__sub_8236535C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82365360) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31809
	ctx.r11.s64 = -2084634624;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-12528
	ctx.r11.s64 = ctx.r11.s64 + -12528;
	// addi r9,r11,25816
	ctx.r9.s64 = ctx.r11.s64 + 25816;
	// stfsx f1,r10,r9
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82365360) {
	__imp__sub_82365360(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82365378) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31809
	ctx.r11.s64 = -2084634624;
	// li r10,64
	ctx.r10.s64 = 64;
	// addi r11,r11,-12528
	ctx.r11.s64 = ctx.r11.s64 + -12528;
	// lis r9,16256
	ctx.r9.s64 = 1065353216;
	// addi r11,r11,25812
	ctx.r11.s64 = ctx.r11.s64 + 25812;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82365390:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82365390
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82365390;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82365378) {
	__imp__sub_82365378(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236539C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8236539C) {
	__imp__sub_8236539C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823653A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31809
	ctx.r11.s64 = -2084634624;
	// li r9,-1
	ctx.r9.s64 = -1;
	// addi r10,r11,-12528
	ctx.r10.s64 = ctx.r11.s64 + -12528;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r11,r10,25808
	ctx.r11.s64 = ctx.r10.s64 + 25808;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r6,r10,20838
	ctx.r6.s64 = ctx.r10.s64 + 20838;
	// stw r9,25808(r10)
	PPC_STORE_U32(ctx.r10.u32 + 25808, ctx.r9.u32);
	// stw r9,25812(r10)
	PPC_STORE_U32(ctx.r10.u32 + 25812, ctx.r9.u32);
loc_823653C4:
	// lbz r8,-80(r6)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r6.u32 + -80);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x823653ec
	if (!ctx.cr6.eq) goto loc_823653EC;
	// addi r8,r11,-2
	ctx.r8.s64 = ctx.r11.s64 + -2;
	// addi r9,r10,25808
	ctx.r9.s64 = ctx.r10.s64 + 25808;
	// srawi r5,r8,5
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1F) != 0);
	ctx.r5.s64 = ctx.r8.s32 >> 5;
	// rlwinm r8,r5,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r8,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// andc r3,r4,r7
	ctx.r3.u64 = ctx.r4.u64 & ~ctx.r7.u64;
	// stwx r3,r8,r9
	PPC_STORE_U32(ctx.r8.u32 + ctx.r9.u32, ctx.r3.u32);
loc_823653EC:
	// lbz r8,0(r6)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r6.u32 + 0);
	// rotlwi r7,r7,1
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 1);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82365418
	if (!ctx.cr6.eq) goto loc_82365418;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// addi r9,r10,25808
	ctx.r9.s64 = ctx.r10.s64 + 25808;
	// srawi r5,r8,5
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1F) != 0);
	ctx.r5.s64 = ctx.r8.s32 >> 5;
	// rlwinm r8,r5,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r8,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// andc r3,r4,r7
	ctx.r3.u64 = ctx.r4.u64 & ~ctx.r7.u64;
	// stwx r3,r8,r9
	PPC_STORE_U32(ctx.r8.u32 + ctx.r9.u32, ctx.r3.u32);
loc_82365418:
	// lbz r8,80(r6)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r6.u32 + 80);
	// rotlwi r7,r7,1
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 1);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82365440
	if (!ctx.cr6.eq) goto loc_82365440;
	// srawi r9,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 5;
	// addi r8,r10,25808
	ctx.r8.s64 = ctx.r10.s64 + 25808;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r9,r8
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// andc r4,r5,r7
	ctx.r4.u64 = ctx.r5.u64 & ~ctx.r7.u64;
	// stwx r4,r9,r8
	PPC_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r4.u32);
loc_82365440:
	// lbz r8,160(r6)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r6.u32 + 160);
	// rotlwi r7,r7,1
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 1);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8236546c
	if (!ctx.cr6.eq) goto loc_8236546C;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// addi r8,r10,25808
	ctx.r8.s64 = ctx.r10.s64 + 25808;
	// srawi r5,r9,5
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1F) != 0);
	ctx.r5.s64 = ctx.r9.s32 >> 5;
	// rlwinm r9,r5,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r9,r8
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// andc r3,r4,r7
	ctx.r3.u64 = ctx.r4.u64 & ~ctx.r7.u64;
	// stwx r3,r9,r8
	PPC_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r3.u32);
loc_8236546C:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rotlwi r7,r7,1
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 1);
	// addi r9,r11,-2
	ctx.r9.s64 = ctx.r11.s64 + -2;
	// addi r6,r6,320
	ctx.r6.s64 = ctx.r6.s64 + 320;
	// cmpwi cr6,r9,64
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 64, ctx.xer);
	// blt cr6,0x823653c4
	if (ctx.cr6.lt) goto loc_823653C4;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823653A0) {
	__imp__sub_823653A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82365488) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82365490;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31809
	ctx.r11.s64 = -2084634624;
	// addi r31,r11,-12528
	ctx.r31.s64 = ctx.r11.s64 + -12528;
	// lbz r11,-12528(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + -12528);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82365674
	if (ctx.cr6.eq) goto loc_82365674;
	// lbz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82365674
	if (!ctx.cr6.eq) goto loc_82365674;
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r28,1
	ctx.r28.s64 = 1;
	// ori r10,r11,35228
	ctx.r10.u64 = ctx.r11.u64 | 35228;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwzx r11,r31,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82365540
	if (!ctx.cr6.gt) goto loc_82365540;
	// addi r29,r31,26196
	ctx.r29.s64 = ctx.r31.s64 + 26196;
loc_823654D4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823043a8
	ctx.lr = 0x823654DC;
	sub_823043A8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82365524
	if (!ctx.cr6.eq) goto loc_82365524;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r10,r31,25808
	ctx.r10.s64 = ctx.r31.s64 + 25808;
	// lwz r9,56(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// srawi r8,r9,9
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1FF) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 9;
	// clrlwi r7,r8,26
	ctx.r7.u64 = ctx.r8.u32 & 0x3F;
	// srawi r6,r7,5
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1F) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 5;
	// clrlwi r5,r7,27
	ctx.r5.u64 = ctx.r7.u32 & 0x1F;
	// rlwinm r4,r6,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// slw r3,r28,r5
	ctx.r3.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r28.u32 << (ctx.r5.u8 & 0x3F));
	// lwzx r11,r4,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r10.u32);
	// and r10,r3,r11
	ctx.r10.u64 = ctx.r3.u64 & ctx.r11.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82365524
	if (ctx.cr6.eq) goto loc_82365524;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82304340
	ctx.lr = 0x82365524;
	sub_82304340(ctx, base);
loc_82365524:
	// lis r11,0
	ctx.r11.s64 = 0;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// ori r10,r11,35228
	ctx.r10.u64 = ctx.r11.u64 | 35228;
	// addi r29,r29,176
	ctx.r29.s64 = ctx.r29.s64 + 176;
	// lwzx r11,r31,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x823654d4
	if (ctx.cr6.lt) goto loc_823654D4;
loc_82365540:
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r30,8
	ctx.r30.s64 = 8;
	// ori r10,r11,35232
	ctx.r10.u64 = ctx.r11.u64 | 35232;
	// lwzx r11,r31,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// cmpwi cr6,r9,8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 8, ctx.xer);
	// ble cr6,0x823655d0
	if (!ctx.cr6.gt) goto loc_823655D0;
	// addi r29,r31,27604
	ctx.r29.s64 = ctx.r31.s64 + 27604;
loc_82365560:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82304498
	ctx.lr = 0x82365568;
	sub_82304498(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823655b0
	if (!ctx.cr6.eq) goto loc_823655B0;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r10,r31,25808
	ctx.r10.s64 = ctx.r31.s64 + 25808;
	// lwz r9,56(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// srawi r8,r9,9
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1FF) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 9;
	// clrlwi r7,r8,26
	ctx.r7.u64 = ctx.r8.u32 & 0x3F;
	// srawi r6,r7,5
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1F) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 5;
	// clrlwi r5,r7,27
	ctx.r5.u64 = ctx.r7.u32 & 0x1F;
	// rlwinm r4,r6,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// slw r3,r28,r5
	ctx.r3.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r28.u32 << (ctx.r5.u8 & 0x3F));
	// lwzx r11,r4,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r10.u32);
	// and r10,r3,r11
	ctx.r10.u64 = ctx.r3.u64 & ctx.r11.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823655b0
	if (ctx.cr6.eq) goto loc_823655B0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82304430
	ctx.lr = 0x823655B0;
	sub_82304430(ctx, base);
loc_823655B0:
	// lis r11,0
	ctx.r11.s64 = 0;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// ori r10,r11,35232
	ctx.r10.u64 = ctx.r11.u64 | 35232;
	// addi r29,r29,176
	ctx.r29.s64 = ctx.r29.s64 + 176;
	// lwzx r11,r31,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// cmpw cr6,r30,r9
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82365560
	if (ctx.cr6.lt) goto loc_82365560;
loc_823655D0:
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r30,40
	ctx.r30.s64 = 40;
	// ori r10,r11,35236
	ctx.r10.u64 = ctx.r11.u64 | 35236;
	// lwzx r11,r31,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// addi r9,r11,40
	ctx.r9.s64 = ctx.r11.s64 + 40;
	// cmpwi cr6,r9,40
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 40, ctx.xer);
	// ble cr6,0x82365664
	if (!ctx.cr6.gt) goto loc_82365664;
	// addis r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 65536;
	// addi r29,r11,-32300
	ctx.r29.s64 = ctx.r11.s64 + -32300;
loc_823655F4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823045f8
	ctx.lr = 0x823655FC;
	sub_823045F8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82365644
	if (!ctx.cr6.eq) goto loc_82365644;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r10,r31,25808
	ctx.r10.s64 = ctx.r31.s64 + 25808;
	// lwz r9,56(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// srawi r8,r9,9
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1FF) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 9;
	// clrlwi r7,r8,26
	ctx.r7.u64 = ctx.r8.u32 & 0x3F;
	// srawi r6,r7,5
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1F) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 5;
	// clrlwi r5,r7,27
	ctx.r5.u64 = ctx.r7.u32 & 0x1F;
	// rlwinm r4,r6,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// slw r3,r28,r5
	ctx.r3.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r28.u32 << (ctx.r5.u8 & 0x3F));
	// lwzx r11,r4,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r10.u32);
	// and r10,r3,r11
	ctx.r10.u64 = ctx.r3.u64 & ctx.r11.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82365644
	if (ctx.cr6.eq) goto loc_82365644;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82304528
	ctx.lr = 0x82365644;
	sub_82304528(ctx, base);
loc_82365644:
	// lis r11,0
	ctx.r11.s64 = 0;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// ori r10,r11,35236
	ctx.r10.u64 = ctx.r11.u64 | 35236;
	// addi r29,r29,176
	ctx.r29.s64 = ctx.r29.s64 + 176;
	// lwzx r11,r31,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// addi r9,r11,40
	ctx.r9.s64 = ctx.r11.s64 + 40;
	// cmpw cr6,r30,r9
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x823655f4
	if (ctx.cr6.lt) goto loc_823655F4;
loc_82365664:
	// lwz r10,20656(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20656);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// stb r28,2(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2, ctx.r28.u8);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
loc_82365674:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82365488) {
	__imp__sub_82365488(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236567C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8236567C) {
	__imp__sub_8236567C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82365680) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82365688;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31809
	ctx.r11.s64 = -2084634624;
	// addi r31,r11,-12528
	ctx.r31.s64 = ctx.r11.s64 + -12528;
	// lbz r11,-12528(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + -12528);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82365808
	if (ctx.cr6.eq) goto loc_82365808;
	// lbz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82365808
	if (ctx.cr6.eq) goto loc_82365808;
	// lis r9,0
	ctx.r9.s64 = 0;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r10,20656(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20656);
	// li r30,0
	ctx.r30.s64 = 0;
	// ori r8,r9,35228
	ctx.r8.u64 = ctx.r9.u64 | 35228;
	// subf r28,r11,r10
	ctx.r28.s64 = ctx.r10.s64 - ctx.r11.s64;
	// lwzx r11,r31,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8236571c
	if (!ctx.cr6.gt) goto loc_8236571C;
	// addi r29,r31,26240
	ctx.r29.s64 = ctx.r31.s64 + 26240;
loc_823656D4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823043a8
	ctx.lr = 0x823656DC;
	sub_823043A8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82365700
	if (!ctx.cr6.eq) goto loc_82365700;
	// lbz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82365700
	if (ctx.cr6.eq) goto loc_82365700;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823043a0
	ctx.lr = 0x82365700;
	sub_823043A0(ctx, base);
loc_82365700:
	// lis r11,0
	ctx.r11.s64 = 0;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// ori r10,r11,35228
	ctx.r10.u64 = ctx.r11.u64 | 35228;
	// addi r29,r29,176
	ctx.r29.s64 = ctx.r29.s64 + 176;
	// lwzx r11,r31,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x823656d4
	if (ctx.cr6.lt) goto loc_823656D4;
loc_8236571C:
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r30,8
	ctx.r30.s64 = 8;
	// ori r10,r11,35232
	ctx.r10.u64 = ctx.r11.u64 | 35232;
	// lwzx r11,r31,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// cmpwi cr6,r9,8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 8, ctx.xer);
	// ble cr6,0x82365788
	if (!ctx.cr6.gt) goto loc_82365788;
	// addi r29,r31,27648
	ctx.r29.s64 = ctx.r31.s64 + 27648;
loc_8236573C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82304498
	ctx.lr = 0x82365744;
	sub_82304498(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82365768
	if (!ctx.cr6.eq) goto loc_82365768;
	// lbz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82365768
	if (ctx.cr6.eq) goto loc_82365768;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82304490
	ctx.lr = 0x82365768;
	sub_82304490(ctx, base);
loc_82365768:
	// lis r11,0
	ctx.r11.s64 = 0;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// ori r10,r11,35232
	ctx.r10.u64 = ctx.r11.u64 | 35232;
	// addi r29,r29,176
	ctx.r29.s64 = ctx.r29.s64 + 176;
	// lwzx r11,r31,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// cmpw cr6,r30,r9
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8236573c
	if (ctx.cr6.lt) goto loc_8236573C;
loc_82365788:
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r30,40
	ctx.r30.s64 = 40;
	// ori r10,r11,35236
	ctx.r10.u64 = ctx.r11.u64 | 35236;
	// lwzx r11,r31,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// addi r9,r11,40
	ctx.r9.s64 = ctx.r11.s64 + 40;
	// cmpwi cr6,r9,40
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 40, ctx.xer);
	// ble cr6,0x823657f8
	if (!ctx.cr6.gt) goto loc_823657F8;
	// addis r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 65536;
	// addi r29,r11,-32256
	ctx.r29.s64 = ctx.r11.s64 + -32256;
loc_823657AC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823045f8
	ctx.lr = 0x823657B4;
	sub_823045F8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823657d8
	if (!ctx.cr6.eq) goto loc_823657D8;
	// lbz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823657d8
	if (ctx.cr6.eq) goto loc_823657D8;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82304570
	ctx.lr = 0x823657D8;
	sub_82304570(ctx, base);
loc_823657D8:
	// lis r11,0
	ctx.r11.s64 = 0;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// ori r10,r11,35236
	ctx.r10.u64 = ctx.r11.u64 | 35236;
	// addi r29,r29,176
	ctx.r29.s64 = ctx.r29.s64 + 176;
	// lwzx r11,r31,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// addi r9,r11,40
	ctx.r9.s64 = ctx.r11.s64 + 40;
	// cmpw cr6,r30,r9
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x823657ac
	if (ctx.cr6.lt) goto loc_823657AC;
loc_823657F8:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r11,2(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2, ctx.r11.u8);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
loc_82365808:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82365680) {
	__imp__sub_82365680(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82365810) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31936
	ctx.r11.s64 = -2092957696;
	// lis r10,-31809
	ctx.r10.s64 = -2084634624;
	// addi r9,r10,-12528
	ctx.r9.s64 = ctx.r10.s64 + -12528;
	// lwz r11,-9404(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9404);
	// lbz r7,2(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 2);
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addic r6,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r6.s64 = ctx.r8.s64 + -1;
	// subfe r11,r6,r8
	temp.u8 = (~ctx.r6.u32 + ctx.r8.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r6.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82365848
	if (ctx.cr6.eq) goto loc_82365848;
	// b 0x82365488
	sub_82365488(ctx, base);
	return;
loc_82365848:
	// b 0x82365680
	sub_82365680(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82365810) {
	__imp__sub_82365810(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236584C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8236584C) {
	__imp__sub_8236584C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82365850) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf68
	ctx.lr = 0x82365858;
	__savegprlr_24(ctx, base);
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x823de028
	ctx.lr = 0x82365860;
	__savefpr_28(ctx, base);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31936
	ctx.r10.s64 = -2092957696;
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f1.f64;
	// lis r11,-31809
	ctx.r11.s64 = -2084634624;
	// fmr f28,f2
	ctx.f28.f64 = ctx.f2.f64;
	// mr r24,r9
	ctx.r24.u64 = ctx.r9.u64;
	// addi r31,r11,-12528
	ctx.r31.s64 = ctx.r11.s64 + -12528;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// lwz r11,-9404(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -9404);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// lbz r8,2(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addic r7,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r7.s64 = ctx.r9.s64 + -1;
	// subfe r11,r7,r9
	temp.u8 = (~ctx.r7.u32 + ctx.r9.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r7.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x823658c0
	if (ctx.cr6.eq) goto loc_823658C0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823658bc
	if (ctx.cr6.eq) goto loc_823658BC;
	// bl 0x82365488
	ctx.lr = 0x823658B8;
	sub_82365488(ctx, base);
	// b 0x823658c0
	goto loc_823658C0;
loc_823658BC:
	// bl 0x82365680
	ctx.lr = 0x823658C0;
	sub_82365680(ctx, base);
loc_823658C0:
	// lwz r11,56(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// addi r10,r31,20756
	ctx.r10.s64 = ctx.r31.s64 + 20756;
	// srawi r9,r11,9
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1FF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 9;
	// clrlwi r27,r9,26
	ctx.r27.u64 = ctx.r9.u32 & 0x3F;
	// rlwinm r11,r27,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r27,r11
	ctx.r8.u64 = ctx.r27.u64 + ctx.r11.u64;
	// rlwinm r7,r8,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// lbzx r6,r7,r10
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r10.u32);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82365910
	if (ctx.cr6.eq) goto loc_82365910;
	// li r5,128
	ctx.r5.s64 = 128;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822ddaa8
	ctx.lr = 0x823658F8;
	sub_822DDAA8(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r11,4728
	ctx.r4.s64 = ctx.r11.s64 + 4728;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822830e8
	ctx.lr = 0x82365910;
	sub_822830E8(ctx, base);
loc_82365910:
	// lwz r11,56(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// rlwinm r10,r11,0,23,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x180;
	// cmpwi cr6,r10,256
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 256, ctx.xer);
	// beq cr6,0x82365948
	if (ctx.cr6.eq) goto loc_82365948;
	// li r5,128
	ctx.r5.s64 = 128;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822ddaa8
	ctx.lr = 0x82365930;
	sub_822DDAA8(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r11,4632
	ctx.r4.s64 = ctx.r11.s64 + 4632;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822830e8
	ctx.lr = 0x82365948;
	sub_822830E8(ctx, base);
loc_82365948:
	// lfs f31,28(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	ctx.f31.f64 = double(temp.f32);
	// bl 0x822d3ea0
	ctx.lr = 0x82365950;
	sub_822D3EA0(ctx, base);
	// lfs f0,32(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
	// lfs f30,36(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	ctx.f30.f64 = double(temp.f32);
	// fmadds f31,f1,f13,f31
	ctx.f31.f64 = double(float(ctx.f1.f64 * ctx.f13.f64 + ctx.f31.f64));
	// bl 0x822d3ea0
	ctx.lr = 0x82365964;
	sub_822D3EA0(ctx, base);
	// lfs f12,40(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	ctx.f12.f64 = double(temp.f32);
	// addi r26,r28,40
	ctx.r26.s64 = ctx.r28.s64 + 40;
	// fsubs f11,f12,f30
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f30.f64));
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// fmadds f30,f1,f11,f30
	ctx.f30.f64 = double(float(ctx.f1.f64 * ctx.f11.f64 + ctx.f30.f64));
	// bl 0x823045f8
	ctx.lr = 0x8236597C;
	sub_823045F8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82365990
	if (!ctx.cr6.eq) goto loc_82365990;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x823044b8
	ctx.lr = 0x82365990;
	sub_823044B8(ctx, base);
loc_82365990:
	// mulli r10,r26,176
	ctx.r10.s64 = ctx.r26.s64 * 176;
	// addi r11,r31,26188
	ctx.r11.s64 = ctx.r31.s64 + 26188;
	// addi r8,r31,20300
	ctx.r8.s64 = ctx.r31.s64 + 20300;
	// rlwinm r9,r28,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 3) & 0xFFFFFFF8;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stfsx f31,r10,r11
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, temp.u32);
	// stfsx f31,r9,r8
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r8.u32, temp.u32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// addi r8,r8,5484
	ctx.r8.s64 = ctx.r8.s64 + 5484;
	// lfs f0,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// ble cr6,0x823659e8
	if (!ctx.cr6.gt) goto loc_823659E8;
	// extsw r7,r29
	ctx.r7.s64 = ctx.r29.s32;
	// lfsx f13,r10,r11
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// addi r6,r31,20304
	ctx.r6.s64 = ctx.r31.s64 + 20304;
	// std r7,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r7.u64);
	// lfd f12,144(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fdivs f9,f13,f10
	ctx.f9.f64 = double(float(ctx.f13.f64 / ctx.f10.f64));
	// stfsx f9,r9,r6
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r6.u32, temp.u32);
	// stfsx f0,r10,r11
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, temp.u32);
	// b 0x823659f0
	goto loc_823659F0;
loc_823659E8:
	// addi r7,r31,20304
	ctx.r7.s64 = ctx.r31.s64 + 20304;
	// stfsx f0,r9,r7
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r7.u32, temp.u32);
loc_823659F0:
	// lfsx f13,r10,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,76(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// stfs f13,108(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lis r10,-31809
	ctx.r10.s64 = -2084634624;
	// lwz r8,56(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// addi r9,r31,20476
	ctx.r9.s64 = ctx.r31.s64 + 20476;
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// mulli r11,r25,60
	ctx.r11.s64 = ctx.r25.s64 * 60;
	// stfs f30,112(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f29,120(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// lwz r10,23884(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 23884);
	// stw r24,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r24.u32);
	// rlwinm r7,r27,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r31,25816
	ctx.r6.s64 = ctx.r31.s64 + 25816;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lis r5,0
	ctx.r5.s64 = 0;
	// rlwinm r9,r8,31,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x1;
	// li r4,0
	ctx.r4.s64 = 0;
	// lfsx f12,r7,r6
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	ctx.f12.f64 = double(temp.f32);
	// ori r3,r5,65535
	ctx.r3.u64 = ctx.r5.u64 | 65535;
	// lfs f11,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f12,f28
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f28.f64));
	// lfs f9,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// lfs f8,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// stw r4,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r4.u32);
	// stfs f11,96(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stb r9,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r9.u8);
	// stfs f9,100(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f8,104(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f10,132(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// lbz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 12);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82365a90
	if (ctx.cr6.eq) goto loc_82365A90;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82306428
	ctx.lr = 0x82365A90;
	sub_82306428(ctx, base);
loc_82365A90:
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x823de074
	ctx.lr = 0x82365A9C;
	__restfpr_28(ctx, base);
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82365850) {
	__imp__sub_82365850(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82365AA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82365AA8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r30,r3,40
	ctx.r30.s64 = ctx.r3.s64 + 40;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x823045f8
	ctx.lr = 0x82365AC0;
	sub_823045F8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82365b30
	if (!ctx.cr6.eq) goto loc_82365B30;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x82365ae4
	if (!ctx.cr6.eq) goto loc_82365AE4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823044b8
	ctx.lr = 0x82365ADC;
	sub_823044B8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_82365AE4:
	// lis r10,-31809
	ctx.r10.s64 = -2084634624;
	// rlwinm r11,r31,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r10,-12528
	ctx.r10.s64 = ctx.r10.s64 + -12528;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// addi r9,r10,20300
	ctx.r9.s64 = ctx.r10.s64 + 20300;
	// lfs f13,5484(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 5484);
	ctx.f13.f64 = double(temp.f32);
	// lfsx f0,r11,r9
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82365b30
	if (!ctx.cr6.gt) goto loc_82365B30;
	// extsw r8,r29
	ctx.r8.s64 = ctx.r29.s32;
	// stfsx f13,r11,r9
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, temp.u32);
	// addi r7,r10,20304
	ctx.r7.s64 = ctx.r10.s64 + 20304;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fdivs f10,f0,f11
	ctx.f10.f64 = double(float(ctx.f0.f64 / ctx.f11.f64));
	// fneg f9,f10
	ctx.f9.u64 = ctx.f10.u64 ^ 0x8000000000000000;
	// stfsx f9,r11,r7
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r7.u32, temp.u32);
loc_82365B30:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82365AA0) {
	__imp__sub_82365AA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82365B38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82365B40;
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
	// lis r11,-31809
	ctx.r11.s64 = -2084634624;
	// fmr f30,f1
	ctx.f30.f64 = ctx.f1.f64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r30,r11,-12528
	ctx.r30.s64 = ctx.r11.s64 + -12528;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// lbz r11,-12528(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + -12528);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82365c20
	if (ctx.cr6.eq) goto loc_82365C20;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82365c20
	if (ctx.cr6.eq) goto loc_82365C20;
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x823045f8
	ctx.lr = 0x82365B80;
	sub_823045F8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82365bc8
	if (!ctx.cr6.eq) goto loc_82365BC8;
	// lis r11,-32021
	ctx.r11.s64 = -2098528256;
	// lwz r11,-14904(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14904);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82365c30
	if (ctx.cr6.eq) goto loc_82365C30;
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r10,r11,33236
	ctx.r10.u64 = ctx.r11.u64 | 33236;
	// lwzx r11,r30,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82365c30
	if (!ctx.cr6.eq) goto loc_82365C30;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r3,9
	ctx.r3.s64 = 9;
	// addi r4,r11,4876
	ctx.r4.s64 = ctx.r11.s64 + 4876;
	// bl 0x82280900
	ctx.lr = 0x82365BC8;
	sub_82280900(ctx, base);
loc_82365BC8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f30.f64;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lfs f31,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f31.f64 = double(temp.f32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82365850
	ctx.lr = 0x82365BF0;
	sub_82365850(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82365c20
	if (ctx.cr6.eq) goto loc_82365C20;
	// bl 0x822ddd08
	ctx.lr = 0x82365C00;
	sub_822DDD08(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f30.f64;
	// li r6,0
	ctx.r6.s64 = 0;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82365850
	ctx.lr = 0x82365C20;
	sub_82365850(ctx, base);
loc_82365C20:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_82365C30:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r3,9
	ctx.r3.s64 = 9;
	// addi r4,r11,4844
	ctx.r4.s64 = ctx.r11.s64 + 4844;
	// bl 0x82280c30
	ctx.lr = 0x82365C44;
	sub_82280C30(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82365B38) {
	__imp__sub_82365B38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82365C54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82365C54) {
	__imp__sub_82365C54(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82365C58) {
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
	// lis r11,-31809
	ctx.r11.s64 = -2084634624;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lbz r10,-12528(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -12528);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82365c94
	if (ctx.cr6.eq) goto loc_82365C94;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82365aa0
	ctx.lr = 0x82365C88;
	sub_82365AA0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82365aa0
	ctx.lr = 0x82365C94;
	sub_82365AA0(ctx, base);
loc_82365C94:
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

PPC_WEAK_FUNC(sub_82365C58) {
	__imp__sub_82365C58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82365CA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x82365CB0;
	__savegprlr_25(ctx, base);
	// stfd f29,-88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f29.u64);
	// stfd f30,-80(r1)
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f30.u64);
	// stfd f31,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31809
	ctx.r11.s64 = -2084634624;
	// fmr f29,f1
	ctx.f29.f64 = ctx.f1.f64;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r30,r11,-12528
	ctx.r30.s64 = ctx.r11.s64 + -12528;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lbz r11,-12528(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + -12528);
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82365ea4
	if (ctx.cr6.eq) goto loc_82365EA4;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82365ea4
	if (ctx.cr6.eq) goto loc_82365EA4;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82365d10
	if (ctx.cr6.eq) goto loc_82365D10;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lwz r5,0(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,9
	ctx.r3.s64 = 9;
	// addi r4,r11,4912
	ctx.r4.s64 = ctx.r11.s64 + 4912;
	// bl 0x82280c30
	ctx.lr = 0x82365D10;
	sub_82280C30(ctx, base);
loc_82365D10:
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r11,20332(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20332);
	// rlwinm r8,r10,0,26,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20;
	// subfic r27,r11,5
	ctx.xer.ca = ctx.r11.u32 <= 5;
	ctx.r27.s64 = 5 - ctx.r11.s64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// lfs f30,5484(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5484);
	ctx.f30.f64 = double(temp.f32);
	// beq cr6,0x82365d40
	if (ctx.cr6.eq) goto loc_82365D40;
	// bl 0x822d3ea0
	ctx.lr = 0x82365D34;
	sub_822D3EA0(ctx, base);
	// lwz r11,20332(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20332);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// b 0x82365d44
	goto loc_82365D44;
loc_82365D40:
	// fmr f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f30.f64;
loc_82365D44:
	// addi r29,r11,40
	ctx.r29.s64 = ctx.r11.s64 + 40;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823045f8
	ctx.lr = 0x82365D50;
	sub_823045F8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82365e74
	if (!ctx.cr6.eq) goto loc_82365E74;
	// mulli r10,r29,176
	ctx.r10.s64 = ctx.r29.s64 * 176;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r7,r30,26196
	ctx.r7.s64 = ctx.r30.s64 + 26196;
	// lwzx r11,r10,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82365ea4
	if (ctx.cr6.eq) goto loc_82365EA4;
	// lwz r9,20(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r8,20(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82365dd4
	if (!ctx.cr6.eq) goto loc_82365DD4;
	// lwz r9,56(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// lwz r8,56(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// xor r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 ^ ctx.r8.u64;
	// clrlwi r5,r6,31
	ctx.r5.u64 = ctx.r6.u32 & 0x1;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x82365dd4
	if (!ctx.cr6.eq) goto loc_82365DD4;
	// lfs f0,36(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x82365dd4
	if (!ctx.cr6.eq) goto loc_82365DD4;
	// lfs f0,40(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,40(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x82365dd4
	if (!ctx.cr6.eq) goto loc_82365DD4;
	// xor r11,r9,r8
	ctx.r11.u64 = ctx.r9.u64 ^ ctx.r8.u64;
	// rlwinm r9,r11,0,17,22
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x7E00;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82365dd8
	if (ctx.cr6.eq) goto loc_82365DD8;
loc_82365DD4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82365DD8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82365e74
	if (ctx.cr6.eq) goto loc_82365E74;
	// addi r11,r30,26200
	ctx.r11.s64 = ctx.r30.s64 + 26200;
	// stwx r31,r10,r7
	PPC_STORE_U32(ctx.r10.u32 + ctx.r7.u32, ctx.r31.u32);
	// stwx r31,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r31.u32);
	// lfs f31,28(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f31.f64 = double(temp.f32);
	// bl 0x822d3ea0
	ctx.lr = 0x82365DF8;
	sub_822D3EA0(ctx, base);
	// lfs f0,32(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
	// lwz r11,20332(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20332);
	// addi r10,r30,20300
	ctx.r10.s64 = ctx.r30.s64 + 20300;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// fmadds f0,f1,f13,f31
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f13.f64 + ctx.f31.f64));
	// beq cr6,0x82365e58
	if (ctx.cr6.eq) goto loc_82365E58;
	// extsw r10,r28
	ctx.r10.s64 = ctx.r28.s32;
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// fdivs f8,f12,f9
	ctx.f8.f64 = double(float(ctx.f12.f64 / ctx.f9.f64));
	// stfs f8,4(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f29,-88(r1)
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f30,-80(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_82365E58:
	// stfs f30,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f29,-88(r1)
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f30,-80(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_82365E74:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,20332(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20332);
	// bl 0x82365aa0
	ctx.lr = 0x82365E80;
	sub_82365AA0(ctx, base);
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// fmr f2,f29
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f29.f64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82365850
	ctx.lr = 0x82365EA0;
	sub_82365850(ctx, base);
	// stw r27,20332(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20332, ctx.r27.u32);
loc_82365EA4:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
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

PPC_WEAK_FUNC(sub_82365CA8) {
	__imp__sub_82365CA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82365EB8) {
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
	// lis r11,-31809
	ctx.r11.s64 = -2084634624;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lbz r10,-12528(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -12528);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82365ef0
	if (ctx.cr6.eq) goto loc_82365EF0;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82365aa0
	ctx.lr = 0x82365EE4;
	sub_82365AA0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82365aa0
	ctx.lr = 0x82365EF0;
	sub_82365AA0(ctx, base);
loc_82365EF0:
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

PPC_WEAK_FUNC(sub_82365EB8) {
	__imp__sub_82365EB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82365F04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82365F04) {
	__imp__sub_82365F04(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82365F08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82365F10;
	__savegprlr_29(ctx, base);
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
	// bl 0x82141398
	ctx.lr = 0x82365F24;
	sub_82141398(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bgt cr6,0x82366008
	if (ctx.cr6.gt) goto loc_82366008;
	// lis r10,-31809
	ctx.r10.s64 = -2084634624;
	// mulli r11,r29,772
	ctx.r11.s64 = ctx.r29.s64 * 772;
	// addi r9,r10,-12528
	ctx.r9.s64 = ctx.r10.s64 + -12528;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r10,r9,16436
	ctx.r10.s64 = ctx.r9.s64 + 16436;
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stb r8,768(r4)
	PPC_STORE_U8(ctx.r4.u32 + 768, ctx.r8.u8);
	// bge cr6,0x82365f54
	if (!ctx.cr6.lt) goto loc_82365F54;
	// li r31,1
	ctx.r31.s64 = 1;
loc_82365F54:
	// lwz r11,26072(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 26072);
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82365fc4
	if (!ctx.cr6.gt) goto loc_82365FC4;
	// extsw r10,r31
	ctx.r10.s64 = ctx.r31.s32;
	// addi r11,r4,8
	ctx.r11.s64 = ctx.r4.s64 + 8;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// subfic r5,r4,-8
	ctx.xer.ca = ctx.r4.u32 <= 4294967288;
	ctx.r5.s64 = -8 - ctx.r4.s64;
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// addi r10,r30,-4
	ctx.r10.s64 = ctx.r30.s64 + -4;
	// add r7,r5,r11
	ctx.r7.u64 = ctx.r5.u64 + ctx.r11.u64;
loc_82365F88:
	// lfs f0,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stfs f0,-4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// lwz r6,20296(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20296);
	// lfsx f12,r7,r6
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,-8(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + -8, temp.u32);
	// lfsu f0,4(r10)
	ea = 4 + ctx.r10.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r10.u32 = ea;
	// fsubs f11,f0,f12
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// fdivs f10,f11,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 / ctx.f13.f64));
	// stfs f10,0(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// lwz r6,26072(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 26072);
	// cmpw cr6,r8,r6
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r6.s32, ctx.xer);
	// add r7,r5,r11
	ctx.r7.u64 = ctx.r5.u64 + ctx.r11.u64;
	// blt cr6,0x82365f88
	if (ctx.cr6.lt) goto loc_82365F88;
loc_82365FC4:
	// lwz r11,20296(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20296);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82366008
	if (ctx.cr6.eq) goto loc_82366008;
	// addi r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 1;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bge cr6,0x82366004
	if (!ctx.cr6.lt) goto loc_82366004;
	// mulli r11,r11,772
	ctx.r11.s64 = ctx.r11.s64 * 772;
	// addi r10,r9,17204
	ctx.r10.s64 = ctx.r9.s64 + 17204;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_82365FE8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82366008
	if (!ctx.cr6.eq) goto loc_82366008;
	// addi r11,r11,772
	ctx.r11.s64 = ctx.r11.s64 + 772;
	// addi r10,r9,21064
	ctx.r10.s64 = ctx.r9.s64 + 21064;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82365fe8
	if (ctx.cr6.lt) goto loc_82365FE8;
loc_82366004:
	// stw r4,20296(r9)
	PPC_STORE_U32(ctx.r9.u32 + 20296, ctx.r4.u32);
loc_82366008:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82365F08) {
	__imp__sub_82365F08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82366010) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82366018;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31809
	ctx.r11.s64 = -2084634624;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,-12528
	ctx.r31.s64 = ctx.r11.s64 + -12528;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lbz r11,-12528(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + -12528);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82366114
	if (ctx.cr6.eq) goto loc_82366114;
	// bl 0x82141398
	ctx.lr = 0x8236603C;
	sub_82141398(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bgt cr6,0x82366114
	if (ctx.cr6.gt) goto loc_82366114;
	// mulli r11,r30,772
	ctx.r11.s64 = ctx.r30.s64 * 772;
	// addi r10,r31,16436
	ctx.r10.s64 = ctx.r31.s64 + 16436;
	// li r9,0
	ctx.r9.s64 = 0;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stb r9,768(r8)
	PPC_STORE_U8(ctx.r8.u32 + 768, ctx.r9.u8);
	// lwz r11,20296(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20296);
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82366114
	if (!ctx.cr6.eq) goto loc_82366114;
	// addic. r11,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r11.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x82366090
	if (ctx.cr0.lt) goto loc_82366090;
	// mulli r10,r11,772
	ctx.r10.s64 = ctx.r11.s64 * 772;
	// addi r9,r31,17204
	ctx.r9.s64 = ctx.r31.s64 + 17204;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
loc_82366078:
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82366090
	if (!ctx.cr6.eq) goto loc_82366090;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r10,-772
	ctx.r10.s64 = ctx.r10.s64 + -772;
	// bge 0x82366078
	if (!ctx.cr0.lt) goto loc_82366078;
loc_82366090:
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1, ctx.xer);
	// bge cr6,0x8236609c
	if (!ctx.cr6.lt) goto loc_8236609C;
	// li r29,1
	ctx.r29.s64 = 1;
loc_8236609C:
	// mulli r9,r11,772
	ctx.r9.s64 = ctx.r11.s64 * 772;
	// lwz r11,26072(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26072);
	// addi r7,r31,16436
	ctx.r7.s64 = ctx.r31.s64 + 16436;
	// li r10,0
	ctx.r10.s64 = 0;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r9,20296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20296, ctx.r9.u32);
	// ble cr6,0x82366114
	if (!ctx.cr6.gt) goto loc_82366114;
	// extsw r7,r29
	ctx.r7.s64 = ctx.r29.s32;
	// li r11,0
	ctx.r11.s64 = 0;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f0,f13
	ctx.f0.f64 = double(float(ctx.f13.f64));
	// b 0x823660dc
	goto loc_823660DC;
loc_823660D8:
	// lwz r9,20296(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20296);
loc_823660DC:
	// lfsx f13,r11,r8
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stfsx f13,r11,r9
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, temp.u32);
	// lwz r9,20296(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20296);
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lfsx f12,r11,r8
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	ctx.f12.f64 = double(temp.f32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// lfs f11,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f11,f12
	ctx.f10.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// fdivs f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 / ctx.f0.f64));
	// stfs f9,8(r9)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// lwz r9,26072(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26072);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x823660d8
	if (ctx.cr6.lt) goto loc_823660D8;
loc_82366114:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82366010) {
	__imp__sub_82366010(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236611C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8236611C) {
	__imp__sub_8236611C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82366120) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82366128;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31809
	ctx.r11.s64 = -2084634624;
	// addi r31,r11,-12528
	ctx.r31.s64 = ctx.r11.s64 + -12528;
	// lbz r11,-12528(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + -12528);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823662d0
	if (ctx.cr6.eq) goto loc_823662D0;
	// lbz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823662d0
	if (!ctx.cr6.eq) goto loc_823662D0;
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r29,8
	ctx.r29.s64 = 8;
	// ori r10,r11,35232
	ctx.r10.u64 = ctx.r11.u64 | 35232;
	// lwzx r11,r31,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// cmpwi cr6,r9,8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 8, ctx.xer);
	// ble cr6,0x823661cc
	if (!ctx.cr6.gt) goto loc_823661CC;
	// addi r30,r31,27508
	ctx.r30.s64 = ctx.r31.s64 + 27508;
loc_8236616C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82304498
	ctx.lr = 0x82366174;
	sub_82304498(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823661ac
	if (!ctx.cr6.eq) goto loc_823661AC;
	// lwz r11,96(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x823661ac
	if (ctx.cr6.eq) goto loc_823661AC;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,20660(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20660);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x823661ac
	if (ctx.cr6.eq) goto loc_823661AC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823043c8
	ctx.lr = 0x823661AC;
	sub_823043C8(ctx, base);
loc_823661AC:
	// lis r11,0
	ctx.r11.s64 = 0;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// ori r10,r11,35232
	ctx.r10.u64 = ctx.r11.u64 | 35232;
	// addi r30,r30,176
	ctx.r30.s64 = ctx.r30.s64 + 176;
	// lwzx r11,r31,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// cmpw cr6,r29,r9
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8236616c
	if (ctx.cr6.lt) goto loc_8236616C;
loc_823661CC:
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
	// ori r10,r11,35228
	ctx.r10.u64 = ctx.r11.u64 | 35228;
	// lwzx r11,r31,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82366244
	if (!ctx.cr6.gt) goto loc_82366244;
	// addi r30,r31,26100
	ctx.r30.s64 = ctx.r31.s64 + 26100;
loc_823661E8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823043a8
	ctx.lr = 0x823661F0;
	sub_823043A8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82366228
	if (!ctx.cr6.eq) goto loc_82366228;
	// lwz r11,96(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82366228
	if (ctx.cr6.eq) goto loc_82366228;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,20660(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20660);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82366228
	if (ctx.cr6.eq) goto loc_82366228;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823042d8
	ctx.lr = 0x82366228;
	sub_823042D8(ctx, base);
loc_82366228:
	// lis r11,0
	ctx.r11.s64 = 0;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// ori r10,r11,35228
	ctx.r10.u64 = ctx.r11.u64 | 35228;
	// addi r30,r30,176
	ctx.r30.s64 = ctx.r30.s64 + 176;
	// lwzx r11,r31,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x823661e8
	if (ctx.cr6.lt) goto loc_823661E8;
loc_82366244:
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r29,40
	ctx.r29.s64 = 40;
	// ori r10,r11,35236
	ctx.r10.u64 = ctx.r11.u64 | 35236;
	// lwzx r11,r31,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// addi r9,r11,40
	ctx.r9.s64 = ctx.r11.s64 + 40;
	// cmpwi cr6,r9,40
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 40, ctx.xer);
	// ble cr6,0x823662c8
	if (!ctx.cr6.gt) goto loc_823662C8;
	// addis r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 65536;
	// addi r30,r11,-32396
	ctx.r30.s64 = ctx.r11.s64 + -32396;
loc_82366268:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823045f8
	ctx.lr = 0x82366270;
	sub_823045F8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823662a8
	if (!ctx.cr6.eq) goto loc_823662A8;
	// lwz r11,96(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x823662a8
	if (ctx.cr6.eq) goto loc_823662A8;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,20660(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20660);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x823662a8
	if (ctx.cr6.eq) goto loc_823662A8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823044b8
	ctx.lr = 0x823662A8;
	sub_823044B8(ctx, base);
loc_823662A8:
	// lis r11,0
	ctx.r11.s64 = 0;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// ori r10,r11,35236
	ctx.r10.u64 = ctx.r11.u64 | 35236;
	// addi r30,r30,176
	ctx.r30.s64 = ctx.r30.s64 + 176;
	// lwzx r11,r31,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// addi r9,r11,40
	ctx.r9.s64 = ctx.r11.s64 + 40;
	// cmpw cr6,r29,r9
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82366268
	if (ctx.cr6.lt) goto loc_82366268;
loc_823662C8:
	// lwz r11,20656(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20656);
	// stw r11,20660(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20660, ctx.r11.u32);
loc_823662D0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82366120) {
	__imp__sub_82366120(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823662D8) {
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
	// extsw r11,r4
	ctx.r11.s64 = ctx.r4.s32;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lis r11,-31809
	ctx.r11.s64 = -2084634624;
	// addi r11,r11,-12528
	ctx.r11.s64 = ctx.r11.s64 + -12528;
	// frsp f11,f13
	ctx.f11.f64 = double(float(ctx.f13.f64));
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r7,r11,20304
	ctx.r7.s64 = ctx.r11.s64 + 20304;
	// addi r3,r3,40
	ctx.r3.s64 = ctx.r3.s64 + 40;
	// addi r8,r11,26188
	ctx.r8.s64 = ctx.r11.s64 + 26188;
	// mulli r9,r3,176
	ctx.r9.s64 = ctx.r3.s64 * 176;
	// lfsx f9,r10,r7
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	ctx.f9.f64 = double(temp.f32);
	// lfsx f10,r9,r8
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f0,f11,f9,f10
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f9.f64 + ctx.f10.f64));
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// addi r7,r11,20300
	ctx.r7.s64 = ctx.r11.s64 + 20300;
	// lfs f12,5484(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 5484);
	ctx.f12.f64 = double(temp.f32);
	// lfsx f13,r10,r7
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f9,f12
	ctx.cr6.compare(ctx.f9.f64, ctx.f12.f64);
	// ble cr6,0x8236636c
	if (!ctx.cr6.gt) goto loc_8236636C;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82366348
	if (!ctx.cr6.gt) goto loc_82366348;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_82366348:
	// lwz r10,20660(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20660);
	// addi r11,r11,26100
	ctx.r11.s64 = ctx.r11.s64 + 26100;
	// stfsx f0,r9,r8
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r8.u32, temp.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stwx r10,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8236636C:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82366348
	if (!ctx.cr6.lt) goto loc_82366348;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bne cr6,0x82366348
	if (!ctx.cr6.eq) goto loc_82366348;
	// bl 0x823044b8
	ctx.lr = 0x82366384;
	sub_823044B8(ctx, base);
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

PPC_WEAK_FUNC(sub_823662D8) {
	__imp__sub_823662D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82366398) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// extsw r11,r4
	ctx.r11.s64 = ctx.r4.s32;
	// lfs f10,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f9,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f0,-16(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f11,f13
	ctx.f11.f64 = double(float(ctx.f13.f64));
	// lfs f12,5484(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f9,f12
	ctx.cr6.compare(ctx.f9.f64, ctx.f12.f64);
	// fmadds f0,f11,f9,f10
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f9.f64 + ctx.f10.f64));
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// bge cr6,0x823663e4
	if (!ctx.cr6.lt) goto loc_823663E4;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// stfs f12,8(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f13,0(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// blr 
	return;
loc_823663E4:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// stfs f12,8(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f13,0(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82366398) {
	__imp__sub_82366398(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823663F8) {
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
	// bl 0x823043a8
	ctx.lr = 0x82366410;
	sub_823043A8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8236643c
	if (!ctx.cr6.eq) goto loc_8236643C;
	// lis r11,-31809
	ctx.r11.s64 = -2084634624;
	// mulli r10,r31,176
	ctx.r10.s64 = ctx.r31.s64 * 176;
	// addi r11,r11,-12528
	ctx.r11.s64 = ctx.r11.s64 + -12528;
	// addi r9,r11,26096
	ctx.r9.s64 = ctx.r11.s64 + 26096;
	// li r11,1
	ctx.r11.s64 = 1;
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// blt cr6,0x82366440
	if (ctx.cr6.lt) goto loc_82366440;
loc_8236643C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82366440:
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

PPC_WEAK_FUNC(sub_823663F8) {
	__imp__sub_823663F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82366458) {
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
	// bl 0x82304498
	ctx.lr = 0x82366470;
	sub_82304498(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8236649c
	if (!ctx.cr6.eq) goto loc_8236649C;
	// lis r11,-31809
	ctx.r11.s64 = -2084634624;
	// mulli r10,r31,176
	ctx.r10.s64 = ctx.r31.s64 * 176;
	// addi r11,r11,-12528
	ctx.r11.s64 = ctx.r11.s64 + -12528;
	// addi r9,r11,26096
	ctx.r9.s64 = ctx.r11.s64 + 26096;
	// li r11,1
	ctx.r11.s64 = 1;
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// blt cr6,0x823664a0
	if (ctx.cr6.lt) goto loc_823664A0;
loc_8236649C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_823664A0:
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

PPC_WEAK_FUNC(sub_82366458) {
	__imp__sub_82366458(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823664B8) {
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
	// bl 0x823045f8
	ctx.lr = 0x823664D0;
	sub_823045F8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823664fc
	if (!ctx.cr6.eq) goto loc_823664FC;
	// lis r11,-31809
	ctx.r11.s64 = -2084634624;
	// mulli r10,r31,176
	ctx.r10.s64 = ctx.r31.s64 * 176;
	// addi r11,r11,-12528
	ctx.r11.s64 = ctx.r11.s64 + -12528;
	// addi r9,r11,26096
	ctx.r9.s64 = ctx.r11.s64 + 26096;
	// li r11,1
	ctx.r11.s64 = 1;
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// blt cr6,0x82366500
	if (ctx.cr6.lt) goto loc_82366500;
loc_823664FC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82366500:
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

PPC_WEAK_FUNC(sub_823664B8) {
	__imp__sub_823664B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82366518) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x82366520;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpw cr6,r3,r4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r4.s32, ctx.xer);
	// bge cr6,0x823665b4
	if (!ctx.cr6.lt) goto loc_823665B4;
	// lis r11,-31809
	ctx.r11.s64 = -2084634624;
	// mulli r10,r3,176
	ctx.r10.s64 = ctx.r3.s64 * 176;
	// addi r11,r11,-12528
	ctx.r11.s64 = ctx.r11.s64 + -12528;
	// addi r11,r11,26196
	ctx.r11.s64 = ctx.r11.s64 + 26196;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_82366554:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r26
	ctx.ctr.u64 = ctx.r26.u64;
	// bctrl 
	ctx.lr = 0x82366560;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823665a4
	if (ctx.cr6.eq) goto loc_823665A4;
	// lbz r10,45(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 45);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823665a4
	if (ctx.cr6.eq) goto loc_823665A4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r29,1
	ctx.r29.s64 = 1;
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// rlwinm r9,r10,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x823665a4
	if (ctx.cr6.eq) goto loc_823665A4;
	// lfs f0,0(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,60(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fsel f11,f12,f13,f0
	ctx.f11.f64 = ctx.f12.f64 >= 0.0 ? ctx.f13.f64 : ctx.f0.f64;
	// stfs f11,0(r27)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r27.u32 + 0, temp.u32);
loc_823665A4:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,176
	ctx.r31.s64 = ctx.r31.s64 + 176;
	// cmpw cr6,r30,r28
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r28.s32, ctx.xer);
	// blt cr6,0x82366554
	if (ctx.cr6.lt) goto loc_82366554;
loc_823665B4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82366518) {
	__imp__sub_82366518(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823665C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x823665C8;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-31809
	ctx.r11.s64 = -2084634624;
	// lis r9,0
	ctx.r9.s64 = 0;
	// addi r31,r11,-12528
	ctx.r31.s64 = ctx.r11.s64 + -12528;
	// ori r8,r9,35232
	ctx.r8.u64 = ctx.r9.u64 | 35232;
	// lfs f31,5484(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f31.f64 = double(temp.f32);
	// lis r7,-32202
	ctx.r7.s64 = -2110390272;
	// stfs f31,80(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r7,25688
	ctx.r5.s64 = ctx.r7.s64 + 25688;
	// lwzx r11,r31,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// li r3,8
	ctx.r3.s64 = 8;
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// bl 0x82366518
	ctx.lr = 0x8236660C;
	sub_82366518(ctx, base);
	// lis r6,0
	ctx.r6.s64 = 0;
	// lis r5,-32202
	ctx.r5.s64 = -2110390272;
	// ori r4,r6,35236
	ctx.r4.u64 = ctx.r6.u64 | 35236;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r5,25784
	ctx.r5.s64 = ctx.r5.s64 + 25784;
	// li r3,40
	ctx.r3.s64 = 40;
	// lwzx r11,r31,r4
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r4.u32);
	// addi r4,r11,40
	ctx.r4.s64 = ctx.r11.s64 + 40;
	// bl 0x82366518
	ctx.lr = 0x82366634;
	sub_82366518(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32202
	ctx.r10.s64 = -2110390272;
	// ori r9,r11,35228
	ctx.r9.u64 = ctx.r11.u64 | 35228;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r10,25592
	ctx.r5.s64 = ctx.r10.s64 + 25592;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwzx r4,r31,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// bl 0x82366518
	ctx.lr = 0x82366658;
	sub_82366518(ctx, base);
	// clrlwi r8,r28,24
	ctx.r8.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82366680
	if (!ctx.cr6.eq) goto loc_82366680;
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82366680
	if (!ctx.cr6.eq) goto loc_82366680;
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x82366684
	if (ctx.cr6.eq) goto loc_82366684;
loc_82366680:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82366684:
	// lis r9,-31809
	ctx.r9.s64 = -2084634624;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// lwz r11,23880(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 23880);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823666e8
	if (!ctx.cr6.eq) goto loc_823666E8;
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823666b8
	if (ctx.cr6.eq) goto loc_823666B8;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,12168(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20336(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20336, temp.u32);
	// b 0x823666bc
	goto loc_823666BC;
loc_823666B8:
	// stfs f31,20336(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20336, temp.u32);
loc_823666BC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823666d8
	if (ctx.cr6.eq) goto loc_823666D8;
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20340(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20340, temp.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_823666D8:
	// stfs f31,20340(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20340, temp.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_823666E8:
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// extsw r9,r29
	ctx.r9.s64 = ctx.r29.s32;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f11,f0
	ctx.f11.f64 = double(ctx.f0.s64);
	// clrlwi r8,r10,24
	ctx.r8.u64 = ctx.r10.u32 & 0xFF;
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lfs f0,20336(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20336);
	ctx.f0.f64 = double(temp.f32);
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// fdivs f10,f10,f9
	ctx.f10.f64 = double(float(ctx.f10.f64 / ctx.f9.f64));
	// beq cr6,0x8236672c
	if (ctx.cr6.eq) goto loc_8236672C;
	// fadds f13,f0,f10
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f10.f64));
	// b 0x82366730
	goto loc_82366730;
loc_8236672C:
	// fsubs f13,f0,f10
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f10.f64));
loc_82366730:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fneg f9,f13
	ctx.fpscr.disableFlushMode();
	ctx.f9.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,20340(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20340);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// lfs f11,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f8,f13,f11
	ctx.f8.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// fsel f7,f8,f11,f13
	ctx.f7.f64 = ctx.f8.f64 >= 0.0 ? ctx.f11.f64 : ctx.f13.f64;
	// fsel f13,f9,f31,f7
	ctx.f13.f64 = ctx.f9.f64 >= 0.0 ? ctx.f31.f64 : ctx.f7.f64;
	// stfs f13,20336(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20336, temp.u32);
	// ble cr6,0x82366778
	if (!ctx.cr6.gt) goto loc_82366778;
	// fsubs f13,f12,f10
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f10.f64));
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fsel f0,f12,f13,f0
	ctx.f0.f64 = ctx.f12.f64 >= 0.0 ? ctx.f13.f64 : ctx.f0.f64;
	// stfs f0,20340(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20340, temp.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_82366778:
	// fadds f13,f12,f10
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f12.f64 + ctx.f10.f64));
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fsel f0,f12,f13,f0
	ctx.f0.f64 = ctx.f12.f64 >= 0.0 ? ctx.f13.f64 : ctx.f0.f64;
	// stfs f0,20340(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20340, temp.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823665C0) {
	__imp__sub_823665C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82366794) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82366794) {
	__imp__sub_82366794(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82366798) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x823667A0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x823665c0
	ctx.lr = 0x823667AC;
	sub_823665C0(ctx, base);
	// lis r11,-31809
	ctx.r11.s64 = -2084634624;
	// lis r10,0
	ctx.r10.s64 = 0;
	// addi r30,r11,-12528
	ctx.r30.s64 = ctx.r11.s64 + -12528;
	// ori r9,r10,35232
	ctx.r9.u64 = ctx.r10.u64 | 35232;
	// li r31,8
	ctx.r31.s64 = 8;
	// lwzx r11,r30,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// cmpwi cr6,r8,8
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 8, ctx.xer);
	// ble cr6,0x8236680c
	if (!ctx.cr6.gt) goto loc_8236680C;
loc_823667D0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82304498
	ctx.lr = 0x823667D8;
	sub_82304498(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823667f0
	if (!ctx.cr6.eq) goto loc_823667F0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82305718
	ctx.lr = 0x823667F0;
	sub_82305718(ctx, base);
loc_823667F0:
	// lis r11,0
	ctx.r11.s64 = 0;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// ori r10,r11,35232
	ctx.r10.u64 = ctx.r11.u64 | 35232;
	// lwzx r11,r30,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// cmpw cr6,r31,r9
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x823667d0
	if (ctx.cr6.lt) goto loc_823667D0;
loc_8236680C:
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r31,40
	ctx.r31.s64 = 40;
	// ori r10,r11,35236
	ctx.r10.u64 = ctx.r11.u64 | 35236;
	// lwzx r11,r30,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// addi r9,r11,40
	ctx.r9.s64 = ctx.r11.s64 + 40;
	// cmpwi cr6,r9,40
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 40, ctx.xer);
	// ble cr6,0x82366864
	if (!ctx.cr6.gt) goto loc_82366864;
loc_82366828:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823045f8
	ctx.lr = 0x82366830;
	sub_823045F8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82366848
	if (!ctx.cr6.eq) goto loc_82366848;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823062f8
	ctx.lr = 0x82366848;
	sub_823062F8(ctx, base);
loc_82366848:
	// lis r11,0
	ctx.r11.s64 = 0;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// ori r10,r11,35236
	ctx.r10.u64 = ctx.r11.u64 | 35236;
	// lwzx r11,r30,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// addi r9,r11,40
	ctx.r9.s64 = ctx.r11.s64 + 40;
	// cmpw cr6,r31,r9
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82366828
	if (ctx.cr6.lt) goto loc_82366828;
loc_82366864:
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
	// ori r10,r11,35228
	ctx.r10.u64 = ctx.r11.u64 | 35228;
	// lwzx r11,r30,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823668b4
	if (!ctx.cr6.gt) goto loc_823668B4;
loc_8236687C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823043a8
	ctx.lr = 0x82366884;
	sub_823043A8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8236689c
	if (!ctx.cr6.eq) goto loc_8236689C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82305578
	ctx.lr = 0x8236689C;
	sub_82305578(ctx, base);
loc_8236689C:
	// lis r11,0
	ctx.r11.s64 = 0;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// ori r10,r11,35228
	ctx.r10.u64 = ctx.r11.u64 | 35228;
	// lwzx r11,r30,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8236687c
	if (ctx.cr6.lt) goto loc_8236687C;
loc_823668B4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82366798) {
	__imp__sub_82366798(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823668BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823668BC) {
	__imp__sub_823668BC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823668C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x823668C8;
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
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// bl 0x82141398
	ctx.lr = 0x823668EC;
	sub_82141398(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bgt cr6,0x823669d8
	if (ctx.cr6.gt) goto loc_823669D8;
	// lis r11,-31809
	ctx.r11.s64 = -2084634624;
	// addi r30,r11,-12528
	ctx.r30.s64 = ctx.r11.s64 + -12528;
	// lbz r11,-12528(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + -12528);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823669d8
	if (ctx.cr6.eq) goto loc_823669D8;
	// rlwinm r11,r27,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r10,r30,20344
	ctx.r10.s64 = ctx.r30.s64 + 20344;
	// li r9,1
	ctx.r9.s64 = 1;
	// add r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stb r9,28(r31)
	PPC_STORE_U8(ctx.r31.u32 + 28, ctx.r9.u8);
	// bl 0x82361d40
	ctx.lr = 0x82366924;
	sub_82361D40(ctx, base);
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1, ctx.xer);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// bge cr6,0x82366934
	if (!ctx.cr6.lt) goto loc_82366934;
	// li r29,1
	ctx.r29.s64 = 1;
loc_82366934:
	// stfs f31,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// lwz r11,20472(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20472);
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// extsw r10,r29
	ctx.r10.s64 = ctx.r29.s32;
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// lwz r11,20472(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20472);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lfs f11,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// fsubs f9,f31,f11
	ctx.f9.f64 = double(float(ctx.f31.f64 - ctx.f11.f64));
	// stfs f30,20(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// fdivs f8,f9,f10
	ctx.f8.f64 = double(float(ctx.f9.f64 / ctx.f10.f64));
	// stfs f8,12(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// lwz r11,20472(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20472);
	// lfs f7,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,16(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// lwz r11,20472(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20472);
	// lfs f6,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f5,f30,f6
	ctx.f5.f64 = double(float(ctx.f30.f64 - ctx.f6.f64));
	// fdivs f4,f5,f10
	ctx.f4.f64 = double(float(ctx.f5.f64 / ctx.f10.f64));
	// stfs f4,24(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// lwz r11,20472(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20472);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x823669d4
	if (ctx.cr6.eq) goto loc_823669D4;
	// addi r11,r27,1
	ctx.r11.s64 = ctx.r27.s64 + 1;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bge cr6,0x823669d0
	if (!ctx.cr6.lt) goto loc_823669D0;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r10,r30,20372
	ctx.r10.s64 = ctx.r30.s64 + 20372;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_823669B4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823669d8
	if (!ctx.cr6.eq) goto loc_823669D8;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// addi r10,r30,20500
	ctx.r10.s64 = ctx.r30.s64 + 20500;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x823669b4
	if (ctx.cr6.lt) goto loc_823669B4;
loc_823669D0:
	// stw r31,20472(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20472, ctx.r31.u32);
loc_823669D4:
	// bl 0x823040d0
	ctx.lr = 0x823669D8;
	sub_823040D0(ctx, base);
loc_823669D8:
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

PPC_WEAK_FUNC(sub_823668C0) {
	__imp__sub_823668C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823669E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x823669F0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x82141398
	ctx.lr = 0x82366A00;
	sub_82141398(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bgt cr6,0x82366adc
	if (ctx.cr6.gt) goto loc_82366ADC;
	// lis r10,-31809
	ctx.r10.s64 = -2084634624;
	// rlwinm r11,r29,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r31,r10,-12528
	ctx.r31.s64 = ctx.r10.s64 + -12528;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r31,20344
	ctx.r10.s64 = ctx.r31.s64 + 20344;
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stb r9,28(r30)
	PPC_STORE_U8(ctx.r30.u32 + 28, ctx.r9.u8);
	// lwz r11,20472(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20472);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82366adc
	if (!ctx.cr6.eq) goto loc_82366ADC;
	// addic. r11,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r11.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x82366a5c
	if (ctx.cr0.lt) goto loc_82366A5C;
	// rlwinm r10,r11,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r9,r31,20372
	ctx.r9.s64 = ctx.r31.s64 + 20372;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
loc_82366A44:
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82366a5c
	if (!ctx.cr6.eq) goto loc_82366A5C;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r10,-32
	ctx.r10.s64 = ctx.r10.s64 + -32;
	// bge 0x82366a44
	if (!ctx.cr0.lt) goto loc_82366A44;
loc_82366A5C:
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 1, ctx.xer);
	// bge cr6,0x82366a68
	if (!ctx.cr6.lt) goto loc_82366A68;
	// li r28,1
	ctx.r28.s64 = 1;
loc_82366A68:
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r10,r31,20344
	ctx.r10.s64 = ctx.r31.s64 + 20344;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,20472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20472, ctx.r11.u32);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x823040d0
	ctx.lr = 0x82366A80;
	sub_823040D0(ctx, base);
	// lwz r11,20472(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20472);
	// lfs f0,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// extsw r10,r28
	ctx.r10.s64 = ctx.r28.s32;
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lwz r11,20472(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20472);
	// lfs f13,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// lfs f10,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// fsubs f8,f10,f13
	ctx.f8.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// fdivs f7,f8,f9
	ctx.f7.f64 = double(float(ctx.f8.f64 / ctx.f9.f64));
	// stfs f7,12(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// lwz r11,20472(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20472);
	// lfs f6,16(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,16(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// lwz r11,20472(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20472);
	// lfs f5,16(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f3,f4,f5
	ctx.f3.f64 = double(float(ctx.f4.f64 - ctx.f5.f64));
	// fdivs f2,f3,f9
	ctx.f2.f64 = double(float(ctx.f3.f64 / ctx.f9.f64));
	// stfs f2,24(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
loc_82366ADC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823669E8) {
	__imp__sub_823669E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82366AE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82366AE4) {
	__imp__sub_82366AE4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82366AE8) {
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
	// lis r11,-31809
	ctx.r11.s64 = -2084634624;
	// lis r10,0
	ctx.r10.s64 = 0;
	// addi r30,r11,-12528
	ctx.r30.s64 = ctx.r11.s64 + -12528;
	// ori r9,r10,35232
	ctx.r9.u64 = ctx.r10.u64 | 35232;
	// li r31,8
	ctx.r31.s64 = 8;
	// lwzx r11,r30,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// cmpwi cr6,r8,8
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 8, ctx.xer);
	// ble cr6,0x82366b58
	if (!ctx.cr6.gt) goto loc_82366B58;
loc_82366B20:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82304498
	ctx.lr = 0x82366B28;
	sub_82304498(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82366b3c
	if (!ctx.cr6.eq) goto loc_82366B3C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82304f10
	ctx.lr = 0x82366B3C;
	sub_82304F10(ctx, base);
loc_82366B3C:
	// lis r11,0
	ctx.r11.s64 = 0;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// ori r10,r11,35232
	ctx.r10.u64 = ctx.r11.u64 | 35232;
	// lwzx r11,r30,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// cmpw cr6,r31,r9
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82366b20
	if (ctx.cr6.lt) goto loc_82366B20;
loc_82366B58:
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
	// ori r10,r11,35228
	ctx.r10.u64 = ctx.r11.u64 | 35228;
	// lwzx r11,r30,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82366ba4
	if (!ctx.cr6.gt) goto loc_82366BA4;
loc_82366B70:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823043a8
	ctx.lr = 0x82366B78;
	sub_823043A8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82366b8c
	if (!ctx.cr6.eq) goto loc_82366B8C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82304f08
	ctx.lr = 0x82366B8C;
	sub_82304F08(ctx, base);
loc_82366B8C:
	// lis r11,0
	ctx.r11.s64 = 0;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// ori r10,r11,35228
	ctx.r10.u64 = ctx.r11.u64 | 35228;
	// lwzx r11,r30,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82366b70
	if (ctx.cr6.lt) goto loc_82366B70;
loc_82366BA4:
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r31,40
	ctx.r31.s64 = 40;
	// ori r10,r11,35236
	ctx.r10.u64 = ctx.r11.u64 | 35236;
	// lwzx r11,r30,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// addi r9,r11,40
	ctx.r9.s64 = ctx.r11.s64 + 40;
	// cmpwi cr6,r9,40
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 40, ctx.xer);
	// ble cr6,0x82366bf8
	if (!ctx.cr6.gt) goto loc_82366BF8;
loc_82366BC0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823045f8
	ctx.lr = 0x82366BC8;
	sub_823045F8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82366bdc
	if (!ctx.cr6.eq) goto loc_82366BDC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82304f18
	ctx.lr = 0x82366BDC;
	sub_82304F18(ctx, base);
loc_82366BDC:
	// lis r11,0
	ctx.r11.s64 = 0;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// ori r10,r11,35236
	ctx.r10.u64 = ctx.r11.u64 | 35236;
	// lwzx r11,r30,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// addi r9,r11,40
	ctx.r9.s64 = ctx.r11.s64 + 40;
	// cmpw cr6,r31,r9
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82366bc0
	if (ctx.cr6.lt) goto loc_82366BC0;
loc_82366BF8:
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

PPC_WEAK_FUNC(sub_82366AE8) {
	__imp__sub_82366AE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82366C10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31809
	ctx.r11.s64 = -2084634624;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r10,r11,-12528
	ctx.r10.s64 = ctx.r11.s64 + -12528;
	// lfs f0,5484(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,20472(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20472);
	// lfs f13,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x82366c3c
	if (!ctx.cr6.eq) goto loc_82366C3C;
	// lfs f12,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_82366C3C:
	// fcmpu cr6,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x82366ca0
	if (ctx.cr6.eq) goto loc_82366CA0;
	// extsw r9,r3
	ctx.r9.s64 = ctx.r3.s32;
	// lfs f12,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// std r9,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r9.u64);
	// lfd f11,-16(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// fmadds f8,f9,f13,f12
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f13.f64 + ctx.f12.f64));
	// stfs f8,4(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lwz r11,20472(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20472);
	// lfs f7,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// fcmpu cr6,f7,f0
	ctx.cr6.compare(ctx.f7.f64, ctx.f0.f64);
	// lfs f13,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// bge cr6,0x82366c88
	if (!ctx.cr6.lt) goto loc_82366C88;
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// bgt cr6,0x82366ca0
	if (ctx.cr6.gt) goto loc_82366CA0;
	// b 0x82366c90
	goto loc_82366C90;
loc_82366C88:
	// fcmpu cr6,f12,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// blt cr6,0x82366ca0
	if (ctx.cr6.lt) goto loc_82366CA0;
loc_82366C90:
	// stfs f13,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lwz r11,20472(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20472);
	// stfs f0,12(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// lwz r11,20472(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20472);
loc_82366CA0:
	// lfs f13,24(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// extsw r9,r3
	ctx.r9.s64 = ctx.r3.s32;
	// lfs f12,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// std r9,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r9.u64);
	// lfd f11,-16(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// fmadds f8,f9,f13,f12
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f13.f64 + ctx.f12.f64));
	// stfs f8,16(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// lwz r11,20472(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20472);
	// lfs f7,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f7.f64 = double(temp.f32);
	// fcmpu cr6,f7,f0
	ctx.cr6.compare(ctx.f7.f64, ctx.f0.f64);
	// lfs f13,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// bge cr6,0x82366cfc
	if (!ctx.cr6.lt) goto loc_82366CFC;
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// stfs f13,16(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// lwz r11,20472(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20472);
	// stfs f0,24(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// blr 
	return;
loc_82366CFC:
	// fcmpu cr6,f12,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// stfs f13,16(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// lwz r11,20472(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20472);
	// stfs f0,24(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82366C10) {
	__imp__sub_82366C10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82366D14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82366D14) {
	__imp__sub_82366D14(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82366D18) {
	PPC_FUNC_PROLOGUE();
	// b 0x82303c70
	sub_82303C70(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82366D18) {
	__imp__sub_82366D18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82366D1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82366D1C) {
	__imp__sub_82366D1C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82366D20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82366D28;
	__savegprlr_28(ctx, base);
	// stfd f29,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f29.u64);
	// stfd f30,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f30.u64);
	// stfd f31,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// fmr f29,f3
	ctx.f29.f64 = ctx.f3.f64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x82361c08
	ctx.lr = 0x82366D58;
	sub_82361C08(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x82366d88
	if (!ctx.cr6.eq) goto loc_82366D88;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r11,1664
	ctx.r4.s64 = ctx.r11.s64 + 1664;
	// li r3,9
	ctx.r3.s64 = 9;
	// bl 0x82280b08
	ctx.lr = 0x82366D74;
	sub_82280B08(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
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
loc_82366D88:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// fmr f3,f29
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f29.f64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82303c70
	ctx.lr = 0x82366DA4;
	sub_82303C70(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
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

PPC_WEAK_FUNC(sub_82366D20) {
	__imp__sub_82366D20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82366DB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82366DC0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82366DCC:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82366DD0:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82303dc8
	ctx.lr = 0x82366DE0;
	sub_82303DC8(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// blt cr6,0x82366dd0
	if (ctx.cr6.lt) goto loc_82366DD0;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,64
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 64, ctx.xer);
	// blt cr6,0x82366dcc
	if (ctx.cr6.lt) goto loc_82366DCC;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82366DB8) {
	__imp__sub_82366DB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82366E00) {
	PPC_FUNC_PROLOGUE();
	// b 0x82303dc8
	sub_82303DC8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82366E00) {
	__imp__sub_82366E00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82366E04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82366E04) {
	__imp__sub_82366E04(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82366E08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82366E10;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82361c08
	ctx.lr = 0x82366E24;
	sub_82361C08(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x82366e48
	if (!ctx.cr6.eq) goto loc_82366E48;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r11,1664
	ctx.r4.s64 = ctx.r11.s64 + 1664;
	// li r3,9
	ctx.r3.s64 = 9;
	// bl 0x82280b08
	ctx.lr = 0x82366E40;
	sub_82280B08(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_82366E48:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82303dc8
	ctx.lr = 0x82366E54;
	sub_82303DC8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82366E08) {
	__imp__sub_82366E08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82366E5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82366E5C) {
	__imp__sub_82366E5C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82366E60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82366E68;
	__savegprlr_29(ctx, base);
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x823de024
	ctx.lr = 0x82366E70;
	__savefpr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82282260
	ctx.lr = 0x82366E78;
	sub_82282260(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f27,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f27.f64 = double(temp.f32);
	// lfs f28,12168(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f28.f64 = double(temp.f32);
	// fcmpu cr6,f1,f27
	ctx.cr6.compare(ctx.f1.f64, ctx.f27.f64);
	// bgt cr6,0x82366e94
	if (ctx.cr6.gt) goto loc_82366E94;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
loc_82366E94:
	// lis r11,-31809
	ctx.r11.s64 = -2084634624;
	// addi r30,r11,-12528
	ctx.r30.s64 = ctx.r11.s64 + -12528;
	// lfs f0,16(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// beq cr6,0x823670ac
	if (ctx.cr6.eq) goto loc_823670AC;
	// lis r11,0
	ctx.r11.s64 = 0;
	// stfs f1,16(r30)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fdivs f30,f1,f0
	ctx.f30.f64 = double(float(ctx.f1.f64 / ctx.f0.f64));
	// ori r9,r11,35232
	ctx.r9.u64 = ctx.r11.u64 | 35232;
	// li r31,8
	ctx.r31.s64 = 8;
	// lfs f29,2416(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2416);
	ctx.f29.f64 = double(temp.f32);
	// lwzx r11,r30,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// cmpwi cr6,r8,8
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 8, ctx.xer);
	// ble cr6,0x82366f60
	if (!ctx.cr6.gt) goto loc_82366F60;
	// addi r29,r30,27652
	ctx.r29.s64 = ctx.r30.s64 + 27652;
loc_82366ED8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82304498
	ctx.lr = 0x82366EE0;
	sub_82304498(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82366f40
	if (!ctx.cr6.eq) goto loc_82366F40;
	// lfs f31,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f31.f64 = double(temp.f32);
	// fcmpu cr6,f31,f27
	ctx.cr6.compare(ctx.f31.f64, ctx.f27.f64);
	// beq cr6,0x82366f40
	if (ctx.cr6.eq) goto loc_82366F40;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82304bf8
	ctx.lr = 0x82366F00;
	sub_82304BF8(ctx, base);
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// fsubs f0,f28,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f28.f64 - ctx.f31.f64));
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmadds f10,f31,f30,f0
	ctx.f10.f64 = double(float(ctx.f31.f64 * ctx.f30.f64 + ctx.f0.f64));
	// fmuls f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f10.f64));
	// fadds f1,f9,f29
	ctx.f1.f64 = double(float(ctx.f9.f64 + ctx.f29.f64));
	// bl 0x823dde20
	ctx.lr = 0x82366F28;
	sub_823DDE20(ctx, base);
	// frsp f8,f1
	ctx.fpscr.disableFlushMode();
	ctx.f8.f64 = double(float(ctx.f1.f64));
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fctiwz f7,f8
	ctx.f7.s64 = (ctx.f8.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f8.f64));
	// stfd f7,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f7.u64);
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x82304c10
	ctx.lr = 0x82366F40;
	sub_82304C10(ctx, base);
loc_82366F40:
	// lis r11,0
	ctx.r11.s64 = 0;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// ori r10,r11,35232
	ctx.r10.u64 = ctx.r11.u64 | 35232;
	// addi r29,r29,176
	ctx.r29.s64 = ctx.r29.s64 + 176;
	// lwzx r11,r30,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// cmpw cr6,r31,r9
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82366ed8
	if (ctx.cr6.lt) goto loc_82366ED8;
loc_82366F60:
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r31,40
	ctx.r31.s64 = 40;
	// ori r10,r11,35236
	ctx.r10.u64 = ctx.r11.u64 | 35236;
	// lwzx r11,r30,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// addi r9,r11,40
	ctx.r9.s64 = ctx.r11.s64 + 40;
	// cmpwi cr6,r9,40
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 40, ctx.xer);
	// ble cr6,0x8236700c
	if (!ctx.cr6.gt) goto loc_8236700C;
	// addis r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 65536;
	// addi r29,r11,-32252
	ctx.r29.s64 = ctx.r11.s64 + -32252;
loc_82366F84:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823045f8
	ctx.lr = 0x82366F8C;
	sub_823045F8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82366fec
	if (!ctx.cr6.eq) goto loc_82366FEC;
	// lfs f31,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f31.f64 = double(temp.f32);
	// fcmpu cr6,f31,f27
	ctx.cr6.compare(ctx.f31.f64, ctx.f27.f64);
	// beq cr6,0x82366fec
	if (ctx.cr6.eq) goto loc_82366FEC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82304c78
	ctx.lr = 0x82366FAC;
	sub_82304C78(ctx, base);
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// fsubs f0,f28,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f28.f64 - ctx.f31.f64));
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f12,88(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// fmadds f13,f31,f30,f0
	ctx.f13.f64 = double(float(ctx.f31.f64 * ctx.f30.f64 + ctx.f0.f64));
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fmuls f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fadds f1,f9,f29
	ctx.f1.f64 = double(float(ctx.f9.f64 + ctx.f29.f64));
	// bl 0x823dde20
	ctx.lr = 0x82366FD4;
	sub_823DDE20(ctx, base);
	// frsp f8,f1
	ctx.fpscr.disableFlushMode();
	ctx.f8.f64 = double(float(ctx.f1.f64));
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fctiwz f7,f8
	ctx.f7.s64 = (ctx.f8.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f8.f64));
	// stfd f7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f7.u64);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82304c90
	ctx.lr = 0x82366FEC;
	sub_82304C90(ctx, base);
loc_82366FEC:
	// lis r11,0
	ctx.r11.s64 = 0;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// ori r10,r11,35236
	ctx.r10.u64 = ctx.r11.u64 | 35236;
	// addi r29,r29,176
	ctx.r29.s64 = ctx.r29.s64 + 176;
	// lwzx r11,r30,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// addi r9,r11,40
	ctx.r9.s64 = ctx.r11.s64 + 40;
	// cmpw cr6,r31,r9
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82366f84
	if (ctx.cr6.lt) goto loc_82366F84;
loc_8236700C:
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
	// ori r10,r11,35228
	ctx.r10.u64 = ctx.r11.u64 | 35228;
	// lwzx r11,r30,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823670ac
	if (!ctx.cr6.gt) goto loc_823670AC;
	// addi r29,r30,26244
	ctx.r29.s64 = ctx.r30.s64 + 26244;
loc_82367028:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823043a8
	ctx.lr = 0x82367030;
	sub_823043A8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82367090
	if (!ctx.cr6.eq) goto loc_82367090;
	// lfs f31,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f31.f64 = double(temp.f32);
	// fcmpu cr6,f31,f27
	ctx.cr6.compare(ctx.f31.f64, ctx.f27.f64);
	// beq cr6,0x82367090
	if (ctx.cr6.eq) goto loc_82367090;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82304b78
	ctx.lr = 0x82367050;
	sub_82304B78(ctx, base);
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// fsubs f0,f28,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f28.f64 - ctx.f31.f64));
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f12,88(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// fmadds f13,f31,f30,f0
	ctx.f13.f64 = double(float(ctx.f31.f64 * ctx.f30.f64 + ctx.f0.f64));
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fmuls f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fadds f1,f9,f29
	ctx.f1.f64 = double(float(ctx.f9.f64 + ctx.f29.f64));
	// bl 0x823dde20
	ctx.lr = 0x82367078;
	sub_823DDE20(ctx, base);
	// frsp f8,f1
	ctx.fpscr.disableFlushMode();
	ctx.f8.f64 = double(float(ctx.f1.f64));
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fctiwz f7,f8
	ctx.f7.s64 = (ctx.f8.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f8.f64));
	// stfd f7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f7.u64);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82304b90
	ctx.lr = 0x82367090;
	sub_82304B90(ctx, base);
loc_82367090:
	// lis r11,0
	ctx.r11.s64 = 0;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// ori r10,r11,35228
	ctx.r10.u64 = ctx.r11.u64 | 35228;
	// addi r29,r29,176
	ctx.r29.s64 = ctx.r29.s64 + 176;
	// lwzx r11,r30,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82367028
	if (ctx.cr6.lt) goto loc_82367028;
loc_823670AC:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x823de070
	ctx.lr = 0x823670B8;
	__restfpr_27(ctx, base);
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82366E60) {
	__imp__sub_82366E60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823670BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823670BC) {
	__imp__sub_823670BC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823670C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,5876(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5876);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x823670dc
	if (!ctx.cr6.lt) goto loc_823670DC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f1,-23144(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -23144);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_823670DC:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,17264(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 17264);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823670C0) {
	__imp__sub_823670C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823670EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823670EC) {
	__imp__sub_823670EC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823670F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x823670F8;
	__savegprlr_25(ctx, base);
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x823de028
	ctx.lr = 0x82367100;
	__savefpr_28(ctx, base);
	// stwu r1,-464(r1)
	ea = -464 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31809
	ctx.r11.s64 = -2084634624;
	// mulli r10,r3,176
	ctx.r10.s64 = ctx.r3.s64 * 176;
	// addi r31,r11,-12528
	ctx.r31.s64 = ctx.r11.s64 + -12528;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// addi r11,r31,26076
	ctx.r11.s64 = ctx.r31.s64 + 26076;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r30,152
	ctx.r4.s64 = ctx.r30.s64 + 152;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// bl 0x82362fa0
	ctx.lr = 0x8236713C;
	sub_82362FA0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823627e8
	ctx.lr = 0x82367144;
	sub_823627E8(ctx, base);
	// mulli r10,r3,60
	ctx.r10.s64 = ctx.r3.s64 * 60;
	// lfs f12,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// addi r11,r31,20476
	ctx.r11.s64 = ctx.r31.s64 + 20476;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f0,5876(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5876);
	ctx.f0.f64 = double(temp.f32);
	// lfs f10,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f10,f12
	ctx.f9.f64 = double(float(ctx.f10.f64 - ctx.f12.f64));
	// lfs f8,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f8,f13
	ctx.f7.f64 = double(float(ctx.f8.f64 - ctx.f13.f64));
	// lfs f6,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f5,f6,f11
	ctx.f5.f64 = double(float(ctx.f6.f64 - ctx.f11.f64));
	// fmuls f4,f9,f9
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f9.f64));
	// fmadds f3,f7,f7,f4
	ctx.f3.f64 = double(float(ctx.f7.f64 * ctx.f7.f64 + ctx.f4.f64));
	// fmadds f2,f5,f5,f3
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f5.f64 + ctx.f3.f64));
	// fsqrts f29,f2
	ctx.f29.f64 = double(float(sqrt(ctx.f2.f64)));
	// fcmpu cr6,f29,f0
	ctx.cr6.compare(ctx.f29.f64, ctx.f0.f64);
	// bge cr6,0x823671a0
	if (!ctx.cr6.lt) goto loc_823671A0;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lfs f31,-23144(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -23144);
	ctx.f31.f64 = double(temp.f32);
	// b 0x823671ac
	goto loc_823671AC;
loc_823671A0:
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lfs f0,17264(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 17264);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f31,f29,f0
	ctx.f31.f64 = double(float(ctx.f29.f64 * ctx.f0.f64));
loc_823671AC:
	// cmpwi cr6,r27,3
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 3, ctx.xer);
	// beq cr6,0x82367230
	if (ctx.cr6.eq) goto loc_82367230;
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// fsubs f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// lfs f10,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f13,f10
	ctx.f9.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// lfs f8,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f11,f8
	ctx.f7.f64 = double(float(ctx.f11.f64 - ctx.f8.f64));
	// addi r11,r31,20488
	ctx.r11.s64 = ctx.r31.s64 + 20488;
	// lfs f6,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// lfs f0,12168(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f5,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f12,f12
	ctx.f4.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// lfs f3,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// fmadds f1,f9,f9,f4
	ctx.f1.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f4.f64));
	// fmadds f11,f7,f7,f1
	ctx.f11.f64 = double(float(ctx.f7.f64 * ctx.f7.f64 + ctx.f1.f64));
	// fsqrts f10,f11
	ctx.f10.f64 = double(float(sqrt(ctx.f11.f64)));
	// fneg f8,f10
	ctx.f8.u64 = ctx.f10.u64 ^ 0x8000000000000000;
	// fsel f4,f8,f0,f10
	ctx.f4.f64 = ctx.f8.f64 >= 0.0 ? ctx.f0.f64 : ctx.f10.f64;
	// fdivs f1,f0,f4
	ctx.f1.f64 = double(float(ctx.f0.f64 / ctx.f4.f64));
	// fmuls f0,f1,f7
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f7.f64));
	// fmuls f12,f12,f1
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f1.f64));
	// fmuls f11,f9,f1
	ctx.f11.f64 = double(float(ctx.f9.f64 * ctx.f1.f64));
	// fmuls f10,f5,f0
	ctx.f10.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// fmadds f9,f3,f12,f10
	ctx.f9.f64 = double(float(ctx.f3.f64 * ctx.f12.f64 + ctx.f10.f64));
	// fmadds f0,f2,f11,f9
	ctx.f0.f64 = double(float(ctx.f2.f64 * ctx.f11.f64 + ctx.f9.f64));
	// fcmpu cr6,f0,f6
	ctx.cr6.compare(ctx.f0.f64, ctx.f6.f64);
	// ble cr6,0x82367230
	if (!ctx.cr6.gt) goto loc_82367230;
	// stw r26,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r26.u32);
	// stfs f0,0(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
loc_82367230:
	// lwz r5,12(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// fmr f28,f13
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = ctx.f13.f64;
	// cmplwi cr6,r5,2046
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 2046, ctx.xer);
	// bne cr6,0x8236724c
	if (!ctx.cr6.eq) goto loc_8236724C;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r29,r11,-2264
	ctx.r29.s64 = ctx.r11.s64 + -2264;
	// b 0x82367278
	goto loc_82367278;
loc_8236724C:
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r29,r11,-2120
	ctx.r29.s64 = ctx.r11.s64 + -2120;
	// lwzx r9,r10,r25
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r25.u32);
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// std r8,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r8.u64);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fadds f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 + ctx.f13.f64));
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
loc_82367278:
	// cmpwi cr6,r27,1
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 1, ctx.xer);
	// beq cr6,0x823674d0
	if (ctx.cr6.eq) goto loc_823674D0;
	// cmpwi cr6,r27,2
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 2, ctx.xer);
	// beq cr6,0x823674a8
	if (ctx.cr6.eq) goto loc_823674A8;
	// cmpwi cr6,r27,3
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 3, ctx.xer);
	// bne cr6,0x823674fc
	if (!ctx.cr6.eq) goto loc_823674FC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,120(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 120);
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// addi r3,r9,5032
	ctx.r3.s64 = ctx.r9.s64 + 5032;
	// lfs f0,12260(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12260);
	ctx.f0.f64 = double(temp.f32);
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// fmuls f31,f31,f0
	ctx.f31.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
	// bl 0x822e84f0
	ctx.lr = 0x823672B0;
	sub_822E84F0(ctx, base);
	// lwz r8,12(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r31,r11,-1976
	ctx.r31.s64 = ctx.r11.s64 + -1976;
	// lwzx r5,r7,r25
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r25.u32);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x823672f0
	if (!ctx.cr6.eq) goto loc_823672F0;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82127f30
	ctx.lr = 0x823672EC;
	sub_82127F30(ctx, base);
	// b 0x823672fc
	goto loc_823672FC;
loc_823672F0:
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82127c70
	ctx.lr = 0x823672FC;
	sub_82127C70(ctx, base);
loc_823672FC:
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f13,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// lis r7,-32251
	ctx.r7.s64 = -2113601536;
	// li r9,7
	ctx.r9.s64 = 7;
	// addi r11,r7,5024
	ctx.r11.s64 = ctx.r7.s64 + 5024;
	// addi r10,r1,111
	ctx.r10.s64 = ctx.r1.s64 + 111;
	// lfs f0,13904(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 13904);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// fmuls f30,f31,f0
	ctx.f30.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// fsubs f12,f13,f30
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f30.f64));
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
loc_8236732C:
	// lbzu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stbu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x8236732c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8236732C;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82367340:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82367340
	if (!ctx.cr6.eq) goto loc_82367340;
	// subf r10,r10,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
loc_82367364:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82367364
	if (!ctx.cr6.eq) goto loc_82367364;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// lwz r3,120(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 120);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subfic r5,r9,256
	ctx.xer.ca = ctx.r9.u32 <= 256;
	ctx.r5.s64 = 256 - ctx.r9.s64;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x822ddaa8
	ctx.lr = 0x82367394;
	sub_822DDAA8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82127c70
	ctx.lr = 0x823673B0;
	sub_82127C70(ctx, base);
	// lfs f0,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// fsubs f13,f0,f30
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f30.f64));
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// cmplwi cr6,r4,2046
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 2046, ctx.xer);
	// bne cr6,0x823673d8
	if (!ctx.cr6.eq) goto loc_823673D8;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,5008
	ctx.r3.s64 = ctx.r11.s64 + 5008;
	// bl 0x822e84f0
	ctx.lr = 0x823673D4;
	sub_822E84F0(ctx, base);
	// b 0x823673e4
	goto loc_823673E4;
loc_823673D8:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,4988
	ctx.r3.s64 = ctx.r11.s64 + 4988;
	// bl 0x822e84f0
	ctx.lr = 0x823673E4;
	sub_822E84F0(ctx, base);
loc_823673E4:
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82127c70
	ctx.lr = 0x82367400;
	sub_82127C70(ctx, base);
	// stfd f29,24(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 24, ctx.f29.u64);
	// ld r4,24(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 24);
	// lfs f0,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,120(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 120);
	// fsubs f13,f0,f30
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f30.f64));
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// addi r3,r10,4964
	ctx.r3.s64 = ctx.r10.s64 + 4964;
	// lfs f2,48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f2.f64 = double(temp.f32);
	// stfd f2,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f2.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x822e84f0
	ctx.lr = 0x82367434;
	sub_822E84F0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82127c70
	ctx.lr = 0x82367450;
	sub_82127C70(ctx, base);
	// lfs f12,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f12,f30
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f30.f64));
	// stfs f11,88(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x823050c8
	ctx.lr = 0x82367468;
	sub_823050C8(ctx, base);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// addi r3,r8,4948
	ctx.r3.s64 = ctx.r8.s64 + 4948;
	// lfs f0,-14540(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -14540);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// stfd f1,24(r1)
	PPC_STORE_U64(ctx.r1.u32 + 24, ctx.f1.u64);
	// ld r4,24(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 24);
	// bl 0x822e84f0
	ctx.lr = 0x82367488;
	sub_822E84F0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82127c70
	ctx.lr = 0x823674A4;
	sub_82127C70(ctx, base);
	// b 0x823674f8
	goto loc_823674F8;
loc_823674A8:
	// lwz r11,120(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 120);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// li r8,1
	ctx.r8.s64 = 1;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r4,r10,-1976
	ctx.r4.s64 = ctx.r10.s64 + -1976;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82127c70
	ctx.lr = 0x823674CC;
	sub_82127C70(ctx, base);
	// lfs f13,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
loc_823674D0:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r25
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r25.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x823674fc
	if (!ctx.cr6.eq) goto loc_823674FC;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82128080
	ctx.lr = 0x823674F8;
	sub_82128080(ctx, base);
loc_823674F8:
	// lfs f13,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
loc_823674FC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f0,7932(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7932);
	ctx.f0.f64 = double(temp.f32);
	// fnmsubs f0,f31,f0,f13
	ctx.f0.f64 = double(float(-(ctx.f31.f64 * ctx.f0.f64 - ctx.f13.f64)));
	// fsubs f13,f0,f28
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f28.f64));
	// fctiwz f12,f13
	ctx.f12.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfiwx f12,r9,r25
	PPC_STORE_U32(ctx.r9.u32 + ctx.r25.u32, ctx.f12.u32);
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x823de074
	ctx.lr = 0x82367528;
	__restfpr_28(ctx, base);
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823670F0) {
	__imp__sub_823670F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236752C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8236752C) {
	__imp__sub_8236752C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82367530) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82367538;
	__savegprlr_28(ctx, base);
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// ld r12,-8192(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8192);
	// stwu r1,-8336(r1)
	ea = -8336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823676b0
	if (ctx.cr6.eq) goto loc_823676B0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r5,8192
	ctx.r5.s64 = 8192;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f0,13216(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 13216);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// bl 0x823de090
	ctx.lr = 0x82367574;
	sub_823DE090(ctx, base);
	// lis r11,-31809
	ctx.r11.s64 = -2084634624;
	// lis r9,0
	ctx.r9.s64 = 0;
	// addi r30,r11,-12528
	ctx.r30.s64 = ctx.r11.s64 + -12528;
	// ori r8,r9,35232
	ctx.r8.u64 = ctx.r9.u64 | 35232;
	// li r31,8
	ctx.r31.s64 = 8;
	// lwzx r11,r30,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r8.u32);
	// addi r7,r11,8
	ctx.r7.s64 = ctx.r11.s64 + 8;
	// cmpwi cr6,r7,8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 8, ctx.xer);
	// ble cr6,0x823675e0
	if (!ctx.cr6.gt) goto loc_823675E0;
loc_82367598:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82304498
	ctx.lr = 0x823675A0;
	sub_82304498(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823675c4
	if (!ctx.cr6.eq) goto loc_823675C4;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823670f0
	ctx.lr = 0x823675C4;
	sub_823670F0(ctx, base);
loc_823675C4:
	// lis r11,0
	ctx.r11.s64 = 0;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// ori r10,r11,35232
	ctx.r10.u64 = ctx.r11.u64 | 35232;
	// lwzx r11,r30,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// cmpw cr6,r31,r9
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82367598
	if (ctx.cr6.lt) goto loc_82367598;
loc_823675E0:
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r31,40
	ctx.r31.s64 = 40;
	// ori r10,r11,35236
	ctx.r10.u64 = ctx.r11.u64 | 35236;
	// lwzx r11,r30,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// addi r9,r11,40
	ctx.r9.s64 = ctx.r11.s64 + 40;
	// cmpwi cr6,r9,40
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 40, ctx.xer);
	// ble cr6,0x8236767c
	if (!ctx.cr6.gt) goto loc_8236767C;
	// addis r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 65536;
	// addi r29,r11,-32300
	ctx.r29.s64 = ctx.r11.s64 + -32300;
loc_82367604:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823045f8
	ctx.lr = 0x8236760C;
	sub_823045F8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8236765c
	if (!ctx.cr6.eq) goto loc_8236765C;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r9,r30,20756
	ctx.r9.s64 = ctx.r30.s64 + 20756;
	// lwz r8,56(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// srawi r7,r8,9
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1FF) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 9;
	// clrlwi r11,r7,26
	ctx.r11.u64 = ctx.r7.u32 & 0x3F;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r5,r6,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// lbzx r4,r5,r9
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r5.u32 + ctx.r9.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8236765c
	if (ctx.cr6.eq) goto loc_8236765C;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823670f0
	ctx.lr = 0x8236765C;
	sub_823670F0(ctx, base);
loc_8236765C:
	// lis r11,0
	ctx.r11.s64 = 0;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// ori r10,r11,35236
	ctx.r10.u64 = ctx.r11.u64 | 35236;
	// addi r29,r29,176
	ctx.r29.s64 = ctx.r29.s64 + 176;
	// lwzx r11,r30,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// addi r9,r11,40
	ctx.r9.s64 = ctx.r11.s64 + 40;
	// cmpw cr6,r31,r9
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82367604
	if (ctx.cr6.lt) goto loc_82367604;
loc_8236767C:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x823676b0
	if (ctx.cr6.eq) goto loc_823676B0;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lfs f13,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,5044(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5044);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x823676b0
	if (ctx.cr6.lt) goto loc_823676B0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x823670f0
	ctx.lr = 0x823676B0;
	sub_823670F0(ctx, base);
loc_823676B0:
	// addi r1,r1,8336
	ctx.r1.s64 = ctx.r1.s64 + 8336;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82367530) {
	__imp__sub_82367530(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823676B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x823676C0;
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
	// li r3,20
	ctx.r3.s64 = 20;
	// li r28,2046
	ctx.r28.s64 = 2046;
	// bl 0x822ec4e8
	ctx.lr = 0x823676D8;
	sub_822EC4E8(ctx, base);
	// lis r10,-31809
	ctx.r10.s64 = -2084634624;
	// lis r11,-31809
	ctx.r11.s64 = -2084634624;
	// addi r9,r10,22712
	ctx.r9.s64 = ctx.r10.s64 + 22712;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r10,r11,-12528
	ctx.r10.s64 = ctx.r11.s64 + -12528;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// addi r11,r10,20532
	ctx.r11.s64 = ctx.r10.s64 + 20532;
	// lwz r8,512(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 512);
	// stw r30,512(r9)
	PPC_STORE_U32(ctx.r9.u32 + 512, ctx.r30.u32);
loc_823676FC:
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x823677b4
	if (!ctx.cr6.eq) goto loc_823677B4;
	// addi r11,r11,60
	ctx.r11.s64 = ctx.r11.s64 + 60;
	// addi r7,r10,20712
	ctx.r7.s64 = ctx.r10.s64 + 20712;
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x823676fc
	if (ctx.cr6.lt) goto loc_823676FC;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_8236771C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8236779c
	if (ctx.cr6.eq) goto loc_8236779C;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x8236779c
	if (!ctx.cr6.gt) goto loc_8236779C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// addi r31,r9,4
	ctx.r31.s64 = ctx.r9.s64 + 4;
	// lfs f31,12168(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,5484(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f30.f64 = double(temp.f32);
loc_82367748:
	// lwz r3,-4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// bl 0x822ddcf8
	ctx.lr = 0x82367750;
	sub_822DDCF8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82367790
	if (ctx.cr6.eq) goto loc_82367790;
	// li r11,1
	ctx.r11.s64 = 1;
	// fmr f4,f31
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f31.f64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// stb r30,95(r1)
	PPC_STORE_U8(ctx.r1.u32 + 95, ctx.r30.u8);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x82364558
	ctx.lr = 0x82367790;
	sub_82364558(ctx, base);
loc_82367790:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// bne 0x82367748
	if (!ctx.cr0.eq) goto loc_82367748;
loc_8236779C:
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x822ec500
	ctx.lr = 0x823677A4;
	sub_822EC500(ctx, base);
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
loc_823677B4:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8236771c
	goto loc_8236771C;
}

PPC_WEAK_FUNC(sub_823676B8) {
	__imp__sub_823676B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823677BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823677BC) {
	__imp__sub_823677BC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823677C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31809
	ctx.r11.s64 = -2084634624;
	// addi r10,r11,-12528
	ctx.r10.s64 = ctx.r11.s64 + -12528;
	// lwz r11,24(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bgt cr6,0x823677dc
	if (ctx.cr6.gt) goto loc_823677DC;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_823677DC:
	// lis r10,-32155
	ctx.r10.s64 = -2107310080;
	// li r11,6
	ctx.r11.s64 = 6;
	// addi r9,r10,-30024
	ctx.r9.s64 = ctx.r10.s64 + -30024;
	// rlwinm r8,r11,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// lwz r10,12(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// srawi r7,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r10.s32 >> 31;
	// subfc r6,r11,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r11.u32;
	ctx.r6.s64 = ctx.r10.s64 - ctx.r11.s64;
	// adde r3,r8,r7
	temp.u8 = (ctx.r8.u32 + ctx.r7.u32 < ctx.r8.u32) | (ctx.r8.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ctx.r8.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823677C0) {
	__imp__sub_823677C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82367800) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r3,42
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 42, ctx.xer);
	// blt cr6,0x82367814
	if (ctx.cr6.lt) goto loc_82367814;
	// cmpwi cr6,r3,43
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 43, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x82367818
	if (!ctx.cr6.gt) goto loc_82367818;
loc_82367814:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82367818:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82367800) {
	__imp__sub_82367800(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82367820) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82367828;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31809
	ctx.r11.s64 = -2084634624;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r30,r11,-12528
	ctx.r30.s64 = ctx.r11.s64 + -12528;
	// lbz r11,-12528(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + -12528);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82367a30
	if (ctx.cr6.eq) goto loc_82367A30;
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x822ec4e8
	ctx.lr = 0x8236784C;
	sub_822EC4E8(ctx, base);
	// rlwinm r11,r29,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823678f8
	if (!ctx.cr6.eq) goto loc_823678F8;
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
	// ori r10,r11,35228
	ctx.r10.u64 = ctx.r11.u64 | 35228;
	// lwzx r11,r30,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823678a4
	if (!ctx.cr6.gt) goto loc_823678A4;
loc_82367870:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823043a8
	ctx.lr = 0x82367878;
	sub_823043A8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8236788c
	if (!ctx.cr6.eq) goto loc_8236788C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823042d8
	ctx.lr = 0x8236788C;
	sub_823042D8(ctx, base);
loc_8236788C:
	// lis r11,0
	ctx.r11.s64 = 0;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// ori r10,r11,35228
	ctx.r10.u64 = ctx.r11.u64 | 35228;
	// lwzx r11,r30,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82367870
	if (ctx.cr6.lt) goto loc_82367870;
loc_823678A4:
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r31,8
	ctx.r31.s64 = 8;
	// ori r10,r11,35232
	ctx.r10.u64 = ctx.r11.u64 | 35232;
	// lwzx r11,r30,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// cmpwi cr6,r9,8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 8, ctx.xer);
	// ble cr6,0x823678f8
	if (!ctx.cr6.gt) goto loc_823678F8;
loc_823678C0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82304498
	ctx.lr = 0x823678C8;
	sub_82304498(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823678dc
	if (!ctx.cr6.eq) goto loc_823678DC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823043c8
	ctx.lr = 0x823678DC;
	sub_823043C8(ctx, base);
loc_823678DC:
	// lis r11,0
	ctx.r11.s64 = 0;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// ori r10,r11,35232
	ctx.r10.u64 = ctx.r11.u64 | 35232;
	// lwzx r11,r30,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// cmpw cr6,r31,r9
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x823678c0
	if (ctx.cr6.lt) goto loc_823678C0;
loc_823678F8:
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r31,40
	ctx.r31.s64 = 40;
	// ori r10,r11,35236
	ctx.r10.u64 = ctx.r11.u64 | 35236;
	// lwzx r11,r30,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// addi r9,r11,40
	ctx.r9.s64 = ctx.r11.s64 + 40;
	// cmpwi cr6,r9,40
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 40, ctx.xer);
	// ble cr6,0x82367998
	if (!ctx.cr6.gt) goto loc_82367998;
loc_82367914:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823045f8
	ctx.lr = 0x8236791C;
	sub_823045F8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8236797c
	if (!ctx.cr6.eq) goto loc_8236797C;
	// rlwinm r11,r29,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82367944
	if (ctx.cr6.eq) goto loc_82367944;
	// cmpwi cr6,r31,40
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 40, ctx.xer);
	// beq cr6,0x8236797c
	if (ctx.cr6.eq) goto loc_8236797C;
	// cmpwi cr6,r31,41
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 41, ctx.xer);
	// beq cr6,0x8236797c
	if (ctx.cr6.eq) goto loc_8236797C;
loc_82367944:
	// rlwinm r11,r29,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82367974
	if (ctx.cr6.eq) goto loc_82367974;
	// cmpwi cr6,r31,42
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 42, ctx.xer);
	// blt cr6,0x82367964
	if (ctx.cr6.lt) goto loc_82367964;
	// cmpwi cr6,r31,43
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 43, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x82367968
	if (!ctx.cr6.gt) goto loc_82367968;
loc_82367964:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82367968:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8236797c
	if (!ctx.cr6.eq) goto loc_8236797C;
loc_82367974:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823044b8
	ctx.lr = 0x8236797C;
	sub_823044B8(ctx, base);
loc_8236797C:
	// lis r11,0
	ctx.r11.s64 = 0;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// ori r10,r11,35236
	ctx.r10.u64 = ctx.r11.u64 | 35236;
	// lwzx r11,r30,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// addi r9,r11,40
	ctx.r9.s64 = ctx.r11.s64 + 40;
	// cmpw cr6,r31,r9
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82367914
	if (ctx.cr6.lt) goto loc_82367914;
loc_82367998:
	// clrlwi r11,r29,31
	ctx.r11.u64 = ctx.r29.u32 & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823679c0
	if (!ctx.cr6.eq) goto loc_823679C0;
	// li r31,1
	ctx.r31.s64 = 1;
loc_823679A8:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823669e8
	ctx.lr = 0x823679B4;
	sub_823669E8(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,4
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 4, ctx.xer);
	// blt cr6,0x823679a8
	if (ctx.cr6.lt) goto loc_823679A8;
loc_823679C0:
	// rlwinm r11,r29,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x10;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823679e8
	if (!ctx.cr6.eq) goto loc_823679E8;
	// li r31,1
	ctx.r31.s64 = 1;
loc_823679D0:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82366010
	ctx.lr = 0x823679DC;
	sub_82366010(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,5
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 5, ctx.xer);
	// blt cr6,0x823679d0
	if (ctx.cr6.lt) goto loc_823679D0;
loc_823679E8:
	// li r29,0
	ctx.r29.s64 = 0;
loc_823679EC:
	// li r30,0
	ctx.r30.s64 = 0;
loc_823679F0:
	// li r31,0
	ctx.r31.s64 = 0;
loc_823679F4:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82303dc8
	ctx.lr = 0x82367A04;
	sub_82303DC8(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// blt cr6,0x823679f4
	if (ctx.cr6.lt) goto loc_823679F4;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,64
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 64, ctx.xer);
	// blt cr6,0x823679f0
	if (ctx.cr6.lt) goto loc_823679F0;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpwi cr6,r29,2
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 2, ctx.xer);
	// blt cr6,0x823679ec
	if (ctx.cr6.lt) goto loc_823679EC;
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x822ec500
	ctx.lr = 0x82367A30;
	sub_822EC500(ctx, base);
loc_82367A30:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82367820) {
	__imp__sub_82367820(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82367A38) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fneg f0,f1
	ctx.f0.u64 = ctx.f1.u64 ^ 0x8000000000000000;
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fneg f13,f2
	ctx.f13.u64 = ctx.f2.u64 ^ 0x8000000000000000;
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// fmr f31,f3
	ctx.f31.f64 = ctx.f3.f64;
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// lfs f0,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x822d7c78
	ctx.lr = 0x82367A84;
	sub_822D7C78(ctx, base);
	// lfs f12,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f11.f64 = double(temp.f32);
	// li r6,0
	ctx.r6.s64 = 0;
	// fadds f10,f11,f12
	ctx.f10.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// stfs f10,84(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822da518
	ctx.lr = 0x82367AA8;
	sub_822DA518(ctx, base);
	// lfs f9,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f9,f31
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f31.f64));
	// lfs f7,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f7,f31
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f31.f64));
	// lfs f5,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f5,f31
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f31.f64));
	// stfs f8,0(r30)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// stfs f6,4(r30)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// stfs f4,8(r30)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// lfs f3,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// fadds f2,f3,f8
	ctx.f2.f64 = double(float(ctx.f3.f64 + ctx.f8.f64));
	// stfs f2,0(r30)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// lfs f1,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// fadds f0,f1,f6
	ctx.f0.f64 = double(float(ctx.f1.f64 + ctx.f6.f64));
	// stfs f0,4(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// lfs f13,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f13,f4
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f4.f64));
	// stfs f12,8(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-32(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82367A38) {
	__imp__sub_82367A38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82367B0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82367B0C) {
	__imp__sub_82367B0C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82367B10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82367B18;
	__savegprlr_28(ctx, base);
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x823de028
	ctx.lr = 0x82367B20;
	__savefpr_28(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31937
	ctx.r11.s64 = -2093023232;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r31,r11,-17592
	ctx.r31.s64 = ctx.r11.s64 + -17592;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r7,r31,68
	ctx.r7.s64 = ctx.r31.s64 + 68;
	// lwz r11,-17592(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17592);
	// lfs f30,-14540(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -14540);
	ctx.f30.f64 = double(temp.f32);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f31,5484(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f31.f64 = double(temp.f32);
	// fmr f29,f31
	ctx.f29.f64 = ctx.f31.f64;
	// fmr f28,f31
	ctx.f28.f64 = ctx.f31.f64;
	// lwzx r8,r9,r7
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// addi r10,r8,-2
	ctx.r10.s64 = ctx.r8.s64 + -2;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bgt cr6,0x82367e50
	if (ctx.cr6.gt) goto loc_82367E50;
	// lis r7,-32249
	ctx.r7.s64 = -2113470464;
	// addi r28,r7,-28736
	ctx.r28.s64 = ctx.r7.s64 + -28736;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82367c0c
	if (ctx.cr6.eq) goto loc_82367C0C;
	// bdz 0x82367bd8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82367BD8;
	// bdz 0x82367ba4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82367BA4;
	// cmpwi cr6,r8,4
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 4, ctx.xer);
	// ble cr6,0x82367b94
	if (!ctx.cr6.gt) goto loc_82367B94;
	// addi r11,r31,100
	ctx.r11.s64 = ctx.r31.s64 + 100;
	// lwzx r10,r9,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lwz r3,16(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// b 0x82367b98
	goto loc_82367B98;
loc_82367B94:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_82367B98:
	// bl 0x823dec00
	ctx.lr = 0x82367B9C;
	sub_823DEC00(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// frsp f28,f1
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = double(float(ctx.f1.f64));
loc_82367BA4:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r31,68
	ctx.r10.s64 = ctx.r31.s64 + 68;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// ble cr6,0x82367bc8
	if (!ctx.cr6.gt) goto loc_82367BC8;
	// addi r10,r31,100
	ctx.r10.s64 = ctx.r31.s64 + 100;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r3,12(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// b 0x82367bcc
	goto loc_82367BCC;
loc_82367BC8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_82367BCC:
	// bl 0x823dec00
	ctx.lr = 0x82367BD0;
	sub_823DEC00(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// frsp f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = double(float(ctx.f1.f64));
loc_82367BD8:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r31,68
	ctx.r10.s64 = ctx.r31.s64 + 68;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// ble cr6,0x82367bfc
	if (!ctx.cr6.gt) goto loc_82367BFC;
	// addi r10,r31,100
	ctx.r10.s64 = ctx.r31.s64 + 100;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r3,8(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// b 0x82367c00
	goto loc_82367C00;
loc_82367BFC:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_82367C00:
	// bl 0x823dec00
	ctx.lr = 0x82367C04;
	sub_823DEC00(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// frsp f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = double(float(ctx.f1.f64));
loc_82367C0C:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r31,68
	ctx.r10.s64 = ctx.r31.s64 + 68;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// ble cr6,0x82367c30
	if (!ctx.cr6.gt) goto loc_82367C30;
	// addi r10,r31,100
	ctx.r10.s64 = ctx.r31.s64 + 100;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r3,4(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x82367c34
	goto loc_82367C34;
loc_82367C30:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_82367C34:
	// bl 0x822ddd08
	ctx.lr = 0x82367C38;
	sub_822DDD08(ctx, base);
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
	// ble cr6,0x82367c60
	if (!ctx.cr6.gt) goto loc_82367C60;
	// addi r10,r31,100
	ctx.r10.s64 = ctx.r31.s64 + 100;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r3,4(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x82367c64
	goto loc_82367C64;
loc_82367C60:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_82367C64:
	// bl 0x822ddd08
	ctx.lr = 0x82367C68;
	sub_822DDD08(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82367cdc
	if (!ctx.cr6.eq) goto loc_82367CDC;
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
	// ble cr6,0x82367cb8
	if (!ctx.cr6.gt) goto loc_82367CB8;
	// addi r10,r31,100
	ctx.r10.s64 = ctx.r31.s64 + 100;
	// li r3,14
	ctx.r3.s64 = 14;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,5212
	ctx.r4.s64 = ctx.r11.s64 + 5212;
	// lwz r5,4(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// bl 0x82280b08
	ctx.lr = 0x82367CA8;
	sub_82280B08(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x823de074
	ctx.lr = 0x82367CB4;
	__restfpr_28(ctx, base);
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_82367CB8:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r11,5212
	ctx.r4.s64 = ctx.r11.s64 + 5212;
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x82280b08
	ctx.lr = 0x82367CCC;
	sub_82280B08(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x823de074
	ctx.lr = 0x82367CD8;
	__restfpr_28(ctx, base);
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_82367CDC:
	// lwz r11,56(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 56);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82367d10
	if (ctx.cr6.eq) goto loc_82367D10;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r3,14
	ctx.r3.s64 = 14;
	// addi r4,r11,5168
	ctx.r4.s64 = ctx.r11.s64 + 5168;
	// bl 0x82280b08
	ctx.lr = 0x82367D00;
	sub_82280B08(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x823de074
	ctx.lr = 0x82367D0C;
	__restfpr_28(ctx, base);
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_82367D10:
	// lis r11,-31809
	ctx.r11.s64 = -2084634624;
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// fmr f2,f28
	ctx.f2.f64 = ctx.f28.f64;
	// addi r30,r11,-12528
	ctx.r30.s64 = ctx.r11.s64 + -12528;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// addi r3,r30,20476
	ctx.r3.s64 = ctx.r30.s64 + 20476;
	// bl 0x82367a38
	ctx.lr = 0x82367D30;
	sub_82367A38(ctx, base);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r8,20528(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20528);
	// li r6,1
	ctx.r6.s64 = 1;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// stw r6,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r6.u32);
	// lfs f4,12168(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 12168);
	ctx.f4.f64 = double(temp.f32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stb r11,95(r1)
	PPC_STORE_U8(ctx.r1.u32 + 95, ctx.r11.u8);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// fmr f3,f4
	ctx.f3.f64 = ctx.f4.f64;
	// fmr f2,f4
	ctx.f2.f64 = ctx.f4.f64;
	// bl 0x82364558
	ctx.lr = 0x82367D74;
	sub_82364558(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r31,68
	ctx.r5.s64 = ctx.r31.s64 + 68;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r11,r5
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r5.u32);
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// ble cr6,0x82367d9c
	if (!ctx.cr6.gt) goto loc_82367D9C;
	// addi r10,r31,100
	ctx.r10.s64 = ctx.r31.s64 + 100;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r5,4(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x82367da0
	goto loc_82367DA0;
loc_82367D9C:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
loc_82367DA0:
	// lfs f3,136(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f3.f64 = double(temp.f32);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lfs f2,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f2.f64 = double(temp.f32);
	// li r3,14
	ctx.r3.s64 = 14;
	// lfs f1,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f1.f64 = double(temp.f32);
	// addi r4,r11,5112
	ctx.r4.s64 = ctx.r11.s64 + 5112;
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
	// bl 0x82280900
	ctx.lr = 0x82367DD4;
	sub_82280900(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,11388(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 11388);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f30,f0
	ctx.cr6.compare(ctx.f30.f64, ctx.f0.f64);
	// bge cr6,0x82367df0
	if (!ctx.cr6.lt) goto loc_82367DF0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,2416(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2416);
	ctx.f1.f64 = double(temp.f32);
	// b 0x82367df8
	goto loc_82367DF8;
loc_82367DF0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,6820(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6820);
	ctx.f1.f64 = double(temp.f32);
loc_82367DF8:
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
	// ble cr6,0x82367e20
	if (!ctx.cr6.gt) goto loc_82367E20;
	// addi r10,r31,100
	ctx.r10.s64 = ctx.r31.s64 + 100;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r6,4(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x82367e24
	goto loc_82367E24;
loc_82367E20:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
loc_82367E24:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r4,r11,5096
	ctx.r4.s64 = ctx.r11.s64 + 5096;
	// li r8,200
	ctx.r8.s64 = 200;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82127f30
	ctx.lr = 0x82367E40;
	sub_82127F30(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x823de074
	ctx.lr = 0x82367E4C;
	__restfpr_28(ctx, base);
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_82367E50:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x82367e68
	if (!ctx.cr6.gt) goto loc_82367E68;
	// addi r11,r31,100
	ctx.r11.s64 = ctx.r31.s64 + 100;
	// lwzx r10,r9,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lwz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x82367e70
	goto loc_82367E70;
loc_82367E68:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r5,r11,-28736
	ctx.r5.s64 = ctx.r11.s64 + -28736;
loc_82367E70:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,5048
	ctx.r4.s64 = ctx.r11.s64 + 5048;
	// bl 0x82280900
	ctx.lr = 0x82367E80;
	sub_82280900(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x823de074
	ctx.lr = 0x82367E8C;
	__restfpr_28(ctx, base);
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82367B10) {
	__imp__sub_82367B10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82367E90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82367E98;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82367f0c
	if (ctx.cr6.eq) goto loc_82367F0C;
	// bl 0x822e8058
	ctx.lr = 0x82367EBC;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82367ed0
	if (!ctx.cr6.eq) goto loc_82367ED0;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_82367ED0:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e8058
	ctx.lr = 0x82367EDC;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82367eec
	if (!ctx.cr6.eq) goto loc_82367EEC;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_82367EEC:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// clrlwi r8,r30,24
	ctx.r8.u64 = ctx.r30.u32 & 0xFF;
	// addi r4,r11,5248
	ctx.r4.s64 = ctx.r11.s64 + 5248;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r3,9
	ctx.r3.s64 = 9;
	// bl 0x82280b08
	ctx.lr = 0x82367F0C;
	sub_82280B08(ctx, base);
loc_82367F0C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82367E90) {
	__imp__sub_82367E90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82367F18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf44
	ctx.lr = 0x82367F20;
	__savegprlr_15(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31809
	ctx.r10.s64 = -2084634624;
	// stw r3,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r3.u32);
	// li r20,0
	ctx.r20.s64 = 0;
	// addi r29,r10,-12528
	ctx.r29.s64 = ctx.r10.s64 + -12528;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// addi r17,r10,5676
	ctx.r17.s64 = ctx.r10.s64 + 5676;
	// stw r20,26072(r29)
	PPC_STORE_U32(ctx.r29.u32 + 26072, ctx.r20.u32);
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x822e5ed0
	ctx.lr = 0x82367F4C;
	sub_822E5ED0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822e60c0
	ctx.lr = 0x82367F54;
	sub_822E60C0(ctx, base);
	// addi r3,r1,308
	ctx.r3.s64 = ctx.r1.s64 + 308;
	// bl 0x822e6d10
	ctx.lr = 0x82367F5C;
	sub_822E6D10(ctx, base);
	// lwz r11,308(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82368310
	if (ctx.cr6.eq) goto loc_82368310;
	// lis r30,-32251
	ctx.r30.s64 = -2113601536;
	// lis r31,-32251
	ctx.r31.s64 = -2113601536;
	// lis r3,-32251
	ctx.r3.s64 = -2113601536;
	// lis r4,-32251
	ctx.r4.s64 = -2113601536;
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// lis r6,-32251
	ctx.r6.s64 = -2113601536;
	// lis r7,-32251
	ctx.r7.s64 = -2113601536;
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r27,r30,5248
	ctx.r27.s64 = ctx.r30.s64 + 5248;
	// addi r15,r31,5612
	ctx.r15.s64 = ctx.r31.s64 + 5612;
	// addi r18,r3,5520
	ctx.r18.s64 = ctx.r3.s64 + 5520;
	// addi r19,r4,5424
	ctx.r19.s64 = ctx.r4.s64 + 5424;
	// addi r26,r5,-3344
	ctx.r26.s64 = ctx.r5.s64 + -3344;
	// addi r25,r6,5412
	ctx.r25.s64 = ctx.r6.s64 + 5412;
	// addi r24,r7,5400
	ctx.r24.s64 = ctx.r7.s64 + 5400;
	// addi r23,r8,5384
	ctx.r23.s64 = ctx.r8.s64 + 5384;
	// addi r22,r9,5380
	ctx.r22.s64 = ctx.r9.s64 + 5380;
	// addi r21,r10,5376
	ctx.r21.s64 = ctx.r10.s64 + 5376;
	// addi r16,r11,5320
	ctx.r16.s64 = ctx.r11.s64 + 5320;
loc_82367FC4:
	// lbz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823682f0
	if (ctx.cr6.eq) goto loc_823682F0;
	// cmpwi cr6,r11,35
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 35, ctx.xer);
	// beq cr6,0x823682f0
	if (ctx.cr6.eq) goto loc_823682F0;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_82367FE0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82367fe0
	if (!ctx.cr6.eq) goto loc_82367FE0;
	// subf r11,r28,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r28.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplwi cr6,r10,64
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 64, ctx.xer);
	// ble cr6,0x82368020
	if (!ctx.cr6.gt) goto loc_82368020;
	// bl 0x822e5fb0
	ctx.lr = 0x82368008;
	sub_822E5FB0(ctx, base);
	// mr r7,r17
	ctx.r7.u64 = ctx.r17.u64;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,64
	ctx.r5.s64 = 64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822830e8
	ctx.lr = 0x82368020;
	sub_822830E8(ctx, base);
loc_82368020:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// subf r10,r28,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r28.s64;
loc_8236802C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stbx r9,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne cr6,0x8236802c
	if (!ctx.cr6.eq) goto loc_8236802C;
	// addi r3,r1,308
	ctx.r3.s64 = ctx.r1.s64 + 308;
	// bl 0x822e6d78
	ctx.lr = 0x82368048;
	sub_822E6D78(ctx, base);
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82368070
	if (!ctx.cr6.eq) goto loc_82368070;
	// lwz r11,26072(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26072);
	// addi r9,r29,20752
	ctx.r9.s64 = ctx.r29.s64 + 20752;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r7,r8,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// stwx r20,r7,r9
	PPC_STORE_U32(ctx.r7.u32 + ctx.r9.u32, ctx.r20.u32);
	// b 0x8236808c
	goto loc_8236808C;
loc_82368070:
	// bl 0x823deaf8
	ctx.lr = 0x82368074;
	sub_823DEAF8(ctx, base);
	// lwz r11,26072(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26072);
	// addi r9,r29,20752
	ctx.r9.s64 = ctx.r29.s64 + 20752;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r7,r8,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// stwx r3,r7,r9
	PPC_STORE_U32(ctx.r7.u32 + ctx.r9.u32, ctx.r3.u32);
loc_8236808C:
	// addi r3,r1,308
	ctx.r3.s64 = ctx.r1.s64 + 308;
	// bl 0x822e6d78
	ctx.lr = 0x82368094;
	sub_822E6D78(ctx, base);
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823680ec
	if (ctx.cr6.eq) goto loc_823680EC;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// bl 0x822e8058
	ctx.lr = 0x823680AC;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823680bc
	if (!ctx.cr6.eq) goto loc_823680BC;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x823680f0
	goto loc_823680F0;
loc_823680BC:
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e8058
	ctx.lr = 0x823680C8;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823680ec
	if (ctx.cr6.eq) goto loc_823680EC;
	// mr r7,r21
	ctx.r7.u64 = ctx.r21.u64;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r3,9
	ctx.r3.s64 = 9;
	// bl 0x82280b08
	ctx.lr = 0x823680EC;
	sub_82280B08(ctx, base);
loc_823680EC:
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_823680F0:
	// lwz r10,26072(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26072);
	// addi r8,r29,20756
	ctx.r8.s64 = ctx.r29.s64 + 20756;
	// addi r3,r1,308
	ctx.r3.s64 = ctx.r1.s64 + 308;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r6,r7,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// stbx r11,r6,r8
	PPC_STORE_U8(ctx.r6.u32 + ctx.r8.u32, ctx.r11.u8);
	// bl 0x822e6d78
	ctx.lr = 0x82368110;
	sub_822E6D78(ctx, base);
	// lbz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82368168
	if (ctx.cr6.eq) goto loc_82368168;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x822e8058
	ctx.lr = 0x82368128;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82368168
	if (ctx.cr6.eq) goto loc_82368168;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e8058
	ctx.lr = 0x8236813C;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8236814c
	if (!ctx.cr6.eq) goto loc_8236814C;
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// b 0x8236816c
	goto loc_8236816C;
loc_8236814C:
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r3,9
	ctx.r3.s64 = 9;
	// bl 0x82280b08
	ctx.lr = 0x82368168;
	sub_82280B08(ctx, base);
loc_82368168:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8236816C:
	// lwz r10,26072(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26072);
	// addi r8,r29,20757
	ctx.r8.s64 = ctx.r29.s64 + 20757;
	// addi r3,r1,308
	ctx.r3.s64 = ctx.r1.s64 + 308;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r6,r7,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// stbx r11,r6,r8
	PPC_STORE_U8(ctx.r6.u32 + ctx.r8.u32, ctx.r11.u8);
	// bl 0x822e6d78
	ctx.lr = 0x8236818C;
	sub_822E6D78(ctx, base);
	// lbz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x823681e4
	if (ctx.cr6.eq) goto loc_823681E4;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x822e8058
	ctx.lr = 0x823681A4;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823681e4
	if (ctx.cr6.eq) goto loc_823681E4;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e8058
	ctx.lr = 0x823681B8;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823681c8
	if (!ctx.cr6.eq) goto loc_823681C8;
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// b 0x823681e8
	goto loc_823681E8;
loc_823681C8:
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r3,9
	ctx.r3.s64 = 9;
	// bl 0x82280b08
	ctx.lr = 0x823681E4;
	sub_82280B08(ctx, base);
loc_823681E4:
	// li r11,1
	ctx.r11.s64 = 1;
loc_823681E8:
	// lwz r10,26072(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26072);
	// addi r8,r29,20758
	ctx.r8.s64 = ctx.r29.s64 + 20758;
	// addi r3,r1,308
	ctx.r3.s64 = ctx.r1.s64 + 308;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r6,r7,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// stbx r11,r6,r8
	PPC_STORE_U8(ctx.r6.u32 + ctx.r8.u32, ctx.r11.u8);
	// bl 0x822e6d78
	ctx.lr = 0x82368208;
	sub_822E6D78(ctx, base);
	// lbz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82368220
	if (!ctx.cr6.eq) goto loc_82368220;
	// li r30,52
	ctx.r30.s64 = 52;
	// b 0x8236826c
	goto loc_8236826C;
loc_82368220:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823deaf8
	ctx.lr = 0x82368228;
	sub_823DEAF8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bgt cr6,0x82368244
	if (ctx.cr6.gt) goto loc_82368244;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// b 0x82368258
	goto loc_82368258;
loc_82368244:
	// cmpwi cr6,r30,52
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 52, ctx.xer);
	// ble cr6,0x8236826c
	if (!ctx.cr6.gt) goto loc_8236826C;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,52
	ctx.r5.s64 = 52;
loc_82368258:
	// li r8,52
	ctx.r8.s64 = 52;
	// mr r7,r17
	ctx.r7.u64 = ctx.r17.u64;
	// li r3,9
	ctx.r3.s64 = 9;
	// li r30,52
	ctx.r30.s64 = 52;
	// bl 0x82280b08
	ctx.lr = 0x8236826C;
	sub_82280B08(ctx, base);
loc_8236826C:
	// lwz r11,26072(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26072);
	// addi r10,r1,79
	ctx.r10.s64 = ctx.r1.s64 + 79;
	// addi r9,r29,20687
	ctx.r9.s64 = ctx.r29.s64 + 20687;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
loc_82368288:
	// lbzu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stbu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r11.u32 = ea;
	// bne cr6,0x82368288
	if (!ctx.cr6.eq) goto loc_82368288;
	// lwz r11,26072(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26072);
	// addi r9,r29,20760
	ctx.r9.s64 = ctx.r29.s64 + 20760;
	// addi r8,r29,20764
	ctx.r8.s64 = ctx.r29.s64 + 20764;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r6,r7,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// stwx r30,r6,r9
	PPC_STORE_U32(ctx.r6.u32 + ctx.r9.u32, ctx.r30.u32);
	// lwz r11,26072(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26072);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r4,r5,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// stwx r20,r4,r8
	PPC_STORE_U32(ctx.r4.u32 + ctx.r8.u32, ctx.r20.u32);
	// lwz r11,26072(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26072);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,26072(r29)
	PPC_STORE_U32(ctx.r29.u32 + 26072, ctx.r11.u32);
	// cmpwi cr6,r11,64
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 64, ctx.xer);
	// ble cr6,0x823682f0
	if (!ctx.cr6.gt) goto loc_823682F0;
	// bl 0x822e5fb0
	ctx.lr = 0x823682E0;
	sub_822E5FB0(ctx, base);
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// li r5,64
	ctx.r5.s64 = 64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822830e8
	ctx.lr = 0x823682F0;
	sub_822830E8(ctx, base);
loc_823682F0:
	// addi r3,r1,308
	ctx.r3.s64 = ctx.r1.s64 + 308;
	// bl 0x822e6fd0
	ctx.lr = 0x823682F8;
	sub_822E6FD0(ctx, base);
	// addi r3,r1,308
	ctx.r3.s64 = ctx.r1.s64 + 308;
	// bl 0x822e6d10
	ctx.lr = 0x82368300;
	sub_822E6D10(ctx, base);
	// lwz r11,308(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82367fc4
	if (!ctx.cr6.eq) goto loc_82367FC4;
loc_82368310:
	// bl 0x822e5fb0
	ctx.lr = 0x82368314;
	sub_822E5FB0(ctx, base);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x823ddf94
	__restgprlr_15(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82367F18) {
	__imp__sub_82367F18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236831C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8236831C) {
	__imp__sub_8236831C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82368320) {
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
	// lis r4,1
	ctx.r4.s64 = 65536;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// ori r4,r4,32768
	ctx.r4.u64 = ctx.r4.u64 | 32768;
	// bl 0x822db808
	ctx.lr = 0x82368344;
	sub_822DB808(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822db8f0
	ctx.lr = 0x8236834C;
	sub_822DB8F0(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// addi r31,r11,5676
	ctx.r31.s64 = ctx.r11.s64 + 5676;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// ori r5,r5,32768
	ctx.r5.u64 = ctx.r5.u64 | 32768;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8227ff50
	ctx.lr = 0x82368368;
	sub_8227FF50(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82368388
	if (!ctx.cr6.eq) goto loc_82368388;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r11,5704
	ctx.r4.s64 = ctx.r11.s64 + 5704;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822830e8
	ctx.lr = 0x82368388;
	sub_822830E8(ctx, base);
loc_82368388:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82367f18
	ctx.lr = 0x82368390;
	sub_82367F18(ctx, base);
	// bl 0x8231d968
	ctx.lr = 0x82368394;
	sub_8231D968(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822db8d8
	ctx.lr = 0x8236839C;
	sub_822DB8D8(ctx, base);
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

PPC_WEAK_FUNC(sub_82368320) {
	__imp__sub_82368320(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823683B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823683B4) {
	__imp__sub_823683B4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823683B8) {
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
	// bl 0x82367820
	ctx.lr = 0x823683CC;
	sub_82367820(ctx, base);
	// lis r11,-31809
	ctx.r11.s64 = -2084634624;
	// lwz r11,23892(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23892);
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x823683e4
	if (!ctx.cr6.eq) goto loc_823683E4;
	// li r8,1
	ctx.r8.s64 = 1;
loc_823683E4:
	// lis r11,-31809
	ctx.r11.s64 = -2084634624;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r11,-12528
	ctx.r10.s64 = ctx.r11.s64 + -12528;
	// lwz r11,26072(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26072);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82368458
	if (!ctx.cr6.gt) goto loc_82368458;
	// extsw r11,r8
	ctx.r11.s64 = ctx.r8.s32;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// li r11,0
	ctx.r11.s64 = 0;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfs f0,12168(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// fdivs f13,f0,f12
	ctx.f13.f64 = double(float(ctx.f0.f64 / ctx.f12.f64));
	// lfs f0,5484(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
loc_82368428:
	// lwz r8,20296(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20296);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stfsx f0,r11,r8
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, temp.u32);
	// lwz r8,20296(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20296);
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// lfs f12,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// stfs f11,8(r8)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r8.u32 + 8, temp.u32);
	// lwz r8,26072(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26072);
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82368428
	if (ctx.cr6.lt) goto loc_82368428;
loc_82368458:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823683B8) {
	__imp__sub_823683B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82368468) {
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
	// lis r11,-31810
	ctx.r11.s64 = -2084700160;
	// addi r3,r11,-360
	ctx.r3.s64 = ctx.r11.s64 + -360;
	// bl 0x82143308
	ctx.lr = 0x82368484;
	sub_82143308(ctx, base);
	// lis r11,-31809
	ctx.r11.s64 = -2084634624;
	// addi r31,r11,-12528
	ctx.r31.s64 = ctx.r11.s64 + -12528;
	// lbz r10,-12528(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -12528);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82368524
	if (ctx.cr6.eq) goto loc_82368524;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82367820
	ctx.lr = 0x823684A0;
	sub_82367820(ctx, base);
	// bl 0x82305d58
	ctx.lr = 0x823684A4;
	sub_82305D58(ctx, base);
	// lis r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r5,r5,35240
	ctx.r5.u64 = ctx.r5.u64 | 35240;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823de090
	ctx.lr = 0x823684B8;
	sub_823DE090(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,5892
	ctx.r3.s64 = ctx.r11.s64 + 5892;
	// bl 0x8227da80
	ctx.lr = 0x823684C4;
	sub_8227DA80(ctx, base);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r3,r10,5856
	ctx.r3.s64 = ctx.r10.s64 + 5856;
	// bl 0x8227da80
	ctx.lr = 0x823684D0;
	sub_8227DA80(ctx, base);
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// addi r3,r9,5840
	ctx.r3.s64 = ctx.r9.s64 + 5840;
	// bl 0x8227da80
	ctx.lr = 0x823684DC;
	sub_8227DA80(ctx, base);
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// addi r3,r8,5828
	ctx.r3.s64 = ctx.r8.s64 + 5828;
	// bl 0x8227da80
	ctx.lr = 0x823684E8;
	sub_8227DA80(ctx, base);
	// lis r7,-32251
	ctx.r7.s64 = -2113601536;
	// addi r3,r7,5812
	ctx.r3.s64 = ctx.r7.s64 + 5812;
	// bl 0x8227da80
	ctx.lr = 0x823684F4;
	sub_8227DA80(ctx, base);
	// lis r6,-32251
	ctx.r6.s64 = -2113601536;
	// addi r3,r6,5796
	ctx.r3.s64 = ctx.r6.s64 + 5796;
	// bl 0x8227da80
	ctx.lr = 0x82368500;
	sub_8227DA80(ctx, base);
	// lis r5,-32251
	ctx.r5.s64 = -2113601536;
	// addi r3,r5,5784
	ctx.r3.s64 = ctx.r5.s64 + 5784;
	// bl 0x8227da80
	ctx.lr = 0x8236850C;
	sub_8227DA80(ctx, base);
	// lis r4,-32251
	ctx.r4.s64 = -2113601536;
	// addi r3,r4,5768
	ctx.r3.s64 = ctx.r4.s64 + 5768;
	// bl 0x8227da80
	ctx.lr = 0x82368518;
	sub_8227DA80(ctx, base);
	// lis r3,-32251
	ctx.r3.s64 = -2113601536;
	// addi r3,r3,5748
	ctx.r3.s64 = ctx.r3.s64 + 5748;
	// bl 0x8227da80
	ctx.lr = 0x82368524;
	sub_8227DA80(ctx, base);
loc_82368524:
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

PPC_WEAK_FUNC(sub_82368468) {
	__imp__sub_82368468(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82368538) {
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
	// bl 0x82367820
	ctx.lr = 0x8236854C;
	sub_82367820(ctx, base);
	// lis r11,-31809
	ctx.r11.s64 = -2084634624;
	// li r5,9152
	ctx.r5.s64 = 9152;
	// addi r11,r11,-12528
	ctx.r11.s64 = ctx.r11.s64 + -12528;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,26076
	ctx.r3.s64 = ctx.r11.s64 + 26076;
	// bl 0x823de090
	ctx.lr = 0x82368564;
	sub_823DE090(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82368538) {
	__imp__sub_82368538(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82368574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82368574) {
	__imp__sub_82368574(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82368578) {
	PPC_FUNC_PROLOGUE();
	// lwsync 
	// lis r11,-31809
	ctx.r11.s64 = -2084634624;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,-12528
	ctx.r9.s64 = ctx.r11.s64 + -12528;
	// stw r10,16412(r9)
	PPC_STORE_U32(ctx.r9.u32 + 16412, ctx.r10.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82368578) {
	__imp__sub_82368578(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82368590) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x822e42f8
	ctx.lr = 0x823685B8;
	sub_822E42F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822dd9a0
	ctx.lr = 0x823685C0;
	sub_822DD9A0(ctx, base);
	// sth r3,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r3.u16);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822e40f0
	ctx.lr = 0x823685D4;
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

PPC_WEAK_FUNC(sub_82368590) {
	__imp__sub_82368590(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823685EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823685EC) {
	__imp__sub_823685EC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823685F0) {
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
	// bl 0x822e4998
	ctx.lr = 0x8236860C;
	sub_822E4998(ctx, base);
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82368624
	if (!ctx.cr6.eq) goto loc_82368624;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82368640
	goto loc_82368640;
loc_82368624:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e4480
	ctx.lr = 0x82368634;
	sub_822E4480(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lhz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// bl 0x822dda08
	ctx.lr = 0x82368640;
	sub_822DDA08(ctx, base);
loc_82368640:
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

PPC_WEAK_FUNC(sub_823685F0) {
	__imp__sub_823685F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82368658) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x82368660;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x822e40f0
	ctx.lr = 0x82368684;
	sub_822E40F0(ctx, base);
	// lwz r11,72(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 72);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82368734
	if (ctx.cr6.eq) goto loc_82368734;
	// li r28,0
	ctx.r28.s64 = 0;
	// ble cr6,0x82368734
	if (!ctx.cr6.gt) goto loc_82368734;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// addi r29,r27,32
	ctx.r29.s64 = ctx.r27.s64 + 32;
loc_823686A0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// bl 0x822e40f0
	ctx.lr = 0x823686B8;
	sub_822E40F0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x823686ec
	if (ctx.cr6.lt) goto loc_823686EC;
	// bne cr6,0x8236871c
	if (!ctx.cr6.eq) goto loc_8236871C;
	// lwz r26,16(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,0(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// bl 0x822e42f8
	ctx.lr = 0x823686D8;
	sub_822E42F8(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x822dd9a0
	ctx.lr = 0x823686E0;
	sub_822DD9A0(ctx, base);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// sth r3,84(r1)
	PPC_STORE_U16(ctx.r1.u32 + 84, ctx.r3.u16);
	// b 0x82368710
	goto loc_82368710;
loc_823686EC:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x822e40f0
	ctx.lr = 0x82368704;
	sub_822E40F0(ctx, base);
	// lhz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// sth r10,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r10.u16);
loc_82368710:
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822e40f0
	ctx.lr = 0x8236871C;
	sub_822E40F0(ctx, base);
loc_8236871C:
	// lwz r11,72(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 72);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,2
	ctx.r29.s64 = ctx.r29.s64 + 2;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x823686a0
	if (ctx.cr6.lt) goto loc_823686A0;
loc_82368734:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82368658) {
	__imp__sub_82368658(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236873C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8236873C) {
	__imp__sub_8236873C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82368740) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x82368748;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x822e4480
	ctx.lr = 0x82368760;
	sub_822E4480(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,72(r26)
	PPC_STORE_U32(ctx.r26.u32 + 72, ctx.r11.u32);
	// beq cr6,0x82368844
	if (ctx.cr6.eq) goto loc_82368844;
	// li r25,0
	ctx.r25.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r27,r25
	ctx.r27.u64 = ctx.r25.u64;
	// ble cr6,0x82368844
	if (!ctx.cr6.gt) goto loc_82368844;
	// addi r29,r26,32
	ctx.r29.s64 = ctx.r26.s64 + 32;
	// addi r31,r26,16
	ctx.r31.s64 = ctx.r26.s64 + 16;
loc_82368788:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822e4480
	ctx.lr = 0x82368798;
	sub_822E4480(ctx, base);
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// stw r11,-16(r31)
	PPC_STORE_U32(ctx.r31.u32 + -16, ctx.r11.u32);
	// blt cr6,0x823687fc
	if (ctx.cr6.lt) goto loc_823687FC;
	// bne cr6,0x8236882c
	if (!ctx.cr6.eq) goto loc_8236882C;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822e4998
	ctx.lr = 0x823687B4;
	sub_822E4998(ctx, base);
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823687d4
	if (!ctx.cr6.eq) goto loc_823687D4;
	// stw r25,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r25.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// sth r25,0(r29)
	PPC_STORE_U16(ctx.r29.u32 + 0, ctx.r25.u16);
	// b 0x8236882c
	goto loc_8236882C;
loc_823687D4:
	// addi r5,r1,82
	ctx.r5.s64 = ctx.r1.s64 + 82;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822e4480
	ctx.lr = 0x823687E4;
	sub_822E4480(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lhz r4,82(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 82);
	// bl 0x822dda08
	ctx.lr = 0x823687F0;
	sub_822DDA08(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// sth r25,0(r29)
	PPC_STORE_U16(ctx.r29.u32 + 0, ctx.r25.u16);
	// b 0x8236882c
	goto loc_8236882C;
loc_823687FC:
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822e4480
	ctx.lr = 0x8236880C;
	sub_822E4480(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x822e4480
	ctx.lr = 0x82368824;
	sub_822E4480(ctx, base);
	// lhz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 84);
	// sth r10,0(r29)
	PPC_STORE_U16(ctx.r29.u32 + 0, ctx.r10.u16);
loc_8236882C:
	// lwz r11,72(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 72);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r29,r29,2
	ctx.r29.s64 = ctx.r29.s64 + 2;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82368788
	if (ctx.cr6.lt) goto loc_82368788;
loc_82368844:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82368740) {
	__imp__sub_82368740(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236884C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8236884C) {
	__imp__sub_8236884C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82368850) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,76
	ctx.r5.s64 = 76;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x823de1f0
	sub_823DE1F0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82368850) {
	__imp__sub_82368850(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82368864) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82368864) {
	__imp__sub_82368864(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82368868) {
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
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,2
	ctx.r4.s64 = 2;
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// bl 0x822e40f0
	ctx.lr = 0x8236889C;
	sub_822E40F0(ctx, base);
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// stb r9,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// bl 0x822e40f0
	ctx.lr = 0x823688B4;
	sub_822E40F0(ctx, base);
	// lbz r7,165(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 165);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// stb r7,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r7.u8);
	// bl 0x822e40f0
	ctx.lr = 0x823688CC;
	sub_822E40F0(ctx, base);
	// lfs f0,168(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x822e40f0
	ctx.lr = 0x823688E4;
	sub_822E40F0(ctx, base);
	// lwz r6,20(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,4
	ctx.r4.s64 = 4;
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// bl 0x822e40f0
	ctx.lr = 0x823688FC;
	sub_822E40F0(ctx, base);
	// lfs f13,112(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x822e40f0
	ctx.lr = 0x82368914;
	sub_822E40F0(ctx, base);
	// lfs f12,136(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x822e40f0
	ctx.lr = 0x8236892C;
	sub_822E40F0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r31,152
	ctx.r5.s64 = ctx.r31.s64 + 152;
	// li r4,12
	ctx.r4.s64 = 12;
	// bl 0x822e40f0
	ctx.lr = 0x8236893C;
	sub_822E40F0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,36
	ctx.r3.s64 = ctx.r31.s64 + 36;
	// bl 0x82368658
	ctx.lr = 0x82368948;
	sub_82368658(ctx, base);
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

PPC_WEAK_FUNC(sub_82368868) {
	__imp__sub_82368868(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82368960) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r5,176
	ctx.r5.s64 = 176;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x823de090
	ctx.lr = 0x82368988;
	sub_823DE090(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x822e4480
	ctx.lr = 0x82368998;
	sub_822E4480(ctx, base);
	// lhz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 84);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// bl 0x822e4480
	ctx.lr = 0x823689B0;
	sub_822E4480(ctx, base);
	// lbz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r8,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r8.u32);
	// bl 0x822e4480
	ctx.lr = 0x823689C8;
	sub_822E4480(ctx, base);
	// lbz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addic r11,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r11.s64 = ctx.r6.s64 + -1;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// subfe r10,r11,r6
	temp.u8 = (~ctx.r11.u32 + ctx.r6.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r11.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// li r4,4
	ctx.r4.s64 = 4;
	// stb r10,165(r31)
	PPC_STORE_U8(ctx.r31.u32 + 165, ctx.r10.u8);
	// bl 0x822e4480
	ctx.lr = 0x823689E8;
	sub_822E4480(ctx, base);
	// lfs f0,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,168(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 168, temp.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x822e4480
	ctx.lr = 0x82368A00;
	sub_822E4480(ctx, base);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// li r4,4
	ctx.r4.s64 = 4;
	// stw r9,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// bl 0x822e4480
	ctx.lr = 0x82368A18;
	sub_822E4480(ctx, base);
	// lfs f13,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,112(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 112, temp.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x822e4480
	ctx.lr = 0x82368A30;
	sub_822E4480(ctx, base);
	// lfs f12,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,136(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 136, temp.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r31,152
	ctx.r4.s64 = ctx.r31.s64 + 152;
	// bl 0x82361958
	ctx.lr = 0x82368A44;
	sub_82361958(ctx, base);
	// addi r4,r31,36
	ctx.r4.s64 = ctx.r31.s64 + 36;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82368740
	ctx.lr = 0x82368A50;
	sub_82368740(ctx, base);
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

PPC_WEAK_FUNC(sub_82368960) {
	__imp__sub_82368960(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82368A68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82368A70;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82304498
	ctx.lr = 0x82368A80;
	sub_82304498(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82368b14
	if (!ctx.cr6.eq) goto loc_82368B14;
	// lis r11,-31809
	ctx.r11.s64 = -2084634624;
	// mulli r30,r28,176
	ctx.r30.s64 = ctx.r28.s64 * 176;
	// addi r31,r11,-12528
	ctx.r31.s64 = ctx.r11.s64 + -12528;
	// addi r11,r31,26248
	ctx.r11.s64 = ctx.r31.s64 + 26248;
	// lwzx r10,r30,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x82368b14
	if (!ctx.cr6.eq) goto loc_82368B14;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82305080
	ctx.lr = 0x82368AB0;
	sub_82305080(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82368b14
	if (ctx.cr6.eq) goto loc_82368B14;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82304bf8
	ctx.lr = 0x82368AC0;
	sub_82304BF8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82368b14
	if (ctx.cr6.eq) goto loc_82368B14;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82305348
	ctx.lr = 0x82368AD4;
	sub_82305348(ctx, base);
	// addi r11,r31,26196
	ctx.r11.s64 = ctx.r31.s64 + 26196;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwzx r3,r30,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// bl 0x82368590
	ctx.lr = 0x82368AE4;
	sub_82368590(ctx, base);
	// addi r10,r31,26200
	ctx.r10.s64 = ctx.r31.s64 + 26200;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwzx r3,r30,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// bl 0x82368590
	ctx.lr = 0x82368AF4;
	sub_82368590(ctx, base);
	// addi r11,r31,26076
	ctx.r11.s64 = ctx.r31.s64 + 26076;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// add r3,r30,r11
	ctx.r3.u64 = ctx.r30.u64 + ctx.r11.u64;
	// bl 0x82368868
	ctx.lr = 0x82368B04;
	sub_82368868(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,24
	ctx.r4.s64 = 24;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822e40f0
	ctx.lr = 0x82368B14;
	sub_822E40F0(ctx, base);
loc_82368B14:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82368A68) {
	__imp__sub_82368A68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82368B1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82368B1C) {
	__imp__sub_82368B1C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82368B20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82368B28;
	__savegprlr_29(ctx, base);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822e4998
	ctx.lr = 0x82368B34;
	sub_822E4998(ctx, base);
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82368b6c
	if (ctx.cr6.eq) goto loc_82368B6C;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e4480
	ctx.lr = 0x82368B54;
	sub_822E4480(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lhz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// bl 0x822dda08
	ctx.lr = 0x82368B60;
	sub_822DDA08(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82368b78
	if (!ctx.cr6.eq) goto loc_82368B78;
loc_82368B6C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_82368B78:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823685f0
	ctx.lr = 0x82368B80;
	sub_823685F0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82368960
	ctx.lr = 0x82368B90;
	sub_82368960(ctx, base);
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// li r4,24
	ctx.r4.s64 = 24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e4480
	ctx.lr = 0x82368BA0;
	sub_822E4480(ctx, base);
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r10,20(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82368cc0
	if (!ctx.cr6.eq) goto loc_82368CC0;
	// lbz r10,1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82368cc0
	if (ctx.cr6.eq) goto loc_82368CC0;
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82368cc0
	if (!ctx.cr6.eq) goto loc_82368CC0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82364d48
	ctx.lr = 0x82368BD8;
	sub_82364D48(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82368cc0
	if (ctx.cr6.eq) goto loc_82368CC0;
	// lis r11,-31809
	ctx.r11.s64 = -2084634624;
	// lwz r11,-12556(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -12556);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82368cc0
	if (ctx.cr6.eq) goto loc_82368CC0;
	// lwz r11,204(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,212(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// li r8,1
	ctx.r8.s64 = 1;
	// lbz r7,357(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 357);
	// lfs f0,172(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,176(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	ctx.f13.f64 = double(temp.f32);
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// lfs f12,180(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	ctx.f12.f64 = double(temp.f32);
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// lfs f11,164(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// lfs f10,160(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f10.f64 = double(temp.f32);
	// stw r10,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// lfs f9,328(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 328);
	ctx.f9.f64 = double(temp.f32);
	// stw r9,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r9.u32);
	// lfs f8,304(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 304);
	ctx.f8.f64 = double(temp.f32);
	// stb r7,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r7.u8);
	// lfs f7,360(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 360);
	ctx.f7.f64 = double(temp.f32);
	// stw r8,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r8.u32);
	// stfs f9,104(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f12,120(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f8,124(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f11,128(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f10,136(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f7,148(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// bl 0x82305ef8
	ctx.lr = 0x82368C74;
	sub_82305EF8(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82368cc0
	if (ctx.cr6.eq) goto loc_82368CC0;
	// lis r11,-31809
	ctx.r11.s64 = -2084634624;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r4,r1,228
	ctx.r4.s64 = ctx.r1.s64 + 228;
	// lfs f0,344(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 344);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r11,-12528
	ctx.r11.s64 = ctx.r11.s64 + -12528;
	// lfs f13,348(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 348);
	ctx.f13.f64 = double(temp.f32);
	// mulli r10,r10,176
	ctx.r10.s64 = ctx.r10.s64 * 176;
	// lfs f12,352(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 352);
	ctx.f12.f64 = double(temp.f32);
	// addi r8,r11,26228
	ctx.r8.s64 = ctx.r11.s64 + 26228;
	// addi r9,r11,26112
	ctx.r9.s64 = ctx.r11.s64 + 26112;
	// add r11,r10,r8
	ctx.r11.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// li r5,76
	ctx.r5.s64 = 76;
	// stfsx f0,r10,r8
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r8.u32, temp.u32);
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f12,8(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// bl 0x823de1f0
	ctx.lr = 0x82368CC0;
	sub_823DE1F0(ctx, base);
loc_82368CC0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82368B20) {
	__imp__sub_82368B20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82368CCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82368CCC) {
	__imp__sub_82368CCC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82368CD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82368CD8;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x823043a8
	ctx.lr = 0x82368CE8;
	sub_823043A8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82368d7c
	if (!ctx.cr6.eq) goto loc_82368D7C;
	// lis r11,-31809
	ctx.r11.s64 = -2084634624;
	// mulli r30,r28,176
	ctx.r30.s64 = ctx.r28.s64 * 176;
	// addi r31,r11,-12528
	ctx.r31.s64 = ctx.r11.s64 + -12528;
	// addi r11,r31,26248
	ctx.r11.s64 = ctx.r31.s64 + 26248;
	// lwzx r10,r30,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x82368d7c
	if (!ctx.cr6.eq) goto loc_82368D7C;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82305058
	ctx.lr = 0x82368D18;
	sub_82305058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82368d7c
	if (ctx.cr6.eq) goto loc_82368D7C;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82304b78
	ctx.lr = 0x82368D28;
	sub_82304B78(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82368d7c
	if (ctx.cr6.eq) goto loc_82368D7C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82305280
	ctx.lr = 0x82368D3C;
	sub_82305280(ctx, base);
	// addi r11,r31,26196
	ctx.r11.s64 = ctx.r31.s64 + 26196;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwzx r3,r30,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// bl 0x82368590
	ctx.lr = 0x82368D4C;
	sub_82368590(ctx, base);
	// addi r10,r31,26200
	ctx.r10.s64 = ctx.r31.s64 + 26200;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwzx r3,r30,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// bl 0x82368590
	ctx.lr = 0x82368D5C;
	sub_82368590(ctx, base);
	// addi r11,r31,26076
	ctx.r11.s64 = ctx.r31.s64 + 26076;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// add r3,r30,r11
	ctx.r3.u64 = ctx.r30.u64 + ctx.r11.u64;
	// bl 0x82368868
	ctx.lr = 0x82368D6C;
	sub_82368868(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822e40f0
	ctx.lr = 0x82368D7C;
	sub_822E40F0(ctx, base);
loc_82368D7C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82368CD0) {
	__imp__sub_82368CD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82368D84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82368D84) {
	__imp__sub_82368D84(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82368D88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82368D90;
	__savegprlr_29(ctx, base);
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822e4998
	ctx.lr = 0x82368D9C;
	sub_822E4998(ctx, base);
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82368dd4
	if (ctx.cr6.eq) goto loc_82368DD4;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e4480
	ctx.lr = 0x82368DBC;
	sub_822E4480(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lhz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// bl 0x822dda08
	ctx.lr = 0x82368DC8;
	sub_822DDA08(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82368de0
	if (!ctx.cr6.eq) goto loc_82368DE0;
loc_82368DD4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_82368DE0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823685f0
	ctx.lr = 0x82368DE8;
	sub_823685F0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82368960
	ctx.lr = 0x82368DF8;
	sub_82368960(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e4480
	ctx.lr = 0x82368E08;
	sub_822E4480(ctx, base);
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r10,20(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82368f1c
	if (!ctx.cr6.eq) goto loc_82368F1C;
	// lbz r10,1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82368f1c
	if (ctx.cr6.eq) goto loc_82368F1C;
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82368f1c
	if (!ctx.cr6.eq) goto loc_82368F1C;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82364d48
	ctx.lr = 0x82368E40;
	sub_82364D48(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82368f1c
	if (ctx.cr6.eq) goto loc_82368F1C;
	// lis r11,-31809
	ctx.r11.s64 = -2084634624;
	// lwz r11,-12548(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -12548);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82368f1c
	if (ctx.cr6.eq) goto loc_82368F1C;
	// lwz r11,188(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,196(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// li r8,1
	ctx.r8.s64 = 1;
	// lbz r7,341(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 341);
	// lfs f0,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// lfs f12,312(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 312);
	ctx.f12.f64 = double(temp.f32);
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// lfs f11,288(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	ctx.f11.f64 = double(temp.f32);
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// lfs f10,344(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 344);
	ctx.f10.f64 = double(temp.f32);
	// stw r10,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r10.u32);
	// stfs f12,120(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stw r9,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r9.u32);
	// stfs f11,140(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stb r7,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r7.u8);
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stw r8,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r8.u32);
	// stfs f13,152(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// stfs f10,164(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82305df0
	ctx.lr = 0x82368EC4;
	sub_82305DF0(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82368f1c
	if (ctx.cr6.eq) goto loc_82368F1C;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82305318
	ctx.lr = 0x82368ED8;
	sub_82305318(ctx, base);
	// lis r11,-31809
	ctx.r11.s64 = -2084634624;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r4,r1,212
	ctx.r4.s64 = ctx.r1.s64 + 212;
	// addi r11,r11,-12528
	ctx.r11.s64 = ctx.r11.s64 + -12528;
	// lfs f0,328(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 328);
	ctx.f0.f64 = double(temp.f32);
	// mulli r10,r10,176
	ctx.r10.s64 = ctx.r10.s64 * 176;
	// lfs f13,332(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 332);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,336(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 336);
	ctx.f12.f64 = double(temp.f32);
	// addi r8,r11,26228
	ctx.r8.s64 = ctx.r11.s64 + 26228;
	// addi r9,r11,26112
	ctx.r9.s64 = ctx.r11.s64 + 26112;
	// add r11,r10,r8
	ctx.r11.u64 = ctx.r10.u64 + ctx.r8.u64;
	// li r5,76
	ctx.r5.s64 = 76;
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stfsx f0,r10,r8
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r8.u32, temp.u32);
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f12,8(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// bl 0x823de1f0
	ctx.lr = 0x82368F1C;
	sub_823DE1F0(ctx, base);
loc_82368F1C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82368D88) {
	__imp__sub_82368D88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82368F28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82368F30;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmpwi cr6,r3,44
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 44, ctx.xer);
	// blt cr6,0x82368f58
	if (ctx.cr6.lt) goto loc_82368F58;
	// bl 0x823045f8
	ctx.lr = 0x82368F48;
	sub_823045F8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8236904c
	if (!ctx.cr6.eq) goto loc_8236904C;
	// b 0x82368f90
	goto loc_82368F90;
loc_82368F58:
	// cmpwi cr6,r29,42
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 42, ctx.xer);
	// blt cr6,0x82368f6c
	if (ctx.cr6.lt) goto loc_82368F6C;
	// cmpwi cr6,r29,43
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 43, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x82368f70
	if (!ctx.cr6.gt) goto loc_82368F70;
loc_82368F6C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82368F70:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8236904c
	if (!ctx.cr6.eq) goto loc_8236904C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823045f8
	ctx.lr = 0x82368F84;
	sub_823045F8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8236903c
	if (!ctx.cr6.eq) goto loc_8236903C;
loc_82368F90:
	// lis r11,-31809
	ctx.r11.s64 = -2084634624;
	// mulli r30,r29,176
	ctx.r30.s64 = ctx.r29.s64 * 176;
	// addi r31,r11,-12528
	ctx.r31.s64 = ctx.r11.s64 + -12528;
	// addi r11,r31,26248
	ctx.r11.s64 = ctx.r31.s64 + 26248;
	// lwzx r10,r30,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x82369010
	if (!ctx.cr6.eq) goto loc_82369010;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823050a8
	ctx.lr = 0x82368FB4;
	sub_823050A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82369010
	if (ctx.cr6.eq) goto loc_82369010;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82305400
	ctx.lr = 0x82368FC8;
	sub_82305400(ctx, base);
	// addi r11,r31,26196
	ctx.r11.s64 = ctx.r31.s64 + 26196;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwzx r3,r30,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// bl 0x82368590
	ctx.lr = 0x82368FD8;
	sub_82368590(ctx, base);
	// addi r10,r31,26200
	ctx.r10.s64 = ctx.r31.s64 + 26200;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwzx r3,r30,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// bl 0x82368590
	ctx.lr = 0x82368FE8;
	sub_82368590(ctx, base);
	// addi r11,r31,26076
	ctx.r11.s64 = ctx.r31.s64 + 26076;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// add r3,r30,r11
	ctx.r3.u64 = ctx.r30.u64 + ctx.r11.u64;
	// bl 0x82368868
	ctx.lr = 0x82368FF8;
	sub_82368868(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822e40f0
	ctx.lr = 0x82369008;
	sub_822E40F0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_82369010:
	// cmpwi cr6,r29,44
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 44, ctx.xer);
	// bge cr6,0x8236904c
	if (!ctx.cr6.lt) goto loc_8236904C;
	// cmpwi cr6,r29,42
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 42, ctx.xer);
	// blt cr6,0x8236902c
	if (ctx.cr6.lt) goto loc_8236902C;
	// cmpwi cr6,r29,43
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 43, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x82369030
	if (!ctx.cr6.gt) goto loc_82369030;
loc_8236902C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82369030:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8236904c
	if (!ctx.cr6.eq) goto loc_8236904C;
loc_8236903C:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r11,-28736
	ctx.r4.s64 = ctx.r11.s64 + -28736;
	// bl 0x822e42f8
	ctx.lr = 0x8236904C;
	sub_822E42F8(ctx, base);
loc_8236904C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82368F28) {
	__imp__sub_82368F28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82369054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82369054) {
	__imp__sub_82369054(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82369058) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82369060;
	__savegprlr_28(ctx, base);
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r3,436(r1)
	PPC_STORE_U32(ctx.r1.u32 + 436, ctx.r3.u32);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x822e4998
	ctx.lr = 0x82369078;
	sub_822E4998(ctx, base);
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823690b0
	if (ctx.cr6.eq) goto loc_823690B0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e4480
	ctx.lr = 0x82369098;
	sub_822E4480(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lhz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// bl 0x822dda08
	ctx.lr = 0x823690A4;
	sub_822DDA08(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823690bc
	if (!ctx.cr6.eq) goto loc_823690BC;
loc_823690B0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_823690BC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823685f0
	ctx.lr = 0x823690C4;
	sub_823685F0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82368960
	ctx.lr = 0x823690D4;
	sub_82368960(ctx, base);
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e4480
	ctx.lr = 0x823690E4;
	sub_822E4480(ctx, base);
	// lwz r11,56(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// rlwinm r10,r11,0,23,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x180;
	// cmpwi cr6,r10,256
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 256, ctx.xer);
	// bne cr6,0x82369290
	if (!ctx.cr6.eq) goto loc_82369290;
	// lwz r11,56(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 56);
	// rlwinm r10,r11,0,23,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x180;
	// cmpwi cr6,r10,256
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 256, ctx.xer);
	// bne cr6,0x82369290
	if (!ctx.cr6.eq) goto loc_82369290;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82364d48
	ctx.lr = 0x82369114;
	sub_82364D48(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82369290
	if (ctx.cr6.eq) goto loc_82369290;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r9,204(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// lwz r8,212(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// lfs f13,328(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 328);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,180(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	ctx.f12.f64 = double(temp.f32);
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// lfs f11,184(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	ctx.f11.f64 = double(temp.f32);
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// lfs f10,188(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	ctx.f10.f64 = double(temp.f32);
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// lfs f9,168(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f9.f64 = double(temp.f32);
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// lfs f0,12168(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// stw r8,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r8.u32);
	// lfs f8,160(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f8.f64 = double(temp.f32);
	// stw r7,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r7.u32);
	// lfs f7,360(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 360);
	ctx.f7.f64 = double(temp.f32);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f12,112(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f11,116(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f10,120(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f9,124(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f8,136(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f7,148(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// bge cr6,0x823691ac
	if (!ctx.cr6.lt) goto loc_823691AC;
	// stb r11,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r11.u8);
	// addi r4,r1,436
	ctx.r4.s64 = ctx.r1.s64 + 436;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82363a70
	ctx.lr = 0x823691A4;
	sub_82363A70(ctx, base);
	// lwz r29,436(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 436);
	// b 0x823691d4
	goto loc_823691D4;
loc_823691AC:
	// lis r11,-31809
	ctx.r11.s64 = -2084634624;
	// lwz r11,23884(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23884);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82369290
	if (ctx.cr6.eq) goto loc_82369290;
	// lbz r11,357(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 357);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stb r11,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r11.u8);
	// bl 0x82306428
	ctx.lr = 0x823691D4;
	sub_82306428(ctx, base);
loc_823691D4:
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82369290
	if (ctx.cr6.eq) goto loc_82369290;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823045f8
	ctx.lr = 0x823691E4;
	sub_823045F8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82369290
	if (!ctx.cr6.eq) goto loc_82369290;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823054f8
	ctx.lr = 0x823691FC;
	sub_823054F8(ctx, base);
	// lwz r8,164(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lis r11,-31809
	ctx.r11.s64 = -2084634624;
	// extsw r7,r8
	ctx.r7.s64 = ctx.r8.s32;
	// addi r31,r11,-12528
	ctx.r31.s64 = ctx.r11.s64 + -12528;
	// std r7,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r7.u64);
	// lfd f11,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// addi r9,r31,26192
	ctx.r9.s64 = ctx.r31.s64 + 26192;
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// mulli r30,r29,176
	ctx.r30.s64 = ctx.r29.s64 * 176;
	// lfs f0,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// lfsx f12,r30,r9
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmuls f8,f12,f9
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f9.f64));
	// lfs f13,2416(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2416);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f7,f8,f0
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fadds f1,f7,f13
	ctx.f1.f64 = double(float(ctx.f7.f64 + ctx.f13.f64));
	// bl 0x823dde20
	ctx.lr = 0x82369244;
	sub_823DDE20(ctx, base);
	// frsp f6,f1
	ctx.fpscr.disableFlushMode();
	ctx.f6.f64 = double(float(ctx.f1.f64));
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// fctiwz f5,f6
	ctx.f5.s64 = (ctx.f6.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f6.f64));
	// stfd f5,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f5.u64);
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x82304c90
	ctx.lr = 0x8236925C;
	sub_82304C90(ctx, base);
	// addi r11,r31,26228
	ctx.r11.s64 = ctx.r31.s64 + 26228;
	// lfs f4,344(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 344);
	ctx.f4.f64 = double(temp.f32);
	// addi r10,r31,26112
	ctx.r10.s64 = ctx.r31.s64 + 26112;
	// lfs f3,348(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 348);
	ctx.f3.f64 = double(temp.f32);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lfs f2,352(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 352);
	ctx.f2.f64 = double(temp.f32);
	// add r3,r30,r10
	ctx.r3.u64 = ctx.r30.u64 + ctx.r10.u64;
	// addi r4,r1,228
	ctx.r4.s64 = ctx.r1.s64 + 228;
	// li r5,76
	ctx.r5.s64 = 76;
	// stfs f4,0(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f3,4(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f2,8(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// bl 0x823de1f0
	ctx.lr = 0x82369290;
	sub_823DE1F0(ctx, base);
loc_82369290:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82369058) {
	__imp__sub_82369058(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236929C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8236929C) {
	__imp__sub_8236929C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823692A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x823692A8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31809
	ctx.r11.s64 = -2084634624;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,-12528
	ctx.r31.s64 = ctx.r11.s64 + -12528;
	// addi r29,r31,17208
	ctx.r29.s64 = ctx.r31.s64 + 17208;
loc_823692BC:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,772
	ctx.r4.s64 = 772;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822e40f0
	ctx.lr = 0x823692CC;
	sub_822E40F0(ctx, base);
	// addi r29,r29,772
	ctx.r29.s64 = ctx.r29.s64 + 772;
	// addi r11,r31,20296
	ctx.r11.s64 = ctx.r31.s64 + 20296;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x823692bc
	if (ctx.cr6.lt) goto loc_823692BC;
	// addi r29,r31,20376
	ctx.r29.s64 = ctx.r31.s64 + 20376;
loc_823692E0:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822e40f0
	ctx.lr = 0x823692F0;
	sub_822E40F0(ctx, base);
	// addi r29,r29,32
	ctx.r29.s64 = ctx.r29.s64 + 32;
	// addi r11,r31,20472
	ctx.r11.s64 = ctx.r31.s64 + 20472;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x823692e0
	if (ctx.cr6.lt) goto loc_823692E0;
	// li r4,264
	ctx.r4.s64 = 264;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r31,25808
	ctx.r5.s64 = ctx.r31.s64 + 25808;
	// bl 0x822e40f0
	ctx.lr = 0x82369310;
	sub_822E40F0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82303e00
	ctx.lr = 0x82369318;
	sub_82303E00(ctx, base);
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r31,20300
	ctx.r5.s64 = ctx.r31.s64 + 20300;
	// bl 0x822e40f0
	ctx.lr = 0x82369328;
	sub_822E40F0(ctx, base);
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r31,20308
	ctx.r5.s64 = ctx.r31.s64 + 20308;
	// bl 0x822e40f0
	ctx.lr = 0x82369338;
	sub_822E40F0(ctx, base);
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82369388
	if (ctx.cr6.eq) goto loc_82369388;
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r29,8
	ctx.r29.s64 = 8;
	// ori r10,r11,35232
	ctx.r10.u64 = ctx.r11.u64 | 35232;
	// lwzx r11,r31,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// cmpwi cr6,r9,8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 8, ctx.xer);
	// ble cr6,0x82369388
	if (!ctx.cr6.gt) goto loc_82369388;
loc_82369360:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82368a68
	ctx.lr = 0x8236936C;
	sub_82368A68(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// ori r10,r11,35232
	ctx.r10.u64 = ctx.r11.u64 | 35232;
	// lwzx r11,r31,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// cmpw cr6,r29,r9
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82369360
	if (ctx.cr6.lt) goto loc_82369360;
loc_82369388:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r28,r11,-28736
	ctx.r28.s64 = ctx.r11.s64 + -28736;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x822e42f8
	ctx.lr = 0x8236939C;
	sub_822E42F8(ctx, base);
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823693e4
	if (ctx.cr6.eq) goto loc_823693E4;
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
	// ori r10,r11,35228
	ctx.r10.u64 = ctx.r11.u64 | 35228;
	// lwzx r11,r31,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823693e4
	if (!ctx.cr6.gt) goto loc_823693E4;
loc_823693C0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82368cd0
	ctx.lr = 0x823693CC;
	sub_82368CD0(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// ori r10,r11,35228
	ctx.r10.u64 = ctx.r11.u64 | 35228;
	// lwzx r11,r31,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x823693c0
	if (ctx.cr6.lt) goto loc_823693C0;
loc_823693E4:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822e42f8
	ctx.lr = 0x823693F0;
	sub_822E42F8(ctx, base);
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82369440
	if (ctx.cr6.eq) goto loc_82369440;
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r29,40
	ctx.r29.s64 = 40;
	// ori r10,r11,35236
	ctx.r10.u64 = ctx.r11.u64 | 35236;
	// lwzx r11,r31,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// addi r9,r11,40
	ctx.r9.s64 = ctx.r11.s64 + 40;
	// cmpwi cr6,r9,40
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 40, ctx.xer);
	// ble cr6,0x82369440
	if (!ctx.cr6.gt) goto loc_82369440;
loc_82369418:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82368f28
	ctx.lr = 0x82369424;
	sub_82368F28(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// ori r10,r11,35236
	ctx.r10.u64 = ctx.r11.u64 | 35236;
	// lwzx r11,r31,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// addi r9,r11,40
	ctx.r9.s64 = ctx.r11.s64 + 40;
	// cmpw cr6,r29,r9
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82369418
	if (ctx.cr6.lt) goto loc_82369418;
loc_82369440:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822e42f8
	ctx.lr = 0x8236944C;
	sub_822E42F8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823692A0) {
	__imp__sub_823692A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82369454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82369454) {
	__imp__sub_82369454(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82369458) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82369460;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31809
	ctx.r11.s64 = -2084634624;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r11,-12528
	ctx.r31.s64 = ctx.r11.s64 + -12528;
	// lbz r11,-12528(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + -12528);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82369644
	if (ctx.cr6.eq) goto loc_82369644;
	// addi r30,r31,17208
	ctx.r30.s64 = ctx.r31.s64 + 17208;
loc_82369480:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,772
	ctx.r4.s64 = 772;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822e4480
	ctx.lr = 0x82369490;
	sub_822E4480(ctx, base);
	// addi r30,r30,772
	ctx.r30.s64 = ctx.r30.s64 + 772;
	// addi r11,r31,20296
	ctx.r11.s64 = ctx.r31.s64 + 20296;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82369480
	if (ctx.cr6.lt) goto loc_82369480;
	// lbz r11,17204(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 17204);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823694b4
	if (ctx.cr6.eq) goto loc_823694B4;
	// addi r11,r31,16436
	ctx.r11.s64 = ctx.r31.s64 + 16436;
	// stw r11,20296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20296, ctx.r11.u32);
loc_823694B4:
	// lbz r11,17976(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 17976);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823694c8
	if (ctx.cr6.eq) goto loc_823694C8;
	// addi r11,r31,17208
	ctx.r11.s64 = ctx.r31.s64 + 17208;
	// stw r11,20296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20296, ctx.r11.u32);
loc_823694C8:
	// lbz r11,18748(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 18748);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823694dc
	if (ctx.cr6.eq) goto loc_823694DC;
	// addi r11,r31,17980
	ctx.r11.s64 = ctx.r31.s64 + 17980;
	// stw r11,20296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20296, ctx.r11.u32);
loc_823694DC:
	// lbz r11,19520(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 19520);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823694f0
	if (ctx.cr6.eq) goto loc_823694F0;
	// addi r11,r31,18752
	ctx.r11.s64 = ctx.r31.s64 + 18752;
	// stw r11,20296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20296, ctx.r11.u32);
loc_823694F0:
	// lbz r11,20292(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 20292);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82369504
	if (ctx.cr6.eq) goto loc_82369504;
	// addi r11,r31,19524
	ctx.r11.s64 = ctx.r31.s64 + 19524;
	// stw r11,20296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20296, ctx.r11.u32);
loc_82369504:
	// addi r30,r31,20376
	ctx.r30.s64 = ctx.r31.s64 + 20376;
loc_82369508:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822e4480
	ctx.lr = 0x82369518;
	sub_822E4480(ctx, base);
	// addi r30,r30,32
	ctx.r30.s64 = ctx.r30.s64 + 32;
	// addi r11,r31,20472
	ctx.r11.s64 = ctx.r31.s64 + 20472;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82369508
	if (ctx.cr6.lt) goto loc_82369508;
	// li r4,264
	ctx.r4.s64 = 264;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r5,r31,25808
	ctx.r5.s64 = ctx.r31.s64 + 25808;
	// bl 0x822e4480
	ctx.lr = 0x82369538;
	sub_822E4480(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82303e70
	ctx.lr = 0x82369540;
	sub_82303E70(ctx, base);
	// lbz r11,20372(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 20372);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82369558
	if (ctx.cr6.eq) goto loc_82369558;
	// addi r11,r31,20344
	ctx.r11.s64 = ctx.r31.s64 + 20344;
	// stw r11,20472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20472, ctx.r11.u32);
	// b 0x8236955c
	goto loc_8236955C;
loc_82369558:
	// lwz r11,20472(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20472);
loc_8236955C:
	// lbz r10,20404(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 20404);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82369570
	if (ctx.cr6.eq) goto loc_82369570;
	// addi r11,r31,20376
	ctx.r11.s64 = ctx.r31.s64 + 20376;
	// stw r11,20472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20472, ctx.r11.u32);
loc_82369570:
	// lbz r10,20436(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 20436);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82369584
	if (ctx.cr6.eq) goto loc_82369584;
	// addi r11,r31,20408
	ctx.r11.s64 = ctx.r31.s64 + 20408;
	// stw r11,20472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20472, ctx.r11.u32);
loc_82369584:
	// lbz r10,20468(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 20468);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82369598
	if (ctx.cr6.eq) goto loc_82369598;
	// addi r11,r31,20440
	ctx.r11.s64 = ctx.r31.s64 + 20440;
	// stw r11,20472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20472, ctx.r11.u32);
loc_82369598:
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x823040d0
	ctx.lr = 0x823695A0;
	sub_823040D0(ctx, base);
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r5,r31,20300
	ctx.r5.s64 = ctx.r31.s64 + 20300;
	// bl 0x822e4480
	ctx.lr = 0x823695B0;
	sub_822E4480(ctx, base);
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r5,r31,20308
	ctx.r5.s64 = ctx.r31.s64 + 20308;
	// bl 0x822e4480
	ctx.lr = 0x823695C0;
	sub_822E4480(ctx, base);
loc_823695C0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82368b20
	ctx.lr = 0x823695C8;
	sub_82368B20(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823695c0
	if (!ctx.cr6.eq) goto loc_823695C0;
loc_823695D4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82368d88
	ctx.lr = 0x823695DC;
	sub_82368D88(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823695d4
	if (!ctx.cr6.eq) goto loc_823695D4;
	// li r31,40
	ctx.r31.s64 = 40;
	// li r30,4
	ctx.r30.s64 = 4;
loc_823695F0:
	// cmpwi cr6,r31,42
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 42, ctx.xer);
	// blt cr6,0x82369604
	if (ctx.cr6.lt) goto loc_82369604;
	// cmpwi cr6,r31,43
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 43, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x82369608
	if (!ctx.cr6.gt) goto loc_82369608;
loc_82369604:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82369608:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82369620
	if (!ctx.cr6.eq) goto loc_82369620;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82369058
	ctx.lr = 0x82369620;
	sub_82369058(ctx, base);
loc_82369620:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// bne 0x823695f0
	if (!ctx.cr0.eq) goto loc_823695F0;
loc_8236962C:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,-1
	ctx.r3.s64 = -1;
	// bl 0x82369058
	ctx.lr = 0x82369638;
	sub_82369058(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8236962c
	if (!ctx.cr6.eq) goto loc_8236962C;
loc_82369644:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82369458) {
	__imp__sub_82369458(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236964C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8236964C) {
	__imp__sub_8236964C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82369650) {
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
	// li r3,6
	ctx.r3.s64 = 6;
	// bl 0x82367820
	ctx.lr = 0x82369670;
	sub_82367820(ctx, base);
	// lis r11,-31809
	ctx.r11.s64 = -2084634624;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r30,r11,-12528
	ctx.r30.s64 = ctx.r11.s64 + -12528;
	// stw r10,16412(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16412, ctx.r10.u32);
	// lwz r5,24(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r5,16384
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 16384, ctx.xer);
	// ble cr6,0x823696a0
	if (!ctx.cr6.gt) goto loc_823696A0;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r6,16384
	ctx.r6.s64 = 16384;
	// addi r4,r11,5920
	ctx.r4.s64 = ctx.r11.s64 + 5920;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822830e8
	ctx.lr = 0x823696A0;
	sub_822830E8(ctx, base);
loc_823696A0:
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r3,r30,28
	ctx.r3.s64 = ctx.r30.s64 + 28;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r9,16412(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16412, ctx.r9.u32);
	// lbz r11,30(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 30);
	// stb r11,16416(r30)
	PPC_STORE_U8(ctx.r30.u32 + 16416, ctx.r11.u8);
	// lwz r5,24(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x823de1f0
	ctx.lr = 0x823696C8;
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

PPC_WEAK_FUNC(sub_82369650) {
	__imp__sub_82369650(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823696E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf68
	ctx.lr = 0x823696E8;
	__savegprlr_24(ctx, base);
	// stfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31809
	ctx.r11.s64 = -2084634624;
	// lis r10,0
	ctx.r10.s64 = 0;
	// addi r28,r11,-12528
	ctx.r28.s64 = ctx.r11.s64 + -12528;
	// ori r9,r10,35228
	ctx.r9.u64 = ctx.r10.u64 | 35228;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lwzx r11,r28,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r9.u32);
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x82369714
	if (!ctx.cr6.gt) goto loc_82369714;
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
loc_82369714:
	// li r24,0
	ctx.r24.s64 = 0;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
	// ble cr6,0x82369840
	if (!ctx.cr6.gt) goto loc_82369840;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r31,r3,192
	ctx.r31.s64 = ctx.r3.s64 + 192;
	// addi r30,r28,26196
	ctx.r30.s64 = ctx.r28.s64 + 26196;
	// li r25,-1
	ctx.r25.s64 = -1;
	// lfs f31,5484(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f31.f64 = double(temp.f32);
	// addi r27,r11,-29844
	ctx.r27.s64 = ctx.r11.s64 + -29844;
loc_82369740:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823043a8
	ctx.lr = 0x82369748;
	sub_823043A8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82369828
	if (!ctx.cr6.eq) goto loc_82369828;
	// lwz r11,-120(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -120);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82369828
	if (!ctx.cr6.eq) goto loc_82369828;
	// li r5,128
	ctx.r5.s64 = 128;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r31,-192
	ctx.r4.s64 = ctx.r31.s64 + -192;
	// bl 0x822ddaa8
	ctx.lr = 0x82369770;
	sub_822DDAA8(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r31,-64
	ctx.r3.s64 = ctx.r31.s64 + -64;
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x822e8368
	ctx.lr = 0x82369788;
	sub_822E8368(ctx, base);
	// lwz r11,-104(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -104);
	// addi r9,r28,20688
	ctx.r9.s64 = ctx.r28.s64 + 20688;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,64
	ctx.r4.s64 = 64;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r11,r10,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bl 0x822e8368
	ctx.lr = 0x823697B0;
	sub_822E8368(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82304b78
	ctx.lr = 0x823697B8;
	sub_82304B78(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823697c4
	if (!ctx.cr6.eq) goto loc_823697C4;
	// lwz r3,-112(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -112);
loc_823697C4:
	// lwz r11,-112(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -112);
	// extsw r10,r3
	ctx.r10.s64 = ctx.r3.s32;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// std r9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// lfd f12,88(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f13
	ctx.f10.f64 = double(float(ctx.f13.f64));
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// fdivs f8,f10,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 / ctx.f9.f64));
	// stfs f8,76(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 76, temp.u32);
	// lfs f7,-8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -8);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,64(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// bl 0x82304a70
	ctx.lr = 0x82369808;
	sub_82304A70(ctx, base);
	// stfs f1,68(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// lfs f0,16420(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 16420);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x82369820
	if (ctx.cr6.eq) goto loc_82369820;
	// fdivs f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 / ctx.f0.f64));
	// stfs f0,68(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
loc_82369820:
	// stw r25,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r25.u32);
	// b 0x8236982c
	goto loc_8236982C;
loc_82369828:
	// stb r24,-192(r31)
	PPC_STORE_U8(ctx.r31.u32 + -192, ctx.r24.u8);
loc_8236982C:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,176
	ctx.r30.s64 = ctx.r30.s64 + 176;
	// addi r31,r31,272
	ctx.r31.s64 = ctx.r31.s64 + 272;
	// cmpw cr6,r29,r26
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r26.s32, ctx.xer);
	// blt cr6,0x82369740
	if (ctx.cr6.lt) goto loc_82369740;
loc_82369840:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823696E0) {
	__imp__sub_823696E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82369850) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf60
	ctx.lr = 0x82369858;
	__savegprlr_22(ctx, base);
	// stfd f30,-104(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.f30.u64);
	// stfd f31,-96(r1)
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31809
	ctx.r11.s64 = -2084634624;
	// lis r10,0
	ctx.r10.s64 = 0;
	// addi r28,r11,-12528
	ctx.r28.s64 = ctx.r11.s64 + -12528;
	// ori r9,r10,35232
	ctx.r9.u64 = ctx.r10.u64 | 35232;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// lwzx r11,r28,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r9.u32);
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x82369888
	if (!ctx.cr6.gt) goto loc_82369888;
	// mr r25,r11
	ctx.r25.u64 = ctx.r11.u64;
loc_82369888:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// ble cr6,0x82369a60
	if (!ctx.cr6.gt) goto loc_82369A60;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r29,8
	ctx.r29.s64 = 8;
	// addi r31,r3,192
	ctx.r31.s64 = ctx.r3.s64 + 192;
	// lfs f30,12168(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f30.f64 = double(temp.f32);
	// addi r30,r28,27492
	ctx.r30.s64 = ctx.r28.s64 + 27492;
	// lfs f31,5484(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5484);
	ctx.f31.f64 = double(temp.f32);
	// mr r26,r25
	ctx.r26.u64 = ctx.r25.u64;
	// li r24,72
	ctx.r24.s64 = 72;
	// li r22,-1
	ctx.r22.s64 = -1;
	// li r23,0
	ctx.r23.s64 = 0;
	// addi r27,r11,-29844
	ctx.r27.s64 = ctx.r11.s64 + -29844;
loc_823698C4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82304498
	ctx.lr = 0x823698CC;
	sub_82304498(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82369a48
	if (!ctx.cr6.eq) goto loc_82369A48;
	// lwz r11,-8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82369a48
	if (!ctx.cr6.eq) goto loc_82369A48;
	// li r5,128
	ctx.r5.s64 = 128;
	// lwz r3,112(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	// addi r4,r31,-192
	ctx.r4.s64 = ctx.r31.s64 + -192;
	// bl 0x822ddaa8
	ctx.lr = 0x823698F4;
	sub_822DDAA8(ctx, base);
	// lwz r11,112(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r31,-64
	ctx.r3.s64 = ctx.r31.s64 + -64;
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x822e8368
	ctx.lr = 0x8236990C;
	sub_822E8368(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r10,r28,20688
	ctx.r10.s64 = ctx.r28.s64 + 20688;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,64
	ctx.r4.s64 = 64;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r11,r9,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x822e8368
	ctx.lr = 0x82369934;
	sub_822E8368(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82304bf8
	ctx.lr = 0x8236993C;
	sub_82304BF8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82369948
	if (!ctx.cr6.eq) goto loc_82369948;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_82369948:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// extsw r10,r3
	ctx.r10.s64 = ctx.r3.s32;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// std r9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// lfd f12,88(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f13
	ctx.f10.f64 = double(float(ctx.f13.f64));
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// fdivs f8,f10,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 / ctx.f9.f64));
	// stfs f8,76(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 76, temp.u32);
	// lfs f7,104(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,64(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// bl 0x82304ac8
	ctx.lr = 0x8236998C;
	sub_82304AC8(ctx, base);
	// stfs f1,68(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// lfs f0,16420(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 16420);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x823699a4
	if (ctx.cr6.eq) goto loc_823699A4;
	// fdivs f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 / ctx.f0.f64));
	// stfs f0,68(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
loc_823699A4:
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r4,r30,144
	ctx.r4.s64 = ctx.r30.s64 + 144;
	// bl 0x82362fa0
	ctx.lr = 0x823699B4;
	sub_82362FA0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82362678
	ctx.lr = 0x823699BC;
	sub_82362678(ctx, base);
	// fsqrts f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(sqrt(ctx.f1.f64)));
	// fctiwz f0,f13
	ctx.f0.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfiwx f0,r31,r24
	PPC_STORE_U32(ctx.r31.u32 + ctx.r24.u32, ctx.f0.u32);
	// lwz r11,112(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x823699e4
	if (!ctx.cr6.eq) goto loc_823699E4;
	// stw r22,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r22.u32);
	// b 0x82369a4c
	goto loc_82369A4C;
loc_823699E4:
	// lfs f0,44(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// lwz r3,80(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// fsubs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fcmpu cr6,f13,f31
	ctx.cr6.compare(ctx.f13.f64, ctx.f31.f64);
	// bgt cr6,0x82369a0c
	if (ctx.cr6.gt) goto loc_82369A0C;
	// lfs f0,68(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// fmuls f13,f0,f30
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// stfs f13,68(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// b 0x82369a4c
	goto loc_82369A4C;
loc_82369A0C:
	// lfs f12,48(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// fdivs f1,f13,f11
	ctx.f1.f64 = double(float(ctx.f13.f64 / ctx.f11.f64));
	// fcmpu cr6,f1,f30
	ctx.cr6.compare(ctx.f1.f64, ctx.f30.f64);
	// blt cr6,0x82369a34
	if (ctx.cr6.lt) goto loc_82369A34;
	// lfs f0,68(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// fmuls f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// stfs f13,68(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// b 0x82369a4c
	goto loc_82369A4C;
loc_82369A34:
	// bl 0x822dd780
	ctx.lr = 0x82369A38;
	sub_822DD780(ctx, base);
	// lfs f0,68(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f1
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// stfs f13,68(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// b 0x82369a4c
	goto loc_82369A4C;
loc_82369A48:
	// stb r23,-192(r31)
	PPC_STORE_U8(ctx.r31.u32 + -192, ctx.r23.u8);
loc_82369A4C:
	// addic. r26,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// addi r30,r30,176
	ctx.r30.s64 = ctx.r30.s64 + 176;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,272
	ctx.r31.s64 = ctx.r31.s64 + 272;
	// bne 0x823698c4
	if (!ctx.cr0.eq) goto loc_823698C4;
loc_82369A60:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f30,-104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// lfd f31,-96(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x823ddfb0
	__restgprlr_22(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82369850) {
	__imp__sub_82369850(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82369A74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82369A74) {
	__imp__sub_82369A74(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82369A78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf60
	ctx.lr = 0x82369A80;
	__savegprlr_22(ctx, base);
	// stfd f30,-104(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.f30.u64);
	// stfd f31,-96(r1)
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31809
	ctx.r11.s64 = -2084634624;
	// lis r10,0
	ctx.r10.s64 = 0;
	// addi r28,r11,-12528
	ctx.r28.s64 = ctx.r11.s64 + -12528;
	// ori r9,r10,35236
	ctx.r9.u64 = ctx.r10.u64 | 35236;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// lwzx r11,r28,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r9.u32);
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x82369ab0
	if (!ctx.cr6.gt) goto loc_82369AB0;
	// mr r24,r11
	ctx.r24.u64 = ctx.r11.u64;
loc_82369AB0:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// ble cr6,0x82369ce4
	if (!ctx.cr6.gt) goto loc_82369CE4;
	// addis r11,r28,1
	ctx.r11.s64 = ctx.r28.s64 + 65536;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r29,r11,-32300
	ctx.r29.s64 = ctx.r11.s64 + -32300;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r27,40
	ctx.r27.s64 = 40;
	// lfs f30,12168(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f30.f64 = double(temp.f32);
	// addi r31,r3,192
	ctx.r31.s64 = ctx.r3.s64 + 192;
	// lfs f31,5484(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5484);
	ctx.f31.f64 = double(temp.f32);
	// mr r25,r24
	ctx.r25.u64 = ctx.r24.u64;
	// li r23,-1
	ctx.r23.s64 = -1;
	// li r22,0
	ctx.r22.s64 = 0;
	// addi r26,r11,-29844
	ctx.r26.s64 = ctx.r11.s64 + -29844;
loc_82369AEC:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823045f8
	ctx.lr = 0x82369AF4;
	sub_823045F8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82369ccc
	if (!ctx.cr6.eq) goto loc_82369CCC;
	// lwz r11,-120(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -120);
	// addi r30,r29,-104
	ctx.r30.s64 = ctx.r29.s64 + -104;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82369ccc
	if (!ctx.cr6.eq) goto loc_82369CCC;
	// li r5,128
	ctx.r5.s64 = 128;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r4,r31,-192
	ctx.r4.s64 = ctx.r31.s64 + -192;
	// bl 0x822ddaa8
	ctx.lr = 0x82369B20;
	sub_822DDAA8(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r31,-64
	ctx.r3.s64 = ctx.r31.s64 + -64;
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x822e8368
	ctx.lr = 0x82369B38;
	sub_822E8368(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r9,r28,20688
	ctx.r9.s64 = ctx.r28.s64 + 20688;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,64
	ctx.r4.s64 = 64;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r11,r10,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bl 0x822e8368
	ctx.lr = 0x82369B60;
	sub_822E8368(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82304c78
	ctx.lr = 0x82369B68;
	sub_82304C78(ctx, base);
	// lwz r9,-8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8);
	// extsw r8,r3
	ctx.r8.s64 = ctx.r3.s32;
	// extsw r7,r9
	ctx.r7.s64 = ctx.r9.s32;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r7,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r7.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// fcfid f11,f13
	ctx.f11.f64 = double(ctx.f13.s64);
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// fdivs f8,f10,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 / ctx.f9.f64));
	// stfs f8,76(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 76, temp.u32);
	// lfs f7,96(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,64(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// bl 0x82304b20
	ctx.lr = 0x82369BAC;
	sub_82304B20(ctx, base);
	// stfs f1,68(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// lfs f0,16420(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 16420);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x82369bc4
	if (ctx.cr6.eq) goto loc_82369BC4;
	// fdivs f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 / ctx.f0.f64));
	// stfs f0,68(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
loc_82369BC4:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r9,r28,20756
	ctx.r9.s64 = ctx.r28.s64 + 20756;
	// fmr f13,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f31.f64;
	// lwz r8,56(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// srawi r7,r8,9
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1FF) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 9;
	// clrlwi r11,r7,26
	ctx.r11.u64 = ctx.r7.u32 & 0x3F;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r5,r6,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// lbzx r4,r5,r9
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r5.u32 + ctx.r9.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82369bfc
	if (!ctx.cr6.eq) goto loc_82369BFC;
	// stw r23,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r23.u32);
	// b 0x82369c24
	goto loc_82369C24;
loc_82369BFC:
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r3,-4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// addi r4,r30,136
	ctx.r4.s64 = ctx.r30.s64 + 136;
	// bl 0x82362fa0
	ctx.lr = 0x82369C0C;
	sub_82362FA0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82362678
	ctx.lr = 0x82369C14;
	sub_82362678(ctx, base);
	// fsqrts f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(sqrt(ctx.f1.f64)));
	// fctiwz f0,f13
	ctx.f0.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// li r12,72
	ctx.r12.s64 = 72;
	// stfiwx f0,r31,r12
	PPC_STORE_U32(ctx.r31.u32 + ctx.r12.u32, ctx.f0.u32);
loc_82369C24:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82369c40
	if (!ctx.cr6.eq) goto loc_82369C40;
	// stw r23,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r23.u32);
	// b 0x82369cd0
	goto loc_82369CD0;
loc_82369C40:
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// addi r8,r28,20756
	ctx.r8.s64 = ctx.r28.s64 + 20756;
	// srawi r7,r10,9
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1FF) != 0);
	ctx.r7.s64 = ctx.r10.s32 >> 9;
	// clrlwi r10,r7,26
	ctx.r10.u64 = ctx.r7.u32 & 0x3F;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r5,r6,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// lbzx r4,r5,r8
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r5.u32 + ctx.r8.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82369cd0
	if (ctx.cr6.eq) goto loc_82369CD0;
	// lfs f0,44(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// lwz r3,80(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// fsubs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fcmpu cr6,f13,f31
	ctx.cr6.compare(ctx.f13.f64, ctx.f31.f64);
	// bgt cr6,0x82369c90
	if (ctx.cr6.gt) goto loc_82369C90;
	// lfs f0,68(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// fmuls f13,f0,f30
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// stfs f13,68(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// b 0x82369cd0
	goto loc_82369CD0;
loc_82369C90:
	// lfs f12,48(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// fdivs f1,f13,f11
	ctx.f1.f64 = double(float(ctx.f13.f64 / ctx.f11.f64));
	// fcmpu cr6,f1,f30
	ctx.cr6.compare(ctx.f1.f64, ctx.f30.f64);
	// blt cr6,0x82369cb8
	if (ctx.cr6.lt) goto loc_82369CB8;
	// lfs f0,68(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// fmuls f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// stfs f13,68(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// b 0x82369cd0
	goto loc_82369CD0;
loc_82369CB8:
	// bl 0x822dd780
	ctx.lr = 0x82369CBC;
	sub_822DD780(ctx, base);
	// lfs f0,68(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f1
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// stfs f13,68(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// b 0x82369cd0
	goto loc_82369CD0;
loc_82369CCC:
	// stb r22,-192(r31)
	PPC_STORE_U8(ctx.r31.u32 + -192, ctx.r22.u8);
loc_82369CD0:
	// addic. r25,r25,-1
	ctx.xer.ca = ctx.r25.u32 > 0;
	ctx.r25.s64 = ctx.r25.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// addi r29,r29,176
	ctx.r29.s64 = ctx.r29.s64 + 176;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r31,r31,272
	ctx.r31.s64 = ctx.r31.s64 + 272;
	// bne 0x82369aec
	if (!ctx.cr0.eq) goto loc_82369AEC;
loc_82369CE4:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f30,-104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// lfd f31,-96(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x823ddfb0
	__restgprlr_22(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82369A78) {
	__imp__sub_82369A78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82369CF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31809
	ctx.r11.s64 = -2084634624;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// addi r11,r11,-12528
	ctx.r11.s64 = ctx.r11.s64 + -12528;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82369d20
	if (!ctx.cr6.eq) goto loc_82369D20;
loc_82369D18:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82369D20:
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82369d30
	if (ctx.cr6.eq) goto loc_82369D30;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
loc_82369D30:
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// beq cr6,0x82369d50
	if (ctx.cr6.eq) goto loc_82369D50;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// beq cr6,0x82369d4c
	if (ctx.cr6.eq) goto loc_82369D4C;
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// bne cr6,0x82369d18
	if (!ctx.cr6.eq) goto loc_82369D18;
	// b 0x823696e0
	sub_823696E0(ctx, base);
	return;
loc_82369D4C:
	// b 0x82369a78
	sub_82369A78(ctx, base);
	return;
loc_82369D50:
	// b 0x82369850
	sub_82369850(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82369CF8) {
	__imp__sub_82369CF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82369D54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82369D54) {
	__imp__sub_82369D54(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82369D58) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r3,40
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 40, ctx.xer);
	// blt cr6,0x82369d64
	if (ctx.cr6.lt) goto loc_82369D64;
	// b 0x823044b8
	sub_823044B8(ctx, base);
	return;
loc_82369D64:
	// cmpwi cr6,r3,8
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 8, ctx.xer);
	// blt cr6,0x82369d70
	if (ctx.cr6.lt) goto loc_82369D70;
	// b 0x823043c8
	sub_823043C8(ctx, base);
	return;
loc_82369D70:
	// b 0x823042d8
	sub_823042D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82369D58) {
	__imp__sub_82369D58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82369D74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82369D74) {
	__imp__sub_82369D74(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82369D78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82369D80;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31809
	ctx.r10.s64 = -2084634624;
	// mulli r11,r3,176
	ctx.r11.s64 = ctx.r3.s64 * 176;
	// addi r10,r10,-12528
	ctx.r10.s64 = ctx.r10.s64 + -12528;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r10,r10,26076
	ctx.r10.s64 = ctx.r10.s64 + 26076;
	// add r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r9,120(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// lwz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82369de4
	if (!ctx.cr6.eq) goto loc_82369DE4;
	// cmpwi cr6,r3,40
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 40, ctx.xer);
	// blt cr6,0x82369dc0
	if (ctx.cr6.lt) goto loc_82369DC0;
	// bl 0x823044b8
	ctx.lr = 0x82369DB8;
	sub_823044B8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_82369DC0:
	// cmpwi cr6,r30,8
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 8, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// blt cr6,0x82369dd8
	if (ctx.cr6.lt) goto loc_82369DD8;
	// bl 0x823043c8
	ctx.lr = 0x82369DD0;
	sub_823043C8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_82369DD8:
	// bl 0x823042d8
	ctx.lr = 0x82369DDC;
	sub_823042D8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_82369DE4:
	// lwz r29,12(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r31,152
	ctx.r4.s64 = ctx.r31.s64 + 152;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82362fa0
	ctx.lr = 0x82369DF8;
	sub_82362FA0(ctx, base);
	// lwz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x822ddd08
	ctx.lr = 0x82369E04;
	sub_822DDD08(ctx, base);
	// lwz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82369e40
	if (!ctx.cr6.eq) goto loc_82369E40;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lwz r5,12(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// li r3,9
	ctx.r3.s64 = 9;
	// addi r4,r10,5976
	ctx.r4.s64 = ctx.r10.s64 + 5976;
	// bl 0x82280b08
	ctx.lr = 0x82369E28;
	sub_82280B08(ctx, base);
	// cmpwi cr6,r30,40
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 40, ctx.xer);
	// blt cr6,0x82369dc0
	if (ctx.cr6.lt) goto loc_82369DC0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823044b8
	ctx.lr = 0x82369E38;
	sub_823044B8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_82369E40:
	// cmpwi cr6,r30,40
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 40, ctx.xer);
	// blt cr6,0x82369e54
	if (ctx.cr6.lt) goto loc_82369E54;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823044b8
	ctx.lr = 0x82369E50;
	sub_823044B8(ctx, base);
	// b 0x82369e6c
	goto loc_82369E6C;
loc_82369E54:
	// cmpwi cr6,r30,8
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 8, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// blt cr6,0x82369e68
	if (ctx.cr6.lt) goto loc_82369E68;
	// bl 0x823043c8
	ctx.lr = 0x82369E64;
	sub_823043C8(ctx, base);
	// b 0x82369e6c
	goto loc_82369E6C;
loc_82369E68:
	// bl 0x823042d8
	ctx.lr = 0x82369E6C;
	sub_823042D8(ctx, base);
loc_82369E6C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82369e8c
	if (ctx.cr6.eq) goto loc_82369E8C;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82364b50
	ctx.lr = 0x82369E8C;
	sub_82364B50(ctx, base);
loc_82369E8C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82369D78) {
	__imp__sub_82369D78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82369E94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82369E94) {
	__imp__sub_82369E94(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82369E98) {
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
	// lis r10,-31809
	ctx.r10.s64 = -2084634624;
	// mulli r11,r3,176
	ctx.r11.s64 = ctx.r3.s64 * 176;
	// addi r10,r10,-12528
	ctx.r10.s64 = ctx.r10.s64 + -12528;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r10,26076
	ctx.r10.s64 = ctx.r10.s64 + 26076;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,120(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82369f24
	if (ctx.cr6.eq) goto loc_82369F24;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82369f24
	if (!ctx.cr6.eq) goto loc_82369F24;
	// lwz r11,56(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82369f24
	if (!ctx.cr6.eq) goto loc_82369F24;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823050c8
	ctx.lr = 0x82369EF4;
	sub_823050C8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,12168(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x82369f24
	if (ctx.cr6.lt) goto loc_82369F24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82369d78
	ctx.lr = 0x82369F0C;
	sub_82369D78(ctx, base);
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
loc_82369F24:
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

PPC_WEAK_FUNC(sub_82369E98) {
	__imp__sub_82369E98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82369F3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82369F3C) {
	__imp__sub_82369F3C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82369F40) {
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
	// li r3,20
	ctx.r3.s64 = 20;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x822ec4e8
	ctx.lr = 0x82369F64;
	sub_822EC4E8(ctx, base);
	// lis r11,-31809
	ctx.r11.s64 = -2084634624;
	// addi r11,r11,22712
	ctx.r11.s64 = ctx.r11.s64 + 22712;
	// lwz r10,512(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 512);
	// cmpwi cr6,r10,32
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 32, ctx.xer);
	// bge cr6,0x82369fb4
	if (!ctx.cr6.lt) goto loc_82369FB4;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// stwx r30,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r30.u32);
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,512(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 512);
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stfs f0,0(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lfs f13,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// lfs f12,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// lwz r10,512(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 512);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,512(r11)
	PPC_STORE_U32(ctx.r11.u32 + 512, ctx.r10.u32);
loc_82369FB4:
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x822ec500
	ctx.lr = 0x82369FBC;
	sub_822EC500(ctx, base);
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

PPC_WEAK_FUNC(sub_82369F40) {
	__imp__sub_82369F40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82369FD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82369FD4) {
	__imp__sub_82369FD4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82369FD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31809
	ctx.r11.s64 = -2084634624;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-12528
	ctx.r9.s64 = ctx.r11.s64 + -12528;
	// lwz r11,20664(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20664);
	// stb r10,56(r11)
	PPC_STORE_U8(ctx.r11.u32 + 56, ctx.r10.u8);
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,20664(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20664);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f12,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stw r4,20668(r9)
	PPC_STORE_U32(ctx.r9.u32 + 20668, ctx.r4.u32);
	// stfs f1,20680(r9)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r9.u32 + 20680, temp.u32);
	// stw r5,20672(r9)
	PPC_STORE_U32(ctx.r9.u32 + 20672, ctx.r5.u32);
	// stfs f2,20684(r9)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r9.u32 + 20684, temp.u32);
	// stfs f3,20676(r9)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r9.u32 + 20676, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82369FD8) {
	__imp__sub_82369FD8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236A024) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8236A024) {
	__imp__sub_8236A024(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236A028) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31809
	ctx.r11.s64 = -2084634624;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,-12528
	ctx.r9.s64 = ctx.r11.s64 + -12528;
	// lwz r11,20664(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20664);
	// stb r10,56(r11)
	PPC_STORE_U8(ctx.r11.u32 + 56, ctx.r10.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8236A028) {
	__imp__sub_8236A028(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236A040) {
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
	// lis r11,-31809
	ctx.r11.s64 = -2084634624;
	// lfs f13,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f12,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// addi r31,r11,-12528
	ctx.r31.s64 = ctx.r11.s64 + -12528;
	// lfs f11,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,5484(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,20664(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20664);
	// lwz r10,20668(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20668);
	// lwz r9,20672(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20672);
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// subf r7,r10,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r10.s64;
	// lfs f10,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// std r8,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r8.u64);
	// extsw r6,r7
	ctx.r6.s64 = ctx.r7.s32;
	// fsubs f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// lfs f8,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f7,80(r1)
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fsubs f6,f8,f12
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f12.f64));
	// lfs f5,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f4,f5,f11
	ctx.f4.f64 = double(float(ctx.f5.f64 - ctx.f11.f64));
	// lfd f3,88(r1)
	ctx.f3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f2,f3
	ctx.f2.f64 = double(ctx.f3.s64);
	// fmuls f1,f9,f9
	ctx.f1.f64 = double(float(ctx.f9.f64 * ctx.f9.f64));
	// frsp f13,f2
	ctx.f13.f64 = double(float(ctx.f2.f64));
	// fcfid f12,f7
	ctx.f12.f64 = double(ctx.f7.s64);
	// fmadds f11,f6,f6,f1
	ctx.f11.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f1.f64));
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// fmadds f9,f4,f4,f11
	ctx.f9.f64 = double(float(ctx.f4.f64 * ctx.f4.f64 + ctx.f11.f64));
	// fsqrts f8,f9
	ctx.f8.f64 = double(float(sqrt(ctx.f9.f64)));
	// fsubs f7,f8,f13
	ctx.f7.f64 = double(float(ctx.f8.f64 - ctx.f13.f64));
	// fdivs f13,f7,f10
	ctx.f13.f64 = double(float(ctx.f7.f64 / ctx.f10.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x8236a0f4
	if (ctx.cr6.gt) goto loc_8236A0F4;
	// lfs f1,20684(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20684);
	ctx.f1.f64 = double(temp.f32);
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
loc_8236A0F4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f2,20676(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20676);
	ctx.f2.f64 = double(temp.f32);
	// lfs f0,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// bl 0x823e1e88
	ctx.lr = 0x8236A108;
	sub_823E1E88(ctx, base);
	// lfs f0,20680(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20680);
	ctx.f0.f64 = double(temp.f32);
	// frsp f12,f1
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// lfs f13,20684(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20684);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fmadds f1,f11,f12,f0
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f12.f64 + ctx.f0.f64));
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

PPC_WEAK_FUNC(sub_8236A040) {
	__imp__sub_8236A040(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236A130) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31809
	ctx.r11.s64 = -2084634624;
	// addi r10,r11,-12528
	ctx.r10.s64 = ctx.r11.s64 + -12528;
	// lfs f1,16420(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16420);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8236A130) {
	__imp__sub_8236A130(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236A140) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31809
	ctx.r11.s64 = -2084634624;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r11,-12528
	ctx.r9.s64 = ctx.r11.s64 + -12528;
	// lfs f13,32272(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 32272);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,16420(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 16420);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8236A140) {
	__imp__sub_8236A140(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236A15C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8236A15C) {
	__imp__sub_8236A15C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236A160) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8236A168;
	__savegprlr_29(ctx, base);
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x823de028
	ctx.lr = 0x8236A170;
	__savefpr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
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
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 6, ctx.xer);
	// beq cr6,0x8236a1b4
	if (ctx.cr6.eq) goto loc_8236A1B4;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r3,9
	ctx.r3.s64 = 9;
	// addi r4,r11,6240
	ctx.r4.s64 = ctx.r11.s64 + 6240;
	// bl 0x82280900
	ctx.lr = 0x8236A1A4;
	sub_82280900(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x823de074
	ctx.lr = 0x8236A1B0;
	__restfpr_28(ctx, base);
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_8236A1B4:
	// addi r10,r31,100
	ctx.r10.s64 = ctx.r31.s64 + 100;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r3,4(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// bl 0x82361c78
	ctx.lr = 0x8236A1C8;
	sub_82361C78(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8236a394
	if (ctx.cr6.eq) goto loc_8236A394;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r9,r31,68
	ctx.r9.s64 = ctx.r31.s64 + 68;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r30,r10,-28736
	ctx.r30.s64 = ctx.r10.s64 + -28736;
	// lwzx r8,r11,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmpwi cr6,r8,2
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 2, ctx.xer);
	// ble cr6,0x8236a204
	if (!ctx.cr6.gt) goto loc_8236A204;
	// addi r10,r31,100
	ctx.r10.s64 = ctx.r31.s64 + 100;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r29,8(r9)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// b 0x8236a208
	goto loc_8236A208;
loc_8236A204:
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_8236A208:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82361d40
	ctx.lr = 0x8236A210;
	sub_82361D40(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8236a230
	if (!ctx.cr6.eq) goto loc_8236A230;
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,-31544(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -31544);
	// bl 0x822e8058
	ctx.lr = 0x8236A228;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8236a394
	if (!ctx.cr6.eq) goto loc_8236A394;
loc_8236A230:
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
	// ble cr6,0x8236a258
	if (!ctx.cr6.gt) goto loc_8236A258;
	// addi r10,r31,100
	ctx.r10.s64 = ctx.r31.s64 + 100;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r3,12(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// b 0x8236a25c
	goto loc_8236A25C;
loc_8236A258:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_8236A25C:
	// bl 0x823dec00
	ctx.lr = 0x8236A260;
	sub_823DEC00(ctx, base);
	// frsp f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = double(float(ctx.f1.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f28,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f28.f64 = double(temp.f32);
	// fcmpu cr6,f30,f28
	ctx.cr6.compare(ctx.f30.f64, ctx.f28.f64);
	// blt cr6,0x8236a378
	if (ctx.cr6.lt) goto loc_8236A378;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f29,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f29.f64 = double(temp.f32);
	// fcmpu cr6,f30,f29
	ctx.cr6.compare(ctx.f30.f64, ctx.f29.f64);
	// bgt cr6,0x8236a378
	if (ctx.cr6.gt) goto loc_8236A378;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r31,68
	ctx.r10.s64 = ctx.r31.s64 + 68;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4, ctx.xer);
	// ble cr6,0x8236a2ac
	if (!ctx.cr6.gt) goto loc_8236A2AC;
	// addi r10,r31,100
	ctx.r10.s64 = ctx.r31.s64 + 100;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r3,16(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// b 0x8236a2b0
	goto loc_8236A2B0;
loc_8236A2AC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_8236A2B0:
	// bl 0x823dec00
	ctx.lr = 0x8236A2B4;
	sub_823DEC00(ctx, base);
	// frsp f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f1.f64));
	// fcmpu cr6,f31,f28
	ctx.cr6.compare(ctx.f31.f64, ctx.f28.f64);
	// blt cr6,0x8236a34c
	if (ctx.cr6.lt) goto loc_8236A34C;
	// fcmpu cr6,f31,f29
	ctx.cr6.compare(ctx.f31.f64, ctx.f29.f64);
	// bgt cr6,0x8236a34c
	if (ctx.cr6.gt) goto loc_8236A34C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r31,68
	ctx.r10.s64 = ctx.r31.s64 + 68;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,5
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 5, ctx.xer);
	// ble cr6,0x8236a2f0
	if (!ctx.cr6.gt) goto loc_8236A2F0;
	// addi r10,r31,100
	ctx.r10.s64 = ctx.r31.s64 + 100;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r3,20(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// b 0x8236a2f4
	goto loc_8236A2F4;
loc_8236A2F0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_8236A2F4:
	// bl 0x823deaf8
	ctx.lr = 0x8236A2F8;
	sub_823DEAF8(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x8236a328
	if (!ctx.cr6.lt) goto loc_8236A328;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,6172
	ctx.r4.s64 = ctx.r11.s64 + 6172;
	// li r3,9
	ctx.r3.s64 = 9;
	// bl 0x82280900
	ctx.lr = 0x8236A318;
	sub_82280900(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x823de074
	ctx.lr = 0x8236A324;
	__restfpr_28(ctx, base);
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_8236A328:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x823668c0
	ctx.lr = 0x8236A33C;
	sub_823668C0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x823de074
	ctx.lr = 0x8236A348;
	__restfpr_28(ctx, base);
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_8236A34C:
	// stfd f31,32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f31.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// li r3,9
	ctx.r3.s64 = 9;
	// addi r4,r11,6116
	ctx.r4.s64 = ctx.r11.s64 + 6116;
	// bl 0x82280900
	ctx.lr = 0x8236A368;
	sub_82280900(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x823de074
	ctx.lr = 0x8236A374;
	__restfpr_28(ctx, base);
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_8236A378:
	// stfd f30,32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f30.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// li r3,9
	ctx.r3.s64 = 9;
	// addi r4,r11,6060
	ctx.r4.s64 = ctx.r11.s64 + 6060;
	// bl 0x82280900
	ctx.lr = 0x8236A394;
	sub_82280900(ctx, base);
loc_8236A394:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x823de074
	ctx.lr = 0x8236A3A0;
	__restfpr_28(ctx, base);
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8236A160) {
	__imp__sub_8236A160(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236A3A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8236A3A4) {
	__imp__sub_8236A3A4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236A3A8) {
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
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// beq cr6,0x8236a3fc
	if (ctx.cr6.eq) goto loc_8236A3FC;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r3,9
	ctx.r3.s64 = 9;
	// addi r4,r11,6376
	ctx.r4.s64 = ctx.r11.s64 + 6376;
	// bl 0x82280900
	ctx.lr = 0x8236A3E8;
	sub_82280900(ctx, base);
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
loc_8236A3FC:
	// addi r10,r31,100
	ctx.r10.s64 = ctx.r31.s64 + 100;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r3,4(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// bl 0x82361c78
	ctx.lr = 0x8236A410;
	sub_82361C78(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8236a48c
	if (ctx.cr6.eq) goto loc_8236A48C;
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
	// ble cr6,0x8236a444
	if (!ctx.cr6.gt) goto loc_8236A444;
	// addi r10,r31,100
	ctx.r10.s64 = ctx.r31.s64 + 100;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r3,8(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// b 0x8236a44c
	goto loc_8236A44C;
loc_8236A444:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-28736
	ctx.r3.s64 = ctx.r11.s64 + -28736;
loc_8236A44C:
	// bl 0x823deaf8
	ctx.lr = 0x8236A450;
	sub_823DEAF8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x8236a480
	if (!ctx.cr6.lt) goto loc_8236A480;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r3,9
	ctx.r3.s64 = 9;
	// addi r4,r11,6172
	ctx.r4.s64 = ctx.r11.s64 + 6172;
	// bl 0x82280900
	ctx.lr = 0x8236A46C;
	sub_82280900(ctx, base);
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
loc_8236A480:
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x823669e8
	ctx.lr = 0x8236A48C;
	sub_823669E8(ctx, base);
loc_8236A48C:
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

PPC_WEAK_FUNC(sub_8236A3A8) {
	__imp__sub_8236A3A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236A4A0) {
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
	// lis r11,-31809
	ctx.r11.s64 = -2084634624;
	// mulli r9,r3,60
	ctx.r9.s64 = ctx.r3.s64 * 60;
	// addi r10,r11,-12528
	ctx.r10.s64 = ctx.r11.s64 + -12528;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r11,r10,20532
	ctx.r11.s64 = ctx.r10.s64 + 20532;
	// lbzx r31,r9,r11
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// beq cr6,0x8236a4f0
	if (ctx.cr6.eq) goto loc_8236A4F0;
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8236a4e8
	if (ctx.cr6.eq) goto loc_8236A4E8;
	// lbz r11,20532(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 20532);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x8236a4ec
	if (ctx.cr6.eq) goto loc_8236A4EC;
loc_8236A4E8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8236A4EC:
	// clrlwi r31,r11,24
	ctx.r31.u64 = ctx.r11.u32 & 0xFF;
loc_8236A4F0:
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x8236a51c
	if (ctx.cr6.eq) goto loc_8236A51C;
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8236a514
	if (ctx.cr6.eq) goto loc_8236A514;
	// lbz r11,20592(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 20592);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x8236a518
	if (ctx.cr6.eq) goto loc_8236A518;
loc_8236A514:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8236A518:
	// clrlwi r31,r11,24
	ctx.r31.u64 = ctx.r11.u32 & 0xFF;
loc_8236A51C:
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x8236a548
	if (ctx.cr6.eq) goto loc_8236A548;
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8236a540
	if (ctx.cr6.eq) goto loc_8236A540;
	// lbz r11,20652(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 20652);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x8236a544
	if (ctx.cr6.eq) goto loc_8236A544;
loc_8236A540:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8236A544:
	// clrlwi r31,r11,24
	ctx.r31.u64 = ctx.r11.u32 & 0xFF;
loc_8236A548:
	// addi r11,r10,20476
	ctx.r11.s64 = ctx.r10.s64 + 20476;
	// li r5,60
	ctx.r5.s64 = 60;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r9,r11
	ctx.r3.u64 = ctx.r9.u64 + ctx.r11.u64;
	// bl 0x823de090
	ctx.lr = 0x8236A55C;
	sub_823DE090(ctx, base);
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8236a570
	if (ctx.cr6.eq) goto loc_8236A570;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82367820
	ctx.lr = 0x8236A570;
	sub_82367820(ctx, base);
loc_8236A570:
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

PPC_WEAK_FUNC(sub_8236A4A0) {
	__imp__sub_8236A4A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236A584) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8236A584) {
	__imp__sub_8236A584(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236A588) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x8236A590;
	__savegprlr_27(ctx, base);
	// stfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f30.u64);
	// stfd f31,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31809
	ctx.r11.s64 = -2084634624;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r29,r11,23232
	ctx.r29.s64 = ctx.r11.s64 + 23232;
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
	// lwz r11,644(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 644);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8236a624
	if (ctx.cr6.eq) goto loc_8236A624;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r31,r29,8
	ctx.r31.s64 = ctx.r29.s64 + 8;
	// li r28,1
	ctx.r28.s64 = 1;
	// lfs f31,12168(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,5484(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5484);
	ctx.f30.f64 = double(temp.f32);
loc_8236A5D0:
	// lwz r4,-8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// lwz r8,-4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8236a614
	if (ctx.cr6.eq) goto loc_8236A614;
	// li r10,0
	ctx.r10.s64 = 0;
	// fmr f4,f31
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f31.f64;
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// stw r28,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r28.u32);
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// stb r30,95(r1)
	PPC_STORE_U8(ctx.r1.u32 + 95, ctx.r30.u8);
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// bl 0x82364558
	ctx.lr = 0x8236A610;
	sub_82364558(ctx, base);
	// lwz r11,644(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 644);
loc_8236A614:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r31,r31,20
	ctx.r31.s64 = ctx.r31.s64 + 20;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8236a5d0
	if (ctx.cr6.lt) goto loc_8236A5D0;
loc_8236A624:
	// stw r30,644(r29)
	PPC_STORE_U32(ctx.r29.u32 + 644, ctx.r30.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8236A588) {
	__imp__sub_8236A588(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236A638) {
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
	// lis r11,-31809
	ctx.r11.s64 = -2084634624;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// addi r11,r11,-12528
	ctx.r11.s64 = ctx.r11.s64 + -12528;
	// lfs f0,16424(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16424);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// stfs f1,16428(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16428, temp.u32);
	// stfs f0,16432(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16432, temp.u32);
	// beq cr6,0x8236a690
	if (ctx.cr6.eq) goto loc_8236A690;
	// extsw r10,r4
	ctx.r10.s64 = ctx.r4.s32;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fdivs f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f11.f64));
	// stfs f0,16432(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16432, temp.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8236A690:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bne cr6,0x8236a6a8
	if (!ctx.cr6.eq) goto loc_8236A6A8;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82367820
	ctx.lr = 0x8236A6A8;
	sub_82367820(ctx, base);
loc_8236A6A8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8236A638) {
	__imp__sub_8236A638(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236A6B8) {
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
	// lis r11,-31809
	ctx.r11.s64 = -2084634624;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r31,r11,-12528
	ctx.r31.s64 = ctx.r11.s64 + -12528;
	// li r10,0
	ctx.r10.s64 = 0;
	// lfs f12,5484(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5484);
	ctx.f12.f64 = double(temp.f32);
	// lwz r8,26072(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26072);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x8236a78c
	if (!ctx.cr6.gt) goto loc_8236A78C;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
loc_8236A6F4:
	// lbz r7,2(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8236a724
	if (ctx.cr6.eq) goto loc_8236A724;
	// srawi r11,r10,5
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 5;
	// addi r7,r31,25808
	ctx.r7.s64 = ctx.r31.s64 + 25808;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r5,r10,27
	ctx.r5.u64 = ctx.r10.u32 & 0x1F;
	// slw r4,r8,r5
	ctx.r4.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r5.u8 & 0x3F));
	// lwzx r11,r6,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// and r7,r4,r11
	ctx.r7.u64 = ctx.r4.u64 & ctx.r11.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x8236a778
	if (!ctx.cr6.eq) goto loc_8236A778;
loc_8236A724:
	// extsw r7,r3
	ctx.r7.s64 = ctx.r3.s32;
	// lwz r11,20296(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20296);
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// frsp f11,f13
	ctx.f11.f64 = double(float(ctx.f13.f64));
	// lfs f10,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f9,f12
	ctx.cr6.compare(ctx.f9.f64, ctx.f12.f64);
	// fmadds f0,f11,f9,f10
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f9.f64 + ctx.f10.f64));
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// bge cr6,0x8236a768
	if (!ctx.cr6.lt) goto loc_8236A768;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x8236a778
	if (!ctx.cr6.lt) goto loc_8236A778;
	// b 0x8236a770
	goto loc_8236A770;
loc_8236A768:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x8236a778
	if (!ctx.cr6.gt) goto loc_8236A778;
loc_8236A770:
	// stfs f12,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
loc_8236A778:
	// lwz r11,26072(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26072);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,12
	ctx.r9.s64 = ctx.r9.s64 + 12;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8236a6f4
	if (ctx.cr6.lt) goto loc_8236A6F4;
loc_8236A78C:
	// lfs f13,16432(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16432);
	ctx.f13.f64 = double(temp.f32);
	// lis r30,-31809
	ctx.r30.s64 = -2084634624;
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bne cr6,0x8236a7b0
	if (!ctx.cr6.eq) goto loc_8236A7B0;
	// lwz r11,-12540(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -12540);
	// lbz r10,11(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 11);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8236a840
	if (ctx.cr6.eq) goto loc_8236A840;
	// b 0x8236a818
	goto loc_8236A818;
loc_8236A7B0:
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// lfs f0,16424(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16424);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// lfs f11,16428(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16428);
	ctx.f11.f64 = double(temp.f32);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// fmadds f0,f9,f13,f0
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f13.f64 + ctx.f0.f64));
	// stfs f0,16424(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16424, temp.u32);
	// bge cr6,0x8236a7e8
	if (!ctx.cr6.lt) goto loc_8236A7E8;
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// bge cr6,0x8236a800
	if (!ctx.cr6.lt) goto loc_8236A800;
	// b 0x8236a7f0
	goto loc_8236A7F0;
loc_8236A7E8:
	// fcmpu cr6,f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// ble cr6,0x8236a800
	if (!ctx.cr6.gt) goto loc_8236A800;
loc_8236A7F0:
	// stfs f12,16432(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16432, temp.u32);
	// fmr f13,f12
	ctx.f13.f64 = ctx.f12.f64;
	// stfs f11,16424(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16424, temp.u32);
	// fmr f0,f11
	ctx.f0.f64 = ctx.f11.f64;
loc_8236A800:
	// fcmpu cr6,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bne cr6,0x8236a818
	if (!ctx.cr6.eq) goto loc_8236A818;
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bne cr6,0x8236a818
	if (!ctx.cr6.eq) goto loc_8236A818;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82367820
	ctx.lr = 0x8236A818;
	sub_82367820(ctx, base);
loc_8236A818:
	// lwz r3,-12540(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -12540);
	// bl 0x822e0228
	ctx.lr = 0x8236A820;
	sub_822E0228(ctx, base);
	// lwz r11,-12540(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -12540);
	// lfs f0,16424(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16424);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lfs f12,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f13,8336(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8336);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f11,f13
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// stfs f0,16420(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16420, temp.u32);
loc_8236A840:
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

PPC_WEAK_FUNC(sub_8236A6B8) {
	__imp__sub_8236A6B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236A858) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8236A860;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82361c08
	ctx.lr = 0x8236A870;
	sub_82361C08(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x8236a898
	if (!ctx.cr6.eq) goto loc_8236A898;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r11,1664
	ctx.r4.s64 = ctx.r11.s64 + 1664;
	// li r3,9
	ctx.r3.s64 = 9;
	// bl 0x82280b08
	ctx.lr = 0x8236A890;
	sub_82280B08(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_8236A898:
	// li r31,0
	ctx.r31.s64 = 0;
loc_8236A89C:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82303dc8
	ctx.lr = 0x8236A8AC;
	sub_82303DC8(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// blt cr6,0x8236a89c
	if (ctx.cr6.lt) goto loc_8236A89C;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8236A858) {
	__imp__sub_8236A858(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236A8C0) {
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
	// lis r11,-31809
	ctx.r11.s64 = -2084634624;
	// addi r31,r11,-12528
	ctx.r31.s64 = ctx.r11.s64 + -12528;
	// lbz r11,-12528(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + -12528);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8236aa2c
	if (ctx.cr6.eq) goto loc_8236AA2C;
	// bl 0x82305a58
	ctx.lr = 0x8236A8EC;
	sub_82305A58(ctx, base);
	// lis r11,-31936
	ctx.r11.s64 = -2092957696;
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// lwz r11,-9436(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9436);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8236a954
	if (ctx.cr6.eq) goto loc_8236A954;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bgt cr6,0x8236a914
	if (ctx.cr6.gt) goto loc_8236A914;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8236a934
	goto loc_8236A934;
loc_8236A914:
	// lis r10,-32155
	ctx.r10.s64 = -2107310080;
	// li r11,6
	ctx.r11.s64 = 6;
	// addi r9,r10,-30024
	ctx.r9.s64 = ctx.r10.s64 + -30024;
	// rlwinm r8,r11,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// lwz r10,12(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// srawi r7,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r10.s32 >> 31;
	// subfc r6,r11,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r11.u32;
	ctx.r6.s64 = ctx.r10.s64 - ctx.r11.s64;
	// adde r11,r8,r7
	temp.u8 = (ctx.r8.u32 + ctx.r7.u32 < ctx.r8.u32) | (ctx.r8.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ctx.r8.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_8236A934:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8236a954
	if (ctx.cr6.eq) goto loc_8236A954;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r4,3000
	ctx.r4.s64 = 3000;
	// addi r5,r11,6448
	ctx.r5.s64 = ctx.r11.s64 + 6448;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x8228afc0
	ctx.lr = 0x8236A954;
	sub_8228AFC0(ctx, base);
loc_8236A954:
	// bl 0x82310110
	ctx.lr = 0x8236A958;
	sub_82310110(ctx, base);
	// lwz r11,20656(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20656);
	// subf r30,r11,r3
	ctx.r30.s64 = ctx.r3.s64 - ctx.r11.s64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,20656(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20656, ctx.r11.u32);
	// bl 0x82305548
	ctx.lr = 0x8236A970;
	sub_82305548(ctx, base);
	// lis r11,-31936
	ctx.r11.s64 = -2092957696;
	// lbz r10,2(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// lwz r11,-9404(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9404);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addic r8,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// subfe r11,r8,r9
	temp.u8 = (~ctx.r8.u32 + ctx.r9.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r8.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8236a9a8
	if (ctx.cr6.eq) goto loc_8236A9A8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8236a9a4
	if (ctx.cr6.eq) goto loc_8236A9A4;
	// bl 0x82365488
	ctx.lr = 0x8236A9A0;
	sub_82365488(ctx, base);
	// b 0x8236a9a8
	goto loc_8236A9A8;
loc_8236A9A4:
	// bl 0x82365680
	ctx.lr = 0x8236A9A8;
	sub_82365680(ctx, base);
loc_8236A9A8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8236a6b8
	ctx.lr = 0x8236A9B0;
	sub_8236A6B8(ctx, base);
	// lbz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8236aa08
	if (!ctx.cr6.eq) goto loc_8236AA08;
	// lwz r11,16412(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16412);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8236a9fc
	if (ctx.cr6.eq) goto loc_8236A9FC;
	// addi r5,r31,28
	ctx.r5.s64 = ctx.r31.s64 + 28;
	// lwz r4,16412(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16412);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lbz r6,16416(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16416);
	// bl 0x822e4ab8
	ctx.lr = 0x8236A9DC;
	sub_822E4AB8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82369458
	ctx.lr = 0x8236A9E4;
	sub_82369458(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822e4808
	ctx.lr = 0x8236A9F0;
	sub_822E4808(ctx, base);
	// lwsync 
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,16412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16412, ctx.r11.u32);
loc_8236A9FC:
	// bl 0x82366e60
	ctx.lr = 0x8236AA00;
	sub_82366E60(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82366c10
	ctx.lr = 0x8236AA08;
	sub_82366C10(ctx, base);
loc_8236AA08:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82366798
	ctx.lr = 0x8236AA10;
	sub_82366798(ctx, base);
	// bl 0x823676b8
	ctx.lr = 0x8236AA14;
	sub_823676B8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82305550
	ctx.lr = 0x8236AA1C;
	sub_82305550(ctx, base);
	// lis r11,-31809
	ctx.r11.s64 = -2084634624;
	// lwz r11,-12544(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -12544);
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x82367530
	ctx.lr = 0x8236AA2C;
	sub_82367530(ctx, base);
loc_8236AA2C:
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

PPC_WEAK_FUNC(sub_8236A8C0) {
	__imp__sub_8236A8C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236AA44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8236AA44) {
	__imp__sub_8236AA44(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236AA48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x8236AA50;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
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
	// lwzx r30,r11,r10
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// blt cr6,0x8236abd8
	if (ctx.cr6.lt) goto loc_8236ABD8;
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 4, ctx.xer);
	// bgt cr6,0x8236abd8
	if (ctx.cr6.gt) goto loc_8236ABD8;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// addi r29,r10,-28736
	ctx.r29.s64 = ctx.r10.s64 + -28736;
	// ble cr6,0x8236aa9c
	if (!ctx.cr6.gt) goto loc_8236AA9C;
	// addi r10,r31,100
	ctx.r10.s64 = ctx.r31.s64 + 100;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r3,4(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x8236aaa0
	goto loc_8236AAA0;
loc_8236AA9C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_8236AAA0:
	// bl 0x823deaf8
	ctx.lr = 0x8236AAA4;
	sub_823DEAF8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8236abb8
	if (ctx.cr6.lt) goto loc_8236ABB8;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bge cr6,0x8236abb8
	if (!ctx.cr6.lt) goto loc_8236ABB8;
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// beq cr6,0x8236aba8
	if (ctx.cr6.eq) goto loc_8236ABA8;
	// cmpwi cr6,r30,3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 3, ctx.xer);
	// beq cr6,0x8236ab60
	if (ctx.cr6.eq) goto loc_8236AB60;
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 4, ctx.xer);
	// bne cr6,0x8236abe8
	if (!ctx.cr6.eq) goto loc_8236ABE8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r31,68
	ctx.r10.s64 = ctx.r31.s64 + 68;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// ble cr6,0x8236aaf8
	if (!ctx.cr6.gt) goto loc_8236AAF8;
	// addi r9,r31,100
	ctx.r9.s64 = ctx.r31.s64 + 100;
	// lwzx r8,r11,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwz r30,8(r8)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// b 0x8236aafc
	goto loc_8236AAFC;
loc_8236AAF8:
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_8236AAFC:
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// ble cr6,0x8236ab14
	if (!ctx.cr6.gt) goto loc_8236AB14;
	// addi r10,r31,100
	ctx.r10.s64 = ctx.r31.s64 + 100;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r3,12(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// b 0x8236ab18
	goto loc_8236AB18;
loc_8236AB14:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_8236AB18:
	// bl 0x823deaf8
	ctx.lr = 0x8236AB1C;
	sub_823DEAF8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8236ab44
	if (ctx.cr6.lt) goto loc_8236AB44;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bge cr6,0x8236ab44
	if (!ctx.cr6.lt) goto loc_8236AB44;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82366e08
	ctx.lr = 0x8236AB3C;
	sub_82366E08(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_8236AB44:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r6,3
	ctx.r6.s64 = 3;
	// addi r4,r11,1616
	ctx.r4.s64 = ctx.r11.s64 + 1616;
	// li r3,9
	ctx.r3.s64 = 9;
	// bl 0x82280900
	ctx.lr = 0x8236AB58;
	sub_82280900(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_8236AB60:
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
	// ble cr6,0x8236ab94
	if (!ctx.cr6.gt) goto loc_8236AB94;
	// addi r10,r31,100
	ctx.r10.s64 = ctx.r31.s64 + 100;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r3,8(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// bl 0x8236a858
	ctx.lr = 0x8236AB8C;
	sub_8236A858(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_8236AB94:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x8236a858
	ctx.lr = 0x8236ABA0;
	sub_8236A858(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_8236ABA8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82366db8
	ctx.lr = 0x8236ABB0;
	sub_82366DB8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_8236ABB8:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r6,2
	ctx.r6.s64 = 2;
	// addi r4,r11,1568
	ctx.r4.s64 = ctx.r11.s64 + 1568;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r3,9
	ctx.r3.s64 = 9;
	// bl 0x82280900
	ctx.lr = 0x8236ABD0;
	sub_82280900(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_8236ABD8:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r3,9
	ctx.r3.s64 = 9;
	// addi r4,r11,6472
	ctx.r4.s64 = ctx.r11.s64 + 6472;
	// bl 0x82280900
	ctx.lr = 0x8236ABE8;
	sub_82280900(ctx, base);
loc_8236ABE8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8236AA48) {
	__imp__sub_8236AA48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236ABF0) {
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
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r3,9
	ctx.r3.s64 = 9;
	// addi r4,r11,7300
	ctx.r4.s64 = ctx.r11.s64 + 7300;
	// bl 0x82280900
	ctx.lr = 0x8236AC1C;
	sub_82280900(ctx, base);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// addi r6,r10,7252
	ctx.r6.s64 = ctx.r10.s64 + 7252;
	// addi r3,r9,7232
	ctx.r3.s64 = ctx.r9.s64 + 7232;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822e15d0
	ctx.lr = 0x8236AC38;
	sub_822E15D0(ctx, base);
	// lis r8,-31809
	ctx.r8.s64 = -2084634624;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r5,-32251
	ctx.r5.s64 = -2113601536;
	// lis r4,-32251
	ctx.r4.s64 = -2113601536;
	// stw r3,-12532(r8)
	PPC_STORE_U32(ctx.r8.u32 + -12532, ctx.r3.u32);
	// addi r8,r5,7204
	ctx.r8.s64 = ctx.r5.s64 + 7204;
	// lfs f3,6048(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 6048);
	ctx.f3.f64 = double(temp.f32);
	// addi r3,r4,7192
	ctx.r3.s64 = ctx.r4.s64 + 7192;
	// lfs f31,5484(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 5484);
	ctx.f31.f64 = double(temp.f32);
	// li r7,0
	ctx.r7.s64 = 0;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f3
	ctx.f1.f64 = ctx.f3.f64;
	// bl 0x822e1660
	ctx.lr = 0x8236AC70;
	sub_822E1660(ctx, base);
	// lis r30,-31809
	ctx.r30.s64 = -2084634624;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r3,-32251
	ctx.r3.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r8,r3,7080
	ctx.r8.s64 = ctx.r3.s64 + 7080;
	// stw r11,-12540(r30)
	PPC_STORE_U32(ctx.r30.u32 + -12540, ctx.r11.u32);
	// addi r3,r10,7060
	ctx.r3.s64 = ctx.r10.s64 + 7060;
	// li r7,4
	ctx.r7.s64 = 4;
	// li r6,5000
	ctx.r6.s64 = 5000;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,500
	ctx.r4.s64 = 500;
	// bl 0x822e1618
	ctx.lr = 0x8236ACA0;
	sub_822E1618(ctx, base);
	// lis r9,-31809
	ctx.r9.s64 = -2084634624;
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// lis r7,-32251
	ctx.r7.s64 = -2113601536;
	// addi r6,r8,7040
	ctx.r6.s64 = ctx.r8.s64 + 7040;
	// li r5,4
	ctx.r5.s64 = 4;
	// stw r3,23880(r9)
	PPC_STORE_U32(ctx.r9.u32 + 23880, ctx.r3.u32);
	// addi r3,r7,7024
	ctx.r3.s64 = ctx.r7.s64 + 7024;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x822e15d0
	ctx.lr = 0x8236ACC4;
	sub_822E15D0(ctx, base);
	// lis r5,-31809
	ctx.r5.s64 = -2084634624;
	// lis r4,-32251
	ctx.r4.s64 = -2113601536;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r6,r4,7004
	ctx.r6.s64 = ctx.r4.s64 + 7004;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r3,-12548(r5)
	PPC_STORE_U32(ctx.r5.u32 + -12548, ctx.r3.u32);
	// addi r3,r11,6988
	ctx.r3.s64 = ctx.r11.s64 + 6988;
	// li r5,4
	ctx.r5.s64 = 4;
	// bl 0x822e15d0
	ctx.lr = 0x8236ACE8;
	sub_822E15D0(ctx, base);
	// lis r10,-31809
	ctx.r10.s64 = -2084634624;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// addi r6,r9,6964
	ctx.r6.s64 = ctx.r9.s64 + 6964;
	// li r5,4
	ctx.r5.s64 = 4;
	// stw r3,-12556(r10)
	PPC_STORE_U32(ctx.r10.u32 + -12556, ctx.r3.u32);
	// addi r3,r8,6944
	ctx.r3.s64 = ctx.r8.s64 + 6944;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x822e15d0
	ctx.lr = 0x8236AD0C;
	sub_822E15D0(ctx, base);
	// lis r7,-31809
	ctx.r7.s64 = -2084634624;
	// lis r5,-32251
	ctx.r5.s64 = -2113601536;
	// lis r6,-32251
	ctx.r6.s64 = -2113601536;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r6,r6,6896
	ctx.r6.s64 = ctx.r6.s64 + 6896;
	// stw r3,23884(r7)
	PPC_STORE_U32(ctx.r7.u32 + 23884, ctx.r3.u32);
	// addi r3,r5,6924
	ctx.r3.s64 = ctx.r5.s64 + 6924;
	// li r5,4
	ctx.r5.s64 = 4;
	// bl 0x822e15d0
	ctx.lr = 0x8236AD30;
	sub_822E15D0(ctx, base);
	// lis r4,-31809
	ctx.r4.s64 = -2084634624;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r3,23872(r4)
	PPC_STORE_U32(ctx.r4.u32 + 23872, ctx.r3.u32);
	// lis r3,-32251
	ctx.r3.s64 = -2113601536;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r6,r3,6852
	ctx.r6.s64 = ctx.r3.s64 + 6852;
	// addi r3,r11,6880
	ctx.r3.s64 = ctx.r11.s64 + 6880;
	// bl 0x822e15d0
	ctx.lr = 0x8236AD54;
	sub_822E15D0(ctx, base);
	// lis r10,-31809
	ctx.r10.s64 = -2084634624;
	// lis r6,-32251
	ctx.r6.s64 = -2113601536;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// addi r7,r9,6796
	ctx.r7.s64 = ctx.r9.s64 + 6796;
	// stw r3,-12552(r10)
	PPC_STORE_U32(ctx.r10.u32 + -12552, ctx.r3.u32);
	// addi r3,r6,6840
	ctx.r3.s64 = ctx.r6.s64 + 6840;
	// addi r4,r8,-31592
	ctx.r4.s64 = ctx.r8.s64 + -31592;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x822e1828
	ctx.lr = 0x8236AD80;
	sub_822E1828(ctx, base);
	// lis r5,-31809
	ctx.r5.s64 = -2084634624;
	// lis r4,-32251
	ctx.r4.s64 = -2113601536;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r8,r4,6712
	ctx.r8.s64 = ctx.r4.s64 + 6712;
	// li r7,4
	ctx.r7.s64 = 4;
	// stw r3,-12544(r5)
	PPC_STORE_U32(ctx.r5.u32 + -12544, ctx.r3.u32);
	// addi r3,r11,6692
	ctx.r3.s64 = ctx.r11.s64 + 6692;
	// li r6,5000
	ctx.r6.s64 = 5000;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,250
	ctx.r4.s64 = 250;
	// bl 0x822e1618
	ctx.lr = 0x8236ADAC;
	sub_822E1618(ctx, base);
	// lis r10,-31809
	ctx.r10.s64 = -2084634624;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r6,-32251
	ctx.r6.s64 = -2113601536;
	// lis r5,-32251
	ctx.r5.s64 = -2113601536;
	// stw r3,23892(r10)
	PPC_STORE_U32(ctx.r10.u32 + 23892, ctx.r3.u32);
	// addi r8,r6,6656
	ctx.r8.s64 = ctx.r6.s64 + 6656;
	// lfs f1,12260(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 12260);
	ctx.f1.f64 = double(temp.f32);
	// addi r3,r5,6628
	ctx.r3.s64 = ctx.r5.s64 + 6628;
	// lfs f30,12168(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12168);
	ctx.f30.f64 = double(temp.f32);
	// li r7,0
	ctx.r7.s64 = 0;
	// fmr f3,f30
	ctx.f3.f64 = ctx.f30.f64;
	// bl 0x822e1660
	ctx.lr = 0x8236ADE4;
	sub_822E1660(ctx, base);
	// lis r11,-31809
	ctx.r11.s64 = -2084634624;
	// lis r4,-31809
	ctx.r4.s64 = -2084634624;
	// addi r31,r11,-12528
	ctx.r31.s64 = ctx.r11.s64 + -12528;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r31,20344
	ctx.r11.s64 = ctx.r31.s64 + 20344;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r8,r31,20596
	ctx.r8.s64 = ctx.r31.s64 + 20596;
	// stw r3,-12560(r4)
	PPC_STORE_U32(ctx.r4.u32 + -12560, ctx.r3.u32);
	// stfs f30,20348(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20348, temp.u32);
	// stw r11,20472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20472, ctx.r11.u32);
	// stfs f30,20352(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20352, temp.u32);
	// stw r10,20344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20344, ctx.r10.u32);
	// stfs f31,20356(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20356, temp.u32);
	// stb r9,20372(r31)
	PPC_STORE_U8(ctx.r31.u32 + 20372, ctx.r9.u8);
	// stfs f31,20360(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20360, temp.u32);
	// stw r8,20664(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20664, ctx.r8.u32);
	// stfs f31,20364(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20364, temp.u32);
	// stfs f31,20368(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20368, temp.u32);
	// bl 0x82306300
	ctx.lr = 0x8236AE30;
	sub_82306300(ctx, base);
	// clrlwi r3,r3,24
	ctx.r3.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8236b00c
	if (ctx.cr6.eq) goto loc_8236B00C;
	// bl 0x82368320
	ctx.lr = 0x8236AE40;
	sub_82368320(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r9,r31,16436
	ctx.r9.s64 = ctx.r31.s64 + 16436;
	// stfs f30,16424(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16424, temp.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stfs f30,16428(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16428, temp.u32);
	// stfs f31,16432(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16432, temp.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,20296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20296, ctx.r9.u32);
	// lwz r11,26072(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26072);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8236aea4
	if (!ctx.cr6.gt) goto loc_8236AEA4;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8236AE70:
	// stfsx f30,r11,r9
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, temp.u32);
	// lwz r9,20296(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20296);
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stfs f30,4(r9)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// lwz r9,20296(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20296);
	// add r8,r11,r9
	ctx.r8.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stfs f31,8(r8)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r8.u32 + 8, temp.u32);
	// lwz r9,26072(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26072);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// lwz r9,20296(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20296);
	// blt cr6,0x8236ae70
	if (ctx.cr6.lt) goto loc_8236AE70;
loc_8236AEA4:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,768(r9)
	PPC_STORE_U8(ctx.r9.u32 + 768, ctx.r11.u8);
	// bl 0x82310110
	ctx.lr = 0x8236AEB0;
	sub_82310110(ctx, base);
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// lwz r10,-12540(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + -12540);
	// li r11,64
	ctx.r11.s64 = 64;
	// stfs f31,20336(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20336, temp.u32);
	// stw r3,20656(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20656, ctx.r3.u32);
	// stw r3,20660(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20660, ctx.r3.u32);
	// lis r8,16256
	ctx.r8.s64 = 1065353216;
	// addi r9,r31,25812
	ctx.r9.s64 = ctx.r31.s64 + 25812;
	// lfs f0,8336(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8336);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,16420(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16420, temp.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8236AEE4:
	// stwu r8,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x8236aee4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8236AEE4;
	// bl 0x823653a0
	ctx.lr = 0x8236AEF0;
	sub_823653A0(ctx, base);
	// lis r10,-31809
	ctx.r10.s64 = -2084634624;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,22712
	ctx.r9.s64 = ctx.r10.s64 + 22712;
	// lis r8,-31809
	ctx.r8.s64 = -2084634624;
	// lis r7,-32201
	ctx.r7.s64 = -2110324736;
	// lis r6,-32251
	ctx.r6.s64 = -2113601536;
	// addi r5,r8,24056
	ctx.r5.s64 = ctx.r8.s64 + 24056;
	// stw r11,512(r9)
	PPC_STORE_U32(ctx.r9.u32 + 512, ctx.r11.u32);
	// addi r3,r6,5892
	ctx.r3.s64 = ctx.r6.s64 + 5892;
	// addi r4,r7,-24224
	ctx.r4.s64 = ctx.r7.s64 + -24224;
	// bl 0x8227da10
	ctx.lr = 0x8236AF1C;
	sub_8227DA10(ctx, base);
	// lis r5,-31809
	ctx.r5.s64 = -2084634624;
	// lis r4,-32201
	ctx.r4.s64 = -2110324736;
	// lis r3,-32251
	ctx.r3.s64 = -2113601536;
	// addi r5,r5,24036
	ctx.r5.s64 = ctx.r5.s64 + 24036;
	// addi r3,r3,5856
	ctx.r3.s64 = ctx.r3.s64 + 5856;
	// addi r4,r4,-23640
	ctx.r4.s64 = ctx.r4.s64 + -23640;
	// bl 0x8227da10
	ctx.lr = 0x8236AF38;
	sub_8227DA10(ctx, base);
	// lis r11,-31809
	ctx.r11.s64 = -2084634624;
	// lis r10,-32202
	ctx.r10.s64 = -2110390272;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// addi r5,r11,24016
	ctx.r5.s64 = ctx.r11.s64 + 24016;
	// addi r3,r9,5840
	ctx.r3.s64 = ctx.r9.s64 + 5840;
	// addi r4,r10,31504
	ctx.r4.s64 = ctx.r10.s64 + 31504;
	// bl 0x8227da10
	ctx.lr = 0x8236AF54;
	sub_8227DA10(ctx, base);
	// lis r8,-31809
	ctx.r8.s64 = -2084634624;
	// lis r7,-32202
	ctx.r7.s64 = -2110390272;
	// lis r6,-32251
	ctx.r6.s64 = -2113601536;
	// addi r5,r8,23996
	ctx.r5.s64 = ctx.r8.s64 + 23996;
	// addi r3,r6,5828
	ctx.r3.s64 = ctx.r6.s64 + 5828;
	// addi r4,r7,8280
	ctx.r4.s64 = ctx.r7.s64 + 8280;
	// bl 0x8227da10
	ctx.lr = 0x8236AF70;
	sub_8227DA10(ctx, base);
	// lis r5,-31809
	ctx.r5.s64 = -2084634624;
	// lis r4,-32202
	ctx.r4.s64 = -2110390272;
	// lis r3,-32251
	ctx.r3.s64 = -2113601536;
	// addi r5,r5,23976
	ctx.r5.s64 = ctx.r5.s64 + 23976;
	// addi r3,r3,5812
	ctx.r3.s64 = ctx.r3.s64 + 5812;
	// addi r4,r4,8816
	ctx.r4.s64 = ctx.r4.s64 + 8816;
	// bl 0x8227da10
	ctx.lr = 0x8236AF8C;
	sub_8227DA10(ctx, base);
	// lis r11,-31809
	ctx.r11.s64 = -2084634624;
	// lis r10,-32202
	ctx.r10.s64 = -2110390272;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// addi r5,r11,23956
	ctx.r5.s64 = ctx.r11.s64 + 23956;
	// addi r3,r9,5796
	ctx.r3.s64 = ctx.r9.s64 + 5796;
	// addi r4,r10,9320
	ctx.r4.s64 = ctx.r10.s64 + 9320;
	// bl 0x8227da10
	ctx.lr = 0x8236AFA8;
	sub_8227DA10(ctx, base);
	// lis r8,-31809
	ctx.r8.s64 = -2084634624;
	// lis r7,-32202
	ctx.r7.s64 = -2110390272;
	// lis r6,-32251
	ctx.r6.s64 = -2113601536;
	// addi r5,r8,23936
	ctx.r5.s64 = ctx.r8.s64 + 23936;
	// addi r3,r6,5784
	ctx.r3.s64 = ctx.r6.s64 + 5784;
	// addi r4,r7,9528
	ctx.r4.s64 = ctx.r7.s64 + 9528;
	// bl 0x8227da10
	ctx.lr = 0x8236AFC4;
	sub_8227DA10(ctx, base);
	// lis r5,-31809
	ctx.r5.s64 = -2084634624;
	// lis r4,-32202
	ctx.r4.s64 = -2110390272;
	// lis r3,-32251
	ctx.r3.s64 = -2113601536;
	// addi r5,r5,23916
	ctx.r5.s64 = ctx.r5.s64 + 23916;
	// addi r3,r3,5768
	ctx.r3.s64 = ctx.r3.s64 + 5768;
	// addi r4,r4,9104
	ctx.r4.s64 = ctx.r4.s64 + 9104;
	// bl 0x8227da10
	ctx.lr = 0x8236AFE0;
	sub_8227DA10(ctx, base);
	// lis r11,-31809
	ctx.r11.s64 = -2084634624;
	// lis r10,-32201
	ctx.r10.s64 = -2110324736;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// addi r5,r11,23896
	ctx.r5.s64 = ctx.r11.s64 + 23896;
	// addi r3,r9,5748
	ctx.r3.s64 = ctx.r9.s64 + 5748;
	// addi r4,r10,-21944
	ctx.r4.s64 = ctx.r10.s64 + -21944;
	// bl 0x8227da10
	ctx.lr = 0x8236AFFC;
	sub_8227DA10(ctx, base);
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// li r3,9
	ctx.r3.s64 = 9;
	// addi r4,r8,6572
	ctx.r4.s64 = ctx.r8.s64 + 6572;
	// bl 0x82280900
	ctx.lr = 0x8236B00C;
	sub_82280900(ctx, base);
loc_8236B00C:
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

PPC_WEAK_FUNC(sub_8236ABF0) {
	__imp__sub_8236ABF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236B02C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8236B02C) {
	__imp__sub_8236B02C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236B030) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8236b0b8
	if (ctx.cr6.eq) goto loc_8236B0B8;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r10,7368
	ctx.r10.s64 = ctx.r10.s64 + 7368;
loc_8236B044:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x8236b068
	if (ctx.cr0.eq) goto loc_8236B068;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8236b044
	if (ctx.cr6.eq) goto loc_8236B044;
loc_8236B068:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8236b078
	if (!ctx.cr0.eq) goto loc_8236B078;
	// ori r4,r4,2
	ctx.r4.u64 = ctx.r4.u64 | 2;
	// b 0x8236b0b4
	goto loc_8236B0B4;
loc_8236B078:
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r10,7348
	ctx.r10.s64 = ctx.r10.s64 + 7348;
loc_8236B084:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x8236b0a8
	if (ctx.cr0.eq) goto loc_8236B0A8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8236b084
	if (ctx.cr6.eq) goto loc_8236B084;
loc_8236B0A8:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8236b0b8
	if (!ctx.cr0.eq) goto loc_8236B0B8;
	// ori r4,r4,256
	ctx.r4.u64 = ctx.r4.u64 | 256;
loc_8236B0B4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8236B0B8:
	// b 0x823f1154
	__imp__XamLoaderLaunchTitle(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8236B030) {
	__imp__sub_8236B030(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236B0BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8236B0BC) {
	__imp__sub_8236B0BC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236B0C0) {
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
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r4,11
	ctx.r4.s64 = 720896;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// li r7,8
	ctx.r7.s64 = 8;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// ori r4,r4,8
	ctx.r4.u64 = ctx.r4.u64 | 8;
	// li r3,251
	ctx.r3.s64 = 251;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x823f1164
	ctx.lr = 0x8236B0F4;
	__imp__XMsgStartIORequest(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8236b104
	if (!ctx.cr0.lt) goto loc_8236B104;
	// li r3,1627
	ctx.r3.s64 = 1627;
	// b 0x8236b128
	goto loc_8236B128;
loc_8236B104:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8236b124
	if (!ctx.cr6.eq) goto loc_8236B124;
	// bl 0x82370b68
	ctx.lr = 0x8236B110;
	sub_82370B68(ctx, base);
	// subfic r11,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// li r10,1627
	ctx.r10.s64 = 1627;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 & ctx.r10.u64;
	// b 0x8236b128
	goto loc_8236B128;
loc_8236B124:
	// li r3,997
	ctx.r3.s64 = 997;
loc_8236B128:
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

PPC_WEAK_FUNC(sub_8236B0C0) {
	__imp__sub_8236B0C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236B13C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8236B13C) {
	__imp__sub_8236B13C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236B140) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r4,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r4.u32);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// lis r4,11
	ctx.r4.s64 = 720896;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// li r7,24
	ctx.r7.s64 = 24;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// ori r4,r4,6
	ctx.r4.u64 = ctx.r4.u64 | 6;
	// li r3,251
	ctx.r3.s64 = 251;
	// bl 0x823f1164
	ctx.lr = 0x8236B184;
	__imp__XMsgStartIORequest(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8236b194
	if (!ctx.cr0.lt) goto loc_8236B194;
	// li r3,1627
	ctx.r3.s64 = 1627;
	// b 0x8236b1b8
	goto loc_8236B1B8;
loc_8236B194:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8236b1b4
	if (!ctx.cr6.eq) goto loc_8236B1B4;
	// bl 0x82370b68
	ctx.lr = 0x8236B1A0;
	sub_82370B68(ctx, base);
	// subfic r11,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// li r10,1627
	ctx.r10.s64 = 1627;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 & ctx.r10.u64;
	// b 0x8236b1b8
	goto loc_8236B1B8;
loc_8236B1B4:
	// li r3,997
	ctx.r3.s64 = 997;
loc_8236B1B8:
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

PPC_WEAK_FUNC(sub_8236B140) {
	__imp__sub_8236B140(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236B1CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8236B1CC) {
	__imp__sub_8236B1CC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236B1D0) {
	PPC_FUNC_PROLOGUE();
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x8236b140
	sub_8236B140(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8236B1D0) {
	__imp__sub_8236B1D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236B1D8) {
	PPC_FUNC_PROLOGUE();
	// b 0x823f1174
	__imp__XamUserGetName(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8236B1D8) {
	__imp__sub_8236B1D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236B1DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8236B1DC) {
	__imp__sub_8236B1DC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236B1E0) {
	PPC_FUNC_PROLOGUE();
	// b 0x823f1184
	__imp__XamUserGetSigninState(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8236B1E0) {
	__imp__sub_8236B1E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236B1E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8236B1E4) {
	__imp__sub_8236B1E4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236B1E8) {
	PPC_FUNC_PROLOGUE();
	// b 0x823f1194
	__imp__XamUserAreUsersFriends(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8236B1E8) {
	__imp__sub_8236B1E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236B1EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8236B1EC) {
	__imp__sub_8236B1EC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236B1F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x8236B1F8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x823f11b4
	ctx.lr = 0x8236B20C;
	__imp__XamGetSystemVersion(ctx, base);
	// lis r11,8201
	ctx.r11.s64 = 537460736;
	// ori r11,r11,27392
	ctx.r11.u64 = ctx.r11.u64 | 27392;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8236b268
	if (!ctx.cr6.lt) goto loc_8236B268;
	// cmplwi cr6,r30,255
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 255, ctx.xer);
	// bne cr6,0x8236b258
	if (!ctx.cr6.eq) goto loc_8236B258;
	// li r31,0
	ctx.r31.s64 = 0;
loc_8236B228:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823f1184
	ctx.lr = 0x8236B230;
	__imp__XamUserGetSigninState(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x8236b248
	if (ctx.cr6.eq) goto loc_8236B248;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,4
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 4, ctx.xer);
	// blt cr6,0x8236b228
	if (ctx.cr6.lt) goto loc_8236B228;
	// b 0x8236b268
	goto loc_8236B268;
loc_8236B248:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1245
	ctx.r3.s64 = 1245;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// b 0x8236b278
	goto loc_8236B278;
loc_8236B258:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823f1184
	ctx.lr = 0x8236B260;
	__imp__XamUserGetSigninState(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x8236b248
	if (ctx.cr6.eq) goto loc_8236B248;
loc_8236B268:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823f11a4
	ctx.lr = 0x8236B278;
	__imp__XamUserCheckPrivilege(ctx, base);
loc_8236B278:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8236B1F0) {
	__imp__sub_8236B1F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236B280) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8236B288;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
	// mulli r10,r4,52
	ctx.r10.s64 = ctx.r4.s64 * 52;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// mullw r10,r10,r6
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r6.s32);
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// beq cr6,0x8236b2cc
	if (ctx.cr6.eq) goto loc_8236B2CC;
	// addi r7,r7,-132
	ctx.r7.s64 = ctx.r7.s64 + -132;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
loc_8236B2B8:
	// lwzu r6,136(r7)
	ea = 136 + ctx.r7.u32;
	ctx.r6.u64 = PPC_LOAD_U32(ea);
	ctx.r7.u32 = ea;
	// mullw r6,r6,r4
	ctx.r6.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r4.s32);
	// mulli r6,r6,28
	ctx.r6.s64 = ctx.r6.s64 * 28;
	// add r10,r6,r10
	ctx.r10.u64 = ctx.r6.u64 + ctx.r10.u64;
	// bdnz 0x8236b2b8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8236B2B8;
loc_8236B2CC:
	// lwz r31,0(r8)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, ctx.xer);
	// ble cr6,0x8236b2e4
	if (!ctx.cr6.gt) goto loc_8236B2E4;
	// stw r10,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// li r3,122
	ctx.r3.s64 = 122;
	// b 0x8236b350
	goto loc_8236B350;
loc_8236B2E4:
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r4,11
	ctx.r4.s64 = 720896;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// li r7,28
	ctx.r7.s64 = 28;
	// stw r5,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r5.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// ori r4,r4,33
	ctx.r4.u64 = ctx.r4.u64 | 33;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// li r3,251
	ctx.r3.s64 = 251;
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// bl 0x823f1164
	ctx.lr = 0x8236B31C;
	__imp__XMsgStartIORequest(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8236b32c
	if (!ctx.cr0.lt) goto loc_8236B32C;
	// li r3,1627
	ctx.r3.s64 = 1627;
	// b 0x8236b350
	goto loc_8236B350;
loc_8236B32C:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x8236b34c
	if (!ctx.cr6.eq) goto loc_8236B34C;
	// bl 0x82370b68
	ctx.lr = 0x8236B338;
	sub_82370B68(ctx, base);
	// subfic r11,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// li r10,1627
	ctx.r10.s64 = 1627;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 & ctx.r10.u64;
	// b 0x8236b350
	goto loc_8236B350;
loc_8236B34C:
	// li r3,997
	ctx.r3.s64 = 997;
loc_8236B350:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8236B280) {
	__imp__sub_8236B280(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236B358) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x8236B360;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// bl 0x82370b88
	ctx.lr = 0x8236B384;
	sub_82370B88(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8236b3b0
	if (!ctx.cr0.eq) goto loc_8236B3B0;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// clrldi r5,r30,32
	ctx.r5.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823f11c4
	ctx.lr = 0x8236B3B0;
	__imp__XamUserCreateStatsEnumerator(ctx, base);
loc_8236B3B0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8236B358) {
	__imp__sub_8236B358(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236B3B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x8236B3C0;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// bl 0x82370b88
	ctx.lr = 0x8236B3E4;
	sub_82370B88(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8236b410
	if (!ctx.cr0.eq) goto loc_8236B410;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823f11c4
	ctx.lr = 0x8236B410;
	__imp__XamUserCreateStatsEnumerator(ctx, base);
loc_8236B410:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8236B3B8) {
	__imp__sub_8236B3B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236B418) {
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
	// li r4,7
	ctx.r4.s64 = 7;
	// bl 0x823f11d4
	ctx.lr = 0x8236B430;
	__imp__XamUserGetXUID(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8236b440
	if (ctx.cr0.lt) goto loc_8236B440;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8236b458
	goto loc_8236B458;
loc_8236B440:
	// rlwinm r11,r3,0,3,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x1FFF0000;
	// lis r10,7
	ctx.r10.s64 = 458752;
	// clrlwi r3,r3,16
	ctx.r3.u64 = ctx.r3.u32 & 0xFFFF;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x8236b458
	if (ctx.cr6.eq) goto loc_8236B458;
	// li r3,1627
	ctx.r3.s64 = 1627;
loc_8236B458:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8236B418) {
	__imp__sub_8236B418(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236B468) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8236B470;
	__savegprlr_29(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r5,16
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 16, ctx.xer);
	// bge cr6,0x8236b4a4
	if (!ctx.cr6.lt) goto loc_8236B4A4;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8236b608
	if (ctx.cr6.eq) goto loc_8236B608;
	// extsb r10,r4
	ctx.r10.s64 = ctx.r4.s8;
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// cmplwi r5,0
	ctx.cr0.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq 0x8236b608
	if (ctx.cr0.eq) goto loc_8236B608;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
loc_8236B498:
	// stbu r10,1(r11)
	ea = 1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r10.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x8236b498
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8236B498;
	// b 0x8236b608
	goto loc_8236B608;
loc_8236B4A4:
	// neg r11,r3
	ctx.r11.s64 = -ctx.r3.s64;
	// vspltisb v0,4
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_set1_epi8(char(0x4)));
	// lvsl v13,r0,r4
	temp.u32 = ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// srawi r9,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 4;
	// srawi r8,r4,4
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xF) != 0);
	ctx.r8.s64 = ctx.r4.s32 >> 4;
	// clrlwi. r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lvsl v12,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// clrlwi r9,r9,29
	ctx.r9.u64 = ctx.r9.u32 & 0x7;
	// vslb v0,v12,v0
	ctx.v0.u8[0] = ctx.v12.u8[0] << (ctx.v0.u8[0] & 0x7);
	ctx.v0.u8[1] = ctx.v12.u8[1] << (ctx.v0.u8[1] & 0x7);
	ctx.v0.u8[2] = ctx.v12.u8[2] << (ctx.v0.u8[2] & 0x7);
	ctx.v0.u8[3] = ctx.v12.u8[3] << (ctx.v0.u8[3] & 0x7);
	ctx.v0.u8[4] = ctx.v12.u8[4] << (ctx.v0.u8[4] & 0x7);
	ctx.v0.u8[5] = ctx.v12.u8[5] << (ctx.v0.u8[5] & 0x7);
	ctx.v0.u8[6] = ctx.v12.u8[6] << (ctx.v0.u8[6] & 0x7);
	ctx.v0.u8[7] = ctx.v12.u8[7] << (ctx.v0.u8[7] & 0x7);
	ctx.v0.u8[8] = ctx.v12.u8[8] << (ctx.v0.u8[8] & 0x7);
	ctx.v0.u8[9] = ctx.v12.u8[9] << (ctx.v0.u8[9] & 0x7);
	ctx.v0.u8[10] = ctx.v12.u8[10] << (ctx.v0.u8[10] & 0x7);
	ctx.v0.u8[11] = ctx.v12.u8[11] << (ctx.v0.u8[11] & 0x7);
	ctx.v0.u8[12] = ctx.v12.u8[12] << (ctx.v0.u8[12] & 0x7);
	ctx.v0.u8[13] = ctx.v12.u8[13] << (ctx.v0.u8[13] & 0x7);
	ctx.v0.u8[14] = ctx.v12.u8[14] << (ctx.v0.u8[14] & 0x7);
	ctx.v0.u8[15] = ctx.v12.u8[15] << (ctx.v0.u8[15] & 0x7);
	// vor v0,v13,v0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vspltb v0,v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_set1_epi8(char(0xF))));
	// beq 0x8236b4e0
	if (ctx.cr0.eq) goto loc_8236B4E0;
	// stvlx v0,0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v0.u8[15 - i]);
	// subf r5,r11,r5
	ctx.r5.s64 = ctx.r5.s64 - ctx.r11.s64;
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_8236B4E0:
	// rlwinm r11,r5,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 28) & 0xFFFFFFF;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x8236b4f0
	if (!ctx.cr6.lt) goto loc_8236B4F0;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
loc_8236B4F0:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lwz r6,-31436(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + -31436);
	// beq cr6,0x8236b510
	if (ctx.cr6.eq) goto loc_8236B510;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8236B504:
	// stvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r10,r6,r10
	ctx.r10.u64 = ctx.r6.u64 + ctx.r10.u64;
	// bdnz 0x8236b504
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8236B504;
loc_8236B510:
	// rlwinm r11,r9,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// clrlwi. r9,r4,24
	ctx.r9.u64 = ctx.r4.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r7,r11,r5
	ctx.r7.s64 = ctx.r5.s64 - ctx.r11.s64;
	// rlwinm r11,r7,25,7,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 25) & 0x1FFFFFF;
	// bne 0x8236b540
	if (!ctx.cr0.eq) goto loc_8236B540;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8236b5dc
	if (ctx.cr6.eq) goto loc_8236B5DC;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8236B530:
	// dcbzl r0,r10
	memset(base + ((ctx.r10.u32) & ~127), 0, 128);
	// addi r10,r10,128
	ctx.r10.s64 = ctx.r10.s64 + 128;
	// bdnz 0x8236b530
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8236B530;
	// b 0x8236b5dc
	goto loc_8236B5DC;
loc_8236B540:
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// blt cr6,0x8236b550
	if (ctx.cr6.lt) goto loc_8236B550;
	// li r8,4
	ctx.r8.s64 = 4;
loc_8236B550:
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8236b570
	if (ctx.cr6.eq) goto loc_8236B570;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_8236B560:
	// rlwinm r8,r9,7,0,24
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 7) & 0xFFFFFF80;
	// dcbzl r8,r10
	memset(base + ((ctx.r8.u32 + ctx.r10.u32) & ~127), 0, 128);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// bdnz 0x8236b560
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8236B560;
loc_8236B570:
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8236b5dc
	if (ctx.cr6.eq) goto loc_8236B5DC;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8236B580:
	// addi r8,r9,4
	ctx.r8.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8236b594
	if (!ctx.cr6.lt) goto loc_8236B594;
	// li r8,512
	ctx.r8.s64 = 512;
	// dcbzl r8,r10
	memset(base + ((ctx.r8.u32 + ctx.r10.u32) & ~127), 0, 128);
loc_8236B594:
	// li r8,16
	ctx.r8.s64 = 16;
	// stvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,48
	ctx.r4.s64 = 48;
	// li r31,64
	ctx.r31.s64 = 64;
	// li r30,80
	ctx.r30.s64 = 80;
	// stvx128 v0,r10,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32 + ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r29,96
	ctx.r29.s64 = 96;
	// li r8,112
	ctx.r8.s64 = 112;
	// stvx128 v0,r10,r5
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32 + ctx.r5.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r10,r4
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32 + ctx.r4.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stvx128 v0,r10,r31
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32 + ctx.r31.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r10,r30
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32 + ctx.r30.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r10,r29
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32 + ctx.r29.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r10,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32 + ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r10,128
	ctx.r10.s64 = ctx.r10.s64 + 128;
	// bdnz 0x8236b580
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8236B580;
loc_8236B5DC:
	// rlwinm r11,r11,7,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0xFFFFFF80;
	// subf r11,r11,r7
	ctx.r11.s64 = ctx.r7.s64 - ctx.r11.s64;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8236b604
	if (ctx.cr6.lt) goto loc_8236B604;
	// rlwinm r9,r11,28,4,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8236B5F4:
	// stvx128 v0,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r10,r6,r10
	ctx.r10.u64 = ctx.r6.u64 + ctx.r10.u64;
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
	// bdnz 0x8236b5f4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8236B5F4;
loc_8236B604:
	// stvrx v0,r10,r11
	ea = ctx.r10.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v0.u8[i]);
loc_8236B608:
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8236B468) {
	__imp__sub_8236B468(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236B60C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8236B60C) {
	__imp__sub_8236B60C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236B610) {
	PPC_FUNC_PROLOGUE();
	// b 0x823f11e4
	__imp__XamShowSigninUI(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8236B610) {
	__imp__sub_8236B610(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236B614) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8236B614) {
	__imp__sub_8236B614(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8236B618) {
	PPC_FUNC_PROLOGUE();
	// b 0x823f11f4
	__imp__XamShowFriendsUI(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8236B618) {
	__imp__sub_8236B618(ctx, base);
}

