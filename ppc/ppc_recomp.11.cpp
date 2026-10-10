#include "ppc_recomp_shared.h"

PPC_FUNC_IMPL(__imp__sub_82114FD8) {
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
	// addi r3,r7,-15680
	ctx.r3.s64 = ctx.r7.s64 + -15680;
	// lfs f31,6912(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6912);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,5484(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f30.f64 = double(temp.f32);
	// addi r8,r8,-15724
	ctx.r8.s64 = ctx.r8.s64 + -15724;
	// li r7,4
	ctx.r7.s64 = 4;
	// lfs f1,20208(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 20208);
	ctx.f1.f64 = double(temp.f32);
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// bl 0x822e1660
	ctx.lr = 0x82115030;
	sub_822E1660(ctx, base);
	// lis r6,-32167
	ctx.r6.s64 = -2108096512;
	// lis r5,32767
	ctx.r5.s64 = 2147418112;
	// lis r4,-32255
	ctx.r4.s64 = -2113863680;
	// ori r31,r5,65535
	ctx.r31.u64 = ctx.r5.u64 | 65535;
	// addi r8,r4,-15772
	ctx.r8.s64 = ctx.r4.s64 + -15772;
	// stw r3,-11196(r6)
	PPC_STORE_U32(ctx.r6.u32 + -11196, ctx.r3.u32);
	// lis r3,-32255
	ctx.r3.s64 = -2113863680;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r3,r3,-15804
	ctx.r3.s64 = ctx.r3.s64 + -15804;
	// li r7,4
	ctx.r7.s64 = 4;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,500
	ctx.r4.s64 = 500;
	// bl 0x822e1618
	ctx.lr = 0x82115064;
	sub_822E1618(ctx, base);
	// lis r11,-32167
	ctx.r11.s64 = -2108096512;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// stw r3,-11204(r11)
	PPC_STORE_U32(ctx.r11.u32 + -11204, ctx.r3.u32);
	// addi r3,r7,-15836
	ctx.r3.s64 = ctx.r7.s64 + -15836;
	// lfs f29,2416(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2416);
	ctx.f29.f64 = double(temp.f32);
	// addi r8,r9,-15888
	ctx.r8.s64 = ctx.r9.s64 + -15888;
	// li r7,4
	ctx.r7.s64 = 4;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x822e1660
	ctx.lr = 0x82115098;
	sub_822E1660(ctx, base);
	// lis r5,-32167
	ctx.r5.s64 = -2108096512;
	// lis r4,-32255
	ctx.r4.s64 = -2113863680;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r8,r4,-15944
	ctx.r8.s64 = ctx.r4.s64 + -15944;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// stw r3,-11168(r5)
	PPC_STORE_U32(ctx.r5.u32 + -11168, ctx.r3.u32);
	// addi r3,r11,-15980
	ctx.r3.s64 = ctx.r11.s64 + -15980;
	// li r7,4
	ctx.r7.s64 = 4;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1500
	ctx.r4.s64 = 1500;
	// bl 0x822e1618
	ctx.lr = 0x821150C4;
	sub_822E1618(ctx, base);
	// lis r10,-32167
	ctx.r10.s64 = -2108096512;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// stw r3,-11160(r10)
	PPC_STORE_U32(ctx.r10.u32 + -11160, ctx.r3.u32);
	// addi r3,r7,-16016
	ctx.r3.s64 = ctx.r7.s64 + -16016;
	// addi r8,r8,-16064
	ctx.r8.s64 = ctx.r8.s64 + -16064;
	// lfs f1,4292(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4292);
	ctx.f1.f64 = double(temp.f32);
	// li r7,4
	ctx.r7.s64 = 4;
	// bl 0x822e1660
	ctx.lr = 0x821150F4;
	sub_822E1660(ctx, base);
	// lis r6,-32167
	ctx.r6.s64 = -2108096512;
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// lis r4,-32255
	ctx.r4.s64 = -2113863680;
	// addi r8,r5,-16116
	ctx.r8.s64 = ctx.r5.s64 + -16116;
	// li r7,4
	ctx.r7.s64 = 4;
	// stw r3,-11200(r6)
	PPC_STORE_U32(ctx.r6.u32 + -11200, ctx.r3.u32);
	// addi r3,r4,-16156
	ctx.r3.s64 = ctx.r4.s64 + -16156;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,800
	ctx.r4.s64 = 800;
	// bl 0x822e1618
	ctx.lr = 0x82115120;
	sub_822E1618(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r11,-32167
	ctx.r11.s64 = -2108096512;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// addi r8,r10,-16204
	ctx.r8.s64 = ctx.r10.s64 + -16204;
	// stw r3,-11152(r11)
	PPC_STORE_U32(ctx.r11.u32 + -11152, ctx.r3.u32);
	// addi r3,r9,-16240
	ctx.r3.s64 = ctx.r9.s64 + -16240;
	// li r7,4
	ctx.r7.s64 = 4;
	// bl 0x822e1660
	ctx.lr = 0x8211514C;
	sub_822E1660(ctx, base);
	// lis r8,-32167
	ctx.r8.s64 = -2108096512;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r4,1250
	ctx.r4.s64 = 1250;
	// stw r3,-11188(r8)
	PPC_STORE_U32(ctx.r8.u32 + -11188, ctx.r3.u32);
	// addi r8,r7,-16292
	ctx.r8.s64 = ctx.r7.s64 + -16292;
	// addi r3,r5,-16332
	ctx.r3.s64 = ctx.r5.s64 + -16332;
	// li r7,4
	ctx.r7.s64 = 4;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x822e1618
	ctx.lr = 0x82115178;
	sub_822E1618(ctx, base);
	// lis r4,-32167
	ctx.r4.s64 = -2108096512;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r8,r11,-16396
	ctx.r8.s64 = ctx.r11.s64 + -16396;
	// li r7,4
	ctx.r7.s64 = 4;
	// stw r3,-11164(r4)
	PPC_STORE_U32(ctx.r4.u32 + -11164, ctx.r3.u32);
	// addi r3,r10,-16428
	ctx.r3.s64 = ctx.r10.s64 + -16428;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,85
	ctx.r4.s64 = 85;
	// bl 0x822e1618
	ctx.lr = 0x821151A4;
	sub_822E1618(ctx, base);
	// lis r9,-32167
	ctx.r9.s64 = -2108096512;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// addi r8,r6,-16464
	ctx.r8.s64 = ctx.r6.s64 + -16464;
	// stw r3,-11208(r9)
	PPC_STORE_U32(ctx.r9.u32 + -11208, ctx.r3.u32);
	// addi r3,r5,-16476
	ctx.r3.s64 = ctx.r5.s64 + -16476;
	// lfs f29,6688(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 6688);
	ctx.f29.f64 = double(temp.f32);
	// li r7,4
	ctx.r7.s64 = 4;
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// bl 0x822e1660
	ctx.lr = 0x821151D8;
	sub_822E1660(ctx, base);
	// lis r4,-32167
	ctx.r4.s64 = -2108096512;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// addi r8,r11,-16508
	ctx.r8.s64 = ctx.r11.s64 + -16508;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// li r7,4
	ctx.r7.s64 = 4;
	// stw r3,-11192(r4)
	PPC_STORE_U32(ctx.r4.u32 + -11192, ctx.r3.u32);
	// addi r3,r10,-16520
	ctx.r3.s64 = ctx.r10.s64 + -16520;
	// bl 0x822e1660
	ctx.lr = 0x82115204;
	sub_822E1660(ctx, base);
	// lis r9,-32167
	ctx.r9.s64 = -2108096512;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// addi r8,r8,-16564
	ctx.r8.s64 = ctx.r8.s64 + -16564;
	// stw r3,-11228(r9)
	PPC_STORE_U32(ctx.r9.u32 + -11228, ctx.r3.u32);
	// addi r3,r7,-16532
	ctx.r3.s64 = ctx.r7.s64 + -16532;
	// li r7,4
	ctx.r7.s64 = 4;
	// bl 0x822e1660
	ctx.lr = 0x82115230;
	sub_822E1660(ctx, base);
	// lis r5,-32167
	ctx.r5.s64 = -2108096512;
	// lis r4,-32255
	ctx.r4.s64 = -2113863680;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r6,r4,-16620
	ctx.r6.s64 = ctx.r4.s64 + -16620;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r3,-11212(r5)
	PPC_STORE_U32(ctx.r5.u32 + -11212, ctx.r3.u32);
	// addi r3,r11,-16636
	ctx.r3.s64 = ctx.r11.s64 + -16636;
	// li r5,4
	ctx.r5.s64 = 4;
	// bl 0x822e15d0
	ctx.lr = 0x82115254;
	sub_822E15D0(ctx, base);
	// lis r10,-32167
	ctx.r10.s64 = -2108096512;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r6,r9,-16688
	ctx.r6.s64 = ctx.r9.s64 + -16688;
	// li r5,4
	ctx.r5.s64 = 4;
	// stw r3,-11224(r10)
	PPC_STORE_U32(ctx.r10.u32 + -11224, ctx.r3.u32);
	// addi r3,r8,-16716
	ctx.r3.s64 = ctx.r8.s64 + -16716;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822e15d0
	ctx.lr = 0x82115278;
	sub_822E15D0(ctx, base);
	// lis r7,-32167
	ctx.r7.s64 = -2108096512;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// stw r3,-11216(r7)
	PPC_STORE_U32(ctx.r7.u32 + -11216, ctx.r3.u32);
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// addi r6,r6,-16816
	ctx.r6.s64 = ctx.r6.s64 + -16816;
	// addi r3,r5,-16832
	ctx.r3.s64 = ctx.r5.s64 + -16832;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x822e15d0
	ctx.lr = 0x8211529C;
	sub_822E15D0(ctx, base);
	// lis r4,-32167
	ctx.r4.s64 = -2108096512;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r8,r10,-16904
	ctx.r8.s64 = ctx.r10.s64 + -16904;
	// stw r3,-11148(r4)
	PPC_STORE_U32(ctx.r4.u32 + -11148, ctx.r3.u32);
	// addi r3,r9,-16928
	ctx.r3.s64 = ctx.r9.s64 + -16928;
	// li r7,4
	ctx.r7.s64 = 4;
	// lfs f1,3096(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3096);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822e1660
	ctx.lr = 0x821152CC;
	sub_822E1660(ctx, base);
	// lis r8,-32167
	ctx.r8.s64 = -2108096512;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f30.f64;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lis r4,-32255
	ctx.r4.s64 = -2113863680;
	// stw r3,-11176(r8)
	PPC_STORE_U32(ctx.r8.u32 + -11176, ctx.r3.u32);
	// addi r3,r7,-16948
	ctx.r3.s64 = ctx.r7.s64 + -16948;
	// addi r8,r4,-17008
	ctx.r8.s64 = ctx.r4.s64 + -17008;
	// li r7,4
	ctx.r7.s64 = 4;
	// lfs f3,5188(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 5188);
	ctx.f3.f64 = double(temp.f32);
	// lfs f1,26572(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 26572);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822e1660
	ctx.lr = 0x82115300;
	sub_822E1660(ctx, base);
	// lis r11,-32167
	ctx.r11.s64 = -2108096512;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// stw r3,-11156(r11)
	PPC_STORE_U32(ctx.r11.u32 + -11156, ctx.r3.u32);
	// addi r3,r7,-17024
	ctx.r3.s64 = ctx.r7.s64 + -17024;
	// addi r8,r8,-17060
	ctx.r8.s64 = ctx.r8.s64 + -17060;
	// lfs f2,6020(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6020);
	ctx.f2.f64 = double(temp.f32);
	// li r7,4
	ctx.r7.s64 = 4;
	// lfs f1,14268(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 14268);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822e1660
	ctx.lr = 0x82115334;
	sub_822E1660(ctx, base);
	// lis r31,-32167
	ctx.r31.s64 = -2108096512;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// addi r30,r31,-11232
	ctx.r30.s64 = ctx.r31.s64 + -11232;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// lis r4,-32255
	ctx.r4.s64 = -2113863680;
	// addi r8,r5,-17120
	ctx.r8.s64 = ctx.r5.s64 + -17120;
	// li r7,4
	ctx.r7.s64 = 4;
	// lfs f1,5808(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 5808);
	ctx.f1.f64 = double(temp.f32);
	// stw r3,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r3.u32);
	// addi r3,r4,-17136
	ctx.r3.s64 = ctx.r4.s64 + -17136;
	// bl 0x822e1660
	ctx.lr = 0x82115368;
	sub_822E1660(ctx, base);
	// stw r3,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r3.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r8,r10,-17192
	ctx.r8.s64 = ctx.r10.s64 + -17192;
	// addi r3,r9,-17208
	ctx.r3.s64 = ctx.r9.s64 + -17208;
	// li r7,4
	ctx.r7.s64 = 4;
	// lfs f1,4452(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4452);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822e1660
	ctx.lr = 0x82115394;
	sub_822E1660(ctx, base);
	// stw r3,-11232(r31)
	PPC_STORE_U32(ctx.r31.u32 + -11232, ctx.r3.u32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// addi r8,r6,-17296
	ctx.r8.s64 = ctx.r6.s64 + -17296;
	// addi r3,r5,-17324
	ctx.r3.s64 = ctx.r5.s64 + -17324;
	// lfs f1,12168(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 12168);
	ctx.f1.f64 = double(temp.f32);
	// li r7,4
	ctx.r7.s64 = 4;
	// bl 0x822e1660
	ctx.lr = 0x821153C0;
	sub_822E1660(ctx, base);
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// stw r3,60(r30)
	PPC_STORE_U32(ctx.r30.u32 + 60, ctx.r3.u32);
	// lis r3,-32255
	ctx.r3.s64 = -2113863680;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f1,7324(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 7324);
	ctx.f1.f64 = double(temp.f32);
	// addi r8,r3,-17372
	ctx.r8.s64 = ctx.r3.s64 + -17372;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// addi r3,r11,-17396
	ctx.r3.s64 = ctx.r11.s64 + -17396;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// li r7,4
	ctx.r7.s64 = 4;
	// bl 0x822e1660
	ctx.lr = 0x821153EC;
	sub_822E1660(ctx, base);
	// stw r3,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r3.u32);
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

PPC_WEAK_FUNC(sub_82114FD8) {
	__imp__sub_82114FD8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82115414) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82115414) {
	__imp__sub_82115414(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82115418) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x82115420;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// bl 0x82332af8
	ctx.lr = 0x8211543C;
	sub_82332AF8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82332b10
	ctx.lr = 0x82115448;
	sub_82332B10(ctx, base);
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x82115460
	if (ctx.cr6.eq) goto loc_82115460;
	// cmpwi cr6,r31,6
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 6, ctx.xer);
	// bne cr6,0x82115460
	if (!ctx.cr6.eq) goto loc_82115460;
	// lwz r31,596(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 596);
	// b 0x82115494
	goto loc_82115494;
loc_82115460:
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// rlwinm r10,r31,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r11,1016
	ctx.r11.s64 = ctx.r11.s64 + 1016;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82115484
	if (ctx.cr6.lt) goto loc_82115484;
	// lwzx r31,r11,r30
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// b 0x82115494
	goto loc_82115494;
loc_82115484:
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x821154ec
	if (ctx.cr6.lt) goto loc_821154EC;
	// lwzx r31,r11,r3
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
loc_82115494:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne cr6,0x821154ac
	if (!ctx.cr6.eq) goto loc_821154AC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f1.f64 = double(temp.f32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_821154AC:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822f3f40
	ctx.lr = 0x821154B8;
	sub_822F3F40(ctx, base);
	// extsw r11,r31
	ctx.r11.s64 = ctx.r31.s32;
	// extsw r10,r3
	ctx.r10.s64 = ctx.r3.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
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
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_821154EC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,12168(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f1.f64 = double(temp.f32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82115418) {
	__imp__sub_82115418(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821154FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821154FC) {
	__imp__sub_821154FC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82115500) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x82115508;
	__savegprlr_26(ctx, base);
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x823de028
	ctx.lr = 0x82115510;
	__savefpr_28(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// lis r9,-32168
	ctx.r9.s64 = -2108162048;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r9,-30176
	ctx.r11.s64 = ctx.r9.s64 + -30176;
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r8,-32187
	ctx.r8.s64 = -2109407232;
	// lis r5,2
	ctx.r5.s64 = 131072;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r7,r8,-15680
	ctx.r7.s64 = ctx.r8.s64 + -15680;
	// ori r4,r5,61924
	ctx.r4.u64 = ctx.r5.u64 | 61924;
	// addis r9,r7,1
	ctx.r9.s64 = ctx.r7.s64 + 65536;
	// mullw r10,r3,r4
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r4.s32);
	// lwz r26,0(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r11,r9,22924
	ctx.r11.s64 = ctx.r9.s64 + 22924;
	// add r28,r10,r11
	ctx.r28.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x822f29c8
	ctx.lr = 0x82115570;
	sub_822F29C8(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r29,22
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 22, ctx.xer);
	// bne cr6,0x821155a8
	if (!ctx.cr6.eq) goto loc_821155A8;
	// addi r11,r31,18
	ctx.r11.s64 = ctx.r31.s64 + 18;
	// mulli r10,r11,28
	ctx.r10.s64 = ctx.r11.s64 * 28;
	// lwzx r9,r10,r28
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r28.u32);
	// cmpwi cr6,r9,4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4, ctx.xer);
	// bne cr6,0x821155a8
	if (!ctx.cr6.eq) goto loc_821155A8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x820da648
	ctx.lr = 0x8211559C;
	sub_820DA648(ctx, base);
	// li r6,22
	ctx.r6.s64 = 22;
	// li r5,20
	ctx.r5.s64 = 20;
	// b 0x821155bc
	goto loc_821155BC;
loc_821155A8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x820da648
	ctx.lr = 0x821155B4;
	sub_820DA648(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
loc_821155BC:
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82115418
	ctx.lr = 0x821155CC;
	sub_82115418(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmr f28,f1
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = ctx.f1.f64;
	// li r31,1
	ctx.r31.s64 = 1;
	// lfs f29,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f29.f64 = double(temp.f32);
	// lfs f31,12168(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f31.f64 = double(temp.f32);
loc_821155E4:
	// cmpw cr6,r29,r31
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r31.s32, ctx.xer);
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f30.f64;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bne cr6,0x82115610
	if (!ctx.cr6.eq) goto loc_82115610;
	// li r10,1
	ctx.r10.s64 = 1;
	// fmr f3,f28
	ctx.f3.f64 = ctx.f28.f64;
	// li r9,1
	ctx.r9.s64 = 1;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// b 0x82115620
	goto loc_82115620;
loc_82115610:
	// li r10,0
	ctx.r10.s64 = 0;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// li r9,0
	ctx.r9.s64 = 0;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
loc_82115620:
	// bl 0x822f7488
	ctx.lr = 0x82115624;
	sub_822F7488(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,35
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 35, ctx.xer);
	// blt cr6,0x821155e4
	if (ctx.cr6.lt) goto loc_821155E4;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x823de074
	ctx.lr = 0x8211563C;
	__restfpr_28(ctx, base);
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82115500) {
	__imp__sub_82115500(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82115640) {
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
	ctx.lr = 0x82115654;
	__savefpr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// fmr f28,f1
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = ctx.f1.f64;
	// cmpwi cr6,r5,35
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 35, ctx.xer);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r4,35
	ctx.r4.s64 = 35;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x821156bc
	if (!ctx.cr6.eq) goto loc_821156BC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f29,6020(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 6020);
	ctx.f29.f64 = double(temp.f32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// addi r11,r11,12168
	ctx.r11.s64 = ctx.r11.s64 + 12168;
	// li r9,1
	ctx.r9.s64 = 1;
	// lfs f30,5484(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 5484);
	ctx.f30.f64 = double(temp.f32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lfs f31,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f31.f64 = double(temp.f32);
	// fmr f3,f30
	ctx.f3.f64 = ctx.f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x822f7488
	ctx.lr = 0x821156A8;
	sub_822F7488(ctx, base);
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// li r9,0
	ctx.r9.s64 = 0;
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// b 0x821156fc
	goto loc_821156FC;
loc_821156BC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f30,6020(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 6020);
	ctx.f30.f64 = double(temp.f32);
	// li r9,0
	ctx.r9.s64 = 0;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// li r8,0
	ctx.r8.s64 = 0;
	// lfs f31,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f31.f64 = double(temp.f32);
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x822f7488
	ctx.lr = 0x821156E0;
	sub_822F7488(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r11,r11,12168
	ctx.r11.s64 = ctx.r11.s64 + 12168;
	// lfs f31,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
loc_821156FC:
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r4,36
	ctx.r4.s64 = 36;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822f7488
	ctx.lr = 0x82115710;
	sub_822F7488(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822ef118
	ctx.lr = 0x82115718;
	sub_822EF118(ctx, base);
	// li r4,35
	ctx.r4.s64 = 35;
	// fmr f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f28.f64;
	// bl 0x822f5540
	ctx.lr = 0x82115724;
	sub_822F5540(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822ef118
	ctx.lr = 0x8211572C;
	sub_822EF118(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// fsubs f1,f31,f28
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f31.f64 - ctx.f28.f64));
	// bl 0x822f5540
	ctx.lr = 0x82115738;
	sub_822F5540(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// addi r12,r1,-16
	ctx.r12.s64 = ctx.r1.s64 + -16;
	// bl 0x823de074
	ctx.lr = 0x82115744;
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

PPC_WEAK_FUNC(sub_82115640) {
	__imp__sub_82115640(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82115754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82115754) {
	__imp__sub_82115754(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82115758) {
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
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// addi r9,r11,-15680
	ctx.r9.s64 = ctx.r11.s64 + -15680;
	// ori r8,r10,61924
	ctx.r8.u64 = ctx.r10.u64 | 61924;
	// addis r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 65536;
	// mullw r10,r3,r8
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r8.s32);
	// addi r11,r11,22924
	ctx.r11.s64 = ctx.r11.s64 + 22924;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r7,172(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// rlwinm r6,r7,0,20,21
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xC00;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x821157b0
	if (ctx.cr6.eq) goto loc_821157B0;
loc_82115798:
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
loc_821157B0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332c00
	ctx.lr = 0x821157B8;
	sub_82332C00(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x82115798
	if (!ctx.cr6.gt) goto loc_82115798;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,704(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 704);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x82115798
	if (!ctx.cr6.eq) goto loc_82115798;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332c28
	ctx.lr = 0x821157E0;
	sub_82332C28(ctx, base);
	// lwz r11,796(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 796);
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
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82115758) {
	__imp__sub_82115758(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82115804) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82115804) {
	__imp__sub_82115804(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82115808) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// addi r9,r11,-15680
	ctx.r9.s64 = ctx.r11.s64 + -15680;
	// ori r8,r10,61924
	ctx.r8.u64 = ctx.r10.u64 | 61924;
	// addis r10,r9,1
	ctx.r10.s64 = ctx.r9.s64 + 65536;
	// mullw r11,r3,r8
	ctx.r11.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r8.s32);
	// addi r10,r10,22924
	ctx.r10.s64 = ctx.r10.s64 + 22924;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,504(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 504);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// beq cr6,0x82115884
	if (ctx.cr6.eq) goto loc_82115884;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// beq cr6,0x82115884
	if (ctx.cr6.eq) goto loc_82115884;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// beq cr6,0x82115884
	if (ctx.cr6.eq) goto loc_82115884;
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// beq cr6,0x82115884
	if (ctx.cr6.eq) goto loc_82115884;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// beq cr6,0x82115884
	if (ctx.cr6.eq) goto loc_82115884;
	// lwz r11,532(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 532);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// beq cr6,0x82115884
	if (ctx.cr6.eq) goto loc_82115884;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// beq cr6,0x82115884
	if (ctx.cr6.eq) goto loc_82115884;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// beq cr6,0x82115884
	if (ctx.cr6.eq) goto loc_82115884;
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// beq cr6,0x82115884
	if (ctx.cr6.eq) goto loc_82115884;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x82115888
	if (!ctx.cr6.eq) goto loc_82115888;
loc_82115884:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82115888:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82115808) {
	__imp__sub_82115808(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82115890) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// addi r9,r11,-15680
	ctx.r9.s64 = ctx.r11.s64 + -15680;
	// ori r8,r10,61924
	ctx.r8.u64 = ctx.r10.u64 | 61924;
	// addis r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 65536;
	// mullw r10,r3,r8
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r8.s32);
	// addi r11,r11,22924
	ctx.r11.s64 = ctx.r11.s64 + 22924;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,1028(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1028);
	// rlwinm r7,r11,0,30,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x821158c8
	if (ctx.cr6.eq) goto loc_821158C8;
loc_821158C0:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_821158C8:
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821158dc
	if (!ctx.cr6.eq) goto loc_821158DC;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_821158DC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x821158c0
	if (!ctx.cr6.gt) goto loc_821158C0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// addi r9,r10,6968
	ctx.r9.s64 = ctx.r10.s64 + 6968;
	// lfs f0,12240(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12240);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f1.f64));
	// lwz r11,11308(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 11308);
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f13.u64);
	// lwz r8,-12(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// divw r7,r11,r8
	ctx.r7.s32 = ctx.r11.s32 / ctx.r8.s32;
	// srawi r6,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 1;
	// addze r5,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r5.s64 = temp.s64;
	// rlwinm r4,r5,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r3,r4,r7
	ctx.r3.s64 = ctx.r7.s64 - ctx.r4.s64;
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// subfe r3,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r11.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82115890) {
	__imp__sub_82115890(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82115930) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// addi r9,r11,-15680
	ctx.r9.s64 = ctx.r11.s64 + -15680;
	// ori r8,r10,61924
	ctx.r8.u64 = ctx.r10.u64 | 61924;
	// addis r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 65536;
	// mullw r7,r3,r8
	ctx.r7.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r8.s32);
	// addi r6,r11,23952
	ctx.r6.s64 = ctx.r11.s64 + 23952;
	// lwzx r5,r7,r6
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	// rlwinm r3,r5,30,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0x1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82115930) {
	__imp__sub_82115930(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82115958) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// addi r9,r11,-15680
	ctx.r9.s64 = ctx.r11.s64 + -15680;
	// ori r8,r10,61924
	ctx.r8.u64 = ctx.r10.u64 | 61924;
	// addis r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 65536;
	// mullw r7,r3,r8
	ctx.r7.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r8.s32);
	// addi r6,r11,23952
	ctx.r6.s64 = ctx.r11.s64 + 23952;
	// lwzx r5,r7,r6
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	// rlwinm r3,r5,29,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 29) & 0x1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82115958) {
	__imp__sub_82115958(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82115980) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// addi r9,r11,-15680
	ctx.r9.s64 = ctx.r11.s64 + -15680;
	// ori r8,r10,61924
	ctx.r8.u64 = ctx.r10.u64 | 61924;
	// addis r10,r9,1
	ctx.r10.s64 = ctx.r9.s64 + 65536;
	// mullw r11,r3,r8
	ctx.r11.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r8.s32);
	// addi r10,r10,22924
	ctx.r10.s64 = ctx.r10.s64 + 22924;
	// li r3,0
	ctx.r3.s64 = 0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,1028(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1028);
	// rlwinm r7,r11,0,30,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// clrlwi r3,r11,31
	ctx.r3.u64 = ctx.r11.u32 & 0x1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82115980) {
	__imp__sub_82115980(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821159BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821159BC) {
	__imp__sub_821159BC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821159C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// addi r9,r11,-15680
	ctx.r9.s64 = ctx.r11.s64 + -15680;
	// ori r8,r10,61924
	ctx.r8.u64 = ctx.r10.u64 | 61924;
	// addis r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 65536;
	// mullw r7,r3,r8
	ctx.r7.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r8.s32);
	// addi r6,r11,23952
	ctx.r6.s64 = ctx.r11.s64 + 23952;
	// lwzx r5,r7,r6
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	// rlwinm r3,r5,31,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 31) & 0x1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821159C0) {
	__imp__sub_821159C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821159E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// addi r9,r11,-15680
	ctx.r9.s64 = ctx.r11.s64 + -15680;
	// ori r8,r10,61924
	ctx.r8.u64 = ctx.r10.u64 | 61924;
	// addis r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 65536;
	// mullw r7,r3,r8
	ctx.r7.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r8.s32);
	// addi r6,r11,23952
	ctx.r6.s64 = ctx.r11.s64 + 23952;
	// lwzx r5,r7,r6
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	// rlwinm r3,r5,28,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 28) & 0x1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821159E8) {
	__imp__sub_821159E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82115A10) {
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
	// lwz r10,1032(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1032);
	// lis r9,-32181
	ctx.r9.s64 = -2109014016;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// addi r11,r9,-5696
	ctx.r11.s64 = ctx.r9.s64 + -5696;
	// mulli r10,r10,404
	ctx.r10.s64 = ctx.r10.s64 * 404;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r8,380(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 380);
	// clrlwi r7,r8,31
	ctx.r7.u64 = ctx.r8.u32 & 0x1;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82115a84
	if (ctx.cr6.eq) goto loc_82115A84;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lhz r3,334(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 334);
	// bl 0x82284650
	ctx.lr = 0x82115A58;
	sub_82284650(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82115a84
	if (ctx.cr6.eq) goto loc_82115A84;
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r10,r11,-25976
	ctx.r10.s64 = ctx.r11.s64 + -25976;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lhz r5,388(r10)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r10.u32 + 388);
	// bl 0x820ee1e0
	ctx.lr = 0x82115A7C;
	sub_820EE1E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82115a9c
	if (!ctx.cr6.eq) goto loc_82115A9C;
loc_82115A84:
	// lfs f0,28(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// lfs f13,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// lfs f12,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
loc_82115A9C:
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

PPC_WEAK_FUNC(sub_82115A10) {
	__imp__sub_82115A10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82115AB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82115AB4) {
	__imp__sub_82115AB4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82115AB8) {
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
	// addis r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 65536;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r4,22924
	ctx.r4.s64 = ctx.r4.s64 + 22924;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r11,1028(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1028);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82115b08
	if (!ctx.cr6.eq) goto loc_82115B08;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r10,r11,-5936
	ctx.r10.s64 = ctx.r11.s64 + -5936;
	// lfs f0,-5936(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -5936);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// lfs f0,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// b 0x82115b58
	goto loc_82115B58;
loc_82115B08:
	// rlwinm r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82115b30
	if (ctx.cr6.eq) goto loc_82115B30;
	// lfs f0,1036(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 1036);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,1040(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 1040);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,1044(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 1044);
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
	// b 0x82115b3c
	goto loc_82115B3C;
loc_82115B30:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82115a10
	ctx.lr = 0x82115B3C;
	sub_82115A10(ctx, base);
loc_82115B3C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821410f8
	ctx.lr = 0x82115B44;
	sub_821410F8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x820eb798
	ctx.lr = 0x82115B58;
	sub_820EB798(ctx, base);
loc_82115B58:
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

PPC_WEAK_FUNC(sub_82115AB8) {
	__imp__sub_82115AB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82115B70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x82115B78;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
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
	// lis r8,2
	ctx.r8.s64 = 131072;
	// addis r30,r31,3
	ctx.r30.s64 = ctx.r31.s64 + 196608;
	// addis r29,r31,1
	ctx.r29.s64 = ctx.r31.s64 + 65536;
	// addi r30,r30,-3632
	ctx.r30.s64 = ctx.r30.s64 + -3632;
	// addi r29,r29,22912
	ctx.r29.s64 = ctx.r29.s64 + 22912;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// ori r28,r8,61896
	ctx.r28.u64 = ctx.r8.u64 | 61896;
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r6,0(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpw cr6,r7,r6
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, ctx.xer);
	// beq cr6,0x82115bd4
	if (ctx.cr6.eq) goto loc_82115BD4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// add r5,r31,r28
	ctx.r5.u64 = ctx.r31.u64 + ctx.r28.u64;
	// bl 0x82115ab8
	ctx.lr = 0x82115BCC;
	sub_82115AB8(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_82115BD4:
	// add r11,r31,r28
	ctx.r11.u64 = ctx.r31.u64 + ctx.r28.u64;
	// lfsx f0,r31,r28
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r28.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r27)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r27.u32 + 0, temp.u32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r27)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r27.u32 + 4, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82115B70) {
	__imp__sub_82115B70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82115BF0) {
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
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82115b70
	ctx.lr = 0x82115C04;
	sub_82115B70(ctx, base);
	// lfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
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

PPC_WEAK_FUNC(sub_82115BF0) {
	__imp__sub_82115BF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82115C18) {
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
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82115b70
	ctx.lr = 0x82115C2C;
	sub_82115B70(ctx, base);
	// lfs f1,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
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

PPC_WEAK_FUNC(sub_82115C18) {
	__imp__sub_82115C18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82115C40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// addi r9,r11,-15680
	ctx.r9.s64 = ctx.r11.s64 + -15680;
	// ori r8,r10,61924
	ctx.r8.u64 = ctx.r10.u64 | 61924;
	// addis r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 65536;
	// mullw r10,r3,r8
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r8.s32);
	// addi r11,r11,22924
	ctx.r11.s64 = ctx.r11.s64 + 22924;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r7,172(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 172);
	// rlwinm r6,r7,0,11,11
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x100000;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x82115c8c
	if (ctx.cr6.eq) goto loc_82115C8C;
	// lwz r11,364(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 364);
	// lis r10,-32181
	ctx.r10.s64 = -2109014016;
	// addi r10,r10,-5696
	ctx.r10.s64 = ctx.r10.s64 + -5696;
	// mulli r11,r11,404
	ctx.r11.s64 = ctx.r11.s64 * 404;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lhz r3,332(r11)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + 332);
	// b 0x82332b28
	sub_82332B28(ctx, base);
	return;
loc_82115C8C:
	// lwz r3,692(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 692);
	// b 0x82332b28
	sub_82332B28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82115C40) {
	__imp__sub_82115C40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82115C94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82115C94) {
	__imp__sub_82115C94(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82115C98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf5c
	ctx.lr = 0x82115CA0;
	__savegprlr_21(ctx, base);
	// stfd f30,-112(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -112, ctx.f30.u64);
	// stfd f31,-104(r1)
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r9,-32168
	ctx.r9.s64 = -2108162048;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// addi r9,r9,-30176
	ctx.r9.s64 = ctx.r9.s64 + -30176;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r7,2
	ctx.r7.s64 = 131072;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// ori r6,r7,61924
	ctx.r6.u64 = ctx.r7.u64 | 61924;
	// add r23,r11,r9
	ctx.r23.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lis r5,-32187
	ctx.r5.s64 = -2109407232;
	// mullw r11,r3,r6
	ctx.r11.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r6.s32);
	// lwz r27,0(r23)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r10,r5,-15680
	ctx.r10.s64 = ctx.r5.s64 + -15680;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// add r21,r11,r10
	ctx.r21.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x822ef118
	ctx.lr = 0x82115CFC;
	sub_822EF118(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82332c00
	ctx.lr = 0x82115D08;
	sub_82332C00(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82332af8
	ctx.lr = 0x82115D10;
	sub_82332AF8(ctx, base);
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// lbz r11,1631(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1631);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lfs f31,5484(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 5484);
	ctx.f31.f64 = double(temp.f32);
	// beq cr6,0x82115dac
	if (ctx.cr6.eq) goto loc_82115DAC;
	// addi r11,r31,18
	ctx.r11.s64 = ctx.r31.s64 + 18;
	// mulli r10,r11,28
	ctx.r10.s64 = ctx.r11.s64 * 28;
	// lwzx r9,r10,r28
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r28.u32);
	// cmpwi cr6,r9,8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 8, ctx.xer);
	// bne cr6,0x82115d54
	if (!ctx.cr6.eq) goto loc_82115D54;
	// mulli r11,r31,28
	ctx.r11.s64 = ctx.r31.s64 * 28;
	// lwz r10,1312(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1312);
	// add r9,r11,r28
	ctx.r9.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lwz r8,492(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 492);
	// subf. r7,r10,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// bgt 0x82115d58
	if (ctx.cr0.gt) goto loc_82115D58;
loc_82115D54:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82115D58:
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// rlwinm r9,r11,0,27,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82115d7c
	if (ctx.cr6.eq) goto loc_82115D7C;
	// lwz r11,700(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 700);
	// rlwinm r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82115d80
	if (ctx.cr6.eq) goto loc_82115D80;
loc_82115D7C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82115D80:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82115d94
	if (!ctx.cr6.eq) goto loc_82115D94;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82115d98
	if (!ctx.cr6.eq) goto loc_82115D98;
loc_82115D94:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82115D98:
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// lfs f1,704(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 704);
	ctx.f1.f64 = double(temp.f32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r5,r11,35
	ctx.r5.s64 = ctx.r11.s64 + 35;
	// b 0x82115dd0
	goto loc_82115DD0;
loc_82115DAC:
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r5,36
	ctx.r5.s64 = 36;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82333410
	ctx.lr = 0x82115DC0;
	sub_82333410(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82115dd8
	if (ctx.cr6.eq) goto loc_82115DD8;
	// li r5,36
	ctx.r5.s64 = 36;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
loc_82115DD0:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82115640
	ctx.lr = 0x82115DD8;
	sub_82115640(ctx, base);
loc_82115DD8:
	// mulli r11,r31,28
	ctx.r11.s64 = ctx.r31.s64 * 28;
	// lwz r10,12(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 12);
	// add r24,r11,r28
	ctx.r24.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lis r9,2
	ctx.r9.s64 = 131072;
	// ori r22,r9,19048
	ctx.r22.u64 = ctx.r9.u64 | 19048;
	// lwz r11,488(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 488);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82115e04
	if (!ctx.cr6.eq) goto loc_82115E04;
	// lwzx r10,r21,r22
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + ctx.r22.u32);
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82116378
	if (ctx.cr6.eq) goto loc_82116378;
loc_82115E04:
	// rlwinm r11,r11,0,23,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFDFF;
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// bgt cr6,0x8211633c
	if (ctx.cr6.gt) goto loc_8211633C;
	// lis r12,-32239
	ctx.r12.s64 = -2112815104;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,24104
	ctx.r12.s64 = ctx.r12.s64 + 24104;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_82115EAC;
	case 1:
		goto loc_82115EAC;
	case 2:
		goto loc_82115F38;
	case 3:
		goto loc_82115F54;
	case 4:
		goto loc_82115F70;
	case 5:
		goto loc_82115F8C;
	case 6:
		goto loc_82115FA8;
	case 7:
		goto loc_82115FC4;
	case 8:
		goto loc_82115FE0;
	case 9:
		goto loc_82115FFC;
	case 10:
		goto loc_82116018;
	case 11:
		goto loc_82116034;
	case 12:
		goto loc_82116098;
	case 13:
		goto loc_821160E0;
	case 14:
		goto loc_821160FC;
	case 15:
		goto loc_82116118;
	case 16:
		goto loc_82116134;
	case 17:
		goto loc_82116150;
	case 18:
		goto loc_8211616C;
	case 19:
		goto loc_82116188;
	case 20:
		goto loc_821161A4;
	case 21:
		goto loc_821161C0;
	case 22:
		goto loc_821161DC;
	case 23:
		goto loc_82116224;
	case 24:
		goto loc_82116240;
	case 25:
		goto loc_8211625C;
	case 26:
		goto loc_82116278;
	case 27:
		goto loc_82116294;
	case 28:
		goto loc_821162B0;
	case 29:
		goto loc_821162CC;
	case 30:
		goto loc_821162E8;
	case 31:
		goto loc_82116304;
	case 32:
		goto loc_82116320;
	default:
		return;
	}
	// lwz r16,24236(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 24236);
	// lwz r16,24236(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 24236);
	// lwz r16,24376(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 24376);
	// lwz r16,24404(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 24404);
	// lwz r16,24432(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 24432);
	// lwz r16,24460(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 24460);
	// lwz r16,24488(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 24488);
	// lwz r16,24516(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 24516);
	// lwz r16,24544(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 24544);
	// lwz r16,24572(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 24572);
	// lwz r16,24600(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 24600);
	// lwz r16,24628(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 24628);
	// lwz r16,24728(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 24728);
	// lwz r16,24800(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 24800);
	// lwz r16,24828(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 24828);
	// lwz r16,24856(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 24856);
	// lwz r16,24884(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 24884);
	// lwz r16,24912(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 24912);
	// lwz r16,24940(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 24940);
	// lwz r16,24968(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 24968);
	// lwz r16,24996(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 24996);
	// lwz r16,25024(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 25024);
	// lwz r16,25052(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 25052);
	// lwz r16,25124(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 25124);
	// lwz r16,25152(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 25152);
	// lwz r16,25180(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 25180);
	// lwz r16,25208(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 25208);
	// lwz r16,25236(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 25236);
	// lwz r16,25264(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 25264);
	// lwz r16,25292(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 25292);
	// lwz r16,25320(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 25320);
	// lwz r16,25348(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 25348);
	// lwz r16,25376(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + 25376);
loc_82115EAC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r27,1
	ctx.r27.s64 = 1;
	// li r26,-1
	ctx.r26.s64 = -1;
	// lfs f30,2416(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2416);
	ctx.f30.f64 = double(temp.f32);
loc_82115EBC:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x822f40f8
	ctx.lr = 0x82115EC8;
	sub_822F40F8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82115eec
	if (!ctx.cr6.eq) goto loc_82115EEC;
	// stw r26,12(r23)
	PPC_STORE_U32(ctx.r23.u32 + 12, ctx.r26.u32);
	// lwz r11,488(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 488);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82116374
	if (ctx.cr6.eq) goto loc_82116374;
	// fmr f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f30.f64;
loc_82115EEC:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmpwi cr6,r27,35
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 35, ctx.xer);
	// blt cr6,0x82115ebc
	if (ctx.cr6.lt) goto loc_82115EBC;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x820da6b8
	ctx.lr = 0x82115F08;
	sub_820DA6B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bne cr6,0x82115f2c
	if (!ctx.cr6.eq) goto loc_82115F2C;
	// li r6,2
	ctx.r6.s64 = 2;
	// bl 0x82115500
	ctx.lr = 0x82115F28;
	sub_82115500(ctx, base);
	// b 0x8211636c
	goto loc_8211636C;
loc_82115F2C:
	// li r6,1
	ctx.r6.s64 = 1;
	// bl 0x82115500
	ctx.lr = 0x82115F34;
	sub_82115500(ctx, base);
	// b 0x8211636c
	goto loc_8211636C;
loc_82115F38:
	// li r6,3
	ctx.r6.s64 = 3;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82115500
	ctx.lr = 0x82115F50;
	sub_82115500(ctx, base);
	// b 0x8211636c
	goto loc_8211636C;
loc_82115F54:
	// li r6,5
	ctx.r6.s64 = 5;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82115500
	ctx.lr = 0x82115F6C;
	sub_82115500(ctx, base);
	// b 0x8211636c
	goto loc_8211636C;
loc_82115F70:
	// li r6,6
	ctx.r6.s64 = 6;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82115500
	ctx.lr = 0x82115F88;
	sub_82115500(ctx, base);
	// b 0x8211636c
	goto loc_8211636C;
loc_82115F8C:
	// li r6,32
	ctx.r6.s64 = 32;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82115500
	ctx.lr = 0x82115FA4;
	sub_82115500(ctx, base);
	// b 0x8211636c
	goto loc_8211636C;
loc_82115FA8:
	// li r6,33
	ctx.r6.s64 = 33;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82115500
	ctx.lr = 0x82115FC0;
	sub_82115500(ctx, base);
	// b 0x8211636c
	goto loc_8211636C;
loc_82115FC4:
	// li r6,34
	ctx.r6.s64 = 34;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82115500
	ctx.lr = 0x82115FDC;
	sub_82115500(ctx, base);
	// b 0x8211636c
	goto loc_8211636C;
loc_82115FE0:
	// li r6,7
	ctx.r6.s64 = 7;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82115500
	ctx.lr = 0x82115FF8;
	sub_82115500(ctx, base);
	// b 0x8211636c
	goto loc_8211636C;
loc_82115FFC:
	// li r6,8
	ctx.r6.s64 = 8;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82115500
	ctx.lr = 0x82116014;
	sub_82115500(ctx, base);
	// b 0x8211636c
	goto loc_8211636C;
loc_82116018:
	// li r6,16
	ctx.r6.s64 = 16;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82115500
	ctx.lr = 0x82116030;
	sub_82115500(ctx, base);
	// b 0x8211636c
	goto loc_8211636C;
loc_82116034:
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// rlwinm r10,r11,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8211607c
	if (ctx.cr6.eq) goto loc_8211607C;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r5,15
	ctx.r5.s64 = 15;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82333410
	ctx.lr = 0x82116058;
	sub_82333410(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8211607c
	if (ctx.cr6.eq) goto loc_8211607C;
loc_82116060:
	// li r6,15
	ctx.r6.s64 = 15;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82115500
	ctx.lr = 0x82116078;
	sub_82115500(ctx, base);
	// b 0x8211636c
	goto loc_8211636C;
loc_8211607C:
	// li r6,13
	ctx.r6.s64 = 13;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82115500
	ctx.lr = 0x82116094;
	sub_82115500(ctx, base);
	// b 0x8211636c
	goto loc_8211636C;
loc_82116098:
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// rlwinm r10,r11,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x821160c4
	if (ctx.cr6.eq) goto loc_821160C4;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r5,15
	ctx.r5.s64 = 15;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82333410
	ctx.lr = 0x821160BC;
	sub_82333410(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82116060
	if (!ctx.cr6.eq) goto loc_82116060;
loc_821160C4:
	// li r6,14
	ctx.r6.s64 = 14;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82115500
	ctx.lr = 0x821160DC;
	sub_82115500(ctx, base);
	// b 0x8211636c
	goto loc_8211636C;
loc_821160E0:
	// li r6,9
	ctx.r6.s64 = 9;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82115500
	ctx.lr = 0x821160F8;
	sub_82115500(ctx, base);
	// b 0x8211636c
	goto loc_8211636C;
loc_821160FC:
	// li r6,10
	ctx.r6.s64 = 10;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82115500
	ctx.lr = 0x82116114;
	sub_82115500(ctx, base);
	// b 0x8211636c
	goto loc_8211636C;
loc_82116118:
	// li r6,11
	ctx.r6.s64 = 11;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82115500
	ctx.lr = 0x82116130;
	sub_82115500(ctx, base);
	// b 0x8211636c
	goto loc_8211636C;
loc_82116134:
	// li r6,12
	ctx.r6.s64 = 12;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82115500
	ctx.lr = 0x8211614C;
	sub_82115500(ctx, base);
	// b 0x8211636c
	goto loc_8211636C;
loc_82116150:
	// li r6,18
	ctx.r6.s64 = 18;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82115500
	ctx.lr = 0x82116168;
	sub_82115500(ctx, base);
	// b 0x8211636c
	goto loc_8211636C;
loc_8211616C:
	// li r6,17
	ctx.r6.s64 = 17;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82115500
	ctx.lr = 0x82116184;
	sub_82115500(ctx, base);
	// b 0x8211636c
	goto loc_8211636C;
loc_82116188:
	// li r6,20
	ctx.r6.s64 = 20;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82115500
	ctx.lr = 0x821161A0;
	sub_82115500(ctx, base);
	// b 0x8211636c
	goto loc_8211636C;
loc_821161A4:
	// li r6,19
	ctx.r6.s64 = 19;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82115500
	ctx.lr = 0x821161BC;
	sub_82115500(ctx, base);
	// b 0x8211636c
	goto loc_8211636C;
loc_821161C0:
	// li r6,22
	ctx.r6.s64 = 22;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82115500
	ctx.lr = 0x821161D8;
	sub_82115500(ctx, base);
	// b 0x8211636c
	goto loc_8211636C;
loc_821161DC:
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// rlwinm r10,r11,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82116208
	if (ctx.cr6.eq) goto loc_82116208;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r5,15
	ctx.r5.s64 = 15;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82333410
	ctx.lr = 0x82116200;
	sub_82333410(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82116060
	if (!ctx.cr6.eq) goto loc_82116060;
loc_82116208:
	// li r6,21
	ctx.r6.s64 = 21;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82115500
	ctx.lr = 0x82116220;
	sub_82115500(ctx, base);
	// b 0x8211636c
	goto loc_8211636C;
loc_82116224:
	// li r6,23
	ctx.r6.s64 = 23;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82115500
	ctx.lr = 0x8211623C;
	sub_82115500(ctx, base);
	// b 0x8211636c
	goto loc_8211636C;
loc_82116240:
	// li r6,24
	ctx.r6.s64 = 24;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82115500
	ctx.lr = 0x82116258;
	sub_82115500(ctx, base);
	// b 0x8211636c
	goto loc_8211636C;
loc_8211625C:
	// li r6,25
	ctx.r6.s64 = 25;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82115500
	ctx.lr = 0x82116274;
	sub_82115500(ctx, base);
	// b 0x8211636c
	goto loc_8211636C;
loc_82116278:
	// li r6,26
	ctx.r6.s64 = 26;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82115500
	ctx.lr = 0x82116290;
	sub_82115500(ctx, base);
	// b 0x8211636c
	goto loc_8211636C;
loc_82116294:
	// li r6,27
	ctx.r6.s64 = 27;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82115500
	ctx.lr = 0x821162AC;
	sub_82115500(ctx, base);
	// b 0x8211636c
	goto loc_8211636C;
loc_821162B0:
	// li r6,28
	ctx.r6.s64 = 28;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82115500
	ctx.lr = 0x821162C8;
	sub_82115500(ctx, base);
	// b 0x8211636c
	goto loc_8211636C;
loc_821162CC:
	// li r6,4
	ctx.r6.s64 = 4;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82115500
	ctx.lr = 0x821162E4;
	sub_82115500(ctx, base);
	// b 0x8211636c
	goto loc_8211636C;
loc_821162E8:
	// li r6,29
	ctx.r6.s64 = 29;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82115500
	ctx.lr = 0x82116300;
	sub_82115500(ctx, base);
	// b 0x8211636c
	goto loc_8211636C;
loc_82116304:
	// li r6,30
	ctx.r6.s64 = 30;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82115500
	ctx.lr = 0x8211631C;
	sub_82115500(ctx, base);
	// b 0x8211636c
	goto loc_8211636C;
loc_82116320:
	// li r6,31
	ctx.r6.s64 = 31;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82115500
	ctx.lr = 0x82116338;
	sub_82115500(ctx, base);
	// b 0x8211636c
	goto loc_8211636C;
loc_8211633C:
	// li r6,1
	ctx.r6.s64 = 1;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82115500
	ctx.lr = 0x82116354;
	sub_82115500(ctx, base);
	// lwz r10,488(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 488);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r3,19
	ctx.r3.s64 = 19;
	// addi r4,r11,-15648
	ctx.r4.s64 = ctx.r11.s64 + -15648;
	// rlwinm r5,r10,0,23,21
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFDFF;
	// bl 0x82280900
	ctx.lr = 0x8211636C;
	sub_82280900(ctx, base);
loc_8211636C:
	// lwz r11,488(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 488);
	// stw r11,12(r23)
	PPC_STORE_U32(ctx.r23.u32 + 12, ctx.r11.u32);
loc_82116374:
	// stwx r30,r21,r22
	PPC_STORE_U32(ctx.r21.u32 + ctx.r22.u32, ctx.r30.u32);
loc_82116378:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f30,-112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// lfd f31,-104(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x823ddfac
	__restgprlr_21(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82115C98) {
	__imp__sub_82115C98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82116388) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r3,1024
	ctx.r11.s64 = ctx.r3.s64 + 1024;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r11,r4
	ctx.r3.u64 = ctx.r11.u64 + ctx.r4.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82116388) {
	__imp__sub_82116388(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82116398) {
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
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821163e0
	if (ctx.cr6.eq) goto loc_821163E0;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// bl 0x822f5640
	ctx.lr = 0x821163C0;
	sub_822F5640(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821163e0
	if (ctx.cr6.eq) goto loc_821163E0;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r11,-15596
	ctx.r4.s64 = ctx.r11.s64 + -15596;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822830e8
	ctx.lr = 0x821163E0;
	sub_822830E8(ctx, base);
loc_821163E0:
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

PPC_WEAK_FUNC(sub_82116398) {
	__imp__sub_82116398(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821163F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821163F4) {
	__imp__sub_821163F4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821163F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82116400;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r5,r11,-26104
	ctx.r5.s64 = ctx.r11.s64 + -26104;
	// addi r3,r10,-15528
	ctx.r3.s64 = ctx.r10.s64 + -15528;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x822f28a8
	ctx.lr = 0x82116420;
	sub_822F28A8(ctx, base);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r5,r9,-15536
	ctx.r5.s64 = ctx.r9.s64 + -15536;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822f27b0
	ctx.lr = 0x82116440;
	sub_822F27B0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82332b10
	ctx.lr = 0x82116448;
	sub_82332B10(ctx, base);
	// lwz r8,16(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r29,r11,-15544
	ctx.r29.s64 = ctx.r11.s64 + -15544;
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x8211646c
	if (!ctx.cr6.eq) goto loc_8211646C;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_8211646C:
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82321c50
	ctx.lr = 0x8211647C;
	sub_82321C50(ctx, base);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82116494
	if (!ctx.cr6.eq) goto loc_82116494;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82116494:
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82321c50
	ctx.lr = 0x821164A4;
	sub_82321C50(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821163F8) {
	__imp__sub_821163F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821164B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x821164B8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r5,r11,-26104
	ctx.r5.s64 = ctx.r11.s64 + -26104;
	// addi r3,r10,-15520
	ctx.r3.s64 = ctx.r10.s64 + -15520;
	// li r4,38
	ctx.r4.s64 = 38;
	// bl 0x822f28a8
	ctx.lr = 0x821164D8;
	sub_822F28A8(ctx, base);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r5,r9,-15536
	ctx.r5.s64 = ctx.r9.s64 + -15536;
	// li r7,37
	ctx.r7.s64 = 37;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x822f27b0
	ctx.lr = 0x821164F8;
	sub_822F27B0(ctx, base);
	// addi r28,r27,4
	ctx.r28.s64 = ctx.r27.s64 + 4;
	// li r31,1
	ctx.r31.s64 = 1;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_82116504:
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lbz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82116518
	if (!ctx.cr6.eq) goto loc_82116518;
	// lwz r5,0(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
loc_82116518:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82321c50
	ctx.lr = 0x82116524;
	sub_82321C50(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpwi cr6,r31,37
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 37, ctx.xer);
	// blt cr6,0x82116504
	if (ctx.cr6.lt) goto loc_82116504;
	// lwz r31,140(r27)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + 140);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r30,r11,-15596
	ctx.r30.s64 = ctx.r11.s64 + -15596;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82116574
	if (ctx.cr6.eq) goto loc_82116574;
	// li r4,35
	ctx.r4.s64 = 35;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822f5640
	ctx.lr = 0x82116558;
	sub_822F5640(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82116574
	if (ctx.cr6.eq) goto loc_82116574;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822830e8
	ctx.lr = 0x82116574;
	sub_822830E8(ctx, base);
loc_82116574:
	// lwz r31,144(r27)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + 144);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821165b0
	if (ctx.cr6.eq) goto loc_821165B0;
	// li r4,36
	ctx.r4.s64 = 36;
	// bl 0x822f5640
	ctx.lr = 0x82116590;
	sub_822F5640(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821165ac
	if (ctx.cr6.eq) goto loc_821165AC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822830e8
	ctx.lr = 0x821165AC;
	sub_822830E8(ctx, base);
loc_821165AC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_821165B0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821164B0) {
	__imp__sub_821164B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821165B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x821165C0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821166d8
	if (!ctx.cr6.eq) goto loc_821166D8;
	// bl 0x82332af8
	ctx.lr = 0x821165DC;
	sub_82332AF8(ctx, base);
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bne cr6,0x82116600
	if (!ctx.cr6.eq) goto loc_82116600;
	// bl 0x821163f8
	ctx.lr = 0x821165F4;
	sub_821163F8(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_82116600:
	// bl 0x82332b10
	ctx.lr = 0x82116604;
	sub_82332B10(ctx, base);
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8211665c
	if (!ctx.cr6.eq) goto loc_8211665C;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821166d8
	if (ctx.cr6.eq) goto loc_821166D8;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821166d8
	if (ctx.cr6.eq) goto loc_821166D8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82332b28
	ctx.lr = 0x82116640;
	sub_82332B28(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-15508
	ctx.r4.s64 = ctx.r11.s64 + -15508;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822830e8
	ctx.lr = 0x82116654;
	sub_822830E8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_8211665C:
	// bl 0x822dc088
	ctx.lr = 0x82116660;
	sub_822DC088(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8211667c
	if (!ctx.cr6.eq) goto loc_8211667C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r4,r11,-27808
	ctx.r4.s64 = ctx.r11.s64 + -27808;
	// bl 0x82280c30
	ctx.lr = 0x82116678;
	sub_82280C30(ctx, base);
	// bl 0x822dbe08
	ctx.lr = 0x8211667C;
	sub_822DBE08(ctx, base);
loc_8211667C:
	// lwz r3,16(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// bl 0x821164b0
	ctx.lr = 0x82116684;
	sub_821164B0(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// lbz r11,1643(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1643);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821166c0
	if (!ctx.cr6.eq) goto loc_821166C0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823333f8
	ctx.lr = 0x8211669C;
	sub_823333F8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821166c0
	if (ctx.cr6.eq) goto loc_821166C0;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x821164b0
	ctx.lr = 0x821166AC;
	sub_821164B0(ctx, base);
	// stw r3,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r3.u32);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x821164b0
	ctx.lr = 0x821166B8;
	sub_821164B0(ctx, base);
	// stw r3,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r3.u32);
	// b 0x821166cc
	goto loc_821166CC;
loc_821166C0:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
loc_821166CC:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x821166d8
	if (!ctx.cr6.eq) goto loc_821166D8;
	// bl 0x822dbf48
	ctx.lr = 0x821166D8;
	sub_822DBF48(ctx, base);
loc_821166D8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821165B8) {
	__imp__sub_821165B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821166E0) {
	PPC_FUNC_PROLOGUE();
	// b 0x82282dc0
	sub_82282DC0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821166E0) {
	__imp__sub_821166E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821166E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821166E4) {
	__imp__sub_821166E4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821166E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x821166F0;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mulli r11,r3,200
	ctx.r11.s64 = ctx.r3.s64 * 200;
	// lis r10,-32188
	ctx.r10.s64 = -2109472768;
	// add r9,r11,r4
	ctx.r9.u64 = ctx.r11.u64 + ctx.r4.u64;
	// addi r11,r10,8672
	ctx.r11.s64 = ctx.r10.s64 + 8672;
	// rlwinm r8,r9,5,0,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r7,r11,13
	ctx.r7.s64 = ctx.r11.s64 + 13;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lbzx r6,r8,r7
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r7.u32);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82116874
	if (ctx.cr6.eq) goto loc_82116874;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x822f2368
	ctx.lr = 0x82116728;
	sub_822F2368(ctx, base);
	// li r28,254
	ctx.r28.s64 = 254;
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// stb r28,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r28.u8);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r30,r11,-25976
	ctx.r30.s64 = ctx.r11.s64 + -25976;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lhz r4,248(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 248);
	// bl 0x822efc98
	ctx.lr = 0x82116748;
	sub_822EFC98(ctx, base);
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r29,r11,17280
	ctx.r29.s64 = ctx.r11.s64 + 17280;
	// beq cr6,0x82116778
	if (ctx.cr6.eq) goto loc_82116778;
	// lbz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// rlwinm r11,r9,29,3,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1FFFFFFC;
	// rlwinm r9,r9,2,25,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0x7C;
	// lwzx r8,r11,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwzx r7,r9,r29
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r29.u32);
	// or r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 | ctx.r8.u64;
	// stwx r6,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r6.u32);
loc_82116778:
	// stb r28,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r28.u8);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lhz r4,250(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 250);
	// bl 0x822efc98
	ctx.lr = 0x8211678C;
	sub_822EFC98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821167b4
	if (ctx.cr6.eq) goto loc_821167B4;
	// lbz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// rlwinm r11,r9,29,3,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1FFFFFFC;
	// rlwinm r9,r9,2,25,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0x7C;
	// lwzx r8,r11,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwzx r7,r9,r29
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r29.u32);
	// or r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 | ctx.r8.u64;
	// stwx r6,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r6.u32);
loc_821167B4:
	// stb r28,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r28.u8);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lhz r4,256(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 256);
	// bl 0x822efc98
	ctx.lr = 0x821167C8;
	sub_822EFC98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821167f0
	if (ctx.cr6.eq) goto loc_821167F0;
	// lbz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// rlwinm r11,r9,29,3,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1FFFFFFC;
	// rlwinm r9,r9,2,25,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0x7C;
	// lwzx r8,r11,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwzx r7,r9,r29
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r29.u32);
	// or r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 | ctx.r8.u64;
	// stwx r6,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r6.u32);
loc_821167F0:
	// stb r28,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r28.u8);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lhz r4,252(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 252);
	// bl 0x822efc98
	ctx.lr = 0x82116804;
	sub_822EFC98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8211682c
	if (ctx.cr6.eq) goto loc_8211682C;
	// lbz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// rlwinm r11,r9,29,3,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1FFFFFFC;
	// rlwinm r9,r9,2,25,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0x7C;
	// lwzx r8,r11,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwzx r7,r9,r29
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r29.u32);
	// or r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 | ctx.r8.u64;
	// stwx r6,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r6.u32);
loc_8211682C:
	// stb r28,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r28.u8);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lhz r4,254(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 254);
	// bl 0x822efc98
	ctx.lr = 0x82116840;
	sub_822EFC98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82116868
	if (ctx.cr6.eq) goto loc_82116868;
	// lbz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// rlwinm r11,r9,29,3,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1FFFFFFC;
	// rlwinm r9,r9,2,25,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0x7C;
	// lwzx r8,r11,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwzx r7,r9,r29
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r29.u32);
	// or r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 | ctx.r8.u64;
	// stwx r6,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r6.u32);
loc_82116868:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822f0330
	ctx.lr = 0x82116874;
	sub_822F0330(ctx, base);
loc_82116874:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821166E8) {
	__imp__sub_821166E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8211687C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8211687C) {
	__imp__sub_8211687C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82116880) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82116888;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// addi r9,r10,-30176
	ctx.r9.s64 = ctx.r10.s64 + -30176;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r29,r7,r9
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82333f68
	ctx.lr = 0x821168BC;
	sub_82333F68(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821166e8
	ctx.lr = 0x821168CC;
	sub_821166E8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82116880) {
	__imp__sub_82116880(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821168D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821168D4) {
	__imp__sub_821168D4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821168D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x821168E0;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x82116b9c
	if (ctx.cr6.eq) goto loc_82116B9C;
	// mulli r11,r3,200
	ctx.r11.s64 = ctx.r3.s64 * 200;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lis r9,-32188
	ctx.r9.s64 = -2109472768;
	// rlwinm r10,r11,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r11,r9,8672
	ctx.r11.s64 = ctx.r9.s64 + 8672;
	// rlwinm r9,r4,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r8,r4,r9
	ctx.r8.u64 = ctx.r4.u64 + ctx.r9.u64;
	// lis r7,-32188
	ctx.r7.s64 = -2109472768;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r7,6264
	ctx.r11.s64 = ctx.r7.s64 + 6264;
	// lwz r6,16(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// add r29,r10,r11
	ctx.r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x82116944
	if (!ctx.cr6.eq) goto loc_82116944;
	// li r10,8
	ctx.r10.s64 = 8;
	// addi r11,r30,-4
	ctx.r11.s64 = ctx.r30.s64 + -4;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8211693C:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8211693c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8211693C;
loc_82116944:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332af8
	ctx.lr = 0x8211694C;
	sub_82332AF8(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821165b8
	ctx.lr = 0x8211695C;
	sub_821165B8(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82116970
	if (!ctx.cr6.eq) goto loc_82116970;
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_82116970:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82116b9c
	if (!ctx.cr6.eq) goto loc_82116B9C;
	// li r10,8
	ctx.r10.s64 = 8;
	// addi r11,r30,-4
	ctx.r11.s64 = ctx.r30.s64 + -4;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8211698C:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8211698c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8211698C;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// lwz r11,500(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 500);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821169c0
	if (ctx.cr6.eq) goto loc_821169C0;
	// lis r10,-32181
	ctx.r10.s64 = -2109014016;
	// rlwinm r9,r31,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,-22896
	ctx.r10.s64 = ctx.r10.s64 + -22896;
	// addi r8,r10,44
	ctx.r8.s64 = ctx.r10.s64 + 44;
	// stwx r11,r9,r8
	PPC_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r11.u32);
	// b 0x821169fc
	goto loc_821169FC;
loc_821169C0:
	// lwz r11,492(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 492);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821169e4
	if (ctx.cr6.eq) goto loc_821169E4;
	// lis r10,-32181
	ctx.r10.s64 = -2109014016;
	// rlwinm r9,r31,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,-22896
	ctx.r10.s64 = ctx.r10.s64 + -22896;
	// addi r8,r10,44
	ctx.r8.s64 = ctx.r10.s64 + 44;
	// stwx r11,r9,r8
	PPC_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r11.u32);
	// b 0x821169fc
	goto loc_821169FC;
loc_821169E4:
	// lis r11,-32181
	ctx.r11.s64 = -2109014016;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-22896
	ctx.r11.s64 = ctx.r11.s64 + -22896;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r11,44
	ctx.r8.s64 = ctx.r11.s64 + 44;
	// stwx r9,r10,r8
	PPC_STORE_U32(ctx.r10.u32 + ctx.r8.u32, ctx.r9.u32);
loc_821169FC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332b10
	ctx.lr = 0x82116A04;
	sub_82332B10(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// bl 0x822b6fb0
	ctx.lr = 0x82116A10;
	sub_822B6FB0(ctx, base);
	// lis r27,-31859
	ctx.r27.s64 = -2087911424;
	// stw r3,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r3.u32);
	// lis r28,-31859
	ctx.r28.s64 = -2087911424;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82116a90
	if (!ctx.cr6.eq) goto loc_82116A90;
	// lwz r11,31488(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 31488);
	// lbz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82116a88
	if (ctx.cr6.eq) goto loc_82116A88;
	// lwz r11,31484(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 31484);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r25,8(r29)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lbz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82116a6c
	if (ctx.cr6.eq) goto loc_82116A6C;
	// bl 0x82332b28
	ctx.lr = 0x82116A50;
	sub_82332B28(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-15160
	ctx.r4.s64 = ctx.r11.s64 + -15160;
	// li r3,6
	ctx.r3.s64 = 6;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// bl 0x822830e8
	ctx.lr = 0x82116A68;
	sub_822830E8(ctx, base);
	// b 0x82116a88
	goto loc_82116A88;
loc_82116A6C:
	// bl 0x82332b28
	ctx.lr = 0x82116A70;
	sub_82332B28(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-15220
	ctx.r4.s64 = ctx.r11.s64 + -15220;
	// li r3,17
	ctx.r3.s64 = 17;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// bl 0x82280c30
	ctx.lr = 0x82116A88;
	sub_82280C30(ctx, base);
loc_82116A88:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
loc_82116A90:
	// lwz r3,20(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 20);
	// bl 0x822b6fb0
	ctx.lr = 0x82116A98;
	sub_822B6FB0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r3.u32);
	// bne cr6,0x82116b10
	if (!ctx.cr6.eq) goto loc_82116B10;
	// lwz r11,31488(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 31488);
	// lbz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82116b08
	if (ctx.cr6.eq) goto loc_82116B08;
	// lwz r11,31484(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 31484);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r29,20(r26)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r26.u32 + 20);
	// lbz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82116aec
	if (ctx.cr6.eq) goto loc_82116AEC;
	// bl 0x82332b28
	ctx.lr = 0x82116AD0;
	sub_82332B28(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-15268
	ctx.r4.s64 = ctx.r11.s64 + -15268;
	// li r3,6
	ctx.r3.s64 = 6;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// bl 0x822830e8
	ctx.lr = 0x82116AE8;
	sub_822830E8(ctx, base);
	// b 0x82116b08
	goto loc_82116B08;
loc_82116AEC:
	// bl 0x82332b28
	ctx.lr = 0x82116AF0;
	sub_82332B28(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-15324
	ctx.r4.s64 = ctx.r11.s64 + -15324;
	// li r3,17
	ctx.r3.s64 = 17;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// bl 0x82280c30
	ctx.lr = 0x82116B08;
	sub_82280C30(ctx, base);
loc_82116B08:
	// lwz r11,20(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 20);
	// stw r11,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r11.u32);
loc_82116B10:
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// bl 0x822b6fb0
	ctx.lr = 0x82116B18;
	sub_822B6FB0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r3.u32);
	// bne cr6,0x82116b9c
	if (!ctx.cr6.eq) goto loc_82116B9C;
	// lwz r11,31488(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 31488);
	// lbz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82116b94
	if (ctx.cr6.eq) goto loc_82116B94;
	// lwz r11,31484(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 31484);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r31,0(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lbz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82116b78
	if (ctx.cr6.eq) goto loc_82116B78;
	// bl 0x82332b28
	ctx.lr = 0x82116B50;
	sub_82332B28(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-15384
	ctx.r4.s64 = ctx.r11.s64 + -15384;
	// li r3,6
	ctx.r3.s64 = 6;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// bl 0x822830e8
	ctx.lr = 0x82116B68;
	sub_822830E8(ctx, base);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// stw r11,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_82116B78:
	// bl 0x82332b28
	ctx.lr = 0x82116B7C;
	sub_82332B28(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-15456
	ctx.r4.s64 = ctx.r11.s64 + -15456;
	// li r3,17
	ctx.r3.s64 = 17;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// bl 0x82280c30
	ctx.lr = 0x82116B94;
	sub_82280C30(ctx, base);
loc_82116B94:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// stw r11,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r11.u32);
loc_82116B9C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821168D8) {
	__imp__sub_821168D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82116BA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82116BA4) {
	__imp__sub_82116BA4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82116BA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf40
	ctx.lr = 0x82116BB0;
	__savegprlr_14(ctx, base);
	// stfd f29,-176(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -176, ctx.f29.u64);
	// stfd f30,-168(r1)
	PPC_STORE_U64(ctx.r1.u32 + -168, ctx.f30.u64);
	// stfd f31,-160(r1)
	PPC_STORE_U64(ctx.r1.u32 + -160, ctx.f31.u64);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	// stb r7,359(r1)
	PPC_STORE_U8(ctx.r1.u32 + 359, ctx.r7.u8);
	// mr r17,r4
	ctx.r17.u64 = ctx.r4.u64;
	// stb r8,367(r1)
	PPC_STORE_U8(ctx.r1.u32 + 367, ctx.r8.u8);
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82117060
	if (ctx.cr6.eq) goto loc_82117060;
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
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82332af8
	ctx.lr = 0x82116C00;
	sub_82332AF8(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// stw r25,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r25.u32);
	// bl 0x82333718
	ctx.lr = 0x82116C14;
	sub_82333718(ctx, base);
	// lwz r8,4(r25)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// rlwinm r29,r3,2,22,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0x3FC;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// clrlwi r28,r3,24
	ctx.r28.u64 = ctx.r3.u32 & 0xFF;
	// lwzx r7,r29,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r8.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82117060
	if (ctx.cr6.eq) goto loc_82117060;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x821168d8
	ctx.lr = 0x82116C3C;
	sub_821168D8(ctx, base);
	// lis r10,2
	ctx.r10.s64 = 131072;
	// mulli r11,r18,200
	ctx.r11.s64 = ctx.r18.s64 * 200;
	// ori r9,r10,19048
	ctx.r9.u64 = ctx.r10.u64 | 19048;
	// add r8,r11,r26
	ctx.r8.u64 = ctx.r11.u64 + ctx.r26.u64;
	// lis r7,-32188
	ctx.r7.s64 = -2109472768;
	// rlwinm r10,r8,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r11,r7,8672
	ctx.r11.s64 = ctx.r7.s64 + 8672;
	// lwzx r6,r31,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// li r24,0
	ctx.r24.s64 = 0;
	// add r14,r10,r11
	ctx.r14.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r6,r26
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x82116cb0
	if (!ctx.cr6.eq) goto loc_82116CB0;
	// lwz r11,0(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 0);
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x82116cb0
	if (!ctx.cr6.eq) goto loc_82116CB0;
	// lbz r11,12(r14)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r14.u32 + 12);
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x82116cb0
	if (!ctx.cr6.eq) goto loc_82116CB0;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x820da648
	ctx.lr = 0x82116C90;
	sub_820DA648(ctx, base);
	// lis r11,2
	ctx.r11.s64 = 131072;
	// ori r10,r11,19052
	ctx.r10.u64 = ctx.r11.u64 | 19052;
	// lwzx r9,r31,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// cmpw cr6,r9,r3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r3.s32, ctx.xer);
	// bne cr6,0x82116cb0
	if (!ctx.cr6.eq) goto loc_82116CB0;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x82116cb4
	goto loc_82116CB4;
loc_82116CB0:
	// stw r24,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r24.u32);
loc_82116CB4:
	// stw r27,0(r14)
	PPC_STORE_U32(ctx.r14.u32 + 0, ctx.r27.u32);
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// stb r30,12(r14)
	PPC_STORE_U8(ctx.r14.u32 + 12, ctx.r30.u8);
	// bl 0x82332c00
	ctx.lr = 0x82116CC4;
	sub_82332C00(ctx, base);
	// cmplw cr6,r26,r3
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82117060
	if (!ctx.cr6.eq) goto loc_82117060;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82117060
	if (ctx.cr6.eq) goto loc_82117060;
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// lwz r10,0(r14)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r14.u32 + 0);
	// lwz r9,4(r14)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r14.u32 + 4);
	// addi r23,r11,-25976
	ctx.r23.s64 = ctx.r11.s64 + -25976;
	// sth r24,100(r1)
	PPC_STORE_U16(ctx.r1.u32 + 100, ctx.r24.u16);
	// stb r24,102(r1)
	PPC_STORE_U8(ctx.r1.u32 + 102, ctx.r24.u8);
	// li r11,2
	ctx.r11.s64 = 2;
	// stb r24,110(r1)
	PPC_STORE_U8(ctx.r1.u32 + 110, ctx.r24.u8);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// lhz r10,220(r23)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r23.u32 + 220);
	// sth r10,108(r1)
	PPC_STORE_U16(ctx.r1.u32 + 108, ctx.r10.u16);
	// lwz r8,4(r25)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// lwzx r7,r29,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r8.u32);
	// stw r7,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r7.u32);
	// beq cr6,0x82116d44
	if (ctx.cr6.eq) goto loc_82116D44;
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// lwz r11,-19448(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19448);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82116d30
	if (ctx.cr6.eq) goto loc_82116D30;
	// lhz r11,236(r23)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r23.u32 + 236);
	// b 0x82116d34
	goto loc_82116D34;
loc_82116D30:
	// lhz r11,234(r23)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r23.u32 + 234);
loc_82116D34:
	// sth r11,116(r1)
	PPC_STORE_U16(ctx.r1.u32 + 116, ctx.r11.u16);
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// stb r24,118(r1)
	PPC_STORE_U8(ctx.r1.u32 + 118, ctx.r24.u8);
loc_82116D44:
	// addi r10,r18,1024
	ctx.r10.s64 = ctx.r18.s64 + 1024;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// rlwinm r20,r10,1,0,30
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r22,r11
	ctx.r22.u64 = ctx.r11.u64;
	// lfs f29,-23144(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -23144);
	ctx.f29.f64 = double(temp.f32);
	// lis r9,-32168
	ctx.r9.s64 = -2108162048;
	// lis r11,-32188
	ctx.r11.s64 = -2109472768;
	// lfs f31,12168(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 12168);
	ctx.f31.f64 = double(temp.f32);
	// addi r5,r10,-15508
	ctx.r5.s64 = ctx.r10.s64 + -15508;
	// lfs f30,5484(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 5484);
	ctx.f30.f64 = double(temp.f32);
	// mr r27,r24
	ctx.r27.u64 = ctx.r24.u64;
	// rlwinm r19,r18,1,0,30
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// li r15,-1
	ctx.r15.s64 = -1;
	// addi r21,r9,-30176
	ctx.r21.s64 = ctx.r9.s64 + -30176;
	// addi r16,r11,6264
	ctx.r16.s64 = ctx.r11.s64 + 6264;
loc_82116D90:
	// add r11,r19,r27
	ctx.r11.u64 = ctx.r19.u64 + ctx.r27.u64;
	// add r25,r20,r27
	ctx.r25.u64 = ctx.r20.u64 + ctx.r27.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r30,r11,r21
	ctx.r30.u64 = ctx.r11.u64 + ctx.r21.u64;
	// lwzx r10,r11,r21
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r21.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82116dc4
	if (ctx.cr6.eq) goto loc_82116DC4;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82284b00
	ctx.lr = 0x82116DC0;
	sub_82284B00(ctx, base);
	// stw r24,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r24.u32);
loc_82116DC4:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x820da648
	ctx.lr = 0x82116DD0;
	sub_820DA648(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82116df8
	if (!ctx.cr6.eq) goto loc_82116DF8;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x82116df8
	if (ctx.cr6.eq) goto loc_82116DF8;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82117054
	if (ctx.cr6.eq) goto loc_82117054;
	// bl 0x82282dd0
	ctx.lr = 0x82116DF0;
	sub_82282DD0(ctx, base);
	// stw r24,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r24.u32);
	// b 0x82117054
	goto loc_82117054;
loc_82116DF8:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82116e10
	if (ctx.cr6.eq) goto loc_82116E10;
	// lbz r10,367(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 367);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82116e24
	if (ctx.cr6.eq) goto loc_82116E24;
loc_82116E10:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82116e24
	if (ctx.cr6.eq) goto loc_82116E24;
	// bl 0x82282dd0
	ctx.lr = 0x82116E20;
	sub_82282DD0(ctx, base);
	// stw r24,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r24.u32);
loc_82116E24:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r28,r24
	ctx.r28.u64 = ctx.r24.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82116eb4
	if (!ctx.cr6.eq) goto loc_82116EB4;
	// rlwinm r11,r26,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r26,r11
	ctx.r11.u64 = ctx.r26.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r31,r11,r16
	ctx.r31.u64 = ctx.r11.u64 + ctx.r16.u64;
	// lwzx r10,r11,r16
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r16.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82116e68
	if (!ctx.cr6.eq) goto loc_82116E68;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82332b28
	ctx.lr = 0x82116E58;
	sub_82332B28(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x822830e8
	ctx.lr = 0x82116E68;
	sub_822830E8(ctx, base);
loc_82116E68:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x820da648
	ctx.lr = 0x82116E74;
	sub_820DA648(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82116ea4
	if (ctx.cr6.eq) goto loc_82116EA4;
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x823333f8
	ctx.lr = 0x82116E84;
	sub_823333F8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82116ea4
	if (ctx.cr6.eq) goto loc_82116EA4;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne cr6,0x82116e9c
	if (!ctx.cr6.eq) goto loc_82116E9C;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// b 0x82116ea8
	goto loc_82116EA8;
loc_82116E9C:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// b 0x82116ea8
	goto loc_82116EA8;
loc_82116EA4:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_82116EA8:
	// bl 0x82282dc0
	ctx.lr = 0x82116EAC;
	sub_82282DC0(ctx, base);
	// stw r3,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r3.u32);
	// li r28,1
	ctx.r28.s64 = 1;
loc_82116EB4:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r31,r22
	ctx.r31.u64 = ctx.r22.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82116ee8
	if (ctx.cr6.eq) goto loc_82116EE8;
	// lhz r10,194(r23)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r23.u32 + 194);
	// rlwinm r9,r22,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r8,r1,100
	ctx.r8.s64 = ctx.r1.s64 + 100;
	// addi r7,r1,102
	ctx.r7.s64 = ctx.r1.s64 + 102;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r31,r22,1
	ctx.r31.s64 = ctx.r22.s64 + 1;
	// sthx r10,r9,r8
	PPC_STORE_U16(ctx.r9.u32 + ctx.r8.u32, ctx.r10.u16);
	// stbx r24,r9,r7
	PPC_STORE_U8(ctx.r9.u32 + ctx.r7.u32, ctx.r24.u8);
	// stwx r11,r9,r6
	PPC_STORE_U32(ctx.r9.u32 + ctx.r6.u32, ctx.r11.u32);
loc_82116EE8:
	// lwz r29,8(r14)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r14.u32 + 8);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82116f3c
	if (ctx.cr6.eq) goto loc_82116F3C;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x820da648
	ctx.lr = 0x82116F00;
	sub_820DA648(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82116f18
	if (ctx.cr6.eq) goto loc_82116F18;
	// cmpwi cr6,r27,1
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 1, ctx.xer);
	// beq cr6,0x82116f18
	if (ctx.cr6.eq) goto loc_82116F18;
	// lhz r10,228(r23)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r23.u32 + 228);
	// b 0x82116f1c
	goto loc_82116F1C;
loc_82116F18:
	// lhz r10,226(r23)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r23.u32 + 226);
loc_82116F1C:
	// rlwinm r11,r31,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r9,r1,100
	ctx.r9.s64 = ctx.r1.s64 + 100;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// sthx r10,r11,r9
	PPC_STORE_U16(ctx.r11.u32 + ctx.r9.u32, ctx.r10.u16);
	// addi r10,r1,102
	ctx.r10.s64 = ctx.r1.s64 + 102;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// stbx r24,r11,r10
	PPC_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r24.u8);
	// stwx r29,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r29.u32);
loc_82116F3C:
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// clrlwi r4,r31,16
	ctx.r4.u64 = ctx.r31.u32 & 0xFFFF;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822848c8
	ctx.lr = 0x82116F54;
	sub_822848C8(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x8211700c
	if (ctx.cr6.eq) goto loc_8211700C;
	// stw r15,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r15.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x822f4c70
	ctx.lr = 0x82116F74;
	sub_822F4C70(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// li r4,0
	ctx.r4.s64 = 0;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x822f7488
	ctx.lr = 0x82116F98;
	sub_822F7488(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// li r4,1
	ctx.r4.s64 = 1;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x822f7488
	ctx.lr = 0x82116FBC;
	sub_822F7488(ctx, base);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r5,36
	ctx.r5.s64 = 36;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x82333410
	ctx.lr = 0x82116FD0;
	sub_82333410(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8211700c
	if (ctx.cr6.eq) goto loc_8211700C;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r9,1
	ctx.r9.s64 = 1;
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// li r8,0
	ctx.r8.s64 = 0;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// li r4,36
	ctx.r4.s64 = 36;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x822f7488
	ctx.lr = 0x82116FFC;
	sub_822F7488(ctx, base);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x822f5540
	ctx.lr = 0x8211700C;
	sub_822F5540(ctx, base);
loc_8211700C:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82332af8
	ctx.lr = 0x82117014;
	sub_82332AF8(ctx, base);
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bne cr6,0x82117030
	if (!ctx.cr6.eq) goto loc_82117030;
	// lwz r4,696(r17)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r17.u32 + 696);
	// b 0x82117034
	goto loc_82117034;
loc_82117030:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
loc_82117034:
	// bl 0x82116880
	ctx.lr = 0x82117038;
	sub_82116880(ctx, base);
	// lbz r10,359(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 359);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82117054
	if (ctx.cr6.eq) goto loc_82117054;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x822f7e70
	ctx.lr = 0x82117054;
	sub_822F7E70(ctx, base);
loc_82117054:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmpwi cr6,r27,2
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 2, ctx.xer);
	// blt cr6,0x82116d90
	if (ctx.cr6.lt) goto loc_82116D90;
loc_82117060:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
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

PPC_WEAK_FUNC(sub_82116BA8) {
	__imp__sub_82116BA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82117074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82117074) {
	__imp__sub_82117074(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82117078) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82117080;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,480(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 480);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82117130
	if (ctx.cr6.eq) goto loc_82117130;
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// addi r9,r11,-15680
	ctx.r9.s64 = ctx.r11.s64 + -15680;
	// ori r8,r10,61924
	ctx.r8.u64 = ctx.r10.u64 | 61924;
	// addis r10,r9,1
	ctx.r10.s64 = ctx.r9.s64 + 65536;
	// mullw r11,r3,r8
	ctx.r11.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r8.s32);
	// addi r10,r10,22924
	ctx.r10.s64 = ctx.r10.s64 + 22924;
	// add r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,692(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 692);
	// bl 0x820da6b8
	ctx.lr = 0x821170C4;
	sub_820DA6B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821170d8
	if (ctx.cr6.eq) goto loc_821170D8;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_821170D8:
	// addi r11,r30,18
	ctx.r11.s64 = ctx.r30.s64 + 18;
	// mulli r10,r11,28
	ctx.r10.s64 = ctx.r11.s64 * 28;
	// lwzx r11,r10,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// beq cr6,0x8211710c
	if (ctx.cr6.eq) goto loc_8211710C;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// beq cr6,0x8211710c
	if (ctx.cr6.eq) goto loc_8211710C;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// beq cr6,0x8211710c
	if (ctx.cr6.eq) goto loc_8211710C;
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// beq cr6,0x8211710c
	if (ctx.cr6.eq) goto loc_8211710C;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// bne cr6,0x82117130
	if (!ctx.cr6.eq) goto loc_82117130;
loc_8211710C:
	// mulli r11,r30,28
	ctx.r11.s64 = ctx.r30.s64 * 28;
	// lwz r10,620(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 620);
	// lwz r9,624(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 624);
	// add r8,r11,r31
	ctx.r8.u64 = ctx.r11.u64 + ctx.r31.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r7,492(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 492);
	// subf r6,r7,r10
	ctx.r6.s64 = ctx.r10.s64 - ctx.r7.s64;
	// cmpw cr6,r6,r9
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r9.s32, ctx.xer);
	// bgt cr6,0x82117134
	if (ctx.cr6.gt) goto loc_82117134;
loc_82117130:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82117134:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82117078) {
	__imp__sub_82117078(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8211713C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8211713C) {
	__imp__sub_8211713C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82117140) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,484(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 484);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82117154
	if (!ctx.cr6.eq) goto loc_82117154;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82117154:
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// addi r9,r11,-15680
	ctx.r9.s64 = ctx.r11.s64 + -15680;
	// ori r8,r10,61924
	ctx.r8.u64 = ctx.r10.u64 | 61924;
	// addis r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 65536;
	// mullw r7,r3,r8
	ctx.r7.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r8.s32);
	// addi r6,r11,23412
	ctx.r6.s64 = ctx.r11.s64 + 23412;
	// lwzx r5,r7,r6
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	// rlwinm r11,r5,0,23,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFFFFFFFFDFF;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// beq cr6,0x8211718c
	if (ctx.cr6.eq) goto loc_8211718C;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_8211718C:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82117140) {
	__imp__sub_82117140(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82117194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82117194) {
	__imp__sub_82117194(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82117198) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf64
	ctx.lr = 0x821171A0;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r25,0
	ctx.r25.s64 = 0;
	// li r23,0
	ctx.r23.s64 = 0;
	// bl 0x82332af8
	ctx.lr = 0x821171C4;
	sub_82332AF8(ctx, base);
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// mulli r10,r30,200
	ctx.r10.s64 = ctx.r30.s64 * 200;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// add r8,r10,r31
	ctx.r8.u64 = ctx.r10.u64 + ctx.r31.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r7,-32188
	ctx.r7.s64 = -2109472768;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lis r5,-32168
	ctx.r5.s64 = -2108162048;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r9,r7,8672
	ctx.r9.s64 = ctx.r7.s64 + 8672;
	// addi r10,r5,-30176
	ctx.r10.s64 = ctx.r5.s64 + -30176;
	// rlwinm r8,r8,5,0,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// add r27,r8,r9
	ctx.r27.u64 = ctx.r8.u64 + ctx.r9.u64;
	// add r24,r11,r10
	ctx.r24.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// bl 0x82114498
	ctx.lr = 0x8211720C;
	sub_82114498(ctx, base);
	// clrlwi r4,r3,24
	ctx.r4.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82117240
	if (ctx.cr6.eq) goto loc_82117240;
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// lwz r11,-19448(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19448);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82117234
	if (ctx.cr6.eq) goto loc_82117234;
	// lwz r28,484(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 484);
	// b 0x82117240
	goto loc_82117240;
loc_82117234:
	// lis r11,-32181
	ctx.r11.s64 = -2109014016;
	// addi r10,r11,-22896
	ctx.r10.s64 = ctx.r11.s64 + -22896;
	// lwz r28,16124(r10)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16124);
loc_82117240:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82117078
	ctx.lr = 0x82117250;
	sub_82117078(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82117260
	if (ctx.cr6.eq) goto loc_82117260;
	// lwz r25,480(r31)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r31.u32 + 480);
loc_82117260:
	// lwz r10,484(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 484);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82117274
	if (!ctx.cr6.eq) goto loc_82117274;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x821172b0
	goto loc_821172B0;
loc_82117274:
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// lis r9,2
	ctx.r9.s64 = 131072;
	// addi r8,r11,-15680
	ctx.r8.s64 = ctx.r11.s64 + -15680;
	// ori r7,r9,61924
	ctx.r7.u64 = ctx.r9.u64 | 61924;
	// addis r11,r8,1
	ctx.r11.s64 = ctx.r8.s64 + 65536;
	// mullw r6,r30,r7
	ctx.r6.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r7.s32);
	// addi r5,r11,23412
	ctx.r5.s64 = ctx.r11.s64 + 23412;
	// lwzx r4,r6,r5
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r5.u32);
	// rlwinm r11,r4,0,23,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFFFFFFFDFF;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// beq cr6,0x821172ac
	if (ctx.cr6.eq) goto loc_821172AC;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x821172b0
	if (!ctx.cr6.eq) goto loc_821172B0;
loc_821172AC:
	// li r11,1
	ctx.r11.s64 = 1;
loc_821172B0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821172c0
	if (ctx.cr6.eq) goto loc_821172C0;
	// mr r23,r10
	ctx.r23.u64 = ctx.r10.u64;
loc_821172C0:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x821172d4
	if (ctx.cr6.eq) goto loc_821172D4;
	// stw r28,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r28.u32);
	// li r26,1
	ctx.r26.s64 = 1;
loc_821172D4:
	// lwz r11,8(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// cmplw cr6,r25,r11
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x821172e8
	if (ctx.cr6.eq) goto loc_821172E8;
	// stw r25,8(r24)
	PPC_STORE_U32(ctx.r24.u32 + 8, ctx.r25.u32);
	// li r26,1
	ctx.r26.s64 = 1;
loc_821172E8:
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// cmplw cr6,r23,r11
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x821172fc
	if (ctx.cr6.eq) goto loc_821172FC;
	// stw r23,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r23.u32);
	// li r26,1
	ctx.r26.s64 = 1;
loc_821172FC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8210fc78
	ctx.lr = 0x82117304;
	sub_8210FC78(ctx, base);
	// lbz r10,13(r27)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r27.u32 + 13);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82117328
	if (ctx.cr6.eq) goto loc_82117328;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,13(r27)
	PPC_STORE_U8(ctx.r27.u32 + 13, ctx.r11.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
loc_82117328:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82117198) {
	__imp__sub_82117198(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82117334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82117334) {
	__imp__sub_82117334(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82117338) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x82117340;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// addi r9,r11,-15680
	ctx.r9.s64 = ctx.r11.s64 + -15680;
	// ori r8,r10,61924
	ctx.r8.u64 = ctx.r10.u64 | 61924;
	// addis r10,r9,1
	ctx.r10.s64 = ctx.r9.s64 + 65536;
	// mullw r11,r3,r8
	ctx.r11.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r8.s32);
	// addi r10,r10,22924
	ctx.r10.s64 = ctx.r10.s64 + 22924;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// add r29,r11,r10
	ctx.r29.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lis r11,-32188
	ctx.r11.s64 = -2109472768;
	// li r27,15
	ctx.r27.s64 = 15;
	// addi r30,r29,606
	ctx.r30.s64 = ctx.r29.s64 + 606;
	// addi r28,r29,544
	ctx.r28.s64 = ctx.r29.s64 + 544;
	// addi r26,r11,8672
	ctx.r26.s64 = ctx.r11.s64 + 8672;
loc_8211737C:
	// lwz r5,0(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x821173c0
	if (ctx.cr6.eq) goto loc_821173C0;
	// mulli r11,r31,200
	ctx.r11.s64 = ctx.r31.s64 * 200;
	// lbz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// add r9,r11,r5
	ctx.r9.u64 = ctx.r11.u64 + ctx.r5.u64;
	// rlwinm r11,r9,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// lbz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x821173c0
	if (ctx.cr6.eq) goto loc_821173C0;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82116ba8
	ctx.lr = 0x821173C0;
	sub_82116BA8(ctx, base);
loc_821173C0:
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// addi r30,r30,5
	ctx.r30.s64 = ctx.r30.s64 + 5;
	// bne 0x8211737c
	if (!ctx.cr0.eq) goto loc_8211737C;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82117338) {
	__imp__sub_82117338(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821173D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x821173E0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82117450
	if (ctx.cr6.eq) goto loc_82117450;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x82332af8
	ctx.lr = 0x82117404;
	sub_82332AF8(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82117450
	if (ctx.cr6.eq) goto loc_82117450;
	// mulli r11,r30,200
	ctx.r11.s64 = ctx.r30.s64 * 200;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lis r10,-32188
	ctx.r10.s64 = -2109472768;
	// rlwinm r9,r11,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r8,r10,8672
	ctx.r8.s64 = ctx.r10.s64 + 8672;
	// lwzx r7,r9,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// cmplw cr6,r7,r29
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x82117450
	if (ctx.cr6.eq) goto loc_82117450;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82116ba8
	ctx.lr = 0x82117450;
	sub_82116BA8(ctx, base);
loc_82117450:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821173D8) {
	__imp__sub_821173D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82117458) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x82117460;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// addi r9,r11,-15680
	ctx.r9.s64 = ctx.r11.s64 + -15680;
	// ori r8,r10,61924
	ctx.r8.u64 = ctx.r10.u64 | 61924;
	// addis r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 65536;
	// mullw r10,r3,r8
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r8.s32);
	// addi r11,r11,22924
	ctx.r11.s64 = ctx.r11.s64 + 22924;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// add r28,r10,r11
	ctx.r28.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lis r11,-32188
	ctx.r11.s64 = -2109472768;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r25,15
	ctx.r25.s64 = 15;
	// addi r27,r28,544
	ctx.r27.s64 = ctx.r28.s64 + 544;
	// addi r26,r11,8672
	ctx.r26.s64 = ctx.r11.s64 + 8672;
loc_8211749C:
	// lwz r31,0(r27)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821174f4
	if (ctx.cr6.eq) goto loc_821174F4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332af8
	ctx.lr = 0x821174B0;
	sub_82332AF8(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821174f4
	if (ctx.cr6.eq) goto loc_821174F4;
	// mulli r11,r30,200
	ctx.r11.s64 = ctx.r30.s64 * 200;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// rlwinm r10,r11,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// lwzx r9,r10,r26
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r26.u32);
	// cmplw cr6,r9,r29
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x821174f4
	if (ctx.cr6.eq) goto loc_821174F4;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82116ba8
	ctx.lr = 0x821174F4;
	sub_82116BA8(ctx, base);
loc_821174F4:
	// addic. r25,r25,-1
	ctx.xer.ca = ctx.r25.u32 > 0;
	ctx.r25.s64 = ctx.r25.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// bne 0x8211749c
	if (!ctx.cr0.eq) goto loc_8211749C;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82333f48
	ctx.lr = 0x82117508;
	sub_82333F48(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8211756c
	if (ctx.cr6.eq) goto loc_8211756C;
	// lwz r31,680(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 680);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8211756c
	if (ctx.cr6.eq) goto loc_8211756C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332af8
	ctx.lr = 0x82117528;
	sub_82332AF8(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8211756c
	if (ctx.cr6.eq) goto loc_8211756C;
	// mulli r11,r30,200
	ctx.r11.s64 = ctx.r30.s64 * 200;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// rlwinm r10,r11,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// lwzx r9,r10,r26
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r26.u32);
	// cmplw cr6,r9,r29
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x8211756c
	if (ctx.cr6.eq) goto loc_8211756C;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82116ba8
	ctx.lr = 0x8211756C;
	sub_82116BA8(ctx, base);
loc_8211756C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82117458) {
	__imp__sub_82117458(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82117574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82117574) {
	__imp__sub_82117574(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82117578) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82117580;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,24(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 24);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82117600
	if (ctx.cr6.eq) goto loc_82117600;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x822a1838
	ctx.lr = 0x821175A4;
	sub_822A1838(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82117600
	if (ctx.cr6.eq) goto loc_82117600;
	// li r31,0
	ctx.r31.s64 = 0;
loc_821175B4:
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lhzx r11,r31,r11
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82117600
	if (ctx.cr6.eq) goto loc_82117600;
	// lwz r10,28(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// lhzx r3,r10,r31
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r31.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821175f4
	if (ctx.cr6.eq) goto loc_821175F4;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x821175f4
	if (!ctx.cr6.eq) goto loc_821175F4;
	// bl 0x822a13a0
	ctx.lr = 0x821175E0;
	sub_822A13A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821175f4
	if (ctx.cr6.eq) goto loc_821175F4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x820f9a10
	ctx.lr = 0x821175F4;
	sub_820F9A10(ctx, base);
loc_821175F4:
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// cmpwi cr6,r31,32
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 32, ctx.xer);
	// blt cr6,0x821175b4
	if (ctx.cr6.lt) goto loc_821175B4;
loc_82117600:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82117578) {
	__imp__sub_82117578(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82117608) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82117610;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,32(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82117690
	if (ctx.cr6.eq) goto loc_82117690;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x822a1838
	ctx.lr = 0x82117634;
	sub_822A1838(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82117690
	if (ctx.cr6.eq) goto loc_82117690;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82117644:
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// lhzx r11,r31,r11
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82117690
	if (ctx.cr6.eq) goto loc_82117690;
	// lwz r10,36(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// lhzx r3,r10,r31
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r31.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82117684
	if (ctx.cr6.eq) goto loc_82117684;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x82117684
	if (!ctx.cr6.eq) goto loc_82117684;
	// bl 0x822a13a0
	ctx.lr = 0x82117670;
	sub_822A13A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82117684
	if (ctx.cr6.eq) goto loc_82117684;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82104be8
	ctx.lr = 0x82117684;
	sub_82104BE8(ctx, base);
loc_82117684:
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// cmpwi cr6,r31,32
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 32, ctx.xer);
	// blt cr6,0x82117644
	if (ctx.cr6.lt) goto loc_82117644;
loc_82117690:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82117608) {
	__imp__sub_82117608(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82117698) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x821176A0;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82332c00
	ctx.lr = 0x821176B4;
	sub_82332C00(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82117778
	if (ctx.cr6.eq) goto loc_82117778;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332c28
	ctx.lr = 0x821176C8;
	sub_82332C28(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822f4350
	ctx.lr = 0x821176D4;
	sub_822F4350(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x82117778
	if (!ctx.cr6.gt) goto loc_82117778;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lis r26,-32167
	ctx.r26.s64 = -2108096512;
	// addi r30,r10,-15104
	ctx.r30.s64 = ctx.r10.s64 + -15104;
	// addi r27,r11,-15108
	ctx.r27.s64 = ctx.r11.s64 + -15108;
loc_821176F8:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwzx r3,r31,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// bl 0x822e8058
	ctx.lr = 0x82117708;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8211776c
	if (ctx.cr6.eq) goto loc_8211776C;
	// lwz r11,-11216(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -11216);
	// lbz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82117744
	if (ctx.cr6.eq) goto loc_82117744;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,14
	ctx.r3.s64 = 14;
	// add r10,r31,r11
	ctx.r10.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lwzx r6,r31,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// lfs f1,8(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// stfd f1,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x82280900
	ctx.lr = 0x82117744;
	sub_82280900(ctx, base);
loc_82117744:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwzx r4,r31,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// bl 0x82117578
	ctx.lr = 0x82117758;
	sub_82117578(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwzx r4,r31,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// bl 0x82117608
	ctx.lr = 0x8211776C;
	sub_82117608(ctx, base);
loc_8211776C:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// bne 0x821176f8
	if (!ctx.cr0.eq) goto loc_821176F8;
loc_82117778:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82117698) {
	__imp__sub_82117698(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82117780) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82117788;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
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
	// mullw r9,r4,r9
	ctx.r9.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r9.s32);
	// add r30,r9,r11
	ctx.r30.u64 = ctx.r9.u64 + ctx.r11.u64;
	// li r10,40
	ctx.r10.s64 = 40;
	// addis r9,r30,2
	ctx.r9.s64 = ctx.r30.s64 + 131072;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r9,18650
	ctx.r9.s64 = ctx.r9.s64 + 18650;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_821177BC:
	// lhz r8,-2(r9)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r9.u32 + -2);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x821177cc
	if (ctx.cr6.eq) goto loc_821177CC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_821177CC:
	// lhz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r9.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x821177dc
	if (ctx.cr6.eq) goto loc_821177DC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_821177DC:
	// lhz r8,2(r9)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r9.u32 + 2);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x821177ec
	if (ctx.cr6.eq) goto loc_821177EC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_821177EC:
	// lhz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r9.u32 + 4);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x821177fc
	if (ctx.cr6.eq) goto loc_821177FC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_821177FC:
	// lhz r8,6(r9)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r9.u32 + 6);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8211780c
	if (ctx.cr6.eq) goto loc_8211780C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_8211780C:
	// addi r9,r9,10
	ctx.r9.s64 = ctx.r9.s64 + 10;
	// bdnz 0x821177bc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821177BC;
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822e40f0
	ctx.lr = 0x82117828;
	sub_822E40F0(ctx, base);
	// addis r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 131072;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r30,r30,18648
	ctx.r30.s64 = ctx.r30.s64 + 18648;
loc_82117834:
	// lhz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82117868
	if (ctx.cr6.eq) goto loc_82117868;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332b28
	ctx.lr = 0x82117848;
	sub_82332B28(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822e42f8
	ctx.lr = 0x82117854;
	sub_822E42F8(ctx, base);
	// lhz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// bl 0x82332b28
	ctx.lr = 0x8211785C;
	sub_82332B28(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822e42f8
	ctx.lr = 0x82117868;
	sub_822E42F8(ctx, base);
loc_82117868:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// cmpwi cr6,r31,200
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 200, ctx.xer);
	// blt cr6,0x82117834
	if (ctx.cr6.lt) goto loc_82117834;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82117780) {
	__imp__sub_82117780(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82117880) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x82117888;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x8223c4d8
	ctx.lr = 0x82117894;
	sub_8223C4D8(ctx, base);
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lis r10,-32187
	ctx.r10.s64 = -2109407232;
	// ori r9,r11,61924
	ctx.r9.u64 = ctx.r11.u64 | 61924;
	// addi r11,r10,-15680
	ctx.r11.s64 = ctx.r10.s64 + -15680;
	// mullw r10,r31,r9
	ctx.r10.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r9.s32);
	// add r28,r10,r11
	ctx.r28.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addis r3,r28,2
	ctx.r3.s64 = ctx.r28.s64 + 131072;
	// li r5,400
	ctx.r5.s64 = 400;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,18648
	ctx.r3.s64 = ctx.r3.s64 + 18648;
	// bl 0x823de090
	ctx.lr = 0x821178C4;
	sub_823DE090(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822e4480
	ctx.lr = 0x821178D4;
	sub_822E4480(ctx, base);
	// lhz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8211793c
	if (!ctx.cr6.gt) goto loc_8211793C;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r29,r11,9324
	ctx.r29.u64 = ctx.r11.u64 | 9324;
loc_821178EC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822e4998
	ctx.lr = 0x821178F4;
	sub_822E4998(ctx, base);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// addi r4,r11,-30736
	ctx.r4.s64 = ctx.r11.s64 + -30736;
	// bl 0x82333200
	ctx.lr = 0x82117900;
	sub_82333200(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822e4998
	ctx.lr = 0x8211790C;
	sub_822E4998(ctx, base);
	// lis r10,-32224
	ctx.r10.s64 = -2111832064;
	// addi r4,r10,-30736
	ctx.r4.s64 = ctx.r10.s64 + -30736;
	// bl 0x82333200
	ctx.lr = 0x82117918;
	sub_82333200(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x82117934
	if (ctx.cr6.eq) goto loc_82117934;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82117934
	if (ctx.cr6.eq) goto loc_82117934;
	// add r11,r31,r29
	ctx.r11.u64 = ctx.r31.u64 + ctx.r29.u64;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r3,r9,r28
	PPC_STORE_U16(ctx.r9.u32 + ctx.r28.u32, ctx.r3.u16);
loc_82117934:
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne 0x821178ec
	if (!ctx.cr0.eq) goto loc_821178EC;
loc_8211793C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82117880) {
	__imp__sub_82117880(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82117944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82117944) {
	__imp__sub_82117944(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82117948) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82117950;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r9,-32168
	ctx.r9.s64 = -2108162048;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r9,-30176
	ctx.r11.s64 = ctx.r9.s64 + -30176;
	// li r30,2
	ctx.r30.s64 = 2;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r28,r11,-15072
	ctx.r28.s64 = ctx.r11.s64 + -15072;
loc_8211797C:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821179ac
	if (ctx.cr6.eq) goto loc_821179AC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821179a0
	if (!ctx.cr6.eq) goto loc_821179A0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822830e8
	ctx.lr = 0x821179A0;
	sub_822830E8(ctx, base);
loc_821179A0:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x822ff488
	ctx.lr = 0x821179AC;
	sub_822FF488(ctx, base);
loc_821179AC:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,20
	ctx.r31.s64 = ctx.r31.s64 + 20;
	// bne 0x8211797c
	if (!ctx.cr0.eq) goto loc_8211797C;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82117948) {
	__imp__sub_82117948(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821179C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x821179C8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x8223c4d8
	ctx.lr = 0x821179D8;
	sub_8223C4D8(ctx, base);
	// lwz r11,260(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 260);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82117a7c
	if (!ctx.cr6.gt) goto loc_82117A7C;
	// addi r3,r11,1208
	ctx.r3.s64 = ctx.r11.s64 + 1208;
	// bl 0x821201a0
	ctx.lr = 0x821179F0;
	sub_821201A0(ctx, base);
	// bl 0x82393fe8
	ctx.lr = 0x821179F4;
	sub_82393FE8(ctx, base);
	// lwz r5,692(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 692);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82117a7c
	if (ctx.cr6.eq) goto loc_82117A7C;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// add r10,r31,r10
	ctx.r10.u64 = ctx.r31.u64 + ctx.r10.u64;
	// addi r30,r11,-30176
	ctx.r30.s64 = ctx.r11.s64 + -30176;
	// rlwinm r29,r10,3,0,28
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r9,r30,16
	ctx.r9.s64 = ctx.r30.s64 + 16;
	// lwzx r8,r29,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r9.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82117a3c
	if (ctx.cr6.eq) goto loc_82117A3C;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82116ba8
	ctx.lr = 0x82117A3C;
	sub_82116BA8(ctx, base);
loc_82117A3C:
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// li r30,2
	ctx.r30.s64 = 2;
	// add r31,r29,r11
	ctx.r31.u64 = ctx.r29.u64 + ctx.r11.u64;
loc_82117A48:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82117a70
	if (ctx.cr6.eq) goto loc_82117A70;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82117a64
	if (ctx.cr6.eq) goto loc_82117A64;
	// bl 0x822f4f68
	ctx.lr = 0x82117A64;
	sub_822F4F68(ctx, base);
loc_82117A64:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,-4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// bl 0x822ff378
	ctx.lr = 0x82117A70;
	sub_822FF378(ctx, base);
loc_82117A70:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,20
	ctx.r31.s64 = ctx.r31.s64 + 20;
	// bne 0x82117a48
	if (!ctx.cr0.eq) goto loc_82117A48;
loc_82117A7C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821179C0) {
	__imp__sub_821179C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82117A84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82117A84) {
	__imp__sub_82117A84(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82117A88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x82117A90;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
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
	// add r29,r10,r11
	ctx.r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r27,40(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// bl 0x822e4928
	ctx.lr = 0x82117AC0;
	sub_822E4928(ctx, base);
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r8,-32168
	ctx.r8.s64 = -2108162048;
	// add r7,r30,r11
	ctx.r7.u64 = ctx.r30.u64 + ctx.r11.u64;
	// addi r10,r8,-30176
	ctx.r10.s64 = ctx.r8.s64 + -30176;
	// rlwinm r11,r7,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// clrlwi r26,r3,24
	ctx.r26.u64 = ctx.r3.u32 & 0xFF;
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r28,2
	ctx.r28.s64 = 2;
loc_82117AE4:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82117b10
	if (ctx.cr6.eq) goto loc_82117B10;
	// lwz r11,692(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 692);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82117b08
	if (ctx.cr6.eq) goto loc_82117B08;
	// lwz r11,-12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82117b0c
	if (!ctx.cr6.eq) goto loc_82117B0C;
loc_82117B08:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82117B0C:
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_82117B10:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82117B28;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r5,r30,-4
	ctx.r5.s64 = ctx.r30.s64 + -4;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82117B40;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r30,r30,20
	ctx.r30.s64 = ctx.r30.s64 + 20;
	// bne 0x82117ae4
	if (!ctx.cr0.eq) goto loc_82117AE4;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addis r5,r29,2
	ctx.r5.s64 = ctx.r29.s64 + 131072;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r5,r5,18632
	ctx.r5.s64 = ctx.r5.s64 + 18632;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82117B68;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addis r5,r29,2
	ctx.r5.s64 = ctx.r29.s64 + 131072;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r5,r5,18636
	ctx.r5.s64 = ctx.r5.s64 + 18636;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82117B84;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addis r5,r29,2
	ctx.r5.s64 = ctx.r29.s64 + 131072;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r5,r5,19056
	ctx.r5.s64 = ctx.r5.s64 + 19056;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82117BA0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,32(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addis r5,r29,2
	ctx.r5.s64 = ctx.r29.s64 + 131072;
	// li r4,816
	ctx.r4.s64 = 816;
	// addi r5,r5,19060
	ctx.r5.s64 = ctx.r5.s64 + 19060;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82117BBC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,32(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addis r5,r29,3
	ctx.r5.s64 = ctx.r29.s64 + 196608;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r5,r5,-7372
	ctx.r5.s64 = ctx.r5.s64 + -7372;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82117BD8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r6,32(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addis r5,r29,3
	ctx.r5.s64 = ctx.r29.s64 + 196608;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r5,r5,-7368
	ctx.r5.s64 = ctx.r5.s64 + -7368;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82117BF4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addis r5,r29,3
	ctx.r5.s64 = ctx.r29.s64 + 196608;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r5,r5,-7364
	ctx.r5.s64 = ctx.r5.s64 + -7364;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82117C10;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addis r5,r29,3
	ctx.r5.s64 = ctx.r29.s64 + 196608;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r5,r5,-7360
	ctx.r5.s64 = ctx.r5.s64 + -7360;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82117C2C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82117A88) {
	__imp__sub_82117A88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82117C34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82117C34) {
	__imp__sub_82117C34(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82117C38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82117C40;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,3016
	ctx.r3.s64 = 3016;
	// bl 0x821201a0
	ctx.lr = 0x82117C50;
	sub_821201A0(ctx, base);
	// bl 0x823deaf8
	ctx.lr = 0x82117C54;
	sub_823DEAF8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r31,1
	ctx.r31.s64 = 1;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// ble cr6,0x82117c7c
	if (!ctx.cr6.gt) goto loc_82117C7C;
loc_82117C64:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821168d8
	ctx.lr = 0x82117C70;
	sub_821168D8(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r30
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r30.s32, ctx.xer);
	// blt cr6,0x82117c64
	if (ctx.cr6.lt) goto loc_82117C64;
loc_82117C7C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82117C38) {
	__imp__sub_82117C38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82117C84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82117C84) {
	__imp__sub_82117C84(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82117C88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// addis r8,r3,1
	ctx.r8.s64 = ctx.r3.s64 + 65536;
	// ori r9,r11,19912
	ctx.r9.u64 = ctx.r11.u64 | 19912;
	// addi r8,r8,22924
	ctx.r8.s64 = ctx.r8.s64 + 22924;
	// ori r7,r10,22908
	ctx.r7.u64 = ctx.r10.u64 | 22908;
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r5,2
	ctx.r5.s64 = 131072;
	// lfsx f0,r3,r9
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r9.u32);
	ctx.f0.f64 = double(temp.f32);
	// addis r11,r3,2
	ctx.r11.s64 = ctx.r3.s64 + 131072;
	// stfs f0,4(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// ori r10,r5,19904
	ctx.r10.u64 = ctx.r5.u64 | 19904;
	// lwzx r9,r3,r7
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r7.u32);
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// std r8,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r8.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lfs f0,5804(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 5804);
	ctx.f0.f64 = double(temp.f32);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// addi r11,r11,19892
	ctx.r11.s64 = ctx.r11.s64 + 19892;
	// lis r7,2
	ctx.r7.s64 = 131072;
	// stw r11,32(r4)
	PPC_STORE_U32(ctx.r4.u32 + 32, ctx.r11.u32);
	// lis r6,2
	ctx.r6.s64 = 131072;
	// ori r5,r7,19908
	ctx.r5.u64 = ctx.r7.u64 | 19908;
	// ori r9,r6,58120
	ctx.r9.u64 = ctx.r6.u64 | 58120;
	// lis r8,2
	ctx.r8.s64 = 131072;
	// lis r7,2
	ctx.r7.s64 = 131072;
	// ori r6,r8,58124
	ctx.r6.u64 = ctx.r8.u64 | 58124;
	// ori r8,r7,58116
	ctx.r8.u64 = ctx.r7.u64 | 58116;
	// addis r11,r3,2
	ctx.r11.s64 = ctx.r3.s64 + 131072;
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f10,8(r4)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// lfsx f9,r3,r10
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	ctx.f9.f64 = double(temp.f32);
	// addi r11,r11,1988
	ctx.r11.s64 = ctx.r11.s64 + 1988;
	// stfs f9,24(r4)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r4.u32 + 24, temp.u32);
	// lfsx f8,r3,r5
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r5.u32);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,28(r4)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r4.u32 + 28, temp.u32);
	// lwzx r7,r3,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r9.u32);
	// stw r7,132(r4)
	PPC_STORE_U32(ctx.r4.u32 + 132, ctx.r7.u32);
	// lwzx r6,r3,r6
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r6.u32);
	// stw r6,136(r4)
	PPC_STORE_U32(ctx.r4.u32 + 136, ctx.r6.u32);
	// lwzx r10,r3,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r8.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82117d48
	if (ctx.cr6.eq) goto loc_82117D48;
	// lwz r10,20(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// b 0x82117d4c
	goto loc_82117D4C;
loc_82117D48:
	// li r10,3000
	ctx.r10.s64 = 3000;
loc_82117D4C:
	// stw r10,140(r4)
	PPC_STORE_U32(ctx.r4.u32 + 140, ctx.r10.u32);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lis r9,2
	ctx.r9.s64 = 131072;
	// ori r8,r10,22912
	ctx.r8.u64 = ctx.r10.u64 | 22912;
	// ori r7,r9,19876
	ctx.r7.u64 = ctx.r9.u64 | 19876;
	// addis r6,r3,2
	ctx.r6.s64 = ctx.r3.s64 + 131072;
	// addis r5,r3,2
	ctx.r5.s64 = ctx.r3.s64 + 131072;
	// addi r6,r6,18440
	ctx.r6.s64 = ctx.r6.s64 + 18440;
	// lwzx r9,r3,r8
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r8.u32);
	// addi r5,r5,18452
	ctx.r5.s64 = ctx.r5.s64 + 18452;
	// stw r9,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, ctx.r9.u32);
	// addis r10,r3,2
	ctx.r10.s64 = ctx.r3.s64 + 131072;
	// lwzx r7,r3,r7
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r7.u32);
	// addi r10,r10,18416
	ctx.r10.s64 = ctx.r10.s64 + 18416;
	// stw r7,20(r4)
	PPC_STORE_U32(ctx.r4.u32 + 20, ctx.r7.u32);
	// addis r8,r3,2
	ctx.r8.s64 = ctx.r3.s64 + 131072;
	// lfs f0,0(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r8,r8,18428
	ctx.r8.s64 = ctx.r8.s64 + 18428;
	// stfs f0,60(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 60, temp.u32);
	// addis r31,r3,2
	ctx.r31.s64 = ctx.r3.s64 + 131072;
	// lfs f13,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r31,r31,18404
	ctx.r31.s64 = ctx.r31.s64 + 18404;
	// stfs f13,64(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 64, temp.u32);
	// lfs f12,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,68(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 68, temp.u32);
	// lfs f11,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,72(r4)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r4.u32 + 72, temp.u32);
	// lfs f10,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,76(r4)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r4.u32 + 76, temp.u32);
	// lfs f9,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,80(r4)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r4.u32 + 80, temp.u32);
	// lfs f8,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,84(r4)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r4.u32 + 84, temp.u32);
	// lfs f7,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,88(r4)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r4.u32 + 88, temp.u32);
	// lfs f6,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,92(r4)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r4.u32 + 92, temp.u32);
	// lfs f5,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,96(r4)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r4.u32 + 96, temp.u32);
	// lfs f4,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,100(r4)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r4.u32 + 100, temp.u32);
	// lfs f3,8(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,104(r4)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r4.u32 + 104, temp.u32);
	// lfs f2,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,108(r4)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r4.u32 + 108, temp.u32);
	// lfs f1,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,112(r4)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r4.u32 + 112, temp.u32);
	// lfs f0,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,116(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 116, temp.u32);
	// lfs f13,44(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,12(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 12, temp.u32);
	// lfs f12,60(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,36(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 36, temp.u32);
	// lfs f11,64(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,40(r4)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r4.u32 + 40, temp.u32);
	// lfs f10,68(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,44(r4)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r4.u32 + 44, temp.u32);
	// lfs f9,48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,48(r4)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r4.u32 + 48, temp.u32);
	// lfs f8,52(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,52(r4)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r4.u32 + 52, temp.u32);
	// lfs f7,56(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,56(r4)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r4.u32 + 56, temp.u32);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82117C88) {
	__imp__sub_82117C88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82117E50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// addis r9,r4,2
	ctx.r9.s64 = ctx.r4.s64 + 131072;
	// lfs f0,60(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// addis r8,r4,2
	ctx.r8.s64 = ctx.r4.s64 + 131072;
	// addi r9,r9,18440
	ctx.r9.s64 = ctx.r9.s64 + 18440;
	// addi r8,r8,18452
	ctx.r8.s64 = ctx.r8.s64 + 18452;
	// addis r5,r4,2
	ctx.r5.s64 = ctx.r4.s64 + 131072;
	// addis r11,r4,2
	ctx.r11.s64 = ctx.r4.s64 + 131072;
	// addi r5,r5,18416
	ctx.r5.s64 = ctx.r5.s64 + 18416;
	// stfs f0,0(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// addi r11,r11,18428
	ctx.r11.s64 = ctx.r11.s64 + 18428;
	// lfs f13,64(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	ctx.f13.f64 = double(temp.f32);
	// addis r6,r4,2
	ctx.r6.s64 = ctx.r4.s64 + 131072;
	// stfs f13,4(r9)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// addis r4,r4,2
	ctx.r4.s64 = ctx.r4.s64 + 131072;
	// lfs f12,68(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	ctx.f12.f64 = double(temp.f32);
	// addi r6,r6,18404
	ctx.r6.s64 = ctx.r6.s64 + 18404;
	// stfs f12,8(r9)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// addi r4,r4,1988
	ctx.r4.s64 = ctx.r4.s64 + 1988;
	// lfs f11,72(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,0(r8)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// lfs f10,76(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,4(r8)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// lfs f9,80(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,8(r8)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r8.u32 + 8, temp.u32);
	// lfs f8,84(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,0(r5)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// lfs f7,88(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,4(r5)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// lfs f6,92(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,8(r5)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r5.u32 + 8, temp.u32);
	// lfs f5,96(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,0(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f4,100(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,4(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f3,104(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,8(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lfs f2,108(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,0(r6)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// lfs f1,112(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,4(r6)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// lfs f0,116(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 8, temp.u32);
	// lfs f13,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,44(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 44, temp.u32);
	// lfs f12,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,60(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 60, temp.u32);
	// lfs f11,40(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,64(r4)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r4.u32 + 64, temp.u32);
	// lfs f10,44(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,68(r4)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r4.u32 + 68, temp.u32);
	// lfs f9,48(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,48(r4)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r4.u32 + 48, temp.u32);
	// lfs f8,52(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,52(r4)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r4.u32 + 52, temp.u32);
	// lfs f7,56(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,56(r4)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r4.u32 + 56, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82117E50) {
	__imp__sub_82117E50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82117F34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82117F34) {
	__imp__sub_82117F34(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82117F38) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82332c00
	ctx.lr = 0x82117F5C;
	sub_82332C00(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82333508
	ctx.lr = 0x82117F68;
	sub_82333508(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82117fac
	if (ctx.cr6.eq) goto loc_82117FAC;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,704(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 704);
	ctx.f0.f64 = double(temp.f32);
	// addis r11,r30,2
	ctx.r11.s64 = ctx.r30.s64 + 131072;
	// addi r11,r11,1988
	ctx.r11.s64 = ctx.r11.s64 + 1988;
	// lfs f13,12168(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x82117f94
	if (!ctx.cr6.eq) goto loc_82117F94;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x82117fa8
	goto loc_82117FA8;
loc_82117F94:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,5484(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x82117fac
	if (!ctx.cr6.eq) goto loc_82117FAC;
	// li r10,1
	ctx.r10.s64 = 1;
loc_82117FA8:
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_82117FAC:
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

PPC_WEAK_FUNC(sub_82117F38) {
	__imp__sub_82117F38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82117FC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82117FC4) {
	__imp__sub_82117FC4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82117FC8) {
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
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lfs f12,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// addis r4,r11,2
	ctx.r4.s64 = ctx.r11.s64 + 131072;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r4,r4,19960
	ctx.r4.s64 = ctx.r4.s64 + 19960;
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x822d67f0
	ctx.lr = 0x82118004;
	sub_822D67F0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82117FC8) {
	__imp__sub_82117FC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82118014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82118014) {
	__imp__sub_82118014(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82118018) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// ori r9,r11,22912
	ctx.r9.u64 = ctx.r11.u64 | 22912;
	// ori r8,r10,2084
	ctx.r8.u64 = ctx.r10.u64 | 2084;
	// lwzx r7,r3,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r9.u32);
	// lwzx r6,r3,r8
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r8.u32);
	// subf r11,r6,r7
	ctx.r11.s64 = ctx.r7.s64 - ctx.r6.s64;
	// cmpwi cr6,r11,150
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 150, ctx.xer);
	// bge cr6,0x82118078
	if (!ctx.cr6.lt) goto loc_82118078;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// lfs f13,8(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,2
	ctx.r10.s64 = 131072;
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f12,-16(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// ori r9,r10,2080
	ctx.r9.u64 = ctx.r10.u64 | 2080;
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// lfsx f9,r3,r9
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r9.u32);
	ctx.f9.f64 = double(temp.f32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f0,7648(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 7648);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f8,f9,f10
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f10.f64));
	// fmadds f7,f8,f0,f13
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f0.f64 + ctx.f13.f64));
	// stfs f7,8(r4)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// blr 
	return;
loc_82118078:
	// cmpwi cr6,r11,450
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 450, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// subfic r11,r11,450
	ctx.xer.ca = ctx.r11.u32 <= 450;
	ctx.r11.s64 = 450 - ctx.r11.s64;
	// lfs f13,8(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,2
	ctx.r10.s64 = 131072;
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// ori r8,r10,2080
	ctx.r8.u64 = ctx.r10.u64 | 2080;
	// std r9,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r9.u64);
	// lfd f12,-16(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// lfsx f9,r3,r8
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r8.u32);
	ctx.f9.f64 = double(temp.f32);
	// lfs f0,-15020(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -15020);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f8,f10,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f9.f64));
	// fmadds f7,f8,f0,f13
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f0.f64 + ctx.f13.f64));
	// stfs f7,8(r4)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82118018) {
	__imp__sub_82118018(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821180C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x821180C8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addis r29,r3,1
	ctx.r29.s64 = ctx.r3.s64 + 65536;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r29,r29,22924
	ctx.r29.s64 = ctx.r29.s64 + 22924;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82332c00
	ctx.lr = 0x821180E4;
	sub_82332C00(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82333508
	ctx.lr = 0x821180F0;
	sub_82333508(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821181ac
	if (ctx.cr6.eq) goto loc_821181AC;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// ori r9,r11,23628
	ctx.r9.u64 = ctx.r11.u64 | 23628;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lfs f13,5484(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,2
	ctx.r10.s64 = 131072;
	// lfsx f0,r31,r9
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x82118188
	if (ctx.cr6.eq) goto loc_82118188;
	// ori r9,r11,2116
	ctx.r9.u64 = ctx.r11.u64 | 2116;
	// lfs f13,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lis r8,2
	ctx.r8.s64 = 131072;
	// ori r7,r10,19948
	ctx.r7.u64 = ctx.r10.u64 | 19948;
	// ori r6,r8,2120
	ctx.r6.u64 = ctx.r8.u64 | 2120;
	// lis r5,2
	ctx.r5.s64 = 131072;
	// lfsx f12,r31,r9
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	ctx.f12.f64 = double(temp.f32);
	// lis r4,2
	ctx.r4.s64 = 131072;
	// fsubs f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// ori r3,r5,19952
	ctx.r3.u64 = ctx.r5.u64 | 19952;
	// ori r11,r4,2124
	ctx.r11.u64 = ctx.r4.u64 | 2124;
	// lfsx f10,r31,r6
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r6.u32);
	ctx.f10.f64 = double(temp.f32);
	// lis r10,2
	ctx.r10.s64 = 131072;
	// ori r9,r10,19956
	ctx.r9.u64 = ctx.r10.u64 | 19956;
	// lfsx f9,r31,r11
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f11,f0
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfsx f8,r31,r7
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, temp.u32);
	// lfs f7,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f7,f10
	ctx.f6.f64 = double(float(ctx.f7.f64 - ctx.f10.f64));
	// fmuls f5,f6,f0
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// stfsx f5,r31,r3
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r3.u32, temp.u32);
	// lfs f4,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f3,f4,f9
	ctx.f3.f64 = double(float(ctx.f4.f64 - ctx.f9.f64));
	// fmuls f2,f3,f0
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// stfsx f2,r31,r9
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, temp.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_82118188:
	// lis r9,2
	ctx.r9.s64 = 131072;
	// ori r8,r11,19948
	ctx.r8.u64 = ctx.r11.u64 | 19948;
	// ori r7,r10,19952
	ctx.r7.u64 = ctx.r10.u64 | 19952;
	// ori r6,r9,19956
	ctx.r6.u64 = ctx.r9.u64 | 19956;
	// stfsx f13,r31,r8
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r8.u32, temp.u32);
	// stfsx f13,r31,r7
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, temp.u32);
	// stfsx f13,r31,r6
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r6.u32, temp.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_821181AC:
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// lis r9,2
	ctx.r9.s64 = 131072;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// ori r7,r11,19948
	ctx.r7.u64 = ctx.r11.u64 | 19948;
	// ori r6,r10,19952
	ctx.r6.u64 = ctx.r10.u64 | 19952;
	// ori r5,r9,19956
	ctx.r5.u64 = ctx.r9.u64 | 19956;
	// lfs f0,5484(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r31,r7
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, temp.u32);
	// stfsx f0,r31,r6
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r6.u32, temp.u32);
	// stfsx f0,r31,r5
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r5.u32, temp.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821180C0) {
	__imp__sub_821180C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821181E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32167
	ctx.r11.s64 = -2108096512;
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addis r9,r3,2
	ctx.r9.s64 = ctx.r3.s64 + 131072;
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lis r8,-32167
	ctx.r8.s64 = -2108096512;
	// lfs f12,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// addi r9,r9,19960
	ctx.r9.s64 = ctx.r9.s64 + 19960;
	// addis r7,r3,2
	ctx.r7.s64 = ctx.r3.s64 + 131072;
	// lwz r11,-11192(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11192);
	// lis r6,-32167
	ctx.r6.s64 = -2108096512;
	// addi r7,r7,19972
	ctx.r7.s64 = ctx.r7.s64 + 19972;
	// lwz r10,-11228(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + -11228);
	// addis r5,r3,2
	ctx.r5.s64 = ctx.r3.s64 + 131072;
	// lfs f11,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// addi r5,r5,19984
	ctx.r5.s64 = ctx.r5.s64 + 19984;
	// lfs f10,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// lwz r11,-11212(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + -11212);
	// fmadds f9,f11,f10,f0
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f10.f64 + ctx.f0.f64));
	// stfs f9,0(r4)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lfs f8,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f7,f8,f10,f13
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f10.f64 + ctx.f13.f64));
	// stfs f7,4(r4)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// fmr f6,f9
	ctx.f6.f64 = ctx.f9.f64;
	// lfs f5,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// fmadds f4,f5,f10,f12
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f10.f64 + ctx.f12.f64));
	// stfs f4,8(r4)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// fmr f2,f4
	ctx.f2.f64 = ctx.f4.f64;
	// lfs f1,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// fmr f3,f7
	ctx.f3.f64 = ctx.f7.f64;
	// lfs f0,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f13,f0,f1,f9
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f1.f64 + ctx.f9.f64));
	// stfs f13,0(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// fmr f10,f13
	ctx.f10.f64 = ctx.f13.f64;
	// lfs f12,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f11,f12,f1,f7
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f1.f64 + ctx.f7.f64));
	// stfs f11,4(r4)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// fmr f7,f11
	ctx.f7.f64 = ctx.f11.f64;
	// lfs f9,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f8,f9,f1,f4
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f1.f64 + ctx.f4.f64));
	// stfs f8,8(r4)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// fmr f6,f8
	ctx.f6.f64 = ctx.f8.f64;
	// lfs f5,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// fmadds f3,f5,f4,f13
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f4.f64 + ctx.f13.f64));
	// stfs f3,0(r4)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lfs f2,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// fmadds f1,f2,f5,f11
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f5.f64 + ctx.f11.f64));
	// stfs f1,4(r4)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// lfs f0,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f13,f0,f5,f8
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f5.f64 + ctx.f8.f64));
	// stfs f13,8(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821181E0) {
	__imp__sub_821181E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821182B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x821182B8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addis r29,r3,1
	ctx.r29.s64 = ctx.r3.s64 + 65536;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r29,r29,22924
	ctx.r29.s64 = ctx.r29.s64 + 22924;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82332c00
	ctx.lr = 0x821182D4;
	sub_82332C00(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82333508
	ctx.lr = 0x821182E0;
	sub_82333508(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82118320
	if (!ctx.cr6.eq) goto loc_82118320;
	// addis r11,r30,2
	ctx.r11.s64 = ctx.r30.s64 + 131072;
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r11,19928
	ctx.r11.s64 = ctx.r11.s64 + 19928;
	// lfs f12,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f0,f11
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// stfs f10,0(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// lfs f9,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f13,f9
	ctx.f8.f64 = double(float(ctx.f13.f64 - ctx.f9.f64));
	// stfs f8,4(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// lfs f7,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f12,f7
	ctx.f6.f64 = double(float(ctx.f12.f64 - ctx.f7.f64));
	// stfs f6,8(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
loc_82118320:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821182B0) {
	__imp__sub_821182B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82118328) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x82118330;
	__savegprlr_26(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addis r31,r30,1
	ctx.r31.s64 = ctx.r30.s64 + 65536;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// addi r31,r31,22924
	ctx.r31.s64 = ctx.r31.s64 + 22924;
	// bl 0x822da650
	ctx.lr = 0x82118354;
	sub_822DA650(ctx, base);
	// addis r27,r30,2
	ctx.r27.s64 = ctx.r30.s64 + 131072;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r27,r27,18328
	ctx.r27.s64 = ctx.r27.s64 + 18328;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822da650
	ctx.lr = 0x82118368;
	sub_822DA650(ctx, base);
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x822d5c30
	ctx.lr = 0x82118378;
	sub_822D5C30(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x822d9618
	ctx.lr = 0x82118384;
	sub_822D9618(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332c00
	ctx.lr = 0x8211838C;
	sub_82332C00(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332c28
	ctx.lr = 0x82118398;
	sub_82332C28(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,692(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 692);
	// bl 0x82333508
	ctx.lr = 0x821183A8;
	sub_82333508(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8211840c
	if (ctx.cr6.eq) goto loc_8211840C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,704(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 704);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x8211840c
	if (ctx.cr6.eq) goto loc_8211840C;
	// lwz r11,792(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 792);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8211840c
	if (!ctx.cr6.eq) goto loc_8211840C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822da350
	ctx.lr = 0x821183DC;
	sub_822DA350(ctx, base);
	// lfs f1,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822d77c0
	ctx.lr = 0x821183E4;
	sub_822D77C0(ctx, base);
	// lis r11,2
	ctx.r11.s64 = 131072;
	// ori r10,r11,19940
	ctx.r10.u64 = ctx.r11.u64 | 19940;
	// stfsx f1,r30,r10
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + ctx.r10.u32, temp.u32);
	// lfs f1,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822d77c0
	ctx.lr = 0x821183F8;
	sub_822D77C0(ctx, base);
	// lis r9,2
	ctx.r9.s64 = 131072;
	// ori r8,r9,19944
	ctx.r8.u64 = ctx.r9.u64 | 19944;
	// stfsx f1,r30,r8
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + ctx.r8.u32, temp.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_8211840C:
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lfs f0,0(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,2
	ctx.r10.s64 = 131072;
	// lis r9,2
	ctx.r9.s64 = 131072;
	// ori r8,r11,18332
	ctx.r8.u64 = ctx.r11.u64 | 18332;
	// ori r7,r10,19940
	ctx.r7.u64 = ctx.r10.u64 | 19940;
	// ori r6,r9,19944
	ctx.r6.u64 = ctx.r9.u64 | 19944;
	// lfsx f13,r30,r8
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r8.u32);
	ctx.f13.f64 = double(temp.f32);
	// stfsx f0,r30,r7
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + ctx.r7.u32, temp.u32);
	// stfsx f13,r30,r6
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + ctx.r6.u32, temp.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82118328) {
	__imp__sub_82118328(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8211843C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8211843C) {
	__imp__sub_8211843C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82118440) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82118448;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lfs f0,16(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// addi r30,r4,16
	ctx.r30.s64 = ctx.r4.s64 + 16;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addis r4,r3,2
	ctx.r4.s64 = ctx.r3.s64 + 131072;
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lfs f12,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// addi r4,r4,19960
	ctx.r4.s64 = ctx.r4.s64 + 19960;
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822d67f0
	ctx.lr = 0x82118488;
	sub_822D67F0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82118018
	ctx.lr = 0x82118494;
	sub_82118018(ctx, base);
	// bl 0x821180c0
	ctx.lr = 0x82118498;
	sub_821180C0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x821181e0
	ctx.lr = 0x821184A4;
	sub_821181E0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x821182b0
	ctx.lr = 0x821184AC;
	sub_821182B0(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82118328
	ctx.lr = 0x821184BC;
	sub_82118328(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,12168(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,28(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82118440) {
	__imp__sub_82118440(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821184D0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821184D0) {
	__imp__sub_821184D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821184D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821184D4) {
	__imp__sub_821184D4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821184D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x821184E0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// bl 0x82332af8
	ctx.lr = 0x821184FC;
	sub_82332AF8(ctx, base);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x8211850c
	if (ctx.cr6.eq) goto loc_8211850C;
	// lwz r4,72(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// b 0x82118510
	goto loc_82118510;
loc_8211850C:
	// lwz r4,76(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
loc_82118510:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82118528
	if (ctx.cr6.eq) goto loc_82118528;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820ee9e0
	ctx.lr = 0x82118528;
	sub_820EE9E0(ctx, base);
loc_82118528:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821184D8) {
	__imp__sub_821184D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82118530) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82118538;
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
	ctx.lr = 0x82118550;
	sub_82332AF8(ctx, base);
	// lwz r4,76(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8211856c
	if (ctx.cr6.eq) goto loc_8211856C;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820eea58
	ctx.lr = 0x8211856C;
	sub_820EEA58(ctx, base);
loc_8211856C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82118530) {
	__imp__sub_82118530(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82118574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82118574) {
	__imp__sub_82118574(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82118578) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,2
	ctx.r10.s64 = 131072;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lis r9,2
	ctx.r9.s64 = 131072;
	// lis r8,2
	ctx.r8.s64 = 131072;
	// ori r5,r10,58168
	ctx.r5.u64 = ctx.r10.u64 | 58168;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// ori r6,r11,58164
	ctx.r6.u64 = ctx.r11.u64 | 58164;
	// ori r4,r9,58172
	ctx.r4.u64 = ctx.r9.u64 | 58172;
	// ori r10,r8,58176
	ctx.r10.u64 = ctx.r8.u64 | 58176;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,-1
	ctx.r9.s64 = -1;
	// lfs f0,5484(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// stwx r11,r3,r5
	PPC_STORE_U32(ctx.r3.u32 + ctx.r5.u32, ctx.r11.u32);
	// stwx r9,r3,r6
	PPC_STORE_U32(ctx.r3.u32 + ctx.r6.u32, ctx.r9.u32);
	// stfsx f0,r3,r10
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + ctx.r10.u32, temp.u32);
	// stwx r11,r3,r4
	PPC_STORE_U32(ctx.r3.u32 + ctx.r4.u32, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82118578) {
	__imp__sub_82118578(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821185BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821185BC) {
	__imp__sub_821185BC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821185C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x821185C8;
	__savegprlr_29(ctx, base);
	// stfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f30.u64);
	// stfd f31,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f30,f1
	ctx.f30.f64 = ctx.f1.f64;
	// lfs f0,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bne cr6,0x82118604
	if (!ctx.cr6.eq) goto loc_82118604;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82366010
	ctx.lr = 0x821185F4;
	sub_82366010(ctx, base);
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// lfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_82118604:
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r10,-32187
	ctx.r10.s64 = -2109407232;
	// add r9,r3,r11
	ctx.r9.u64 = ctx.r3.u64 + ctx.r11.u64;
	// addi r11,r10,-16984
	ctx.r11.s64 = ctx.r10.s64 + -16984;
	// rlwinm r10,r9,7,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 7) & 0xFFFFFF80;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// li r31,0
	ctx.r31.s64 = 0;
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x823619d0
	ctx.lr = 0x82118628;
	sub_823619D0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x82118664
	if (!ctx.cr6.gt) goto loc_82118664;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r30,r30,320
	ctx.r30.s64 = ctx.r30.s64 + 320;
	// addi r29,r11,-4
	ctx.r29.s64 = ctx.r11.s64 + -4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,12168(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f31.f64 = double(temp.f32);
loc_82118644:
	// lfsu f0,4(r30)
	ctx.fpscr.disableFlushMode();
	ea = 4 + ctx.r30.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r30.u32 = ea;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// fsubs f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
	// fmadds f13,f0,f30,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f30.f64 + ctx.f31.f64));
	// stfsu f13,4(r29)
	ea = 4 + ctx.r29.u32;
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r29.u32 = ea;
	// bl 0x823619d0
	ctx.lr = 0x8211865C;
	sub_823619D0(ctx, base);
	// cmpw cr6,r31,r3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x82118644
	if (ctx.cr6.lt) goto loc_82118644;
loc_82118664:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82365f08
	ctx.lr = 0x82118674;
	sub_82365F08(ctx, base);
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// lfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821185C0) {
	__imp__sub_821185C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82118684) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82118684) {
	__imp__sub_82118684(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82118688) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf64
	ctx.lr = 0x82118690;
	__savegprlr_23(ctx, base);
	// stfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lis r10,-32187
	ctx.r10.s64 = -2109407232;
	// ori r9,r11,61924
	ctx.r9.u64 = ctx.r11.u64 | 61924;
	// addi r10,r10,-15680
	ctx.r10.s64 = ctx.r10.s64 + -15680;
	// mullw r9,r3,r9
	ctx.r9.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r9.s32);
	// add r31,r9,r10
	ctx.r31.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lis r8,1
	ctx.r8.s64 = 65536;
	// addis r26,r31,3
	ctx.r26.s64 = ctx.r31.s64 + 196608;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// addi r26,r26,-7364
	ctx.r26.s64 = ctx.r26.s64 + -7364;
	// ori r11,r8,22908
	ctx.r11.u64 = ctx.r8.u64 | 22908;
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x821186dc
	if (!ctx.cr6.gt) goto loc_821186DC;
	// lwzx r9,r31,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// stw r8,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r8.u32);
loc_821186DC:
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lis r9,2
	ctx.r9.s64 = 131072;
	// ori r8,r10,23624
	ctx.r8.u64 = ctx.r10.u64 | 23624;
	// lis r7,2
	ctx.r7.s64 = 131072;
	// ori r27,r9,58176
	ctx.r27.u64 = ctx.r9.u64 | 58176;
	// li r23,0
	ctx.r23.s64 = 0;
	// ori r25,r7,58168
	ctx.r25.u64 = ctx.r7.u64 | 58168;
	// lwzx r6,r31,r8
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// rlwinm r5,r6,0,29,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x82118830
	if (ctx.cr6.eq) goto loc_82118830;
	// add r28,r31,r11
	ctx.r28.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lfsx f2,r31,r27
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r27.u32);
	ctx.f2.f64 = double(temp.f32);
	// lis r11,-31834
	ctx.r11.s64 = -2086273024;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// add r29,r31,r27
	ctx.r29.u64 = ctx.r31.u64 + ctx.r27.u64;
	// lwz r8,0(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r11,-16612(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16612);
	// extsw r7,r8
	ctx.r7.s64 = ctx.r8.s32;
	// lfs f0,5804(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5804);
	ctx.f0.f64 = double(temp.f32);
	// lfs f1,12168(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f1.f64 = double(temp.f32);
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// lfs f3,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f4,f11,f0
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// bl 0x822d44d0
	ctx.lr = 0x82118750;
	sub_822D44D0(ctx, base);
	// addis r30,r31,3
	ctx.r30.s64 = ctx.r31.s64 + 196608;
	// stfsx f1,r31,r27
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r27.u32, temp.u32);
	// addi r30,r30,-7372
	ctx.r30.s64 = ctx.r30.s64 + -7372;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x821187f4
	if (!ctx.cr6.lt) goto loc_821187F4;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// stw r23,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r23.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x821187d4
	if (ctx.cr6.gt) goto loc_821187D4;
	// lis r11,-32181
	ctx.r11.s64 = -2109014016;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r10,r11,-22896
	ctx.r10.s64 = ctx.r11.s64 + -22896;
	// lwz r4,3576(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3576);
	// bl 0x820f9aa8
	ctx.lr = 0x8211878C;
	sub_820F9AA8(ctx, base);
	// add r4,r31,r25
	ctx.r4.u64 = ctx.r31.u64 + ctx.r25.u64;
	// bl 0x82362d70
	ctx.lr = 0x82118794;
	sub_82362D70(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821188cc
	if (ctx.cr6.eq) goto loc_821188CC;
	// lis r11,-31834
	ctx.r11.s64 = -2086273024;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,-6660(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6660);
	// lfs f0,12240(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12240);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lfs f13,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// fctiwz f11,f12
	ctx.f11.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfiwx f11,0,r26
	PPC_STORE_U32(ctx.r26.u32, ctx.f11.u32);
	// b 0x821188e8
	goto loc_821188E8;
loc_821187D4:
	// lis r11,2
	ctx.r11.s64 = 131072;
	// ori r10,r11,58168
	ctx.r10.u64 = ctx.r11.u64 | 58168;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// stwx r23,r31,r10
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r23.u32);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// b 0x821188e8
	goto loc_821188E8;
loc_821187F4:
	// lis r10,2
	ctx.r10.s64 = 131072;
	// ori r9,r10,58168
	ctx.r9.u64 = ctx.r10.u64 | 58168;
	// lwzx r8,r31,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// ble cr6,0x8211881c
	if (!ctx.cr6.gt) goto loc_8211881C;
	// lis r11,-32181
	ctx.r11.s64 = -2109014016;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r10,r11,-22896
	ctx.r10.s64 = ctx.r11.s64 + -22896;
	// lwz r4,3572(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3572);
	// bl 0x820f9aa8
	ctx.lr = 0x8211881C;
	sub_820F9AA8(ctx, base);
loc_8211881C:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// b 0x821188e8
	goto loc_821188E8;
loc_82118830:
	// addis r30,r31,3
	ctx.r30.s64 = ctx.r31.s64 + 196608;
	// addi r30,r30,-7372
	ctx.r30.s64 = ctx.r30.s64 + -7372;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// blt cr6,0x821188cc
	if (ctx.cr6.lt) goto loc_821188CC;
	// lis r10,-31834
	ctx.r10.s64 = -2086273024;
	// lwzx r11,r31,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r10,-6396(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -6396);
	// lfs f31,12240(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12240);
	ctx.f31.f64 = double(temp.f32);
	// lfs f0,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// fctiwz f12,f13
	ctx.f12.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f12,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f12.u64);
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// ble cr6,0x82118894
	if (!ctx.cr6.gt) goto loc_82118894;
	// lis r11,-32181
	ctx.r11.s64 = -2109014016;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r10,r11,-22896
	ctx.r10.s64 = ctx.r11.s64 + -22896;
	// lwz r4,3584(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3584);
	// bl 0x820f9aa8
	ctx.lr = 0x82118890;
	sub_820F9AA8(ctx, base);
	// b 0x821188cc
	goto loc_821188CC;
loc_82118894:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x821188cc
	if (ctx.cr6.gt) goto loc_821188CC;
	// lis r11,-32181
	ctx.r11.s64 = -2109014016;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r10,r11,-22896
	ctx.r10.s64 = ctx.r11.s64 + -22896;
	// lwz r4,3580(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3580);
	// bl 0x820f9aa8
	ctx.lr = 0x821188B4;
	sub_820F9AA8(ctx, base);
	// lis r9,-31834
	ctx.r9.s64 = -2086273024;
	// lwz r11,-6660(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -6660);
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// fctiwz f12,f13
	ctx.f12.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfiwx f12,0,r26
	PPC_STORE_U32(ctx.r26.u32, ctx.f12.u32);
loc_821188CC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stwx r23,r31,r25
	PPC_STORE_U32(ctx.r31.u32 + ctx.r25.u32, ctx.r23.u32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// add r29,r31,r27
	ctx.r29.u64 = ctx.r31.u64 + ctx.r27.u64;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// lfs f0,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r31,r27
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r27.u32, temp.u32);
loc_821188E8:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lfs f1,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821185c0
	ctx.lr = 0x821188F4;
	sub_821185C0(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82118688) {
	__imp__sub_82118688(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82118900) {
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82118920
	if (ctx.cr6.eq) goto loc_82118920;
	// bl 0x822f22b8
	ctx.lr = 0x82118920;
	sub_822F22B8(ctx, base);
loc_82118920:
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lis r10,-32187
	ctx.r10.s64 = -2109407232;
	// ori r9,r11,61924
	ctx.r9.u64 = ctx.r11.u64 | 61924;
	// addi r11,r10,-15680
	ctx.r11.s64 = ctx.r10.s64 + -15680;
	// mullw r10,r31,r9
	ctx.r10.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r9.s32);
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addis r4,r31,3
	ctx.r4.s64 = ctx.r31.s64 + 196608;
	// addis r3,r31,2
	ctx.r3.s64 = ctx.r31.s64 + 131072;
	// addi r4,r4,-7280
	ctx.r4.s64 = ctx.r4.s64 + -7280;
	// addi r3,r3,19960
	ctx.r3.s64 = ctx.r3.s64 + 19960;
	// bl 0x822d7c78
	ctx.lr = 0x8211894C;
	sub_822D7C78(ctx, base);
	// addis r8,r31,2
	ctx.r8.s64 = ctx.r31.s64 + 131072;
	// addis r7,r31,3
	ctx.r7.s64 = ctx.r31.s64 + 196608;
	// addi r8,r8,19996
	ctx.r8.s64 = ctx.r8.s64 + 19996;
	// addi r7,r7,-7292
	ctx.r7.s64 = ctx.r7.s64 + -7292;
	// lfs f0,0(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// lfs f13,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r7)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r7.u32 + 4, temp.u32);
	// lfs f12,8(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r7)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r7.u32 + 8, temp.u32);
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

PPC_WEAK_FUNC(sub_82118900) {
	__imp__sub_82118900(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82118988) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821189b0
	if (ctx.cr6.eq) goto loc_821189B0;
	// bl 0x822f22b8
	ctx.lr = 0x821189B0;
	sub_822F22B8(ctx, base);
loc_821189B0:
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lis r10,-32187
	ctx.r10.s64 = -2109407232;
	// ori r9,r11,61924
	ctx.r9.u64 = ctx.r11.u64 | 61924;
	// addi r11,r10,-15680
	ctx.r11.s64 = ctx.r10.s64 + -15680;
	// mullw r10,r31,r9
	ctx.r10.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r9.s32);
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addis r30,r31,3
	ctx.r30.s64 = ctx.r31.s64 + 196608;
	// bne cr6,0x821189dc
	if (!ctx.cr6.eq) goto loc_821189DC;
	// addi r30,r30,-7320
	ctx.r30.s64 = ctx.r30.s64 + -7320;
	// b 0x821189e0
	goto loc_821189E0;
loc_821189DC:
	// addi r30,r30,-7224
	ctx.r30.s64 = ctx.r30.s64 + -7224;
loc_821189E0:
	// addis r3,r31,2
	ctx.r3.s64 = ctx.r31.s64 + 131072;
	// addi r4,r30,40
	ctx.r4.s64 = ctx.r30.s64 + 40;
	// addi r3,r3,19960
	ctx.r3.s64 = ctx.r3.s64 + 19960;
	// bl 0x822d7c78
	ctx.lr = 0x821189F0;
	sub_822D7C78(ctx, base);
	// addis r11,r31,2
	ctx.r11.s64 = ctx.r31.s64 + 131072;
	// addi r11,r11,19996
	ctx.r11.s64 = ctx.r11.s64 + 19996;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,28(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 28, temp.u32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,32(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 32, temp.u32);
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,36(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 36, temp.u32);
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

PPC_WEAK_FUNC(sub_82118988) {
	__imp__sub_82118988(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82118A28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x82118A30;
	__savegprlr_25(ctx, base);
	// stfd f29,-88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f29.u64);
	// stfd f30,-80(r1)
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f30.u64);
	// stfd f31,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82118a7c
	if (ctx.cr6.eq) goto loc_82118A7C;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// bl 0x8217ff30
	ctx.lr = 0x82118A7C;
	sub_8217FF30(ctx, base);
loc_82118A7C:
	// clrlwi r26,r29,24
	ctx.r26.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82118aa0
	if (ctx.cr6.eq) goto loc_82118AA0;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x823343b8
	ctx.lr = 0x82118A90;
	sub_823343B8(ctx, base);
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f0.u64);
	// lwz r29,100(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// b 0x82118aa4
	goto loc_82118AA4;
loc_82118AA0:
	// lwz r29,560(r25)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r25.u32 + 560);
loc_82118AA4:
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82180150
	ctx.lr = 0x82118AC0;
	sub_82180150(ctx, base);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82118b40
	if (ctx.cr6.eq) goto loc_82118B40;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x823343f0
	ctx.lr = 0x82118AD0;
	sub_823343F0(ctx, base);
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f1.f64;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// addi r28,r11,-5928
	ctx.r28.s64 = ctx.r11.s64 + -5928;
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// lfs f31,12168(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12168);
	ctx.f31.f64 = double(temp.f32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lfs f30,5484(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 5484);
	ctx.f30.f64 = double(temp.f32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// bl 0x82292438
	ctx.lr = 0x82118B10;
	sub_82292438(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// li r4,0
	ctx.r4.s64 = 0;
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821809c0
	ctx.lr = 0x82118B40;
	sub_821809C0(ctx, base);
loc_82118B40:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
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

PPC_WEAK_FUNC(sub_82118A28) {
	__imp__sub_82118A28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82118B54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82118B54) {
	__imp__sub_82118B54(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82118B58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82118B60;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,172(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 172);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// rlwinm r9,r10,0,20,21
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xC00;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82118bf8
	if (ctx.cr6.eq) goto loc_82118BF8;
	// lwz r10,364(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 364);
	// lis r9,-32181
	ctx.r9.s64 = -2109014016;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r11,r9,-5696
	ctx.r11.s64 = ctx.r9.s64 + -5696;
	// mulli r10,r10,404
	ctx.r10.s64 = ctx.r10.s64 * 404;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lhz r3,334(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 334);
	// bl 0x82284650
	ctx.lr = 0x82118B9C;
	sub_82284650(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82118bbc
	if (!ctx.cr6.eq) goto loc_82118BBC;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lhz r5,334(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 334);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,-14952
	ctx.r4.s64 = ctx.r11.s64 + -14952;
	// bl 0x822830e8
	ctx.lr = 0x82118BBC;
	sub_822830E8(ctx, base);
loc_82118BBC:
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r10,r11,-25976
	ctx.r10.s64 = ctx.r11.s64 + -25976;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lhz r5,222(r10)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r10.u32 + 222);
	// bl 0x820ee1e0
	ctx.lr = 0x82118BD8;
	sub_820EE1E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82118c24
	if (!ctx.cr6.eq) goto loc_82118C24;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,-15016
	ctx.r4.s64 = ctx.r11.s64 + -15016;
	// bl 0x822830e8
	ctx.lr = 0x82118BF0;
	sub_822830E8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_82118BF8:
	// lis r10,-32187
	ctx.r10.s64 = -2109407232;
	// lis r9,2
	ctx.r9.s64 = 131072;
	// addi r8,r10,-15680
	ctx.r8.s64 = ctx.r10.s64 + -15680;
	// ori r7,r9,61924
	ctx.r7.u64 = ctx.r9.u64 | 61924;
	// addis r10,r8,1
	ctx.r10.s64 = ctx.r8.s64 + 65536;
	// mullw r6,r3,r7
	ctx.r6.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r7.s32);
	// addi r5,r10,22912
	ctx.r5.s64 = ctx.r10.s64 + 22912;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwzx r5,r6,r5
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r5.u32);
	// bl 0x82322598
	ctx.lr = 0x82118C24;
	sub_82322598(ctx, base);
loc_82118C24:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82118B58) {
	__imp__sub_82118B58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82118C2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82118C2C) {
	__imp__sub_82118C2C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82118C30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf64
	ctx.lr = 0x82118C38;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,380(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 380);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// rlwinm r10,r11,0,28,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82118d6c
	if (ctx.cr6.eq) goto loc_82118D6C;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x82118d60
	if (ctx.cr6.eq) goto loc_82118D60;
	// li r26,0
	ctx.r26.s64 = 0;
	// li r25,1
	ctx.r25.s64 = 1;
loc_82118C6C:
	// subfic r11,r26,0
	ctx.xer.ca = ctx.r26.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r26.s64;
	// lwz r10,380(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 380);
	// subfe r9,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r11,r9,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4;
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// and r7,r8,r10
	ctx.r7.u64 = ctx.r8.u64 & ctx.r10.u64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x82118d54
	if (ctx.cr6.eq) goto loc_82118D54;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq cr6,0x82118cd0
	if (ctx.cr6.eq) goto loc_82118CD0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82334448
	ctx.lr = 0x82118C9C;
	sub_82334448(ctx, base);
	// clrlwi r31,r3,16
	ctx.r31.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82332af8
	ctx.lr = 0x82118CA8;
	sub_82332AF8(ctx, base);
	// lwz r4,72(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82118d54
	if (ctx.cr6.eq) goto loc_82118D54;
	// addi r11,r24,1024
	ctx.r11.s64 = ctx.r24.s64 + 1024;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// slw r3,r25,r24
	ctx.r3.u64 = ctx.r24.u8 & 0x20 ? 0 : (ctx.r25.u32 << (ctx.r24.u8 & 0x3F));
	// add r5,r11,r26
	ctx.r5.u64 = ctx.r11.u64 + ctx.r26.u64;
	// bl 0x820ee9e0
	ctx.lr = 0x82118CCC;
	sub_820EE9E0(ctx, base);
	// b 0x82118d54
	goto loc_82118D54;
loc_82118CD0:
	// lhz r11,334(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 334);
	// slw r10,r25,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r25.u32 << (ctx.r11.u8 & 0x3F));
	// not r3,r10
	ctx.r3.u64 = ~ctx.r10.u64;
	// bl 0x820f8868
	ctx.lr = 0x82118CE0;
	sub_820F8868(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bne cr6,0x82118d24
	if (!ctx.cr6.eq) goto loc_82118D24;
	// bl 0x82334448
	ctx.lr = 0x82118CF4;
	sub_82334448(ctx, base);
	// clrlwi r31,r3,16
	ctx.r31.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lhz r30,334(r28)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r28.u32 + 334);
	// bl 0x82332af8
	ctx.lr = 0x82118D04;
	sub_82332AF8(ctx, base);
	// lwz r4,76(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82118d54
	if (ctx.cr6.eq) goto loc_82118D54;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x820ee9e0
	ctx.lr = 0x82118D20;
	sub_820EE9E0(ctx, base);
	// b 0x82118d54
	goto loc_82118D54;
loc_82118D24:
	// bl 0x82334448
	ctx.lr = 0x82118D28;
	sub_82334448(ctx, base);
	// clrlwi r31,r3,16
	ctx.r31.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lhz r30,334(r28)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r28.u32 + 334);
	// bl 0x82332af8
	ctx.lr = 0x82118D38;
	sub_82332AF8(ctx, base);
	// lwz r4,76(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82118d54
	if (ctx.cr6.eq) goto loc_82118D54;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x820eea58
	ctx.lr = 0x82118D54;
	sub_820EEA58(ctx, base);
loc_82118D54:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// cmpwi cr6,r26,2
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 2, ctx.xer);
	// blt cr6,0x82118c6c
	if (ctx.cr6.lt) goto loc_82118C6C;
loc_82118D60:
	// lwz r11,380(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 380);
	// rlwinm r10,r11,0,30,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF3;
	// stw r10,380(r28)
	PPC_STORE_U32(ctx.r28.u32 + 380, ctx.r10.u32);
loc_82118D6C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82118C30) {
	__imp__sub_82118C30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82118D74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82118D74) {
	__imp__sub_82118D74(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82118D78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf40
	ctx.lr = 0x82118D80;
	__savegprlr_14(ctx, base);
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x823de024
	ctx.lr = 0x82118D88;
	__savefpr_27(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,220(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 220);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r6,364(r1)
	PPC_STORE_U32(ctx.r1.u32 + 364, ctx.r6.u32);
	// rlwinm r10,r11,0,11,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1FFC00;
	// stw r7,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, ctx.r7.u32);
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// rlwinm r10,r10,0,20,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFF00FFF;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82119200
	if (!ctx.cr6.eq) goto loc_82119200;
	// addic r11,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r11.s64 = ctx.r5.s64 + -1;
	// subfe. r22,r11,r5
	temp.u8 = (~ctx.r11.u32 + ctx.r5.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r5.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r22.u64 = ~ctx.r11.u64 + ctx.r5.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	ctx.cr0.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// stw r22,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r22.u32);
	// beq 0x82118ddc
	if (ctx.cr0.eq) goto loc_82118DDC;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x82332c00
	ctx.lr = 0x82118DD4;
	sub_82332C00(ctx, base);
	// mr r16,r3
	ctx.r16.u64 = ctx.r3.u64;
	// b 0x82118de0
	goto loc_82118DE0;
loc_82118DDC:
	// lhz r16,332(r28)
	ctx.r16.u64 = PPC_LOAD_U16(ctx.r28.u32 + 332);
loc_82118DE0:
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 0, ctx.xer);
	// ble cr6,0x82119200
	if (!ctx.cr6.gt) goto loc_82119200;
	// lis r11,-32167
	ctx.r11.s64 = -2108096512;
	// li r10,3
	ctx.r10.s64 = 3;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// lwz r11,-11224(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11224);
	// lbz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// subfic r8,r9,0
	ctx.xer.ca = ctx.r9.u32 <= 0;
	ctx.r8.s64 = 0 - ctx.r9.s64;
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r14,r6,r10
	ctx.r14.u64 = ctx.r6.u64 & ctx.r10.u64;
	// beq cr6,0x82119190
	if (ctx.cr6.eq) goto loc_82119190;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lis r10,-32187
	ctx.r10.s64 = -2109407232;
	// ori r9,r11,61924
	ctx.r9.u64 = ctx.r11.u64 | 61924;
	// addi r11,r10,-15680
	ctx.r11.s64 = ctx.r10.s64 + -15680;
	// mullw r10,r24,r9
	ctx.r10.s64 = int64_t(ctx.r24.s32) * int64_t(ctx.r9.s32);
	// add r27,r10,r11
	ctx.r27.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addis r4,r27,2
	ctx.r4.s64 = ctx.r27.s64 + 131072;
	// addi r4,r4,19960
	ctx.r4.s64 = ctx.r4.s64 + 19960;
	// bl 0x822d6b00
	ctx.lr = 0x82118E34;
	sub_822D6B00(ctx, base);
	// addis r8,r27,2
	ctx.r8.s64 = ctx.r27.s64 + 131072;
	// lfs f0,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// addi r8,r8,19996
	ctx.r8.s64 = ctx.r8.s64 + 19996;
	// stfs f0,0(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// lfs f13,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r8)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// lfs f12,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r8)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r8.u32 + 8, temp.u32);
	// bl 0x82332af8
	ctx.lr = 0x82118E5C;
	sub_82332AF8(ctx, base);
	// mulli r11,r24,200
	ctx.r11.s64 = ctx.r24.s64 * 200;
	// add r7,r11,r16
	ctx.r7.u64 = ctx.r11.u64 + ctx.r16.u64;
	// lis r6,-32188
	ctx.r6.s64 = -2109472768;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// addi r11,r6,8672
	ctx.r11.s64 = ctx.r6.s64 + 8672;
	// rlwinm r10,r7,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 5) & 0xFFFFFFE0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x823340d8
	ctx.lr = 0x82118E80;
	sub_823340D8(ctx, base);
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x8211914c
	if (ctx.cr6.eq) goto loc_8211914C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,36(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,280(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 280);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f12,28(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 28);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f10,32(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 32);
	ctx.f10.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// lfs f31,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f31.f64 = double(temp.f32);
	// stfs f31,88(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmr f30,f31
	ctx.f30.f64 = ctx.f31.f64;
	// stfs f31,92(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// fmr f29,f31
	ctx.f29.f64 = ctx.f31.f64;
	// stfs f10,108(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// fmr f28,f31
	ctx.f28.f64 = ctx.f31.f64;
	// stfs f31,96(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f11,112(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lfs f4,5996(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5996);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,6056(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 6056);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,88(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 88);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,268(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 268);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822e97d8
	ctx.lr = 0x82118EEC;
	sub_822E97D8(ctx, base);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82114560
	ctx.lr = 0x82118EF4;
	sub_82114560(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82118f10
	if (ctx.cr6.eq) goto loc_82118F10;
	// lbz r11,1641(r23)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r23.u32 + 1641);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82118f14
	if (!ctx.cr6.eq) goto loc_82118F14;
loc_82118F10:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82118F14:
	// lwz r10,172(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 172);
	// rlwinm r9,r10,0,5,5
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4000000;
	// or r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 | ctx.r11.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x82118f3c
	if (!ctx.cr6.eq) goto loc_82118F3C;
	// bl 0x820f5738
	ctx.lr = 0x82118F2C;
	sub_820F5738(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x82118f40
	if (ctx.cr6.eq) goto loc_82118F40;
loc_82118F3C:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82118F40:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r17,0
	ctx.r17.s64 = 0;
	// li r25,0
	ctx.r25.s64 = 0;
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r15,r7,r11
	ctx.r15.u64 = ctx.r7.u64 & ctx.r11.u64;
	// blt cr6,0x821190ec
	if (ctx.cr6.lt) goto loc_821190EC;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addis r22,r27,3
	ctx.r22.s64 = ctx.r27.s64 + 196608;
	// lis r9,2
	ctx.r9.s64 = 131072;
	// lis r8,2
	ctx.r8.s64 = 131072;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lfs f27,-14884(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -14884);
	ctx.f27.f64 = double(temp.f32);
	// rlwinm r19,r24,1,0,30
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r22,r22,-7320
	ctx.r22.s64 = ctx.r22.s64 + -7320;
	// ori r20,r9,58312
	ctx.r20.u64 = ctx.r9.u64 | 58312;
	// ori r21,r8,2168
	ctx.r21.u64 = ctx.r8.u64 | 2168;
	// addi r28,r11,-30176
	ctx.r28.s64 = ctx.r11.s64 + -30176;
loc_82118F8C:
	// add r11,r19,r25
	ctx.r11.u64 = ctx.r19.u64 + ctx.r25.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r30,r11,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r30,r28
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r28.u32);
	// bl 0x82118988
	ctx.lr = 0x82118FAC;
	sub_82118988(ctx, base);
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// bne cr6,0x82119020
	if (!ctx.cr6.eq) goto loc_82119020;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mr r31,r22
	ctx.r31.u64 = ctx.r22.u64;
	// li r29,2047
	ctx.r29.s64 = 2047;
	// bl 0x820da648
	ctx.lr = 0x82118FC8;
	sub_820DA648(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82119064
	if (ctx.cr6.eq) goto loc_82119064;
	// li r6,0
	ctx.r6.s64 = 0;
	// lfs f30,28(r22)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + 28);
	ctx.f30.f64 = double(temp.f32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lfs f29,32(r22)
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + 32);
	ctx.f29.f64 = double(temp.f32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lfs f28,36(r22)
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + 36);
	ctx.f28.f64 = double(temp.f32);
	// addi r3,r26,264
	ctx.r3.s64 = ctx.r26.s64 + 264;
	// addi r11,r22,28
	ctx.r11.s64 = ctx.r22.s64 + 28;
	// bl 0x822da518
	ctx.lr = 0x82118FF4;
	sub_822DA518(ctx, base);
	// lfs f0,972(r23)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 972);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f11,f0,f13,f30
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f13.f64 + ctx.f30.f64));
	// lfs f10,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f9,f12,f0,f29
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f29.f64));
	// fmadds f8,f10,f0,f28
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f0.f64 + ctx.f28.f64));
	// stfs f11,28(r22)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r22.u32 + 28, temp.u32);
	// stfs f9,32(r22)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r22.u32 + 32, temp.u32);
	// stfs f8,36(r22)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r22.u32 + 36, temp.u32);
	// b 0x82119064
	goto loc_82119064;
loc_82119020:
	// add r31,r27,r20
	ctx.r31.u64 = ctx.r27.u64 + ctx.r20.u64;
	// li r5,96
	ctx.r5.s64 = 96;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823de1f0
	ctx.lr = 0x82119034;
	sub_823DE1F0(ctx, base);
	// lfs f11,972(r23)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 972);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f11,f27
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f27.f64));
	// lfs f0,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// li r29,2046
	ctx.r29.s64 = 2046;
	// lfs f12,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f9,f0,f10,f30
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f10.f64 + ctx.f30.f64));
	// stfs f9,28(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// fmadds f8,f13,f10,f29
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f10.f64 + ctx.f29.f64));
	// stfs f8,32(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// fmadds f7,f12,f10,f28
	ctx.f7.f64 = double(float(ctx.f12.f64 * ctx.f10.f64 + ctx.f28.f64));
	// stfs f7,36(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
loc_82119064:
	// lwzx r3,r30,r28
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r28.u32);
	// bl 0x8217a118
	ctx.lr = 0x8211906C;
	sub_8217A118(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821190ac
	if (ctx.cr6.eq) goto loc_821190AC;
	// lwzx r3,r30,r28
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r28.u32);
	// bl 0x822f0328
	ctx.lr = 0x8211907C;
	sub_822F0328(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8211908c
	if (ctx.cr6.eq) goto loc_8211908C;
	// li r17,1
	ctx.r17.s64 = 1;
loc_8211908C:
	// addi r7,r1,104
	ctx.r7.s64 = ctx.r1.s64 + 104;
	// lbz r9,1642(r23)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r23.u32 + 1642);
	// mr r6,r14
	ctx.r6.u64 = ctx.r14.u64;
	// lwzx r3,r30,r28
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r28.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82386868
	ctx.lr = 0x821190AC;
	sub_82386868(ctx, base);
loc_821190AC:
	// cmpwi cr6,r15,0
	ctx.cr6.compare<int32_t>(ctx.r15.s32, 0, ctx.xer);
	// beq cr6,0x821190d4
	if (ctx.cr6.eq) goto loc_821190D4;
	// li r9,1
	ctx.r9.s64 = 1;
	// lwzx r5,r30,r28
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r28.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r4,364(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 364);
	// add r7,r27,r21
	ctx.r7.u64 = ctx.r27.u64 + ctx.r21.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x820f5b18
	ctx.lr = 0x821190D4;
	sub_820F5B18(ctx, base);
loc_821190D4:
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// cmpw cr6,r25,r18
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r18.s32, ctx.xer);
	// ble cr6,0x82118f8c
	if (!ctx.cr6.gt) goto loc_82118F8C;
	// lwz r29,372(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// lwz r22,80(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r28,364(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 364);
loc_821190EC:
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x82332b10
	ctx.lr = 0x821190F4;
	sub_82332B10(ctx, base);
	// lfs f0,1168(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 1168);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,92(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,2
	ctx.r11.s64 = 131072;
	// fsubs f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// lfs f13,704(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 704);
	ctx.f13.f64 = double(temp.f32);
	// ori r9,r11,2188
	ctx.r9.u64 = ctx.r11.u64 | 2188;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// lis r8,2
	ctx.r8.s64 = 131072;
	// ori r7,r10,2192
	ctx.r7.u64 = ctx.r10.u64 | 2192;
	// ori r6,r8,18305
	ctx.r6.u64 = ctx.r8.u64 | 18305;
	// fmadds f10,f11,f13,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f13.f64 + ctx.f0.f64));
	// stfsx f10,r27,r9
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r27.u32 + ctx.r9.u32, temp.u32);
	// lfs f6,704(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 704);
	ctx.f6.f64 = double(temp.f32);
	// lfs f9,1172(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 1172);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,96(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f8,f9
	ctx.f7.f64 = double(float(ctx.f8.f64 - ctx.f9.f64));
	// fmadds f5,f7,f6,f9
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f6.f64 + ctx.f9.f64));
	// stfsx f5,r27,r7
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r27.u32 + ctx.r7.u32, temp.u32);
	// stbx r17,r27,r6
	PPC_STORE_U8(ctx.r27.u32 + ctx.r6.u32, ctx.r17.u8);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82118688
	ctx.lr = 0x82119148;
	sub_82118688(ctx, base);
	// b 0x821191e8
	goto loc_821191E8;
loc_8211914C:
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// blt cr6,0x82119184
	if (ctx.cr6.lt) goto loc_82119184;
	// rlwinm r11,r24,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// add r9,r24,r11
	ctx.r9.u64 = ctx.r24.u64 + ctx.r11.u64;
	// addi r11,r10,-30176
	ctx.r11.s64 = ctx.r10.s64 + -30176;
	// rlwinm r10,r9,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r31,r18,1
	ctx.r31.s64 = ctx.r18.s64 + 1;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r30,r11,-20
	ctx.r30.s64 = ctx.r11.s64 + -20;
loc_82119174:
	// lwzu r3,20(r30)
	ea = 20 + ctx.r30.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// bl 0x8217a118
	ctx.lr = 0x8211917C;
	sub_8217A118(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x82119174
	if (!ctx.cr0.eq) goto loc_82119174;
loc_82119184:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82118688
	ctx.lr = 0x8211918C;
	sub_82118688(ctx, base);
	// b 0x821191e8
	goto loc_821191E8;
loc_82119190:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x821191e8
	if (ctx.cr6.eq) goto loc_821191E8;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x82332af8
	ctx.lr = 0x821191A0;
	sub_82332AF8(ctx, base);
	// lbz r11,1641(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1641);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821191c0
	if (!ctx.cr6.eq) goto loc_821191C0;
	// lwz r11,220(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 220);
	// li r31,0
	ctx.r31.s64 = 0;
	// rlwinm r10,r11,0,5,5
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x821191c4
	if (ctx.cr6.eq) goto loc_821191C4;
loc_821191C0:
	// li r31,1
	ctx.r31.s64 = 1;
loc_821191C4:
	// bl 0x820f5738
	ctx.lr = 0x821191C8;
	sub_820F5738(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821191dc
	if (!ctx.cr6.eq) goto loc_821191DC;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x821191e8
	if (ctx.cr6.eq) goto loc_821191E8;
loc_821191DC:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lhz r4,334(r28)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r28.u32 + 334);
	// bl 0x820f5c00
	ctx.lr = 0x821191E8;
	sub_820F5C00(ctx, base);
loc_821191E8:
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r5,r16
	ctx.r5.u64 = ctx.r16.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82118c30
	ctx.lr = 0x82119200;
	sub_82118C30(ctx, base);
loc_82119200:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x823de070
	ctx.lr = 0x8211920C;
	__restfpr_27(ctx, base);
	// b 0x823ddf90
	__restgprlr_14(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82118D78) {
	__imp__sub_82118D78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82119210) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf54
	ctx.lr = 0x82119218;
	__savegprlr_19(ctx, base);
	// stfd f31,-120(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -120, ctx.f31.u64);
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
	// add r21,r10,r11
	ctx.r21.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addis r26,r21,1
	ctx.r26.s64 = ctx.r21.s64 + 65536;
	// addi r26,r26,22924
	ctx.r26.s64 = ctx.r26.s64 + 22924;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82332c00
	ctx.lr = 0x8211924C;
	sub_82332C00(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82119440
	if (ctx.cr6.eq) goto loc_82119440;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821168d8
	ctx.lr = 0x82119264;
	sub_821168D8(ctx, base);
	// lis r10,2
	ctx.r10.s64 = 131072;
	// mulli r11,r29,200
	ctx.r11.s64 = ctx.r29.s64 * 200;
	// ori r9,r10,19048
	ctx.r9.u64 = ctx.r10.u64 | 19048;
	// lis r8,2
	ctx.r8.s64 = 131072;
	// add r7,r11,r27
	ctx.r7.u64 = ctx.r11.u64 + ctx.r27.u64;
	// lis r6,-32188
	ctx.r6.s64 = -2109472768;
	// ori r31,r8,19052
	ctx.r31.u64 = ctx.r8.u64 | 19052;
	// lwzx r5,r21,r9
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r21.u32 + ctx.r9.u32);
	// rlwinm r23,r7,5,0,26
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r24,r6,8672
	ctx.r24.s64 = ctx.r6.s64 + 8672;
	// cmplw cr6,r5,r27
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x821192b0
	if (!ctx.cr6.eq) goto loc_821192B0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x820da648
	ctx.lr = 0x821192A0;
	sub_820DA648(ctx, base);
	// lwzx r11,r21,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + ctx.r31.u32);
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x821192b4
	if (ctx.cr6.eq) goto loc_821192B4;
loc_821192B0:
	// li r11,1
	ctx.r11.s64 = 1;
loc_821192B4:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// clrlwi r30,r11,24
	ctx.r30.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x820da648
	ctx.lr = 0x821192C4;
	sub_820DA648(ctx, base);
	// stwx r3,r21,r31
	PPC_STORE_U32(ctx.r21.u32 + ctx.r31.u32, ctx.r3.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x820da648
	ctx.lr = 0x821192D4;
	sub_820DA648(ctx, base);
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// addic r10,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r10.s64 = ctx.r3.s64 + -1;
	// li r31,0
	ctx.r31.s64 = 0;
	// subfe. r22,r10,r3
	temp.u8 = (~ctx.r10.u32 + ctx.r3.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r22.u64 = ~ctx.r10.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	ctx.cr0.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// addi r25,r11,-30176
	ctx.r25.s64 = ctx.r11.s64 + -30176;
	// blt 0x82119338
	if (ctx.cr0.lt) goto loc_82119338;
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r28,r11,r25
	ctx.r28.u64 = ctx.r11.u64 + ctx.r25.u64;
loc_821192FC:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8211930c
	if (!ctx.cr6.eq) goto loc_8211930C;
	// li r30,1
	ctx.r30.s64 = 1;
loc_8211930C:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82117198
	ctx.lr = 0x8211931C;
	sub_82117198(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// clrlwi r10,r30,24
	ctx.r10.u64 = ctx.r30.u32 & 0xFF;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// or r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 | ctx.r10.u64;
	// addi r28,r28,20
	ctx.r28.s64 = ctx.r28.s64 + 20;
	// cmpw cr6,r31,r22
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r22.s32, ctx.xer);
	// ble cr6,0x821192fc
	if (!ctx.cr6.gt) goto loc_821192FC;
loc_82119338:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82119360
	if (ctx.cr6.eq) goto loc_82119360;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwzx r6,r23,r24
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r23.u32 + ctx.r24.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82116ba8
	ctx.lr = 0x82119360;
	sub_82116BA8(ctx, base);
loc_82119360:
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// blt cr6,0x82119440
	if (ctx.cr6.lt) goto loc_82119440;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f31,5804(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 5804);
	ctx.f31.f64 = double(temp.f32);
	// rlwinm r23,r29,1,0,30
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// ori r28,r7,22908
	ctx.r28.u64 = ctx.r7.u64 | 22908;
	// addi r24,r9,-14864
	ctx.r24.s64 = ctx.r9.s64 + -14864;
	// addi r20,r10,-14872
	ctx.r20.s64 = ctx.r10.s64 + -14872;
	// addi r19,r11,-14880
	ctx.r19.s64 = ctx.r11.s64 + -14880;
loc_82119398:
	// add r11,r23,r30
	ctx.r11.u64 = ctx.r23.u64 + ctx.r30.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r31,r11,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r31,r25
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r25.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821193f0
	if (!ctx.cr6.eq) goto loc_821193F0;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// mr r31,r19
	ctx.r31.u64 = ctx.r19.u64;
	// beq cr6,0x821193c4
	if (ctx.cr6.eq) goto loc_821193C4;
	// mr r31,r20
	ctx.r31.u64 = ctx.r20.u64;
loc_821193C4:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82332b28
	ctx.lr = 0x821193CC;
	sub_82332B28(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// bl 0x822e84f0
	ctx.lr = 0x821193E0;
	sub_822E84F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822830e8
	ctx.lr = 0x821193EC;
	sub_822830E8(ctx, base);
	// b 0x82119434
	goto loc_82119434;
loc_821193F0:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82115c98
	ctx.lr = 0x82119400;
	sub_82115C98(ctx, base);
	// lwzx r11,r21,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + ctx.r28.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwzx r3,r31,r25
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r25.u32);
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
	// bl 0x822f7e70
	ctx.lr = 0x82119428;
	sub_822F7E70(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82117698
	ctx.lr = 0x82119434;
	sub_82117698(ctx, base);
loc_82119434:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r22
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r22.s32, ctx.xer);
	// ble cr6,0x82119398
	if (!ctx.cr6.gt) goto loc_82119398;
loc_82119440:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// b 0x823ddfa4
	__restgprlr_19(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82119210) {
	__imp__sub_82119210(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8211944C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8211944C) {
	__imp__sub_8211944C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82119450) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf64
	ctx.lr = 0x82119458;
	__savegprlr_23(ctx, base);
	// stfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f31.u64);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
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
	// add r27,r10,r11
	ctx.r27.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// addis r29,r27,1
	ctx.r29.s64 = ctx.r27.s64 + 65536;
	// li r24,1
	ctx.r24.s64 = 1;
	// addi r29,r29,22924
	ctx.r29.s64 = ctx.r29.s64 + 22924;
	// lwz r11,260(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 260);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x821194a4
	if (!ctx.cr6.gt) goto loc_821194A4;
	// addi r3,r11,1208
	ctx.r3.s64 = ctx.r11.s64 + 1208;
	// bl 0x821201a0
	ctx.lr = 0x8211949C;
	sub_821201A0(ctx, base);
	// bl 0x82393fe8
	ctx.lr = 0x821194A0;
	sub_82393FE8(ctx, base);
	// bl 0x8217c598
	ctx.lr = 0x821194A4;
	sub_8217C598(ctx, base);
loc_821194A4:
	// bl 0x82332c40
	ctx.lr = 0x821194A8;
	sub_82332C40(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// li r30,1
	ctx.r30.s64 = 1;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// ble cr6,0x821195ac
	if (!ctx.cr6.gt) goto loc_821195AC;
	// lis r26,-32032
	ctx.r26.s64 = -2099249152;
loc_821194BC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82332af8
	ctx.lr = 0x821194C4;
	sub_82332AF8(ctx, base);
	// lwz r11,-5944(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -5944);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821194e0
	if (ctx.cr6.eq) goto loc_821194E0;
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8211954c
	if (!ctx.cr6.eq) goto loc_8211954C;
loc_821194E0:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821195a0
	if (ctx.cr6.eq) goto loc_821195A0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82119504
	if (ctx.cr6.eq) goto loc_82119504;
	// lbz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82119504
	if (ctx.cr6.eq) goto loc_82119504;
	// li r11,14
	ctx.r11.s64 = 14;
	// b 0x82119534
	goto loc_82119534;
loc_82119504:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r29,544
	ctx.r10.s64 = ctx.r29.s64 + 544;
loc_8211950C:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r9,r30
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x8211952c
	if (ctx.cr6.eq) goto loc_8211952C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpwi cr6,r11,15
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 15, ctx.xer);
	// blt cr6,0x8211950c
	if (ctx.cr6.lt) goto loc_8211950C;
	// b 0x821195a0
	goto loc_821195A0;
loc_8211952C:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x821195a0
	if (ctx.cr6.lt) goto loc_821195A0;
loc_82119534:
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r11,r11,604
	ctx.r11.s64 = ctx.r11.s64 + 604;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821195a0
	if (ctx.cr6.eq) goto loc_821195A0;
loc_8211954C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82332b10
	ctx.lr = 0x82119554;
	sub_82332B10(ctx, base);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82119570
	if (ctx.cr6.eq) goto loc_82119570;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x8217c618
	ctx.lr = 0x82119570;
	sub_8217C618(ctx, base);
loc_82119570:
	// lwz r3,480(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 480);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82119580
	if (ctx.cr6.eq) goto loc_82119580;
	// bl 0x8217c618
	ctx.lr = 0x82119580;
	sub_8217C618(ctx, base);
loc_82119580:
	// lwz r3,484(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 484);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82119590
	if (ctx.cr6.eq) goto loc_82119590;
	// bl 0x8217c618
	ctx.lr = 0x82119590;
	sub_8217C618(ctx, base);
loc_82119590:
	// lbz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 112);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821195a0
	if (ctx.cr6.eq) goto loc_821195A0;
	// bl 0x820fb530
	ctx.lr = 0x821195A0;
	sub_820FB530(ctx, base);
loc_821195A0:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r25
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r25.s32, ctx.xer);
	// blt cr6,0x821194bc
	if (ctx.cr6.lt) goto loc_821194BC;
loc_821195AC:
	// lis r11,-32181
	ctx.r11.s64 = -2109014016;
	// addi r10,r11,-22896
	ctx.r10.s64 = ctx.r11.s64 + -22896;
	// lwz r3,16124(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16124);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821195c4
	if (ctx.cr6.eq) goto loc_821195C4;
	// bl 0x8217c618
	ctx.lr = 0x821195C4;
	sub_8217C618(ctx, base);
loc_821195C4:
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// ori r8,r11,2188
	ctx.r8.u64 = ctx.r11.u64 | 2188;
	// ori r7,r10,2192
	ctx.r7.u64 = ctx.r10.u64 | 2192;
	// lfs f31,5484(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5484);
	ctx.f31.f64 = double(temp.f32);
	// stfsx f31,r27,r8
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r27.u32 + ctx.r8.u32, temp.u32);
	// stfsx f31,r27,r7
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r27.u32 + ctx.r7.u32, temp.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82119730
	if (ctx.cr6.eq) goto loc_82119730;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82119730
	if (ctx.cr6.eq) goto loc_82119730;
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82119630
	if (!ctx.cr6.eq) goto loc_82119630;
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// lwz r11,-17016(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17016);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82119630
	if (ctx.cr6.eq) goto loc_82119630;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x820e7018
	ctx.lr = 0x82119624;
	sub_820E7018(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82119634
	if (ctx.cr6.eq) goto loc_82119634;
loc_82119630:
	// li r24,0
	ctx.r24.s64 = 0;
loc_82119634:
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lwz r10,172(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 172);
	// ori r9,r11,20008
	ctx.r9.u64 = ctx.r11.u64 | 20008;
	// rlwinm r8,r10,0,11,21
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1FFC00;
	// rlwinm r8,r8,0,20,11
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFF00FFF;
	// lbzx r7,r27,r9
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r27.u32 + ctx.r9.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// addic r6,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r6.s64 = ctx.r7.s64 + -1;
	// subfe r4,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r4.u64 = ~ctx.r5.u64 + ctx.r5.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r31,r4,r24
	ctx.r31.u64 = ctx.r4.u64 & ctx.r24.u64;
	// bne cr6,0x82119730
	if (!ctx.cr6.eq) goto loc_82119730;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82332c00
	ctx.lr = 0x82119668;
	sub_82332C00(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x821196dc
	if (!ctx.cr6.gt) goto loc_821196DC;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82117f38
	ctx.lr = 0x8211967C;
	sub_82117F38(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82117c88
	ctx.lr = 0x82119688;
	sub_82117C88(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82336328
	ctx.lr = 0x82119698;
	sub_82336328(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82118440
	ctx.lr = 0x821196A8;
	sub_82118440(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82117e50
	ctx.lr = 0x821196B4;
	sub_82117E50(ctx, base);
	// addis r6,r27,2
	ctx.r6.s64 = ctx.r27.s64 + 131072;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// addi r6,r6,1584
	ctx.r6.s64 = ctx.r6.s64 + 1584;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82118d78
	ctx.lr = 0x821196D0;
	sub_82118D78(ctx, base);
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// lfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
loc_821196DC:
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// lis r9,2
	ctx.r9.s64 = 131072;
	// lis r8,2
	ctx.r8.s64 = 131072;
	// lis r7,2
	ctx.r7.s64 = 131072;
	// ori r4,r11,18316
	ctx.r4.u64 = ctx.r11.u64 | 18316;
	// lis r6,2
	ctx.r6.s64 = 131072;
	// lis r5,2
	ctx.r5.s64 = 131072;
	// ori r3,r10,18320
	ctx.r3.u64 = ctx.r10.u64 | 18320;
	// ori r11,r9,19940
	ctx.r11.u64 = ctx.r9.u64 | 19940;
	// ori r10,r8,19944
	ctx.r10.u64 = ctx.r8.u64 | 19944;
	// lfsx f0,r27,r4
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r4.u32);
	ctx.f0.f64 = double(temp.f32);
	// ori r9,r7,19948
	ctx.r9.u64 = ctx.r7.u64 | 19948;
	// ori r8,r6,19952
	ctx.r8.u64 = ctx.r6.u64 | 19952;
	// ori r7,r5,19956
	ctx.r7.u64 = ctx.r5.u64 | 19956;
	// lfsx f13,r27,r3
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r3.u32);
	ctx.f13.f64 = double(temp.f32);
	// stfsx f0,r27,r11
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r27.u32 + ctx.r11.u32, temp.u32);
	// stfsx f13,r27,r10
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r27.u32 + ctx.r10.u32, temp.u32);
	// stfsx f31,r27,r9
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r27.u32 + ctx.r9.u32, temp.u32);
	// stfsx f31,r27,r8
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r27.u32 + ctx.r8.u32, temp.u32);
	// stfsx f31,r27,r7
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r27.u32 + ctx.r7.u32, temp.u32);
loc_82119730:
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// lfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82119450) {
	__imp__sub_82119450(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8211973C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8211973C) {
	__imp__sub_8211973C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82119740) {
	PPC_FUNC_PROLOGUE();
	// addis r9,r3,1
	ctx.r9.s64 = ctx.r3.s64 + 65536;
	// addi r9,r9,22924
	ctx.r9.s64 = ctx.r9.s64 + 22924;
	// lwz r11,12(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// rlwinm r10,r11,0,20,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFF8;
	// rlwinm r10,r10,0,28,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFC0F;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82119764
	if (ctx.cr6.eq) goto loc_82119764;
loc_8211975C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82119764:
	// lwz r11,700(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 700);
	// rlwinm r10,r11,0,20,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF80;
	// rlwinm r10,r10,0,24,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFF8FF;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8211975c
	if (!ctx.cr6.eq) goto loc_8211975C;
	// lwz r11,16(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8211975c
	if (!ctx.cr6.eq) goto loc_8211975C;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lis r8,2
	ctx.r8.s64 = 131072;
	// ori r7,r10,22912
	ctx.r7.u64 = ctx.r10.u64 | 22912;
	// ori r6,r8,18636
	ctx.r6.u64 = ctx.r8.u64 | 18636;
	// lwz r10,-30240(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -30240);
	// lwzx r11,r3,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r7.u32);
	// lwzx r5,r3,r6
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r6.u32);
	// lwz r4,12(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// subf r10,r5,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r5.s64;
	// cmpw cr6,r10,r4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r4.s32, ctx.xer);
	// blt cr6,0x8211975c
	if (ctx.cr6.lt) goto loc_8211975C;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// ori r8,r10,18640
	ctx.r8.u64 = ctx.r10.u64 | 18640;
	// lwzx r7,r3,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r8.u32);
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x8211975c
	if (ctx.cr6.lt) goto loc_8211975C;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r11,6964(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6964);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8211975c
	if (!ctx.cr6.eq) goto loc_8211975C;
	// lwz r11,172(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 172);
	// rlwinm r10,r11,0,11,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1FFC00;
	// rlwinm r10,r10,0,20,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFF00FFF;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r3,r9,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82119740) {
	__imp__sub_82119740(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821197F8) {
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
	// addis r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 65536;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,22924
	ctx.r11.s64 = ctx.r11.s64 + 22924;
	// lwz r11,504(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 504);
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// blt cr6,0x82119870
	if (ctx.cr6.lt) goto loc_82119870;
	// cmpwi cr6,r11,18
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 18, ctx.xer);
	// bgt cr6,0x82119870
	if (ctx.cr6.gt) goto loc_82119870;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r10,r11,23604
	ctx.r10.u64 = ctx.r11.u64 | 23604;
	// lwzx r3,r3,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	// bl 0x82332af8
	ctx.lr = 0x82119838;
	sub_82332AF8(ctx, base);
	// lbz r9,1665(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1665);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82119870
	if (ctx.cr6.eq) goto loc_82119870;
	// addis r11,r31,3
	ctx.r11.s64 = ctx.r31.s64 + 196608;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r11,r11,-4440
	ctx.r11.s64 = ctx.r11.s64 + -4440;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// oris r9,r10,32
	ctx.r9.u64 = ctx.r10.u64 | 2097152;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
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
loc_82119870:
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

PPC_WEAK_FUNC(sub_821197F8) {
	__imp__sub_821197F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82119888) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf64
	ctx.lr = 0x82119890;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r23,r7
	ctx.r23.u64 = ctx.r7.u64;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// bl 0x82332c40
	ctx.lr = 0x821198B0;
	sub_82332C40(ctx, base);
	// cmplwi cr6,r3,2
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// bge cr6,0x821198c4
	if (!ctx.cr6.lt) goto loc_821198C4;
loc_821198B8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
loc_821198C4:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// subfic r10,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r11,r9,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2;
	// addi r30,r11,-1
	ctx.r30.s64 = ctx.r11.s64 + -1;
	// bne cr6,0x821198e8
	if (!ctx.cr6.eq) goto loc_821198E8;
	// li r28,0
	ctx.r28.s64 = 0;
	// b 0x8211990c
	goto loc_8211990C;
loc_821198E8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x820da4f0
	ctx.lr = 0x821198F4;
	sub_820DA4F0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwinm r10,r3,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	// subfc r9,r3,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r3.u32;
	ctx.r9.s64 = ctx.r11.s64 - ctx.r3.s64;
	// rlwinm r8,r11,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// subfe r7,r8,r10
	temp.u8 = (~ctx.r8.u32 + ctx.r10.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r28,r7,r3
	ctx.r28.u64 = ctx.r7.u64 & ctx.r3.u64;
loc_8211990C:
	// lis r11,-30584
	ctx.r11.s64 = -2004353024;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// addi r27,r30,15
	ctx.r27.s64 = ctx.r30.s64 + 15;
	// ori r29,r11,34953
	ctx.r29.u64 = ctx.r11.u64 | 34953;
loc_8211991C:
	// add r11,r27,r31
	ctx.r11.u64 = ctx.r27.u64 + ctx.r31.u64;
	// mulhw r10,r11,r29
	ctx.r10.s64 = (int64_t(ctx.r11.s32) * int64_t(ctx.r29.s32)) >> 32;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// srawi r10,r10,3
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 3;
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r9,r10,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r8,r10,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	// subf r31,r8,r11
	ctx.r31.s64 = ctx.r11.s64 - ctx.r8.s64;
	// cmpw cr6,r31,r28
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r28.s32, ctx.xer);
	// beq cr6,0x821198b8
	if (ctx.cr6.eq) goto loc_821198B8;
	// addi r11,r31,136
	ctx.r11.s64 = ctx.r31.s64 + 136;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r10,r26
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r26.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8211991c
	if (ctx.cr6.eq) goto loc_8211991C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82332af8
	ctx.lr = 0x82119964;
	sub_82332AF8(ctx, base);
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// cmpw cr6,r11,r24
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r24.s32, ctx.xer);
	// bne cr6,0x8211991c
	if (!ctx.cr6.eq) goto loc_8211991C;
	// clrlwi r11,r23,24
	ctx.r11.u64 = ctx.r23.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82119990
	if (ctx.cr6.eq) goto loc_82119990;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82332008
	ctx.lr = 0x82119988;
	sub_82332008(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8211991c
	if (ctx.cr6.eq) goto loc_8211991C;
loc_82119990:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82332b10
	ctx.lr = 0x82119998;
	sub_82332B10(ctx, base);
	// clrlwi r11,r25,24
	ctx.r11.u64 = ctx.r25.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821199b0
	if (ctx.cr6.eq) goto loc_821199B0;
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8211991c
	if (ctx.cr6.eq) goto loc_8211991C;
loc_821199B0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82119888) {
	__imp__sub_82119888(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821199BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821199BC) {
	__imp__sub_821199BC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821199C0) {
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x821199e8
	if (!ctx.cr6.eq) goto loc_821199E8;
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
loc_821199E8:
	// srawi r11,r4,5
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 5;
	// clrlwi r10,r4,27
	ctx.r10.u64 = ctx.r4.u32 & 0x1F;
	// addis r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 65536;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r9,r9,-17301
	ctx.r9.s64 = ctx.r9.s64 + -17301;
	// slw r6,r8,r10
	ctx.r6.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r10.u8 & 0x3F));
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r7,r3
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r3.u32);
	// and r3,r6,r5
	ctx.r3.u64 = ctx.r6.u64 & ctx.r5.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// beq cr6,0x82119a20
	if (ctx.cr6.eq) goto loc_82119A20;
	// bl 0x82332b10
	ctx.lr = 0x82119A1C;
	sub_82332B10(ctx, base);
	// lwz r3,64(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
loc_82119A20:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821199C0) {
	__imp__sub_821199C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82119A30) {
	PPC_FUNC_PROLOGUE();
	// addis r10,r4,1
	ctx.r10.s64 = ctx.r4.s64 + 65536;
	// addi r10,r10,9324
	ctx.r10.s64 = ctx.r10.s64 + 9324;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r3,r9,r3
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r3.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82119A30) {
	__imp__sub_82119A30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82119A44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82119A44) {
	__imp__sub_82119A44(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82119A48) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addis r10,r3,1
	ctx.r10.s64 = ctx.r3.s64 + 65536;
	// addi r10,r10,22924
	ctx.r10.s64 = ctx.r10.s64 + 22924;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82119af0
	if (ctx.cr6.eq) goto loc_82119AF0;
	// lwz r11,504(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 504);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82119af0
	if (ctx.cr6.eq) goto loc_82119AF0;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82119af0
	if (ctx.cr6.eq) goto loc_82119AF0;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x82119af0
	if (ctx.cr6.eq) goto loc_82119AF0;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// rlwinm r11,r9,0,20,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xC00;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82119af0
	if (!ctx.cr6.eq) goto loc_82119AF0;
	// lwz r11,700(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 700);
	// rlwinm r8,r11,0,20,24
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF80;
	// rlwinm r8,r8,0,24,20
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFF8FF;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x82119af0
	if (!ctx.cr6.eq) goto loc_82119AF0;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r11,6964(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6964);
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x82119af0
	if (!ctx.cr6.eq) goto loc_82119AF0;
	// lwz r11,172(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 172);
	// rlwinm r10,r11,0,11,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82119af0
	if (!ctx.cr6.eq) goto loc_82119AF0;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x82119ae8
	if (!ctx.cr6.gt) goto loc_82119AE8;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// bgt cr6,0x82119ae8
	if (ctx.cr6.gt) goto loc_82119AE8;
	// rlwinm r10,r9,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x8;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82119af0
	if (!ctx.cr6.eq) goto loc_82119AF0;
	// rlwinm r11,r11,0,20,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC00;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82119af0
	if (!ctx.cr6.eq) goto loc_82119AF0;
loc_82119AE8:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82119AF0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82119A48) {
	__imp__sub_82119A48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82119AF8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-17592
	ctx.r11.s64 = ctx.r11.s64 + -17592;
	// addi r9,r11,68
	ctx.r9.s64 = ctx.r11.s64 + 68;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// bge cr6,0x82119b40
	if (!ctx.cr6.lt) goto loc_82119B40;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-14684
	ctx.r4.s64 = ctx.r11.s64 + -14684;
	// bl 0x82280900
	ctx.lr = 0x82119B3C;
	sub_82280900(ctx, base);
	// b 0x82119bac
	goto loc_82119BAC;
loc_82119B40:
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// ble cr6,0x82119b58
	if (!ctx.cr6.gt) goto loc_82119B58;
	// addi r11,r11,100
	ctx.r11.s64 = ctx.r11.s64 + 100;
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x82119b60
	goto loc_82119B60;
loc_82119B58:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-28736
	ctx.r3.s64 = ctx.r11.s64 + -28736;
loc_82119B60:
	// bl 0x823deaf8
	ctx.lr = 0x82119B64;
	sub_823DEAF8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// blt cr6,0x82119b98
	if (ctx.cr6.lt) goto loc_82119B98;
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// bgt cr6,0x82119b98
	if (ctx.cr6.gt) goto loc_82119B98;
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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
loc_82119B98:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r4,r11,-14760
	ctx.r4.s64 = ctx.r11.s64 + -14760;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82280900
	ctx.lr = 0x82119BAC;
	sub_82280900(ctx, base);
loc_82119BAC:
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

PPC_WEAK_FUNC(sub_82119AF8) {
	__imp__sub_82119AF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82119BC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82119BC4) {
	__imp__sub_82119BC4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82119BC8) {
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
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82119af8
	ctx.lr = 0x82119BDC;
	sub_82119AF8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82119BC8) {
	__imp__sub_82119BC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82119BEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82119BEC) {
	__imp__sub_82119BEC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82119BF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x82119BF8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32188
	ctx.r11.s64 = -2109472768;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// lwz r11,6252(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6252);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82119d38
	if (ctx.cr6.eq) goto loc_82119D38;
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bge cr6,0x82119d38
	if (!ctx.cr6.lt) goto loc_82119D38;
	// lhz r11,124(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 124);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82119d38
	if (ctx.cr6.eq) goto loc_82119D38;
	// clrlwi r31,r11,16
	ctx.r31.u64 = ctx.r11.u32 & 0xFFFF;
	// bl 0x82332c40
	ctx.lr = 0x82119C3C;
	sub_82332C40(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// blt cr6,0x82119c5c
	if (ctx.cr6.lt) goto loc_82119C5C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,-14652
	ctx.r4.s64 = ctx.r11.s64 + -14652;
	// bl 0x822830e8
	ctx.lr = 0x82119C54;
	sub_822830E8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_82119C5C:
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// lhz r10,126(r29)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r29.u32 + 126);
	// lis r9,2
	ctx.r9.s64 = 131072;
	// addi r8,r11,-15680
	ctx.r8.s64 = ctx.r11.s64 + -15680;
	// ori r7,r9,61924
	ctx.r7.u64 = ctx.r9.u64 | 61924;
	// addis r11,r8,1
	ctx.r11.s64 = ctx.r8.s64 + 65536;
	// mullw r6,r28,r7
	ctx.r6.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r7.s32);
	// addi r5,r11,23180
	ctx.r5.s64 = ctx.r11.s64 + 23180;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r4,r6,r5
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r5.u32);
	// subf r11,r10,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r10.s64;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r30,r10,27,31,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// bl 0x82332af8
	ctx.lr = 0x82119C94;
	sub_82332AF8(ctx, base);
	// lwz r9,280(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 280);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82119ce0
	if (ctx.cr6.eq) goto loc_82119CE0;
	// lwz r11,284(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 284);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82119ce0
	if (ctx.cr6.eq) goto loc_82119CE0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823341e0
	ctx.lr = 0x82119CB8;
	sub_823341E0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82119ce0
	if (ctx.cr6.eq) goto loc_82119CE0;
	// clrlwi r30,r30,24
	ctx.r30.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82119cd8
	if (ctx.cr6.eq) goto loc_82119CD8;
	// lwz r31,280(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// b 0x82119cf8
	goto loc_82119CF8;
loc_82119CD8:
	// lwz r31,284(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	// b 0x82119cf8
	goto loc_82119CF8;
loc_82119CE0:
	// clrlwi r30,r30,24
	ctx.r30.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82119cf4
	if (ctx.cr6.eq) goto loc_82119CF4;
	// lwz r31,272(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// b 0x82119cf8
	goto loc_82119CF8;
loc_82119CF4:
	// lwz r31,276(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
loc_82119CF8:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82119d38
	if (ctx.cr6.eq) goto loc_82119D38;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823341c0
	ctx.lr = 0x82119D08;
	sub_823341C0(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82119d20
	if (ctx.cr6.eq) goto loc_82119D20;
	// addi r11,r28,1024
	ctx.r11.s64 = ctx.r28.s64 + 1024;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r4,r11,r3
	ctx.r4.u64 = ctx.r11.u64 + ctx.r3.u64;
	// b 0x82119d24
	goto loc_82119D24;
loc_82119D20:
	// lhz r4,126(r29)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r29.u32 + 126);
loc_82119D24:
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,-25976
	ctx.r10.s64 = ctx.r11.s64 + -25976;
	// lhz r5,190(r10)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r10.u32 + 190);
	// bl 0x820ee908
	ctx.lr = 0x82119D38;
	sub_820EE908(ctx, base);
loc_82119D38:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82119BF0) {
	__imp__sub_82119BF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82119D40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// addi r9,r11,-15680
	ctx.r9.s64 = ctx.r11.s64 + -15680;
	// ori r8,r10,61924
	ctx.r8.u64 = ctx.r10.u64 | 61924;
	// addis r10,r9,1
	ctx.r10.s64 = ctx.r9.s64 + 65536;
	// mullw r11,r3,r8
	ctx.r11.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r8.s32);
	// addi r10,r10,22924
	ctx.r10.s64 = ctx.r10.s64 + 22924;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r7,172(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 172);
	// rlwinm r6,r7,0,20,21
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xC00;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x82119d80
	if (ctx.cr6.eq) goto loc_82119D80;
	// lwz r11,364(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 364);
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82119d84
	if (ctx.cr6.eq) goto loc_82119D84;
loc_82119D80:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82119D84:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82119D40) {
	__imp__sub_82119D40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82119D8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82119D8C) {
	__imp__sub_82119D8C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82119D90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x82119D98;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// beq cr6,0x82119df4
	if (ctx.cr6.eq) goto loc_82119DF4;
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// beq cr6,0x82119dc4
	if (ctx.cr6.eq) goto loc_82119DC4;
	// cmplwi cr6,r11,13
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 13, ctx.xer);
	// bne cr6,0x82119dec
	if (!ctx.cr6.eq) goto loc_82119DEC;
loc_82119DC4:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lhz r31,126(r29)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r29.u32 + 126);
	// bl 0x82332af8
	ctx.lr = 0x82119DD0;
	sub_82332AF8(ctx, base);
	// lwz r4,76(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82119dec
	if (ctx.cr6.eq) goto loc_82119DEC;
	// li r3,-1
	ctx.r3.s64 = -1;
	// clrlwi r6,r25,16
	ctx.r6.u64 = ctx.r25.u32 & 0xFFFF;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x820ee9e0
	ctx.lr = 0x82119DEC;
	sub_820EE9E0(ctx, base);
loc_82119DEC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_82119DF4:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// rlwinm r10,r11,0,20,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC00;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82119dc4
	if (ctx.cr6.eq) goto loc_82119DC4;
	// bl 0x82141398
	ctx.lr = 0x82119E08;
	sub_82141398(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x82119dec
	if (!ctx.cr6.gt) goto loc_82119DEC;
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// li r27,1
	ctx.r27.s64 = 1;
	// addi r10,r11,-15680
	ctx.r10.s64 = ctx.r11.s64 + -15680;
	// addis r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 65536;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// addi r11,r11,23288
	ctx.r11.s64 = ctx.r11.s64 + 23288;
	// ori r9,r10,61924
	ctx.r9.u64 = ctx.r10.u64 | 61924;
loc_82119E34:
	// lwz r10,-192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -192);
	// rlwinm r8,r10,0,20,21
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xC00;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82119e58
	if (ctx.cr6.eq) goto loc_82119E58;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lhz r8,126(r29)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r29.u32 + 126);
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// beq cr6,0x82119e5c
	if (ctx.cr6.eq) goto loc_82119E5C;
loc_82119E58:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82119E5C:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82119e80
	if (!ctx.cr6.eq) goto loc_82119E80;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cmpw cr6,r30,r28
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r28.s32, ctx.xer);
	// blt cr6,0x82119e34
	if (ctx.cr6.lt) goto loc_82119E34;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_82119E80:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lhz r31,126(r29)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r29.u32 + 126);
	// bl 0x82332af8
	ctx.lr = 0x82119E8C;
	sub_82332AF8(ctx, base);
	// lwz r4,72(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82119ea8
	if (ctx.cr6.eq) goto loc_82119EA8;
	// clrlwi r6,r25,16
	ctx.r6.u64 = ctx.r25.u32 & 0xFFFF;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// slw r3,r27,r30
	ctx.r3.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r27.u32 << (ctx.r30.u8 & 0x3F));
	// bl 0x820ee9e0
	ctx.lr = 0x82119EA8;
	sub_820EE9E0(ctx, base);
loc_82119EA8:
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 1, ctx.xer);
	// ble cr6,0x82119dec
	if (!ctx.cr6.gt) goto loc_82119DEC;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lhz r31,126(r29)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r29.u32 + 126);
	// bl 0x82332af8
	ctx.lr = 0x82119EBC;
	sub_82332AF8(ctx, base);
	// lwz r4,76(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82119dec
	if (ctx.cr6.eq) goto loc_82119DEC;
	// slw r11,r27,r30
	ctx.r11.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r27.u32 << (ctx.r30.u8 & 0x3F));
	// not r3,r11
	ctx.r3.u64 = ~ctx.r11.u64;
	// clrlwi r6,r25,16
	ctx.r6.u64 = ctx.r25.u32 & 0xFFFF;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x820ee9e0
	ctx.lr = 0x82119EDC;
	sub_820EE9E0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82119D90) {
	__imp__sub_82119D90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82119EE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82119EE4) {
	__imp__sub_82119EE4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82119EE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf64
	ctx.lr = 0x82119EF0;
	__savegprlr_23(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lwz r27,108(r8)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r8.u32 + 108);
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// lis r8,-32187
	ctx.r8.s64 = -2109407232;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// ori r7,r11,61924
	ctx.r7.u64 = ctx.r11.u64 | 61924;
	// addi r11,r8,-15680
	ctx.r11.s64 = ctx.r8.s64 + -15680;
	// mullw r8,r3,r7
	ctx.r8.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r7.s32);
	// add r30,r8,r11
	ctx.r30.u64 = ctx.r8.u64 + ctx.r11.u64;
	// clrlwi r31,r9,24
	ctx.r31.u64 = ctx.r9.u32 & 0xFF;
	// addis r28,r30,1
	ctx.r28.s64 = ctx.r30.s64 + 65536;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// addi r28,r28,22924
	ctx.r28.s64 = ctx.r28.s64 + 22924;
	// addi r24,r4,208
	ctx.r24.s64 = ctx.r4.s64 + 208;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82119f60
	if (ctx.cr6.eq) goto loc_82119F60;
	// lwz r11,112(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 112);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82119f48
	if (ctx.cr6.eq) goto loc_82119F48;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
loc_82119F48:
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x82119f60
	if (!ctx.cr6.eq) goto loc_82119F60;
	// lwz r11,116(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 116);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82119f60
	if (ctx.cr6.eq) goto loc_82119F60;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
loc_82119F60:
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x823341e0
	ctx.lr = 0x82119F68;
	sub_823341E0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82119f8c
	if (!ctx.cr6.eq) goto loc_82119F8C;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82119fb0
	if (ctx.cr6.eq) goto loc_82119FB0;
	// lwz r11,700(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 700);
	// rlwinm r10,r11,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82119fb0
	if (ctx.cr6.eq) goto loc_82119FB0;
loc_82119F8C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82119fa0
	if (ctx.cr6.eq) goto loc_82119FA0;
	// lwz r11,140(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 140);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82119fac
	if (!ctx.cr6.eq) goto loc_82119FAC;
loc_82119FA0:
	// lwz r11,136(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 136);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82119fb0
	if (ctx.cr6.eq) goto loc_82119FB0;
loc_82119FAC:
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
loc_82119FB0:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8211a0b0
	if (ctx.cr6.eq) goto loc_8211A0B0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82119ff8
	if (ctx.cr6.eq) goto loc_82119FF8;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82119fe8
	if (ctx.cr6.eq) goto loc_82119FE8;
	// addis r3,r30,3
	ctx.r3.s64 = ctx.r30.s64 + 196608;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// clrlwi r5,r25,16
	ctx.r5.u64 = ctx.r25.u32 & 0xFFFF;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r3,-7320
	ctx.r3.s64 = ctx.r3.s64 + -7320;
	// bl 0x820ee1e0
	ctx.lr = 0x82119FE0;
	sub_820EE1E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8211a034
	if (!ctx.cr6.eq) goto loc_8211A034;
loc_82119FE8:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r10,r11,22912
	ctx.r10.u64 = ctx.r11.u64 | 22912;
	// lwzx r4,r30,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// b 0x8211a028
	goto loc_8211A028;
loc_82119FF8:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x8211a01c
	if (ctx.cr6.eq) goto loc_8211A01C;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// clrlwi r5,r25,16
	ctx.r5.u64 = ctx.r25.u32 & 0xFFFF;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x820ee1e0
	ctx.lr = 0x8211A014;
	sub_820EE1E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8211a034
	if (!ctx.cr6.eq) goto loc_8211A034;
loc_8211A01C:
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// addi r10,r11,6968
	ctx.r10.s64 = ctx.r11.s64 + 6968;
	// lwz r4,11308(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 11308);
loc_8211A028:
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r3,r24,16
	ctx.r3.s64 = ctx.r24.s64 + 16;
	// bl 0x8231f840
	ctx.lr = 0x8211A034;
	sub_8231F840(ctx, base);
loc_8211A034:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lhz r3,126(r24)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r24.u32 + 126);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x820f9a68
	ctx.lr = 0x8211A044;
	sub_820F9A68(ctx, base);
	// lbz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 0);
	// cmplwi cr6,r11,13
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 13, ctx.xer);
	// beq cr6,0x8211a058
	if (ctx.cr6.eq) goto loc_8211A058;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8211a0b0
	if (!ctx.cr6.eq) goto loc_8211A0B0;
loc_8211A058:
	// lbz r11,1648(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 1648);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8211a074
	if (!ctx.cr6.eq) goto loc_8211A074;
	// lwz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 44);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x8211a078
	if (!ctx.cr6.eq) goto loc_8211A078;
loc_8211A074:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8211A078:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8211a0b0
	if (ctx.cr6.eq) goto loc_8211A0B0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82362d70
	ctx.lr = 0x8211A08C;
	sub_82362D70(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8211a0a0
	if (!ctx.cr6.eq) goto loc_8211A0A0;
	// li r11,1500
	ctx.r11.s64 = 1500;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_8211A0A0:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x820e1348
	ctx.lr = 0x8211A0B0;
	sub_820E1348(ctx, base);
loc_8211A0B0:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82119EE8) {
	__imp__sub_82119EE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8211A0B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf68
	ctx.lr = 0x8211A0C0;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8211a1b0
	if (ctx.cr6.eq) goto loc_8211A1B0;
	// lwz r11,1464(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 1464);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8211a1b0
	if (ctx.cr6.eq) goto loc_8211A1B0;
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8211a1b0
	if (ctx.cr6.eq) goto loc_8211A1B0;
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x82141398
	ctx.lr = 0x8211A0FC;
	sub_82141398(ctx, base);
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ori r29,r10,61924
	ctx.r29.u64 = ctx.r10.u64 | 61924;
	// addi r28,r11,-15680
	ctx.r28.s64 = ctx.r11.s64 + -15680;
	// ble cr6,0x8211a150
	if (!ctx.cr6.gt) goto loc_8211A150;
	// addis r11,r28,1
	ctx.r11.s64 = ctx.r28.s64 + 65536;
	// addi r31,r11,23288
	ctx.r31.s64 = ctx.r11.s64 + 23288;
loc_8211A11C:
	// lwz r11,-192(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -192);
	// rlwinm r10,r11,0,11,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8211a13c
	if (ctx.cr6.eq) goto loc_8211A13C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lhz r10,126(r27)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r27.u32 + 126);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x8211a1b8
	if (ctx.cr6.eq) goto loc_8211A1B8;
loc_8211A13C:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// add r31,r31,r29
	ctx.r31.u64 = ctx.r31.u64 + ctx.r29.u64;
	// bl 0x82141398
	ctx.lr = 0x8211A148;
	sub_82141398(ctx, base);
	// cmpw cr6,r30,r3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x8211a11c
	if (ctx.cr6.lt) goto loc_8211A11C;
loc_8211A150:
	// lbz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 0);
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// bne cr6,0x8211a18c
	if (!ctx.cr6.eq) goto loc_8211A18C;
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// rlwinm r10,r11,0,11,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8211a18c
	if (ctx.cr6.eq) goto loc_8211A18C;
	// addis r11,r28,1
	ctx.r11.s64 = ctx.r28.s64 + 65536;
	// lhz r10,126(r27)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r27.u32 + 126);
	// mullw r9,r26,r29
	ctx.r9.s64 = int64_t(ctx.r26.s32) * int64_t(ctx.r29.s32);
	// addi r8,r11,23288
	ctx.r8.s64 = ctx.r11.s64 + 23288;
	// li r11,1
	ctx.r11.s64 = 1;
	// lwzx r7,r9,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// cmpw cr6,r7,r10
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x8211a190
	if (ctx.cr6.eq) goto loc_8211A190;
loc_8211A18C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8211A190:
	// clrlwi r10,r24,24
	ctx.r10.u64 = ctx.r24.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8211a1a4
	if (!ctx.cr6.eq) goto loc_8211A1A4;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8211a1b0
	if (ctx.cr6.eq) goto loc_8211A1B0;
loc_8211A1A4:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r4,1464(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 1464);
	// bl 0x82104bb0
	ctx.lr = 0x8211A1B0;
	sub_82104BB0(ctx, base);
loc_8211A1B0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
loc_8211A1B8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,1464(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 1464);
	// bl 0x82104bb0
	ctx.lr = 0x8211A1C4;
	sub_82104BB0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8211A0B8) {
	__imp__sub_8211A0B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8211A1CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8211A1CC) {
	__imp__sub_8211A1CC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8211A1D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf58
	ctx.lr = 0x8211A1D8;
	__savegprlr_20(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// mr r20,r5
	ctx.r20.u64 = ctx.r5.u64;
	// mr r21,r7
	ctx.r21.u64 = ctx.r7.u64;
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// mr r22,r9
	ctx.r22.u64 = ctx.r9.u64;
	// addi r24,r4,208
	ctx.r24.s64 = ctx.r4.s64 + 208;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8211a20c
	if (!ctx.cr6.eq) goto loc_8211A20C;
	// lhz r29,124(r24)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r24.u32 + 124);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8211a3a4
	if (ctx.cr6.eq) goto loc_8211A3A4;
loc_8211A20C:
	// bl 0x82332c40
	ctx.lr = 0x8211A210;
	sub_82332C40(ctx, base);
	// cmplw cr6,r29,r3
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r3.u32, ctx.xer);
	// blt cr6,0x8211a230
	if (ctx.cr6.lt) goto loc_8211A230;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,-14596
	ctx.r4.s64 = ctx.r11.s64 + -14596;
	// bl 0x822830e8
	ctx.lr = 0x8211A228;
	sub_822830E8(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x823ddfa8
	__restgprlr_20(ctx, base);
	return;
loc_8211A230:
	// lbz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 0);
	// mr r25,r22
	ctx.r25.u64 = ctx.r22.u64;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bne cr6,0x8211a250
	if (!ctx.cr6.eq) goto loc_8211A250;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lhz r4,126(r24)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r24.u32 + 126);
	// bl 0x82119d40
	ctx.lr = 0x8211A24C;
	sub_82119D40(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
loc_8211A250:
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x823341c0
	ctx.lr = 0x8211A258;
	sub_823341C0(ctx, base);
	// clrlwi r11,r22,24
	ctx.r11.u64 = ctx.r22.u32 & 0xFF;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8211a2cc
	if (ctx.cr6.eq) goto loc_8211A2CC;
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r8,2
	ctx.r8.s64 = 131072;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lis r9,-32168
	ctx.r9.s64 = -2108162048;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// ori r5,r8,61924
	ctx.r5.u64 = ctx.r8.u64 | 61924;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lis r3,-32187
	ctx.r3.s64 = -2109407232;
	// rlwinm r4,r6,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r9,-30176
	ctx.r7.s64 = ctx.r9.s64 + -30176;
	// mullw r11,r31,r5
	ctx.r11.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r5.s32);
	// lwzx r28,r4,r7
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r7.u32);
	// addi r10,r3,-15680
	ctx.r10.s64 = ctx.r3.s64 + -15680;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// add r27,r11,r10
	ctx.r27.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addis r26,r27,1
	ctx.r26.s64 = ctx.r27.s64 + 65536;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r26,r26,22924
	ctx.r26.s64 = ctx.r26.s64 + 22924;
	// bl 0x82118988
	ctx.lr = 0x8211A2B8;
	sub_82118988(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82332c20
	ctx.lr = 0x8211A2C4;
	sub_82332C20(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x8211a2e4
	goto loc_8211A2E4;
loc_8211A2CC:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lhz r3,126(r24)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r24.u32 + 126);
	// li r27,0
	ctx.r27.s64 = 0;
	// li r26,0
	ctx.r26.s64 = 0;
	// bl 0x82284650
	ctx.lr = 0x8211A2E0;
	sub_82284650(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
loc_8211A2E4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82332af8
	ctx.lr = 0x8211A2EC;
	sub_82332AF8(ctx, base);
	// clrlwi r11,r25,24
	ctx.r11.u64 = ctx.r25.u32 & 0xFF;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8211a320
	if (ctx.cr6.eq) goto loc_8211A320;
	// bl 0x822d9478
	ctx.lr = 0x8211A300;
	sub_822D9478(ctx, base);
	// addis r5,r27,2
	ctx.r5.s64 = ctx.r27.s64 + 131072;
	// addis r4,r27,2
	ctx.r4.s64 = ctx.r27.s64 + 131072;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r5,19916
	ctx.r5.s64 = ctx.r5.s64 + 19916;
	// addi r4,r4,18452
	ctx.r4.s64 = ctx.r4.s64 + 18452;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// bl 0x82333a60
	ctx.lr = 0x8211A320;
	sub_82333A60(ctx, base);
loc_8211A320:
	// subfic r11,r30,0
	ctx.xer.ca = ctx.r30.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r30.s64;
	// lwz r10,380(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 380);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// subfe r9,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// rlwinm r11,r9,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// or r7,r8,r10
	ctx.r7.u64 = ctx.r8.u64 | ctx.r10.u64;
	// stw r7,380(r23)
	PPC_STORE_U32(ctx.r23.u32 + 380, ctx.r7.u32);
	// bl 0x82119d90
	ctx.lr = 0x8211A350;
	sub_82119D90(ctx, base);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// mr r9,r22
	ctx.r9.u64 = ctx.r22.u64;
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82119ee8
	ctx.lr = 0x8211A374;
	sub_82119EE8(ctx, base);
	// lbz r6,1630(r25)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r25.u32 + 1630);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x8211a390
	if (!ctx.cr6.eq) goto loc_8211A390;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82119bf0
	ctx.lr = 0x8211A390;
	sub_82119BF0(ctx, base);
loc_8211A390:
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8211a0b8
	ctx.lr = 0x8211A3A4;
	sub_8211A0B8(ctx, base);
loc_8211A3A4:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x823ddfa8
	__restgprlr_20(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8211A1D0) {
	__imp__sub_8211A1D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8211A3AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8211A3AC) {
	__imp__sub_8211A3AC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8211A3B0) {
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
	// lfs f13,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// lfs f10,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lis r10,2
	ctx.r10.s64 = 131072;
	// lfs f7,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// addi r9,r11,-15680
	ctx.r9.s64 = ctx.r11.s64 + -15680;
	// lfs f0,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// ori r8,r10,61924
	ctx.r8.u64 = ctx.r10.u64 | 61924;
	// lfs f12,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f9,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f12,f10
	ctx.f8.f64 = double(float(ctx.f12.f64 - ctx.f10.f64));
	// fsubs f6,f9,f7
	ctx.f6.f64 = double(float(ctx.f9.f64 - ctx.f7.f64));
	// stfs f11,80(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f8,84(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addis r11,r9,2
	ctx.r11.s64 = ctx.r9.s64 + 131072;
	// stfs f6,88(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// mullw r10,r3,r8
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r8.s32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r11,r11,2116
	ctx.r11.s64 = ctx.r11.s64 + 2116;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x822d4b08
	ctx.lr = 0x8211A424;
	sub_822D4B08(ctx, base);
	// lfs f13,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// fsubs f5,f13,f12
	ctx.f5.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// lfs f8,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f8.f64 = double(temp.f32);
	// lfs f4,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// lfs f9,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f2,f4,f9
	ctx.f2.f64 = double(float(ctx.f4.f64 - ctx.f9.f64));
	// lfs f7,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f7.f64 = double(temp.f32);
	// lfs f3,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// lfs f10,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f1,f3,f10
	ctx.f1.f64 = double(float(ctx.f3.f64 - ctx.f10.f64));
	// lfs f6,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f6.f64 = double(temp.f32);
	// lfs f11,27440(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 27440);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f0,f5,f8
	ctx.f0.f64 = double(float(ctx.f5.f64 * ctx.f8.f64));
	// fmadds f5,f2,f7,f0
	ctx.f5.f64 = double(float(ctx.f2.f64 * ctx.f7.f64 + ctx.f0.f64));
	// fmadds f0,f1,f6,f5
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f6.f64 + ctx.f5.f64));
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// blt cr6,0x8211a518
	if (ctx.cr6.lt) goto loc_8211A518;
	// lfs f11,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fmuls f5,f11,f8
	ctx.f5.f64 = double(float(ctx.f11.f64 * ctx.f8.f64));
	// lfs f2,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f1.f64 = double(temp.f32);
	// lfs f11,-14548(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -14548);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f11,f0,f11
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// fmadds f5,f7,f2,f5
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f2.f64 + ctx.f5.f64));
	// fmadds f2,f6,f1,f5
	ctx.f2.f64 = double(float(ctx.f6.f64 * ctx.f1.f64 + ctx.f5.f64));
	// fcmpu cr6,f11,f2
	ctx.cr6.compare(ctx.f11.f64, ctx.f2.f64);
	// bgt cr6,0x8211a518
	if (ctx.cr6.gt) goto loc_8211A518;
	// fmadds f11,f8,f0,f12
	ctx.f11.f64 = double(float(ctx.f8.f64 * ctx.f0.f64 + ctx.f12.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmadds f10,f6,f0,f10
	ctx.f10.f64 = double(float(ctx.f6.f64 * ctx.f0.f64 + ctx.f10.f64));
	// fmadds f9,f7,f0,f9
	ctx.f9.f64 = double(float(ctx.f7.f64 * ctx.f0.f64 + ctx.f9.f64));
	// lfs f5,8528(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8528);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f0,f11,f13
	ctx.f0.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fsubs f13,f10,f3
	ctx.f13.f64 = double(float(ctx.f10.f64 - ctx.f3.f64));
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fsubs f12,f9,f4
	ctx.f12.f64 = double(float(ctx.f9.f64 - ctx.f4.f64));
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f13,f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fmadds f12,f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f13.f64));
	// fsqrts f4,f12
	ctx.f4.f64 = double(float(sqrt(ctx.f12.f64)));
	// fcmpu cr6,f4,f5
	ctx.cr6.compare(ctx.f4.f64, ctx.f5.f64);
	// bgt cr6,0x8211a518
	if (ctx.cr6.gt) goto loc_8211A518;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32181
	ctx.r10.s64 = -2109014016;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r9,r10,-22896
	ctx.r9.s64 = ctx.r10.s64 + -22896;
	// li r3,2046
	ctx.r3.s64 = 2046;
	// lfs f0,6056(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6056);
	ctx.f0.f64 = double(temp.f32);
	// fnmsubs f13,f8,f0,f11
	ctx.f13.f64 = double(float(-(ctx.f8.f64 * ctx.f0.f64 - ctx.f11.f64)));
	// stfs f13,112(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fnmsubs f12,f7,f0,f9
	ctx.f12.f64 = double(float(-(ctx.f7.f64 * ctx.f0.f64 - ctx.f9.f64)));
	// stfs f12,116(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fnmsubs f11,f6,f0,f10
	ctx.f11.f64 = double(float(-(ctx.f6.f64 * ctx.f0.f64 - ctx.f10.f64)));
	// stfs f11,120(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lwz r5,3540(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 3540);
	// bl 0x820f9a68
	ctx.lr = 0x8211A518;
	sub_820F9A68(ctx, base);
loc_8211A518:
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

PPC_WEAK_FUNC(sub_8211A3B0) {
	__imp__sub_8211A3B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8211A530) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bge cr6,0x8211a5c4
	if (!ctx.cr6.lt) goto loc_8211A5C4;
	// lis r9,-32166
	ctx.r9.s64 = -2108030976;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// addi r10,r11,9240
	ctx.r10.s64 = ctx.r11.s64 + 9240;
	// lbz r9,29088(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 29088);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8211a570
	if (!ctx.cr6.eq) goto loc_8211A570;
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// lwz r11,-32312(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -32312);
	// subfc r8,r11,r3
	ctx.xer.ca = ctx.r3.u32 >= ctx.r11.u32;
	ctx.r8.s64 = ctx.r3.s64 - ctx.r11.s64;
	// eqv r7,r11,r3
	ctx.r7.u64 = ~(ctx.r11.u64 ^ ctx.r3.u64);
	// rlwinm r6,r7,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x1;
	// addze r5,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r5.s64 = temp.s64;
	// clrlwi r11,r5,31
	ctx.r11.u64 = ctx.r5.u32 & 0x1;
	// b 0x8211a588
	goto loc_8211A588;
loc_8211A570:
	// mulli r11,r3,9780
	ctx.r11.s64 = ctx.r3.s64 * 9780;
	// addi r8,r10,16
	ctx.r8.s64 = ctx.r10.s64 + 16;
	// lwzx r11,r11,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// addi r7,r11,-2
	ctx.r7.s64 = ctx.r11.s64 + -2;
	// cntlzw r6,r7
	ctx.r6.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm r11,r6,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
loc_8211A588:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8211a5c4
	if (ctx.cr6.eq) goto loc_8211A5C4;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8211a5a8
	if (ctx.cr6.eq) goto loc_8211A5A8;
	// mulli r11,r3,9780
	ctx.r11.s64 = ctx.r3.s64 * 9780;
	// addi r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 + 24;
	// lhzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
loc_8211A5A8:
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lis r10,-32187
	ctx.r10.s64 = -2109407232;
	// ori r9,r11,61924
	ctx.r9.u64 = ctx.r11.u64 | 61924;
	// addi r10,r10,-15680
	ctx.r10.s64 = ctx.r10.s64 + -15680;
	// mullw r11,r3,r9
	ctx.r11.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r9.s32);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
loc_8211A5C4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8211A530) {
	__imp__sub_8211A530(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8211A5CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8211A5CC) {
	__imp__sub_8211A5CC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8211A5D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8211A5D8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// bl 0x8211a530
	ctx.lr = 0x8211A5F4;
	sub_8211A530(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// beq cr6,0x8211a61c
	if (ctx.cr6.eq) goto loc_8211A61C;
	// addis r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 65536;
	// addi r3,r3,22924
	ctx.r3.s64 = ctx.r3.s64 + 22924;
	// bl 0x82321048
	ctx.lr = 0x8211A610;
	sub_82321048(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_8211A61C:
	// lis r10,-32181
	ctx.r10.s64 = -2109014016;
	// mulli r11,r31,404
	ctx.r11.s64 = ctx.r31.s64 * 404;
	// addi r10,r10,-5696
	ctx.r10.s64 = ctx.r10.s64 + -5696;
	// addi r10,r10,40
	ctx.r10.s64 = ctx.r10.s64 + 40;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x822da518
	ctx.lr = 0x8211A634;
	sub_822DA518(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8211A5D0) {
	__imp__sub_8211A5D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8211A640) {
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
	// bl 0x8211a530
	ctx.lr = 0x8211A65C;
	sub_8211A530(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8211a698
	if (ctx.cr6.eq) goto loc_8211A698;
	// addis r11,r3,2
	ctx.r11.s64 = ctx.r3.s64 + 131072;
	// addi r11,r11,2116
	ctx.r11.s64 = ctx.r11.s64 + 2116;
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
loc_8211A698:
	// lis r11,-32181
	ctx.r11.s64 = -2109014016;
	// mulli r10,r4,404
	ctx.r10.s64 = ctx.r4.s64 * 404;
	// addi r11,r11,-5696
	ctx.r11.s64 = ctx.r11.s64 + -5696;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f0,28(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// lfs f13,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// lfs f0,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// bge cr6,0x8211a70c
	if (!ctx.cr6.lt) goto loc_8211A70C;
	// lwz r11,220(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 220);
	// rlwinm r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8211a6e4
	if (ctx.cr6.eq) goto loc_8211A6E4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,6052(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6052);
	ctx.f13.f64 = double(temp.f32);
	// b 0x8211a704
	goto loc_8211A704;
loc_8211A6E4:
	// rlwinm r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8211a6fc
	if (ctx.cr6.eq) goto loc_8211A6FC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,3844(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3844);
	ctx.f13.f64 = double(temp.f32);
	// b 0x8211a704
	goto loc_8211A704;
loc_8211A6FC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,6024(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6024);
	ctx.f13.f64 = double(temp.f32);
loc_8211A704:
	// fadds f0,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
loc_8211A70C:
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

PPC_WEAK_FUNC(sub_8211A640) {
	__imp__sub_8211A640(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8211A720) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8211A728;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lfs f0,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fneg f13,f0
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// lfs f12,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// fneg f9,f10
	ctx.f9.u64 = ctx.f10.u64 ^ 0x8000000000000000;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// fmr f11,f12
	ctx.f11.f64 = ctx.f12.f64;
	// fmuls f8,f12,f13
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fmadds f7,f10,f12,f8
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f12.f64 + ctx.f8.f64));
	// fnmadds f6,f0,f9,f7
	ctx.f6.f64 = double(float(-(ctx.f0.f64 * ctx.f9.f64 + ctx.f7.f64)));
	// fmadds f5,f12,f6,f13
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f6.f64 + ctx.f13.f64));
	// stfs f5,80(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmadds f4,f10,f6,f12
	ctx.f4.f64 = double(float(ctx.f10.f64 * ctx.f6.f64 + ctx.f12.f64));
	// stfs f4,84(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmadds f3,f0,f6,f9
	ctx.f3.f64 = double(float(ctx.f0.f64 * ctx.f6.f64 + ctx.f9.f64));
	// stfs f3,88(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x822d3ea0
	ctx.lr = 0x8211A778;
	sub_822D3EA0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f0,2412(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2412);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// bl 0x822d4e08
	ctx.lr = 0x8211A794;
	sub_822D4E08(ctx, base);
	// lfs f2,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmuls f1,f2,f2
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f2.f64));
	// lfs f13,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,12168(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f11,f13,f13,f1
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f1.f64));
	// fmadds f10,f12,f12,f11
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f11.f64));
	// fsqrts f9,f10
	ctx.f9.f64 = double(float(sqrt(ctx.f10.f64)));
	// fneg f8,f9
	ctx.f8.u64 = ctx.f9.u64 ^ 0x8000000000000000;
	// fsel f7,f8,f0,f9
	ctx.f7.f64 = ctx.f8.f64 >= 0.0 ? ctx.f0.f64 : ctx.f9.f64;
	// fdivs f6,f0,f7
	ctx.f6.f64 = double(float(ctx.f0.f64 / ctx.f7.f64));
	// fmuls f5,f2,f6
	ctx.f5.f64 = double(float(ctx.f2.f64 * ctx.f6.f64));
	// stfs f5,4(r30)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// fmuls f4,f12,f6
	ctx.f4.f64 = double(float(ctx.f12.f64 * ctx.f6.f64));
	// stfs f4,8(r30)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// fmuls f3,f13,f6
	ctx.f3.f64 = double(float(ctx.f13.f64 * ctx.f6.f64));
	// stfs f3,0(r30)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// lfs f2,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f0,f5,f1
	ctx.f0.f64 = double(float(ctx.f5.f64 * ctx.f1.f64));
	// fmsubs f13,f2,f4,f0
	ctx.f13.f64 = double(float(ctx.f2.f64 * ctx.f4.f64 - ctx.f0.f64));
	// stfs f13,0(r29)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// lfs f12,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f10,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f9.f64));
	// fmsubs f7,f12,f11,f8
	ctx.f7.f64 = double(float(ctx.f12.f64 * ctx.f11.f64 - ctx.f8.f64));
	// stfs f7,4(r29)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r29.u32 + 4, temp.u32);
	// lfs f6,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f2,f4,f3
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f3.f64));
	// fmsubs f1,f6,f5,f2
	ctx.f1.f64 = double(float(ctx.f6.f64 * ctx.f5.f64 - ctx.f2.f64));
	// stfs f1,8(r29)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 8, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8211A720) {
	__imp__sub_8211A720(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8211A830) {
	PPC_FUNC_PROLOGUE();
	// b 0x823342d8
	sub_823342D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8211A830) {
	__imp__sub_8211A830(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8211A834) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8211A834) {
	__imp__sub_8211A834(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8211A838) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf68
	ctx.lr = 0x8211A840;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r7,0,27,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x18;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// mr r24,r8
	ctx.r24.u64 = ctx.r8.u64;
	// mr r27,r9
	ctx.r27.u64 = ctx.r9.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8211a878
	if (ctx.cr6.eq) goto loc_8211A878;
	// li r25,0
	ctx.r25.s64 = 0;
	// stw r25,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r25.u32);
	// stw r25,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r25.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
loc_8211A878:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332af8
	ctx.lr = 0x8211A880;
	sub_82332AF8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332b10
	ctx.lr = 0x8211A88C;
	sub_82332B10(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r25,0
	ctx.r25.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r25,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r25.u32);
	// li r28,-1
	ctx.r28.s64 = -1;
	// rlwinm r31,r26,30,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 30) & 0x1;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x823342d8
	ctx.lr = 0x8211A8B0;
	sub_823342D8(ctx, base);
	// lis r11,-32181
	ctx.r11.s64 = -2109014016;
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r11,-22896
	ctx.r10.s64 = ctx.r11.s64 + -22896;
	// addi r11,r9,-1
	ctx.r11.s64 = ctx.r9.s64 + -1;
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// bgt cr6,0x8211aa50
	if (ctx.cr6.gt) goto loc_8211AA50;
	// lis r12,-32238
	ctx.r12.s64 = -2112749568;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-22304
	ctx.r12.s64 = ctx.r12.s64 + -22304;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_8211A908;
	case 1:
		goto loc_8211A930;
	case 2:
		goto loc_8211A960;
	case 3:
		goto loc_8211A990;
	case 4:
		goto loc_8211A9A8;
	case 5:
		goto loc_8211A9D8;
	case 6:
		goto loc_8211A9F0;
	case 7:
		goto loc_8211AA14;
	case 8:
		goto loc_8211AA2C;
	case 9:
		goto loc_8211AA44;
	default:
		return;
	}
	// lwz r16,-22264(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -22264);
	// lwz r16,-22224(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -22224);
	// lwz r16,-22176(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -22176);
	// lwz r16,-22128(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -22128);
	// lwz r16,-22104(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -22104);
	// lwz r16,-22056(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -22056);
	// lwz r16,-22032(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -22032);
	// lwz r16,-21996(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -21996);
	// lwz r16,-21972(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -21972);
	// lwz r16,-21948(r17)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r17.u32 + -21948);
loc_8211A908:
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// addic r9,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// subfe r28,r9,r11
	temp.u8 = (~ctx.r9.u32 + ctx.r11.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r28.u64 = ~ctx.r9.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r10,1776
	ctx.r9.s64 = ctx.r10.s64 + 1776;
	// bne cr6,0x8211a928
	if (!ctx.cr6.eq) goto loc_8211A928;
	// addi r9,r10,1280
	ctx.r9.s64 = ctx.r10.s64 + 1280;
loc_8211A928:
	// lwzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// b 0x8211aa4c
	goto loc_8211AA4C;
loc_8211A930:
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cntlzw r9,r11
	ctx.r9.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// addi r9,r10,1900
	ctx.r9.s64 = ctx.r10.s64 + 1900;
	// xori r11,r8,1
	ctx.r11.u64 = ctx.r8.u64 ^ 1;
	// addi r28,r11,2
	ctx.r28.s64 = ctx.r11.s64 + 2;
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// bne cr6,0x8211a958
	if (!ctx.cr6.eq) goto loc_8211A958;
	// addi r9,r10,1404
	ctx.r9.s64 = ctx.r10.s64 + 1404;
loc_8211A958:
	// lwzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// b 0x8211aa4c
	goto loc_8211AA4C;
loc_8211A960:
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cntlzw r9,r11
	ctx.r9.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// addi r9,r10,2024
	ctx.r9.s64 = ctx.r10.s64 + 2024;
	// xori r11,r8,1
	ctx.r11.u64 = ctx.r8.u64 ^ 1;
	// addi r28,r11,8
	ctx.r28.s64 = ctx.r11.s64 + 8;
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// bne cr6,0x8211a988
	if (!ctx.cr6.eq) goto loc_8211A988;
	// addi r9,r10,1528
	ctx.r9.s64 = ctx.r10.s64 + 1528;
loc_8211A988:
	// lwzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// b 0x8211aa4c
	goto loc_8211AA4C;
loc_8211A990:
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r10,1152
	ctx.r9.s64 = ctx.r10.s64 + 1152;
	// li r28,4
	ctx.r28.s64 = 4;
	// lwzx r8,r11,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// stw r8,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r8.u32);
	// b 0x8211aa50
	goto loc_8211AA50;
loc_8211A9A8:
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cntlzw r9,r11
	ctx.r9.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// addi r9,r10,2148
	ctx.r9.s64 = ctx.r10.s64 + 2148;
	// xori r11,r8,1
	ctx.r11.u64 = ctx.r8.u64 ^ 1;
	// addi r28,r11,5
	ctx.r28.s64 = ctx.r11.s64 + 5;
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// bne cr6,0x8211a9d0
	if (!ctx.cr6.eq) goto loc_8211A9D0;
	// addi r9,r10,1652
	ctx.r9.s64 = ctx.r10.s64 + 1652;
loc_8211A9D0:
	// lwzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// b 0x8211aa4c
	goto loc_8211AA4C;
loc_8211A9D8:
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r10,1152
	ctx.r9.s64 = ctx.r10.s64 + 1152;
	// li r28,7
	ctx.r28.s64 = 7;
	// lwzx r8,r11,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// stw r8,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r8.u32);
	// b 0x8211aa50
	goto loc_8211AA50;
loc_8211A9F0:
	// lwz r11,268(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 268);
	// li r28,10
	ctx.r28.s64 = 10;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8211aa0c
	if (ctx.cr6.eq) goto loc_8211AA0C;
	// rlwinm r9,r29,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// b 0x8211aa4c
	goto loc_8211AA4C;
loc_8211AA0C:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// b 0x8211aa4c
	goto loc_8211AA4C;
loc_8211AA14:
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r10,904
	ctx.r9.s64 = ctx.r10.s64 + 904;
	// li r28,12
	ctx.r28.s64 = 12;
	// lwzx r8,r11,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// stw r8,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r8.u32);
	// b 0x8211aa50
	goto loc_8211AA50;
loc_8211AA2C:
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r10,1028
	ctx.r9.s64 = ctx.r10.s64 + 1028;
	// li r28,13
	ctx.r28.s64 = 13;
	// lwzx r8,r11,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// stw r8,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r8.u32);
	// b 0x8211aa50
	goto loc_8211AA50;
loc_8211AA44:
	// lwz r11,1076(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1076);
	// li r28,14
	ctx.r28.s64 = 14;
loc_8211AA4C:
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
loc_8211AA50:
	// rlwinm r11,r26,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0x10;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8211aa60
	if (ctx.cr6.eq) goto loc_8211AA60;
	// stw r25,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r25.u32);
loc_8211AA60:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// blt cr6,0x8211aae4
	if (ctx.cr6.lt) goto loc_8211AAE4;
	// rlwinm r11,r26,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0x8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8211aae4
	if (!ctx.cr6.eq) goto loc_8211AAE4;
	// cmpwi cr6,r29,7
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 7, ctx.xer);
	// bne cr6,0x8211aac0
	if (!ctx.cr6.eq) goto loc_8211AAC0;
	// rlwinm r11,r26,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8211aa94
	if (ctx.cr6.eq) goto loc_8211AA94;
	// rlwinm r11,r26,1,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 1) & 0x2;
	// ori r8,r11,1
	ctx.r8.u64 = ctx.r11.u64 | 1;
	// b 0x8211aa98
	goto loc_8211AA98;
loc_8211AA94:
	// rlwinm r8,r26,1,30,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 1) & 0x2;
loc_8211AA98:
	// lwz r11,16064(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16064);
	// mulli r9,r28,35
	ctx.r9.s64 = ctx.r28.s64 * 35;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r9,r8
	ctx.r11.u64 = ctx.r9.u64 + ctx.r8.u64;
	// addi r9,r11,31
	ctx.r9.s64 = ctx.r11.s64 + 31;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r8,r10
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// stw r7,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r7.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
loc_8211AAC0:
	// lwz r11,16064(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16064);
	// mulli r10,r28,35
	ctx.r10.s64 = ctx.r28.s64 * 35;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// stw r8,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r8.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
loc_8211AAE4:
	// stw r25,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r25.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8211A838) {
	__imp__sub_8211A838(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8211AAF0) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82141ca8
	ctx.lr = 0x8211AB10;
	sub_82141CA8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8211ab24
	if (ctx.cr6.eq) goto loc_8211AB24;
loc_8211AB1C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8211ab70
	goto loc_8211AB70;
loc_8211AB24:
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f13,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f10,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fadds f8,f12,f10
	ctx.f8.f64 = double(float(ctx.f12.f64 + ctx.f10.f64));
	// lfs f7,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fadds f6,f9,f7
	ctx.f6.f64 = double(float(ctx.f9.f64 + ctx.f7.f64));
	// stfs f11,80(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f8,84(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f6,88(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x82396d70
	ctx.lr = 0x8211AB5C;
	sub_82396D70(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8211ab1c
	if (ctx.cr6.lt) goto loc_8211AB1C;
	// bl 0x8239b938
	ctx.lr = 0x8211AB68;
	sub_8239B938(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_8211AB70:
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

PPC_WEAK_FUNC(sub_8211AAF0) {
	__imp__sub_8211AAF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8211AB88) {
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
	// cmpwi cr6,r5,2046
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2046, ctx.xer);
	// bge cr6,0x8211abec
	if (!ctx.cr6.lt) goto loc_8211ABEC;
	// lis r11,-32181
	ctx.r11.s64 = -2109014016;
	// mulli r10,r5,404
	ctx.r10.s64 = ctx.r5.s64 * 404;
	// addi r11,r11,-5696
	ctx.r11.s64 = ctx.r11.s64 + -5696;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,380(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 380);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8211abd8
	if (!ctx.cr6.eq) goto loc_8211ABD8;
loc_8211ABC0:
	// li r3,0
	ctx.r3.s64 = 0;
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
loc_8211ABD8:
	// lbz r11,208(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 208);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x8211abc0
	if (ctx.cr6.eq) goto loc_8211ABC0;
	// cmplwi cr6,r11,13
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 13, ctx.xer);
	// beq cr6,0x8211abc0
	if (ctx.cr6.eq) goto loc_8211ABC0;
loc_8211ABEC:
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// lfs f13,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmuls f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f11,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// lwz r11,-19436(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19436);
	// lfs f8,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f0,5524(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5524);
	ctx.f0.f64 = double(temp.f32);
	// lfs f7,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f1,f7,f0
	ctx.f1.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// fmadds f6,f11,f10,f12
	ctx.f6.f64 = double(float(ctx.f11.f64 * ctx.f10.f64 + ctx.f12.f64));
	// fmadds f31,f9,f8,f6
	ctx.f31.f64 = double(float(ctx.f9.f64 * ctx.f8.f64 + ctx.f6.f64));
	// bl 0x823de800
	ctx.lr = 0x8211AC2C;
	sub_823DE800(ctx, base);
	// frsp f5,f1
	ctx.fpscr.disableFlushMode();
	ctx.f5.f64 = double(float(ctx.f1.f64));
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f31,f5
	ctx.cr6.compare(ctx.f31.f64, ctx.f5.f64);
	// bge cr6,0x8211ac40
	if (!ctx.cr6.lt) goto loc_8211AC40;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8211AC40:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
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

PPC_WEAK_FUNC(sub_8211AB88) {
	__imp__sub_8211AB88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8211AC58) {
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
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// lfs f13,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,2
	ctx.r10.s64 = 131072;
	// lfs f12,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// addi r9,r11,-15680
	ctx.r9.s64 = ctx.r11.s64 + -15680;
	// lfs f11,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// ori r8,r10,61924
	ctx.r8.u64 = ctx.r10.u64 | 61924;
	// addis r11,r9,2
	ctx.r11.s64 = ctx.r9.s64 + 131072;
	// mullw r10,r3,r8
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r8.s32);
	// addi r11,r11,2116
	ctx.r11.s64 = ctx.r11.s64 + 2116;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lis r5,-32188
	ctx.r5.s64 = -2109472768;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lfs f0,12168(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// lfs f10,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f13,f10
	ctx.f9.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// lfs f8,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f12,f8
	ctx.f7.f64 = double(float(ctx.f12.f64 - ctx.f8.f64));
	// lfs f6,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f5,f11,f6
	ctx.f5.f64 = double(float(ctx.f11.f64 - ctx.f6.f64));
	// lwz r10,6236(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 6236);
	// lbz r4,12(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 12);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// fmuls f4,f9,f9
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f9.f64));
	// fmadds f3,f7,f7,f4
	ctx.f3.f64 = double(float(ctx.f7.f64 * ctx.f7.f64 + ctx.f4.f64));
	// fmadds f2,f5,f5,f3
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f5.f64 + ctx.f3.f64));
	// fsqrts f1,f2
	ctx.f1.f64 = double(float(sqrt(ctx.f2.f64)));
	// fneg f13,f1
	ctx.f13.u64 = ctx.f1.u64 ^ 0x8000000000000000;
	// fsel f12,f13,f0,f1
	ctx.f12.f64 = ctx.f13.f64 >= 0.0 ? ctx.f0.f64 : ctx.f1.f64;
	// fdivs f11,f0,f12
	ctx.f11.f64 = double(float(ctx.f0.f64 / ctx.f12.f64));
	// fmuls f10,f11,f9
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f9.f64));
	// stfs f10,80(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f9,f11,f5
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f5.f64));
	// stfs f9,84(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmuls f8,f7,f11
	ctx.f8.f64 = double(float(ctx.f7.f64 * ctx.f11.f64));
	// stfs f8,88(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bne cr6,0x8211ad10
	if (!ctx.cr6.eq) goto loc_8211AD10;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8211ad48
	goto loc_8211AD48;
loc_8211AD10:
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8211ab88
	ctx.lr = 0x8211AD20;
	sub_8211AB88(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8211ad34
	if (ctx.cr6.eq) goto loc_8211AD34;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8211ad48
	goto loc_8211AD48;
loc_8211AD34:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8211aaf0
	ctx.lr = 0x8211AD40;
	sub_8211AAF0(ctx, base);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// subfe r3,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r11.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_8211AD48:
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

PPC_WEAK_FUNC(sub_8211AC58) {
	__imp__sub_8211AC58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8211AD60) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lhz r3,334(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 334);
	// bl 0x82284650
	ctx.lr = 0x8211AD80;
	sub_82284650(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8211adc4
	if (ctx.cr6.eq) goto loc_8211ADC4;
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r10,r11,-25976
	ctx.r10.s64 = ctx.r11.s64 + -25976;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lhz r5,226(r10)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r10.u32 + 226);
	// bl 0x820ee1e0
	ctx.lr = 0x8211ADA4;
	sub_820EE1E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8211adc4
	if (ctx.cr6.eq) goto loc_8211ADC4;
	// lfs f1,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
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
loc_8211ADC4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,3844(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3844);
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
}

PPC_WEAK_FUNC(sub_8211AD60) {
	__imp__sub_8211AD60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8211ADE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x8211ADE8;
	__savegprlr_28(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,2047
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2047, ctx.xer);
	// beq cr6,0x8211aef8
	if (ctx.cr6.eq) goto loc_8211AEF8;
	// cmpwi cr6,r4,2046
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2046, ctx.xer);
	// beq cr6,0x8211aef8
	if (ctx.cr6.eq) goto loc_8211AEF8;
	// lis r11,-32181
	ctx.r11.s64 = -2109014016;
	// addi r10,r11,-22896
	ctx.r10.s64 = ctx.r11.s64 + -22896;
	// lwz r28,16092(r10)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16092);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8211aef8
	if (ctx.cr6.eq) goto loc_8211AEF8;
	// lis r11,-32181
	ctx.r11.s64 = -2109014016;
	// mulli r10,r4,404
	ctx.r10.s64 = ctx.r4.s64 * 404;
	// addi r11,r11,-5696
	ctx.r11.s64 = ctx.r11.s64 + -5696;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,380(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 380);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8211aef8
	if (ctx.cr6.eq) goto loc_8211AEF8;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// bl 0x822da650
	ctx.lr = 0x8211AE44;
	sub_822DA650(ctx, base);
	// lfs f0,144(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f13.f64 = double(temp.f32);
	// fneg f12,f0
	ctx.f12.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// lfs f11,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f11.f64 = double(temp.f32);
	// fneg f10,f13
	ctx.f10.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fneg f9,f11
	ctx.f9.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f10,100(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// stfs f9,104(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// addi r4,r1,108
	ctx.r4.s64 = ctx.r1.s64 + 108;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8211a720
	ctx.lr = 0x8211AE78;
	sub_8211A720(ctx, base);
	// lfs f8,28(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f7.f64 = double(temp.f32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lfs f6,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f6.f64 = double(temp.f32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stfs f8,80(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f7,84(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f6,88(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x8211ad60
	ctx.lr = 0x8211AE9C;
	sub_8211AD60(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f5,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f5.f64 = double(temp.f32);
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// lfs f4,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f4.f64 = double(temp.f32);
	// li r9,1
	ctx.r9.s64 = 1;
	// lfs f3,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f3.f64 = double(temp.f32);
	// addi r6,r10,6968
	ctx.r6.s64 = ctx.r10.s64 + 6968;
	// lfs f2,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f2.f64 = double(temp.f32);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// lfs f0,5876(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5876);
	ctx.f0.f64 = double(temp.f32);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lfs f13,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f12,f3,f0,f5
	ctx.f12.f64 = double(float(ctx.f3.f64 * ctx.f0.f64 + ctx.f5.f64));
	// fmadds f11,f2,f0,f4
	ctx.f11.f64 = double(float(ctx.f2.f64 * ctx.f0.f64 + ctx.f4.f64));
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmadds f10,f13,f0,f1
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f0.f64 + ctx.f1.f64));
	// stfs f11,84(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f10,88(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r5,11308(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 11308);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821a2a08
	ctx.lr = 0x8211AEF8;
	sub_821A2A08(ctx, base);
loc_8211AEF8:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8211ADE0) {
	__imp__sub_8211ADE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8211AF00) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r6,54
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 54, ctx.xer);
	// beq cr6,0x8211af38
	if (ctx.cr6.eq) goto loc_8211AF38;
	// cmpwi cr6,r6,55
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 55, ctx.xer);
	// beq cr6,0x8211af28
	if (ctx.cr6.eq) goto loc_8211AF28;
	// cmpwi cr6,r6,56
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 56, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lis r11,-32181
	ctx.r11.s64 = -2109014016;
	// addi r11,r11,-22896
	ctx.r11.s64 = ctx.r11.s64 + -22896;
	// addi r9,r11,1528
	ctx.r9.s64 = ctx.r11.s64 + 1528;
	// b 0x8211af44
	goto loc_8211AF44;
loc_8211AF28:
	// lis r11,-32181
	ctx.r11.s64 = -2109014016;
	// addi r11,r11,-22896
	ctx.r11.s64 = ctx.r11.s64 + -22896;
	// addi r9,r11,1404
	ctx.r9.s64 = ctx.r11.s64 + 1404;
	// b 0x8211af44
	goto loc_8211AF44;
loc_8211AF38:
	// lis r11,-32181
	ctx.r11.s64 = -2109014016;
	// addi r11,r11,-22896
	ctx.r11.s64 = ctx.r11.s64 + -22896;
	// addi r9,r11,1280
	ctx.r9.s64 = ctx.r11.s64 + 1280;
loc_8211AF44:
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// li r3,2046
	ctx.r3.s64 = 2046;
	// lwzx r5,r10,r9
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// b 0x820f9a68
	sub_820F9A68(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8211AF00) {
	__imp__sub_8211AF00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8211AF54) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8211AF54) {
	__imp__sub_8211AF54(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8211AF58) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82321e48
	ctx.lr = 0x8211AF84;
	sub_82321E48(ctx, base);
	// addis r11,r31,2
	ctx.r11.s64 = ctx.r31.s64 + 131072;
	// lfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// addis r10,r31,2
	ctx.r10.s64 = ctx.r31.s64 + 131072;
	// addi r11,r11,2128
	ctx.r11.s64 = ctx.r11.s64 + 2128;
	// lfs f13,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// addi r10,r10,2168
	ctx.r10.s64 = ctx.r10.s64 + 2168;
	// lfs f11,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f9,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f7,f9,f13,f10
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f13.f64 + ctx.f10.f64));
	// fmadds f6,f12,f8,f7
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f8.f64 + ctx.f7.f64));
	// stfs f6,0(r30)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// lfs f5,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f2,f3,f12
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f12.f64));
	// fmadds f1,f5,f13,f2
	ctx.f1.f64 = double(float(ctx.f5.f64 * ctx.f13.f64 + ctx.f2.f64));
	// fmr f11,f6
	ctx.f11.f64 = ctx.f6.f64;
	// fmadds f10,f4,f0,f1
	ctx.f10.f64 = double(float(ctx.f4.f64 * ctx.f0.f64 + ctx.f1.f64));
	// stfs f10,4(r30)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// lfs f9,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f7,f12
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f12.f64));
	// fmadds f5,f9,f13,f6
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f13.f64 + ctx.f6.f64));
	// fmr f4,f10
	ctx.f4.f64 = ctx.f10.f64;
	// fmadds f3,f8,f0,f5
	ctx.f3.f64 = double(float(ctx.f8.f64 * ctx.f0.f64 + ctx.f5.f64));
	// stfs f3,8(r30)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// lfs f1,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// fadds f0,f11,f1
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f1.f64));
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// fmr f2,f3
	ctx.f2.f64 = ctx.f3.f64;
	// lfs f13,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f13,f10
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f10.f64));
	// stfs f12,4(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// lfs f11,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fadds f10,f11,f3
	ctx.f10.f64 = double(float(ctx.f11.f64 + ctx.f3.f64));
	// stfs f10,8(r30)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
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

PPC_WEAK_FUNC(sub_8211AF58) {
	__imp__sub_8211AF58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8211B03C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8211B03C) {
	__imp__sub_8211B03C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8211B040) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x8211B048;
	__savegprlr_26(ctx, base);
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x823de01c
	ctx.lr = 0x8211B050;
	__savefpr_25(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r9,2
	ctx.r9.s64 = 131072;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// ori r6,r9,61924
	ctx.r6.u64 = ctx.r9.u64 | 61924;
	// lis r5,-32187
	ctx.r5.s64 = -2109407232;
	// addi r8,r10,-30176
	ctx.r8.s64 = ctx.r10.s64 + -30176;
	// rlwinm r7,r11,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// mullw r10,r3,r6
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r6.s32);
	// lwzx r31,r7,r8
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// addi r11,r5,-15680
	ctx.r11.s64 = ctx.r5.s64 + -15680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addis r28,r30,3
	ctx.r28.s64 = ctx.r30.s64 + 196608;
	// addi r28,r28,-7320
	ctx.r28.s64 = ctx.r28.s64 + -7320;
	// bl 0x822efbf0
	ctx.lr = 0x8211B0A0;
	sub_822EFBF0(ctx, base);
	// lis r12,640
	ctx.r12.s64 = 41943040;
	// ori r12,r12,59441
	ctx.r12.u64 = ctx.r12.u64 | 59441;
	// and r4,r3,r12
	ctx.r4.u64 = ctx.r3.u64 & ctx.r12.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x8211b0c8
	if (!ctx.cr6.eq) goto loc_8211B0C8;
loc_8211B0B4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x823de068
	ctx.lr = 0x8211B0C4;
	__restfpr_25(ctx, base);
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_8211B0C8:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8211af58
	ctx.lr = 0x8211B0DC;
	sub_8211AF58(ctx, base);
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8211b0f4
	if (ctx.cr6.eq) goto loc_8211B0F4;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,-14540(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -14540);
	ctx.f0.f64 = double(temp.f32);
	// b 0x8211b0fc
	goto loc_8211B0FC;
loc_8211B0F4:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,-14544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -14544);
	ctx.f0.f64 = double(temp.f32);
loc_8211B0FC:
	// fneg f10,f0
	ctx.fpscr.disableFlushMode();
	ctx.f10.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// addis r11,r30,2
	ctx.r11.s64 = ctx.r30.s64 + 131072;
	// lfs f13,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// addis r10,r30,2
	ctx.r10.s64 = ctx.r30.s64 + 131072;
	// addi r11,r11,2128
	ctx.r11.s64 = ctx.r11.s64 + 2128;
	// lfs f12,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f11.f64 = double(temp.f32);
	// addi r10,r10,2168
	ctx.r10.s64 = ctx.r10.s64 + 2168;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r4,640
	ctx.r4.s64 = 41943040;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// lfs f9,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// ori r4,r4,59441
	ctx.r4.u64 = ctx.r4.u64 | 59441;
	// lfs f8,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f31,f9,f0,f13
	ctx.f31.f64 = double(float(ctx.f9.f64 * ctx.f0.f64 + ctx.f13.f64));
	// lfs f7,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f30,f8,f0,f12
	ctx.f30.f64 = double(float(ctx.f8.f64 * ctx.f0.f64 + ctx.f12.f64));
	// fmadds f29,f7,f0,f11
	ctx.f29.f64 = double(float(ctx.f7.f64 * ctx.f0.f64 + ctx.f11.f64));
	// lfs f3,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// fmadds f27,f10,f9,f13
	ctx.f27.f64 = double(float(ctx.f10.f64 * ctx.f9.f64 + ctx.f13.f64));
	// lfs f2,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// fmadds f26,f8,f10,f12
	ctx.f26.f64 = double(float(ctx.f8.f64 * ctx.f10.f64 + ctx.f12.f64));
	// lfs f1,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// fmadds f25,f7,f10,f11
	ctx.f25.f64 = double(float(ctx.f7.f64 * ctx.f10.f64 + ctx.f11.f64));
	// lfs f28,12168(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12168);
	ctx.f28.f64 = double(temp.f32);
	// fmr f6,f9
	ctx.f6.f64 = ctx.f9.f64;
	// stfs f28,176(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// fmr f5,f8
	ctx.f5.f64 = ctx.f8.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f4,f7
	ctx.f4.f64 = ctx.f7.f64;
	// fmr f0,f3
	ctx.f0.f64 = ctx.f3.f64;
	// fsubs f11,f31,f3
	ctx.f11.f64 = double(float(ctx.f31.f64 - ctx.f3.f64));
	// stfs f11,120(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fsubs f10,f30,f2
	ctx.f10.f64 = double(float(ctx.f30.f64 - ctx.f2.f64));
	// stfs f10,124(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// fsubs f9,f29,f1
	ctx.f9.f64 = double(float(ctx.f29.f64 - ctx.f1.f64));
	// stfs f9,128(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fsubs f8,f27,f3
	ctx.f8.f64 = double(float(ctx.f27.f64 - ctx.f3.f64));
	// stfs f8,104(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fsubs f7,f26,f2
	ctx.f7.f64 = double(float(ctx.f26.f64 - ctx.f2.f64));
	// stfs f7,108(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// fsubs f6,f25,f1
	ctx.f6.f64 = double(float(ctx.f25.f64 - ctx.f1.f64));
	// stfs f6,112(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmr f13,f2
	ctx.f13.f64 = ctx.f2.f64;
	// fmr f12,f1
	ctx.f12.f64 = ctx.f1.f64;
	// bl 0x822efaf8
	ctx.lr = 0x8211B1B4;
	sub_822EFAF8(ctx, base);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8211dd18
	ctx.lr = 0x8211B1C4;
	sub_8211DD18(ctx, base);
	// lis r6,640
	ctx.r6.s64 = 41943040;
	// addi r7,r1,176
	ctx.r7.s64 = ctx.r1.s64 + 176;
	// ori r6,r6,59441
	ctx.r6.u64 = ctx.r6.u64 | 59441;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822ef9f0
	ctx.lr = 0x8211B1E0;
	sub_822EF9F0(ctx, base);
	// lfs f0,176(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f28
	ctx.cr6.compare(ctx.f0.f64, ctx.f28.f64);
	// bge cr6,0x8211b0b4
	if (!ctx.cr6.lt) goto loc_8211B0B4;
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// lfs f12,184(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,188(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f9,f27,f31
	ctx.f9.f64 = double(float(ctx.f27.f64 - ctx.f31.f64));
	// lfs f10,192(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f8,f26,f30
	ctx.f8.f64 = double(float(ctx.f26.f64 - ctx.f30.f64));
	// fsubs f7,f25,f29
	ctx.f7.f64 = double(float(ctx.f25.f64 - ctx.f29.f64));
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f13,1312(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1312);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f6,f12,f13
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fmuls f5,f11,f13
	ctx.f5.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fmuls f4,f10,f13
	ctx.f4.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fmadds f3,f9,f0,f6
	ctx.f3.f64 = double(float(ctx.f9.f64 * ctx.f0.f64 + ctx.f6.f64));
	// fmadds f2,f8,f0,f5
	ctx.f2.f64 = double(float(ctx.f8.f64 * ctx.f0.f64 + ctx.f5.f64));
	// fmadds f1,f7,f0,f4
	ctx.f1.f64 = double(float(ctx.f7.f64 * ctx.f0.f64 + ctx.f4.f64));
	// fadds f0,f3,f31
	ctx.f0.f64 = double(float(ctx.f3.f64 + ctx.f31.f64));
	// stfs f0,0(r27)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r27.u32 + 0, temp.u32);
	// fadds f13,f2,f30
	ctx.f13.f64 = double(float(ctx.f2.f64 + ctx.f30.f64));
	// stfs f13,4(r27)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r27.u32 + 4, temp.u32);
	// fadds f9,f1,f29
	ctx.f9.f64 = double(float(ctx.f1.f64 + ctx.f29.f64));
	// stfs f9,8(r27)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r27.u32 + 8, temp.u32);
	// stfs f12,0(r26)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r26.u32 + 0, temp.u32);
	// stfs f11,4(r26)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r26.u32 + 4, temp.u32);
	// stfs f10,8(r26)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r26.u32 + 8, temp.u32);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x823de068
	ctx.lr = 0x8211B258;
	__restfpr_25(ctx, base);
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8211B040) {
	__imp__sub_8211B040(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8211B25C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8211B25C) {
	__imp__sub_8211B25C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8211B260) {
	PPC_FUNC_PROLOGUE();
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
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addis r11,r10,3
	ctx.r11.s64 = ctx.r10.s64 + 196608;
	// addi r11,r11,-3628
	ctx.r11.s64 = ctx.r11.s64 + -3628;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// addis r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 65536;
	// addi r9,r9,-17290
	ctx.r9.s64 = ctx.r9.s64 + -17290;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r4,r8,r10
	PPC_STORE_U32(ctx.r8.u32 + ctx.r10.u32, ctx.r4.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8211B260) {
	__imp__sub_8211B260(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8211B2AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8211B2AC) {
	__imp__sub_8211B2AC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8211B2B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf64
	ctx.lr = 0x8211B2B8;
	__savegprlr_23(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
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
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r23,0
	ctx.r23.s64 = 0;
	// addis r26,r11,3
	ctx.r26.s64 = ctx.r11.s64 + 196608;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r26,r26,-3628
	ctx.r26.s64 = ctx.r26.s64 + -3628;
	// mr r28,r23
	ctx.r28.u64 = ctx.r23.u64;
	// lwz r8,0(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x8211b394
	if (!ctx.cr6.gt) goto loc_8211B394;
	// addis r27,r11,3
	ctx.r27.s64 = ctx.r11.s64 + 196608;
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// lis r11,-32181
	ctx.r11.s64 = -2109014016;
	// addi r27,r27,-3624
	ctx.r27.s64 = ctx.r27.s64 + -3624;
	// li r25,1
	ctx.r25.s64 = 1;
	// addi r29,r10,6968
	ctx.r29.s64 = ctx.r10.s64 + 6968;
	// addi r24,r11,-22896
	ctx.r24.s64 = ctx.r11.s64 + -22896;
loc_8211B310:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8211b040
	ctx.lr = 0x8211B324;
	sub_8211B040(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8211b380
	if (ctx.cr6.eq) goto loc_8211B380;
	// lwz r30,16088(r24)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r24.u32 + 16088);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8211b380
	if (ctx.cr6.eq) goto loc_8211B380;
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// addi r5,r1,136
	ctx.r5.s64 = ctx.r1.s64 + 136;
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,124
	ctx.r4.s64 = ctx.r1.s64 + 124;
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f12,120(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// bl 0x8211a720
	ctx.lr = 0x8211B364;
	sub_8211A720(ctx, base);
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// lwz r5,11308(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11308);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// slw r3,r25,r31
	ctx.r3.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r25.u32 << (ctx.r31.u8 & 0x3F));
	// bl 0x821a2b40
	ctx.lr = 0x8211B380;
	sub_821A2B40(ctx, base);
loc_8211B380:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8211b310
	if (ctx.cr6.lt) goto loc_8211B310;
loc_8211B394:
	// stw r23,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r23.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8211B2B0) {
	__imp__sub_8211B2B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8211B3A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x8211B3A8;
	__savegprlr_26(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
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
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// bl 0x8211af58
	ctx.lr = 0x8211B3EC;
	sub_8211AF58(ctx, base);
	// addis r8,r31,2
	ctx.r8.s64 = ctx.r31.s64 + 131072;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfs f13,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// addi r8,r8,2128
	ctx.r8.s64 = ctx.r8.s64 + 2128;
	// lfs f12,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f11.f64 = double(temp.f32);
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r6,-14536
	ctx.r4.s64 = ctx.r6.s64 + -14536;
	// lfs f0,5876(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 5876);
	ctx.f0.f64 = double(temp.f32);
	// lfs f10,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f8,f10,f0,f13
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f0.f64 + ctx.f13.f64));
	// lfs f7,8(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f6,f9,f0,f12
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f0.f64 + ctx.f12.f64));
	// fmadds f5,f7,f0,f11
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f0.f64 + ctx.f11.f64));
	// stfs f8,96(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f6,100(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f5,104(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x82104bb0
	ctx.lr = 0x8211B43C;
	sub_82104BB0(ctx, base);
	// lis r5,-32167
	ctx.r5.s64 = -2108096512;
	// lis r4,-32167
	ctx.r4.s64 = -2108096512;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addis r6,r31,2
	ctx.r6.s64 = ctx.r31.s64 + 131072;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,-11204(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + -11204);
	// addi r6,r6,2116
	ctx.r6.s64 = ctx.r6.s64 + 2116;
	// lwz r10,-11196(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + -11196);
	// lfs f2,-14540(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -14540);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// lwz r5,12(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x820dc998
	ctx.lr = 0x8211B46C;
	sub_820DC998(ctx, base);
	// addi r9,r1,84
	ctx.r9.s64 = ctx.r1.s64 + 84;
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8211a838
	ctx.lr = 0x8211B48C;
	sub_8211A838(ctx, base);
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8211b4a4
	if (ctx.cr6.eq) goto loc_8211B4A4;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// li r3,2046
	ctx.r3.s64 = 2046;
	// bl 0x820f9a68
	ctx.lr = 0x8211B4A4;
	sub_820F9A68(ctx, base);
loc_8211B4A4:
	// addis r11,r31,3
	ctx.r11.s64 = ctx.r31.s64 + 196608;
	// addi r11,r11,-3628
	ctx.r11.s64 = ctx.r11.s64 + -3628;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bge cr6,0x8211b4d4
	if (!ctx.cr6.lt) goto loc_8211B4D4;
	// addis r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 65536;
	// addi r10,r10,-17290
	ctx.r10.s64 = ctx.r10.s64 + -17290;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r9,r31
	PPC_STORE_U32(ctx.r9.u32 + ctx.r31.u32, ctx.r30.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
loc_8211B4D4:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8211B3A0) {
	__imp__sub_8211B3A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8211B4DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8211B4DC) {
	__imp__sub_8211B4DC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8211B4E0) {
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
	// lis r11,-32167
	ctx.r11.s64 = -2108096512;
	// lis r10,-32187
	ctx.r10.s64 = -2109407232;
	// lis r8,-32167
	ctx.r8.s64 = -2108096512;
	// lis r6,2
	ctx.r6.s64 = 131072;
	// addi r7,r10,-15680
	ctx.r7.s64 = ctx.r10.s64 + -15680;
	// lwz r11,-11160(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11160);
	// ori r5,r6,61924
	ctx.r5.u64 = ctx.r6.u64 | 61924;
	// addis r9,r7,2
	ctx.r9.s64 = ctx.r7.s64 + 131072;
	// lwz r10,-11168(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + -11168);
	// mullw r8,r3,r5
	ctx.r8.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r5.s32);
	// lwz r5,12(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lfs f1,12(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// lis r4,-32255
	ctx.r4.s64 = -2113863680;
	// addi r11,r9,2116
	ctx.r11.s64 = ctx.r9.s64 + 2116;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// add r6,r8,r11
	ctx.r6.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lfs f2,-14540(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + -14540);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x820dc998
	ctx.lr = 0x8211B538;
	sub_820DC998(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-14536
	ctx.r4.s64 = ctx.r11.s64 + -14536;
	// bl 0x82104bb0
	ctx.lr = 0x8211B548;
	sub_82104BB0(ctx, base);
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

PPC_WEAK_FUNC(sub_8211B4E0) {
	__imp__sub_8211B4E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8211B55C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8211B55C) {
	__imp__sub_8211B55C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8211B560) {
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
	// lis r11,-32167
	ctx.r11.s64 = -2108096512;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,-11208(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11208);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpw cr6,r4,r10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x8211b59c
	if (!ctx.cr6.gt) goto loc_8211B59C;
	// lis r11,-32167
	ctx.r11.s64 = -2108096512;
	// lis r10,-32167
	ctx.r10.s64 = -2108096512;
	// lwz r11,-11188(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11188);
	// lwz r10,-11164(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -11164);
	// b 0x8211b5ac
	goto loc_8211B5AC;
loc_8211B59C:
	// lis r11,-32167
	ctx.r11.s64 = -2108096512;
	// lis r10,-32167
	ctx.r10.s64 = -2108096512;
	// lwz r11,-11200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11200);
	// lwz r10,-11152(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -11152);
loc_8211B5AC:
	// lfs f1,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// lwz r5,12(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lis r10,2
	ctx.r10.s64 = 131072;
	// addi r9,r11,-15680
	ctx.r9.s64 = ctx.r11.s64 + -15680;
	// ori r7,r10,61924
	ctx.r7.u64 = ctx.r10.u64 | 61924;
	// addis r11,r9,2
	ctx.r11.s64 = ctx.r9.s64 + 131072;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// mullw r10,r31,r7
	ctx.r10.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r7.s32);
	// lfs f2,-14540(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -14540);
	ctx.f2.f64 = double(temp.f32);
	// addi r11,r11,2116
	ctx.r11.s64 = ctx.r11.s64 + 2116;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x820dc998
	ctx.lr = 0x8211B5E4;
	sub_820DC998(ctx, base);
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r6,-14536
	ctx.r4.s64 = ctx.r6.s64 + -14536;
	// bl 0x82104bb0
	ctx.lr = 0x8211B5F4;
	sub_82104BB0(ctx, base);
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

PPC_WEAK_FUNC(sub_8211B560) {
	__imp__sub_8211B560(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8211B608) {
	PPC_FUNC_PROLOGUE();
	// lhz r10,332(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 332);
	// mulli r11,r3,200
	ctx.r11.s64 = ctx.r3.s64 * 200;
	// lis r9,-32188
	ctx.r9.s64 = -2109472768;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r9,8672
	ctx.r11.s64 = ctx.r9.s64 + 8672;
	// rlwinm r7,r8,5,0,26
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r6,r11,8
	ctx.r6.s64 = ctx.r11.s64 + 8;
	// lwzx r5,r7,r6
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// addi r10,r3,1024
	ctx.r10.s64 = ctx.r3.s64 + 1024;
	// rlwinm r4,r10,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r10,-32181
	ctx.r10.s64 = -2109014016;
	// lwz r11,-29952(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29952);
	// addi r8,r10,-22896
	ctx.r8.s64 = ctx.r10.s64 + -22896;
	// lbz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// addi r9,r11,-25976
	ctx.r9.s64 = ctx.r11.s64 + -25976;
	// lhz r5,214(r9)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r9.u32 + 214);
	// beq cr6,0x8211b668
	if (ctx.cr6.eq) goto loc_8211B668;
	// lwz r3,16072(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16072);
	// b 0x820ee908
	sub_820EE908(ctx, base);
	return;
loc_8211B668:
	// lwz r3,16076(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16076);
	// b 0x820ee908
	sub_820EE908(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8211B608) {
	__imp__sub_8211B608(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8211B670) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8211B670) {
	__imp__sub_8211B670(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8211B674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8211B674) {
	__imp__sub_8211B674(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8211B678) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8211b6a4
	if (!ctx.cr6.eq) goto loc_8211B6A4;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8211b6f0
	goto loc_8211B6F0;
loc_8211B6A4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332af8
	ctx.lr = 0x8211B6AC;
	sub_82332AF8(ctx, base);
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8211b6c0
	if (!ctx.cr6.eq) goto loc_8211B6C0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8211b6f0
	goto loc_8211B6F0;
loc_8211B6C0:
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8211b6d8
	if (!ctx.cr6.eq) goto loc_8211B6D8;
	// addis r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 65536;
	// addi r11,r11,9324
	ctx.r11.s64 = ctx.r11.s64 + 9324;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r31,r10,r30
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r30.u32);
loc_8211B6D8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332af8
	ctx.lr = 0x8211B6E0;
	sub_82332AF8(ctx, base);
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r8,r31
	ctx.r3.u64 = ctx.r8.u64 & ctx.r31.u64;
loc_8211B6F0:
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

PPC_WEAK_FUNC(sub_8211B678) {
	__imp__sub_8211B678(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8211B708) {
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
	// beq cr6,0x8211b7d0
	if (ctx.cr6.eq) goto loc_8211B7D0;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x82332af8
	ctx.lr = 0x8211B734;
	sub_82332AF8(ctx, base);
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8211b77c
	if (!ctx.cr6.eq) goto loc_8211B77C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332b10
	ctx.lr = 0x8211B748;
	sub_82332B10(ctx, base);
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8211b7d0
	if (ctx.cr6.eq) goto loc_8211B7D0;
	// srawi r10,r31,5
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r31.s32 >> 5;
	// addis r11,r30,3
	ctx.r11.s64 = ctx.r30.s64 + 196608;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-3668
	ctx.r11.s64 = ctx.r11.s64 + -3668;
	// clrlwi r9,r31,27
	ctx.r9.u64 = ctx.r31.u32 & 0x1F;
	// li r8,1
	ctx.r8.s64 = 1;
	// slw r7,r8,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r9.u8 & 0x3F));
	// lwzx r6,r10,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// andc r5,r6,r7
	ctx.r5.u64 = ctx.r6.u64 & ~ctx.r7.u64;
	// b 0x8211b7cc
	goto loc_8211B7CC;
loc_8211B77C:
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8211b7d0
	if (!ctx.cr6.eq) goto loc_8211B7D0;
	// addis r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 65536;
	// addi r11,r11,9324
	ctx.r11.s64 = ctx.r11.s64 + 9324;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r31,r10,r30
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332af8
	ctx.lr = 0x8211B79C;
	sub_82332AF8(ctx, base);
	// lbz r9,1660(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1660);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8211b7d0
	if (ctx.cr6.eq) goto loc_8211B7D0;
	// srawi r10,r31,5
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r31.s32 >> 5;
	// addis r11,r30,3
	ctx.r11.s64 = ctx.r30.s64 + 196608;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-3668
	ctx.r11.s64 = ctx.r11.s64 + -3668;
	// clrlwi r9,r31,27
	ctx.r9.u64 = ctx.r31.u32 & 0x1F;
	// li r8,1
	ctx.r8.s64 = 1;
	// slw r7,r8,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r9.u8 & 0x3F));
	// lwzx r6,r10,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// or r5,r7,r6
	ctx.r5.u64 = ctx.r7.u64 | ctx.r6.u64;
loc_8211B7CC:
	// stwx r5,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r5.u32);
loc_8211B7D0:
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

PPC_WEAK_FUNC(sub_8211B708) {
	__imp__sub_8211B708(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8211B7E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x8211B7F0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x82332af8
	ctx.lr = 0x8211B808;
	sub_82332AF8(ctx, base);
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8211b8d4
	if (!ctx.cr6.eq) goto loc_8211B8D4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332b10
	ctx.lr = 0x8211B81C;
	sub_82332B10(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82332af8
	ctx.lr = 0x8211B828;
	sub_82332AF8(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82332b10
	ctx.lr = 0x8211B834;
	sub_82332B10(ctx, base);
	// lwz r11,56(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 56);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8211b868
	if (!ctx.cr6.eq) goto loc_8211B868;
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8211b868
	if (!ctx.cr6.eq) goto loc_8211B868;
	// addis r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 65536;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r11,r11,9324
	ctx.r11.s64 = ctx.r11.s64 + 9324;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r30,r9,r29
	PPC_STORE_U16(ctx.r9.u32 + ctx.r29.u32, ctx.r30.u16);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_8211B868:
	// addis r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 65536;
	// addi r11,r11,9324
	ctx.r11.s64 = ctx.r11.s64 + 9324;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r10,r11,r29
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r29.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8211b8d4
	if (!ctx.cr6.eq) goto loc_8211B8D4;
	// lwz r9,64(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 64);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8211b8c4
	if (!ctx.cr6.eq) goto loc_8211B8C4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332b28
	ctx.lr = 0x8211B894;
	sub_82332B28(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82332b28
	ctx.lr = 0x8211B8A0;
	sub_82332B28(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-14512
	ctx.r4.s64 = ctx.r11.s64 + -14512;
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// bl 0x82280b08
	ctx.lr = 0x8211B8B8;
	sub_82280B08(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_8211B8C4:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8211b8d4
	if (!ctx.cr6.eq) goto loc_8211B8D4;
	// lwz r10,64(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 64);
	// sthx r10,r11,r29
	PPC_STORE_U16(ctx.r11.u32 + ctx.r29.u32, ctx.r10.u16);
loc_8211B8D4:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8211B7E8) {
	__imp__sub_8211B7E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8211B8E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x8211B8E8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
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
	// lis r8,1
	ctx.r8.s64 = 65536;
	// addis r29,r31,2
	ctx.r29.s64 = ctx.r31.s64 + 131072;
	// ori r7,r8,22912
	ctx.r7.u64 = ctx.r8.u64 | 22912;
	// lis r6,2
	ctx.r6.s64 = 131072;
	// addi r29,r29,18632
	ctx.r29.s64 = ctx.r29.s64 + 18632;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// ori r5,r6,18636
	ctx.r5.u64 = ctx.r6.u64 | 18636;
	// lwzx r3,r31,r7
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplw cr6,r4,r30
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r30.u32, ctx.xer);
	// stwx r3,r31,r5
	PPC_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r3.u32);
	// beq cr6,0x8211ba34
	if (ctx.cr6.eq) goto loc_8211BA34;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8211b7e8
	ctx.lr = 0x8211B944;
	sub_8211B7E8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8211b95c
	if (!ctx.cr6.eq) goto loc_8211B95C;
loc_8211B950:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_8211B95C:
	// addis r28,r31,1
	ctx.r28.s64 = ctx.r31.s64 + 65536;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r28,r28,22924
	ctx.r28.s64 = ctx.r28.s64 + 22924;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82114f70
	ctx.lr = 0x8211B970;
	sub_82114F70(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8211b950
	if (!ctx.cr6.eq) goto loc_8211B950;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8211b708
	ctx.lr = 0x8211B984;
	sub_8211B708(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x8232cb20
	ctx.lr = 0x8211B994;
	sub_8232CB20(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8211b678
	ctx.lr = 0x8211B9A4;
	sub_8211B678(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8211b9b8
	if (ctx.cr6.eq) goto loc_8211B9B8;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// ori r10,r11,18644
	ctx.r10.u64 = ctx.r11.u64 | 18644;
	// stwx r3,r31,r10
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r3.u32);
loc_8211B9B8:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne cr6,0x8211ba10
	if (!ctx.cr6.eq) goto loc_8211BA10;
	// lis r11,-32032
	ctx.r11.s64 = -2099249152;
	// lwz r11,-5944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5944);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8211ba10
	if (ctx.cr6.eq) goto loc_8211BA10;
	// lbz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8211ba10
	if (ctx.cr6.eq) goto loc_8211BA10;
loc_8211B9DC:
	// bl 0x82332c40
	ctx.lr = 0x8211B9E0;
	sub_82332C40(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// divwu r10,r11,r3
	ctx.r10.u32 = ctx.r11.u32 / ctx.r3.u32;
	// mullw r9,r10,r3
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r3.s32);
	// subf. r3,r9,r11
	ctx.r3.s64 = ctx.r11.s64 - ctx.r9.s64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// beq 0x8211b9dc
	if (ctx.cr0.eq) goto loc_8211B9DC;
	// bl 0x82332af8
	ctx.lr = 0x8211BA00;
	sub_82332AF8(ctx, base);
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8211b9dc
	if (!ctx.cr6.eq) goto loc_8211B9DC;
	// b 0x8211ba14
	goto loc_8211BA14;
loc_8211BA10:
	// stw r30,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r30.u32);
loc_8211BA14:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82106d88
	ctx.lr = 0x8211BA20;
	sub_82106D88(ctx, base);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne cr6,0x8211ba34
	if (!ctx.cr6.eq) goto loc_8211BA34;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82120cc0
	ctx.lr = 0x8211BA34;
	sub_82120CC0(ctx, base);
loc_8211BA34:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8211B8E0) {
	__imp__sub_8211B8E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8211BA40) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// addi r8,r10,-30176
	ctx.r8.s64 = ctx.r10.s64 + -30176;
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lis r7,-32249
	ctx.r7.s64 = -2113470464;
	// addi r4,r7,-28736
	ctx.r4.s64 = ctx.r7.s64 + -28736;
	// lwzx r3,r9,r8
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// b 0x822f7138
	sub_822F7138(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8211BA40) {
	__imp__sub_8211BA40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8211BA64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8211BA64) {
	__imp__sub_8211BA64(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8211BA68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// ori r9,r11,23628
	ctx.r9.u64 = ctx.r11.u64 | 23628;
	// lfs f1,5484(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f1.f64 = double(temp.f32);
	// lfsx f0,r3,r9
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r9.u32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x8211ba9c
	if (ctx.cr6.lt) goto loc_8211BA9C;
	// fmr f1,f13
	ctx.f1.f64 = ctx.f13.f64;
	// blr 
	return;
loc_8211BA9C:
	// lis r11,2
	ctx.r11.s64 = 131072;
	// ori r10,r11,1988
	ctx.r10.u64 = ctx.r11.u64 | 1988;
	// lwzx r9,r3,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8211bac0
	if (ctx.cr6.eq) goto loc_8211BAC0;
	// lfs f12,768(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 768);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f1
	ctx.cr6.compare(ctx.f12.f64, ctx.f1.f64);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// b 0x8211bacc
	goto loc_8211BACC;
loc_8211BAC0:
	// lfs f12,772(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 772);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f1
	ctx.cr6.compare(ctx.f12.f64, ctx.f1.f64);
	// blelr cr6
	if (!ctx.cr6.gt) return;
loc_8211BACC:
	// fsubs f11,f13,f12
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// fsubs f10,f0,f11
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// fdivs f0,f10,f12
	ctx.f0.f64 = double(float(ctx.f10.f64 / ctx.f12.f64));
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fneg f11,f0
	ctx.f11.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fsel f10,f12,f13,f0
	ctx.f10.f64 = ctx.f12.f64 >= 0.0 ? ctx.f13.f64 : ctx.f0.f64;
	// fsel f1,f11,f1,f10
	ctx.f1.f64 = ctx.f11.f64 >= 0.0 ? ctx.f1.f64 : ctx.f10.f64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8211BA68) {
	__imp__sub_8211BA68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8211BAEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8211BAEC) {
	__imp__sub_8211BAEC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8211BAF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// addi r9,r11,-15680
	ctx.r9.s64 = ctx.r11.s64 + -15680;
	// ori r8,r10,61924
	ctx.r8.u64 = ctx.r10.u64 | 61924;
	// addis r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 65536;
	// mullw r10,r3,r8
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r8.s32);
	// addi r11,r11,22924
	ctx.r11.s64 = ctx.r11.s64 + 22924;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r7,172(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 172);
	// rlwinm r6,r7,0,20,21
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xC00;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x8211bb28
	if (!ctx.cr6.eq) goto loc_8211BB28;
loc_8211BB20:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8211BB28:
	// lwz r10,360(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 360);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8211bb20
	if (ctx.cr6.eq) goto loc_8211BB20;
	// lis r10,-32181
	ctx.r10.s64 = -2109014016;
	// lwz r9,364(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 364);
	// addi r11,r10,-5696
	ctx.r11.s64 = ctx.r10.s64 + -5696;
	// mulli r8,r9,404
	ctx.r8.s64 = ctx.r9.s64 * 404;
	// addi r7,r11,332
	ctx.r7.s64 = ctx.r11.s64 + 332;
	// lhzx r3,r8,r7
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r8.u32 + ctx.r7.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8211BAF0) {
	__imp__sub_8211BAF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8211BB50) {
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
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// addi r9,r11,-15680
	ctx.r9.s64 = ctx.r11.s64 + -15680;
	// ori r8,r10,61924
	ctx.r8.u64 = ctx.r10.u64 | 61924;
	// addis r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 65536;
	// mullw r10,r3,r8
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r8.s32);
	// addi r11,r11,22924
	ctx.r11.s64 = ctx.r11.s64 + 22924;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r7,172(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 172);
	// rlwinm r6,r7,0,20,21
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xC00;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x8211bbb8
	if (ctx.cr6.eq) goto loc_8211BBB8;
	// lwz r10,360(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 360);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8211bbb8
	if (ctx.cr6.eq) goto loc_8211BBB8;
	// lis r10,-32181
	ctx.r10.s64 = -2109014016;
	// lwz r9,364(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 364);
	// addi r11,r10,-5696
	ctx.r11.s64 = ctx.r10.s64 + -5696;
	// mulli r8,r9,404
	ctx.r8.s64 = ctx.r9.s64 * 404;
	// addi r7,r11,332
	ctx.r7.s64 = ctx.r11.s64 + 332;
	// lhzx r3,r8,r7
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r8.u32 + ctx.r7.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8211bbcc
	if (!ctx.cr6.eq) goto loc_8211BBCC;
loc_8211BBB8:
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
loc_8211BBCC:
	// bl 0x82332af8
	ctx.lr = 0x8211BBD0;
	sub_82332AF8(ctx, base);
	// lwz r11,776(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 776);
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

PPC_WEAK_FUNC(sub_8211BB50) {
	__imp__sub_8211BB50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8211BBEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8211BBEC) {
	__imp__sub_8211BBEC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8211BBF0) {
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
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// addi r9,r11,-15680
	ctx.r9.s64 = ctx.r11.s64 + -15680;
	// ori r8,r10,61924
	ctx.r8.u64 = ctx.r10.u64 | 61924;
	// addis r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 65536;
	// mullw r10,r3,r8
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r8.s32);
	// addi r11,r11,22924
	ctx.r11.s64 = ctx.r11.s64 + 22924;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r7,172(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 172);
	// rlwinm r6,r7,0,20,21
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xC00;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x8211bc58
	if (ctx.cr6.eq) goto loc_8211BC58;
	// lwz r10,360(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 360);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8211bc58
	if (ctx.cr6.eq) goto loc_8211BC58;
	// lis r10,-32181
	ctx.r10.s64 = -2109014016;
	// lwz r9,364(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 364);
	// addi r11,r10,-5696
	ctx.r11.s64 = ctx.r10.s64 + -5696;
	// mulli r8,r9,404
	ctx.r8.s64 = ctx.r9.s64 * 404;
	// addi r7,r11,332
	ctx.r7.s64 = ctx.r11.s64 + 332;
	// lhzx r3,r8,r7
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r8.u32 + ctx.r7.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8211bc6c
	if (!ctx.cr6.eq) goto loc_8211BC6C;
loc_8211BC58:
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
loc_8211BC6C:
	// bl 0x82332af8
	ctx.lr = 0x8211BC70;
	sub_82332AF8(ctx, base);
	// lbz r11,1659(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1659);
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

PPC_WEAK_FUNC(sub_8211BBF0) {
	__imp__sub_8211BBF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8211BC8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8211BC8C) {
	__imp__sub_8211BC8C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8211BC90) {
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
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// addi r9,r11,-15680
	ctx.r9.s64 = ctx.r11.s64 + -15680;
	// ori r8,r10,61924
	ctx.r8.u64 = ctx.r10.u64 | 61924;
	// addis r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 65536;
	// mullw r10,r3,r8
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r8.s32);
	// addi r11,r11,22924
	ctx.r11.s64 = ctx.r11.s64 + 22924;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r7,172(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 172);
	// rlwinm r6,r7,0,20,21
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xC00;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x8211bd20
	if (ctx.cr6.eq) goto loc_8211BD20;
	// lwz r10,360(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 360);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8211bd20
	if (ctx.cr6.eq) goto loc_8211BD20;
	// lis r10,-32181
	ctx.r10.s64 = -2109014016;
	// lwz r9,364(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 364);
	// addi r11,r10,-5696
	ctx.r11.s64 = ctx.r10.s64 + -5696;
	// mulli r8,r9,404
	ctx.r8.s64 = ctx.r9.s64 * 404;
	// addi r7,r11,332
	ctx.r7.s64 = ctx.r11.s64 + 332;
	// lhzx r3,r8,r7
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r8.u32 + ctx.r7.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8211bd20
	if (ctx.cr6.eq) goto loc_8211BD20;
	// bl 0x82332af8
	ctx.lr = 0x8211BCFC;
	sub_82332AF8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,1488(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1488);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x8211bd20
	if (ctx.cr6.eq) goto loc_8211BD20;
	// lfs f13,1492(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1492);
	ctx.f13.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x8211bd24
	if (!ctx.cr6.eq) goto loc_8211BD24;
loc_8211BD20:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8211BD24:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8211BC90) {
	__imp__sub_8211BC90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8211BD34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8211BD34) {
	__imp__sub_8211BD34(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8211BD38) {
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
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addis r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 65536;
	// addi r11,r11,22924
	ctx.r11.s64 = ctx.r11.s64 + 22924;
	// lwz r8,172(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 172);
	// rlwinm r7,r8,0,20,21
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xC00;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x8211bd88
	if (!ctx.cr6.eq) goto loc_8211BD88;
loc_8211BD7C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f1.f64 = double(temp.f32);
	// b 0x8211bdc4
	goto loc_8211BDC4;
loc_8211BD88:
	// lwz r10,360(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 360);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8211bd7c
	if (ctx.cr6.eq) goto loc_8211BD7C;
	// lwz r10,364(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 364);
	// lis r9,-32181
	ctx.r9.s64 = -2109014016;
	// addi r11,r9,-5696
	ctx.r11.s64 = ctx.r9.s64 + -5696;
	// mulli r10,r10,404
	ctx.r10.s64 = ctx.r10.s64 * 404;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lhz r3,332(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 332);
	// bl 0x82332af8
	ctx.lr = 0x8211BDB0;
	sub_82332AF8(ctx, base);
	// lis r8,1
	ctx.r8.s64 = 65536;
	// addi r4,r31,296
	ctx.r4.s64 = ctx.r31.s64 + 296;
	// ori r7,r8,22912
	ctx.r7.u64 = ctx.r8.u64 | 22912;
	// lwzx r5,r30,r7
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r7.u32);
	// bl 0x8232fed8
	ctx.lr = 0x8211BDC4;
	sub_8232FED8(ctx, base);
loc_8211BDC4:
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

PPC_WEAK_FUNC(sub_8211BD38) {
	__imp__sub_8211BD38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8211BDDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8211BDDC) {
	__imp__sub_8211BDDC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8211BDE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// addi r9,r11,-15680
	ctx.r9.s64 = ctx.r11.s64 + -15680;
	// ori r8,r10,61924
	ctx.r8.u64 = ctx.r10.u64 | 61924;
	// addis r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 65536;
	// mullw r10,r3,r8
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r8.s32);
	// addi r11,r11,22924
	ctx.r11.s64 = ctx.r11.s64 + 22924;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r7,172(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 172);
	// rlwinm r6,r7,0,20,21
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xC00;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x8211be18
	if (!ctx.cr6.eq) goto loc_8211BE18;
loc_8211BE10:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8211BE18:
	// lwz r10,360(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 360);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8211be10
	if (ctx.cr6.eq) goto loc_8211BE10;
	// lis r10,-32181
	ctx.r10.s64 = -2109014016;
	// lwz r9,364(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 364);
	// addi r11,r10,-5696
	ctx.r11.s64 = ctx.r10.s64 + -5696;
	// mulli r8,r9,404
	ctx.r8.s64 = ctx.r9.s64 * 404;
	// addi r7,r11,325
	ctx.r7.s64 = ctx.r11.s64 + 325;
	// lbzx r3,r8,r7
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r7.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8211BDE0) {
	__imp__sub_8211BDE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8211BE40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x8211BE48;
	__savegprlr_25(ctx, base);
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x823de024
	ctx.lr = 0x8211BE50;
	__savefpr_27(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,208(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 208);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x8211be8c
	if (ctx.cr6.eq) goto loc_8211BE8C;
loc_8211BE78:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x823de070
	ctx.lr = 0x8211BE88;
	__restfpr_27(ctx, base);
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_8211BE8C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82141160
	ctx.lr = 0x8211BE94;
	sub_82141160(ctx, base);
	// addi r30,r30,28
	ctx.r30.s64 = ctx.r30.s64 + 28;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820eb798
	ctx.lr = 0x8211BEB0;
	sub_820EB798(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8211be78
	if (ctx.cr6.eq) goto loc_8211BE78;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lfs f11,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stfs f11,100(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f0,6024(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6024);
	ctx.f0.f64 = double(temp.f32);
	// fadds f10,f13,f0
	ctx.f10.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f10,104(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x820eb798
	ctx.lr = 0x8211BEF4;
	sub_820EB798(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8211be78
	if (ctx.cr6.eq) goto loc_8211BE78;
	// lis r11,-32167
	ctx.r11.s64 = -2108096512;
	// lfs f0,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r30,r11,-11232
	ctx.r30.s64 = ctx.r11.s64 + -11232;
	// lfs f12,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f11.f64 = double(temp.f32);
	// fadds f10,f13,f0
	ctx.f10.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// fadds f9,f11,f12
	ctx.f9.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// lfs f8,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lwz r10,-11232(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11232);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f31,2416(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2416);
	ctx.f31.f64 = double(temp.f32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r11,88(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// lfs f7,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f30,f7,f8
	ctx.f30.f64 = double(float(ctx.f7.f64 * ctx.f8.f64));
	// lfs f6,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f29,f6,f8
	ctx.f29.f64 = double(float(ctx.f6.f64 * ctx.f8.f64));
	// fmuls f28,f10,f31
	ctx.f28.f64 = double(float(ctx.f10.f64 * ctx.f31.f64));
	// fmuls f27,f9,f31
	ctx.f27.f64 = double(float(ctx.f9.f64 * ctx.f31.f64));
	// bl 0x822d48f0
	ctx.lr = 0x8211BF58;
	sub_822D48F0(ctx, base);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lis r8,-32165
	ctx.r8.s64 = -2107965440;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r7,r8,28832
	ctx.r7.s64 = ctx.r8.s64 + 28832;
	// lfs f5,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f5,f1
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f1.f64));
	// lfs f0,428(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 428);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f3,f4,f30
	ctx.f3.f64 = double(float(ctx.f4.f64 - ctx.f30.f64));
	// fsubs f2,f29,f4
	ctx.f2.f64 = double(float(ctx.f29.f64 - ctx.f4.f64));
	// fsel f1,f3,f30,f4
	ctx.f1.f64 = ctx.f3.f64 >= 0.0 ? ctx.f30.f64 : ctx.f4.f64;
	// fsel f13,f2,f29,f1
	ctx.f13.f64 = ctx.f2.f64 >= 0.0 ? ctx.f29.f64 : ctx.f1.f64;
	// stfs f13,0(r26)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r26.u32 + 0, temp.u32);
	// fmuls f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f12,0(r25)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r25.u32 + 0, temp.u32);
	// fnmsubs f11,f13,f31,f28
	ctx.f11.f64 = double(float(-(ctx.f13.f64 * ctx.f31.f64 - ctx.f28.f64)));
	// stfs f11,0(r28)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
	// fnmsubs f10,f12,f31,f27
	ctx.f10.f64 = double(float(-(ctx.f12.f64 * ctx.f31.f64 - ctx.f27.f64)));
	// stfs f10,0(r27)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r27.u32 + 0, temp.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x823de070
	ctx.lr = 0x8211BFAC;
	__restfpr_27(ctx, base);
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8211BE40) {
	__imp__sub_8211BE40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8211BFB0) {
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
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f5,108(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r7,r9,-2072
	ctx.r7.s64 = ctx.r9.s64 + -2072;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// lfs f0,-2072(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -2072);
	ctx.f0.f64 = double(temp.f32);
	// lfs f8,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f8.f64 = double(temp.f32);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// lfs f6,5484(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f6.f64 = double(temp.f32);
	// fmr f7,f8
	ctx.f7.f64 = ctx.f8.f64;
	// lfs f13,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmr f5,f6
	ctx.f5.f64 = ctx.f6.f64;
	// lfs f12,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
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
	// bl 0x821202c8
	ctx.lr = 0x8211C008;
	sub_821202C8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8211BFB0) {
	__imp__sub_8211BFB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8211C018) {
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
	// lis r8,1
	ctx.r8.s64 = 65536;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// ori r7,r8,23096
	ctx.r7.u64 = ctx.r8.u64 | 23096;
	// lwzx r6,r11,r7
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// rlwinm r5,r6,0,26,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x30;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x8211c0dc
	if (!ctx.cr6.eq) goto loc_8211C0DC;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lis r9,-32181
	ctx.r9.s64 = -2109014016;
	// ori r8,r10,23180
	ctx.r8.u64 = ctx.r10.u64 | 23180;
	// addi r10,r9,-5696
	ctx.r10.s64 = ctx.r9.s64 + -5696;
	// lwzx r7,r11,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// mulli r11,r7,404
	ctx.r11.s64 = ctx.r7.s64 * 404;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r6,380(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 380);
	// clrlwi r5,r6,31
	ctx.r5.u64 = ctx.r6.u32 & 0x1;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8211c0dc
	if (ctx.cr6.eq) goto loc_8211C0DC;
	// lbz r11,208(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 208);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8211c0dc
	if (!ctx.cr6.eq) goto loc_8211C0DC;
	// lis r11,-32181
	ctx.r11.s64 = -2109014016;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r10,r11,-22896
	ctx.r10.s64 = ctx.r11.s64 + -22896;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// lwz r31,16164(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16164);
	// bl 0x8211be40
	ctx.lr = 0x8211C0B0;
	sub_8211BE40(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8211c0dc
	if (ctx.cr6.eq) goto loc_8211C0DC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f4,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f4.f64 = double(temp.f32);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// lfs f3,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f1.f64 = double(temp.f32);
	// lfs f5,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f5.f64 = double(temp.f32);
	// bl 0x8211bfb0
	ctx.lr = 0x8211C0DC;
	sub_8211BFB0(ctx, base);
loc_8211C0DC:
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

PPC_WEAK_FUNC(sub_8211C018) {
	__imp__sub_8211C018(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8211C0F0) {
	PPC_FUNC_PROLOGUE();
	// b 0x8211c018
	sub_8211C018(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8211C0F0) {
	__imp__sub_8211C0F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8211C0F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8211C0F4) {
	__imp__sub_8211C0F4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8211C0F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x8211C100;
	__savegprlr_27(ctx, base);
	// stwu r1,-448(r1)
	ea = -448 + ctx.r1.u32;
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
	// add r29,r10,r11
	ctx.r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addis r31,r29,1
	ctx.r31.s64 = ctx.r29.s64 + 65536;
	// addi r31,r31,22924
	ctx.r31.s64 = ctx.r31.s64 + 22924;
	// bl 0x82141160
	ctx.lr = 0x8211C128;
	sub_82141160(ctx, base);
	// lwz r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// rlwinm r7,r8,0,30,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x8211c364
	if (ctx.cr6.eq) goto loc_8211C364;
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmpwi cr6,r11,2047
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2047, ctx.xer);
	// beq cr6,0x8211c364
	if (ctx.cr6.eq) goto loc_8211C364;
	// bl 0x823df900
	ctx.lr = 0x8211C14C;
	sub_823DF900(ctx, base);
	// srawi r11,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 1;
	// addze r10,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r10.s64 = temp.s64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// subf. r8,r9,r3
	ctx.r8.s64 = ctx.r3.s64 - ctx.r9.s64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x8211c178
	if (ctx.cr0.eq) goto loc_8211C178;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r10,r11,-14268
	ctx.r10.s64 = ctx.r11.s64 + -14268;
	// lfs f0,-14268(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -14268);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// b 0x8211c190
	goto loc_8211C190;
loc_8211C178:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r11,-14284
	ctx.r9.s64 = ctx.r11.s64 + -14284;
	// lfs f0,6020(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6020);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
loc_8211C190:
	// stfs f12,124(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// lis r28,-32256
	ctx.r28.s64 = -2113929216;
	// stfs f13,120(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// li r4,6
	ctx.r4.s64 = 6;
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lfs f1,4292(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4292);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822c2068
	ctx.lr = 0x8211C1B4;
	sub_822C2068(ctx, base);
	// addis r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 65536;
	// addis r8,r29,2
	ctx.r8.s64 = ctx.r29.s64 + 131072;
	// lwz r9,68(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// addi r11,r11,22952
	ctx.r11.s64 = ctx.r11.s64 + 22952;
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r8,r8,2116
	ctx.r8.s64 = ctx.r8.s64 + 2116;
	// lwz r5,256(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// lis r6,-32181
	ctx.r6.s64 = -2109014016;
	// mulli r10,r9,404
	ctx.r10.s64 = ctx.r9.s64 * 404;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// lfs f13,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// lfs f11,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f8,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f10,8(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lfs f7,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// addi r11,r6,-5696
	ctx.r11.s64 = ctx.r6.s64 + -5696;
	// fsubs f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// lis r4,-32255
	ctx.r4.s64 = -2113863680;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r5,r4,-14324
	ctx.r5.s64 = ctx.r4.s64 + -14324;
	// li r4,256
	ctx.r4.s64 = 256;
	// fmuls f5,f12,f12
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lfs f4,128(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f0,f4,f4
	ctx.f0.f64 = double(float(ctx.f4.f64 * ctx.f4.f64));
	// lfs f13,124(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	ctx.f13.f64 = double(temp.f32);
	// lfs f3,120(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,116(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,112(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	ctx.f1.f64 = double(temp.f32);
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
	// lfs f12,132(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f11,f9,f9,f5
	ctx.f11.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f5.f64));
	// fmadds f10,f13,f13,f0
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fmadds f9,f6,f6,f11
	ctx.f9.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f11.f64));
	// fmadds f8,f12,f12,f10
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f10.f64));
	// fsqrts f5,f9
	ctx.f5.f64 = double(float(sqrt(ctx.f9.f64)));
	// stfd f5,72(r1)
	PPC_STORE_U64(ctx.r1.u32 + 72, ctx.f5.u64);
	// ld r10,72(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 72);
	// fsqrts f4,f8
	ctx.f4.f64 = double(float(sqrt(ctx.f8.f64)));
	// stfd f4,64(r1)
	PPC_STORE_U64(ctx.r1.u32 + 64, ctx.f4.u64);
	// ld r9,64(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 64);
	// bl 0x822e8368
	ctx.lr = 0x8211C288;
	sub_822E8368(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lfs f3,4292(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4292);
	ctx.f3.f64 = double(temp.f32);
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// lis r28,-32256
	ctx.r28.s64 = -2113929216;
	// li r10,8
	ctx.r10.s64 = 8;
	// li r9,8
	ctx.r9.s64 = 8;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,256
	ctx.r5.s64 = 256;
	// lfs f2,5996(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5996);
	ctx.f2.f64 = double(temp.f32);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// lfs f1,7324(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 7324);
	ctx.f1.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822c1ce8
	ctx.lr = 0x8211C2C8;
	sub_822C1CE8(ctx, base);
	// lis r29,-32255
	ctx.r29.s64 = -2113863680;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f1,-14328(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + -14328);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822c2068
	ctx.lr = 0x8211C2DC;
	sub_822C2068(ctx, base);
	// lfs f1,-14328(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + -14328);
	ctx.f1.f64 = double(temp.f32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x822c1c70
	ctx.lr = 0x8211C2E8;
	sub_822C1C70(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r5,r10,-14376
	ctx.r5.s64 = ctx.r10.s64 + -14376;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x822e8368
	ctx.lr = 0x8211C2FC;
	sub_822E8368(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,256
	ctx.r4.s64 = 256;
	// lfs f1,-14328(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + -14328);
	ctx.f1.f64 = double(temp.f32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x822c1bf8
	ctx.lr = 0x8211C310;
	sub_822C1BF8(ctx, base);
	// neg r9,r3
	ctx.r9.s64 = -ctx.r3.s64;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// lfs f0,7324(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 7324);
	ctx.f0.f64 = double(temp.f32);
	// extsw r7,r9
	ctx.r7.s64 = ctx.r9.s32;
	// lfs f3,-14328(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + -14328);
	ctx.f3.f64 = double(temp.f32);
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// std r7,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r7.u64);
	// lfd f7,128(r1)
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f6,f7
	ctx.f6.f64 = double(ctx.f7.s64);
	// li r10,10
	ctx.r10.s64 = 10;
	// frsp f5,f6
	ctx.f5.f64 = double(float(ctx.f6.f64));
	// lfs f2,-14380(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -14380);
	ctx.f2.f64 = double(temp.f32);
	// li r9,10
	ctx.r9.s64 = 10;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r5,256
	ctx.r5.s64 = 256;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fsubs f1,f5,f0
	ctx.f1.f64 = double(float(ctx.f5.f64 - ctx.f0.f64));
	// bl 0x822c1ce8
	ctx.lr = 0x8211C364;
	sub_822C1CE8(ctx, base);
loc_8211C364:
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8211C0F8) {
	__imp__sub_8211C0F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8211C36C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8211C36C) {
	__imp__sub_8211C36C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8211C370) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x8211C378;
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lhz r3,332(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 332);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82332af8
	ctx.lr = 0x8211C394;
	sub_82332AF8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r30,40
	ctx.r3.s64 = ctx.r30.s64 + 40;
	// bl 0x822da650
	ctx.lr = 0x8211C3A4;
	sub_822DA650(ctx, base);
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
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// stfs f13,16(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// stfs f12,20(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// lfs f11,1580(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 1580);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,28(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f9,f11,f0,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f0.f64 + ctx.f10.f64));
	// stfs f9,0(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// lfs f8,32(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f7,f11,f13,f8
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f13.f64 + ctx.f8.f64));
	// stfs f7,4(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// lfs f6,36(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f5,f11,f12,f6
	ctx.f5.f64 = double(float(ctx.f11.f64 * ctx.f12.f64 + ctx.f6.f64));
	// stfs f5,8(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// lwz r3,1560(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1560);
	// bl 0x822ddcf8
	ctx.lr = 0x8211C3EC;
	sub_822DDCF8(ctx, base);
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// lwz r3,1564(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1564);
	// bl 0x822ddcf8
	ctx.lr = 0x8211C3F8;
	sub_822DDCF8(ctx, base);
	// stw r3,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
	// lfs f4,1568(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 1568);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,32(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// li r29,0
	ctx.r29.s64 = 0;
	// lfs f3,1572(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 1572);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,36(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// lfs f2,1576(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 1576);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,40(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// lfs f1,1584(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 1584);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,44(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// lfs f0,1588(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 1588);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,48(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// lfs f13,1592(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 1592);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,52(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// lbz r11,1663(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 1663);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r9,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stb r9,56(r31)
	PPC_STORE_U8(ctx.r31.u32 + 56, ctx.r9.u8);
	// lfs f12,1596(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 1596);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,60(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// lfs f11,1600(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 1600);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,64(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// lfs f10,1604(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 1604);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,68(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// lfs f9,1608(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 1608);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,72(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// lbz r8,1664(r28)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r28.u32 + 1664);
	// addic r7,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r7.s64 = ctx.r8.s64 + -1;
	// subfe r6,r7,r8
	temp.u8 = (~ctx.r7.u32 + ctx.r8.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stb r6,76(r31)
	PPC_STORE_U8(ctx.r31.u32 + 76, ctx.r6.u8);
	// lfs f8,1612(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 1612);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,80(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 80, temp.u32);
	// clrlwi r5,r6,24
	ctx.r5.u64 = ctx.r6.u32 & 0xFF;
	// lfs f7,1616(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 1616);
	ctx.f7.f64 = double(temp.f32);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// stfs f7,84(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 84, temp.u32);
	// beq cr6,0x8211c4b4
	if (ctx.cr6.eq) goto loc_8211C4B4;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8211c4b4
	if (!ctx.cr6.eq) goto loc_8211C4B4;
	// lhz r3,332(r30)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r30.u32 + 332);
	// bl 0x82332b28
	ctx.lr = 0x8211C49C;
	sub_82332B28(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-13872
	ctx.r4.s64 = ctx.r11.s64 + -13872;
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x82280c30
	ctx.lr = 0x8211C4B0;
	sub_82280C30(ctx, base);
	// stb r29,76(r31)
	PPC_STORE_U8(ctx.r31.u32 + 76, ctx.r29.u8);
loc_8211C4B4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,52(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// lfs f30,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f30.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bge cr6,0x8211c4cc
	if (!ctx.cr6.lt) goto loc_8211C4CC;
	// stfs f30,52(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
loc_8211C4CC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,52(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// lfs f31,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f31.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x8211c4e4
	if (!ctx.cr6.gt) goto loc_8211C4E4;
	// stfs f31,52(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
loc_8211C4E4:
	// lbz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 76);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8211c56c
	if (ctx.cr6.eq) goto loc_8211C56C;
	// lfs f0,80(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bge cr6,0x8211c500
	if (!ctx.cr6.lt) goto loc_8211C500;
	// stfs f30,80(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 80, temp.u32);
loc_8211C500:
	// lfs f0,80(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x8211c510
	if (!ctx.cr6.gt) goto loc_8211C510;
	// stfs f31,80(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 80, temp.u32);
loc_8211C510:
	// lfs f0,84(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bge cr6,0x8211c520
	if (!ctx.cr6.lt) goto loc_8211C520;
	// stfs f30,84(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 84, temp.u32);
loc_8211C520:
	// lfs f0,84(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x8211c530
	if (!ctx.cr6.gt) goto loc_8211C530;
	// stfs f31,84(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 84, temp.u32);
loc_8211C530:
	// lfs f0,84(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,80(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// fcmpu cr6,f12,f31
	ctx.cr6.compare(ctx.f12.f64, ctx.f31.f64);
	// ble cr6,0x8211c56c
	if (!ctx.cr6.gt) goto loc_8211C56C;
	// lhz r3,332(r30)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r30.u32 + 332);
	// bl 0x82332b28
	ctx.lr = 0x8211C54C;
	sub_82332B28(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-13976
	ctx.r4.s64 = ctx.r11.s64 + -13976;
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x82280c30
	ctx.lr = 0x8211C560;
	sub_82280C30(ctx, base);
	// stfs f30,80(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 80, temp.u32);
	// stfs f30,84(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 84, temp.u32);
	// stb r29,76(r31)
	PPC_STORE_U8(ctx.r31.u32 + 76, ctx.r29.u8);
loc_8211C56C:
	// lbz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8211c5f4
	if (ctx.cr6.eq) goto loc_8211C5F4;
	// lfs f0,68(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bge cr6,0x8211c588
	if (!ctx.cr6.lt) goto loc_8211C588;
	// stfs f30,68(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
loc_8211C588:
	// lfs f0,68(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x8211c598
	if (!ctx.cr6.gt) goto loc_8211C598;
	// stfs f31,68(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
loc_8211C598:
	// lfs f0,72(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bge cr6,0x8211c5a8
	if (!ctx.cr6.lt) goto loc_8211C5A8;
	// stfs f30,72(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
loc_8211C5A8:
	// lfs f0,72(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x8211c5b8
	if (!ctx.cr6.gt) goto loc_8211C5B8;
	// stfs f31,72(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
loc_8211C5B8:
	// lfs f0,72(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,68(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// fcmpu cr6,f12,f31
	ctx.cr6.compare(ctx.f12.f64, ctx.f31.f64);
	// ble cr6,0x8211c5f4
	if (!ctx.cr6.gt) goto loc_8211C5F4;
	// lhz r3,332(r30)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r30.u32 + 332);
	// bl 0x82332b28
	ctx.lr = 0x8211C5D4;
	sub_82332B28(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-14080
	ctx.r4.s64 = ctx.r11.s64 + -14080;
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x82280c30
	ctx.lr = 0x8211C5E8;
	sub_82280C30(ctx, base);
	// stfs f30,80(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 80, temp.u32);
	// stfs f30,84(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 84, temp.u32);
	// stb r29,56(r31)
	PPC_STORE_U8(ctx.r31.u32 + 56, ctx.r29.u8);
loc_8211C5F4:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8211c630
	if (!ctx.cr6.eq) goto loc_8211C630;
	// lhz r3,332(r30)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r30.u32 + 332);
	// bl 0x82332b28
	ctx.lr = 0x8211C608;
	sub_82332B28(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-14168
	ctx.r4.s64 = ctx.r11.s64 + -14168;
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x82280c30
	ctx.lr = 0x8211C61C;
	sub_82280C30(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
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
loc_8211C630:
	// lfs f0,40(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bne cr6,0x8211c66c
	if (!ctx.cr6.eq) goto loc_8211C66C;
	// lhz r3,332(r30)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r30.u32 + 332);
	// bl 0x82332b28
	ctx.lr = 0x8211C644;
	sub_82332B28(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-14248
	ctx.r4.s64 = ctx.r11.s64 + -14248;
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x82280c30
	ctx.lr = 0x8211C658;
	sub_82280C30(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
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
loc_8211C66C:
	// li r3,1
	ctx.r3.s64 = 1;
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

PPC_WEAK_FUNC(sub_8211C370) {
	__imp__sub_8211C370(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8211C680) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x8211C688;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r4,12
	ctx.r5.s64 = ctx.r4.s64 + 12;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x822d5660
	ctx.lr = 0x8211C6AC;
	sub_822D5660(ctx, base);
	// lfs f0,40(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// fdivs f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 / ctx.f0.f64));
	// lfs f13,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x8211c6d4
	if (!ctx.cr6.lt) goto loc_8211C6D4;
loc_8211C6C8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_8211C6D4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,12168(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x8211c6e8
	if (!ctx.cr6.gt) goto loc_8211C6E8;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_8211C6E8:
	// lfs f12,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f11,f12
	ctx.f10.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// lfs f9,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f8,f9
	ctx.f7.f64 = double(float(ctx.f8.f64 - ctx.f9.f64));
	// lfs f6,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f4,f5,f6
	ctx.f4.f64 = double(float(ctx.f5.f64 - ctx.f6.f64));
	// lfs f3,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f2.f64 = double(temp.f32);
	// fsubs f1,f2,f3
	ctx.f1.f64 = double(float(ctx.f2.f64 - ctx.f3.f64));
	// fmuls f12,f10,f10
	ctx.f12.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// fmadds f11,f1,f0,f3
	ctx.f11.f64 = double(float(ctx.f1.f64 * ctx.f0.f64 + ctx.f3.f64));
	// fmadds f10,f7,f7,f12
	ctx.f10.f64 = double(float(ctx.f7.f64 * ctx.f7.f64 + ctx.f12.f64));
	// fmadds f9,f4,f4,f10
	ctx.f9.f64 = double(float(ctx.f4.f64 * ctx.f4.f64 + ctx.f10.f64));
	// fsqrts f8,f9
	ctx.f8.f64 = double(float(sqrt(ctx.f9.f64)));
	// fdivs f12,f8,f11
	ctx.f12.f64 = double(float(ctx.f8.f64 / ctx.f11.f64));
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// bgt cr6,0x8211c6c8
	if (ctx.cr6.gt) goto loc_8211C6C8;
	// stfs f12,0(r29)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stfs f0,0(r28)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8211C680) {
	__imp__sub_8211C680(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8211C74C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8211C74C) {
	__imp__sub_8211C74C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8211C750) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// fcmpu cr6,f1,f2
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f2.f64);
	// bge cr6,0x8211c764
	if (!ctx.cr6.lt) goto loc_8211C764;
loc_8211C758:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_8211C764:
	// fcmpu cr6,f1,f3
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f3.f64);
	// ble cr6,0x8211c778
	if (!ctx.cr6.gt) goto loc_8211C778;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_8211C778:
	// fcmpu cr6,f2,f3
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f2.f64, ctx.f3.f64);
	// beq cr6,0x8211c758
	if (ctx.cr6.eq) goto loc_8211C758;
	// fsubs f0,f1,f2
	ctx.f0.f64 = double(float(ctx.f1.f64 - ctx.f2.f64));
	// fsubs f13,f3,f2
	ctx.f13.f64 = double(float(ctx.f3.f64 - ctx.f2.f64));
	// fdivs f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8211C750) {
	__imp__sub_8211C750(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8211C790) {
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
	// bl 0x823de028
	ctx.lr = 0x8211C7A8;
	__savefpr_28(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8211c370
	ctx.lr = 0x8211C7C0;
	sub_8211C370(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8211ca44
	if (ctx.cr6.eq) goto loc_8211CA44;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lis r10,-32187
	ctx.r10.s64 = -2109407232;
	// ori r9,r11,61924
	ctx.r9.u64 = ctx.r11.u64 | 61924;
	// addi r11,r10,-15680
	ctx.r11.s64 = ctx.r10.s64 + -15680;
	// mullw r10,r31,r9
	ctx.r10.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r9.s32);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addis r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 65536;
	// addi r11,r11,22924
	ctx.r11.s64 = ctx.r11.s64 + 22924;
	// lwz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// rlwinm r7,r8,0,30,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x8211c80c
	if (ctx.cr6.eq) goto loc_8211C80C;
	// lhz r9,334(r30)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r30.u32 + 334);
	// lwz r8,68(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x8211ca44
	if (ctx.cr6.eq) goto loc_8211CA44;
loc_8211C80C:
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// rlwinm r9,r11,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8211ca44
	if (!ctx.cr6.eq) goto loc_8211CA44;
	// addis r3,r10,2
	ctx.r3.s64 = ctx.r10.s64 + 131072;
	// addi r6,r1,100
	ctx.r6.s64 = ctx.r1.s64 + 100;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r3,2116
	ctx.r3.s64 = ctx.r3.s64 + 2116;
	// bl 0x8211c680
	ctx.lr = 0x8211C834;
	sub_8211C680(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8211ca44
	if (ctx.cr6.eq) goto loc_8211CA44;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,164(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// lfs f31,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,12168(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f30.f64 = double(temp.f32);
	// bge cr6,0x8211c868
	if (!ctx.cr6.lt) goto loc_8211C868;
	// fmr f0,f31
	ctx.f0.f64 = ctx.f31.f64;
	// b 0x8211c894
	goto loc_8211C894;
loc_8211C868:
	// fcmpu cr6,f13,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f30.f64);
	// ble cr6,0x8211c878
	if (!ctx.cr6.gt) goto loc_8211C878;
	// fmr f0,f30
	ctx.f0.f64 = ctx.f30.f64;
	// b 0x8211c894
	goto loc_8211C894;
loc_8211C878:
	// fcmpu cr6,f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bne cr6,0x8211c888
	if (!ctx.cr6.eq) goto loc_8211C888;
	// fmr f0,f31
	ctx.f0.f64 = ctx.f31.f64;
	// b 0x8211c894
	goto loc_8211C894;
loc_8211C888:
	// fsubs f13,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fsubs f12,f30,f0
	ctx.f12.f64 = double(float(ctx.f30.f64 - ctx.f0.f64));
	// fdivs f0,f13,f12
	ctx.f0.f64 = double(float(ctx.f13.f64 / ctx.f12.f64));
loc_8211C894:
	// lfs f13,156(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	ctx.f13.f64 = double(temp.f32);
	// lbz r10,168(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 168);
	// lfs f12,160(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// lfs f12,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f12.f64 = double(temp.f32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// fmadds f28,f11,f0,f13
	ctx.f28.f64 = double(float(ctx.f11.f64 * ctx.f0.f64 + ctx.f13.f64));
	// beq cr6,0x8211c940
	if (ctx.cr6.eq) goto loc_8211C940;
	// lfs f0,184(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,180(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f30,f0
	ctx.f0.f64 = double(float(ctx.f30.f64 - ctx.f0.f64));
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// bge cr6,0x8211c8e0
	if (!ctx.cr6.lt) goto loc_8211C8E0;
	// lfs f13,172(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	ctx.f13.f64 = double(temp.f32);
	// fmr f0,f31
	ctx.f0.f64 = ctx.f31.f64;
	// lfs f11,176(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f11,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// fmadds f29,f10,f31,f13
	ctx.f29.f64 = double(float(ctx.f10.f64 * ctx.f31.f64 + ctx.f13.f64));
	// b 0x8211c944
	goto loc_8211C944;
loc_8211C8E0:
	// fcmpu cr6,f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// ble cr6,0x8211c900
	if (!ctx.cr6.gt) goto loc_8211C900;
	// lfs f13,172(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	ctx.f13.f64 = double(temp.f32);
	// fmr f0,f30
	ctx.f0.f64 = ctx.f30.f64;
	// lfs f11,176(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f11,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// fmadds f29,f10,f30,f13
	ctx.f29.f64 = double(float(ctx.f10.f64 * ctx.f30.f64 + ctx.f13.f64));
	// b 0x8211c944
	goto loc_8211C944;
loc_8211C900:
	// fcmpu cr6,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x8211c920
	if (!ctx.cr6.eq) goto loc_8211C920;
	// lfs f13,172(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	ctx.f13.f64 = double(temp.f32);
	// fmr f0,f31
	ctx.f0.f64 = ctx.f31.f64;
	// lfs f11,176(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f11,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// fmadds f29,f10,f31,f13
	ctx.f29.f64 = double(float(ctx.f10.f64 * ctx.f31.f64 + ctx.f13.f64));
	// b 0x8211c944
	goto loc_8211C944;
loc_8211C920:
	// fsubs f11,f12,f13
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// fsubs f10,f0,f13
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f13,172(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f0,f11,f10
	ctx.f0.f64 = double(float(ctx.f11.f64 / ctx.f10.f64));
	// lfs f11,176(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f11,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// fmadds f29,f10,f0,f13
	ctx.f29.f64 = double(float(ctx.f10.f64 * ctx.f0.f64 + ctx.f13.f64));
	// b 0x8211c944
	goto loc_8211C944;
loc_8211C940:
	// fmr f29,f30
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f30.f64;
loc_8211C944:
	// lbz r10,188(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 188);
	// lhz r31,334(r30)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r30.u32 + 334);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8211ca24
	if (ctx.cr6.eq) goto loc_8211CA24;
	// lfs f0,196(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,192(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f30,f0
	ctx.f0.f64 = double(float(ctx.f30.f64 - ctx.f0.f64));
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// blt cr6,0x8211c98c
	if (ctx.cr6.lt) goto loc_8211C98C;
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// ble cr6,0x8211c978
	if (!ctx.cr6.gt) goto loc_8211C978;
	// fmr f31,f30
	ctx.f31.f64 = ctx.f30.f64;
	// b 0x8211c98c
	goto loc_8211C98C;
loc_8211C978:
	// fcmpu cr6,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x8211c98c
	if (ctx.cr6.eq) goto loc_8211C98C;
	// fsubs f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// fsubs f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fdivs f31,f12,f11
	ctx.f31.f64 = double(float(ctx.f12.f64 / ctx.f11.f64));
loc_8211C98C:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,140(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// lwz r3,136(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// bl 0x82364d48
	ctx.lr = 0x8211C99C;
	sub_82364D48(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8211c9d8
	if (ctx.cr6.eq) goto loc_8211C9D8;
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r4,140(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r3,136(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// fmr f3,f29
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f29.f64;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// fmr f2,f28
	ctx.f2.f64 = ctx.f28.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82365140
	ctx.lr = 0x8211C9D4;
	sub_82365140(ctx, base);
	// b 0x8211ca44
	goto loc_8211CA44;
loc_8211C9D8:
	// fsubs f0,f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f30.f64 - ctx.f31.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmuls f30,f31,f28
	ctx.f30.f64 = double(float(ctx.f31.f64 * ctx.f28.f64));
	// lfs f31,5804(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5804);
	ctx.f31.f64 = double(temp.f32);
	// fmuls f1,f0,f28
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f28.f64));
	// fcmpu cr6,f1,f31
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// ble cr6,0x8211ca10
	if (!ctx.cr6.gt) goto loc_8211CA10;
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r3,136(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// li r8,0
	ctx.r8.s64 = 0;
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// bl 0x82364bc8
	ctx.lr = 0x8211CA10;
	sub_82364BC8(ctx, base);
loc_8211CA10:
	// fcmpu cr6,f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f30.f64, ctx.f31.f64);
	// ble cr6,0x8211ca44
	if (!ctx.cr6.gt) goto loc_8211CA44;
	// lwz r3,140(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// b 0x8211ca2c
	goto loc_8211CA2C;
loc_8211CA24:
	// lwz r3,136(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// fmr f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f28.f64;
loc_8211CA2C:
	// li r9,1
	ctx.r9.s64 = 1;
	// fmr f2,f29
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f29.f64;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// bl 0x82364bc8
	ctx.lr = 0x8211CA44;
	sub_82364BC8(ctx, base);
loc_8211CA44:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x823de074
	ctx.lr = 0x8211CA50;
	__restfpr_28(ctx, base);
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

PPC_WEAK_FUNC(sub_8211C790) {
	__imp__sub_8211C790(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8211CA64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8211CA64) {
	__imp__sub_8211CA64(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8211CA68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8211CA70;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82332b10
	ctx.lr = 0x8211CA84;
	sub_82332B10(ctx, base);
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lis r10,-32187
	ctx.r10.s64 = -2109407232;
	// ori r9,r11,61924
	ctx.r9.u64 = ctx.r11.u64 | 61924;
	// addi r11,r10,-15680
	ctx.r11.s64 = ctx.r10.s64 + -15680;
	// addis r8,r31,1
	ctx.r8.s64 = ctx.r31.s64 + 65536;
	// mullw r10,r30,r9
	ctx.r10.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r9.s32);
	// addi r8,r8,9324
	ctx.r8.s64 = ctx.r8.s64 + 9324;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// addis r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 65536;
	// addi r3,r3,22924
	ctx.r3.s64 = ctx.r3.s64 + 22924;
	// lhzx r4,r7,r11
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r7.u32 + ctx.r11.u32);
	// bl 0x820da5b0
	ctx.lr = 0x8211CABC;
	sub_820DA5B0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8211cb00
	if (!ctx.cr6.eq) goto loc_8211CB00;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r31,60(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 60);
	// bl 0x82332b28
	ctx.lr = 0x8211CAD0;
	sub_82332B28(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-13760
	ctx.r4.s64 = ctx.r11.s64 + -13760;
	// li r3,14
	ctx.r3.s64 = 14;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// bl 0x82280b08
	ctx.lr = 0x8211CAE8;
	sub_82280B08(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8211b8e0
	ctx.lr = 0x8211CAF4;
	sub_8211B8E0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_8211CB00:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8211CA68) {
	__imp__sub_8211CA68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8211CB0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8211CB0C) {
	__imp__sub_8211CB0C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8211CB10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf54
	ctx.lr = 0x8211CB18;
	__savegprlr_19(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
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
	// add r23,r10,r11
	ctx.r23.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r20,r5
	ctx.r20.u64 = ctx.r5.u64;
	// mr r19,r6
	ctx.r19.u64 = ctx.r6.u64;
	// lwz r8,32(r23)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r23.u32 + 32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8211cda0
	if (ctx.cr6.eq) goto loc_8211CDA0;
	// addis r25,r23,1
	ctx.r25.s64 = ctx.r23.s64 + 65536;
	// addi r25,r25,22924
	ctx.r25.s64 = ctx.r25.s64 + 22924;
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bge cr6,0x8211cda0
	if (!ctx.cr6.lt) goto loc_8211CDA0;
	// addis r22,r23,2
	ctx.r22.s64 = ctx.r23.s64 + 131072;
	// addi r22,r22,18632
	ctx.r22.s64 = ctx.r22.s64 + 18632;
	// lwz r31,0(r22)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332af8
	ctx.lr = 0x8211CB78;
	sub_82332AF8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82332c40
	ctx.lr = 0x8211CB80;
	sub_82332C40(ctx, base);
	// cmplwi cr6,r3,2
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// blt cr6,0x8211cda0
	if (ctx.cr6.lt) goto loc_8211CDA0;
	// lwz r11,56(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 56);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8211cbe8
	if (!ctx.cr6.eq) goto loc_8211CBE8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x8211ca68
	ctx.lr = 0x8211CBA0;
	sub_8211CA68(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8211cda0
	if (ctx.cr6.eq) goto loc_8211CDA0;
	// addis r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 65536;
	// addi r11,r11,9324
	ctx.r11.s64 = ctx.r11.s64 + 9324;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r31,r10,r23
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r23.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332af8
	ctx.lr = 0x8211CBC4;
	sub_82332AF8(ctx, base);
	// lbz r9,1660(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1660);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8211cc20
	if (!ctx.cr6.eq) goto loc_8211CC20;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x8211b8e0
	ctx.lr = 0x8211CBDC;
	sub_8211B8E0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x823ddfa4
	__restgprlr_19(ctx, base);
	return;
loc_8211CBE8:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8211cc20
	if (ctx.cr6.eq) goto loc_8211CC20;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x8211cc20
	if (ctx.cr6.eq) goto loc_8211CC20;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// ori r10,r11,18644
	ctx.r10.u64 = ctx.r11.u64 | 18644;
	// lwzx r30,r23,r10
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r23.u32 + ctx.r10.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8211cc20
	if (ctx.cr6.eq) goto loc_8211CC20;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x820da5b0
	ctx.lr = 0x8211CC18;
	sub_820DA5B0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8211cd68
	if (!ctx.cr6.eq) goto loc_8211CD68;
loc_8211CC20:
	// lwz r11,56(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 56);
	// subfic r10,r28,0
	ctx.xer.ca = ctx.r28.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r28.s64;
	// li r9,4
	ctx.r9.s64 = 4;
	// addi r8,r11,-4
	ctx.r8.s64 = ctx.r11.s64 + -4;
	// subfe r7,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addic r6,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r6.s64 = ctx.r8.s64 + -1;
	// rlwinm r11,r7,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x2;
	// subfe r4,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r4.u64 = ~ctx.r5.u64 + ctx.r5.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r27,r11,-1
	ctx.r27.s64 = ctx.r11.s64 + -1;
	// and r24,r4,r9
	ctx.r24.u64 = ctx.r4.u64 & ctx.r9.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne cr6,0x8211cc5c
	if (!ctx.cr6.eq) goto loc_8211CC5C;
	// li r26,1
	ctx.r26.s64 = 1;
	// li r28,0
	ctx.r28.s64 = 0;
	// b 0x8211cc84
	goto loc_8211CC84;
loc_8211CC5C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// bl 0x820da4f0
	ctx.lr = 0x8211CC6C;
	sub_820DA4F0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwinm r10,r3,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	// subfc r9,r3,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r3.u32;
	ctx.r9.s64 = ctx.r11.s64 - ctx.r3.s64;
	// rlwinm r8,r11,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// subfe r7,r8,r10
	temp.u8 = (~ctx.r8.u32 + ctx.r10.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r28,r7,r3
	ctx.r28.u64 = ctx.r7.u64 & ctx.r3.u64;
loc_8211CC84:
	// lis r11,-30584
	ctx.r11.s64 = -2004353024;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// ori r29,r11,34953
	ctx.r29.u64 = ctx.r11.u64 | 34953;
loc_8211CC90:
	// clrlwi r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8211cca8
	if (ctx.cr6.eq) goto loc_8211CCA8;
	// li r26,0
	ctx.r26.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x8211ccd8
	goto loc_8211CCD8;
loc_8211CCA8:
	// add r11,r31,r27
	ctx.r11.u64 = ctx.r31.u64 + ctx.r27.u64;
	// addi r11,r11,15
	ctx.r11.s64 = ctx.r11.s64 + 15;
	// mulhw r10,r11,r29
	ctx.r10.s64 = (int64_t(ctx.r11.s32) * int64_t(ctx.r29.s32)) >> 32;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// srawi r10,r10,3
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 3;
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r9,r10,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r8,r10,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	// subf r31,r8,r11
	ctx.r31.s64 = ctx.r11.s64 - ctx.r8.s64;
	// cmpw cr6,r31,r28
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r28.s32, ctx.xer);
	// beq cr6,0x8211cd80
	if (ctx.cr6.eq) goto loc_8211CD80;
loc_8211CCD8:
	// addi r11,r31,136
	ctx.r11.s64 = ctx.r31.s64 + 136;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r10,r25
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r25.u32);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x8211cc90
	if (ctx.cr6.eq) goto loc_8211CC90;
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// beq cr6,0x8211cd0c
	if (ctx.cr6.eq) goto loc_8211CD0C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82333800
	ctx.lr = 0x8211CD00;
	sub_82333800(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8211cc90
	if (ctx.cr6.eq) goto loc_8211CC90;
loc_8211CD0C:
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// beq cr6,0x8211cd28
	if (ctx.cr6.eq) goto loc_8211CD28;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82332008
	ctx.lr = 0x8211CD20;
	sub_82332008(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8211cc90
	if (ctx.cr6.eq) goto loc_8211CC90;
loc_8211CD28:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82332af8
	ctx.lr = 0x8211CD30;
	sub_82332AF8(ctx, base);
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// cmpw cr6,r11,r24
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r24.s32, ctx.xer);
	// bne cr6,0x8211cc90
	if (!ctx.cr6.eq) goto loc_8211CC90;
	// srawi r11,r30,5
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r30.s32 >> 5;
	// clrlwi r10,r30,27
	ctx.r10.u64 = ctx.r30.u32 & 0x1F;
	// addis r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 65536;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r9,r9,-17301
	ctx.r9.s64 = ctx.r9.s64 + -17301;
	// slw r6,r8,r10
	ctx.r6.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r10.u8 & 0x3F));
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r7,r23
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r23.u32);
	// and r4,r6,r5
	ctx.r4.u64 = ctx.r6.u64 & ctx.r5.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8211cdac
	if (!ctx.cr6.eq) goto loc_8211CDAC;
loc_8211CD68:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x8211b8e0
	ctx.lr = 0x8211CD74;
	sub_8211B8E0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x823ddfa4
	__restgprlr_19(ctx, base);
	return;
loc_8211CD80:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r4,0(r22)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// bl 0x820da5b0
	ctx.lr = 0x8211CD8C;
	sub_820DA5B0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8211cda0
	if (!ctx.cr6.eq) goto loc_8211CDA0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x8211b8e0
	ctx.lr = 0x8211CDA0;
	sub_8211B8E0(ctx, base);
loc_8211CDA0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x823ddfa4
	__restgprlr_19(ctx, base);
	return;
loc_8211CDAC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82332b10
	ctx.lr = 0x8211CDB4;
	sub_82332B10(ctx, base);
	// lwz r4,64(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x8211b8e0
	ctx.lr = 0x8211CDC0;
	sub_8211B8E0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x823ddfa4
	__restgprlr_19(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8211CB10) {
	__imp__sub_8211CB10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8211CDCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8211CDCC) {
	__imp__sub_8211CDCC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8211CDD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x8211CDD8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addis r31,r4,2
	ctx.r31.s64 = ctx.r4.s64 + 131072;
	// addis r29,r4,1
	ctx.r29.s64 = ctx.r4.s64 + 65536;
	// addi r31,r31,18632
	ctx.r31.s64 = ctx.r31.s64 + 18632;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// addi r29,r29,22924
	ctx.r29.s64 = ctx.r29.s64 + 22924;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82332af8
	ctx.lr = 0x8211CE00;
	sub_82332AF8(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82332b10
	ctx.lr = 0x8211CE0C;
	sub_82332B10(ctx, base);
	// lwz r11,56(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 56);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8211ce30
	if (!ctx.cr6.eq) goto loc_8211CE30;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addis r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 65536;
	// addi r10,r10,9324
	ctx.r10.s64 = ctx.r10.s64 + 9324;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r3,r9,r30
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r30.u32);
	// b 0x8211ce34
	goto loc_8211CE34;
loc_8211CE30:
	// lwz r3,64(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
loc_8211CE34:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8211ceb8
	if (!ctx.cr6.eq) goto loc_8211CEB8;
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82119888
	ctx.lr = 0x8211CE58;
	sub_82119888(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8211ce94
	if (!ctx.cr6.eq) goto loc_8211CE94;
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82119888
	ctx.lr = 0x8211CE80;
	sub_82119888(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8211ce94
	if (!ctx.cr6.eq) goto loc_8211CE94;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_8211CE94:
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8211ceac
	if (ctx.cr6.eq) goto loc_8211CEAC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8211b8e0
	ctx.lr = 0x8211CEAC;
	sub_8211B8E0(ctx, base);
loc_8211CEAC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82332b10
	ctx.lr = 0x8211CEB4;
	sub_82332B10(ctx, base);
	// lwz r3,64(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
loc_8211CEB8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8211CDD0) {
	__imp__sub_8211CDD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8211CEC0) {
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
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lis r10,-32187
	ctx.r10.s64 = -2109407232;
	// ori r9,r11,61924
	ctx.r9.u64 = ctx.r11.u64 | 61924;
	// addi r10,r10,-15680
	ctx.r10.s64 = ctx.r10.s64 + -15680;
	// mullw r11,r3,r9
	ctx.r11.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r9.s32);
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addis r10,r30,1
	ctx.r10.s64 = ctx.r30.s64 + 65536;
	// addi r10,r10,22924
	ctx.r10.s64 = ctx.r10.s64 + 22924;
	// lwz r11,504(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 504);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8211cf34
	if (ctx.cr6.eq) goto loc_8211CF34;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8211cf24
	if (ctx.cr6.eq) goto loc_8211CF24;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8211cf24
	if (ctx.cr6.eq) goto loc_8211CF24;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x8211cf24
	if (ctx.cr6.eq) goto loc_8211CF24;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x8211cf34
	if (!ctx.cr6.eq) goto loc_8211CF34;
loc_8211CF24:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8211cf34
	if (ctx.cr6.eq) goto loc_8211CF34;
loc_8211CF2C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8211cf70
	goto loc_8211CF70;
loc_8211CF34:
	// lwz r3,692(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 692);
	// bl 0x82332af8
	ctx.lr = 0x8211CF3C;
	sub_82332AF8(ctx, base);
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x8211cf2c
	if (ctx.cr6.eq) goto loc_8211CF2C;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8211cdd0
	ctx.lr = 0x8211CF58;
	sub_8211CDD0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8211cf2c
	if (ctx.cr6.eq) goto loc_8211CF2C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8211b8e0
	ctx.lr = 0x8211CF6C;
	sub_8211B8E0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_8211CF70:
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

PPC_WEAK_FUNC(sub_8211CEC0) {
	__imp__sub_8211CEC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8211CF88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x8211CF90;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31937
	ctx.r10.s64 = -2093023232;
	// lis r9,2
	ctx.r9.s64 = 131072;
	// addi r11,r10,-17592
	ctx.r11.s64 = ctx.r10.s64 + -17592;
	// ori r8,r9,61924
	ctx.r8.u64 = ctx.r9.u64 | 61924;
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
	// lwz r11,-17592(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -17592);
	// lis r6,-32187
	ctx.r6.s64 = -2109407232;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r6,-15680
	ctx.r10.s64 = ctx.r6.s64 + -15680;
	// lwzx r27,r5,r7
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r7.u32);
	// mullw r11,r27,r8
	ctx.r11.s64 = int64_t(ctx.r27.s32) * int64_t(ctx.r8.s32);
	// add r28,r11,r10
	ctx.r28.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82119af8
	ctx.lr = 0x8211CFCC;
	sub_82119AF8(ctx, base);
	// clrlwi r4,r3,24
	ctx.r4.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8211d100
	if (ctx.cr6.eq) goto loc_8211D100;
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addis r30,r28,1
	ctx.r30.s64 = ctx.r28.s64 + 65536;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r11,r7,268
	ctx.r11.s64 = ctx.r7.s64 + 268;
	// addi r30,r30,22924
	ctx.r30.s64 = ctx.r30.s64 + 22924;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r10,r30
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// bl 0x82119a48
	ctx.lr = 0x8211CFF8;
	sub_82119A48(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8211d100
	if (ctx.cr6.eq) goto loc_8211D100;
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// beq cr6,0x8211d040
	if (ctx.cr6.eq) goto loc_8211D040;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// beq cr6,0x8211d034
	if (ctx.cr6.eq) goto loc_8211D034;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// bne cr6,0x8211d0e8
	if (!ctx.cr6.eq) goto loc_8211D0E8;
	// addis r11,r28,3
	ctx.r11.s64 = ctx.r28.s64 + 196608;
	// addi r11,r11,-4440
	ctx.r11.s64 = ctx.r11.s64 + -4440;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// oris r9,r10,4
	ctx.r9.u64 = ctx.r10.u64 | 262144;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// b 0x8211d0e8
	goto loc_8211D0E8;
loc_8211D034:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8211cec0
	ctx.lr = 0x8211D03C;
	sub_8211CEC0(ctx, base);
	// b 0x8211d0e8
	goto loc_8211D0E8;
loc_8211D040:
	// addi r11,r7,272
	ctx.r11.s64 = ctx.r7.s64 + 272;
	// lwz r3,692(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 692);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r10,r30
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// bl 0x82332af8
	ctx.lr = 0x8211D054;
	sub_82332AF8(ctx, base);
	// lwz r9,56(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// cmpwi cr6,r9,4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4, ctx.xer);
	// beq cr6,0x8211d0e8
	if (ctx.cr6.eq) goto loc_8211D0E8;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// ori r10,r11,18632
	ctx.r10.u64 = ctx.r11.u64 | 18632;
	// lwzx r9,r28,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r10.u32);
	// cmplw cr6,r31,r9
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8211d0bc
	if (!ctx.cr6.eq) goto loc_8211D0BC;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// ori r10,r11,18644
	ctx.r10.u64 = ctx.r11.u64 | 18644;
	// lwzx r29,r28,r10
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r10.u32);
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x8211d0a4
	if (ctx.cr6.eq) goto loc_8211D0A4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820da5b0
	ctx.lr = 0x8211D094;
	sub_820DA5B0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8211d0a4
	if (ctx.cr6.eq) goto loc_8211D0A4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// b 0x8211d0e0
	goto loc_8211D0E0;
loc_8211D0A4:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8211cb10
	ctx.lr = 0x8211D0B8;
	sub_8211CB10(ctx, base);
	// b 0x8211d0e8
	goto loc_8211D0E8;
loc_8211D0BC:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820da5b0
	ctx.lr = 0x8211D0C8;
	sub_820DA5B0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8211d0e8
	if (ctx.cr6.eq) goto loc_8211D0E8;
	// lwz r11,692(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 692);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x8211d0e8
	if (ctx.cr6.eq) goto loc_8211D0E8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_8211D0E0:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8211b8e0
	ctx.lr = 0x8211D0E8;
	sub_8211B8E0(ctx, base);
loc_8211D0E8:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// ori r9,r11,22912
	ctx.r9.u64 = ctx.r11.u64 | 22912;
	// ori r8,r10,20080
	ctx.r8.u64 = ctx.r10.u64 | 20080;
	// lwzx r7,r28,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r9.u32);
	// stwx r7,r28,r8
	PPC_STORE_U32(ctx.r28.u32 + ctx.r8.u32, ctx.r7.u32);
loc_8211D100:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8211CF88) {
	__imp__sub_8211CF88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8211D108) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x8211D110;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lbz r9,208(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 208);
	// lis r8,-32187
	ctx.r8.s64 = -2109407232;
	// ori r7,r11,61924
	ctx.r7.u64 = ctx.r11.u64 | 61924;
	// addi r10,r8,-15680
	ctx.r10.s64 = ctx.r8.s64 + -15680;
	// mullw r11,r3,r7
	ctx.r11.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r7.s32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// add r29,r11,r10
	ctx.r29.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bne cr6,0x8211d168
	if (!ctx.cr6.eq) goto loc_8211D168;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lhz r10,334(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 334);
	// ori r9,r11,23180
	ctx.r9.u64 = ctx.r11.u64 | 23180;
	// lwzx r8,r29,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r9.u32);
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x8211d168
	if (!ctx.cr6.eq) goto loc_8211D168;
loc_8211D15C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_8211D168:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8211bb50
	ctx.lr = 0x8211D170;
	sub_8211BB50(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8211d194
	if (ctx.cr6.eq) goto loc_8211D194;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lhz r10,334(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 334);
	// ori r9,r11,23288
	ctx.r9.u64 = ctx.r11.u64 | 23288;
	// lwzx r8,r29,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r9.u32);
	// cmpw cr6,r8,r10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x8211d15c
	if (ctx.cr6.eq) goto loc_8211D15C;
loc_8211D194:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235db78
	ctx.lr = 0x8211D1A4;
	sub_8235DB78(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8211D108) {
	__imp__sub_8211D108(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8211D1AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8211D1AC) {
	__imp__sub_8211D1AC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8211D1B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf68
	ctx.lr = 0x8211D1B8;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32181
	ctx.r11.s64 = -2109014016;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mulli r10,r4,404
	ctx.r10.s64 = ctx.r4.s64 * 404;
	// addi r11,r11,-5696
	ctx.r11.s64 = ctx.r11.s64 + -5696;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// mr r24,r8
	ctx.r24.u64 = ctx.r8.u64;
	// add r27,r10,r11
	ctx.r27.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82332af8
	ctx.lr = 0x8211D1EC;
	sub_82332AF8(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8211d108
	ctx.lr = 0x8211D200;
	sub_8211D108(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8211d220
	if (ctx.cr6.eq) goto loc_8211D220;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235d6e8
	ctx.lr = 0x8211D220;
	sub_8235D6E8(ctx, base);
loc_8211D220:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8211a3b0
	ctx.lr = 0x8211D230;
	sub_8211A3B0(ctx, base);
	// cmpwi cr6,r24,52
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 52, ctx.xer);
	// beq cr6,0x8211d244
	if (ctx.cr6.eq) goto loc_8211D244;
	// cmpwi cr6,r24,56
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 56, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x8211d248
	if (!ctx.cr6.eq) goto loc_8211D248;
loc_8211D244:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8211D248:
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82118a28
	ctx.lr = 0x8211D268;
	sub_82118A28(ctx, base);
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// addi r9,r11,-15680
	ctx.r9.s64 = ctx.r11.s64 + -15680;
	// ori r8,r10,61924
	ctx.r8.u64 = ctx.r10.u64 | 61924;
	// lis r7,-32053
	ctx.r7.s64 = -2100625408;
	// addis r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 131072;
	// addi r11,r7,-640
	ctx.r11.s64 = ctx.r7.s64 + -640;
	// mullw r10,r31,r8
	ctx.r10.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r8.s32);
	// addi r9,r9,2116
	ctx.r9.s64 = ctx.r9.s64 + 2116;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82196688
	ctx.lr = 0x8211D2A0;
	sub_82196688(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8211D1B0) {
	__imp__sub_8211D1B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8211D2A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf58
	ctx.lr = 0x8211D2B0;
	__savegprlr_20(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,332(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 332);
	// mr r21,r10
	ctx.r21.u64 = ctx.r10.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// lbz r20,327(r1)
	ctx.r20.u64 = PPC_LOAD_U8(ctx.r1.u32 + 327);
	// rlwinm r10,r11,0,20,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// mr r22,r6
	ctx.r22.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// mr r30,r9
	ctx.r30.u64 = ctx.r9.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8211d4a0
	if (!ctx.cr6.eq) goto loc_8211D4A0;
	// cmpwi cr6,r4,2047
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2047, ctx.xer);
	// beq cr6,0x8211d4a0
	if (ctx.cr6.eq) goto loc_8211D4A0;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r9,r1,84
	ctx.r9.s64 = ctx.r1.s64 + 84;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// clrlwi r7,r20,24
	ctx.r7.u64 = ctx.r20.u32 & 0xFF;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8211a838
	ctx.lr = 0x8211D318;
	sub_8211A838(ctx, base);
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// addi r28,r11,6968
	ctx.r28.s64 = ctx.r11.s64 + 6968;
	// lwz r23,80(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x8211d3ac
	if (ctx.cr6.eq) goto loc_8211D3AC;
	// cmpwi cr6,r30,7
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 7, ctx.xer);
	// bne cr6,0x8211d3ac
	if (!ctx.cr6.eq) goto loc_8211D3AC;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8211ade0
	ctx.lr = 0x8211D340;
	sub_8211ADE0(ctx, base);
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r11,-29952(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29952);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8211d364
	if (!ctx.cr6.eq) goto loc_8211D364;
	// lis r11,-32181
	ctx.r11.s64 = -2109014016;
	// addi r10,r11,-22896
	ctx.r10.s64 = ctx.r11.s64 + -22896;
	// lwz r23,16068(r10)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16068);
	// b 0x8211d3ac
	goto loc_8211D3AC;
loc_8211D364:
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r11,-29980(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29980);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8211d3ac
	if (ctx.cr6.eq) goto loc_8211D3AC;
	// lis r9,-32188
	ctx.r9.s64 = -2109472768;
	// lwz r10,11312(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 11312);
	// lwz r11,11308(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 11308);
	// subf r8,r10,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r10.s64;
	// lwz r10,6228(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 6228);
	// lwz r7,12(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmpw cr6,r8,r7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x8211d3a8
	if (!ctx.cr6.lt) goto loc_8211D3A8;
	// lis r11,-32181
	ctx.r11.s64 = -2109014016;
	// addi r10,r11,-22896
	ctx.r10.s64 = ctx.r11.s64 + -22896;
	// lwz r23,16068(r10)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16068);
	// b 0x8211d3ac
	goto loc_8211D3AC;
loc_8211D3A8:
	// stw r11,11312(r28)
	PPC_STORE_U32(ctx.r28.u32 + 11312, ctx.r11.u32);
loc_8211D3AC:
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8211d3c4
	if (ctx.cr6.eq) goto loc_8211D3C4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,2046
	ctx.r3.s64 = 2046;
	// bl 0x820f9a68
	ctx.lr = 0x8211D3C4;
	sub_820F9A68(ctx, base);
loc_8211D3C4:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x8211d4a0
	if (ctx.cr6.eq) goto loc_8211D4A0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,0(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x8211d3f8
	if (!ctx.cr6.eq) goto loc_8211D3F8;
	// lfs f12,4(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bne cr6,0x8211d3f8
	if (!ctx.cr6.eq) goto loc_8211D3F8;
	// lfs f12,8(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// beq cr6,0x8211d4a0
	if (ctx.cr6.eq) goto loc_8211D4A0;
loc_8211D3F8:
	// lfs f0,4(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// lfs f12,8(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// addi r4,r1,108
	ctx.r4.s64 = ctx.r1.s64 + 108;
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x8211a720
	ctx.lr = 0x8211D41C;
	sub_8211A720(ctx, base);
	// lis r11,-32188
	ctx.r11.s64 = -2109472768;
	// lwz r11,8664(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8664);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8211d43c
	if (ctx.cr6.eq) goto loc_8211D43C;
	// cmpwi cr6,r25,2
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 2, ctx.xer);
	// bge cr6,0x8211d43c
	if (!ctx.cr6.lt) goto loc_8211D43C;
	// li r27,2047
	ctx.r27.s64 = 2047;
loc_8211D43C:
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// bl 0x82141398
	ctx.lr = 0x8211D444;
	sub_82141398(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x8211d4a0
	if (!ctx.cr6.gt) goto loc_8211D4A0;
loc_8211D44C:
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8211ac58
	ctx.lr = 0x8211D460;
	sub_8211AC58(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8211d480
	if (ctx.cr6.eq) goto loc_8211D480;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// bl 0x82141398
	ctx.lr = 0x8211D474;
	sub_82141398(ctx, base);
	// cmpw cr6,r30,r3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x8211d44c
	if (ctx.cr6.lt) goto loc_8211D44C;
	// b 0x8211d4a0
	goto loc_8211D4A0;
loc_8211D480:
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r5,11308(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 11308);
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821a2a08
	ctx.lr = 0x8211D4A0;
	sub_821A2A08(ctx, base);
loc_8211D4A0:
	// rlwinm r11,r20,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8211d4e4
	if (!ctx.cr6.eq) goto loc_8211D4E4;
	// bl 0x82141398
	ctx.lr = 0x8211D4B0;
	sub_82141398(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x8211d4e4
	if (!ctx.cr6.gt) goto loc_8211D4E4;
loc_8211D4B8:
	// mr r8,r21
	ctx.r8.u64 = ctx.r21.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8211d1b0
	ctx.lr = 0x8211D4D4;
	sub_8211D1B0(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// bl 0x82141398
	ctx.lr = 0x8211D4DC;
	sub_82141398(ctx, base);
	// cmpw cr6,r31,r3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x8211d4b8
	if (ctx.cr6.lt) goto loc_8211D4B8;
loc_8211D4E4:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x823ddfa8
	__restgprlr_20(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8211D2A8) {
	__imp__sub_8211D2A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8211D4EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8211D4EC) {
	__imp__sub_8211D4EC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8211D4F0) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r11,212(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// lbz r31,207(r1)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r1.u32 + 207);
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// lwz r10,196(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// stb r31,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r31.u8);
	// bl 0x8211d2a8
	ctx.lr = 0x8211D534;
	sub_8211D2A8(ctx, base);
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

PPC_WEAK_FUNC(sub_8211D4F0) {
	__imp__sub_8211D4F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8211D548) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x8211D550;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// mr r31,r9
	ctx.r31.u64 = ctx.r9.u64;
	// mr r25,r10
	ctx.r25.u64 = ctx.r10.u64;
	// cmpwi cr6,r9,54
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 54, ctx.xer);
	// beq cr6,0x8211d5a8
	if (ctx.cr6.eq) goto loc_8211D5A8;
	// cmpwi cr6,r9,55
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 55, ctx.xer);
	// beq cr6,0x8211d598
	if (ctx.cr6.eq) goto loc_8211D598;
	// cmpwi cr6,r9,56
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 56, ctx.xer);
	// bne cr6,0x8211d5c8
	if (!ctx.cr6.eq) goto loc_8211D5C8;
	// lis r11,-32181
	ctx.r11.s64 = -2109014016;
	// addi r11,r11,-22896
	ctx.r11.s64 = ctx.r11.s64 + -22896;
	// addi r9,r11,1528
	ctx.r9.s64 = ctx.r11.s64 + 1528;
	// b 0x8211d5b4
	goto loc_8211D5B4;
loc_8211D598:
	// lis r11,-32181
	ctx.r11.s64 = -2109014016;
	// addi r11,r11,-22896
	ctx.r11.s64 = ctx.r11.s64 + -22896;
	// addi r9,r11,1404
	ctx.r9.s64 = ctx.r11.s64 + 1404;
	// b 0x8211d5b4
	goto loc_8211D5B4;
loc_8211D5A8:
	// lis r11,-32181
	ctx.r11.s64 = -2109014016;
	// addi r11,r11,-22896
	ctx.r11.s64 = ctx.r11.s64 + -22896;
	// addi r9,r11,1280
	ctx.r9.s64 = ctx.r11.s64 + 1280;
loc_8211D5B4:
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,2046
	ctx.r3.s64 = 2046;
	// lwzx r5,r10,r9
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// bl 0x820f9a68
	ctx.lr = 0x8211D5C8;
	sub_820F9A68(ctx, base);
loc_8211D5C8:
	// rlwinm r11,r25,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8211d5f0
	if (!ctx.cr6.eq) goto loc_8211D5F0;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8211d1b0
	ctx.lr = 0x8211D5F0;
	sub_8211D1B0(ctx, base);
loc_8211D5F0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8211D548) {
	__imp__sub_8211D548(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8211D5F8) {
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
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// rlwinm r10,r3,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r11,r11,-30024
	ctx.r11.s64 = ctx.r11.s64 + -30024;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r9,r11,12
	ctx.r9.s64 = ctx.r11.s64 + 12;
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmpwi cr6,r8,6
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 6, ctx.xer);
	// bge cr6,0x8211d640
	if (!ctx.cr6.lt) goto loc_8211D640;
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
loc_8211D640:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8211bb50
	ctx.lr = 0x8211D648;
	sub_8211BB50(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8211d66c
	if (ctx.cr6.eq) goto loc_8211D66C;
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
loc_8211D66C:
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lis r10,-32187
	ctx.r10.s64 = -2109407232;
	// ori r9,r11,61924
	ctx.r9.u64 = ctx.r11.u64 | 61924;
	// addi r10,r10,-15680
	ctx.r10.s64 = ctx.r10.s64 + -15680;
	// mullw r11,r31,r9
	ctx.r11.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r9.s32);
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x820e7018
	ctx.lr = 0x8211D68C;
	sub_820E7018(ctx, base);
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

PPC_WEAK_FUNC(sub_8211D5F8) {
	__imp__sub_8211D5F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8211D6A0) {
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
	// bl 0x8211d5f8
	ctx.lr = 0x8211D6B8;
	sub_8211D5F8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8211d6dc
	if (!ctx.cr6.eq) goto loc_8211D6DC;
loc_8211D6C4:
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
loc_8211D6DC:
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lis r10,-32187
	ctx.r10.s64 = -2109407232;
	// ori r9,r11,61924
	ctx.r9.u64 = ctx.r11.u64 | 61924;
	// addi r11,r10,-15680
	ctx.r11.s64 = ctx.r10.s64 + -15680;
	// mullw r10,r31,r9
	ctx.r10.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r9.s32);
	// lis r8,1
	ctx.r8.s64 = 65536;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// ori r7,r8,23096
	ctx.r7.u64 = ctx.r8.u64 | 23096;
	// lwzx r6,r11,r7
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// rlwinm r5,r6,0,20,21
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xC00;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x8211d6c4
	if (!ctx.cr6.eq) goto loc_8211D6C4;
	// addis r31,r11,1
	ctx.r31.s64 = ctx.r11.s64 + 65536;
	// addi r31,r31,22924
	ctx.r31.s64 = ctx.r31.s64 + 22924;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332c00
	ctx.lr = 0x8211D71C;
	sub_82332C00(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332c28
	ctx.lr = 0x8211D728;
	sub_82332C28(ctx, base);
	// lbz r11,1659(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1659);
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
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8211D6A0) {
	__imp__sub_8211D6A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8211D748) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8211D750;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31937
	ctx.r10.s64 = -2093023232;
	// lis r9,2
	ctx.r9.s64 = 131072;
	// addi r11,r10,-17592
	ctx.r11.s64 = ctx.r10.s64 + -17592;
	// ori r8,r9,61924
	ctx.r8.u64 = ctx.r9.u64 | 61924;
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
	// lwz r11,-17592(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -17592);
	// lis r6,-32187
	ctx.r6.s64 = -2109407232;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r6,-15680
	ctx.r10.s64 = ctx.r6.s64 + -15680;
	// lwzx r30,r5,r7
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r7.u32);
	// mullw r11,r30,r8
	ctx.r11.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r8.s32);
	// add r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r4,32(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8211d7f4
	if (ctx.cr6.eq) goto loc_8211D7F4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82119740
	ctx.lr = 0x8211D79C;
	sub_82119740(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8211d7f4
	if (ctx.cr6.eq) goto loc_8211D7F4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821197f8
	ctx.lr = 0x8211D7B0;
	sub_821197F8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8211d7f4
	if (!ctx.cr6.eq) goto loc_8211D7F4;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// ori r9,r11,22912
	ctx.r9.u64 = ctx.r11.u64 | 22912;
	// ori r8,r10,18636
	ctx.r8.u64 = ctx.r10.u64 | 18636;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwzx r7,r31,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// stwx r7,r31,r8
	PPC_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r7.u32);
	// bl 0x82106d88
	ctx.lr = 0x8211D7E0;
	sub_82106D88(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8211cb10
	ctx.lr = 0x8211D7F4;
	sub_8211CB10(ctx, base);
loc_8211D7F4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8211D748) {
	__imp__sub_8211D748(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8211D7FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8211D7FC) {
	__imp__sub_8211D7FC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8211D800) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8211d748
	sub_8211D748(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8211D800) {
	__imp__sub_8211D800(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8211D808) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8211d748
	sub_8211D748(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8211D808) {
	__imp__sub_8211D808(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8211D810) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x8211D818;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
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
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// lwz r8,32(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8211da10
	if (ctx.cr6.eq) goto loc_8211DA10;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// addi r10,r11,6968
	ctx.r10.s64 = ctx.r11.s64 + 6968;
	// lwz r11,11324(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 11324);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8211da10
	if (!ctx.cr6.eq) goto loc_8211DA10;
	// addis r29,r31,1
	ctx.r29.s64 = ctx.r31.s64 + 65536;
	// addi r29,r29,22924
	ctx.r29.s64 = ctx.r29.s64 + 22924;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bge cr6,0x8211da10
	if (!ctx.cr6.lt) goto loc_8211DA10;
	// lwz r11,692(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 692);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8211d8b8
	if (!ctx.cr6.eq) goto loc_8211D8B8;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// ori r10,r11,18644
	ctx.r10.u64 = ctx.r11.u64 | 18644;
	// lwzx r30,r31,r10
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8211d8b8
	if (ctx.cr6.eq) goto loc_8211D8B8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820da5b0
	ctx.lr = 0x8211D89C;
	sub_820DA5B0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8211d8b8
	if (ctx.cr6.eq) goto loc_8211D8B8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8211b8e0
	ctx.lr = 0x8211D8B0;
	sub_8211B8E0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_8211D8B8:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r10,r11,23616
	ctx.r10.u64 = ctx.r11.u64 | 23616;
	// lwzx r28,r31,r10
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82332af8
	ctx.lr = 0x8211D8CC;
	sub_82332AF8(ctx, base);
	// lbz r9,1638(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1638);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8211da10
	if (!ctx.cr6.eq) goto loc_8211DA10;
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8211d924
	if (ctx.cr6.eq) goto loc_8211D924;
	// clrlwi r11,r25,24
	ctx.r11.u64 = ctx.r25.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8211d900
	if (ctx.cr6.eq) goto loc_8211D900;
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// lwz r10,1320(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1320);
	// b 0x8211d908
	goto loc_8211D908;
loc_8211D900:
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// lwz r10,1316(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1316);
loc_8211D908:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lis r9,2
	ctx.r9.s64 = 131072;
	// ori r8,r11,22912
	ctx.r8.u64 = ctx.r11.u64 | 22912;
	// ori r7,r9,18640
	ctx.r7.u64 = ctx.r9.u64 | 18640;
	// lwzx r11,r31,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwx r6,r31,r7
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r6.u32);
loc_8211D924:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820da648
	ctx.lr = 0x8211D930;
	sub_820DA648(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8211d948
	if (ctx.cr6.eq) goto loc_8211D948;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82331f68
	ctx.lr = 0x8211D940;
	sub_82331F68(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8211da10
	if (ctx.cr6.eq) goto loc_8211DA10;
loc_8211D948:
	// lwz r11,56(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 56);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r30,r10,9324
	ctx.r30.u64 = ctx.r10.u64 | 9324;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8211d9a8
	if (!ctx.cr6.eq) goto loc_8211D9A8;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8211ca68
	ctx.lr = 0x8211D968;
	sub_8211CA68(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8211da10
	if (ctx.cr6.eq) goto loc_8211DA10;
	// add r11,r28,r30
	ctx.r11.u64 = ctx.r28.u64 + ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r29,r10,r31
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r31.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82332008
	ctx.lr = 0x8211D98C;
	sub_82332008(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8211d9a8
	if (ctx.cr6.eq) goto loc_8211D9A8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8211b8e0
	ctx.lr = 0x8211D9A0;
	sub_8211B8E0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_8211D9A8:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8211cb10
	ctx.lr = 0x8211D9BC;
	sub_8211CB10(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8211da10
	if (!ctx.cr6.eq) goto loc_8211DA10;
	// lwz r11,56(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 56);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8211d9f0
	if (!ctx.cr6.eq) goto loc_8211D9F0;
	// add r11,r28,r30
	ctx.r11.u64 = ctx.r28.u64 + ctx.r30.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r4,r10,r31
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r31.u32);
	// bl 0x8211b8e0
	ctx.lr = 0x8211D9E8;
	sub_8211B8E0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_8211D9F0:
	// clrlwi r11,r25,24
	ctx.r11.u64 = ctx.r25.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8211da10
	if (ctx.cr6.eq) goto loc_8211DA10;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8211cb10
	ctx.lr = 0x8211DA10;
	sub_8211CB10(ctx, base);
loc_8211DA10:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8211D810) {
	__imp__sub_8211D810(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8211DA18) {
	PPC_FUNC_PROLOGUE();
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x8211d810
	sub_8211D810(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8211DA18) {
	__imp__sub_8211DA18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8211DA20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8211DA28;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lis r10,-32187
	ctx.r10.s64 = -2109407232;
	// ori r9,r11,61924
	ctx.r9.u64 = ctx.r11.u64 | 61924;
	// addi r10,r10,-15680
	ctx.r10.s64 = ctx.r10.s64 + -15680;
	// mullw r11,r3,r9
	ctx.r11.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r9.s32);
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r8,32(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8211da60
	if (!ctx.cr6.eq) goto loc_8211DA60;
loc_8211DA54:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_8211DA60:
	// addis r31,r30,1
	ctx.r31.s64 = ctx.r30.s64 + 65536;
	// addi r31,r31,22924
	ctx.r31.s64 = ctx.r31.s64 + 22924;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bge cr6,0x8211da54
	if (!ctx.cr6.lt) goto loc_8211DA54;
	// lwz r4,692(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 692);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8211da54
	if (ctx.cr6.eq) goto loc_8211DA54;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82333800
	ctx.lr = 0x8211DA88;
	sub_82333800(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8211da54
	if (!ctx.cr6.eq) goto loc_8211DA54;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lwz r10,692(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 692);
	// ori r9,r11,18632
	ctx.r9.u64 = ctx.r11.u64 | 18632;
	// lwzx r4,r30,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x8211dac0
	if (ctx.cr6.eq) goto loc_8211DAC0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82333800
	ctx.lr = 0x8211DAB4;
	sub_82333800(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8211da54
	if (!ctx.cr6.eq) goto loc_8211DA54;
loc_8211DAC0:
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8211cb10
	ctx.lr = 0x8211DAD4;
	sub_8211CB10(ctx, base);
	// clrlwi r3,r3,24
	ctx.r3.u64 = ctx.r3.u32 & 0xFF;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8211DA20) {
	__imp__sub_8211DA20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8211DAE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,255
	ctx.r11.s64 = 16711680;
	// lwz r10,348(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 348);
	// ori r9,r11,65535
	ctx.r9.u64 = ctx.r11.u64 | 65535;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x8211dafc
	if (!ctx.cr6.eq) goto loc_8211DAFC;
	// lhz r3,340(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 340);
	// b 0x822761c0
	sub_822761C0(ctx, base);
	return;
loc_8211DAFC:
	// lbz r11,208(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 208);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x8211db30
	if (ctx.cr6.eq) goto loc_8211DB30;
	// cmplwi cr6,r11,13
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 13, ctx.xer);
	// beq cr6,0x8211db28
	if (ctx.cr6.eq) goto loc_8211DB28;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// beq cr6,0x8211db20
	if (ctx.cr6.eq) goto loc_8211DB20;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_8211DB20:
	// lis r3,1024
	ctx.r3.s64 = 67108864;
	// blr 
	return;
loc_8211DB28:
	// li r3,16384
	ctx.r3.s64 = 16384;
	// blr 
	return;
loc_8211DB30:
	// lis r3,512
	ctx.r3.s64 = 33554432;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8211DAE0) {
	__imp__sub_8211DAE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8211DB38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8211DB40;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,255
	ctx.r10.s64 = 16711680;
	// lwz r9,348(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 348);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// ori r8,r10,65535
	ctx.r8.u64 = ctx.r10.u64 | 65535;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// addi r11,r3,208
	ctx.r11.s64 = ctx.r3.s64 + 208;
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x8211db74
	if (!ctx.cr6.eq) goto loc_8211DB74;
	// lhz r3,132(r11)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + 132);
	// bl 0x82272e78
	ctx.lr = 0x8211DB70;
	sub_82272E78(ctx, base);
	// b 0x8211dc08
	goto loc_8211DC08;
loc_8211DB74:
	// lwz r11,140(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// srawi r8,r11,16
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFFF) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 16;
	// srawi r7,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r7.s64 = ctx.r11.s32 >> 8;
	// clrlwi r5,r11,24
	ctx.r5.u64 = ctx.r11.u32 & 0xFF;
	// clrlwi r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	// lfs f13,2416(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2416);
	ctx.f13.f64 = double(temp.f32);
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// extsw r3,r4
	ctx.r3.s64 = ctx.r4.s32;
	// lfs f0,5484(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// clrlwi r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// std r3,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r3.u64);
	// lfd f10,80(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// addi r11,r11,-32
	ctx.r11.s64 = ctx.r11.s64 + -32;
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// frsp f6,f9
	ctx.f6.f64 = double(float(ctx.f9.f64));
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// frsp f4,f11
	ctx.f4.f64 = double(float(ctx.f11.f64));
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f8,80(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// frsp f5,f7
	ctx.f5.f64 = double(float(ctx.f7.f64));
	// fneg f3,f6
	ctx.f3.u64 = ctx.f6.u64 ^ 0x8000000000000000;
	// fadds f2,f3,f5
	ctx.f2.f64 = double(float(ctx.f3.f64 + ctx.f5.f64));
	// fsubs f1,f5,f3
	ctx.f1.f64 = double(float(ctx.f5.f64 - ctx.f3.f64));
	// fmuls f0,f2,f13
	ctx.f0.f64 = double(float(ctx.f2.f64 * ctx.f13.f64));
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// fmuls f13,f1,f13
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f13.f64));
	// stfs f4,12(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// stfs f4,16(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// stfs f13,20(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
loc_8211DC08:
	// lfs f0,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fabs f13,f0
	ctx.f13.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// lfs f12,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fabs f10,f11
	ctx.f10.u64 = ctx.f11.u64 & ~0x8000000000000000;
	// lfs f9,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f8.f64 = double(temp.f32);
	// fabs f7,f9
	ctx.f7.u64 = ctx.f9.u64 & ~0x8000000000000000;
	// lfs f6,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,28(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,0(r30)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// lfs f4,32(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,4(r30)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// fadds f3,f13,f12
	ctx.f3.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// lfs f2,36(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	ctx.f2.f64 = double(temp.f32);
	// fadds f1,f10,f8
	ctx.f1.f64 = double(float(ctx.f10.f64 + ctx.f8.f64));
	// stfs f2,8(r30)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// fmuls f0,f3,f3
	ctx.f0.f64 = double(float(ctx.f3.f64 * ctx.f3.f64));
	// fadds f13,f7,f6
	ctx.f13.f64 = double(float(ctx.f7.f64 + ctx.f6.f64));
	// fmadds f12,f1,f1,f0
	ctx.f12.f64 = double(float(ctx.f1.f64 * ctx.f1.f64 + ctx.f0.f64));
	// fmadds f11,f13,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f12.f64));
	// fsqrts f10,f11
	ctx.f10.f64 = double(float(sqrt(ctx.f11.f64)));
	// stfs f10,12(r30)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// stfs f10,16(r30)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// stfs f10,20(r30)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8211DB38) {
	__imp__sub_8211DB38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8211DC74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8211DC74) {
	__imp__sub_8211DC74(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8211DC78) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x822ef018
	ctx.lr = 0x8211DC9C;
	sub_822EF018(ctx, base);
	// lfs f0,28(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// lfs f13,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// lfs f12,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// stfs f1,12(r30)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// stfs f1,16(r30)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// stfs f1,20(r30)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
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

PPC_WEAK_FUNC(sub_8211DC78) {
	__imp__sub_8211DC78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8211DCD8) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-32181
	ctx.r9.s64 = -2109014016;
	// mulli r10,r4,404
	ctx.r10.s64 = ctx.r4.s64 * 404;
	// addi r9,r9,-5696
	ctx.r9.s64 = ctx.r9.s64 + -5696;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// addi r9,r9,208
	ctx.r9.s64 = ctx.r9.s64 + 208;
	// lbzx r10,r10,r9
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r10,9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 9, ctx.xer);
	// beq cr6,0x8211dd08
	if (ctx.cr6.eq) goto loc_8211DD08;
	// cmplwi cr6,r10,5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 5, ctx.xer);
	// beq cr6,0x8211dd08
	if (ctx.cr6.eq) goto loc_8211DD08;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8211DD08:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x82284650
	sub_82284650(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8211DCD8) {
	__imp__sub_8211DCD8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8211DD14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8211DD14) {
	__imp__sub_8211DD14(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8211DD18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8211DD20;
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
	// bl 0x822f2388
	ctx.lr = 0x8211DD34;
	sub_822F2388(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821023f0
	ctx.lr = 0x8211DD44;
	sub_821023F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822f23e0
	ctx.lr = 0x8211DD4C;
	sub_822F23E0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8211DD18) {
	__imp__sub_8211DD18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8211DD54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8211DD54) {
	__imp__sub_8211DD54(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8211DD58) {
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
	// bl 0x820dcf70
	ctx.lr = 0x8211DD68;
	sub_820DCF70(ctx, base);
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
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

PPC_WEAK_FUNC(sub_8211DD58) {
	__imp__sub_8211DD58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8211DD84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8211DD84) {
	__imp__sub_8211DD84(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8211DD88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32181
	ctx.r11.s64 = -2109014016;
	// mulli r10,r4,404
	ctx.r10.s64 = ctx.r4.s64 * 404;
	// addi r11,r11,-5696
	ctx.r11.s64 = ctx.r11.s64 + -5696;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,348(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 348);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8211ddac
	if (ctx.cr6.eq) goto loc_8211DDAC;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_8211DDAC:
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8211ddc4
	if (ctx.cr6.eq) goto loc_8211DDC4;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_8211DDC4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8211DD88) {
	__imp__sub_8211DD88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8211DDCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8211DDCC) {
	__imp__sub_8211DDCC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8211DDD0) {
	PPC_FUNC_PROLOGUE();
	// b 0x820dd228
	sub_820DD228(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8211DDD0) {
	__imp__sub_8211DDD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8211DDD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8211DDD4) {
	__imp__sub_8211DDD4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8211DDD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8211DDE0;
	__savegprlr_29(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32181
	ctx.r11.s64 = -2109014016;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mulli r10,r4,404
	ctx.r10.s64 = ctx.r4.s64 * 404;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r11,r11,-5696
	ctx.r11.s64 = ctx.r11.s64 + -5696;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82284650
	ctx.lr = 0x8211DE08;
	sub_82284650(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8211de50
	if (ctx.cr6.eq) goto loc_8211DE50;
	// bl 0x822ef018
	ctx.lr = 0x8211DE14;
	sub_822EF018(ctx, base);
	// lfs f0,28(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,32(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lfs f12,36(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	ctx.f12.f64 = double(temp.f32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f1,92(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f1,96(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f1,100(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// bl 0x820dd3b8
	ctx.lr = 0x8211DE48;
	sub_820DD3B8(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_8211DE50:
	// lwz r11,348(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 348);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8211de84
	if (ctx.cr6.eq) goto loc_8211DE84;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8211db38
	ctx.lr = 0x8211DE6C;
	sub_8211DB38(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820dd3b8
	ctx.lr = 0x8211DE7C;
	sub_820DD3B8(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_8211DE84:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820dd228
	ctx.lr = 0x8211DE90;
	sub_820DD228(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8211DDD8) {
	__imp__sub_8211DDD8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8211DE98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x8211DEA0;
	__savegprlr_26(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x820dce40
	ctx.lr = 0x8211DEB8;
	sub_820DCE40(ctx, base);
	// lis r11,-32181
	ctx.r11.s64 = -2109014016;
	// mulli r10,r29,404
	ctx.r10.s64 = ctx.r29.s64 * 404;
	// addi r11,r11,-5696
	ctx.r11.s64 = ctx.r11.s64 + -5696;
	// add r27,r10,r11
	ctx.r27.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r29,r27,208
	ctx.r29.s64 = ctx.r27.s64 + 208;
	// lwz r11,348(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 348);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8211e080
	if (ctx.cr6.eq) goto loc_8211E080;
	// lis r10,255
	ctx.r10.s64 = 16711680;
	// ori r26,r10,65535
	ctx.r26.u64 = ctx.r10.u64 | 65535;
	// cmpw cr6,r11,r26
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r26.s32, ctx.xer);
	// bne cr6,0x8211def8
	if (!ctx.cr6.eq) goto loc_8211DEF8;
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8211e080
	if (!ctx.cr6.eq) goto loc_8211E080;
loc_8211DEF8:
	// lwz r11,140(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 140);
	// cmpw cr6,r11,r26
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r26.s32, ctx.xer);
	// bne cr6,0x8211df14
	if (!ctx.cr6.eq) goto loc_8211DF14;
	// lhz r3,132(r29)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r29.u32 + 132);
	// bl 0x822761c0
	ctx.lr = 0x8211DF0C;
	sub_822761C0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// b 0x8211df4c
	goto loc_8211DF4C;
loc_8211DF14:
	// lbz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x8211df48
	if (ctx.cr6.eq) goto loc_8211DF48;
	// cmplwi cr6,r11,13
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 13, ctx.xer);
	// beq cr6,0x8211df40
	if (ctx.cr6.eq) goto loc_8211DF40;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// beq cr6,0x8211df38
	if (ctx.cr6.eq) goto loc_8211DF38;
	// li r28,1
	ctx.r28.s64 = 1;
	// b 0x8211df4c
	goto loc_8211DF4C;
loc_8211DF38:
	// lis r28,1024
	ctx.r28.s64 = 67108864;
	// b 0x8211df4c
	goto loc_8211DF4C;
loc_8211DF40:
	// li r28,16384
	ctx.r28.s64 = 16384;
	// b 0x8211df4c
	goto loc_8211DF4C;
loc_8211DF48:
	// lis r28,512
	ctx.r28.s64 = 33554432;
loc_8211DF4C:
	// lwz r11,152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// and r10,r11,r28
	ctx.r10.u64 = ctx.r11.u64 & ctx.r28.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8211e080
	if (ctx.cr6.eq) goto loc_8211E080;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8211db38
	ctx.lr = 0x8211DF6C;
	sub_8211DB38(ctx, base);
	// lfs f13,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f11,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f11.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f10,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// lfs f9,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f9.f64 = double(temp.f32);
	// fadds f8,f10,f13
	ctx.f8.f64 = double(float(ctx.f10.f64 + ctx.f13.f64));
	// lfs f7,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f7.f64 = double(temp.f32);
	// fadds f6,f9,f12
	ctx.f6.f64 = double(float(ctx.f9.f64 + ctx.f12.f64));
	// fadds f5,f7,f11
	ctx.f5.f64 = double(float(ctx.f7.f64 + ctx.f11.f64));
	// lfs f0,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// lfs f1,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// fadds f4,f8,f0
	ctx.f4.f64 = double(float(ctx.f8.f64 + ctx.f0.f64));
	// stfs f4,92(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// fadds f3,f6,f0
	ctx.f3.f64 = double(float(ctx.f6.f64 + ctx.f0.f64));
	// stfs f3,96(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fadds f2,f5,f0
	ctx.f2.f64 = double(float(ctx.f5.f64 + ctx.f0.f64));
	// stfs f2,100(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// bl 0x82279ee0
	ctx.lr = 0x8211DFC0;
	sub_82279EE0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8211e080
	if (!ctx.cr6.eq) goto loc_8211E080;
	// lwz r11,140(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 140);
	// lfs f31,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f31.f64 = double(temp.f32);
	// cmpw cr6,r11,r26
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r26.s32, ctx.xer);
	// bne cr6,0x8211e000
	if (!ctx.cr6.eq) goto loc_8211E000;
	// addi r10,r27,40
	ctx.r10.s64 = ctx.r27.s64 + 40;
	// lwz r8,152(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// addi r9,r27,28
	ctx.r9.s64 = ctx.r27.s64 + 28;
	// lhz r7,132(r29)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r29.u32 + 132);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r31,128
	ctx.r5.s64 = ctx.r31.s64 + 128;
	// addi r4,r31,112
	ctx.r4.s64 = ctx.r31.s64 + 112;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822785b0
	ctx.lr = 0x8211DFFC;
	sub_822785B0(ctx, base);
	// b 0x8211e038
	goto loc_8211E038;
loc_8211E000:
	// lwz r11,152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// and r10,r11,r28
	ctx.r10.u64 = ctx.r11.u64 & ctx.r28.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8211e038
	if (ctx.cr6.eq) goto loc_8211E038;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r9,r27,28
	ctx.r9.s64 = ctx.r27.s64 + 28;
	// addi r10,r11,-5928
	ctx.r10.s64 = ctx.r11.s64 + -5928;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r31,128
	ctx.r5.s64 = ctx.r31.s64 + 128;
	// addi r4,r31,112
	ctx.r4.s64 = ctx.r31.s64 + 112;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822786b8
	ctx.lr = 0x8211E038;
	sub_822786B8(ctx, base);
loc_8211E038:
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x8211e080
	if (!ctx.cr6.lt) goto loc_8211E080;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// sth r11,34(r30)
	PPC_STORE_U16(ctx.r30.u32 + 34, ctx.r11.u16);
	// sth r11,36(r30)
	PPC_STORE_U16(ctx.r30.u32 + 36, ctx.r11.u16);
	// sth r11,38(r30)
	PPC_STORE_U16(ctx.r30.u32 + 38, ctx.r11.u16);
	// lhz r9,126(r29)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r29.u32 + 126);
	// stw r10,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r10.u32);
	// sth r9,32(r30)
	PPC_STORE_U16(ctx.r30.u32 + 32, ctx.r9.u16);
	// lwz r7,12(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// rlwinm r6,r7,0,2,2
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x20000000;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x8211e080
	if (ctx.cr6.eq) goto loc_8211E080;
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// ori r10,r11,4096
	ctx.r10.u64 = ctx.r11.u64 | 4096;
	// stw r10,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r10.u32);
loc_8211E080:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8211DE98) {
	__imp__sub_8211DE98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8211E08C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8211E08C) {
	__imp__sub_8211E08C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8211E090) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x8211E098;
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// bl 0x820dce40
	ctx.lr = 0x8211E0C0;
	sub_820DCE40(ctx, base);
	// clrlwi r11,r31,16
	ctx.r11.u64 = ctx.r31.u32 & 0xFFFF;
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// lfs f12,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lfs f11,12(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
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
	// beq cr6,0x8211e314
	if (ctx.cr6.eq) goto loc_8211E314;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f29,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f29.f64 = double(temp.f32);
	// lfs f31,5484(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f31.f64 = double(temp.f32);
loc_8211E100:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x820dcf28
	ctx.lr = 0x8211E10C;
	sub_820DCF28(ctx, base);
	// lhz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 12);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8211e170
	if (ctx.cr6.eq) goto loc_8211E170;
loc_8211E11C:
	// addi r31,r11,-1
	ctx.r31.s64 = ctx.r11.s64 + -1;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820dcf70
	ctx.lr = 0x8211E12C;
	sub_820DCF70(ctx, base);
	// lwz r11,144(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 144);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x8211e164
	if (ctx.cr6.eq) goto loc_8211E164;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8211de98
	ctx.lr = 0x8211E14C;
	sub_8211DE98(ctx, base);
	// lbz r11,40(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8211e314
	if (!ctx.cr6.eq) goto loc_8211E314;
	// lfs f0,0(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x8211e314
	if (ctx.cr6.eq) goto loc_8211E314;
loc_8211E164:
	// lhz r11,2(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 2);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8211e11c
	if (!ctx.cr6.eq) goto loc_8211E11C;
loc_8211E170:
	// lhz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r27.u32 + 4);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lfs f13,0(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// rotlwi r9,r11,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// addi r8,r11,6
	ctx.r8.s64 = ctx.r11.s64 + 6;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f12,r9,r10
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	ctx.f12.f64 = double(temp.f32);
	// lfsx f11,r9,r30
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r30.u32);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f0,f12,f13
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// fsubs f11,f11,f13
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// lfsx f12,r7,r28
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r28.u32);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f13,f11,f0
	ctx.f13.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// fsel f10,f13,f0,f11
	ctx.f10.f64 = ctx.f13.f64 >= 0.0 ? ctx.f0.f64 : ctx.f11.f64;
	// fcmpu cr6,f10,f12
	ctx.cr6.compare(ctx.f10.f64, ctx.f12.f64);
	// blt cr6,0x8211e1b4
	if (ctx.cr6.lt) goto loc_8211E1B4;
	// lhz r31,8(r27)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r27.u32 + 8);
	// b 0x8211e308
	goto loc_8211E308;
loc_8211E1B4:
	// fsubs f10,f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// fneg f9,f12
	ctx.f9.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// fsel f8,f10,f0,f11
	ctx.f8.f64 = ctx.f10.f64 >= 0.0 ? ctx.f0.f64 : ctx.f11.f64;
	// fcmpu cr6,f8,f9
	ctx.cr6.compare(ctx.f8.f64, ctx.f9.f64);
	// bgt cr6,0x8211e1d0
	if (ctx.cr6.gt) goto loc_8211E1D0;
	// lhz r31,10(r27)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r27.u32 + 10);
	// b 0x8211e308
	goto loc_8211E308;
loc_8211E1D0:
	// lfs f11,0(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f10.f64 = double(temp.f32);
	// fcmpu cr6,f11,f10
	ctx.cr6.compare(ctx.f11.f64, ctx.f10.f64);
	// ble cr6,0x8211e314
	if (!ctx.cr6.gt) goto loc_8211E314;
	// fcmpu cr6,f13,f31
	ctx.cr6.compare(ctx.f13.f64, ctx.f31.f64);
	// beq cr6,0x8211e21c
	if (ctx.cr6.eq) goto loc_8211E21C;
	// fneg f11,f0
	ctx.f11.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fabs f9,f13
	ctx.f9.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fsel f8,f13,f29,f31
	ctx.f8.f64 = ctx.f13.f64 >= 0.0 ? ctx.f29.f64 : ctx.f31.f64;
	// fsel f7,f13,f11,f0
	ctx.f7.f64 = ctx.f13.f64 >= 0.0 ? ctx.f11.f64 : ctx.f0.f64;
	// fdivs f6,f29,f9
	ctx.f6.f64 = double(float(ctx.f29.f64 / ctx.f9.f64));
	// fctiwz f5,f8
	ctx.f5.s64 = (ctx.f8.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f8.f64));
	// stfd f5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f5.u64);
	// lwz r31,84(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// fadds f4,f7,f12
	ctx.f4.f64 = double(float(ctx.f7.f64 + ctx.f12.f64));
	// fsubs f3,f7,f12
	ctx.f3.f64 = double(float(ctx.f7.f64 - ctx.f12.f64));
	// fmuls f0,f4,f6
	ctx.f0.f64 = double(float(ctx.f4.f64 * ctx.f6.f64));
	// fmuls f30,f3,f6
	ctx.f30.f64 = double(float(ctx.f3.f64 * ctx.f6.f64));
	// b 0x8211e228
	goto loc_8211E228;
loc_8211E21C:
	// fmr f0,f29
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f29.f64;
	// li r31,0
	ctx.r31.s64 = 0;
	// fmr f30,f31
	ctx.f30.f64 = ctx.f31.f64;
loc_8211E228:
	// fsubs f9,f29,f0
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = double(float(ctx.f29.f64 - ctx.f0.f64));
	// lfs f13,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f12.f64 = double(temp.f32);
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// lfs f11,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f11.f64 = double(temp.f32);
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// lfs f8,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lfs f7,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f8,f13
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f13.f64));
	// lfs f5,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f4,f7,f12
	ctx.f4.f64 = double(float(ctx.f7.f64 - ctx.f12.f64));
	// lfs f3,12(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f3.f64 = double(temp.f32);
	// fsubs f2,f5,f11
	ctx.f2.f64 = double(float(ctx.f5.f64 - ctx.f11.f64));
	// fsubs f1,f3,f10
	ctx.f1.f64 = double(float(ctx.f3.f64 - ctx.f10.f64));
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// fsel f0,f9,f0,f29
	ctx.f0.f64 = ctx.f9.f64 >= 0.0 ? ctx.f0.f64 : ctx.f29.f64;
	// fmadds f13,f6,f0,f13
	ctx.f13.f64 = double(float(ctx.f6.f64 * ctx.f0.f64 + ctx.f13.f64));
	// stfs f13,112(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmadds f12,f4,f0,f12
	ctx.f12.f64 = double(float(ctx.f4.f64 * ctx.f0.f64 + ctx.f12.f64));
	// stfs f12,116(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fmadds f11,f2,f0,f11
	ctx.f11.f64 = double(float(ctx.f2.f64 * ctx.f0.f64 + ctx.f11.f64));
	// stfs f11,120(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fmadds f10,f1,f0,f10
	ctx.f10.f64 = double(float(ctx.f1.f64 * ctx.f0.f64 + ctx.f10.f64));
	// stfs f10,124(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// lhzx r4,r10,r27
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r27.u32);
	// bl 0x8211e090
	ctx.lr = 0x8211E29C;
	sub_8211E090(ctx, base);
	// lfs f9,0(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fcmpu cr6,f9,f31
	ctx.cr6.compare(ctx.f9.f64, ctx.f31.f64);
	// beq cr6,0x8211e314
	if (ctx.cr6.eq) goto loc_8211E314;
	// lfs f12,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
	// fsel f10,f30,f30,f31
	ctx.f10.f64 = ctx.f30.f64 >= 0.0 ? ctx.f30.f64 : ctx.f31.f64;
	// lfs f9,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// subfic r11,r31,5
	ctx.xer.ca = ctx.r31.u32 <= 5;
	ctx.r11.s64 = 5 - ctx.r31.s64;
	// lfs f11,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f7,f9,f12
	ctx.f7.f64 = double(float(ctx.f9.f64 - ctx.f12.f64));
	// lfs f8,12(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lfs f0,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f6,f8,f11
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f11.f64));
	// lfs f5,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// lfs f13,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f3,f5,f0
	ctx.f3.f64 = double(float(ctx.f5.f64 - ctx.f0.f64));
	// lfs f4,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f2,f4,f13
	ctx.f2.f64 = double(float(ctx.f4.f64 - ctx.f13.f64));
	// fmadds f1,f7,f10,f12
	ctx.f1.f64 = double(float(ctx.f7.f64 * ctx.f10.f64 + ctx.f12.f64));
	// stfs f1,104(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fmadds f12,f6,f10,f11
	ctx.f12.f64 = double(float(ctx.f6.f64 * ctx.f10.f64 + ctx.f11.f64));
	// stfs f12,108(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// fmadds f11,f3,f10,f0
	ctx.f11.f64 = double(float(ctx.f3.f64 * ctx.f10.f64 + ctx.f0.f64));
	// stfs f11,96(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmadds f10,f2,f10,f13
	ctx.f10.f64 = double(float(ctx.f2.f64 * ctx.f10.f64 + ctx.f13.f64));
	// stfs f10,100(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lhzx r31,r10,r27
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r27.u32);
loc_8211E308:
	// clrlwi r11,r31,16
	ctx.r11.u64 = ctx.r31.u32 & 0xFFFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8211e100
	if (!ctx.cr6.eq) goto loc_8211E100;
loc_8211E314:
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

PPC_WEAK_FUNC(sub_8211E090) {
	__imp__sub_8211E090(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8211E328) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lfs f13,112(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f12,116(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,120(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	ctx.f11.f64 = double(temp.f32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lfs f10,128(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	ctx.f10.f64 = double(temp.f32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lfs f9,132(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	ctx.f9.f64 = double(temp.f32);
	// li r4,1
	ctx.r4.s64 = 1;
	// lfs f8,136(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	ctx.f8.f64 = double(temp.f32);
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// lfs f7,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// lfs f0,5484(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f11,88(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f10,96(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f9,100(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f8,104(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f7,108(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// bl 0x8211e090
	ctx.lr = 0x8211E390;
	sub_8211E090(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8211E328) {
	__imp__sub_8211E328(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8211E3A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf68
	ctx.lr = 0x8211E3A8;
	__savegprlr_24(ctx, base);
	// stfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f31.u64);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x820dce40
	ctx.lr = 0x8211E3C0;
	sub_820DCE40(ctx, base);
	// lis r11,-32181
	ctx.r11.s64 = -2109014016;
	// lwz r9,104(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// mulli r10,r30,404
	ctx.r10.s64 = ctx.r30.s64 * 404;
	// addi r11,r11,-5696
	ctx.r11.s64 = ctx.r11.s64 + -5696;
	// li r24,0
	ctx.r24.s64 = 0;
	// add r28,r10,r11
	ctx.r28.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r25,r28,208
	ctx.r25.s64 = ctx.r28.s64 + 208;
	// beq cr6,0x8211e414
	if (ctx.cr6.eq) goto loc_8211E414;
	// addi r11,r11,208
	ctx.r11.s64 = ctx.r11.s64 + 208;
	// lbzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// beq cr6,0x8211e400
	if (ctx.cr6.eq) goto loc_8211E400;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bne cr6,0x8211e414
	if (!ctx.cr6.eq) goto loc_8211E414;
loc_8211E400:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82284650
	ctx.lr = 0x8211E40C;
	sub_82284650(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x8211e418
	goto loc_8211E418;
loc_8211E414:
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
loc_8211E418:
	// lwz r11,140(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 140);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8211e430
	if (!ctx.cr6.eq) goto loc_8211E430;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8211e6f8
	if (ctx.cr6.eq) goto loc_8211E6F8;
	// b 0x8211e438
	goto loc_8211E438;
loc_8211E430:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8211e5d0
	if (ctx.cr6.eq) goto loc_8211E5D0;
loc_8211E438:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,100(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x822efb88
	ctx.lr = 0x8211E444;
	sub_822EFB88(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8211e6f8
	if (ctx.cr6.eq) goto loc_8211E6F8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822efbf0
	ctx.lr = 0x8211E454;
	sub_822EFBF0(ctx, base);
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// and r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 & ctx.r3.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8211e6f8
	if (ctx.cr6.eq) goto loc_8211E6F8;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8211dc78
	ctx.lr = 0x8211E478;
	sub_8211DC78(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f1,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82279ee0
	ctx.lr = 0x8211E488;
	sub_82279EE0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8211e6f8
	if (!ctx.cr6.eq) goto loc_8211E6F8;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lfs f13,68(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32187
	ctx.r10.s64 = -2109407232;
	// lfs f11,80(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// ori r9,r11,61924
	ctx.r9.u64 = ctx.r11.u64 | 61924;
	// lfs f10,84(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	ctx.f10.f64 = double(temp.f32);
	// addi r11,r10,-15680
	ctx.r11.s64 = ctx.r10.s64 + -15680;
	// lfs f0,64(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// mullw r10,r27,r9
	ctx.r10.s64 = int64_t(ctx.r27.s32) * int64_t(ctx.r9.s32);
	// lfs f12,72(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	ctx.f12.f64 = double(temp.f32);
	// lfs f9,88(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	ctx.f9.f64 = double(temp.f32);
	// lwz r4,100(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lfs f8,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,176(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// addis r8,r11,2
	ctx.r8.s64 = ctx.r11.s64 + 131072;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r8,r8,2168
	ctx.r8.s64 = ctx.r8.s64 + 2168;
	// lfs f6,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// lfs f7,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f3,f13,f6
	ctx.f3.f64 = double(float(ctx.f13.f64 - ctx.f6.f64));
	// lfs f4,8(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f13,f11,f7
	ctx.f13.f64 = double(float(ctx.f11.f64 - ctx.f7.f64));
	// fsubs f11,f10,f6
	ctx.f11.f64 = double(float(ctx.f10.f64 - ctx.f6.f64));
	// stfs f3,100(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fsubs f5,f0,f7
	ctx.f5.f64 = double(float(ctx.f0.f64 - ctx.f7.f64));
	// stfs f5,96(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fsubs f1,f12,f4
	ctx.f1.f64 = double(float(ctx.f12.f64 - ctx.f4.f64));
	// stfs f1,104(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fsubs f10,f9,f4
	ctx.f10.f64 = double(float(ctx.f9.f64 - ctx.f4.f64));
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f11,84(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmr f2,f7
	ctx.f2.f64 = ctx.f7.f64;
	// stfs f10,88(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmr f0,f6
	ctx.f0.f64 = ctx.f6.f64;
	// fmr f12,f4
	ctx.f12.f64 = ctx.f4.f64;
	// bl 0x822efaf8
	ctx.lr = 0x8211E528;
	sub_822EFAF8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822f2388
	ctx.lr = 0x8211E530;
	sub_822F2388(ctx, base);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821023f0
	ctx.lr = 0x8211E540;
	sub_821023F0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822f23e0
	ctx.lr = 0x8211E548;
	sub_822F23E0(ctx, base);
	// addi r7,r1,176
	ctx.r7.s64 = ctx.r1.s64 + 176;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r6,100(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822ef9f0
	ctx.lr = 0x8211E560;
	sub_822EF9F0(ctx, base);
	// lfs f0,176(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	ctx.f0.f64 = double(temp.f32);
	// lfs f9,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fcmpu cr6,f0,f9
	ctx.cr6.compare(ctx.f0.f64, ctx.f9.f64);
	// bge cr6,0x8211e6f8
	if (!ctx.cr6.lt) goto loc_8211E6F8;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lhz r9,196(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 196);
	// stfs f0,0(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// lhz r8,198(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 198);
	// lfs f11,192(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	ctx.f11.f64 = double(temp.f32);
	// lhz r7,200(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + 200);
	// lfs f13,184(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,188(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	ctx.f12.f64 = double(temp.f32);
	// fmr f10,f11
	ctx.f10.f64 = ctx.f11.f64;
	// lfs f0,7036(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 7036);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r11.u32);
	// sth r9,34(r29)
	PPC_STORE_U16(ctx.r29.u32 + 34, ctx.r9.u16);
	// fcmpu cr6,f11,f0
	ctx.cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// sth r8,36(r29)
	PPC_STORE_U16(ctx.r29.u32 + 36, ctx.r8.u16);
	// li r11,1
	ctx.r11.s64 = 1;
	// sth r7,38(r29)
	PPC_STORE_U16(ctx.r29.u32 + 38, ctx.r7.u16);
	// stfs f13,4(r29)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r29.u32 + 4, temp.u32);
	// stfs f12,8(r29)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r29.u32 + 8, temp.u32);
	// stfs f11,12(r29)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r29.u32 + 12, temp.u32);
	// bge cr6,0x8211e5c8
	if (!ctx.cr6.lt) goto loc_8211E5C8;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_8211E5C8:
	// stb r11,42(r29)
	PPC_STORE_U8(ctx.r29.u32 + 42, ctx.r11.u8);
	// b 0x8211e6c4
	goto loc_8211E6C4;
loc_8211E5D0:
	// lis r10,255
	ctx.r10.s64 = 16711680;
	// ori r30,r10,65535
	ctx.r30.u64 = ctx.r10.u64 | 65535;
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, ctx.xer);
	// bne cr6,0x8211e5f0
	if (!ctx.cr6.eq) goto loc_8211E5F0;
	// lwz r11,12(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8211e6f8
	if (!ctx.cr6.eq) goto loc_8211E6F8;
loc_8211E5F0:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8211dae0
	ctx.lr = 0x8211E5F8;
	sub_8211DAE0(ctx, base);
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// and r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 & ctx.r3.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8211e6f8
	if (ctx.cr6.eq) goto loc_8211E6F8;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8211db38
	ctx.lr = 0x8211E61C;
	sub_8211DB38(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f1,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82279ee0
	ctx.lr = 0x8211E62C;
	sub_82279EE0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8211e6f8
	if (!ctx.cr6.eq) goto loc_8211E6F8;
	// lwz r11,140(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 140);
	// lfs f31,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f31.f64 = double(temp.f32);
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, ctx.xer);
	// bne cr6,0x8211e670
	if (!ctx.cr6.eq) goto loc_8211E670;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r8,100(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r10,r28,40
	ctx.r10.s64 = ctx.r28.s64 + 40;
	// lhz r7,132(r25)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r25.u32 + 132);
	// addi r6,r11,-9672
	ctx.r6.s64 = ctx.r11.s64 + -9672;
	// addi r9,r28,28
	ctx.r9.s64 = ctx.r28.s64 + 28;
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// addi r4,r31,64
	ctx.r4.s64 = ctx.r31.s64 + 64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822785b0
	ctx.lr = 0x8211E66C;
	sub_822785B0(ctx, base);
	// b 0x8211e6ac
	goto loc_8211E6AC;
loc_8211E670:
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// and r10,r11,r26
	ctx.r10.u64 = ctx.r11.u64 & ctx.r26.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8211e6ac
	if (ctx.cr6.eq) goto loc_8211E6AC;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r6,r9,-9672
	ctx.r6.s64 = ctx.r9.s64 + -9672;
	// addi r10,r11,-5928
	ctx.r10.s64 = ctx.r11.s64 + -5928;
	// addi r9,r28,28
	ctx.r9.s64 = ctx.r28.s64 + 28;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// addi r7,r1,176
	ctx.r7.s64 = ctx.r1.s64 + 176;
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// addi r4,r31,64
	ctx.r4.s64 = ctx.r31.s64 + 64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822786b8
	ctx.lr = 0x8211E6AC;
	sub_822786B8(ctx, base);
loc_8211E6AC:
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x8211e6f8
	if (!ctx.cr6.lt) goto loc_8211E6F8;
	// sth r24,34(r29)
	PPC_STORE_U16(ctx.r29.u32 + 34, ctx.r24.u16);
	// sth r24,36(r29)
	PPC_STORE_U16(ctx.r29.u32 + 36, ctx.r24.u16);
	// sth r24,38(r29)
	PPC_STORE_U16(ctx.r29.u32 + 38, ctx.r24.u16);
loc_8211E6C4:
	// lhz r11,126(r25)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r25.u32 + 126);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,28(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28, ctx.r10.u32);
	// sth r11,32(r29)
	PPC_STORE_U16(ctx.r29.u32 + 32, ctx.r11.u16);
	// lwz r8,12(r25)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	// rlwinm r7,r8,0,2,2
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x20000000;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x8211e6f0
	if (ctx.cr6.eq) goto loc_8211E6F0;
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// ori r10,r11,4096
	ctx.r10.u64 = ctx.r11.u64 | 4096;
	// stw r10,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r10.u32);
loc_8211E6F0:
	// stw r26,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r26.u32);
	// stw r24,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r24.u32);
loc_8211E6F8:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8211E3A0) {
	__imp__sub_8211E3A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8211E704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8211E704) {
	__imp__sub_8211E704(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8211E708) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x8211E710;
	__savegprlr_25(ctx, base);
	// stfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f30.u64);
	// stfd f31,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// bl 0x820dce40
	ctx.lr = 0x8211E734;
	sub_820DCE40(ctx, base);
	// clrlwi r11,r31,16
	ctx.r11.u64 = ctx.r31.u32 & 0xFFFF;
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// lfs f12,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lfs f11,12(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
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
	// beq cr6,0x8211e908
	if (ctx.cr6.eq) goto loc_8211E908;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f30,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f30.f64 = double(temp.f32);
	// lfs f31,5484(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f31.f64 = double(temp.f32);
loc_8211E774:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x820dcf28
	ctx.lr = 0x8211E780;
	sub_820DCF28(ctx, base);
	// lhz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 12);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8211e7dc
	if (ctx.cr6.eq) goto loc_8211E7DC;
loc_8211E790:
	// addi r31,r11,-1
	ctx.r31.s64 = ctx.r11.s64 + -1;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820dcf70
	ctx.lr = 0x8211E7A0;
	sub_820DCF70(ctx, base);
	// lwz r11,96(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 96);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r31,r10
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x8211e7d0
	if (ctx.cr6.eq) goto loc_8211E7D0;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8211e3a0
	ctx.lr = 0x8211E7C4;
	sub_8211E3A0(ctx, base);
	// lfs f0,0(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x8211e908
	if (ctx.cr6.eq) goto loc_8211E908;
loc_8211E7D0:
	// lhz r11,2(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 2);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8211e790
	if (!ctx.cr6.eq) goto loc_8211E790;
loc_8211E7DC:
	// lhz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 4);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lfs f13,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// rotlwi r9,r11,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// lfsx f12,r9,r10
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	ctx.f12.f64 = double(temp.f32);
	// lfsx f11,r9,r26
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r26.u32);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f0,f12,f13
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// fsubs f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// fmuls f10,f13,f0
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fcmpu cr6,f10,f31
	ctx.cr6.compare(ctx.f10.f64, ctx.f31.f64);
	// blt cr6,0x8211e830
	if (ctx.cr6.lt) goto loc_8211E830;
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fsel f11,f12,f0,f13
	ctx.f11.f64 = ctx.f12.f64 >= 0.0 ? ctx.f0.f64 : ctx.f13.f64;
	// fsel f10,f11,f30,f31
	ctx.f10.f64 = ctx.f11.f64 >= 0.0 ? ctx.f30.f64 : ctx.f31.f64;
	// fctiwz f9,f10
	ctx.f9.s64 = (ctx.f10.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f9.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// subfic r10,r11,5
	ctx.xer.ca = ctx.r11.u32 <= 5;
	ctx.r10.s64 = 5 - ctx.r11.s64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r31,r9,r28
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r28.u32);
	// b 0x8211e8fc
	goto loc_8211E8FC;
loc_8211E830:
	// lfs f11,0(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f11,f12
	ctx.cr6.compare(ctx.f11.f64, ctx.f12.f64);
	// ble cr6,0x8211e908
	if (!ctx.cr6.gt) goto loc_8211E908;
	// fsubs f8,f0,f13
	ctx.f8.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f10.f64 = double(temp.f32);
	// fsel f7,f13,f30,f31
	ctx.f7.f64 = ctx.f13.f64 >= 0.0 ? ctx.f30.f64 : ctx.f31.f64;
	// lfs f6,0(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// lfs f5,4(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f4,f6,f11
	ctx.f4.f64 = double(float(ctx.f6.f64 - ctx.f11.f64));
	// lfs f9,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f2,f5,f10
	ctx.f2.f64 = double(float(ctx.f5.f64 - ctx.f10.f64));
	// lfs f3,8(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// lfs f1,12(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// fsubs f13,f3,f9
	ctx.f13.f64 = double(float(ctx.f3.f64 - ctx.f9.f64));
	// fsubs f6,f1,f12
	ctx.f6.f64 = double(float(ctx.f1.f64 - ctx.f12.f64));
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// fdivs f5,f0,f8
	ctx.f5.f64 = double(float(ctx.f0.f64 / ctx.f8.f64));
	// fctiwz f3,f7
	ctx.f3.s64 = (ctx.f7.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f7.f64));
	// stfd f3,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f3.u64);
	// lwz r31,84(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// fmadds f1,f4,f5,f11
	ctx.f1.f64 = double(float(ctx.f4.f64 * ctx.f5.f64 + ctx.f11.f64));
	// stfs f1,112(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmadds f0,f2,f5,f10
	ctx.f0.f64 = double(float(ctx.f2.f64 * ctx.f5.f64 + ctx.f10.f64));
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fmadds f13,f13,f5,f9
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f5.f64 + ctx.f9.f64));
	// stfs f13,120(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fmadds f12,f6,f5,f12
	ctx.f12.f64 = double(float(ctx.f6.f64 * ctx.f5.f64 + ctx.f12.f64));
	// stfs f12,124(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r4,r10,r28
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r28.u32);
	// bl 0x8211e708
	ctx.lr = 0x8211E8C4;
	sub_8211E708(ctx, base);
	// lfs f11,0(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f11,f31
	ctx.cr6.compare(ctx.f11.f64, ctx.f31.f64);
	// beq cr6,0x8211e908
	if (ctx.cr6.eq) goto loc_8211E908;
	// subfic r11,r31,5
	ctx.xer.ca = ctx.r31.u32 <= 5;
	ctx.r11.s64 = 5 - ctx.r31.s64;
	// lfs f0,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lfs f12,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f11.f64 = double(temp.f32);
	// lhzx r31,r10,r28
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r28.u32);
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
loc_8211E8FC:
	// clrlwi r11,r31,16
	ctx.r11.u64 = ctx.r31.u32 & 0xFFFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8211e774
	if (!ctx.cr6.eq) goto loc_8211E774;
loc_8211E908:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8211E708) {
	__imp__sub_8211E708(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8211E918) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lfs f13,64(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f12,68(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,72(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	ctx.f11.f64 = double(temp.f32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lfs f10,80(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	ctx.f10.f64 = double(temp.f32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lfs f9,84(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	ctx.f9.f64 = double(temp.f32);
	// li r4,1
	ctx.r4.s64 = 1;
	// lfs f8,88(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	ctx.f8.f64 = double(temp.f32);
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// lfs f7,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// lfs f0,5484(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f11,88(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f10,96(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f9,100(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f8,104(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f7,108(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// bl 0x8211e708
	ctx.lr = 0x8211E980;
	sub_8211E708(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8211E918) {
	__imp__sub_8211E918(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8211E990) {
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
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r10,r11,7088
	ctx.r10.s64 = ctx.r11.s64 + 7088;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x822796a8
	ctx.lr = 0x8211E9B0;
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

PPC_WEAK_FUNC(sub_8211E990) {
	__imp__sub_8211E990(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8211E9C0) {
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
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r10,r11,7088
	ctx.r10.s64 = ctx.r11.s64 + 7088;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x82278238
	ctx.lr = 0x8211E9E0;
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

PPC_WEAK_FUNC(sub_8211E9C0) {
	__imp__sub_8211E9C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8211E9F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf68
	ctx.lr = 0x8211E9F8;
	__savegprlr_24(ctx, base);
	// stfd f30,-88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f30.u64);
	// stfd f31,-80(r1)
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f31.u64);
	// stwu r1,-464(r1)
	ea = -464 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r24,r10
	ctx.r24.u64 = ctx.r10.u64;
	// addi r10,r11,7088
	ctx.r10.s64 = ctx.r11.s64 + 7088;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// addi r8,r1,92
	ctx.r8.s64 = ctx.r1.s64 + 92;
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
	ctx.lr = 0x8211EA3C;
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
	// beq cr6,0x8211ebf0
	if (ctx.cr6.eq) goto loc_8211EBF0;
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
	// bne cr6,0x8211eb28
	if (!ctx.cr6.eq) goto loc_8211EB28;
	// clrlwi r11,r24,24
	ctx.r11.u64 = ctx.r24.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8211ea98
	if (ctx.cr6.eq) goto loc_8211EA98;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8227c158
	ctx.lr = 0x8211EA8C;
	sub_8227C158(ctx, base);
	// lfs f0,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x8211ebf0
	if (ctx.cr6.eq) goto loc_8211EBF0;
loc_8211EA98:
	// li r29,0
	ctx.r29.s64 = 0;
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// li r11,-1
	ctx.r11.s64 = -1;
	// lfs f13,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// li r10,1
	ctx.r10.s64 = 1;
	// lfs f12,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// lfs f10,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lfs f9,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// stb r10,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r10.u8);
	// stfs f0,320(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 320, temp.u32);
	// stb r29,89(r1)
	PPC_STORE_U8(ctx.r1.u32 + 89, ctx.r29.u8);
	// stfs f13,324(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 324, temp.u32);
	// stb r29,91(r1)
	PPC_STORE_U8(ctx.r1.u32 + 91, ctx.r29.u8);
	// stfs f12,328(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 328, temp.u32);
	// stb r29,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r29.u8);
	// stfs f11,336(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 336, temp.u32);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// stfs f10,340(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 340, temp.u32);
	// stfs f9,344(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 344, temp.u32);
	// bl 0x82279c28
	ctx.lr = 0x8211EAF4;
	sub_82279C28(ctx, base);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// clrlwi r8,r25,24
	ctx.r8.u64 = ctx.r25.u32 & 0xFF;
	// stw r27,356(r1)
	PPC_STORE_U32(ctx.r1.u32 + 356, ctx.r27.u32);
	// stw r9,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, ctx.r9.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r8,360(r1)
	PPC_STORE_U32(ctx.r1.u32 + 360, ctx.r8.u32);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// stw r29,364(r1)
	PPC_STORE_U32(ctx.r1.u32 + 364, ctx.r29.u32);
	// bl 0x8211e918
	ctx.lr = 0x8211EB18;
	sub_8211E918(ctx, base);
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// lfd f30,-88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f31,-80(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
loc_8211EB28:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f10,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f13,12(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// lfs f12,16(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// stw r27,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r27.u32);
	// lfs f11,20(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// stw r26,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r26.u32);
	// lfs f6,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// stw r10,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r10.u32);
	// lfs f0,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// fadds f1,f6,f10
	ctx.f1.f64 = double(float(ctx.f6.f64 + ctx.f10.f64));
	// lfs f9,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fadds f7,f13,f0
	ctx.f7.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lfs f4,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// fadds f5,f12,f0
	ctx.f5.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// fadds f3,f11,f0
	ctx.f3.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// lfs f0,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fadds f6,f4,f9
	ctx.f6.f64 = double(float(ctx.f4.f64 + ctx.f9.f64));
	// lfs f4,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// lfs f8,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fadds f0,f0,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f10.f64));
	// lfs f2,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// fadds f10,f4,f9
	ctx.f10.f64 = double(float(ctx.f4.f64 + ctx.f9.f64));
	// lfs f30,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f30.f64 = double(temp.f32);
	// fadds f2,f2,f8
	ctx.f2.f64 = double(float(ctx.f2.f64 + ctx.f8.f64));
	// fadds f9,f30,f8
	ctx.f9.f64 = double(float(ctx.f30.f64 + ctx.f8.f64));
	// stfs f31,96(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f31,100(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stfs f31,104(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f1,208(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// stfs f6,212(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// stfs f2,216(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// stfs f0,224(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// stfs f10,228(r1)
	temp.f32 = float(ctx.f10.f64);
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
	// stfs f7,120(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f5,124(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f3,128(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// bl 0x82279c28
	ctx.lr = 0x8211EBD8;
	sub_82279C28(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8211e328
	ctx.lr = 0x8211EBE4;
	sub_8211E328(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8217f6e0
	ctx.lr = 0x8211EBF0;
	sub_8217F6E0(ctx, base);
loc_8211EBF0:
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// lfd f30,-88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f31,-80(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8211E9F0) {
	__imp__sub_8211E9F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8211EC00) {
	PPC_FUNC_PROLOGUE();
	// b 0x8211e9f0
	sub_8211E9F0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8211EC00) {
	__imp__sub_8211EC00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8211EC04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8211EC04) {
	__imp__sub_8211EC04(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8211EC08) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// addi r6,r10,-9672
	ctx.r6.s64 = ctx.r10.s64 + -9672;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,1
	ctx.r9.s64 = 1;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// b 0x8211e9f0
	sub_8211E9F0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8211EC08) {
	__imp__sub_8211EC08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8211EC28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x8211EC30;
	__savegprlr_28(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// li r11,-1
	ctx.r11.s64 = -1;
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// li r30,1
	ctx.r30.s64 = 1;
	// lfs f12,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// lfs f10,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lfs f9,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// stb r30,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r30.u8);
	// stfs f0,160(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stb r31,89(r1)
	PPC_STORE_U8(ctx.r1.u32 + 89, ctx.r31.u8);
	// stfs f13,164(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stb r31,91(r1)
	PPC_STORE_U8(ctx.r1.u32 + 91, ctx.r31.u8);
	// stfs f12,168(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stb r31,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r31.u8);
	// stfs f11,176(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stfs f10,180(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stfs f9,184(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// bl 0x82279c28
	ctx.lr = 0x8211EC98;
	sub_82279C28(ctx, base);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stw r28,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r28.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r10,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r10.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r30,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r30.u32);
	// stw r31,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r31.u32);
	// bl 0x8211e918
	ctx.lr = 0x8211ECB8;
	sub_8211E918(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8211EC28) {
	__imp__sub_8211EC28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8211ECC0) {
	PPC_FUNC_PROLOGUE();
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x8211e9f0
	sub_8211E9F0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8211ECC0) {
	__imp__sub_8211ECC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8211ECCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8211ECCC) {
	__imp__sub_8211ECCC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8211ECD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
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
	// addi r3,r7,-13488
	ctx.r3.s64 = ctx.r7.s64 + -13488;
	// lfs f31,5808(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5808);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,5484(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f30.f64 = double(temp.f32);
	// addi r8,r8,-13540
	ctx.r8.s64 = ctx.r8.s64 + -13540;
	// li r7,0
	ctx.r7.s64 = 0;
	// lfs f1,5488(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5488);
	ctx.f1.f64 = double(temp.f32);
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// bl 0x822e1660
	ctx.lr = 0x8211ED20;
	sub_822E1660(ctx, base);
	// lis r31,-32167
	ctx.r31.s64 = -2108096512;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// addi r6,r31,-11140
	ctx.r6.s64 = ctx.r31.s64 + -11140;
	// lis r4,-32255
	ctx.r4.s64 = -2113863680;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r8,r4,-13588
	ctx.r8.s64 = ctx.r4.s64 + -13588;
	// li r7,0
	ctx.r7.s64 = 0;
	// lfs f1,2416(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 2416);
	ctx.f1.f64 = double(temp.f32);
	// stw r3,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r3.u32);
	// addi r3,r11,-13616
	ctx.r3.s64 = ctx.r11.s64 + -13616;
	// bl 0x822e1660
	ctx.lr = 0x8211ED54;
	sub_822E1660(ctx, base);
	// stw r3,-11140(r31)
	PPC_STORE_U32(ctx.r31.u32 + -11140, ctx.r3.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
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

PPC_WEAK_FUNC(sub_8211ECD0) {
	__imp__sub_8211ECD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8211ED74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8211ED74) {
	__imp__sub_8211ED74(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8211ED78) {
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
	// bl 0x82334778
	ctx.lr = 0x8211ED98;
	sub_82334778(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8211edac
	if (!ctx.cr6.eq) goto loc_8211EDAC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82334898
	ctx.lr = 0x8211EDAC;
	sub_82334898(ctx, base);
loc_8211EDAC:
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

PPC_WEAK_FUNC(sub_8211ED78) {
	__imp__sub_8211ED78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8211EDC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8211EDC4) {
	__imp__sub_8211EDC4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8211EDC8) {
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
	// lis r11,1
	ctx.r11.s64 = 65536;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r10,r11,22928
	ctx.r10.u64 = ctx.r11.u64 | 22928;
	// lwzx r9,r3,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 6, ctx.xer);
	// blt cr6,0x8211ee08
	if (ctx.cr6.lt) goto loc_8211EE08;
loc_8211EDF0:
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
loc_8211EE08:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r10,r11,23624
	ctx.r10.u64 = ctx.r11.u64 | 23624;
	// lwzx r9,r31,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// rlwinm r8,r9,0,24,24
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x80;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x8211edf0
	if (!ctx.cr6.eq) goto loc_8211EDF0;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r10,r11,23096
	ctx.r10.u64 = ctx.r11.u64 | 23096;
	// lwzx r11,r31,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// rlwinm r9,r11,0,11,11
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100000;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8211ee44
	if (ctx.cr6.eq) goto loc_8211EE44;
	// rlwinm r11,r11,0,7,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000000;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8211edf0
	if (ctx.cr6.eq) goto loc_8211EDF0;
loc_8211EE44:
	// bl 0x820fc308
	ctx.lr = 0x8211EE48;
	sub_820FC308(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8211edf0
	if (!ctx.cr6.eq) goto loc_8211EDF0;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// ori r10,r11,20092
	ctx.r10.u64 = ctx.r11.u64 | 20092;
	// lwzx r9,r31,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// addic r8,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// subfe r3,r8,r9
	temp.u8 = (~ctx.r8.u32 + ctx.r9.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r8.u64 + ctx.r9.u64 + ctx.xer.ca;
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

PPC_WEAK_FUNC(sub_8211EDC8) {
	__imp__sub_8211EDC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8211EE7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8211EE7C) {
	__imp__sub_8211EE7C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8211EE80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x8211EE88;
	__savegprlr_26(ctx, base);
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x823de028
	ctx.lr = 0x8211EE90;
	__savefpr_28(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// mr r29,r9
	ctx.r29.u64 = ctx.r9.u64;
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
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// bl 0x8211edc8
	ctx.lr = 0x8211EEC8;
	sub_8211EDC8(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8211efdc
	if (ctx.cr6.eq) goto loc_8211EFDC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,12(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lfs f13,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x8211efdc
	if (ctx.cr6.eq) goto loc_8211EFDC;
	// lfs f0,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// lfs f13,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
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
	// beq cr6,0x8211ef28
	if (ctx.cr6.eq) goto loc_8211EF28;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x820fdd20
	ctx.lr = 0x8211EF18;
	sub_820FDD20(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8211efdc
	if (ctx.cr6.eq) goto loc_8211EFDC;
	// b 0x8211ef98
	goto loc_8211EF98;
loc_8211EF28:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x8211efdc
	if (ctx.cr6.eq) goto loc_8211EFDC;
	// addis r30,r31,1
	ctx.r30.s64 = ctx.r31.s64 + 65536;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r30,r30,22924
	ctx.r30.s64 = ctx.r30.s64 + 22924;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8211ed78
	ctx.lr = 0x8211EF44;
	sub_8211ED78(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8211efdc
	if (ctx.cr6.eq) goto loc_8211EFDC;
	// addis r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 131072;
	// addi r31,r31,19056
	ctx.r31.s64 = ctx.r31.s64 + 19056;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8211ef7c
	if (ctx.cr6.eq) goto loc_8211EF7C;
	// bl 0x82332af8
	ctx.lr = 0x8211EF64;
	sub_82332AF8(ctx, base);
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, ctx.xer);
	// bne cr6,0x8211ef7c
	if (!ctx.cr6.eq) goto loc_8211EF7C;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8211ef90
	if (!ctx.cr6.eq) goto loc_8211EF90;
loc_8211EF7C:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8211ed78
	ctx.lr = 0x8211EF88;
	sub_8211ED78(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8211efdc
	if (ctx.cr6.eq) goto loc_8211EFDC;
loc_8211EF90:
	// bl 0x82332af8
	ctx.lr = 0x8211EF94;
	sub_82332AF8(ctx, base);
	// lwz r31,492(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 492);
loc_8211EF98:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lbz r30,17(r27)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r27.u32 + 17);
	// lbz r29,16(r27)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r27.u32 + 16);
	// lfs f31,12(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,8(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	ctx.f30.f64 = double(temp.f32);
	// lfs f29,4(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	ctx.f29.f64 = double(temp.f32);
	// lfs f28,0(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f28.f64 = double(temp.f32);
	// bl 0x82141160
	ctx.lr = 0x8211EFB8;
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
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// fmr f3,f30
	ctx.f3.f64 = ctx.f30.f64;
	// fmr f4,f31
	ctx.f4.f64 = ctx.f31.f64;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// bl 0x822b7f70
	ctx.lr = 0x8211EFDC;
	sub_822B7F70(ctx, base);
loc_8211EFDC:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x823de074
	ctx.lr = 0x8211EFE8;
	__restfpr_28(ctx, base);
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8211EE80) {
	__imp__sub_8211EE80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8211EFEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8211EFEC) {
	__imp__sub_8211EFEC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8211EFF0) {
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
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32167
	ctx.r11.s64 = -2108096512;
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r11,-11140
	ctx.r11.s64 = ctx.r11.s64 + -11140;
	// stfs f13,4(r5)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// lis r9,2
	ctx.r9.s64 = 131072;
	// lfs f12,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// ori r8,r10,22912
	ctx.r8.u64 = ctx.r10.u64 | 22912;
	// stfs f12,8(r5)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r5.u32 + 8, temp.u32);
	// ori r7,r9,20096
	ctx.r7.u64 = ctx.r9.u64 | 20096;
	// lfs f11,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stfs f11,12(r5)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r5.u32 + 12, temp.u32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwzx r5,r3,r8
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r8.u32);
	// lwzx r4,r3,r7
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r7.u32);
	// lfs f10,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// subf r3,r4,r5
	ctx.r3.s64 = ctx.r5.s64 - ctx.r4.s64;
	// extsw r10,r3
	ctx.r10.s64 = ctx.r3.s32;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f9,80(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// frsp f7,f8
	ctx.f7.f64 = double(float(ctx.f8.f64));
	// lfs f0,5804(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 5804);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f7,f0
	ctx.f0.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// fcmpu cr6,f0,f10
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// bge cr6,0x8211f0c4
	if (!ctx.cr6.lt) goto loc_8211F0C4;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f13,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// lfs f0,-22124(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -22124);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f12,f0
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// bl 0x823de800
	ctx.lr = 0x8211F09C;
	sub_823DE800(ctx, base);
	// frsp f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64));
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f10,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// lfs f0,12168(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,2416(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2416);
	ctx.f13.f64 = double(temp.f32);
	// fadds f9,f11,f0
	ctx.f9.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// fmuls f8,f9,f13
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// fmuls f7,f10,f8
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f8.f64));
	// stfs f7,12(r30)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
loc_8211F0C4:
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

PPC_WEAK_FUNC(sub_8211EFF0) {
	__imp__sub_8211EFF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8211F0DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8211F0DC) {
	__imp__sub_8211F0DC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8211F0E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x8211F0E8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32032
	ctx.r11.s64 = -2099249152;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r11,-5944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5944);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8211f168
	if (ctx.cr6.eq) goto loc_8211F168;
	// lbz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8211f168
	if (ctx.cr6.eq) goto loc_8211F168;
	// bl 0x82332c40
	ctx.lr = 0x8211F118;
	sub_82332C40(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r31,1
	ctx.r31.s64 = 1;
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// ble cr6,0x8211f1b0
	if (!ctx.cr6.gt) goto loc_8211F1B0;
loc_8211F128:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332af8
	ctx.lr = 0x8211F130;
	sub_82332AF8(ctx, base);
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// cmpw cr6,r11,r26
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r26.s32, ctx.xer);
	// bne cr6,0x8211f150
	if (!ctx.cr6.eq) goto loc_8211F150;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x820da6b8
	ctx.lr = 0x8211F14C;
	sub_820DA6B8(ctx, base);
	// add r29,r3,r29
	ctx.r29.u64 = ctx.r3.u64 + ctx.r29.u64;
loc_8211F150:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// blt cr6,0x8211f128
	if (ctx.cr6.lt) goto loc_8211F128;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_8211F168:
	// addi r30,r27,544
	ctx.r30.s64 = ctx.r27.s64 + 544;
	// li r28,15
	ctx.r28.s64 = 15;
loc_8211F170:
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8211f1a4
	if (ctx.cr6.eq) goto loc_8211F1A4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332af8
	ctx.lr = 0x8211F184;
	sub_82332AF8(ctx, base);
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// cmpw cr6,r11,r26
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r26.s32, ctx.xer);
	// bne cr6,0x8211f1a4
	if (!ctx.cr6.eq) goto loc_8211F1A4;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x820da6b8
	ctx.lr = 0x8211F1A0;
	sub_820DA6B8(ctx, base);
	// add r29,r3,r29
	ctx.r29.u64 = ctx.r3.u64 + ctx.r29.u64;
loc_8211F1A4:
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x8211f170
	if (!ctx.cr0.eq) goto loc_8211F170;
loc_8211F1B0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8211F0E0) {
	__imp__sub_8211F0E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8211F1BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8211F1BC) {
	__imp__sub_8211F1BC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8211F1C0) {
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
	// lwz r11,684(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 684);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x8211f1fc
	if (!ctx.cr6.eq) goto loc_8211F1FC;
	// lwz r11,1104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1104);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8211f1fc
	if (ctx.cr6.eq) goto loc_8211F1FC;
loc_8211F1F4:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8211f248
	goto loc_8211F248;
loc_8211F1FC:
	// lwz r11,688(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 688);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x8211f214
	if (!ctx.cr6.eq) goto loc_8211F214;
	// lwz r11,1108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1108);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8211f1f4
	if (!ctx.cr6.eq) goto loc_8211F1F4;
loc_8211F214:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82334778
	ctx.lr = 0x8211F220;
	sub_82334778(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8211f23c
	if (!ctx.cr6.eq) goto loc_8211F23C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82334898
	ctx.lr = 0x8211F234;
	sub_82334898(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8211f248
	if (ctx.cr6.eq) goto loc_8211F248;
loc_8211F23C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8211f0e0
	ctx.lr = 0x8211F248;
	sub_8211F0E0(ctx, base);
loc_8211F248:
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

PPC_WEAK_FUNC(sub_8211F1C0) {
	__imp__sub_8211F1C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8211F260) {
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
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8211edc8
	ctx.lr = 0x8211F290;
	sub_8211EDC8(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8211f2b4
	if (!ctx.cr6.eq) goto loc_8211F2B4;
loc_8211F29C:
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
loc_8211F2B4:
	// addis r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 65536;
	// addi r3,r3,22924
	ctx.r3.s64 = ctx.r3.s64 + 22924;
	// lwz r4,684(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 684);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x8211f29c
	if (ctx.cr6.eq) goto loc_8211F29C;
	// bl 0x8211f1c0
	ctx.lr = 0x8211F2CC;
	sub_8211F1C0(ctx, base);
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

PPC_WEAK_FUNC(sub_8211F260) {
	__imp__sub_8211F260(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8211F2E0) {
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
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8211edc8
	ctx.lr = 0x8211F310;
	sub_8211EDC8(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8211f334
	if (!ctx.cr6.eq) goto loc_8211F334;
loc_8211F31C:
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
loc_8211F334:
	// addis r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 65536;
	// addi r3,r3,22924
	ctx.r3.s64 = ctx.r3.s64 + 22924;
	// lwz r4,688(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 688);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x8211f31c
	if (ctx.cr6.eq) goto loc_8211F31C;
	// bl 0x8211f1c0
	ctx.lr = 0x8211F34C;
	sub_8211F1C0(ctx, base);
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

PPC_WEAK_FUNC(sub_8211F2E0) {
	__imp__sub_8211F2E0(ctx, base);
}

