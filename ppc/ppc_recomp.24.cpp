#include "ppc_recomp_shared.h"

PPC_FUNC_IMPL(__imp__sub_82155908) {
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
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x82155950
	if (!ctx.cr6.gt) goto loc_82155950;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,26784(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26784);
loc_82155930:
	// li r5,6
	ctx.r5.s64 = 6;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x8215593C;
	sub_821778D8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x82155940;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,26784(r30)
	PPC_STORE_U32(ctx.r30.u32 + 26784, ctx.r3.u32);
	// bne 0x82155930
	if (!ctx.cr0.eq) goto loc_82155930;
loc_82155950:
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

PPC_WEAK_FUNC(sub_82155908) {
	__imp__sub_82155908(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82155968) {
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
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// li r5,288
	ctx.r5.s64 = 288;
	// lwz r4,26868(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26868);
	// bl 0x821778d8
	ctx.lr = 0x8215598C;
	sub_821778D8(ctx, base);
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177758
	ctx.lr = 0x82155994;
	sub_82177758(ctx, base);
	// lwz r11,26868(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26868);
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,28244(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28244, ctx.r11.u32);
	// bl 0x82147188
	ctx.lr = 0x821559A8;
	sub_82147188(ctx, base);
	// lwz r11,26868(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26868);
	// addi r3,r11,36
	ctx.r3.s64 = ctx.r11.s64 + 36;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821559fc
	if (ctx.cr6.eq) goto loc_821559FC;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x821559f8
	if (!ctx.cr6.eq) goto loc_821559F8;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82177868
	ctx.lr = 0x821559CC;
	sub_82177868(ctx, base);
	// lwz r11,26868(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26868);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r10.u32);
	// lwz r11,26868(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26868);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// stw r10,28440(r9)
	PPC_STORE_U32(ctx.r9.u32 + 28440, ctx.r10.u32);
	// lbz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// bl 0x82146e80
	ctx.lr = 0x821559F4;
	sub_82146E80(ctx, base);
	// b 0x821559fc
	goto loc_821559FC;
loc_821559F8:
	// bl 0x82177978
	ctx.lr = 0x821559FC;
	sub_82177978(ctx, base);
loc_821559FC:
	// lwz r11,26868(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26868);
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// addi r3,r11,40
	ctx.r3.s64 = ctx.r11.s64 + 40;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82155a58
	if (ctx.cr6.eq) goto loc_82155A58;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82155a54
	if (!ctx.cr6.eq) goto loc_82155A54;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82177868
	ctx.lr = 0x82155A24;
	sub_82177868(ctx, base);
	// lwz r11,26868(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26868);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r10.u32);
	// lwz r11,26868(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26868);
	// lwz r4,40(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// stw r4,26260(r30)
	PPC_STORE_U32(ctx.r30.u32 + 26260, ctx.r4.u32);
	// lbz r9,5(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// lbz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// subf r5,r9,r8
	ctx.r5.s64 = ctx.r8.s64 - ctx.r9.s64;
	// bl 0x821778d8
	ctx.lr = 0x82155A50;
	sub_821778D8(ctx, base);
	// b 0x82155a58
	goto loc_82155A58;
loc_82155A54:
	// bl 0x82177978
	ctx.lr = 0x82155A58;
	sub_82177978(ctx, base);
loc_82155A58:
	// lwz r11,26868(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26868);
	// addi r3,r11,44
	ctx.r3.s64 = ctx.r11.s64 + 44;
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82155ab8
	if (ctx.cr6.eq) goto loc_82155AB8;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82155ab4
	if (!ctx.cr6.eq) goto loc_82155AB4;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82177868
	ctx.lr = 0x82155A7C;
	sub_82177868(ctx, base);
	// lwz r11,26868(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26868);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r10.u32);
	// lwz r11,26868(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26868);
	// lwz r4,44(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// stw r4,28596(r9)
	PPC_STORE_U32(ctx.r9.u32 + 28596, ctx.r4.u32);
	// lbz r8,5(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// lbz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// subf r6,r8,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r8.s64;
	// rlwinm r5,r6,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x821778d8
	ctx.lr = 0x82155AB0;
	sub_821778D8(ctx, base);
	// b 0x82155ab8
	goto loc_82155AB8;
loc_82155AB4:
	// bl 0x82177978
	ctx.lr = 0x82155AB8;
	sub_82177978(ctx, base);
loc_82155AB8:
	// lwz r11,26868(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26868);
	// addi r3,r11,48
	ctx.r3.s64 = ctx.r11.s64 + 48;
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82155b20
	if (ctx.cr6.eq) goto loc_82155B20;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82155b1c
	if (!ctx.cr6.eq) goto loc_82155B1C;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x82155ADC;
	sub_82177868(ctx, base);
	// lwz r11,26868(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26868);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r10.u32);
	// lwz r11,26868(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26868);
	// lwz r4,48(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// stw r4,24988(r9)
	PPC_STORE_U32(ctx.r9.u32 + 24988, ctx.r4.u32);
	// lbz r8,5(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// lbz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// subf r11,r8,r7
	ctx.r11.s64 = ctx.r7.s64 - ctx.r8.s64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x821778d8
	ctx.lr = 0x82155B18;
	sub_821778D8(ctx, base);
	// b 0x82155b20
	goto loc_82155B20;
loc_82155B1C:
	// bl 0x82177978
	ctx.lr = 0x82155B20;
	sub_82177978(ctx, base);
loc_82155B20:
	// lwz r11,26868(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26868);
	// addi r3,r11,52
	ctx.r3.s64 = ctx.r11.s64 + 52;
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82155b70
	if (ctx.cr6.eq) goto loc_82155B70;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82155b6c
	if (!ctx.cr6.eq) goto loc_82155B6C;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82177868
	ctx.lr = 0x82155B44;
	sub_82177868(ctx, base);
	// lwz r11,26868(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26868);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lwz r11,26868(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26868);
	// lwz r4,52(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// stw r4,26260(r30)
	PPC_STORE_U32(ctx.r30.u32 + 26260, ctx.r4.u32);
	// lbz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// bl 0x821778d8
	ctx.lr = 0x82155B68;
	sub_821778D8(ctx, base);
	// b 0x82155b70
	goto loc_82155B70;
loc_82155B6C:
	// bl 0x82177978
	ctx.lr = 0x82155B70;
	sub_82177978(ctx, base);
loc_82155B70:
	// lwz r11,26868(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26868);
	// addi r3,r11,56
	ctx.r3.s64 = ctx.r11.s64 + 56;
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82155bc8
	if (ctx.cr6.eq) goto loc_82155BC8;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82155bc4
	if (!ctx.cr6.eq) goto loc_82155BC4;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x82155B94;
	sub_82177868(ctx, base);
	// lwz r11,26868(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26868);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r10.u32);
	// lwz r11,26868(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26868);
	// lwz r4,56(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// stw r4,25128(r9)
	PPC_STORE_U32(ctx.r9.u32 + 25128, ctx.r4.u32);
	// lbz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// rotlwi r5,r8,5
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r8.u32, 5);
	// bl 0x821778d8
	ctx.lr = 0x82155BC0;
	sub_821778D8(ctx, base);
	// b 0x82155bc8
	goto loc_82155BC8;
loc_82155BC4:
	// bl 0x82177978
	ctx.lr = 0x82155BC8;
	sub_82177978(ctx, base);
loc_82155BC8:
	// lwz r11,26868(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26868);
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82155c08
	if (ctx.cr6.eq) goto loc_82155C08;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x82155BE0;
	sub_82177868(ctx, base);
	// lwz r11,26868(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26868);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
	// lwz r11,26868(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26868);
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// stw r10,25372(r9)
	PPC_STORE_U32(ctx.r9.u32 + 25372, ctx.r10.u32);
	// lbz r4,6(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// bl 0x821524d8
	ctx.lr = 0x82155C08;
	sub_821524D8(ctx, base);
loc_82155C08:
	// lwz r11,26868(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26868);
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,26024(r10)
	PPC_STORE_U32(ctx.r10.u32 + 26024, ctx.r11.u32);
	// bl 0x82155710
	ctx.lr = 0x82155C24;
	sub_82155710(ctx, base);
	// lwz r11,26868(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26868);
	// lwz r9,228(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 228);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82155c68
	if (ctx.cr6.eq) goto loc_82155C68;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x82155C3C;
	sub_82177868(ctx, base);
	// lwz r11,26868(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26868);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,228(r11)
	PPC_STORE_U32(ctx.r11.u32 + 228, ctx.r10.u32);
	// lwz r11,26868(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26868);
	// lwz r10,228(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 228);
	// stw r10,25180(r9)
	PPC_STORE_U32(ctx.r9.u32 + 25180, ctx.r10.u32);
	// lwz r4,232(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	// bl 0x82155818
	ctx.lr = 0x82155C64;
	sub_82155818(ctx, base);
	// lwz r11,26868(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26868);
loc_82155C68:
	// lwz r10,240(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 240);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82155cac
	if (ctx.cr6.eq) goto loc_82155CAC;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x82155C7C;
	sub_82177868(ctx, base);
	// lwz r11,26868(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26868);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,240(r11)
	PPC_STORE_U32(ctx.r11.u32 + 240, ctx.r10.u32);
	// lwz r11,26868(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26868);
	// lwz r4,240(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 240);
	// stw r4,25732(r9)
	PPC_STORE_U32(ctx.r9.u32 + 25732, ctx.r4.u32);
	// lbz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// mulli r5,r8,28
	ctx.r5.s64 = ctx.r8.s64 * 28;
	// bl 0x821778d8
	ctx.lr = 0x82155CA8;
	sub_821778D8(ctx, base);
	// lwz r11,26868(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26868);
loc_82155CAC:
	// lwz r10,272(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 272);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82155cf0
	if (ctx.cr6.eq) goto loc_82155CF0;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82177868
	ctx.lr = 0x82155CC0;
	sub_82177868(ctx, base);
	// lwz r11,26868(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26868);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,272(r11)
	PPC_STORE_U32(ctx.r11.u32 + 272, ctx.r10.u32);
	// lwz r11,26868(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26868);
	// lwz r4,272(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 272);
	// stw r4,25460(r9)
	PPC_STORE_U32(ctx.r9.u32 + 25460, ctx.r4.u32);
	// lbz r8,6(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// rotlwi r5,r8,1
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// bl 0x821778d8
	ctx.lr = 0x82155CEC;
	sub_821778D8(ctx, base);
	// lwz r11,26868(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26868);
loc_82155CF0:
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// addi r11,r11,280
	ctx.r11.s64 = ctx.r11.s64 + 280;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,28300(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28300, ctx.r11.u32);
	// bl 0x82154b30
	ctx.lr = 0x82155D04;
	sub_82154B30(ctx, base);
	// lwz r11,26868(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26868);
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// addi r11,r11,284
	ctx.r11.s64 = ctx.r11.s64 + 284;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,28520(r9)
	PPC_STORE_U32(ctx.r9.u32 + 28520, ctx.r11.u32);
	// bl 0x82155018
	ctx.lr = 0x82155D1C;
	sub_82155018(ctx, base);
	// bl 0x821777e0
	ctx.lr = 0x82155D20;
	sub_821777E0(ctx, base);
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

PPC_WEAK_FUNC(sub_82155968) {
	__imp__sub_82155968(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82155D38) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82155D38) {
	__imp__sub_82155D38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82155D40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82155D48;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// rlwinm r5,r11,5,0,26
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// lwz r4,26868(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26868);
	// bl 0x821778d8
	ctx.lr = 0x82155D68;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lwz r30,26868(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26868);
	// ble cr6,0x82155d8c
	if (!ctx.cr6.gt) goto loc_82155D8C;
loc_82155D74:
	// stw r30,26868(r29)
	PPC_STORE_U32(ctx.r29.u32 + 26868, ctx.r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82155968
	ctx.lr = 0x82155D80;
	sub_82155968(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,288
	ctx.r30.s64 = ctx.r30.s64 + 288;
	// bne 0x82155d74
	if (!ctx.cr0.eq) goto loc_82155D74;
loc_82155D8C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82155D40) {
	__imp__sub_82155D40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82155D94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82155D94) {
	__imp__sub_82155D94(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82155D98) {
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
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x82155dd4
	if (!ctx.cr6.gt) goto loc_82155DD4;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
loc_82155DBC:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82155968
	ctx.lr = 0x82155DC4;
	sub_82155968(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x82155DC8;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stw r3,26868(r30)
	PPC_STORE_U32(ctx.r30.u32 + 26868, ctx.r3.u32);
	// bne 0x82155dbc
	if (!ctx.cr0.eq) goto loc_82155DBC;
loc_82155DD4:
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

PPC_WEAK_FUNC(sub_82155D98) {
	__imp__sub_82155D98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82155DEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82155DEC) {
	__imp__sub_82155DEC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82155DF0) {
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
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r4,25568(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25568);
	// bl 0x821778d8
	ctx.lr = 0x82155E14;
	sub_821778D8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82177758
	ctx.lr = 0x82155E1C;
	sub_82177758(ctx, base);
	// lwz r3,25568(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25568);
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82155ea0
	if (ctx.cr6.eq) goto loc_82155EA0;
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// beq cr6,0x82155e44
	if (ctx.cr6.eq) goto loc_82155E44;
	// cmpwi cr6,r30,-2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -2, ctx.xer);
	// beq cr6,0x82155e44
	if (ctx.cr6.eq) goto loc_82155E44;
	// bl 0x82177950
	ctx.lr = 0x82155E40;
	sub_82177950(ctx, base);
	// b 0x82155ea0
	goto loc_82155EA0;
loc_82155E44:
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x82155E4C;
	sub_82177868(ctx, base);
	// lwz r11,25568(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25568);
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// cmpwi cr6,r30,-2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -2, ctx.xer);
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// lwz r11,25568(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25568);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,26868(r10)
	PPC_STORE_U32(ctx.r10.u32 + 26868, ctx.r11.u32);
	// bne cr6,0x82155e78
	if (!ctx.cr6.eq) goto loc_82155E78;
	// bl 0x82177898
	ctx.lr = 0x82155E70;
	sub_82177898(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x82155e7c
	goto loc_82155E7C;
loc_82155E78:
	// li r30,0
	ctx.r30.s64 = 0;
loc_82155E7C:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82155968
	ctx.lr = 0x82155E84;
	sub_82155968(ctx, base);
	// lwz r3,25568(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25568);
	// bl 0x82175190
	ctx.lr = 0x82155E8C;
	sub_82175190(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82155ea0
	if (ctx.cr6.eq) goto loc_82155EA0;
	// lwz r11,25568(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25568);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_82155EA0:
	// bl 0x821777e0
	ctx.lr = 0x82155EA4;
	sub_821777E0(ctx, base);
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

PPC_WEAK_FUNC(sub_82155DF0) {
	__imp__sub_82155DF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82155EBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82155EBC) {
	__imp__sub_82155EBC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82155EC0) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82155EC0) {
	__imp__sub_82155EC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82155EC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82155ED0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// rlwinm r5,r4,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,25568(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 25568);
	// bl 0x821778d8
	ctx.lr = 0x82155EE8;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lwz r30,25568(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 25568);
	// ble cr6,0x82155f0c
	if (!ctx.cr6.gt) goto loc_82155F0C;
loc_82155EF4:
	// stw r30,25568(r29)
	PPC_STORE_U32(ctx.r29.u32 + 25568, ctx.r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82155df0
	ctx.lr = 0x82155F00;
	sub_82155DF0(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x82155ef4
	if (!ctx.cr0.eq) goto loc_82155EF4;
loc_82155F0C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82155EC8) {
	__imp__sub_82155EC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82155F14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82155F14) {
	__imp__sub_82155F14(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82155F18) {
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
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x82155f54
	if (!ctx.cr6.gt) goto loc_82155F54;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
loc_82155F3C:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82155df0
	ctx.lr = 0x82155F44;
	sub_82155DF0(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x82155F48;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stw r3,25568(r30)
	PPC_STORE_U32(ctx.r30.u32 + 25568, ctx.r3.u32);
	// bne 0x82155f3c
	if (!ctx.cr0.eq) goto loc_82155F3C;
loc_82155F54:
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

PPC_WEAK_FUNC(sub_82155F18) {
	__imp__sub_82155F18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82155F6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82155F6C) {
	__imp__sub_82155F6C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82155F70) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82155F70) {
	__imp__sub_82155F70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82155F78) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82155F78) {
	__imp__sub_82155F78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82155F80) {
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
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// lwz r11,25080(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25080);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82155fd8
	if (ctx.cr6.eq) goto loc_82155FD8;
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,27924(r31)
	PPC_STORE_U32(ctx.r31.u32 + 27924, ctx.r3.u32);
	// bl 0x82175180
	ctx.lr = 0x82155FB8;
	sub_82175180(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82155fd8
	if (!ctx.cr6.eq) goto loc_82155FD8;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,27924(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27924);
	// bl 0x82175180
	ctx.lr = 0x82155FCC;
	sub_82175180(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq cr6,0x82155fdc
	if (ctx.cr6.eq) goto loc_82155FDC;
loc_82155FD8:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82155FDC:
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

PPC_WEAK_FUNC(sub_82155F80) {
	__imp__sub_82155F80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82155FF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x82155FF8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r27,-32142
	ctx.r27.s64 = -2106458112;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lwz r31,25080(r27)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + 25080);
	// ble cr6,0x82156064
	if (!ctx.cr6.gt) goto loc_82156064;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
loc_82156018:
	// stw r31,25080(r27)
	PPC_STORE_U32(ctx.r27.u32 + 25080, ctx.r31.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82156054
	if (ctx.cr6.eq) goto loc_82156054;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,27924(r29)
	PPC_STORE_U32(ctx.r29.u32 + 27924, ctx.r3.u32);
	// bl 0x82175180
	ctx.lr = 0x82156038;
	sub_82175180(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82156054
	if (!ctx.cr6.eq) goto loc_82156054;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,27924(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 27924);
	// bl 0x82175180
	ctx.lr = 0x8215604C;
	sub_82175180(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82156070
	if (ctx.cr6.eq) goto loc_82156070;
loc_82156054:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r30,r28
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r28.s32, ctx.xer);
	// blt cr6,0x82156018
	if (ctx.cr6.lt) goto loc_82156018;
loc_82156064:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_82156070:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82155FF0) {
	__imp__sub_82155FF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215607C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8215607C) {
	__imp__sub_8215607C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82156080) {
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
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// lwz r11,27644(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27644);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,25080(r10)
	PPC_STORE_U32(ctx.r10.u32 + 25080, ctx.r11.u32);
	// bl 0x82155f80
	ctx.lr = 0x821560A4;
	sub_82155F80(ctx, base);
	// addic r9,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r9.s64 = ctx.r3.s64 + -1;
	// subfe r3,r9,r3
	temp.u8 = (~ctx.r9.u32 + ctx.r3.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r9.u64 + ctx.r3.u64 + ctx.xer.ca;
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

PPC_WEAK_FUNC(sub_82156080) {
	__imp__sub_82156080(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821560BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821560BC) {
	__imp__sub_821560BC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821560C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x821560C8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r28,-32142
	ctx.r28.s64 = -2106458112;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lwz r31,27644(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 27644);
	// ble cr6,0x82156140
	if (!ctx.cr6.gt) goto loc_82156140;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// lis r26,-32142
	ctx.r26.s64 = -2106458112;
loc_821560EC:
	// addi r11,r31,8
	ctx.r11.s64 = ctx.r31.s64 + 8;
	// stw r31,27644(r28)
	PPC_STORE_U32(ctx.r28.u32 + 27644, ctx.r31.u32);
	// stw r11,25080(r26)
	PPC_STORE_U32(ctx.r26.u32 + 25080, ctx.r11.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82156130
	if (ctx.cr6.eq) goto loc_82156130;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,27924(r29)
	PPC_STORE_U32(ctx.r29.u32 + 27924, ctx.r3.u32);
	// bl 0x82175180
	ctx.lr = 0x82156114;
	sub_82175180(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82156130
	if (!ctx.cr6.eq) goto loc_82156130;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,27924(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 27924);
	// bl 0x82175180
	ctx.lr = 0x82156128;
	sub_82175180(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8215614c
	if (ctx.cr6.eq) goto loc_8215614C;
loc_82156130:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,40
	ctx.r31.s64 = ctx.r31.s64 + 40;
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x821560ec
	if (ctx.cr6.lt) goto loc_821560EC;
loc_82156140:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_8215614C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821560C0) {
	__imp__sub_821560C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82156158) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82156158) {
	__imp__sub_82156158(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82156160) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82156160) {
	__imp__sub_82156160(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82156168) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82156168) {
	__imp__sub_82156168(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82156170) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82156170) {
	__imp__sub_82156170(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82156178) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82156180;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r28,-32142
	ctx.r28.s64 = -2106458112;
	// lwz r11,25584(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 25584);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821561cc
	if (ctx.cr6.eq) goto loc_821561CC;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// rotlwi r31,r10,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r31,25524(r29)
	PPC_STORE_U32(ctx.r29.u32 + 25524, ctx.r31.u32);
	// lbz r30,4(r11)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x821561cc
	if (!ctx.cr6.gt) goto loc_821561CC;
loc_821561B0:
	// stw r31,25524(r29)
	PPC_STORE_U32(ctx.r29.u32 + 25524, ctx.r31.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8217e570
	ctx.lr = 0x821561BC;
	sub_8217E570(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// bne 0x821561b0
	if (!ctx.cr0.eq) goto loc_821561B0;
	// lwz r11,25584(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 25584);
loc_821561CC:
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82156204
	if (ctx.cr6.eq) goto loc_82156204;
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r10,28604(r9)
	PPC_STORE_U32(ctx.r9.u32 + 28604, ctx.r10.u32);
	// lbz r3,6(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// bl 0x82152f58
	ctx.lr = 0x821561EC;
	sub_82152F58(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82156200
	if (!ctx.cr6.eq) goto loc_82156200;
loc_821561F4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_82156200:
	// lwz r11,25584(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 25584);
loc_82156204:
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// li r3,4
	ctx.r3.s64 = 4;
	// stw r11,27644(r10)
	PPC_STORE_U32(ctx.r10.u32 + 27644, ctx.r11.u32);
	// bl 0x821560c0
	ctx.lr = 0x82156218;
	sub_821560C0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821561f4
	if (ctx.cr6.eq) goto loc_821561F4;
	// lwz r11,25584(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 25584);
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// addi r11,r11,280
	ctx.r11.s64 = ctx.r11.s64 + 280;
	// stw r11,26348(r10)
	PPC_STORE_U32(ctx.r10.u32 + 26348, ctx.r11.u32);
	// bl 0x821551a8
	ctx.lr = 0x82156234;
	sub_821551A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821561f4
	if (ctx.cr6.eq) goto loc_821561F4;
	// lwz r11,25584(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 25584);
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// addi r11,r11,284
	ctx.r11.s64 = ctx.r11.s64 + 284;
	// stw r11,26308(r10)
	PPC_STORE_U32(ctx.r10.u32 + 26308, ctx.r11.u32);
	// bl 0x821552d8
	ctx.lr = 0x82156250;
	sub_821552D8(ctx, base);
	// addic r9,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r9.s64 = ctx.r3.s64 + -1;
	// subfe r3,r9,r3
	temp.u8 = (~ctx.r9.u32 + ctx.r3.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r9.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82156178) {
	__imp__sub_82156178(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82156260) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82156268;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r28,-32142
	ctx.r28.s64 = -2106458112;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lwz r31,25584(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 25584);
	// ble cr6,0x821562a4
	if (!ctx.cr6.gt) goto loc_821562A4;
loc_82156284:
	// stw r31,25584(r28)
	PPC_STORE_U32(ctx.r28.u32 + 25584, ctx.r31.u32);
	// bl 0x82156178
	ctx.lr = 0x8215628C;
	sub_82156178(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821562b0
	if (ctx.cr6.eq) goto loc_821562B0;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,288
	ctx.r31.s64 = ctx.r31.s64 + 288;
	// cmpw cr6,r30,r29
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r29.s32, ctx.xer);
	// blt cr6,0x82156284
	if (ctx.cr6.lt) goto loc_82156284;
loc_821562A4:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_821562B0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82156260) {
	__imp__sub_82156260(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821562BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821562BC) {
	__imp__sub_821562BC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821562C0) {
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
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// lwz r11,26052(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26052);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82156338
	if (ctx.cr6.eq) goto loc_82156338;
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,25584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25584, ctx.r3.u32);
	// bl 0x82175220
	ctx.lr = 0x821562F8;
	sub_82175220(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82156338
	if (!ctx.cr6.eq) goto loc_82156338;
	// bl 0x82156178
	ctx.lr = 0x82156304;
	sub_82156178(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82156320
	if (!ctx.cr6.eq) goto loc_82156320;
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
loc_82156320:
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,25584(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25584);
	// bl 0x82175220
	ctx.lr = 0x8215632C;
	sub_82175220(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq cr6,0x8215633c
	if (ctx.cr6.eq) goto loc_8215633C;
loc_82156338:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8215633C:
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

PPC_WEAK_FUNC(sub_821562C0) {
	__imp__sub_821562C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82156350) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82156358;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r28,-32142
	ctx.r28.s64 = -2106458112;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lwz r31,26052(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 26052);
	// ble cr6,0x82156394
	if (!ctx.cr6.gt) goto loc_82156394;
loc_82156374:
	// stw r31,26052(r28)
	PPC_STORE_U32(ctx.r28.u32 + 26052, ctx.r31.u32);
	// bl 0x821562c0
	ctx.lr = 0x8215637C;
	sub_821562C0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821563a0
	if (ctx.cr6.eq) goto loc_821563A0;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r30,r29
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r29.s32, ctx.xer);
	// blt cr6,0x82156374
	if (ctx.cr6.lt) goto loc_82156374;
loc_82156394:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_821563A0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82156350) {
	__imp__sub_82156350(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821563AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821563AC) {
	__imp__sub_821563AC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821563B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r5,12
	ctx.r5.s64 = 12;
	// lwz r4,25632(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25632);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821563B0) {
	__imp__sub_821563B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821563C0) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821563C0) {
	__imp__sub_821563C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821563C8) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// add r9,r4,r11
	ctx.r9.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,25632(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25632);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821563C8) {
	__imp__sub_821563C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821563E0) {
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
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x82156428
	if (!ctx.cr6.gt) goto loc_82156428;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,25632(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25632);
loc_82156408:
	// li r5,12
	ctx.r5.s64 = 12;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x82156414;
	sub_821778D8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x82156418;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,25632(r30)
	PPC_STORE_U32(ctx.r30.u32 + 25632, ctx.r3.u32);
	// bne 0x82156408
	if (!ctx.cr0.eq) goto loc_82156408;
loc_82156428:
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

PPC_WEAK_FUNC(sub_821563E0) {
	__imp__sub_821563E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82156440) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r4,26096(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26096);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82156440) {
	__imp__sub_82156440(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82156450) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82156450) {
	__imp__sub_82156450(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82156458) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// rlwinm r5,r4,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,26096(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26096);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82156458) {
	__imp__sub_82156458(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82156468) {
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
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x821564b0
	if (!ctx.cr6.gt) goto loc_821564B0;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,26096(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26096);
loc_82156490:
	// li r5,4
	ctx.r5.s64 = 4;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x8215649C;
	sub_821778D8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x821564A0;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,26096(r30)
	PPC_STORE_U32(ctx.r30.u32 + 26096, ctx.r3.u32);
	// bne 0x82156490
	if (!ctx.cr0.eq) goto loc_82156490;
loc_821564B0:
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

PPC_WEAK_FUNC(sub_82156468) {
	__imp__sub_82156468(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821564C8) {
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
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// li r5,64
	ctx.r5.s64 = 64;
	// lwz r4,25712(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25712);
	// bl 0x821778d8
	ctx.lr = 0x821564EC;
	sub_821778D8(ctx, base);
	// lwz r11,25712(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25712);
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r11,6
	ctx.r4.s64 = ctx.r11.s64 + 6;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,28440(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28440, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x82156508;
	sub_821778D8(ctx, base);
	// lwz r3,28440(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28440);
	// bl 0x8217e550
	ctx.lr = 0x82156510;
	sub_8217E550(ctx, base);
	// lwz r11,25712(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25712);
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,28440(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28440, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x82156528;
	sub_821778D8(ctx, base);
	// lwz r3,28440(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28440);
	// bl 0x8217e550
	ctx.lr = 0x82156530;
	sub_8217E550(ctx, base);
	// lwz r11,25712(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25712);
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r11,10
	ctx.r4.s64 = ctx.r11.s64 + 10;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,28440(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28440, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x82156548;
	sub_821778D8(ctx, base);
	// lwz r3,28440(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28440);
	// bl 0x8217e550
	ctx.lr = 0x82156550;
	sub_8217E550(ctx, base);
	// lwz r11,25712(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25712);
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r11,12
	ctx.r4.s64 = ctx.r11.s64 + 12;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,28440(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28440, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x82156568;
	sub_821778D8(ctx, base);
	// lwz r3,28440(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28440);
	// bl 0x8217e550
	ctx.lr = 0x82156570;
	sub_8217E550(ctx, base);
	// lwz r11,25712(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25712);
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r11,14
	ctx.r4.s64 = ctx.r11.s64 + 14;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,28440(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28440, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x82156588;
	sub_821778D8(ctx, base);
	// lwz r3,28440(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28440);
	// bl 0x8217e550
	ctx.lr = 0x82156590;
	sub_8217E550(ctx, base);
	// lwz r11,25712(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25712);
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821565dc
	if (ctx.cr6.eq) goto loc_821565DC;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x821565A8;
	sub_82177868(ctx, base);
	// lwz r11,25712(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25712);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
	// lwz r11,25712(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25712);
	// lwz r4,60(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// stw r4,25632(r9)
	PPC_STORE_U32(ctx.r9.u32 + 25632, ctx.r4.u32);
	// lhz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 56);
	// rotlwi r10,r11,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r5,r8,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x821778d8
	ctx.lr = 0x821565DC;
	sub_821778D8(ctx, base);
loc_821565DC:
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

PPC_WEAK_FUNC(sub_821564C8) {
	__imp__sub_821564C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821565F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821565F4) {
	__imp__sub_821565F4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821565F8) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821565F8) {
	__imp__sub_821565F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82156600) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82156608;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// rlwinm r5,r4,6,0,25
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 6) & 0xFFFFFFC0;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,25712(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 25712);
	// bl 0x821778d8
	ctx.lr = 0x82156620;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lwz r30,25712(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 25712);
	// ble cr6,0x82156644
	if (!ctx.cr6.gt) goto loc_82156644;
loc_8215662C:
	// stw r30,25712(r29)
	PPC_STORE_U32(ctx.r29.u32 + 25712, ctx.r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821564c8
	ctx.lr = 0x82156638;
	sub_821564C8(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,64
	ctx.r30.s64 = ctx.r30.s64 + 64;
	// bne 0x8215662c
	if (!ctx.cr0.eq) goto loc_8215662C;
loc_82156644:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82156600) {
	__imp__sub_82156600(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215664C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8215664C) {
	__imp__sub_8215664C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82156650) {
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
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x8215668c
	if (!ctx.cr6.gt) goto loc_8215668C;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
loc_82156674:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821564c8
	ctx.lr = 0x8215667C;
	sub_821564C8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x82156680;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stw r3,25712(r30)
	PPC_STORE_U32(ctx.r30.u32 + 25712, ctx.r3.u32);
	// bne 0x82156674
	if (!ctx.cr0.eq) goto loc_82156674;
loc_8215668C:
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

PPC_WEAK_FUNC(sub_82156650) {
	__imp__sub_82156650(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821566A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821566A4) {
	__imp__sub_821566A4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821566A8) {
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
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// li r5,136
	ctx.r5.s64 = 136;
	// lwz r4,25388(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25388);
	// bl 0x821778d8
	ctx.lr = 0x821566C8;
	sub_821778D8(ctx, base);
	// lwz r11,25388(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25388);
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,25712(r10)
	PPC_STORE_U32(ctx.r10.u32 + 25712, ctx.r11.u32);
	// bl 0x821564c8
	ctx.lr = 0x821566DC;
	sub_821564C8(ctx, base);
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

PPC_WEAK_FUNC(sub_821566A8) {
	__imp__sub_821566A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821566F0) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821566F0) {
	__imp__sub_821566F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821566F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82156700;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// mulli r5,r4,136
	ctx.r5.s64 = ctx.r4.s64 * 136;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r4,25388(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 25388);
	// bl 0x821778d8
	ctx.lr = 0x82156718;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// lwz r31,25388(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 25388);
	// ble cr6,0x82156758
	if (!ctx.cr6.gt) goto loc_82156758;
	// lis r28,-32142
	ctx.r28.s64 = -2106458112;
loc_82156728:
	// stw r31,25388(r29)
	PPC_STORE_U32(ctx.r29.u32 + 25388, ctx.r31.u32);
	// li r5,136
	ctx.r5.s64 = 136;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821778d8
	ctx.lr = 0x8215673C;
	sub_821778D8(ctx, base);
	// lwz r11,25388(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 25388);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,25712(r28)
	PPC_STORE_U32(ctx.r28.u32 + 25712, ctx.r11.u32);
	// bl 0x821564c8
	ctx.lr = 0x8215674C;
	sub_821564C8(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,136
	ctx.r31.s64 = ctx.r31.s64 + 136;
	// bne 0x82156728
	if (!ctx.cr0.eq) goto loc_82156728;
loc_82156758:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821566F8) {
	__imp__sub_821566F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82156760) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82156768;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x821567b4
	if (!ctx.cr6.gt) goto loc_821567B4;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// lwz r4,25388(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25388);
loc_82156784:
	// li r5,136
	ctx.r5.s64 = 136;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x82156790;
	sub_821778D8(ctx, base);
	// lwz r11,25388(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25388);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,25712(r29)
	PPC_STORE_U32(ctx.r29.u32 + 25712, ctx.r11.u32);
	// bl 0x821564c8
	ctx.lr = 0x821567A0;
	sub_821564C8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x821567A4;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,25388(r30)
	PPC_STORE_U32(ctx.r30.u32 + 25388, ctx.r3.u32);
	// bne 0x82156784
	if (!ctx.cr0.eq) goto loc_82156784;
loc_821567B4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82156760) {
	__imp__sub_82156760(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821567BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821567BC) {
	__imp__sub_821567BC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821567C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r5,16
	ctx.r5.s64 = 16;
	// lwz r4,28112(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28112);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821567C0) {
	__imp__sub_821567C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821567D0) {
	PPC_FUNC_PROLOGUE();
	// li r3,15
	ctx.r3.s64 = 15;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821567D0) {
	__imp__sub_821567D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821567D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// rlwinm r5,r4,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r4,28112(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28112);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821567D8) {
	__imp__sub_821567D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821567E8) {
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
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x82156830
	if (!ctx.cr6.gt) goto loc_82156830;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,28112(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28112);
loc_82156810:
	// li r5,16
	ctx.r5.s64 = 16;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x8215681C;
	sub_821778D8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x82156820;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,28112(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28112, ctx.r3.u32);
	// bne 0x82156810
	if (!ctx.cr0.eq) goto loc_82156810;
loc_82156830:
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

PPC_WEAK_FUNC(sub_821567E8) {
	__imp__sub_821567E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82156848) {
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
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// li r5,8
	ctx.r5.s64 = 8;
	// lwz r4,28028(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28028);
	// bl 0x821778d8
	ctx.lr = 0x82156868;
	sub_821778D8(ctx, base);
	// lwz r11,28028(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28028);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821568ac
	if (ctx.cr6.eq) goto loc_821568AC;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82177868
	ctx.lr = 0x82156880;
	sub_82177868(ctx, base);
	// lwz r11,28028(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28028);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,28028(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28028);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r4,25460(r9)
	PPC_STORE_U32(ctx.r9.u32 + 25460, ctx.r4.u32);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r5,r8,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x821778d8
	ctx.lr = 0x821568AC;
	sub_821778D8(ctx, base);
loc_821568AC:
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

PPC_WEAK_FUNC(sub_82156848) {
	__imp__sub_82156848(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821568C0) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821568C0) {
	__imp__sub_821568C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821568C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x821568D0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// rlwinm r5,r4,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r4,28028(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28028);
	// bl 0x821778d8
	ctx.lr = 0x821568E8;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// lwz r29,28028(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28028);
	// ble cr6,0x82156958
	if (!ctx.cr6.gt) goto loc_82156958;
	// lis r28,-32142
	ctx.r28.s64 = -2106458112;
loc_821568F8:
	// stw r29,28028(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28028, ctx.r29.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821778d8
	ctx.lr = 0x8215690C;
	sub_821778D8(ctx, base);
	// lwz r11,28028(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28028);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8215694c
	if (ctx.cr6.eq) goto loc_8215694C;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82177868
	ctx.lr = 0x82156924;
	sub_82177868(ctx, base);
	// lwz r11,28028(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28028);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,28028(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28028);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r4,25460(r28)
	PPC_STORE_U32(ctx.r28.u32 + 25460, ctx.r4.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r5,r9,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x821778d8
	ctx.lr = 0x8215694C;
	sub_821778D8(ctx, base);
loc_8215694C:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// bne 0x821568f8
	if (!ctx.cr0.eq) goto loc_821568F8;
loc_82156958:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821568C8) {
	__imp__sub_821568C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82156960) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82156968;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x821569e4
	if (!ctx.cr6.gt) goto loc_821569E4;
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// lwz r4,28028(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28028);
loc_82156984:
	// li r5,8
	ctx.r5.s64 = 8;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x82156990;
	sub_821778D8(ctx, base);
	// lwz r11,28028(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28028);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821569d0
	if (ctx.cr6.eq) goto loc_821569D0;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82177868
	ctx.lr = 0x821569A8;
	sub_82177868(ctx, base);
	// lwz r11,28028(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28028);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,28028(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28028);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r4,25460(r29)
	PPC_STORE_U32(ctx.r29.u32 + 25460, ctx.r4.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r5,r9,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x821778d8
	ctx.lr = 0x821569D0;
	sub_821778D8(ctx, base);
loc_821569D0:
	// bl 0x82177858
	ctx.lr = 0x821569D4;
	sub_82177858(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,28028(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28028, ctx.r3.u32);
	// bne 0x82156984
	if (!ctx.cr0.eq) goto loc_82156984;
loc_821569E4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82156960) {
	__imp__sub_82156960(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821569EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821569EC) {
	__imp__sub_821569EC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821569F0) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821569F0) {
	__imp__sub_821569F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821569F8) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821569F8) {
	__imp__sub_821569F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82156A00) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82156A00) {
	__imp__sub_82156A00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82156A08) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82156A08) {
	__imp__sub_82156A08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82156A10) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82156A10) {
	__imp__sub_82156A10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82156A18) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82156A18) {
	__imp__sub_82156A18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82156A20) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82156A20) {
	__imp__sub_82156A20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82156A28) {
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
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// lwz r11,26164(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26164);
	// addi r3,r11,6
	ctx.r3.s64 = ctx.r11.s64 + 6;
	// stw r3,25524(r30)
	PPC_STORE_U32(ctx.r30.u32 + 25524, ctx.r3.u32);
	// bl 0x8217e570
	ctx.lr = 0x82156A54;
	sub_8217E570(ctx, base);
	// lwz r11,26164(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26164);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// stw r3,25524(r30)
	PPC_STORE_U32(ctx.r30.u32 + 25524, ctx.r3.u32);
	// bl 0x8217e570
	ctx.lr = 0x82156A64;
	sub_8217E570(ctx, base);
	// lwz r11,26164(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26164);
	// addi r3,r11,10
	ctx.r3.s64 = ctx.r11.s64 + 10;
	// stw r3,25524(r30)
	PPC_STORE_U32(ctx.r30.u32 + 25524, ctx.r3.u32);
	// bl 0x8217e570
	ctx.lr = 0x82156A74;
	sub_8217E570(ctx, base);
	// lwz r11,26164(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26164);
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// stw r3,25524(r30)
	PPC_STORE_U32(ctx.r30.u32 + 25524, ctx.r3.u32);
	// bl 0x8217e570
	ctx.lr = 0x82156A84;
	sub_8217E570(ctx, base);
	// lwz r11,26164(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26164);
	// addi r3,r11,14
	ctx.r3.s64 = ctx.r11.s64 + 14;
	// stw r3,25524(r30)
	PPC_STORE_U32(ctx.r30.u32 + 25524, ctx.r3.u32);
	// bl 0x8217e570
	ctx.lr = 0x82156A94;
	sub_8217E570(ctx, base);
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

PPC_WEAK_FUNC(sub_82156A28) {
	__imp__sub_82156A28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82156AB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x82156AB8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lwz r28,26164(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26164);
	// ble cr6,0x82156b38
	if (!ctx.cr6.gt) goto loc_82156B38;
	// addi r29,r28,6
	ctx.r29.s64 = ctx.r28.s64 + 6;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
loc_82156AD8:
	// stw r28,26164(r30)
	PPC_STORE_U32(ctx.r30.u32 + 26164, ctx.r28.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r29,25524(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25524, ctx.r29.u32);
	// bl 0x8217e570
	ctx.lr = 0x82156AE8;
	sub_8217E570(ctx, base);
	// lwz r11,26164(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26164);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// stw r3,25524(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25524, ctx.r3.u32);
	// bl 0x8217e570
	ctx.lr = 0x82156AF8;
	sub_8217E570(ctx, base);
	// lwz r11,26164(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26164);
	// addi r3,r11,10
	ctx.r3.s64 = ctx.r11.s64 + 10;
	// stw r3,25524(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25524, ctx.r3.u32);
	// bl 0x8217e570
	ctx.lr = 0x82156B08;
	sub_8217E570(ctx, base);
	// lwz r11,26164(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26164);
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// stw r3,25524(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25524, ctx.r3.u32);
	// bl 0x8217e570
	ctx.lr = 0x82156B18;
	sub_8217E570(ctx, base);
	// lwz r11,26164(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26164);
	// addi r3,r11,14
	ctx.r3.s64 = ctx.r11.s64 + 14;
	// stw r3,25524(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25524, ctx.r3.u32);
	// bl 0x8217e570
	ctx.lr = 0x82156B28;
	sub_8217E570(ctx, base);
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r28,r28,64
	ctx.r28.s64 = ctx.r28.s64 + 64;
	// addi r29,r29,64
	ctx.r29.s64 = ctx.r29.s64 + 64;
	// bne 0x82156ad8
	if (!ctx.cr0.eq) goto loc_82156AD8;
loc_82156B38:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82156AB0) {
	__imp__sub_82156AB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82156B44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82156B44) {
	__imp__sub_82156B44(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82156B48) {
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
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// lwz r11,28448(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28448);
	// stw r11,26164(r10)
	PPC_STORE_U32(ctx.r10.u32 + 26164, ctx.r11.u32);
	// bl 0x82156a28
	ctx.lr = 0x82156B68;
	sub_82156A28(ctx, base);
	// addic r9,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r9.s64 = ctx.r3.s64 + -1;
	// subfe r3,r9,r3
	temp.u8 = (~ctx.r9.u32 + ctx.r3.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r9.u64 + ctx.r3.u64 + ctx.xer.ca;
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

PPC_WEAK_FUNC(sub_82156B48) {
	__imp__sub_82156B48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82156B80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x82156B88;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r26,-32142
	ctx.r26.s64 = -2106458112;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lwz r29,28448(r26)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r26.u32 + 28448);
	// ble cr6,0x82156c10
	if (!ctx.cr6.gt) goto loc_82156C10;
	// addi r28,r29,6
	ctx.r28.s64 = ctx.r29.s64 + 6;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
loc_82156BAC:
	// stw r29,28448(r26)
	PPC_STORE_U32(ctx.r26.u32 + 28448, ctx.r29.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r29,26164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 26164, ctx.r29.u32);
	// stw r28,25524(r30)
	PPC_STORE_U32(ctx.r30.u32 + 25524, ctx.r28.u32);
	// bl 0x8217e570
	ctx.lr = 0x82156BC0;
	sub_8217E570(ctx, base);
	// lwz r11,26164(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26164);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// stw r3,25524(r30)
	PPC_STORE_U32(ctx.r30.u32 + 25524, ctx.r3.u32);
	// bl 0x8217e570
	ctx.lr = 0x82156BD0;
	sub_8217E570(ctx, base);
	// lwz r11,26164(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26164);
	// addi r3,r11,10
	ctx.r3.s64 = ctx.r11.s64 + 10;
	// stw r3,25524(r30)
	PPC_STORE_U32(ctx.r30.u32 + 25524, ctx.r3.u32);
	// bl 0x8217e570
	ctx.lr = 0x82156BE0;
	sub_8217E570(ctx, base);
	// lwz r11,26164(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26164);
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// stw r3,25524(r30)
	PPC_STORE_U32(ctx.r30.u32 + 25524, ctx.r3.u32);
	// bl 0x8217e570
	ctx.lr = 0x82156BF0;
	sub_8217E570(ctx, base);
	// lwz r11,26164(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26164);
	// addi r3,r11,14
	ctx.r3.s64 = ctx.r11.s64 + 14;
	// stw r3,25524(r30)
	PPC_STORE_U32(ctx.r30.u32 + 25524, ctx.r3.u32);
	// bl 0x8217e570
	ctx.lr = 0x82156C00;
	sub_8217E570(ctx, base);
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r29,r29,136
	ctx.r29.s64 = ctx.r29.s64 + 136;
	// addi r28,r28,136
	ctx.r28.s64 = ctx.r28.s64 + 136;
	// bne 0x82156bac
	if (!ctx.cr0.eq) goto loc_82156BAC;
loc_82156C10:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82156B80) {
	__imp__sub_82156B80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82156C1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82156C1C) {
	__imp__sub_82156C1C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82156C20) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82156C20) {
	__imp__sub_82156C20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82156C28) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82156C28) {
	__imp__sub_82156C28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82156C30) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82156C30) {
	__imp__sub_82156C30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82156C38) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82156C38) {
	__imp__sub_82156C38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82156C40) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82156C40) {
	__imp__sub_82156C40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82156C48) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82156C48) {
	__imp__sub_82156C48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82156C50) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82156C50) {
	__imp__sub_82156C50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82156C58) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82156C58) {
	__imp__sub_82156C58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82156C60) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82156C60) {
	__imp__sub_82156C60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82156C68) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82156C68) {
	__imp__sub_82156C68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82156C70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r5,12
	ctx.r5.s64 = 12;
	// lwz r4,26796(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26796);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82156C70) {
	__imp__sub_82156C70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82156C80) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82156C80) {
	__imp__sub_82156C80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82156C88) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// add r9,r4,r11
	ctx.r9.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,26796(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26796);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82156C88) {
	__imp__sub_82156C88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82156CA0) {
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
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x82156ce8
	if (!ctx.cr6.gt) goto loc_82156CE8;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,26796(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26796);
loc_82156CC8:
	// li r5,12
	ctx.r5.s64 = 12;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x82156CD4;
	sub_821778D8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x82156CD8;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,26796(r30)
	PPC_STORE_U32(ctx.r30.u32 + 26796, ctx.r3.u32);
	// bne 0x82156cc8
	if (!ctx.cr0.eq) goto loc_82156CC8;
loc_82156CE8:
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

PPC_WEAK_FUNC(sub_82156CA0) {
	__imp__sub_82156CA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82156D00) {
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
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// li r5,60
	ctx.r5.s64 = 60;
	// lwz r4,26564(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26564);
	// bl 0x821778d8
	ctx.lr = 0x82156D20;
	sub_821778D8(ctx, base);
	// lwz r11,26564(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26564);
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82156d6c
	if (ctx.cr6.eq) goto loc_82156D6C;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x82156D38;
	sub_82177868(ctx, base);
	// lwz r11,26564(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26564);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lwz r11,26564(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26564);
	// lwz r4,52(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// stw r4,26796(r9)
	PPC_STORE_U32(ctx.r9.u32 + 26796, ctx.r4.u32);
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r5,r8,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x821778d8
	ctx.lr = 0x82156D6C;
	sub_821778D8(ctx, base);
loc_82156D6C:
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

PPC_WEAK_FUNC(sub_82156D00) {
	__imp__sub_82156D00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82156D80) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82156D80) {
	__imp__sub_82156D80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82156D88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82156D90;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// mulli r5,r4,60
	ctx.r5.s64 = ctx.r4.s64 * 60;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r4,26564(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26564);
	// bl 0x821778d8
	ctx.lr = 0x82156DA8;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// lwz r29,26564(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26564);
	// ble cr6,0x82156e20
	if (!ctx.cr6.gt) goto loc_82156E20;
	// lis r28,-32142
	ctx.r28.s64 = -2106458112;
loc_82156DB8:
	// stw r29,26564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 26564, ctx.r29.u32);
	// li r5,60
	ctx.r5.s64 = 60;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821778d8
	ctx.lr = 0x82156DCC;
	sub_821778D8(ctx, base);
	// lwz r11,26564(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26564);
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82156e14
	if (ctx.cr6.eq) goto loc_82156E14;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x82156DE4;
	sub_82177868(ctx, base);
	// lwz r11,26564(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26564);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lwz r11,26564(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26564);
	// lwz r4,52(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// stw r4,26796(r28)
	PPC_STORE_U32(ctx.r28.u32 + 26796, ctx.r4.u32);
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x821778d8
	ctx.lr = 0x82156E14;
	sub_821778D8(ctx, base);
loc_82156E14:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,60
	ctx.r29.s64 = ctx.r29.s64 + 60;
	// bne 0x82156db8
	if (!ctx.cr0.eq) goto loc_82156DB8;
loc_82156E20:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82156D88) {
	__imp__sub_82156D88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82156E28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82156E30;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x82156eb4
	if (!ctx.cr6.gt) goto loc_82156EB4;
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// lwz r4,26564(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26564);
loc_82156E4C:
	// li r5,60
	ctx.r5.s64 = 60;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x82156E58;
	sub_821778D8(ctx, base);
	// lwz r11,26564(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26564);
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82156ea0
	if (ctx.cr6.eq) goto loc_82156EA0;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x82156E70;
	sub_82177868(ctx, base);
	// lwz r11,26564(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26564);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lwz r11,26564(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26564);
	// lwz r4,52(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// stw r4,26796(r30)
	PPC_STORE_U32(ctx.r30.u32 + 26796, ctx.r4.u32);
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x821778d8
	ctx.lr = 0x82156EA0;
	sub_821778D8(ctx, base);
loc_82156EA0:
	// bl 0x82177858
	ctx.lr = 0x82156EA4;
	sub_82177858(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,26564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 26564, ctx.r3.u32);
	// bne 0x82156e4c
	if (!ctx.cr0.eq) goto loc_82156E4C;
loc_82156EB4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82156E28) {
	__imp__sub_82156E28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82156EBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82156EBC) {
	__imp__sub_82156EBC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82156EC0) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82156EC0) {
	__imp__sub_82156EC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82156EC8) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82156EC8) {
	__imp__sub_82156EC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82156ED0) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82156ED0) {
	__imp__sub_82156ED0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82156ED8) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82156ED8) {
	__imp__sub_82156ED8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82156EE0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82156EE0) {
	__imp__sub_82156EE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82156EE8) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82156EE8) {
	__imp__sub_82156EE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82156EF0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82156EF0) {
	__imp__sub_82156EF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82156EF8) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82156EF8) {
	__imp__sub_82156EF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82156F00) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82156F00) {
	__imp__sub_82156F00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82156F08) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82156F08) {
	__imp__sub_82156F08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82156F10) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82156F10) {
	__imp__sub_82156F10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82156F18) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82156F18) {
	__imp__sub_82156F18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82156F20) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82156F20) {
	__imp__sub_82156F20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82156F28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r5,12
	ctx.r5.s64 = 12;
	// lwz r4,26220(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26220);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82156F28) {
	__imp__sub_82156F28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82156F38) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82156F38) {
	__imp__sub_82156F38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82156F40) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// add r9,r4,r11
	ctx.r9.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,26220(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26220);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82156F40) {
	__imp__sub_82156F40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82156F58) {
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
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x82156fa0
	if (!ctx.cr6.gt) goto loc_82156FA0;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,26220(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26220);
loc_82156F80:
	// li r5,12
	ctx.r5.s64 = 12;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x82156F8C;
	sub_821778D8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x82156F90;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,26220(r30)
	PPC_STORE_U32(ctx.r30.u32 + 26220, ctx.r3.u32);
	// bne 0x82156f80
	if (!ctx.cr0.eq) goto loc_82156F80;
loc_82156FA0:
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

PPC_WEAK_FUNC(sub_82156F58) {
	__imp__sub_82156F58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82156FB8) {
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
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// li r5,12
	ctx.r5.s64 = 12;
	// lwz r4,25408(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25408);
	// bl 0x821778d8
	ctx.lr = 0x82156FD8;
	sub_821778D8(ctx, base);
	// lwz r11,25408(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25408);
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,28244(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28244, ctx.r11.u32);
	// bl 0x82147188
	ctx.lr = 0x82156FEC;
	sub_82147188(ctx, base);
	// lwz r11,25408(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25408);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82157030
	if (ctx.cr6.eq) goto loc_82157030;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82177868
	ctx.lr = 0x82157004;
	sub_82177868(ctx, base);
	// lwz r11,25408(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25408);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r11,25408(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25408);
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r4,25460(r9)
	PPC_STORE_U32(ctx.r9.u32 + 25460, ctx.r4.u32);
	// lhz r8,6(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6);
	// rotlwi r5,r8,1
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// bl 0x821778d8
	ctx.lr = 0x82157030;
	sub_821778D8(ctx, base);
loc_82157030:
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

PPC_WEAK_FUNC(sub_82156FB8) {
	__imp__sub_82156FB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82157044) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82157044) {
	__imp__sub_82157044(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82157048) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82157048) {
	__imp__sub_82157048(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82157050) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x82157058;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,25408(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25408);
	// bl 0x821778d8
	ctx.lr = 0x82157078;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// lwz r29,25408(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25408);
	// ble cr6,0x82157148
	if (!ctx.cr6.gt) goto loc_82157148;
	// mr r26,r30
	ctx.r26.u64 = ctx.r30.u64;
	// lis r27,-32142
	ctx.r27.s64 = -2106458112;
	// lis r28,-32142
	ctx.r28.s64 = -2106458112;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
loc_82157094:
	// stw r29,25408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25408, ctx.r29.u32);
	// li r5,12
	ctx.r5.s64 = 12;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821778d8
	ctx.lr = 0x821570A8;
	sub_821778D8(ctx, base);
	// lwz r4,25408(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25408);
	// li r5,4
	ctx.r5.s64 = 4;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,28244(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28244, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x821570BC;
	sub_821778D8(ctx, base);
	// lwz r3,28244(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28244);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821570fc
	if (ctx.cr6.eq) goto loc_821570FC;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x821570f8
	if (!ctx.cr6.eq) goto loc_821570F8;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82177868
	ctx.lr = 0x821570DC;
	sub_82177868(ctx, base);
	// lwz r11,28244(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28244);
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// lwz r3,28244(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28244);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,25088(r27)
	PPC_STORE_U32(ctx.r27.u32 + 25088, ctx.r11.u32);
	// bl 0x821779a0
	ctx.lr = 0x821570F4;
	sub_821779A0(ctx, base);
	// b 0x821570fc
	goto loc_821570FC;
loc_821570F8:
	// bl 0x82177978
	ctx.lr = 0x821570FC;
	sub_82177978(ctx, base);
loc_821570FC:
	// lwz r11,25408(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25408);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8215713c
	if (ctx.cr6.eq) goto loc_8215713C;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82177868
	ctx.lr = 0x82157114;
	sub_82177868(ctx, base);
	// lwz r11,25408(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25408);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r11,25408(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25408);
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r4,25460(r28)
	PPC_STORE_U32(ctx.r28.u32 + 25460, ctx.r4.u32);
	// lhz r9,6(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6);
	// rotlwi r5,r9,1
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// bl 0x821778d8
	ctx.lr = 0x8215713C;
	sub_821778D8(ctx, base);
loc_8215713C:
	// addic. r26,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// addi r29,r29,12
	ctx.r29.s64 = ctx.r29.s64 + 12;
	// bne 0x82157094
	if (!ctx.cr0.eq) goto loc_82157094;
loc_82157148:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82157050) {
	__imp__sub_82157050(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82157150) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x82157158;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x82157230
	if (!ctx.cr6.gt) goto loc_82157230;
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lis r28,-32142
	ctx.r28.s64 = -2106458112;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// lwz r4,25408(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25408);
loc_8215717C:
	// li r5,12
	ctx.r5.s64 = 12;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x82157188;
	sub_821778D8(ctx, base);
	// lwz r4,25408(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25408);
	// li r5,4
	ctx.r5.s64 = 4;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,28244(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28244, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x8215719C;
	sub_821778D8(ctx, base);
	// lwz r3,28244(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28244);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821571dc
	if (ctx.cr6.eq) goto loc_821571DC;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x821571d8
	if (!ctx.cr6.eq) goto loc_821571D8;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82177868
	ctx.lr = 0x821571BC;
	sub_82177868(ctx, base);
	// lwz r11,28244(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28244);
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// lwz r3,28244(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28244);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,25088(r28)
	PPC_STORE_U32(ctx.r28.u32 + 25088, ctx.r11.u32);
	// bl 0x821779a0
	ctx.lr = 0x821571D4;
	sub_821779A0(ctx, base);
	// b 0x821571dc
	goto loc_821571DC;
loc_821571D8:
	// bl 0x82177978
	ctx.lr = 0x821571DC;
	sub_82177978(ctx, base);
loc_821571DC:
	// lwz r11,25408(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25408);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8215721c
	if (ctx.cr6.eq) goto loc_8215721C;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82177868
	ctx.lr = 0x821571F4;
	sub_82177868(ctx, base);
	// lwz r11,25408(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25408);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r11,25408(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25408);
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r4,25460(r29)
	PPC_STORE_U32(ctx.r29.u32 + 25460, ctx.r4.u32);
	// lhz r9,6(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6);
	// rotlwi r5,r9,1
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// bl 0x821778d8
	ctx.lr = 0x8215721C;
	sub_821778D8(ctx, base);
loc_8215721C:
	// bl 0x82177858
	ctx.lr = 0x82157220;
	sub_82177858(ctx, base);
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,25408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25408, ctx.r3.u32);
	// bne 0x8215717c
	if (!ctx.cr0.eq) goto loc_8215717C;
loc_82157230:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82157150) {
	__imp__sub_82157150(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82157238) {
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
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// li r5,128
	ctx.r5.s64 = 128;
	// lwz r4,28140(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28140);
	// bl 0x821778d8
	ctx.lr = 0x82157258;
	sub_821778D8(ctx, base);
	// lwz r11,28140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28140);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821572a4
	if (ctx.cr6.eq) goto loc_821572A4;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x82157270;
	sub_82177868(ctx, base);
	// lwz r11,28140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28140);
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,28140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28140);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r4,26220(r10)
	PPC_STORE_U32(ctx.r10.u32 + 26220, ctx.r4.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x821778d8
	ctx.lr = 0x821572A0;
	sub_821778D8(ctx, base);
	// lwz r11,28140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28140);
loc_821572A4:
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821572e0
	if (ctx.cr6.eq) goto loc_821572E0;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x821572B8;
	sub_82177868(ctx, base);
	// lwz r11,28140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28140);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// lwz r11,28140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28140);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// stw r10,25408(r9)
	PPC_STORE_U32(ctx.r9.u32 + 25408, ctx.r10.u32);
	// lwz r4,12(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x82157050
	ctx.lr = 0x821572E0;
	sub_82157050(ctx, base);
loc_821572E0:
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

PPC_WEAK_FUNC(sub_82157238) {
	__imp__sub_82157238(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821572F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821572F4) {
	__imp__sub_821572F4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821572F8) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821572F8) {
	__imp__sub_821572F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82157300) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82157308;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// rlwinm r5,r4,7,0,24
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 7) & 0xFFFFFF80;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,28140(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28140);
	// bl 0x821778d8
	ctx.lr = 0x82157320;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lwz r30,28140(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28140);
	// ble cr6,0x82157344
	if (!ctx.cr6.gt) goto loc_82157344;
loc_8215732C:
	// stw r30,28140(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28140, ctx.r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82157238
	ctx.lr = 0x82157338;
	sub_82157238(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,128
	ctx.r30.s64 = ctx.r30.s64 + 128;
	// bne 0x8215732c
	if (!ctx.cr0.eq) goto loc_8215732C;
loc_82157344:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82157300) {
	__imp__sub_82157300(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215734C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8215734C) {
	__imp__sub_8215734C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82157350) {
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
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x8215738c
	if (!ctx.cr6.gt) goto loc_8215738C;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
loc_82157374:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82157238
	ctx.lr = 0x8215737C;
	sub_82157238(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x82157380;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stw r3,28140(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28140, ctx.r3.u32);
	// bne 0x82157374
	if (!ctx.cr0.eq) goto loc_82157374;
loc_8215738C:
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

PPC_WEAK_FUNC(sub_82157350) {
	__imp__sub_82157350(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821573A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821573A4) {
	__imp__sub_821573A4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821573A8) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821573A8) {
	__imp__sub_821573A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821573B0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821573B0) {
	__imp__sub_821573B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821573B8) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821573B8) {
	__imp__sub_821573B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821573C0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821573C0) {
	__imp__sub_821573C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821573C8) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821573C8) {
	__imp__sub_821573C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821573D0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821573D0) {
	__imp__sub_821573D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821573D8) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821573D8) {
	__imp__sub_821573D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821573E0) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821573E0) {
	__imp__sub_821573E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821573E8) {
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
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// li r5,8
	ctx.r5.s64 = 8;
	// lwz r4,28228(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28228);
	// bl 0x821778d8
	ctx.lr = 0x82157408;
	sub_821778D8(ctx, base);
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177758
	ctx.lr = 0x82157410;
	sub_82177758(ctx, base);
	// lwz r11,28228(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28228);
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,28244(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28244, ctx.r11.u32);
	// bl 0x82147188
	ctx.lr = 0x82157424;
	sub_82147188(ctx, base);
	// lwz r11,28228(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28228);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82157460
	if (ctx.cr6.eq) goto loc_82157460;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x8215743C;
	sub_82177868(ctx, base);
	// lwz r11,28228(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28228);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,28228(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28228);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,28140(r9)
	PPC_STORE_U32(ctx.r9.u32 + 28140, ctx.r11.u32);
	// bl 0x82157238
	ctx.lr = 0x82157460;
	sub_82157238(ctx, base);
loc_82157460:
	// bl 0x821777e0
	ctx.lr = 0x82157464;
	sub_821777E0(ctx, base);
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

PPC_WEAK_FUNC(sub_821573E8) {
	__imp__sub_821573E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82157478) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82157478) {
	__imp__sub_82157478(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82157480) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x82157488;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// rlwinm r5,r4,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r4,28228(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28228);
	// bl 0x821778d8
	ctx.lr = 0x821574A0;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// lwz r29,28228(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28228);
	// ble cr6,0x82157574
	if (!ctx.cr6.gt) goto loc_82157574;
	// mr r26,r30
	ctx.r26.u64 = ctx.r30.u64;
	// lis r27,-32142
	ctx.r27.s64 = -2106458112;
	// lis r28,-32142
	ctx.r28.s64 = -2106458112;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
loc_821574BC:
	// stw r29,28228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28228, ctx.r29.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821778d8
	ctx.lr = 0x821574D0;
	sub_821778D8(ctx, base);
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177758
	ctx.lr = 0x821574D8;
	sub_82177758(ctx, base);
	// lwz r4,28228(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28228);
	// li r5,4
	ctx.r5.s64 = 4;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,28244(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28244, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x821574EC;
	sub_821778D8(ctx, base);
	// lwz r3,28244(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28244);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8215752c
	if (ctx.cr6.eq) goto loc_8215752C;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82157528
	if (!ctx.cr6.eq) goto loc_82157528;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82177868
	ctx.lr = 0x8215750C;
	sub_82177868(ctx, base);
	// lwz r11,28244(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28244);
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// lwz r3,28244(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28244);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,25088(r27)
	PPC_STORE_U32(ctx.r27.u32 + 25088, ctx.r11.u32);
	// bl 0x821779a0
	ctx.lr = 0x82157524;
	sub_821779A0(ctx, base);
	// b 0x8215752c
	goto loc_8215752C;
loc_82157528:
	// bl 0x82177978
	ctx.lr = 0x8215752C;
	sub_82177978(ctx, base);
loc_8215752C:
	// lwz r11,28228(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28228);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82157564
	if (ctx.cr6.eq) goto loc_82157564;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x82157544;
	sub_82177868(ctx, base);
	// lwz r11,28228(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28228);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,28228(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28228);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,28140(r28)
	PPC_STORE_U32(ctx.r28.u32 + 28140, ctx.r11.u32);
	// bl 0x82157238
	ctx.lr = 0x82157564;
	sub_82157238(ctx, base);
loc_82157564:
	// bl 0x821777e0
	ctx.lr = 0x82157568;
	sub_821777E0(ctx, base);
	// addic. r26,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// bne 0x821574bc
	if (!ctx.cr0.eq) goto loc_821574BC;
loc_82157574:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82157480) {
	__imp__sub_82157480(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215757C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8215757C) {
	__imp__sub_8215757C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82157580) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x82157588;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x82157664
	if (!ctx.cr6.gt) goto loc_82157664;
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lis r28,-32142
	ctx.r28.s64 = -2106458112;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// lwz r4,28228(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28228);
loc_821575AC:
	// li r5,8
	ctx.r5.s64 = 8;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x821575B8;
	sub_821778D8(ctx, base);
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177758
	ctx.lr = 0x821575C0;
	sub_82177758(ctx, base);
	// lwz r4,28228(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28228);
	// li r5,4
	ctx.r5.s64 = 4;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,28244(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28244, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x821575D4;
	sub_821778D8(ctx, base);
	// lwz r3,28244(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28244);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82157614
	if (ctx.cr6.eq) goto loc_82157614;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82157610
	if (!ctx.cr6.eq) goto loc_82157610;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82177868
	ctx.lr = 0x821575F4;
	sub_82177868(ctx, base);
	// lwz r11,28244(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28244);
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// lwz r3,28244(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28244);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,25088(r28)
	PPC_STORE_U32(ctx.r28.u32 + 25088, ctx.r11.u32);
	// bl 0x821779a0
	ctx.lr = 0x8215760C;
	sub_821779A0(ctx, base);
	// b 0x82157614
	goto loc_82157614;
loc_82157610:
	// bl 0x82177978
	ctx.lr = 0x82157614;
	sub_82177978(ctx, base);
loc_82157614:
	// lwz r11,28228(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28228);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8215764c
	if (ctx.cr6.eq) goto loc_8215764C;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x8215762C;
	sub_82177868(ctx, base);
	// lwz r11,28228(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28228);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,28228(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28228);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,28140(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28140, ctx.r11.u32);
	// bl 0x82157238
	ctx.lr = 0x8215764C;
	sub_82157238(ctx, base);
loc_8215764C:
	// bl 0x821777e0
	ctx.lr = 0x82157650;
	sub_821777E0(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x82157654;
	sub_82177858(ctx, base);
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,28228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28228, ctx.r3.u32);
	// bne 0x821575ac
	if (!ctx.cr0.eq) goto loc_821575AC;
loc_82157664:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82157580) {
	__imp__sub_82157580(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215766C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8215766C) {
	__imp__sub_8215766C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82157670) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82157670) {
	__imp__sub_82157670(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82157678) {
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
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r4,27896(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27896);
	// bl 0x821778d8
	ctx.lr = 0x8215769C;
	sub_821778D8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82177758
	ctx.lr = 0x821576A4;
	sub_82177758(ctx, base);
	// lwz r3,27896(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27896);
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82157728
	if (ctx.cr6.eq) goto loc_82157728;
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// beq cr6,0x821576cc
	if (ctx.cr6.eq) goto loc_821576CC;
	// cmpwi cr6,r30,-2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -2, ctx.xer);
	// beq cr6,0x821576cc
	if (ctx.cr6.eq) goto loc_821576CC;
	// bl 0x82177950
	ctx.lr = 0x821576C8;
	sub_82177950(ctx, base);
	// b 0x82157728
	goto loc_82157728;
loc_821576CC:
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x821576D4;
	sub_82177868(ctx, base);
	// lwz r11,27896(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27896);
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// cmpwi cr6,r30,-2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -2, ctx.xer);
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// lwz r11,27896(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27896);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,28228(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28228, ctx.r11.u32);
	// bne cr6,0x82157700
	if (!ctx.cr6.eq) goto loc_82157700;
	// bl 0x82177898
	ctx.lr = 0x821576F8;
	sub_82177898(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x82157704
	goto loc_82157704;
loc_82157700:
	// li r30,0
	ctx.r30.s64 = 0;
loc_82157704:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821573e8
	ctx.lr = 0x8215770C;
	sub_821573E8(ctx, base);
	// lwz r3,27896(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27896);
	// bl 0x821758e0
	ctx.lr = 0x82157714;
	sub_821758E0(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82157728
	if (ctx.cr6.eq) goto loc_82157728;
	// lwz r11,27896(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27896);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_82157728:
	// bl 0x821777e0
	ctx.lr = 0x8215772C;
	sub_821777E0(ctx, base);
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

PPC_WEAK_FUNC(sub_82157678) {
	__imp__sub_82157678(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82157744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82157744) {
	__imp__sub_82157744(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82157748) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82157748) {
	__imp__sub_82157748(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82157750) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82157758;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// rlwinm r5,r4,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,27896(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 27896);
	// bl 0x821778d8
	ctx.lr = 0x82157770;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lwz r30,27896(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 27896);
	// ble cr6,0x82157794
	if (!ctx.cr6.gt) goto loc_82157794;
loc_8215777C:
	// stw r30,27896(r29)
	PPC_STORE_U32(ctx.r29.u32 + 27896, ctx.r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82157678
	ctx.lr = 0x82157788;
	sub_82157678(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x8215777c
	if (!ctx.cr0.eq) goto loc_8215777C;
loc_82157794:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82157750) {
	__imp__sub_82157750(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215779C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8215779C) {
	__imp__sub_8215779C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821577A0) {
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
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x821577dc
	if (!ctx.cr6.gt) goto loc_821577DC;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
loc_821577C4:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82157678
	ctx.lr = 0x821577CC;
	sub_82157678(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x821577D0;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stw r3,27896(r30)
	PPC_STORE_U32(ctx.r30.u32 + 27896, ctx.r3.u32);
	// bne 0x821577c4
	if (!ctx.cr0.eq) goto loc_821577C4;
loc_821577DC:
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

PPC_WEAK_FUNC(sub_821577A0) {
	__imp__sub_821577A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821577F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821577F4) {
	__imp__sub_821577F4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821577F8) {
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
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// lwz r11,26012(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26012);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82157838
	if (ctx.cr6.eq) goto loc_82157838;
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r10,28448(r9)
	PPC_STORE_U32(ctx.r9.u32 + 28448, ctx.r10.u32);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82156b80
	ctx.lr = 0x8215782C;
	sub_82156B80(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq cr6,0x8215783c
	if (ctx.cr6.eq) goto loc_8215783C;
loc_82157838:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8215783C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821577F8) {
	__imp__sub_821577F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215784C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8215784C) {
	__imp__sub_8215784C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82157850) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x82157858;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r28,-32142
	ctx.r28.s64 = -2106458112;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lwz r31,26012(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 26012);
	// ble cr6,0x821578b0
	if (!ctx.cr6.gt) goto loc_821578B0;
	// lis r27,-32142
	ctx.r27.s64 = -2106458112;
loc_82157878:
	// stw r31,26012(r28)
	PPC_STORE_U32(ctx.r28.u32 + 26012, ctx.r31.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821578a0
	if (ctx.cr6.eq) goto loc_821578A0;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r11,28448(r27)
	PPC_STORE_U32(ctx.r27.u32 + 28448, ctx.r11.u32);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82156b80
	ctx.lr = 0x82157898;
	sub_82156B80(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821578bc
	if (ctx.cr6.eq) goto loc_821578BC;
loc_821578A0:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,40
	ctx.r31.s64 = ctx.r31.s64 + 40;
	// cmpw cr6,r30,r29
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r29.s32, ctx.xer);
	// blt cr6,0x82157878
	if (ctx.cr6.lt) goto loc_82157878;
loc_821578B0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_821578BC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82157850) {
	__imp__sub_82157850(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821578C8) {
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
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// lwz r11,27968(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27968);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,26012(r10)
	PPC_STORE_U32(ctx.r10.u32 + 26012, ctx.r11.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82157914
	if (ctx.cr6.eq) goto loc_82157914;
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// stw r10,28448(r9)
	PPC_STORE_U32(ctx.r9.u32 + 28448, ctx.r10.u32);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82156b80
	ctx.lr = 0x82157908;
	sub_82156B80(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq cr6,0x82157918
	if (ctx.cr6.eq) goto loc_82157918;
loc_82157914:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82157918:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821578C8) {
	__imp__sub_821578C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82157928) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x82157930;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lwz r31,27968(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 27968);
	// ble cr6,0x82157994
	if (!ctx.cr6.gt) goto loc_82157994;
	// lis r26,-32142
	ctx.r26.s64 = -2106458112;
	// lis r27,-32142
	ctx.r27.s64 = -2106458112;
loc_82157954:
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// stw r31,27968(r29)
	PPC_STORE_U32(ctx.r29.u32 + 27968, ctx.r31.u32);
	// stw r11,26012(r27)
	PPC_STORE_U32(ctx.r27.u32 + 26012, ctx.r11.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82157984
	if (ctx.cr6.eq) goto loc_82157984;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r10,28448(r26)
	PPC_STORE_U32(ctx.r26.u32 + 28448, ctx.r10.u32);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82156b80
	ctx.lr = 0x8215797C;
	sub_82156B80(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821579a0
	if (ctx.cr6.eq) goto loc_821579A0;
loc_82157984:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,56
	ctx.r31.s64 = ctx.r31.s64 + 56;
	// cmpw cr6,r30,r28
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r28.s32, ctx.xer);
	// blt cr6,0x82157954
	if (ctx.cr6.lt) goto loc_82157954;
loc_82157994:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_821579A0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82157928) {
	__imp__sub_82157928(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821579AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821579AC) {
	__imp__sub_821579AC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821579B0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821579B0) {
	__imp__sub_821579B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821579B8) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821579B8) {
	__imp__sub_821579B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821579C0) {
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
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// lwz r11,27752(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27752);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82157a38
	if (ctx.cr6.eq) goto loc_82157A38;
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,27968(r31)
	PPC_STORE_U32(ctx.r31.u32 + 27968, ctx.r3.u32);
	// bl 0x821758d0
	ctx.lr = 0x821579F8;
	sub_821758D0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82157a38
	if (!ctx.cr6.eq) goto loc_82157A38;
	// bl 0x821578c8
	ctx.lr = 0x82157A04;
	sub_821578C8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82157a20
	if (!ctx.cr6.eq) goto loc_82157A20;
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
loc_82157A20:
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,27968(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27968);
	// bl 0x821758d0
	ctx.lr = 0x82157A2C;
	sub_821758D0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq cr6,0x82157a3c
	if (ctx.cr6.eq) goto loc_82157A3C;
loc_82157A38:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82157A3C:
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

PPC_WEAK_FUNC(sub_821579C0) {
	__imp__sub_821579C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82157A50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82157A58;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r28,-32142
	ctx.r28.s64 = -2106458112;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lwz r31,27752(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 27752);
	// ble cr6,0x82157a94
	if (!ctx.cr6.gt) goto loc_82157A94;
loc_82157A74:
	// stw r31,27752(r28)
	PPC_STORE_U32(ctx.r28.u32 + 27752, ctx.r31.u32);
	// bl 0x821579c0
	ctx.lr = 0x82157A7C;
	sub_821579C0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82157aa0
	if (ctx.cr6.eq) goto loc_82157AA0;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r30,r29
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r29.s32, ctx.xer);
	// blt cr6,0x82157a74
	if (ctx.cr6.lt) goto loc_82157A74;
loc_82157A94:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_82157AA0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82157A50) {
	__imp__sub_82157A50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82157AAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82157AAC) {
	__imp__sub_82157AAC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82157AB0) {
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
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// lwz r11,26076(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26076);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82157b08
	if (ctx.cr6.eq) goto loc_82157B08;
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,25272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 25272, ctx.r3.u32);
	// bl 0x82175960
	ctx.lr = 0x82157AE8;
	sub_82175960(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82157b08
	if (!ctx.cr6.eq) goto loc_82157B08;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,25272(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25272);
	// bl 0x82175960
	ctx.lr = 0x82157AFC;
	sub_82175960(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq cr6,0x82157b0c
	if (ctx.cr6.eq) goto loc_82157B0C;
loc_82157B08:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82157B0C:
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

PPC_WEAK_FUNC(sub_82157AB0) {
	__imp__sub_82157AB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82157B20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x82157B28;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r27,-32142
	ctx.r27.s64 = -2106458112;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lwz r31,26076(r27)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + 26076);
	// ble cr6,0x82157b94
	if (!ctx.cr6.gt) goto loc_82157B94;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
loc_82157B48:
	// stw r31,26076(r27)
	PPC_STORE_U32(ctx.r27.u32 + 26076, ctx.r31.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82157b84
	if (ctx.cr6.eq) goto loc_82157B84;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,25272(r29)
	PPC_STORE_U32(ctx.r29.u32 + 25272, ctx.r3.u32);
	// bl 0x82175960
	ctx.lr = 0x82157B68;
	sub_82175960(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82157b84
	if (!ctx.cr6.eq) goto loc_82157B84;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,25272(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 25272);
	// bl 0x82175960
	ctx.lr = 0x82157B7C;
	sub_82175960(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82157ba0
	if (ctx.cr6.eq) goto loc_82157BA0;
loc_82157B84:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r30,r28
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r28.s32, ctx.xer);
	// blt cr6,0x82157b48
	if (ctx.cr6.lt) goto loc_82157B48;
loc_82157B94:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_82157BA0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82157B20) {
	__imp__sub_82157B20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82157BAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82157BAC) {
	__imp__sub_82157BAC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82157BB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r5,8
	ctx.r5.s64 = 8;
	// lwz r4,25212(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25212);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82157BB0) {
	__imp__sub_82157BB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82157BC0) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82157BC0) {
	__imp__sub_82157BC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82157BC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// rlwinm r5,r4,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r4,25212(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25212);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82157BC8) {
	__imp__sub_82157BC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82157BD8) {
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
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x82157c20
	if (!ctx.cr6.gt) goto loc_82157C20;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,25212(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25212);
loc_82157C00:
	// li r5,8
	ctx.r5.s64 = 8;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x82157C0C;
	sub_821778D8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x82157C10;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,25212(r30)
	PPC_STORE_U32(ctx.r30.u32 + 25212, ctx.r3.u32);
	// bne 0x82157c00
	if (!ctx.cr0.eq) goto loc_82157C00;
loc_82157C20:
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

PPC_WEAK_FUNC(sub_82157BD8) {
	__imp__sub_82157BD8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82157C38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r5,8
	ctx.r5.s64 = 8;
	// lwz r4,26996(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26996);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82157C38) {
	__imp__sub_82157C38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82157C48) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82157C48) {
	__imp__sub_82157C48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82157C50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// rlwinm r5,r4,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r4,26996(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26996);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82157C50) {
	__imp__sub_82157C50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82157C60) {
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
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x82157ca8
	if (!ctx.cr6.gt) goto loc_82157CA8;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,26996(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26996);
loc_82157C88:
	// li r5,8
	ctx.r5.s64 = 8;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x82157C94;
	sub_821778D8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x82157C98;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,26996(r30)
	PPC_STORE_U32(ctx.r30.u32 + 26996, ctx.r3.u32);
	// bne 0x82157c88
	if (!ctx.cr0.eq) goto loc_82157C88;
loc_82157CA8:
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

PPC_WEAK_FUNC(sub_82157C60) {
	__imp__sub_82157C60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82157CC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r4,28192(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28192);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82157CC0) {
	__imp__sub_82157CC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82157CD0) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82157CD0) {
	__imp__sub_82157CD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82157CD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// rlwinm r5,r4,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,28192(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28192);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82157CD8) {
	__imp__sub_82157CD8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82157CE8) {
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
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x82157d30
	if (!ctx.cr6.gt) goto loc_82157D30;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,28192(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28192);
loc_82157D10:
	// li r5,4
	ctx.r5.s64 = 4;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x82157D1C;
	sub_821778D8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x82157D20;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,28192(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28192, ctx.r3.u32);
	// bne 0x82157d10
	if (!ctx.cr0.eq) goto loc_82157D10;
loc_82157D30:
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

PPC_WEAK_FUNC(sub_82157CE8) {
	__imp__sub_82157CE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82157D48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,25720(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25720);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82157D48) {
	__imp__sub_82157D48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82157D58) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82157D58) {
	__imp__sub_82157D58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82157D60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r4,25720(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25720);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82157D60) {
	__imp__sub_82157D60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82157D70) {
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
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x82157db8
	if (!ctx.cr6.gt) goto loc_82157DB8;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,25720(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25720);
loc_82157D98:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x82157DA4;
	sub_821778D8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x82157DA8;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,25720(r30)
	PPC_STORE_U32(ctx.r30.u32 + 25720, ctx.r3.u32);
	// bne 0x82157d98
	if (!ctx.cr0.eq) goto loc_82157D98;
loc_82157DB8:
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

PPC_WEAK_FUNC(sub_82157D70) {
	__imp__sub_82157D70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82157DD0) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82157DD0) {
	__imp__sub_82157DD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82157DD8) {
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
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// lwz r11,26240(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26240);
	// stw r11,28244(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28244, ctx.r11.u32);
	// bl 0x82147188
	ctx.lr = 0x82157DFC;
	sub_82147188(ctx, base);
	// lwz r3,26240(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26240);
	// bl 0x82177670
	ctx.lr = 0x82157E04;
	sub_82177670(ctx, base);
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

PPC_WEAK_FUNC(sub_82157DD8) {
	__imp__sub_82157DD8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82157E18) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82157E18) {
	__imp__sub_82157E18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82157E20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x82157E28;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// rlwinm r5,r4,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r4,26240(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26240);
	// bl 0x821778d8
	ctx.lr = 0x82157E40;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// lwz r31,26240(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26240);
	// ble cr6,0x82157ec4
	if (!ctx.cr6.gt) goto loc_82157EC4;
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// lis r27,-32142
	ctx.r27.s64 = -2106458112;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
loc_82157E58:
	// stw r31,26240(r29)
	PPC_STORE_U32(ctx.r29.u32 + 26240, ctx.r31.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// stw r31,28244(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28244, ctx.r31.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821778d8
	ctx.lr = 0x82157E70;
	sub_821778D8(ctx, base);
	// lwz r3,28244(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28244);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82157eb0
	if (ctx.cr6.eq) goto loc_82157EB0;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82157eac
	if (!ctx.cr6.eq) goto loc_82157EAC;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82177868
	ctx.lr = 0x82157E90;
	sub_82177868(ctx, base);
	// lwz r11,28244(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28244);
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// lwz r3,28244(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28244);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,25088(r27)
	PPC_STORE_U32(ctx.r27.u32 + 25088, ctx.r11.u32);
	// bl 0x821779a0
	ctx.lr = 0x82157EA8;
	sub_821779A0(ctx, base);
	// b 0x82157eb0
	goto loc_82157EB0;
loc_82157EAC:
	// bl 0x82177978
	ctx.lr = 0x82157EB0;
	sub_82177978(ctx, base);
loc_82157EB0:
	// lwz r3,26240(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26240);
	// bl 0x82177670
	ctx.lr = 0x82157EB8;
	sub_82177670(ctx, base);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x82157e58
	if (!ctx.cr0.eq) goto loc_82157E58;
loc_82157EC4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82157E20) {
	__imp__sub_82157E20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82157ECC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82157ECC) {
	__imp__sub_82157ECC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82157ED0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82157ED8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x82157f64
	if (!ctx.cr6.gt) goto loc_82157F64;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lis r28,-32142
	ctx.r28.s64 = -2106458112;
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// lwz r4,26240(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26240);
loc_82157EF8:
	// stw r4,28244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28244, ctx.r4.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x82157F08;
	sub_821778D8(ctx, base);
	// lwz r3,28244(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28244);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82157f48
	if (ctx.cr6.eq) goto loc_82157F48;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82157f44
	if (!ctx.cr6.eq) goto loc_82157F44;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82177868
	ctx.lr = 0x82157F28;
	sub_82177868(ctx, base);
	// lwz r11,28244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28244);
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// lwz r3,28244(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28244);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,25088(r28)
	PPC_STORE_U32(ctx.r28.u32 + 25088, ctx.r11.u32);
	// bl 0x821779a0
	ctx.lr = 0x82157F40;
	sub_821779A0(ctx, base);
	// b 0x82157f48
	goto loc_82157F48;
loc_82157F44:
	// bl 0x82177978
	ctx.lr = 0x82157F48;
	sub_82177978(ctx, base);
loc_82157F48:
	// lwz r3,26240(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26240);
	// bl 0x82177670
	ctx.lr = 0x82157F50;
	sub_82177670(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x82157F54;
	sub_82177858(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,26240(r30)
	PPC_STORE_U32(ctx.r30.u32 + 26240, ctx.r3.u32);
	// bne 0x82157ef8
	if (!ctx.cr0.eq) goto loc_82157EF8;
loc_82157F64:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82157ED0) {
	__imp__sub_82157ED0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82157F6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82157F6C) {
	__imp__sub_82157F6C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82157F70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82157F78;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// li r5,8
	ctx.r5.s64 = 8;
	// lwz r4,25636(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25636);
	// bl 0x821778d8
	ctx.lr = 0x82157F8C;
	sub_821778D8(ctx, base);
	// lwz r4,25636(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25636);
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,25372(r29)
	PPC_STORE_U32(ctx.r29.u32 + 25372, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x82157FA4;
	sub_821778D8(ctx, base);
	// li r31,2
	ctx.r31.s64 = 2;
	// lwz r30,25372(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 25372);
loc_82157FAC:
	// stw r30,25372(r29)
	PPC_STORE_U32(ctx.r29.u32 + 25372, ctx.r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82152400
	ctx.lr = 0x82157FB8;
	sub_82152400(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x82157fac
	if (!ctx.cr0.eq) goto loc_82157FAC;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82157F70) {
	__imp__sub_82157F70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82157FCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82157FCC) {
	__imp__sub_82157FCC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82157FD0) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82157FD0) {
	__imp__sub_82157FD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82157FD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x82157FE0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r27,-32142
	ctx.r27.s64 = -2106458112;
	// rlwinm r5,r4,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,25636(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 25636);
	// bl 0x821778d8
	ctx.lr = 0x82157FF8;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lwz r28,25636(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 25636);
	// ble cr6,0x82158060
	if (!ctx.cr6.gt) goto loc_82158060;
	// mr r26,r31
	ctx.r26.u64 = ctx.r31.u64;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
loc_8215800C:
	// stw r28,25636(r27)
	PPC_STORE_U32(ctx.r27.u32 + 25636, ctx.r28.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821778d8
	ctx.lr = 0x82158020;
	sub_821778D8(ctx, base);
	// lwz r4,25636(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 25636);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,25372(r29)
	PPC_STORE_U32(ctx.r29.u32 + 25372, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x82158034;
	sub_821778D8(ctx, base);
	// li r31,2
	ctx.r31.s64 = 2;
	// lwz r30,25372(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 25372);
loc_8215803C:
	// stw r30,25372(r29)
	PPC_STORE_U32(ctx.r29.u32 + 25372, ctx.r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82152400
	ctx.lr = 0x82158048;
	sub_82152400(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x8215803c
	if (!ctx.cr0.eq) goto loc_8215803C;
	// addic. r26,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// addi r28,r28,8
	ctx.r28.s64 = ctx.r28.s64 + 8;
	// bne 0x8215800c
	if (!ctx.cr0.eq) goto loc_8215800C;
loc_82158060:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82157FD8) {
	__imp__sub_82157FD8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82158068) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x82158070;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x821580e0
	if (!ctx.cr6.gt) goto loc_821580E0;
	// lis r28,-32142
	ctx.r28.s64 = -2106458112;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// lwz r4,25636(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 25636);
loc_8215808C:
	// li r5,8
	ctx.r5.s64 = 8;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x82158098;
	sub_821778D8(ctx, base);
	// lwz r4,25636(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 25636);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,25372(r29)
	PPC_STORE_U32(ctx.r29.u32 + 25372, ctx.r4.u32);
	// bl 0x821778d8
	ctx.lr = 0x821580AC;
	sub_821778D8(ctx, base);
	// li r31,2
	ctx.r31.s64 = 2;
	// lwz r30,25372(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 25372);
loc_821580B4:
	// stw r30,25372(r29)
	PPC_STORE_U32(ctx.r29.u32 + 25372, ctx.r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82152400
	ctx.lr = 0x821580C0;
	sub_82152400(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x821580b4
	if (!ctx.cr0.eq) goto loc_821580B4;
	// bl 0x82177858
	ctx.lr = 0x821580D0;
	sub_82177858(ctx, base);
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,25636(r28)
	PPC_STORE_U32(ctx.r28.u32 + 25636, ctx.r3.u32);
	// bne 0x8215808c
	if (!ctx.cr0.eq) goto loc_8215808C;
loc_821580E0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82158068) {
	__imp__sub_82158068(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821580E8) {
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
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// lwz r11,27400(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27400);
	// lbz r11,176(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 176);
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bne cr6,0x82158134
	if (!ctx.cr6.eq) goto loc_82158134;
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// lwz r11,26680(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26680);
	// stw r11,25568(r10)
	PPC_STORE_U32(ctx.r10.u32 + 25568, ctx.r11.u32);
	// bl 0x82155df0
	ctx.lr = 0x82158120;
	sub_82155DF0(ctx, base);
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
loc_82158134:
	// cmplwi cr6,r11,12
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
	// bne cr6,0x82158174
	if (!ctx.cr6.eq) goto loc_82158174;
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// lwz r11,26680(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26680);
	// stw r11,26240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 26240, ctx.r11.u32);
	// stw r11,28244(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28244, ctx.r11.u32);
	// bl 0x82147188
	ctx.lr = 0x82158158;
	sub_82147188(ctx, base);
	// lwz r3,26240(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26240);
	// bl 0x82177670
	ctx.lr = 0x82158160;
	sub_82177670(ctx, base);
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
loc_82158174:
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// bne cr6,0x821581a4
	if (!ctx.cr6.eq) goto loc_821581A4;
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// lwz r11,26680(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26680);
	// stw r11,28244(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28244, ctx.r11.u32);
	// bl 0x82147188
	ctx.lr = 0x82158190;
	sub_82147188(ctx, base);
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
loc_821581A4:
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// beq cr6,0x821581c8
	if (ctx.cr6.eq) goto loc_821581C8;
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// beq cr6,0x821581c8
	if (ctx.cr6.eq) goto loc_821581C8;
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// lwz r11,26680(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26680);
	// stw r11,25372(r10)
	PPC_STORE_U32(ctx.r10.u32 + 25372, ctx.r11.u32);
	// bl 0x82152400
	ctx.lr = 0x821581C8;
	sub_82152400(ctx, base);
loc_821581C8:
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

PPC_WEAK_FUNC(sub_821580E8) {
	__imp__sub_821580E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821581DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821581DC) {
	__imp__sub_821581DC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821581E0) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821581E0) {
	__imp__sub_821581E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821581E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x821581F0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// rlwinm r5,r4,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,26680(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26680);
	// bl 0x821778d8
	ctx.lr = 0x82158208;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lwz r30,26680(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26680);
	// ble cr6,0x8215822c
	if (!ctx.cr6.gt) goto loc_8215822C;
loc_82158214:
	// stw r30,26680(r29)
	PPC_STORE_U32(ctx.r29.u32 + 26680, ctx.r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821580e8
	ctx.lr = 0x82158220;
	sub_821580E8(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x82158214
	if (!ctx.cr0.eq) goto loc_82158214;
loc_8215822C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821581E8) {
	__imp__sub_821581E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82158234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82158234) {
	__imp__sub_82158234(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82158238) {
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
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x82158274
	if (!ctx.cr6.gt) goto loc_82158274;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
loc_8215825C:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821580e8
	ctx.lr = 0x82158264;
	sub_821580E8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x82158268;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stw r3,26680(r30)
	PPC_STORE_U32(ctx.r30.u32 + 26680, ctx.r3.u32);
	// bne 0x8215825c
	if (!ctx.cr0.eq) goto loc_8215825C;
loc_82158274:
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

PPC_WEAK_FUNC(sub_82158238) {
	__imp__sub_82158238(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215828C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8215828C) {
	__imp__sub_8215828C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82158290) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r5,24
	ctx.r5.s64 = 24;
	// lwz r4,27244(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27244);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82158290) {
	__imp__sub_82158290(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821582A0) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821582A0) {
	__imp__sub_821582A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821582A8) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// add r9,r4,r11
	ctx.r9.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r5,r9,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r4,27244(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 27244);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821582A8) {
	__imp__sub_821582A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821582C0) {
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
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x82158308
	if (!ctx.cr6.gt) goto loc_82158308;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,27244(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 27244);
loc_821582E8:
	// li r5,24
	ctx.r5.s64 = 24;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x821582F4;
	sub_821778D8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x821582F8;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,27244(r30)
	PPC_STORE_U32(ctx.r30.u32 + 27244, ctx.r3.u32);
	// bne 0x821582e8
	if (!ctx.cr0.eq) goto loc_821582E8;
loc_82158308:
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

PPC_WEAK_FUNC(sub_821582C0) {
	__imp__sub_821582C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82158320) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r5,48
	ctx.r5.s64 = 48;
	// lwz r4,28564(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28564);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82158320) {
	__imp__sub_82158320(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82158330) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82158330) {
	__imp__sub_82158330(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82158338) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// add r9,r4,r11
	ctx.r9.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r5,r9,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r4,28564(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28564);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82158338) {
	__imp__sub_82158338(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82158350) {
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
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x82158398
	if (!ctx.cr6.gt) goto loc_82158398;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,28564(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28564);
loc_82158378:
	// li r5,48
	ctx.r5.s64 = 48;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x82158384;
	sub_821778D8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x82158388;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,28564(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28564, ctx.r3.u32);
	// bne 0x82158378
	if (!ctx.cr0.eq) goto loc_82158378;
loc_82158398:
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

PPC_WEAK_FUNC(sub_82158350) {
	__imp__sub_82158350(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821583B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r5,24
	ctx.r5.s64 = 24;
	// lwz r4,26912(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26912);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821583B0) {
	__imp__sub_821583B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821583C0) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821583C0) {
	__imp__sub_821583C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821583C8) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// add r9,r4,r11
	ctx.r9.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r5,r9,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r4,26912(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26912);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821583C8) {
	__imp__sub_821583C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821583E0) {
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
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x82158428
	if (!ctx.cr6.gt) goto loc_82158428;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,26912(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26912);
loc_82158408:
	// li r5,24
	ctx.r5.s64 = 24;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x82158414;
	sub_821778D8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x82158418;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,26912(r30)
	PPC_STORE_U32(ctx.r30.u32 + 26912, ctx.r3.u32);
	// bne 0x82158408
	if (!ctx.cr0.eq) goto loc_82158408;
loc_82158428:
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

PPC_WEAK_FUNC(sub_821583E0) {
	__imp__sub_821583E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82158440) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r5,48
	ctx.r5.s64 = 48;
	// lwz r4,28088(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28088);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82158440) {
	__imp__sub_82158440(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82158450) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82158450) {
	__imp__sub_82158450(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82158458) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// add r9,r4,r11
	ctx.r9.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r5,r9,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r4,28088(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28088);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82158458) {
	__imp__sub_82158458(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82158470) {
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
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x821584b8
	if (!ctx.cr6.gt) goto loc_821584B8;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,28088(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28088);
loc_82158498:
	// li r5,48
	ctx.r5.s64 = 48;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x821584A4;
	sub_821778D8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x821584A8;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,28088(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28088, ctx.r3.u32);
	// bne 0x82158498
	if (!ctx.cr0.eq) goto loc_82158498;
loc_821584B8:
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

PPC_WEAK_FUNC(sub_82158470) {
	__imp__sub_82158470(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821584D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r5,96
	ctx.r5.s64 = 96;
	// lwz r4,28472(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28472);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821584D0) {
	__imp__sub_821584D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821584E0) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821584E0) {
	__imp__sub_821584E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821584E8) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// add r9,r4,r11
	ctx.r9.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r5,r9,5,0,26
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// lwz r4,28472(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28472);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821584E8) {
	__imp__sub_821584E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82158500) {
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
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x82158548
	if (!ctx.cr6.gt) goto loc_82158548;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,28472(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28472);
loc_82158528:
	// li r5,96
	ctx.r5.s64 = 96;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x82158534;
	sub_821778D8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x82158538;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,28472(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28472, ctx.r3.u32);
	// bne 0x82158528
	if (!ctx.cr0.eq) goto loc_82158528;
loc_82158548:
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

PPC_WEAK_FUNC(sub_82158500) {
	__imp__sub_82158500(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82158560) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r5,8
	ctx.r5.s64 = 8;
	// lwz r4,25832(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25832);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82158560) {
	__imp__sub_82158560(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82158570) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82158570) {
	__imp__sub_82158570(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82158578) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// rlwinm r5,r4,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r4,25832(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25832);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82158578) {
	__imp__sub_82158578(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82158588) {
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
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x821585d0
	if (!ctx.cr6.gt) goto loc_821585D0;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,25832(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 25832);
loc_821585B0:
	// li r5,8
	ctx.r5.s64 = 8;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x821585BC;
	sub_821778D8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x821585C0;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,25832(r30)
	PPC_STORE_U32(ctx.r30.u32 + 25832, ctx.r3.u32);
	// bne 0x821585b0
	if (!ctx.cr0.eq) goto loc_821585B0;
loc_821585D0:
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

PPC_WEAK_FUNC(sub_82158588) {
	__imp__sub_82158588(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821585E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r5,8
	ctx.r5.s64 = 8;
	// lwz r4,28264(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28264);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821585E8) {
	__imp__sub_821585E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821585F8) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821585F8) {
	__imp__sub_821585F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82158600) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// rlwinm r5,r4,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r4,28264(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28264);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82158600) {
	__imp__sub_82158600(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82158610) {
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
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x82158658
	if (!ctx.cr6.gt) goto loc_82158658;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,28264(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28264);
loc_82158638:
	// li r5,8
	ctx.r5.s64 = 8;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x82158644;
	sub_821778D8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x82158648;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,28264(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28264, ctx.r3.u32);
	// bne 0x82158638
	if (!ctx.cr0.eq) goto loc_82158638;
loc_82158658:
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

PPC_WEAK_FUNC(sub_82158610) {
	__imp__sub_82158610(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82158670) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r5,8
	ctx.r5.s64 = 8;
	// lwz r4,27812(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27812);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82158670) {
	__imp__sub_82158670(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82158680) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82158680) {
	__imp__sub_82158680(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82158688) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// rlwinm r5,r4,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r4,27812(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27812);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82158688) {
	__imp__sub_82158688(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82158698) {
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
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x821586e0
	if (!ctx.cr6.gt) goto loc_821586E0;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,27812(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 27812);
loc_821586C0:
	// li r5,8
	ctx.r5.s64 = 8;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x821586CC;
	sub_821778D8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x821586D0;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,27812(r30)
	PPC_STORE_U32(ctx.r30.u32 + 27812, ctx.r3.u32);
	// bne 0x821586c0
	if (!ctx.cr0.eq) goto loc_821586C0;
loc_821586E0:
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

PPC_WEAK_FUNC(sub_82158698) {
	__imp__sub_82158698(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821586F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// li r9,252
	ctx.r9.s64 = 252;
	// lwz r11,26696(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26696);
	// lwz r10,27400(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 27400);
	// lwz r8,28(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// subf r6,r8,r10
	ctx.r6.s64 = ctx.r10.s64 - ctx.r8.s64;
	// divw r5,r6,r9
	ctx.r5.s32 = ctx.r6.s32 / ctx.r9.s32;
	// cmpw cr6,r5,r7
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x82158748
	if (!ctx.cr6.lt) goto loc_82158748;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// li r5,8
	ctx.r5.s64 = 8;
	// lwz r4,26676(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26676);
	// stw r4,28264(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28264, ctx.r4.u32);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
loc_82158748:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// li r5,8
	ctx.r5.s64 = 8;
	// lwz r4,26676(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26676);
	// stw r4,27812(r10)
	PPC_STORE_U32(ctx.r10.u32 + 27812, ctx.r4.u32);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821586F8) {
	__imp__sub_821586F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82158768) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82158768) {
	__imp__sub_82158768(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8215876C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8215876C) {
	__imp__sub_8215876C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82158770) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82158770) {
	__imp__sub_82158770(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82158778) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// rlwinm r5,r4,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r4,26676(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26676);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82158778) {
	__imp__sub_82158778(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82158788) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x82158790;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x82158808
	if (!ctx.cr6.gt) goto loc_82158808;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// li r28,252
	ctx.r28.s64 = 252;
	// lis r25,-32142
	ctx.r25.s64 = -2106458112;
	// lis r26,-32142
	ctx.r26.s64 = -2106458112;
	// lwz r4,26676(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 26676);
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
loc_821587BC:
	// lwz r11,26696(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26696);
	// li r5,8
	ctx.r5.s64 = 8;
	// lwz r10,27400(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 27400);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,28(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// subf r7,r9,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r9.s64;
	// divw r6,r7,r28
	ctx.r6.s32 = ctx.r7.s32 / ctx.r28.s32;
	// cmpw cr6,r6,r8
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x821587ec
	if (!ctx.cr6.lt) goto loc_821587EC;
	// stw r4,28264(r26)
	PPC_STORE_U32(ctx.r26.u32 + 28264, ctx.r4.u32);
	// b 0x821587f0
	goto loc_821587F0;
loc_821587EC:
	// stw r4,27812(r25)
	PPC_STORE_U32(ctx.r25.u32 + 27812, ctx.r4.u32);
loc_821587F0:
	// bl 0x821778d8
	ctx.lr = 0x821587F4;
	sub_821778D8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x821587F8;
	sub_82177858(ctx, base);
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,26676(r29)
	PPC_STORE_U32(ctx.r29.u32 + 26676, ctx.r3.u32);
	// bne 0x821587bc
	if (!ctx.cr0.eq) goto loc_821587BC;
loc_82158808:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82158788) {
	__imp__sub_82158788(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82158810) {
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
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// lwz r11,27400(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 27400);
	// lbz r10,176(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 176);
	// cmplwi cr6,r10,11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 11, ctx.xer);
	// bne cr6,0x82158880
	if (!ctx.cr6.eq) goto loc_82158880;
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// lwz r11,25172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25172);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821588e8
	if (ctx.cr6.eq) goto loc_821588E8;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x82158854;
	sub_82177868(ctx, base);
	// lwz r11,25172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25172);
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,25172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25172);
	// lwz r10,27400(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 27400);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,25636(r9)
	PPC_STORE_U32(ctx.r9.u32 + 25636, ctx.r11.u32);
	// lbz r4,177(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 177);
	// bl 0x82157fd8
	ctx.lr = 0x8215887C;
	sub_82157FD8(ctx, base);
	// b 0x821588e8
	goto loc_821588E8;
loc_82158880:
	// lbz r11,177(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 177);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bgt cr6,0x821588a4
	if (ctx.cr6.gt) goto loc_821588A4;
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// lwz r11,25172(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25172);
	// stw r11,26680(r10)
	PPC_STORE_U32(ctx.r10.u32 + 26680, ctx.r11.u32);
	// bl 0x821580e8
	ctx.lr = 0x821588A0;
	sub_821580E8(ctx, base);
	// b 0x821588e8
	goto loc_821588E8;
loc_821588A4:
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// lwz r11,25172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25172);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821588e8
	if (ctx.cr6.eq) goto loc_821588E8;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x821588C0;
	sub_82177868(ctx, base);
	// lwz r11,25172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25172);
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,25172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 25172);
	// lwz r10,27400(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 27400);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,26680(r9)
	PPC_STORE_U32(ctx.r9.u32 + 26680, ctx.r11.u32);
	// lbz r4,177(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 177);
	// bl 0x821581e8
	ctx.lr = 0x821588E8;
	sub_821581E8(ctx, base);
loc_821588E8:
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

PPC_WEAK_FUNC(sub_82158810) {
	__imp__sub_82158810(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82158900) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82158900) {
	__imp__sub_82158900(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82158908) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82158910;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// rlwinm r5,r4,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,25172(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 25172);
	// bl 0x821778d8
	ctx.lr = 0x82158928;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lwz r30,25172(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 25172);
	// ble cr6,0x8215894c
	if (!ctx.cr6.gt) goto loc_8215894C;
loc_82158934:
	// stw r30,25172(r29)
	PPC_STORE_U32(ctx.r29.u32 + 25172, ctx.r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82158810
	ctx.lr = 0x82158940;
	sub_82158810(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x82158934
	if (!ctx.cr0.eq) goto loc_82158934;
loc_8215894C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82158908) {
	__imp__sub_82158908(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82158954) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82158954) {
	__imp__sub_82158954(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82158958) {
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
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x82158994
	if (!ctx.cr6.gt) goto loc_82158994;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
loc_8215897C:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82158810
	ctx.lr = 0x82158984;
	sub_82158810(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x82158988;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stw r3,25172(r30)
	PPC_STORE_U32(ctx.r30.u32 + 25172, ctx.r3.u32);
	// bne 0x8215897c
	if (!ctx.cr0.eq) goto loc_8215897C;
loc_82158994:
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

PPC_WEAK_FUNC(sub_82158958) {
	__imp__sub_82158958(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821589AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821589AC) {
	__imp__sub_821589AC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821589B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r5,20
	ctx.r5.s64 = 20;
	// lwz r4,26280(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26280);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821589B0) {
	__imp__sub_821589B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821589C0) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821589C0) {
	__imp__sub_821589C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821589C8) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// add r9,r4,r11
	ctx.r9.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,26280(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 26280);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821589C8) {
	__imp__sub_821589C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821589E0) {
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
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x82158a28
	if (!ctx.cr6.gt) goto loc_82158A28;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,26280(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26280);
loc_82158A08:
	// li r5,20
	ctx.r5.s64 = 20;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x82158A14;
	sub_821778D8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x82158A18;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,26280(r30)
	PPC_STORE_U32(ctx.r30.u32 + 26280, ctx.r3.u32);
	// bne 0x82158a08
	if (!ctx.cr0.eq) goto loc_82158A08;
loc_82158A28:
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

PPC_WEAK_FUNC(sub_821589E0) {
	__imp__sub_821589E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82158A40) {
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
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// li r5,36
	ctx.r5.s64 = 36;
	// lwz r4,28196(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28196);
	// bl 0x821778d8
	ctx.lr = 0x82158A60;
	sub_821778D8(ctx, base);
	// lwz r11,28196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28196);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82158ab0
	if (ctx.cr6.eq) goto loc_82158AB0;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x82158A78;
	sub_82177868(ctx, base);
	// lwz r11,28196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28196);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// lwz r11,28196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28196);
	// lwz r4,24(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// stw r4,26280(r9)
	PPC_STORE_U32(ctx.r9.u32 + 26280, ctx.r4.u32);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r5,r8,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x821778d8
	ctx.lr = 0x82158AAC;
	sub_821778D8(ctx, base);
	// lwz r11,28196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28196);
loc_82158AB0:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82158af0
	if (ctx.cr6.eq) goto loc_82158AF0;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82177868
	ctx.lr = 0x82158AC4;
	sub_82177868(ctx, base);
	// lwz r11,28196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28196);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r9,-32142
	ctx.r9.s64 = -2106458112;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// lwz r11,28196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28196);
	// lwz r4,32(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// stw r4,25460(r9)
	PPC_STORE_U32(ctx.r9.u32 + 25460, ctx.r4.u32);
	// lwz r8,28(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// rlwinm r5,r8,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x821778d8
	ctx.lr = 0x82158AF0;
	sub_821778D8(ctx, base);
loc_82158AF0:
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

PPC_WEAK_FUNC(sub_82158A40) {
	__imp__sub_82158A40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82158B04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82158B04) {
	__imp__sub_82158B04(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82158B08) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82158B08) {
	__imp__sub_82158B08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82158B10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82158B18;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,28196(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28196);
	// bl 0x821778d8
	ctx.lr = 0x82158B38;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lwz r30,28196(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28196);
	// ble cr6,0x82158b5c
	if (!ctx.cr6.gt) goto loc_82158B5C;
loc_82158B44:
	// stw r30,28196(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28196, ctx.r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82158a40
	ctx.lr = 0x82158B50;
	sub_82158A40(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,36
	ctx.r30.s64 = ctx.r30.s64 + 36;
	// bne 0x82158b44
	if (!ctx.cr0.eq) goto loc_82158B44;
loc_82158B5C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82158B10) {
	__imp__sub_82158B10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82158B64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82158B64) {
	__imp__sub_82158B64(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82158B68) {
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
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x82158ba4
	if (!ctx.cr6.gt) goto loc_82158BA4;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
loc_82158B8C:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82158a40
	ctx.lr = 0x82158B94;
	sub_82158A40(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x82158B98;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stw r3,28196(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28196, ctx.r3.u32);
	// bne 0x82158b8c
	if (!ctx.cr0.eq) goto loc_82158B8C;
loc_82158BA4:
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

PPC_WEAK_FUNC(sub_82158B68) {
	__imp__sub_82158B68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82158BBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82158BBC) {
	__imp__sub_82158BBC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82158BC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// li r5,52
	ctx.r5.s64 = 52;
	// lwz r4,26300(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26300);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82158BC0) {
	__imp__sub_82158BC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82158BD0) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82158BD0) {
	__imp__sub_82158BD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82158BD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// mulli r5,r4,52
	ctx.r5.s64 = ctx.r4.s64 * 52;
	// lwz r4,26300(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26300);
	// b 0x821778d8
	sub_821778D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82158BD8) {
	__imp__sub_82158BD8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82158BE8) {
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
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x82158c30
	if (!ctx.cr6.gt) goto loc_82158C30;
	// lis r30,-32142
	ctx.r30.s64 = -2106458112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,26300(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 26300);
loc_82158C10:
	// li r5,52
	ctx.r5.s64 = 52;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x82158C1C;
	sub_821778D8(ctx, base);
	// bl 0x82177858
	ctx.lr = 0x82158C20;
	sub_82177858(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,26300(r30)
	PPC_STORE_U32(ctx.r30.u32 + 26300, ctx.r3.u32);
	// bne 0x82158c10
	if (!ctx.cr0.eq) goto loc_82158C10;
loc_82158C30:
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

PPC_WEAK_FUNC(sub_82158BE8) {
	__imp__sub_82158BE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82158C48) {
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
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// lis r31,-32142
	ctx.r31.s64 = -2106458112;
	// lwz r11,27400(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27400);
	// lbz r11,176(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 176);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x82158cbc
	if (!ctx.cr6.eq) goto loc_82158CBC;
	// lwz r11,28216(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28216);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82158d30
	if (ctx.cr6.eq) goto loc_82158D30;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x82158C88;
	sub_82177868(ctx, base);
	// lwz r11,28216(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28216);
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,28216(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28216);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,28196(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28196, ctx.r11.u32);
	// bl 0x82158a40
	ctx.lr = 0x82158CA8;
	sub_82158A40(ctx, base);
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
loc_82158CBC:
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// lwz r11,28216(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28216);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bne cr6,0x82158cfc
	if (!ctx.cr6.eq) goto loc_82158CFC;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82158d30
	if (ctx.cr6.eq) goto loc_82158D30;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82177868
	ctx.lr = 0x82158CDC;
	sub_82177868(ctx, base);
	// lwz r11,28216(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28216);
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// li r5,52
	ctx.r5.s64 = 52;
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// lwz r11,28216(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28216);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r4,26300(r10)
	PPC_STORE_U32(ctx.r10.u32 + 26300, ctx.r4.u32);
	// b 0x82158d28
	goto loc_82158D28;
loc_82158CFC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82158d30
	if (ctx.cr6.eq) goto loc_82158D30;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82177868
	ctx.lr = 0x82158D0C;
	sub_82177868(ctx, base);
	// lwz r11,28216(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28216);
	// lis r10,-32142
	ctx.r10.s64 = -2106458112;
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// lwz r11,28216(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28216);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r4,27860(r10)
	PPC_STORE_U32(ctx.r10.u32 + 27860, ctx.r4.u32);
loc_82158D28:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821778d8
	ctx.lr = 0x82158D30;
	sub_821778D8(ctx, base);
loc_82158D30:
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

PPC_WEAK_FUNC(sub_82158C48) {
	__imp__sub_82158C48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82158D44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82158D44) {
	__imp__sub_82158D44(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82158D48) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82177868
	sub_82177868(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82158D48) {
	__imp__sub_82158D48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82158D50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82158D58;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-32142
	ctx.r29.s64 = -2106458112;
	// rlwinm r5,r4,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,28216(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28216);
	// bl 0x821778d8
	ctx.lr = 0x82158D70;
	sub_821778D8(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lwz r30,28216(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28216);
	// ble cr6,0x82158d94
	if (!ctx.cr6.gt) goto loc_82158D94;
loc_82158D7C:
	// stw r30,28216(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28216, ctx.r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82158c48
	ctx.lr = 0x82158D88;
	sub_82158C48(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x82158d7c
	if (!ctx.cr0.eq) goto loc_82158D7C;
loc_82158D94:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82158D50) {
	__imp__sub_82158D50(ctx, base);
}

